/*
==============
UsableEntity_IsTouching
==============
*/

bool __fastcall UsableEntity_IsTouching(const gentity_s *const ent, const Bounds *bounds)
{
  return ?UsableEntity_IsTouching@@YA_NQEBUgentity_s@@PEBUBounds@@@Z(ent, bounds);
}

/*
==============
UsableWorld_GetLargeRadiusList
==============
*/

const ntl::fixed_vector<unsigned int,2048,0> *__fastcall UsableWorld_GetLargeRadiusList()
{
  return ?UsableWorld_GetLargeRadiusList@@YAAEBV?$fixed_vector@I$0IAA@$0A@@ntl@@XZ();
}

/*
==============
UsableRef_IsTouching
==============
*/

bool __fastcall UsableRef_IsTouching(const UsableRef *ref, const Bounds *bounds)
{
  return ?UsableRef_IsTouching@@YA_NAEBUUsableRef@@PEBUBounds@@@Z(ref, bounds);
}

/*
==============
UsableRef_CanThrowback
==============
*/

bool __fastcall UsableRef_CanThrowback(const UsableRef *ref)
{
  return ?UsableRef_CanThrowback@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_SetCursorHintFlagFromClientHintFlags
==============
*/

void __fastcall UsableRef_SetCursorHintFlagFromClientHintFlags(ClientHintFlags itemFlags, ClientHintFlags flagTest, CursorHintFlags flagSet, __int16 *outCursorHints)
{
  ?UsableRef_SetCursorHintFlagFromClientHintFlags@@YAXW4ClientHintFlags@@0W4CursorHintFlags@@AEAF@Z(itemFlags, flagTest, flagSet, outCursorHints);
}

/*
==============
UsableWorld_Write
==============
*/

void __fastcall UsableWorld_Write(MemoryFile *memFile)
{
  ?UsableWorld_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
UsableRef_GetHintPriority
==============
*/

unsigned int __fastcall UsableRef_GetHintPriority(const UsableRef *ref)
{
  return ?UsableRef_GetHintPriority@@YAIAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_DebugDraw
==============
*/

void __fastcall UsableRef_DebugDraw(int clientNum, const UsableRef *ref, const bool directLookOuter, const bool directLookInner, PlayerUseDebugMessage message)
{
  ?UsableRef_DebugDraw@@YAXHAEBUUsableRef@@_N1W4PlayerUseDebugMessage@@@Z(clientNum, ref, directLookOuter, directLookInner, message);
}

/*
==============
UsableRef_IsLookAtNeeded
==============
*/

bool __fastcall UsableRef_IsLookAtNeeded(const UsableRef *ref)
{
  return ?UsableRef_IsLookAtNeeded@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_IsInUse
==============
*/

bool __fastcall UsableRef_IsInUse(const UsableRef *ref)
{
  return ?UsableRef_IsInUse@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableWorld_Init
==============
*/

void UsableWorld_Init(void)
{
  ?UsableWorld_Init@@YAXXZ();
}

/*
==============
UsableRef_GetCursorHintRange
==============
*/

HintRange __fastcall UsableRef_GetCursorHintRange(const ClientHintFlags flags, int clientNum)
{
  return ?UsableRef_GetCursorHintRange@@YA?AW4HintRange@@W4ClientHintFlags@@H@Z(flags, clientNum);
}

/*
==============
UsableRef_IsLookingAt
==============
*/

bool __fastcall UsableRef_IsLookingAt(const UsableRef *ref, const vec3_t *viewOrigin, const vec3_t *viewForward)
{
  return ?UsableRef_IsLookingAt@@YA_NAEBUUsableRef@@AEBTvec3_t@@1@Z(ref, viewOrigin, viewForward);
}

/*
==============
UsableRef_GetUseDistDotPos
==============
*/

void __fastcall UsableRef_GetUseDistDotPos(const UsableRef *ref, vec3_t *outUsePos)
{
  ?UsableRef_GetUseDistDotPos@@YAXAEBUUsableRef@@AEATvec3_t@@@Z(ref, outUsePos);
}

/*
==============
UsableRef_GetCursorHintParms
==============
*/

void __fastcall UsableRef_GetCursorHintParms(const UsableRef *ref, playerState_s *ps)
{
  ?UsableRef_GetCursorHintParms@@YAXAEBUUsableRef@@PEAUplayerState_s@@@Z(ref, ps);
}

/*
==============
UsableWorld_CountEntities
==============
*/

unsigned int __fastcall UsableWorld_CountEntities()
{
  return ?UsableWorld_CountEntities@@YAIXZ();
}

/*
==============
UsableRef_IsLiveGrenade
==============
*/

bool __fastcall UsableRef_IsLiveGrenade(const UsableRef *ref)
{
  return ?UsableRef_IsLiveGrenade@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_GetUseScoreAndPriority
==============
*/

bool __fastcall UsableRef_GetUseScoreAndPriority(const UsableRef *ref, float *outScore, int *outPriority, float dot, const bool isUnderDirectLookOuter, const bool isUnderDirectLookInner, const bool isWithinUseRange, const playerState_s *ps)
{
  return ?UsableRef_GetUseScoreAndPriority@@YA_NAEBUUsableRef@@AEAMAEAHM_N33PEBUplayerState_s@@@Z(ref, outScore, outPriority, dot, isUnderDirectLookOuter, isUnderDirectLookInner, isWithinUseRange, ps);
}

/*
==============
UsableWorld_UpdateOrigin
==============
*/

void __fastcall UsableWorld_UpdateOrigin(const UsableRef *ref, const vec3_t *origin)
{
  ?UsableWorld_UpdateOrigin@@YAXAEBUUsableRef@@AEBTvec3_t@@@Z(ref, origin);
}

/*
==============
UsableEntity_GetUseRadius
==============
*/

void __fastcall UsableEntity_GetUseRadius(const gentity_s *const ent, float *outUseRadius)
{
  ?UsableEntity_GetUseRadius@@YAXQEBUgentity_s@@AEAM@Z(ent, outUseRadius);
}

/*
==============
UsableRef_GetCursorHintString
==============
*/

unsigned int __fastcall UsableRef_GetCursorHintString(const UsableRef *ref, gentity_s *player)
{
  return ?UsableRef_GetCursorHintString@@YAIAEBUUsableRef@@PEAUgentity_s@@@Z(ref, player);
}

/*
==============
UsableEntity_GetUseDisplayRadius
==============
*/

void __fastcall UsableEntity_GetUseDisplayRadius(const gentity_s *const ent, const float useRadius, float *outDisplayRadius)
{
  ?UsableEntity_GetUseDisplayRadius@@YAXQEBUgentity_s@@MAEAM@Z(ent, useRadius, outDisplayRadius);
}

/*
==============
UsableRef_ShouldHideOnObstruction
==============
*/

bool __fastcall UsableRef_ShouldHideOnObstruction(const UsableRef *ref)
{
  return ?UsableRef_ShouldHideOnObstruction@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableWorld_Add
==============
*/

bool __fastcall UsableWorld_Add(const UsableRef *ref)
{
  return ?UsableWorld_Add@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_IsTraceNeeded
==============
*/

bool __fastcall UsableRef_IsTraceNeeded(const UsableRef *ref)
{
  return ?UsableRef_IsTraceNeeded@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_GetCursorHintTag
==============
*/

unsigned __int16 __fastcall UsableRef_GetCursorHintTag(const UsableRef *ref)
{
  return ?UsableRef_GetCursorHintTag@@YAGAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_GetCursorHintBinding
==============
*/

unsigned __int16 __fastcall UsableRef_GetCursorHintBinding(const UsableRef *ref)
{
  return ?UsableRef_GetCursorHintBinding@@YAGAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableList_Add
==============
*/

UsableListItem *__fastcall UsableList_Add(UsableList *list, const UsableRef *ref, float score, int priority, bool inDisplayDistance, bool inDisplayFov, bool ignored)
{
  return ?UsableList_Add@@YAPEAUUsableListItem@@PEAUUsableList@@AEBUUsableRef@@MH_N22@Z(list, ref, score, priority, inDisplayDistance, inDisplayFov, ignored);
}

/*
==============
UsableRef_GetRadiusFov
==============
*/

void __fastcall UsableRef_GetRadiusFov(const UsableRef *ref, float *outUseRadius, float *outUseFOV, float *outFaceFOV, float *outDisplayRadius, float *outDisplayFOV, bool *outUse2DFOV)
{
  ?UsableRef_GetRadiusFov@@YAXAEBUUsableRef@@AEAM1111AEA_N@Z(ref, outUseRadius, outUseFOV, outFaceFOV, outDisplayRadius, outDisplayFOV, outUse2DFOV);
}

/*
==============
UsableList_Init
==============
*/

void __fastcall UsableList_Init(UsableList *list)
{
  ?UsableList_Init@@YAXPEAUUsableList@@@Z(list);
}

/*
==============
UsableRef_IsOwnedBy
==============
*/

bool __fastcall UsableRef_IsOwnedBy(const UsableRef *ref, const gentity_s *player)
{
  return ?UsableRef_IsOwnedBy@@YA_NAEBUUsableRef@@PEBUgentity_s@@@Z(ref, player);
}

/*
==============
UsableRef_GetCursorHintPart
==============
*/

unsigned __int8 __fastcall UsableRef_GetCursorHintPart(const UsableRef *ref)
{
  return ?UsableRef_GetCursorHintPart@@YAEAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableList_Sort
==============
*/

void __fastcall UsableList_Sort(UsableList *list)
{
  ?UsableList_Sort@@YAXPEAUUsableList@@@Z(list);
}

/*
==============
UsableRef_GetCursorHintClass
==============
*/

UsableClass __fastcall UsableRef_GetCursorHintClass(const UsableRef *ref)
{
  return ?UsableRef_GetCursorHintClass@@YA?AW4UsableClass@@AEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_IsPriorityOverLook
==============
*/

bool __fastcall UsableRef_IsPriorityOverLook(const UsableRef *ref)
{
  return ?UsableRef_IsPriorityOverLook@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_GetEntity
==============
*/

gentity_s *__fastcall UsableRef_GetEntity(const UsableRef *ref)
{
  return ?UsableRef_GetEntity@@YAPEAUgentity_s@@AEBUUsableRef@@@Z(ref);
}

/*
==============
UsableEntity_GetUseDistDotPos
==============
*/

void __fastcall UsableEntity_GetUseDistDotPos(const gentity_s *const ent, vec3_t *outUsePos)
{
  ?UsableEntity_GetUseDistDotPos@@YAXQEBUgentity_s@@AEATvec3_t@@@Z(ent, outUsePos);
}

/*
==============
UsableRef_GetUseTracePos
==============
*/

void __fastcall UsableRef_GetUseTracePos(const UsableRef *ref, vec3_t *outUsePos)
{
  ?UsableRef_GetUseTracePos@@YAXAEBUUsableRef@@AEATvec3_t@@@Z(ref, outUsePos);
}

/*
==============
UsableScriptableStatePartDef_GetRadiusFov
==============
*/

void __fastcall UsableScriptableStatePartDef_GetRadiusFov(const ScriptableStateUsableDef *const stateUsableDef, float *outUseRadius, float *outUseFOV, float *outFaceFOV, float *outDisplayRadius, float *outDisplayFOV, bool *outUse2DFOV)
{
  ?UsableScriptableStatePartDef_GetRadiusFov@@YAXQEBUScriptableStateUsableDef@@AEAM1111AEA_N@Z(stateUsableDef, outUseRadius, outUseFOV, outFaceFOV, outDisplayRadius, outDisplayFOV, outUse2DFOV);
}

/*
==============
UsableRef_GetEntityCursorHintHoldDuration
==============
*/

HintHoldDuration __fastcall UsableRef_GetEntityCursorHintHoldDuration(const UsableRef *ref, gentity_s *player)
{
  return ?UsableRef_GetEntityCursorHintHoldDuration@@YA?AW4HintHoldDuration@@AEBUUsableRef@@PEAUgentity_s@@@Z(ref, player);
}

/*
==============
UsableEntity_GetRadiusFov
==============
*/

void __fastcall UsableEntity_GetRadiusFov(const gentity_s *const ent, float *outUseRadius, float *outUseFOV, float *outDisplayRadius, float *outDisplayFOV)
{
  ?UsableEntity_GetRadiusFov@@YAXQEBUgentity_s@@AEAM111@Z(ent, outUseRadius, outUseFOV, outDisplayRadius, outDisplayFOV);
}

/*
==============
UsableWorld_Remove
==============
*/

bool __fastcall UsableWorld_Remove(const UsableRef *ref)
{
  return ?UsableWorld_Remove@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableWorld_SetScriptableUseForClient
==============
*/

void __fastcall UsableWorld_SetScriptableUseForClient(const UsableRef *ref, bool usable, const unsigned int clientNum)
{
  ?UsableWorld_SetScriptableUseForClient@@YAXAEBUUsableRef@@_NI@Z(ref, usable, clientNum);
}

/*
==============
UsableWorld_DebugDrawAll
==============
*/

void UsableWorld_DebugDrawAll(void)
{
  ?UsableWorld_DebugDrawAll@@YAXXZ();
}

/*
==============
UsableEntity_IsUsableBy
==============
*/

bool __fastcall UsableEntity_IsUsableBy(const gentity_s *ent, const gentity_s *player, int prevHintEntIndex)
{
  return ?UsableEntity_IsUsableBy@@YA_NPEBUgentity_s@@0H@Z(ent, player, prevHintEntIndex);
}

/*
==============
UsableWorld_SetScriptableUseForClientMask
==============
*/

void __fastcall UsableWorld_SetScriptableUseForClientMask(const UsableRef *ref, bool usable, const ClientBits *newClientMask)
{
  ?UsableWorld_SetScriptableUseForClientMask@@YAXAEBUUsableRef@@_NAEBUClientBits@@@Z(ref, usable, newClientMask);
}

/*
==============
UsableRef_IsTouchNeeded
==============
*/

bool __fastcall UsableRef_IsTouchNeeded(const UsableRef *ref)
{
  return ?UsableRef_IsTouchNeeded@@YA_NAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableRef_GetDisplayRadius
==============
*/

double __fastcall UsableRef_GetDisplayRadius(const UsableRef *ref)
{
  double result; 

  *(float *)&result = ?UsableRef_GetDisplayRadius@@YAMAEBUUsableRef@@@Z(ref);
  return result;
}

/*
==============
UsableRef_GetUseRadius
==============
*/

double __fastcall UsableRef_GetUseRadius(const UsableRef *ref)
{
  double result; 

  *(float *)&result = ?UsableRef_GetUseRadius@@YAMAEBUUsableRef@@@Z(ref);
  return result;
}

/*
==============
UsableWorld_Allocate
==============
*/

void __fastcall UsableWorld_Allocate(HunkUser *hunkUser)
{
  ?UsableWorld_Allocate@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
UsableRef_GetCursorHintType
==============
*/

HintType __fastcall UsableRef_GetCursorHintType(const UsableRef *ref, const playerState_s *ps)
{
  return ?UsableRef_GetCursorHintType@@YA?AW4HintType@@AEBUUsableRef@@PEBUplayerState_s@@@Z(ref, ps);
}

/*
==============
UsableWorld_Read
==============
*/

void __fastcall UsableWorld_Read(SaveGame *save)
{
  ?UsableWorld_Read@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
UsableRef_GetCursorHintEntIndex
==============
*/

unsigned int __fastcall UsableRef_GetCursorHintEntIndex(const UsableRef *ref)
{
  return ?UsableRef_GetCursorHintEntIndex@@YAIAEBUUsableRef@@@Z(ref);
}

/*
==============
UsableWorld_Free
==============
*/

void UsableWorld_Free(void)
{
  ?UsableWorld_Free@@YAXXZ();
}

/*
==============
UsableWorld_CountScriptables
==============
*/

unsigned int __fastcall UsableWorld_CountScriptables()
{
  return ?UsableWorld_CountScriptables@@YAIXZ();
}

/*
==============
UsableWorld_SetUseRadius
==============
*/

bool __fastcall UsableWorld_SetUseRadius(const UsableRef *ref, float useRadius)
{
  return ?UsableWorld_SetUseRadius@@YA_NAEBUUsableRef@@M@Z(ref, useRadius);
}

/*
==============
UsableList_Debug
==============
*/

void __fastcall UsableList_Debug(UsableList *list, int clientNum, int cursorHintEnt, bool isForceUseActive)
{
  ?UsableList_Debug@@YAXPEAUUsableList@@HH_N@Z(list, clientNum, cursorHintEnt, isForceUseActive);
}

/*
==============
UsableRef_SetCursorHintFlagFromEntityHintFlags
==============
*/

void __fastcall UsableRef_SetCursorHintFlagFromEntityHintFlags(const UsableRef *ref, unsigned int flagTest, CursorHintFlags flagSet, __int16 *outCursorHints)
{
  ?UsableRef_SetCursorHintFlagFromEntityHintFlags@@YAXAEBUUsableRef@@IW4CursorHintFlags@@AEAF@Z(ref, flagTest, flagSet, outCursorHints);
}

/*
==============
UsableEntity_GetRadiusFov
==============
*/
void UsableEntity_GetRadiusFov(const gentity_s *const ent, float *outUseRadius, float *outUseFOV, float *outDisplayRadius, float *outDisplayFOV)
{
  char v13; 
  const dvar_t *v14; 
  const char *v15; 

  _RBP = outUseFOV;
  _RBX = outUseRadius;
  _RSI = ent;
  UsableEntity_GetUseRadius(ent, outUseRadius);
  __asm { vmovss  xmm1, dword ptr [rbx]; useRadius }
  UsableEntity_GetUseDisplayRadius(_RSI, *(const float *)&_XMM1, outDisplayRadius);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+270h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v13 )
  {
    if ( _RSI->s.eType == ET_ITEM )
      goto LABEL_11;
    if ( _RSI->s.eType != ET_MISSILE )
    {
      if ( _RSI->s.eType == ET_TURRET )
      {
        v14 = DVARFLT_player_MGUseFOV;
        v15 = "player_MGUseFOV";
      }
      else if ( _RSI->s.eType == ET_VEHICLE )
      {
        v14 = DVARFLT_player_vehicleUseFOV;
        v15 = "player_vehicleUseFOV";
      }
      else
      {
        v14 = DVARFLT_player_useFOV;
        v15 = "player_useFOV";
      }
      goto LABEL_12;
    }
    if ( (_RSI->hint.flags & 0x10) != 0 )
    {
LABEL_11:
      v14 = DCONST_DVARMPFLT_player_itemUseFOV;
      v15 = "player_itemUseFOV";
    }
    else
    {
      v14 = DVARFLT_player_throwbackFOV;
      v15 = "player_throwbackFOV";
    }
LABEL_12:
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v14, v15);
    __asm { vmovaps xmm1, xmm0 }
  }
  _RAX = outDisplayFOV;
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm0, dword ptr [rsi+268h]
    vmaxss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rax], xmm1
  }
}

/*
==============
UsableEntity_GetUseDisplayRadius
==============
*/

void __fastcall UsableEntity_GetUseDisplayRadius(const gentity_s *const ent, double useRadius, float *outDisplayRadius)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outDisplayRadius;
  _RBX = ent;
  __asm { vmovaps xmm6, xmm1 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1479, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+264h]
    vmaxss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
UsableEntity_GetUseDistDotPos
==============
*/
void UsableEntity_GetUseDistDotPos(const gentity_s *const ent, vec3_t *outUsePos)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1535, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( ((ent->hint.tag + 1) & 0xFFFFFEFF) != 0 && Com_GetServerDObjForEnt(ent) )
  {
    G_Utils_DObjGetWorldBoneIndexPos(ent, ent->hint.tag, outUsePos);
  }
  else
  {
    outUsePos->v[0] = ent->r.absBox.midPoint.v[0];
    outUsePos->v[1] = ent->r.absBox.midPoint.v[1];
    outUsePos->v[2] = ent->r.absBox.midPoint.v[2];
  }
}

/*
==============
UsableEntity_GetUseRadius
==============
*/
void UsableEntity_GetUseRadius(const gentity_s *const ent, float *outUseRadius)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+26Ch]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
    vmovss  dword ptr [rdx], xmm1
  }
}

/*
==============
UsableEntity_IsTouching
==============
*/
bool UsableEntity_IsTouching(const gentity_s *const ent, const Bounds *bounds)
{
  bool v5; 
  bool v6; 
  unsigned int Instance; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1419, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1420, ASSERT_TYPE_ASSERT, "( ( bounds != nullptr ) )", "%s\n\t( bounds ) = %p", "( bounds != nullptr )", NULL) )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0) )
    return 0;
  _RDI = &ent->r.absBox;
  if ( ent == (const gentity_s *const)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  v5 = bounds == NULL;
  if ( !bounds )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm1
  }
  if ( !v5 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm2, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+10h]
    vaddss  xmm0, xmm1, dword ptr [rbx+10h]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm0
  }
  if ( !v5 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rdi+14h]
    vaddss  xmm0, xmm1, dword ptr [rbx+14h]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm0
  }
  if ( !v5 )
    return 0;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent);
  return PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, bounds, Instance, ent) != 0;
}

/*
==============
UsableEntity_IsUsableBy
==============
*/
bool UsableEntity_IsUsableBy(const gentity_s *ent, const gentity_s *player, int prevHintEntIndex)
{
  entityType_s eType; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  weapClass_t WeaponClass; 
  const playerState_s *EntityPlayerStateConst; 
  char v22; 
  char v23; 
  const entityState_t **tagInfo; 
  const entityState_t *v37; 
  GUtils *Utils; 
  scr_string_t classname; 
  GUtils *v41; 
  unsigned __int16 v42; 
  DObj *ServerDObjForEnt; 
  DObj *v44; 
  const XModel *v45; 
  GUtils *v46; 

  _RDI = player;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1273, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( _RDI == _RBX )
    return 0;
  eType = _RBX->s.eType;
  if ( eType != ET_ITEM && (_RBX->flags.m_flags[0] & 0x20000000) == 0 )
    return 0;
  if ( eType == ET_MISSILE && (_RBX->hint.flags & 0x10) == 0 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
    WeaponClass = BG_GetWeaponClass(WeaponForEntity, 0);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(_RDI);
    if ( prevHintEntIndex != _RBX->s.number )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_throwbackInnerRadius, "player_throwbackInnerRadius");
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+130h]
        vmovss  xmm2, dword ptr [rdi+134h]
        vsubss  xmm3, xmm2, dword ptr [rbx+134h]
        vsubss  xmm5, xmm1, dword ptr [rbx+130h]
        vmulss  xmm4, xmm3, xmm3
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm0, xmm0, xmm0
        vcomiss xmm2, xmm0
      }
      if ( !(v22 | v23) )
        return 0;
    }
    if ( !_RBX->tagInfo || Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovss  xmm2, dword ptr [rbx+2Ch]
        vmovss  xmm3, dword ptr [rbx+30h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vmovaps [rsp+98h+var_48], xmm6
        vmovaps [rsp+98h+var_58], xmm7
        vaddss  xmm7, xmm2, xmm1
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
      __asm { vmovaps xmm6, xmm0 }
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vmovaps xmm6, [rsp+98h+var_48]
        vcomiss xmm7, xmm1
        vmovaps xmm7, [rsp+98h+var_58]
      }
      if ( !(v22 | v23) )
        return 0;
    }
    if ( WeaponClass != WEAPCLASS_THROWINGKNIFE )
    {
      tagInfo = (const entityState_t **)_RBX->tagInfo;
      if ( tagInfo )
      {
        v37 = *tagInfo;
        if ( v37 )
        {
          if ( BG_IsCharacterEntity(v37) || BG_IsCorpseEntity(v37) )
            return 0;
        }
      }
    }
    if ( WeaponClass == WEAPCLASS_THROWINGKNIFE && (EntityPlayerStateConst && BG_IsUsingOffhandGestureWeapon(EntityPlayerStateConst) || !BG_CanItemBeGrabbed(Instance, &_RBX->s, EntityPlayerStateConst, 0) || !BG_PlayerHasRoomForAmmo(Instance, EntityPlayerStateConst, WeaponForEntity, 0)) )
      return 0;
    if ( WeaponClass == WEAPCLASS_GRENADE )
    {
      if ( !BG_PlayerHasWeapon(Instance, EntityPlayerStateConst, WeaponForEntity) && !BG_CanEquipWeapon(Instance, EntityPlayerStateConst, WeaponForEntity) )
      {
        Com_PrintWarning(15, "Couldn't add grenade weapon to player for throwback ability - will be unable to throw the grenade back.\n");
        return 0;
      }
      Utils = GUtils::GetUtils();
      if ( !Utils->MayThrowbackGrenade(Utils, _RDI, _RBX) )
        return 0;
    }
  }
  if ( _RBX->s.eType == ET_FIRST )
  {
    classname = _RBX->classname;
    if ( classname == scr_const.trigger_use || classname == scr_const.trigger_use_touch )
    {
      v41 = GUtils::GetUtils();
      if ( _RBX->c.trigger.team )
      {
        if ( _RBX->c.trigger.team != v41->GetEntityTeam(v41, _RDI) )
          return 0;
      }
      v42 = _RBX->c.item[0].weapon.stickerIndices[1];
      if ( v42 != 2047 && v42 != _RDI->s.number )
        return 0;
    }
  }
  if ( _RBX->s.eType == ET_VEHICLE && !G_Vehicle_IsUsable(_RBX, _RDI) || _RBX->s.eType == ET_TURRET && !G_Turret_IsUsable(_RBX, _RDI) )
    return 0;
  if ( _RBX->s.eType == ET_ITEM )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
    v44 = ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      if ( ServerDObjForEnt->numModels )
      {
        v45 = *ServerDObjForEnt->models;
        if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( (v45->flags & 0x8000) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1407, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to allow pickup of a weapon with model %s that is unloaded", **(const char ***)v44->models) )
            __debugbreak();
          return 0;
        }
      }
    }
  }
  v46 = GUtils::GetUtils();
  return v46->MayUseEntity(v46, _RDI, _RBX);
}

/*
==============
UsableLargeRadiusList_RemoveKey
==============
*/
char UsableLargeRadiusList_RemoveKey(unsigned int *keyToRemove)
{
  unsigned __int64 v1; 
  unsigned int *v3; 
  signed __int64 v5; 
  ntl::fixed_vector<unsigned int,2048,0> *v6; 
  char *v7; 
  ntl::fixed_vector<unsigned int,2048,0> *v8; 
  unsigned __int64 v9; 

  v1 = 0i64;
  if ( !keyToRemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 103, ASSERT_TYPE_ASSERT, "( ( keyToRemove != nullptr ) )", "%s\n\t( keyToRemove ) = %p", "( keyToRemove != nullptr )", NULL) )
    __debugbreak();
  v3 = (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  if ( keyToRemove == v3 )
    return 0;
  if ( !s_usableLargeRadiusList.m_size )
  {
    Com_PrintError(15, "Failed to remove usable %u from large radius list -- possible leak detected", *keyToRemove);
    return 0;
  }
  if ( (keyToRemove < (unsigned int *)&s_usableLargeRadiusList || keyToRemove > v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  v5 = (char *)keyToRemove - (char *)&s_usableLargeRadiusList;
  if ( (((_BYTE)keyToRemove - (unsigned __int8)&s_usableLargeRadiusList) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( keyToRemove == (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v6 = &s_usableLargeRadiusList;
  if ( s_usableLargeRadiusList.m_size )
    v6 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * (v5 >> 2));
  v7 = &v6->m_data.m_buffer[4];
  v8 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  if ( &v6->m_data.m_buffer[4] == (char *)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v8 == v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  if ( v8 < (ntl::fixed_vector<unsigned int,2048,0> *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
    __debugbreak();
  v9 = (unsigned __int64)((char *)v8 - v7 + 3) >> 2;
  if ( v7 > (char *)v8 )
    v9 = 0i64;
  if ( v9 )
  {
    do
    {
      ++v1;
      *(_DWORD *)v6->m_data.m_buffer = *(_DWORD *)v7;
      v6 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)v6 + 4);
      v7 += 4;
    }
    while ( v1 < v9 );
  }
  --s_usableLargeRadiusList.m_size;
  return 1;
}

/*
==============
UsableList_Add
==============
*/

UsableListItem *__fastcall UsableList_Add(UsableList *list, const UsableRef *ref, double score, int priority, bool inDisplayDistance, bool inDisplayFov, bool ignored)
{
  unsigned __int16 itemCount; 
  UsableListItem *result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2135, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( list->itemCount >= 0x3E8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2136, ASSERT_TYPE_ASSERT, "(list->itemCount < ( 1000 ))", (const char *)&queryFormat, "list->itemCount < PLAYER_USE_LIST_COUNT_MAX") )
    __debugbreak();
  itemCount = list->itemCount;
  if ( itemCount >= 0x3E8u )
  {
    result = NULL;
  }
  else
  {
    _RDX = &list->items[itemCount];
    _RDX->ref = *ref;
    _RDX->inDisplayDistance = inDisplayDistance;
    _RDX->inDisplayFov = inDisplayFov;
    __asm { vmovss  dword ptr [rdx+0Ch], xmm6 }
    _RDX->priority = priority;
    _RDX->flags = CLIENT_HINT_FLAG_NONE;
    ++list->itemCount;
    if ( ignored )
      ++list->itemCountIgnored;
    result = &list->items[itemCount];
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
UsableList_Compare
==============
*/

__int64 __fastcall UsableList_Compare(const void *pe1, const void *pe2, double _XMM2_8)
{
  unsigned int v3; 

  v3 = *((_DWORD *)pe1 + 2);
  if ( (signed int)v3 <= *((_DWORD *)pe2 + 2) )
  {
    if ( (signed int)v3 < *((_DWORD *)pe2 + 2) )
      return 0xFFFFFFFFi64;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vsubss  xmm1, xmm0, dword ptr [rdx+0Ch]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm1, xmm2
    }
    if ( v3 <= *((_DWORD *)pe2 + 2) )
    {
      if ( v3 >= *((_DWORD *)pe2 + 2) )
        return 0i64;
      return 0xFFFFFFFFi64;
    }
  }
  return 1i64;
}

/*
==============
UsableList_Debug
==============
*/
void UsableList_Debug(UsableList *list, int clientNum, int cursorHintEnt, bool isForceUseActive)
{
  const dvar_t *v11; 
  int v17; 
  int v21; 
  const char *v24; 
  int v26; 
  unsigned __int8 v27; 
  char *fmt; 
  __int64 v40; 
  __int64 v41; 
  double v42; 
  vec4_t color; 
  char dest[256]; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2209, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  v11 = DVARINT_g_debugUse;
  if ( !DVARINT_g_debugUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == clientNum )
  {
    __asm
    {
      vmovaps [rsp+1D8h+var_48], xmm6
      vmovaps [rsp+1D8h+var_58], xmm7
    }
    Com_sprintf(dest, 0x100ui64, "HINT/USE ENTITIES FOR ENTITY %i", (unsigned int)clientNum);
    __asm
    {
      vmovss  xmm7, cs:__real@43e10000
      vmovss  xmm6, cs:__real@42480000
      vmovss  xmm3, cs:scale_0; scale
      vmovaps xmm1, xmm7; y
      vmovaps xmm0, xmm6; x
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorWhite, *(float *)&_XMM3, dest);
    v17 = 1;
    if ( isForceUseActive )
    {
      Com_sprintf(dest, 0x100ui64, "NOTE: ForceUseHintOn() is currently enabled for this entity.");
      __asm
      {
        vmovss  xmm3, cs:scale_0; scale
        vmovss  xmm1, cs:__real@43e90000; y
        vmovaps xmm0, xmm6; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      v17 = 2;
    }
    v21 = 0;
    if ( list->itemCount )
    {
      _RBX = &list->items[0].flags;
      __asm
      {
        vmovaps [rsp+1D8h+var_68], xmm8
        vmovss  xmm8, cs:__real@41800000
      }
      do
      {
        if ( *((_BYTE *)_RBX + 1) )
        {
          if ( (*_RBX & 1) != 0 )
          {
            v24 = "USE";
          }
          else
          {
            v24 = "SHORT_DISPLAY";
            if ( (*_RBX & 2) == 0 )
              v24 = "DISPLAY";
          }
          if ( isForceUseActive || cursorHintEnt != *((_DWORD *)_RBX - 4) )
          {
            v26 = *((_DWORD *)_RBX - 2);
            switch ( v26 )
            {
              case -2147483648:
                __asm { vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange }
                break;
              case -200:
                __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan }
                break;
              case -250:
                __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
                break;
              default:
                __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
                break;
            }
          }
          else
          {
            __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
          }
          v27 = *((_BYTE *)_RBX - 10);
          __asm { vmovups xmmword ptr [rsp+1D8h+color], xmm0 }
          if ( v27 >= 2u )
          {
            LODWORD(v41) = 2;
            LODWORD(v40) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2277, ASSERT_TYPE_ASSERT, "(unsigned)( ref.useClass ) < (unsigned)( ( sizeof( *array_counter( s_usableWorldUseClassName ) ) + 0 ) )", "ref.useClass doesn't index s_usableWorldUseClassName\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-4]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+1D8h+var_1A0], xmm0
          }
          LODWORD(v41) = *((_DWORD *)_RBX - 2);
          LODWORD(v40) = *((unsigned __int8 *)_RBX - 9);
          LODWORD(fmt) = *((_DWORD *)_RBX - 4);
          Com_sprintf(dest, 0x100ui64, "%s %4i (%i): priority %i, viewScore %.3f, %s", s_usableWorldUseClassName[*((unsigned __int8 *)_RBX - 10)], fmt, v40, v41, v42, v24);
          __asm
          {
            vmovss  xmm3, cs:scale_0; scale
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r15d
            vmulss  xmm1, xmm0, xmm8
            vaddss  xmm1, xmm1, xmm7; y
            vmovaps xmm0, xmm6; x
          }
          G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &color, *(float *)&_XMM3, dest);
          ++v17;
        }
        ++v21;
        _RBX += 20;
      }
      while ( v21 < list->itemCount );
      __asm { vmovaps xmm8, [rsp+1D8h+var_68] }
    }
    __asm
    {
      vmovaps xmm6, [rsp+1D8h+var_48]
      vmovaps xmm7, [rsp+1D8h+var_58]
    }
  }
}

/*
==============
UsableList_Init
==============
*/
void UsableList_Init(UsableList *list)
{
  *(_DWORD *)&list->itemCount = 0;
}

/*
==============
UsableList_Sort
==============
*/
void UsableList_Sort(UsableList *list)
{
  unsigned __int16 itemCount; 
  unsigned __int16 itemCountIgnored; 
  int v4; 
  int v5; 

  qsort(list, list->itemCount, 0x14ui64, (_CoreCrtNonSecureSearchSortCompareFunction)UsableList_Compare);
  itemCount = list->itemCount;
  itemCountIgnored = list->itemCountIgnored;
  if ( itemCount < itemCountIgnored )
  {
    v5 = itemCountIgnored;
    v4 = itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2194, ASSERT_TYPE_ASSERT, "( list->itemCount ) >= ( list->itemCountIgnored )", "list->itemCount >= list->itemCountIgnored\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  list->itemCount -= list->itemCountIgnored;
  list->itemCountIgnored = 0;
}

/*
==============
UsableRef_CanThrowback
==============
*/
bool UsableRef_CanThrowback(const UsableRef *ref)
{
  const gentity_s *ConstGentity; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 748, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ConstGentity->s);
  return BG_WeaponDef(WeaponForEntity, ConstGentity->s.inAltWeaponMode)->offhandClass == OFFHAND_CLASS_FRAG_GRENADE;
}

/*
==============
UsableRef_DebugDraw
==============
*/
void UsableRef_DebugDraw(int clientNum, const UsableRef *ref, const bool directLookOuter, const bool directLookInner, int message)
{
  const dvar_t *v9; 
  __int64 v11; 
  const gentity_s *ConstGentity; 
  UsableClass v17; 
  const gentity_s *Entity; 
  bool IsUsableBy; 
  unsigned int v20; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v21; 
  __int64 m_size; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  ntl::pair<unsigned int,ClientBits> *v24; 
  __int64 v25; 
  ntl::pair<unsigned int,ClientBits> *v26; 
  unsigned int number; 
  UsableClass v32; 
  vec3_t *p_angles; 
  const Bounds *AbsBox; 
  const vec3_t *DebugOrigin; 
  UsableClass useClass; 
  bool v41; 
  bool v42; 
  const char *v54; 
  UsableClass v56; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  BOOL IsPriorityOverLook; 
  unsigned int HintPriority; 
  BOOL v66; 
  unsigned int v67; 
  char *fmt; 
  char *fmta; 
  __int64 duration; 
  __int64 durationa; 
  bool *outUse2DFOV; 
  bool *outUse2DFOVa; 
  bool v115; 
  float outUseFOV; 
  float outDisplayRadius; 
  float outFaceFOV; 
  float outUseRadius; 
  float outDisplayFOV; 
  vec3_t outUsePos; 
  vec3_t end; 
  vec3_t xyz; 
  vec3_t forward; 
  vec4_t color; 
  tmat33_t<vec3_t> axis; 
  char dest[256]; 

  v9 = DVARINT_g_debugUse;
  v11 = clientNum;
  if ( !DVARINT_g_debugUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == (_DWORD)v11 )
  {
    if ( directLookInner )
    {
      __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
    }
    else if ( directLookOuter )
    {
      __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr cs:?colorLtGrey@@3Tvec4_t@@B; vec4_t const colorLtGrey }
    }
    __asm
    {
      vmovaps [rsp+270h+var_30], xmm6
      vmovups xmmword ptr [rbp+170h+color], xmm0
    }
    _RSI = &g_entities[v11];
    if ( ref->useClass )
      goto LABEL_44;
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 159, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
      __debugbreak();
    if ( ConstGentity->classname != scr_const.trigger_use_touch )
    {
LABEL_44:
      useClass = ref->useClass;
      __asm
      {
        vmovaps [rsp+270h+var_40], xmm7
        vmovaps [rsp+270h+var_60], xmm9
        vxorps  xmm7, xmm7, xmm7
      }
      if ( useClass )
      {
        v41 = useClass == USE_CLASS_GENTITY;
        v42 = useClass == USE_CLASS_SCRIPTABLE;
        if ( useClass == USE_CLASS_SCRIPTABLE )
          ScriptableSv_GetPartUsePositionAndAngles(ref->useIndex, ref->useData, &outUsePos, &xyz);
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+170h+xyz], xmm7
          vmovss  dword ptr [rbp+170h+xyz+4], xmm7
          vmovss  dword ptr [rbp+170h+xyz+8], xmm7
        }
        UsableRef_GetUseTracePos(ref, &outUsePos);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+130h]
        vsubss  xmm3, xmm0, dword ptr [rbp+170h+outUsePos]
        vmovss  xmm1, dword ptr [rsi+134h]
        vmovss  xmm0, dword ptr [rsi+138h]
        vsubss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+4]
        vsubss  xmm4, xmm0, dword ptr [rbp+170h+outUsePos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm9, xmm3, xmm0
        vcomiss xmm9, cs:__real@491c4000
      }
      if ( v41 || v42 )
      {
        switch ( message )
        {
          case 1:
            v54 = "SUCCESS";
            break;
          case 2:
            v54 = "OBSTRUCTED";
            break;
          case 3:
            v54 = "DISABLED";
            break;
          case 4:
            v54 = "FILTERED";
            break;
          case 5:
            v54 = "DISTANCE";
            break;
          case 6:
            v54 = "USEFOV";
            break;
          case 7:
            v54 = "FACEFOV";
            break;
          default:
            v54 = "NOTVALID";
            break;
        }
        if ( message == 2 )
        {
          __asm { vmovss  xmm2, cs:DEBUG_TEXT_SCALE_0; scale }
          G_Main_AddDebugStringWithDurationCentered(&outUsePos, &colorRed, *(float *)&_XMM2, v54, 1);
        }
        else
        {
          __asm { vmovaps [rsp+270h+var_50], xmm8 }
          UsableRef_GetRadiusFov(ref, &outUseRadius, &outUseFOV, &outFaceFOV, &outDisplayRadius, &outDisplayFOV, &v115);
          v56 = ref->useClass;
          __asm { vmovss  xmm8, [rbp+170h+outUseRadius] }
          if ( v56 == USE_CLASS_SCRIPTABLE )
          {
            InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(ref->useIndex);
            if ( InstanceCommonContext->def )
              name = InstanceCommonContext->def->name;
            else
              name = (char *)&queryFormat.fmt + 3;
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugUseFull, "g_debugUseFull") )
            {
              IsPriorityOverLook = UsableRef_IsPriorityOverLook(ref);
              HintPriority = UsableRef_GetHintPriority(ref);
              __asm
              {
                vcvttss2si r9d, [rsp+270h+outDisplayRadius]
                vcvttss2si edx, [rsp+270h+outUseFOV]
                vcvttss2si r10d, [rsp+270h+outFaceFOV]
                vcvttss2si r8d, xmm8
              }
              LODWORD(outUse2DFOVa) = IsPriorityOverLook;
              LODWORD(durationa) = HintPriority;
              Com_sprintf(dest, 0x100ui64, "%i: %s  pri %i, pl %i, dRad %i, dFOV %i, uRad %i, uFOV %i, 2DFOV %i, %s", ref->useIndex, name, durationa, outUse2DFOVa, _ER10, _ER9, _ER8, _EDX, v115, v54);
            }
            else
            {
              Com_sprintf(dest, 0x100ui64, "%i: %s - %s", ref->useIndex, name, v54);
            }
          }
          else if ( v56 == USE_CLASS_GENTITY )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugUseFull, "g_debugUseFull") )
            {
              v66 = UsableRef_IsPriorityOverLook(ref);
              v67 = UsableRef_GetHintPriority(ref);
              __asm
              {
                vcvttss2si r9d, [rsp+270h+outDisplayRadius]
                vcvttss2si edx, [rsp+270h+outUseFOV]
                vcvttss2si r10d, [rsp+270h+outFaceFOV]
                vcvttss2si r8d, xmm8
              }
              LODWORD(outUse2DFOVa) = _ER10;
              LODWORD(durationa) = v66;
              LODWORD(fmta) = v67;
              Com_sprintf(dest, 0x100ui64, "%i:  pri %i, pl %i, dRad %i, dFOV %i, uRad %i, uFOV %i, 2DFOV %i, %s", ref->useIndex, fmta, durationa, outUse2DFOVa, _ER9, _ER8, _EDX, v115, v54);
            }
            else
            {
              Com_sprintf(dest, 0x100ui64, "%i: %s", ref->useIndex, v54);
            }
          }
          AngleVectors(&xyz, &forward, NULL, NULL);
          __asm
          {
            vmovss  xmm6, cs:__real@41200000
            vmulss  xmm1, xmm6, dword ptr [rbp+170h+forward]
            vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos]
            vmulss  xmm1, xmm6, dword ptr [rbp+170h+forward+4]
            vmovss  dword ptr [rbp+170h+end], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+4]
            vmulss  xmm1, xmm6, dword ptr [rbp+170h+forward+8]
            vmovss  dword ptr [rbp+170h+end+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+8]
            vmovss  dword ptr [rbp+170h+end+8], xmm2
          }
          G_DebugLineWithDuration(&outUsePos, &end, &colorRed, 0, 1);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+170h+outUsePos]
            vmovss  xmm1, dword ptr [rbp+170h+outUsePos+4]
            vaddss  xmm2, xmm6, dword ptr [rbp+170h+outUsePos+8]
            vmovss  dword ptr [rbp+170h+end], xmm0
            vmovss  dword ptr [rbp+170h+end+4], xmm1
            vmovss  dword ptr [rbp+170h+end+8], xmm2
          }
          G_DebugLineWithDuration(&outUsePos, &end, &colorBlue, 0, 1);
          __asm
          {
            vmulss  xmm0, xmm8, xmm8
            vmulss  xmm1, xmm0, cs:__real@40000000
            vcomiss xmm9, xmm1
          }
          if ( v41 )
          {
            __asm { vmovaps xmm1, xmm8; radius }
            G_DebugCircle(&outUsePos, *(float *)&_XMM1, &color, 0, 1, 1);
            __asm
            {
              vmovss  xmm6, [rbp+170h+outDisplayFOV]
              vcomiss xmm6, xmm7
            }
            if ( !v41 && !v42 )
            {
              __asm
              {
                vmulss  xmm1, xmm6, cs:__real@3f000000
                vaddss  xmm1, xmm1, dword ptr [rbp+170h+xyz+4]
                vmovss  dword ptr [rbp+170h+xyz+4], xmm1
              }
              AngleVectors(&xyz, &forward, NULL, NULL);
              __asm
              {
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward]
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos]
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward+4]
                vmovss  dword ptr [rbp+170h+end], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+4]
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward+8]
                vmovss  dword ptr [rbp+170h+end+4], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+8]
                vmovss  dword ptr [rbp+170h+end+8], xmm2
              }
              G_DebugLineWithDuration(&outUsePos, &end, &colorGreen, 0, 1);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+170h+xyz+4]
                vsubss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rbp+170h+xyz+4], xmm1
              }
              AngleVectors(&xyz, &forward, NULL, NULL);
              __asm
              {
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward]
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos]
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward+4]
                vmovss  dword ptr [rbp+170h+end], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+4]
                vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward+8]
                vmovss  dword ptr [rbp+170h+end+4], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+170h+outUsePos+8]
                vmovss  dword ptr [rbp+170h+end+8], xmm2
              }
              G_DebugLineWithDuration(&outUsePos, &end, &colorGreen, 0, 1);
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+170h+outUsePos+8]
            vaddss  xmm1, xmm0, cs:__real@c1200000
            vmovss  xmm2, cs:DEBUG_TEXT_SCALE_0; scale
            vmovss  dword ptr [rbp+170h+outUsePos+8], xmm1
          }
          G_Main_AddDebugStringWithDurationCentered(&outUsePos, &color, *(float *)&_XMM2, dest, 1);
          __asm { vmovaps xmm8, [rsp+270h+var_50] }
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+270h+var_40]
        vmovaps xmm9, [rsp+270h+var_60]
      }
    }
    else
    {
      v17 = ref->useClass;
      if ( v17 )
      {
        if ( v17 != USE_CLASS_SCRIPTABLE )
          goto LABEL_32;
        v20 = UsableKeyEncode(ref->useIndex, USE_CLASS_SCRIPTABLE, ref->useData);
        v21 = UsableClientMaskCollection_Get();
        m_size = v21->m_size;
        m_buffer = v21->m_data.m_buffer;
        v24 = v21->m_data.m_buffer;
        if ( m_size > 0 )
        {
          do
          {
            v25 = m_size >> 1;
            if ( v24[v25].first >= v20 )
            {
              m_size >>= 1;
            }
            else
            {
              v24 = (ntl::pair<unsigned int,ClientBits> *)((char *)v24 + v25 * 32 + 32);
              m_size += -1 - (m_size >> 1);
            }
          }
          while ( m_size > 0 );
          m_size = v21->m_size;
        }
        v26 = &m_buffer[m_size];
        if ( v24 == v26 )
          goto LABEL_32;
        if ( v20 < v24->first )
          v24 = &m_buffer[v21->m_size];
        if ( v24 == v26 )
        {
LABEL_32:
          IsUsableBy = 1;
        }
        else
        {
          number = _RSI->s.number;
          if ( number >= 0xE0 )
          {
            LODWORD(outUse2DFOV) = 224;
            LODWORD(duration) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", duration, outUse2DFOV) )
              __debugbreak();
          }
          IsUsableBy = ((0x80000000 >> (number & 0x1F)) & v24->second.array[(unsigned __int64)number >> 5]) != 0;
        }
      }
      else
      {
        Entity = UsableRef_GetEntity(ref);
        IsUsableBy = UsableEntity_IsUsableBy(Entity, _RSI, 0);
      }
      LODWORD(duration) = IsUsableBy;
      LODWORD(fmt) = 0x80000000;
      Com_sprintf(dest, 0x100ui64, "%i: [touch] pri %i, usable %i", ref->useIndex, fmt, duration);
      if ( ref->useClass )
      {
        __asm { vmovss  xmm6, cs:DEBUG_TEXT_SCALE_0 }
        DebugOrigin = UsableRef_GetDebugOrigin(ref);
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(DebugOrigin, &color, *(float *)&_XMM2, dest);
      }
      else
      {
        if ( UsableRef_Internal_GetConstGentity(ref) == (const gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1249, ASSERT_TYPE_ASSERT, "( UsableRef_GetAbsBox( ref ) )", (const char *)&queryFormat, "UsableRef_GetAbsBox( ref )") )
          __debugbreak();
        _RAX = UsableRef_GetAbsBox(ref);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+170h+xyz], xmm0
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rbp+170h+xyz+4], xmm1
          vmovss  xmm0, dword ptr [rax+8]
        }
        v32 = ref->useClass;
        __asm { vmovss  dword ptr [rbp+170h+xyz+8], xmm0 }
        if ( v32 )
        {
          if ( v32 == USE_CLASS_SCRIPTABLE )
            p_angles = &ScriptableSv_GetInstanceCommonContext(ref->useIndex)->angles;
          else
            p_angles = &vec3_origin;
        }
        else
        {
          p_angles = &UsableRef_Internal_GetConstGentity(ref)->r.currentAngles;
        }
        AnglesToAxis(p_angles, &axis);
        AbsBox = UsableRef_GetAbsBox(ref);
        G_DebugBoxOriented(&vec3_origin, AbsBox, &axis, &color, 1, 0);
        __asm { vmovss  xmm2, cs:DEBUG_TEXT_SCALE_0; scale }
        G_Main_AddDebugString(&xyz, &color, *(float *)&_XMM2, dest);
      }
    }
    __asm { vmovaps xmm6, [rsp+270h+var_30] }
  }
}

/*
==============
UsableRef_GetAbsBox
==============
*/
Bounds *UsableRef_GetAbsBox(const UsableRef *ref)
{
  UsableClass useClass; 

  useClass = ref->useClass;
  if ( useClass == USE_CLASS_GENTITY )
    return &UsableRef_Internal_GetConstGentity(ref)->r.absBox;
  if ( useClass == USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 212, ASSERT_TYPE_ASSERT, "( ref.useClass != USE_CLASS_SCRIPTABLE )", (const char *)&queryFormat, "ref.useClass != USE_CLASS_SCRIPTABLE") )
    __debugbreak();
  return &bounds_origin;
}

/*
==============
UsableRef_GetCursorHintBinding
==============
*/
__int64 UsableRef_GetCursorHintBinding(const UsableRef *ref)
{
  const gentity_s *ConstGentity; 
  const gentity_s *v3; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  UsableClass useClass; 
  __int64 useBinding; 
  const ScriptableStateUsableDef *PartStateUsableDef; 

  if ( ref->useClass == USE_CLASS_GENTITY )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ConstGentity->s.eType == ET_MISSILE && (ConstGentity->hint.flags & 0x10) == 0 )
    {
      v3 = UsableRef_Internal_GetConstGentity(ref);
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 748, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &v3->s);
      if ( BG_WeaponDef(WeaponForEntity, v3->s.inAltWeaponMode)->offhandClass == OFFHAND_CLASS_FRAG_GRENADE )
        return 5i64;
    }
  }
  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass == USE_CLASS_SCRIPTABLE )
    {
      PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
      if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 772, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
        __debugbreak();
      return (unsigned __int16)PartStateUsableDef->hintBinding;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    useBinding = UsableRef_Internal_GetConstGentity(ref)->hint.useBinding;
    if ( (unsigned int)(useBinding + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)useBinding, "signed", useBinding) )
      __debugbreak();
    return (unsigned __int16)useBinding;
  }
}

/*
==============
UsableRef_GetCursorHintClass
==============
*/
__int64 UsableRef_GetCursorHintClass(const UsableRef *ref)
{
  return (unsigned __int8)ref->useClass;
}

/*
==============
UsableRef_GetCursorHintEntIndex
==============
*/
__int64 UsableRef_GetCursorHintEntIndex(const UsableRef *ref)
{
  return ref->useIndex;
}

/*
==============
UsableRef_GetCursorHintParms
==============
*/
void UsableRef_GetCursorHintParms(const UsableRef *ref, playerState_s *ps)
{
  UsableClass useClass; 
  const gentity_s *ConstGentity; 
  __int64 v6; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  HintParamValue v8; 
  __int64 useIndex; 
  ScriptableInstanceServerContext *v10; 
  __int64 v11; 
  __int64 v12; 

  useClass = ref->useClass;
  if ( useClass == USE_CLASS_GENTITY )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    ps->cursorHintParams.types[0] = ConstGentity->hint.paramsTypes[0];
    ps->cursorHintParams.values[0].intVal = ConstGentity->hint.paramValues[0].intVal;
    ps->cursorHintParams.types[1] = ConstGentity->hint.paramsTypes[1];
    ps->cursorHintParams.values[1].intVal = ConstGentity->hint.paramValues[1].intVal;
    useClass = ref->useClass;
  }
  if ( useClass == USE_CLASS_SCRIPTABLE )
  {
    *(_WORD *)ps->cursorHintParams.types = 0;
    v6 = 0i64;
    *(_QWORD *)&ps->cursorHintParams.values[0].floatVal = 0i64;
    if ( ScriptableSv_GetPartStateType(ref->useIndex, ref->useData) != Scriptable_StateType_Usable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 722, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable )", (const char *)&queryFormat, "ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable") )
      __debugbreak();
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 724, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
      __debugbreak();
    LODWORD(v8.floatVal) = PartStateUsableDef->hintIconIndex;
    if ( v8.intVal )
    {
      ps->cursorHintParams.types[0] = 4;
      v6 = 1i64;
      ps->cursorHintParams.values[0] = v8;
    }
    useIndex = ref->useIndex;
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 99, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)useIndex >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v12) = g_scriptableWorldCounts.serverInstanceCount;
      LODWORD(v11) = useIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v10 = g_scriptableSv_instanceContexts;
    if ( g_scriptableSv_instanceContexts[useIndex].serverContext.cursorHintParm )
    {
      ps->cursorHintParams.types[v6] = 2;
      ps->cursorHintParams.values[v6].intVal = v10[useIndex].serverContext.cursorHintParm;
    }
  }
}

/*
==============
UsableRef_GetCursorHintPart
==============
*/
__int64 UsableRef_GetCursorHintPart(const UsableRef *ref)
{
  return ref->useData;
}

/*
==============
UsableRef_GetCursorHintRange
==============
*/
__int64 UsableRef_GetCursorHintRange(const ClientHintFlags flags, int clientNum)
{
  if ( (flags & 1) != 0 )
    return 0i64;
  else
    return 2 - (unsigned int)((flags & 2) != 0);
}

/*
==============
UsableRef_GetCursorHintString
==============
*/
__int64 UsableRef_GetCursorHintString(const UsableRef *ref, gentity_s *player)
{
  unsigned int ownerHintString; 
  const playerState_s *EntityPlayerState; 
  HintType CursorHintType; 
  const gentity_s *ConstGentity; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v10; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  unsigned int useIndex; 
  playerState_s *v13; 
  unsigned int stringIndex; 

  ownerHintString = 0;
  if ( ref->useClass == USE_CLASS_GENTITY )
  {
    EntityPlayerState = G_GetEntityPlayerState(player);
    CursorHintType = UsableRef_GetCursorHintType(ref, EntityPlayerState);
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ConstGentity->hint.ownerHintString && UsableRef_IsOwnedBy(ref, player) )
    {
      ownerHintString = ConstGentity->hint.ownerHintString;
    }
    else if ( CursorHintType )
    {
      ownerHintString = ConstGentity->hint.hintString;
    }
    if ( ConstGentity->s.eType == ET_TURRET && !ownerHintString )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &ConstGentity->s);
      v10 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 646, ASSERT_TYPE_ASSERT, "( traceWeaponDef )", (const char *)&queryFormat, "traceWeaponDef") )
        __debugbreak();
      if ( *v10->szUseHintString )
        ownerHintString = v10->iUseHintStringIndex;
    }
    if ( ConstGentity->s.eType == ET_VEHICLE && !ownerHintString )
    {
      if ( !ConstGentity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 655, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      ownerHintString = ConstGentity->vehicle->useHintStringIndex;
    }
  }
  if ( ref->useClass != USE_CLASS_SCRIPTABLE )
    return ownerHintString;
  if ( ScriptableSv_GetPartStateType(ref->useIndex, ref->useData) != Scriptable_StateType_Usable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 662, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable )", (const char *)&queryFormat, "ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable") )
    __debugbreak();
  PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
  if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 664, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
    __debugbreak();
  if ( G_Door_ScriptableIsDoor(ref->useIndex) && (useIndex = ref->useIndex, v13 = G_GetEntityPlayerState(player), G_Door_GetOverrideHint(v13, useIndex, &stringIndex)) )
    return stringIndex;
  else
    return PartStateUsableDef->hintStringIndex;
}

/*
==============
UsableRef_GetCursorHintTag
==============
*/
unsigned __int16 UsableRef_GetCursorHintTag(const UsableRef *ref)
{
  UsableClass useClass; 
  int tag; 

  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass == USE_CLASS_SCRIPTABLE )
      return ScriptableSv_GetPartUseHintTag(ref->useIndex, ref->useData);
    else
      return 0;
  }
  else
  {
    tag = UsableRef_Internal_GetConstGentity(ref)->hint.tag;
    if ( (tag < 0 || (unsigned int)tag > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)tag, "signed", tag) )
      __debugbreak();
    return tag;
  }
}

/*
==============
UsableRef_GetCursorHintType
==============
*/
HintType UsableRef_GetCursorHintType(const UsableRef *ref, const playerState_s *ps)
{
  UsableClass useClass; 
  const gentity_s *ConstGentity; 
  const gentity_s *v6; 
  entityType_s eType; 
  HintType result; 
  __int16 hintType; 

  useClass = ref->useClass;
  if ( useClass )
  {
    result = HINT_NONE;
    if ( useClass == USE_CLASS_SCRIPTABLE )
      return 2;
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ConstGentity->s.eType == ET_MISSILE && (ConstGentity->hint.flags & 0x10) == 0 )
      return 6;
    v6 = UsableRef_Internal_GetConstGentity(ref);
    eType = v6->s.eType;
    switch ( eType )
    {
      case ET_TURRET:
        return 6;
      case ET_VEHICLE:
        return 1;
      case ET_ITEM:
        return UsableRef_GetItemCursorHintType(ps, v6);
      default:
        hintType = v6->hint.hintType;
        if ( (hintType < 0 || (unsigned __int16)hintType > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum HintType __cdecl truncate_cast_impl<enum HintType,short>(short)", "unsigned", (unsigned __int8)hintType, "signed", hintType) )
          __debugbreak();
        return (char)hintType;
    }
  }
  return result;
}

/*
==============
UsableRef_GetDebugOrigin
==============
*/
vec3_t *UsableRef_GetDebugOrigin(const UsableRef *ref)
{
  UsableClass useClass; 

  useClass = ref->useClass;
  if ( useClass == USE_CLASS_GENTITY )
    return &UsableRef_Internal_GetConstGentity(ref)->r.currentOrigin;
  if ( useClass == USE_CLASS_SCRIPTABLE )
    return &ScriptableSv_GetInstanceCommonContext(ref->useIndex)->origin;
  return &vec3_origin;
}

/*
==============
UsableRef_GetDisplayRadius
==============
*/

float __fastcall UsableRef_GetDisplayRadius(const UsableRef *ref, double _XMM1_8)
{
  UsableClass useClass; 
  bool v7; 
  bool v8; 
  float outUseRadius; 

  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass != USE_CLASS_SCRIPTABLE )
      goto LABEL_11;
    _RBX = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    v7 = _RBX == NULL;
    if ( !_RBX )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 230, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL);
      v7 = !v8;
      if ( v8 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vmaxss  xmm0, xmm0, dword ptr [rbx+1Ch]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v7 )
    {
LABEL_11:
      _RBX = DCONST_DVARMODEFLT_player_itemUseRadius;
      if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
  }
  else
  {
    _RBX = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(_RBX, &outUseRadius);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1479, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+264h]
      vmaxss  xmm0, xmm0, [rsp+48h+outUseRadius]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
UsableRef_GetEntity
==============
*/
gentity_s *UsableRef_GetEntity(const UsableRef *ref)
{
  __int64 useIndex; 
  __int64 v4; 

  if ( ref->useClass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 134, ASSERT_TYPE_ASSERT, "( ref.useClass == USE_CLASS_GENTITY )", (const char *)&queryFormat, "ref.useClass == USE_CLASS_GENTITY") )
    __debugbreak();
  useIndex = (int)ref->useIndex;
  if ( (unsigned int)useIndex >= 0x800 )
  {
    LODWORD(v4) = ref->useIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[useIndex].r.isInUse != g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 135, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ref.useIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ref.useIndex )") )
    __debugbreak();
  return &g_entities[ref->useIndex];
}

/*
==============
UsableRef_GetEntityCursorHintHoldDuration
==============
*/
__int64 UsableRef_GetEntityCursorHintHoldDuration(const UsableRef *ref, gentity_s *player)
{
  const playerState_s *EntityPlayerState; 

  if ( ref->useClass )
    return 0i64;
  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( UsableRef_GetCursorHintType(ref, EntityPlayerState) == HINT_NONE )
    return 0i64;
  else
    return (unsigned int)UsableRef_Internal_GetConstGentity(ref)->hint.useHoldDuration;
}

/*
==============
UsableRef_GetHintPriority
==============
*/
int UsableRef_GetHintPriority(const UsableRef *ref)
{
  UsableClass useClass; 
  __int64 useIndex; 

  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass == USE_CLASS_SCRIPTABLE )
      return ScriptableSv_GetPartUsePriority(ref->useIndex, ref->useData);
    else
      return 0;
  }
  else
  {
    useIndex = (int)ref->useIndex;
    if ( (unsigned int)useIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", useIndex, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[useIndex].r.isInUse != g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 306, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ref.useIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ref.useIndex )") )
      __debugbreak();
    return g_entities[ref->useIndex].hint.priority;
  }
}

/*
==============
UsableRef_GetItemCursorHintType
==============
*/

char __fastcall UsableRef_GetItemCursorHintType(const playerState_s *ps, const gentity_s *traceEnt, double _XMM2_8)
{
  GWeaponMap *Instance; 
  bool v6; 
  bool v7; 
  bool v13; 
  WeaponDef **v14; 
  WeaponDef *v15; 
  const Weapon *Weapon; 
  const WeaponDef *v17; 
  bool v18; 
  weapInventoryType_t inventoryType; 
  weapInventoryType_t v20; 
  WeaponSlot Slot; 
  __int64 v23; 
  Weapon r_weapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 536, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !traceEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 537, ASSERT_TYPE_ASSERT, "( traceEnt )", (const char *)&queryFormat, "traceEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80);
  v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80);
  _RAX = BG_GetWeaponForEntity(Instance, &traceEnt->s);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+15h], xmm1
    vmovd   edi, xmm2
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( (unsigned __int16)_EDI > bg_lastParsedWeaponIndex )
  {
    LODWORD(v23) = (unsigned __int16)_EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v23, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v13 = bg_weaponDefs[(unsigned __int16)_EDI] == NULL;
  v14 = &bg_weaponDefs[(unsigned __int16)_EDI];
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v15 = *v14;
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(Instance, ps->weapCommon.weaponHandle);
  v17 = BG_WeaponDef(Weapon, 0);
  if ( BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE && v6 )
    return 0;
  if ( BG_PlayerHasWeapon(Instance, ps, &r_weapon) )
  {
    v18 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
    if ( !BG_IsFauxFists(ps, &r_weapon, v18) )
      return 0;
  }
  if ( (inventoryType = v17->inventoryType) != WEAPINVENTORY_PRIMARY && inventoryType != WEAPINVENTORY_ALTMODE && (v7 || (v20 = v15->inventoryType) == WEAPINVENTORY_PRIMARY || v20 == WEAPINVENTORY_ALTMODE) && (Slot = BG_PlayerWeaponGetSlot(&r_weapon), BG_PlayerWeaponIsSlotFull(Instance, ps, Slot)) )
    return 0;
  else
    return 6;
}

/*
==============
UsableRef_GetRadiusFov
==============
*/
void UsableRef_GetRadiusFov(const UsableRef *ref, float *outUseRadius, float *outUseFOV, float *outFaceFOV, float *outDisplayRadius, float *outDisplayFOV, bool *outUse2DFOV)
{
  UsableClass useClass; 
  const dvar_t *v18; 
  const char *v19; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  char v24; 
  bool v25; 
  bool v26; 
  const dvar_t *v29; 
  const dvar_t *v34; 
  const dvar_t *v35; 

  useClass = ref->useClass;
  _RBX = outUseFOV;
  _RSI = outUseRadius;
  if ( useClass == USE_CLASS_GENTITY )
  {
    _RDI = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(_RDI, _RSI);
    __asm { vmovss  xmm1, dword ptr [rsi]; useRadius }
    UsableEntity_GetUseDisplayRadius(_RDI, *(const float *)&_XMM1, outDisplayRadius);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+270h]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm1, xmm0
    }
    if ( !v25 )
    {
LABEL_14:
      _RAX = outDisplayFOV;
      __asm
      {
        vmovss  dword ptr [rbx], xmm1
        vmovss  xmm0, dword ptr [rdi+268h]
        vmaxss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rax], xmm1
      }
      *outFaceFOV = -1.0;
      return;
    }
    if ( _RDI->s.eType == ET_ITEM )
      goto LABEL_12;
    if ( _RDI->s.eType != ET_MISSILE )
    {
      if ( _RDI->s.eType == ET_TURRET )
      {
        v18 = DVARFLT_player_MGUseFOV;
        v19 = "player_MGUseFOV";
      }
      else if ( _RDI->s.eType == ET_VEHICLE )
      {
        v18 = DVARFLT_player_vehicleUseFOV;
        v19 = "player_vehicleUseFOV";
      }
      else
      {
        v18 = DVARFLT_player_useFOV;
        v19 = "player_useFOV";
      }
      goto LABEL_13;
    }
    if ( (_RDI->hint.flags & 0x10) != 0 )
    {
LABEL_12:
      v18 = DCONST_DVARMPFLT_player_itemUseFOV;
      v19 = "player_itemUseFOV";
    }
    else
    {
      v18 = DVARFLT_player_throwbackFOV;
      v19 = "player_throwbackFOV";
    }
LABEL_13:
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v18, v19);
    __asm { vmovaps xmm1, xmm0 }
    goto LABEL_14;
  }
  if ( useClass == USE_CLASS_SCRIPTABLE )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( ScriptableSv_GetPartStateType(ref->useIndex, ref->useData) != Scriptable_StateType_Usable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 285, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable )", (const char *)&queryFormat, "ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable") )
      __debugbreak();
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    v24 = 0;
    v25 = PartStateUsableDef == NULL;
    if ( !PartStateUsableDef )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1549, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL);
      v24 = 0;
      v25 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm { vmovss  xmm6, cs:__real@3c23d70a }
    *_RSI = PartStateUsableDef->useRadius;
    *_RBX = PartStateUsableDef->useFOV;
    *outFaceFOV = PartStateUsableDef->faceFOV;
    _R14 = outDisplayRadius;
    *outDisplayRadius = PartStateUsableDef->useRadiusDisplay;
    *outUse2DFOV = PartStateUsableDef->use2DFOV;
    __asm { vcomiss xmm6, dword ptr [rsi] }
    if ( !v25 )
    {
      v29 = DCONST_DVARMODEFLT_player_itemUseRadius;
      if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      *_RSI = v29->current.value;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vcomiss xmm0, cs:__real@bf7fbe77
    }
    if ( v24 )
    {
      _RDI = DCONST_DVARMPFLT_player_itemUseFOV;
      if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    __asm
    {
      vcomiss xmm6, dword ptr [r14]
      vmovaps xmm6, [rsp+68h+var_28]
    }
    if ( !(v24 | v25) )
    {
      *outDisplayRadius = *_RSI;
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
    _RAX = outDisplayFOV;
    __asm { vmovss  dword ptr [rax], xmm0 }
  }
  else
  {
    v34 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    *_RSI = v34->current.value;
    v35 = DCONST_DVARMPFLT_player_itemUseFOV;
    if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    *_RBX = v35->current.value;
    *outDisplayRadius = *_RSI;
    *outDisplayFOV = *_RBX;
    *outFaceFOV = -1.0;
  }
}

/*
==============
UsableRef_GetUseDistDotPos
==============
*/
void UsableRef_GetUseDistDotPos(const UsableRef *ref, vec3_t *outUsePos)
{
  const gentity_s *ConstGentity; 

  if ( ref->useClass )
  {
    UsableRef_GetUseTracePos(ref, outUsePos);
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1535, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
      __debugbreak();
    if ( ((ConstGentity->hint.tag + 1) & 0xFFFFFEFF) != 0 && Com_GetServerDObjForEnt(ConstGentity) )
    {
      G_Utils_DObjGetWorldBoneIndexPos(ConstGentity, ConstGentity->hint.tag, outUsePos);
    }
    else
    {
      outUsePos->v[0] = ConstGentity->r.absBox.midPoint.v[0];
      outUsePos->v[1] = ConstGentity->r.absBox.midPoint.v[1];
      outUsePos->v[2] = ConstGentity->r.absBox.midPoint.v[2];
    }
  }
}

/*
==============
UsableRef_GetUseRadius
==============
*/
float UsableRef_GetUseRadius(const UsableRef *ref)
{
  int useClass; 
  char v5; 
  bool v6; 
  bool v7; 
  const gentity_s *ConstGentity; 
  float outUseRadius; 

  useClass = (unsigned __int8)ref->useClass;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+58h+outUseRadius], xmm6
  }
  if ( !useClass )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(ConstGentity, &outUseRadius);
    __asm { vmovss  xmm0, [rsp+58h+outUseRadius] }
    goto LABEL_8;
  }
  if ( useClass == 1 )
  {
    _RBX = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    v5 = 0;
    v6 = _RBX == NULL;
    if ( !_RBX )
    {
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 258, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL);
      v5 = 0;
      v6 = !v7;
      if ( v7 )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rbx+1Ch] }
LABEL_8:
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v5 | v6) )
      goto LABEL_13;
  }
  _RBX = DCONST_DVARMODEFLT_player_itemUseRadius;
  if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
LABEL_13:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
UsableRef_GetUseScoreAndPriority
==============
*/

bool __fastcall UsableRef_GetUseScoreAndPriority(const UsableRef *ref, float *outScore, int *outPriority, double dot, const bool isUnderDirectLookOuter, const bool isUnderDirectLookInner, const bool isWithinUseRange, const playerState_s *ps)
{
  const dvar_t *v17; 
  bool enabled; 
  const dvar_t *v19; 
  int integer; 
  bool v21; 
  int HintPriority; 
  int v23; 
  UsableClass useClass; 
  const gentity_s *ConstGentity; 
  const gentity_s *v26; 
  GWeaponMap *v29; 
  bool v30; 
  bool result; 
  unsigned int useIndex; 
  GWeaponMap *Instance; 
  double v37; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmulss  xmm0, xmm3, xmm1
    vmovaps [rsp+68h+var_28], xmm6
    vsubss  xmm6, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
  }
  _RSI = outScore;
  __asm
  {
    vcomiss xmm6, cs:__real@3f800000
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+68h+var_38], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 321, ASSERT_TYPE_ASSERT, "(0.0f <= centerBias && centerBias <= 1.0f)", "%s\n\tcenterBias (%f) expected to be within [0.0,1.0]", "0.0f <= centerBias && centerBias <= 1.0f", v37) )
    __debugbreak();
  v17 = DVARBOOL_g_useEnableScoringFixForUseRange;
  if ( !DVARBOOL_g_useEnableScoringFixForUseRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useEnableScoringFixForUseRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  enabled = v17->current.enabled;
  v19 = DVARINT_g_useWithinUseRangePriorityDelta;
  if ( !DVARINT_g_useWithinUseRangePriorityDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useWithinUseRangePriorityDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  integer = v19->current.integer;
  v21 = 1;
  if ( enabled )
    v21 = isWithinUseRange;
  __asm { vmovss  dword ptr [rsi], xmm6 }
  HintPriority = UsableRef_GetHintPriority(ref);
  *outPriority = HintPriority;
  if ( v21 )
  {
    if ( isUnderDirectLookInner && HintPriority > -250 )
    {
      *outPriority = -250;
    }
    else if ( isUnderDirectLookOuter && HintPriority > -200 )
    {
      v23 = HintPriority - 200;
      if ( v23 <= -250 )
        v23 = -249;
      *outPriority = v23;
    }
  }
  if ( isWithinUseRange && *outPriority != 0x80000000 && integer )
  {
    if ( -integer <= 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 359, ASSERT_TYPE_ASSERT, "( -useRangePriorityDelta > (( 1 ) - ( -10 )) )", (const char *)&queryFormat, "-useRangePriorityDelta > (PLAYER_USE_DATA_DEFINED_MAX_PRIORITY - PLAYER_USE_DATA_DEFINED_MIN_PRIORITY)") )
      __debugbreak();
    *outPriority += integer;
  }
  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass != USE_CLASS_SCRIPTABLE )
      goto LABEL_39;
    useIndex = ref->useIndex;
    Instance = GWeaponMap::GetInstance();
    v30 = !ScriptableSv_CanBeGrabbed(Instance, ps, useIndex);
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ref->useClass == USE_CLASS_GENTITY )
    {
      v26 = UsableRef_Internal_GetConstGentity(ref);
      if ( v26->s.eType == ET_MISSILE && (v26->hint.flags & 0x10) == 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vsubss  xmm1, xmm0, cs:__real@40000000
          vmovss  dword ptr [rsi], xmm1
        }
        if ( *outPriority != 0x80000000 )
          *outPriority = -300;
      }
    }
    if ( ConstGentity->s.eType != ET_ITEM )
      goto LABEL_39;
    v29 = GWeaponMap::GetInstance();
    v30 = BG_CanItemBeGrabbed(v29, &ConstGentity->s, ps, 0) == 0;
  }
  if ( !v30 )
  {
LABEL_39:
    result = 0;
    goto LABEL_40;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, cs:__real@461c4000
    vmovss  dword ptr [rsi], xmm1
  }
  *outPriority = 0x7FFFFFFF;
  result = 1;
LABEL_40:
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
UsableRef_GetUseTracePos
==============
*/
void UsableRef_GetUseTracePos(const UsableRef *ref, vec3_t *outUsePos)
{
  entityType_s eType; 
  bool IsEntityHintTagInvalid; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const entityState_t **tagInfo; 
  const entityState_t *v15; 
  entityType_s v16; 
  const DObj *ServerDObjForEnt; 
  Bounds outBounds; 
  tmat33_t<vec3_t> axis; 

  _RDI = outUsePos;
  if ( ref->useClass )
  {
    ScriptableSv_GetPartUsePosition(ref->useIndex, ref->useData, outUsePos);
  }
  else
  {
    _RBX = UsableRef_Internal_GetConstGentity(ref);
    eType = _RBX->s.eType;
    if ( eType == ET_TURRET )
    {
      G_Utils_DObjGetWorldTagPos_CheckTagExists(_RBX, (const scr_string_t)scr_const.tag_aim, 1, _RDI);
    }
    else if ( eType == ET_VEHICLE )
    {
      if ( G_Utils_GetModelBounds(_RBX, &outBounds) )
      {
        AnglesToAxis(&_RBX->r.currentAngles, &axis);
        MatrixTransformVector(&outBounds.midPoint, &axis, _RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vaddss  xmm1, xmm0, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmovss  xmm0, dword ptr [rbx+134h]
          vaddss  xmm1, xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm0, dword ptr [rbx+138h]
          vaddss  xmm1, xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm1
        }
      }
    }
    else
    {
      IsEntityHintTagInvalid = UsableRef_IsEntityHintTagInvalid(_RBX);
      if ( eType == ET_MISSILE )
      {
        if ( IsEntityHintTagInvalid )
        {
          _RDI->v[0] = _RBX->r.absBox.midPoint.v[0];
          _RDI->v[1] = _RBX->r.absBox.midPoint.v[1];
          _RDI->v[2] = _RBX->r.absBox.midPoint.v[2];
        }
        else
        {
          G_Utils_DObjGetWorldBoneIndexPos(_RBX, _RBX->hint.tag, _RDI);
        }
        if ( _RBX->tagInfo )
        {
          Instance = GWeaponMap::GetInstance();
          WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
          if ( BG_GetWeaponClass(WeaponForEntity, 0) == WEAPCLASS_THROWINGKNIFE )
          {
            tagInfo = (const entityState_t **)_RBX->tagInfo;
            v15 = *tagInfo;
            if ( *tagInfo )
            {
              if ( BG_IsCharacterEntity(*tagInfo) || BG_IsCorpseEntity(v15) )
              {
                _RDI->v[0] = v15[1].lerp.pos.trBase.v[1];
                _RDI->v[1] = v15[1].lerp.pos.trBase.v[2];
                _RDI->v[2] = v15[1].lerp.pos.trDelta.v[0];
              }
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 456, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
            {
              __debugbreak();
            }
          }
        }
      }
      else if ( IsEntityHintTagInvalid )
      {
        _RDI->v[0] = _RBX->r.absBox.midPoint.v[0];
        _RDI->v[1] = _RBX->r.absBox.midPoint.v[1];
        _RDI->v[2] = _RBX->r.absBox.midPoint.v[2];
        v16 = _RBX->s.eType;
        if ( v16 == ET_ITEM || v16 == ET_SCRIPTMOVER )
        {
          ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
          if ( ServerDObjForEnt )
          {
            DObjGetVisibleBounds(ServerDObjForEnt, &outBounds);
            AnglesToAxis(&_RBX->r.currentAngles, &axis);
            MatrixTransformVector(&outBounds.midPoint, &axis, _RDI);
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+130h]
              vaddss  xmm1, xmm0, dword ptr [rdi]
              vmovss  dword ptr [rdi], xmm1
              vmovss  xmm2, dword ptr [rbx+134h]
              vaddss  xmm0, xmm2, dword ptr [rdi+4]
              vmovss  dword ptr [rdi+4], xmm0
              vmovss  xmm1, dword ptr [rbx+138h]
              vaddss  xmm2, xmm1, dword ptr [rdi+8]
              vmovss  dword ptr [rdi+8], xmm2
            }
          }
        }
      }
      else
      {
        G_Utils_DObjGetWorldBoneIndexPos(_RBX, _RBX->hint.tag, _RDI);
      }
    }
  }
}

/*
==============
UsableRef_Internal_GetConstGentity
==============
*/
gentity_s *UsableRef_Internal_GetConstGentity(const UsableRef *ref)
{
  __int64 useIndex; 
  __int64 v4; 

  if ( ref->useClass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 125, ASSERT_TYPE_ASSERT, "( ref.useClass == USE_CLASS_GENTITY )", (const char *)&queryFormat, "ref.useClass == USE_CLASS_GENTITY") )
    __debugbreak();
  useIndex = (int)ref->useIndex;
  if ( (unsigned int)useIndex >= 0x800 )
  {
    LODWORD(v4) = ref->useIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[useIndex].r.isInUse != g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[useIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 126, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ref.useIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( ref.useIndex )") )
    __debugbreak();
  return &g_entities[ref->useIndex];
}

/*
==============
UsableRef_IsEntityHintTagInvalid
==============
*/
bool UsableRef_IsEntityHintTagInvalid(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 405, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return ((ent->hint.tag + 1) & 0xFFFFFEFF) == 0 || !Com_GetServerDObjForEnt(ent);
}

/*
==============
UsableRef_IsInUse
==============
*/
bool UsableRef_IsInUse(const UsableRef *ref)
{
  UsableClass useClass; 
  unsigned int useIndex; 

  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass == USE_CLASS_SCRIPTABLE )
      return ScriptableSv_GetInstanceInUse(ref->useIndex);
  }
  else
  {
    useIndex = ref->useIndex;
    if ( useIndex != 2047 && G_IsEntityInUse(useIndex) )
      return 1;
  }
  return 0;
}

/*
==============
UsableRef_IsLiveGrenade
==============
*/
bool UsableRef_IsLiveGrenade(const UsableRef *ref)
{
  gentity_s *ConstGentity; 
  bool result; 

  result = 0;
  if ( ref->useClass == USE_CLASS_GENTITY )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ConstGentity->s.eType == ET_MISSILE && (ConstGentity->hint.flags & 0x10) == 0 )
      return 1;
  }
  return result;
}

/*
==============
UsableRef_IsLookAtNeeded
==============
*/
bool UsableRef_IsLookAtNeeded(const UsableRef *ref)
{
  gentity_s *ConstGentity; 
  scr_string_t classname; 

  if ( ref->useClass )
    return 0;
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 166, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  classname = ConstGentity->classname;
  return (classname == scr_const.trigger_use_touch || classname == scr_const.trigger_use) && ConstGentity->c.trigger.requireLookAt;
}

/*
==============
UsableRef_IsLookingAt
==============
*/
bool UsableRef_IsLookingAt(const UsableRef *ref, const vec3_t *viewOrigin, const vec3_t *viewForward)
{
  char v33; 
  char v34; 
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm8, cs:__real@3f800000
  }
  _RSI = UsableRef_GetAbsBox(ref);
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm7, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm4, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm6, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm9, xmm2, xmm2
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm0, xmm9, xmm8, xmm0
    vdivss  xmm5, xmm8, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v33 )
  {
    result = 0;
  }
  else
  {
    __asm { vcomiss xmm9, xmm8 }
    if ( !(v33 | v34) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+14h]
        vmaxss  xmm2, xmm1, dword ptr [rsi+10h]
        vmaxss  xmm3, xmm2, dword ptr [rsi+0Ch]
        vmulss  xmm5, xmm0, xmm0
        vdivss  xmm4, xmm3, xmm9
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm0, xmm8
        vdivss  xmm1, xmm8, xmm1
        vcomiss xmm5, xmm1
      }
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
  return result;
}

/*
==============
UsableRef_IsOwnedBy
==============
*/
bool UsableRef_IsOwnedBy(const UsableRef *ref, const gentity_s *player)
{
  gentity_s *ConstGentity; 
  gentity_s *v4; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  int v16; 

  if ( ref->useClass )
    return 0;
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  v4 = ConstGentity;
  if ( ConstGentity->s.eType == ET_TURRET )
    return ConstGentity->s.otherEntityNum == player->s.number;
  number = ConstGentity->r.ownerNum.number;
  if ( !number )
    return 0;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    v16 = 2048;
    v14 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v15) = v4->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  v10 = v4->r.ownerNum.number;
  if ( !v10 )
    return 0;
  if ( (unsigned int)v10 - 1 >= 0x7FF )
  {
    LODWORD(v15) = 2047;
    LODWORD(v13) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  v11 = v4->r.ownerNum.number;
  if ( (unsigned int)(v11 - 1) >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v13) = v11 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = v11 - 1;
  if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v12] )
  {
    LODWORD(v15) = v4->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  return v4->r.ownerNum.number - 1 == player->s.number;
}

/*
==============
UsableRef_IsPriorityOverLook
==============
*/
bool UsableRef_IsPriorityOverLook(const UsableRef *ref)
{
  gentity_s *ConstGentity; 

  if ( ref->useClass )
    return 0;
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 178, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  return ConstGentity->hint.flags >> 7;
}

/*
==============
UsableRef_IsTouchNeeded
==============
*/
bool UsableRef_IsTouchNeeded(const UsableRef *ref)
{
  gentity_s *ConstGentity; 

  if ( ref->useClass )
    return 0;
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 159, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  return ConstGentity->classname == scr_const.trigger_use_touch;
}

/*
==============
UsableRef_IsTouching
==============
*/
bool UsableRef_IsTouching(const UsableRef *ref, const Bounds *bounds)
{
  gentity_s *ConstGentity; 
  bool v6; 
  bool v7; 
  unsigned int Instance; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 964, ASSERT_TYPE_ASSERT, "( bounds )", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( ref->useClass )
    return 0;
  if ( UsableRef_Internal_GetConstGentity(ref) == (gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 968, ASSERT_TYPE_ASSERT, "( UsableRef_GetAbsBox( ref ) )", (const char *)&queryFormat, "UsableRef_GetAbsBox( ref )") )
    __debugbreak();
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1419, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1420, ASSERT_TYPE_ASSERT, "( ( bounds != nullptr ) )", "%s\n\t( bounds ) = %p", "( bounds != nullptr )", NULL) )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ConstGentity->s.lerp.eFlags, ACTIVE, 0) )
    return 0;
  _RDI = &ConstGentity->r.absBox;
  if ( ConstGentity == (gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  v6 = bounds == NULL;
  if ( !bounds )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm1
  }
  if ( !v6 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm2, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+10h]
    vaddss  xmm0, xmm1, dword ptr [rbx+10h]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm0
  }
  if ( !v6 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rdi+14h]
    vaddss  xmm0, xmm1, dword ptr [rbx+14h]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm0
  }
  if ( !v6 )
    return 0;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ConstGentity);
  return PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, bounds, Instance, ConstGentity) != 0;
}

/*
==============
UsableRef_IsTraceNeeded
==============
*/
bool UsableRef_IsTraceNeeded(const UsableRef *ref)
{
  return ref->useClass || UsableRef_Internal_GetConstGentity(ref)->classname != scr_const.trigger_use_touch;
}

/*
==============
UsableRef_Print
==============
*/
void UsableRef_Print(int index, const UsableRef *ref, const char *message)
{
  const dvar_t *v3; 
  UsableClass useClass; 
  gentity_s *ConstGentity; 
  scr_string_t targetname; 
  const char *v10; 
  const char *EntityTypeName; 

  v3 = DVARBOOL_g_debugUsables;
  if ( !DVARBOOL_g_debugUsables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUsables") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1577, ASSERT_TYPE_ASSERT, "( message )", (const char *)&queryFormat, "message") )
      __debugbreak();
    useClass = ref->useClass;
    if ( useClass )
    {
      if ( useClass == USE_CLASS_SCRIPTABLE && ScriptableSv_GetInstanceInUse(ref->useIndex) )
      {
LABEL_16:
        if ( ref->useClass == USE_CLASS_GENTITY )
        {
          ConstGentity = UsableRef_Internal_GetConstGentity(ref);
          targetname = ConstGentity->targetname;
          if ( targetname )
            v10 = SL_ConvertToString(targetname);
          else
            v10 = "unnamed";
          EntityTypeName = G_GetEntityTypeName(ConstGentity);
          Com_Printf(24, "[UsableRef] %3d [%3d %15s %20s] %s\n", (unsigned int)index, ref->useIndex, EntityTypeName, v10, message);
        }
        return;
      }
    }
    else if ( ref->useIndex != 2047 && G_IsEntityInUse(ref->useIndex) )
    {
      goto LABEL_16;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1578, ASSERT_TYPE_ASSERT, "( UsableRef_IsInUse( ref ) )", (const char *)&queryFormat, "UsableRef_IsInUse( ref )") )
      __debugbreak();
    goto LABEL_16;
  }
}

/*
==============
UsableRef_SetCursorHintFlagFromClientHintFlags
==============
*/
void UsableRef_SetCursorHintFlagFromClientHintFlags(ClientHintFlags itemFlags, ClientHintFlags flagTest, CursorHintFlags flagSet, __int16 *outCursorHints)
{
  __int16 v4; 

  v4 = *outCursorHints;
  if ( ((unsigned __int8)itemFlags & (unsigned __int8)flagTest) != 0 )
    *outCursorHints = flagSet | v4;
  else
    *outCursorHints = v4 & ~(_WORD)flagSet;
}

/*
==============
UsableRef_SetCursorHintFlagFromEntityHintFlags
==============
*/
void UsableRef_SetCursorHintFlagFromEntityHintFlags(const UsableRef *ref, unsigned int flagTest, CursorHintFlags flagSet, __int16 *outCursorHints)
{
  UsableClass useClass; 
  __int16 v6; 
  unsigned __int8 v7; 
  gentity_s *ConstGentity; 
  __int16 v10; 
  int v11; 

  useClass = ref->useClass;
  v6 = flagSet;
  v7 = flagTest;
  if ( useClass )
  {
    v11 = (unsigned __int8)useClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 870, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_GENTITY )", "%s == %s\n\t%i, %i", "ref.useClass", "USE_CLASS_GENTITY", v11, 0i64) )
      __debugbreak();
  }
  ConstGentity = UsableRef_Internal_GetConstGentity(ref);
  v10 = *outCursorHints;
  if ( (v7 & ConstGentity->hint.flags) != 0 )
    *outCursorHints = v6 | v10;
  else
    *outCursorHints = v10 & ~v6;
}

/*
==============
UsableRef_ShouldHideOnObstruction
==============
*/
bool UsableRef_ShouldHideOnObstruction(const UsableRef *ref)
{
  UsableClass useClass; 
  bool result; 
  const ScriptableStateUsableDef *PartStateUsableDef; 

  useClass = ref->useClass;
  if ( useClass == USE_CLASS_GENTITY )
    return UsableRef_Internal_GetConstGentity(ref)->hint.onObstruction == HIDE;
  if ( useClass != USE_CLASS_SCRIPTABLE )
    return 1;
  result = ScriptableSv_GetPartIsUsable(ref->useIndex, ref->useData);
  if ( result )
  {
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1031, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
      __debugbreak();
    return !PartStateUsableDef->usableWhenObstructed;
  }
  return result;
}

/*
==============
UsableScriptableStatePartDef_GetRadiusFov
==============
*/
void UsableScriptableStatePartDef_GetRadiusFov(const ScriptableStateUsableDef *const stateUsableDef, float *outUseRadius, float *outUseFOV, float *outFaceFOV, float *outDisplayRadius, float *outDisplayFOV, bool *outUse2DFOV)
{
  char v12; 
  bool v13; 
  bool v14; 
  const dvar_t *v17; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RDI = outUseFOV;
  _RSI = outUseRadius;
  v12 = 0;
  v13 = stateUsableDef == NULL;
  if ( !stateUsableDef )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1549, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL);
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm { vmovss  xmm6, cs:__real@3c23d70a }
  *_RSI = stateUsableDef->useRadius;
  *_RDI = stateUsableDef->useFOV;
  *outFaceFOV = stateUsableDef->faceFOV;
  _R14 = outDisplayRadius;
  *outDisplayRadius = stateUsableDef->useRadiusDisplay;
  *outUse2DFOV = stateUsableDef->use2DFOV;
  __asm { vcomiss xmm6, dword ptr [rsi] }
  if ( !v13 )
  {
    v17 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    *_RSI = v17->current.value;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, cs:__real@bf7fbe77
  }
  if ( v12 )
  {
    _RBX = DCONST_DVARMPFLT_player_itemUseFOV;
    if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rdi], xmm0
    }
  }
  __asm { vcomiss xmm6, dword ptr [r14] }
  if ( !(v12 | v13) )
  {
    *outDisplayRadius = *_RSI;
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  _RAX = outDisplayFOV;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovss  dword ptr [rax], xmm0
  }
}

/*
==============
UsableWorld_Add
==============
*/
char UsableWorld_Add(const UsableRef *ref)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v2; 
  unsigned int v3; 
  unsigned __int64 m_size; 
  unsigned int v5; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v11; 
  UsableRef v12; 
  ntl::pair<unsigned int,UsableRef> *v14; 
  char v15; 
  bool v18; 
  int v20; 
  UsableClass useClass; 
  char v23; 
  char v24; 
  ntl::fixed_vector<unsigned int,2048,0> *v25; 
  ntl::fixed_vector<unsigned int,2048,0> *v26; 
  UsableClass v29; 
  DenseGrid *v30; 
  vec3_t *p_origin; 
  unsigned __int16 v32; 
  char *fmt; 
  __int64 v34; 
  __int64 v35; 
  _BYTE v36[12]; 

  v2 = UsableWorldCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1866, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  v3 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  m_size = v2->m_size;
  v5 = v3;
  m_buffer = v2->m_data.m_buffer;
  v7 = m_size;
  v8 = (__int64)(12 * m_size) / 12;
  while ( v8 > 0 )
  {
    if ( m_buffer[v8 >> 1].first >= v3 )
    {
      v8 >>= 1;
    }
    else
    {
      m_buffer += (v8 >> 1) + 1;
      v8 += -1 - (v8 >> 1);
    }
  }
  v9 = (__int64)&v2->m_data.m_buffer[m_size];
  if ( m_buffer == (ntl::pair<unsigned int,UsableRef> *)v9 )
    goto LABEL_14;
  if ( v3 < m_buffer->first )
  {
    m_buffer = &v2->m_data.m_buffer[m_size];
    v7 = v2->m_size;
  }
  if ( m_buffer == (ntl::pair<unsigned int,UsableRef> *)v9 )
  {
LABEL_14:
    if ( v7 < UsableWorld_GetUsableLimit() )
    {
      v11 = v2->m_size;
      v12 = *ref;
      _RDI = v2->m_data.m_buffer;
      *(_DWORD *)v36 = v5;
      v14 = _RDI;
      *(UsableRef *)&v36[4] = v12;
      if ( v11 > 0 )
      {
        do
        {
          if ( _RDI[v11 >> 1].first >= v5 )
          {
            v11 >>= 1;
          }
          else
          {
            _RDI += (v11 >> 1) + 1;
            v11 += -1 - (v11 >> 1);
          }
        }
        while ( v11 > 0 );
        v11 = v2->m_size;
      }
      if ( _RDI != &v14[v11] )
      {
        v15 = 0;
        if ( v5 >= _RDI->first )
          goto LABEL_74;
      }
      if ( v2->m_data.m_size == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (_RDI < v2->m_data.m_buffer || _RDI > &v2->m_data.m_buffer[v2->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (char *)_RDI - (char *)v2->m_data.m_buffer != 12 * ((unsigned __int64)((char *)_RDI - (char *)v2->m_data.m_buffer) / 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v36 >= (_BYTE *)_RDI && (ntl::pair<unsigned int,UsableRef> *)v36 < &v2->m_data.m_buffer[v2->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      _RBX = (unsigned __int64)&v2->m_data.m_buffer[v2->m_size];
      if ( _RDI != (ntl::pair<unsigned int,UsableRef> *)_RBX )
      {
        _RSI = _RBX + 12;
        if ( _RDI == (ntl::pair<unsigned int,UsableRef> *)(_RBX + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v18 = _RBX <= (unsigned __int64)_RDI;
        if ( _RBX < (unsigned __int64)_RDI )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v18 = _RBX <= (unsigned __int64)_RDI;
        }
        if ( !v18 )
        {
          do
          {
            __asm { vmovsd  xmm0, qword ptr [rbx-0Ch] }
            _RBX -= 12i64;
            _RSI -= 12i64;
            __asm { vmovsd  qword ptr [rsi], xmm0 }
            *(_DWORD *)(_RSI + 8) = *(_DWORD *)(_RBX + 8);
          }
          while ( _RBX > (unsigned __int64)_RDI );
        }
      }
      ++v2->m_size;
      v20 = *(_DWORD *)&v36[8];
      v15 = 1;
      __asm
      {
        vmovsd  xmm0, [rsp+68h+var_28]
        vmovsd  qword ptr [rdi], xmm0
      }
      *(_DWORD *)&_RDI->second.usePartitionIndex = v20;
      useClass = ref->useClass;
      if ( useClass )
      {
        if ( useClass != USE_CLASS_SCRIPTABLE )
        {
          LODWORD(v35) = 1;
          LODWORD(v34) = (unsigned __int8)useClass;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1611, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v34, v35) )
            __debugbreak();
        }
        ++s_usableWorldCountScriptables;
      }
      else
      {
        ++s_usableWorldCountEntities;
      }
      *(double *)&_XMM0 = UsableRef_GetUseRadius(ref);
      __asm { vcomiss xmm0, cs:__real@43700000 }
      if ( !(v23 | v24) )
      {
        v25 = &s_usableLargeRadiusList;
        v26 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
        if ( &s_usableLargeRadiusList == v26 )
        {
LABEL_61:
          v25 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
        }
        else
        {
          while ( *(_DWORD *)v25->m_data.m_buffer != v5 )
          {
            v25 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)v25 + 4);
            if ( v25 == v26 )
              goto LABEL_61;
          }
        }
        if ( v25 == v26 )
        {
          if ( s_usableLargeRadiusList.m_size < 0x800 )
          {
            *(_DWORD *)v26->m_data.m_buffer = v5;
            ++s_usableLargeRadiusList.m_size;
          }
          else
          {
            __asm
            {
              vmovsd  xmm2, cs:__real@406e000000000000
              vmovq   r8, xmm2
            }
            Com_PrintError(15, "Too many usables with a use radius that exceeds PLAYER_USE_SEARCH_RADIUS (%f). The limit of PLAYER_USE_LARGE_RADIUS_LIST_LIMIT is %d.", _R8, 2048i64);
          }
        }
      }
      v29 = ref->useClass;
      if ( v29 )
      {
        if ( v29 != USE_CLASS_SCRIPTABLE )
        {
          LODWORD(v35) = 1;
          LODWORD(v34) = (unsigned __int8)v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1642, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v34, v35) )
            __debugbreak();
        }
        v30 = UsableScriptableDenseGrid_Get();
        p_origin = &ScriptableSv_GetInstanceCommonContext(ref->useIndex)->origin;
      }
      else
      {
        v30 = UsableEntityDenseGrid_Get();
        p_origin = &UsableRef_GetEntity(ref)->r.currentOrigin;
      }
      v32 = DenseGrid::Insert(v30, v5, (const vec2_t *)p_origin);
      _RDI->second.usePartitionIndex = v32;
      if ( v32 == 0xFFFF )
      {
        return 0;
      }
      else
      {
LABEL_74:
        UsableRef_Print(0, ref, "ADD Success");
        return v15;
      }
    }
    else
    {
      LODWORD(fmt) = UsableWorld_GetUsableLimit();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93B50, 880i64, v2->m_size, fmt);
      return 0;
    }
  }
  else
  {
    UsableRef_Print(0, ref, "ADD Failed: Already mapped");
    return 1;
  }
}

/*
==============
UsableWorld_Allocate
==============
*/
void UsableWorld_Allocate(HunkUser *hunkUser)
{
  UsableWorldCollection_Allocate(hunkUser);
  UsableClientMaskCollection_Allocate(hunkUser);
  PlayerUseDataMap_Allocate(hunkUser);
  UsableEntityDenseGrid_Allocate(hunkUser);
  UsableScriptableDenseGrid_Allocate(hunkUser);
}

/*
==============
UsableWorld_CountEntities
==============
*/
__int64 UsableWorld_CountEntities()
{
  return s_usableWorldCountEntities;
}

/*
==============
UsableWorld_CountScriptables
==============
*/
__int64 UsableWorld_CountScriptables()
{
  return s_usableWorldCountScriptables;
}

/*
==============
UsableWorld_DebugDrawAll
==============
*/
void UsableWorld_DebugDrawAll()
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v1; 
  const char *v2; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  UsableClass useClass; 
  int useIndex; 
  const UsableRef *p_second; 
  bool v11; 
  UsableClass v12; 
  char *v13; 
  UsableClass v14; 
  const char *v15; 
  vec3_t *p_origin; 
  __int64 v19; 
  __int64 v20; 

  v1 = UsableWorldCollection_Get();
  while ( 1 )
  {
    if ( !s_usableDebugDrawLock )
    {
      if ( ((unsigned __int8)&s_usableDebugDrawLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", s_usableDebugDrawLock + 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_usableDebugDrawLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(&s_usableDebugDrawLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  v2 = j_va("%i Usables", LODWORD(v1->m_size));
  __asm
  {
    vmovss  xmm0, cs:__real@42480000; x
    vmovss  xmm3, cs:__real@3f800000; scale
    vmovaps xmm1, xmm0; y
  }
  G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorWhite, *(float *)&_XMM3, v2);
  m_buffer = v1->m_data.m_buffer;
  if ( v1->m_data.m_buffer != &v1->m_data.m_buffer[v1->m_size] )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f000000
    }
    while ( 1 )
    {
      useClass = m_buffer->second.useClass;
      if ( useClass )
      {
        if ( useClass == USE_CLASS_SCRIPTABLE )
        {
          p_second = &m_buffer->second;
          v11 = !ScriptableSv_GetInstanceInUse(m_buffer->second.useIndex);
LABEL_15:
          if ( !v11 )
          {
            v12 = m_buffer->second.useClass;
            if ( (unsigned __int8)v12 >= USE_CLASS_COUNT )
            {
              LODWORD(v20) = 2;
              LODWORD(v19) = (unsigned __int8)v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2113, ASSERT_TYPE_ASSERT, "(unsigned)( ref.useClass ) < (unsigned)( ( sizeof( *array_counter( s_usableWorldUseClassName ) ) + 0 ) )", "ref.useClass doesn't index s_usableWorldUseClassName\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            v13 = j_va("Usable %s %i (%i)", s_usableWorldUseClassName[(unsigned __int8)m_buffer->second.useClass], p_second->useIndex, m_buffer->second.useData);
            v14 = m_buffer->second.useClass;
            v15 = v13;
            if ( v14 )
            {
              if ( v14 == USE_CLASS_SCRIPTABLE )
                p_origin = &ScriptableSv_GetInstanceCommonContext(p_second->useIndex)->origin;
              else
                p_origin = &vec3_origin;
            }
            else
            {
              p_origin = &UsableRef_Internal_GetConstGentity(p_second)->r.currentOrigin;
            }
            __asm { vmovaps xmm2, xmm6; scale }
            G_Main_AddDebugString(p_origin, &colorWhite, *(float *)&_XMM2, v15);
          }
        }
      }
      else
      {
        useIndex = m_buffer->second.useIndex;
        p_second = &m_buffer->second;
        if ( useIndex != 2047 )
        {
          v11 = G_IsEntityInUse(useIndex) == 0;
          goto LABEL_15;
        }
      }
      if ( ++m_buffer == &v1->m_data.m_buffer[v1->m_size] )
      {
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
        break;
      }
    }
  }
  if ( ((unsigned __int64)&s_usableDebugDrawLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_usableDebugDrawLock) )
    __debugbreak();
  _InterlockedExchange(&s_usableDebugDrawLock, 0);
}

/*
==============
UsableWorld_EraseClientbitMask
==============
*/
void UsableWorld_EraseClientbitMask(const unsigned int key)
{
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v2; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  ntl::pair<unsigned int,ClientBits> *v4; 
  __int64 m_size; 
  unsigned __int64 v6; 
  __int64 v7; 
  ntl::pair<unsigned int,ClientBits> *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  ntl::pair<unsigned int,ClientBits> *v11; 
  ntl::pair<unsigned int,ClientBits> *v12; 
  ntl::pair<unsigned int,ClientBits> *v14; 
  bool v15; 

  v2 = UsableClientMaskCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2026, ASSERT_TYPE_ASSERT, "( usableClientMasks )", (const char *)&queryFormat, "usableClientMasks") )
    __debugbreak();
  m_buffer = v2->m_data.m_buffer;
  v4 = v2->m_data.m_buffer;
  m_size = v2->m_size;
  v6 = m_size;
  if ( m_size > 0 )
  {
    do
    {
      v7 = m_size >> 1;
      if ( v4[v7].first >= key )
      {
        m_size >>= 1;
      }
      else
      {
        v4 = (ntl::pair<unsigned int,ClientBits> *)((char *)v4 + v7 * 32 + 32);
        m_size += -1 - (m_size >> 1);
      }
    }
    while ( m_size > 0 );
    v6 = v2->m_size;
  }
  v8 = &m_buffer[v6];
  if ( v4 != v8 )
  {
    v9 = (unsigned __int64)&m_buffer[v2->m_size];
    if ( key >= v4->first )
      v9 = (unsigned __int64)v4;
    if ( key < v4->first )
      v6 = v2->m_size;
    if ( (ntl::pair<unsigned int,ClientBits> *)v9 != v8 )
    {
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( ((ntl::pair<unsigned int,ClientBits> *)v9 < v2->m_data.m_buffer || (ntl::pair<unsigned int,ClientBits> *)v9 > &v2->m_data.m_buffer[v2->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)v9 - LOBYTE(v2->m_data.m_buffer)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( (ntl::pair<unsigned int,ClientBits> *)v9 == &v2->m_data.m_buffer[v2->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v10 = v2->m_size;
      v11 = v2->m_data.m_buffer;
      v12 = v2->m_data.m_buffer;
      if ( v10 )
        v12 = (ntl::pair<unsigned int,ClientBits> *)((char *)v12 + ((v9 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFE0ui64));
      _RBX = v12 + 1;
      v14 = &v11[v10];
      if ( &v12[1] == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v14 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v15 = _RBX < v14;
      if ( _RBX > v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v15 = _RBX < v14;
      }
      if ( v15 )
      {
        _RAX = v12;
        do
        {
          __asm { vmovups ymm0, ymmword ptr [rbx] }
          ++_RBX;
          __asm { vmovups ymmword ptr [rax], ymm0 }
          ++_RAX;
        }
        while ( _RBX < v14 );
      }
      --v2->m_size;
    }
  }
}

/*
==============
UsableWorld_Free
==============
*/
void UsableWorld_Free(void)
{
  UsableScriptableDenseGrid_Free();
  UsableEntityDenseGrid_Free();
  PlayerUseDataMap_Free();
  UsableClientMaskCollection_Free();
  UsableWorldCollection_Free();
}

/*
==============
UsableWorld_GetClientMask
==============
*/
ClientBits *UsableWorld_GetClientMask(const unsigned int key)
{
  unsigned __int64 *v2; 
  __int64 v3; 
  const unsigned int *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  const unsigned int *v10; 
  ClientBits *result; 
  __int64 v14; 
  bool v17; 
  __int128 v20; 
  __int64 v21; 
  __m256i v22; 

  v2 = (unsigned __int64 *)UsableClientMaskCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1989, ASSERT_TYPE_ASSERT, "( usableClientMasks )", (const char *)&queryFormat, "usableClientMasks") )
    __debugbreak();
  v3 = v2[2];
  _RDI = *v2;
  v5 = (const unsigned int *)*v2;
  v6 = *v2 + 32 * v3;
  v7 = v3;
  v8 = v3;
  if ( v3 > 0 )
  {
    do
    {
      v9 = 8 * (v7 >> 1);
      if ( v5[v9] >= key )
      {
        v7 >>= 1;
      }
      else
      {
        v5 = (const unsigned int *)((char *)v5 + v9 * 4 + 32);
        v7 += -1 - (v7 >> 1);
      }
    }
    while ( v7 > 0 );
    v8 = v2[2];
  }
  v10 = (const unsigned int *)(_RDI + 32 * v8);
  if ( v5 != v10 )
  {
    if ( key >= *v5 )
      v6 = (__int64)v5;
    if ( key < *v5 )
      v8 = v2[2];
    if ( (const unsigned int *)v6 != v10 )
      return (ClientBits *)(v6 + 4);
  }
  if ( v8 < 0x3E8 )
  {
    *(_QWORD *)&v20 = -1i64;
    *((_QWORD *)&v20 + 1) = -1i64;
    v21 = -1i64;
    v22.m256i_i32[0] = key;
    v22.m256i_i32[7] = -1;
    __asm
    {
      vmovups xmm0, [rsp+88h+var_58]
      vmovsd  xmm1, [rsp+88h+var_48]
      vmovups xmmword ptr [rsp+88h+var_38+4], xmm0
      vmovsd  qword ptr [rsp+88h+var_38+14h], xmm1
    }
    if ( v3 > 0 )
    {
      do
      {
        v14 = 32 * (v3 >> 1);
        if ( *(_DWORD *)(v14 + _RDI) >= key )
        {
          v3 >>= 1;
        }
        else
        {
          _RDI += v14 + 32;
          v3 += -1 - (v3 >> 1);
        }
      }
      while ( v3 > 0 );
      v3 = v2[2];
    }
    if ( (const unsigned int *)_RDI == v10 || key < *(_DWORD *)_RDI )
    {
      if ( v2[1] == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (_RDI < *v2 || _RDI > *v2 + 32 * v2[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)_RDI - *(_BYTE *)v2) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( (unsigned __int64)&v22 >= _RDI && (unsigned __int64)&v22 < *v2 + 32 * v2[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      _RBX = *v2 + 32 * v2[2];
      if ( _RDI != _RBX )
      {
        _RSI = _RBX + 32;
        if ( _RDI == _RBX + 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v17 = _RBX <= _RDI;
        if ( _RBX < _RDI )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v17 = _RBX <= _RDI;
        }
        if ( !v17 )
        {
          do
          {
            __asm { vmovups ymm0, ymmword ptr [rbx-20h] }
            _RBX -= 32i64;
            _RSI -= 32i64;
            __asm { vmovups ymmword ptr [rsi], ymm0 }
          }
          while ( _RBX > _RDI );
        }
      }
      __asm { vmovups ymm0, [rsp+88h+var_38] }
      ++v2[2];
      result = (ClientBits *)(_RDI + 4);
      __asm { vmovups ymmword ptr [rdi], ymm0 }
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93CC8, 882i64);
      return 0i64;
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93C70, 881i64);
    return 0i64;
  }
  return result;
}

/*
==============
UsableWorld_GetLargeRadiusList
==============
*/
ntl::fixed_vector<unsigned int,2048,0> *UsableWorld_GetLargeRadiusList()
{
  return &s_usableLargeRadiusList;
}

/*
==============
UsableWorld_Init
==============
*/
void UsableWorld_Init(void)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v0; 
  unsigned __int64 i; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v2; 
  unsigned __int64 j; 
  PlayerUseDataMap *v4; 

  s_usableWorldCountEntities = 0;
  s_usableWorldCountScriptables = 0;
  v0 = UsableWorldCollection_Get();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1694, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  for ( i = 0i64; i < v0->m_size; ++i )
  {
    if ( i >= v0->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
      __debugbreak();
  }
  v0->m_size = 0i64;
  v2 = UsableClientMaskCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1698, ASSERT_TYPE_ASSERT, "( usableClientMasks )", (const char *)&queryFormat, "usableClientMasks") )
    __debugbreak();
  for ( j = 0i64; j < v2->m_size; ++j )
  {
    if ( j >= v2->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
      __debugbreak();
  }
  v2->m_size = 0i64;
  v4 = PlayerUseDataMap_Get();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1702, ASSERT_TYPE_ASSERT, "( playerUseDataMap )", (const char *)&queryFormat, "playerUseDataMap") )
    __debugbreak();
  PlayerUseDataMap_Clear(v4);
  UsableWorld_SetLootHidden(0);
  memset_0(&s_usableLargeRadiusList, 0, sizeof(s_usableLargeRadiusList));
}

/*
==============
UsableWorld_Read
==============
*/
void UsableWorld_Read(SaveGame *save)
{
  MemoryFile *p_memFile; 
  SaveGame *v2; 
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v6; 
  __int64 v7; 
  __int64 m_size; 
  __int64 v9; 
  __int64 v11; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  bool v15; 
  int v17; 
  unsigned __int64 v19; 
  signed __int64 v20; 
  char *v21; 
  char *v22; 
  __int64 v23; 
  ntl::fixed_vector<unsigned int,2048,0> *v24; 
  ntl::fixed_vector<unsigned int,2048,0> *v25; 
  ntl::fixed_vector<unsigned int,2048,0> *v26; 
  unsigned __int64 v27; 
  signed __int64 v28; 
  bool v29; 
  char *v30; 
  unsigned __int64 v31; 
  char *v32; 
  unsigned int fmt; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  _DWORD v37[8]; 
  SaveGame *v38; 
  unsigned int p; 
  int v40; 
  MemoryFile *memFile; 

  v38 = save;
  p_memFile = &save->memFile;
  v2 = save;
  memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 2ui64, &p);
  v3 = (unsigned __int16)p;
  v4 = (unsigned __int16)p;
  v40 = (unsigned __int16)p;
  if ( v3 >= UsableWorld_GetUsableLimit() )
  {
    fmt = UsableWorld_GetUsableLimit();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93800, 879i64, v3, fmt);
    return;
  }
  v5 = 0i64;
  v6 = UsableWorldCollection_Get();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1824, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( v6->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1825, ASSERT_TYPE_ASSERT, "( usableWorld->size() == 0u )", (const char *)&queryFormat, "usableWorld->size() == 0u") )
    __debugbreak();
  s_usableWorldCountEntities = 0;
  s_usableWorldCountScriptables = 0;
  if ( (_WORD)v3 )
  {
    v7 = (unsigned __int16)v3;
    do
    {
      MemFile_ReadData(p_memFile, 4ui64, &p);
      MemFile_ReadData(p_memFile, 8ui64, &v36);
      m_size = v6->m_size;
      v9 = m_size;
      _RSI = v6->m_data.m_buffer;
      v11 = m_size;
      m_buffer = v6->m_data.m_buffer;
      v37[0] = p;
      *(_QWORD *)&v37[1] = v36;
      while ( v9 > 0 )
      {
        if ( _RSI[v9 >> 1].first >= p )
        {
          v9 >>= 1;
        }
        else
        {
          _RSI += (v9 >> 1) + 1;
          v9 += -1 - (v9 >> 1);
        }
      }
      if ( _RSI == &m_buffer[m_size] || (v11 = m_size, p < _RSI->first) )
      {
        if ( v6->m_data.m_size == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( (_RSI < v6->m_data.m_buffer || _RSI > &v6->m_data.m_buffer[v6->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( (char *)_RSI - (char *)v6->m_data.m_buffer != 12 * ((unsigned __int64)((char *)_RSI - (char *)v6->m_data.m_buffer) / 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( v37 >= (_DWORD *)_RSI && (ntl::pair<unsigned int,UsableRef> *)v37 < &v6->m_data.m_buffer[v6->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        _RBX = (unsigned __int64)&v6->m_data.m_buffer[v6->m_size];
        if ( _RSI != (ntl::pair<unsigned int,UsableRef> *)_RBX )
        {
          _RDI = _RBX + 12;
          if ( _RSI == (ntl::pair<unsigned int,UsableRef> *)(_RBX + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v15 = _RBX <= (unsigned __int64)_RSI;
          if ( _RBX < (unsigned __int64)_RSI )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v15 = _RBX <= (unsigned __int64)_RSI;
          }
          if ( !v15 )
          {
            do
            {
              __asm { vmovsd  xmm0, qword ptr [rbx-0Ch] }
              _RBX -= 12i64;
              _RDI -= 12i64;
              __asm { vmovsd  qword ptr [rdi], xmm0 }
              *(_DWORD *)(_RDI + 8) = *(_DWORD *)(_RBX + 8);
            }
            while ( _RBX > (unsigned __int64)_RSI );
          }
          p_memFile = memFile;
        }
        ++v6->m_size;
        v17 = v37[2];
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+0A8h+var_60]
          vmovsd  qword ptr [rsi], xmm0
        }
        *(_DWORD *)&_RSI->second.usePartitionIndex = v17;
        if ( BYTE6(v36) )
        {
          if ( BYTE6(v36) != 1 )
          {
            LODWORD(v35) = 1;
            LODWORD(v34) = BYTE6(v36);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1611, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v34, v35) )
              __debugbreak();
          }
          ++s_usableWorldCountScriptables;
        }
        else
        {
          ++s_usableWorldCountEntities;
        }
      }
      --v7;
    }
    while ( v7 );
    v4 = v40;
    v5 = 0i64;
    v2 = v38;
  }
  if ( s_usableWorldCountEntities + s_usableWorldCountScriptables != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1844, ASSERT_TYPE_ASSERT, "( ( s_usableWorldCountEntities + s_usableWorldCountScriptables ) == count )", (const char *)&queryFormat, "( s_usableWorldCountEntities + s_usableWorldCountScriptables ) == count") )
    __debugbreak();
  UsableWorld_ReadClientMasks(v2);
  UsableEntityDenseGrid_Read(p_memFile);
  UsableScriptableDenseGrid_Read(p_memFile);
  MemFile_ReadData(p_memFile, 4ui64, &v38);
  v19 = (unsigned int)v38;
  if ( (unsigned int)v38 > 0x800 )
  {
    LODWORD(v35) = 2048;
    LODWORD(v34) = (_DWORD)v38;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1851, ASSERT_TYPE_ASSERT, "( largeRadiusListSize ) <= ( PLAYER_USE_LARGE_RADIUS_LIST_LIMIT )", "largeRadiusListSize <= PLAYER_USE_LARGE_RADIUS_LIST_LIMIT\n\t%i, %i", v34, v35) )
      __debugbreak();
  }
  if ( v19 >= s_usableLargeRadiusList.m_size )
  {
    v29 = s_usableLargeRadiusList.m_size == v19;
    if ( s_usableLargeRadiusList.m_size < v19 )
    {
      if ( v19 > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 394, ASSERT_TYPE_ASSERT, "( newSize <= max_size() )", (const char *)&queryFormat, "newSize <= max_size()") )
        __debugbreak();
      v30 = &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size];
      if ( s_usableLargeRadiusList.m_size < v19 )
      {
        v31 = v19 - s_usableLargeRadiusList.m_size;
        do
        {
          v32 = v30;
          v30 += 4;
          if ( v32 )
            *(_DWORD *)v32 = 0;
          --v31;
        }
        while ( v31 );
      }
      s_usableLargeRadiusList.m_size = v19;
      goto LABEL_93;
    }
  }
  else
  {
    v20 = 4 * s_usableLargeRadiusList.m_size;
    v21 = &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size];
    v22 = &s_usableLargeRadiusList.m_data.m_buffer[4 * v19];
    if ( v22 != v21 )
    {
      if ( (v22 < (char *)&s_usableLargeRadiusList || v22 > v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (v21 < (char *)&s_usableLargeRadiusList || v21 > &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v23 = (v21 - v22) >> 2;
      v24 = &s_usableLargeRadiusList;
      if ( s_usableLargeRadiusList.m_size )
        v24 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * v19);
      v25 = &s_usableLargeRadiusList;
      if ( s_usableLargeRadiusList.m_size )
        v25 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * (v20 >> 2));
      v26 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
      if ( v25 == v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v26 == v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v26 < v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v27 = (unsigned __int64)((char *)v26 - (char *)v25 + 3) >> 2;
      if ( v25 > v26 )
        v27 = 0i64;
      if ( v27 )
      {
        v28 = (char *)v25 - (char *)v24;
        do
        {
          ++v5;
          *(_DWORD *)v24->m_data.m_buffer = *(_DWORD *)&v24->m_data.m_buffer[v28];
          v24 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)v24 + 4);
        }
        while ( v5 < v27 );
      }
      s_usableLargeRadiusList.m_size -= v23;
    }
    p_memFile = memFile;
    v29 = s_usableLargeRadiusList.m_size == v19;
  }
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 402, ASSERT_TYPE_ASSERT, "( size() == newSize )", (const char *)&queryFormat, "size() == newSize") )
    __debugbreak();
LABEL_93:
  if ( s_usableLargeRadiusList.m_size != v19 )
  {
    LODWORD(v35) = v19;
    LODWORD(v34) = s_usableLargeRadiusList.m_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1854, ASSERT_TYPE_ASSERT, "( s_usableLargeRadiusList.size() ) == ( largeRadiusListSize )", "s_usableLargeRadiusList.size() == largeRadiusListSize\n\t%i, %i", v34, v35) )
      __debugbreak();
  }
  MemFile_ReadData(p_memFile, 4 * s_usableLargeRadiusList.m_size, &s_usableLargeRadiusList);
}

/*
==============
UsableWorld_ReadClientMasks
==============
*/
void UsableWorld_ReadClientMasks(SaveGame *save)
{
  MemoryFile *p_memFile; 
  unsigned __int16 v2; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v3; 
  __int64 v4; 
  __int64 m_size; 
  __int64 v7; 
  __int64 v8; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  __int64 v12; 
  bool v15; 
  unsigned int p; 
  __m256i v19; 
  __int128 v20; 
  int v22; 

  p_memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 2ui64, &p);
  v2 = p;
  if ( (unsigned __int16)p < 0x3E8u )
  {
    v3 = UsableClientMaskCollection_Get();
    if ( v3->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1758, ASSERT_TYPE_ASSERT, "( usableClientMasks->size() == 0u )", (const char *)&queryFormat, "usableClientMasks->size() == 0u") )
      __debugbreak();
    if ( v2 )
    {
      v4 = v2;
      do
      {
        MemFile_ReadData(p_memFile, 4ui64, &p);
        MemFile_ReadData(p_memFile, 0x1Cui64, &v20);
        m_size = v3->m_size;
        _RDI = v3->m_data.m_buffer;
        v7 = m_size;
        v8 = m_size;
        m_buffer = v3->m_data.m_buffer;
        v19.m256i_i32[0] = p;
        v19.m256i_i32[7] = v22;
        __asm
        {
          vmovups xmm0, [rsp+0A8h+var_50]
          vmovsd  xmm1, [rsp+0A8h+var_40]
          vmovups xmmword ptr [rsp+0A8h+var_70+4], xmm0
          vmovsd  qword ptr [rsp+0A8h+var_70+14h], xmm1
        }
        if ( m_size > 0 )
        {
          do
          {
            v12 = v7 >> 1;
            if ( _RDI[v12].first >= p )
            {
              v7 >>= 1;
            }
            else
            {
              _RDI = (ntl::pair<unsigned int,ClientBits> *)((char *)_RDI + v12 * 32 + 32);
              v7 += -1 - (v7 >> 1);
            }
          }
          while ( v7 > 0 );
          v8 = m_size;
        }
        if ( _RDI == &m_buffer[v8] || (v8 = m_size, p < _RDI->first) )
        {
          if ( v3->m_data.m_size == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (_RDI < v3->m_data.m_buffer || _RDI > &v3->m_data.m_buffer[v3->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (((_BYTE)_RDI - LOBYTE(v3->m_data.m_buffer)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( &v19 >= (__m256i *)_RDI && (ntl::pair<unsigned int,ClientBits> *)&v19 < &v3->m_data.m_buffer[v3->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          _RBX = (unsigned __int64)&v3->m_data.m_buffer[v3->m_size];
          if ( _RDI != (ntl::pair<unsigned int,ClientBits> *)_RBX )
          {
            _RSI = _RBX + 32;
            if ( _RDI == (ntl::pair<unsigned int,ClientBits> *)(_RBX + 32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v15 = _RBX <= (unsigned __int64)_RDI;
            if ( _RBX < (unsigned __int64)_RDI )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v15 = _RBX <= (unsigned __int64)_RDI;
            }
            if ( !v15 )
            {
              do
              {
                __asm { vmovups ymm0, ymmword ptr [rbx-20h] }
                _RBX -= 32i64;
                _RSI -= 32i64;
                __asm { vmovups ymmword ptr [rsi], ymm0 }
              }
              while ( _RBX > (unsigned __int64)_RDI );
            }
          }
          __asm { vmovups ymm0, [rsp+0A8h+var_70] }
          ++v3->m_size;
          __asm { vmovups ymmword ptr [rdi], ymm0 }
        }
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93650, 878i64);
  }
}

/*
==============
UsableWorld_Remove
==============
*/
bool UsableWorld_Remove(const UsableRef *ref)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v2; 
  unsigned int v3; 
  unsigned __int64 m_size; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  unsigned __int64 v6; 
  __int64 v7; 
  ntl::pair<unsigned int,UsableRef> *v8; 
  unsigned __int64 v9; 
  ntl::pair<unsigned int,UsableRef> *v10; 
  ntl::pair<unsigned int,UsableRef> *v11; 
  ntl::pair<unsigned int,UsableRef> *v13; 
  bool v14; 
  int v17; 

  v2 = UsableWorldCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1903, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  v3 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  m_size = v2->m_size;
  m_buffer = v2->m_data.m_buffer;
  v6 = (unsigned __int64)v2->m_data.m_buffer;
  v7 = (__int64)(12 * m_size) / 12;
  while ( v7 > 0 )
  {
    if ( *(_DWORD *)(v6 + 12 * (v7 >> 1)) >= v3 )
    {
      v7 >>= 1;
    }
    else
    {
      v6 += 12 * (v7 >> 1) + 12;
      v7 += -1 - (v7 >> 1);
    }
  }
  v8 = &m_buffer[m_size];
  if ( (ntl::pair<unsigned int,UsableRef> *)v6 == v8 )
    return 0;
  if ( v3 < *(_DWORD *)v6 )
    v6 = (unsigned __int64)&m_buffer[m_size];
  if ( (ntl::pair<unsigned int,UsableRef> *)v6 == v8 )
    return 0;
  UsableWorld_UntrackRef((const unsigned int *)v6, (const UsableRef *)(v6 + 4));
  if ( !v2->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( ((ntl::pair<unsigned int,UsableRef> *)v6 < v2->m_data.m_buffer || (ntl::pair<unsigned int,UsableRef> *)v6 > &v2->m_data.m_buffer[v2->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( v6 - (unsigned __int64)v2->m_data.m_buffer != 12 * ((v6 - (unsigned __int64)v2->m_data.m_buffer) / 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( (ntl::pair<unsigned int,UsableRef> *)v6 == &v2->m_data.m_buffer[v2->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v9 = v2->m_size;
  v10 = v2->m_data.m_buffer;
  v11 = v2->m_data.m_buffer;
  if ( v9 )
    v11 = &v10[(__int64)(v6 - (_QWORD)v10) / 12];
  _RBX = v11 + 1;
  v13 = &v10[v9];
  if ( &v11[1] == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v13 == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v14 = _RBX < v13;
  if ( _RBX > v13 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v14 = _RBX < v13;
  }
  if ( v14 )
  {
    _RCX = v11;
    do
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx]
        vmovsd  qword ptr [rcx], xmm0
      }
      v17 = *(_DWORD *)&_RBX->second.usePartitionIndex;
      ++_RBX;
      *(_DWORD *)&_RCX->second.usePartitionIndex = v17;
      ++_RCX;
    }
    while ( _RBX < v13 );
  }
  --v2->m_size;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1911, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
  return v11 != NULL;
}

/*
==============
UsableWorld_SetScriptableUseForClient
==============
*/
void UsableWorld_SetScriptableUseForClient(const UsableRef *ref, bool usable, const unsigned int clientNum)
{
  unsigned __int64 v3; 
  unsigned int v5; 
  ClientBits *ClientMask; 
  unsigned int v7; 

  v3 = clientNum;
  v5 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  ClientMask = UsableWorld_GetClientMask(v5);
  if ( ClientMask )
  {
    if ( usable )
    {
      if ( (unsigned int)v3 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 224) )
        __debugbreak();
      ClientMask->array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
    }
    else
    {
      if ( (unsigned int)v3 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 224) )
        __debugbreak();
      ClientMask->array[v3 >> 5] &= ~(0x80000000 >> (v3 & 0x1F));
    }
    v7 = 0;
    while ( ClientMask->array[0] == -1 )
    {
      ++v7;
      ClientMask = (ClientBits *)((char *)ClientMask + 4);
      if ( v7 >= 7 )
      {
        UsableWorld_EraseClientbitMask(v5);
        return;
      }
    }
  }
}

/*
==============
UsableWorld_SetScriptableUseForClientMask
==============
*/
void UsableWorld_SetScriptableUseForClientMask(const UsableRef *ref, bool usable, const ClientBits *newClientMask)
{
  unsigned int v5; 
  ClientBits *ClientMask; 
  unsigned int v7; 
  unsigned int v8; 

  v5 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  ClientMask = UsableWorld_GetClientMask(v5);
  if ( ClientMask )
  {
    v7 = newClientMask->array[0];
    if ( usable )
    {
      ClientMask->array[0] |= v7;
      ClientMask->array[1] |= newClientMask->array[1];
      ClientMask->array[2] |= newClientMask->array[2];
      ClientMask->array[3] |= newClientMask->array[3];
      ClientMask->array[4] |= newClientMask->array[4];
      ClientMask->array[5] |= newClientMask->array[5];
      ClientMask->array[6] |= newClientMask->array[6];
    }
    else
    {
      ClientMask->array[0] &= ~v7;
      ClientMask->array[1] &= ~newClientMask->array[1];
      ClientMask->array[2] &= ~newClientMask->array[2];
      ClientMask->array[3] &= ~newClientMask->array[3];
      ClientMask->array[4] &= ~newClientMask->array[4];
      ClientMask->array[5] &= ~newClientMask->array[5];
      ClientMask->array[6] &= ~newClientMask->array[6];
    }
    v8 = 0;
    while ( ClientMask->array[0] == -1 )
    {
      ++v8;
      ClientMask = (ClientBits *)((char *)ClientMask + 4);
      if ( v8 >= 7 )
      {
        UsableWorld_EraseClientbitMask(v5);
        return;
      }
    }
  }
}

/*
==============
UsableWorld_SetUseRadius
==============
*/

char __fastcall UsableWorld_SetUseRadius(const UsableRef *ref, double useRadius)
{
  unsigned int v4; 
  unsigned int *v5; 
  ntl::fixed_vector<unsigned int,2048,0> *v6; 
  char result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v4 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  v5 = (unsigned int *)&s_usableLargeRadiusList;
  v6 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  if ( &s_usableLargeRadiusList == v6 )
  {
LABEL_4:
    v5 = (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  }
  else
  {
    while ( *v5 != v4 )
    {
      if ( ++v5 == (unsigned int *)v6 )
        goto LABEL_4;
    }
  }
  if ( v5 == (unsigned int *)v6 )
  {
    __asm { vcomiss xmm6, cs:__real@43700000 }
    if ( v5 > (unsigned int *)v6 )
    {
      if ( s_usableLargeRadiusList.m_size >= 0x800 )
      {
        __asm
        {
          vmovsd  xmm2, cs:__real@406e000000000000
          vmovq   r8, xmm2
        }
        Com_PrintError(15, "Too many usables with a use radius that exceeds PLAYER_USE_SEARCH_RADIUS (%f). The limit of PLAYER_USE_LARGE_RADIUS_LIST_LIMIT is %d.", _R8, 2048i64);
        result = 0;
        __asm { vmovaps xmm6, [rsp+38h+var_18] }
        return result;
      }
      *(_DWORD *)v6->m_data.m_buffer = v4;
      ++s_usableLargeRadiusList.m_size;
    }
  }
  else
  {
    __asm { vcomiss xmm6, cs:__real@43700000 }
    if ( v5 <= (unsigned int *)v6 )
    {
      __asm { vmovaps xmm6, [rsp+38h+var_18] }
      return UsableLargeRadiusList_RemoveKey(v5);
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return 1;
}

/*
==============
UsableWorld_UntrackRef
==============
*/
void UsableWorld_UntrackRef(const unsigned int *key, const UsableRef *ref)
{
  char v5; 
  char v6; 
  unsigned int *v7; 
  ntl::fixed_vector<unsigned int,2048,0> *v8; 
  UsableClass useClass; 
  DenseGrid *v10; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v11; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  ntl::pair<unsigned int,ClientBits> *v13; 
  __int64 m_size; 
  unsigned __int64 v15; 
  __int64 v16; 
  ntl::pair<unsigned int,ClientBits> *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  ntl::pair<unsigned int,ClientBits> *v20; 
  ntl::pair<unsigned int,ClientBits> *v21; 
  ntl::pair<unsigned int,ClientBits> *v23; 

  *(double *)&_XMM0 = UsableRef_GetUseRadius(ref);
  __asm { vcomiss xmm0, cs:__real@43700000 }
  if ( !(v5 | v6) )
  {
    v7 = (unsigned int *)&s_usableLargeRadiusList;
    v8 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
    if ( &s_usableLargeRadiusList == v8 )
    {
LABEL_5:
      v7 = (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
    }
    else
    {
      while ( *v7 != *key )
      {
        if ( ++v7 == (unsigned int *)v8 )
          goto LABEL_5;
      }
    }
    if ( v7 == (unsigned int *)v8 )
      Com_PrintError(15, "Failed to remove usable %u from large radius list -- possible leak detected", *key);
    else
      UsableLargeRadiusList_RemoveKey(v7);
  }
  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1677, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", (unsigned __int8)useClass, 1) )
      __debugbreak();
    --s_usableWorldCountScriptables;
    v11 = UsableClientMaskCollection_Get();
    m_buffer = v11->m_data.m_buffer;
    v13 = v11->m_data.m_buffer;
    m_size = v11->m_size;
    v15 = m_size;
    if ( m_size > 0 )
    {
      do
      {
        v16 = m_size >> 1;
        if ( v13[v16].first >= *key )
        {
          m_size >>= 1;
        }
        else
        {
          v13 = (ntl::pair<unsigned int,ClientBits> *)((char *)v13 + v16 * 32 + 32);
          m_size += -1 - (m_size >> 1);
        }
      }
      while ( m_size > 0 );
      v15 = v11->m_size;
    }
    v17 = &m_buffer[v15];
    if ( v13 != v17 )
    {
      if ( *key < v13->first )
        v15 = v11->m_size;
      v18 = (unsigned __int64)&m_buffer[v11->m_size];
      if ( *key >= v13->first )
        v18 = (unsigned __int64)v13;
      if ( (ntl::pair<unsigned int,ClientBits> *)v18 != v17 )
      {
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
        if ( ((ntl::pair<unsigned int,ClientBits> *)v18 < v11->m_data.m_buffer || (ntl::pair<unsigned int,ClientBits> *)v18 > &v11->m_data.m_buffer[v11->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( (((_BYTE)v18 - LOBYTE(v11->m_data.m_buffer)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( (ntl::pair<unsigned int,ClientBits> *)v18 == &v11->m_data.m_buffer[v11->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
          __debugbreak();
        v19 = v11->m_size;
        v20 = v11->m_data.m_buffer;
        v21 = v11->m_data.m_buffer;
        if ( v19 )
          v21 = (ntl::pair<unsigned int,ClientBits> *)((char *)v21 + ((v18 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFE0ui64));
        _RBX = v21 + 1;
        v23 = &v20[v19];
        if ( &v21[1] == v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v23 == v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        if ( v23 < _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        if ( _RBX < v23 )
        {
          _RAX = v21;
          do
          {
            __asm { vmovups ymm0, ymmword ptr [rbx] }
            ++_RBX;
            __asm { vmovups ymmword ptr [rax], ymm0 }
            ++_RAX;
          }
          while ( _RBX < v23 );
        }
        --v11->m_size;
      }
    }
    v10 = UsableScriptableDenseGrid_Get();
  }
  else
  {
    --s_usableWorldCountEntities;
    v10 = UsableEntityDenseGrid_Get();
  }
  DenseGrid::Remove(v10, *key, ref->usePartitionIndex);
}

/*
==============
UsableWorld_UpdateOrigin
==============
*/
void UsableWorld_UpdateOrigin(const UsableRef *ref, const vec3_t *origin)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v4; 
  unsigned int v5; 
  unsigned __int64 m_size; 
  ntl::pair<unsigned int,UsableRef> *m_buffer; 
  ntl::pair<unsigned int,UsableRef> *v8; 
  __int64 v9; 
  ntl::pair<unsigned int,UsableRef> *v10; 
  DenseGrid *v11; 

  v4 = UsableWorldCollection_Get();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1924, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  v5 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  m_size = v4->m_size;
  m_buffer = v4->m_data.m_buffer;
  v8 = v4->m_data.m_buffer;
  v9 = (__int64)(12 * m_size) / 12;
  while ( v9 > 0 )
  {
    if ( v8[v9 >> 1].first >= v5 )
    {
      v9 >>= 1;
    }
    else
    {
      v8 += (v9 >> 1) + 1;
      v9 += -1 - (v9 >> 1);
    }
  }
  v10 = &m_buffer[m_size];
  if ( v8 != v10 )
  {
    if ( v5 < v8->first )
      v8 = &m_buffer[m_size];
    if ( v8 != v10 )
    {
      if ( v8->second.useClass )
      {
        if ( v8->second.useClass != USE_CLASS_SCRIPTABLE )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1946, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled type") )
            __debugbreak();
          return;
        }
        v11 = UsableScriptableDenseGrid_Get();
      }
      else
      {
        v11 = UsableEntityDenseGrid_Get();
      }
      v8->second.usePartitionIndex = DenseGrid::Update(v11, v8->first, v8->second.usePartitionIndex, (const vec2_t *)origin);
    }
  }
}

/*
==============
UsableWorld_Write
==============
*/
void UsableWorld_Write(MemoryFile *memFile)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v2; 
  int *i; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v4; 
  int *j; 
  int m_size; 
  int p; 

  v2 = UsableWorldCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1777, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( v2->m_size >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1778, ASSERT_TYPE_ASSERT, "( usableWorld->size() < 0xffff )", (const char *)&queryFormat, "usableWorld->size() < USHRT_MAX") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "UsableWorld Refs");
  LOWORD(p) = truncate_cast<unsigned short,unsigned __int64>(v2->m_size);
  MemFile_WriteData(memFile, 2ui64, &p);
  for ( i = (int *)v2->m_data.m_buffer; i != (int *)&v2->m_data.m_buffer[v2->m_size]; i += 3 )
  {
    p = *i;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 8ui64, i + 1);
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "UsableWorld_WriteClientMasks");
  v4 = UsableClientMaskCollection_Get();
  if ( v4->m_size >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1735, ASSERT_TYPE_ASSERT, "( usableClientMasks->size() < 0xffff )", (const char *)&queryFormat, "usableClientMasks->size() < USHRT_MAX") )
    __debugbreak();
  LOWORD(p) = truncate_cast<unsigned short,unsigned __int64>(v4->m_size);
  MemFile_WriteData(memFile, 2ui64, &p);
  for ( j = (int *)v4->m_data.m_buffer; j != (int *)&v4->m_data.m_buffer[v4->m_size]; j += 8 )
  {
    p = *j;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 0x1Cui64, j + 1);
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "UsableEntityDenseGrid_Write");
  UsableEntityDenseGrid_Write(memFile);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "UsableScriptableDenseGrid_Write");
  UsableScriptableDenseGrid_Write(memFile);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "UsableWorld Large Radius");
  m_size = s_usableLargeRadiusList.m_size;
  if ( s_usableLargeRadiusList.m_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", LODWORD(s_usableLargeRadiusList.m_size), "unsigned", s_usableLargeRadiusList.m_size) )
    __debugbreak();
  p = m_size;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 4 * s_usableLargeRadiusList.m_size, &s_usableLargeRadiusList);
  Sys_ProfEndNamedEvent();
}

