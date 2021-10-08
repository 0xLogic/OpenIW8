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
  int v18; 
  __int64 v19; 
  int v27; 
  int v28; 
  __int64 v29; 
  int *p_infoValid; 
  CgEntitySystem *v33; 
  __int64 v34; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 result; 
  __int64 v90; 
  __int64 v91; 
  int v95[6]; 
  int v96; 
  int v97; 
  __int64 v99; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  v99 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v97 = corpseEntOffset;
  v18 = numCorpseInfos;
  v96 = numCorpseInfos;
  v19 = localClientNum;
  __asm
  {
    vmovss  xmm13, cs:__real@bf800000
    vmovaps xmm11, xmm13
    vmovaps xmm12, xmm13
  }
  v95[4] = 0;
  __asm { vmovaps xmm14, xmm13 }
  v95[5] = 0;
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovaps xmm9, xmm8
    vmovaps xmm10, xmm8
  }
  v27 = 0;
  v28 = 0;
  if ( numCorpseInfos <= 0 )
    goto LABEL_33;
  v29 = corpseEntOffset;
  p_infoValid = &corpseInfos->ci.infoValid;
  __asm
  {
    vmovsd  xmm15, cs:__real@3f30000000000000
    vxorps  xmm7, xmm7, xmm7
  }
  do
  {
    if ( (p_infoValid[3697] & 1) != 0 && *p_infoValid )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v91) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v91) )
          __debugbreak();
      }
      if ( (unsigned int)v19 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v91) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v90) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v90, v91) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v19] )
      {
        LODWORD(v91) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v91) )
          __debugbreak();
      }
      v33 = CgEntitySystem::ms_entitySystemArray[v19];
      if ( (unsigned int)(v28 + v97) >= 0x800 )
      {
        LODWORD(v91) = 2048;
        LODWORD(v90) = v28 + v97;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v90, v91) )
          __debugbreak();
      }
      v34 = (__int64)&v33->m_entities[v29];
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 115, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
        __debugbreak();
      if ( ((*(_WORD *)(v34 + 408) - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(corpseEnt->nextState.eType == ET_AGENT_CORPSE || corpseEnt->nextState.eType == ET_PLAYER_CORPSE)", (const char *)&queryFormat, "corpseEnt->nextState.eType == ET_AGENT_CORPSE || corpseEnt->nextState.eType == ET_PLAYER_CORPSE") )
        __debugbreak();
      v27 = 1;
      if ( !*(_QWORD *)(v34 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v34 + 48), (const cpose_t *)v34);
      FunctionPointer_origin((const vec4_t *)(v34 + 56), (vec3_t *)v95);
      if ( *(_BYTE *)(v34 + 2) )
      {
        __asm
        {
          vmovd   xmm0, [rsp+158h+var_110]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm15
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  [rsp+158h+var_110], xmm2
          vmovd   xmm0, [rsp+158h+var_10C]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm15
          vcvtsd2ss xmm3, xmm1, xmm1
          vmovss  [rsp+158h+var_10C], xmm3
          vmovd   xmm0, [rsp+158h+var_108]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm15
          vcvtsd2ss xmm4, xmm1, xmm1
          vmovss  [rsp+158h+var_108], xmm4
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, [rsp+158h+var_108]
          vmovss  xmm3, [rsp+158h+var_10C]
          vmovss  xmm2, [rsp+158h+var_110]
        }
      }
      __asm
      {
        vsubss  xmm6, xmm2, dword ptr [rax]
        vsubss  xmm5, xmm3, dword ptr [rax+4]
        vsubss  xmm3, xmm4, dword ptr [rax+8]
      }
      _EAX = 0;
      __asm { vmovd   xmm1, eax }
      _EAX = use2DDist;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm4, xmm7, xmm3, xmm2
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmovss  [rsp+158h+var_118], xmm4
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm5, dword ptr [rax+4]
        vmulss  xmm0, xmm6, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rax+8]
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm7
        vmovaps xmm8, xmm7
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm3, cs:__real@3f000000
        vcomiss xmm1, xmm0
        vcomiss xmm12, xmm3
        vmovaps xmm9, xmm7
        vcomiss xmm14, xmm3
        vmovaps xmm10, xmm7
        vucomiss xmm8, xmm7
        vcmpneqss xmm0, xmm8, xmm7
        vblendvps xmm0, xmm11, xmm8, xmm0
        vmovss  [rsp+158h+var_F0], xmm0
        vucomiss xmm9, xmm7
        vcmpneqss xmm0, xmm9, xmm7
        vblendvps xmm0, xmm12, xmm9, xmm0
        vmovss  [rsp+158h+var_118], xmm0
        vucomiss xmm10, xmm7
      }
      memset(v95, 0, 0xCui64);
      __asm
      {
        vmovss  xmm11, [rsp+158h+var_F0]
        vmovss  xmm12, [rsp+158h+var_118]
        vcmpneqss xmm0, xmm10, xmm7
        vblendvps xmm0, xmm14, xmm10, xmm0
        vmovaps xmm14, xmm0
        vmovss  [rsp+158h+var_118], xmm0
      }
      v18 = v96;
    }
    ++v28;
    ++v29;
    p_infoValid += 6726;
  }
  while ( v28 < v18 );
  if ( v27 )
  {
    __asm { vucomiss xmm11, xmm13 }
    result = 0i64;
  }
  else
  {
LABEL_33:
    result = 0xFFFFFFFFi64;
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
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

  _RSI = customization;
  _RBX = corpseInfo;
  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 375, ASSERT_TYPE_ASSERT, "( ( corpseInfo != nullptr ) )", "( corpseInfo ) = %p", NULL) )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 377, ASSERT_TYPE_ASSERT, "( ( customization != nullptr ) )", "( customization ) = %p", NULL) )
    __debugbreak();
  memcpy_0(&_RBX->ci, ci, sizeof(_RBX->ci));
  v6 = _RBX->ci.corpseReferenceInfo.infoValid == 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  _RBX->ci.usingKillstreakTrigger = 0;
  _RBX->ci.skydiveAnimState = 0;
  if ( v6 )
  {
    Com_PrintWarning(14, "Cloning client corpse, but reference info is invalid for player entity %i. Resetting all hide part bits.\n", (unsigned int)ci->entityNum);
    memset_0(&_RBX->ci.corpseReferenceInfo.modelIndex, 0, 0x54ui64);
    _RBX->ci.corpseReferenceInfo.infoValid = 1;
  }
}

/*
==============
CG_PlayerCorpseMP_DebugDraw
==============
*/
void CG_PlayerCorpseMP_DebugDraw(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v8; 
  __int64 v10; 
  unsigned int m_characterCount; 
  cgs_t *LocalClientStaticGlobals; 
  const char *v16; 
  unsigned __int8 *p_flag; 
  __int64 v24; 
  __int64 v26; 
  unsigned __int8 v27; 
  char v32; 
  __int128 *v33; 
  char v34; 
  CgEntitySystem *v35; 
  __int64 v36; 
  __int64 p_nextState; 
  __int64 p_clientNum; 
  bool IsEntityHighLoD; 
  const char *v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  char v44; 
  const char *v45; 
  char v46; 
  const cpose_t *PoseExtended; 
  const char *v50; 
  char *fmt; 
  float fmta; 
  __int64 forceColor; 
  __int64 shadow; 
  float charHeight; 
  float charHeighta; 
  float charHeightb; 
  int v64; 
  vec3_t outOrigin; 

  v8 = DCONST_DVARBOOL_cg_clientCorpse_debugDisplay;
  v10 = localClientNum;
  if ( !DCONST_DVARBOOL_cg_clientCorpse_debugDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_debugDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+118h+var_48], xmm6
      vmovaps [rsp+118h+var_58], xmm7
      vmovaps [rsp+118h+var_68], xmm8
      vmovaps [rsp+118h+var_78], xmm9
      vmovaps [rsp+118h+var_88], xmm10
      vmovaps [rsp+118h+var_98], xmm11
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v10);
    if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1255, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
      __debugbreak();
    __asm
    {
      vmovss  xmm7, cs:__real@41000000
      vmovss  [rsp+118h+charHeight], xmm7
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Client corpse info (server linked = green, detached = orange, inactive = gray)", &colorWhite, 0, 1, charHeight, 0);
    v16 = j_va("Corpse entity offset = %i. serverUseCount and LoD are for server entity at this index (might not correspond with client corpse at index)", m_characterCount);
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  [rsp+118h+charHeight], xmm7
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v16, &colorWhite, 0, 1, charHeighta, 0);
    __asm
    {
      vmovss  xmm6, cs:__real@41c00000
      vmovss  xmm8, cs:__real@44870000
      vmovss  xmm9, cs:__real@41a00000
      vmovss  xmm11, cs:__real@3f000000
    }
    p_flag = &LocalClientStaticGlobals->corpseinfo[0].flag;
    v64 = -m_characterCount;
    v24 = v10;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    do
    {
      v26 = tls_index;
      v27 = *p_flag;
      if ( dword_148C6487C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C6487C);
        if ( dword_148C6487C == -1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
            vmovups cs:xmmword_148C64868, xmm0
          }
          j__Init_thread_footer(&dword_148C6487C);
        }
      }
      if ( dword_148C64894 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v26) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C64894);
        if ( dword_148C64894 == -1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
            vmovups cs:xmmword_148C64880, xmm0
          }
          j__Init_thread_footer(&dword_148C64894);
        }
      }
      if ( dword_148C648AC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v26) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C648AC);
        if ( dword_148C648AC == -1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorDkGrey@@3Tvec4_t@@B; vec4_t const colorDkGrey
            vmovups cs:xmmword_148C64898, xmm0
          }
          j__Init_thread_footer(&dword_148C648AC);
        }
      }
      if ( dword_148C648C4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v26) + 1772i64) )
      {
        j__Init_thread_header(&dword_148C648C4);
        if ( dword_148C648C4 == -1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorLtGrey@@3Tvec4_t@@B; vec4_t const colorLtGrey
            vmovups xmmword ptr cs:fontsize, xmm0
          }
          j__Init_thread_footer(&dword_148C648C4);
        }
      }
      v32 = v27 & 1;
      if ( (v27 & 8) != 0 )
      {
        if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "(0 == (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 == (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
          __debugbreak();
        v33 = (__int128 *)&fontsize;
      }
      else if ( (v27 & 2) != 0 )
      {
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1236, ASSERT_TYPE_ASSERT, "(0 != (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 != (corpseInfoFlag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
          __debugbreak();
        v33 = &xmmword_148C64868;
      }
      else
      {
        v33 = &xmmword_148C64880;
        if ( !v32 )
          v33 = &xmmword_148C64898;
      }
      v34 = *p_flag & 1;
      if ( v34 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(shadow) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
            __debugbreak();
        }
        if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
          LODWORD(forceColor) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v24] )
        {
          LODWORD(shadow) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
            __debugbreak();
        }
        v35 = CgEntitySystem::ms_entitySystemArray[v24];
        if ( m_characterCount >= 0x800 )
        {
          LODWORD(shadow) = 2048;
          LODWORD(forceColor) = m_characterCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v36 = (int)m_characterCount;
        p_nextState = (__int64)&v35->m_entities[v36].nextState;
        p_clientNum = (__int64)&v35->m_entities[v36].nextState.clientNum;
        if ( (v35->m_entities[v36].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1279, ASSERT_TYPE_ASSERT, "(!corpseIsActive || CENextValid( corpseEntity ))", (const char *)&queryFormat, "!corpseIsActive || CENextValid( corpseEntity )") )
          __debugbreak();
      }
      else
      {
        p_nextState = 400i64;
        p_clientNum = 544i64;
      }
      if ( (m_characterCount > 0x7FFFFFFF || m_characterCount + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)m_characterCount, "unsigned", m_characterCount) )
        __debugbreak();
      IsEntityHighLoD = CG_IsEntityHighLoD((const LocalClientNum_t)v10, m_characterCount);
      v40 = "Low";
      if ( IsEntityHighLoD )
        v40 = "High";
      if ( v34 )
      {
        v41 = *((_DWORD *)p_flag + 1);
        v42 = p_flag[3];
        v43 = *(unsigned int *)p_clientNum;
      }
      else
      {
        v42 = 0xFFFFFFFFi64;
        v41 = -1;
        v43 = 0xFFFFFFFFi64;
      }
      LODWORD(shadow) = p_flag[1];
      LODWORD(forceColor) = p_flag[2];
      LODWORD(fmt) = v41;
      v45 = j_va("[%i]:\tclientNum = %i,\toriginalCorpseIndex = %i,\tfirstSnapTime = %i,\tserverUseCount = %i,\tsortIndex = %i,\tLoD = %s", m_characterCount + v64, v43, v42, fmt, forceColor, shadow, v40);
      __asm { vcomiss xmm6, xmm10 }
      if ( !(v44 | v46) )
      {
        __asm { vcomiss xmm6, xmm8 }
        if ( v44 )
        {
          __asm
          {
            vmovss  [rsp+118h+charHeight], xmm7
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm9; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v45, (const vec4_t *)v33, 0, 1, charHeightb, 0);
        }
      }
      __asm { vaddss  xmm6, xmm6, xmm7 }
      if ( v34 )
      {
        PoseExtended = CG_GetPoseExtended((LocalClientNum_t)v10, *(__int16 *)p_nextState, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        v50 = j_va("[%i]: clientNum = %i", m_characterCount + v64, *(unsigned int *)p_clientNum);
        __asm { vmovss  dword ptr [rsp+118h+fmt], xmm11 }
        CL_AddDebugStarWithText(&outOrigin, (const vec4_t *)v33, (const vec4_t *)v33, v50, fmta, 0, 1, 0);
      }
      ++m_characterCount;
      p_flag += 26904;
      v24 = v10;
    }
    while ( m_characterCount + v64 < 8 );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
}

/*
==============
CG_PlayerCorpseMP_FreeClientCorpse
==============
*/
void CG_PlayerCorpseMP_FreeClientCorpse(LocalClientNum_t localClientNum)
{
  __int64 v4; 
  cgs_t *LocalClientStaticGlobals; 
  cgs_t *v7; 
  bool v11; 
  char v24; 
  unsigned int m_agentCorpseCount; 
  int v26; 
  int CorpseFreeIndex; 
  __int64 v28; 
  unsigned __int64 ClientCorpseMaxCount; 
  int ClientCorpseEntityIndexOffset; 
  int v31; 
  __int64 v32; 
  int use2DDist; 
  __int64 v38; 
  unsigned int v39; 
  __int64 v40; 
  int v41; 
  vec3_t outOrg; 
  __int64 v43; 
  vec3_t v44; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    use2DDist = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, use2DDist) )
      __debugbreak();
  }
  if ( clientUIActives[v4].connectionState == CA_ACTIVE )
  {
    _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v4);
    v7 = LocalClientStaticGlobals;
    if ( _RSI )
    {
      if ( LocalClientStaticGlobals )
      {
        RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm5, dword ptr [rsi+6944h]
          vmovss  xmm6, dword ptr [rsi+6948h]
          vmovss  xmm7, dword ptr [rsi+694Ch]
        }
        v11 = 1;
        __asm
        {
          vxorps  xmm4, xmm4, xmm4
          vmovss  dword ptr [rsp+0C8h+var_58+8], xmm4
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm3, xmm2, xmm0
          vdivss  xmm1, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm1
          vmovss  dword ptr [rsp+0C8h+var_58], xmm0
          vmulss  xmm1, xmm6, xmm1
          vmovss  dword ptr [rsp+0C8h+var_58+4], xmm1
          vucomiss xmm3, xmm4
        }
        if ( v24 )
        {
          v11 = 0;
          __asm
          {
            vmovss  dword ptr [rsp+0C8h+var_58], xmm5
            vmovss  dword ptr [rsp+0C8h+var_58+4], xmm6
            vmovss  dword ptr [rsp+0C8h+var_58+8], xmm7
          }
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        m_agentCorpseCount = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v26 = ComCharacterLimits::ms_gameData.m_characterCount + ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( m_agentCorpseCount > 8 )
        {
          v41 = 8;
          v39 = m_agentCorpseCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 235, ASSERT_TYPE_ASSERT, "( agentCorpseCount ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "agentCorpseCount", "ARRAY_COUNT( cgs->agentCorpseInfo )", v39, v41) )
            __debugbreak();
        }
        CorpseFreeIndex = CG_GetCorpseFreeIndex((LocalClientNum_t)v4, v7->agentCorpseInfo, m_agentCorpseCount, v26, &outOrg, &v44, v11);
        v28 = CorpseFreeIndex;
        if ( CorpseFreeIndex < 0 )
        {
          ClientCorpseMaxCount = ComCharacterLimits::GetClientCorpseMaxCount();
          ClientCorpseEntityIndexOffset = ComCharacterLimits::GetClientCorpseEntityIndexOffset();
          if ( ClientCorpseMaxCount > 8 )
          {
            LODWORD(v40) = 8;
            LODWORD(v38) = ClientCorpseMaxCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 247, ASSERT_TYPE_ASSERT, "( clientCorpseCount ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "clientCorpseCount", "ARRAY_COUNT( cgs->corpseinfo )", v38, v40) )
              __debugbreak();
          }
          v31 = CG_GetCorpseFreeIndex((LocalClientNum_t)v4, v7->corpseinfo, ClientCorpseMaxCount, ClientCorpseEntityIndexOffset, &outOrg, &v44, v11);
          v32 = v31;
          if ( v31 >= 0 )
          {
            Com_Printf(14, "Disabling corpse %u because have exceeded the skinning cache threshhold.\n", (unsigned int)v31);
            v7->corpseinfo[v32].ci.infoValid = 0;
          }
        }
        else
        {
          Com_Printf(14, "Disabling corpse %u because have exceeded the skinning cache threshhold.\n", (unsigned int)CorpseFreeIndex);
          v7->agentCorpseInfo[v28].ci.infoValid = 0;
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  int v3; 
  XAnimTree **p_pXAnimTree; 
  XAnimTree *v6; 
  float fmt; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 49, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
    __debugbreak();
  v3 = 0;
  p_pXAnimTree = &LocalClientStaticGlobals->corpseinfo[0].ci.pXAnimTree;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v3 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    v6 = *p_pXAnimTree;
    memset_0(&LocalClientStaticGlobals->corpseinfo[v3], 0, sizeof(LocalClientStaticGlobals->corpseinfo[v3]));
    *p_pXAnimTree = v6;
    if ( v6 )
    {
      __asm { vmovss  dword ptr [rsp+68h+fmt], xmm6 }
      XAnimClearTreeGoalWeights(v6, 0, XANIM_SUBTREE_DEFAULT, 0, fmt, 1, NULL, LINEAR);
    }
    ++v3;
    p_pXAnimTree += 3363;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
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
  unsigned int m_characterCount; 
  __int64 v8; 
  unsigned int v10; 
  __int16 v11; 
  int v12; 
  unsigned int v14; 
  unsigned int v16; 
  unsigned int v17; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  bool *attachTagIndexChanged; 
  __int64 v49; 
  const characterInfo_t *p_ci; 
  centity_t *v52; 
  cpose_t *v53; 
  XAnimOwner v56; 
  centity_t *Entity; 
  unsigned __int8 eType; 
  const DObj *ClientDObj; 
  const DObj *v60; 
  DObj *v61; 
  int ragdollHandle; 
  Ragdoll *Ragdoll; 
  DObj *v64; 
  bool IsRagdoll; 
  int killcamRagdollHandle; 
  Ragdoll *v67; 
  DObj *v68; 
  bool v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  XAnimTree *inOutAnimTree; 
  unsigned __int64 v75; 
  centity_t *cent; 
  cpose_t *pose; 
  __int64 v78; 
  vec3_t outOrigin; 
  __int16 v81; 
  int fromDObjHandle; 

  v78 = -2i64;
  v3 = toCorpseIndex;
  v4 = fromCorpseIndex;
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-MoveDetachedPlayerCorpse");
  if ( (unsigned int)v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( fromCorpseIndex ) < (unsigned)( 8 )", "fromCorpseIndex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v4, 8) )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v71) = 8;
    LODWORD(v70) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( toCorpseIndex ) < (unsigned)( 8 )", "toCorpseIndex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v70, v71) )
      __debugbreak();
  }
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  _R15 = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 477, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v8 = v4;
  v75 = 26904 * v4;
  _RBX = &_R15->corpseinfo[v3];
  if ( (_R15->corpseinfo[v4].flag & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 482, ASSERT_TYPE_ASSERT, "(fromCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)", (const char *)&queryFormat, "fromCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE") )
    __debugbreak();
  if ( (_R15->corpseinfo[v3].flag & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 483, ASSERT_TYPE_ASSERT, "(0 == (toCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE))", (const char *)&queryFormat, "0 == (toCorpseInfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)") )
    __debugbreak();
  v10 = truncate_cast<short,unsigned int>(m_characterCount + v4);
  v11 = truncate_cast<short,unsigned int>(m_characterCount + v3);
  v12 = v11;
  v81 = v11;
  fromDObjHandle = v10;
  _R14 = CG_GetEntity(localClientNum, v10);
  pose = &_R14->pose;
  v14 = v12;
  _RSI = CG_GetEntity(localClientNum, v12);
  cent = _RSI;
  Com_Printf(14, "CG_SnapshotMP: moving client corpse from entity [%i] to [%i]\n", v10, v14);
  _RBX->originalCorpseIndex = _R15->corpseinfo[v8].originalCorpseIndex;
  _RBX->flag = 1;
  _R15->corpseinfo[v8].flag = 0;
  _RBX->firstSnapshotTime = _R15->corpseinfo[v8].firstSnapshotTime;
  if ( _R14->typeData.flightDurationMs != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 505, ASSERT_TYPE_ASSERT, "( fromCent->typeData.ragdollConstraintEnt ) == ( ENTITYNUM_NONE )", "%s == %s\n\t%i, %i", "fromCent->typeData.ragdollConstraintEnt", "ENTITYNUM_NONE", _R14->typeData.flightDurationMs, 2047) )
    __debugbreak();
  _RSI->typeData.flightDurationMs = 2047;
  v16 = _RSI->nextState.lerp.eFlags.m_flags[0];
  v17 = _RSI->prevState.eFlags.m_flags[0];
  __asm
  {
    vmovups xmm0, xmmword ptr [r14+190h]
    vmovups xmmword ptr [rsi+190h], xmm0
    vmovups xmm1, xmmword ptr [r14+1A0h]
    vmovups xmmword ptr [rsi+1A0h], xmm1
    vmovups xmm0, xmmword ptr [r14+1B0h]
    vmovups xmmword ptr [rsi+1B0h], xmm0
    vmovups xmm1, xmmword ptr [r14+1C0h]
    vmovups xmmword ptr [rsi+1C0h], xmm1
    vmovups xmm0, xmmword ptr [r14+1D0h]
    vmovups xmmword ptr [rsi+1D0h], xmm0
    vmovups xmm1, xmmword ptr [r14+1E0h]
    vmovups xmmword ptr [rsi+1E0h], xmm1
    vmovups xmm0, xmmword ptr [r14+1F0h]
    vmovups xmmword ptr [rsi+1F0h], xmm0
    vmovups xmm0, xmmword ptr [r14+200h]
    vmovups xmmword ptr [rsi+200h], xmm0
    vmovups xmm1, xmmword ptr [r14+210h]
    vmovups xmmword ptr [rsi+210h], xmm1
    vmovups xmm0, xmmword ptr [r14+220h]
    vmovups xmmword ptr [rsi+220h], xmm0
    vmovups xmm1, xmmword ptr [r14+230h]
    vmovups xmmword ptr [rsi+230h], xmm1
    vmovups xmm0, xmmword ptr [r14+240h]
    vmovups xmmword ptr [rsi+240h], xmm0
    vmovups xmm1, xmmword ptr [r14+250h]
    vmovups xmmword ptr [rsi+250h], xmm1
    vmovups xmm0, xmmword ptr [r14+260h]
    vmovups xmmword ptr [rsi+260h], xmm0
    vmovups xmm1, xmmword ptr [r14+270h]
    vmovups xmmword ptr [rsi+270h], xmm1
  }
  *(_QWORD *)&_RSI->nextState.partBits.array[6] = *(_QWORD *)&_R14->nextState.partBits.array[6];
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+120h]
    vmovups ymmword ptr [rsi+120h], ymm0
    vmovups ymm1, ymmword ptr [r14+140h]
    vmovups ymmword ptr [rsi+140h], ymm1
    vmovups ymm0, ymmword ptr [r14+160h]
    vmovups ymmword ptr [rsi+160h], ymm0
    vmovups xmm1, xmmword ptr [r14+180h]
    vmovups xmmword ptr [rsi+180h], xmm1
  }
  _RSI->prevEType = _R14->prevEType;
  _RSI->prevOtherEntityNum = _R14->prevOtherEntityNum;
  _RSI->prevPhysicsChildBodyIdx = _R14->prevOtherEntityNum;
  _RSI->prevLinkParent = _R14->prevLinkParent;
  *(_WORD *)_RSI->tracerDrawRateCounter = *(_WORD *)_R14->tracerDrawRateCounter;
  _RSI->weaponVisTestCounter = _R14->weaponVisTestCounter;
  _RSI->flags = _R14->flags;
  _RSI->typeData.flightDurationMs = _R14->typeData.flightDurationMs;
  _RSI->pose.cullIn = 0;
  _RSI->previousEventSequence.combined = _R14->previousEventSequence.combined;
  _RSI->nextState.number = v14;
  _RSI->nextState.lerp.eFlags.m_flags[0] ^= ((unsigned __int8)v16 ^ (unsigned __int8)_RSI->nextState.lerp.eFlags.m_flags[0]) & 4;
  _RSI->prevState.eFlags.m_flags[0] ^= (_RSI->prevState.eFlags.m_flags[0] ^ v17) & 4;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RSI->nextState.lerp.eFlags, ACTIVE, 0x1Bu);
  _RSI->flags |= 1u;
  AimAssist_ClearEntityReference(localClientNum, v14);
  CG_GetPoseOrigin(&_R14->pose, &outOrigin);
  CG_SetPoseOrigin(&_RSI->pose, &outOrigin);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+48h]
    vmovss  dword ptr [rsp+0D8h+outOrigin], xmm2
    vmovss  xmm0, dword ptr [r14+4Ch]
    vmovss  dword ptr [rsp+0D8h+outOrigin+4], xmm0
    vmovss  xmm1, dword ptr [r14+50h]
    vmovss  dword ptr [rsp+0D8h+outOrigin+8], xmm1
    vmovss  dword ptr [rsi+48h], xmm2
    vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+4]
    vmovss  dword ptr [rsi+4Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0D8h+outOrigin+8]
    vmovss  dword ptr [rsi+50h], xmm1
  }
  if ( !_R14->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
    __debugbreak();
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(_R14->pose.prevOrigin.Get_prevOrigin, &_R14->pose);
  FunctionPointer_prevOrigin(&_R14->pose.prevOrigin.prevOrigin, &outOrigin);
  CG_SetPrevPoseOrigin(&_RSI->pose, &outOrigin);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+78h]
    vmovss  dword ptr [rsp+0D8h+outOrigin], xmm2
    vmovss  xmm0, dword ptr [r14+7Ch]
    vmovss  dword ptr [rsp+0D8h+outOrigin+4], xmm0
    vmovss  xmm1, dword ptr [r14+80h]
    vmovss  dword ptr [rsp+0D8h+outOrigin+8], xmm1
    vmovss  dword ptr [rsi+78h], xmm2
    vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+4]
    vmovss  dword ptr [rsi+7Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0D8h+outOrigin+8]
    vmovss  dword ptr [rsi+80h], xmm1
  }
  _RSI->pose.eType = _R14->pose.eType;
  *(_QWORD *)&_RSI->nextUseCount = 0i64;
  BG_ClearCharacterDObj(&_RSI->nextState);
  inOutAnimTree = _RBX->ci.pXAnimTree;
  if ( _R15->corpseinfo[v8].ci.modelIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 561, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.modelIndexChanged)", (const char *)&queryFormat, "!fromCorpseInfo->ci.modelIndexChanged") )
    __debugbreak();
  attachTagIndexChanged = _R15->corpseinfo[v8].ci.attachTagIndexChanged;
  v49 = 9i64;
  do
  {
    if ( *(attachTagIndexChanged - 9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 564, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.attachModelIndexChanged[attachIndex])", (const char *)&queryFormat, "!fromCorpseInfo->ci.attachModelIndexChanged[attachIndex]") )
      __debugbreak();
    if ( *attachTagIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 565, ASSERT_TYPE_ASSERT, "(!fromCorpseInfo->ci.attachTagIndexChanged[attachIndex])", (const char *)&queryFormat, "!fromCorpseInfo->ci.attachTagIndexChanged[attachIndex]") )
      __debugbreak();
    ++attachTagIndexChanged;
    --v49;
  }
  while ( v49 );
  _RDI = v75;
  p_ci = &_R15->corpseinfo[v75 / 0x6918].ci;
  v52 = cent;
  v53 = pose;
  if ( (cgs_t *)((char *)_R15 + v75) == (cgs_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  memcpy_0(&_RBX->ci, p_ci, sizeof(_RBX->ci));
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+r15+38h]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rdi+r15+48h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  _RBX->ci.usingKillstreakTrigger = 0;
  _RBX->ci.skydiveAnimState = 0;
  if ( !_RBX->ci.corpseReferenceInfo.infoValid )
  {
    Com_PrintWarning(14, "Cloning client corpse, but reference info is invalid for player entity %i. Resetting all hide part bits.\n", (unsigned int)p_ci->entityNum);
    memset_0(&_RBX->ci.corpseReferenceInfo.modelIndex, 0, 0x54ui64);
    _RBX->ci.corpseReferenceInfo.infoValid = 1;
  }
  if ( PlayerASM_IsEnabled() )
  {
    LOBYTE(v56) = 1;
    BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v56, p_ci, &inOutAnimTree);
  }
  _RBX->ci.pXAnimTree = inOutAnimTree;
  XAnimCloneAnimTree(*(const XAnimTree **)((char *)&_R15->corpseinfo[0].ci.pXAnimTree + _RDI), inOutAnimTree);
  FX_MarkEntDetachAll(localClientNum, v14);
  FX_Dismemberment_Transfer(localClientNum, fromDObjHandle, v14);
  CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(localClientNum, _RBX, v81);
  _RBX->ci.dobjDirty = 1;
  Entity = CG_GetEntity(localClientNum, fromDObjHandle);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 436, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  eType = Entity->pose.eType;
  if ( (((Entity->pose.eType - 1) & 0xEE) == 0 && eType != 18 || eType == 18) && (ClientDObj = Com_GetClientDObj(fromDObjHandle, localClientNum), (v60 = ClientDObj) != NULL) && DObjHasProceduralBones(ClientDObj) )
  {
    XAnimBonePhysicsSaveState(v60, &_RBX->transferredDynamicBonesState);
    _RBX->flag |= 0x10u;
  }
  else
  {
    _RBX->flag &= ~0x10u;
  }
  CG_PlayersMP_UpdateCorpseDObj(localClientNum, v52, &_RBX->ci);
  if ( CG_Pose_IsRagdoll(v53) )
    goto LABEL_64;
  if ( v53 == (cpose_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(v53[1].mdaoCullIn - 23) <= 5 )
  {
LABEL_64:
    v52->pose.ragdollFlags = v53->ragdollFlags;
    v52->pose.ragdollHandle = v53->ragdollHandle;
    v52->pose.killcamRagdollHandle = v53->killcamRagdollHandle;
    v61 = Com_GetClientDObj(fromDObjHandle, localClientNum);
    if ( v61 )
      Ragdoll_SetAnimationParameters(v61, 0, 0);
    ragdollHandle = v53->ragdollHandle;
    if ( ragdollHandle )
    {
      Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
      if ( Ragdoll->entityNum != fromDObjHandle )
      {
        LODWORD(v73) = fromDObjHandle;
        LODWORD(v72) = Ragdoll->entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 613, ASSERT_TYPE_ASSERT, "( ragdoll->entityNum ) == ( fromEntNum )", "%s == %s\n\t%i, %i", "ragdoll->entityNum", "fromEntNum", v72, v73) )
          __debugbreak();
      }
      Ragdoll->entityNum = v14;
      Ragdoll->dobj = v14;
      v53->ragdollHandle = 0;
      v64 = Com_GetClientDObj(v14, localClientNum);
      if ( v64 )
      {
        IsRagdoll = CG_Pose_IsRagdoll(&v52->pose);
        Ragdoll_SetAnimationParameters(v64, v52->pose.ragdollHandle, IsRagdoll);
      }
    }
    killcamRagdollHandle = v53->killcamRagdollHandle;
    if ( killcamRagdollHandle )
    {
      v67 = Ragdoll_GetRagdoll(killcamRagdollHandle);
      if ( v67->entityNum != fromDObjHandle )
      {
        LODWORD(v73) = fromDObjHandle;
        LODWORD(v72) = v67->entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 628, ASSERT_TYPE_ASSERT, "( ragdoll->entityNum ) == ( fromEntNum )", "%s == %s\n\t%i, %i", "ragdoll->entityNum", "fromEntNum", v72, v73) )
          __debugbreak();
      }
      v67->entityNum = v14;
      v67->dobj = v14;
      v53->killcamRagdollHandle = 0;
      v68 = Com_GetClientDObj(v14, localClientNum);
      if ( v68 )
      {
        v69 = CG_Pose_IsRagdoll(&v52->pose);
        Ragdoll_SetAnimationParameters(v68, v52->pose.killcamRagdollHandle, v69);
      }
    }
  }
  R_MDAO_ResetEntityOcclusionState(&v52->pose);
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
  char v54; 
  __int64 v55; 
  unsigned int v56; 
  const dvar_t *v57; 
  unsigned int v58; 
  __int64 v59; 
  __int16 *v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  unsigned int v64; 
  CgEntitySystem *v65; 
  __int64 v66; 
  __int64 v67; 
  cgs_t *v68; 
  CGCorpseInfoMP *v69; 
  unsigned int v70; 
  centity_t *Entity; 
  const dvar_t *v72; 
  __int16 v73; 
  char v74; 
  unsigned int v75; 
  const SuitDef *SuitDef; 
  const char **p_name; 
  ScriptableDef *scriptableDef; 
  const ScriptableDef *nextScriptableDef; 
  const char *v80; 
  const char *name; 
  __int16 *clientCorpseStateOut; 
  entityState_t **newCorpseEntsOut; 
  unsigned int *newCorpseEntsCountOut; 
  CG_PlayerCorpseMP_SortableCorpseInfo *sortableCorpsesOut; 
  bool enabled; 
  unsigned int sortableCorpsesCount; 
  unsigned int newCorpseEntsCount; 
  __int64 v90; 
  unsigned int v91; 
  cgs_t *v92; 
  int v93; 
  unsigned int nextSnapCorpseEntsCounta; 
  __int64 v95; 
  CgEntitySystem *v96; 
  entityState_t **nextSnapCorpseEntsa; 
  __int64 v98; 
  entityState_t *newCorpseEnts[8]; 
  CG_PlayerCorpseMP_SortableCorpseInfo sortableCorpses[16]; 
  bool corpseWasShutdownOut[8]; 
  __int64 v102; 
  __int16 clientCorpseState[12]; 

  v98 = -2i64;
  nextSnapCorpseEntsCounta = nextSnapCorpseEntsCount;
  nextSnapCorpseEntsa = (entityState_t **)nextSnapCorpseEnts;
  v7 = (CgEntitySystem *)(int)localClientNum;
  v8 = &queryFormat;
  if ( !nextSnapCorpseEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1070, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts)", (const char *)&queryFormat, "nextSnapCorpseEnts") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  v91 = ComCharacterLimits::ms_gameData.m_characterCount;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1073, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LOBYTE(v8) = 0;
  v93 = (int)v8;
  if ( !LocalClientGlobals->inKillCam )
  {
    LOBYTE(v8) = LocalClientGlobals->predictedPlayerState.deltaTime != 0;
    v93 = (unsigned __int8)v8;
  }
  CG_PlayerCorpseMP_SetNextSnap_CategorizeNextSnapCorpses((const LocalClientNum_t)v7, demoJumpTime, (const bool)v8, nextSnapCorpseEnts, nextSnapCorpseEntsCount, clientCorpseState, (const entityState_t **)newCorpseEnts, &newCorpseEntsCount);
  v11 = DCONST_DVARBOOL_cg_enableDetachableClientCorpses;
  if ( !DCONST_DVARBOOL_cg_enableDetachableClientCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enableDetachableClientCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  CG_PlayerCorpseMP_SetNextSnap_GatherSortableCorpses((const LocalClientNum_t)v7, demoJumpTime, enabled, (const bool)v8, clientCorpseState, (const entityState_t *const *)newCorpseEnts, newCorpseEntsCount, corpseWasShutdownOut, sortableCorpses, &sortableCorpsesCount);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v7);
  v92 = LocalClientStaticGlobals;
  v13 = v7;
  v96 = v7;
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
      LocalClientStaticGlobals = v92;
    }
  }
  v20 = 8;
  if ( (int)v14 < 8 )
    v20 = v14;
  sortableCorpsesCount = v20;
  v102 = 0i64;
  v21 = 0i64;
  newCorpseEntsCount = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v22 = (unsigned int)v21;
      v23 = 24 * v21;
      v95 = 24 * v21;
      if ( sortableCorpses[v21].isNewNextSnap )
      {
        Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-AddNewCorpse");
        if ( !*(const entityState_t **)((char *)&sortableCorpses[0].entityState + v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(sortedCorpses[sortedIndex].entityState)", (const char *)&queryFormat, "sortedCorpses[sortedIndex].entityState") )
          __debugbreak();
        v24 = **(__int16 **)((char *)&sortableCorpses[0].entityState + v23);
        LODWORD(v90) = v24;
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
          v23 = v95;
          v24 = v90;
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
        v36 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v96];
        if ( v24 >= 0x800 )
        {
          LODWORD(newCorpseEntsOut) = 2048;
          LODWORD(clientCorpseStateOut) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        _RBX = (__int64)&v36->m_entities[v24];
        _RAX = *(__int64 *)((char *)&sortableCorpses[0].entityState + v23);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbx+190h], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rbx+1A0h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+1B0h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rbx+1C0h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rbx+1D0h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rbx+1E0h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rbx+1F0h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rbx+200h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rbx+210h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rbx+220h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rbx+230h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rbx+240h], xmm1
          vmovups xmm0, xmmword ptr [rax+0C0h]
          vmovups xmmword ptr [rbx+250h], xmm0
          vmovups xmm1, xmmword ptr [rax+0D0h]
          vmovups xmmword ptr [rbx+260h], xmm1
          vmovups xmm0, xmmword ptr [rax+0E0h]
          vmovups xmmword ptr [rbx+270h], xmm0
        }
        *(_QWORD *)(_RBX + 640) = *(_QWORD *)(_RAX + 240);
        *(_DWORD *)(_RBX + 648) |= 1u;
        v54 = newCorpseEntsCount;
        if ( newCorpseEntsCount > 0xFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)newCorpseEntsCount, "unsigned", v22) )
            __debugbreak();
          v54 = newCorpseEntsCount;
        }
        v27[14873] = v54;
        v27[14872] = 3;
        *((_DWORD *)v27 + 3719) = *(int *)((char *)&sortableCorpses[0].time + v23);
        if ( (v25 < 0 || (unsigned int)v25 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v25, "signed", v25) )
          __debugbreak();
        v92->corpseinfo[v25].originalCorpseIndex = v25;
        if ( (_BYTE)v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1158, ASSERT_TYPE_ASSERT, "(!enteringKillCam)", (const char *)&queryFormat, "!enteringKillCam") )
          __debugbreak();
        LODWORD(v7) = localClientNum;
        CG_SnapshotMP_ResetEntity(localClientNum, (centity_t *)_RBX, 1);
        if ( v26 >= 8 )
        {
          j___report_rangecheckfailure(v55);
LABEL_203:
          j___report_rangecheckfailure(v34);
          JUMPOUT(0x14041C2A3i64);
        }
        corpseWasShutdownOut[v26] = 0;
        v56 = *(int *)((char *)&sortableCorpses[0].time + v23);
        v57 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
        if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v57);
        if ( v57->current.enabled )
          Com_Printf(14, "CG_SnapshotMP: adding new server-linked corpse at entity number [%i] at time (%i) \n", v24, v56);
        Sys_ProfEndNamedEvent();
        m_characterCount = v91;
        v20 = sortableCorpsesCount;
      }
      v21 = newCorpseEntsCount + 1;
      newCorpseEntsCount = v21;
      if ( (unsigned int)v21 >= v20 )
        break;
      LocalClientStaticGlobals = v92;
    }
  }
  v58 = 0;
  if ( v20 )
  {
    v59 = 0i64;
    v90 = 0i64;
    v60 = &sortableCorpses[0].index;
    while ( 1 )
    {
      if ( !*((_BYTE *)v60 + 2) )
      {
        v61 = *v60;
        if ( (unsigned int)v61 >= 8 )
        {
          LODWORD(newCorpseEntsOut) = 8;
          LODWORD(clientCorpseStateOut) = *v60;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
          v20 = sortableCorpsesCount;
          v59 = v90;
        }
        if ( !*((_BYTE *)&clientCorpseState[-4] + v61) )
          break;
      }
LABEL_200:
      ++v58;
      v90 = ++v59;
      v60 += 12;
      if ( v58 >= v20 )
        goto LABEL_201;
      LODWORD(v7) = localClientNum;
    }
    v62 = v61;
    if ( v58 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v58, "unsigned", v59) )
      __debugbreak();
    v63 = (__int64)v92;
    v92->corpseinfo[v62].sortIndex = v58;
    if ( (*(_BYTE *)(v62 * 26904 + v63 + 14872) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1179, ASSERT_TYPE_ASSERT, "(corpseinfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE)", (const char *)&queryFormat, "corpseinfo->flag & CG_CORPSE_CLIENT_ENT_ACTIVE") )
      __debugbreak();
    if ( clientCorpseState[v61] != 2 )
    {
      if ( !enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1183, ASSERT_TYPE_ASSERT, "(detachableCorpsesEnabled)", (const char *)&queryFormat, "detachableCorpsesEnabled") )
        __debugbreak();
      v64 = v61 + v91;
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
      v65 = CgEntitySystem::ms_entitySystemArray[(int)v7];
      if ( v64 >= 0x800 )
      {
        LODWORD(newCorpseEntsOut) = 2048;
        LODWORD(clientCorpseStateOut) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
          __debugbreak();
      }
      v66 = (int)v64;
      v67 = (__int64)&v65->m_entities[v66];
      if ( (CgEntitySystem *)((char *)v65 + v66 * 760) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1186, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( (*(_WORD *)(v67 + 372) & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "(cent->prevState.u.player.playerFlags & (1<<10))", (const char *)&queryFormat, "cent->prevState.u.player.playerFlags & SPF_DETACHABLE_CLIENT_CORPSE") )
        __debugbreak();
      if ( (v92->corpseinfo[v62].flag & 2) != 0 )
      {
        if ( (unsigned int)v61 >= 8 )
        {
          LODWORD(newCorpseEntsOut) = 8;
          LODWORD(clientCorpseStateOut) = v61;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 651, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", clientCorpseStateOut, newCorpseEntsOut) )
            __debugbreak();
        }
        v68 = CG_GetLocalClientStaticGlobals(localClientNum);
        if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 653, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
          __debugbreak();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v69 = &v68->corpseinfo[v62];
        v70 = ComCharacterLimits::ms_gameData.m_characterCount + v61;
        Entity = CG_GetEntity(localClientNum, v70);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 658, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (Entity->prevState.u.player.playerFlags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 659, ASSERT_TYPE_ASSERT, "(cent->prevState.u.player.playerFlags & (1<<10))", (const char *)&queryFormat, "cent->prevState.u.player.playerFlags & SPF_DETACHABLE_CLIENT_CORPSE") )
          __debugbreak();
        v69->flag &= ~2u;
        v72 = DCONST_DVARBOOL_cg_clientCorpse_devVerbose;
        if ( !DCONST_DVARBOOL_cg_clientCorpse_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_clientCorpse_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v72);
        if ( v72->current.enabled )
          Com_Printf(14, "CG_SnapshotMP: detaching corpse at entity number [%i]\n", v70);
        v73 = truncate_cast<short,unsigned int>(v70);
        CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding(localClientNum, v69, v73);
      }
      *(_DWORD *)(v67 + 648) |= 1u;
      goto LABEL_199;
    }
    v74 = *(_BYTE *)(v62 * 26904 + v63 + 14872);
    if ( (v74 & 4) == 0 )
    {
      if ( (v74 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 1202, ASSERT_TYPE_ASSERT, "(corpseinfo->flag & CG_CORPSE_SERVER_ENT_LINKED)", (const char *)&queryFormat, "corpseinfo->flag & CG_CORPSE_SERVER_ENT_LINKED") )
        __debugbreak();
      goto LABEL_199;
    }
    v75 = v91 + v61;
    if ( v75 > 0x7FFFFFFF || v75 + 0x8000 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v75, "unsigned", v75) )
        __debugbreak();
      v74 = *(_BYTE *)(v62 * 26904 + v63 + 14872);
    }
    if ( (v74 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 355, ASSERT_TYPE_ASSERT, "(corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED)", (const char *)&queryFormat, "corpseInfo->flag & CG_CORPSE_SERVER_ENT_LINKED") )
      __debugbreak();
    SuitDef = BG_GetSuitDef(*(_DWORD *)(v62 * 26904 + v63 + 5304));
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
          if ( ScriptableCl_UpdateReservedScriptableEntityBinding((const LocalClientNum_t)v7, (__int16)v75, nextScriptableDef) )
          {
            v92->corpseinfo[v62].flag &= ~4u;
          }
          else
          {
            if ( p_name )
              v80 = *p_name;
            else
              v80 = "UNKNOWN";
            if ( nextScriptableDef )
              name = nextScriptableDef->name;
            else
              name = "UNKNOWN";
            Com_Printf(14, "CG_SnapshotMP_TryUpdateLinkedPlayerCorpseScriptableBinding: Failed to bind scriptable '%s' to entity %i (Suit %s). Playerstate could be out of sync with the world, will try again.\n", name, (unsigned int)(__int16)v75, v80);
            v92->corpseinfo[v62].flag |= 4u;
          }
LABEL_199:
          v20 = sortableCorpsesCount;
          v59 = v90;
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
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> **v11; 
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
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int v43; 
  cgs_t *v44; 
  __int64 v45; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> **v49; 

  v49 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> **)nextSnapCorpseEnts;
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
  v43 = ComCharacterLimits::ms_gameData.m_characterCount;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(v8);
  v44 = LocalClientStaticGlobals;
  *(_QWORD *)clientCorpseStateOut = 0i64;
  *((_QWORD *)clientCorpseStateOut + 1) = 0i64;
  *newCorpseEntsCountOut = 0;
  if ( nextSnapCorpseEntsCount )
  {
    v11 = v49;
    v45 = nextSnapCorpseEntsCount;
    do
    {
      if ( !*v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 710, ASSERT_TYPE_ASSERT, "(nextSnapCorpseEnts[nextSnapId])", (const char *)&queryFormat, "nextSnapCorpseEnts[nextSnapId]") )
          __debugbreak();
        v11 = v49;
      }
      v12 = (*v11)->m_flags[0];
      IsEntityHighLoD = CG_IsEntityHighLoD(v8, v12);
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(*v49 + 3, ACTIVE, 0xCu) )
      {
        v14 = (const entityState_t *)*v49;
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
            LODWORD(v42) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v42) )
              __debugbreak();
          }
          if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v42) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v41) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
          {
            LODWORD(v42) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v42) )
              __debugbreak();
          }
          v22 = CgEntitySystem::ms_entitySystemArray[localClientNum];
          if ( (unsigned int)v12 >= 0x800 )
          {
            LODWORD(v42) = 2048;
            LODWORD(v41) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          _RBX = (char *)v22 + 760 * v12;
          if ( v15 >= 8 )
          {
            LODWORD(v42) = 8;
            LODWORD(v41) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( corpseindex ) < (unsigned)( 8 )", "corpseindex doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v41, v42) )
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
                  LODWORD(v42) = 8;
                  LODWORD(v41) = *newCorpseEntsCountOut;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 780, ASSERT_TYPE_ASSERT, "(unsigned)( newCorpseEntsCountOut ) < (unsigned)( 8 )", "newCorpseEntsCountOut doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v41, v42) )
                    __debugbreak();
                }
                newCorpseEntsOut[(*newCorpseEntsCountOut)++] = (const entityState_t *)*v49;
              }
            }
            else if ( (*(_BYTE *)(v16 + 14816) & 2) != 0 )
            {
              clientCorpseStateOut[v15] = 2;
              _RAX = *v49;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rbx+1A0h], xmm0
                vmovups xmm1, xmmword ptr [rax+10h]
                vmovups xmmword ptr [rbx+1B0h], xmm1
                vmovups xmm0, xmmword ptr [rax+20h]
                vmovups xmmword ptr [rbx+1C0h], xmm0
                vmovups xmm1, xmmword ptr [rax+30h]
                vmovups xmmword ptr [rbx+1D0h], xmm1
                vmovups xmm0, xmmword ptr [rax+40h]
                vmovups xmmword ptr [rbx+1E0h], xmm0
                vmovups xmm1, xmmword ptr [rax+50h]
                vmovups xmmword ptr [rbx+1F0h], xmm1
                vmovups xmm0, xmmword ptr [rax+60h]
                vmovups xmmword ptr [rbx+200h], xmm0
                vmovups xmm1, xmmword ptr [rax+70h]
                vmovups xmmword ptr [rbx+210h], xmm1
                vmovups xmm0, xmmword ptr [rax+80h]
                vmovups xmmword ptr [rbx+220h], xmm0
                vmovups xmm1, xmmword ptr [rax+90h]
                vmovups xmmword ptr [rbx+230h], xmm1
                vmovups xmm0, xmmword ptr [rax+0A0h]
                vmovups xmmword ptr [rbx+240h], xmm0
                vmovups xmm1, xmmword ptr [rax+0B0h]
                vmovups xmmword ptr [rbx+250h], xmm1
                vmovups xmm0, xmmword ptr [rax+0C0h]
                vmovups xmmword ptr [rbx+260h], xmm0
                vmovups xmm1, xmmword ptr [rax+0D0h]
                vmovups xmmword ptr [rbx+270h], xmm1
                vmovups xmm0, xmmword ptr [rax+0E0h]
                vmovups xmmword ptr [rbx+280h], xmm0
              }
              v40 = *(_QWORD *)_RAX[60].m_flags;
              *((_DWORD *)_RBX + 166) |= 1u;
              *((_QWORD *)_RBX + 82) = v40;
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
            LODWORD(v42) = 8;
            LODWORD(v41) = *newCorpseEntsCountOut;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 749, ASSERT_TYPE_ASSERT, "(unsigned)( newCorpseEntsCountOut ) < (unsigned)( 8 )", "newCorpseEntsCountOut doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 750, ASSERT_TYPE_ASSERT, "(corpseIsNew)", (const char *)&queryFormat, "corpseIsNew") )
            __debugbreak();
          newCorpseEntsOut[(*newCorpseEntsCountOut)++] = (const entityState_t *)*v49;
        }
        else
        {
          CG_PlayerCorpseMP_CorpseDebugPrint_Internal_short_("CG_SnapshotMP: ignoring new corpse at [%i] (suppressed because it was low LoD/ new when entering killcam)\n", v12);
        }
        LocalClientStaticGlobals = v44;
        m_characterCount = v43;
        v8 = localClientNum;
      }
      v11 = v49 + 1;
      v19 = v45-- == 1;
      ++v49;
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
  const dvar_t *v13; 
  LocalClientNum_t v14; 
  float v17; 
  float v18; 
  bool *v22; 
  __int16 *v23; 
  unsigned int v24; 
  const cpose_t *PoseExtended; 
  CgEntitySystem *v29; 
  bool v30; 
  int v31; 
  bool v34; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 v47; 
  __int64 v48; 
  vec3_t corpseOrigin; 
  CG_PlayerCorpseMP_SortableCorpse_LessThanFunc v51; 
  vec3_t *p_corpseOrigin; 
  int v53; 
  int integer; 
  int clientNum; 
  unsigned int v56; 
  __int64 v57; 
  const entityState_t *const *v58; 
  __int64 v59; 
  CG_PlayerCorpseMP_SortableCorpseInfo *v60; 
  vec3_t outOrg; 
  __int64 v62; 
  vec3_t viewDir; 

  v62 = -2i64;
  v4 = sortableCorpsesCount;
  v56 = sortableCorpsesCount;
  v60 = sortableCorpses;
  v58 = newCorpseEnts;
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-SortCorpses");
  if ( !sortableCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 935, ASSERT_TYPE_ASSERT, "(sortableCorpses)", (const char *)&queryFormat, "sortableCorpses") )
    __debugbreak();
  if ( (unsigned int)v4 >= 3 )
  {
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_player_corpse_mp.cpp", 941, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    clientNum = _RDI->predictedPlayerState.clientNum;
    RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+6944h]
      vmovss  dword ptr [rbp+57h+viewDir], xmm0
      vmovss  xmm1, dword ptr [rdi+6948h]
      vmovss  dword ptr [rbp+57h+viewDir+4], xmm1
      vmovss  xmm0, dword ptr [rdi+694Ch]
      vmovss  dword ptr [rbp+57h+viewDir+8], xmm0
    }
    _R15 = NULL;
    _R13 = NULL;
    v13 = DCONST_DVARINT_cg_corpseFreshTimeout;
    if ( !DCONST_DVARINT_cg_corpseFreshTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_corpseFreshTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    v53 = _RDI->time - _RDI->predictedPlayerState.deltaTime;
    v14 = localClientNum;
    v59 = localClientNum;
    _RBX = &sortableCorpses->isNewNextSnap;
    v57 = v4;
    do
    {
      if ( *_RBX )
      {
        _RDI = &v58[*((__int16 *)_RBX - 1)]->lerp.pos;
        if ( v58[*((__int16 *)_RBX - 1)] == (const entityState_t *const)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          p_corpseOrigin = &corpseOrigin;
          v17 = _RDI->trBase.v[0];
          v18 = _RDI->trBase.v[1];
          LODWORD(corpseOrigin.v[2]) = s_trbase_aab_Z ^ LODWORD(v18) ^ LODWORD(_RDI->trBase.v[2]);
          LODWORD(corpseOrigin.v[1]) = s_trbase_aab_Y ^ LODWORD(v17) ^ LODWORD(v18);
          LODWORD(corpseOrigin.v[0]) = LODWORD(v17) ^ ~s_trbase_aab_X;
          memset(&p_corpseOrigin, 0, sizeof(p_corpseOrigin));
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+corpseOrigin]
            vmovss  dword ptr [rbp+57h+var_A0], xmm0
          }
          if ( ((unsigned int)p_corpseOrigin & 0x7F800000) == 2139095040 )
            goto LABEL_72;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+corpseOrigin+4]
            vmovss  dword ptr [rbp+57h+var_A0], xmm0
          }
          if ( ((unsigned int)p_corpseOrigin & 0x7F800000) == 2139095040 )
            goto LABEL_72;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+corpseOrigin+8]
            vmovss  dword ptr [rbp+57h+var_A0], xmm0
          }
          if ( ((unsigned int)p_corpseOrigin & 0x7F800000) == 2139095040 )
          {
LABEL_72:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rbp+57h+corpseOrigin], xmm0
            vmovss  xmm1, dword ptr [rdi+10h]
            vmovss  dword ptr [rbp+57h+corpseOrigin+4], xmm1
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  dword ptr [rbp+57h+corpseOrigin+8], xmm0
          }
        }
        v14 = localClientNum;
      }
      else
      {
        PoseExtended = CG_GetPoseExtended(v14, **(__int16 **)(_RBX - 10), 0);
        CG_GetPoseOrigin(PoseExtended, &corpseOrigin);
      }
      _RBX[8] = BG_PlayerCorpseMP_CalculateCorpseZone(&outOrg, &viewDir, &corpseOrigin, (float *)(_RBX + 10));
      v22 = _RBX - 10;
      v23 = *(__int16 **)(_RBX - 10);
      if ( *_RBX )
        v24 = *((_DWORD *)v23 + 36);
      else
        v24 = *v23;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v48) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v48) )
          __debugbreak();
      }
      if ( v14 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v48) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v47) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v14] )
      {
        LODWORD(v48) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v48) )
          __debugbreak();
      }
      v29 = CgEntitySystem::ms_entitySystemArray[v59];
      if ( v24 >= 0x800 )
      {
        LODWORD(v48) = 2048;
        LODWORD(v47) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      v30 = _RBX[8] || v29->m_entities[v24].pose.cullIn;
      _RBX[6] = v30;
      v31 = *(_DWORD *)(_RBX + 2);
      _RBX[7] = v53 - v31 <= integer;
      if ( *(_DWORD *)(*(_QWORD *)v22 + 144i64) == clientNum )
      {
        if ( !_R13 )
          goto LABEL_50;
        if ( *((_DWORD *)_R13 + 3) < v31 )
          goto LABEL_50;
        if ( *((_DWORD *)_R13 + 3) == v31 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ah]
            vcomiss xmm0, dword ptr [r13+14h]
          }
          if ( *((_DWORD *)_R13 + 3) < (unsigned int)v31 )
LABEL_50:
            _R13 = _RBX - 10;
        }
      }
      if ( *(__int16 *)(*(_QWORD *)v22 + 4i64) == clientNum )
      {
        if ( !_R15 )
          goto LABEL_56;
        if ( _R15->time < v31 )
          goto LABEL_56;
        if ( _R15->time == v31 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ah]
            vcomiss xmm0, dword ptr [r15+14h]
          }
          if ( _R15->time < (unsigned int)v31 )
LABEL_56:
            _R15 = (CG_PlayerCorpseMP_SortableCorpseInfo *)(_RBX - 10);
        }
      }
      _RBX += 24;
      v34 = v57-- == 1;
      v14 = localClientNum;
    }
    while ( !v34 );
    _RSI = v60;
    v36 = 0;
    v37 = v56;
    if ( _R15 )
    {
      if ( v60 != _R15 )
      {
        __asm
        {
          vmovups xmm3, xmmword ptr [rsi]
          vmovsd  xmm2, qword ptr [rsi+10h]
          vmovups xmm0, xmmword ptr [r15]
          vmovups xmmword ptr [rsi], xmm0
          vmovsd  xmm1, qword ptr [r15+10h]
          vmovsd  qword ptr [rsi+10h], xmm1
          vmovups xmmword ptr [r15], xmm3
          vmovsd  qword ptr [r15+10h], xmm2
        }
      }
      v36 = 1;
    }
    if ( _R13 && _R15 != (CG_PlayerCorpseMP_SortableCorpseInfo *)_R13 )
    {
      _RAX = &_RSI[v36];
      if ( _RAX != (CG_PlayerCorpseMP_SortableCorpseInfo *)_R13 )
      {
        __asm
        {
          vmovups xmm3, xmmword ptr [rax]
          vmovsd  xmm2, qword ptr [rax+10h]
          vmovups xmm0, xmmword ptr [r13+0]
          vmovups xmmword ptr [rax], xmm0
          vmovsd  xmm1, qword ptr [r13+10h]
          vmovsd  qword ptr [rax+10h], xmm1
          vmovups xmmword ptr [r13+0], xmm3
          vmovsd  qword ptr [r13+10h], xmm2
        }
      }
      ++v36;
    }
    std::_Sort_unchecked<CG_PlayerCorpseMP_SortableCorpseInfo *,CG_PlayerCorpseMP_SortableCorpse_LessThanFunc>(&_RSI[v36], &_RSI[v37], (24i64 * v37 - 24i64 * v36) / 24, v51);
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

