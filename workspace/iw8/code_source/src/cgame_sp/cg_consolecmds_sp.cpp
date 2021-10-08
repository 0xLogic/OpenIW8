/*
==============
CG_ConsoleCmdsSP_Unregister
==============
*/

void CG_ConsoleCmdsSP_Unregister(void)
{
  ?CG_ConsoleCmdsSP_Unregister@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsSP_DumpParticleSystemsToConsole
==============
*/

void CG_ConsoleCmdsSP_DumpParticleSystemsToConsole(void)
{
  ?CG_ConsoleCmdsSP_DumpParticleSystemsToConsole@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsSP_Register
==============
*/

void CG_ConsoleCmdsSP_Register(void)
{
  ?CG_ConsoleCmdsSP_Register@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsSP_DumpParticleSystemsToCSV
==============
*/

void CG_ConsoleCmdsSP_DumpParticleSystemsToCSV(void)
{
  ?CG_ConsoleCmdsSP_DumpParticleSystemsToCSV@@YAXXZ();
}

/*
==============
CG_ConsoleCmdsSP_Fade_f
==============
*/
void CG_ConsoleCmdsSP_Fade_f()
{
  LocalClientNum_t v0; 
  int v1; 
  int v2; 
  int v3; 
  int a; 
  int duration; 
  cg_t *LocalClientGlobals; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) && Cmd_Argc() >= 6 )
  {
    v1 = Cmd_ArgInt(1);
    v2 = Cmd_ArgInt(2);
    v3 = Cmd_ArgInt(3);
    a = Cmd_ArgInt(4);
    duration = 1000 * Cmd_ArgInt(5);
    LocalClientGlobals = CG_GetLocalClientGlobals(v0);
    CG_DrawSP_Fade(v0, v1, v2, v3, a, LocalClientGlobals->time, duration);
  }
}

/*
==============
CG_ConsoleCmdsSP_ModelPreviewerStepAnim_f
==============
*/
void CG_ConsoleCmdsSP_ModelPreviewerStepAnim_f()
{
  LocalClientNum_t v0; 
  int v1; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    v1 = Cmd_Argc() - 1;
    if ( v1 )
    {
      if ( v1 != 1 )
      {
        Com_Printf(0, "USAGE: cg_mpstepanim <deltaTime> : default = 1/30.0 second \n");
        return;
      }
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@bf800000; deltaTime }
    }
    CG_ModelPreviewerStepAnim(*(float *)&_XMM0);
  }
}

/*
==============
CG_ConsoleCmdsSP_ModelPreviewerPauseAnim_f
==============
*/
void CG_ConsoleCmdsSP_ModelPreviewerPauseAnim_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
    CG_ModelPreviewerPauseAnim();
}

/*
==============
CG_ConsoleCmdsSP_Noclip_f
==============
*/
void CG_ConsoleCmdsSP_Noclip_f()
{
  LocalClientNum_t v0; 
  const dvar_t *v1; 
  int integer; 
  const char *v3; 
  const char *v4; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( com_cheats->current.enabled )
    {
      Stream_ImageRecord_Disable("cg_ufo");
      v1 = DVARINT_cl_freemove;
      if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      integer = v1->current.integer;
      Dvar_SetInt_Internal(DVARINT_cl_freemove, integer != 1);
      v3 = "GAME/NOCLIPOFF";
      if ( integer != 1 )
        v3 = "GAME/NOCLIPON";
      v4 = SEH_LocalizeTextMessage(v3, "noclip print", LOCMSG_SAFE);
      Com_Printf(0, "%s\n", v4);
    }
    else
    {
      Com_Printf(16, "%s is cheat protected.\n", "cg_noclip");
    }
  }
}

/*
==============
CG_ConsoleCmdsSP_UFO_f
==============
*/
void CG_ConsoleCmdsSP_UFO_f()
{
  LocalClientNum_t v0; 
  const dvar_t *v1; 
  int v2; 
  const char *v3; 
  cg_t *LocalClientGlobals; 
  const char *v5; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( com_cheats->current.enabled )
    {
      Stream_ImageRecord_Disable("cg_ufo");
      v1 = DVARINT_cl_freemove;
      if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      if ( v1->current.integer == 2 )
      {
        v2 = 0;
        v3 = "GAME/UFOOFF";
      }
      else
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(v0);
        if ( BGVehicles::IsRemoteDrivingVehicle(&LocalClientGlobals->predictedPlayerState) )
        {
          LocalClientGlobals->predictedPlayerState.origin.v[0] = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[2];
        }
        v2 = 2;
        v3 = "GAME/UFOON";
      }
      Dvar_SetInt_Internal(DVARINT_cl_freemove, v2);
      v5 = SEH_LocalizeTextMessage(v3, "ufo print", LOCMSG_SAFE);
      Com_Printf(0, "%s\n", v5);
    }
    else
    {
      Com_Printf(16, "%s is cheat protected.\n", "cg_ufo");
    }
  }
}

/*
==============
CG_ConsoleCmdsSP_SetViewPos_f
==============
*/

void __fastcall CG_ConsoleCmdsSP_SetViewPos_f(double _XMM0_8)
{
  LocalClientNum_t v2; 
  cg_t *LocalClientGlobals; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int v9; 
  const char *v10; 
  __int64 v14; 
  __int64 v15; 
  vec3_t angles; 

  v2 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v2) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v2);
    if ( !LocalClientGlobals->predictedPlayerState.pm_type )
      Com_Printf(0, "\"cg_setviewpos\" isn't very useful when server controlled.  Use cg_ufo/cg_noclip or use \"setviewpos\"\n");
    if ( Cmd_Argc() != 3 && Cmd_Argc() != 4 && Cmd_Argc() != 6 && Cmd_Argc() != 7 )
    {
      Com_Printf(0, "USAGE: cg_setviewpos x y z [yaw pitch]\n");
      return;
    }
    Stream_ImageRecord_Disable("cg_setviewpos");
    if ( Cmd_Argc() == 3 )
    {
      v4 = Cmd_Argc();
      _XMM0_8 = Cmd_ArgFloat((unsigned int)(v4 == 3) + 1);
      v5 = (v4 == 3) + 2;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      __asm { vmovaps [rsp+88h+var_28], xmm6 }
      _RSI = &LocalClientGlobals->predictedPlayerState.origin;
      do
      {
        v9 = v7 + 1;
        v10 = Cmd_Argv(v7 + 1);
        if ( *v10 == 40 )
          ++v10;
        _XMM0_8 = atof(v10);
        __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
        if ( v7 >= 3 )
        {
          LODWORD(v15) = 3;
          LODWORD(v14) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi], xmm6 }
        _RSI = (vec3_t *)((char *)_RSI + 4);
        ++v7;
      }
      while ( v9 < 3 );
      LOBYTE(v6) = Cmd_Argc() == 7;
      __asm { vmovaps xmm6, [rsp+88h+var_28] }
      if ( Cmd_Argc() != 6 && !v6 )
        goto LABEL_22;
      _XMM0_8 = Cmd_ArgFloat(v6 + 4);
      v5 = v6 + 5;
    }
    __asm { vmovss  dword ptr [rsp+88h+angles+4], xmm0 }
    _XMM0_8 = Cmd_ArgFloat(v5);
    __asm
    {
      vmovss  dword ptr [rsp+88h+angles], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+88h+angles+8], xmm0
    }
    CG_SetDebugAngles(&angles);
LABEL_22:
    CG_PlayerState_ClearExtrapolatedPlayerState(v2);
  }
}

/*
==============
CG_ConsoleCmdsSP_SetViewEnt
==============
*/
__int64 CG_ConsoleCmdsSP_SetViewEnt()
{
  LocalClientNum_t v0; 
  __int64 v1; 
  CgEntitySystem *v2; 
  float v5; 
  float v6; 
  __int64 result; 
  __int64 v17; 
  __int64 v18; 
  vec3_t *p_origin; 
  vec3_t origin; 
  __int64 v21; 
  vec3_t angles; 

  v21 = -2i64;
  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( !CG_GetLocalClientGlobals(v0)->predictedPlayerState.pm_type )
      Com_Printf(0, "\"cg_setviewent\" isn't very useful when server controlled. Use cg_ufo/cg_noclip\n");
    if ( Cmd_Argc() == 2 )
    {
      v1 = Cmd_ArgInt(1);
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", 0) )
        __debugbreak();
      if ( !CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v18) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v17) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[0] )
      {
        LODWORD(v18) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v18) )
          __debugbreak();
      }
      v2 = CgEntitySystem::ms_entitySystemArray[0];
      if ( (unsigned int)v1 >= 0x800 )
      {
        LODWORD(v18) = 2048;
        LODWORD(v17) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      _RBX = &v2->m_entities[v1];
      if ( _RBX )
      {
        Stream_ImageRecord_Disable("cg_setviewent");
        _RDI = &_RBX->prevState.pos;
        if ( _RBX == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)_RBX + 399, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          p_origin = &origin;
          v5 = _RBX->prevState.pos.trBase.v[0];
          v6 = _RBX->prevState.pos.trBase.v[1];
          LODWORD(origin.v[2]) = LODWORD(v6) ^ LODWORD(_RBX->prevState.pos.trBase.v[2]) ^ s_trbase_aab_Z;
          LODWORD(origin.v[1]) = LODWORD(v5) ^ LODWORD(v6) ^ s_trbase_aab_Y;
          LODWORD(origin.v[0]) = LODWORD(v5) ^ ~s_trbase_aab_X;
          memset(&p_origin, 0, sizeof(p_origin));
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+88h+origin]
            vmovss  dword ptr [rsp+88h+var_48], xmm0
          }
          if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
            goto LABEL_34;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+88h+origin+4]
            vmovss  dword ptr [rsp+88h+var_48], xmm0
          }
          if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
            goto LABEL_34;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+88h+origin+8]
            vmovss  dword ptr [rsp+88h+var_48], xmm0
          }
          if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
          {
LABEL_34:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rsp+88h+origin], xmm0
            vmovss  xmm1, dword ptr [rdi+10h]
            vmovss  dword ptr [rsp+88h+origin+4], xmm1
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+88h+origin+8], xmm0
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+154h]
          vmovss  dword ptr [rsp+88h+angles], xmm0
          vmovss  xmm1, dword ptr [rbx+158h]
          vmovss  dword ptr [rsp+88h+angles+4], xmm1
          vmovss  xmm0, dword ptr [rbx+15Ch]
          vmovss  dword ptr [rsp+88h+angles+8], xmm0
        }
        CG_SetDebugOrigin(&origin);
        CG_SetDebugAngles(&angles);
      }
      else
      {
        Com_Printf(0, "Entity number not valid\n");
      }
    }
    else
    {
      Com_Printf(0, "USAGE: cg_setviewent <entityNumber> \n");
    }
  }
  result = 0i64;
  memset(&origin, 0, sizeof(origin));
  return result;
}

/*
==============
CG_ConsoleCmdsSP_SetViewOrbit_f
==============
*/

void __fastcall CG_ConsoleCmdsSP_SetViewOrbit_f(double _XMM0_8)
{
  LocalClientNum_t v8; 
  float v55; 
  float s; 
  float v57; 
  float c; 
  vec3_t vec; 
  vec3_t angles; 

  v8 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v8) )
  {
    if ( Cmd_Argc() == 7 )
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_18], xmm6
        vmovaps [rsp+0D8h+var_28], xmm7
        vmovaps [rsp+0D8h+var_38], xmm8
        vmovaps [rsp+0D8h+var_48], xmm9
        vmovaps [rsp+0D8h+var_58], xmm10
        vmovaps [rsp+0D8h+var_68], xmm11
        vmovaps [rsp+0D8h+var_78], xmm12
      }
      Stream_ImageRecord_Disable("cg_setvieworbit");
      _RBX = CG_GetLocalClientGlobals(v8);
      Dvar_SetInt_Internal(DVARINT_cl_freemove, 2);
      _XMM0_8 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm12, xmm0 }
      _XMM0_8 = Cmd_ArgFloat(2);
      __asm { vmovaps xmm11, xmm0 }
      _XMM0_8 = Cmd_ArgFloat(3);
      __asm { vmovaps xmm7, xmm0 }
      _XMM0_8 = Cmd_ArgFloat(4);
      __asm { vmovaps xmm9, xmm0 }
      _XMM0_8 = Cmd_ArgFloat(5);
      __asm { vmovaps xmm6, xmm0 }
      _XMM0_8 = Cmd_ArgFloat(6);
      __asm
      {
        vsubss  xmm10, xmm7, dword ptr [rbx+1F0h]
        vmovss  xmm7, cs:__real@42b40000
        vsubss  xmm1, xmm7, xmm6
        vmovaps xmm8, xmm0
        vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vsubss  xmm0, xmm8, xmm7
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &v57, &v55);
      __asm
      {
        vmulss  xmm1, xmm9, [rsp+0D8h+var_B8]
        vmulss  xmm1, xmm1, [rsp+0D8h+s]
        vaddss  xmm4, xmm1, xmm12
        vmulss  xmm1, xmm9, [rsp+0D8h+var_B0]
        vmulss  xmm2, xmm1, [rsp+0D8h+s]
        vmulss  xmm1, xmm9, [rsp+0D8h+c]
        vaddss  xmm3, xmm2, xmm11
        vaddss  xmm2, xmm1, xmm10
        vmovss  dword ptr [rbx+40h], xmm2
        vmovss  dword ptr [rbx+3Ch], xmm3
        vmovss  dword ptr [rbx+38h], xmm4
        vsubss  xmm5, xmm12, xmm4
        vmovss  dword ptr [rsp+0D8h+vec], xmm5
        vsubss  xmm6, xmm11, dword ptr [rbx+3Ch]
        vmulss  xmm0, xmm6, xmm6
        vmovss  dword ptr [rsp+0D8h+vec+4], xmm6
        vsubss  xmm4, xmm10, dword ptr [rbx+40h]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+0D8h+vec], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rsp+0D8h+vec+8], xmm0
        vmovss  dword ptr [rsp+0D8h+vec+4], xmm1
      }
      vectoangles(&vec, &angles);
      CG_SetDebugAngles(&angles);
      __asm
      {
        vmovaps xmm12, [rsp+0D8h+var_78]
        vmovaps xmm11, [rsp+0D8h+var_68]
        vmovaps xmm10, [rsp+0D8h+var_58]
        vmovaps xmm9, [rsp+0D8h+var_48]
        vmovaps xmm8, [rsp+0D8h+var_38]
        vmovaps xmm7, [rsp+0D8h+var_28]
        vmovaps xmm6, [rsp+0D8h+var_18]
      }
    }
    else
    {
      Com_Printf(0, "USAGE: cg_setViewOrbit focusX focusY focusZ dist degUp degAround\n");
    }
  }
}

/*
==============
CG_ConsoleCmdsSP_DumpParticleSystemsToConsole
==============
*/
void CG_ConsoleCmdsSP_DumpParticleSystemsToConsole(void)
{
  ParticleManager::DebugDumpParticleSystemsToConsole(g_particleManager, 0);
}

/*
==============
CG_ConsoleCmdsSP_DumpParticleSystemsToCSV
==============
*/
void CG_ConsoleCmdsSP_DumpParticleSystemsToCSV(void)
{
  ParticleManager::DebugDumpParticleSystemsToCSV(g_particleManager, (const char *)&queryFormat.fmt + 3);
}

/*
==============
CG_ConsoleCmdsSP_Register
==============
*/
void CG_ConsoleCmdsSP_Register(void)
{
  Cmd_AddClientCommandList(S_CG_CONSOLE_COMMANDS_SP, 8u);
  Cmd_AddClientCommandList(S_CG_NULL_CONSOLE_COMMANDS_SP, 0x1Au);
  CG_Weapons_SetupAutoComplete();
}

/*
==============
CG_ConsoleCmdsSP_Unregister
==============
*/
void CG_ConsoleCmdsSP_Unregister(void)
{
  CG_Weapons_ClearAutoComplete();
  Cmd_RemoveClientCommandList(S_CG_NULL_CONSOLE_COMMANDS_SP, 0x1Au);
  Cmd_RemoveClientCommandList(S_CG_CONSOLE_COMMANDS_SP, 8u);
}

