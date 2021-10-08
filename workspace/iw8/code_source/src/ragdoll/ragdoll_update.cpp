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
bool Ragdoll_Exit3PWait(Ragdoll *ragdoll, RagdollActivityState prevState, RagdollActivityState curState)
{
  bool result; 
  DObj *v8; 
  const DObj *v9; 
  __int64 v10; 
  const PhysicsAsset *v11; 
  int PhysicsAssetBodyCount; 
  __int64 v13; 
  int PhysicsAssetConstraintCount; 
  int v15; 
  const char *PhysicsAssetBodyName; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  signed __int64 v22; 
  char *v23; 
  unsigned int v24; 
  scr_string_t String; 
  scr_string_t v26; 
  bool v27; 
  int v28; 
  int v29; 
  int *v30; 
  __int16 v31; 
  __int64 v33; 
  unsigned __int8 inOutIndex[4]; 
  int bodyId1; 
  int bodyId2; 
  __int64 v37; 
  int *parentBoneIndices; 
  DObj *v39; 
  DObjPartBits *p_completePartBits; 
  int modelIndex; 
  __int64 v42; 
  _QWORD *v43; 
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
    LODWORD(v33) = curState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( curState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "curState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v33, 6) )
      __debugbreak();
  }
  if ( curState == RAGDOLL_ACTIVITY_STATE_DEAD )
    return 1;
  v8 = Ragdoll_BodyDObj(ragdoll);
  v39 = v8;
  v9 = v8;
  if ( v8 && v8->numModels )
  {
    v10 = (__int64)*v8->models;
    v43 = (_QWORD *)v10;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 356, ASSERT_TYPE_ASSERT, "(bodyModel)", (const char *)&queryFormat, "bodyModel") )
      __debugbreak();
    strncpy(ragdoll->xmodelAtCreate, *(const char **)v10, 0x100ui64);
    DObjGetHidePartBits(v9, &partBits);
    v11 = *(const PhysicsAsset **)(v10 + 624);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 365, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
      __debugbreak();
    PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v11);
    v13 = PhysicsAssetBodyCount;
    if ( PhysicsAssetBodyCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 369, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    __asm { vmovaps [rsp+228h+var_48], xmm6 }
    PhysicsAssetConstraintCount = Physics_GetPhysicsAssetConstraintCount(v11);
    ragdoll->state.numBones = v13;
    p_completePartBits = &ragdoll->state.completePartBits;
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&ragdoll->state.completePartBits);
    v15 = 0;
    v42 = v13;
    if ( (int)v13 <= 0 )
    {
LABEL_41:
      DObjCompleteHierarchyBits(v9, p_completePartBits);
      result = 1;
    }
    else
    {
      v37 = 0i64;
      parentBoneIndices = ragdoll->state.parentBoneIndices;
      _R13 = &ragdoll->state.bones[0].length;
      while ( 1 )
      {
        PhysicsAssetBodyName = Physics_GetPhysicsAssetBodyName(v11, v15);
        Physics_GetPhysicsAssetBodyBounds(v11, v15, &min, &max);
        __asm { vmovss  xmm6, dword ptr [rsp+228h+max] }
        if ( I_strnicmp(PhysicsAssetBodyName, "havok_", 6ui64) )
          break;
        v19 = PhysicsAssetBodyName + 6;
        v20 = -1i64;
        do
          ++v20;
        while ( v19[v20] );
        v21 = 0i64;
        if ( v20 )
        {
          v22 = v19 - str;
          do
          {
            v23 = &str[v21];
            v24 = str[v21++ + v22] - 65;
            *v23 = v23[v22] + (v24 < 0x1A ? 0x20 : 0);
          }
          while ( v21 != v20 );
        }
        str[v20] = 0;
        String = SL_FindString(str);
        v26 = String;
        if ( !String )
        {
          Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B8840, 724i64, str, *v43);
          goto LABEL_43;
        }
        inOutIndex[0] = -2;
        if ( DObjGetBoneIndexInternal_38(v9, String, inOutIndex, &modelIndex) )
        {
          v27 = ((0x80000000 >> (inOutIndex[0] & 0x1F)) & partBits.array[(unsigned __int64)inOutIndex[0] >> 5]) != 0;
          XAnimSetPartBit(p_completePartBits, inOutIndex[0]);
        }
        else
        {
          v27 = 1;
        }
        v28 = 0;
        v29 = 0;
        if ( PhysicsAssetConstraintCount > 0 )
        {
          while ( 1 )
          {
            Physics_GetPhysicsAssetConstraintBodyIds(v11, v29, &bodyId1, &bodyId2);
            if ( bodyId1 == v15 )
              break;
            if ( ++v29 >= PhysicsAssetConstraintCount )
              goto LABEL_40;
          }
          v28 = bodyId2;
        }
LABEL_40:
        v30 = parentBoneIndices;
        ++v15;
        v31 = inOutIndex[0];
        parentBoneIndices[1692] = v26;
        *((_DWORD *)_R13 - 2) = v28;
        *((_BYTE *)_R13 - 2) = v27;
        v9 = v39;
        __asm { vmovss  dword ptr [r13+0], xmm6 }
        *((_WORD *)_R13 - 2) = v31;
        _R13 += 12;
        *v30 = v28;
        parentBoneIndices = v30 + 1;
        if ( ++v37 >= v42 )
          goto LABEL_41;
      }
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B87E0, 723i64, "havok_", v11->name, PhysicsAssetBodyName);
LABEL_43:
      result = 0;
    }
    __asm { vmovaps xmm6, [rsp+228h+var_48] }
  }
  else
  {
    Com_PrintWarning(20, "Ragdoll_Exit3PWait: no obj 0x%p or it has no models - this is rarely a valid case and should only be raised if it happens >10%% of deaths\n", v8);
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    return 0;
  }
  return result;
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
  int v14; 
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
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+88h+outInvQuat]
          vmovss  xmm1, dword ptr [rsp+88h+outInvTrans+4]
        }
        _RDX = &ragdoll->state.initialAnimationRootTranslation;
        _RCX = &ragdoll->state.initialAnimationRootRotation;
        __asm
        {
          vmovups xmmword ptr [rcx], xmm0
          vmovss  xmm0, dword ptr [rsp+88h+outInvTrans]
          vmovss  dword ptr [rdx], xmm0
          vmovss  xmm0, dword ptr [rsp+88h+outInvTrans+8]
          vmovss  dword ptr [rdx+8], xmm0
          vmovss  dword ptr [rdx+4], xmm1
        }
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
      v14 = ragdoll->state.msec - ragdoll->state.velCaptureMsec;
      ragdoll->state.velCaptureMsec = gameFrameTimeMs + v14;
      if ( !(gameFrameTimeMs + v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 817, ASSERT_TYPE_ASSERT, "(ragdoll->state.velCaptureMsec != 0)", (const char *)&queryFormat, "ragdoll->state.velCaptureMsec != 0") )
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
  bool v11; 
  char v13; 
  unsigned __int8 v14; 
  bool v23; 
  bool v24; 
  DObj *v39; 
  int RagdollHandle; 
  __int64 result; 
  __int64 v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v11 = 0;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2012, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)prevState >= NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v47) = prevState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2013, ASSERT_TYPE_ASSERT, "(unsigned)( prevState ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "prevState doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v47, 6) )
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
    v14 = 0;
    goto LABEL_49;
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  *(double *)&_XMM0 = Physics_GetFixedMemoryPoolUsage((Physics_WorldId)(3 * ragdoll->localClientNum + 3));
  _RAX = ragdoll_fixedMemoryThreshold;
  __asm { vcomiss xmm0, dword ptr [rax+28h] }
  if ( !(v13 | v23) )
  {
    Com_PrintWarning(20, "Ragdoll_EnterRunning: memory usage too high to create ragdoll\n");
    goto LABEL_19;
  }
  if ( !Ragdoll_IsWorldCollisionReady(ragdoll) )
  {
    Com_PrintWarning(20, "Ragdoll_EnterRunning: world collision is not ready for ragdoll\n");
    goto LABEL_19;
  }
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2051, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX->renderingThirdPerson || _RBX->playerTeleported )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+699Ch]
      vmovss  xmm7, dword ptr [rbx+69A0h]
      vmovss  xmm8, dword ptr [rbx+69A4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+59680h]
      vmovss  xmm7, dword ptr [rbx+59684h]
      vmovss  xmm8, dword ptr [rbx+59688h]
    }
  }
  if ( ragdoll_poseController_use->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DETONATING|0x80) && ragdoll->poseControllerEnabledAtCreate && !ragdoll->hitLocation )
  {
    _RBX = Ragdoll_GetAnimPoseRootOrientation(ragdoll);
    v23 = _RBX == NULL;
    if ( !_RBX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2072, ASSERT_TYPE_ASSERT, "(rootOrientation)", (const char *)&queryFormat, "rootOrientation");
      v23 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm3, xmm0, xmm6
      vmovss  xmm1, dword ptr [rbx+4]
      vsubss  xmm2, xmm1, xmm7
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm4, xmm0, xmm8
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm5, xmm3, xmm0
    }
    _RAX = ragdoll_poseController_distance;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+28h]
      vmulss  xmm0, xmm1, xmm1
      vcomiss xmm0, xmm5
    }
    v11 = !v23;
    v39 = Ragdoll_BodyDObj(ragdoll);
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2087, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( v11 && !XAnimNotetrackExistsInTree(v39->tree, scr_const.stop_ragdoll_anim) )
      v11 = 0;
  }
  Ragdoll_CreatePhysics(ragdoll, 0);
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2097, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Ragdoll_ApplyInitialVelocities(ragdoll);
  if ( v11 )
  {
    RagdollPoseController_InitializeBoneStates(&ragdoll->state.poseController, ragdoll);
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    RagdollPoseController_SetWeight(&ragdoll->state.poseController, *(float *)&_XMM1);
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    RagdollPoseController_SetRootControlWeight(&ragdoll->state.poseController, *(float *)&_XMM1);
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
  v14 = 1;
LABEL_49:
  Sys_ProfEndNamedEvent();
  result = v14;
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
  return result;
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

void __fastcall Ragdoll_UpdateRunning(Ragdoll *ragdoll, double timeStep, const int gameFrameTimeMs)
{
  unsigned int v9; 
  int v10; 
  int RagdollHandle; 
  int v13; 
  int v16; 
  BoneOrientation *v17; 
  int NumBones; 
  __int64 v19; 
  char v32; 
  const BoneOrientation *AnimPoseBoneOrientations; 

  __asm
  {
    vmovaps [rsp+88h+var_58], xmm8
    vmovaps xmm8, xmm1
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2305, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Profile_Begin(539);
  if ( Ragdoll_IsWorldCollisionReady(ragdoll) )
  {
    v10 = 0;
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
    __asm { vmovaps xmm2, xmm8; deltaTime }
    RagdollPoseController_Update(&ragdoll->state.poseController, ragdoll, *(float *)&_XMM2);
    v13 = Ragdoll_GetRagdollHandle(ragdoll);
    if ( !Ragdoll_RequiresAnimationPose(v13) || Ragdoll_CalcPose(ragdoll) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovaps [rsp+88h+var_48], xmm7
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm7, xmm7, xmm7
      }
      if ( RagdollPoseController_IsActive(&ragdoll->state.poseController) )
      {
        Ragdoll_RequestNextAnimationPose(ragdoll);
        v16 = Ragdoll_GetRagdollHandle(ragdoll);
        if ( Ragdoll_RequiresAnimationPose(v16) )
        {
          Ragdoll_UpdateAnimationRoot(ragdoll);
          v17 = Ragdoll_GetAnimPoseBoneOrientationsForWrite(ragdoll);
          NumBones = Ragdoll_GetNumBones(ragdoll);
          v19 = NumBones;
          if ( NumBones > 0 )
          {
            _RBX = &v17->orientation.v[2];
            do
            {
              QuatTrans_MultiplyEquals(&v17[v10].orientation, &v17[v10].origin, &ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  xmm3, dword ptr [rbx]
                vmovss  xmm5, dword ptr [rbx-8]
                vmovss  xmm4, dword ptr [rbx+4]
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm0, xmm0
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm1, xmm2, xmm2
                vucomiss xmm1, xmm7
              }
              if ( !v32 )
              {
                __asm
                {
                  vdivss  xmm2, xmm6, xmm1
                  vmulss  xmm0, xmm5, xmm2
                  vmovss  dword ptr [rbx-8], xmm0
                  vmulss  xmm1, xmm2, dword ptr [rbx-4]
                  vmovss  dword ptr [rbx-4], xmm1
                  vmulss  xmm0, xmm2, dword ptr [rbx]
                  vmulss  xmm1, xmm2, xmm4
                  vmovss  dword ptr [rbx], xmm0
                  vmovss  dword ptr [rbx+4], xmm1
                }
              }
              ++v10;
              _RBX += 7;
              --v19;
            }
            while ( v19 );
          }
          if ( ragdoll_loosenConstraintsDuringAnimation->current.enabled )
          {
            Ragdoll_UpdateLoosenedConstraintsForAnimationPose(ragdoll);
            ragdoll->state.tighteningStartMsec = ragdoll->state.msec + 1;
            ragdoll->state.needsTightening &= ragdoll_tightenConstraintsAfterAnimation->current.color[0];
          }
          Ragdoll_Update_UpgradeReadLockToWriteLock();
          AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
          __asm { vmovaps xmm3, xmm8; deltaTime }
          RagdollPoseController_DriveToPose(&ragdoll->state.poseController, ragdoll, AnimPoseBoneOrientations, *(float *)&_XMM3);
          Ragdoll_Update_DowngradeWriteLockToReadLock();
        }
      }
      Ragdoll_SnapshotPhysicsBoneTransforms(ragdoll);
      Ragdoll_UpdatePenetrationState(ragdoll);
      if ( ragdoll->state.needsTightening && ragdoll->state.msec > ragdoll->state.tighteningStartMsec )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm3, xmm0, cs:__real@3a83126f
          vmovaps xmm2, xmm6; max
          vmovaps xmm1, xmm7; min
          vdivss  xmm0, xmm3, dword ptr [rax+28h]; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm1, xmm0; tightenAmount }
        Ragdoll_TightenConstraints(ragdoll, *(float *)&_XMM1);
      }
      __asm
      {
        vmovaps xmm6, [rsp+88h+var_38]
        vmovaps xmm7, [rsp+88h+var_48]
      }
    }
    else
    {
      Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
    }
  }
  else
  {
    v9 = Ragdoll_GetRagdollHandle(ragdoll);
    Com_Printf(20, "Ragdoll_UpdateRunning: world collision is not ready for ragdoll %i\n", v9);
    Ragdoll_SetNewState(ragdoll, RAGDOLL_ACTIVITY_STATE_DEAD);
  }
  __asm { vmovaps xmm8, [rsp+88h+var_58] }
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
  int v10; 
  TempThreadPriority tempPriority; 

  Sys_LockWrite(&s_ragdollDebugLineCS);
  Physics_AddDebugLine(worldId, start, end, color);
  if ( s_ragdollDebugLineCS.writeCount != 1 )
  {
    v10 = 1;
    writeCount = s_ragdollDebugLineCS.writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v10) )
      __debugbreak();
  }
  if ( s_ragdollDebugLineCS.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  s_ragdollDebugLineCS.writeThreadId = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_ragdollDebugLineCS.tempPriority.threadHandle
    vmovups xmmword ptr [rsp+78h+tempPriority.threadHandle], xmm0
  }
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

void __fastcall Ragdoll_AddUpdateWorkerCmds(LocalClientNum_t clientNum, double timeStep)
{
  int v5; 
  Ragdoll *v6; 
  Ragdoll *Ragdoll; 
  __int64 v9; 
  __int64 v10; 
  char data[4]; 
  int v13; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2765, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2766, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  if ( ragdoll_enable->current.enabled )
  {
    v5 = 1;
    v6 = g_ragdollBodies;
    do
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v5 - 1) >= 0x40 )
      {
        LODWORD(v10) = 64;
        LODWORD(v9) = v5 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v5);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v5 - 1) >= 0x40 )
        {
          LODWORD(v10) = 64;
          LODWORD(v9) = v5 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2785, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( v6->localClientNum == clientNum )
        {
          v13 = v5;
          __asm { vmovss  [rsp+0A8h+var_64], xmm6 }
          Sys_AddWorkerCmd(WRKCMD_RAGDOLL_UPDATE, data);
        }
      }
      ++v5;
      ++v6;
    }
    while ( v5 <= 64 );
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
Ragdoll_ApplyAntiPenetrationForces
==============
*/
void Ragdoll_ApplyAntiPenetrationForces(Ragdoll *ragdoll)
{
  Bone *bones; 
  __int32 v13; 
  int NumRigidBodys; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v24; 
  int penetrationSolveTargetBoneIdx; 
  __int64 v26; 
  unsigned int physicsInstanceId; 
  hknpBodyId v29; 
  int frames; 
  char v60; 
  char v61; 
  signed int v62; 
  unsigned int v74; 
  unsigned int m_serialAndIndex; 
  int v76; 
  hknpWorld *world; 
  __int64 v78; 
  hknpWorld *v100; 
  float fmt; 
  double v139; 
  __int64 v140; 
  __int64 v141; 
  double v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  unsigned int v149; 
  float mass[2]; 
  __int64 v151; 
  hknpBodyId result; 
  hknpBodyId v153; 
  vec3_t linVel; 
  int v155[4]; 
  hkVector4f point; 
  hkVector4f pointVel; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1269, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1270, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  bones = ragdoll->state.bones;
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1274, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  v13 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v13, ragdoll->state.physicsInstanceId);
  v15 = NumRigidBodys;
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1283, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v15 != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1284, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v16 = 0;
  v149 = 0;
  if ( (int)v15 > 0 )
  {
    __asm
    {
      vmovaps [rsp+170h+var_30], xmm6
      vmovaps [rsp+170h+var_40], xmm7
    }
    v17 = 0i64;
    __asm { vmovaps [rsp+170h+var_50], xmm8 }
    v18 = v15;
    __asm
    {
      vmovaps [rsp+170h+var_60], xmm9
      vmovaps [rsp+170h+var_70], xmm10
      vmovss  xmm10, cs:__real@80000000
      vmovaps [rsp+170h+var_80], xmm11
      vmovaps [rsp+170h+var_90], xmm12
      vmovss  xmm12, cs:__real@3d000000
      vmovaps [rsp+170h+var_A0], xmm13
      vmovaps [rsp+170h+var_B0], xmm14
      vmovss  xmm14, cs:__real@42000000
      vmovaps [rsp+170h+var_C0], xmm15
      vmovss  xmm15, cs:__real@3f800000
    }
    v151 = 0i64;
    __asm { vxorps  xmm13, xmm13, xmm13 }
    do
    {
      v24 = v17;
      if ( (unsigned int)(bones[v17].penetrationState - 1) <= 1 )
      {
        penetrationSolveTargetBoneIdx = bones[v17].penetrationSolveTargetBoneIdx;
        if ( (penetrationSolveTargetBoneIdx < 0 || penetrationSolveTargetBoneIdx >= (int)v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1299, ASSERT_TYPE_ASSERT, "(bone->penetrationSolveTargetBoneIdx >= 0 && bone->penetrationSolveTargetBoneIdx < numBodies)", (const char *)&queryFormat, "bone->penetrationSolveTargetBoneIdx >= 0 && bone->penetrationSolveTargetBoneIdx < numBodies") )
          __debugbreak();
        v26 = bones[v24].penetrationSolveTargetBoneIdx;
        _R15 = &bones[v26];
        if ( _R15->penetrationState != RAGDOLL_PENETRATION_YES_DESCENDANT && (v16 || (_DWORD)v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1301, ASSERT_TYPE_ASSERT, "(targetBone->penetrationState == RAGDOLL_PENETRATION_YES_DESCENDANT || (bodyIdx == 0 && bone->penetrationSolveTargetBoneIdx == 0))", (const char *)&queryFormat, "targetBone->penetrationState == RAGDOLL_PENETRATION_YES_DESCENDANT || (bodyIdx == 0 && bone->penetrationSolveTargetBoneIdx == 0)") )
          __debugbreak();
        physicsInstanceId = ragdoll->state.physicsInstanceId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v13 > 7 )
        {
          LODWORD(v140) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v140) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v140) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v13 - 2) <= 5 )
        {
          LODWORD(v140) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v140) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v13 <= 1 )
        {
          LODWORD(v140) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v140) )
            __debugbreak();
        }
        v29.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v13, physicsInstanceId, v16)->m_serialAndIndex;
        if ( (v29.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1305, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
          __debugbreak();
        __asm { vmovss  [rsp+170h+mass], xmm13 }
        Physics_GetRigidBodyMass((Physics_WorldId)v13, v29.m_serialAndIndex, mass);
        if ( v16 )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 390, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body PointVel when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v13 > 7 )
          {
            LODWORD(v140) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 391, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body PointVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
              __debugbreak();
          }
          if ( (v29.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          {
            LODWORD(v140) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 392, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body PointVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v140) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r15+14h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v146 & 0x7F800000) == 2139095040 )
            goto LABEL_148;
          __asm
          {
            vmovss  xmm0, dword ptr [r15+18h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v147 & 0x7F800000) == 2139095040 )
            goto LABEL_148;
          __asm
          {
            vmovss  xmm0, dword ptr [r15+1Ch]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v148 & 0x7F800000) == 2139095040 )
          {
LABEL_148:
            LODWORD(v140) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 393, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to Get Rigid Body PointVel in world %i with nan point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )", v140) )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm1, xmm12, dword ptr [r15+14h]
            vmulss  xmm0, xmm12, dword ptr [r15+18h]
            vmulss  xmm2, xmm12, dword ptr [r15+1Ch]
            vmovss  dword ptr [rbp+70h+point.m_quad], xmm1
            vmovss  dword ptr [rbp+70h+point.m_quad+4], xmm0
            vmovss  dword ptr [rbp+70h+point.m_quad+8], xmm2
            vmovss  dword ptr [rbp+70h+point.m_quad+0Ch], xmm13
          }
          HavokPhysics_GetRigidBodyPointVel((const Physics_WorldId)v13, v29, &point, &pointVel);
          __asm
          {
            vmulss  xmm4, xmm14, dword ptr [rbp+70h+pointVel.m_quad+4]
            vmulss  xmm8, xmm14, dword ptr [rbp+70h+pointVel.m_quad+8]
            vmulss  xmm9, xmm14, dword ptr [rbp+70h+pointVel.m_quad]
            vmulss  xmm0, xmm8, xmm8
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm1, xmm9, xmm9
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm7, xmm2, xmm2
            vcmpless xmm0, xmm7, xmm10
            vblendvps xmm0, xmm7, xmm15, xmm0
            vdivss  xmm6, xmm15, xmm0
            vmovss  xmm0, [rsp+170h+mass]
            vmulss  xmm5, xmm0, dword ptr [rax+28h]
          }
          _RAX = ragdoll_ejectionImpulseLimit;
          __asm
          {
            vmulss  xmm0, xmm6, xmm4
            vmulss  xmm3, xmm0, dword ptr [r15+24h]
            vmulss  xmm1, xmm6, xmm9
            vmulss  xmm2, xmm1, dword ptr [r15+20h]
            vmulss  xmm0, xmm6, xmm8
            vmovss  xmm6, dword ptr [rax+28h]
            vmulss  xmm1, xmm0, dword ptr [r15+28h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vmulss  xmm3, xmm2, xmm7
            vxorps  xmm7, xmm6, cs:__xmm@80000000800000008000000080000000
            vcomiss xmm7, xmm6
            vsubss  xmm8, xmm5, xmm3
          }
          if ( !(v60 | v61) )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+170h+var_140], xmm0
              vcvtss2sd xmm1, xmm7, xmm7
              vmovsd  [rsp+170h+var_148], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v139, v142) )
              __debugbreak();
          }
          __asm
          {
            vmaxss  xmm0, xmm7, xmm8
            vminss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rsp+170h+fmt], xmm1
          }
          Physics_ApplyImpulse((Physics_WorldId)v13, v29.m_serialAndIndex, &_R15->penetrationPos, &_R15->penetrationNormal, fmt);
          v16 = v149;
        }
        else
        {
          frames = ragdoll->state.frames;
          if ( frames <= ragdoll_ejectionFullBodyTryLength->current.integer || frames % ragdoll_ejectionFullBodyTryPeriod->current.integer == 1 )
          {
            _RAX = ragdoll_ejectionVelocityTargetRoot;
            __asm
            {
              vmovss  xmm2, dword ptr [rax+28h]
              vmulss  xmm0, xmm2, dword ptr [r15+20h]
              vmulss  xmm1, xmm2, dword ptr [r15+24h]
              vmovss  dword ptr [rsp+170h+linVel], xmm0
              vmulss  xmm0, xmm2, dword ptr [r15+28h]
              vmovss  dword ptr [rsp+170h+linVel+8], xmm0
              vmovss  dword ptr [rsp+170h+linVel+4], xmm1
            }
            Physics_SetRigidBodyLinVel((const Physics_WorldId)v13, v29.m_serialAndIndex, &linVel);
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v13 > 7 )
            {
              LODWORD(v140) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                __debugbreak();
              LODWORD(v141) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v141) )
                __debugbreak();
            }
            _RCX = HavokPhysics_GetConstWorld((Physics_WorldId)v13)->world;
            __asm
            {
              vmovups xmm1, xmmword ptr [rcx+0AC0h]
              vmulss  xmm6, xmm1, xmm14
              vshufps xmm0, xmm1, xmm1, 55h ; 'U'
              vmulss  xmm4, xmm0, xmm14
              vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
              vmulss  xmm5, xmm1, xmm14
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vcmpless xmm0, xmm3, xmm10
              vblendvps xmm0, xmm3, xmm15, xmm0
              vdivss  xmm1, xmm15, xmm0
              vmulss  xmm0, xmm6, dword ptr [r15+20h]
              vmulss  xmm9, xmm6, xmm1
              vmulss  xmm10, xmm4, xmm1
              vmulss  xmm11, xmm5, xmm1
              vmulss  xmm1, xmm4, dword ptr [r15+24h]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, dword ptr [r15+28h]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm13
            }
            if ( v60 | v61 )
            {
              v62 = 1;
              if ( (int)v15 > 1 )
              {
                do
                {
                  v74 = ragdoll->state.physicsInstanceId;
                  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                    __debugbreak();
                  if ( (unsigned int)v13 > 7 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                      __debugbreak();
                  }
                  if ( v74 == -1 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v140) )
                      __debugbreak();
                  }
                  if ( !g_physicsClientWorldsCreated && (unsigned int)(v13 - 2) <= 5 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v140) )
                      __debugbreak();
                  }
                  if ( !g_physicsServerWorldsCreated && (unsigned int)v13 <= 1 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v140) )
                      __debugbreak();
                  }
                  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v153, (const Physics_WorldId)v13, v74, v62)->m_serialAndIndex;
                  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
                    __debugbreak();
                  if ( (unsigned int)v13 > 7 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                      __debugbreak();
                  }
                  v76 = m_serialAndIndex & 0xFFFFFF;
                  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v140) )
                      __debugbreak();
                  }
                  if ( (unsigned int)v13 > 7 )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                      __debugbreak();
                  }
                  if ( v76 == 0xFFFFFF )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v140) )
                      __debugbreak();
                  }
                  world = HavokPhysics_GetConstWorld((Physics_WorldId)v13)->world;
                  if ( !world )
                  {
                    LODWORD(v140) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v140) )
                      __debugbreak();
                  }
                  v78 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
                  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v78 + 64));
                  __asm
                  {
                    vmovups xmm1, xmmword ptr [rax+40h]
                    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                    vmulss  xmm4, xmm1, xmm14
                    vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
                    vmulss  xmm5, xmm0, xmm14
                    vmulss  xmm6, xmm1, xmm14
                    vmulss  xmm1, xmm5, xmm10
                    vmulss  xmm0, xmm4, xmm9
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm6, xmm11
                    vaddss  xmm3, xmm2, xmm1
                    vcomiss xmm3, xmm13
                  }
                  if ( !(v60 | v61) )
                  {
                    __asm
                    {
                      vmulss  xmm0, xmm9, xmm3
                      vsubss  xmm7, xmm4, xmm0
                      vmulss  xmm0, xmm11, xmm3
                      vmulss  xmm1, xmm10, xmm3
                      vsubss  xmm6, xmm6, xmm0
                      vsubss  xmm8, xmm5, xmm1
                    }
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 333, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v13 > 7 )
                    {
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 334, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                        __debugbreak();
                    }
                    if ( v76 == 0xFFFFFF )
                    {
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 335, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v140) )
                        __debugbreak();
                    }
                    __asm { vmovss  [rsp+170h+var_130], xmm7 }
                    if ( (v143 & 0x7F800000) == 2139095040 )
                      goto LABEL_149;
                    __asm { vmovss  [rsp+170h+var_130], xmm8 }
                    if ( (v144 & 0x7F800000) == 2139095040 )
                      goto LABEL_149;
                    __asm { vmovss  [rsp+170h+var_130], xmm6 }
                    if ( (v145 & 0x7F800000) == 2139095040 )
                    {
LABEL_149:
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 336, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v140) )
                        __debugbreak();
                    }
                    __asm
                    {
                      vmulss  xmm0, xmm7, xmm12
                      vmovss  [rsp+170h+var_100], xmm0
                      vmulss  xmm0, xmm6, xmm12
                      vmulss  xmm1, xmm8, xmm12
                      vmovss  [rsp+170h+var_F8], xmm0
                      vmovss  [rsp+170h+var_FC], xmm1
                      vmovss  [rsp+170h+var_F4], xmm13
                    }
                    if ( (unsigned int)v13 > 7 )
                    {
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v140) )
                        __debugbreak();
                    }
                    if ( v76 == 0xFFFFFF )
                    {
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v140) )
                        __debugbreak();
                    }
                    v100 = HavokPhysics_GetMutableWorld((Physics_WorldId)v13)->world;
                    if ( !v100 )
                    {
                      LODWORD(v140) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v140) )
                        __debugbreak();
                    }
                    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))v100->setBodyLinearVelocity)(&v100->hknpWorldWriter, m_serialAndIndex, v155, 0i64);
                  }
                  ++v62;
                }
                while ( v62 < (int)v15 );
                v16 = v149;
              }
            }
            __asm { vmovss  xmm10, cs:__real@80000000 }
          }
        }
        bones = ragdoll->state.bones;
        v18 = v15;
      }
      ++v16;
      v17 = v151 + 1;
      v149 = v16;
      v151 = v17;
    }
    while ( v17 < v18 );
    __asm
    {
      vmovaps xmm15, [rsp+170h+var_C0]
      vmovaps xmm14, [rsp+170h+var_B0]
      vmovaps xmm13, [rsp+170h+var_A0]
      vmovaps xmm12, [rsp+170h+var_90]
      vmovaps xmm11, [rsp+170h+var_80]
      vmovaps xmm10, [rsp+170h+var_70]
      vmovaps xmm9, [rsp+170h+var_60]
      vmovaps xmm8, [rsp+170h+var_50]
      vmovaps xmm7, [rsp+170h+var_40]
      vmovaps xmm6, [rsp+170h+var_30]
    }
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
  int v14; 
  const LerpEntityStateActor *ActorState; 
  char v17; 
  signed int v18; 
  bool *p_hidden; 
  int v20; 
  scr_string_t *boneNames; 
  vec4_t *p_orientation; 
  unsigned int physicsInstanceId; 
  unsigned int m_serialAndIndex; 
  __int64 hitLocation; 
  const char *v30; 
  bool v31; 
  bool v32; 
  scr_string_t String; 
  scr_string_t *v34; 
  const char *v92; 
  char *fmt; 
  __int64 v106; 
  double v107; 
  __int64 v108; 
  double v109; 
  double v110; 
  double v111; 
  char v112; 
  int NumRigidBodys; 
  scr_string_t *v114; 
  vec4_t *quat; 
  const BoneOrientation *PrevAnimPoseBoneOrientations; 
  signed __int64 v117; 
  bool *v118; 
  hknpBodyId result; 
  vec3_t linVel; 
  vec3_t outAxisAngle; 
  vec3_t v122; 
  vec3_t outTransformedPoint; 
  vec3_t centerOfMassLocal; 

  _RDI = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1863, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( _RDI->state.physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1864, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  PrevAnimPoseBoneOrientations = Ragdoll_GetPrevAnimPoseBoneOrientations(_RDI);
  AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(_RDI);
  if ( _RDI == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1871, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !AnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1872, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  if ( !PrevAnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1873, ASSERT_TYPE_ASSERT, "(prevBoneOrientations)", (const char *)&queryFormat, "prevBoneOrientations") )
    __debugbreak();
  v14 = 3 * _RDI->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v14, _RDI->state.physicsInstanceId);
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1882, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( NumRigidBodys != _RDI->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1883, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  ActorState = Ragdoll_GetActorState(_RDI);
  _R13 = ActorState;
  if ( !ActorState || (v112 = 1, (ActorState->flags & 0x40) == 0) )
    v112 = 0;
  v17 = 0;
  v18 = 0;
  if ( NumRigidBodys > 0 )
  {
    v117 = (char *)PrevAnimPoseBoneOrientations - (char *)AnimPoseBoneOrientations;
    p_hidden = &_RDI->state.bones[0].hidden;
    v20 = NumRigidBodys;
    boneNames = _RDI->boneNames;
    __asm { vmovaps [rsp+1A0h+var_90], xmm12 }
    p_orientation = &AnimPoseBoneOrientations->orientation;
    __asm
    {
      vmovaps [rsp+1A0h+var_A0], xmm13
      vmovss  xmm13, cs:__real@3e4ccccc
      vmovaps [rsp+1A0h+var_B0], xmm14
      vmovss  xmm14, cs:__real@3f4ccccd
      vmovaps [rsp+1A0h+var_C0], xmm15
      vmovss  xmm15, cs:__real@447a0000
      vmovaps [rsp+1A0h+var_30], xmm6
      vmovaps [rsp+1A0h+var_40], xmm7
      vmovaps [rsp+1A0h+var_50], xmm8
      vmovaps [rsp+1A0h+var_60], xmm9
      vmovaps [rsp+1A0h+var_70], xmm10
      vmovaps [rsp+1A0h+var_80], xmm11
    }
    v114 = _RDI->boneNames;
    v118 = &_RDI->state.bones[0].hidden;
    quat = &AnimPoseBoneOrientations->orientation;
    __asm { vxorps  xmm12, xmm12, xmm12 }
    while ( *p_hidden )
    {
LABEL_71:
      p_orientation = (vec4_t *)((char *)p_orientation + 28);
      ++boneNames;
      p_hidden += 48;
      quat = p_orientation;
      ++v18;
      v114 = boneNames;
      v118 = p_hidden;
      if ( v18 >= v20 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+1A0h+var_C0]
          vmovaps xmm14, [rsp+1A0h+var_B0]
          vmovaps xmm13, [rsp+1A0h+var_A0]
          vmovaps xmm12, [rsp+1A0h+var_90]
          vmovaps xmm11, [rsp+1A0h+var_80]
          vmovaps xmm10, [rsp+1A0h+var_70]
          vmovaps xmm9, [rsp+1A0h+var_60]
          vmovaps xmm8, [rsp+1A0h+var_50]
          vmovaps xmm7, [rsp+1A0h+var_40]
          vmovaps xmm6, [rsp+1A0h+var_30]
        }
        goto LABEL_73;
      }
    }
    physicsInstanceId = _RDI->state.physicsInstanceId;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v14 > 7 )
    {
      LODWORD(v108) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v108) )
        __debugbreak();
    }
    if ( physicsInstanceId == -1 )
    {
      LODWORD(v108) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v108) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
    {
      LODWORD(v108) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v108) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= 1 )
    {
      LODWORD(v108) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v108) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v14, physicsInstanceId, v18)->m_serialAndIndex;
    if ( v112 || (hitLocation = _RDI->hitLocation, !(_DWORD)hitLocation) )
    {
      Physics_GetRigidBodyCenterOfMassLocal((Physics_WorldId)v14, m_serialAndIndex, &centerOfMassLocal);
      if ( !_RDI->state.velCaptureMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1840, ASSERT_TYPE_ASSERT, "(ragdoll->state.velCaptureMsec != 0)", (const char *)&queryFormat, "ragdoll->state.velCaptureMsec != 0") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+15Ch]
        vdivss  xmm6, xmm15, xmm0
      }
      QuatTrans_TransformPoint((vec4_t *)((char *)quat + v117), (const vec3_t *)((char *)quat + v117 - 12), &centerOfMassLocal, &outTransformedPoint);
      QuatTrans_TransformPoint(quat, (const vec3_t *)&quat[-1].xyz.v[1], &centerOfMassLocal, &v122);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+var_100]
        vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+outTransformedPoint]
        vmovss  xmm0, dword ptr [rbp+0A0h+var_100+4]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+outTransformedPoint+4]
        vmovss  xmm0, dword ptr [rbp+0A0h+var_100+8]
        vmovss  dword ptr [rbp+0A0h+linVel], xmm2
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+outTransformedPoint+8]
        vmovss  dword ptr [rbp+0A0h+linVel+4], xmm2
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+0A0h+linVel+8], xmm2
      }
      Ragdoll_EstimateRotationDeltaAxisAngle((vec4_t *)((char *)quat + v117), quat, &outAxisAngle);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+outAxisAngle]
        vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+outAxisAngle+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+0A0h+outAxisAngle+8]
        vmovss  dword ptr [rbp+0A0h+outAxisAngle], xmm1
        vmovss  dword ptr [rbp+0A0h+outAxisAngle+4], xmm0
        vmovss  dword ptr [rbp+0A0h+outAxisAngle+8], xmm2
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_OFFHAND_END|0x80) )
      {
        _RAX = ragdoll_initialLinSpeedCapMovingPlatform;
        if ( !_RDI->createdOnMovingPlatform )
          _RAX = ragdoll_initialLinSpeedCap;
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+0A0h+linVel+4]
          vmovss  xmm4, dword ptr [rbp+0A0h+linVel]
          vmovss  xmm6, dword ptr [rbp+0A0h+linVel+8]
          vmovss  xmm3, dword ptr [rax+28h]
        }
        v34 = v114;
        __asm
        {
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm1, xmm2, xmm1
          vmulss  xmm0, xmm3, xmm3
          vcomiss xmm1, xmm0
        }
        if ( _RDI->createdOnMovingPlatform )
        {
          __asm
          {
            vsqrtss xmm0, xmm1, xmm1
            vdivss  xmm1, xmm3, xmm0
            vmulss  xmm4, xmm4, xmm1
            vmulss  xmm5, xmm5, xmm1
            vmulss  xmm6, xmm6, xmm1
            vmovss  dword ptr [rbp+0A0h+linVel], xmm4
            vmovss  dword ptr [rbp+0A0h+linVel+4], xmm5
            vmovss  dword ptr [rbp+0A0h+linVel+8], xmm6
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+0A0h+linVel+8]
          vmovss  xmm5, dword ptr [rbp+0A0h+linVel+4]
          vmovss  xmm4, dword ptr [rbp+0A0h+linVel]
        }
        v34 = v114;
      }
      goto LABEL_65;
    }
    __asm
    {
      vmovss  dword ptr [rbp+0A0h+outAxisAngle], xmm12
      vmovss  dword ptr [rbp+0A0h+outAxisAngle+4], xmm12
      vmovss  dword ptr [rbp+0A0h+outAxisAngle+8], xmm12
    }
    if ( (unsigned int)hitLocation >= 0x16 )
    {
      LODWORD(v108) = 22;
      LODWORD(v106) = hitLocation;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 3000, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v106, v108) )
        __debugbreak();
    }
    v30 = s_ragdollHitLocToBoneMapping[hitLocation];
    v31 = 0;
    v32 = v30 == NULL;
    if ( v30 )
    {
      String = SL_FindString(v30);
      v34 = v114;
      v31 = *v114 < (unsigned int)String;
      v32 = *v114 == String;
      if ( *v114 == String )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+138h]
          vmovss  xmm1, dword ptr [rdi+13Ch]
          vmulss  xmm4, xmm0, xmm13
          vmovss  xmm0, dword ptr [rdi+140h]
          vmulss  xmm6, xmm0, xmm13
          vmulss  xmm5, xmm1, xmm13
        }
LABEL_55:
        __asm
        {
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm3, xmm12
          vmovss  dword ptr [rbp+0A0h+linVel+8], xmm6
        }
        v17 |= !v31 && !v32;
        __asm
        {
          vmovss  dword ptr [rbp+0A0h+linVel+4], xmm5
          vmovss  dword ptr [rbp+0A0h+linVel], xmm4
        }
LABEL_65:
        if ( _R13 && v112 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [r13+0Ch]
            vmovss  xmm2, dword ptr [r13+10h]
            vaddss  xmm0, xmm4, xmm3
            vmovss  xmm4, dword ptr [r13+14h]
            vaddss  xmm1, xmm5, xmm2
            vmovss  dword ptr [rbp+0A0h+linVel], xmm0
            vaddss  xmm0, xmm6, xmm4
            vmovss  dword ptr [rbp+0A0h+linVel+4], xmm1
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmovss  dword ptr [rbp+0A0h+linVel+8], xmm0
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm4, xmm3, xmm0
            vcomiss xmm4, xmm12
          }
          v17 |= v112 != 0;
        }
        Physics_SetRigidBodyLinAngVel((const Physics_WorldId)v14, m_serialAndIndex, &linVel, &outAxisAngle);
        if ( ragdoll_debugDisplayInitialPose->current.enabled )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+0A0h+outAxisAngle+8]
            vmovss  xmm7, dword ptr [rbp+0A0h+outAxisAngle+4]
            vmovss  xmm8, dword ptr [rbp+0A0h+outAxisAngle]
            vmovss  xmm9, dword ptr [rbp+0A0h+linVel+8]
            vmovss  xmm10, dword ptr [rbp+0A0h+linVel+4]
            vmovss  xmm11, dword ptr [rbp+0A0h+linVel]
            vcvtss2sd xmm6, xmm6, xmm6
            vcvtss2sd xmm7, xmm7, xmm7
            vcvtss2sd xmm8, xmm8, xmm8
            vcvtss2sd xmm9, xmm9, xmm9
            vcvtss2sd xmm10, xmm10, xmm10
            vcvtss2sd xmm11, xmm11, xmm11
          }
          v92 = SL_ConvertToString(*v34);
          __asm
          {
            vmovsd  [rsp+1A0h+var_160], xmm6
            vmovsd  [rsp+1A0h+var_168], xmm7
            vmovaps xmm3, xmm11
            vmovsd  [rsp+1A0h+var_170], xmm8
            vmovsd  [rsp+1A0h+var_178], xmm9
            vmovq   r9, xmm3
            vmovsd  [rsp+1A0h+fmt], xmm10
          }
          Com_Printf(20, "Body %s velocity lin:(%.2f %.2f %.2f) ang:(%.2f %.2f %.2f)\n", v92, *(double *)&_XMM3, *(double *)&fmt, v107, v109, v110, v111);
        }
        Ragdoll_SetDebugInitialVelocity(_RDI, v18, &linVel, v17);
        boneNames = v114;
        v20 = NumRigidBodys;
        p_hidden = v118;
        p_orientation = quat;
        goto LABEL_71;
      }
    }
    else
    {
      v34 = v114;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+1A0h+var_14C]
      vdivss  xmm1, xmm14, xmm0
      vmulss  xmm4, xmm1, dword ptr [rdi+138h]
      vmulss  xmm5, xmm1, dword ptr [rdi+13Ch]
      vmulss  xmm6, xmm1, dword ptr [rdi+140h]
    }
    goto LABEL_55;
  }
LABEL_73:
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
  int NumBones; 
  __int64 v11; 
  unsigned __int16 *p_animBone; 
  unsigned __int64 v13; 
  DObjAnimMat *v14; 
  __int64 v16; 
  __int64 v17; 
  DObjPartBits partBits; 

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
      _RDI = &partBits;
      __asm
      {
        vmovaps [rsp+0B8h+var_38], xmm6
        vpxor   xmm6, xmm6, xmm6
      }
      do
      {
        __asm { vmovdqu xmmword ptr [rdi], xmm6 }
        _RDI = (DObjPartBits *)((char *)_RDI + 16);
        ++v6;
      }
      while ( v6 < 2 );
      __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
      if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 87, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      NumBones = Ragdoll_GetNumBones(ragdoll);
      v11 = NumBones;
      if ( NumBones > 0 )
      {
        p_animBone = &ragdoll->state.bones[0].animBone;
        do
        {
          v13 = *p_animBone;
          if ( *p_animBone >> 15 )
          {
            partBits.array[7] |= 2u;
          }
          else
          {
            if ( (unsigned int)v13 >= 0x100 )
            {
              LODWORD(v17) = 256;
              LODWORD(v16) = *p_animBone;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
                __debugbreak();
            }
            partBits.array[v13 >> 5] |= 0x80000000 >> (v13 & 0x1F);
          }
          p_animBone += 24;
          --v11;
        }
        while ( v11 );
      }
    }
    DObjLock(v3);
    v14 = CG_Pose_CalcDObjPose(v5, v3, &partBits);
    DObjUnlock(v3);
    CG_UsedDObjCalcPose(v5);
    if ( v14 )
    {
      return v14;
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
  PhysicsAsset *v10; 
  int v11; 
  __int32 v12; 
  signed int v13; 
  __int64 v14; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *p_m_buckets; 
  unsigned __int64 *p_m_currentNumItems; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *v17; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v19; 
  unsigned int v21; 
  int v29; 
  __int64 v30; 
  int Ref; 
  hknpBodyId *RigidBodyID; 
  unsigned __int64 m_serialAndIndex; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v34; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *mp_next; 
  ntl::internal::pool_allocator_freelist<16> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v37; 
  PhysicsAsset *v38; 
  signed int PhysicsAssetConstraintCount; 
  unsigned __int64 v40; 
  int v41; 
  unsigned __int64 v42; 
  unsigned __int8 *v43; 
  unsigned int m_value; 
  unsigned __int64 v45; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  __int64 v49; 
  int v50; 
  unsigned __int64 v51; 
  unsigned __int64 *v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  unsigned int v57; 
  __int64 v58; 
  bool *p_hidden; 
  hknpBodyId *v60; 
  bool v61; 
  signed int v62; 
  __int64 v63; 
  bool *v64; 
  const BoneOrientation *v65; 
  unsigned int v66; 
  char v67; 
  Ragdoll *v68; 
  unsigned int v69; 
  int v70; 
  char v71; 
  bool v72; 
  unsigned int v73; 
  unsigned int v76; 
  bool v77; 
  hknpWorld *world; 
  _DWORD *v79; 
  hkStringPtr *m_data; 
  const char *v81; 
  char v82; 
  const char *v83; 
  bool v84; 
  signed int v135; 
  signed int v139; 
  hknpWorld *v140; 
  unsigned int *v141; 
  const hkTransformf *v142; 
  const hkTransformf *v143; 
  char v158; 
  scr_string_t *boneNames; 
  const char *v176; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  vec3_t *position; 
  vec3_t *positiona; 
  vec3_t *positionb; 
  vec3_t *positionc; 
  vec3_t *positiond; 
  vec4_t *orientationAsQuat; 
  vec4_t *orientationAsQuata; 
  double add; 
  double tryStartDeactivated; 
  double neverDeactivate; 
  unsigned int instanceId; 
  unsigned int bodyIdA; 
  unsigned int bodyIdB; 
  unsigned __int64 v205; 
  int PhysicsAssetBodyCount; 
  Ragdoll *v207; 
  hknpBodyId result; 
  int ragdollHandle; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> v210; 
  PhysicsAsset *physicsAsset; 
  const XModel *v212; 
  const BoneOrientation *AnimPoseBoneOrientations; 
  DObj *obj; 
  hkVector4f v215; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *v216; 
  char v217; 
  hkVector4f pivotInAOut; 
  vec3_t v219; 
  vec4_t v220; 
  hkVector4f pivotInBOut; 
  hkVector4f v222; 

  v207 = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1538, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  obj = Ragdoll_BodyDObj(ragdoll);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1542, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1545, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
    __debugbreak();
  v212 = *obj->models;
  v10 = v212->physicsAsset;
  physicsAsset = v10;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1550, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  AnimPoseBoneOrientations = Ragdoll_GetAnimPoseBoneOrientations(ragdoll);
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1555, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !AnimPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1556, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v10);
  v11 = PhysicsAssetBodyCount;
  if ( PhysicsAssetBodyCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1562, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( PhysicsAssetBodyCount != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1563, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v12 = 3 * ragdoll->localClientNum + 3;
  bodyIdB = v12;
  ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 41, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(position) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 42, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", position, 64) )
      __debugbreak();
  }
  v13 = ragdollHandle - 1;
  v14 = ragdollHandle - 1;
  bodyIdA = ragdollHandle - 1;
  p_m_buckets = &g_ragdollBodyIdToIndexMap[v14].m_buckets;
  p_m_currentNumItems = &g_ragdollBodyIdToIndexMap[v14].m_currentNumItems;
  v205 = (unsigned __int64)p_m_buckets;
  if ( p_m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)p_m_currentNumItems )
  {
    v17 = &g_ragdollBodyIdToIndexMap[v14].m_buckets;
    do
    {
      for ( i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v17->m_data[0].m_listHead.m_sentinel.mp_next; i != v17; g_ragdollBodyIdToIndexMap[v14].m_freelist.m_head.mp_next = v19 )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v19 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)i;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        i = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)i->m_data[0].m_listHead.m_sentinel.mp_next;
        v19->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)g_ragdollBodyIdToIndexMap[v14].m_freelist.m_head;
      }
      v17->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v17;
      v17 = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)((char *)v17 + 8);
    }
    while ( v17 != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)p_m_currentNumItems );
    v12 = bodyIdB;
    v13 = bodyIdA;
    p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v205;
    v11 = PhysicsAssetBodyCount;
  }
  _RAX = AnimPoseBoneOrientations;
  v21 = 0;
  *p_m_currentNumItems = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rbp+0E0h+var_E0], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rbp+0E0h+var_E0+4], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rbp+0E0h+var_E0+8], xmm0
    vmovss  xmm1, dword ptr [rax+0Ch]
    vmovss  dword ptr [rbp+0E0h+var_D0], xmm1
    vmovss  xmm0, dword ptr [rax+10h]
    vmovss  dword ptr [rbp+0E0h+var_D0+4], xmm0
    vmovss  xmm1, dword ptr [rax+14h]
    vmovss  dword ptr [rbp+0E0h+var_D0+8], xmm1
    vmovss  xmm0, dword ptr [rax+18h]
    vmovss  dword ptr [rbp+0E0h+var_D0+0Ch], xmm0
  }
  instanceId = Physics_CreateInstance((Physics_WorldId)v12);
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1581, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (v13 < 0 || (unsigned int)v13 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "const unsigned char __cdecl truncate_cast_impl<const unsigned char,int>(int)", "unsigned", (unsigned __int8)v13, "signed", v13) )
    __debugbreak();
  v29 = 0;
  if ( v11 > 0 )
  {
    v30 = 0i64;
    do
    {
      if ( (v29 < 0 || (unsigned int)v29 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "const unsigned short __cdecl truncate_cast_impl<const unsigned short,int>(int)", "unsigned", (unsigned __int16)v29, "signed", v30) )
        __debugbreak();
      Ref = Physics_MakeRef(Physics_RefSystem_Ragdoll, Physics_RelationshipSystem_None, v13, v29);
      if ( !Physics_InstantiateAssetBody(instanceId, (Physics_WorldId)v12, physicsAsset, v29, Ref, &v219, &v220, 1, 1, 0, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1588, ASSERT_TYPE_ASSERT, "(Physics_InstantiateAssetBody( instanceId, authWorldId, ragdollAsset, bodyId, ref, basePosition, baseQuat, true, true, false, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, false ))", (const char *)&queryFormat, "Physics_InstantiateAssetBody( instanceId, authWorldId, ragdollAsset, bodyId, ref, basePosition, baseQuat, true, true, false, -1, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, false )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v12, instanceId, v29);
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      PhysicsSVFX_RegisterBody((Physics_WorldId)v12, RigidBodyID->m_serialAndIndex, v207->localClientNum);
      pivotInAOut.m_quad.m128_u64[0] = __PAIR64__(v29, m_serialAndIndex);
      if ( m_serialAndIndex % 0x61 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v34 = &p_m_buckets->m_data[m_serialAndIndex % 0x61];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v34->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v34->m_listHead.m_sentinel.mp_next == v34 )
      {
LABEL_91:
        p_m_freelist = &g_ragdollBodyIdToIndexMap[v14].m_freelist;
        if ( !p_m_freelist->m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<16> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x40ui64) )
          __debugbreak();
        v37 = p_m_freelist->m_head.mp_next;
        v21 = 0;
        v216 = v34;
        v215.m_quad.m128_u64[0] = (unsigned __int64)v37;
        v217 = 1;
        p_m_freelist->m_head.mp_next = v37->mp_next;
        v37[1].mp_next = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)pivotInAOut.m_quad.m128_f32;
        v37->mp_next = NULL;
        v37->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v34->m_listHead.m_sentinel.mp_next;
        v34->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v37;
        ++g_ragdollBodyIdToIndexMap[v14].m_currentNumItems;
        v215.m_quad.m128_u64[1] = v205;
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v205;
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
          if ( mp_next == v34 )
            goto LABEL_91;
        }
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v205;
        v21 = 0;
        v215.m_quad.m128_u64[0] = 0i64;
        v215.m_quad.m128_u64[1] = v205;
        v216 = NULL;
        v217 = 0;
      }
      LOBYTE(v13) = bodyIdA;
      ++v29;
      ++v30;
    }
    while ( v29 < PhysicsAssetBodyCount );
  }
  v38 = physicsAsset;
  PhysicsAssetConstraintCount = Physics_GetPhysicsAssetConstraintCount(physicsAsset);
  v40 = PhysicsAssetConstraintCount;
  result.m_serialAndIndex = PhysicsAssetConstraintCount;
  if ( PhysicsAssetConstraintCount > 32 )
  {
    LODWORD(position) = PhysicsAssetConstraintCount;
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441B98E0, 725i64, 32i64, v38->name, position);
  }
  v41 = Physics_MakeRef(Physics_RefSystem_Ragdoll, Physics_RelationshipSystem_None, v13, 0);
  pivotInAOut.m_quad.m128_u64[0] = v40;
  if ( (int)v40 > 0 )
  {
    v42 = v40;
    v43 = &v207->state.constraintBodyIndices[0][1];
    do
    {
      if ( !Physics_InstantiateAssetConstraint(instanceId, (Physics_WorldId)v12, physicsAsset, v21, v41, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1610, ASSERT_TYPE_ASSERT, "(Physics_InstantiateAssetConstraint( instanceId, authWorldId, ragdollAsset, constraintId, instanceRef, true ))", (const char *)&queryFormat, "Physics_InstantiateAssetConstraint( instanceId, authWorldId, ragdollAsset, constraintId, instanceRef, true )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      m_value = HavokPhysics_GetConstraintID(&v210, (const Physics_WorldId)v12, instanceId, v21)->m_value;
      if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1614, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      Physics_GetConstraintBodyIds((Physics_WorldId)v12, m_value, &bodyIdA, &bodyIdB);
      v45 = bodyIdA % 0x61ui64;
      if ( v45 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v46 = &p_m_buckets->m_data[v45];
      v47 = (unsigned __int64)v46->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v46->m_listHead.m_sentinel.mp_next == v46 )
      {
LABEL_138:
        v47 = 0i64;
      }
      else
      {
        while ( 1 )
        {
          if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *(_DWORD *)(v47 + 8) == bodyIdA )
            break;
          v47 = *(_QWORD *)v47;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v47 == v46 )
            goto LABEL_138;
        }
        if ( v47 )
        {
          v216 = v46;
          v48 = v205;
          v215.m_quad.m128_u64[1] = v205;
          v215.m_quad.m128_u64[0] = v47;
          goto LABEL_143;
        }
      }
      v48 = v205;
      v215.m_quad.m128_u64[1] = v205;
      v215.m_quad.m128_u64[0] = 0i64;
      v216 = NULL;
LABEL_143:
      if ( !v47 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1620, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v49 = v47 + 12;
      if ( !v47 )
        v49 = 4i64;
      v50 = *(_DWORD *)v49;
      if ( (*(int *)v49 < 0 || (unsigned int)v50 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v50, "signed", v50) )
        __debugbreak();
      *(v43 - 1) = v50;
      v51 = bodyIdB % 0x61ui64;
      if ( v51 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v52 = (unsigned __int64 *)(v48 + 8 * v51);
      v53 = *v52;
      if ( (unsigned __int64 *)*v52 == v52 )
      {
LABEL_163:
        v53 = 0i64;
LABEL_166:
        p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v205;
        v215.m_quad.m128_u64[1] = v205;
        v215.m_quad.m128_u64[0] = 0i64;
        v216 = NULL;
        goto LABEL_167;
      }
      while ( 1 )
      {
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( *(_DWORD *)(v53 + 8) == bodyIdB )
          break;
        v53 = *(_QWORD *)v53;
        if ( (unsigned __int64 *)v53 == v52 )
          goto LABEL_163;
      }
      if ( !v53 )
        goto LABEL_166;
      v216 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> > *)v52;
      p_m_buckets = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,int> >,97> *)v205;
      v215.m_quad.m128_u64[1] = v205;
      v215.m_quad.m128_u64[0] = v53;
LABEL_167:
      if ( !v53 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1624, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v54 = v53 + 12;
      if ( !v53 )
        v54 = 4i64;
      v55 = *(_DWORD *)v54;
      if ( (*(int *)v54 < 0 || (unsigned int)v55 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v55, "signed", v55) )
        __debugbreak();
      *v43 = v55;
      ++v21;
      v43 += 2;
      --v42;
    }
    while ( v42 );
  }
  v56 = PhysicsAssetBodyCount;
  v205 = PhysicsAssetBodyCount;
  v57 = 0;
  if ( PhysicsAssetBodyCount > 0 )
  {
    v58 = PhysicsAssetBodyCount;
    p_hidden = &v207->state.bones[0].hidden;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      v60 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&v210, (const Physics_WorldId)v12, instanceId, v57);
      v61 = !*p_hidden;
      bodyIdB = v60->m_serialAndIndex;
      if ( !v61 )
        Physics_RemoveRigidBodiesFromWorld((Physics_WorldId)v12, &bodyIdB, 1, 0);
      ++v57;
      p_hidden += 48;
      --v58;
    }
    while ( v58 );
    v56 = PhysicsAssetBodyCount;
  }
  v62 = 0;
  if ( v56 > 0 )
  {
    v63 = 0i64;
    v64 = &v207->state.bones[0].hidden;
    do
    {
      v65 = &AnimPoseBoneOrientations[v62];
      if ( !*v64 )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(orientationAsQuat) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(orientationAsQuat) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(orientationAsQuat) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(orientationAsQuat) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
            __debugbreak();
        }
        v66 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&v210, (const Physics_WorldId)v12, instanceId, v62)->m_serialAndIndex;
        v67 = !useLoadStateForActivation || v207->state.loadedPhysicsActivationStates[v63];
        Physics_WarpRigidBodyTo((const Physics_WorldId)v12, v66, &v65->origin, &v65->orientation, 0, v67);
        Physics_ManifoldCallback_RegisterBody((Physics_WorldId)v12, v66, Ragdoll_ManifoldHandler);
      }
      ++v62;
      ++v63;
      v64 += 48;
    }
    while ( v63 < v56 );
  }
  s_ragdollUpdateLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_ragdollUpdateLock);
  Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  Sys_CheckAcquireLock(&s_ragdollUpdateLock);
  AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
  v68 = v207;
  if ( v207->state.physicsInstanceId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1673, ASSERT_TYPE_ASSERT, "(ragdoll->state.physicsInstanceId == 0xFFFFFFFF)", (const char *)&queryFormat, "ragdoll->state.physicsInstanceId == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v69 = instanceId;
  v70 = ragdollHandle;
  v68->state.physicsInstanceId = instanceId;
  __asm { vmovaps xmmword ptr [rsp+1E0h+var_38+8], xmm6 }
  Ragdoll_MarkPenetrating(v70);
  v71 = 0;
  v72 = (signed __int64)pivotInAOut.m_quad.m128_u64[0] <= 0;
  v73 = 0;
  v68->state.needsTightening = 0;
  v68->state.tighteningStartMsec = 0;
  if ( !v72 )
  {
    __asm { vmovss  xmm6, cs:__real@42652ee0 }
    _RDI = &v68->state.constraintTightening[0].planeChanged;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", orientationAsQuat) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(orientationAsQuat) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", orientationAsQuat) )
          __debugbreak();
      }
      v76 = HavokPhysics_GetConstraintID(&v210, (const Physics_WorldId)v12, instanceId, v73)->m_value;
      if ( v76 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1693, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      Physics_LoosenConstraint((Physics_WorldId)v12, v76, (PhysicsConstraintLooseningResult *)(_RDI - 1));
      v77 = *(_RDI - 1) || *_RDI || _RDI[1] || _RDI[2];
      v68->state.needsTightening |= v77;
      if ( ragdoll_debugInitialPose->current.enabled )
      {
        world = HavokPhysics_GetMutableWorld((Physics_WorldId)v12)->world;
        HavokPhysics_GetConstraintID((hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)&ragdollHandle, (const Physics_WorldId)v12, instanceId, v73);
        v79 = (_DWORD *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getConstraint)(&world->hknpWorldReader, (unsigned int)ragdollHandle);
        m_data = world->m_bodyManager.m_bodyNames.m_data;
        v81 = (const char *)((unsigned __int64)m_data[*v79 & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
        v82 = *(_RDI - 1);
        v83 = (const char *)((unsigned __int64)m_data[v79[1] & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
        v84 = v82 || *_RDI || _RDI[1] || _RDI[2];
        v71 |= v84;
        if ( v84 )
        {
          Com_PrintWarning(20, "Ragdoll %s for model %s - bone pose exceeds constraint angle limits between %s and %s and is being loosened - either loosen the ragdoll constraint to match or update the death anim listed below to not break the constraint\n", physicsAsset->name, v212->name, v81, v83);
          v82 = *(_RDI - 1);
        }
        if ( v82 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+17h]
            vmovss  xmm2, dword ptr [rdi+3]
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm0, xmm2, xmm6
            vcvtss2sd xmm2, xmm0, xmm0
            vcvtss2sd xmm3, xmm1, xmm1
            vmovq   r8, xmm2
            vmovq   r9, xmm3
          }
          Com_PrintWarning(20, " - cone limits  loosened from %f to %f\n", _R8, _R9);
        }
        if ( *_RDI )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1Fh]
            vmovss  xmm2, dword ptr [rdi+1Bh]
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm0, xmm2, xmm6
            vcvtss2sd xmm5, xmm1, xmm1
            vmovss  xmm1, dword ptr [rdi+0Bh]
            vmulss  xmm2, xmm1, xmm6
            vcvtss2sd xmm4, xmm0, xmm0
            vmovss  xmm0, dword ptr [rdi+7]
            vcvtss2sd xmm3, xmm2, xmm2
            vmulss  xmm1, xmm0, xmm6
            vcvtss2sd xmm2, xmm1, xmm1
            vmovsd  [rsp+1E0h+position], xmm5
            vmovq   r8, xmm2
            vmovq   r9, xmm3
            vmovsd  [rsp+1E0h+fmt], xmm4
          }
          Com_PrintWarning(20, " - plane limits loosened from %f,%f to %f,%f\n", _R8, _R9, fmt, positiona);
        }
        if ( _RDI[1] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+27h]
            vmovss  xmm2, dword ptr [rdi+23h]
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm0, xmm2, xmm6
            vcvtss2sd xmm5, xmm1, xmm1
            vmovss  xmm1, dword ptr [rdi+13h]
            vmulss  xmm2, xmm1, xmm6
            vcvtss2sd xmm4, xmm0, xmm0
            vmovss  xmm0, dword ptr [rdi+0Fh]
            vcvtss2sd xmm3, xmm2, xmm2
            vmulss  xmm1, xmm0, xmm6
            vcvtss2sd xmm2, xmm1, xmm1
            vmovsd  [rsp+1E0h+position], xmm5
            vmovq   r8, xmm2
            vmovq   r9, xmm3
            vmovsd  [rsp+1E0h+fmt], xmm4
          }
          Com_PrintWarning(20, " - twist limits loosened from %f,%f to %f,%f\n", _R8, _R9, fmta, positionb);
        }
        if ( _RDI[2] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1Bh]
            vmovss  xmm2, dword ptr [rdi+17h]
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm0, xmm2, xmm6
            vcvtss2sd xmm5, xmm1, xmm1
            vmovss  xmm1, dword ptr [rdi+7]
            vmulss  xmm2, xmm1, xmm6
            vcvtss2sd xmm4, xmm0, xmm0
            vmovss  xmm0, dword ptr [rdi+3]
            vcvtss2sd xmm3, xmm2, xmm2
            vmulss  xmm1, xmm0, xmm6
            vcvtss2sd xmm2, xmm1, xmm1
            vmovsd  [rsp+1E0h+position], xmm5
            vmovq   r8, xmm2
            vmovq   r9, xmm3
            vmovsd  [rsp+1E0h+fmt], xmm4
          }
          Com_PrintWarning(20, " - angle limits loosened from %f,%f to %f,%f\n", _R8, _R9, fmtb, positionc);
        }
      }
      ++v73;
      _RDI += 44;
      --pivotInAOut.m_quad.m128_u64[0];
    }
    while ( pivotInAOut.m_quad.m128_u64[0] );
    v56 = PhysicsAssetBodyCount;
    v69 = instanceId;
  }
  v135 = result.m_serialAndIndex;
  __asm
  {
    vmovaps [rsp+1E0h+var_48+8], xmm7
    vmovaps [rsp+1E0h+var_58+8], xmm8
    vmovaps [rsp+1E0h+var_68+8], xmm9
  }
  if ( (int)result.m_serialAndIndex > 0 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@42000000
      vmovss  xmm9, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    v139 = 0;
    do
    {
      v140 = HavokPhysics_GetMutableWorld((Physics_WorldId)v12)->world;
      HavokPhysics_GetConstraintID((hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)&result, (const Physics_WorldId)v12, v69, v139);
      v141 = (unsigned int *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v140->getConstraint)(&v140->hknpWorldReader, result.m_serialAndIndex);
      hkpConstraintDataUtils::getConstraintPivots(*((const hkpConstraintData **)v141 + 1), &pivotInAOut, &pivotInBOut);
      v142 = (const hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v140->getBodyTransform)(&v140->hknpWorldReader, *v141);
      hkVector4f::setTransformedPos(&v222, v142, &pivotInAOut);
      v143 = (const hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v140->getBodyTransform)(&v140->hknpWorldReader, v141[1]);
      hkVector4f::setTransformedPos(&v215, v143, &pivotInBOut);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0E0h+var_B0.m_quad]
        vsubps  xmm1, xmm0, xmmword ptr [rbp+0E0h+var_110.m_quad]
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vrsqrtps xmm4, xmm6
        vmulps  xmm0, xmm4, xmm6
        vmulps  xmm2, xmm0, xmm4
        vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vsubps  xmm3, xmm1, xmm2
        vmulps  xmm2, xmm3, xmm0
        vmulps  xmm1, xmm2, xmm6
        vcmpleps xmm5, xmm6, xmm7
        vandnps xmm4, xmm5, xmm1
        vmulss  xmm0, xmm4, xmm8
        vcomiss xmm0, xmm9
      }
      if ( !(v158 | v61) && ragdoll_debugInitialPose->current.enabled )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+1E0h+fmt], xmm0
        }
        Com_PrintWarning(20, "Ragdoll %s for model %s - bone pose doesn't match ragdoll by %.2f units for joint between %s and %s - check the ragdoll asset first, then check the anim tree printed below\n", physicsAsset->name, v212->name, *(double *)&fmtc, (const char *)((unsigned __int64)v140->m_bodyManager.m_bodyNames.m_data[*v141 & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), (const char *)((unsigned __int64)v140->m_bodyManager.m_bodyNames.m_data[v141[1] & 0xFFFFFF].m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
        v71 = 1;
      }
      v69 = instanceId;
      ++v139;
    }
    while ( v139 < v135 );
    v56 = v205;
  }
  if ( ragdoll_debugDisplayInitialPose->current.enabled )
  {
    Com_Printf(20, "Ragdoll %s for model %s\n", physicsAsset->name, v212->name);
    if ( v56 > 0 )
    {
      boneNames = v207->boneNames;
      __asm { vmovaps [rsp+1E0h+var_78+8], xmm10 }
      _RBX = &AnimPoseBoneOrientations->orientation.v[2];
      __asm
      {
        vmovaps [rsp+1E0h+var_88+8], xmm11
        vmovaps [rsp+1E0h+var_98+8], xmm12
      }
      do
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+4]
          vmovss  xmm7, dword ptr [rbx]
          vmovss  xmm8, dword ptr [rbx-4]
          vmovss  xmm9, dword ptr [rbx-8]
          vmovss  xmm10, dword ptr [rbx-0Ch]
          vmovss  xmm11, dword ptr [rbx-10h]
          vmovss  xmm12, dword ptr [rbx-14h]
          vcvtss2sd xmm6, xmm6, xmm6
          vcvtss2sd xmm7, xmm7, xmm7
          vcvtss2sd xmm8, xmm8, xmm8
          vcvtss2sd xmm9, xmm9, xmm9
          vcvtss2sd xmm10, xmm10, xmm10
          vcvtss2sd xmm11, xmm11, xmm11
          vcvtss2sd xmm12, xmm12, xmm12
        }
        v176 = SL_ConvertToString(*boneNames);
        __asm
        {
          vmovsd  [rsp+1E0h+neverDeactivate], xmm6
          vmovsd  qword ptr [rsp+1E0h+tryStartDeactivated], xmm7
          vmovsd  qword ptr [rsp+1E0h+add], xmm8
          vmovaps xmm3, xmm12
          vmovsd  [rsp+1E0h+orientationAsQuat], xmm9
          vmovsd  [rsp+1E0h+position], xmm10
          vmovq   r9, xmm3
          vmovsd  [rsp+1E0h+fmt], xmm11
        }
        Com_Printf(20, "Body %s at pos (%.2f %.2f %.2f) rot (%.2f %.2f %.2f %.2f)\n", v176, *(double *)&_XMM3, *(double *)&fmtd, *(double *)&positiond, *(double *)&orientationAsQuata, add, tryStartDeactivated, neverDeactivate);
        ++boneNames;
        _RBX += 7;
        --v56;
      }
      while ( v56 );
      __asm
      {
        vmovaps xmm12, [rsp+1E0h+var_98+8]
        vmovaps xmm11, [rsp+1E0h+var_88+8]
        vmovaps xmm10, [rsp+1E0h+var_78+8]
      }
    }
    goto LABEL_291;
  }
  if ( v71 && ragdoll_debugInitialPose->current.enabled )
LABEL_291:
    DObjDisplayAnim(obj, "Ragdoll anim tree: ");
  __asm
  {
    vmovaps xmm9, [rsp+1E0h+var_68+8]
    vmovaps xmm8, [rsp+1E0h+var_58+8]
    vmovaps xmm7, [rsp+1E0h+var_48+8]
    vmovaps xmm6, xmmword ptr [rsp+1E0h+var_38+8]
  }
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
  bool result; 
  unsigned int physicsInstanceId; 
  int NumRigidBodys; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  scr_string_t *boneNames; 
  bool *p_hidden; 
  const char *v21; 
  __int64 v25; 
  __int64 v26; 

  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2853, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  if ( (unsigned int)ragdollHandle >= 0x40 )
  {
    LODWORD(v26) = 64;
    LODWORD(v25) = ragdollHandle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2854, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle ) < (unsigned)( 64 )", "ragdollHandle doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2855, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2856, ASSERT_TYPE_ASSERT, "(outInstanceId)", (const char *)&queryFormat, "outInstanceId") )
    __debugbreak();
  if ( !outBodyIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2857, ASSERT_TYPE_ASSERT, "(outBodyIdx)", (const char *)&queryFormat, "outBodyIdx") )
    __debugbreak();
  _R15 = outBodyRadius;
  if ( !outBodyRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2858, ASSERT_TYPE_ASSERT, "(outBodyRadius)", (const char *)&queryFormat, "outBodyRadius") )
    __debugbreak();
  _RDI = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2861, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( worldId == PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE || worldId == PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE )
  {
    physicsInstanceId = _RDI->state.physicsInstanceId;
    NumRigidBodys = Physics_GetNumRigidBodys(worldId, physicsInstanceId);
    v15 = NumRigidBodys;
    if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2880, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    if ( (_DWORD)v15 != _RDI->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2881, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
      __debugbreak();
    v16 = 0;
    v17 = -1;
    if ( (int)v15 <= 0 )
      goto LABEL_40;
    v18 = 0i64;
    boneNames = _RDI->boneNames;
    p_hidden = &_RDI->state.bones[0].hidden;
    while ( *p_hidden || *boneNames != boneName )
    {
      ++v16;
      ++v18;
      ++boneNames;
      p_hidden += 48;
      if ( v18 >= v15 )
        goto LABEL_40;
    }
    v17 = v16;
    if ( v16 == -1 )
    {
LABEL_40:
      v21 = SL_ConvertToString(boneName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2899, ASSERT_TYPE_ASSERT, "(hitBodyIdx != -1)", "%s\n\tFailed to find body for bone name '%s' in Ragdoll_GetBodyIdxForBoneName()", "hitBodyIdx != -1", v21) )
        __debugbreak();
    }
    *outInstanceId = physicsInstanceId;
    *outBodyIdx = v17;
    result = 1;
    _RCX = 6i64 * v17;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rcx*8+0FB8h]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [r15], xmm1
    }
  }
  else
  {
    LODWORD(v26) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2874, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tPhysicsWorld %i not supported in Ragdoll_GetBodyIdxForBoneName()", "0", v26) )
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
  unsigned int RigidBodyID; 
  char v18; 
  char v19; 
  __int64 v21; 
  vec3_t linVel; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_26;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v21) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v21, 64) )
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
  if ( (int)Physics_GetNumRigidBodys((const Physics_WorldId)v5, physicsInstanceId) > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2664, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v5, physicsInstanceId, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2667, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyLinVel((const Physics_WorldId)v5, RigidBodyID, &linVel);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+linVel]
    vmovss  xmm1, dword ptr [rsp+68h+linVel+4]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+68h+linVel+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm0
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm4, xmm1
    vcvtsi2ss xmm2, xmm2, edi
    vdivss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@3e9ae148
  }
  return v18 | v19;
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
  __int16 gridIdx; 
  vec2_t position; 

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
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rsp+68h+position]
      vmovd   xmm2, dword ptr [rsp+68h+position+4]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vmovd   xmm2, [rsp+68h+var_28]
      vmovss  dword ptr [rsp+68h+position], xmm1
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+68h+position+4], xmm1
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  [rsp+68h+var_28], xmm1
    }
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
  int v5; 
  LocalClientNum_t LocalClientForWorld; 
  unsigned int EntityNum; 
  int v8; 
  centity_t *Entity; 
  unsigned int v10; 
  int v11; 
  centity_t *v12; 
  int ActiveRagdollHandle; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  _QWORD *v17; 
  _QWORD *v18; 
  __int64 v19; 
  unsigned int v20; 
  Ragdoll *v21; 
  const Ragdoll *Ragdoll; 
  Physics_ManifoldStatus status; 
  Physics_ManifoldCache *p_manifoldCache; 
  char v26; 
  __int64 v31; 
  __int64 v32; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1458, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Ref = Physics_GetRef(data->worldId, data->signaledBodyId);
  if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1462, ASSERT_TYPE_ASSERT, "(Physics_GetRefSystem( bodyRefRagdoll ) == Physics_RefSystem_Ragdoll)", (const char *)&queryFormat, "Physics_GetRefSystem( bodyRefRagdoll ) == Physics_RefSystem_Ragdoll") )
    __debugbreak();
  v5 = Physics_GetRef(data->worldId, data->otherBodyId);
  if ( Physics_GetRefSystem(v5) == Physics_RefSystem_CEntities )
  {
    LocalClientForWorld = Physics_GetLocalClientForWorld(data->worldId);
    EntityNum = Physics_GetEntityNum(v5);
    v8 = EntityNum;
    if ( EntityNum >= 0x800 )
    {
      LODWORD(v31) = EntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( bodyOtherEntNum ) < (unsigned)( ( 2048 ) )", "bodyOtherEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v31, 2048) )
        __debugbreak();
    }
    Entity = CG_GetEntity(LocalClientForWorld, v8);
    if ( Entity->nextState.eType == ET_SCRIPTMOVER && (Entity->nextState.staticState.vehiclePlayer.playerIndex & 0x20) != 0 )
    {
      v10 = Physics_GetEntityNum(Ref);
      v11 = v10;
      if ( v10 >= 0x800 )
      {
        LODWORD(v32) = 2048;
        LODWORD(v31) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1477, ASSERT_TYPE_ASSERT, "(unsigned)( bodyRagdollEntNum ) < (unsigned)( ( 2048 ) )", "bodyRagdollEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      v12 = CG_GetEntity(LocalClientForWorld, v11);
      ActiveRagdollHandle = CG_Pose_GetActiveRagdollHandle(&v12->pose);
      if ( !ActiveRagdollHandle )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1480, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 30, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
      }
      if ( (unsigned int)(ActiveRagdollHandle - 1) >= 0x40 )
      {
        LODWORD(v32) = 64;
        LODWORD(v31) = ActiveRagdollHandle - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 31, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      v14 = ActiveRagdollHandle - 1;
      v15 = (data->signaledBodyId * (unsigned __int128)0x51D07EAE2F8151D1ui64) >> 64;
      v16 = data->signaledBodyId - 97 * ((v15 + (((unsigned __int64)data->signaledBodyId - v15) >> 1)) >> 6);
      if ( v16 >= 0x61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v17 = (_QWORD *)((char *)&g_ragdollBodyIdToIndexMap[0].m_buckets + 1824 * v14 + 8 * v16);
      v18 = (_QWORD *)*v17;
      if ( (_QWORD *)*v17 == v17 )
      {
LABEL_33:
        v18 = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *((_DWORD *)v18 + 2) == data->signaledBodyId )
            break;
          v18 = (_QWORD *)*v18;
          if ( v18 == v17 )
            goto LABEL_33;
        }
      }
      if ( !v18 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1484, ASSERT_TYPE_ASSERT, "(it != bodyIdToIndexMap.end())", (const char *)&queryFormat, "it != bodyIdToIndexMap.end()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
      v19 = (__int64)v18 + 12;
      if ( !v18 )
        v19 = 4i64;
      v20 = *(_DWORD *)v19;
      if ( !ActiveRagdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(ActiveRagdollHandle - 1) >= 0x40 )
      {
        LODWORD(v32) = 64;
        LODWORD(v31) = ActiveRagdollHandle - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      v21 = &g_ragdollBodies[v14];
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( v20 >= v21->state.numBones )
      {
        Ragdoll = Ragdoll_GetRagdoll(ActiveRagdollHandle);
        LODWORD(v32) = Ragdoll_GetNumBones(Ragdoll);
        LODWORD(v31) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1486, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( Ragdoll_GetNumBones( Ragdoll_GetRagdoll( ragdollHandle ) ) )", "boneIndex doesn't index Ragdoll_GetNumBones( Ragdoll_GetRagdoll( ragdollHandle ) )\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      status = data->status;
      if ( status == All || status == NormalSpace || status == PhaseSpace )
      {
        p_manifoldCache = &data->manifoldCache;
        if ( p_manifoldCache->m_cache )
        {
          __asm { vmovaps [rsp+78h+var_38], xmm6 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverFriction, "physics_ragdollMoverFriction");
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcomiss xmm0, xmm6
          }
          if ( !v26 )
          {
            __asm { vmovaps xmm1, xmm0; friction }
            Physics_ManifoldCache_SetFriction(p_manifoldCache, *(const float *)&_XMM1);
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverStaticFrictionExtra, "physics_ragdollMoverStaticFrictionExtra");
          __asm { vcomiss xmm0, xmm6 }
          if ( !v26 )
          {
            __asm { vmovaps xmm1, xmm0; staticFrictionExtra }
            Physics_ManifoldCache_SetStaticFrictionExtra(p_manifoldCache, *(const float *)&_XMM1);
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_ragdollMoverRestitution, "physics_ragdollMoverRestitution");
          __asm
          {
            vcomiss xmm0, xmm6
            vmovaps xmm6, [rsp+78h+var_38]
          }
          if ( !v26 )
          {
            __asm { vmovaps xmm1, xmm0; restitution }
            Physics_ManifoldCache_SetRestitution(p_manifoldCache, *(const float *)&_XMM1);
          }
        }
        Ragdoll_SetContactWithMover(ActiveRagdollHandle, v8, v20);
      }
      else if ( status == Count )
      {
        Ragdoll_ResetContactWithMover(ActiveRagdollHandle, v8, v20);
      }
      else
      {
        LODWORD(v31) = data->status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1525, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected manifold status %d", v31) )
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
  int v16; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  int m_ignoreRefs; 
  bool HasHit; 
  Physics_QueryPointExtendedData extendedData; 
  int v26; 
  int v27; 
  int v28; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RDI = location;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 909, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 910, ASSERT_TYPE_ASSERT, "(!IS_NAN( location[0] ) && !IS_NAN( location[1] ) && !IS_NAN( location[2] ))", (const char *)&queryFormat, "!IS_NAN( location[0] ) && !IS_NAN( location[1] ) && !IS_NAN( location[2] )") )
      __debugbreak();
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  localClientNum = ragdoll->localClientNum;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+88h+extendedData.collisionBuffer], xmm6
  }
  v16 = 3 * localClientNum + 3;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.phaseSelection = All;
  extendedData.contents = 8389905;
  extendedData.ignoreBodies = ignoreBodies;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v16);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 922, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", *(_QWORD *)&extendedData.contents, extendedData.ignoreBodies, *(_QWORD *)&extendedData.characterProxyType, *(_QWORD *)&extendedData.phaseSelection) )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  m_ignoreRefs = ignoreBodies->m_ignoreRefs;
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, ignoreBodies->m_ignoreRefs | 0xFFFFFFFE);
  __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
  Physics_QueryPoint((Physics_WorldId)v16, _RDI, *(float *)&_XMM2, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs | 1);
    __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
    Physics_QueryPoint((Physics_WorldId)v16, _RDI, *(float *)&_XMM2, &extendedData, ClosestResult);
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  if ( HasHit )
  {
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(ClosestResult, 0, outHitPos);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(ClosestResult, 0, outHitNormal);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return HasHit;
}

/*
==============
Ragdoll_PenetrationTrace
==============
*/
_BOOL8 Ragdoll_PenetrationTrace(Ragdoll *ragdoll, const vec3_t *start, const vec3_t *end, vec3_t *outHitPos, vec3_t *outHitNormal, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  LocalClientNum_t localClientNum; 
  int v20; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  int m_ignoreRefs; 
  bool HasHit; 
  char v26; 
  char v27; 
  const vec4_t *v51; 
  Physics_RaycastExtendedData extendedData; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int ignoreBodiesa; 
  int ignoreBodiesb; 
  int ignoreBodiesc; 
  int ignoreBodiesd; 
  int ignoreBodiese; 
  int ignoreBodiesf; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R14 = outHitPos;
  _RSI = end;
  _RBP = start;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 965, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 966, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", (const char *)&queryFormat, "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0A8h+arg_0], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 967, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", (const char *)&queryFormat, "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
      __debugbreak();
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  localClientNum = ragdoll->localClientNum;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+0A8h+extendedData.collisionBuffer], xmm6
  }
  v20 = 3 * localClientNum + 3;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8389905;
  extendedData.ignoreBodies = ignoreBodies;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v20);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 979, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", *(_QWORD *)&extendedData.contents, extendedData.ignoreBodies, *(_QWORD *)&extendedData.characterProxyType, *(_QWORD *)&extendedData.phaseSelection, *(_QWORD *)&extendedData.collectInsideHits) )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  m_ignoreRefs = ignoreBodies->m_ignoreRefs;
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, ignoreBodies->m_ignoreRefs | 0xFFFFFFFE);
  Physics_Raycast((Physics_WorldId)v20, _RBP, _RSI, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs | 1);
    Physics_Raycast((Physics_WorldId)v20, _RBP, _RSI, &extendedData, ClosestResult);
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(ignoreBodies, m_ignoreRefs);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  if ( HasHit )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, _R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiesa & 0x7F800000) == 2139095040 )
      goto LABEL_43;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiesb & 0x7F800000) == 2139095040 )
      goto LABEL_43;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiesc & 0x7F800000) == 2139095040 )
    {
LABEL_43:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1003, ASSERT_TYPE_ASSERT, "(!IS_NAN( outHitPos[0] ) && !IS_NAN( outHitPos[1] ) && !IS_NAN( outHitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outHitPos[0] ) && !IS_NAN( outHitPos[1] ) && !IS_NAN( outHitPos[2] )") )
        __debugbreak();
    }
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    __asm { vcomiss xmm0, xmm6 }
    _RDI = outHitNormal;
    if ( v26 | v27 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovaps [rsp+0A8h+var_48], xmm7
        vsubss  xmm7, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rdi], xmm7
        vmovss  xmm0, dword ptr [rbp+4]
        vsubss  xmm6, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rdi+4], xmm6
        vmovss  xmm0, dword ptr [rbp+8]
        vsubss  xmm5, xmm0, dword ptr [rsi+8]
        vmulss  xmm2, xmm7, xmm7
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm7, xmm2
        vmovaps xmm7, [rsp+0A8h+var_48]
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm1, xmm6, xmm2
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, outHitNormal);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiesd & 0x7F800000) == 2139095040 )
      goto LABEL_44;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiese & 0x7F800000) == 2139095040 )
      goto LABEL_44;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+0A8h+ignoreBodies], xmm0
    }
    if ( (ignoreBodiesf & 0x7F800000) == 2139095040 )
    {
LABEL_44:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1014, ASSERT_TYPE_ASSERT, "(!IS_NAN( outHitNormal[0] ) && !IS_NAN( outHitNormal[1] ) && !IS_NAN( outHitNormal[2] ))", (const char *)&queryFormat, "!IS_NAN( outHitNormal[0] ) && !IS_NAN( outHitNormal[1] ) && !IS_NAN( outHitNormal[2] )") )
        __debugbreak();
    }
  }
  v51 = &colorGreen;
  if ( HasHit )
    v51 = &colorYellow;
  Ragdoll_AddDebugLine((Physics_WorldId)v20, _RBP, _RSI, v51);
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
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
  XAnimTree *v8; 
  float fmt; 
  float fmta; 
  float goalTime; 
  float v15; 
  unsigned __int16 outAnimIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 268, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  if ( !Tree )
    return 0;
  XAnimSetIntGameParameterByName(obj, scr_const.entity_ragdoll_handle, ragdollHandle);
  v8 = obj->tree;
  outAnimIndex = 0;
  if ( !XAnimFindPublicNode(v8->anims, scr_const.xanimRagdoll, &outAnimIndex) )
  {
    Com_PrintWarning(19, "ragdoll xanim node not found on entity %d with anim tree '%s'\n", (unsigned int)obj->entnum - 1, obj->tree->anims->debugName);
    return 0;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( ragdollActive )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  [rsp+68h+var_38], xmm1
      vmovss  [rsp+68h+goalTime], xmm0
      vmovss  dword ptr [rsp+68h+fmt], xmm1
    }
    XAnimSetCompleteGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, fmt, goalTime, v15, (scr_string_t)0, 0, 1, LINEAR, NULL);
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+68h+fmt], xmm0 }
    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, fmta, LINEAR);
  }
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
  __int64 NumBones; 
  Bone *Bones; 
  __int64 v8; 
  unsigned __int16 *p_animBone; 
  __int64 v11; 
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
  _RSI = Ragdoll_CalcPose(ragdoll);
  if ( _RSI )
  {
    if ( v2 )
    {
      _RBP = CG_GetLocalClientGlobals((const LocalClientNum_t)ragdoll->localClientNum);
      NumBones = Ragdoll_GetNumBones(ragdoll);
      Bones = Ragdoll_GetBones(ragdoll);
      v8 = NumBones;
      if ( (int)NumBones > 0 )
      {
        p_animBone = &Bones->animBone;
        _RDX = &v2->orientation.v[2];
        do
        {
          _RDX += 7;
          v11 = *p_animBone;
          p_animBone += 24;
          _RCX = _RSI[v11].quat.v;
          *(_RDX - 9) = *_RCX;
          *(_RDX - 8) = _RCX[1];
          *(_RDX - 7) = _RCX[2];
          *(_RDX - 6) = _RCX[3];
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+10h]
            vaddss  xmm1, xmm0, dword ptr [rbp+699Ch]
            vmovss  dword ptr [rdx-30h], xmm1
            vmovss  xmm2, dword ptr [rcx+14h]
            vaddss  xmm0, xmm2, dword ptr [rbp+69A0h]
            vmovss  dword ptr [rdx-2Ch], xmm0
            vmovss  xmm1, dword ptr [rcx+18h]
            vaddss  xmm2, xmm1, dword ptr [rbp+69A4h]
            vmovss  dword ptr [rdx-28h], xmm2
          }
          --v8;
        }
        while ( v8 );
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+699Ch]
        vaddss  xmm1, xmm0, dword ptr [rsi+10h]
        vmovss  xmm2, dword ptr [rsi+14h]
        vmovss  dword ptr [rsp+68h+translation], xmm1
        vaddss  xmm0, xmm2, dword ptr [rbp+69A0h]
        vmovss  xmm1, dword ptr [rsi+18h]
        vmovss  dword ptr [rsp+68h+translation+4], xmm0
        vaddss  xmm2, xmm1, dword ptr [rbp+69A4h]
        vmovss  dword ptr [rsp+68h+translation+8], xmm2
      }
      Ragdoll_SetAnimPoseRootOrientation(ragdoll, &_RSI->quat, &translation);
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
  BoneOrientation *v5; 
  unsigned int physicsInstanceId; 
  __int32 v7; 
  __int64 numBones; 
  unsigned int v9; 
  unsigned int m_serialAndIndex; 
  const dvar_t *v12; 
  __int64 localClientNum; 
  unsigned int entityNum; 
  char *fmt; 
  __int64 v26; 
  double v27; 
  __int64 v28; 
  double v29; 
  unsigned int v33; 
  hknpBodyId result; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2161, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v5 = Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite(ragdoll);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2165, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 120, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v33 = physicsInstanceId;
  v7 = 3 * ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2172, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  v9 = 0;
  if ( numBones > 0 )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
    _R15 = &v5->origin.v[2];
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovaps [rsp+0A8h+var_68], xmm8
    }
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > 7 )
      {
        LODWORD(v28) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v28) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
      {
        LODWORD(v28) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
      {
        LODWORD(v28) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, physicsInstanceId, v9)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2183, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_GetRigidBodyTransform((const Physics_WorldId)v7, m_serialAndIndex, (vec3_t *)(_R15 - 2), (vec4_t *)(_R15 + 1));
      v12 = DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset;
      if ( !DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ragdoll_debugRagdollMoverOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled && !v9 )
      {
        localClientNum = ragdoll->localClientNum;
        __asm
        {
          vmovss  xmm6, dword ptr [r15]
          vmovss  xmm7, dword ptr [r15-4]
          vmovss  xmm8, dword ptr [r15-8]
        }
        entityNum = ragdoll->entityNum;
        __asm
        {
          vcvtss2sd xmm6, xmm6, xmm6
          vcvtss2sd xmm7, xmm7, xmm7
          vcvtss2sd xmm8, xmm8, xmm8
        }
        if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount )
        {
          LODWORD(v28) = cg_t::ms_allocatedCount;
          LODWORD(v26) = ragdoll->localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v26, v28) )
            __debugbreak();
        }
        if ( !cg_t::ms_cgArray[localClientNum] )
        {
          LODWORD(v28) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v28) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v28) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v28) )
            __debugbreak();
        }
        __asm
        {
          vmovsd  [rsp+0A8h+var_78], xmm6
          vmovsd  [rsp+0A8h+var_80], xmm7
          vmovsd  [rsp+0A8h+fmt], xmm8
        }
        Com_Printf(20, "[%d] RAGDOLL PHYSICS SNAPSHOT: Ragdoll %d Ragdoll Root Bone [%6.2f %6.2f %6.2f] \n", (unsigned int)cg_t::ms_cgArray[localClientNum]->time, entityNum, *(double *)&fmt, v27, v29);
      }
      physicsInstanceId = v33;
      ++v9;
      _R15 += 7;
      --numBones;
    }
    while ( numBones );
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_68]
      vmovaps xmm7, [rsp+0A8h+var_58]
      vmovaps xmm6, [rsp+0A8h+var_48]
    }
  }
  Ragdoll_SetNextPhysicsPoseValid(ragdoll);
  return 1;
}

/*
==============
Ragdoll_TightenConstraints
==============
*/

void __fastcall Ragdoll_TightenConstraints(Ragdoll *ragdoll, double tightenAmount)
{
  bool v6; 
  Ragdoll *v7; 
  unsigned int physicsInstanceId; 
  int v10; 
  unsigned int v12; 
  unsigned int NumConstraints; 
  bool v14; 
  PhysicsConstraintLooseningResult *constraintTightening; 
  unsigned int m_value; 
  __int64 v22; 
  void *retaddr; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  _RAX = &retaddr;
  v6 = !ragdoll->state.needsTightening;
  v7 = ragdoll;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm6, xmm1
  }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2243, ASSERT_TYPE_ASSERT, "(ragdoll->state.needsTightening)", (const char *)&queryFormat, "ragdoll->state.needsTightening") )
    __debugbreak();
  physicsInstanceId = v7->state.physicsInstanceId;
  v10 = 3 * v7->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2250, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v12 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v10, physicsInstanceId);
  v14 = 0;
  if ( NumConstraints )
  {
    __asm { vmovaps [rsp+0A8h+var_68], xmm8 }
    constraintTightening = v7->state.constraintTightening;
    __asm { vsubss  xmm8, xmm7, xmm6 }
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v10 > 7 )
      {
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v22) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
      {
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
      {
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
          __debugbreak();
      }
      m_value = HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v10, physicsInstanceId, v12)->m_value;
      if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2260, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( physicsConstraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( physicsConstraintId )") )
        __debugbreak();
      __asm { vmovaps xmm3, xmm8; proportion }
      Physics_TightenConstraint((Physics_WorldId)v10, m_value, constraintTightening, *(float *)&_XMM3);
      ++v12;
      ++constraintTightening;
      v14 = v12 < NumConstraints;
    }
    while ( v12 < NumConstraints );
    v7 = ragdoll;
    __asm { vmovaps xmm8, [rsp+0A8h+var_68] }
  }
  __asm
  {
    vcomiss xmm6, xmm7
    vmovaps xmm7, [rsp+0A8h+var_58]
    vmovaps xmm6, [rsp+0A8h+var_48]
  }
  if ( !v14 )
    v7->state.needsTightening = 0;
}

/*
==============
Ragdoll_Update
==============
*/

void __fastcall Ragdoll_Update(double timeStep, int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
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
    __asm { vmovaps xmm1, xmm6; timeStep }
    Ragdoll_Update(Ragdoll->localClientNum, *(float *)&_XMM1, Ragdoll);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_Update
==============
*/

void __fastcall Ragdoll_Update(LocalClientNum_t clientNum, double timeStep, Ragdoll *ragdoll)
{
  cg_t *LocalClientGlobals; 
  int v8; 
  __int64 state; 
  int v10; 
  void (__fastcall *updateFunc)(Ragdoll *, float, const int); 
  __int64 v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2540, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2541, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2542, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  if ( ragdoll->state.state >= (unsigned int)NUM_RAGDOLL_ACTIVITY_STATES )
  {
    LODWORD(v14) = ragdoll->state.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2543, ASSERT_TYPE_ASSERT, "(unsigned)( ragdoll->state.state ) < (unsigned)( NUM_RAGDOLL_ACTIVITY_STATES )", "ragdoll->state.state doesn't index NUM_RAGDOLL_ACTIVITY_STATES\n\t%i not in [0, %i)", v14, 6) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
  v8 = LocalClientGlobals->time - LocalClientGlobals->oldTime;
  if ( v8 < 0 )
    v8 = 0;
  if ( v8 || ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_JUST_LOADED && ragdoll->state.loadedState == RAGDOLL_ACTIVITY_STATE_RUNNING )
  {
    Sys_CheckAcquireLock(&s_ragdollUpdateLock);
    AcquireSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
    state = (unsigned int)ragdoll->state.state;
    do
    {
      v10 = state;
      updateFunc = s_ragdollStateEntries[(int)state].updateFunc;
      if ( updateFunc )
      {
        __asm { vmovaps xmm1, xmm6 }
        ((void (__fastcall *)(Ragdoll *, __int64, _QWORD))updateFunc)(ragdoll, state, (unsigned int)v8);
        state = (unsigned int)ragdoll->state.state;
      }
    }
    while ( v10 != (_DWORD)state );
    ++ragdoll->state.frames;
    ragdoll->state.msec += v8;
    ReleaseSRWLockShared((PSRWLOCK)&s_ragdollUpdateLock);
    Sys_CheckReleaseLock(&s_ragdollUpdateLock);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
Ragdoll_UpdateAll
==============
*/

void __fastcall Ragdoll_UpdateAll(LocalClientNum_t clientNum, double timeStep)
{
  int v5; 
  Ragdoll *v6; 
  Ragdoll *Ragdoll; 
  __int64 v10; 
  __int64 v11; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2682, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE )") )
    __debugbreak();
  v5 = 1;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2683, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD )") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2685, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !Ragdoll_IsRegistered(clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2686, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  Profile_Begin(536);
  if ( ragdoll_enable->current.enabled )
  {
    v6 = g_ragdollBodies;
    do
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v5 - 1) >= 0x40 )
      {
        LODWORD(v11) = 64;
        LODWORD(v10) = v5 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v5);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v5 - 1) >= 0x40 )
        {
          LODWORD(v11) = 64;
          LODWORD(v10) = v5 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2704, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( v6->localClientNum == clientNum )
        {
          __asm { vmovaps xmm1, xmm6; timeStep }
          Ragdoll_Update(clientNum, *(double *)&_XMM1, v6);
        }
      }
      ++v5;
      ++v6;
    }
    while ( v5 <= 64 );
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
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
  vec3_t trans; 
  vec4_t rot; 

  v2 = Ragdoll_BodyDObj(ragdoll);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2279, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  XAnimCalcAbsDelta(v2, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &trans);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+rot]
    vmovss  xmm1, dword ptr [rsp+68h+var_38+4]
  }
  _RDX = &ragdoll->state.animationRootTranslation;
  _RCX = &ragdoll->state.animationRootRotation;
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovss  xmm0, dword ptr [rsp+68h+var_38]
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm0, dword ptr [rsp+68h+var_38+8]
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  dword ptr [rdx+4], xmm1
  }
  QuatTrans_MultiplyEquals(&ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation, &ragdoll->state.initialAnimationRootRotation, &ragdoll->state.initialAnimationRootTranslation);
}

/*
==============
Ragdoll_UpdateCmd
==============
*/
void Ragdoll_UpdateCmd(const void *const cmdInfo)
{
  int v3; 
  Ragdoll *Ragdoll; 

  _RDI = cmdInfo;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2754, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2755, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD )") )
    __debugbreak();
  v3 = _RDI[2];
  __asm { vmovss  xmm6, dword ptr [rdi+4] }
  Profile_Begin(536);
  if ( ragdoll_enable->current.enabled && Ragdoll_IsAllocated(v3) )
  {
    Ragdoll = Ragdoll_GetRagdoll(v3);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2737, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->localClientNum > (unsigned int)LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2739, ASSERT_TYPE_ASSERT, "(ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "ragdoll->localClientNum >= LOCAL_CLIENT_0 && ragdoll->localClientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( !Ragdoll_IsRegistered(Ragdoll->localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 2740, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( ragdoll->localClientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( ragdoll->localClientNum )") )
      __debugbreak();
    __asm { vmovaps xmm1, xmm6; timeStep }
    Ragdoll_Update(Ragdoll->localClientNum, *(double *)&_XMM1, Ragdoll);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  Profile_EndInternal(NULL);
}

/*
==============
Ragdoll_UpdateContents
==============
*/
void Ragdoll_UpdateContents(Ragdoll *ragdoll)
{
  __int32 v3; 
  int NumRigidBodys; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int physicsInstanceId; 
  unsigned int m_serialAndIndex; 
  int v13; 
  bool v15; 
  bool v16; 
  const vec4_t *v39; 
  __int64 v41; 
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
  v3 = 3 * ragdoll->localClientNum + 3;
  Ragdoll_Update_UpgradeReadLockToWriteLock();
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v3, ragdoll->state.physicsInstanceId);
  v5 = NumRigidBodys;
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1221, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v5 != ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1222, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
    __debugbreak();
  v6 = v5;
  v7 = 0;
  if ( (int)v5 > 0 )
  {
    __asm { vmovaps [rsp+0D8h+var_38], xmm6 }
    _R15 = 0i64;
    _RSI = &ragdoll->state.bones[0].penetrationState;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      physicsInstanceId = ragdoll->state.physicsInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v3 > 7 )
      {
        LODWORD(v41) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v41) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v41) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v41) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
      {
        LODWORD(v41) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v41) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
      {
        LODWORD(v41) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v41) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, physicsInstanceId, v7)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1232, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
        __debugbreak();
      v13 = 256;
      if ( (*_RSI & 0xFFFFFFFD) != 0 )
        v13 = 0;
      Physics_SetRigidBodyContents((Physics_WorldId)v3, m_serialAndIndex, v13, 1);
      _RDI = Ragdoll_GetLatestPhysicsPoseBoneOrientations(ragdoll);
      v15 = _RDI == NULL;
      if ( !_RDI )
      {
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_update.cpp", 1241, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations");
        v15 = !v16;
        if ( v16 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rdi]
        vmovss  dword ptr [rsp+0D8h+start], xmm0
        vmovss  xmm1, dword ptr [r15+rdi+4]
        vmovss  dword ptr [rsp+0D8h+start+4], xmm1
        vmovss  xmm0, dword ptr [r15+rdi+8]
        vmovss  dword ptr [rsp+0D8h+start+8], xmm0
      }
      _RCX = &_RDI[_R15].orientation;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmovss  xmm2, dword ptr [rcx+4]
        vmovss  xmm3, dword ptr [rcx+8]
        vmovss  xmm4, dword ptr [rcx+0Ch]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm4, xmm3, xmm0
        vcomiss xmm4, xmm6
      }
      if ( !v15 )
      {
        QuatToAxis(_RCX, &axis);
        __asm
        {
          vmovss  xmm3, dword ptr [rsi-4]
          vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+axis]
          vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+start]
          vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+axis+4]
        }
        v15 = *_RSI == RAGDOLL_PENETRATION_NO;
        __asm
        {
          vmovss  dword ptr [rsp+0D8h+end], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+start+4]
          vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+axis+8]
          vmovss  dword ptr [rsp+0D8h+end+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+start+8]
        }
        v39 = &colorRed;
        if ( v15 )
          v39 = &colorBlue;
        __asm { vmovss  dword ptr [rsp+0D8h+end+8], xmm2 }
        Ragdoll_AddDebugLine((Physics_WorldId)v3, &start, &end, v39);
      }
      ++v7;
      _RSI += 12;
      ++_R15;
      --v6;
    }
    while ( v6 );
    __asm { vmovaps xmm6, [rsp+0D8h+var_38] }
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

