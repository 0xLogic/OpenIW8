/*
==============
Ragdoll_FindBoneDescendants
==============
*/

int __fastcall Ragdoll_FindBoneDescendants(Ragdoll *ragdoll, int boneIdx, int *descendantIndices)
{
  return ?Ragdoll_FindBoneDescendants@@YAHPEAURagdoll@@HPEAH@Z(ragdoll, boneIdx, descendantIndices);
}

/*
==============
Ragdoll_AddUpdateWorkerCmds
==============
*/

void __fastcall Ragdoll_AddUpdateWorkerCmds(LocalClientNum_t clientNum, float timeStep)
{
  ?Ragdoll_AddUpdateWorkerCmds@@YAXW4LocalClientNum_t@@M@Z(clientNum, timeStep);
}

/*
==============
Ragdoll_UpdateCmd
==============
*/

void __fastcall Ragdoll_UpdateCmd(const void *const cmdInfo)
{
  ?Ragdoll_UpdateCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Ragdoll_Update_ShutdownRWLock
==============
*/

void Ragdoll_Update_ShutdownRWLock(void)
{
  ?Ragdoll_Update_ShutdownRWLock@@YAXXZ();
}

/*
==============
Ragdoll_GetBoneScrStringForHitLocation
==============
*/

scr_string_t __fastcall Ragdoll_GetBoneScrStringForHitLocation(hitLocation_t hitLocation)
{
  return ?Ragdoll_GetBoneScrStringForHitLocation@@YA?AW4scr_string_t@@W4hitLocation_t@@@Z(hitLocation);
}

/*
==============
Ragdoll_GetBodyIdxForBoneName
==============
*/

bool __fastcall Ragdoll_GetBodyIdxForBoneName(Physics_WorldId worldId, int ragdollHandle, scr_string_t boneName, unsigned int *outInstanceId, int *outBodyIdx, float *outBodyRadius)
{
  return ?Ragdoll_GetBodyIdxForBoneName@@YA_NW4Physics_WorldId@@HW4scr_string_t@@PEAIPEAHPEAM@Z(worldId, ragdollHandle, boneName, outInstanceId, outBodyIdx, outBodyRadius);
}

/*
==============
Ragdoll_IsPenetrating
==============
*/

bool __fastcall Ragdoll_IsPenetrating(const int ragdollHandle)
{
  return ?Ragdoll_IsPenetrating@@YA_NH@Z(ragdollHandle);
}

/*
==============
Ragdoll_IsAtRest
==============
*/

bool __fastcall Ragdoll_IsAtRest(const int ragdollHandle)
{
  return ?Ragdoll_IsAtRest@@YA_NH@Z(ragdollHandle);
}

/*
==============
Ragdoll_Update_InitRWLock
==============
*/

void Ragdoll_Update_InitRWLock(void)
{
  ?Ragdoll_Update_InitRWLock@@YAXXZ();
}

/*
==============
Ragdoll_SetAnimationParameters
==============
*/

bool __fastcall Ragdoll_SetAnimationParameters(DObj *obj, int ragdollHandle, bool ragdollActive)
{
  return ?Ragdoll_SetAnimationParameters@@YA_NPEAUDObj@@H_N@Z(obj, ragdollHandle, ragdollActive);
}

/*
==============
Ragdoll_PreUpdate
==============
*/

void __fastcall Ragdoll_PreUpdate(LocalClientNum_t clientNum)
{
  ?Ragdoll_PreUpdate@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_GetBoneNameForHitLocation
==============
*/

const char *__fastcall Ragdoll_GetBoneNameForHitLocation(hitLocation_t hitLocation)
{
  return ?Ragdoll_GetBoneNameForHitLocation@@YAPEBDW4hitLocation_t@@@Z(hitLocation);
}

/*
==============
Ragdoll_SetCallbacks
==============
*/

void __fastcall Ragdoll_SetCallbacks(void (__fastcall *enterRunning)(LocalClientNum_t, int, int), void (__fastcall *updateRunning)(LocalClientNum_t, int, int), void (__fastcall *exitRunning)(LocalClientNum_t, int, int))
{
  ?Ragdoll_SetCallbacks@@YAXP6AXW4LocalClientNum_t@@HH@Z11@Z(enterRunning, updateRunning, exitRunning);
}

/*
==============
Ragdoll_Update
==============
*/

void __fastcall Ragdoll_Update(float timeStep, int ragdollHandle)
{
  ?Ragdoll_Update@@YAXMH@Z(timeStep, ragdollHandle);
}

/*
==============
Ragdoll_GetPhysicsWorldId
==============
*/

Physics_WorldId __fastcall Ragdoll_GetPhysicsWorldId(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetPhysicsWorldId@@YA?AW4Physics_WorldId@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetBodyIdxForHitLocation
==============
*/

bool __fastcall Ragdoll_GetBodyIdxForHitLocation(Physics_WorldId worldId, int ragdollHandle, hitLocation_t hitLoc, unsigned int *outInstanceId, int *outBodyIdx, float *outBodyRadius)
{
  return ?Ragdoll_GetBodyIdxForHitLocation@@YA_NW4Physics_WorldId@@HW4hitLocation_t@@PEAIPEAHPEAM@Z(worldId, ragdollHandle, hitLoc, outInstanceId, outBodyIdx, outBodyRadius);
}

/*
==============
Ragdoll_Update_ReleaseReadLock
==============
*/

void Ragdoll_Update_ReleaseReadLock(void)
{
  ?Ragdoll_Update_ReleaseReadLock@@YAXXZ();
}

/*
==============
Ragdoll_CopyBoneOrientations
==============
*/

void __fastcall Ragdoll_CopyBoneOrientations(Ragdoll *ragdoll, const BoneOrientation *sourceBoneOrientations, BoneOrientation *destBoneOrientations)
{
  ?Ragdoll_CopyBoneOrientations@@YAXPEAURagdoll@@PEBUBoneOrientation@@PEAU2@@Z(ragdoll, sourceBoneOrientations, destBoneOrientations);
}

/*
==============
Ragdoll_SetNewState
==============
*/

bool __fastcall Ragdoll_SetNewState(Ragdoll *ragdoll, RagdollActivityState state)
{
  return ?Ragdoll_SetNewState@@YA_NPEAURagdoll@@W4RagdollActivityState@@@Z(ragdoll, state);
}

/*
==============
Ragdoll_Update_AcquireReadLock
==============
*/

void Ragdoll_Update_AcquireReadLock(void)
{
  ?Ragdoll_Update_AcquireReadLock@@YAXXZ();
}

/*
==============
Ragdoll_UpdateAll
==============
*/

void __fastcall Ragdoll_UpdateAll(LocalClientNum_t clientNum, float timeStep)
{
  ?Ragdoll_UpdateAll@@YAXW4LocalClientNum_t@@M@Z(clientNum, timeStep);
}

/*
==============
Ragdoll_MarkPenetrating
==============
*/

void __fastcall Ragdoll_MarkPenetrating(const int ragdollHandle)
{
  ?Ragdoll_MarkPenetrating@@YAXH@Z(ragdollHandle);
}

/*
==============
Ragdoll_FindBoneChildren
==============
*/

int __fastcall Ragdoll_FindBoneChildren(Ragdoll *ragdoll, int boneIdx, int *childIndices)
{
  return ?Ragdoll_FindBoneChildren@@YAHPEAURagdoll@@HPEAH@Z(ragdoll, boneIdx, childIndices);
}

/*
==============
Ragdoll_EnterDead
==============
*/
char Ragdoll_EnterDead(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  __int64 v6; 
  int v7; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 308, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)prevState >= NUM_RAGDOLL_ACTIVITY_STATES )
  {
    v7 = 6;
    LODWORD(v6) = prevState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( prevState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "prevState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( curState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 310, ASSERT_TYPE_ASSERT, "(curState == RAGDOLL_ACTIVITY_STATE_DEAD)", (const char *)&queryFormat, "curState == RAGDOLL_ACTIVITY_STATE_DEAD") )
    __debugbreak();
  return 1;
}

/*
==============
Ragdoll_Enter3PWait
==============
*/
char Ragdoll_Enter3PWait(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  if ( ragdoll )
  {
    ragdoll->state.counter3P = 0;
    return 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 320, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    MEMORY[0x2A10] = 0;
    return 1;
  }
}

/*
==============
Ragdoll_Exit3PWait
==============
*/
char Ragdoll_Exit3PWait(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  DObj *v7; 
  const DObj *v8; 
  __int64 v9; 
  const PhysicsAsset *v10; 
  int PhysicsAssetBodyCount; 
  __int64 v12; 
  int PhysicsAssetConstraintCount; 
  int v14; 
  float *p_length; 
  const char *PhysicsAssetBodyName; 
  float v17; 
  const char *v18; 
  __int64 v19; 
  __int64 v20; 
  signed __int64 v21; 
  char *v22; 
  unsigned int v23; 
  scr_string_t String; 
  scr_string_t v25; 
  bool v26; 
  int v27; 
  int v28; 
  int *v29; 
  __int16 v30; 
  __int64 v31; 
  unsigned __int8 inOutIndex[4]; 
  int bodyId1; 
  int bodyId2; 
  __int64 v35; 
  int *parentBoneIndices; 
  DObj *v37; 
  DObjPartBits *p_completePartBits; 
  int modelIndex; 
  __int64 v40; 
  _QWORD *v41; 
  vec3_t max; 
  vec3_t min; 
  DObjPartBits partBits; 
  char str[256]; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 333, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( prevState != RAGDOLL_ACTIVITY_STATE_3P_WAIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 334, ASSERT_TYPE_ASSERT, "(prevState == RAGDOLL_ACTIVITY_STATE_3P_WAIT)", (const char *)&queryFormat, "prevState == RAGDOLL_ACTIVITY_STATE_3P_WAIT") )
    __debugbreak();
  if ( (unsigned int)curState >= NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v31) = curState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( curState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "curState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v31, 6) )
      __debugbreak();
  }
  if ( curState == RAGDOLL_ACTIVITY_STATE_DEAD )
    return 1;
  v7 = Ragdoll_BodyDObj(ragdoll);
  v37 = v7;
  v8 = v7;
  if ( v7 && v7->numModels )
  {
    v9 = (__int64)*v7->models;
    v41 = (_QWORD *)v9;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 356, ASSERT_TYPE_ASSERT, "(bodyModel)", (const char *)&queryFormat, "bodyModel") )
      __debugbreak();
    strncpy(ragdoll->xmodelAtCreate, *(const char **)v9, 0x100ui64);
    DObjGetHidePartBits(v8, &partBits);
    v10 = *(const PhysicsAsset **)(v9 + 624);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 365, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
      __debugbreak();
    PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v10);
    v12 = PhysicsAssetBodyCount;
    if ( PhysicsAssetBodyCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 369, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    PhysicsAssetConstraintCount = Physics_GetPhysicsAssetConstraintCount(v10);
    ragdoll->state.numBones = v12;
    p_completePartBits = &ragdoll->state.completePartBits;
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&ragdoll->state.completePartBits);
    v14 = 0;
    v40 = v12;
    if ( (int)v12 <= 0 )
    {
LABEL_41:
      DObjCompleteHierarchyBits(v8, p_completePartBits);
      return 1;
    }
    else
    {
      v35 = 0i64;
      parentBoneIndices = ragdoll->state.parentBoneIndices;
      p_length = &ragdoll->state.bones[0].length;
      while ( 1 )
      {
        PhysicsAssetBodyName = Physics_GetPhysicsAssetBodyName(v10, v14);
        Physics_GetPhysicsAssetBodyBounds(v10, v14, &min, &max);
        v17 = max.v[0];
        if ( I_strnicmp(PhysicsAssetBodyName, "havok_", 6ui64) )
          break;
        v18 = PhysicsAssetBodyName + 6;
        v19 = -1i64;
        do
          ++v19;
        while ( v18[v19] );
        v20 = 0i64;
        if ( v19 )
        {
          v21 = v18 - str;
          do
          {
            v22 = &str[v20];
            v23 = str[v20++ + v21] - 65;
            *v22 = v22[v21] + (v23 < 0x1A ? 0x20 : 0);
          }
          while ( v20 != v19 );
        }
        str[v19] = 0;
        String = SL_FindString(str);
        v25 = String;
        if ( !String )
        {
          Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B8840, 724i64, str, *v41);
          return 0;
        }
        inOutIndex[0] = -2;
        if ( DObjGetBoneIndexInternal_38(v8, String, inOutIndex, &modelIndex) )
        {
          v26 = ((0x80000000 >> (inOutIndex[0] & 0x1F)) & partBits.array[(unsigned __int64)inOutIndex[0] >> 5]) != 0;
          XAnimSetPartBit(p_completePartBits, inOutIndex[0]);
        }
        else
        {
          v26 = 1;
        }
        v27 = 0;
        v28 = 0;
        if ( PhysicsAssetConstraintCount > 0 )
        {
          while ( 1 )
          {
            Physics_GetPhysicsAssetConstraintBodyIds(v10, v28, &bodyId1, &bodyId2);
            if ( bodyId1 == v14 )
              break;
            if ( ++v28 >= PhysicsAssetConstraintCount )
              goto LABEL_40;
          }
          v27 = bodyId2;
        }
LABEL_40:
        v29 = parentBoneIndices;
        ++v14;
        v30 = inOutIndex[0];
        parentBoneIndices[1692] = v25;
        *((_DWORD *)p_length - 2) = v27;
        *((_BYTE *)p_length - 2) = v26;
        v8 = v37;
        *p_length = v17;
        *((_WORD *)p_length - 2) = v30;
        p_length += 12;
        *v29 = v27;
        parentBoneIndices = v29 + 1;
        if ( ++v35 >= v40 )
          goto LABEL_41;
      }
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B87E0, 723i64, "havok_", v10->name, PhysicsAssetBodyName);
      return 0;
    }
  }
  else
  {
    Com_PrintWarning(20, "Ragdoll_Exit3PWait: no obj 0x%p or it has no models - this is rarely a valid case and should only be raised if it happens >10%% of deaths\n", v7);
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    return 0;
  }
}

/*
==============
Ragdoll_UpdateDObjWait
==============
*/
void Ragdoll_UpdateDObjWait(Ragdoll *ragdoll, float timeStep, const int gameFrameTimeMs)
{
  RagdollActivityState v4; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 501, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Profile_Begin(537);
  if ( ragdoll->state.frames > 4 )
  {
    Com_PrintWarning(20, "Ragdoll_UpdateDObjWait: waited too long.  This can happen occasionally (usually in areas of high combat) and is only of concern if it is seen for >50 percent of kills.\n");
    v4 = RAGDOLL_ACTIVITY_STATE_DEAD;
LABEL_8:
    Ragdoll_SetNewState(ragdoll, v4);
    goto LABEL_9;
  }
  if ( Ragdoll_ValidateBodyObj(ragdoll) )
  {
    v4 = RAGDOLL_ACTIVITY_STATE_3P_WAIT;
    goto LABEL_8;
  }
LABEL_9:
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_Update3PWait
==============
*/
void Ragdoll_Update3PWait(Ragdoll *ragdoll, float timeStep, const int gameFrameTimeMs)
{
  centity_t *Entity; 
  centity_t *v5; 
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const playerState_s *p_predictedPlayerState; 
  __int64 localClientNum; 

  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 585, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 524, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)ragdoll->localClientNum, ragdoll->entityNum);
  v5 = Entity;
  if ( !Entity || (Entity->flags & 1) == 0 || Entity->nextState.eType != ET_PLAYER_CORPSE )
    goto LABEL_23;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 541, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.clientNum != v5->nextState.clientNum || ragdoll->state.frames > 4 )
    goto LABEL_23;
  v7 = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 562, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v7->predictedPlayerState;
  if ( v7->renderingThirdPerson )
    goto LABEL_26;
  localClientNum = ragdoll->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[localClientNum], p_predictedPlayerState) )
  {
LABEL_26:
    if ( ++ragdoll->state.counter3P > 1 )
LABEL_23:
      Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE);
  }
}

/*
==============
Ragdoll_UpdateVelocityCapture
==============
*/
void Ragdoll_UpdateVelocityCapture(Ragdoll *ragdoll, float timeStep, const int gameFrameTimeMs)
{
  int v5; 
  const DObj *v6; 
  const BoneOrientation *AnimPoseRootOrientation; 
  float v8; 
  int v9; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  vec3_t trans; 
  vec4_t rot; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 785, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Profile_Begin(538);
  v5 = ragdoll->immediatePlayerRagdoll ? 2 : 0;
  if ( ragdoll->state.frames >= v5 )
  {
    if ( ragdoll->state.frames == v5 )
    {
      if ( Ragdoll_PoseValid(ragdoll) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 799, ASSERT_TYPE_ASSERT, "(!Ragdoll_PoseValid( ragdoll ))", (const char *)&queryFormat, "!Ragdoll_PoseValid( ragdoll )") )
        __debugbreak();
      if ( Ragdoll_SnapshotAnimOrientations(ragdoll) )
      {
        v6 = Ragdoll_BodyDObj(ragdoll);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 764, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
          __debugbreak();
        AnimPoseRootOrientation = Ragdoll_GetAnimPoseRootOrientation(ragdoll);
        XAnimCalcAbsDelta(v6, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &trans);
        QuatTrans_Inverse(&rot, &trans, &outInvQuat, &outInvTrans);
        v8 = outInvTrans.v[1];
        ragdoll->state.initialAnimationRootRotation = outInvQuat;
        ragdoll->state.initialAnimationRootTranslation.v[0] = outInvTrans.v[0];
        ragdoll->state.initialAnimationRootTranslation.v[2] = outInvTrans.v[2];
        ragdoll->state.initialAnimationRootTranslation.v[1] = v8;
        QuatTrans_MultiplyEquals(&ragdoll->state.initialAnimationRootRotation, &ragdoll->state.initialAnimationRootTranslation, &AnimPoseRootOrientation->orientation, &AnimPoseRootOrientation->origin);
        ragdoll->state.animationRootRotation = AnimPoseRootOrientation->orientation;
        ragdoll->state.animationRootTranslation.v[0] = AnimPoseRootOrientation->origin.v[0];
        ragdoll->state.animationRootTranslation.v[1] = AnimPoseRootOrientation->origin.v[1];
        ragdoll->state.animationRootTranslation.v[2] = AnimPoseRootOrientation->origin.v[2];
      }
      ragdoll->state.velCaptureMsec = gameFrameTimeMs + ragdoll->state.msec;
    }
    else
    {
      v9 = ragdoll->state.msec - ragdoll->state.velCaptureMsec;
      ragdoll->state.velCaptureMsec = gameFrameTimeMs + v9;
      if ( !(gameFrameTimeMs + v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 817, ASSERT_TYPE_ASSERT, "(ragdoll->state.velCaptureMsec != 0)", (const char *)&queryFormat, "ragdoll->state.velCaptureMsec != 0") )
        __debugbreak();
      if ( Ragdoll_SnapshotAnimOrientations(ragdoll) )
      {
        Ragdoll_UpdateAnimationRoot(ragdoll);
        Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_RUNNING);
      }
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_EnterRunning
==============
*/
__int64 Ragdoll_EnterRunning(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  bool v6; 
  double FixedMemoryPoolUsage; 
  unsigned __int8 v8; 
  cg_t *LocalClientGlobals; 
  float v10; 
  float v11; 
  float v12; 
  const BoneOrientation *AnimPoseRootOrientation; 
  DObj *v14; 
  int RagdollHandle; 
  __int64 v17; 

  v6 = 0;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2012, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)prevState >= NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v17) = prevState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2013, ASSERT_TYPE_ASSERT, "(unsigned)( prevState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "prevState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v17, 6) )
      __debugbreak();
  }
  if ( curState != RAGDOLL_ACTIVITY_STATE_RUNNING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2014, ASSERT_TYPE_ASSERT, "(curState == RAGDOLL_ACTIVITY_STATE_RUNNING)", (const char *)&queryFormat, "curState == RAGDOLL_ACTIVITY_STATE_RUNNING") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "Ragdoll_EnterRunning");
  if ( Ragdoll_GetNumRagdolls(LOCAL_CLIENT_INVALID) >= ragdoll_max_simulating->current.integer )
  {
    Com_PrintWarning(20, "Ragdoll_EnterRunning: too many bodies\n");
LABEL_19:
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    v8 = 0;
    goto LABEL_49;
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  FixedMemoryPoolUsage = Physics_GetFixedMemoryPoolUsage((Physics_WorldId)(3 * ragdoll->localClientNum + 3));
  if ( *(float *)&FixedMemoryPoolUsage > ragdoll_fixedMemoryThreshold->current.value )
  {
    Com_PrintWarning(20, "Ragdoll_EnterRunning: memory usage too high to create ragdoll\n");
    goto LABEL_19;
  }
  if ( !Ragdoll_IsWorldCollisionReady(ragdoll) )
  {
    Com_PrintWarning(20, "Ragdoll_EnterRunning: world collision is not ready for ragdoll\n");
    goto LABEL_19;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2051, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->renderingThirdPerson || LocalClientGlobals->playerTeleported )
  {
    v10 = LocalClientGlobals->refdef.viewOffset.v[0];
    v11 = LocalClientGlobals->refdef.viewOffset.v[1];
    v12 = LocalClientGlobals->refdef.viewOffset.v[2];
  }
  else
  {
    v10 = LocalClientGlobals->lastFrameViewPos.v[0];
    v11 = LocalClientGlobals->lastFrameViewPos.v[1];
    v12 = LocalClientGlobals->lastFrameViewPos.v[2];
  }
  if ( ragdoll_poseController_use->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DETONATING|0x80) && ragdoll->poseControllerEnabledAtCreate && !ragdoll->hitLocation )
  {
    AnimPoseRootOrientation = Ragdoll_GetAnimPoseRootOrientation(ragdoll);
    if ( !AnimPoseRootOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2072, ASSERT_TYPE_ASSERT, "(rootOrientation)", (const char *)&queryFormat, "rootOrientation") )
      __debugbreak();
    v6 = (float)(ragdoll_poseController_distance->current.value * ragdoll_poseController_distance->current.value) > (float)((float)((float)((float)(AnimPoseRootOrientation->origin.v[1] - v11) * (float)(AnimPoseRootOrientation->origin.v[1] - v11)) + (float)((float)(AnimPoseRootOrientation->origin.v[0] - v10) * (float)(AnimPoseRootOrientation->origin.v[0] - v10))) + (float)((float)(AnimPoseRootOrientation->origin.v[2] - v12) * (float)(AnimPoseRootOrientation->origin.v[2] - v12)));
    v14 = Ragdoll_BodyDObj(ragdoll);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2087, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( v6 && !XAnimNotetrackExistsInTree(v14->tree, scr_const.stop_ragdoll_anim) )
      v6 = 0;
  }
  Ragdoll_CreatePhysics(ragdoll, 0);
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2097, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Ragdoll_ApplyInitialVelocities(ragdoll);
  if ( v6 )
  {
    RagdollPoseController_InitializeBoneStates(&ragdoll->state.poseController, ragdoll);
    RagdollPoseController_SetWeight(&ragdoll->state.poseController, 1.0);
    RagdollPoseController_SetRootControlWeight(&ragdoll->state.poseController, 1.0);
    Ragdoll_RequestNextAnimationPose(ragdoll);
  }
  else
  {
    RagdollPoseController_Reset(&ragdoll->state.poseController);
  }
  if ( s_callbackEnterRunning )
  {
    RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    Ragdoll_Update_UpgradeReadLockToWriteLock();
    s_callbackEnterRunning(ragdoll->localClientNum, ragdoll->entityNum, RagdollHandle);
    Ragdoll_Update_DowngradeWriteLockToReadLock();
  }
  v8 = 1;
LABEL_49:
  Sys_ProfEndNamedEvent();
  return v8;
}

/*
==============
Ragdoll_ExitRunning
==============
*/
char Ragdoll_ExitRunning(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  int RagdollHandle; 
  __int64 v8; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2133, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( prevState != RAGDOLL_ACTIVITY_STATE_RUNNING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2134, ASSERT_TYPE_ASSERT, "(prevState == RAGDOLL_ACTIVITY_STATE_RUNNING)", (const char *)&queryFormat, "prevState == RAGDOLL_ACTIVITY_STATE_RUNNING") )
    __debugbreak();
  if ( (unsigned int)curState >= NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v8) = curState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2135, ASSERT_TYPE_ASSERT, "(unsigned)( curState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "curState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v8, 6) )
      __debugbreak();
  }
  if ( s_callbackExitRunning )
  {
    RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    Ragdoll_Update_UpgradeReadLockToWriteLock();
    s_callbackExitRunning(ragdoll->localClientNum, ragdoll->entityNum, RagdollHandle);
    s_ragdollUpdateLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
    Sys_CheckReleaseLock(&s_ragdollUpdateLock);
    Sys_CheckAcquireLock(&s_ragdollUpdateLock);
    AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
  }
  if ( ragdoll->state.physicsInstanceId != -1 )
    Ragdoll_DestroyPhysics(ragdoll);
  return 1;
}

/*
==============
Ragdoll_UpdateRunning
==============
*/
void Ragdoll_UpdateRunning(Ragdoll *ragdoll, float timeStep, const int gameFrameTimeMs)
{
  unsigned int v5; 
  int v6; 
  int RagdollHandle; 
  int v8; 
  int v9; 
  BoneOrientation *v10; 
  int NumBones; 
  __int64 v12; 
  float *v13; 
  float v14; 
  float v15; 
  float v16; 
  const BoneOrientation *AnimPoseBoneOrientations; 
  int msec; 
  int tighteningStartMsec; 
  double v20; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2305, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Profile_Begin(539);
  if ( Ragdoll_IsWorldCollisionReady(ragdoll) )
  {
    v6 = 0;
    if ( s_callbackUpdateRunning )
    {
      RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
      Ragdoll_Update_UpgradeReadLockToWriteLock();
      s_callbackUpdateRunning(ragdoll->localClientNum, ragdoll->entityNum, RagdollHandle);
      s_ragdollUpdateLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
      Sys_CheckReleaseLock(&s_ragdollUpdateLock);
      Sys_CheckAcquireLock(&s_ragdollUpdateLock);
      AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
    }
    RagdollPoseController_Update(&ragdoll->state.poseController, ragdoll, timeStep);
    v8 = Ragdoll_GetRagdollHandle(ragdoll);
    if ( !Ragdoll_RequiresAnimationPose(v8) || Ragdoll_CalcPose(ragdoll) )
    {
      if ( RagdollPoseController_IsActive(&ragdoll->state.poseController) )
      {
        Ragdoll_RequestNextAnimationPose(ragdoll);
        v9 = Ragdoll_GetRagdollHandle(ragdoll);
        if ( Ragdoll_RequiresAnimationPose(v9) )
        {
          Ragdoll_UpdateAnimationRoot(ragdoll);
          v10 = Ragdoll_GetAnimPoseBoneOrientationsForWrite(ragdoll);
          NumBones = Ragdoll_GetNumBones(ragdoll);
          v12 = NumBones;
          if ( NumBones > 0 )
          {
            v13 = &v10->orientation.v[2];
            do
            {
              QuatTrans_MultiplyEquals(&v10[v6].orientation, &v10[v6].origin, &ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation);
              v14 = *(v13 - 2);
              v15 = v13[1];
              v16 = fsqrt((float)((float)((float)(v14 * v14) + (float)(*(v13 - 1) * *(v13 - 1))) + (float)(*v13 * *v13)) + (float)(v15 * v15));
              if ( v16 != 0.0 )
              {
                *(v13 - 2) = v14 * (float)(1.0 / v16);
                *(v13 - 1) = (float)(1.0 / v16) * *(v13 - 1);
                *v13 = (float)(1.0 / v16) * *v13;
                v13[1] = (float)(1.0 / v16) * v15;
              }
              ++v6;
              v13 += 7;
              --v12;
            }
            while ( v12 );
          }
          if ( ragdoll_loosenConstraintsDuringAnimation->current.enabled )
          {
            Ragdoll_UpdateLoosenedConstraintsForAnimationPose(ragdoll);
            ragdoll->state.tighteningStartMsec = ragdoll->state.msec + 1;
            ragdoll->state.needsTightening &= ragdoll_tightenConstraintsAfterAnimation->current.color[0];
          }
          Ragdoll_Update_UpgradeReadLockToWriteLock();
          AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
          RagdollPoseController_DriveToPose(&ragdoll->state.poseController, ragdoll, AnimPoseBoneOrientations, timeStep);
          Ragdoll_Update_DowngradeWriteLockToReadLock();
        }
      }
      Ragdoll_SnapshotPhysicsBoneTransforms(ragdoll);
      Ragdoll_UpdatePenetrationState(ragdoll);
      if ( ragdoll->state.needsTightening )
      {
        msec = ragdoll->state.msec;
        tighteningStartMsec = ragdoll->state.tighteningStartMsec;
        if ( msec > tighteningStartMsec )
        {
          v20 = I_fclamp((float)((float)(msec - tighteningStartMsec) * 0.001) / ragdoll_constraintTightenTime->current.value, 0.0, 1.0);
          Ragdoll_TightenConstraints(ragdoll, *(float *)&v20);
        }
      }
    }
    else
    {
      Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    }
  }
  else
  {
    v5 = Ragdoll_GetRagdollHandle(ragdoll);
    Com_Printf(20, "Ragdoll_UpdateRunning: world collision is not ready for ragdoll %i\n", v5);
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
  }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_UpdateJustLoaded
==============
*/
void Ragdoll_UpdateJustLoaded(Ragdoll *ragdoll, float timeStep, const int gameFrameTimeMs)
{
  Ragdoll *v3; 
  RagdollActivityState loadedState; 
  RagdollActivityState v5; 
  RagdollActivityState v6; 
  Physics_WorldId PhysicsWorldId; 
  Physics_WorldId v8; 
  unsigned int physicsInstanceId; 
  signed int v10; 
  int NumBones; 
  const vec3_t *loadedPhysicsLinVels; 
  unsigned int RigidBodyID; 
  __int64 v14; 

  v3 = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2397, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Profile_Begin(540);
  loadedState = v3->state.loadedState;
  if ( loadedState == RAGDOLL_ACTIVITY_STATE_DEAD )
    goto LABEL_13;
  if ( (unsigned int)(loadedState - 1) <= 1 )
  {
    Ragdoll_SetNewState(v3, RAGDOLL_ACTIVITY_STATE_DOBJ_WAIT);
    Profile_EndInternal(NULL);
    return;
  }
  if ( !Ragdoll_ValidateBodyObj(v3) )
    goto LABEL_15;
  v5 = v3->state.loadedState;
  if ( v5 == RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE )
  {
    v6 = RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE;
LABEL_14:
    Ragdoll_SetNewState(v3, v6);
LABEL_15:
    Profile_EndInternal(NULL);
    return;
  }
  if ( v5 == RAGDOLL_ACTIVITY_STATE_RUNNING )
  {
    if ( Ragdoll_GetNumRagdolls(LOCAL_CLIENT_INVALID) >= ragdoll_max_simulating->current.integer )
    {
      Com_PrintWarning(20, "Loading - trying to move to Ragdoll_EnterRunning but too many bodies\n");
LABEL_13:
      v6 = RAGDOLL_ACTIVITY_STATE_DEAD;
      goto LABEL_14;
    }
    PhysicsWorldId = Ragdoll_GetPhysicsWorldId(v3);
    v3->state.state = RAGDOLL_ACTIVITY_STATE_RUNNING;
    v8 = PhysicsWorldId;
    Ragdoll_CreatePhysics(v3, 1);
    Ragdoll_Update_UpgradeReadLockToWriteLock();
    physicsInstanceId = v3->state.physicsInstanceId;
    if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2471, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v10 = 0;
    NumBones = Ragdoll_GetNumBones(v3);
    if ( NumBones > 0 )
    {
      loadedPhysicsLinVels = v3->state.loadedPhysicsLinVels;
      do
      {
        RigidBodyID = Physics_GetRigidBodyID(v8, physicsInstanceId, v10);
        if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2479, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_SetRigidBodyLinAngVel(v8, RigidBodyID, loadedPhysicsLinVels, loadedPhysicsLinVels + 64);
        ++v10;
        ++loadedPhysicsLinVels;
      }
      while ( v10 < NumBones );
      v3 = ragdoll;
    }
    Ragdoll_Update_DowngradeWriteLockToReadLock();
    Ragdoll_UpdatePenetrationState(v3);
    Profile_EndInternal(NULL);
  }
  else
  {
    LODWORD(v14) = v3->state.loadedState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2495, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad ragdoll load - expected state is unknown %i", v14) )
      __debugbreak();
  }
}

/*
==============
Ragdoll_AddDebugLine
==============
*/
void Ragdoll_AddDebugLine(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  volatile int writeCount; 
  int v9; 
  TempThreadPriority tempPriority; 

  Sys_LockWrite(&s_ragdollDebugLineCS);
  Physics_AddDebugLine(worldId, start, end, color);
  if ( s_ragdollDebugLineCS.writeCount != 1 )
  {
    v9 = 1;
    writeCount = s_ragdollDebugLineCS.writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v9) )
      __debugbreak();
  }
  if ( s_ragdollDebugLineCS.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  s_ragdollDebugLineCS.writeThreadId = 0;
  tempPriority = s_ragdollDebugLineCS.tempPriority;
  if ( ((unsigned __int8)&s_ragdollDebugLineCS.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_ragdollDebugLineCS.writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_ragdollDebugLineCS.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
Ragdoll_AddUpdateWorkerCmds
==============
*/
void Ragdoll_AddUpdateWorkerCmds(LocalClientNum_t clientNum, float timeStep)
{
  int v3; 
  Ragdoll *v4; 
  Ragdoll *Ragdoll; 
  __int64 v6; 
  __int64 v7; 
  char data[4]; 
  float v9; 
  int v10; 

  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2765, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2766, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  if ( ragdoll_enable->current.enabled )
  {
    v3 = 1;
    v4 = g_ragdollBodies;
    do
    {
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v3 - 1) >= 0x40 )
      {
        LODWORD(v7) = 64;
        LODWORD(v6) = v3 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v3);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v3 - 1) >= 0x40 )
        {
          LODWORD(v7) = 64;
          LODWORD(v6) = v3 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2785, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( v4->localClientNum == clientNum )
        {
          v10 = v3;
          v9 = timeStep;
          Sys_AddWorkerCmd(WRKCMD_RAGDOLL_UPDATE, data);
        }
      }
      ++v3;
      ++v4;
    }
    while ( v3 <= 64 );
  }
}

/*
==============
Ragdoll_ApplyAntiPenetrationForces
==============
*/
void Ragdoll_ApplyAntiPenetrationForces(Ragdoll *ragdoll)
{
  Bone *bones; 
  __int32 v3; 
  int NumRigidBodys; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int penetrationSolveTargetBoneIdx; 
  __int64 v11; 
  Bone *v12; 
  unsigned int physicsInstanceId; 
  hknpBodyId v14; 
  int frames; 
  float value; 
  float v17; 
  hkVector4f v18; 
  float v19; 
  __m128 v20; 
  float v21; 
  float v25; 
  float v26; 
  float v27; 
  signed int v28; 
  unsigned int v29; 
  unsigned int m_serialAndIndex; 
  int v31; 
  hknpWorld *world; 
  __int64 v33; 
  __m128 v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  hknpWorld *v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  __int128 unsignedInt; 
  __int64 v52; 
  __int64 v53; 
  unsigned int v54; 
  float mass[2]; 
  __int64 v56; 
  hknpBodyId result; 
  hknpBodyId v58; 
  vec3_t linVel; 
  int v60[4]; 
  hkVector4f point; 
  hkVector4f pointVel; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1269, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1270, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  bones = ragdoll->state.bones;
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1274, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  v3 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v3, ragdoll->state.physicsInstanceId);
  v5 = NumRigidBodys;
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1283, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v5 != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1284, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v6 = 0;
  v54 = 0;
  if ( (int)v5 > 0 )
  {
    v7 = 0i64;
    v8 = v5;
    v56 = 0i64;
    do
    {
      v9 = v7;
      if ( (unsigned int)(bones[v7].penetrationState - 1) <= 1 )
      {
        penetrationSolveTargetBoneIdx = bones[v7].penetrationSolveTargetBoneIdx;
        if ( (penetrationSolveTargetBoneIdx < 0 || penetrationSolveTargetBoneIdx >= (int)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1299, ASSERT_TYPE_ASSERT, "(bone->penetrationSolveTargetBoneIdx >= 0 && bone->penetrationSolveTargetBoneIdx < numBodies)", (const char *)&queryFormat, "bone->penetrationSolveTargetBoneIdx >= 0 && bone->penetrationSolveTargetBoneIdx < numBodies") )
          __debugbreak();
        v11 = bones[v9].penetrationSolveTargetBoneIdx;
        v12 = &bones[v11];
        if ( v12->penetrationState != RAGDOLL_PENETRATION_YES_DESCENDANT && (v6 || (_DWORD)v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1301, ASSERT_TYPE_ASSERT, "(targetBone->penetrationState == RAGDOLL_PENETRATION_YES_DESCENDANT || (bodyIdx == 0 && bone->penetrationSolveTargetBoneIdx == 0))", (const char *)&queryFormat, "targetBone->penetrationState == RAGDOLL_PENETRATION_YES_DESCENDANT || (bodyIdx == 0 && bone->penetrationSolveTargetBoneIdx == 0)") )
          __debugbreak();
        physicsInstanceId = ragdoll->state.physicsInstanceId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v3 > 7 )
        {
          LODWORD(v52) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v52) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v52) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
        {
          LODWORD(v52) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v52) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
        {
          LODWORD(v52) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v52) )
            __debugbreak();
        }
        v14.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, physicsInstanceId, v6)->m_serialAndIndex;
        if ( (v14.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1305, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
          __debugbreak();
        mass[0] = 0.0;
        Physics_GetRigidBodyMass((Physics_WorldId)v3, v14.m_serialAndIndex, mass);
        if ( v6 )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 390, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body PointVel when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v3 > 7 )
          {
            LODWORD(v52) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 391, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body PointVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
              __debugbreak();
          }
          if ( (v14.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          {
            LODWORD(v52) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 392, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body PointVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v52) )
              __debugbreak();
          }
          if ( (LODWORD(v12->penetrationPos.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v12->penetrationPos.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v12->penetrationPos.v[2]) & 0x7F800000) == 2139095040 )
          {
            LODWORD(v52) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 393, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to Get Rigid Body PointVel in world %i with nan point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )", v52) )
              __debugbreak();
          }
          v42 = 0.03125 * v12->penetrationPos.v[1];
          v43 = 0.03125 * v12->penetrationPos.v[2];
          point.m_quad.m128_f32[0] = 0.03125 * v12->penetrationPos.v[0];
          point.m_quad.m128_f32[1] = v42;
          point.m_quad.m128_f32[2] = v43;
          point.m_quad.m128_f32[3] = 0.0;
          HavokPhysics_GetRigidBodyPointVel((const Physics_WorldId)v3, v14, &point, &pointVel);
          v44 = LODWORD(FLOAT_32_0);
          *(float *)&v44 = fsqrt((float)((float)((float)(32.0 * pointVel.m_quad.m128_f32[1]) * (float)(32.0 * pointVel.m_quad.m128_f32[1])) + (float)((float)(32.0 * pointVel.m_quad.m128_f32[0]) * (float)(32.0 * pointVel.m_quad.m128_f32[0]))) + (float)((float)(32.0 * pointVel.m_quad.m128_f32[2]) * (float)(32.0 * pointVel.m_quad.m128_f32[2])));
          _XMM7 = v44;
          __asm
          {
            vcmpless xmm0, xmm7, xmm10
            vblendvps xmm0, xmm7, xmm15, xmm0
          }
          unsignedInt = ragdoll_ejectionImpulseLimit->current.unsignedInt;
          _XMM7 = unsignedInt ^ _xmm;
          if ( COERCE_FLOAT(unsignedInt ^ _xmm) > *(float *)&unsignedInt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&unsignedInt) )
            __debugbreak();
          __asm
          {
            vmaxss  xmm0, xmm7, xmm8
            vminss  xmm1, xmm0, xmm6
          }
          Physics_ApplyImpulse((Physics_WorldId)v3, v14.m_serialAndIndex, &v12->penetrationPos, &v12->penetrationNormal, *(float *)&_XMM1);
          v6 = v54;
        }
        else
        {
          frames = ragdoll->state.frames;
          if ( frames <= ragdoll_ejectionFullBodyTryLength->current.integer || frames % ragdoll_ejectionFullBodyTryPeriod->current.integer == 1 )
          {
            value = ragdoll_ejectionVelocityTargetRoot->current.value;
            v17 = value * v12->penetrationNormal.v[1];
            linVel.v[0] = value * v12->penetrationNormal.v[0];
            linVel.v[2] = value * v12->penetrationNormal.v[2];
            linVel.v[1] = v17;
            Physics_SetRigidBodyLinVel((const Physics_WorldId)v3, v14.m_serialAndIndex, &linVel);
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v3 > 7 )
            {
              LODWORD(v52) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                __debugbreak();
              LODWORD(v53) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v53) )
                __debugbreak();
            }
            v18.m_quad = (__m128)HavokPhysics_GetConstWorld((Physics_WorldId)v3)->world->m_gravity;
            v20 = _mm_shuffle_ps(v18.m_quad, v18.m_quad, 85);
            v19 = v20.m128_f32[0] * 32.0;
            v21 = _mm_shuffle_ps(v18.m_quad, v18.m_quad, 170).m128_f32[0] * 32.0;
            v20.m128_f32[0] = fsqrt((float)((float)(v19 * v19) + (float)((float)(v18.m_quad.m128_f32[0] * 32.0) * (float)(v18.m_quad.m128_f32[0] * 32.0))) + (float)(v21 * v21));
            _XMM3 = v20;
            __asm
            {
              vcmpless xmm0, xmm3, xmm10
              vblendvps xmm0, xmm3, xmm15, xmm0
            }
            v25 = (float)(v18.m_quad.m128_f32[0] * 32.0) * (float)(1.0 / *(float *)&_XMM0);
            v26 = v19 * (float)(1.0 / *(float *)&_XMM0);
            v27 = v21 * (float)(1.0 / *(float *)&_XMM0);
            if ( (float)((float)((float)(v19 * v12->penetrationNormal.v[1]) + (float)((float)(v18.m_quad.m128_f32[0] * 32.0) * v12->penetrationNormal.v[0])) + (float)(v21 * v12->penetrationNormal.v[2])) <= 0.0 )
            {
              v28 = 1;
              if ( (int)v5 > 1 )
              {
                do
                {
                  v29 = ragdoll->state.physicsInstanceId;
                  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                    __debugbreak();
                  if ( (unsigned int)v3 > 7 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                      __debugbreak();
                  }
                  if ( v29 == -1 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v52) )
                      __debugbreak();
                  }
                  if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v52) )
                      __debugbreak();
                  }
                  if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v52) )
                      __debugbreak();
                  }
                  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v58, (const Physics_WorldId)v3, v29, v28)->m_serialAndIndex;
                  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
                    __debugbreak();
                  if ( (unsigned int)v3 > 7 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                      __debugbreak();
                  }
                  v31 = m_serialAndIndex & 0xFFFFFF;
                  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v52) )
                      __debugbreak();
                  }
                  if ( (unsigned int)v3 > 7 )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                      __debugbreak();
                  }
                  if ( v31 == 0xFFFFFF )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v52) )
                      __debugbreak();
                  }
                  world = HavokPhysics_GetConstWorld((Physics_WorldId)v3)->world;
                  if ( !world )
                  {
                    LODWORD(v52) = v3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v52) )
                      __debugbreak();
                  }
                  v33 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
                  v34 = *(__m128 *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v33 + 64)) + 64);
                  v35 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0] * 32.0;
                  v36 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0] * 32.0;
                  v37 = (float)((float)(v35 * v26) + (float)((float)(v34.m128_f32[0] * 32.0) * v25)) + (float)(v36 * v27);
                  if ( v37 > 0.0 )
                  {
                    v38 = (float)(v34.m128_f32[0] * 32.0) - (float)(v25 * v37);
                    v39 = v36 - (float)(v27 * v37);
                    v40 = v35 - (float)(v26 * v37);
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 333, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v3 > 7 )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 334, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                        __debugbreak();
                    }
                    if ( v31 == 0xFFFFFF )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 335, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v52) )
                        __debugbreak();
                    }
                    if ( (LODWORD(v38) & 0x7F800000) == 2139095040 || (LODWORD(v40) & 0x7F800000) == 2139095040 || (LODWORD(v39) & 0x7F800000) == 2139095040 )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 336, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v52) )
                        __debugbreak();
                    }
                    *(float *)v60 = v38 * 0.03125;
                    *(float *)&v60[2] = v39 * 0.03125;
                    *(float *)&v60[1] = v40 * 0.03125;
                    *(float *)&v60[3] = 0.0;
                    if ( (unsigned int)v3 > 7 )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v52) )
                        __debugbreak();
                    }
                    if ( v31 == 0xFFFFFF )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v52) )
                        __debugbreak();
                    }
                    v41 = HavokPhysics_GetMutableWorld((Physics_WorldId)v3)->world;
                    if ( !v41 )
                    {
                      LODWORD(v52) = v3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v52) )
                        __debugbreak();
                    }
                    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))v41->setBodyLinearVelocity)(&v41->hknpWorldWriter, m_serialAndIndex, v60, 0i64);
                  }
                  ++v28;
                }
                while ( v28 < (int)v5 );
                v6 = v54;
              }
            }
          }
        }
        bones = ragdoll->state.bones;
        v8 = v5;
      }
      ++v6;
      v7 = v56 + 1;
      v54 = v6;
      v56 = v7;
    }
    while ( v7 < v8 );
  }
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_ApplyInitialVelocities
==============
*/
void Ragdoll_ApplyInitialVelocities(Ragdoll *ragdoll)
{
  const BoneOrientation *AnimPoseBoneOrientations; 
  __int32 v3; 
  const LerpEntityStateActor *ActorState; 
  float *p_species; 
  char v6; 
  signed int v7; 
  bool *p_hidden; 
  int v9; 
  scr_string_t *boneNames; 
  vec4_t *p_orientation; 
  unsigned int physicsInstanceId; 
  unsigned int m_serialAndIndex; 
  __int64 hitLocation; 
  const char *v15; 
  scr_string_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  float value; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  const char *v36; 
  __int64 v37; 
  __int64 v38; 
  char v39; 
  int NumRigidBodys; 
  scr_string_t *v41; 
  vec4_t *quat; 
  const BoneOrientation *PrevAnimPoseBoneOrientations; 
  signed __int64 v44; 
  bool *v45; 
  hknpBodyId result; 
  vec3_t linVel; 
  vec3_t outAxisAngle; 
  vec3_t v49; 
  vec3_t outTransformedPoint; 
  vec3_t centerOfMassLocal; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1863, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1864, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  PrevAnimPoseBoneOrientations = Ragdoll_GetPrevAnimPoseBoneOrientations(ragdoll);
  AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1871, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !AnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1872, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  if ( !PrevAnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1873, ASSERT_TYPE_ASSERT, "(prevBoneOrientations)", (const char *)&queryFormat, "prevBoneOrientations") )
    __debugbreak();
  v3 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v3, ragdoll->state.physicsInstanceId);
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1882, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( NumRigidBodys != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1883, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  ActorState = Ragdoll_GetActorState(ragdoll);
  p_species = (float *)&ActorState->species;
  if ( !ActorState || (v39 = 1, (ActorState->flags & 0x40) == 0) )
    v39 = 0;
  v6 = 0;
  v7 = 0;
  if ( NumRigidBodys > 0 )
  {
    v44 = (char *)PrevAnimPoseBoneOrientations - (char *)AnimPoseBoneOrientations;
    p_hidden = &ragdoll->state.bones[0].hidden;
    v9 = NumRigidBodys;
    boneNames = ragdoll->boneNames;
    p_orientation = &AnimPoseBoneOrientations->orientation;
    v41 = ragdoll->boneNames;
    v45 = &ragdoll->state.bones[0].hidden;
    quat = &AnimPoseBoneOrientations->orientation;
    while ( *p_hidden )
    {
LABEL_71:
      p_orientation = (vec4_t *)((char *)p_orientation + 28);
      ++boneNames;
      p_hidden += 48;
      quat = p_orientation;
      ++v7;
      v41 = boneNames;
      v45 = p_hidden;
      if ( v7 >= v9 )
        goto LABEL_72;
    }
    physicsInstanceId = ragdoll->state.physicsInstanceId;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v3 > 7 )
    {
      LODWORD(v38) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v38) )
        __debugbreak();
    }
    if ( physicsInstanceId == -1 )
    {
      LODWORD(v38) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v38) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
    {
      LODWORD(v38) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v38) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
    {
      LODWORD(v38) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v38) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, physicsInstanceId, v7)->m_serialAndIndex;
    if ( v39 || (hitLocation = ragdoll->hitLocation, !(_DWORD)hitLocation) )
    {
      Physics_GetRigidBodyCenterOfMassLocal((Physics_WorldId)v3, m_serialAndIndex, &centerOfMassLocal);
      if ( !ragdoll->state.velCaptureMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1840, ASSERT_TYPE_ASSERT, "(ragdoll->state.velCaptureMsec != 0)", (const char *)&queryFormat, "ragdoll->state.velCaptureMsec != 0") )
        __debugbreak();
      v21 = 1000.0 / (float)ragdoll->state.velCaptureMsec;
      QuatTrans_TransformPoint((vec4_t *)((char *)quat + v44), (const vec3_t *)((char *)quat + v44 - 12), &centerOfMassLocal, &outTransformedPoint);
      QuatTrans_TransformPoint(quat, (const vec3_t *)&quat[-1].xyz.v[1], &centerOfMassLocal, &v49);
      linVel.v[0] = (float)(v49.v[0] - outTransformedPoint.v[0]) * v21;
      linVel.v[1] = (float)(v49.v[1] - outTransformedPoint.v[1]) * v21;
      linVel.v[2] = (float)(v49.v[2] - outTransformedPoint.v[2]) * v21;
      Ragdoll_EstimateRotationDeltaAxisAngle((vec4_t *)((char *)quat + v44), quat, &outAxisAngle);
      outAxisAngle.v[0] = v21 * outAxisAngle.v[0];
      outAxisAngle.v[1] = v21 * outAxisAngle.v[1];
      outAxisAngle.v[2] = v21 * outAxisAngle.v[2];
      if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_OFFHAND_END|0x80) )
      {
        v22 = ragdoll_initialLinSpeedCapMovingPlatform;
        if ( !ragdoll->createdOnMovingPlatform )
          v22 = ragdoll_initialLinSpeedCap;
        v19 = linVel.v[1];
        v17 = linVel.v[0];
        v18 = linVel.v[2];
        value = v22->current.value;
        v16 = v41;
        v24 = (float)((float)(v19 * v19) + (float)(v17 * v17)) + (float)(v18 * v18);
        if ( v24 > (float)(value * value) )
        {
          v25 = value / fsqrt(v24);
          v17 = linVel.v[0] * v25;
          v19 = linVel.v[1] * v25;
          v18 = linVel.v[2] * v25;
          linVel.v[0] = linVel.v[0] * v25;
          linVel.v[1] = linVel.v[1] * v25;
          linVel.v[2] = linVel.v[2] * v25;
        }
      }
      else
      {
        v18 = linVel.v[2];
        v19 = linVel.v[1];
        v17 = linVel.v[0];
        v16 = v41;
      }
      goto LABEL_65;
    }
    outAxisAngle.v[0] = 0.0;
    outAxisAngle.v[1] = 0.0;
    outAxisAngle.v[2] = 0.0;
    if ( (unsigned int)hitLocation >= 0x16 )
    {
      LODWORD(v38) = 22;
      LODWORD(v37) = hitLocation;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 3000, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v37, v38) )
        __debugbreak();
    }
    v15 = s_ragdollHitLocToBoneMapping[hitLocation];
    if ( v15 )
    {
      v16 = v41;
      if ( *v41 == SL_FindString(v15) )
      {
        v17 = ragdoll->impactVector.v[0] * 0.19999999;
        v18 = ragdoll->impactVector.v[2] * 0.19999999;
        v19 = ragdoll->impactVector.v[1] * 0.19999999;
LABEL_55:
        linVel.v[2] = v18;
        v6 |= (float)((float)((float)(v19 * v19) + (float)(v17 * v17)) + (float)(v18 * v18)) > 0.0;
        linVel.v[1] = v19;
        linVel.v[0] = v17;
LABEL_65:
        if ( p_species && v39 )
        {
          v26 = p_species[3];
          v27 = p_species[4];
          v28 = v17 + v26;
          v29 = p_species[5];
          linVel.v[0] = v28;
          linVel.v[1] = v19 + v27;
          linVel.v[2] = v18 + v29;
          v6 |= (float)((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v29 * v29)) > 0.0;
        }
        Physics_SetRigidBodyLinAngVel((const Physics_WorldId)v3, m_serialAndIndex, &linVel, &outAxisAngle);
        if ( ragdoll_debugDisplayInitialPose->current.enabled )
        {
          v30 = outAxisAngle.v[2];
          v31 = outAxisAngle.v[1];
          v32 = outAxisAngle.v[0];
          v33 = linVel.v[2];
          v34 = linVel.v[1];
          v35 = linVel.v[0];
          v36 = SL_ConvertToString(*v16);
          Com_Printf(20, "Body %s velocity lin:(%.2f %.2f %.2f) ang:(%.2f %.2f %.2f)\n", v36, v35, v34, v33, v32, v31, v30);
        }
        Ragdoll_SetDebugInitialVelocity(ragdoll, v7, &linVel, v6);
        boneNames = v41;
        v9 = NumRigidBodys;
        p_hidden = v45;
        p_orientation = quat;
        goto LABEL_71;
      }
    }
    else
    {
      v16 = v41;
    }
    v20 = 0.80000001 / (float)NumRigidBodys;
    v17 = v20 * ragdoll->impactVector.v[0];
    v19 = v20 * ragdoll->impactVector.v[1];
    v18 = v20 * ragdoll->impactVector.v[2];
    goto LABEL_55;
  }
LABEL_72:
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_BodyPose
==============
*/
const cpose_t *Ragdoll_BodyPose(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 241, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->dobj == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 242, ASSERT_TYPE_ASSERT, "(ragdoll->dobj != (-1))", (const char *)&queryFormat, "ragdoll->dobj != DOBJ_HANDLE_NONE") )
    __debugbreak();
  return CG_GetPose(ragdoll->localClientNum, ragdoll->dobj);
}

/*
==============
Ragdoll_CalcPose
==============
*/
DObjAnimMat *Ragdoll_CalcPose(const Ragdoll *ragdoll)
{
  const DObj *v3; 
  const cpose_t *v4; 
  const cpose_t *v5; 
  unsigned int v6; 
  DObjPartBits *p_partBits; 
  int NumBones; 
  __int64 v10; 
  unsigned __int16 *p_animBone; 
  unsigned __int64 v12; 
  DObjAnimMat *v13; 
  __int64 v15; 
  __int64 v16; 
  DObjPartBits partBits; 
  __int128 v18; 

  v3 = Ragdoll_BodyDObj(ragdoll);
  v4 = Ragdoll_BodyPose(ragdoll);
  v5 = v4;
  if ( v3 && v4 )
  {
    if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 643, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll_BodyDObj(ragdoll) )
    {
      v6 = 0;
      p_partBits = &partBits;
      v18 = _XMM6;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      do
      {
        *(_OWORD *)p_partBits->array = _XMM6;
        p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
        ++v6;
      }
      while ( v6 < 2 );
      if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 87, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      NumBones = Ragdoll_GetNumBones(ragdoll);
      v10 = NumBones;
      if ( NumBones > 0 )
      {
        p_animBone = &ragdoll->state.bones[0].animBone;
        do
        {
          v12 = *p_animBone;
          if ( *p_animBone >> 15 )
          {
            partBits.array[7] |= 2u;
          }
          else
          {
            if ( (unsigned int)v12 >= 0x100 )
            {
              LODWORD(v16) = 256;
              LODWORD(v15) = *p_animBone;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v15, v16) )
                __debugbreak();
            }
            partBits.array[v12 >> 5] |= 0x80000000 >> (v12 & 0x1F);
          }
          p_animBone += 24;
          --v10;
        }
        while ( v10 );
      }
    }
    DObjLock(v3);
    v13 = CG_Pose_CalcDObjPose(v5, v3, &partBits);
    DObjUnlock(v3);
    CG_UsedDObjCalcPose(v5);
    if ( v13 )
    {
      return v13;
    }
    else
    {
      Com_PrintWarning(20, "Ragdoll_CalcPose: couldn't calc pose\n");
      return 0i64;
    }
  }
  else
  {
    Com_PrintWarning(20, "Ragdoll_CalcPose: no obj 0x%p or pose 0x%p\n", v3, v4);
    return 0i64;
  }
}

/*
==============
Ragdoll_CalculatePenetratingBones
==============
*/
void Ragdoll_CalculatePenetratingBones(Ragdoll *ragdoll, int *penetrationCandidateList, bool *penetrationCandidateStates, int *penetrationCandidateCount)
{
  int *v4; 
  bool *v5; 
  int *v6; 
  Bone *bones; 
  const BoneOrientation *LatestPhysicsPoseBoneOrientations; 
  unsigned __int32 v10; 
  signed int v11; 
  unsigned int physicsInstanceId; 
  unsigned int m_serialAndIndex; 
  int BoneChildren; 
  __int64 v15; 
  __int64 v16; 
  hkMemoryAllocator *v17; 
  hkMemoryAllocator *v18; 
  __int64 v19; 
  int NumBones; 
  hknpBodyId result; 
  int *v22; 
  int *v23; 
  bool *v24; 
  const BoneOrientation *v25; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v27; 
  int childIndices[6]; 

  v27 = -2i64;
  v4 = penetrationCandidateCount;
  v22 = penetrationCandidateCount;
  v5 = penetrationCandidateStates;
  v24 = penetrationCandidateStates;
  v6 = penetrationCandidateList;
  v23 = penetrationCandidateList;
  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1113, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  if ( ragdoll->state.numBones <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1114, ASSERT_TYPE_ASSERT, "(Ragdoll_GetNumBones( ragdoll ) > 0)", (const char *)&queryFormat, "Ragdoll_GetNumBones( ragdoll ) > 0") )
    __debugbreak();
  bones = ragdoll->state.bones;
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1118, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  LatestPhysicsPoseBoneOrientations = Ragdoll_GetLatestPhysicsPoseBoneOrientations(ragdoll);
  v25 = LatestPhysicsPoseBoneOrientations;
  if ( !LatestPhysicsPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1120, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  if ( !ragdoll->state.bones[0].hidden )
  {
    v10 = 3 * ragdoll->localClientNum + 3;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 0, 0);
    HavokPhysics_IgnoreBodies::SetIsClutter(&ignoreBodies, 1);
    NumBones = Ragdoll_GetNumBones(ragdoll);
    v11 = 0;
    if ( NumBones > 0 )
    {
      do
      {
        physicsInstanceId = ragdoll->state.physicsInstanceId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v10 > 7 )
        {
          LODWORD(v19) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v19) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v19) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && v10 - 2 <= 5 )
        {
          LODWORD(v19) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v19) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && v10 <= 1 )
        {
          LODWORD(v19) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v10, physicsInstanceId, v11)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1143, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
          __debugbreak();
        HavokPhysics_IgnoreBodies::AddIgnoreBody(&ignoreBodies, m_serialAndIndex);
        ++v11;
      }
      while ( v11 < NumBones );
      v4 = v22;
      bones = ragdoll->state.bones;
      v6 = v23;
      v5 = v24;
      LatestPhysicsPoseBoneOrientations = v25;
    }
    if ( bones->penetrationState && Ragdoll_PenetrationQuery(ragdoll, &LatestPhysicsPoseBoneOrientations->origin, &bones->penetrationPos, &bones->penetrationNormal, &ignoreBodies) )
    {
      v6[*v4] = 0;
      v5[(*v4)++] = 1;
    }
    else
    {
      BoneChildren = Ragdoll_FindBoneChildren(ragdoll, 0, childIndices);
      v15 = BoneChildren;
      if ( BoneChildren > 0 )
      {
        v16 = 0i64;
        do
          Ragdoll_CalculatePenetratingBones_0(ragdoll, v6, v5, v4, &ignoreBodies, childIndices[v16++]);
        while ( v16 < v15 );
      }
    }
    v17 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreBodies.m_size = 0;
    if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v17, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    ignoreBodies.m_ignoreBodies.m_data = NULL;
    ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v18 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreEntities.m_size = 0;
    if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v18, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
}

/*
==============
Ragdoll_CopyBoneOrientations
==============
*/
void Ragdoll_CopyBoneOrientations(Ragdoll *ragdoll, const BoneOrientation *sourceBoneOrientations, BoneOrientation *destBoneOrientations)
{
  int numBones; 
  float *v7; 
  signed __int64 v8; 
  __int64 v9; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  if ( numBones > 0 )
  {
    v7 = &destBoneOrientations->orientation.v[2];
    v8 = (char *)sourceBoneOrientations - (char *)destBoneOrientations;
    v9 = (unsigned int)numBones;
    do
    {
      *(v7 - 5) = *(float *)((char *)v7 + v8 - 20);
      *(v7 - 4) = *(float *)((char *)v7 + v8 - 16);
      *(v7 - 3) = *(float *)((char *)v7 + v8 - 12);
      *(v7 - 2) = *(float *)((char *)v7 + v8 - 8);
      *(v7 - 1) = *(float *)((char *)v7 + v8 - 4);
      *v7 = *(float *)((char *)v7 + v8);
      v7[1] = *(float *)((char *)v7 + v8 + 4);
      v7 += 7;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
Ragdoll_CreatePhysics
==============
*/
void Ragdoll_CreatePhysics(Ragdoll *ragdoll, bool useLoadStateForActivation)
{
  PhysicsAsset *v3; 
  int v4; 
  __int32 v5; 
  signed int v6; 
  __int64 v7; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *p_m_buckets; 
  unsigned __int64 *p_m_currentNumItems; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *v10; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  int Ref; 
  hknpBodyId *RigidBodyID; 
  unsigned __int64 m_serialAndIndex; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v20; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *mp_next; 
  ntl::internal::pool_allocator_freelist<16> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v23; 
  PhysicsAsset *v24; 
  signed int PhysicsAssetConstraintCount; 
  unsigned __int64 v26; 
  int v27; 
  unsigned __int64 v28; 
  unsigned __int8 *v29; 
  unsigned int m_value; 
  unsigned __int64 v31; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  int v36; 
  unsigned __int64 v37; 
  unsigned __int64 *v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  unsigned int v43; 
  __int64 v44; 
  bool *p_hidden; 
  hknpBodyId *v46; 
  bool v47; 
  signed int v48; 
  __int64 v49; 
  bool *v50; 
  const BoneOrientation *v51; 
  unsigned int v52; 
  char v53; 
  Ragdoll *v54; 
  unsigned int v55; 
  int v56; 
  char v57; 
  bool v58; 
  unsigned int v59; 
  bool *p_planeChanged; 
  unsigned int v61; 
  bool v62; 
  hknpWorld *world; 
  _DWORD *v64; 
  hkStringPtr *m_data; 
  const char *v66; 
  char v67; 
  const char *v68; 
  bool v69; 
  signed int v70; 
  signed int v71; 
  hknpWorld *v72; 
  unsigned int *v73; 
  const hkTransformf *v74; 
  const hkTransformf *v75; 
  scr_string_t *boneNames; 
  float *v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  const char *v90; 
  vec3_t *position; 
  vec4_t *orientationAsQuat; 
  unsigned int instanceId; 
  unsigned int bodyIdA; 
  unsigned int bodyIdB; 
  unsigned __int64 v97; 
  int PhysicsAssetBodyCount; 
  Ragdoll *v99; 
  hknpBodyId result; 
  int ragdollHandle; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> v102; 
  PhysicsAsset *physicsAsset; 
  const XModel *v104; 
  const BoneOrientation *AnimPoseBoneOrientations; 
  DObj *obj; 
  hkVector4f v107; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v108; 
  char v109; 
  hkVector4f pivotInAOut; 
  vec3_t v111; 
  vec4_t v112; 
  hkVector4f pivotInBOut; 
  hkVector4f v114; 

  v99 = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1538, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  obj = Ragdoll_BodyDObj(ragdoll);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1542, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1545, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
    __debugbreak();
  v104 = *obj->models;
  v3 = v104->physicsAsset;
  physicsAsset = v3;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1550, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1555, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !AnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1556, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v3);
  v4 = PhysicsAssetBodyCount;
  if ( PhysicsAssetBodyCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1562, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( PhysicsAssetBodyCount != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1563, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v5 = 3 * ragdoll->localClientNum + 3;
  bodyIdB = v5;
  ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 41, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(position) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 42, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", position, 64) )
      __debugbreak();
  }
  v6 = ragdollHandle - 1;
  v7 = ragdollHandle - 1;
  bodyIdA = ragdollHandle - 1;
  p_m_buckets = &g_ragdollBodyIdToIndexMap[v7].m_buckets;
  p_m_currentNumItems = &g_ragdollBodyIdToIndexMap[v7].m_currentNumItems;
  v97 = (unsigned __int64)p_m_buckets;
  if ( p_m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)p_m_currentNumItems )
  {
    v10 = &g_ragdollBodyIdToIndexMap[v7].m_buckets;
    do
    {
      for ( i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v10->m_data[0].m_listHead.m_sentinel.mp_next; i != v10; g_ragdollBodyIdToIndexMap[v7].m_freelist.m_head.mp_next = v12 )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v12 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)i;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)i->m_data[0].m_listHead.m_sentinel.mp_next;
        v12->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)g_ragdollBodyIdToIndexMap[v7].m_freelist.m_head;
      }
      v10->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v10;
      v10 = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)((char *)v10 + 8);
    }
    while ( v10 != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)p_m_currentNumItems );
    v5 = bodyIdB;
    v6 = bodyIdA;
    p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v97;
    v4 = PhysicsAssetBodyCount;
  }
  v13 = (__int64)AnimPoseBoneOrientations;
  v14 = 0;
  *p_m_currentNumItems = 0i64;
  v111 = *(vec3_t *)v13;
  v112 = *(vec4_t *)(v13 + 12);
  instanceId = Physics_CreateInstance((Physics_WorldId)v5);
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1581, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (v6 < 0 || (unsigned int)v6 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "const unsigned char __cdecl truncate_cast_impl<const unsigned char,int>(int)", "unsigned", (unsigned __int8)v6, "signed", v6) )
    __debugbreak();
  v15 = 0;
  if ( v4 > 0 )
  {
    v16 = 0i64;
    do
    {
      if ( (v15 < 0 || (unsigned int)v15 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "const unsigned short __cdecl truncate_cast_impl<const unsigned short,int>(int)", "unsigned", (unsigned __int16)v15, "signed", v16) )
        __debugbreak();
      Ref = Physics_MakeRef(Physics_RefSystem_Ragdoll, Physics_RelationshipSystem_None, v6, v15);
      if ( !Physics_InstantiateAssetBody(instanceId, (Physics_WorldId)v5, physicsAsset, v15, Ref, &v111, &v112, 1, 1, 0, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1588, ASSERT_TYPE_ASSERT, "(Physics_InstantiateAssetBody( instanceId, authWorldId, ragdollAsset, bodyId, ref, basePosition, baseQuat, true, true, false, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, false ))", (const char *)&queryFormat, "Physics_InstantiateAssetBody( instanceId, authWorldId, ragdollAsset, bodyId, ref, basePosition, baseQuat, true, true, false, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, false )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v15);
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      PhysicsSVFX_RegisterBody((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, v99->localClientNum);
      pivotInAOut.m_quad.m128_u64[0] = __PAIR64__(v15, m_serialAndIndex);
      if ( m_serialAndIndex % 0x61 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v20 = &p_m_buckets->m_data[m_serialAndIndex % 0x61];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v20->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v20->m_listHead.m_sentinel.mp_next == v20 )
      {
LABEL_91:
        p_m_freelist = &g_ragdollBodyIdToIndexMap[v7].m_freelist;
        if ( !p_m_freelist->m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<16> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x40ui64) )
          __debugbreak();
        v23 = p_m_freelist->m_head.mp_next;
        v14 = 0;
        v108 = v20;
        v107.m_quad.m128_u64[0] = (unsigned __int64)v23;
        v109 = 1;
        p_m_freelist->m_head.mp_next = v23->mp_next;
        v23[1].mp_next = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)pivotInAOut.m_quad.m128_f32;
        v23->mp_next = NULL;
        v23->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20->m_listHead.m_sentinel.mp_next;
        v20->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v23;
        ++g_ragdollBodyIdToIndexMap[v7].m_currentNumItems;
        v107.m_quad.m128_u64[1] = v97;
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v97;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)m_serialAndIndex )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v20 )
            goto LABEL_91;
        }
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v97;
        v14 = 0;
        v107.m_quad.m128_u64[0] = 0i64;
        v107.m_quad.m128_u64[1] = v97;
        v108 = NULL;
        v109 = 0;
      }
      LOBYTE(v6) = bodyIdA;
      ++v15;
      ++v16;
    }
    while ( v15 < PhysicsAssetBodyCount );
  }
  v24 = physicsAsset;
  PhysicsAssetConstraintCount = Physics_GetPhysicsAssetConstraintCount(physicsAsset);
  v26 = PhysicsAssetConstraintCount;
  result.m_serialAndIndex = PhysicsAssetConstraintCount;
  if ( PhysicsAssetConstraintCount > 32 )
  {
    LODWORD(position) = PhysicsAssetConstraintCount;
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B98E0, 725i64, 32i64, v24->name, position);
  }
  v27 = Physics_MakeRef(Physics_RefSystem_Ragdoll, Physics_RelationshipSystem_None, v6, 0);
  pivotInAOut.m_quad.m128_u64[0] = v26;
  if ( (int)v26 > 0 )
  {
    v28 = v26;
    v29 = &v99->state.constraintBodyIndices[0][1];
    do
    {
      if ( !Physics_InstantiateAssetConstraint(instanceId, (Physics_WorldId)v5, physicsAsset, v14, v27, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1610, ASSERT_TYPE_ASSERT, "(Physics_InstantiateAssetConstraint( instanceId, authWorldId, ragdollAsset, constraintId, instanceRef, true ))", (const char *)&queryFormat, "Physics_InstantiateAssetConstraint( instanceId, authWorldId, ragdollAsset, constraintId, instanceRef, true )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      m_value = HavokPhysics_GetConstraintID(&v102, (const Physics_WorldId)v5, instanceId, v14)->m_value;
      if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1614, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      Physics_GetConstraintBodyIds((Physics_WorldId)v5, m_value, &bodyIdA, &bodyIdB);
      v31 = bodyIdA % 0x61ui64;
      if ( v31 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v32 = &p_m_buckets->m_data[v31];
      v33 = (unsigned __int64)v32->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v32->m_listHead.m_sentinel.mp_next == v32 )
      {
LABEL_138:
        v33 = 0i64;
      }
      else
      {
        while ( 1 )
        {
          if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *(_DWORD *)(v33 + 8) == bodyIdA )
            break;
          v33 = *(_QWORD *)v33;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v33 == v32 )
            goto LABEL_138;
        }
        if ( v33 )
        {
          v108 = v32;
          v34 = v97;
          v107.m_quad.m128_u64[1] = v97;
          v107.m_quad.m128_u64[0] = v33;
          goto LABEL_143;
        }
      }
      v34 = v97;
      v107.m_quad.m128_u64[1] = v97;
      v107.m_quad.m128_u64[0] = 0i64;
      v108 = NULL;
LABEL_143:
      if ( !v33 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1620, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v35 = v33 + 12;
      if ( !v33 )
        v35 = 4i64;
      v36 = *(_DWORD *)v35;
      if ( (*(int *)v35 < 0 || (unsigned int)v36 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v36, "signed", v36) )
        __debugbreak();
      *(v29 - 1) = v36;
      v37 = bodyIdB % 0x61ui64;
      if ( v37 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v38 = (unsigned __int64 *)(v34 + 8 * v37);
      v39 = *v38;
      if ( (unsigned __int64 *)*v38 == v38 )
      {
LABEL_163:
        v39 = 0i64;
LABEL_166:
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v97;
        v107.m_quad.m128_u64[1] = v97;
        v107.m_quad.m128_u64[0] = 0i64;
        v108 = NULL;
        goto LABEL_167;
      }
      while ( 1 )
      {
        if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( *(_DWORD *)(v39 + 8) == bodyIdB )
          break;
        v39 = *(_QWORD *)v39;
        if ( (unsigned __int64 *)v39 == v38 )
          goto LABEL_163;
      }
      if ( !v39 )
        goto LABEL_166;
      v108 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v38;
      p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v97;
      v107.m_quad.m128_u64[1] = v97;
      v107.m_quad.m128_u64[0] = v39;
LABEL_167:
      if ( !v39 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1624, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v40 = v39 + 12;
      if ( !v39 )
        v40 = 4i64;
      v41 = *(_DWORD *)v40;
      if ( (*(int *)v40 < 0 || (unsigned int)v41 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v41, "signed", v41) )
        __debugbreak();
      *v29 = v41;
      ++v14;
      v29 += 2;
      --v28;
    }
    while ( v28 );
  }
  v42 = PhysicsAssetBodyCount;
  v97 = PhysicsAssetBodyCount;
  v43 = 0;
  if ( PhysicsAssetBodyCount > 0 )
  {
    v44 = PhysicsAssetBodyCount;
    p_hidden = &v99->state.bones[0].hidden;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      v46 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&v102, (const Physics_WorldId)v5, instanceId, v43);
      v47 = !*p_hidden;
      bodyIdB = v46->m_serialAndIndex;
      if ( !v47 )
        Physics_RemoveRigidBodiesFromWorld((Physics_WorldId)v5, &bodyIdB, 1, 0);
      ++v43;
      p_hidden += 48;
      --v44;
    }
    while ( v44 );
    v42 = PhysicsAssetBodyCount;
  }
  v48 = 0;
  if ( v42 > 0 )
  {
    v49 = 0i64;
    v50 = &v99->state.bones[0].hidden;
    do
    {
      v51 = &AnimPoseBoneOrientations[v48];
      if ( !*v50 )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(orientationAsQuat) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(orientationAsQuat) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(orientationAsQuat) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(orientationAsQuat) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
            __debugbreak();
        }
        v52 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&v102, (const Physics_WorldId)v5, instanceId, v48)->m_serialAndIndex;
        v53 = !useLoadStateForActivation || v99->state.loadedPhysicsActivationStates[v49];
        Physics_WarpRigidBodyTo((const Physics_WorldId)v5, v52, &v51->origin, &v51->orientation, 0, v53);
        Physics_ManifoldCallback_RegisterBody((Physics_WorldId)v5, v52, Ragdoll_ManifoldHandler);
      }
      ++v48;
      ++v49;
      v50 += 48;
    }
    while ( v49 < v42 );
  }
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
  v54 = v99;
  if ( v99->state.physicsInstanceId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1673, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId == 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v55 = instanceId;
  v56 = ragdollHandle;
  v54->state.physicsInstanceId = instanceId;
  Ragdoll_MarkPenetrating(v56);
  v57 = 0;
  v58 = (signed __int64)pivotInAOut.m_quad.m128_u64[0] <= 0;
  v59 = 0;
  v54->state.needsTightening = 0;
  v54->state.tighteningStartMsec = 0;
  if ( !v58 )
  {
    p_planeChanged = &v54->state.constraintTightening[0].planeChanged;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(orientationAsQuat) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      v61 = HavokPhysics_GetConstraintID(&v102, (const Physics_WorldId)v5, instanceId, v59)->m_value;
      if ( v61 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1693, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      Physics_LoosenConstraint((Physics_WorldId)v5, v61, (PhysicsConstraintLooseningResult *)(p_planeChanged - 1));
      v62 = *(p_planeChanged - 1) || *p_planeChanged || p_planeChanged[1] || p_planeChanged[2];
      v54->state.needsTightening |= v62;
      if ( ragdoll_debugInitialPose->current.enabled )
      {
        world = HavokPhysics_GetMutableWorld((Physics_WorldId)v5)->world;
        HavokPhysics_GetConstraintID((hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)&ragdollHandle, (const Physics_WorldId)v5, instanceId, v59);
        v64 = (_DWORD *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getConstraint)(&world->hknpWorldReader, (unsigned int)ragdollHandle);
        m_data = world->m_bodyManager.m_bodyNames.m_data;
        v66 = (const char *)((unsigned __int64)m_data[*v64 & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
        v67 = *(p_planeChanged - 1);
        v68 = (const char *)((unsigned __int64)m_data[v64[1] & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
        v69 = v67 || *p_planeChanged || p_planeChanged[1] || p_planeChanged[2];
        v57 |= v69;
        if ( v69 )
        {
          Com_PrintWarning(20, "Ragdoll %s for model %s - bone pose exceeds constraint angle limits between %s and %s and is being loosened - either loosen the ragdoll constraint to match or update the death anim listed below to not break the constraint\n", physicsAsset->name, v104->name, v66, v68);
          v67 = *(p_planeChanged - 1);
        }
        if ( v67 )
          Com_PrintWarning(20, " - cone limits  loosened from %f to %f\n", (float)(*(float *)(p_planeChanged + 3) * 57.295776), (float)(*(float *)(p_planeChanged + 23) * 57.295776));
        if ( *p_planeChanged )
          Com_PrintWarning(20, " - plane limits loosened from %f,%f to %f,%f\n", (float)(*(float *)(p_planeChanged + 7) * 57.295776), (float)(*(float *)(p_planeChanged + 11) * 57.295776), (float)(*(float *)(p_planeChanged + 27) * 57.295776), (float)(*(float *)(p_planeChanged + 31) * 57.295776));
        if ( p_planeChanged[1] )
          Com_PrintWarning(20, " - twist limits loosened from %f,%f to %f,%f\n", (float)(*(float *)(p_planeChanged + 15) * 57.295776), (float)(*(float *)(p_planeChanged + 19) * 57.295776), (float)(*(float *)(p_planeChanged + 35) * 57.295776), (float)(*(float *)(p_planeChanged + 39) * 57.295776));
        if ( p_planeChanged[2] )
          Com_PrintWarning(20, " - angle limits loosened from %f,%f to %f,%f\n", (float)(*(float *)(p_planeChanged + 3) * 57.295776), (float)(*(float *)(p_planeChanged + 7) * 57.295776), (float)(*(float *)(p_planeChanged + 23) * 57.295776), (float)(*(float *)(p_planeChanged + 27) * 57.295776));
      }
      ++v59;
      p_planeChanged += 44;
      --pivotInAOut.m_quad.m128_u64[0];
    }
    while ( pivotInAOut.m_quad.m128_u64[0] );
    v42 = PhysicsAssetBodyCount;
    v55 = instanceId;
  }
  v70 = result.m_serialAndIndex;
  if ( (int)result.m_serialAndIndex > 0 )
  {
    v71 = 0;
    do
    {
      v72 = HavokPhysics_GetMutableWorld((Physics_WorldId)v5)->world;
      HavokPhysics_GetConstraintID((hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)&result, (const Physics_WorldId)v5, v55, v71);
      v73 = (unsigned int *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v72->getConstraint)(&v72->hknpWorldReader, result.m_serialAndIndex);
      hkpConstraintDataUtils::getConstraintPivots(*((const hkpConstraintData **)v73 + 1), &pivotInAOut, &pivotInBOut);
      v74 = (const hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v72->getBodyTransform)(&v72->hknpWorldReader, *v73);
      hkVector4f::setTransformedPos(&v114, v74, &pivotInAOut);
      v75 = (const hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v72->getBodyTransform)(&v72->hknpWorldReader, v73[1]);
      hkVector4f::setTransformedPos(&v107, v75, &pivotInBOut);
      _XMM1 = _mm128_sub_ps(v114.m_quad, v107.m_quad);
      __asm
      {
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vrsqrtps xmm4, xmm6
      }
      _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM6), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
      __asm
      {
        vcmpleps xmm5, xmm6, xmm7
        vandnps xmm4, xmm5, xmm1
      }
      if ( (float)(*(float *)&_XMM4 * 32.0) > 1.0 && ragdoll_debugInitialPose->current.enabled )
      {
        Com_PrintWarning(20, "Ragdoll %s for model %s - bone pose doesn't match ragdoll by %.2f units for joint between %s and %s - check the ragdoll asset first, then check the anim tree printed below\n", physicsAsset->name, v104->name, (float)(*(float *)&_XMM4 * 32.0), (const char *)((unsigned __int64)v72->m_bodyManager.m_bodyNames.m_data[*v73 & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), (const char *)((unsigned __int64)v72->m_bodyManager.m_bodyNames.m_data[v73[1] & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
        v57 = 1;
      }
      v55 = instanceId;
      ++v71;
    }
    while ( v71 < v70 );
    v42 = v97;
  }
  if ( ragdoll_debugDisplayInitialPose->current.enabled )
  {
    Com_Printf(20, "Ragdoll %s for model %s\n", physicsAsset->name, v104->name);
    if ( v42 > 0 )
    {
      boneNames = v99->boneNames;
      v82 = &AnimPoseBoneOrientations->orientation.v[2];
      do
      {
        v83 = v82[1];
        v84 = *v82;
        v85 = *(v82 - 1);
        v86 = *(v82 - 2);
        v87 = *(v82 - 3);
        v88 = *(v82 - 4);
        v89 = *(v82 - 5);
        v90 = SL_ConvertToString(*boneNames);
        Com_Printf(20, "Body %s at pos (%.2f %.2f %.2f) rot (%.2f %.2f %.2f %.2f)\n", v90, v89, v88, v87, v86, v85, v84, v83);
        ++boneNames;
        v82 += 7;
        --v42;
      }
      while ( v42 );
    }
    goto LABEL_291;
  }
  if ( v57 && ragdoll_debugInitialPose->current.enabled )
LABEL_291:
    DObjDisplayAnim(obj, "Ragdoll anim tree: ");
}

/*
==============
Ragdoll_DestroyPhysics
==============
*/
void Ragdoll_DestroyPhysics(Ragdoll *ragdoll)
{
  __int32 v2; 
  signed int v3; 
  int NumRigidBodys; 
  unsigned int physicsInstanceId; 
  hknpBodyId *RigidBodyID; 
  __int64 v7; 
  hknpBodyId result; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1981, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1982, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v2 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  v3 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v2, ragdoll->state.physicsInstanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      physicsInstanceId = ragdoll->state.physicsInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v2 > 7 )
      {
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v2 - 2) <= 5 )
      {
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v7) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v2 <= 1 )
      {
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v7) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v2, physicsInstanceId, v3);
      PhysicsSVFX_UnregisterBody((Physics_WorldId)v2, RigidBodyID->m_serialAndIndex, ragdoll->localClientNum);
      ++v3;
    }
    while ( v3 < NumRigidBodys );
  }
  Physics_DestroyInstance((Physics_WorldId)v2, ragdoll->state.physicsInstanceId, 1);
  ragdoll->state.physicsInstanceId = -1;
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_FindBoneChildren
==============
*/
__int64 Ragdoll_FindBoneChildren(Ragdoll *ragdoll, int boneIdx, int *childIndices)
{
  unsigned int v6; 
  __int64 numBones; 
  int v8; 
  __int64 v9; 
  Bone *bones; 
  __int64 v12; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 836, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( boneIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 837, ASSERT_TYPE_ASSERT, "(boneIdx != BONE_INDEX_NONE)", (const char *)&queryFormat, "boneIdx != BONE_INDEX_NONE") )
    __debugbreak();
  if ( !childIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 838, ASSERT_TYPE_ASSERT, "(childIndices)", (const char *)&queryFormat, "childIndices") )
    __debugbreak();
  v6 = 0;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  v8 = 0;
  if ( numBones > 0 )
  {
    v9 = 0i64;
    bones = ragdoll->state.bones;
    do
    {
      if ( v8 != boneIdx && !bones->hidden && bones->parentBone == boneIdx )
      {
        if ( v9 >= 6 )
        {
          LODWORD(v12) = 6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 866, ASSERT_TYPE_ASSERT, "(numChildren < 6)", "%s\n\tA ragdoll has a rigid body with more than %i children - this is a current code limit.  See engineering or rework the ragdoll", "numChildren < RAGDOLL_MAX_BONE_CHILDREN", v12) )
            __debugbreak();
        }
        ++v6;
        childIndices[v9++] = v8;
      }
      ++v8;
      ++bones;
      --numBones;
    }
    while ( numBones );
  }
  return v6;
}

/*
==============
Ragdoll_FindBoneDescendants
==============
*/
__int64 Ragdoll_FindBoneDescendants(Ragdoll *ragdoll, int boneIdx, int *descendantIndices)
{
  int BoneChildren; 
  __int64 v7; 
  __int64 v8; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 882, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( boneIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 883, ASSERT_TYPE_ASSERT, "(boneIdx != BONE_INDEX_NONE)", (const char *)&queryFormat, "boneIdx != BONE_INDEX_NONE") )
    __debugbreak();
  if ( !descendantIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 884, ASSERT_TYPE_ASSERT, "(descendantIndices)", (const char *)&queryFormat, "descendantIndices") )
    __debugbreak();
  BoneChildren = Ragdoll_FindBoneChildren(ragdoll, boneIdx, descendantIndices);
  v7 = BoneChildren;
  if ( BoneChildren > 0 )
  {
    v8 = 0i64;
    do
      BoneChildren += Ragdoll_FindBoneDescendants(ragdoll, descendantIndices[v8++], &descendantIndices[BoneChildren]);
    while ( v8 < v7 );
  }
  return (unsigned int)BoneChildren;
}

/*
==============
Ragdoll_GetBodyIdxForBoneName
==============
*/
bool Ragdoll_GetBodyIdxForBoneName(Physics_WorldId worldId, int ragdollHandle, scr_string_t boneName, unsigned int *outInstanceId, int *outBodyIdx, float *outBodyRadius)
{
  Ragdoll *Ragdoll; 
  bool result; 
  unsigned int physicsInstanceId; 
  int NumRigidBodys; 
  __int64 v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  scr_string_t *boneNames; 
  bool *p_hidden; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 

  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2853, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  if ( (unsigned int)ragdollHandle >= 0x40 )
  {
    LODWORD(v22) = 64;
    LODWORD(v21) = ragdollHandle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2854, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle ) < (unsigned)( 64 )", "ragdollHandle doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2855, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2856, ASSERT_TYPE_ASSERT, "(outInstanceId)", (const char *)&queryFormat, "outInstanceId") )
    __debugbreak();
  if ( !outBodyIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2857, ASSERT_TYPE_ASSERT, "(outBodyIdx)", (const char *)&queryFormat, "outBodyIdx") )
    __debugbreak();
  if ( !outBodyRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2858, ASSERT_TYPE_ASSERT, "(outBodyRadius)", (const char *)&queryFormat, "outBodyRadius") )
    __debugbreak();
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2861, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( worldId == PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE || worldId == PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE )
  {
    physicsInstanceId = Ragdoll->state.physicsInstanceId;
    NumRigidBodys = Physics_GetNumRigidBodys(worldId, physicsInstanceId);
    v14 = NumRigidBodys;
    if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2880, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    if ( (_DWORD)v14 != Ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2881, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
      __debugbreak();
    v15 = 0;
    v16 = -1;
    if ( (int)v14 <= 0 )
      goto LABEL_40;
    v17 = 0i64;
    boneNames = Ragdoll->boneNames;
    p_hidden = &Ragdoll->state.bones[0].hidden;
    while ( *p_hidden || *boneNames != boneName )
    {
      ++v15;
      ++v17;
      ++boneNames;
      p_hidden += 48;
      if ( v17 >= v14 )
        goto LABEL_40;
    }
    v16 = v15;
    if ( v15 == -1 )
    {
LABEL_40:
      v20 = SL_ConvertToString(boneName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2899, ASSERT_TYPE_ASSERT, "(hitBodyIdx != -1)", "%s\n\tFailed to find body for bone name '%s' in Ragdoll_GetBodyIdxForBoneName()", "hitBodyIdx != -1", v20) )
        __debugbreak();
    }
    *outInstanceId = physicsInstanceId;
    *outBodyIdx = v16;
    result = 1;
    *outBodyRadius = Ragdoll->state.bones[v16].length * 0.5;
  }
  else
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2874, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tPhysicsWorld %i not supported in Ragdoll_GetBodyIdxForBoneName()", "0", v22) )
      __debugbreak();
    return 0;
  }
  return result;
}

/*
==============
Ragdoll_GetBodyIdxForHitLocation
==============
*/
bool Ragdoll_GetBodyIdxForHitLocation(Physics_WorldId worldId, int ragdollHandle, hitLocation_t hitLoc, unsigned int *outInstanceId, int *outBodyIdx, float *outBodyRadius)
{
  __int64 v6; 
  const scr_string_t *v10; 
  scr_string_t v11; 
  __int64 v13; 
  __int64 v14; 

  v6 = hitLoc;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2954, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  if ( (unsigned int)ragdollHandle >= 0x40 )
  {
    LODWORD(v14) = 64;
    LODWORD(v13) = ragdollHandle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2955, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle ) < (unsigned)( 64 )", "ragdollHandle doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x16 )
  {
    LODWORD(v14) = 22;
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2956, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !outInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2957, ASSERT_TYPE_ASSERT, "(outInstanceId)", (const char *)&queryFormat, "outInstanceId") )
    __debugbreak();
  if ( !outBodyIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2958, ASSERT_TYPE_ASSERT, "(outBodyIdx)", (const char *)&queryFormat, "outBodyIdx") )
    __debugbreak();
  if ( !outBodyRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2959, ASSERT_TYPE_ASSERT, "(outBodyRadius)", (const char *)&queryFormat, "outBodyRadius") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x16 )
  {
    LODWORD(v14) = 22;
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2939, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v10 = s_ragdollHitLocToBoneScrStringMapping[v6];
  if ( v10 )
  {
    v11 = *v10;
    if ( *v10 )
      return Ragdoll_GetBodyIdxForBoneName(worldId, ragdollHandle, v11, outInstanceId, outBodyIdx, outBodyRadius);
  }
  else
  {
    v11 = 0;
  }
  LODWORD(v14) = v6;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2963, ASSERT_TYPE_ASSERT, "(boneNameScr != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tFailed to find bone name for specified hitLocation %i", "boneNameScr != NULL_SCR_STRING", v14) )
    __debugbreak();
  return Ragdoll_GetBodyIdxForBoneName(worldId, ragdollHandle, v11, outInstanceId, outBodyIdx, outBodyRadius);
}

/*
==============
Ragdoll_GetBoneNameForHitLocation
==============
*/
const char *Ragdoll_GetBoneNameForHitLocation(hitLocation_t hitLocation)
{
  __int64 v1; 
  int v4; 

  v1 = hitLocation;
  if ( (unsigned int)hitLocation >= HITLOC_NUM )
  {
    v4 = 22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 3000, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", hitLocation, v4) )
      __debugbreak();
  }
  return s_ragdollHitLocToBoneMapping[v1];
}

/*
==============
Ragdoll_GetBoneScrStringForHitLocation
==============
*/
__int64 Ragdoll_GetBoneScrStringForHitLocation(hitLocation_t hitLocation)
{
  __int64 v1; 
  const scr_string_t *v2; 

  v1 = hitLocation;
  if ( (unsigned int)hitLocation >= HITLOC_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2939, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", hitLocation, 22) )
    __debugbreak();
  v2 = s_ragdollHitLocToBoneScrStringMapping[v1];
  if ( v2 )
    return *(unsigned int *)v2;
  else
    return 0i64;
}

/*
==============
Ragdoll_GetPhysicsWorldId
==============
*/
__int64 Ragdoll_GetPhysicsWorldId(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return (unsigned int)(3 * ragdoll->localClientNum + 3);
}

/*
==============
Ragdoll_IsAtRest
==============
*/
bool Ragdoll_IsAtRest(const int ragdollHandle)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v3; 
  unsigned int physicsInstanceId; 
  int v5; 
  int NumRigidBodys; 
  unsigned int RigidBodyID; 
  __int64 v9; 
  vec3_t linVel; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_26;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v9) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v9, 64) )
      __debugbreak();
  }
  v3 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v3->allocated )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2657, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  physicsInstanceId = Ragdoll->state.physicsInstanceId;
  v5 = 3 * Ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2661, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, physicsInstanceId);
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2664, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v5, physicsInstanceId, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2667, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyLinVel((const Physics_WorldId)v5, RigidBodyID, &linVel);
  return (float)((float)((float)((float)(linVel.v[0] * linVel.v[0]) + (float)(linVel.v[1] * linVel.v[1])) + (float)(linVel.v[2] * linVel.v[2])) / (float)NumRigidBodys) <= 0.30250001;
}

/*
==============
Ragdoll_IsPenetrating
==============
*/
__int64 Ragdoll_IsPenetrating(const int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  if ( (unsigned int)(ragdollHandle - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1828, ASSERT_TYPE_ASSERT, "(0 < ragdollHandle && ragdollHandle <= 64)", (const char *)&queryFormat, "RAGDOLL_INVALID < ragdollHandle && ragdollHandle <= RAGDOLL_MAX") )
    __debugbreak();
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( Ragdoll )
    return Ragdoll->penetrating;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1831, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return MEMORY[0x3720];
}

/*
==============
Ragdoll_IsWorldCollisionReady
==============
*/
bool Ragdoll_IsWorldCollisionReady(Ragdoll *ragdoll)
{
  const cpose_t *v2; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v8; 
  __int16 gridIdx; 
  vec2_t position; 
  unsigned int v20; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 253, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v2 = Ragdoll_BodyPose(ragdoll);
  if ( !v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 255, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
  }
  if ( !v2->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v2->origin.Get_origin, v2);
  FunctionPointer_origin(&v2->origin.origin.origin, (vec3_t *)&position);
  if ( v2->isPosePrecise )
  {
    _XMM0 = LODWORD(position.v[0]);
    _XMM2 = LODWORD(position.v[1]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v8;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
    }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v8 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v8;
    _XMM2 = v20;
    position.v[0] = *(float *)&_XMM1;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
    }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v8 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v8;
    position.v[1] = *(float *)&_XMM1;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    v20 = _XMM1;
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * ragdoll->localClientNum + 3), &position, &gridIdx);
}

/*
==============
Ragdoll_ManifoldHandler
==============
*/
void Ragdoll_ManifoldHandler(Physics_ManifoldCallback_Data *data)
{
  int Ref; 
  int v3; 
  LocalClientNum_t LocalClientForWorld; 
  unsigned int EntityNum; 
  int v6; 
  centity_t *Entity; 
  unsigned int v8; 
  int v9; 
  centity_t *v10; 
  int ActiveRagdollHandle; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  _QWORD *v15; 
  _QWORD *v16; 
  __int64 v17; 
  unsigned int v18; 
  Ragdoll *v19; 
  const Ragdoll *Ragdoll; 
  Physics_ManifoldStatus status; 
  Physics_ManifoldCache *p_manifoldCache; 
  double Float_Internal_DebugName; 
  double v24; 
  double v25; 
  __int64 v26; 
  __int64 v27; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1458, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Ref = Physics_GetRef(data->worldId, data->signaledBodyId);
  if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1462, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( bodyRefRagdoll ) == Physics_RefSystem_Ragdoll)", (const char *)&queryFormat, "Physics_GetRefSystem( bodyRefRagdoll ) == Physics_RefSystem_Ragdoll") )
    __debugbreak();
  v3 = Physics_GetRef(data->worldId, data->otherBodyId);
  if ( Physics_GetRefSystem(v3) == Physics_RefSystem_CEntities )
  {
    LocalClientForWorld = Physics_GetLocalClientForWorld(data->worldId);
    EntityNum = Physics_GetEntityNum(v3);
    v6 = EntityNum;
    if ( EntityNum >= 0x800 )
    {
      LODWORD(v26) = EntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( bodyOtherEntNum ) < (unsigned)( ( 2048 ) )", "bodyOtherEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, 2048) )
        __debugbreak();
    }
    Entity = CG_GetEntity(LocalClientForWorld, v6);
    if ( Entity->nextState.eType == ET_SCRIPTMOVER && (Entity->nextState.staticState.vehiclePlayer.playerIndex & 0x20) != 0 )
    {
      v8 = Physics_GetEntityNum(Ref);
      v9 = v8;
      if ( v8 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1477, ASSERT_TYPE_ASSERT, "(unsigned)( bodyRagdollEntNum ) < (unsigned)( ( 2048 ) )", "bodyRagdollEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v10 = CG_GetEntity(LocalClientForWorld, v9);
      ActiveRagdollHandle = CG_Pose_GetActiveRagdollHandle(&v10->pose);
      if ( !ActiveRagdollHandle )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1480, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 30, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
      }
      if ( (unsigned int)(ActiveRagdollHandle - 1) >= 0x40 )
      {
        LODWORD(v27) = 64;
        LODWORD(v26) = ActiveRagdollHandle - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 31, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v12 = ActiveRagdollHandle - 1;
      v13 = (data->signaledBodyId * (unsigned __int128)0x51D07EAE2F8151D1ui64) >> 64;
      v14 = data->signaledBodyId - 97 * ((v13 + (((unsigned __int64)data->signaledBodyId - v13) >> 1)) >> 6);
      if ( v14 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v15 = (_QWORD *)((char *)&g_ragdollBodyIdToIndexMap[0].m_buckets + 1824 * v12 + 8 * v14);
      v16 = (_QWORD *)*v15;
      if ( (_QWORD *)*v15 == v15 )
      {
LABEL_33:
        v16 = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *((_DWORD *)v16 + 2) == data->signaledBodyId )
            break;
          v16 = (_QWORD *)*v16;
          if ( v16 == v15 )
            goto LABEL_33;
        }
      }
      if ( !v16 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1484, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v17 = (__int64)v16 + 12;
      if ( !v16 )
        v17 = 4i64;
      v18 = *(_DWORD *)v17;
      if ( !ActiveRagdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(ActiveRagdollHandle - 1) >= 0x40 )
      {
        LODWORD(v27) = 64;
        LODWORD(v26) = ActiveRagdollHandle - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v19 = &g_ragdollBodies[v12];
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( v18 >= v19->state.numBones )
      {
        Ragdoll = Ragdoll_GetRagdoll(ActiveRagdollHandle);
        LODWORD(v27) = Ragdoll_GetNumBones(Ragdoll);
        LODWORD(v26) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1486, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( Ragdoll_GetNumBones( Ragdoll_GetRagdoll( ragdollHandle ) ) )", "boneIndex doesn't index Ragdoll_GetNumBones( Ragdoll_GetRagdoll( ragdollHandle ) )\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      status = data->status;
      if ( status == All || status == NormalSpace || status == PhaseSpace )
      {
        p_manifoldCache = &data->manifoldCache;
        if ( p_manifoldCache->m_cache )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverFriction, "physics_ragdollMoverFriction");
          if ( *(float *)&Float_Internal_DebugName >= 0.0 )
            Physics_ManifoldCache_SetFriction(p_manifoldCache, *(const float *)&Float_Internal_DebugName);
          v24 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverStaticFrictionExtra, "physics_ragdollMoverStaticFrictionExtra");
          if ( *(float *)&v24 >= 0.0 )
            Physics_ManifoldCache_SetStaticFrictionExtra(p_manifoldCache, *(const float *)&v24);
          v25 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverRestitution, "physics_ragdollMoverRestitution");
          if ( *(float *)&v25 >= 0.0 )
            Physics_ManifoldCache_SetRestitution(p_manifoldCache, *(const float *)&v25);
        }
        Ragdoll_SetContactWithMover(ActiveRagdollHandle, v6, v18);
      }
      else if ( status == Count )
      {
        Ragdoll_ResetContactWithMover(ActiveRagdollHandle, v6, v18);
      }
      else
      {
        LODWORD(v26) = data->status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1525, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected manifold status %d", v26) )
          __debugbreak();
      }
    }
  }
}

/*
==============
Ragdoll_MarkPenetrating
==============
*/
void Ragdoll_MarkPenetrating(const int ragdollHandle)
{
  Ragdoll *Ragdoll; 
  int NumRigidBodys; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  _DWORD *p_penetrationState; 
  int v8; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "Ragdoll_MarkPenetrating");
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1798, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  if ( Ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1801, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)(3 * Ragdoll->localClientNum + 3), Ragdoll->state.physicsInstanceId);
  v4 = NumRigidBodys;
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1806, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v4 != Ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1807, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v5 = 0;
  Ragdoll->penetrating = 1;
  v6 = v4;
  if ( (int)v4 > 0 )
  {
    p_penetrationState = &Ragdoll->state.bones[0].penetrationState;
    do
    {
      if ( !*((_BYTE *)p_penetrationState - 6) )
      {
        v8 = 3;
        if ( *(p_penetrationState - 3) == v5 )
          v8 = 1;
        *p_penetrationState = v8;
      }
      ++v5;
      p_penetrationState += 12;
      --v6;
    }
    while ( v6 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Ragdoll_PenetrationQuery
==============
*/
_BOOL8 Ragdoll_PenetrationQuery(Ragdoll *ragdoll, const vec3_t *location, vec3_t *outHitPos, vec3_t *outHitNormal, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  LocalClientNum_t localClientNum; 
  int v10; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  int m_ignoreRefs; 
  bool HasHit; 
  Physics_QueryPointExtendedData extendedData; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 909, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ((LODWORD(location->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(location->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(location->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 910, ASSERT_TYPE_ASSERT, "(!IS_NAN( location[0] ) && !IS_NAN( location[1] ) && !IS_NAN( location[2] ))", (const char *)&queryFormat, "!IS_NAN( location[0] ) && !IS_NAN( location[1] ) && !IS_NAN( location[2] )") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  localClientNum = ragdoll->localClientNum;
  extendedData.collisionBuffer = 0.0;
  v10 = 3 * localClientNum + 3;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.phaseSelection = All;
  extendedData.contents = 8389905;
  extendedData.ignoreBodies = ignoreBodies;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v10);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 922, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", *(_QWORD *)&extendedData.contents, extendedData.ignoreBodies, *(_QWORD *)&extendedData.characterProxyType, *(_QWORD *)&extendedData.phaseSelection) )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  m_ignoreRefs = ignoreBodies->m_ignoreRefs;
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, ignoreBodies->m_ignoreRefs | 0xFFFFFFFE);
  Physics_QueryPoint((Physics_WorldId)v10, location, 0.0, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs | 1);
    Physics_QueryPoint((Physics_WorldId)v10, location, 0.0, &extendedData, ClosestResult);
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  if ( HasHit )
  {
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(ClosestResult, 0, outHitPos);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(ClosestResult, 0, outHitNormal);
  }
  return HasHit;
}

/*
==============
Ragdoll_PenetrationTrace
==============
*/
_BOOL8 Ragdoll_PenetrationTrace(Ragdoll *ragdoll, const vec3_t *start, const vec3_t *end, vec3_t *outHitPos, vec3_t *outHitNormal, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  __int128 v6; 
  LocalClientNum_t localClientNum; 
  int v12; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  int m_ignoreRefs; 
  bool HasHit; 
  double RaycastHitFraction; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  const vec4_t *v25; 
  Physics_RaycastExtendedData extendedData; 
  __int128 v28; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 965, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 966, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", (const char *)&queryFormat, "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 967, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", (const char *)&queryFormat, "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  localClientNum = ragdoll->localClientNum;
  extendedData.collisionBuffer = 0.0;
  v12 = 3 * localClientNum + 3;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8389905;
  extendedData.ignoreBodies = ignoreBodies;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v12);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 979, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", *(_QWORD *)&extendedData.contents, extendedData.ignoreBodies, *(_QWORD *)&extendedData.characterProxyType, *(_QWORD *)&extendedData.phaseSelection, *(_QWORD *)&extendedData.collectInsideHits) )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  m_ignoreRefs = ignoreBodies->m_ignoreRefs;
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, ignoreBodies->m_ignoreRefs | 0xFFFFFFFE);
  Physics_Raycast((Physics_WorldId)v12, start, end, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs | 1);
    Physics_Raycast((Physics_WorldId)v12, start, end, &extendedData, ClosestResult);
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  if ( HasHit )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outHitPos);
    if ( ((LODWORD(outHitPos->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outHitPos->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outHitPos->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1003, ASSERT_TYPE_ASSERT, "(!IS_NAN( outHitPos[0] ) && !IS_NAN( outHitPos[1] ) && !IS_NAN( outHitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outHitPos[0] ) && !IS_NAN( outHitPos[1] ) && !IS_NAN( outHitPos[2] )") )
      __debugbreak();
    RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    if ( *(float *)&RaycastHitFraction > 0.0 )
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, outHitNormal);
    }
    else
    {
      v17 = LODWORD(start->v[0]);
      v28 = v6;
      v19 = v17;
      v18 = *(float *)&v17 - end->v[0];
      outHitNormal->v[0] = v18;
      v20 = start->v[1] - end->v[1];
      outHitNormal->v[1] = v20;
      v21 = start->v[2] - end->v[2];
      *(float *)&v19 = fsqrt((float)((float)(v18 * v18) + (float)(v20 * v20)) + (float)(v21 * v21));
      _XMM4 = v19;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      outHitNormal->v[0] = v18 * (float)(1.0 / *(float *)&_XMM0);
      outHitNormal->v[1] = v20 * (float)(1.0 / *(float *)&_XMM0);
      outHitNormal->v[2] = v21 * (float)(1.0 / *(float *)&_XMM0);
    }
    if ( ((LODWORD(outHitNormal->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outHitNormal->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outHitNormal->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1014, ASSERT_TYPE_ASSERT, "(!IS_NAN( outHitNormal[0] ) && !IS_NAN( outHitNormal[1] ) && !IS_NAN( outHitNormal[2] ))", (const char *)&queryFormat, "!IS_NAN( outHitNormal[0] ) && !IS_NAN( outHitNormal[1] ) && !IS_NAN( outHitNormal[2] )") )
      __debugbreak();
  }
  v25 = &colorGreen;
  if ( HasHit )
    v25 = &colorYellow;
  Ragdoll_AddDebugLine((Physics_WorldId)v12, start, end, v25);
  return HasHit;
}

/*
==============
Ragdoll_PreUpdate
==============
*/
void Ragdoll_PreUpdate(LocalClientNum_t clientNum)
{
  int v2; 
  cg_t *LocalClientGlobals; 
  Ragdoll *Ragdoll; 
  Ragdoll *v5; 
  int NumBones; 
  __int64 v7; 
  Bone *Bones; 
  __int64 v9; 
  unsigned __int8 *p_bulletForcesAppliedThisFrame; 
  __int64 v11; 
  __int64 v12; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2593, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE )") )
    __debugbreak();
  v2 = 1;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2594, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2595, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_RAGDOLL_UPDATE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_RAGDOLL_UPDATE )") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2598, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2599, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  if ( ragdoll_enable->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2609, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->frametime > 0 )
    {
      do
      {
        if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v2 - 1) >= 0x40 )
        {
          LODWORD(v12) = 64;
          LODWORD(v11) = v2 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        Ragdoll = Ragdoll_GetRagdoll(v2);
        if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( Ragdoll->allocated )
        {
          v5 = Ragdoll_GetRagdoll(v2);
          if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2628, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
            __debugbreak();
          if ( v5->localClientNum == clientNum )
          {
            ++v5->state.totalFrames;
            NumBones = Ragdoll_GetNumBones(v5);
            v7 = NumBones;
            if ( NumBones > 0 )
            {
              Bones = Ragdoll_GetBones(v5);
              if ( !Bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2644, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
                __debugbreak();
              v9 = v7;
              if ( (int)v7 > 0 )
              {
                p_bulletForcesAppliedThisFrame = &Bones->bulletForcesAppliedThisFrame;
                do
                {
                  *p_bulletForcesAppliedThisFrame = 0;
                  p_bulletForcesAppliedThisFrame += 48;
                  --v9;
                }
                while ( v9 );
              }
            }
            v5->state.radiusForceAppliedThisFrame = 0;
          }
        }
        ++v2;
      }
      while ( v2 <= 64 );
    }
  }
}

/*
==============
Ragdoll_SetAnimationParameters
==============
*/
char Ragdoll_SetAnimationParameters(DObj *obj, int ragdollHandle, bool ragdollActive)
{
  XAnimTree *Tree; 
  XAnimTree *v7; 
  unsigned __int16 outAnimIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 268, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  if ( !Tree )
    return 0;
  XAnimSetIntGameParameterByName(obj, scr_const.entity_ragdoll_handle, ragdollHandle);
  v7 = obj->tree;
  outAnimIndex = 0;
  if ( !XAnimFindPublicNode(v7->anims, scr_const.xanimRagdoll, &outAnimIndex) )
  {
    Com_PrintWarning(19, "ragdoll xanim node not found on entity %d with anim tree '%s'\n", (unsigned int)obj->entnum - 1, obj->tree->anims->debugName);
    return 0;
  }
  if ( ragdollActive )
    XAnimSetCompleteGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
  else
    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, 0.0, LINEAR);
  return 1;
}

/*
==============
Ragdoll_SetCallbacks
==============
*/
void Ragdoll_SetCallbacks(void (*enterRunning)(LocalClientNum_t, int, int), void (*updateRunning)(LocalClientNum_t, int, int), void (*exitRunning)(LocalClientNum_t, int, int))
{
  s_callbackEnterRunning = enterRunning;
  s_callbackUpdateRunning = updateRunning;
  s_callbackExitRunning = exitRunning;
}

/*
==============
Ragdoll_SetNewState
==============
*/
bool Ragdoll_SetNewState(Ragdoll *ragdoll, RagdollActivityState state)
{
  __int64 v2; 
  __int64 v4; 
  bool result; 
  bool (__fastcall *exitFunc)(Ragdoll *, RagdollActivityState, RagdollActivityState); 
  bool (__fastcall *enterFunc)(Ragdoll *, RagdollActivityState, RagdollActivityState); 
  __int64 v8; 
  __int64 v9; 

  v2 = state;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2805, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)v2 >= 6 )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2806, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "state doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v8, 6) )
      __debugbreak();
  }
  v4 = ragdoll->state.state;
  if ( (unsigned int)v4 >= 6 )
  {
    LODWORD(v9) = 6;
    LODWORD(v8) = ragdoll->state.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2810, ASSERT_TYPE_ASSERT, "(unsigned)( prevState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "prevState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (_DWORD)v4 == (_DWORD)v2 )
    return 1;
  exitFunc = s_ragdollStateEntries[v4].exitFunc;
  if ( exitFunc && !exitFunc(ragdoll, (RagdollActivityState)v4, (RagdollActivityState)v2) )
    return 0;
  ragdoll->state.state = v2;
  enterFunc = s_ragdollStateEntries[v2].enterFunc;
  if ( enterFunc && !enterFunc(ragdoll, (RagdollActivityState)v4, (RagdollActivityState)v2) )
  {
    if ( ragdoll->state.state == (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2838, ASSERT_TYPE_ASSERT, "(ragdoll->state.state != state)", (const char *)&queryFormat, "ragdoll->state.state != state") )
      __debugbreak();
    return 0;
  }
  result = 1;
  *(_QWORD *)&ragdoll->state.msec = 0i64;
  return result;
}

/*
==============
Ragdoll_SnapshotAnimOrientations
==============
*/
char Ragdoll_SnapshotAnimOrientations(Ragdoll *ragdoll)
{
  BoneOrientation *v2; 
  DObjAnimMat *v3; 
  cg_t *LocalClientGlobals; 
  __int64 NumBones; 
  Bone *Bones; 
  __int64 v8; 
  unsigned __int16 *p_animBone; 
  float *v10; 
  __int64 v11; 
  DObjAnimMat *v12; 
  float v13; 
  float v14; 
  vec3_t translation; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 741, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.numBones <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 742, ASSERT_TYPE_ASSERT, "(ragdoll->state.numBones > 0)", (const char *)&queryFormat, "ragdoll->state.numBones > 0") )
    __debugbreak();
  if ( ragdoll->state.state != RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 745, ASSERT_TYPE_ASSERT, "(ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE)", (const char *)&queryFormat, "ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_VELOCITY_CAPTURE") )
    __debugbreak();
  v2 = Ragdoll_GetAnimPoseBoneOrientationsForWrite(ragdoll);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 749, ASSERT_TYPE_ASSERT, "(snapshot)", (const char *)&queryFormat, "snapshot") )
    __debugbreak();
  v3 = Ragdoll_CalcPose(ragdoll);
  if ( v3 )
  {
    if ( v2 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
      NumBones = Ragdoll_GetNumBones(ragdoll);
      Bones = Ragdoll_GetBones(ragdoll);
      v8 = NumBones;
      if ( (int)NumBones > 0 )
      {
        p_animBone = &Bones->animBone;
        v10 = &v2->orientation.v[2];
        do
        {
          v10 += 7;
          v11 = *p_animBone;
          p_animBone += 24;
          v12 = &v3[v11];
          *(v10 - 9) = v12->quat.v[0];
          *(v10 - 8) = v12->quat.v[1];
          *(v10 - 7) = v12->quat.v[2];
          *(v10 - 6) = v12->quat.v[3];
          *(v10 - 12) = v12->trans.v[0] + LocalClientGlobals->refdef.viewOffset.v[0];
          *(v10 - 11) = v12->trans.v[1] + LocalClientGlobals->refdef.viewOffset.v[1];
          *(v10 - 10) = v12->trans.v[2] + LocalClientGlobals->refdef.viewOffset.v[2];
          --v8;
        }
        while ( v8 );
      }
      v13 = v3->trans.v[1];
      translation.v[0] = LocalClientGlobals->refdef.viewOffset.v[0] + v3->trans.v[0];
      v14 = v3->trans.v[2];
      translation.v[1] = v13 + LocalClientGlobals->refdef.viewOffset.v[1];
      translation.v[2] = v14 + LocalClientGlobals->refdef.viewOffset.v[2];
      Ragdoll_SetAnimPoseRootOrientation(ragdoll, &v3->quat, &translation);
    }
    return 1;
  }
  else
  {
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    return 0;
  }
}

/*
==============
Ragdoll_SnapshotPhysicsBoneTransforms
==============
*/
char Ragdoll_SnapshotPhysicsBoneTransforms(Ragdoll *ragdoll)
{
  BoneOrientation *v2; 
  unsigned int physicsInstanceId; 
  __int32 v4; 
  __int64 numBones; 
  unsigned int v6; 
  float *v7; 
  unsigned int m_serialAndIndex; 
  const dvar_t *v9; 
  __int64 localClientNum; 
  unsigned int entityNum; 
  double v12; 
  double v13; 
  double v14; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  hknpBodyId result; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2161, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v2 = Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite(ragdoll);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2165, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v18 = physicsInstanceId;
  v4 = 3 * ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2172, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  v6 = 0;
  if ( numBones > 0 )
  {
    v7 = &v2->origin.v[2];
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v4 > 7 )
      {
        LODWORD(v17) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v17) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v17) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v4 - 2) <= 5 )
      {
        LODWORD(v17) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v17) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
      {
        LODWORD(v17) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v4, physicsInstanceId, v6)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2183, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_GetRigidBodyTransform((const Physics_WorldId)v4, m_serialAndIndex, (vec3_t *)(v7 - 2), (vec4_t *)(v7 + 1));
      v9 = DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset;
      if ( !DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ragdoll_debugRagdollMoverOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled && !v6 )
      {
        localClientNum = ragdoll->localClientNum;
        entityNum = ragdoll->entityNum;
        v12 = *v7;
        v13 = *(v7 - 1);
        v14 = *(v7 - 2);
        if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount )
        {
          LODWORD(v17) = cg_t::ms_allocatedCount;
          LODWORD(v16) = ragdoll->localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !cg_t::ms_cgArray[localClientNum] )
        {
          LODWORD(v17) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v17) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v17) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v17) )
            __debugbreak();
        }
        Com_Printf(20, "[%d] RAGDOLL PHYSICS SNAPSHOT: Ragdoll %d Ragdoll Root Bone [%6.2f %6.2f %6.2f] \n", (unsigned int)cg_t::ms_cgArray[localClientNum]->time, entityNum, v14, v13, v12);
      }
      physicsInstanceId = v18;
      ++v6;
      v7 += 7;
      --numBones;
    }
    while ( numBones );
  }
  Ragdoll_SetNextPhysicsPoseValid(ragdoll);
  return 1;
}

/*
==============
Ragdoll_TightenConstraints
==============
*/
void Ragdoll_TightenConstraints(Ragdoll *ragdoll, float tightenAmount)
{
  Ragdoll *v2; 
  unsigned int physicsInstanceId; 
  int v4; 
  unsigned int v5; 
  unsigned int NumConstraints; 
  PhysicsConstraintLooseningResult *constraintTightening; 
  unsigned int m_value; 
  __int64 v9; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  v2 = ragdoll;
  if ( !ragdoll->state.needsTightening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2243, ASSERT_TYPE_ASSERT, "(ragdoll->state.needsTightening)", (const char *)&queryFormat, "ragdoll->state.needsTightening") )
    __debugbreak();
  physicsInstanceId = v2->state.physicsInstanceId;
  v4 = 3 * v2->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2250, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v5 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v4, physicsInstanceId);
  if ( NumConstraints )
  {
    constraintTightening = v2->state.constraintTightening;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v4 > 7 )
      {
        LODWORD(v9) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v9) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v9) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v4 - 2) <= 5 )
      {
        LODWORD(v9) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v9) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
      {
        LODWORD(v9) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v9) )
          __debugbreak();
      }
      m_value = HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v4, physicsInstanceId, v5)->m_value;
      if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2260, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      Physics_TightenConstraint((Physics_WorldId)v4, m_value, constraintTightening, 1.0 - tightenAmount);
      ++v5;
      ++constraintTightening;
    }
    while ( v5 < NumConstraints );
    v2 = ragdoll;
  }
  if ( tightenAmount >= 1.0 )
    v2->state.needsTightening = 0;
}

/*
==============
Ragdoll_Update
==============
*/
void Ragdoll_Update(float timeStep, int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  Profile_Begin(536);
  if ( ragdoll_enable->current.enabled && Ragdoll_IsAllocated(ragdollHandle) )
  {
    Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2737, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->localClientNum > (unsigned int)LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2739, ASSERT_TYPE_ASSERT, "(ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( !Ragdoll_IsRegistered(Ragdoll->localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2740, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( ragdoll->localClientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( ragdoll->localClientNum )") )
      __debugbreak();
    Ragdoll_Update(Ragdoll->localClientNum, timeStep, Ragdoll);
  }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_Update
==============
*/
void Ragdoll_Update(LocalClientNum_t clientNum, float timeStep, Ragdoll *ragdoll)
{
  cg_t *LocalClientGlobals; 
  int v6; 
  __int64 state; 
  int v8; 
  void (__fastcall *updateFunc)(Ragdoll *, float, const int); 
  __int64 v10; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2540, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2541, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2542, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  if ( ragdoll->state.state >= (unsigned int)NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v10) = ragdoll->state.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2543, ASSERT_TYPE_ASSERT, "(unsigned)( ragdoll->state.state ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "ragdoll->state.state doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v10, 6) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
  v6 = LocalClientGlobals->time - LocalClientGlobals->oldTime;
  if ( v6 < 0 )
    v6 = 0;
  if ( v6 || ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_JUST_LOADED && ragdoll->state.loadedState == RAGDOLL_ACTIVITY_STATE_RUNNING )
  {
    Sys_CheckAcquireLock(&s_ragdollUpdateLock);
    AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
    state = (unsigned int)ragdoll->state.state;
    do
    {
      v8 = state;
      updateFunc = s_ragdollStateEntries[(int)state].updateFunc;
      if ( updateFunc )
      {
        ((void (__fastcall *)(Ragdoll *, __int64, _QWORD))updateFunc)(ragdoll, state, (unsigned int)v6);
        state = (unsigned int)ragdoll->state.state;
      }
    }
    while ( v8 != (_DWORD)state );
    ++ragdoll->state.frames;
    ragdoll->state.msec += v6;
    ReleaseSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
    Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  }
}

/*
==============
Ragdoll_UpdateAll
==============
*/
void Ragdoll_UpdateAll(LocalClientNum_t clientNum, float timeStep)
{
  int v3; 
  Ragdoll *v4; 
  Ragdoll *Ragdoll; 
  __int64 v6; 
  __int64 v7; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2682, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE )") )
    __debugbreak();
  v3 = 1;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2683, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD )") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2685, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2686, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  Profile_Begin(536);
  if ( ragdoll_enable->current.enabled )
  {
    v4 = g_ragdollBodies;
    do
    {
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v3 - 1) >= 0x40 )
      {
        LODWORD(v7) = 64;
        LODWORD(v6) = v3 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v3);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v3 - 1) >= 0x40 )
        {
          LODWORD(v7) = 64;
          LODWORD(v6) = v3 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2704, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( v4->localClientNum == clientNum )
          Ragdoll_Update(clientNum, timeStep, v4);
      }
      ++v3;
      ++v4;
    }
    while ( v3 <= 64 );
  }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_UpdateAnimationRoot
==============
*/
void Ragdoll_UpdateAnimationRoot(Ragdoll *ragdoll)
{
  const DObj *v2; 
  float v3; 
  vec3_t trans; 
  vec4_t rot; 

  v2 = Ragdoll_BodyDObj(ragdoll);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2279, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  XAnimCalcAbsDelta(v2, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &trans);
  v3 = trans.v[1];
  ragdoll->state.animationRootRotation = rot;
  ragdoll->state.animationRootTranslation.v[0] = trans.v[0];
  ragdoll->state.animationRootTranslation.v[2] = trans.v[2];
  ragdoll->state.animationRootTranslation.v[1] = v3;
  QuatTrans_MultiplyEquals(&ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation, &ragdoll->state.initialAnimationRootRotation, &ragdoll->state.initialAnimationRootTranslation);
}

/*
==============
Ragdoll_UpdateCmd
==============
*/
void Ragdoll_UpdateCmd(const void *const cmdInfo)
{
  int v2; 
  float v3; 
  Ragdoll *Ragdoll; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2754, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2755, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD )") )
    __debugbreak();
  v2 = *((_DWORD *)cmdInfo + 2);
  v3 = *((float *)cmdInfo + 1);
  Profile_Begin(536);
  if ( ragdoll_enable->current.enabled && Ragdoll_IsAllocated(v2) )
  {
    Ragdoll = Ragdoll_GetRagdoll(v2);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2737, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->localClientNum > (unsigned int)LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2739, ASSERT_TYPE_ASSERT, "(ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( !Ragdoll_IsRegistered(Ragdoll->localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2740, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( ragdoll->localClientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( ragdoll->localClientNum )") )
      __debugbreak();
    Ragdoll_Update(Ragdoll->localClientNum, v3, Ragdoll);
  }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_UpdateContents
==============
*/
void Ragdoll_UpdateContents(Ragdoll *ragdoll)
{
  __int32 v2; 
  int NumRigidBodys; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  RagdollPenetrationState *p_penetrationState; 
  unsigned int physicsInstanceId; 
  unsigned int m_serialAndIndex; 
  int v11; 
  const BoneOrientation *LatestPhysicsPoseBoneOrientations; 
  const vec4_t *p_orientation; 
  float v14; 
  bool v15; 
  const vec4_t *v16; 
  __int64 v17; 
  hknpBodyId result; 
  vec3_t start; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1206, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1207, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1211, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  v2 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v2, ragdoll->state.physicsInstanceId);
  v4 = NumRigidBodys;
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1221, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v4 != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1222, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v5 = v4;
  v6 = 0;
  if ( (int)v4 > 0 )
  {
    v7 = 0i64;
    p_penetrationState = &ragdoll->state.bones[0].penetrationState;
    do
    {
      physicsInstanceId = ragdoll->state.physicsInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v2 > 7 )
      {
        LODWORD(v17) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v17) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v17) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v2 - 2) <= 5 )
      {
        LODWORD(v17) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v17) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v2 <= 1 )
      {
        LODWORD(v17) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v2, physicsInstanceId, v6)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1232, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
        __debugbreak();
      v11 = 256;
      if ( (*p_penetrationState & 0xFFFFFFFD) != 0 )
        v11 = 0;
      Physics_SetRigidBodyContents((Physics_WorldId)v2, m_serialAndIndex, v11, 1);
      LatestPhysicsPoseBoneOrientations = Ragdoll_GetLatestPhysicsPoseBoneOrientations(ragdoll);
      if ( !LatestPhysicsPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1241, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
        __debugbreak();
      start = LatestPhysicsPoseBoneOrientations[v7].origin;
      p_orientation = &LatestPhysicsPoseBoneOrientations[v7].orientation;
      if ( (float)((float)((float)((float)(p_orientation->v[0] * p_orientation->v[0]) + (float)(LatestPhysicsPoseBoneOrientations[v7].orientation.v[1] * LatestPhysicsPoseBoneOrientations[v7].orientation.v[1])) + (float)(LatestPhysicsPoseBoneOrientations[v7].orientation.v[2] * LatestPhysicsPoseBoneOrientations[v7].orientation.v[2])) + (float)(LatestPhysicsPoseBoneOrientations[v7].orientation.v[3] * LatestPhysicsPoseBoneOrientations[v7].orientation.v[3])) > 0.0 )
      {
        QuatToAxis(p_orientation, &axis);
        v14 = *((float *)p_penetrationState - 1);
        v15 = *p_penetrationState == RAGDOLL_PENETRATION_NO;
        end.v[0] = (float)(v14 * axis.m[0].v[0]) + start.v[0];
        end.v[1] = (float)(v14 * axis.m[0].v[1]) + start.v[1];
        v16 = &colorRed;
        if ( v15 )
          v16 = &colorBlue;
        end.v[2] = (float)(v14 * axis.m[0].v[2]) + start.v[2];
        Ragdoll_AddDebugLine((Physics_WorldId)v2, &start, &end, v16);
      }
      ++v6;
      p_penetrationState += 12;
      ++v7;
      --v5;
    }
    while ( v5 );
  }
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_UpdateLoosenedConstraintsForAnimationPose
==============
*/
void Ragdoll_UpdateLoosenedConstraintsForAnimationPose(Ragdoll *ragdoll)
{
  unsigned int physicsInstanceId; 
  __int32 v3; 
  unsigned int v4; 
  bool *p_twistChanged; 
  unsigned __int8 *v6; 
  unsigned int m_value; 
  const BoneOrientation *v8; 
  bool v9; 
  PhysicsConstraintLooseningResult *v10; 
  unsigned int NumConstraints; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 
  const BoneOrientation *AnimPoseBoneOrientations; 

  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2210, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v3 = 3 * ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2214, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v3, physicsInstanceId);
  v4 = 0;
  AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
  if ( NumConstraints )
  {
    p_twistChanged = &ragdoll->state.constraintTightening[0].twistChanged;
    v6 = &ragdoll->state.constraintBodyIndices[0][1];
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v3 > 7 )
      {
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v10) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
      {
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v10) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
      {
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v10) )
          __debugbreak();
      }
      m_value = HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v3, physicsInstanceId, v4)->m_value;
      if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2224, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      v8 = &AnimPoseBoneOrientations[*(v6 - 1)];
      Physics_UpdateLoosenedConstraint((Physics_WorldId)v3, m_value, &v8->orientation, &v8->origin, &AnimPoseBoneOrientations[*v6].orientation, &AnimPoseBoneOrientations[*v6].origin, (PhysicsConstraintLooseningResult *)(p_twistChanged - 2));
      v9 = *(p_twistChanged - 2) || *(p_twistChanged - 1) || *p_twistChanged || p_twistChanged[1];
      ragdoll->state.needsTightening |= v9;
      ++v4;
      p_twistChanged += 44;
      v6 += 2;
    }
    while ( v4 < NumConstraints );
  }
}

/*
==============
Ragdoll_UpdatePenetrationState
==============
*/
void Ragdoll_UpdatePenetrationState(Ragdoll *ragdoll)
{
  Bone *Bones; 
  __int64 numBones; 
  RagdollPenetrationState *p_penetrationState; 
  int v5; 
  bool *v6; 
  int *v7; 
  __int64 v8; 
  __int64 parentBone; 
  char v10; 
  __int64 v11; 
  int BoneDescendants; 
  __int64 v13; 
  __int64 v14; 
  int penetrationCandidateCount[4]; 
  int penetrationCandidateList[64]; 
  int descendantIndices[64]; 
  bool penetrationCandidateStates[64]; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1387, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1388, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( ragdoll->penetrating )
  {
    Bones = Ragdoll_GetBones(ragdoll);
    if ( !Bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1398, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    penetrationCandidateCount[0] = 0;
    Ragdoll_CalculatePenetratingBones(ragdoll, penetrationCandidateList, penetrationCandidateStates, penetrationCandidateCount);
    if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1188, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    numBones = ragdoll->state.numBones;
    if ( numBones > 0 )
    {
      p_penetrationState = &ragdoll->state.bones[0].penetrationState;
      do
      {
        *p_penetrationState = RAGDOLL_PENETRATION_NO;
        p_penetrationState += 12;
        --numBones;
      }
      while ( numBones );
    }
    if ( penetrationCandidateCount[0] > 0 )
    {
      v5 = 0;
      v6 = penetrationCandidateStates;
      v7 = penetrationCandidateList;
      do
      {
        v8 = *v7;
        parentBone = Bones[v8].parentBone;
        if ( Bones[parentBone].penetrationState != RAGDOLL_PENETRATION_YES_DESCENDANT )
        {
          v10 = -*v6;
          Bones[parentBone].penetrationSolveTargetBoneIdx = v8;
          Bones[parentBone].penetrationState = 2 - (v10 != 0);
        }
        v11 = 0i64;
        BoneDescendants = Ragdoll_FindBoneDescendants(ragdoll, parentBone, descendantIndices);
        v13 = BoneDescendants;
        if ( BoneDescendants > 0 )
        {
          do
          {
            v14 = descendantIndices[v11++];
            Bones[v14].penetrationState = RAGDOLL_PENETRATION_YES_DESCENDANT;
          }
          while ( v11 < v13 );
        }
        ++v5;
        ++v7;
        ++v6;
      }
      while ( v5 < penetrationCandidateCount[0] );
      Ragdoll_UpdateContents(ragdoll);
      Ragdoll_ApplyAntiPenetrationForces(ragdoll);
    }
    else
    {
      ragdoll->penetrating = 0;
      Ragdoll_UpdateContents(ragdoll);
    }
  }
}

/*
==============
Ragdoll_Update_AcquireReadLock
==============
*/
void Ragdoll_Update_AcquireReadLock(void)
{
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_Update_DowngradeWriteLockToReadLock
==============
*/
void Ragdoll_Update_DowngradeWriteLockToReadLock()
{
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_Update_InitRWLock
==============
*/
void Ragdoll_Update_InitRWLock(void)
{
  InitializeSRWLock((PSRWLOCK)&s_ragdollUpdateLock);
  s_ragdollUpdateLock.initialized = -1412623820;
  s_ragdollUpdateLock.acquireLock = 0;
  s_ragdollUpdateLock.writeThreadId = 0;
}

/*
==============
Ragdoll_Update_ReleaseReadLock
==============
*/
void Ragdoll_Update_ReleaseReadLock(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
}

/*
==============
Ragdoll_Update_ShutdownRWLock
==============
*/
void Ragdoll_Update_ShutdownRWLock(void)
{
  __int64 v0; 
  volatile int acquireLock; 

  s_ragdollUpdateLock.initialized = 0;
  if ( s_ragdollUpdateLock.acquireLock )
  {
    acquireLock = s_ragdollUpdateLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
      __debugbreak();
  }
  if ( s_ragdollUpdateLock.writeThreadId )
  {
    LODWORD(v0) = s_ragdollUpdateLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
Ragdoll_Update_UpgradeReadLockToWriteLock
==============
*/
char Ragdoll_Update_UpgradeReadLockToWriteLock()
{
  threadId_t CurrentThreadId; 
  int v2; 

  ReleaseSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  CurrentThreadId = Sys_GetCurrentThreadId();
  s_ragdollUpdateLock.writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId )
  {
    v2 = 0;
    LOBYTE(CurrentThreadId) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64);
    if ( (_BYTE)CurrentThreadId )
      __debugbreak();
  }
  return CurrentThreadId;
}

/*
==============
Ragdoll_ValidateBodyObj
==============
*/
char Ragdoll_ValidateBodyObj(Ragdoll *ragdoll)
{
  DObj *v2; 
  const char ***models; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 464, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v2 = Ragdoll_BodyDObj(ragdoll);
  if ( !v2 || !v2->numBones || !v2->numModels )
    return 0;
  models = (const char ***)v2->models;
  if ( !(*models)[78] )
  {
    Com_PrintWarning(20, "Ragdoll_ValidateBodyObj: %s doesn't have a ragdoll asset, yet is trying to use the ragdoll system\n", **models);
    return 0;
  }
  return 1;
}

