/*
==============
BG_ClearTurretAnims
==============
*/

void __fastcall BG_ClearTurretAnims(int animUser)
{
  ?BG_ClearTurretAnims@@YAXH@Z(animUser);
}

/*
==============
BG_ShutDownTurretAnims
==============
*/

void __fastcall BG_ShutDownTurretAnims(int animUser)
{
  ?BG_ShutDownTurretAnims@@YAXH@Z(animUser);
}

/*
==============
BG_TurretAnim_IsAnyAssigned
==============
*/

bool __fastcall BG_TurretAnim_IsAnyAssigned(const Weapon *entityWeapon)
{
  return ?BG_TurretAnim_IsAnyAssigned@@YA_NAEBUWeapon@@@Z(entityWeapon);
}

/*
==============
BG_ResetTurretAnims
==============
*/

void __fastcall BG_ResetTurretAnims(int animUser)
{
  ?BG_ResetTurretAnims@@YAXH@Z(animUser);
}

/*
==============
BG_TurretAnim_FindAnims
==============
*/

void __fastcall BG_TurretAnim_FindAnims(int animUser)
{
  ?BG_TurretAnim_FindAnims@@YAXH@Z(animUser);
}

/*
==============
BG_TurretAnim_SetIndexArray
==============
*/

void __fastcall BG_TurretAnim_SetIndexArray(int turretAnimIndexRoot, int turretAnimIndexRaise, int turretAnimIndexIdle, int turretAnimIndexFire, int turretAnimIndexDeployNode, int *turretAnimIndexArrayOut)
{
  ?BG_TurretAnim_SetIndexArray@@YAXHHHHHQEAH@Z(turretAnimIndexRoot, turretAnimIndexRaise, turretAnimIndexIdle, turretAnimIndexFire, turretAnimIndexDeployNode, turretAnimIndexArrayOut);
}

/*
==============
BG_TurretAnim_GetAnimIndices
==============
*/

void __fastcall BG_TurretAnim_GetAnimIndices(const DObj *obj, const Weapon *entityWeapon, int *turretAnimIndexArrayOut)
{
  ?BG_TurretAnim_GetAnimIndices@@YAXPEBUDObj@@AEBUWeapon@@QEAH@Z(obj, entityWeapon, turretAnimIndexArrayOut);
}

/*
==============
BG_TurretAnim_IsAnimTreeCreatedFromCode
==============
*/

bool __fastcall BG_TurretAnim_IsAnimTreeCreatedFromCode(const XAnimTree *tree)
{
  return ?BG_TurretAnim_IsAnimTreeCreatedFromCode@@YA_NPEBUXAnimTree@@@Z(tree);
}

/*
==============
BG_Turret_LoadAnimCallback
==============
*/

void __fastcall BG_Turret_LoadAnimCallback(int animUser, const char *turretName, void *(__fastcall *alloc)(unsigned __int64))
{
  ?BG_Turret_LoadAnimCallback@@YAXHPEBDP6APEAX_K@Z@Z(animUser, turretName, alloc);
}

/*
==============
BG_Turret_GetAnimsForTurretWeap
==============
*/

XAnim_s *__fastcall BG_Turret_GetAnimsForTurretWeap(const Weapon *turretWeapon, int animUser)
{
  return ?BG_Turret_GetAnimsForTurretWeap@@YAPEAUXAnim_s@@AEBUWeapon@@H@Z(turretWeapon, animUser);
}

/*
==============
BG_ClearTurretAnims
==============
*/
void BG_ClearTurretAnims(int animUser)
{
  __int64 v1; 
  int v3; 

  v1 = animUser;
  if ( (unsigned int)animUser >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 49, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v3) )
      __debugbreak();
  }
  memset_0(s_turretAnims[v1], 0, sizeof(turretAnims_t[48]));
  turretAnimsCount[v1] = 0;
}

/*
==============
BG_ResetTurretAnims
==============
*/
void BG_ResetTurretAnims(int animUser)
{
  int v3; 

  if ( (unsigned int)animUser >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v3) )
      __debugbreak();
  }
  BG_ClearTurretAnims(animUser);
}

/*
==============
BG_ShutDownTurretAnims
==============
*/
void BG_ShutDownTurretAnims(int animUser)
{
  int v3; 

  if ( (unsigned int)animUser >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v3) )
      __debugbreak();
  }
  BG_ClearTurretAnims(animUser);
}

/*
==============
BG_TurretAnim_FindAnims
==============
*/
void BG_TurretAnim_FindAnims(int animUser)
{
  void (__fastcall *v2)(const unsigned int, const char *); 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  if ( (unsigned int)animUser >= 2 )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 230, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = animUser;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  BG_ClearTurretAnims(animUser);
  v2 = BG_Turret_ClientAnimLoadCallback;
  if ( animUser )
    v2 = BG_Turret_ServerAnimLoadCallback;
  NetConstStrings_CallForCommonWeaponStrings(v2);
  NetConstStrings_CallForLevelWeaponStrings(v2);
}

/*
==============
BG_TurretAnim_GetAnimIndices
==============
*/
void BG_TurretAnim_GetAnimIndices(const DObj *obj, const Weapon *entityWeapon, int *turretAnimIndexArrayOut)
{
  XAnimTree *Tree; 
  int TreeParent; 
  const WeaponDef *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  XAnim_s *anims; 
  unsigned int v13; 
  const XAnim_s *v14; 
  const XAnimParts *Parts; 
  char v16; 
  const XAnimParts *v17; 
  XAnimParts *turretRaiseAnim; 
  XAnimParts *turretIdleAnim; 
  XAnimParts *turretFireAnim; 

  Tree = DObjGetTree(obj);
  TreeParent = -1;
  v7 = BG_WeaponDef(entityWeapon, 0);
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  if ( Tree )
  {
    anims = Tree->anims;
    if ( Tree->anims->size == 5 && anims->maxGameParameters == 8 && anims->maxBindings == 8 )
    {
      v9 = 1;
      v10 = 2;
      TreeParent = 0;
      v8 = 4;
      v11 = 3;
    }
    else
    {
      v13 = 0;
      v14 = XAnimGetAnims(Tree);
      if ( v14->size )
      {
        do
        {
          if ( XAnimIsLeafNode(v14, v13) )
          {
            Parts = XAnimGetParts(v14, v13);
            v16 = 0;
            v17 = Parts;
            if ( v9 == -1 )
            {
              turretRaiseAnim = v7->turretRaiseAnim;
              if ( turretRaiseAnim )
              {
                if ( Parts->names == turretRaiseAnim->names )
                {
                  v16 = 1;
                  v9 = v13;
                }
              }
            }
            if ( v10 == -1 )
            {
              turretIdleAnim = v7->turretIdleAnim;
              if ( turretIdleAnim )
              {
                if ( v17->names == turretIdleAnim->names )
                {
                  v16 = 1;
                  v10 = v13;
                }
              }
            }
            if ( v11 == -1 )
            {
              turretFireAnim = v7->turretFireAnim;
              if ( turretFireAnim )
              {
                if ( v17->names == turretFireAnim->names )
                {
                  v16 = 1;
                  v11 = v13;
                }
              }
            }
            if ( TreeParent == -1 && v16 )
              TreeParent = XAnimGetTreeParent(v14, v13);
          }
          ++v13;
        }
        while ( v13 < v14->size );
        v8 = -1;
      }
      else
      {
        v8 = -1;
      }
    }
  }
  *turretAnimIndexArrayOut = TreeParent;
  turretAnimIndexArrayOut[1] = v9;
  turretAnimIndexArrayOut[2] = v10;
  turretAnimIndexArrayOut[3] = v11;
  turretAnimIndexArrayOut[4] = v8;
}

/*
==============
BG_TurretAnim_IsAnimTreeCreatedFromCode
==============
*/
bool BG_TurretAnim_IsAnimTreeCreatedFromCode(const XAnimTree *tree)
{
  XAnim_s *anims; 

  anims = tree->anims;
  return tree->anims->size == 5 && anims->maxGameParameters == 8 && anims->maxBindings == 8;
}

/*
==============
BG_TurretAnim_IsAnyAssigned
==============
*/
bool BG_TurretAnim_IsAnyAssigned(const Weapon *entityWeapon)
{
  const WeaponDef *v1; 

  v1 = BG_WeaponDef(entityWeapon, 0);
  return v1->turretFireAnim || v1->turretRaiseAnim || v1->turretIdleAnim;
}

/*
==============
BG_TurretAnim_SetIndexArray
==============
*/
void BG_TurretAnim_SetIndexArray(int turretAnimIndexRoot, int turretAnimIndexRaise, int turretAnimIndexIdle, int turretAnimIndexFire, int turretAnimIndexDeployNode, int *turretAnimIndexArrayOut)
{
  *turretAnimIndexArrayOut = turretAnimIndexRoot;
  turretAnimIndexArrayOut[1] = turretAnimIndexRaise;
  turretAnimIndexArrayOut[2] = turretAnimIndexIdle;
  turretAnimIndexArrayOut[3] = turretAnimIndexFire;
  turretAnimIndexArrayOut[4] = turretAnimIndexDeployNode;
}

/*
==============
BG_Turret_ClientAnimLoadCallback
==============
*/
void BG_Turret_ClientAnimLoadCallback(const unsigned int turretIdx, const char *turretName)
{
  bool v3; 
  void *(__fastcall *v4)(unsigned __int64); 

  v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  v4 = CG_MainSP_AllocXAnimClient;
  if ( v3 )
    v4 = CG_MainMP_AllocXAnimClient;
  BG_Turret_LoadAnimCallback(0, turretName, v4);
}

/*
==============
BG_Turret_GetAnimsForTurretWeap
==============
*/
XAnim_s *BG_Turret_GetAnimsForTurretWeap(const Weapon *turretWeapon, int animUser)
{
  __int64 v2; 
  const WeaponDef *v4; 
  int v5; 
  const WeaponDef **i; 
  const char *WeaponName; 
  int v10; 
  char output[1024]; 

  v2 = animUser;
  if ( (unsigned int)animUser >= 2 )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v10) )
      __debugbreak();
  }
  if ( !turretWeapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 158, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( turretWeapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( turretWeapon )") )
    __debugbreak();
  v4 = BG_WeaponDef(turretWeapon, 0);
  v5 = 0;
  for ( i = &s_turretAnims[v2][0].weapDef; *i != v4; i += 2 )
  {
    if ( (unsigned int)++v5 >= 0x30 )
    {
      WeaponName = BG_GetWeaponName(turretWeapon, output, 0x400u);
      Com_PrintWarning(1, "Could not find turret anims for weapon %s\n", WeaponName);
      return 0i64;
    }
  }
  return s_turretAnims[v2][v5].anims;
}

/*
==============
BG_Turret_LoadAnimCallback
==============
*/
void BG_Turret_LoadAnimCallback(int animUser, const char *turretName, void *(*alloc)(unsigned __int64))
{
  __int64 v3; 
  const WeaponDef *v9; 
  __int64 v10; 
  int v11; 
  turretAnims_t *v12; 
  bool v13; 
  void *(__fastcall *v14)(unsigned __int64); 
  XAnim_s *AnimsWithParameters; 
  XAnimParts *turretRaiseAnim; 
  XAnimParts *turretIdleAnim; 
  XAnimParts *turretFireAnim; 
  XAnimSyncGroupID Alloc; 
  Weapon result; 
  Weapon r_weapon; 

  v3 = animUser;
  if ( (unsigned int)animUser >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, 2) )
    __debugbreak();
  if ( !turretName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 183, ASSERT_TYPE_ASSERT, "(turretName)", (const char *)&queryFormat, "turretName") )
    __debugbreak();
  if ( !*turretName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 184, ASSERT_TYPE_ASSERT, "(turretName[0])", (const char *)&queryFormat, "turretName[0]") )
    __debugbreak();
  _RAX = BG_FindBaseWeaponForName(&result, turretName);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v9 = BG_WeaponDef(&r_weapon, 0);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 189, ASSERT_TYPE_ASSERT, "(turretDef)", (const char *)&queryFormat, "turretDef") )
    __debugbreak();
  if ( BG_GetWeaponClass(&r_weapon, 0) == WEAPCLASS_TURRET )
  {
    v10 = turretAnimsCount[v3];
    v11 = v10;
    if ( (unsigned int)v10 >= 0x30 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD29D0, 662i64, 48i64);
      v11 = turretAnimsCount[v3];
    }
    v12 = &s_turretAnims[v3][v10];
    turretAnimsCount[v3] = v11 + 1;
    v12->weapDef = v9;
    XAnimAcquireMemoryLocks();
    if ( (_DWORD)v3 )
    {
      v14 = G_Main_HunkAllocXAnimServer;
    }
    else
    {
      v13 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
      v14 = CG_MainSP_AllocXAnimClient;
      if ( v13 )
        v14 = CG_MainMP_AllocXAnimClient;
    }
    AnimsWithParameters = XAnimCreateAnimsWithParameters("turret_root", XANIM_SUBTREE_DEFAULT, 5, 8, 8, 0, v14);
    if ( !AnimsWithParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turretanims.cpp", 107, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    LOBYTE(Alloc) = 4;
    XAnimBlend(AnimsWithParameters, 0, "root", 1u, 4u, 0x840u, Alloc, 1);
    turretRaiseAnim = v9->turretRaiseAnim;
    if ( turretRaiseAnim )
      BG_CreateXAnimFromParts(AnimsWithParameters, 1u, turretRaiseAnim, 1);
    else
      BG_CreateXAnim(AnimsWithParameters, 1u, "void", 1);
    turretIdleAnim = v9->turretIdleAnim;
    if ( turretIdleAnim )
      BG_CreateXAnimFromParts(AnimsWithParameters, 2u, turretIdleAnim, 1);
    else
      BG_CreateXAnim(AnimsWithParameters, 2u, "void", 1);
    turretFireAnim = v9->turretFireAnim;
    if ( turretFireAnim )
      BG_CreateXAnimFromParts(AnimsWithParameters, 3u, turretFireAnim, 1);
    else
      BG_CreateXAnim(AnimsWithParameters, 3u, "void", 1);
    if ( v9->autoAdjust )
    {
      XAnimTurret_CreateNode(AnimsWithParameters, 4u);
      XAnimSetupBindingIndexes(AnimsWithParameters);
    }
    XanimReleaseMemoryLocks();
    v12->anims = AnimsWithParameters;
  }
}

/*
==============
BG_Turret_ServerAnimLoadCallback
==============
*/
void BG_Turret_ServerAnimLoadCallback(const unsigned int turretIdx, const char *turretName)
{
  BG_Turret_LoadAnimCallback(1, turretName, G_Main_HunkAllocXAnimServer);
}

