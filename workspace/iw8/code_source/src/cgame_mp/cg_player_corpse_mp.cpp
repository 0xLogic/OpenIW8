/*
==============
CG_PlayerCorpseMP_ClearAllPlayerCorpses
==============
*/

void __fastcall CG_PlayerCorpseMP_ClearAllPlayerCorpses(LocalClientNum_t localClientNum)
{
  ?CG_PlayerCorpseMP_ClearAllPlayerCorpses@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap
==============
*/

void __fastcall CG_PlayerCorpseMP_SetNextSnap(const LocalClientNum_t localClientNum, const bool demoJumpTime, const entityState_t *const *nextSnapCorpseEnts, const unsigned int nextSnapCorpseEntsCount)
{
  ?CG_PlayerCorpseMP_SetNextSnap@@YAXW4LocalClientNum_t@@_NPEBQEBUentityState_t@@I@Z(localClientNum, demoJumpTime, nextSnapCorpseEnts, nextSnapCorpseEntsCount);
}

/*
==============
CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding
==============
*/

void __fastcall CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding(const LocalClientNum_t localClientNum, CGCorpseInfoMP *corpseInfo, const __int16 entnum)
{
  ?CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding@@YAXW4LocalClientNum_t@@PEAUCGCorpseInfoMP@@F@Z(localClientNum, corpseInfo, entnum);
}

/*
==============
CG_PlayerCorpseMP_ShutdownEntity
==============
*/

void __fastcall CG_PlayerCorpseMP_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PlayerCorpseMP_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PlayerCorpseMP_GetFreePlayerCorpseIndex
==============
*/

int __fastcall CG_PlayerCorpseMP_GetFreePlayerCorpseIndex(LocalClientNum_t localClientNum)
{
  return ?CG_PlayerCorpseMP_GetFreePlayerCorpseIndex@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse
==============
*/

void __fastcall CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse(LocalClientNum_t localClientNum, int sourceEntNum, CGCorpseInfoMP *destCorpseInfo)
{
  ?CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse@@YAXW4LocalClientNum_t@@HPEAUCGCorpseInfoMP@@@Z(localClientNum, sourceEntNum, destCorpseInfo);
}

/*
==============
CG_PlayerCorpseMP_FreeClientCorpse
==============
*/

void __fastcall CG_PlayerCorpseMP_FreeClientCorpse(LocalClientNum_t localClientNum)
{
  ?CG_PlayerCorpseMP_FreeClientCorpse@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum
==============
*/

CGCorpseInfoMP *__fastcall CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum(LocalClientNum_t localClientNum, const __int16 server_entnum)
{
  return ?CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum@@YAPEAUCGCorpseInfoMP@@W4LocalClientNum_t@@F@Z(localClientNum, server_entnum);
}

/*
==============
CG_PlayerCorpseMP_DebugDraw
==============
*/

void __fastcall CG_PlayerCorpseMP_DebugDraw(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?CG_PlayerCorpseMP_DebugDraw@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum
==============
*/

CGCorpseInfoMP *__fastcall CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum(LocalClientNum_t localClientNum, const __int16 client_entnum)
{
  return ?CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum@@YAPEAUCGCorpseInfoMP@@W4LocalClientNum_t@@F@Z(localClientNum, client_entnum);
}

/*
==============
CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding
==============
*/

void __fastcall CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(const LocalClientNum_t localClientNum, CGCorpseInfoMP *corpseInfo, const __int16 entnum)
{
  ?CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding@@YAXW4LocalClientNum_t@@PEAUCGCorpseInfoMP@@F@Z(localClientNum, corpseInfo, entnum);
}

/*
==============
CG_PlayerCorpseMP_CopyCorpseInfo
==============
*/

void __fastcall CG_PlayerCorpseMP_CopyCorpseInfo(CGCorpseInfoMP *corpseInfo, const characterInfo_t *ci, const ClientCustomizationInfo *customization)
{
  ?CG_PlayerCorpseMP_CopyCorpseInfo@@YAXPEAUCGCorpseInfoMP@@PEBUcharacterInfo_t@@PEBUClientCustomizationInfo@@@Z(corpseInfo, ci, customization);
}

/*
==============
CG_PlayerCorpseMP_Init
==============
*/

void __fastcall CG_PlayerCorpseMP_Init(LocalClientNum_t localClientNum)
{
  ?CG_PlayerCorpseMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_ShutdownCorpse
==============
*/

void __fastcall CG_PlayerCorpseMP_SetNextSnap_ShutdownCorpse(const LocalClientNum_t localClientNum, centity_t *corpseEnt)
{
  ?CG_PlayerCorpseMP_SetNextSnap_ShutdownCorpse@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, corpseEnt);
}

/*
==============
CG_GetCorpseFreeIndex
==============
*/
__int64 CG_GetCorpseFreeIndex(LocalClientNum_t localClientNum, const CGCorpseInfoMP *const corpseInfos, int numCorpseInfos, int corpseEntOffset, const vec3_t *vRefPos, const vec3_t *vRefDir, const bool use2DDist)
{
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int v11; 
  int v13; 
  unsigned int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int *p_infoValid; 
  CgEntitySystem *v21; 
  __int64 v22; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v27; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v44; 
  __int64 v55; 
  __int64 v56; 
  int v57[4]; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  unsigned int v62; 
  __int64 v63; 

  v63 = -2i64;
  v7 = corpseEntOffset;
  v61 = corpseEntOffset;
  v8 = numCorpseInfos;
  v60 = numCorpseInfos;
  v9 = localClientNum;
  _XMM11 = LODWORD(FLOAT_N1_0);
  v11 = 0;
  _XMM12 = LODWORD(FLOAT_N1_0);
  v13 = 0;
  v58 = 0;
  _XMM14 = LODWORD(FLOAT_N1_0);
  v15 = 0;
  v59 = 0;
  v16 = 0;
  v17 = 0;
  if ( v60 <= 0 )
    return 0xFFFFFFFFi64;
  v18 = v7;
  p_infoValid = &corpseInfos->ci.infoValid;
  _XMM7 = 0i64;
  do
  {
    if ( (p_infoValid[3697] & 1) != 0 && *p_infoValid )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v56) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v56) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v56) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v55) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v55, v56) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v9] )
      {
        LODWORD(v56) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v56) )
          __debugbreak();
      }
      v21 = CgEntitySystem::ms_entitySystemArray[v9];
      if ( (unsigned int)(v17 + v61) >= 0x800 )
      {
        LODWORD(v56) = 2048;
        LODWORD(v55) = v17 + v61;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v55, v56) )
          __debugbreak();
      }
      v22 = (__int64)&v21->m_entities[v18];
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 115, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
        __debugbreak();
      if ( ((*(_WORD *)(v22 + 408) - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(corpseEnt->nextState.eType == ET_AGENT_CORPSE || corpseEnt->nextState.eType == ET_PLAYER_CORPSE)", (const char *)&queryFormat, "corpseEnt->nextState.eType == ET_AGENT_CORPSE || corpseEnt->nextState.eType == ET_PLAYER_CORPSE") )
        __debugbreak();
      v16 = 1;
      if ( !*(_QWORD *)(v22 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v22 + 48), (const cpose_t *)v22);
      FunctionPointer_origin((const vec4_t *)(v22 + 56), (vec3_t *)v57);
      if ( *(_BYTE *)(v22 + 2) )
      {
        _XMM0 = (unsigned int)v57[0];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v27;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v57[0] = _XMM2;
        _XMM0 = (unsigned int)v57[1];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v27;
        __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
        v57[1] = _XMM3;
        _XMM0 = (unsigned int)v57[2];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v27;
        __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
        v57[2] = _XMM4;
      }
      else
      {
        _XMM3 = (unsigned int)v57[1];
        LODWORD(_XMM2) = v57[0];
      }
      v37 = *(float *)&_XMM2 - vRefPos->v[0];
      v39 = _XMM3;
      v38 = *(float *)&_XMM3 - vRefPos->v[1];
      _XMM0 = use2DDist;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm4, xmm7, xmm3, xmm2
      }
      *(float *)&v39 = (float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
      _XMM3 = v39;
      v44 = (float)((float)(v38 * vRefDir->v[1]) + (float)(v37 * vRefDir->v[0])) + (float)(*(float *)&_XMM4 * vRefDir->v[2]);
      if ( v44 >= 0.0 || *(float *)&_XMM11 >= *(float *)&_XMM3 )
        _XMM8 = 0i64;
      else
        __asm { vminss  xmm8, xmm3, xmm8 }
      if ( (float)(v44 * v44) > (float)(*(float *)&_XMM3 * 0.5) || *(float *)&_XMM12 >= *(float *)&_XMM3 )
        _XMM9 = 0i64;
      else
        __asm { vminss  xmm9, xmm3, xmm9 }
      if ( *(float *)&_XMM14 >= *(float *)&_XMM3 )
        _XMM10 = 0i64;
      else
        __asm { vminss  xmm10, xmm3, xmm10 }
      if ( *(float *)&_XMM8 != 0.0 )
        v11 = v17;
      __asm
      {
        vcmpneqss xmm0, xmm8, xmm7
        vblendvps xmm0, xmm11, xmm8, xmm0
      }
      v62 = _XMM0;
      if ( *(float *)&_XMM9 == 0.0 )
      {
        v13 = v58;
      }
      else
      {
        v13 = v17;
        v58 = v17;
      }
      __asm
      {
        vcmpneqss xmm0, xmm9, xmm7
        vblendvps xmm0, xmm12, xmm9, xmm0
      }
      if ( *(float *)&_XMM10 == 0.0 )
      {
        v15 = v59;
      }
      else
      {
        v15 = v17;
        v59 = v17;
      }
      memset(v57, 0, 0xCui64);
      _XMM11 = v62;
      _XMM12 = (unsigned int)_XMM0;
      __asm
      {
        vcmpneqss xmm0, xmm10, xmm7
        vblendvps xmm0, xmm14, xmm10, xmm0
      }
      _XMM14 = _XMM0;
      v8 = v60;
    }
    ++v17;
    ++v18;
    p_infoValid += 6726;
  }
  while ( v17 < v8 );
  if ( !v16 )
    return 0xFFFFFFFFi64;
  if ( *(float *)&_XMM11 == -1.0 )
  {
    v11 = v13;
    if ( *(float *)&_XMM12 == -1.0 )
      return v15;
  }
  return v11;
}

/*
==============
CG_PlayerCorpseMP_ClearAllPlayerCorpses
==============
*/
void CG_PlayerCorpseMP_ClearAllPlayerCorpses(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 m_clientCorpseCount; 
  __int64 m_characterCount; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int8 *p_flag; 
  CgEntitySystem *v8; 
  centity_t *v9; 
  __int64 v10; 
  __int64 v11; 

  v1 = localClientNum;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_clientCorpseCount = (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = (int)ComCharacterLimits::ms_gameData.m_characterCount;
  if ( (unsigned int)m_clientCorpseCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 264, ASSERT_TYPE_ASSERT, "( clientCorpseCount ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "clientCorpseCount", "ARRAY_COUNT( cgs->corpseinfo )", m_clientCorpseCount, 8) )
    __debugbreak();
  v5 = m_clientCorpseCount;
  if ( (int)m_clientCorpseCount > 0 )
  {
    v6 = m_characterCount;
    p_flag = &LocalClientStaticGlobals->corpseinfo[0].flag;
    do
    {
      if ( (*p_flag & 1) != 0 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v11) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v11) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v11) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v10) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v1] )
        {
          LODWORD(v11) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v11) )
            __debugbreak();
        }
        v8 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( (unsigned int)m_characterCount >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v9 = &v8->m_entities[v6];
        CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v1, v9);
        if ( *p_flag )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 271, ASSERT_TYPE_ASSERT, "(cgs->corpseinfo[corpseindex].flag == 0)", (const char *)&queryFormat, "cgs->corpseinfo[corpseindex].flag == 0") )
            __debugbreak();
        }
        v9->flags &= ~1u;
      }
      else
      {
        *p_flag = 0;
      }
      LODWORD(m_characterCount) = m_characterCount + 1;
      ++v6;
      p_flag += 26904;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding
==============
*/
void CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(const LocalClientNum_t localClientNum, CGCorpseInfoMP *corpseInfo, const __int16 entnum)
{
  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  if ( (corpseInfo->flag & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 341, ASSERT_TYPE_ASSERT, "((corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED) == 0)", (const char *)&queryFormat, "(corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED) == 0") )
    __debugbreak();
  if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, entnum, NULL) == Started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 346, ASSERT_TYPE_ASSERT, "(ScriptableCl_UpdateReservedScriptableEntityBinding( localClientNum, entnum, corpseScriptableDef ) != ScriptableBindResult::Error)", (const char *)&queryFormat, "ScriptableCl_UpdateReservedScriptableEntityBinding( localClientNum, entnum, corpseScriptableDef ) != ScriptableBindResult::Error") )
    __debugbreak();
  corpseInfo->flag &= ~4u;
}

/*
==============
CG_PlayerCorpseMP_CopyCorpseInfo
==============
*/
void CG_PlayerCorpseMP_CopyCorpseInfo(CGCorpseInfoMP *corpseInfo, const characterInfo_t *ci, const ClientCustomizationInfo *customization)
{
  bool v6; 

  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 375, ASSERT_TYPE_ASSERT, "( ( corpseInfo != nullptr ) )", "( corpseInfo ) = %p", NULL) )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 377, ASSERT_TYPE_ASSERT, "( ( customization != nullptr ) )", "( customization ) = %p", NULL) )
    __debugbreak();
  memcpy_0(&corpseInfo->ci, ci, sizeof(corpseInfo->ci));
  v6 = corpseInfo->ci.corpseReferenceInfo.infoValid == 0;
  *(_OWORD *)corpseInfo->customization.modelIndex = *(_OWORD *)customization->modelIndex;
  *(double *)&corpseInfo->customization.modelIndexMLG[1] = *(double *)&customization->modelIndexMLG[1];
  corpseInfo->ci.usingKillstreakTrigger = 0;
  corpseInfo->ci.skydiveAnimState = 0;
  if ( v6 )
  {
    Com_PrintWarning(14, "Cloning client corpse, but reference info is invalid for player entity %i. Resetting all hide part bits.\n", (unsigned int)ci->entityNum);
    memset_0(&corpseInfo->ci.corpseReferenceInfo.modelIndex, 0, 0x54ui64);
    corpseInfo->ci.corpseReferenceInfo.infoValid = 1;
  }
}

/*
==============
CG_PlayerCorpseMP_DebugDraw
==============
*/
void CG_PlayerCorpseMP_DebugDraw(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v2; 
  __int64 v4; 
  unsigned int m_characterCount; 
  cgs_t *LocalClientStaticGlobals; 
  const char *v7; 
  __int128 v8; 
  unsigned __int8 *p_flag; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  char v13; 
  __int128 *v14; 
  char v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  __int64 p_nextState; 
  __int64 p_clientNum; 
  bool IsEntityHighLoD; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  const char *v25; 
  __int128 v26; 
  const cpose_t *PoseExtended; 
  const char *v28; 
  char *fmt; 
  __int64 forceColor; 
  __int64 shadow; 
  int v32; 
  vec3_t outOrigin; 

  v2 = DCONST_DVARBOOL_cg_clientCorpse_debugDisplay;
  v4 = localClientNum;
  if ( !DCONST_DVARBOOL_cg_clientCorpse_debugDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_debugDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v4);
    if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1255, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
      __debugbreak();
    CG_DrawStringExt(scrPlace, 8.0, 8.0, "Client corpse info (server linked = green, detached = orange, inactive = gray)", &colorWhite, 0, 1, 8.0, 0);
    v7 = j_va("Corpse entity offset = %i. serverUseCount and LoD are for server entity at this index (might not correspond with client corpse at index)", m_characterCount);
    CG_DrawStringExt(scrPlace, 8.0, 16.0, v7, &colorWhite, 0, 1, 8.0, 0);
    v8 = LODWORD(FLOAT_24_0);
    p_flag = &LocalClientStaticGlobals->corpseinfo[0].flag;
    v32 = -m_characterCount;
    v10 = v4;
    do
    {
      v11 = tls_index;
      v12 = *p_flag;
      if ( dword_148C6487C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C6487C);
        if ( dword_148C6487C == -1 )
        {
          xmmword_148C64868 = (__int128)colorGreen;
          j__Init_thread_footer(&dword_148C6487C);
        }
      }
      if ( dword_148C64894 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C64894);
        if ( dword_148C64894 == -1 )
        {
          xmmword_148C64880 = (__int128)colorOrange;
          j__Init_thread_footer(&dword_148C64894);
        }
      }
      if ( dword_148C648AC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C648AC);
        if ( dword_148C648AC == -1 )
        {
          xmmword_148C64898 = (__int128)colorDkGrey;
          j__Init_thread_footer(&dword_148C648AC);
        }
      }
      if ( dword_148C648C4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C648C4);
        if ( dword_148C648C4 == -1 )
        {
          fontsize = colorLtGrey;
          j__Init_thread_footer(&dword_148C648C4);
        }
      }
      v13 = v12 & 1;
      if ( (v12 & 8) != 0 )
      {
        if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "(0 == (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 == (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
          __debugbreak();
        v14 = (__int128 *)&fontsize;
      }
      else if ( (v12 & 2) != 0 )
      {
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1236, ASSERT_TYPE_ASSERT, "(0 != (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 != (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
          __debugbreak();
        v14 = &xmmword_148C64868;
      }
      else
      {
        v14 = &xmmword_148C64880;
        if ( !v13 )
          v14 = &xmmword_148C64898;
      }
      v15 = *p_flag & 1;
      if ( v15 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(shadow) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
            __debugbreak();
        }
        if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
          LODWORD(forceColor) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v10] )
        {
          LODWORD(shadow) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[v10];
        if ( m_characterCount >= 0x800 )
        {
          LODWORD(shadow) = 2048;
          LODWORD(forceColor) = m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v17 = (int)m_characterCount;
        p_nextState = (__int64)&v16->m_entities[v17].nextState;
        p_clientNum = (__int64)&v16->m_entities[v17].nextState.clientNum;
        if ( (v16->m_entities[v17].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1279, ASSERT_TYPE_ASSERT, "(!corpseIsActive || CENextValid( corpseEntity ))", (const char *)&queryFormat, "!corpseIsActive || CENextValid( corpseEntity )") )
          __debugbreak();
      }
      else
      {
        p_nextState = 400i64;
        p_clientNum = 544i64;
      }
      if ( (m_characterCount > 0x7FFFFFFF || m_characterCount + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)m_characterCount, "unsigned", m_characterCount) )
        __debugbreak();
      IsEntityHighLoD = CG_IsEntityHighLoD((const LocalClientNum_t)v4, m_characterCount);
      v21 = "Low";
      if ( IsEntityHighLoD )
        v21 = "High";
      if ( v15 )
      {
        v22 = *((_DWORD *)p_flag + 1);
        v23 = p_flag[3];
        v24 = *(unsigned int *)p_clientNum;
      }
      else
      {
        v23 = 0xFFFFFFFFi64;
        v22 = -1;
        v24 = 0xFFFFFFFFi64;
      }
      LODWORD(shadow) = p_flag[1];
      LODWORD(forceColor) = p_flag[2];
      LODWORD(fmt) = v22;
      v25 = j_va("[%i]:\tclientNum = %i,\toriginalCorpseIndex = %i,\tfirstSnapTime = %i,\tserverUseCount = %i,\tsortIndex = %i,\tLoD = %s", m_characterCount + v32, v24, v23, fmt, forceColor, shadow, v21);
      if ( *(float *)&v8 > 0.0 && *(float *)&v8 < 1080.0 )
        CG_DrawStringExt(scrPlace, 20.0, *(float *)&v8, v25, (const vec4_t *)v14, 0, 1, 8.0, 0);
      v26 = v8;
      *(float *)&v26 = *(float *)&v8 + 8.0;
      v8 = v26;
      if ( v15 )
      {
        PoseExtended = CG_GetPoseExtended((LocalClientNum_t)v4, *(__int16 *)p_nextState, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        v28 = j_va("[%i]: clientNum = %i", m_characterCount + v32, *(unsigned int *)p_clientNum);
        CL_AddDebugStarWithText(&outOrigin, (const vec4_t *)v14, (const vec4_t *)v14, v28, 0.5, 0, 1, 0);
      }
      ++m_characterCount;
      p_flag += 26904;
      v10 = v4;
    }
    while ( m_characterCount + v32 < 8 );
  }
}

/*
==============
CG_PlayerCorpseMP_FreeClientCorpse
==============
*/
void CG_PlayerCorpseMP_FreeClientCorpse(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  cgs_t *v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  bool v8; 
  __int128 v9; 
  unsigned int m_agentCorpseCount; 
  int v14; 
  int CorpseFreeIndex; 
  __int64 v16; 
  unsigned __int64 ClientCorpseMaxCount; 
  int ClientCorpseEntityIndexOffset; 
  int v19; 
  __int64 v20; 
  int use2DDist; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  int v26; 
  vec3_t outOrg; 
  __int64 v28; 
  vec3_t v29; 

  v28 = -2i64;
  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    use2DDist = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, use2DDist) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState == CA_ACTIVE )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
    v4 = LocalClientStaticGlobals;
    if ( LocalClientGlobals )
    {
      if ( LocalClientStaticGlobals )
      {
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        v5 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
        v6 = LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[1]);
        v7 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
        v8 = 1;
        v29.v[2] = 0.0;
        v9 = v6;
        *(float *)&v9 = fsqrt((float)(*(float *)&v6 * *(float *)&v6) + (float)(v5 * v5));
        _XMM3 = v9;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm2, xmm0
        }
        *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
        v29.v[0] = v5 * *(float *)&_XMM1;
        v29.v[1] = *(float *)&v6 * *(float *)&_XMM1;
        if ( *(float *)&v9 == 0.0 )
        {
          v8 = 0;
          v29.v[0] = v5;
          v29.v[1] = *(float *)&v6;
          v29.v[2] = v7;
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        m_agentCorpseCount = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v14 = ComCharacterLimits::ms_gameData.m_characterCount + ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( m_agentCorpseCount > 8 )
        {
          v26 = 8;
          v24 = m_agentCorpseCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 235, ASSERT_TYPE_ASSERT, "( agentCorpseCount ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "agentCorpseCount", "ARRAY_COUNT( cgs->agentCorpseInfo )", v24, v26) )
            __debugbreak();
        }
        CorpseFreeIndex = CG_GetCorpseFreeIndex((LocalClientNum_t)v1, v4->agentCorpseInfo, m_agentCorpseCount, v14, &outOrg, &v29, v8);
        v16 = CorpseFreeIndex;
        if ( CorpseFreeIndex < 0 )
        {
          ClientCorpseMaxCount = ComCharacterLimits::GetClientCorpseMaxCount();
          ClientCorpseEntityIndexOffset = ComCharacterLimits::GetClientCorpseEntityIndexOffset();
          if ( ClientCorpseMaxCount > 8 )
          {
            LODWORD(v25) = 8;
            LODWORD(v23) = ClientCorpseMaxCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 247, ASSERT_TYPE_ASSERT, "( clientCorpseCount ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "clientCorpseCount", "ARRAY_COUNT( cgs->corpseinfo )", v23, v25) )
              __debugbreak();
          }
          v19 = CG_GetCorpseFreeIndex((LocalClientNum_t)v1, v4->corpseinfo, ClientCorpseMaxCount, ClientCorpseEntityIndexOffset, &outOrg, &v29, v8);
          v20 = v19;
          if ( v19 >= 0 )
          {
            Com_Printf(14, "Disabling corpse %u because have exceeded the skinning cache threshhold.\n", (unsigned int)v19);
            v4->corpseinfo[v20].ci.infoValid = 0;
          }
        }
        else
        {
          Com_Printf(14, "Disabling corpse %u because have exceeded the skinning cache threshhold.\n", (unsigned int)CorpseFreeIndex);
          v4->agentCorpseInfo[v16].ci.infoValid = 0;
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum
==============
*/
CGCorpseInfoMP *CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum(LocalClientNum_t localClientNum, const __int16 client_entnum)
{
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v4; 
  __int64 v5; 
  CGCorpseInfoMP *result; 
  __int64 v7; 
  unsigned int m_clientCorpseCount; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v4 = client_entnum - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v4 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCorpseCount = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseindex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v7, m_clientCorpseCount) )
      __debugbreak();
  }
  v5 = (int)v4;
  result = NULL;
  if ( (LocalClientStaticGlobals->corpseinfo[v5].flag & 1) != 0 )
    return &LocalClientStaticGlobals->corpseinfo[v5];
  return result;
}

/*
==============
CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum
==============
*/
CGCorpseInfoMP *CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum(LocalClientNum_t localClientNum, const __int16 server_entnum)
{
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v4; 
  __int64 v5; 
  CGCorpseInfoMP *result; 
  __int64 v7; 
  unsigned int m_clientCorpseCount; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v4 = server_entnum - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v4 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCorpseCount = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseindex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v7, m_clientCorpseCount) )
      __debugbreak();
  }
  v5 = (int)v4;
  result = NULL;
  if ( (LocalClientStaticGlobals->corpseinfo[v5].flag & 2) != 0 )
    return &LocalClientStaticGlobals->corpseinfo[v5];
  return result;
}

/*
==============
CG_PlayerCorpseMP_GetFreePlayerCorpseIndex
==============
*/
__int64 CG_PlayerCorpseMP_GetFreePlayerCorpseIndex(LocalClientNum_t localClientNum)
{
  cgs_t *LocalClientStaticGlobals; 
  int v2; 
  unsigned __int8 *i; 
  unsigned int m_clientCorpseCount; 
  int v6; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v6 = 8;
    m_clientCorpseCount = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", m_clientCorpseCount, v6) )
      __debugbreak();
  }
  v2 = 0;
  for ( i = &LocalClientStaticGlobals->corpseinfo[0].flag; ; i += 26904 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v2 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( (*i & 1) == 0 )
      return (unsigned int)v2;
    ++v2;
  }
  return 0xFFFFFFFFi64;
}

/*
==============
CG_PlayerCorpseMP_Init
==============
*/
void CG_PlayerCorpseMP_Init(LocalClientNum_t localClientNum)
{
  cgs_t *LocalClientStaticGlobals; 
  int v2; 
  XAnimTree **i; 
  XAnimTree *v4; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 49, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
    __debugbreak();
  v2 = 0;
  for ( i = &LocalClientStaticGlobals->corpseinfo[0].ci.pXAnimTree; ; i += 3363 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v2 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    v4 = *i;
    memset_0(&LocalClientStaticGlobals->corpseinfo[v2], 0, sizeof(LocalClientStaticGlobals->corpseinfo[v2]));
    *i = v4;
    if ( v4 )
      XAnimClearTreeGoalWeights(v4, 0, XANIM_SUBTREE_DEFAULT, 0, 0.0, 1, NULL, LINEAR);
    ++v2;
  }
}

/*
==============
CG_PlayerCorpseMP_MoveDetachedPlayerCorpse
==============
*/
void CG_PlayerCorpseMP_MoveDetachedPlayerCorpse(const LocalClientNum_t localClientNum, const int fromCorpseIndex, const int toCorpseIndex)
{
  __int64 v3; 
  __int64 v4; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int m_characterCount; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int16 v11; 
  int v12; 
  centity_t *Entity; 
  unsigned int v14; 
  centity_t *v15; 
  unsigned int v16; 
  unsigned int v17; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  bool *attachTagIndexChanged; 
  __int64 v20; 
  __int64 v21; 
  const characterInfo_t *p_ci; 
  centity_t *v23; 
  cpose_t *v24; 
  XAnimOwner v25; 
  centity_t *v26; 
  unsigned __int8 eType; 
  const DObj *ClientDObj; 
  const DObj *v29; 
  DObj *v30; 
  int ragdollHandle; 
  Ragdoll *Ragdoll; 
  DObj *v33; 
  bool IsRagdoll; 
  int killcamRagdollHandle; 
  Ragdoll *v36; 
  DObj *v37; 
  bool v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  XAnimTree *inOutAnimTree; 
  unsigned __int64 v44; 
  centity_t *cent; 
  cpose_t *pose; 
  __int64 v47; 
  vec3_t outOrigin; 
  __int16 v50; 
  int fromDObjHandle; 

  v47 = -2i64;
  v3 = toCorpseIndex;
  v4 = fromCorpseIndex;
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-MoveDetachedPlayerCorpse");
  if ( (unsigned int)v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( fromCorpseIndex ) < (unsigned)( 8 )", "fromCorpseIndex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v4, 8) )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v40) = 8;
    LODWORD(v39) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( toCorpseIndex ) < (unsigned)( 8 )", "toCorpseIndex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v39, v40) )
      __debugbreak();
  }
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 477, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v8 = v4;
  v44 = 26904 * v4;
  v9 = (__int64)&LocalClientStaticGlobals->corpseinfo[v3];
  if ( (LocalClientStaticGlobals->corpseinfo[v4].flag & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 482, ASSERT_TYPE_ASSERT, "(fromCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)", (const char *)&queryFormat, "fromCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE") )
    __debugbreak();
  if ( (LocalClientStaticGlobals->corpseinfo[v3].flag & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 483, ASSERT_TYPE_ASSERT, "(0 == (toCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 == (toCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
    __debugbreak();
  v10 = truncate_cast<short,unsigned int>(m_characterCount + v4);
  v11 = truncate_cast<short,unsigned int>(m_characterCount + v3);
  v12 = v11;
  v50 = v11;
  fromDObjHandle = v10;
  Entity = CG_GetEntity(localClientNum, v10);
  pose = &Entity->pose;
  v14 = v12;
  v15 = CG_GetEntity(localClientNum, v12);
  cent = v15;
  Com_Printf(14, "CG_SnapshotMP: moving client corpse from entity [%i] to [%i]\n", v10, v14);
  *(_BYTE *)(v9 + 14819) = LocalClientStaticGlobals->corpseinfo[v8].originalCorpseIndex;
  *(_BYTE *)(v9 + 14816) = 1;
  LocalClientStaticGlobals->corpseinfo[v8].flag = 0;
  *(_DWORD *)(v9 + 14820) = LocalClientStaticGlobals->corpseinfo[v8].firstSnapshotTime;
  if ( Entity->typeData.flightDurationMs != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 505, ASSERT_TYPE_ASSERT, "( fromCent->typeData.ragdollConstraintEnt ) == ( ENTITYNUM_NONE )", "%s == %s\n\t%i, %i", "fromCent->typeData.ragdollConstraintEnt", "ENTITYNUM_NONE", Entity->typeData.flightDurationMs, 2047) )
    __debugbreak();
  v15->typeData.flightDurationMs = 2047;
  v16 = v15->nextState.lerp.eFlags.m_flags[0];
  v17 = v15->prevState.eFlags.m_flags[0];
  *(_OWORD *)&v15->nextState.number = *(_OWORD *)&Entity->nextState.number;
  *(_OWORD *)&v15->nextState.lerp.pos.trType = *(_OWORD *)&Entity->nextState.lerp.pos.trType;
  *(_OWORD *)&v15->nextState.lerp.pos.trBase.y = *(_OWORD *)&Entity->nextState.lerp.pos.trBase.y;
  *(_OWORD *)&v15->nextState.lerp.pos.trDelta.z = *(_OWORD *)&Entity->nextState.lerp.pos.trDelta.z;
  *(_OWORD *)v15->nextState.lerp.apos.trBase.v = *(_OWORD *)Entity->nextState.lerp.apos.trBase.v;
  *(_OWORD *)&v15->nextState.lerp.apos.trDelta.y = *(_OWORD *)&Entity->nextState.lerp.apos.trDelta.y;
  *(_OWORD *)&v15->nextState.lerp.u.vehicle.bodyPitch = *(_OWORD *)&Entity->nextState.lerp.u.vehicle.bodyPitch;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&v15->nextState.lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->nextState.lerp.u.infoVolumeGrapple + 24);
  *(_OWORD *)&v15->nextState.staticState.turret.carrierEntNum = *(_OWORD *)&Entity->nextState.staticState.turret.carrierEntNum;
  *(_OWORD *)&v15->nextState.clientNum = *(_OWORD *)&Entity->nextState.clientNum;
  *(_OWORD *)&v15->nextState.events[0].eventType = *(_OWORD *)&Entity->nextState.events[0].eventType;
  *(_OWORD *)&v15->nextState.events[2].eventType = *(_OWORD *)&Entity->nextState.events[2].eventType;
  *(_OWORD *)&v15->nextState.index.brushModel = *(_OWORD *)&Entity->nextState.index.brushModel;
  *(_OWORD *)&v15->nextState.animInfo.selectAnim = *(_OWORD *)&Entity->nextState.animInfo.selectAnim;
  *(_OWORD *)&v15->nextState.partBits.array[2] = *(_OWORD *)&Entity->nextState.partBits.array[2];
  *(_QWORD *)&v15->nextState.partBits.array[6] = *(_QWORD *)&Entity->nextState.partBits.array[6];
  *(__m256i *)v15->prevState.eFlags.m_flags = *(__m256i *)Entity->prevState.eFlags.m_flags;
  *(__m256i *)&v15->prevState.pos.trDelta.y = *(__m256i *)&Entity->prevState.pos.trDelta.y;
  *(__m256i *)v15->prevState.apos.trDelta.v = *(__m256i *)Entity->prevState.apos.trDelta.v;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&v15->prevState.u.infoVolumeGrapple + 20) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->prevState.u.infoVolumeGrapple + 20);
  v15->prevEType = Entity->prevEType;
  v15->prevOtherEntityNum = Entity->prevOtherEntityNum;
  v15->prevPhysicsChildBodyIdx = Entity->prevOtherEntityNum;
  v15->prevLinkParent = Entity->prevLinkParent;
  *(_WORD *)v15->tracerDrawRateCounter = *(_WORD *)Entity->tracerDrawRateCounter;
  v15->weaponVisTestCounter = Entity->weaponVisTestCounter;
  v15->flags = Entity->flags;
  v15->typeData.flightDurationMs = Entity->typeData.flightDurationMs;
  v15->pose.cullIn = 0;
  v15->previousEventSequence.combined = Entity->previousEventSequence.combined;
  v15->nextState.number = v14;
  v15->nextState.lerp.eFlags.m_flags[0] ^= ((unsigned __int8)v16 ^ (unsigned __int8)v15->nextState.lerp.eFlags.m_flags[0]) & 4;
  v15->prevState.eFlags.m_flags[0] ^= (v15->prevState.eFlags.m_flags[0] ^ v17) & 4;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v15->nextState.lerp.eFlags, ACTIVE, 0x1Bu);
  v15->flags |= 1u;
  AimAssist_ClearEntityReference(localClientNum, v14);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  CG_SetPoseOrigin(&v15->pose, &outOrigin);
  outOrigin = Entity->pose.angles;
  v15->pose.angles = outOrigin;
  if ( !Entity->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
    __debugbreak();
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(Entity->pose.prevOrigin.Get_prevOrigin, &Entity->pose);
  FunctionPointer_prevOrigin(&Entity->pose.prevOrigin.prevOrigin, &outOrigin);
  CG_SetPrevPoseOrigin(&v15->pose, &outOrigin);
  outOrigin = Entity->pose.prevAngles;
  v15->pose.prevAngles = outOrigin;
  v15->pose.eType = Entity->pose.eType;
  *(_QWORD *)&v15->nextUseCount = 0i64;
  BG_ClearCharacterDObj(&v15->nextState);
  inOutAnimTree = *(XAnimTree **)(v9 + 2064);
  if ( LocalClientStaticGlobals->corpseinfo[v8].ci.modelIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 561, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.modelIndexChanged)", (const char *)&queryFormat, "!fromCorpseInfo->ci.modelIndexChanged") )
    __debugbreak();
  attachTagIndexChanged = LocalClientStaticGlobals->corpseinfo[v8].ci.attachTagIndexChanged;
  v20 = 9i64;
  do
  {
    if ( *(attachTagIndexChanged - 9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 564, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.attachModelIndexChanged[attachIndex])", (const char *)&queryFormat, "!fromCorpseInfo->ci.attachModelIndexChanged[attachIndex]") )
      __debugbreak();
    if ( *attachTagIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 565, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.attachTagIndexChanged[attachIndex])", (const char *)&queryFormat, "!fromCorpseInfo->ci.attachTagIndexChanged[attachIndex]") )
      __debugbreak();
    ++attachTagIndexChanged;
    --v20;
  }
  while ( v20 );
  v21 = v44;
  p_ci = &LocalClientStaticGlobals->corpseinfo[v44 / 0x6918].ci;
  v23 = cent;
  v24 = pose;
  if ( (cgs_t *)((char *)LocalClientStaticGlobals + v44) == (cgs_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  memcpy_0((void *)(v9 + 24), p_ci, 0x39C8ui64);
  *(_OWORD *)v9 = *(_OWORD *)LocalClientStaticGlobals->corpseinfo[v44 / 0x6918].customization.modelIndex;
  *(double *)(v9 + 16) = *(double *)((char *)&LocalClientStaticGlobals->corpseinfo[0].customization.modelIndexMLG[1] + v21);
  *(_BYTE *)(v9 + 2058) = 0;
  *(_BYTE *)(v9 + 14705) = 0;
  if ( !*(_DWORD *)(v9 + 14708) )
  {
    Com_PrintWarning(14, "Cloning client corpse, but reference info is invalid for player entity %i. Resetting all hide part bits.\n", (unsigned int)p_ci->entityNum);
    memset_0((void *)(v9 + 14712), 0, 0x54ui64);
    *(_DWORD *)(v9 + 14708) = 1;
  }
  if ( PlayerASM_IsEnabled() )
  {
    LOBYTE(v25) = 1;
    BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v25, p_ci, &inOutAnimTree);
  }
  *(_QWORD *)(v9 + 2064) = inOutAnimTree;
  XAnimCloneAnimTree(*(const XAnimTree **)((char *)&LocalClientStaticGlobals->corpseinfo[0].ci.pXAnimTree + v21), inOutAnimTree);
  FX_MarkEntDetachAll(localClientNum, v14);
  FX_Dismemberment_Transfer(localClientNum, fromDObjHandle, v14);
  CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(localClientNum, (CGCorpseInfoMP *)v9, v50);
  *(_DWORD *)(v9 + 1544) = 1;
  v26 = CG_GetEntity(localClientNum, fromDObjHandle);
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 436, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  eType = v26->pose.eType;
  if ( (((v26->pose.eType - 1) & 0xEE) == 0 && eType != 18 || eType == 18) && (ClientDObj = Com_GetClientDObj(fromDObjHandle, localClientNum), (v29 = ClientDObj) != NULL) && DObjHasProceduralBones(ClientDObj) )
  {
    XAnimBonePhysicsSaveState(v29, (XAnimBonePhysicsStateBuffer *)(v9 + 14824));
    *(_BYTE *)(v9 + 14816) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(v9 + 14816) &= ~0x10u;
  }
  CG_PlayersMP_UpdateCorpseDObj(localClientNum, v23, (characterInfo_t *)(v9 + 24));
  if ( CG_Pose_IsRagdoll(v24) )
    goto LABEL_64;
  if ( v24 == (cpose_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(v24[1].mdaoCullIn - 23) <= 5 )
  {
LABEL_64:
    v23->pose.ragdollFlags = v24->ragdollFlags;
    v23->pose.ragdollHandle = v24->ragdollHandle;
    v23->pose.killcamRagdollHandle = v24->killcamRagdollHandle;
    v30 = Com_GetClientDObj(fromDObjHandle, localClientNum);
    if ( v30 )
      Ragdoll_SetAnimationParameters(v30, 0, 0);
    ragdollHandle = v24->ragdollHandle;
    if ( ragdollHandle )
    {
      Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
      if ( Ragdoll->entityNum != fromDObjHandle )
      {
        LODWORD(v42) = fromDObjHandle;
        LODWORD(v41) = Ragdoll->entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 613, ASSERT_TYPE_ASSERT, "( ragdoll->entityNum ) == ( fromEntNum )", "%s == %s\n\t%i, %i", "ragdoll->entityNum", "fromEntNum", v41, v42) )
          __debugbreak();
      }
      Ragdoll->entityNum = v14;
      Ragdoll->dobj = v14;
      v24->ragdollHandle = 0;
      v33 = Com_GetClientDObj(v14, localClientNum);
      if ( v33 )
      {
        IsRagdoll = CG_Pose_IsRagdoll(&v23->pose);
        Ragdoll_SetAnimationParameters(v33, v23->pose.ragdollHandle, IsRagdoll);
      }
    }
    killcamRagdollHandle = v24->killcamRagdollHandle;
    if ( killcamRagdollHandle )
    {
      v36 = Ragdoll_GetRagdoll(killcamRagdollHandle);
      if ( v36->entityNum != fromDObjHandle )
      {
        LODWORD(v42) = fromDObjHandle;
        LODWORD(v41) = v36->entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 628, ASSERT_TYPE_ASSERT, "( ragdoll->entityNum ) == ( fromEntNum )", "%s == %s\n\t%i, %i", "ragdoll->entityNum", "fromEntNum", v41, v42) )
          __debugbreak();
      }
      v36->entityNum = v14;
      v36->dobj = v14;
      v24->killcamRagdollHandle = 0;
      v37 = Com_GetClientDObj(v14, localClientNum);
      if ( v37 )
      {
        v38 = CG_Pose_IsRagdoll(&v23->pose);
        Ragdoll_SetAnimationParameters(v37, v23->pose.killcamRagdollHandle, v38);
      }
    }
  }
  R_MDAO_ResetEntityOcclusionState(&v23->pose);
  R_EntityMoved(localClientNum, v14);
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap
==============
*/
void CG_PlayerCorpseMP_SetNextSnap(const LocalClientNum_t localClientNum, const bool demoJumpTime, const entityState_t *const *nextSnapCorpseEnts, const unsigned int nextSnapCorpseEntsCount)
{
  CgEntitySystem *v7; 
  const ObfuscateErrorText *v8; 
  unsigned int m_characterCount; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v11; 
  cgs_t *LocalClientStaticGlobals; 
  CgEntitySystem *v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int16 *p_index; 
  unsigned int v17; 
  centity_t *v18; 
  int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  int v25; 
  unsigned __int64 v26; 
  char *v27; 
  cgs_t *v28; 
  int v29; 
  unsigned __int64 v30; 
  unsigned __int8 *i; 
  int v32; 
  LocalClientNum_t v33; 
  __int64 v34; 
  unsigned __int8 v35; 
  CgEntitySystem *v36; 
  __int64 v37; 
  __int64 v38; 
  char v39; 
  __int64 v40; 
  unsigned int v41; 
  const dvar_t *v42; 
  unsigned int v43; 
  __int64 v44; 
  __int16 *v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  CgEntitySystem *v50; 
  __int64 v51; 
  __int64 v52; 
  cgs_t *v53; 
  CGCorpseInfoMP *v54; 
  unsigned int v55; 
  centity_t *Entity; 
  const dvar_t *v57; 
  __int16 v58; 
  char v59; 
  unsigned int v60; 
  const SuitDef *SuitDef; 
  const char **p_name; 
  ScriptableDef *scriptableDef; 
  const ScriptableDef *nextScriptableDef; 
  const char *v65; 
  const char *name; 
  __int16 *clientCorpseStateOut; 
  entityState_t **newCorpseEntsOut; 
  unsigned int *newCorpseEntsCountOut; 
  CG_PlayerCorpseMP_SortableCorpseInfo *sortableCorpsesOut; 
  bool enabled; 
  unsigned int sortableCorpsesCount; 
  unsigned int newCorpseEntsCount; 
  __int64 v75; 
  unsigned int v76; 
  cgs_t *v77; 
  int v78; 
  unsigned int nextSnapCorpseEntsCounta; 
  __int64 v80; 
  CgEntitySystem *v81; 
  entityState_t **nextSnapCorpseEntsa; 
  __int64 v83; 
  entityState_t *newCorpseEnts[8]; 
  CG_PlayerCorpseMP_SortableCorpseInfo sortableCorpses[16]; 
  bool corpseWasShutdownOut[8]; 
  __int64 v87; 
  __int16 clientCorpseState[12]; 

  v83 = -2i64;
  nextSnapCorpseEntsCounta = nextSnapCorpseEntsCount;
  nextSnapCorpseEntsa = (entityState_t **)nextSnapCorpseEnts;
  v7 = (CgEntitySystem *)(int)localClientNum;
  v8 = &queryFormat;
  if ( !nextSnapCorpseEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1070, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts)", (const char *)&queryFormat, "nextSnapCorpseEnts") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v76 = ComCharacterLimits::ms_gameData.m_characterCount;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LOBYTE(v8) = 0;
  v78 = (int)v8;
  if ( !LocalClientGlobals->inKillCam )
  {
    LOBYTE(v8) = LocalClientGlobals->predictedPlayerState.deltaTime != 0;
    v78 = (unsigned __int8)v8;
  }
  CG_PlayerCorpseMP_SetNextSnap_CategorizeNextSnapCorpses((const LocalClientNum_t)v7, demoJumpTime, (const bool)v8, nextSnapCorpseEnts, nextSnapCorpseEntsCount, clientCorpseState, (const entityState_t **)newCorpseEnts, &newCorpseEntsCount);
  v11 = DCONST_DVARBOOL_cg_enableDetachableClientCorpses;
  if ( !DCONST_DVARBOOL_cg_enableDetachableClientCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enableDetachableClientCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  CG_PlayerCorpseMP_SetNextSnap_GatherSortableCorpses((const LocalClientNum_t)v7, demoJumpTime, enabled, (const bool)v8, clientCorpseState, (const entityState_t *const *)newCorpseEnts, newCorpseEntsCount, corpseWasShutdownOut, sortableCorpses, &sortableCorpsesCount);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v7);
  v77 = LocalClientStaticGlobals;
  v13 = v7;
  v81 = v7;
  v14 = sortableCorpsesCount;
  if ( sortableCorpsesCount >= 3 )
  {
    CG_PlayerCorpseMP_SetNextSnap_SortCorpses((const LocalClientNum_t)v7, (const entityState_t *const *)newCorpseEnts, sortableCorpses, sortableCorpsesCount);
    v15 = 8;
    if ( v14 > 8 )
    {
      do
      {
        if ( !sortableCorpses[v15].isNewNextSnap )
        {
          p_index = &sortableCorpses[v15].index;
          v17 = m_characterCount + *p_index;
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(newCorpseEntsOut) = (_DWORD)v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", newCorpseEntsOut) )
              __debugbreak();
          }
          if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(newCorpseEntsOut) = CgEntitySystem::ms_allocatedCount;
            LODWORD(clientCorpseStateOut) = (_DWORD)v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[(_QWORD)v13] )
          {
            LODWORD(newCorpseEntsOut) = (_DWORD)v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", newCorpseEntsOut) )
              __debugbreak();
          }
          v7 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v13];
          if ( v17 >= 0x800 )
          {
            LODWORD(newCorpseEntsOut) = 2048;
            LODWORD(clientCorpseStateOut) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
              __debugbreak();
          }
          v18 = &v7->m_entities[v17];
          Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-ShutdownCorpse");
          LODWORD(v7) = localClientNum;
          CG_SnapshotMP_ShutdownEntity(localClientNum, v18);
          v18->flags &= ~1u;
          Sys_ProfEndNamedEvent();
          v19 = *p_index;
          corpseWasShutdownOut[*p_index] = 1;
          CG_PlayerCorpseMP_CorpseDebugPrint_Internal_unsigned_int_("CG_SnapshotMP: shutdown corpse at entity number [%i] (low priority)\n", m_characterCount + v19);
        }
        ++v15;
      }
      while ( v15 < v14 );
      LocalClientStaticGlobals = v77;
    }
  }
  v20 = 8;
  if ( (int)v14 < 8 )
    v20 = v14;
  sortableCorpsesCount = v20;
  v87 = 0i64;
  v21 = 0i64;
  newCorpseEntsCount = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v22 = (unsigned int)v21;
      v23 = 24 * v21;
      v80 = 24 * v21;
      if ( sortableCorpses[v21].isNewNextSnap )
      {
        Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-AddNewCorpse");
        if ( !*(const entityState_t **)((char *)&sortableCorpses[0].entityState + v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(sortedCorpses[sortedIndex].entityState)", (const char *)&queryFormat, "sortedCorpses[sortedIndex].entityState") )
          __debugbreak();
        v24 = **(__int16 **)((char *)&sortableCorpses[0].entityState + v23);
        LODWORD(v75) = v24;
        v25 = v24 - m_characterCount;
        if ( v24 - m_characterCount >= 8 )
        {
          LODWORD(newCorpseEntsOut) = 8;
          LODWORD(clientCorpseStateOut) = v24 - m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1135, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        v26 = v25;
        v27 = (char *)LocalClientStaticGlobals + 26904 * v25;
        if ( (v27[14872] & 1) != 0 )
        {
          if ( !enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1139, ASSERT_TYPE_ASSERT, "(detachableCorpsesEnabled)", (const char *)&queryFormat, "detachableCorpsesEnabled") )
            __debugbreak();
          if ( clientCorpseState[v25] == 2 )
          {
            LODWORD(sortableCorpsesOut) = 2;
            LODWORD(newCorpseEntsCountOut) = 2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1140, ASSERT_TYPE_ASSERT, "( clientCorpseState[corpseindex] ) != ( CORPSE_IN_NEXT_SNAP )", "%s != %s\n\t%u, %u", "clientCorpseState[corpseindex]", "CORPSE_IN_NEXT_SNAP", newCorpseEntsCountOut, sortableCorpsesOut) )
              __debugbreak();
          }
          if ( *((_BYTE *)&clientCorpseState[-4] + v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1141, ASSERT_TYPE_ASSERT, "(!corpseIndexDetachedAndMoved[corpseindex])", (const char *)&queryFormat, "!corpseIndexDetachedAndMoved[corpseindex]") )
            __debugbreak();
          v28 = CG_GetLocalClientStaticGlobals(localClientNum);
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            LODWORD(sortableCorpsesOut) = 8;
            LODWORD(newCorpseEntsCountOut) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", newCorpseEntsCountOut, sortableCorpsesOut) )
              __debugbreak();
          }
          v29 = 0;
          v30 = 0i64;
          for ( i = &v28->corpseinfo[0].flag; ; i += 26904 )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            if ( v29 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
            {
              v29 = -1;
              v30 = -1i64;
              goto LABEL_72;
            }
            if ( (*i & 1) == 0 )
              break;
            ++v29;
            ++v30;
          }
          if ( v29 != -1 )
            goto LABEL_74;
LABEL_72:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1144, ASSERT_TYPE_ASSERT, "(newCorpseIndex != -1)", (const char *)&queryFormat, "newCorpseIndex != -1") )
            __debugbreak();
LABEL_74:
          *((_BYTE *)&clientCorpseState[-4] + v25) = 1;
          v32 = v29;
          v33 = localClientNum;
          CG_PlayerCorpseMP_MoveDetachedPlayerCorpse(localClientNum, v25, v32);
          if ( v30 >= 8 )
            goto LABEL_203;
          corpseWasShutdownOut[v30] = 0;
          v35 = v27[14872];
          if ( v35 )
          {
            LODWORD(newCorpseEntsCountOut) = v35;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1148, ASSERT_TYPE_ASSERT, "( cgs->corpseinfo[corpseindex].flag ) == ( 0 )", "%s == %s\n\t%u, %u", "cgs->corpseinfo[corpseindex].flag", "0", newCorpseEntsCountOut, 0i64) )
              __debugbreak();
          }
          v23 = v80;
          v24 = v75;
        }
        else
        {
          v33 = localClientNum;
        }
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(newCorpseEntsOut) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", newCorpseEntsOut) )
            __debugbreak();
        }
        if ( v33 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(newCorpseEntsOut) = CgEntitySystem::ms_allocatedCount;
          LODWORD(clientCorpseStateOut) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v33] )
        {
          LODWORD(newCorpseEntsOut) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", newCorpseEntsOut) )
            __debugbreak();
        }
        v36 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v81];
        if ( v24 >= 0x800 )
        {
          LODWORD(newCorpseEntsOut) = 2048;
          LODWORD(clientCorpseStateOut) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        v37 = (__int64)&v36->m_entities[v24];
        v38 = *(__int64 *)((char *)&sortableCorpses[0].entityState + v23);
        *(_OWORD *)(v37 + 400) = *(_OWORD *)v38;
        *(_OWORD *)(v37 + 416) = *(_OWORD *)(v38 + 16);
        *(_OWORD *)(v37 + 432) = *(_OWORD *)(v38 + 32);
        *(_OWORD *)(v37 + 448) = *(_OWORD *)(v38 + 48);
        *(_OWORD *)(v37 + 464) = *(_OWORD *)(v38 + 64);
        *(_OWORD *)(v37 + 480) = *(_OWORD *)(v38 + 80);
        *(_OWORD *)(v37 + 496) = *(_OWORD *)(v38 + 96);
        *(_OWORD *)(v37 + 512) = *(_OWORD *)(v38 + 112);
        *(_OWORD *)(v37 + 528) = *(_OWORD *)(v38 + 128);
        *(_OWORD *)(v37 + 544) = *(_OWORD *)(v38 + 144);
        *(_OWORD *)(v37 + 560) = *(_OWORD *)(v38 + 160);
        *(_OWORD *)(v37 + 576) = *(_OWORD *)(v38 + 176);
        *(_OWORD *)(v37 + 592) = *(_OWORD *)(v38 + 192);
        *(_OWORD *)(v37 + 608) = *(_OWORD *)(v38 + 208);
        *(_OWORD *)(v37 + 624) = *(_OWORD *)(v38 + 224);
        *(_QWORD *)(v37 + 640) = *(_QWORD *)(v38 + 240);
        *(_DWORD *)(v37 + 648) |= 1u;
        v39 = newCorpseEntsCount;
        if ( newCorpseEntsCount > 0xFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)newCorpseEntsCount, "unsigned", v22) )
            __debugbreak();
          v39 = newCorpseEntsCount;
        }
        v27[14873] = v39;
        v27[14872] = 3;
        *((_DWORD *)v27 + 3719) = *(int *)((char *)&sortableCorpses[0].time + v23);
        if ( (v25 < 0 || (unsigned int)v25 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v25, "signed", v25) )
          __debugbreak();
        v77->corpseinfo[v25].originalCorpseIndex = v25;
        if ( (_BYTE)v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1158, ASSERT_TYPE_ASSERT, "(!enteringKillCam)", (const char *)&queryFormat, "!enteringKillCam") )
          __debugbreak();
        LODWORD(v7) = localClientNum;
        CG_SnapshotMP_ResetEntity(localClientNum, (centity_t *)v37, 1);
        if ( v26 >= 8 )
        {
          j___report_rangecheckfailure(v40);
LABEL_203:
          j___report_rangecheckfailure(v34);
          JUMPOUT(0x14041C2A3i64);
        }
        corpseWasShutdownOut[v26] = 0;
        v41 = *(int *)((char *)&sortableCorpses[0].time + v23);
        v42 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
        if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v42);
        if ( v42->current.enabled )
          Com_Printf(14, "CG_SnapshotMP: adding new server-linked corpse at entity number [%i] at time (%i) \n", v24, v41);
        Sys_ProfEndNamedEvent();
        m_characterCount = v76;
        v20 = sortableCorpsesCount;
      }
      v21 = newCorpseEntsCount + 1;
      newCorpseEntsCount = v21;
      if ( (unsigned int)v21 >= v20 )
        break;
      LocalClientStaticGlobals = v77;
    }
  }
  v43 = 0;
  if ( v20 )
  {
    v44 = 0i64;
    v75 = 0i64;
    v45 = &sortableCorpses[0].index;
    while ( 1 )
    {
      if ( !*((_BYTE *)v45 + 2) )
      {
        v46 = *v45;
        if ( (unsigned int)v46 >= 8 )
        {
          LODWORD(newCorpseEntsOut) = 8;
          LODWORD(clientCorpseStateOut) = *v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
          v20 = sortableCorpsesCount;
          v44 = v75;
        }
        if ( !*((_BYTE *)&clientCorpseState[-4] + v46) )
          break;
      }
LABEL_200:
      ++v43;
      v75 = ++v44;
      v45 += 12;
      if ( v43 >= v20 )
        goto LABEL_201;
      LODWORD(v7) = localClientNum;
    }
    v47 = v46;
    if ( v43 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v43, "unsigned", v44) )
      __debugbreak();
    v48 = (__int64)v77;
    v77->corpseinfo[v47].sortIndex = v43;
    if ( (*(_BYTE *)(v47 * 26904 + v48 + 14872) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1179, ASSERT_TYPE_ASSERT, "(corpseinfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)", (const char *)&queryFormat, "corpseinfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE") )
      __debugbreak();
    if ( clientCorpseState[v46] != 2 )
    {
      if ( !enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1183, ASSERT_TYPE_ASSERT, "(detachableCorpsesEnabled)", (const char *)&queryFormat, "detachableCorpsesEnabled") )
        __debugbreak();
      v49 = v46 + v76;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(newCorpseEntsOut) = (_DWORD)v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", newCorpseEntsOut) )
          __debugbreak();
      }
      if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(newCorpseEntsOut) = CgEntitySystem::ms_allocatedCount;
        LODWORD(clientCorpseStateOut) = (_DWORD)v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[(int)v7] )
      {
        LODWORD(newCorpseEntsOut) = (_DWORD)v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", newCorpseEntsOut) )
          __debugbreak();
      }
      v50 = CgEntitySystem::ms_entitySystemArray[(int)v7];
      if ( v49 >= 0x800 )
      {
        LODWORD(newCorpseEntsOut) = 2048;
        LODWORD(clientCorpseStateOut) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
          __debugbreak();
      }
      v51 = (int)v49;
      v52 = (__int64)&v50->m_entities[v51];
      if ( (CgEntitySystem *)((char *)v50 + v51 * 760) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1186, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( (*(_WORD *)(v52 + 372) & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "(cent->prevState.u.player.playerFlags & (1<<10))", (const char *)&queryFormat, "cent->prevState.u.player.playerFlags & SPF_DETACHABLE_CLIENT_CORPSE") )
        __debugbreak();
      if ( (v77->corpseinfo[v47].flag & 2) != 0 )
      {
        if ( (unsigned int)v46 >= 8 )
        {
          LODWORD(newCorpseEntsOut) = 8;
          LODWORD(clientCorpseStateOut) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 651, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        v53 = CG_GetLocalClientStaticGlobals(localClientNum);
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 653, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
          __debugbreak();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v54 = &v53->corpseinfo[v47];
        v55 = ComCharacterLimits::ms_gameData.m_characterCount + v46;
        Entity = CG_GetEntity(localClientNum, v55);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 658, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (Entity->prevState.u.player.playerFlags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 659, ASSERT_TYPE_ASSERT, "(cent->prevState.u.player.playerFlags & (1<<10))", (const char *)&queryFormat, "cent->prevState.u.player.playerFlags & SPF_DETACHABLE_CLIENT_CORPSE") )
          __debugbreak();
        v54->flag &= ~2u;
        v57 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
        if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v57);
        if ( v57->current.enabled )
          Com_Printf(14, "CG_SnapshotMP: detaching corpse at entity number [%i]\n", v55);
        v58 = truncate_cast<short,unsigned int>(v55);
        CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(localClientNum, v54, v58);
      }
      *(_DWORD *)(v52 + 648) |= 1u;
      goto LABEL_199;
    }
    v59 = *(_BYTE *)(v47 * 26904 + v48 + 14872);
    if ( (v59 & 4) == 0 )
    {
      if ( (v59 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1202, ASSERT_TYPE_ASSERT, "(corpseinfo->flag & CG_CORPSE_SERVER_ENT_LINKED)", (const char *)&queryFormat, "corpseinfo->flag & CG_CORPSE_SERVER_ENT_LINKED") )
        __debugbreak();
      goto LABEL_199;
    }
    v60 = v76 + v46;
    if ( v60 > 0x7FFFFFFF || v60 + 0x8000 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v60, "unsigned", v60) )
        __debugbreak();
      v59 = *(_BYTE *)(v47 * 26904 + v48 + 14872);
    }
    if ( (v59 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 355, ASSERT_TYPE_ASSERT, "(corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED)", (const char *)&queryFormat, "corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED") )
      __debugbreak();
    SuitDef = BG_GetSuitDef(*(_DWORD *)(v47 * 26904 + v48 + 5304));
    p_name = &SuitDef->name;
    if ( SuitDef )
    {
      scriptableDef = SuitDef->scriptableDef;
      if ( scriptableDef )
      {
        nextScriptableDef = scriptableDef->nextScriptableDef;
        if ( nextScriptableDef )
        {
LABEL_187:
          if ( ScriptableCl_UpdateReservedScriptableEntityBinding((const LocalClientNum_t)v7, (__int16)v60, nextScriptableDef) )
          {
            v77->corpseinfo[v47].flag &= ~4u;
          }
          else
          {
            if ( p_name )
              v65 = *p_name;
            else
              v65 = "UNKNOWN";
            if ( nextScriptableDef )
              name = nextScriptableDef->name;
            else
              name = "UNKNOWN";
            Com_Printf(14, "CG_SnapshotMP_TryUpdateLinkedPlayerCorpseScriptableBinding: Failed to bind scriptable '%s' to entity %i (Suit %s). Playerstate could be out of sync with the world, will try again.\n", name, (unsigned int)(__int16)v60, v65);
            v77->corpseinfo[v47].flag |= 4u;
          }
LABEL_199:
          v20 = sortableCorpsesCount;
          v44 = v75;
          goto LABEL_200;
        }
      }
    }
    else
    {
      scriptableDef = NULL;
    }
    nextScriptableDef = scriptableDef;
    goto LABEL_187;
  }
LABEL_201:
  CG_PlayerCorpseMP_SetNextSnap_FinalizeCorpses(localClientNum, (const entityState_t *const *)nextSnapCorpseEntsa, nextSnapCorpseEntsCounta, corpseWasShutdownOut);
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_CategorizeNextSnapCorpses
==============
*/
void CG_PlayerCorpseMP_SetNextSnap_CategorizeNextSnapCorpses(const LocalClientNum_t localClientNum, const bool demoJumpTime, const bool enteringKillcam, const entityState_t *const *nextSnapCorpseEnts, const unsigned int nextSnapCorpseEntsCount, __int16 *clientCorpseStateOut, const entityState_t **newCorpseEntsOut, unsigned int *newCorpseEntsCountOut)
{
  LocalClientNum_t v8; 
  unsigned int m_characterCount; 
  cgs_t *LocalClientStaticGlobals; 
  const entityState_t *const *v11; 
  __int16 v12; 
  bool IsEntityHighLoD; 
  const entityState_t *v14; 
  unsigned int v15; 
  __int64 v16; 
  bool v17; 
  char v18; 
  bool v19; 
  const dvar_t *v20; 
  const char *v21; 
  CgEntitySystem *v22; 
  char *v23; 
  const entityState_t *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  cgs_t *v29; 
  __int64 v30; 
  const entityState_t *const *v34; 

  v34 = nextSnapCorpseEnts;
  v8 = localClientNum;
  if ( !nextSnapCorpseEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 699, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts)", (const char *)&queryFormat, "nextSnapCorpseEnts") )
    __debugbreak();
  if ( !clientCorpseStateOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 700, ASSERT_TYPE_ASSERT, "(clientCorpseStateOut)", (const char *)&queryFormat, "clientCorpseStateOut") )
    __debugbreak();
  if ( !newCorpseEntsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 701, ASSERT_TYPE_ASSERT, "(newCorpseEntsOut)", (const char *)&queryFormat, "newCorpseEntsOut") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v28 = ComCharacterLimits::ms_gameData.m_characterCount;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(v8);
  v29 = LocalClientStaticGlobals;
  *(_QWORD *)clientCorpseStateOut = 0i64;
  *((_QWORD *)clientCorpseStateOut + 1) = 0i64;
  *newCorpseEntsCountOut = 0;
  if ( nextSnapCorpseEntsCount )
  {
    v11 = v34;
    v30 = nextSnapCorpseEntsCount;
    do
    {
      if ( !*v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 710, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts[nextSnapId])", (const char *)&queryFormat, "nextSnapCorpseEnts[nextSnapId]") )
          __debugbreak();
        v11 = v34;
      }
      v12 = **(_WORD **)v11;
      IsEntityHighLoD = CG_IsEntityHighLoD(v8, v12);
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&(*v34)->lerp.eFlags, ACTIVE, 0xCu) )
      {
        v14 = *v34;
        v15 = v12 - m_characterCount;
        v16 = (__int64)&LocalClientStaticGlobals->corpseinfo[v15];
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 683, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
          __debugbreak();
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 684, ASSERT_TYPE_ASSERT, "(nextSnapCorpse)", (const char *)&queryFormat, "nextSnapCorpse") )
          __debugbreak();
        if ( *(_BYTE *)(v16 + 14816) )
        {
          v19 = truncate_cast<unsigned char,unsigned int>(v14->eventParm2) == *(_BYTE *)(v16 + 14818);
          v18 = *(_BYTE *)(v16 + 14816);
          v17 = !v19;
        }
        else
        {
          v17 = 1;
          v18 = 0;
        }
        if ( (v18 & 1) != 0 )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v27) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
              __debugbreak();
          }
          if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v27) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v26) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
          {
            LODWORD(v27) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v27) )
              __debugbreak();
          }
          v22 = CgEntitySystem::ms_entitySystemArray[localClientNum];
          if ( (unsigned int)v12 >= 0x800 )
          {
            LODWORD(v27) = 2048;
            LODWORD(v26) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v23 = (char *)v22 + 760 * v12;
          if ( v15 >= 8 )
          {
            LODWORD(v27) = 8;
            LODWORD(v26) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          if ( IsEntityHighLoD )
          {
            if ( demoJumpTime || v17 )
            {
              if ( enteringKillcam )
              {
                clientCorpseStateOut[v15] = 3;
                CG_PlayerCorpseMP_CorpseDebugPrint_Internal_short_("CG_SnapshotMP: ignoring new corpse at [%i] (entering killcam)\n", v12);
              }
              else
              {
                clientCorpseStateOut[v15] = 1;
                if ( *newCorpseEntsCountOut >= 8 )
                {
                  LODWORD(v27) = 8;
                  LODWORD(v26) = *newCorpseEntsCountOut;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 780, ASSERT_TYPE_ASSERT, "(unsigned)( newCorpseEntsCountOut ) < (unsigned)( 8 )", "newCorpseEntsCountOut doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v26, v27) )
                    __debugbreak();
                }
                newCorpseEntsOut[(*newCorpseEntsCountOut)++] = *v34;
              }
            }
            else if ( (*(_BYTE *)(v16 + 14816) & 2) != 0 )
            {
              clientCorpseStateOut[v15] = 2;
              v24 = *v34;
              *((_OWORD *)v23 + 26) = *(_OWORD *)&(*v34)->number;
              *((_OWORD *)v23 + 27) = *(_OWORD *)&v24->lerp.pos.trType;
              *((_OWORD *)v23 + 28) = *(_OWORD *)&v24->lerp.pos.trBase.y;
              *((_OWORD *)v23 + 29) = *(_OWORD *)&v24->lerp.pos.trDelta.z;
              *((_OWORD *)v23 + 30) = *(_OWORD *)v24->lerp.apos.trBase.v;
              *((_OWORD *)v23 + 31) = *(_OWORD *)&v24->lerp.apos.trDelta.y;
              *((_OWORD *)v23 + 32) = *(_OWORD *)&v24->lerp.u.vehicle.bodyPitch;
              *((_OWORD *)v23 + 33) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&v24->lerp.u.infoVolumeGrapple + 24);
              *((_OWORD *)v23 + 34) = *(_OWORD *)&v24->staticState.turret.carrierEntNum;
              *((_OWORD *)v23 + 35) = *(_OWORD *)&v24->clientNum;
              *((_OWORD *)v23 + 36) = *(_OWORD *)&v24->events[0].eventType;
              *((_OWORD *)v23 + 37) = *(_OWORD *)&v24->events[2].eventType;
              *((_OWORD *)v23 + 38) = *(_OWORD *)&v24->index.brushModel;
              *((_OWORD *)v23 + 39) = *(_OWORD *)&v24->animInfo.selectAnim;
              *((_OWORD *)v23 + 40) = *(_OWORD *)&v24->partBits.array[2];
              v25 = *(_QWORD *)&v24->partBits.array[6];
              *((_DWORD *)v23 + 166) |= 1u;
              *((_QWORD *)v23 + 82) = v25;
            }
            else if ( enteringKillcam )
            {
              clientCorpseStateOut[v15] = 3;
              CG_PlayerCorpseMP_CorpseDebugPrint_Internal_short_("CG_SnapshotMP: marking detached corpse for removal at [%i] (entering killcam)\n", v12);
            }
          }
          else
          {
            clientCorpseStateOut[v15] = 3;
            CG_PlayerCorpseMP_CorpseDebugPrint_Internal_short_("CG_SnapshotMP: ignoring corpse at [%i] (low LoD)\n", v12);
          }
        }
        else if ( enteringKillcam || !IsEntityHighLoD )
        {
          *(_BYTE *)(v16 + 14816) = 8;
          v20 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
          if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v20);
          if ( v20->current.enabled )
          {
            v21 = "low LoD";
            if ( enteringKillcam )
              v21 = "entering killcam";
            Com_Printf(14, "CG_SnapshotMP: ignoring new corpse at [%i] (%s)\n", (unsigned int)v12, v21);
          }
        }
        else if ( (v18 & 8) == 0 || v17 )
        {
          if ( *newCorpseEntsCountOut >= 8 )
          {
            LODWORD(v27) = 8;
            LODWORD(v26) = *newCorpseEntsCountOut;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 749, ASSERT_TYPE_ASSERT, "(unsigned)( newCorpseEntsCountOut ) < (unsigned)( 8 )", "newCorpseEntsCountOut doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 750, ASSERT_TYPE_ASSERT, "(corpseIsNew)", (const char *)&queryFormat, "corpseIsNew") )
            __debugbreak();
          newCorpseEntsOut[(*newCorpseEntsCountOut)++] = *v34;
        }
        else
        {
          CG_PlayerCorpseMP_CorpseDebugPrint_Internal_short_("CG_SnapshotMP: ignoring new corpse at [%i] (suppressed because it was low LoD/ new when entering killcam)\n", v12);
        }
        LocalClientStaticGlobals = v29;
        m_characterCount = v28;
        v8 = localClientNum;
      }
      v11 = v34 + 1;
      v19 = v30-- == 1;
      ++v34;
    }
    while ( !v19 );
  }
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_FinalizeCorpses
==============
*/
void CG_PlayerCorpseMP_SetNextSnap_FinalizeCorpses(const LocalClientNum_t localClientNum, const entityState_t *const *nextSnapCorpseEnts, const unsigned int nextSnapCorpseEntsCount, const bool *corpseWasShutdownAndNotReset)
{
  unsigned int v7; 
  __int64 v8; 
  cgs_t *LocalClientStaticGlobals; 
  const entityState_t *const *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int eventParm2; 
  unsigned int m_characterCount; 

  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-FinalizeCorpses");
  if ( !nextSnapCorpseEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1037, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts)", (const char *)&queryFormat, "nextSnapCorpseEnts") )
    __debugbreak();
  if ( !corpseWasShutdownAndNotReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1038, ASSERT_TYPE_ASSERT, "(corpseWasShutdownAndNotReset)", (const char *)&queryFormat, "corpseWasShutdownAndNotReset") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v7 = ComCharacterLimits::ms_gameData.m_characterCount;
  v8 = 8i64;
  do
  {
    if ( *corpseWasShutdownAndNotReset )
    {
      if ( (v7 > 0x7FFFFFFF || v7 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v7, "unsigned", v7) )
        __debugbreak();
      FX_Dismemberment_Clear(localClientNum, (__int16)v7);
      R_UnlinkEntityFromCells(localClientNum, (__int16)v7);
      R_EntityMoved(localClientNum, (__int16)v7);
      FX_MarkEntDetachAll(localClientNum, (__int16)v7);
    }
    ++v7;
    ++corpseWasShutdownAndNotReset;
    --v8;
  }
  while ( v8 );
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  v10 = nextSnapCorpseEnts;
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1058, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
    __debugbreak();
  if ( nextSnapCorpseEntsCount )
  {
    v11 = nextSnapCorpseEntsCount;
    do
    {
      v12 = **(__int16 **)v10 - m_characterCount;
      eventParm2 = (*v10)->eventParm2;
      if ( eventParm2 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)eventParm2, "unsigned", (*v10)->eventParm2) )
        __debugbreak();
      LocalClientStaticGlobals->corpseinfo[v12].serverCorpseUseCount = eventParm2;
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_GatherSortableCorpses
==============
*/
void CG_PlayerCorpseMP_SetNextSnap_GatherSortableCorpses(const LocalClientNum_t localClientNum, const bool demoJumpTime, const bool detachableCorpsesEnabled, const bool enteringKillCam, const __int16 *clientCorpseState, const entityState_t *const *newCorpseEnts, unsigned int newCorpseEntsCount, bool *corpseWasShutdownOut, CG_PlayerCorpseMP_SortableCorpseInfo *sortableCorpsesOut, unsigned int *sortableCorpsesCountOut)
{
  __int64 v13; 
  unsigned int m_characterCount; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned __int8 *p_flag; 
  const __int16 *v18; 
  bool *v19; 
  CgEntitySystem *v20; 
  __int64 v21; 
  centity_t *v22; 
  bool v23; 
  int v24; 
  __int64 v25; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v26; 
  const dvar_t *v27; 
  unsigned int v28; 
  const entityState_t *const *v29; 
  __int64 v30; 
  __int64 v31; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v32; 
  __int64 v33; 
  __int64 v34; 
  cg_t *LocalClientGlobals; 
  char v36; 
  int sortableCorpsesCountOuta; 

  v13 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-GatherSortableCorpses");
  if ( !clientCorpseState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 807, ASSERT_TYPE_ASSERT, "(clientCorpseState)", (const char *)&queryFormat, "clientCorpseState") )
    __debugbreak();
  if ( !newCorpseEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 808, ASSERT_TYPE_ASSERT, "(newCorpseEnts)", (const char *)&queryFormat, "newCorpseEnts") )
    __debugbreak();
  if ( !corpseWasShutdownOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 809, ASSERT_TYPE_ASSERT, "(corpseWasShutdownOut)", (const char *)&queryFormat, "corpseWasShutdownOut") )
    __debugbreak();
  if ( !sortableCorpsesOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 810, ASSERT_TYPE_ASSERT, "(sortableCorpsesOut)", (const char *)&queryFormat, "sortableCorpsesOut") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 814, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v13);
  *(_QWORD *)corpseWasShutdownOut = 0i64;
  *sortableCorpsesCountOut = 0;
  if ( !detachableCorpsesEnabled || demoJumpTime || (v36 = 0, enteringKillCam) )
    v36 = 1;
  p_flag = &LocalClientStaticGlobals->corpseinfo[0].flag;
  sortableCorpsesCountOuta = -m_characterCount;
  v18 = clientCorpseState;
  v19 = corpseWasShutdownOut;
  do
  {
    if ( (*p_flag & 1) != 0 )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v34) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v34) )
          __debugbreak();
      }
      if ( (unsigned int)v13 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v34) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v33) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v13] )
      {
        LODWORD(v34) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v34) )
          __debugbreak();
      }
      v20 = CgEntitySystem::ms_entitySystemArray[v13];
      if ( m_characterCount >= 0x800 )
      {
        LODWORD(v34) = 2048;
        LODWORD(v33) = m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      v21 = (int)m_characterCount;
      v22 = &v20->m_entities[v21];
      if ( (CgEntitySystem *)((char *)v20 + v21 * 760) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 832, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      v23 = v36 || (v22->prevState.u.player.playerFlags & 0x400) == 0;
      v24 = *((_DWORD *)p_flag - 3697);
      if ( v24 && (!v23 || *v18 == 2) )
      {
        if ( *sortableCorpsesCountOut >= 0x10 )
        {
          LODWORD(v34) = 16;
          LODWORD(v33) = *sortableCorpsesCountOut;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 850, ASSERT_TYPE_ASSERT, "(unsigned)( sortableCorpsesCountOut ) < (unsigned)( MAX_SORTABLE_CORPSES_COUNT )", "sortableCorpsesCountOut doesn't index MAX_SORTABLE_CORPSES_COUNT\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v25 = *sortableCorpsesCountOut;
        v26 = &sortableCorpsesOut[v25];
        *sortableCorpsesCountOut = v25 + 1;
        v26->entityState = &v22->nextState;
        v26->index = truncate_cast<short,unsigned int>(m_characterCount + sortableCorpsesCountOuta);
        v26->isNewNextSnap = 0;
        v26->time = *((_DWORD *)p_flag + 1);
      }
      else
      {
        Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-ShutdownCorpse");
        CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v13, v22);
        v22->flags &= ~1u;
        Sys_ProfEndNamedEvent();
        *v19 = 1;
        if ( !v24 || *v18 == 3 )
          *p_flag = 8;
        v27 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
        if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        if ( v27->current.enabled )
          Com_Printf(14, "CG_SnapshotMP: shutdown corpse at entity number [%i] (no longer valid)\n", m_characterCount);
      }
    }
    ++m_characterCount;
    ++v19;
    ++v18;
    p_flag += 26904;
  }
  while ( m_characterCount + sortableCorpsesCountOuta < 8 );
  v28 = 0;
  v29 = newCorpseEnts;
  if ( newCorpseEntsCount )
  {
    v30 = 0i64;
    do
    {
      if ( *sortableCorpsesCountOut >= 0x10 )
      {
        LODWORD(v34) = 16;
        LODWORD(v33) = *sortableCorpsesCountOut;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 862, ASSERT_TYPE_ASSERT, "(unsigned)( sortableCorpsesCountOut ) < (unsigned)( MAX_SORTABLE_CORPSES_COUNT )", "sortableCorpsesCountOut doesn't index MAX_SORTABLE_CORPSES_COUNT\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      v31 = *sortableCorpsesCountOut;
      v32 = &sortableCorpsesOut[v31];
      *sortableCorpsesCountOut = v31 + 1;
      v32->entityState = *v29;
      if ( (v28 > 0x7FFFFFFF || v28 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v28, "unsigned", v30) )
        __debugbreak();
      v32->index = v28;
      v32->isNewNextSnap = 1;
      v32->time = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
      ++v28;
      ++v30;
      ++v29;
    }
    while ( v28 < newCorpseEntsCount );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_ShutdownCorpse
==============
*/
void CG_PlayerCorpseMP_SetNextSnap_ShutdownCorpse(const LocalClientNum_t localClientNum, centity_t *corpseEnt)
{
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-ShutdownCorpse");
  CG_SnapshotMP_ShutdownEntity(localClientNum, corpseEnt);
  corpseEnt->flags &= ~1u;
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayerCorpseMP_SetNextSnap_SortCorpses
==============
*/
void CG_PlayerCorpseMP_SetNextSnap_SortCorpses(const LocalClientNum_t localClientNum, const entityState_t *const *newCorpseEnts, CG_PlayerCorpseMP_SortableCorpseInfo *sortableCorpses, const unsigned int sortableCorpsesCount)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  bool *v8; 
  bool *v9; 
  const dvar_t *v10; 
  LocalClientNum_t v11; 
  bool *p_isNewNextSnap; 
  __int64 p_pos; 
  int v14; 
  int v15; 
  bool *v16; 
  __int16 *v17; 
  unsigned int v18; 
  const cpose_t *PoseExtended; 
  CgEntitySystem *v20; 
  bool v21; 
  int v22; 
  bool v23; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int128 v27; 
  double v28; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v29; 
  __int128 v30; 
  double v31; 
  __int64 v32; 
  __int64 v33; 
  vec3_t corpseOrigin; 
  CG_PlayerCorpseMP_SortableCorpse_LessThanFunc v36; 
  vec3_t *p_corpseOrigin; 
  int v38; 
  int integer; 
  int clientNum; 
  unsigned int v41; 
  __int64 v42; 
  const entityState_t *const *v43; 
  __int64 v44; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v45; 
  vec3_t outOrg; 
  __int64 v47; 
  vec3_t viewDir; 

  v47 = -2i64;
  v4 = sortableCorpsesCount;
  v41 = sortableCorpsesCount;
  v45 = sortableCorpses;
  v43 = newCorpseEnts;
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-SortCorpses");
  if ( !sortableCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 935, ASSERT_TYPE_ASSERT, "(sortableCorpses)", (const char *)&queryFormat, "sortableCorpses") )
    __debugbreak();
  if ( (unsigned int)v4 >= 3 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 941, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    viewDir = LocalClientGlobals->refdef.view.axis.m[0];
    v8 = NULL;
    v9 = NULL;
    v10 = DCONST_DVARINT_cg_corpseFreshTimeout;
    if ( !DCONST_DVARINT_cg_corpseFreshTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFreshTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    v38 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
    v11 = localClientNum;
    v44 = localClientNum;
    p_isNewNextSnap = &sortableCorpses->isNewNextSnap;
    v42 = v4;
    do
    {
      if ( *p_isNewNextSnap )
      {
        p_pos = (__int64)&v43[*((__int16 *)p_isNewNextSnap - 1)]->lerp.pos;
        if ( v43[*((__int16 *)p_isNewNextSnap - 1)] == (const entityState_t *const)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( *(_DWORD *)p_pos == 4 )
        {
          p_corpseOrigin = &corpseOrigin;
          v14 = *(_DWORD *)(p_pos + 12);
          v15 = *(_DWORD *)(p_pos + 16);
          LODWORD(corpseOrigin.v[2]) = s_trbase_aab_Z ^ v15 ^ *(_DWORD *)(p_pos + 20);
          LODWORD(corpseOrigin.v[1]) = s_trbase_aab_Y ^ v14 ^ v15;
          LODWORD(corpseOrigin.v[0]) = v14 ^ ~s_trbase_aab_X;
          memset(&p_corpseOrigin, 0, sizeof(p_corpseOrigin));
          *(float *)&p_corpseOrigin = corpseOrigin.v[0];
          if ( (LODWORD(corpseOrigin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&p_corpseOrigin = corpseOrigin.v[1], (LODWORD(corpseOrigin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&p_corpseOrigin = corpseOrigin.v[2], (LODWORD(corpseOrigin.v[2]) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          corpseOrigin = *(vec3_t *)(p_pos + 12);
        }
        v11 = localClientNum;
      }
      else
      {
        PoseExtended = CG_GetPoseExtended(v11, **(__int16 **)(p_isNewNextSnap - 10), 0);
        CG_GetPoseOrigin(PoseExtended, &corpseOrigin);
      }
      p_isNewNextSnap[8] = BG_PlayerCorpseMP_CalculateCorpseZone(&outOrg, &viewDir, &corpseOrigin, (float *)(p_isNewNextSnap + 10));
      v16 = p_isNewNextSnap - 10;
      v17 = *(__int16 **)(p_isNewNextSnap - 10);
      if ( *p_isNewNextSnap )
        v18 = *((_DWORD *)v17 + 36);
      else
        v18 = *v17;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v33) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v33) )
          __debugbreak();
      }
      if ( v11 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v33) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v32) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v11] )
      {
        LODWORD(v33) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v33) )
          __debugbreak();
      }
      v20 = CgEntitySystem::ms_entitySystemArray[v44];
      if ( v18 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      v21 = p_isNewNextSnap[8] || v20->m_entities[v18].pose.cullIn;
      p_isNewNextSnap[6] = v21;
      v22 = *(_DWORD *)(p_isNewNextSnap + 2);
      p_isNewNextSnap[7] = v38 - v22 <= integer;
      if ( *(_DWORD *)(*(_QWORD *)v16 + 144i64) == clientNum && (!v9 || *((_DWORD *)v9 + 3) < v22 || *((_DWORD *)v9 + 3) == v22 && *(float *)(p_isNewNextSnap + 10) < *((float *)v9 + 5)) )
        v9 = p_isNewNextSnap - 10;
      if ( *(__int16 *)(*(_QWORD *)v16 + 4i64) == clientNum && (!v8 || *((_DWORD *)v8 + 3) < v22 || *((_DWORD *)v8 + 3) == v22 && *(float *)(p_isNewNextSnap + 10) < *((float *)v8 + 5)) )
        v8 = p_isNewNextSnap - 10;
      p_isNewNextSnap += 24;
      v23 = v42-- == 1;
      v11 = localClientNum;
    }
    while ( !v23 );
    v24 = v45;
    v25 = 0;
    v26 = v41;
    if ( v8 )
    {
      if ( v45 != (CG_PlayerCorpseMP_SortableCorpseInfo *)v8 )
      {
        v27 = *(_OWORD *)&v45->entityState;
        v28 = *(double *)&v45->visible;
        *(_OWORD *)&v45->entityState = *(_OWORD *)v8;
        *(double *)&v24->visible = *((double *)v8 + 2);
        *(_OWORD *)v8 = v27;
        *((double *)v8 + 2) = v28;
      }
      v25 = 1;
    }
    if ( v9 && v8 != v9 )
    {
      v29 = &v24[v25];
      if ( v29 != (CG_PlayerCorpseMP_SortableCorpseInfo *)v9 )
      {
        v30 = *(_OWORD *)&v29->entityState;
        v31 = *(double *)&v29->visible;
        *(_OWORD *)&v29->entityState = *(_OWORD *)v9;
        *(double *)&v29->visible = *((double *)v9 + 2);
        *(_OWORD *)v9 = v30;
        *((double *)v9 + 2) = v31;
      }
      ++v25;
    }
    std::_Sort_unchecked<CG_PlayerCorpseMP_SortableCorpseInfo *,CG_PlayerCorpseMP_SortableCorpse_LessThanFunc>(&v24[v25], &v24[v26], (24i64 * v26 - 24i64 * v25) / 24, v36);
    memset(&corpseOrigin, 0, sizeof(corpseOrigin));
    memset(&outOrg, 0, sizeof(outOrg));
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayerCorpseMP_ShutdownEntity
==============
*/
void CG_PlayerCorpseMP_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v5; 
  __int64 v6; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 310, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v5 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v5 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 314, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseindex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v6, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  LocalClientStaticGlobals->corpseinfo[v5].flag = 0;
}

/*
==============
CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse
==============
*/
void CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse(LocalClientNum_t localClientNum, int sourceEntNum, CGCorpseInfoMP *destCorpseInfo)
{
  centity_t *Entity; 
  unsigned __int8 eType; 
  const DObj *ClientDObj; 
  const DObj *v9; 

  if ( !destCorpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 432, ASSERT_TYPE_ASSERT, "(destCorpseInfo != nullptr)", (const char *)&queryFormat, "destCorpseInfo != nullptr") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, sourceEntNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 436, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  eType = Entity->pose.eType;
  if ( (((Entity->pose.eType - 1) & 0xEE) == 0 && eType != 18 || eType == 18) && (ClientDObj = Com_GetClientDObj(sourceEntNum, localClientNum), (v9 = ClientDObj) != NULL) && DObjHasProceduralBones(ClientDObj) )
  {
    XAnimBonePhysicsSaveState(v9, &destCorpseInfo->transferredDynamicBonesState);
    destCorpseInfo->flag |= 0x10u;
  }
  else
  {
    destCorpseInfo->flag &= ~0x10u;
  }
}

/*
==============
CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding
==============
*/
void CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding(const LocalClientNum_t localClientNum, CGCorpseInfoMP *corpseInfo, const __int16 entnum)
{
  const SuitDef *SuitDef; 
  const char **p_name; 
  ScriptableDef *scriptableDef; 
  const ScriptableDef *nextScriptableDef; 
  const char *name; 
  const char *v11; 

  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  if ( (corpseInfo->flag & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 355, ASSERT_TYPE_ASSERT, "(corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED)", (const char *)&queryFormat, "corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(corpseInfo->ci.suitIndex);
  p_name = &SuitDef->name;
  if ( !SuitDef )
  {
    scriptableDef = NULL;
LABEL_12:
    nextScriptableDef = scriptableDef;
    goto LABEL_13;
  }
  scriptableDef = SuitDef->scriptableDef;
  if ( !scriptableDef )
    goto LABEL_12;
  nextScriptableDef = scriptableDef->nextScriptableDef;
  if ( !nextScriptableDef )
    goto LABEL_12;
LABEL_13:
  if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, entnum, nextScriptableDef) )
  {
    corpseInfo->flag &= ~4u;
  }
  else
  {
    name = "UNKNOWN";
    if ( p_name )
      v11 = *p_name;
    else
      v11 = "UNKNOWN";
    if ( nextScriptableDef )
      name = nextScriptableDef->name;
    Com_Printf(14, "CG_SnapshotMP_TryUpdateLinkedPlayerCorpseScriptableBinding: Failed to bind scriptable '%s' to entity %i (Suit %s). Playerstate could be out of sync with the world, will try again.\n", name, (unsigned int)entnum, v11);
    corpseInfo->flag |= 4u;
  }
}

