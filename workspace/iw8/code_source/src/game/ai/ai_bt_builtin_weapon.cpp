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
  ai_common_t *v8; 
  const Weapon *v9; 
  gentity_s *TargetEntity; 
  int faceLikelyEnemyPathNeedCheckTime_low; 
  __int64 v16; 
  const Weapon *v17; 
  const scrContext_t *v19; 
  const Weapon *Weapon; 
  char v32; 
  char v33; 
  __int64 result; 
  AIWrapper v39; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v39, Ent);
  m_pAI = v39.m_pAI;
  v8 = v39.m_pAI->GetAI(v39.m_pAI);
  if ( BYTE1(v8[2].sight.faceLikelyEnemyPathNeedRecalculateTime) )
    goto LABEL_15;
  v9 = m_pAI->GetEquippedWeapon(m_pAI);
  if ( !v9->weaponIdx )
    goto LABEL_15;
  TargetEntity = AICommonInterface::GetTargetEntity(m_pAI);
  BG_GetClipSize(NULL, v9, 0);
  faceLikelyEnemyPathNeedCheckTime_low = LOWORD(v8[2].sight.faceLikelyEnemyPathNeedCheckTime);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, r12d
  }
  if ( !TargetEntity )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vcomiss xmm6, xmm1
    }
  }
  v16 = m_pAI->GetAI(m_pAI);
  if ( !*(_BYTE *)(v16 + 1175) )
  {
    v17 = m_pAI->GetEquippedWeapon(m_pAI);
    if ( BG_GetWeaponClass(v17, 0) != WEAPCLASS_PISTOL )
    {
      if ( AICommonInterface::GetTargetEntity(m_pAI) )
      {
        if ( !AICommonInterface::HasPath(m_pAI) )
        {
          v19 = ScriptContext_Server();
          Weapon = GScr_Weapon_GetWeapon(v19, (const scr_weapon_t)*(_DWORD *)(v16 + 1164));
          if ( Weapon->weaponIdx )
          {
            if ( BG_GetWeaponClass(Weapon, 0) == WEAPCLASS_PISTOL )
            {
              *(float *)&_XMM0 = GetPistolDist(m_pAI, 0);
              __asm
              {
                vmovss  xmm1, dword ptr [r15+130h]
                vmovss  xmm2, dword ptr [r15+134h]
                vmulss  xmm0, xmm0, xmm0
                vsubss  xmm4, xmm1, dword ptr [rax+130h]
                vsubss  xmm3, xmm2, dword ptr [rax+134h]
                vmovss  xmm1, dword ptr [r15+138h]
                vsubss  xmm5, xmm1, dword ptr [rax+138h]
                vmulss  xmm3, xmm3, xmm3
                vmulss  xmm2, xmm4, xmm4
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm5, xmm4, xmm1
                vcomiss xmm0, xmm5
              }
              if ( !(v32 | v33) )
                goto LABEL_15;
            }
          }
        }
      }
    }
  }
  if ( faceLikelyEnemyPathNeedCheckTime_low )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vmulss  xmm1, xmm0, cs:__real@3dcccccd
      vcomiss xmm6, xmm1
    }
LABEL_15:
    result = 0i64;
    goto LABEL_16;
  }
  result = 1i64;
LABEL_16:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
BT_UpdateWeapon
==============
*/
__int64 BT_UpdateWeapon(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  bool v8; 
  __int64 v18; 
  int v19; 
  scrContext_t *v21; 
  AIScriptedInterface_vtbl *v22; 
  const scrContext_t *v23; 
  const Weapon *v24; 
  const Weapon *Weapon; 
  const Weapon *v26; 
  const Weapon *v27; 
  int v28; 
  __int64 *v29; 
  char v30; 
  const Weapon *v32; 
  bool v33; 
  bool v34; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  AIWrapper v59; 
  __int64 v60; 
  int v61; 
  __int16 v62; 
  char v63; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v59, Ent);
  m_pAI = v59.m_pAI;
  v8 = 0;
  _RSI = v59.m_pAI->GetAI(v59.m_pAI);
  if ( !AICommonInterface::HasPath(m_pAI) )
  {
    v18 = m_pAI->GetAI(m_pAI);
    if ( AICommonInterface::IsUsingTurret(m_pAI) )
    {
      v19 = 14;
    }
    else
    {
      if ( *(_BYTE *)(v18 + 1172) || *(_BYTE *)(v18 + 570) )
      {
        v19 = 5;
      }
      else
      {
        __asm { vmovaps [rsp+0E8h+var_38], xmm6 }
        v19 = 14;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        v21 = ScriptContext_Server();
        v22 = m_pAI->__vftable;
        v23 = v21;
        v60 = 0i64;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v24 = v22->GetEquippedWeapon(m_pAI);
        if ( v24->weaponIdx )
          *((_BYTE *)&v60 + (int)BG_GetWeaponClass(v24, 0)) = 1;
        Weapon = GScr_Weapon_GetWeapon(v23, (const scr_weapon_t)*(_DWORD *)(v18 + 1156));
        if ( Weapon->weaponIdx )
          *((_BYTE *)&v60 + (int)BG_GetWeaponClass(Weapon, 0)) = 1;
        v26 = GScr_Weapon_GetWeapon(v23, (const scr_weapon_t)*(_DWORD *)(v18 + 1160));
        if ( v26->weaponIdx )
          *((_BYTE *)&v60 + (int)BG_GetWeaponClass(v26, 0)) = 1;
        v27 = GScr_Weapon_GetWeapon(v23, (const scr_weapon_t)*(_DWORD *)(v18 + 1164));
        if ( v27->weaponIdx )
          *((_BYTE *)&v60 + (int)BG_GetWeaponClass(v27, 0)) = 1;
        v28 = 0;
        v29 = &v60;
        do
        {
          if ( *(_BYTE *)v29 )
          {
            *(float *)&_XMM0 = GetWeaponScore(m_pAI, (const weapClass_t)v28);
            __asm { vcomiss xmm0, xmm6 }
            if ( !(v34 | v30) )
            {
              __asm { vmovaps xmm6, xmm0 }
              v19 = v28;
            }
          }
          ++v28;
          v29 = (__int64 *)((char *)v29 + 1);
        }
        while ( v28 < 15 );
        __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
        if ( v19 == 14 )
          goto LABEL_24;
      }
      v8 = _RSI[1].threat.iPacifistWait != v19;
    }
LABEL_24:
    _RSI[1].threat.iPacifistWait = v19;
    goto LABEL_25;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+838h]
    vmovss  xmm2, dword ptr [rsi+83Ch]
    vmovss  xmm3, dword ptr [rsi+840h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3f800000
  }
LABEL_25:
  if ( !_RSI[1].threat.bPacifist )
    return 1i64;
  if ( !AIScriptedInterface::IsSniper(m_pAI, 0) )
    goto LABEL_51;
  v32 = m_pAI->GetEquippedWeapon(m_pAI);
  v33 = BG_GetWeaponClass(v32, 0) == WEAPCLASS_SNIPER;
  if ( v8 )
    HIBYTE(_RSI[1].threat.threatSightRateMin) = 0;
  if ( !v33 || AIScriptedInterface::GetCoverNode(m_pAI) )
    return 1i64;
  v34 = 0;
  if ( BYTE1(_RSI[1].threat.threatSightRateMin) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1F0h]
      vmovss  xmm1, dword ptr [rsi+1F4h]
      vsubss  xmm3, xmm0, dword ptr [rax+130h]
      vmovss  xmm0, dword ptr [rsi+1F8h]
      vsubss  xmm4, xmm0, dword ptr [rax+138h]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
    }
    goto LABEL_50;
  }
  if ( !EntHandle::isDefined((EntHandle *)&_RSI[1].threat.threatSight) )
  {
LABEL_51:
    HIBYTE(_RSI[1].threat.threatSightRateMin) = 0;
    return 1i64;
  }
  v41 = *(unsigned __int16 *)&_RSI[1].threat.threatSight;
  if ( (unsigned int)(v41 - 1) >= 0x7FF )
  {
    v58 = 2047;
    v56 = v41 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v56, v58) )
      __debugbreak();
  }
  v42 = *(unsigned __int16 *)&_RSI[1].threat.threatSight;
  if ( (unsigned int)(v42 - 1) >= 0x800 )
  {
    LODWORD(v57) = 2048;
    LODWORD(v55) = v42 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v55, v57) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v43 = v42 - 1;
  if ( g_entities[v43].r.isInUse != g_entityIsInUse[v43] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v43] )
  {
    LODWORD(v57) = *(unsigned __int16 *)&_RSI[1].threat.threatSight - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v57) )
      __debugbreak();
  }
  _RDX = g_entities;
  _R8 = 1456i64 * *(unsigned __int16 *)&_RSI[1].threat.threatSight;
  v34 = (1456 * (unsigned __int128)*(unsigned __int16 *)&_RSI[1].threat.threatSight) >> 64 != 0;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+rdx-480h]
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [r8+rdx-478h]
    vmovss  xmm1, dword ptr [r8+rdx-47Ch]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
  }
LABEL_50:
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, cs:__real@48800000
  }
  if ( v34 )
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
  __int64 v5; 
  const scrContext_t *v6; 
  const Weapon *Weapon; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@43cc8000
  }
  _EDI = bCurrentlyUsingPistol;
  v5 = pAI->GetAI(&pAI->AICommonInterface);
  v6 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v6, (const scr_weapon_t)*(_DWORD *)(v5 + 1156));
  _EAX = BG_GetWeaponClass(Weapon, 0);
  __asm { vmovss  xmm2, cs:__real@44000000 }
  _ECX = 1;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm4, xmm6, xmm2, xmm3
    vaddss  xmm3, xmm4, cs:__real@42100000
    vmovaps xmm6, [rsp+38h+var_18]
  }
  _ECX = 0;
  __asm
  {
    vmovd   xmm0, edi
    vmovd   xmm1, ecx
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
  __int64 v6; 
  __int64 v7; 
  const Weapon *v9; 
  weapClass_t v10; 
  const pathnode_t *v12; 
  char v30; 
  char v31; 
  const Weapon *v32; 
  weapClass_t WeaponClass; 
  const pathnode_t *CoverNode; 

  v6 = pAI->GetAI(pAI);
  v7 = v6;
  switch ( weapClass )
  {
    case WEAPCLASS_MG:
      v32 = pAI->GetEquippedWeapon(pAI);
      WeaponClass = BG_GetWeaponClass(v32, 0);
      CoverNode = AIScriptedInterface::GetCoverNode(pAI);
      if ( WeaponClass != WEAPCLASS_PISTOL || !CoverNode || AIScriptedInterface::Cover_IsValidAgainstEnemy(pAI, CoverNode, 1) )
        break;
      goto LABEL_28;
    case WEAPCLASS_PISTOL:
      if ( *(_BYTE *)(v6 + 1175) )
        goto LABEL_28;
      v9 = pAI->GetEquippedWeapon(pAI);
      v10 = BG_GetWeaponClass(v9, 0);
      if ( v10 != WEAPCLASS_ROCKETLAUNCHER || *(_BYTE *)(v7 + 1171) )
      {
        if ( !AICommonInterface::GetTargetEntity(pAI) )
          goto LABEL_28;
        v12 = AIScriptedInterface::GetCoverNode(pAI);
        if ( v12 )
        {
          if ( v10 == WEAPCLASS_MG && !AIScriptedInterface::Cover_IsValidAgainstEnemy(pAI, v12, 1) )
            goto LABEL_24;
          if ( *(_DWORD *)(v7 + 488) != scr_const.hide )
            goto LABEL_28;
        }
        *(float *)&_XMM0 = GetPistolDist(pAI, v10 == WEAPCLASS_PISTOL);
        __asm
        {
          vmovss  xmm1, dword ptr [r14+130h]
          vmovss  xmm2, dword ptr [r14+134h]
          vsubss  xmm4, xmm1, dword ptr [rax+130h]
          vsubss  xmm3, xmm2, dword ptr [rax+134h]
          vmovss  xmm1, dword ptr [r14+138h]
          vsubss  xmm5, xmm1, dword ptr [rax+138h]
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm3, xmm3, xmm3
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
        }
        if ( v10 == WEAPCLASS_MG )
          __asm { vcomiss xmm2, cs:__real@46800000 }
        __asm
        {
          vmulss  xmm0, xmm0, xmm0
          vcomiss xmm2, xmm0
        }
        if ( (unsigned int)v10 >= WEAPCLASS_MG )
          goto LABEL_28;
        if ( !AIScriptedInterface::IsSniper(pAI, 0) )
        {
          if ( v9->weaponIdx )
          {
            if ( *(_DWORD *)(v7 + 1152) == *(_DWORD *)(v7 + 1156) )
            {
              __asm
              {
                vmovaps [rsp+48h+var_28], xmm6
                vxorps  xmm6, xmm6, xmm6
                vcvtsi2ss xmm6, xmm6, eax
              }
              BG_GetClipSize(NULL, v9, 0);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, cs:__real@3dcccccd
                vcomiss xmm6, xmm1
                vmovaps xmm6, [rsp+48h+var_28]
              }
              if ( !(v30 | v31) )
              {
                __asm { vmovss  xmm0, cs:__real@41200000 }
                return *(float *)&_XMM0;
              }
            }
          }
        }
      }
LABEL_24:
      __asm { vmovss  xmm0, cs:__real@447a0000 }
      return *(float *)&_XMM0;
    case WEAPCLASS_ROCKETLAUNCHER:
      if ( *(_BYTE *)(v6 + 1171) )
        break;
LABEL_28:
      __asm { vxorps  xmm0, xmm0, xmm0 }
      return *(float *)&_XMM0;
    case WEAPCLASS_NONE:
      goto LABEL_28;
  }
  __asm { vmovss  xmm0, cs:__real@42c80000 }
  return *(float *)&_XMM0;
}

/*
==============
Reload_CheatAmmo
==============
*/
void Reload_CheatAmmo(ai_scripted_t *pScripted, int clipSize)
{
  int v9; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si ebx, xmm1
  }
  if ( clipSize < 0 )
  {
    v9 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v9, clipSize) )
      __debugbreak();
  }
  if ( clipSize < _EBX )
    _EBX = clipSize;
  if ( _EBX < 0 )
    LOWORD(_EBX) = 0;
  pScripted->weaponInfo.bulletsInClip = _EBX;
}

