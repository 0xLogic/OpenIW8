/*
==============
CG_GetPlayerViewOrigin
==============
*/

void __fastcall CG_GetPlayerViewOrigin(LocalClientNum_t localClientNum, const playerState_s *ps, vec3_t *outOrigin)
{
  ?CG_GetPlayerViewOrigin@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@AEATvec3_t@@@Z(localClientNum, ps, outOrigin);
}

/*
==============
CG_CalcEyePoint
==============
*/

void __fastcall CG_CalcEyePoint(LocalClientNum_t localClientNum, int entityNum, vec3_t *outEyePos)
{
  ?CG_CalcEyePoint@@YAXW4LocalClientNum_t@@HAEATvec3_t@@@Z(localClientNum, entityNum, outEyePos);
}

/*
==============
CG_CalcEyePoint
==============
*/
void CG_CalcEyePoint(LocalClientNum_t localClientNum, int entityNum, vec3_t *outEyePos)
{
  cg_t *LocalClientGlobalsForEnt; 
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  bool v24; 
  __int64 v26; 
  __int64 v27; 

  _RBX = outEyePos;
  LocalClientGlobalsForEnt = CG_GetLocalClientGlobalsForEnt(entityNum);
  if ( LocalClientGlobalsForEnt )
  {
    RefdefView_GetOrg(&LocalClientGlobalsForEnt->refdef.view, _RBX);
    return;
  }
  Entity = CG_GetEntity(localClientNum, entityNum);
  CG_GetPoseOrigin(&Entity->pose, _RBX);
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v26) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 70, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v26, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 72, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    clientNum = Entity->nextState.clientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v27) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v26) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
    }
    if ( !CharacterInfo || !CharacterInfo->infoValid )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vaddss  xmm1, xmm0, cs:__real@41300000
          vmovss  dword ptr [rbx+8], xmm1
        }
        return;
      }
      v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u);
      __asm { vmovss  xmm0, dword ptr [rbx+8] }
      if ( v24 )
        __asm { vaddss  xmm0, xmm0, cs:__real@42200000 }
      else
        __asm { vaddss  xmm0, xmm0, cs:__real@42700000 }
      goto LABEL_38;
    }
    SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
    {
      BG_Suit_GetProneViewHeight(SuitDef);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm0, xmm0, dword ptr [rbx+8]
      }
LABEL_38:
      __asm { vmovss  dword ptr [rbx+8], xmm0 }
      return;
    }
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
    {
      __asm
      {
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+204h]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+200h]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
    }
  }
}

/*
==============
CG_GetPlayerViewOrigin
==============
*/
void CG_GetPlayerViewOrigin(LocalClientNum_t localClientNum, const playerState_s *ps, vec3_t *outOrigin)
{
  int viewlocked_entNum; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 

  if ( !CG_Weapons_GetVehicleViewOrigin(localClientNum, ps, outOrigin) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsTurretActiveFlags(&ps->eFlags) )
    {
      if ( ps->viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 29, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
        __debugbreak();
      viewlocked_entNum = ps->viewlocked_entNum;
      if ( viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 32, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity(localClientNum, viewlocked_entNum);
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
      if ( !ClientDObj )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF1430, 540i64, (unsigned int)Entity->nextState.number);
      if ( !CG_DObjGetWorldTagPos(&Entity->pose, ClientDObj, scr_const.tag_player, outOrigin) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF14A0, 541i64);
    }
    else
    {
      Handler = CgHandler::getHandler(localClientNum);
      Instance = CgWeaponMap::GetInstance(localClientNum);
      BG_GetPlayerEyePosition(Instance, ps, outOrigin, Handler);
    }
  }
}

