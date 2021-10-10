/*
==============
CG_AnimTreeMP_SafeDObjFree
==============
*/

void __fastcall CG_AnimTreeMP_SafeDObjFree(LocalClientNum_t localClientNum, int entIndex)
{
  ?CG_AnimTreeMP_SafeDObjFree@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entIndex);
}

/*
==============
CG_AnimTreeMP_GetCurrentScriptModelXAnimTime
==============
*/

double __fastcall CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(LocalClientNum_t localClientNum, const LerpEntityStateScriptMover *lerpState)
{
  double result; 

  *(float *)&result = ?CG_AnimTreeMP_GetCurrentScriptModelXAnimTime@@YAMW4LocalClientNum_t@@PEBULerpEntityStateScriptMover@@@Z(localClientNum, lerpState);
  return result;
}

/*
==============
CG_AnimTreeMP_CheckDObjAvatarInfoMatches
==============
*/

bool __fastcall CG_AnimTreeMP_CheckDObjAvatarInfoMatches(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel, unsigned int iHeadModelIndex)
{
  return ?CG_AnimTreeMP_CheckDObjAvatarInfoMatches@@YA_NW4LocalClientNum_t@@HHPEBUXModel@@I@Z(localClientNum, iEntNum, iEntType, pXModel, iHeadModelIndex);
}

/*
==============
CG_AnimTreeMP_ClearDObjAnimInfo
==============
*/

void __fastcall CG_AnimTreeMP_ClearDObjAnimInfo(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_AnimTreeMP_ClearDObjAnimInfo@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_AnimTreeMP_FreeEntityDObjInfo
==============
*/

void __fastcall CG_AnimTreeMP_FreeEntityDObjInfo(LocalClientNum_t localClientNum)
{
  ?CG_AnimTreeMP_FreeEntityDObjInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AnimTreeMP_CheckDObjInfoMatches
==============
*/

int __fastcall CG_AnimTreeMP_CheckDObjInfoMatches(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel)
{
  return ?CG_AnimTreeMP_CheckDObjInfoMatches@@YAHW4LocalClientNum_t@@HHPEBUXModel@@@Z(localClientNum, iEntNum, iEntType, pXModel);
}

/*
==============
CG_AnimTreeMP_SetDObjInfo
==============
*/

void __fastcall CG_AnimTreeMP_SetDObjInfo(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel)
{
  ?CG_AnimTreeMP_SetDObjInfo@@YAXW4LocalClientNum_t@@HHPEBUXModel@@@Z(localClientNum, iEntNum, iEntType, pXModel);
}

/*
==============
CG_AnimTreeMP_UpdateScriptModelAnim
==============
*/

void __fastcall CG_AnimTreeMP_UpdateScriptModelAnim(LocalClientNum_t localClientNum, centity_t *cent, DObj *dobj)
{
  ?CG_AnimTreeMP_UpdateScriptModelAnim@@YAXW4LocalClientNum_t@@PEAUcentity_t@@PEAUDObj@@@Z(localClientNum, cent, dobj);
}

/*
==============
CG_AnimTreeMP_DObjAnimInfoIsEqual
==============
*/

bool __fastcall CG_AnimTreeMP_DObjAnimInfoIsEqual(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  return ?CG_AnimTreeMP_DObjAnimInfoIsEqual@@YA_NW4LocalClientNum_t@@HHHM@Z(localClientNum, entNum, animIndex, animTime, animRate);
}

/*
==============
CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate
==============
*/

void __fastcall CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate(LocalClientNum_t localClientNum, centity_t *cent, DObj *dobj)
{
  ?CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate@@YAXW4LocalClientNum_t@@PEAUcentity_t@@PEAUDObj@@@Z(localClientNum, cent, dobj);
}

/*
==============
CG_AnimTreeMP_LoadAnimTrees
==============
*/

void CG_AnimTreeMP_LoadAnimTrees(void)
{
  ?CG_AnimTreeMP_LoadAnimTrees@@YAXXZ();
}

/*
==============
CG_AnimTreeMP_SetDObjWeaponID
==============
*/

void __fastcall CG_AnimTreeMP_SetDObjWeaponID(LocalClientNum_t localClientNum, int iEntNum, const Weapon *iWeaponID)
{
  ?CG_AnimTreeMP_SetDObjWeaponID@@YAXW4LocalClientNum_t@@HAEBUWeapon@@@Z(localClientNum, iEntNum, iWeaponID);
}

/*
==============
CG_AnimTreeMP_SetDObjAnimInfo
==============
*/

void __fastcall CG_AnimTreeMP_SetDObjAnimInfo(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  ?CG_AnimTreeMP_SetDObjAnimInfo@@YAXW4LocalClientNum_t@@HHHM@Z(localClientNum, entNum, animIndex, animTime, animRate);
}

/*
==============
CG_AnimTreeMP_InitializeDObjAnimInfo
==============
*/

void __fastcall CG_AnimTreeMP_InitializeDObjAnimInfo(cg_t *cgameGlob)
{
  ?CG_AnimTreeMP_InitializeDObjAnimInfo@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_AnimTreeMP_SetDObjAvatarInfo
==============
*/

void __fastcall CG_AnimTreeMP_SetDObjAvatarInfo(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel, unsigned int iHeadModelIndex)
{
  ?CG_AnimTreeMP_SetDObjAvatarInfo@@YAXW4LocalClientNum_t@@HHPEBUXModel@@I@Z(localClientNum, iEntNum, iEntType, pXModel, iHeadModelIndex);
}

/*
==============
CG_AnimTreeMP_ClearScriptModelAnims
==============
*/

void __fastcall CG_AnimTreeMP_ClearScriptModelAnims(LocalClientNum_t localClientNum)
{
  ?CG_AnimTreeMP_ClearScriptModelAnims@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AnimTreeMP_FreeScriptModelAnim
==============
*/

void __fastcall CG_AnimTreeMP_FreeScriptModelAnim(LocalClientNum_t localClientNum, int entIndex)
{
  ?CG_AnimTreeMP_FreeScriptModelAnim@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entIndex);
}

/*
==============
CG_AnimTreeMP_CheckDObjWeaponID
==============
*/

int __fastcall CG_AnimTreeMP_CheckDObjWeaponID(LocalClientNum_t localClientNum, int iEntNum, const Weapon *iWeaponID)
{
  return ?CG_AnimTreeMP_CheckDObjWeaponID@@YAHW4LocalClientNum_t@@HAEBUWeapon@@@Z(localClientNum, iEntNum, iWeaponID);
}

/*
==============
CG_AnimTreeMP_CheckDObjAvatarInfoMatches
==============
*/
bool CG_AnimTreeMP_CheckDObjAvatarInfoMatches(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel, unsigned int iHeadModelIndex)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  __int64 v11; 
  __int64 v12; 

  v5 = iEntNum;
  if ( (unsigned int)iEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ( 2048 ) )", "iEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, 2048) )
    __debugbreak();
  if ( iHeadModelIndex >= 0x800 )
  {
    LODWORD(v12) = 2048;
    LODWORD(v11) = iHeadModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( iHeadModelIndex ) < (unsigned)( 2048 )", "iHeadModelIndex doesn't index MAX_MODEL_GAME_CACHE\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( !pXModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 132, ASSERT_TYPE_ASSERT, "(pXModel)", (const char *)&queryFormat, "pXModel") )
    __debugbreak();
  if ( CG_GetLocalClientGlobals(localClientNum)->iEntityLastHeadModel[v5] != iHeadModelIndex )
    return 0;
  if ( (unsigned int)v5 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 64, ASSERT_TYPE_ASSERT, "((iEntNum >= 0) && (iEntNum < (( 2048 ) + 0)))", (const char *)&queryFormat, "(iEntNum >= 0) && (iEntNum < MAX_LOCAL_CENTITIES)") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return LocalClientGlobals->iEntityLastType[v5] == iEntType && LocalClientGlobals->pEntityLastXModel[v5] == pXModel;
}

/*
==============
CG_AnimTreeMP_CheckDObjInfoMatches
==============
*/
_BOOL8 CG_AnimTreeMP_CheckDObjInfoMatches(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 

  v4 = iEntNum;
  if ( (unsigned int)iEntNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 64, ASSERT_TYPE_ASSERT, "((iEntNum >= 0) && (iEntNum < (( 2048 ) + 0)))", (const char *)&queryFormat, "(iEntNum >= 0) && (iEntNum < MAX_LOCAL_CENTITIES)") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return LocalClientGlobals->iEntityLastType[v4] == iEntType && LocalClientGlobals->pEntityLastXModel[v4] == pXModel;
}

/*
==============
CG_AnimTreeMP_CheckDObjWeaponID
==============
*/
_BOOL8 CG_AnimTreeMP_CheckDObjWeaponID(LocalClientNum_t localClientNum, int iEntNum, const Weapon *iWeaponID)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  int v9; 

  v3 = iEntNum;
  if ( (unsigned int)iEntNum >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ( 2048 ) )", "iEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, v9) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return memcmp_0(&LocalClientGlobals->iEntityLastWeaponID[v3], iWeaponID, 0x3Cui64) == 0;
}

/*
==============
CG_AnimTreeMP_ClearDObjAnimInfo
==============
*/
void CG_AnimTreeMP_ClearDObjAnimInfo(LocalClientNum_t localClientNum, int entNum)
{
  CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entNum, 0, 0, 1.0);
}

/*
==============
CG_AnimTreeMP_ClearScriptModelAnims
==============
*/
void CG_AnimTreeMP_ClearScriptModelAnims(LocalClientNum_t localClientNum)
{
  const CgSnapshotMP *NextSnap; 
  int v3; 
  entityState_t *entities; 
  const dvar_t *v5; 
  int number; 
  const DObj *ClientDObj; 
  DObj *v8; 
  XAnimTree *Tree; 

  NextSnap = CG_SnapshotMP_GetNextSnap(localClientNum);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 285, ASSERT_TYPE_ASSERT, "(snap)", (const char *)&queryFormat, "snap") )
    __debugbreak();
  v3 = 0;
  if ( NextSnap->numEntities > 0 )
  {
    entities = NextSnap->entities;
    do
    {
      if ( entities->eType == ET_SCRIPTMOVER )
      {
        v5 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
        number = entities->number;
        if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        if ( v5->current.enabled )
          CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, 1.0);
        ClientDObj = Com_GetClientDObj(number, localClientNum);
        v8 = (DObj *)ClientDObj;
        if ( ClientDObj )
        {
          Tree = DObjGetTree(ClientDObj);
          if ( Tree )
          {
            DObjSetTree(v8, NULL);
            XAnimFreeAnimTreeByType(Tree);
            CG_GetEntity(localClientNum, number)->tree = NULL;
            CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, 1.0);
          }
        }
      }
      ++v3;
      ++entities;
    }
    while ( v3 < NextSnap->numEntities );
  }
}

/*
==============
CG_AnimTreeMP_DObjAnimInfoIsEqual
==============
*/
bool CG_AnimTreeMP_DObjAnimInfoIsEqual(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  int v10; 
  int v11; 

  v6 = entNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v6 >= 0x800 )
  {
    v11 = 2048;
    v10 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return LocalClientGlobals->entityLastXAnimIndex[v6] == animIndex && LocalClientGlobals->entityLastXAnimTime[v6] == animTime && animRate == LocalClientGlobals->entityLastXAnimRate[v6];
}

/*
==============
CG_AnimTreeMP_FreeEntityDObjInfo
==============
*/
void CG_AnimTreeMP_FreeEntityDObjInfo(LocalClientNum_t localClientNum)
{
  int v1; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  centity_t *Entity; 
  centity_t *v7; 
  unsigned int eType; 
  cg_t *LocalClientGlobals; 
  XAnimTree *tree; 
  cg_t *v11; 
  __int64 v12; 
  __int64 v13; 

  v1 = 0;
  v3 = 668448i64;
  v4 = 520992i64;
  v5 = 3014662;
  do
  {
    Entity = CG_GetEntity(localClientNum, v1);
    v7 = Entity;
    if ( Entity->nextState.eType == ET_SCRIPTMOVER )
      CG_AnimTreeMP_FreeScriptModelAnim(localClientNum, Entity->nextState.number);
    if ( Com_GetClientDObj(v1, localClientNum) )
    {
      CG_Entity_DestroyPhysics(localClientNum, v1);
      CG_Entity_DestroyCloth(localClientNum, v1);
    }
    if ( v1 != 2047 )
    {
      if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, v1) )
      {
        eType = (unsigned __int16)v7->nextState.eType;
        if ( (unsigned __int16)eType > 0x15u || !_bittest(&v5, eType) )
          ScriptableCl_UnbindEntityReservedDef(localClientNum, v1);
      }
    }
    Com_SafeClientDObjFree(v1, localClientNum);
    if ( (unsigned int)v1 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 44, ASSERT_TYPE_ASSERT, "((iEntNum >= 0) && (iEntNum < (( 2048 ) + 0)))", (const char *)&queryFormat, "(iEntNum >= 0) && (iEntNum < MAX_LOCAL_CENTITIES)") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    *(_DWORD *)((char *)LocalClientGlobals + v3 - 155652) = 0;
    *(cg_t_vtbl **)((char *)&LocalClientGlobals->__vftable + v4) = NULL;
    tree = v7->tree;
    if ( tree )
    {
      XAnimFreeAnimTreeByType(tree);
      v7->tree = NULL;
    }
    v11 = CG_GetLocalClientGlobals(localClientNum);
    if ( (unsigned int)v1 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    *(_DWORD *)((char *)&v11->__vftable + v3) = 0;
    ++v1;
    v11->predictedPlayerState.objectives[20].entNum[(unsigned __int64)v3 / 4 + 6] = 0;
    v4 += 8i64;
    *(int *)((char *)&v11->predictedPlayerState.hud.current[22].soundID + v3) = 1065353216;
    v3 += 4i64;
  }
  while ( v1 < 2048 );
}

/*
==============
CG_AnimTreeMP_FreeScriptModelAnim
==============
*/
void CG_AnimTreeMP_FreeScriptModelAnim(LocalClientNum_t localClientNum, int entIndex)
{
  const dvar_t *v2; 
  const DObj *ClientDObj; 
  DObj *v6; 
  XAnimTree *Tree; 

  v2 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
  if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, 1.0);
  ClientDObj = Com_GetClientDObj(entIndex, localClientNum);
  v6 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      DObjSetTree(v6, NULL);
      XAnimFreeAnimTreeByType(Tree);
      CG_GetEntity(localClientNum, entIndex)->tree = NULL;
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, 1.0);
    }
  }
}

/*
==============
CG_AnimTreeMP_GetCurrentScriptModelXAnimTime
==============
*/
float CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(LocalClientNum_t localClientNum, const LerpEntityStateScriptMover *lerpState)
{
  cg_t *LocalClientGlobals; 
  int animPauseTime; 
  int time; 
  __int128 v6; 
  double v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  animPauseTime = lerpState->animPauseTime;
  if ( animPauseTime <= 0 )
    goto LABEL_5;
  time = 1;
  if ( LocalClientGlobals->time > 1 )
    time = LocalClientGlobals->time;
  if ( animPauseTime > time )
LABEL_5:
    animPauseTime = LocalClientGlobals->time;
  v6 = 0i64;
  *(float *)&v6 = (float)(animPauseTime - lerpState->animStartTime) * 0.001;
  _XMM2 = v6;
  __asm { vmaxss  xmm6, xmm2, xmm1 }
  v9 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(lerpState->animRateQuantized);
  return *(float *)&v9 * *(float *)&_XMM6;
}

/*
==============
CG_AnimTreeMP_InitializeDObjAnimInfo
==============
*/
void CG_AnimTreeMP_InitializeDObjAnimInfo(cg_t *cgameGlob)
{
  float *entityLastXAnimRate; 
  __int64 v3; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 325, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  entityLastXAnimRate = cgameGlob->entityLastXAnimRate;
  v3 = 128i64;
  do
  {
    *(_QWORD *)entityLastXAnimRate = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate + 1) = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate + 2) = 0x3F8000003F800000i64;
    entityLastXAnimRate += 16;
    *((_QWORD *)entityLastXAnimRate - 5) = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate - 4) = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate - 3) = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate - 2) = 0x3F8000003F800000i64;
    *((_QWORD *)entityLastXAnimRate - 1) = 0x3F8000003F800000i64;
    --v3;
  }
  while ( v3 );
}

/*
==============
CG_AnimTreeMP_LoadAnimTrees
==============
*/
void CG_AnimTreeMP_LoadAnimTrees(void)
{
  Scr_BeginLoadAnimTrees(0);
}

/*
==============
CG_AnimTreeMP_SafeDObjFree
==============
*/
void CG_AnimTreeMP_SafeDObjFree(LocalClientNum_t localClientNum, int entIndex)
{
  centity_t *Entity; 
  centity_t *v5; 
  unsigned int eType; 
  int v7; 
  XAnimTree *tree; 

  Entity = CG_GetEntity(localClientNum, entIndex);
  v5 = Entity;
  if ( Entity->nextState.eType == ET_SCRIPTMOVER )
    CG_AnimTreeMP_FreeScriptModelAnim(localClientNum, Entity->nextState.number);
  if ( Com_GetClientDObj(entIndex, localClientNum) )
  {
    CG_Entity_DestroyPhysics(localClientNum, entIndex);
    CG_Entity_DestroyCloth(localClientNum, entIndex);
  }
  if ( entIndex != 2047 )
  {
    if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, entIndex) )
    {
      eType = (unsigned __int16)v5->nextState.eType;
      if ( (unsigned __int16)eType > 0x15u || (v7 = 3014662, !_bittest(&v7, eType)) )
        ScriptableCl_UnbindEntityReservedDef(localClientNum, entIndex);
    }
  }
  Com_SafeClientDObjFree(entIndex, localClientNum);
  CG_AnimTreeMP_SetDObjInfo(localClientNum, entIndex, 0, NULL);
  tree = v5->tree;
  if ( tree )
  {
    XAnimFreeAnimTreeByType(tree);
    v5->tree = NULL;
  }
  CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, 1.0);
}

/*
==============
CG_AnimTreeMP_SetDObjAnimInfo
==============
*/
void CG_AnimTreeMP_SetDObjAnimInfo(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  int v9; 
  int v10; 

  v6 = entNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v6 >= 0x800 )
  {
    v10 = 2048;
    v9 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  LocalClientGlobals->entityLastXAnimIndex[v6] = animIndex;
  LocalClientGlobals->entityLastXAnimTime[v6] = animTime;
  LocalClientGlobals->entityLastXAnimRate[v6] = animRate;
}

/*
==============
CG_AnimTreeMP_SetDObjAvatarInfo
==============
*/
void CG_AnimTreeMP_SetDObjAvatarInfo(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel, unsigned int iHeadModelIndex)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 

  v5 = iEntNum;
  if ( (unsigned int)iEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ( 2048 ) )", "iEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, 2048) )
    __debugbreak();
  if ( iHeadModelIndex >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = iHeadModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( iHeadModelIndex ) < (unsigned)( 2048 )", "iHeadModelIndex doesn't index MAX_MODEL_GAME_CACHE\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !pXModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 118, ASSERT_TYPE_ASSERT, "(pXModel)", (const char *)&queryFormat, "pXModel") )
    __debugbreak();
  CG_GetLocalClientGlobals(localClientNum)->iEntityLastHeadModel[v5] = iHeadModelIndex;
  CG_AnimTreeMP_SetDObjInfo(localClientNum, v5, iEntType, pXModel);
}

/*
==============
CG_AnimTreeMP_SetDObjInfo
==============
*/
void CG_AnimTreeMP_SetDObjInfo(LocalClientNum_t localClientNum, int iEntNum, int iEntType, const XModel *pXModel)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 

  v4 = iEntNum;
  if ( (unsigned int)iEntNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 44, ASSERT_TYPE_ASSERT, "((iEntNum >= 0) && (iEntNum < (( 2048 ) + 0)))", (const char *)&queryFormat, "(iEntNum >= 0) && (iEntNum < MAX_LOCAL_CENTITIES)") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->iEntityLastType[v4] = iEntType;
  LocalClientGlobals->pEntityLastXModel[v4] = pXModel;
}

/*
==============
CG_AnimTreeMP_SetDObjWeaponID
==============
*/
void CG_AnimTreeMP_SetDObjWeaponID(LocalClientNum_t localClientNum, int iEntNum, const Weapon *iWeaponID)
{
  __int64 v3; 
  Weapon *v6; 
  int v8; 

  v3 = iEntNum;
  if ( (unsigned int)iEntNum >= 0x800 )
  {
    v8 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ( 2048 ) )", "iEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, v8) )
      __debugbreak();
  }
  v6 = &CG_GetLocalClientGlobals(localClientNum)->iEntityLastWeaponID[v3];
  *(__m256i *)&v6->weaponIdx = *(__m256i *)&iWeaponID->weaponIdx;
  *(_OWORD *)&v6->attachmentVariationIndices[5] = *(_OWORD *)&iWeaponID->attachmentVariationIndices[5];
  *(double *)&v6->attachmentVariationIndices[21] = *(double *)&iWeaponID->attachmentVariationIndices[21];
  *(_DWORD *)&v6->weaponCamo = *(_DWORD *)&iWeaponID->weaponCamo;
}

/*
==============
CG_AnimTreeMP_ShouldScrubScriptMoverAnim
==============
*/
bool CG_AnimTreeMP_ShouldScrubScriptMoverAnim(const centity_t *cent)
{
  XAnimParts *Data; 
  char *outName; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 337, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( (cent->nextState.lerp.u.anonymous.data[2] & 0x40) == 0 )
    return 0;
  if ( cent->nextState.lerp.u.anonymous.data[5] > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( !isPlayingScriptedAnim || (nextLerp->animPauseTime <= 0) )", "Anim pausing is not supported within scripted animations.") )
    __debugbreak();
  NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_ANIM, cent->nextState.lerp.u.agentCorpse.attachModels[2].m_data, (const char **)&outName);
  Data = XAnimFindData(outName);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 353, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  return (Data->flags & 1) == 0;
}

/*
==============
CG_AnimTreeMP_UpdateDObjAnimPause
==============
*/
void CG_AnimTreeMP_UpdateDObjAnimPause(LocalClientNum_t localClientNum, centity_t *cent, const LerpEntityStateScriptMover *lerpState)
{
  cg_t *LocalClientGlobals; 
  int animPauseTime; 
  int time; 
  int v9; 
  int IsSimpleBlendTree; 
  float v11; 
  double v12; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !lerpState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(lerpState)", (const char *)&queryFormat, "lerpState") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  animPauseTime = lerpState->animPauseTime;
  if ( animPauseTime <= 0 )
    goto LABEL_12;
  time = LocalClientGlobals->time;
  v9 = 1;
  if ( time > 1 )
    v9 = time;
  if ( animPauseTime > v9 )
  {
LABEL_12:
    v12 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(lerpState->animRateQuantized);
    v11 = *(float *)&v12;
    IsSimpleBlendTree = XAnimIsSimpleBlendTree(cent->tree);
  }
  else
  {
    IsSimpleBlendTree = XAnimIsSimpleBlendTree(cent->tree);
    v11 = 0.0;
  }
  XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, (IsSimpleBlendTree != 0) + 1, v11);
}

/*
==============
CG_AnimTreeMP_UpdateScriptModelAnim
==============
*/
void CG_AnimTreeMP_UpdateScriptModelAnim(LocalClientNum_t localClientNum, centity_t *cent, DObj *dobj)
{
  double v7; 
  float v8; 
  XAnimTree *Tree; 
  unsigned int m_data; 
  XAnimTree *v11; 
  int number; 
  __int64 v13; 
  cg_t *LocalClientGlobals; 
  unsigned int v15; 
  double v16; 
  XAnimOwner v17; 
  XAnimTree *SimpleTree; 
  double CurrentScriptModelXAnimTime; 
  float v24; 
  double Time; 
  float v26; 
  const XAnim_s *Anims; 
  unsigned int v28; 
  double v29; 
  const XAnim_s *v30; 
  float v31; 
  XAnimOwner v34; 
  XAnimTree *SimpleBlendTree; 
  __int64 blendTime; 
  __int64 notifyName; 
  __int64 notifyType; 
  __int64 v39; 
  char *outName; 
  char *oldAnimName; 
  bool ShouldScrubScriptMoverAnim; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 439, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v7 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(cent->nextState.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
  v8 = *(float *)&v7;
  Tree = DObjGetTree(dobj);
  m_data = cent->nextState.lerp.u.agentCorpse.attachModels[2].m_data;
  v11 = Tree;
  if ( m_data )
  {
    v15 = 0;
    if ( cent->nextState.eType == ET_SCRIPTMOVER )
      v15 = 6;
    NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_ANIM, m_data, (const char **)&outName);
    if ( v11 && (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 1) != 0 && !CG_AnimTreeMP_DObjAnimInfoIsEqual(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], *(float *)&v7) )
    {
      if ( v11 != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 475, ASSERT_TYPE_ASSERT, "(animTree == cent->tree)", (const char *)&queryFormat, "animTree == cent->tree") )
        __debugbreak();
      XAnimFreeAnimTreeByType(v11);
      DObjSetTree(dobj, NULL);
      cent->tree = NULL;
      v11 = NULL;
    }
    ShouldScrubScriptMoverAnim = CG_AnimTreeMP_ShouldScrubScriptMoverAnim(cent);
    if ( v11 )
    {
      if ( CG_AnimTreeMP_DObjAnimInfoIsEqual(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], *(float *)&v7) )
      {
        CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate(localClientNum, cent, dobj);
      }
      else
      {
        CurrentScriptModelXAnimTime = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
        _XMM1 = cent->nextState.lerp.u.anonymous.data[2] & 2;
        __asm { vpcmpeqd xmm4, xmm1, xmm2 }
        _XMM2 = LODWORD(FLOAT_0_5);
        __asm { vblendvps xmm1, xmm2, xmm3, xmm4 }
        v24 = *(float *)&CurrentScriptModelXAnimTime;
        if ( XAnimIsSimpleBlendTree(v11) )
        {
          oldAnimName = (char *)XAnimGetSimpleBlendTreeToAnimName(v11);
          Time = XAnimGetTime(v11, 0, XANIM_SUBTREE_DEFAULT, 2u);
          v26 = *(float *)&Time;
          Anims = XAnimGetAnims(v11);
          *(double *)&_XMM0 = XAnimGetLength(Anims, 2u);
          v28 = 2;
        }
        else
        {
          v28 = 1;
          oldAnimName = (char *)XAnimGetSimpleTreeAnimName(v11);
          v29 = XAnimGetTime(v11, 0, XANIM_SUBTREE_DEFAULT, 1u);
          v26 = *(float *)&v29;
          v30 = XAnimGetAnims(v11);
          *(double *)&_XMM0 = XAnimGetLength(v30, 1u);
        }
        v31 = *(float *)&_XMM0 * v26;
        *(double *)&_XMM0 = XAnimGetRate(v11, 0, XANIM_SUBTREE_DEFAULT, v28);
        __asm
        {
          vcmpeqss xmm2, xmm0, xmm8
          vblendvps xmm0, xmm0, xmm1, xmm2
        }
        XAnimFreeAnimTreeByType(v11);
        LOBYTE(v34) = 1;
        SimpleBlendTree = XAnimCreateSimpleBlendTree(oldAnimName, outName, v34);
        if ( !SimpleBlendTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 554, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
        DObjSetTree(dobj, SimpleBlendTree);
        cent->tree = SimpleBlendTree;
        XAnimPlaySimpleBlendTreeAnim(dobj, v31, *(float *)&_XMM0, v24, v8, *(float *)&_XMM1, (scr_string_t)0, v15);
        if ( ShouldScrubScriptMoverAnim )
        {
          XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 2u, 0.0);
          XAnimSetScrubbedNotetracks(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 2u, 1);
        }
        CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], v8);
      }
    }
    else
    {
      v16 = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
      LOBYTE(v17) = 1;
      SimpleTree = XAnimCreateSimpleTree(outName, v17);
      cent->tree = SimpleTree;
      if ( !SimpleTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(cent->tree)", (const char *)&queryFormat, "cent->tree") )
        __debugbreak();
      DObjSetTree(dobj, cent->tree);
      XAnimPlaySimpleTreeAnim(dobj, *(float *)&v16, v8, (scr_string_t)0, v15);
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], v8);
      if ( ShouldScrubScriptMoverAnim )
      {
        XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 1u, 0.0);
        XAnimSetScrubbedNotetracks(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 1u, 1);
      }
      else
      {
        CG_AnimTreeMP_UpdateDObjAnimPause(localClientNum, cent, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
      }
      if ( cent->nextState.lerp.pos.trType == TR_ANIMATED_MOVER && (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) == 0 )
        CG_EntityMP_CalcLerpPositions(localClientNum, cent);
    }
  }
  else
  {
    if ( cent->nextState.lerp.u.anonymous.data[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(!nextLerp->animStartTime)", "%s\n\tNo anim index, expected no start time but had time %i, type: %u, anim rate: %f", "!nextLerp->animStartTime", cent->nextState.lerp.u.anonymous.data[4], cent->nextState.eType, *(float *)&v7) )
      __debugbreak();
    if ( *(float *)&v7 != 1.0 )
    {
      LODWORD(v39) = cent->nextState.lerp.u.anonymous.data[4];
      LODWORD(notifyType) = cent->nextState.eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 450, ASSERT_TYPE_ASSERT, "(animRateRaw == 1.0f)", "%s\n\tNo anim index, expected default anim rate time of 1.0, but had %f, type: %u, anim time: %i", "animRateRaw == 1.0f", *(float *)&v7, notifyType, v39) )
        __debugbreak();
    }
    if ( v11 )
    {
      if ( v11 != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 454, ASSERT_TYPE_ASSERT, "(animTree == cent->tree)", (const char *)&queryFormat, "animTree == cent->tree") )
        __debugbreak();
      XAnimFreeAnimTreeByType(v11);
      DObjSetTree(dobj, NULL);
      number = cent->nextState.number;
      cent->tree = NULL;
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, 1.0);
    }
    v13 = cent->nextState.number;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( (unsigned int)v13 >= 0x800 )
    {
      LODWORD(notifyName) = 2048;
      LODWORD(blendTime) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", blendTime, notifyName) )
        __debugbreak();
    }
    if ( (LocalClientGlobals->entityLastXAnimIndex[v13] || LocalClientGlobals->entityLastXAnimTime[v13] || 1.0 != LocalClientGlobals->entityLastXAnimRate[v13]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, 0, 0, 1.0f ))", (const char *)&queryFormat, "CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, 0, 0, 1.0f )") )
      __debugbreak();
  }
}

/*
==============
CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate
==============
*/
void CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate(LocalClientNum_t localClientNum, centity_t *cent, DObj *dobj)
{
  XAnimTree *Tree; 
  double v7; 
  float v8; 
  unsigned int v9; 
  double CurrentScriptModelXAnimTime; 
  float v11; 
  double Length; 
  __int128 v15; 
  double Rate; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 380, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 381, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  Tree = DObjGetTree(dobj);
  if ( Tree )
  {
    v7 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(cent->nextState.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
    v8 = *(float *)&v7;
    v9 = (XAnimIsSimpleBlendTree(Tree) != 0) + 1;
    if ( CG_AnimTreeMP_ShouldScrubScriptMoverAnim(cent) )
    {
      CurrentScriptModelXAnimTime = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
      v11 = *(float *)&CurrentScriptModelXAnimTime;
      Length = XAnimGetLength(Tree->anims, v9);
      _XMM7 = 0i64;
      if ( *(float *)&Length > 0.0 )
      {
        v15 = LODWORD(FLOAT_1_0);
        *(float *)&v15 = 1.0 / *(float *)&Length;
        if ( XAnimIsLooped(Tree->anims, v9) )
        {
          *(float *)&_XMM6 = fmodf_0(v11, *(float *)&Length) * *(float *)&v15;
        }
        else
        {
          __asm { vcmpless xmm1, xmm7, xmm0 }
          *(float *)&v15 = *(float *)&v15 * v11;
          _XMM2 = v15;
          __asm { vblendvps xmm6, xmm2, xmm10, xmm1 }
        }
      }
      else
      {
        LODWORD(_XMM6) = 0;
      }
      XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v9, 0.0);
      XAnimSetScrubbedNotetracks(cent->tree, 0, XANIM_SUBTREE_DEFAULT, v9, 1);
      XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v9, *(float *)&_XMM6);
    }
    else
    {
      Rate = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v9);
      if ( *(float *)&Rate == 0.0 )
      {
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v9, v8);
        XAnimSetScrubbedNotetracks(Tree, 0, XANIM_SUBTREE_DEFAULT, v9, 0);
      }
      CG_AnimTreeMP_UpdateDObjAnimPause(localClientNum, cent, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
    }
  }
}

