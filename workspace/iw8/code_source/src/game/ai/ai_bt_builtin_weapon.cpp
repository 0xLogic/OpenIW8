/*
==============
BT_Reload_Init
==============
*/

int __fastcall BT_Reload_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Reload_Init@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_IsSniper
==============
*/

int __fastcall BT_IsSniper(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_IsSniper@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_HasAmmo
==============
*/

int __fastcall BT_HasAmmo(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_HasAmmo@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Reload_Update
==============
*/

int __fastcall BT_Reload_Update(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Reload_Update@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_HasGrenades
==============
*/

int __fastcall BT_HasGrenades(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_HasGrenades@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_ShouldReload
==============
*/

int __fastcall BT_ShouldReload(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_ShouldReload@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Reload_Terminate
==============
*/

int __fastcall BT_Reload_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Reload_Terminate@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_UpdateWeapon
==============
*/

int __fastcall BT_UpdateWeapon(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_UpdateWeapon@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_HasAmmo
==============
*/
_BOOL8 BT_HasAmmo(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  AIWrapper v8; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v8, Ent);
  m_pAI = v8.m_pAI;
  AIScripted = AI_GetAIScripted(Ent);
  return AICommonInterface::IsUsingTurret(m_pAI) || AIScripted->currentWeapon && (AIScripted->weaponInfo.bDisableReload || AIScripted->weaponInfo.bulletsInClip);
}

/*
==============
BT_HasGrenades
==============
*/
_BOOL8 BT_HasGrenades(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 

  Ent = BT_GetEnt(entNum);
  return AI_GetAIScripted(Ent)->weaponInfo.grenadeAmmo != 0;
}

/*
==============
BT_ShouldReload
==============
*/
__int64 BT_ShouldReload(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_common_t *v6; 
  const Weapon *v7; 
  gentity_s *TargetEntity; 
  int ClipSize; 
  int faceLikelyEnemyPathNeedCheckTime_low; 
  int v11; 
  float v12; 
  __int64 v13; 
  const Weapon *v14; 
  gentity_s *v15; 
  const scrContext_t *v16; 
  const Weapon *Weapon; 
  float PistolDist; 
  float v19; 
  float v20; 
  float v21; 
  double PathDistToGoal; 
  AIWrapper v24; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v24, Ent);
  m_pAI = v24.m_pAI;
  v6 = v24.m_pAI->GetAI(v24.m_pAI);
  if ( BYTE1(v6[2].sight.faceLikelyEnemyPathNeedRecalculateTime) )
    return 0i64;
  v7 = m_pAI->GetEquippedWeapon(m_pAI);
  if ( !v7->weaponIdx )
    return 0i64;
  TargetEntity = AICommonInterface::GetTargetEntity(m_pAI);
  ClipSize = BG_GetClipSize(NULL, v7, 0);
  faceLikelyEnemyPathNeedCheckTime_low = LOWORD(v6[2].sight.faceLikelyEnemyPathNeedCheckTime);
  v11 = ClipSize;
  v12 = (float)faceLikelyEnemyPathNeedCheckTime_low;
  if ( !TargetEntity && v12 < (float)((float)ClipSize * 0.5) )
    return 1i64;
  v13 = m_pAI->GetAI(m_pAI);
  if ( !*(_BYTE *)(v13 + 1175) )
  {
    v14 = m_pAI->GetEquippedWeapon(m_pAI);
    if ( BG_GetWeaponClass(v14, 0) != WEAPCLASS_PISTOL )
    {
      v15 = AICommonInterface::GetTargetEntity(m_pAI);
      if ( v15 )
      {
        if ( !AICommonInterface::HasPath(m_pAI) )
        {
          v16 = ScriptContext_Server();
          Weapon = GScr_Weapon_GetWeapon(v16, (const scr_weapon_t)*(_DWORD *)(v13 + 1164));
          if ( Weapon->weaponIdx )
          {
            if ( BG_GetWeaponClass(Weapon, 0) == WEAPCLASS_PISTOL )
            {
              PistolDist = GetPistolDist(m_pAI, 0);
              v19 = v15->r.currentOrigin.v[0] - *(float *)(*(_QWORD *)v13 + 304i64);
              v20 = v15->r.currentOrigin.v[1] - *(float *)(*(_QWORD *)v13 + 308i64);
              v21 = v15->r.currentOrigin.v[2] - *(float *)(*(_QWORD *)v13 + 312i64);
              if ( (float)(PistolDist * PistolDist) > (float)((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21)) )
                return 0i64;
            }
          }
        }
      }
    }
  }
  if ( faceLikelyEnemyPathNeedCheckTime_low && (v12 > (float)((float)v11 * 0.1) || AICommonInterface::HasPath(m_pAI) && (BYTE2(v6[2].sight.faceLikelyEnemyPathNeedRecalculateTime) || (unsigned int)BG_GetWeaponClass(v7, 0) > WEAPCLASS_SPREAD || (PathDistToGoal = Nav_GetPathDistToGoal(v6->pNavigator), *(float *)&PathDistToGoal < 256.0))) )
    return 0i64;
  else
    return 1i64;
}

/*
==============
BT_UpdateWeapon
==============
*/
__int64 BT_UpdateWeapon(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  __int128 v4; 
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  bool v7; 
  ai_common_t *v8; 
  __int64 v9; 
  int v10; 
  float v11; 
  scrContext_t *v12; 
  AIScriptedInterface_vtbl *v13; 
  const scrContext_t *v14; 
  const Weapon *v15; 
  const Weapon *Weapon; 
  const Weapon *v17; 
  const Weapon *v18; 
  int v19; 
  __int64 *v20; 
  float WeaponScore; 
  const Weapon *v22; 
  bool v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  AIWrapper v36; 
  __int64 v37; 
  int v38; 
  __int16 v39; 
  char v40; 
  __int128 v41; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v36, Ent);
  m_pAI = v36.m_pAI;
  v7 = 0;
  v8 = v36.m_pAI->GetAI(v36.m_pAI);
  if ( AICommonInterface::HasPath(m_pAI) && (float)((float)((float)(v8[4].sight.lastEnemySightPos.v[0] * v8[4].sight.lastEnemySightPos.v[0]) + (float)(v8[4].sight.lastEnemySightPos.v[1] * v8[4].sight.lastEnemySightPos.v[1])) + (float)(v8[4].sight.lastEnemySightPos.v[2] * v8[4].sight.lastEnemySightPos.v[2])) >= 1.0 )
    goto LABEL_25;
  v9 = m_pAI->GetAI(m_pAI);
  if ( AICommonInterface::IsUsingTurret(m_pAI) )
  {
    v10 = 14;
  }
  else
  {
    if ( *(_BYTE *)(v9 + 1172) || *(_BYTE *)(v9 + 570) )
    {
      v10 = 5;
    }
    else
    {
      v41 = v4;
      v10 = 14;
      v11 = 0.0;
      v12 = ScriptContext_Server();
      v13 = m_pAI->__vftable;
      v14 = v12;
      v37 = 0i64;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v15 = v13->GetEquippedWeapon(m_pAI);
      if ( v15->weaponIdx )
        *((_BYTE *)&v37 + (int)BG_GetWeaponClass(v15, 0)) = 1;
      Weapon = GScr_Weapon_GetWeapon(v14, (const scr_weapon_t)*(_DWORD *)(v9 + 1156));
      if ( Weapon->weaponIdx )
        *((_BYTE *)&v37 + (int)BG_GetWeaponClass(Weapon, 0)) = 1;
      v17 = GScr_Weapon_GetWeapon(v14, (const scr_weapon_t)*(_DWORD *)(v9 + 1160));
      if ( v17->weaponIdx )
        *((_BYTE *)&v37 + (int)BG_GetWeaponClass(v17, 0)) = 1;
      v18 = GScr_Weapon_GetWeapon(v14, (const scr_weapon_t)*(_DWORD *)(v9 + 1164));
      if ( v18->weaponIdx )
        *((_BYTE *)&v37 + (int)BG_GetWeaponClass(v18, 0)) = 1;
      v19 = 0;
      v20 = &v37;
      do
      {
        if ( *(_BYTE *)v20 )
        {
          WeaponScore = GetWeaponScore(m_pAI, (const weapClass_t)v19);
          if ( WeaponScore > v11 )
          {
            v11 = WeaponScore;
            v10 = v19;
          }
        }
        ++v19;
        v20 = (__int64 *)((char *)v20 + 1);
      }
      while ( v19 < 15 );
      if ( v10 == 14 )
        goto LABEL_24;
    }
    v7 = v8[1].threat.iPacifistWait != v10;
  }
LABEL_24:
  v8[1].threat.iPacifistWait = v10;
LABEL_25:
  if ( !v8[1].threat.bPacifist )
    return 1i64;
  if ( !AIScriptedInterface::IsSniper(m_pAI, 0) )
    goto LABEL_51;
  v22 = m_pAI->GetEquippedWeapon(m_pAI);
  v23 = BG_GetWeaponClass(v22, 0) == WEAPCLASS_SNIPER;
  if ( v7 )
    HIBYTE(v8[1].threat.threatSightRateMin) = 0;
  if ( !v23 || AIScriptedInterface::GetCoverNode(m_pAI) )
    return 1i64;
  if ( BYTE1(v8[1].threat.threatSightRateMin) )
  {
    v24 = *(float *)&v8[1].sentientInfo - v8->ent->r.currentOrigin.v[0];
    v25 = *(float *)&v8[1].threat.hasThreateningEnemy - v8->ent->r.currentOrigin.v[2];
    v26 = *((float *)&v8[1].sentientInfo + 1) - v8->ent->r.currentOrigin.v[1];
    goto LABEL_50;
  }
  if ( !EntHandle::isDefined((EntHandle *)&v8[1].threat.threatSight) )
  {
LABEL_51:
    HIBYTE(v8[1].threat.threatSightRateMin) = 0;
    return 1i64;
  }
  v27 = *(unsigned __int16 *)&v8[1].threat.threatSight;
  if ( (unsigned int)(v27 - 1) >= 0x7FF )
  {
    v35 = 2047;
    v33 = v27 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v33, v35) )
      __debugbreak();
  }
  v28 = *(unsigned __int16 *)&v8[1].threat.threatSight;
  if ( (unsigned int)(v28 - 1) >= 0x800 )
  {
    LODWORD(v34) = 2048;
    LODWORD(v32) = v28 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v34) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v29 = v28 - 1;
  if ( g_entities[v29].r.isInUse != g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v29] )
  {
    LODWORD(v34) = *(unsigned __int16 *)&v8[1].threat.threatSight - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v34) )
      __debugbreak();
  }
  v30 = *(unsigned __int16 *)&v8[1].threat.threatSight;
  v24 = g_entities[v30 - 1].r.currentOrigin.v[0] - v8->ent->r.currentOrigin.v[0];
  v25 = g_entities[v30 - 1].r.currentOrigin.v[2] - v8->ent->r.currentOrigin.v[2];
  v26 = g_entities[v30 - 1].r.currentOrigin.v[1] - v8->ent->r.currentOrigin.v[1];
LABEL_50:
  if ( (float)((float)((float)(v26 * v26) + (float)(v24 * v24)) + (float)(v25 * v25)) < 262144.0 )
    goto LABEL_51;
  return 1i64;
}

/*
==============
BT_Reload_Init
==============
*/
__int64 BT_Reload_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_bt_instance_data *v8; 
  AIWrapper v10; 

  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_weapon.cpp", 168, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v10, Ent);
  m_pAI = v10.m_pAI;
  *(_BYTE *)((__int64)v10.m_pAI->GetAI(v10.m_pAI) + 569) = 1;
  v8 = BT_AllocInstanceData(pInOutInstIndex);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_weapon.cpp", 176, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  v8->u.grenadeAvoid.m_EndTime = level.time + 5000;
  v8->u.reload.m_bHadPath = AICommonInterface::HasPath(m_pAI);
  return 1i64;
}

/*
==============
BT_Reload_Update
==============
*/
__int64 BT_Reload_Update(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_common_t *v7; 
  ai_scripted_t *v8; 
  Ai_Asm *v9; 
  ASM_Instance *Instance; 
  ASM_Instance *v11; 
  scr_string_t reload; 
  Ai_Asm *v13; 
  ai_bt_instance_data *InstanceData; 
  const Weapon *v15; 
  int ClipSize; 
  AIWrapper v18; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v18, Ent);
  m_pAI = v18.m_pAI;
  v7 = v18.m_pAI->GetAI(v18.m_pAI);
  LODWORD(Ent) = Ent->s.number;
  v8 = (ai_scripted_t *)v7;
  v9 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v9, NULL, (int)Ent);
  LODWORD(Ent) = scr_const.end;
  v11 = Instance;
  reload = scr_const.reload;
  v13 = Ai_Asm::Singleton();
  if ( !Common_Asm::EphemeralEventFired(v13, v11, reload, (const scr_string_t)Ent) )
  {
    if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_weapon.cpp", 195, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
      __debugbreak();
    InstanceData = BT_GetInstanceData(*pInOutInstIndex);
    if ( level.time <= InstanceData->u.grenadeAvoid.m_EndTime )
    {
      v15 = m_pAI->GetEquippedWeapon(m_pAI);
      ClipSize = BG_GetClipSize(NULL, v15, 0);
      if ( AIScriptedInterface::IsSniper(m_pAI, 1) || v8->weaponInfo.bulletsInClip != ClipSize )
      {
        if ( !v8->weaponInfo.bDisableReload && !v8->bRunNGun && (!AICommonInterface::HasPath(m_pAI) || v8->orientation.faceMotion || m_pAI->Is3D(m_pAI)) && (InstanceData->u.reload.m_bHadPath || !AICommonInterface::HasPath(m_pAI)) )
          return 2i64;
        Reload_CheatAmmo(v8, ClipSize);
      }
    }
  }
  return 1i64;
}

/*
==============
BT_Reload_Terminate
==============
*/
__int64 BT_Reload_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIWrapper v7; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v7, Ent);
  *(_BYTE *)((__int64)v7.m_pAI->GetAI(v7.m_pAI) + 569) = 0;
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_weapon.cpp", 248, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  BT_FreeInstanceData(pInOutInstIndex);
  return 1i64;
}

/*
==============
BT_IsSniper
==============
*/
_BOOL8 BT_IsSniper(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  bool BoolParam; 
  AIWrapper v11; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v11, Ent);
  m_pAI = v11.m_pAI;
  BoolParam = 1;
  if ( paramsID != 0xFFFF )
    BoolParam = BT_Builtin_GetBoolParam(pTree, taskID, paramsID);
  return AIScriptedInterface::IsSniper(m_pAI, BoolParam);
}

/*
==============
GetPistolDist
==============
*/
float GetPistolDist(const AIScriptedInterface *pAI, bool bCurrentlyUsingPistol)
{
  BOOL v3; 
  __int64 v4; 
  const scrContext_t *v5; 
  const Weapon *Weapon; 
  __int128 v11; 

  _XMM6 = LODWORD(FLOAT_409_0);
  v3 = bCurrentlyUsingPistol;
  v4 = pAI->GetAI(&pAI->AICommonInterface);
  v5 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v5, (const scr_weapon_t)*(_DWORD *)(v4 + 1156));
  _XMM0 = (unsigned int)BG_GetWeaponClass(Weapon, 0);
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm4, xmm6, xmm2, xmm3
  }
  v11 = _XMM4;
  *(float *)&v11 = *(float *)&_XMM4 + 36.0;
  _XMM3 = v11;
  _XMM0 = v3;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
GetWeaponScore
==============
*/
float GetWeaponScore(AIScriptedInterface *pAI, const weapClass_t weapClass)
{
  __int64 v4; 
  __int64 v5; 
  const Weapon *v7; 
  weapClass_t v8; 
  gentity_s *TargetEntity; 
  const pathnode_t *v10; 
  float PistolDist; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const Weapon *v16; 
  weapClass_t WeaponClass; 
  const pathnode_t *CoverNode; 

  v4 = pAI->GetAI(pAI);
  v5 = v4;
  if ( weapClass == WEAPCLASS_MG )
  {
    v16 = pAI->GetEquippedWeapon(pAI);
    WeaponClass = BG_GetWeaponClass(v16, 0);
    CoverNode = AIScriptedInterface::GetCoverNode(pAI);
    if ( WeaponClass != WEAPCLASS_PISTOL || !CoverNode || AIScriptedInterface::Cover_IsValidAgainstEnemy(pAI, CoverNode, 1) )
      return FLOAT_100_0;
    return 0.0;
  }
  if ( weapClass != WEAPCLASS_PISTOL )
  {
    if ( weapClass == WEAPCLASS_ROCKETLAUNCHER )
    {
      if ( *(_BYTE *)(v4 + 1171) )
        return FLOAT_100_0;
    }
    else if ( weapClass != WEAPCLASS_NONE )
    {
      return FLOAT_100_0;
    }
    return 0.0;
  }
  if ( !*(_BYTE *)(v4 + 1175) )
  {
    v7 = pAI->GetEquippedWeapon(pAI);
    v8 = BG_GetWeaponClass(v7, 0);
    if ( v8 == WEAPCLASS_ROCKETLAUNCHER && !*(_BYTE *)(v5 + 1171) )
      return FLOAT_1000_0;
    TargetEntity = AICommonInterface::GetTargetEntity(pAI);
    if ( !TargetEntity )
      return 0.0;
    v10 = AIScriptedInterface::GetCoverNode(pAI);
    if ( v10 )
    {
      if ( v8 == WEAPCLASS_MG && !AIScriptedInterface::Cover_IsValidAgainstEnemy(pAI, v10, 1) )
        return FLOAT_1000_0;
      if ( *(_DWORD *)(v5 + 488) != scr_const.hide )
        return 0.0;
    }
    PistolDist = GetPistolDist(pAI, v8 == WEAPCLASS_PISTOL);
    v12 = TargetEntity->r.currentOrigin.v[0] - *(float *)(*(_QWORD *)v5 + 304i64);
    v13 = TargetEntity->r.currentOrigin.v[1] - *(float *)(*(_QWORD *)v5 + 308i64);
    v14 = TargetEntity->r.currentOrigin.v[2] - *(float *)(*(_QWORD *)v5 + 312i64);
    if ( v8 != WEAPCLASS_MG || (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) >= 16384.0 )
    {
      if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) < (float)(PistolDist * PistolDist) )
      {
        if ( !AIScriptedInterface::IsSniper(pAI, 0) )
        {
          if ( v7->weaponIdx )
          {
            if ( *(_DWORD *)(v5 + 1152) == *(_DWORD *)(v5 + 1156) )
            {
              v15 = (float)*(unsigned __int16 *)(v5 + 1168);
              if ( v15 > (float)((float)BG_GetClipSize(NULL, v7, 0) * 0.1) )
                return FLOAT_10_0;
            }
          }
        }
        return FLOAT_1000_0;
      }
      return 0.0;
    }
    return FLOAT_1000_0;
  }
  return 0.0;
}

/*
==============
Reload_CheatAmmo
==============
*/
void Reload_CheatAmmo(ai_scripted_t *pScripted, int clipSize)
{
  int v4; 
  int v5; 

  v4 = (int)(float)((float)clipSize * 0.5);
  if ( clipSize < 0 )
  {
    v5 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v5, clipSize) )
      __debugbreak();
  }
  if ( clipSize < v4 )
    v4 = clipSize;
  if ( v4 < 0 )
    LOWORD(v4) = 0;
  pScripted->weaponInfo.bulletsInClip = v4;
}

