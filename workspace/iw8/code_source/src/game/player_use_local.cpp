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
  float useFOV; 
  const dvar_t *v10; 
  const char *v11; 
  double Float_Internal_DebugName; 

  UsableEntity_GetUseRadius(ent, outUseRadius);
  UsableEntity_GetUseDisplayRadius(ent, *outUseRadius, outDisplayRadius);
  useFOV = ent->hint.useFOV;
  if ( useFOV == 0.0 )
  {
    if ( ent->s.eType == ET_ITEM )
      goto LABEL_11;
    if ( ent->s.eType != ET_MISSILE )
    {
      if ( ent->s.eType == ET_TURRET )
      {
        v10 = DVARFLT_player_MGUseFOV;
        v11 = "player_MGUseFOV";
      }
      else if ( ent->s.eType == ET_VEHICLE )
      {
        v10 = DVARFLT_player_vehicleUseFOV;
        v11 = "player_vehicleUseFOV";
      }
      else
      {
        v10 = DVARFLT_player_useFOV;
        v11 = "player_useFOV";
      }
      goto LABEL_12;
    }
    if ( (ent->hint.flags & 0x10) != 0 )
    {
LABEL_11:
      v10 = DCONST_DVARMPFLT_player_itemUseFOV;
      v11 = "player_itemUseFOV";
    }
    else
    {
      v10 = DVARFLT_player_throwbackFOV;
      v11 = "player_throwbackFOV";
    }
LABEL_12:
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v10, v11);
    useFOV = *(float *)&Float_Internal_DebugName;
  }
  *outUseFOV = useFOV;
  _XMM0 = LODWORD(ent->hint.displayFOV);
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  *outDisplayFOV = *(float *)&_XMM1;
}

/*
==============
UsableEntity_GetUseDisplayRadius
==============
*/
void UsableEntity_GetUseDisplayRadius(const gentity_s *const ent, const float useRadius, float *outDisplayRadius)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1479, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _XMM0 = LODWORD(ent->hint.displayRadius);
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  *outDisplayRadius = *(float *)&_XMM1;
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
  float useRadius; 
  double v4; 
  double v5; 
  double v6; 
  double Float_Internal_DebugName; 

  useRadius = ent->hint.useRadius;
  if ( useRadius != 0.0 )
  {
    *outUseRadius = useRadius;
    return;
  }
  if ( ent->s.eType == ET_ITEM )
  {
LABEL_12:
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMODEFLT_player_itemUseRadius, "player_itemUseRadius");
    *outUseRadius = *(float *)&Float_Internal_DebugName;
    return;
  }
  if ( ent->s.eType == ET_MISSILE )
  {
    if ( (ent->hint.flags & 0x10) == 0 )
    {
      v6 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_throwbackOuterRadius, "player_throwbackOuterRadius");
      *outUseRadius = *(float *)&v6;
      return;
    }
    goto LABEL_12;
  }
  if ( ent->s.eType == ET_TURRET )
  {
    v5 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_MGUseRadius, "player_MGUseRadius");
    *outUseRadius = *(float *)&v5;
  }
  else
  {
    if ( ent->s.eType == ET_VEHICLE )
      v4 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_vehicleUseRadius, "player_vehicleUseRadius");
    else
      v4 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_useRadius, "player_useRadius");
    *outUseRadius = *(float *)&v4;
  }
}

/*
==============
UsableEntity_IsTouching
==============
*/
bool UsableEntity_IsTouching(const gentity_s *const ent, const Bounds *bounds)
{
  unsigned int Instance; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1419, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1420, ASSERT_TYPE_ASSERT, "( ( bounds != nullptr ) )", "%s\n\t( bounds ) = %p", "( bounds != nullptr )", NULL) )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0) )
    return 0;
  if ( ent == (const gentity_s *const)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(ent->r.absBox.midPoint.v[0] - bounds->midPoint.v[0]) & _xmm) > (float)(ent->r.absBox.halfSize.v[0] + bounds->halfSize.v[0]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(ent->r.absBox.midPoint.v[1] - bounds->midPoint.v[1]) & _xmm) > (float)(ent->r.absBox.halfSize.v[1] + bounds->halfSize.v[1]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(ent->r.absBox.midPoint.v[2] - bounds->midPoint.v[2]) & _xmm) > (float)(ent->r.absBox.halfSize.v[2] + bounds->halfSize.v[2]) )
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
  double Float_Internal_DebugName; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  EntityTagInfo *tagInfo; 
  const entityState_t *p_s; 
  GUtils *Utils; 
  scr_string_t classname; 
  GUtils *v23; 
  unsigned __int16 v24; 
  DObj *ServerDObjForEnt; 
  DObj *v26; 
  const XModel *v27; 
  GUtils *v28; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1273, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( player == ent )
    return 0;
  eType = ent->s.eType;
  if ( eType != ET_ITEM && (ent->flags.m_flags[0] & 0x20000000) == 0 )
    return 0;
  if ( eType == ET_MISSILE && (ent->hint.flags & 0x10) == 0 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
    WeaponClass = BG_GetWeaponClass(WeaponForEntity, 0);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
    if ( prevHintEntIndex != ent->s.number )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_throwbackInnerRadius, "player_throwbackInnerRadius");
      v12 = player->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
      v13 = player->r.currentOrigin.v[0] - ent->r.currentOrigin.v[0];
      if ( (float)((float)(v12 * v12) + (float)(v13 * v13)) > (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) )
        return 0;
    }
    if ( !ent->tagInfo || Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80) )
    {
      v14 = (float)((float)(ent->s.lerp.pos.trDelta.v[0] * ent->s.lerp.pos.trDelta.v[0]) + (float)(ent->s.lerp.pos.trDelta.v[1] * ent->s.lerp.pos.trDelta.v[1])) + (float)(ent->s.lerp.pos.trDelta.v[2] * ent->s.lerp.pos.trDelta.v[2]);
      v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
      v16 = *(float *)&v15;
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
      if ( v14 > (float)(v16 * *(float *)&v17) )
        return 0;
    }
    if ( WeaponClass != WEAPCLASS_THROWINGKNIFE )
    {
      tagInfo = ent->tagInfo;
      if ( tagInfo )
      {
        p_s = &tagInfo->parent->s;
        if ( p_s )
        {
          if ( BG_IsCharacterEntity(p_s) || BG_IsCorpseEntity(p_s) )
            return 0;
        }
      }
    }
    if ( WeaponClass == WEAPCLASS_THROWINGKNIFE && (EntityPlayerStateConst && BG_IsUsingOffhandGestureWeapon(EntityPlayerStateConst) || !BG_CanItemBeGrabbed(Instance, &ent->s, EntityPlayerStateConst, 0) || !BG_PlayerHasRoomForAmmo(Instance, EntityPlayerStateConst, WeaponForEntity, 0)) )
      return 0;
    if ( WeaponClass == WEAPCLASS_GRENADE )
    {
      if ( !BG_PlayerHasWeapon(Instance, EntityPlayerStateConst, WeaponForEntity) && !BG_CanEquipWeapon(Instance, EntityPlayerStateConst, WeaponForEntity) )
      {
        Com_PrintWarning(15, "Couldn't add grenade weapon to player for throwback ability - will be unable to throw the grenade back.\n");
        return 0;
      }
      Utils = GUtils::GetUtils();
      if ( !Utils->MayThrowbackGrenade(Utils, player, ent) )
        return 0;
    }
  }
  if ( ent->s.eType == ET_FIRST )
  {
    classname = ent->classname;
    if ( classname == scr_const.trigger_use || classname == scr_const.trigger_use_touch )
    {
      v23 = GUtils::GetUtils();
      if ( ent->c.trigger.team )
      {
        if ( ent->c.trigger.team != v23->GetEntityTeam(v23, player) )
          return 0;
      }
      v24 = ent->c.item[0].weapon.stickerIndices[1];
      if ( v24 != 2047 && v24 != player->s.number )
        return 0;
    }
  }
  if ( ent->s.eType == ET_VEHICLE && !G_Vehicle_IsUsable(ent, player) || ent->s.eType == ET_TURRET && !G_Turret_IsUsable(ent, player) )
    return 0;
  if ( ent->s.eType == ET_ITEM )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    v26 = ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      if ( ServerDObjForEnt->numModels )
      {
        v27 = *ServerDObjForEnt->models;
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( (v27->flags & 0x8000) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1407, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to allow pickup of a weapon with model %s that is unloaded", **(const char ***)v26->models) )
            __debugbreak();
          return 0;
        }
      }
    }
  }
  v28 = GUtils::GetUtils();
  return v28->MayUseEntity(v28, player, ent);
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
UsableListItem *UsableList_Add(UsableList *list, const UsableRef *ref, float score, int priority, bool inDisplayDistance, bool inDisplayFov, bool ignored)
{
  unsigned __int16 itemCount; 
  float *p_ref; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2135, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( list->itemCount >= 0x3E8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2136, ASSERT_TYPE_ASSERT, "(list->itemCount < ( 1000 ))", (const char *)&queryFormat, "list->itemCount < PLAYER_USE_LIST_COUNT_MAX") )
    __debugbreak();
  itemCount = list->itemCount;
  if ( itemCount >= 0x3E8u )
    return 0i64;
  p_ref = (float *)&list->items[itemCount].ref;
  *(UsableRef *)p_ref = *ref;
  *((_BYTE *)p_ref + 17) = inDisplayDistance;
  *((_BYTE *)p_ref + 18) = inDisplayFov;
  p_ref[3] = score;
  *((_DWORD *)p_ref + 2) = priority;
  *((_BYTE *)p_ref + 16) = 0;
  ++list->itemCount;
  if ( ignored )
    ++list->itemCountIgnored;
  return (UsableListItem *)((char *)list + 20 * itemCount);
}

/*
==============
UsableList_Compare
==============
*/
__int64 UsableList_Compare(const void *pe1, const void *pe2)
{
  int v2; 
  float v3; 

  v2 = *((_DWORD *)pe1 + 2);
  if ( v2 <= *((_DWORD *)pe2 + 2) )
  {
    if ( v2 < *((_DWORD *)pe2 + 2) )
      return 0xFFFFFFFFi64;
    v3 = *((float *)pe1 + 3) - *((float *)pe2 + 3);
    if ( v3 <= 0.0 )
    {
      if ( v3 >= 0.0 )
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
  const dvar_t *v8; 
  int v9; 
  int v10; 
  ClientHintFlags *p_flags; 
  const char *v12; 
  vec4_t v13; 
  int v14; 
  unsigned __int8 v15; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  vec4_t color; 
  char dest[256]; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2209, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  v8 = DVARINT_g_debugUse;
  if ( !DVARINT_g_debugUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == clientNum )
  {
    Com_sprintf(dest, 0x100ui64, "HINT/USE ENTITIES FOR ENTITY %i", (unsigned int)clientNum);
    G_Main_AddDebugString2D(50.0, 450.0, &colorWhite, scale_0, dest);
    v9 = 1;
    if ( isForceUseActive )
    {
      Com_sprintf(dest, 0x100ui64, "NOTE: ForceUseHintOn() is currently enabled for this entity.");
      G_Main_AddDebugString2D(50.0, 466.0, &colorYellow, scale_0, dest);
      v9 = 2;
    }
    v10 = 0;
    if ( list->itemCount )
    {
      p_flags = &list->items[0].flags;
      do
      {
        if ( *((_BYTE *)p_flags + 1) )
        {
          if ( (*p_flags & 1) != 0 )
          {
            v12 = "USE";
          }
          else
          {
            v12 = "SHORT_DISPLAY";
            if ( (*p_flags & 2) == 0 )
              v12 = "DISPLAY";
          }
          if ( isForceUseActive || cursorHintEnt != *((_DWORD *)p_flags - 4) )
          {
            v14 = *((_DWORD *)p_flags - 2);
            switch ( v14 )
            {
              case -2147483648:
                v13 = colorOrange;
                break;
              case -200:
                v13 = colorCyan;
                break;
              case -250:
                v13 = colorBlue;
                break;
              default:
                v13 = colorWhite;
                break;
            }
          }
          else
          {
            v13 = colorGreen;
          }
          v15 = *((_BYTE *)p_flags - 10);
          color = v13;
          if ( v15 >= 2u )
          {
            LODWORD(v18) = 2;
            LODWORD(v17) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2277, ASSERT_TYPE_ASSERT, "(unsigned)( ref.useClass ) < (unsigned)( ( sizeof( *array_counter( s_usableWorldUseClassName ) ) + 0 ) )", "ref.useClass doesn't index s_usableWorldUseClassName\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          LODWORD(v18) = *((_DWORD *)p_flags - 2);
          LODWORD(v17) = *((unsigned __int8 *)p_flags - 9);
          LODWORD(fmt) = *((_DWORD *)p_flags - 4);
          Com_sprintf(dest, 0x100ui64, "%s %4i (%i): priority %i, viewScore %.3f, %s", s_usableWorldUseClassName[*((unsigned __int8 *)p_flags - 10)], fmt, v17, v18, *((float *)p_flags - 1), v12);
          G_Main_AddDebugString2D(50.0, (float)((float)v9++ * 16.0) + 450.0, &color, scale_0, dest);
        }
        ++v10;
        p_flags += 20;
      }
      while ( v10 < list->itemCount );
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
  const dvar_t *v5; 
  __int64 v7; 
  vec4_t v10; 
  gentity_s *v11; 
  const gentity_s *ConstGentity; 
  UsableClass v13; 
  const gentity_s *Entity; 
  bool IsUsableBy; 
  unsigned int v16; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v17; 
  __int64 m_size; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  ntl::pair<unsigned int,ClientBits> *v20; 
  __int64 v21; 
  ntl::pair<unsigned int,ClientBits> *v22; 
  unsigned int number; 
  const Bounds *AbsBox; 
  float v25; 
  UsableClass v26; 
  vec3_t *p_angles; 
  const Bounds *v28; 
  float v29; 
  const vec3_t *DebugOrigin; 
  UsableClass useClass; 
  float v32; 
  const char *v33; 
  UsableClass v34; 
  float v35; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  BOOL IsPriorityOverLook; 
  unsigned int HintPriority; 
  float v40; 
  char *fmt; 
  char *fmta; 
  __int64 duration; 
  __int64 durationa; 
  bool *outUse2DFOV; 
  bool *outUse2DFOVa; 
  bool v47; 
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

  v5 = DVARINT_g_debugUse;
  v7 = clientNum;
  if ( !DVARINT_g_debugUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == (_DWORD)v7 )
  {
    if ( directLookInner )
    {
      v10 = colorBlue;
    }
    else if ( directLookOuter )
    {
      v10 = colorCyan;
    }
    else
    {
      v10 = colorLtGrey;
    }
    color = v10;
    v11 = &g_entities[v7];
    if ( ref->useClass )
      goto LABEL_44;
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.h", 159, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
      __debugbreak();
    if ( ConstGentity->classname != scr_const.trigger_use_touch )
    {
LABEL_44:
      useClass = ref->useClass;
      if ( useClass )
      {
        if ( useClass == USE_CLASS_SCRIPTABLE )
          ScriptableSv_GetPartUsePositionAndAngles(ref->useIndex, ref->useData, &outUsePos, &xyz);
      }
      else
      {
        xyz.v[0] = 0.0;
        xyz.v[1] = 0.0;
        xyz.v[2] = 0.0;
        UsableRef_GetUseTracePos(ref, &outUsePos);
      }
      v32 = (float)((float)((float)(v11->r.currentOrigin.v[1] - outUsePos.v[1]) * (float)(v11->r.currentOrigin.v[1] - outUsePos.v[1])) + (float)((float)(v11->r.currentOrigin.v[0] - outUsePos.v[0]) * (float)(v11->r.currentOrigin.v[0] - outUsePos.v[0]))) + (float)((float)(v11->r.currentOrigin.v[2] - outUsePos.v[2]) * (float)(v11->r.currentOrigin.v[2] - outUsePos.v[2]));
      if ( v32 <= 640000.0 )
      {
        switch ( message )
        {
          case 1:
            v33 = "SUCCESS";
            break;
          case 2:
            v33 = "OBSTRUCTED";
            break;
          case 3:
            v33 = "DISABLED";
            break;
          case 4:
            v33 = "FILTERED";
            break;
          case 5:
            v33 = "DISTANCE";
            break;
          case 6:
            v33 = "USEFOV";
            break;
          case 7:
            v33 = "FACEFOV";
            break;
          default:
            v33 = "NOTVALID";
            break;
        }
        if ( message == 2 )
        {
          G_Main_AddDebugStringWithDurationCentered(&outUsePos, &colorRed, DEBUG_TEXT_SCALE_0, v33, 1);
        }
        else
        {
          UsableRef_GetRadiusFov(ref, &outUseRadius, &outUseFOV, &outFaceFOV, &outDisplayRadius, &outDisplayFOV, &v47);
          v34 = ref->useClass;
          v35 = outUseRadius;
          if ( v34 == USE_CLASS_SCRIPTABLE )
          {
            InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(ref->useIndex);
            if ( InstanceCommonContext->def )
              name = InstanceCommonContext->def->name;
            else
              name = (char *)&queryFormat.fmt + 3;
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugUseFull, "g_debugUseFull") )
            {
              LODWORD(outUse2DFOVa) = UsableRef_IsPriorityOverLook(ref);
              LODWORD(durationa) = UsableRef_GetHintPriority(ref);
              Com_sprintf(dest, 0x100ui64, "%i: %s  pri %i, pl %i, dRad %i, dFOV %i, uRad %i, uFOV %i, 2DFOV %i, %s", ref->useIndex, name, durationa, outUse2DFOVa, (int)outFaceFOV, (int)outDisplayRadius, (int)v35, (int)outUseFOV, v47, v33);
            }
            else
            {
              Com_sprintf(dest, 0x100ui64, "%i: %s - %s", ref->useIndex, name, v33);
            }
          }
          else if ( v34 == USE_CLASS_GENTITY )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugUseFull, "g_debugUseFull") )
            {
              IsPriorityOverLook = UsableRef_IsPriorityOverLook(ref);
              HintPriority = UsableRef_GetHintPriority(ref);
              LODWORD(outUse2DFOVa) = (int)outFaceFOV;
              LODWORD(durationa) = IsPriorityOverLook;
              LODWORD(fmta) = HintPriority;
              Com_sprintf(dest, 0x100ui64, "%i:  pri %i, pl %i, dRad %i, dFOV %i, uRad %i, uFOV %i, 2DFOV %i, %s", ref->useIndex, fmta, durationa, outUse2DFOVa, (int)outDisplayRadius, (int)v35, (int)outUseFOV, v47, v33);
            }
            else
            {
              Com_sprintf(dest, 0x100ui64, "%i: %s", ref->useIndex, v33);
            }
          }
          AngleVectors(&xyz, &forward, NULL, NULL);
          end.v[0] = (float)(10.0 * forward.v[0]) + outUsePos.v[0];
          end.v[1] = (float)(10.0 * forward.v[1]) + outUsePos.v[1];
          end.v[2] = (float)(10.0 * forward.v[2]) + outUsePos.v[2];
          G_DebugLineWithDuration(&outUsePos, &end, &colorRed, 0, 1);
          end.v[0] = outUsePos.v[0];
          end.v[1] = outUsePos.v[1];
          end.v[2] = outUsePos.v[2] + 10.0;
          G_DebugLineWithDuration(&outUsePos, &end, &colorBlue, 0, 1);
          if ( v32 < (float)((float)(v35 * v35) * 2.0) )
          {
            G_DebugCircle(&outUsePos, v35, &color, 0, 1, 1);
            v40 = outDisplayFOV;
            if ( outDisplayFOV > 0.0 )
            {
              xyz.v[1] = (float)(outDisplayFOV * 0.5) + xyz.v[1];
              AngleVectors(&xyz, &forward, NULL, NULL);
              end.v[0] = (float)(v35 * forward.v[0]) + outUsePos.v[0];
              end.v[1] = (float)(v35 * forward.v[1]) + outUsePos.v[1];
              end.v[2] = (float)(v35 * forward.v[2]) + outUsePos.v[2];
              G_DebugLineWithDuration(&outUsePos, &end, &colorGreen, 0, 1);
              xyz.v[1] = xyz.v[1] - v40;
              AngleVectors(&xyz, &forward, NULL, NULL);
              end.v[0] = (float)(v35 * forward.v[0]) + outUsePos.v[0];
              end.v[1] = (float)(v35 * forward.v[1]) + outUsePos.v[1];
              end.v[2] = (float)(v35 * forward.v[2]) + outUsePos.v[2];
              G_DebugLineWithDuration(&outUsePos, &end, &colorGreen, 0, 1);
            }
          }
          outUsePos.v[2] = outUsePos.v[2] + -10.0;
          G_Main_AddDebugStringWithDurationCentered(&outUsePos, &color, DEBUG_TEXT_SCALE_0, dest, 1);
        }
      }
    }
    else
    {
      v13 = ref->useClass;
      if ( v13 )
      {
        if ( v13 != USE_CLASS_SCRIPTABLE )
          goto LABEL_32;
        v16 = UsableKeyEncode(ref->useIndex, USE_CLASS_SCRIPTABLE, ref->useData);
        v17 = UsableClientMaskCollection_Get();
        m_size = v17->m_size;
        m_buffer = v17->m_data.m_buffer;
        v20 = v17->m_data.m_buffer;
        if ( m_size > 0 )
        {
          do
          {
            v21 = m_size >> 1;
            if ( v20[v21].first >= v16 )
            {
              m_size >>= 1;
            }
            else
            {
              v20 = (ntl::pair<unsigned int,ClientBits> *)((char *)v20 + v21 * 32 + 32);
              m_size += -1 - (m_size >> 1);
            }
          }
          while ( m_size > 0 );
          m_size = v17->m_size;
        }
        v22 = &m_buffer[m_size];
        if ( v20 == v22 )
          goto LABEL_32;
        if ( v16 < v20->first )
          v20 = &m_buffer[v17->m_size];
        if ( v20 == v22 )
        {
LABEL_32:
          IsUsableBy = 1;
        }
        else
        {
          number = v11->s.number;
          if ( number >= 0xE0 )
          {
            LODWORD(outUse2DFOV) = 224;
            LODWORD(duration) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", duration, outUse2DFOV) )
              __debugbreak();
          }
          IsUsableBy = ((0x80000000 >> (number & 0x1F)) & v20->second.array[(unsigned __int64)number >> 5]) != 0;
        }
      }
      else
      {
        Entity = UsableRef_GetEntity(ref);
        IsUsableBy = UsableEntity_IsUsableBy(Entity, v11, 0);
      }
      LODWORD(duration) = IsUsableBy;
      LODWORD(fmt) = 0x80000000;
      Com_sprintf(dest, 0x100ui64, "%i: [touch] pri %i, usable %i", ref->useIndex, fmt, duration);
      if ( ref->useClass )
      {
        v29 = DEBUG_TEXT_SCALE_0;
        DebugOrigin = UsableRef_GetDebugOrigin(ref);
        G_Main_AddDebugString(DebugOrigin, &color, v29, dest);
      }
      else
      {
        if ( UsableRef_Internal_GetConstGentity(ref) == (const gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1249, ASSERT_TYPE_ASSERT, "( UsableRef_GetAbsBox( ref ) )", (const char *)&queryFormat, "UsableRef_GetAbsBox( ref )") )
          __debugbreak();
        AbsBox = UsableRef_GetAbsBox(ref);
        *(_QWORD *)xyz.v = *(_QWORD *)AbsBox->midPoint.v;
        v25 = AbsBox->midPoint.v[2];
        v26 = ref->useClass;
        xyz.v[2] = v25;
        if ( v26 )
        {
          if ( v26 == USE_CLASS_SCRIPTABLE )
            p_angles = &ScriptableSv_GetInstanceCommonContext(ref->useIndex)->angles;
          else
            p_angles = &vec3_origin;
        }
        else
        {
          p_angles = &UsableRef_Internal_GetConstGentity(ref)->r.currentAngles;
        }
        AnglesToAxis(p_angles, &axis);
        v28 = UsableRef_GetAbsBox(ref);
        G_DebugBoxOriented(&vec3_origin, v28, &axis, &color, 1, 0);
        G_Main_AddDebugString(&xyz, &color, DEBUG_TEXT_SCALE_0, dest);
      }
    }
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
float UsableRef_GetDisplayRadius(const UsableRef *ref)
{
  UsableClass useClass; 
  const gentity_s *ConstGentity; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  const dvar_t *v7; 
  float outUseRadius; 

  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass != USE_CLASS_SCRIPTABLE )
      goto LABEL_11;
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 230, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
      __debugbreak();
    _XMM0 = LODWORD(PartStateUsableDef->useRadiusDisplay);
    __asm { vmaxss  xmm0, xmm0, dword ptr [rbx+1Ch] }
    if ( *(float *)&_XMM0 <= 0.0 )
    {
LABEL_11:
      v7 = DCONST_DVARMODEFLT_player_itemUseRadius;
      if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      LODWORD(_XMM0) = v7->current.integer;
    }
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(ConstGentity, &outUseRadius);
    if ( !ConstGentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1479, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    _XMM0 = LODWORD(ConstGentity->hint.displayRadius);
    __asm { vmaxss  xmm0, xmm0, [rsp+48h+outUseRadius] }
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

char __fastcall UsableRef_GetItemCursorHintType(const playerState_s *ps, const gentity_s *traceEnt, double a3)
{
  GWeaponMap *Instance; 
  bool v6; 
  bool v7; 
  WeaponDef *v8; 
  const Weapon *Weapon; 
  const WeaponDef *v10; 
  bool v11; 
  weapInventoryType_t inventoryType; 
  weapInventoryType_t v13; 
  WeaponSlot Slot; 
  __int64 v16; 
  Weapon r_weapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 536, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !traceEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 537, ASSERT_TYPE_ASSERT, "( traceEnt )", (const char *)&queryFormat, "traceEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80);
  v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|0x80);
  r_weapon = *BG_GetWeaponForEntity(Instance, &traceEnt->s);
  if ( LOWORD(a3) > bg_lastParsedWeaponIndex )
  {
    LODWORD(v16) = LOWORD(a3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v16, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[LOWORD(a3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v8 = bg_weaponDefs[LOWORD(a3)];
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(Instance, ps->weapCommon.weaponHandle);
  v10 = BG_WeaponDef(Weapon, 0);
  if ( BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE && v6 )
    return 0;
  if ( BG_PlayerHasWeapon(Instance, ps, &r_weapon) )
  {
    v11 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
    if ( !BG_IsFauxFists(ps, &r_weapon, v11) )
      return 0;
  }
  if ( (inventoryType = v10->inventoryType) != WEAPINVENTORY_PRIMARY && inventoryType != WEAPINVENTORY_ALTMODE && (v7 || (v13 = v8->inventoryType) == WEAPINVENTORY_PRIMARY || v13 == WEAPINVENTORY_ALTMODE) && (Slot = BG_PlayerWeaponGetSlot(&r_weapon), BG_PlayerWeaponIsSlotFull(Instance, ps, Slot)) )
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
  const gentity_s *ConstGentity; 
  float useFOV; 
  const dvar_t *v14; 
  const char *v15; 
  double Float_Internal_DebugName; 
  const ScriptableStateUsableDef *PartStateUsableDef; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 

  useClass = ref->useClass;
  if ( useClass == USE_CLASS_GENTITY )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(ConstGentity, outUseRadius);
    UsableEntity_GetUseDisplayRadius(ConstGentity, *outUseRadius, outDisplayRadius);
    useFOV = ConstGentity->hint.useFOV;
    if ( useFOV != 0.0 )
    {
LABEL_14:
      *outUseFOV = useFOV;
      _XMM0 = LODWORD(ConstGentity->hint.displayFOV);
      __asm { vmaxss  xmm1, xmm0, xmm1 }
      *outDisplayFOV = *(float *)&_XMM1;
      *outFaceFOV = -1.0;
      return;
    }
    if ( ConstGentity->s.eType == ET_ITEM )
      goto LABEL_12;
    if ( ConstGentity->s.eType != ET_MISSILE )
    {
      if ( ConstGentity->s.eType == ET_TURRET )
      {
        v14 = DVARFLT_player_MGUseFOV;
        v15 = "player_MGUseFOV";
      }
      else if ( ConstGentity->s.eType == ET_VEHICLE )
      {
        v14 = DVARFLT_player_vehicleUseFOV;
        v15 = "player_vehicleUseFOV";
      }
      else
      {
        v14 = DVARFLT_player_useFOV;
        v15 = "player_useFOV";
      }
      goto LABEL_13;
    }
    if ( (ConstGentity->hint.flags & 0x10) != 0 )
    {
LABEL_12:
      v14 = DCONST_DVARMPFLT_player_itemUseFOV;
      v15 = "player_itemUseFOV";
    }
    else
    {
      v14 = DVARFLT_player_throwbackFOV;
      v15 = "player_throwbackFOV";
    }
LABEL_13:
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v14, v15);
    useFOV = *(float *)&Float_Internal_DebugName;
    goto LABEL_14;
  }
  if ( useClass == USE_CLASS_SCRIPTABLE )
  {
    if ( ScriptableSv_GetPartStateType(ref->useIndex, ref->useData) != Scriptable_StateType_Usable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 285, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable )", (const char *)&queryFormat, "ScriptableSv_GetPartStateType( ref.useIndex, ref.useData ) == Scriptable_StateType_Usable") )
      __debugbreak();
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1549, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
      __debugbreak();
    *outUseRadius = PartStateUsableDef->useRadius;
    *outUseFOV = PartStateUsableDef->useFOV;
    *outFaceFOV = PartStateUsableDef->faceFOV;
    *outDisplayRadius = PartStateUsableDef->useRadiusDisplay;
    *outUse2DFOV = PartStateUsableDef->use2DFOV;
    if ( *outUseRadius < 0.0099999998 )
    {
      v20 = DCONST_DVARMODEFLT_player_itemUseRadius;
      if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      *outUseRadius = v20->current.value;
    }
    value = *outUseFOV;
    if ( *outUseFOV < -0.99900001 )
    {
      v22 = DCONST_DVARMPFLT_player_itemUseFOV;
      if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      value = v22->current.value;
      *outUseFOV = value;
    }
    if ( *outDisplayRadius < 0.0099999998 )
    {
      *outDisplayRadius = *outUseRadius;
      value = *outUseFOV;
    }
    *outDisplayFOV = value;
  }
  else
  {
    v23 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    *outUseRadius = v23->current.value;
    v24 = DCONST_DVARMPFLT_player_itemUseFOV;
    if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    *outUseFOV = v24->current.value;
    *outDisplayRadius = *outUseRadius;
    *outDisplayFOV = *outUseFOV;
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
  const ScriptableStateUsableDef *PartStateUsableDef; 
  float result; 
  const gentity_s *ConstGentity; 
  const dvar_t *v5; 
  float outUseRadius; 

  useClass = (unsigned __int8)ref->useClass;
  outUseRadius = 0.0;
  if ( !useClass )
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    UsableEntity_GetUseRadius(ConstGentity, &outUseRadius);
    result = outUseRadius;
    goto LABEL_8;
  }
  if ( useClass == 1 )
  {
    PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(ref->useIndex, ref->useData);
    if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 258, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
      __debugbreak();
    result = PartStateUsableDef->useRadius;
LABEL_8:
    if ( result > 0.0 )
      return result;
  }
  v5 = DCONST_DVARMODEFLT_player_itemUseRadius;
  if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.value;
}

/*
==============
UsableRef_GetUseScoreAndPriority
==============
*/
char UsableRef_GetUseScoreAndPriority(const UsableRef *ref, float *outScore, int *outPriority, float dot, const bool isUnderDirectLookOuter, const bool isUnderDirectLookInner, const bool isWithinUseRange, const playerState_s *ps)
{
  float v9; 
  const dvar_t *v12; 
  bool enabled; 
  const dvar_t *v14; 
  int integer; 
  bool v16; 
  int HintPriority; 
  int v18; 
  UsableClass useClass; 
  const gentity_s *ConstGentity; 
  const gentity_s *v21; 
  GWeaponMap *v22; 
  bool v23; 
  unsigned int useIndex; 
  GWeaponMap *Instance; 

  v9 = 0.5 - (float)(dot * 0.5);
  if ( (v9 < 0.0 || v9 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 321, ASSERT_TYPE_ASSERT, "(0.0f <= centerBias && centerBias <= 1.0f)", "%s\n\tcenterBias (%f) expected to be within [0.0,1.0]", "0.0f <= centerBias && centerBias <= 1.0f", v9) )
    __debugbreak();
  v12 = DVARBOOL_g_useEnableScoringFixForUseRange;
  if ( !DVARBOOL_g_useEnableScoringFixForUseRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useEnableScoringFixForUseRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  enabled = v12->current.enabled;
  v14 = DVARINT_g_useWithinUseRangePriorityDelta;
  if ( !DVARINT_g_useWithinUseRangePriorityDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useWithinUseRangePriorityDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  integer = v14->current.integer;
  v16 = 1;
  if ( enabled )
    v16 = isWithinUseRange;
  *outScore = v9;
  HintPriority = UsableRef_GetHintPriority(ref);
  *outPriority = HintPriority;
  if ( v16 )
  {
    if ( isUnderDirectLookInner && HintPriority > -250 )
    {
      *outPriority = -250;
    }
    else if ( isUnderDirectLookOuter && HintPriority > -200 )
    {
      v18 = HintPriority - 200;
      if ( v18 <= -250 )
        v18 = -249;
      *outPriority = v18;
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
      return 0;
    useIndex = ref->useIndex;
    Instance = GWeaponMap::GetInstance();
    v23 = !ScriptableSv_CanBeGrabbed(Instance, ps, useIndex);
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    if ( ref->useClass == USE_CLASS_GENTITY )
    {
      v21 = UsableRef_Internal_GetConstGentity(ref);
      if ( v21->s.eType == ET_MISSILE && (v21->hint.flags & 0x10) == 0 )
      {
        *outScore = *outScore - 2.0;
        if ( *outPriority != 0x80000000 )
          *outPriority = -300;
      }
    }
    if ( ConstGentity->s.eType != ET_ITEM )
      return 0;
    v22 = GWeaponMap::GetInstance();
    v23 = BG_CanItemBeGrabbed(v22, &ConstGentity->s, ps, 0) == 0;
  }
  if ( v23 )
  {
    *outScore = *outScore + 10000.0;
    *outPriority = 0x7FFFFFFF;
    return 1;
  }
  return 0;
}

/*
==============
UsableRef_GetUseTracePos
==============
*/
void UsableRef_GetUseTracePos(const UsableRef *ref, vec3_t *outUsePos)
{
  const gentity_s *ConstGentity; 
  entityType_s eType; 
  bool IsEntityHintTagInvalid; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const entityState_t **tagInfo; 
  const entityState_t *v9; 
  entityType_s v10; 
  const DObj *ServerDObjForEnt; 
  Bounds outBounds; 
  tmat33_t<vec3_t> axis; 

  if ( ref->useClass )
  {
    ScriptableSv_GetPartUsePosition(ref->useIndex, ref->useData, outUsePos);
  }
  else
  {
    ConstGentity = UsableRef_Internal_GetConstGentity(ref);
    eType = ConstGentity->s.eType;
    if ( eType == ET_TURRET )
    {
      G_Utils_DObjGetWorldTagPos_CheckTagExists(ConstGentity, (const scr_string_t)scr_const.tag_aim, 1, outUsePos);
    }
    else if ( eType == ET_VEHICLE )
    {
      if ( G_Utils_GetModelBounds(ConstGentity, &outBounds) )
      {
        AnglesToAxis(&ConstGentity->r.currentAngles, &axis);
        MatrixTransformVector(&outBounds.midPoint, &axis, outUsePos);
        outUsePos->v[0] = ConstGentity->r.currentOrigin.v[0] + outUsePos->v[0];
        outUsePos->v[1] = ConstGentity->r.currentOrigin.v[1] + outUsePos->v[1];
        outUsePos->v[2] = ConstGentity->r.currentOrigin.v[2] + outUsePos->v[2];
      }
    }
    else
    {
      IsEntityHintTagInvalid = UsableRef_IsEntityHintTagInvalid(ConstGentity);
      if ( eType == ET_MISSILE )
      {
        if ( IsEntityHintTagInvalid )
        {
          outUsePos->v[0] = ConstGentity->r.absBox.midPoint.v[0];
          outUsePos->v[1] = ConstGentity->r.absBox.midPoint.v[1];
          outUsePos->v[2] = ConstGentity->r.absBox.midPoint.v[2];
        }
        else
        {
          G_Utils_DObjGetWorldBoneIndexPos(ConstGentity, ConstGentity->hint.tag, outUsePos);
        }
        if ( ConstGentity->tagInfo )
        {
          Instance = GWeaponMap::GetInstance();
          WeaponForEntity = BG_GetWeaponForEntity(Instance, &ConstGentity->s);
          if ( BG_GetWeaponClass(WeaponForEntity, 0) == WEAPCLASS_THROWINGKNIFE )
          {
            tagInfo = (const entityState_t **)ConstGentity->tagInfo;
            v9 = *tagInfo;
            if ( *tagInfo )
            {
              if ( BG_IsCharacterEntity(*tagInfo) || BG_IsCorpseEntity(v9) )
              {
                outUsePos->v[0] = v9[1].lerp.pos.trBase.v[1];
                outUsePos->v[1] = v9[1].lerp.pos.trBase.v[2];
                outUsePos->v[2] = v9[1].lerp.pos.trDelta.v[0];
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
        outUsePos->v[0] = ConstGentity->r.absBox.midPoint.v[0];
        outUsePos->v[1] = ConstGentity->r.absBox.midPoint.v[1];
        outUsePos->v[2] = ConstGentity->r.absBox.midPoint.v[2];
        v10 = ConstGentity->s.eType;
        if ( v10 == ET_ITEM || v10 == ET_SCRIPTMOVER )
        {
          ServerDObjForEnt = Com_GetServerDObjForEnt(ConstGentity);
          if ( ServerDObjForEnt )
          {
            DObjGetVisibleBounds(ServerDObjForEnt, &outBounds);
            AnglesToAxis(&ConstGentity->r.currentAngles, &axis);
            MatrixTransformVector(&outBounds.midPoint, &axis, outUsePos);
            outUsePos->v[0] = ConstGentity->r.currentOrigin.v[0] + outUsePos->v[0];
            outUsePos->v[1] = ConstGentity->r.currentOrigin.v[1] + outUsePos->v[1];
            outUsePos->v[2] = ConstGentity->r.currentOrigin.v[2] + outUsePos->v[2];
          }
        }
      }
      else
      {
        G_Utils_DObjGetWorldBoneIndexPos(ConstGentity, ConstGentity->hint.tag, outUsePos);
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
  Bounds *AbsBox; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v10; 
  double v13; 

  AbsBox = UsableRef_GetAbsBox(ref);
  v6 = AbsBox->midPoint.v[0] - viewOrigin->v[0];
  v10 = LODWORD(AbsBox->midPoint.v[1]);
  v7 = AbsBox->midPoint.v[1] - viewOrigin->v[1];
  v8 = AbsBox->midPoint.v[2] - viewOrigin->v[2];
  *(float *)&v10 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM9 = v10;
  __asm
  {
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm0, xmm9, xmm8, xmm0
  }
  v13 = I_fclamp((float)((float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[1]) + (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[0])) + (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * viewForward->v[2]), -1.0, 1.0);
  if ( *(float *)&v13 < 0.0 )
    return 0;
  if ( *(float *)&v10 <= 1.0 )
    return 1;
  _XMM1 = LODWORD(AbsBox->halfSize.v[2]);
  __asm
  {
    vmaxss  xmm2, xmm1, dword ptr [rsi+10h]
    vmaxss  xmm3, xmm2, dword ptr [rsi+0Ch]
  }
  return (float)(*(float *)&v13 * *(float *)&v13) >= (float)(1.0 / (float)((float)((float)(*(float *)&_XMM3 / *(float *)&v10) * (float)(*(float *)&_XMM3 / *(float *)&v10)) + 1.0));
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
  if ( ConstGentity == (gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 608, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(ConstGentity->r.absBox.midPoint.v[0] - bounds->midPoint.v[0]) & _xmm) > (float)(ConstGentity->r.absBox.halfSize.v[0] + bounds->halfSize.v[0]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(ConstGentity->r.absBox.midPoint.v[1] - bounds->midPoint.v[1]) & _xmm) > (float)(ConstGentity->r.absBox.halfSize.v[1] + bounds->halfSize.v[1]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(ConstGentity->r.absBox.midPoint.v[2] - bounds->midPoint.v[2]) & _xmm) > (float)(ConstGentity->r.absBox.halfSize.v[2] + bounds->halfSize.v[2]) )
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
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 

  if ( !stateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1549, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
    __debugbreak();
  *outUseRadius = stateUsableDef->useRadius;
  *outUseFOV = stateUsableDef->useFOV;
  *outFaceFOV = stateUsableDef->faceFOV;
  *outDisplayRadius = stateUsableDef->useRadiusDisplay;
  *outUse2DFOV = stateUsableDef->use2DFOV;
  if ( *outUseRadius < 0.0099999998 )
  {
    v11 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    *outUseRadius = v11->current.value;
  }
  value = *outUseFOV;
  if ( *outUseFOV < -0.99900001 )
  {
    v13 = DCONST_DVARMPFLT_player_itemUseFOV;
    if ( !DCONST_DVARMPFLT_player_itemUseFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    *outUseFOV = value;
  }
  if ( *outDisplayRadius < 0.0099999998 )
  {
    *outDisplayRadius = *outUseRadius;
    value = *outUseFOV;
  }
  *outDisplayFOV = value;
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
  ntl::pair<unsigned int,UsableRef> *v13; 
  ntl::pair<unsigned int,UsableRef> *v14; 
  char v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  bool v18; 
  double v19; 
  int v20; 
  UsableClass useClass; 
  double UseRadius; 
  ntl::fixed_vector<unsigned int,2048,0> *v23; 
  ntl::fixed_vector<unsigned int,2048,0> *v24; 
  UsableClass v25; 
  DenseGrid *v26; 
  vec3_t *p_origin; 
  unsigned __int16 v28; 
  char *fmt; 
  __int64 v30; 
  __int64 v31; 
  _BYTE v32[12]; 

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
      v13 = v2->m_data.m_buffer;
      *(_DWORD *)v32 = v5;
      v14 = v13;
      *(UsableRef *)&v32[4] = v12;
      if ( v11 > 0 )
      {
        do
        {
          if ( v13[v11 >> 1].first >= v5 )
          {
            v11 >>= 1;
          }
          else
          {
            v13 += (v11 >> 1) + 1;
            v11 += -1 - (v11 >> 1);
          }
        }
        while ( v11 > 0 );
        v11 = v2->m_size;
      }
      if ( v13 != &v14[v11] )
      {
        v15 = 0;
        if ( v5 >= v13->first )
          goto LABEL_74;
      }
      if ( v2->m_data.m_size == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (v13 < v2->m_data.m_buffer || v13 > &v2->m_data.m_buffer[v2->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (char *)v13 - (char *)v2->m_data.m_buffer != 12 * ((unsigned __int64)((char *)v13 - (char *)v2->m_data.m_buffer) / 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v32 >= (_BYTE *)v13 && (ntl::pair<unsigned int,UsableRef> *)v32 < &v2->m_data.m_buffer[v2->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      v16 = (unsigned __int64)&v2->m_data.m_buffer[v2->m_size];
      if ( v13 != (ntl::pair<unsigned int,UsableRef> *)v16 )
      {
        v17 = v16 + 12;
        if ( v13 == (ntl::pair<unsigned int,UsableRef> *)(v16 + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v16 == v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v18 = v16 <= (unsigned __int64)v13;
        if ( v16 < (unsigned __int64)v13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v18 = v16 <= (unsigned __int64)v13;
        }
        if ( !v18 )
        {
          do
          {
            v19 = *(double *)(v16 - 12);
            v16 -= 12i64;
            v17 -= 12i64;
            *(double *)v17 = v19;
            *(_DWORD *)(v17 + 8) = *(_DWORD *)(v16 + 8);
          }
          while ( v16 > (unsigned __int64)v13 );
        }
      }
      ++v2->m_size;
      v20 = *(_DWORD *)&v32[8];
      v15 = 1;
      *(double *)&v13->first = *(double *)v32;
      *(_DWORD *)&v13->second.usePartitionIndex = v20;
      useClass = ref->useClass;
      if ( useClass )
      {
        if ( useClass != USE_CLASS_SCRIPTABLE )
        {
          LODWORD(v31) = 1;
          LODWORD(v30) = (unsigned __int8)useClass;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1611, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v30, v31) )
            __debugbreak();
        }
        ++s_usableWorldCountScriptables;
      }
      else
      {
        ++s_usableWorldCountEntities;
      }
      UseRadius = UsableRef_GetUseRadius(ref);
      if ( *(float *)&UseRadius > 240.0 )
      {
        v23 = &s_usableLargeRadiusList;
        v24 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
        if ( &s_usableLargeRadiusList == v24 )
        {
LABEL_61:
          v23 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
        }
        else
        {
          while ( *(_DWORD *)v23->m_data.m_buffer != v5 )
          {
            v23 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)v23 + 4);
            if ( v23 == v24 )
              goto LABEL_61;
          }
        }
        if ( v23 == v24 )
        {
          if ( s_usableLargeRadiusList.m_size < 0x800 )
          {
            *(_DWORD *)v24->m_data.m_buffer = v5;
            ++s_usableLargeRadiusList.m_size;
          }
          else
          {
            Com_PrintError(15, "Too many usables with a use radius that exceeds PLAYER_USE_SEARCH_RADIUS (%f). The limit of PLAYER_USE_LARGE_RADIUS_LIST_LIMIT is %d.", DOUBLE_240_0, 2048i64);
          }
        }
      }
      v25 = ref->useClass;
      if ( v25 )
      {
        if ( v25 != USE_CLASS_SCRIPTABLE )
        {
          LODWORD(v31) = 1;
          LODWORD(v30) = (unsigned __int8)v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1642, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v30, v31) )
            __debugbreak();
        }
        v26 = UsableScriptableDenseGrid_Get();
        p_origin = &ScriptableSv_GetInstanceCommonContext(ref->useIndex)->origin;
      }
      else
      {
        v26 = UsableEntityDenseGrid_Get();
        p_origin = &UsableRef_GetEntity(ref)->r.currentOrigin;
      }
      v28 = DenseGrid::Insert(v26, v5, (const vec2_t *)p_origin);
      v13->second.usePartitionIndex = v28;
      if ( v28 == 0xFFFF )
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
void UsableWorld_DebugDrawAll(void)
{
  ntl::vector_map<unsigned int,UsableRef,NtlHunkUserAllocator<ntl::pair<unsigned int,UsableRef> >,ntl::less<unsigned int,unsigned int> > *v0; 
  const char *v1; 
  ntl::pair<unsigned int,UsableRef> *i; 
  UsableClass useClass; 
  int useIndex; 
  const UsableRef *p_second; 
  bool v6; 
  UsableClass v7; 
  char *v8; 
  UsableClass v9; 
  const char *v10; 
  vec3_t *p_origin; 
  __int64 v12; 
  __int64 v13; 

  v0 = UsableWorldCollection_Get();
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
  v1 = j_va("%i Usables", LODWORD(v0->m_size));
  G_Main_AddDebugString2D(50.0, 50.0, &colorWhite, 1.0, v1);
  for ( i = v0->m_data.m_buffer; i != &v0->m_data.m_buffer[v0->m_size]; ++i )
  {
    useClass = i->second.useClass;
    if ( useClass )
    {
      if ( useClass == USE_CLASS_SCRIPTABLE )
      {
        p_second = &i->second;
        v6 = !ScriptableSv_GetInstanceInUse(i->second.useIndex);
LABEL_14:
        if ( !v6 )
        {
          v7 = i->second.useClass;
          if ( (unsigned __int8)v7 >= USE_CLASS_COUNT )
          {
            LODWORD(v13) = 2;
            LODWORD(v12) = (unsigned __int8)v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 2113, ASSERT_TYPE_ASSERT, "(unsigned)( ref.useClass ) < (unsigned)( ( sizeof( *array_counter( s_usableWorldUseClassName ) ) + 0 ) )", "ref.useClass doesn't index s_usableWorldUseClassName\n\t%i not in [0, %i)", v12, v13) )
              __debugbreak();
          }
          v8 = j_va("Usable %s %i (%i)", s_usableWorldUseClassName[(unsigned __int8)i->second.useClass], p_second->useIndex, i->second.useData);
          v9 = i->second.useClass;
          v10 = v8;
          if ( v9 )
          {
            if ( v9 == USE_CLASS_SCRIPTABLE )
              p_origin = &ScriptableSv_GetInstanceCommonContext(p_second->useIndex)->origin;
            else
              p_origin = &vec3_origin;
          }
          else
          {
            p_origin = &UsableRef_Internal_GetConstGentity(p_second)->r.currentOrigin;
          }
          G_Main_AddDebugString(p_origin, &colorWhite, 0.5, v10);
        }
      }
    }
    else
    {
      useIndex = i->second.useIndex;
      p_second = &i->second;
      if ( useIndex != 2047 )
      {
        v6 = G_IsEntityInUse(useIndex) == 0;
        goto LABEL_14;
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
  __m256i *v12; 
  __m256i *v13; 
  unsigned __int64 v14; 
  bool v15; 
  __m256i *v16; 
  __m256i v17; 

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
      v12 = (__m256i *)v2->m_data.m_buffer;
      if ( v10 )
        v12 = (__m256i *)((char *)v12 + ((v9 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFE0ui64));
      v13 = v12 + 1;
      v14 = (unsigned __int64)&v11[v10];
      if ( &v12[1] == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( (__m256i *)v14 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v15 = (unsigned __int64)v13 < v14;
      if ( (unsigned __int64)v13 > v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v15 = (unsigned __int64)v13 < v14;
      }
      if ( v15 )
      {
        v16 = v12;
        do
        {
          v17 = *v13++;
          *v16++ = v17;
        }
        while ( (unsigned __int64)v13 < v14 );
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
  unsigned __int64 v4; 
  const unsigned int *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  const unsigned int *v10; 
  ClientBits *result; 
  __int64 v12; 
  unsigned __int64 v13; 
  __m256i *v14; 
  bool v15; 
  __m256i v16; 
  __m256i v17; 
  __int128 v18; 
  __m256i v19; 

  v2 = (unsigned __int64 *)UsableClientMaskCollection_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1989, ASSERT_TYPE_ASSERT, "( usableClientMasks )", (const char *)&queryFormat, "usableClientMasks") )
    __debugbreak();
  v3 = v2[2];
  v4 = *v2;
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
  v10 = (const unsigned int *)(v4 + 32 * v8);
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
    *(_QWORD *)&v18 = -1i64;
    *((_QWORD *)&v18 + 1) = -1i64;
    v19.m256i_i32[0] = key;
    v19.m256i_i32[7] = -1;
    *(_OWORD *)((char *)v19.m256i_i64 + 4) = v18;
    *(double *)((char *)&v19.m256i_i64[2] + 4) = NAN;
    if ( v3 > 0 )
    {
      do
      {
        v12 = 32 * (v3 >> 1);
        if ( *(_DWORD *)(v12 + v4) >= key )
        {
          v3 >>= 1;
        }
        else
        {
          v4 += v12 + 32;
          v3 += -1 - (v3 >> 1);
        }
      }
      while ( v3 > 0 );
      v3 = v2[2];
    }
    if ( (const unsigned int *)v4 == v10 || key < *(_DWORD *)v4 )
    {
      if ( v2[1] == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
        __debugbreak();
      if ( (v4 < *v2 || v4 > *v2 + 32 * v2[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (((_BYTE)v4 - *(_BYTE *)v2) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( (unsigned __int64)&v19 >= v4 && (unsigned __int64)&v19 < *v2 + 32 * v2[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
        __debugbreak();
      v13 = *v2 + 32 * v2[2];
      if ( v4 != v13 )
      {
        v14 = (__m256i *)(v13 + 32);
        if ( v4 == v13 + 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( (__m256i *)v13 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v15 = v13 <= v4;
        if ( v13 < v4 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v15 = v13 <= v4;
        }
        if ( !v15 )
        {
          do
          {
            v16 = *(__m256i *)(v13 - 32);
            v13 -= 32i64;
            *--v14 = v16;
          }
          while ( v13 > v4 );
        }
      }
      v17 = v19;
      ++v2[2];
      result = (ClientBits *)(v4 + 4);
      *(__m256i *)v4 = v17;
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
  unsigned __int64 *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  bool v15; 
  double v16; 
  int v17; 
  unsigned __int64 v18; 
  signed __int64 v19; 
  char *v20; 
  char *v21; 
  __int64 v22; 
  ntl::fixed_vector<unsigned int,2048,0> *v23; 
  ntl::fixed_vector<unsigned int,2048,0> *v24; 
  ntl::fixed_vector<unsigned int,2048,0> *v25; 
  unsigned __int64 v26; 
  signed __int64 v27; 
  bool v28; 
  char *v29; 
  unsigned __int64 v30; 
  char *v31; 
  unsigned int fmt; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  _BYTE v36[24]; 
  SaveGame *v37; 
  unsigned int p; 
  int v39; 
  MemoryFile *memFile; 

  v37 = save;
  p_memFile = &save->memFile;
  v2 = save;
  memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 2ui64, &p);
  v3 = (unsigned __int16)p;
  v4 = (unsigned __int16)p;
  v39 = (unsigned __int16)p;
  if ( v3 >= UsableWorld_GetUsableLimit() )
  {
    fmt = UsableWorld_GetUsableLimit();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D93800, 879i64, v3, fmt);
    return;
  }
  v5 = 0i64;
  v6 = (unsigned __int64 *)UsableWorldCollection_Get();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1824, ASSERT_TYPE_ASSERT, "( ( usableWorld != nullptr ) )", "%s\n\t( usableWorld ) = %p", "( usableWorld != nullptr )", NULL) )
    __debugbreak();
  if ( v6[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1825, ASSERT_TYPE_ASSERT, "( usableWorld->size() == 0u )", (const char *)&queryFormat, "usableWorld->size() == 0u") )
    __debugbreak();
  s_usableWorldCountEntities = 0;
  s_usableWorldCountScriptables = 0;
  if ( (_WORD)v3 )
  {
    v7 = (unsigned __int16)v3;
    do
    {
      MemFile_ReadData(p_memFile, 4ui64, &p);
      MemFile_ReadData(p_memFile, 8ui64, &v35);
      v8 = v6[2];
      v9 = v8;
      v10 = *v6;
      v11 = v8;
      v12 = *v6;
      *(_DWORD *)v36 = p;
      *(_QWORD *)&v36[4] = v35;
      while ( v9 > 0 )
      {
        if ( *(_DWORD *)(v10 + 12 * (v9 >> 1)) >= p )
        {
          v9 >>= 1;
        }
        else
        {
          v10 += 12 * (v9 >> 1) + 12;
          v9 += -1 - (v9 >> 1);
        }
      }
      if ( v10 == v12 + 12 * v8 || (v11 = v8, p < *(_DWORD *)v10) )
      {
        if ( v6[1] == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( (v10 < *v6 || v10 > *v6 + 12 * v6[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( v10 - *v6 != 12 * ((v10 - *v6) / 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( (unsigned __int64)v36 >= v10 && (unsigned __int64)v36 < *v6 + 12 * v6[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        v13 = *v6 + 12 * v6[2];
        if ( v10 != v13 )
        {
          v14 = v13 + 12;
          if ( v10 == v13 + 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( v13 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v15 = v13 <= v10;
          if ( v13 < v10 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v15 = v13 <= v10;
          }
          if ( !v15 )
          {
            do
            {
              v16 = *(double *)(v13 - 12);
              v13 -= 12i64;
              v14 -= 12i64;
              *(double *)v14 = v16;
              *(_DWORD *)(v14 + 8) = *(_DWORD *)(v13 + 8);
            }
            while ( v13 > v10 );
          }
          p_memFile = memFile;
        }
        ++v6[2];
        v17 = *(_DWORD *)&v36[8];
        *(double *)v10 = *(double *)v36;
        *(_DWORD *)(v10 + 8) = v17;
        if ( BYTE6(v35) )
        {
          if ( BYTE6(v35) != 1 )
          {
            LODWORD(v34) = 1;
            LODWORD(v33) = BYTE6(v35);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1611, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", v33, v34) )
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
    v4 = v39;
    v5 = 0i64;
    v2 = v37;
  }
  if ( s_usableWorldCountEntities + s_usableWorldCountScriptables != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1844, ASSERT_TYPE_ASSERT, "( ( s_usableWorldCountEntities + s_usableWorldCountScriptables ) == count )", (const char *)&queryFormat, "( s_usableWorldCountEntities + s_usableWorldCountScriptables ) == count") )
    __debugbreak();
  UsableWorld_ReadClientMasks(v2);
  UsableEntityDenseGrid_Read(p_memFile);
  UsableScriptableDenseGrid_Read(p_memFile);
  MemFile_ReadData(p_memFile, 4ui64, &v37);
  v18 = (unsigned int)v37;
  if ( (unsigned int)v37 > 0x800 )
  {
    LODWORD(v34) = 2048;
    LODWORD(v33) = (_DWORD)v37;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1851, ASSERT_TYPE_ASSERT, "( largeRadiusListSize ) <= ( PLAYER_USE_LARGE_RADIUS_LIST_LIMIT )", "largeRadiusListSize <= PLAYER_USE_LARGE_RADIUS_LIST_LIMIT\n\t%i, %i", v33, v34) )
      __debugbreak();
  }
  if ( v18 >= s_usableLargeRadiusList.m_size )
  {
    v28 = s_usableLargeRadiusList.m_size == v18;
    if ( s_usableLargeRadiusList.m_size < v18 )
    {
      if ( v18 > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 394, ASSERT_TYPE_ASSERT, "( newSize <= max_size() )", (const char *)&queryFormat, "newSize <= max_size()") )
        __debugbreak();
      v29 = &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size];
      if ( s_usableLargeRadiusList.m_size < v18 )
      {
        v30 = v18 - s_usableLargeRadiusList.m_size;
        do
        {
          v31 = v29;
          v29 += 4;
          if ( v31 )
            *(_DWORD *)v31 = 0;
          --v30;
        }
        while ( v30 );
      }
      s_usableLargeRadiusList.m_size = v18;
      goto LABEL_93;
    }
  }
  else
  {
    v19 = 4 * s_usableLargeRadiusList.m_size;
    v20 = &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size];
    v21 = &s_usableLargeRadiusList.m_data.m_buffer[4 * v18];
    if ( v21 != v20 )
    {
      if ( (v21 < (char *)&s_usableLargeRadiusList || v21 > v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      if ( (v20 < (char *)&s_usableLargeRadiusList || v20 > &s_usableLargeRadiusList.m_data.m_buffer[4 * s_usableLargeRadiusList.m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v22 = (v20 - v21) >> 2;
      v23 = &s_usableLargeRadiusList;
      if ( s_usableLargeRadiusList.m_size )
        v23 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * v18);
      v24 = &s_usableLargeRadiusList;
      if ( s_usableLargeRadiusList.m_size )
        v24 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * (v19 >> 2));
      v25 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
      if ( v24 == v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v25 == v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      if ( v25 < v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
        __debugbreak();
      v26 = (unsigned __int64)((char *)v25 - (char *)v24 + 3) >> 2;
      if ( v24 > v25 )
        v26 = 0i64;
      if ( v26 )
      {
        v27 = (char *)v24 - (char *)v23;
        do
        {
          ++v5;
          *(_DWORD *)v23->m_data.m_buffer = *(_DWORD *)&v23->m_data.m_buffer[v27];
          v23 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)v23 + 4);
        }
        while ( v5 < v26 );
      }
      s_usableLargeRadiusList.m_size -= v22;
    }
    p_memFile = memFile;
    v28 = s_usableLargeRadiusList.m_size == v18;
  }
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 402, ASSERT_TYPE_ASSERT, "( size() == newSize )", (const char *)&queryFormat, "size() == newSize") )
    __debugbreak();
LABEL_93:
  if ( s_usableLargeRadiusList.m_size != v18 )
  {
    LODWORD(v34) = v18;
    LODWORD(v33) = s_usableLargeRadiusList.m_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1854, ASSERT_TYPE_ASSERT, "( s_usableLargeRadiusList.size() ) == ( largeRadiusListSize )", "s_usableLargeRadiusList.size() == largeRadiusListSize\n\t%i, %i", v33, v34) )
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
  __m256i *m_buffer; 
  __int64 v7; 
  __int64 v8; 
  ntl::pair<unsigned int,ClientBits> *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __m256i *v12; 
  bool v13; 
  __m256i v14; 
  __m256i v15; 
  unsigned int p; 
  __m256i v17; 
  __int128 v18; 
  __int64 v19; 
  int v20; 

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
        MemFile_ReadData(p_memFile, 0x1Cui64, &v18);
        m_size = v3->m_size;
        m_buffer = (__m256i *)v3->m_data.m_buffer;
        v7 = m_size;
        v8 = m_size;
        v9 = v3->m_data.m_buffer;
        v17.m256i_i32[0] = p;
        v17.m256i_i32[7] = v20;
        *(_OWORD *)((char *)v17.m256i_i64 + 4) = v18;
        *(__int64 *)((char *)&v17.m256i_i64[2] + 4) = v19;
        if ( m_size > 0 )
        {
          do
          {
            v10 = v7 >> 1;
            if ( m_buffer[v10].m256i_i32[0] >= p )
            {
              v7 >>= 1;
            }
            else
            {
              m_buffer = (__m256i *)((char *)m_buffer + v10 * 32 + 32);
              v7 += -1 - (v7 >> 1);
            }
          }
          while ( v7 > 0 );
          v8 = m_size;
        }
        if ( m_buffer == (__m256i *)&v9[v8] || (v8 = m_size, p < m_buffer->m256i_i32[0]) )
        {
          if ( v3->m_data.m_size == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( ((ntl::pair<unsigned int,ClientBits> *)m_buffer < v3->m_data.m_buffer || (ntl::pair<unsigned int,ClientBits> *)m_buffer > &v3->m_data.m_buffer[v3->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (((_BYTE)m_buffer - LOBYTE(v3->m_data.m_buffer)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( &v17 >= m_buffer && (ntl::pair<unsigned int,ClientBits> *)&v17 < &v3->m_data.m_buffer[v3->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v11 = (unsigned __int64)&v3->m_data.m_buffer[v3->m_size];
          if ( m_buffer != (__m256i *)v11 )
          {
            v12 = (__m256i *)(v11 + 32);
            if ( m_buffer == (__m256i *)(v11 + 32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( (__m256i *)v11 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v13 = v11 <= (unsigned __int64)m_buffer;
            if ( v11 < (unsigned __int64)m_buffer )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v13 = v11 <= (unsigned __int64)m_buffer;
            }
            if ( !v13 )
            {
              do
              {
                v14 = *(__m256i *)(v11 - 32);
                v11 -= 32i64;
                *--v12 = v14;
              }
              while ( v11 > (unsigned __int64)m_buffer );
            }
          }
          v15 = v17;
          ++v3->m_size;
          *m_buffer = v15;
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
  ntl::pair<unsigned int,UsableRef> *v12; 
  ntl::pair<unsigned int,UsableRef> *v13; 
  bool v14; 
  ntl::pair<unsigned int,UsableRef> *v15; 
  int v16; 

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
  v12 = v11 + 1;
  v13 = &v10[v9];
  if ( &v11[1] == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v13 == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v14 = v12 < v13;
  if ( v12 > v13 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v14 = v12 < v13;
  }
  if ( v14 )
  {
    v15 = v11;
    do
    {
      *(double *)&v15->first = *(double *)&v12->first;
      v16 = *(_DWORD *)&v12->second.usePartitionIndex;
      ++v12;
      *(_DWORD *)&v15->second.usePartitionIndex = v16;
      ++v15;
    }
    while ( v12 < v13 );
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
char UsableWorld_SetUseRadius(const UsableRef *ref, float useRadius)
{
  unsigned int v2; 
  unsigned int *v3; 
  ntl::fixed_vector<unsigned int,2048,0> *v4; 

  v2 = UsableKeyEncode(ref->useIndex, (const UsableClass)ref->useClass, ref->useData);
  v3 = (unsigned int *)&s_usableLargeRadiusList;
  v4 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  if ( &s_usableLargeRadiusList == v4 )
  {
LABEL_4:
    v3 = (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
  }
  else
  {
    while ( *v3 != v2 )
    {
      if ( ++v3 == (unsigned int *)v4 )
        goto LABEL_4;
    }
  }
  if ( v3 == (unsigned int *)v4 )
  {
    if ( useRadius > 240.0 )
    {
      if ( s_usableLargeRadiusList.m_size >= 0x800 )
      {
        Com_PrintError(15, "Too many usables with a use radius that exceeds PLAYER_USE_SEARCH_RADIUS (%f). The limit of PLAYER_USE_LARGE_RADIUS_LIST_LIMIT is %d.", DOUBLE_240_0, 2048i64);
        return 0;
      }
      *(_DWORD *)v4->m_data.m_buffer = v2;
      ++s_usableLargeRadiusList.m_size;
    }
  }
  else if ( useRadius <= 240.0 )
  {
    return UsableLargeRadiusList_RemoveKey(v3);
  }
  return 1;
}

/*
==============
UsableWorld_UntrackRef
==============
*/
void UsableWorld_UntrackRef(const unsigned int *key, const UsableRef *ref)
{
  double UseRadius; 
  unsigned int *v5; 
  ntl::fixed_vector<unsigned int,2048,0> *v6; 
  UsableClass useClass; 
  DenseGrid *v8; 
  ntl::vector_map<unsigned int,ClientBits,NtlHunkUserAllocator<ntl::pair<unsigned int,ClientBits> >,ntl::less<unsigned int,unsigned int> > *v9; 
  ntl::pair<unsigned int,ClientBits> *m_buffer; 
  ntl::pair<unsigned int,ClientBits> *v11; 
  __int64 m_size; 
  unsigned __int64 v13; 
  __int64 v14; 
  ntl::pair<unsigned int,ClientBits> *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ntl::pair<unsigned int,ClientBits> *v18; 
  __m256i *v19; 
  __m256i *v20; 
  unsigned __int64 v21; 
  __m256i *v22; 
  __m256i v23; 

  UseRadius = UsableRef_GetUseRadius(ref);
  if ( *(float *)&UseRadius > 240.0 )
  {
    v5 = (unsigned int *)&s_usableLargeRadiusList;
    v6 = (ntl::fixed_vector<unsigned int,2048,0> *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
    if ( &s_usableLargeRadiusList == v6 )
    {
LABEL_5:
      v5 = (unsigned int *)((char *)&s_usableLargeRadiusList + 4 * s_usableLargeRadiusList.m_size);
    }
    else
    {
      while ( *v5 != *key )
      {
        if ( ++v5 == (unsigned int *)v6 )
          goto LABEL_5;
      }
    }
    if ( v5 == (unsigned int *)v6 )
      Com_PrintError(15, "Failed to remove usable %u from large radius list -- possible leak detected", *key);
    else
      UsableLargeRadiusList_RemoveKey(v5);
  }
  useClass = ref->useClass;
  if ( useClass )
  {
    if ( useClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\player_use_local.cpp", 1677, ASSERT_TYPE_ASSERT, "( ref.useClass ) == ( USE_CLASS_SCRIPTABLE )", "ref.useClass == USE_CLASS_SCRIPTABLE\n\t%i, %i", (unsigned __int8)useClass, 1) )
      __debugbreak();
    --s_usableWorldCountScriptables;
    v9 = UsableClientMaskCollection_Get();
    m_buffer = v9->m_data.m_buffer;
    v11 = v9->m_data.m_buffer;
    m_size = v9->m_size;
    v13 = m_size;
    if ( m_size > 0 )
    {
      do
      {
        v14 = m_size >> 1;
        if ( v11[v14].first >= *key )
        {
          m_size >>= 1;
        }
        else
        {
          v11 = (ntl::pair<unsigned int,ClientBits> *)((char *)v11 + v14 * 32 + 32);
          m_size += -1 - (m_size >> 1);
        }
      }
      while ( m_size > 0 );
      v13 = v9->m_size;
    }
    v15 = &m_buffer[v13];
    if ( v11 != v15 )
    {
      if ( *key < v11->first )
        v13 = v9->m_size;
      v16 = (unsigned __int64)&m_buffer[v9->m_size];
      if ( *key >= v11->first )
        v16 = (unsigned __int64)v11;
      if ( (ntl::pair<unsigned int,ClientBits> *)v16 != v15 )
      {
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
        if ( ((ntl::pair<unsigned int,ClientBits> *)v16 < v9->m_data.m_buffer || (ntl::pair<unsigned int,ClientBits> *)v16 > &v9->m_data.m_buffer[v9->m_size]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( (((_BYTE)v16 - LOBYTE(v9->m_data.m_buffer)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( (ntl::pair<unsigned int,ClientBits> *)v16 == &v9->m_data.m_buffer[v9->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
          __debugbreak();
        v17 = v9->m_size;
        v18 = v9->m_data.m_buffer;
        v19 = (__m256i *)v9->m_data.m_buffer;
        if ( v17 )
          v19 = (__m256i *)((char *)v19 + ((v16 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFE0ui64));
        v20 = v19 + 1;
        v21 = (unsigned __int64)&v18[v17];
        if ( &v19[1] == v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( (__m256i *)v21 == v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        if ( v21 < (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        if ( (unsigned __int64)v20 < v21 )
        {
          v22 = v19;
          do
          {
            v23 = *v20++;
            *v22++ = v23;
          }
          while ( (unsigned __int64)v20 < v21 );
        }
        --v9->m_size;
      }
    }
    v8 = UsableScriptableDenseGrid_Get();
  }
  else
  {
    --s_usableWorldCountEntities;
    v8 = UsableEntityDenseGrid_Get();
  }
  DenseGrid::Remove(v8, *key, ref->usePartitionIndex);
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

