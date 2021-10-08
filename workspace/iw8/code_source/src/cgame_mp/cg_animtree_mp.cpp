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
  float v3; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+38h+var_18], xmm0
  }
  CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entNum, 0, 0, v3);
}

/*
==============
CG_AnimTreeMP_ClearScriptModelAnims
==============
*/
void CG_AnimTreeMP_ClearScriptModelAnims(LocalClientNum_t localClientNum)
{
  const CgSnapshotMP *NextSnap; 
  int v4; 
  entityState_t *entities; 
  const dvar_t *v7; 
  int number; 
  const DObj *ClientDObj; 
  DObj *v10; 
  XAnimTree *Tree; 
  float fmt; 
  float fmta; 

  NextSnap = CG_SnapshotMP_GetNextSnap(localClientNum);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 285, ASSERT_TYPE_ASSERT, "(snap)", (const char *)&queryFormat, "snap") )
    __debugbreak();
  v4 = 0;
  if ( NextSnap->numEntities > 0 )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    entities = NextSnap->entities;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    do
    {
      if ( entities->eType == ET_SCRIPTMOVER )
      {
        v7 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
        number = entities->number;
        if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.enabled )
        {
          __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
          CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, fmt);
        }
        ClientDObj = Com_GetClientDObj(number, localClientNum);
        v10 = (DObj *)ClientDObj;
        if ( ClientDObj )
        {
          Tree = DObjGetTree(ClientDObj);
          if ( Tree )
          {
            DObjSetTree(v10, NULL);
            XAnimFreeAnimTreeByType(Tree);
            __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
            CG_GetEntity(localClientNum, number)->tree = NULL;
            CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, fmta);
          }
        }
      }
      ++v4;
      ++entities;
    }
    while ( v4 < NextSnap->numEntities );
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
CG_AnimTreeMP_DObjAnimInfoIsEqual
==============
*/
bool CG_AnimTreeMP_DObjAnimInfoIsEqual(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  int v11; 
  int v12; 

  _RDI = entNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)_RDI >= 0x800 )
  {
    v12 = 2048;
    v11 = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( _RBX->entityLastXAnimIndex[_RDI] != animIndex )
    return 0;
  if ( _RBX->entityLastXAnimTime[_RDI] != animTime )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+48h+animRate]
    vucomiss xmm0, dword ptr [rbx+rdi*4+0A7320h]
  }
  return _RBX->entityLastXAnimTime[_RDI] == animTime;
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
  const dvar_t *v3; 
  const DObj *ClientDObj; 
  DObj *v8; 
  XAnimTree *Tree; 
  float fmt; 
  float fmta; 

  v3 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( v3->current.enabled )
  {
    __asm { vmovss  dword ptr [rsp+58h+fmt], xmm6 }
    CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, fmt);
  }
  ClientDObj = Com_GetClientDObj(entIndex, localClientNum);
  v8 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      DObjSetTree(v8, NULL);
      XAnimFreeAnimTreeByType(Tree);
      __asm { vmovss  dword ptr [rsp+58h+fmt], xmm6 }
      CG_GetEntity(localClientNum, entIndex)->tree = NULL;
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, fmta);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_AnimTreeMP_GetCurrentScriptModelXAnimTime
==============
*/
float CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(LocalClientNum_t localClientNum, const LerpEntityStateScriptMover *lerpState)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm6, xmm2, xmm1
  }
  *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(lerpState->animRateQuantized);
  __asm
  {
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
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
  float v10; 

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
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+38h+var_18], xmm0
  }
  CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, entIndex, 0, 0, v10);
}

/*
==============
CG_AnimTreeMP_SetDObjAnimInfo
==============
*/
void CG_AnimTreeMP_SetDObjAnimInfo(LocalClientNum_t localClientNum, int entNum, int animIndex, int animTime, float animRate)
{
  int v10; 
  int v11; 

  _RDI = entNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)_RDI >= 0x800 )
  {
    v11 = 2048;
    v10 = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, [rsp+48h+animRate] }
  _RBX->entityLastXAnimIndex[_RDI] = animIndex;
  _RBX->entityLastXAnimTime[_RDI] = animTime;
  __asm { vmovss  dword ptr [rbx+rdi*4+0A7320h], xmm0 }
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
  cg_t *LocalClientGlobals; 
  int v12; 

  v3 = iEntNum;
  _RDI = iWeaponID;
  if ( (unsigned int)iEntNum >= 0x800 )
  {
    v12 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ( 2048 ) )", "iEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, v12) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RCX = (__int64)&LocalClientGlobals->iEntityLastWeaponID[v3];
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)(_RCX + 56) = *(_DWORD *)&_RDI->weaponCamo;
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
  int v11; 
  int IsSimpleBlendTree; 
  float fmt; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !lerpState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(lerpState)", (const char *)&queryFormat, "lerpState") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  animPauseTime = lerpState->animPauseTime;
  if ( animPauseTime <= 0 )
    goto LABEL_12;
  time = LocalClientGlobals->time;
  v11 = 1;
  if ( time > 1 )
    v11 = time;
  if ( animPauseTime > v11 )
  {
LABEL_12:
    *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(lerpState->animRateQuantized);
    __asm { vmovaps xmm6, xmm0 }
    IsSimpleBlendTree = XAnimIsSimpleBlendTree(cent->tree);
  }
  else
  {
    IsSimpleBlendTree = XAnimIsSimpleBlendTree(cent->tree);
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  __asm { vmovss  dword ptr [rsp+48h+fmt], xmm6 }
  XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, (IsSimpleBlendTree != 0) + 1, fmt);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
CG_AnimTreeMP_UpdateScriptModelAnim
==============
*/
void CG_AnimTreeMP_UpdateScriptModelAnim(LocalClientNum_t localClientNum, centity_t *cent, DObj *dobj)
{
  unsigned int m_mapEntryId; 
  XAnimTree *Tree; 
  unsigned int m_data; 
  XAnimTree *v15; 
  int v16; 
  bool v17; 
  bool v19; 
  int number; 
  unsigned int v26; 
  XAnimOwner v27; 
  XAnimTree *SimpleTree; 
  const XAnim_s *Anims; 
  unsigned int v43; 
  const XAnim_s *v45; 
  XAnimOwner v51; 
  XAnimTree *SimpleBlendTree; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  __int64 blendTime; 
  float blendTimea; 
  __int64 notifyName; 
  double notifyNamea; 
  __int64 notifyType; 
  __int64 v74; 
  double v75; 
  char *outName; 
  char *oldAnimName; 
  bool ShouldScrubScriptMoverAnim; 

  __asm { vmovaps [rsp+0D8h+var_58], xmm7 }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 439, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  m_mapEntryId = cent->nextState.lerp.u.player.accessoryWeaponHandle.m_mapEntryId;
  __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
  *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(m_mapEntryId);
  __asm { vmovaps xmm7, xmm0 }
  Tree = DObjGetTree(dobj);
  m_data = cent->nextState.lerp.u.agentCorpse.attachModels[2].m_data;
  v15 = Tree;
  if ( m_data )
  {
    _ER15 = 0;
    v26 = 0;
    if ( cent->nextState.eType == ET_SCRIPTMOVER )
      v26 = 6;
    NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_ANIM, m_data, (const char **)&outName);
    if ( v15 )
    {
      if ( (LOBYTE(cent->nextState.lerp.u.vehicle.bodyPitch) & 1) != 0 )
      {
        __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm7 }
        if ( !CG_AnimTreeMP_DObjAnimInfoIsEqual(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], fmta) )
        {
          if ( v15 != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 475, ASSERT_TYPE_ASSERT, "(animTree == cent->tree)", (const char *)&queryFormat, "animTree == cent->tree") )
            __debugbreak();
          XAnimFreeAnimTreeByType(v15);
          DObjSetTree(dobj, NULL);
          cent->tree = NULL;
          v15 = NULL;
        }
      }
    }
    ShouldScrubScriptMoverAnim = CG_AnimTreeMP_ShouldScrubScriptMoverAnim(cent);
    if ( v15 )
    {
      __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm7 }
      if ( CG_AnimTreeMP_DObjAnimInfoIsEqual(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], fmtd) )
      {
        CG_AnimTreeMP_UpdateScriptModelAnim_Interpolate(localClientNum, cent, dobj);
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0D8h+var_68], xmm8
          vmovaps [rsp+0D8h+var_78], xmm9
        }
        *(double *)&_XMM0 = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
        __asm
        {
          vmovss  xmm3, cs:__real@3e4ccccd
          vmovd   xmm2, r15d
        }
        _EAX = cent->nextState.lerp.u.anonymous.data[2] & 2;
        __asm
        {
          vmovd   xmm1, eax
          vpcmpeqd xmm4, xmm1, xmm2
          vmovss  xmm2, cs:__real@3f000000
          vblendvps xmm1, xmm2, xmm3, xmm4
          vmovss  [rsp+0D8h+arg_10], xmm1
          vmovaps xmm9, xmm0
        }
        if ( XAnimIsSimpleBlendTree(v15) )
        {
          oldAnimName = (char *)XAnimGetSimpleBlendTreeToAnimName(v15);
          *(double *)&_XMM0 = XAnimGetTime(v15, 0, XANIM_SUBTREE_DEFAULT, 2u);
          __asm { vmovaps xmm6, xmm0 }
          Anims = XAnimGetAnims(v15);
          *(double *)&_XMM0 = XAnimGetLength(Anims, 2u);
          v43 = 2;
        }
        else
        {
          v43 = 1;
          oldAnimName = (char *)XAnimGetSimpleTreeAnimName(v15);
          *(double *)&_XMM0 = XAnimGetTime(v15, 0, XANIM_SUBTREE_DEFAULT, 1u);
          __asm { vmovaps xmm6, xmm0 }
          v45 = XAnimGetAnims(v15);
          *(double *)&_XMM0 = XAnimGetLength(v45, 1u);
        }
        __asm { vmulss  xmm6, xmm0, xmm6 }
        *(double *)&_XMM0 = XAnimGetRate(v15, 0, XANIM_SUBTREE_DEFAULT, v43);
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vxorps  xmm8, xmm8, xmm8
          vcmpeqss xmm2, xmm0, xmm8
          vblendvps xmm0, xmm0, xmm1, xmm2
          vmovss  [rsp+0D8h+arg_18], xmm0
        }
        XAnimFreeAnimTreeByType(v15);
        LOBYTE(v51) = 1;
        SimpleBlendTree = XAnimCreateSimpleBlendTree(oldAnimName, outName, v51);
        if ( !SimpleBlendTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 554, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
        DObjSetTree(dobj, SimpleBlendTree);
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+arg_10]
          vmovss  xmm2, [rsp+0D8h+arg_18]; oldPlaybackRate
          vmovss  [rsp+0D8h+blendTime], xmm0
          vmovaps xmm3, xmm9; newAnimTime
          vmovaps xmm1, xmm6; oldAnimTime
          vmovss  dword ptr [rsp+0D8h+fmt], xmm7
        }
        cent->tree = SimpleBlendTree;
        XAnimPlaySimpleBlendTreeAnim(dobj, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, blendTimea, (scr_string_t)0, v26);
        __asm { vmovaps xmm9, [rsp+0D8h+var_78] }
        if ( ShouldScrubScriptMoverAnim )
        {
          __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm8 }
          XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 2u, fmtf);
          XAnimSetScrubbedNotetracks(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 2u, 1);
        }
        __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm7 }
        CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], fmtg);
        __asm { vmovaps xmm8, [rsp+0D8h+var_68] }
      }
    }
    else
    {
      *(double *)&_XMM0 = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
      LOBYTE(v27) = 1;
      __asm { vmovaps xmm6, xmm0 }
      SimpleTree = XAnimCreateSimpleTree(outName, v27);
      cent->tree = SimpleTree;
      if ( !SimpleTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(cent->tree)", (const char *)&queryFormat, "cent->tree") )
        __debugbreak();
      DObjSetTree(dobj, cent->tree);
      __asm
      {
        vmovaps xmm2, xmm7; playbackRate
        vmovaps xmm1, xmm6; animTime
      }
      XAnimPlaySimpleTreeAnim(dobj, *(float *)&_XMM1, *(float *)&_XMM2, (scr_string_t)0, v26);
      __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm7 }
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, cent->nextState.number, cent->nextState.lerp.u.anonymous.data[3], cent->nextState.lerp.u.anonymous.data[4], fmtb);
      if ( ShouldScrubScriptMoverAnim )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+0D8h+fmt], xmm0
        }
        XAnimSetAnimRate(cent->tree, 0, XANIM_SUBTREE_DEFAULT, 1u, fmtc);
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
    v16 = cent->nextState.lerp.u.anonymous.data[4];
    v17 = v16 == 0;
    if ( v16 )
    {
      __asm
      {
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+0D8h+var_98], xmm1
      }
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(!nextLerp->animStartTime)", "%s\n\tNo anim index, expected no start time but had time %i, type: %u, anim rate: %f", "!nextLerp->animStartTime", cent->nextState.lerp.u.anonymous.data[4], cent->nextState.eType, v75);
      v17 = !v19;
      if ( v19 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vucomiss xmm7, xmm6
    }
    if ( !v17 )
    {
      LODWORD(v74) = cent->nextState.lerp.u.anonymous.data[4];
      LODWORD(notifyType) = cent->nextState.eType;
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  qword ptr [rsp+0D8h+notifyName], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 450, ASSERT_TYPE_ASSERT, "(animRateRaw == 1.0f)", "%s\n\tNo anim index, expected default anim rate time of 1.0, but had %f, type: %u, anim time: %i", "animRateRaw == 1.0f", notifyNamea, notifyType, v74) )
        __debugbreak();
    }
    if ( v15 )
    {
      if ( v15 != cent->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 454, ASSERT_TYPE_ASSERT, "(animTree == cent->tree)", (const char *)&queryFormat, "animTree == cent->tree") )
        __debugbreak();
      XAnimFreeAnimTreeByType(v15);
      DObjSetTree(dobj, NULL);
      number = cent->nextState.number;
      cent->tree = NULL;
      __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm6 }
      CG_AnimTreeMP_SetDObjAnimInfo(localClientNum, number, 0, 0, fmt);
    }
    _RDI = cent->nextState.number;
    _RBX = CG_GetLocalClientGlobals(localClientNum);
    if ( (unsigned int)_RDI >= 0x800 )
    {
      LODWORD(notifyName) = 2048;
      LODWORD(blendTime) = _RDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (( 2048 ) + 0) )", "entNum doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", blendTime, notifyName) )
        __debugbreak();
    }
    if ( _RBX->entityLastXAnimIndex[_RDI] )
      goto LABEL_60;
    if ( _RBX->entityLastXAnimTime[_RDI] )
      goto LABEL_60;
    __asm { vucomiss xmm6, dword ptr [rbx+rdi*4+0A7320h] }
    if ( _RBX->entityLastXAnimTime[_RDI] )
    {
LABEL_60:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, 0, 0, 1.0f ))", (const char *)&queryFormat, "CG_AnimTreeMP_DObjAnimInfoIsEqual( localClientNum, cent->nextState.number, 0, 0, 1.0f )") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
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
  unsigned int v15; 
  char v19; 
  char v20; 
  float fmt; 
  float fmta; 
  float fmtb; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 380, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_animtree_mp.cpp", 381, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  Tree = DObjGetTree(dobj);
  if ( Tree )
  {
    __asm { vmovaps [rsp+98h+var_28], xmm6 }
    *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(cent->nextState.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
    __asm { vmovaps xmm6, xmm0 }
    v15 = (XAnimIsSimpleBlendTree(Tree) != 0) + 1;
    if ( CG_AnimTreeMP_ShouldScrubScriptMoverAnim(cent) )
    {
      __asm
      {
        vmovaps [rsp+98h+var_38], xmm7
        vmovaps [rsp+98h+var_48], xmm8
      }
      *(double *)&_XMM0 = CG_AnimTreeMP_GetCurrentScriptModelXAnimTime(localClientNum, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = XAnimGetLength(Tree->anims, v15);
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm0, xmm7
        vmovaps xmm6, xmm0
      }
      if ( v19 | v20 )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      else
      {
        __asm
        {
          vmovaps [rsp+98h+var_58], xmm9
          vmovaps [rsp+98h+var_68], xmm10
          vmovss  xmm10, cs:__real@3f800000
          vdivss  xmm9, xmm10, xmm6
        }
        if ( XAnimIsLooped(Tree->anims, v15) )
        {
          __asm
          {
            vmovaps xmm1, xmm6; Y
            vmovaps xmm0, xmm8; X
          }
          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmulss  xmm6, xmm0, xmm9 }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm8, xmm6
            vcmpless xmm1, xmm7, xmm0
            vmulss  xmm2, xmm9, xmm8
            vblendvps xmm6, xmm2, xmm10, xmm1
          }
        }
        __asm
        {
          vmovaps xmm9, [rsp+98h+var_58]
          vmovaps xmm10, [rsp+98h+var_68]
        }
      }
      __asm { vmovss  dword ptr [rsp+98h+fmt], xmm7 }
      XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v15, fmt);
      XAnimSetScrubbedNotetracks(cent->tree, 0, XANIM_SUBTREE_DEFAULT, v15, 1);
      __asm { vmovss  dword ptr [rsp+98h+fmt], xmm6 }
      XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v15, fmta);
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_48]
        vmovaps xmm7, [rsp+98h+var_38]
      }
    }
    else
    {
      *(double *)&_XMM0 = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v15);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( v20 )
      {
        __asm { vmovss  dword ptr [rsp+98h+fmt], xmm6 }
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v15, fmtb);
        XAnimSetScrubbedNotetracks(Tree, 0, XANIM_SUBTREE_DEFAULT, v15, 0);
      }
      CG_AnimTreeMP_UpdateDObjAnimPause(localClientNum, cent, (const LerpEntityStateScriptMover *)&cent->nextState.lerp.u);
    }
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
  }
}

