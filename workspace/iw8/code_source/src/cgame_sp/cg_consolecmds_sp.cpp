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
  double v2; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    v1 = Cmd_Argc() - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v2 = Cmd_ArgFloat(1);
        CG_ModelPreviewerStepAnim(*(float *)&v2);
      }
      else
      {
        Com_Printf(0, "USAGE: cg_mpstepanim <deltaTime> : default = 1/30.0 second \n");
      }
    }
    else
    {
      CG_ModelPreviewerStepAnim(-1.0);
    }
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
  LocalClientNum_t v1; 
  cg_t *LocalClientGlobals; 
  int v3; 
  double v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  float *v; 
  int v9; 
  const char *v10; 
  double v12; 
  __int64 v13; 
  __int64 v14; 
  vec3_t angles; 

  v1 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v1) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(v1);
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
      v3 = Cmd_Argc();
      v4 = Cmd_ArgFloat((unsigned int)(v3 == 3) + 1);
      v5 = (v3 == 3) + 2;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      v = LocalClientGlobals->predictedPlayerState.origin.v;
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
          LODWORD(v14) = 3;
          LODWORD(v13) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        *v++ = *(float *)&_XMM6;
        ++v7;
      }
      while ( v9 < 3 );
      LOBYTE(v6) = Cmd_Argc() == 7;
      if ( Cmd_Argc() != 6 && !v6 )
        goto LABEL_22;
      v4 = Cmd_ArgFloat(v6 + 4);
      v5 = v6 + 5;
    }
    angles.v[1] = *(float *)&v4;
    v12 = Cmd_ArgFloat(v5);
    angles.v[0] = *(float *)&v12;
    angles.v[2] = 0.0;
    CG_SetDebugAngles(&angles);
LABEL_22:
    CG_PlayerState_ClearExtrapolatedPlayerState(v1);
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
  __int64 v3; 
  int v4; 
  int v5; 
  __int64 result; 
  __int64 v7; 
  __int64 v8; 
  vec3_t *p_origin; 
  vec3_t origin; 
  __int64 v11; 
  vec3_t angles; 

  v11 = -2i64;
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
        LODWORD(v8) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v7) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[0] )
      {
        LODWORD(v8) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v8) )
          __debugbreak();
      }
      v2 = CgEntitySystem::ms_entitySystemArray[0];
      if ( (unsigned int)v1 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v3 = (__int64)&v2->m_entities[v1];
      if ( v3 )
      {
        Stream_ImageRecord_Disable("cg_setviewent");
        if ( v3 == -292 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( *(_DWORD *)(v3 + 292) == 4 )
        {
          p_origin = &origin;
          v4 = *(_DWORD *)(v3 + 304);
          v5 = *(_DWORD *)(v3 + 308);
          LODWORD(origin.v[2]) = v5 ^ *(_DWORD *)(v3 + 312) ^ s_trbase_aab_Z;
          LODWORD(origin.v[1]) = v4 ^ v5 ^ s_trbase_aab_Y;
          LODWORD(origin.v[0]) = v4 ^ ~s_trbase_aab_X;
          memset(&p_origin, 0, sizeof(p_origin));
          *(float *)&p_origin = origin.v[0];
          if ( (LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&p_origin = origin.v[1], (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&p_origin = origin.v[2], (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          origin = *(vec3_t *)(v3 + 304);
        }
        angles = *(vec3_t *)(v3 + 340);
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

void __fastcall CG_ConsoleCmdsSP_SetViewOrbit_f(double a1)
{
  LocalClientNum_t v1; 
  cg_t *LocalClientGlobals; 
  __int128 v3; 
  double v4; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v22; 
  float s; 
  float v24; 
  float c; 
  vec3_t vec; 
  vec3_t angles; 

  v1 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v1) )
  {
    if ( Cmd_Argc() == 7 )
    {
      Stream_ImageRecord_Disable("cg_setvieworbit");
      LocalClientGlobals = CG_GetLocalClientGlobals(v1);
      Dvar_SetInt_Internal(DVARINT_cl_freemove, 2);
      a1 = Cmd_ArgFloat(1);
      v3 = *(_OWORD *)&a1;
      v4 = Cmd_ArgFloat(2);
      v5 = *(float *)&v4;
      v6 = Cmd_ArgFloat(3);
      v7 = *(float *)&v6;
      v8 = Cmd_ArgFloat(4);
      v9 = *(float *)&v8;
      v10 = Cmd_ArgFloat(5);
      v11 = *(float *)&v10;
      v12 = Cmd_ArgFloat(6);
      v13 = v7 - LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
      FastSinCos((float)(90.0 - v11) * 0.017453292, &s, &c);
      FastSinCos((float)(*(float *)&v12 - 90.0) * 0.017453292, &v24, &v22);
      v14 = (float)((float)(v9 * v22) * s) + *(float *)&v3;
      v15 = (float)((float)(v9 * v24) * s) + v5;
      LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)(v9 * c) + v13;
      LocalClientGlobals->predictedPlayerState.origin.v[1] = v15;
      LocalClientGlobals->predictedPlayerState.origin.v[0] = v14;
      v17 = v3;
      v16 = *(float *)&v3 - v14;
      vec.v[0] = *(float *)&v3 - v14;
      vec.v[1] = v5 - LocalClientGlobals->predictedPlayerState.origin.v[1];
      v18 = v13 - LocalClientGlobals->predictedPlayerState.origin.v[2];
      *(float *)&v17 = fsqrt((float)((float)(v16 * v16) + (float)(vec.v[1] * vec.v[1])) + (float)(v18 * v18));
      _XMM3 = v17;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      vec.v[0] = v16 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[2] = v18 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
      vectoangles(&vec, &angles);
      CG_SetDebugAngles(&angles);
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

