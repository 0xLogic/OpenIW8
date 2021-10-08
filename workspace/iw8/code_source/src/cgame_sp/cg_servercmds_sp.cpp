/*
==============
CG_ServerCmdSP_ShutdownPhysics
==============
*/

void __fastcall CG_ServerCmdSP_ShutdownPhysics(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdSP_ShutdownPhysics@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdSP_ParseSunDirection
==============
*/

void __fastcall CG_ServerCmdSP_ParseSunDirection(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdSP_ParseSunDirection@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdSP_ParseSkyOverride
==============
*/

void __fastcall CG_ServerCmdSP_ParseSkyOverride(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdSP_ParseSkyOverride@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdSP_ParseSunFlarePosition
==============
*/

void __fastcall CG_ServerCmdSP_ParseSunFlarePosition(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdSP_ParseSunFlarePosition@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdSP_RegisterServerMaterials
==============
*/

void __fastcall CG_ServerCmdSP_RegisterServerMaterials(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdSP_RegisterServerMaterials@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdSP_ConfigStringModifiedInternal
==============
*/

void __fastcall CG_ServerCmdSP_ConfigStringModifiedInternal(LocalClientNum_t localClientNum, int stringIndex)
{
  ?CG_ServerCmdSP_ConfigStringModifiedInternal@@YAXW4LocalClientNum_t@@H@Z(localClientNum, stringIndex);
}

/*
==============
CG_ServerCmdSP_WaitNewServerCommands
==============
*/

void __fastcall CG_ServerCmdSP_WaitNewServerCommands(LocalClientNum_t localClientNum, int latestSequence)
{
  ?CG_ServerCmdSP_WaitNewServerCommands@@YAXW4LocalClientNum_t@@H@Z(localClientNum, latestSequence);
}

/*
==============
CG_ServerCmdSP_MapInit
==============
*/

void __fastcall CG_ServerCmdSP_MapInit(bool restart, bool loadScripts, bool savegame)
{
  ?CG_ServerCmdSP_MapInit@@YAX_N00@Z(restart, loadScripts, savegame);
}

/*
==============
CG_ServerCmdSP_ExecuteNewServerCommands
==============
*/

void __fastcall CG_ServerCmdSP_ExecuteNewServerCommands(LocalClientNum_t localClientNum, int latestSequence)
{
  ?CG_ServerCmdSP_ExecuteNewServerCommands@@YAXW4LocalClientNum_t@@H@Z(localClientNum, latestSequence);
}

/*
==============
CG_ServerCmdSP_ParseCullDist
==============
*/

void CG_ServerCmdSP_ParseCullDist(void)
{
  ?CG_ServerCmdSP_ParseCullDist@@YAXXZ();
}

/*
==============
CG_ServerCmdSP_ConfigStringModifiedInternal
==============
*/
void CG_ServerCmdSP_ConfigStringModifiedInternal(LocalClientNum_t localClientNum, int stringIndex)
{
  const char *ConfigString; 
  const char *v6; 
  const char *v8; 
  int v9; 
  const char *v10; 
  CgDynamicMedia *CgDynamicMedia; 
  char v12; 
  FXRegisteredDef *Fx; 
  const char *v14; 
  float v15; 
  __int64 lerpDecelTime; 
  int v17; 
  int lerpAccelTime; 
  int lerpEndTime; 
  int lerpBeginTime; 
  vec3_t sunDirEnd; 
  vec3_t sunDirBegin; 

  if ( !CG_ServerCmd_ConfigStringModifiedInternal(localClientNum, stringIndex) )
  {
    ConfigString = CL_GetConfigString(stringIndex);
    if ( stringIndex == 4078 )
    {
      v6 = CL_GetConfigString(4078);
      *(double *)&_XMM0 = atof(v6);
      __asm { vcvtsd2ss xmm0, xmm0, xmm0; dist }
      R_SetCullDist(*(float *)&_XMM0);
    }
    else if ( stringIndex )
    {
      switch ( stringIndex )
      {
        case 4080:
          lerpAccelTime = 0;
          v17 = 0;
          v8 = CL_GetConfigString(4080);
          if ( *v8 )
          {
            v9 = j_sscanf(v8, "%g %g %g %g %g %g %d %d %d %d", &sunDirBegin, &sunDirBegin.y, &sunDirBegin.z, &sunDirEnd, &sunDirEnd.y, &sunDirEnd.z, &lerpBeginTime, &lerpEndTime, &lerpAccelTime, &v17);
            if ( v9 == 3 )
            {
              R_SetSunDirectionOverride(&sunDirBegin, 1);
            }
            else
            {
              if ( ((v9 - 8) & 0xFFFFFFFD) != 0 )
              {
                LODWORD(lerpDecelTime) = v9;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 179, ASSERT_TYPE_ASSERT, "( ( argCount == 3 || argCount == 8 || argCount == 10 ) )", "( argCount ) = %i", lerpDecelTime) )
                  __debugbreak();
              }
              R_LerpSunDirectionOverride(&sunDirBegin, &sunDirEnd, lerpBeginTime, lerpEndTime, lerpAccelTime, v17, 1);
            }
          }
          else
          {
            R_ResetSunDirectionOverride();
          }
          break;
        case 4079:
          v10 = CL_GetConfigString(4079);
          if ( j_sscanf(v10, "%g %g %g", &sunDirEnd, &sunDirEnd.y, &sunDirEnd.z) == 3 )
            R_SetSunFlarePosition(&sunDirEnd);
          break;
        case 4082:
          CG_ServerCmdSP_ParseSkyOverride(localClientNum);
          break;
        default:
          if ( (unsigned int)(stringIndex - 16) > 0x7FF )
          {
            if ( (unsigned int)(stringIndex - 2414) > 0x1FF )
            {
              if ( (unsigned int)(stringIndex - 2926) > 0x3FF )
              {
                if ( (unsigned int)(stringIndex - 2064) > 0x15D )
                {
                  if ( (unsigned int)(stringIndex - 9) > 1 )
                  {
                    if ( stringIndex == 11 )
                    {
                      CG_DrawTools_ThermalBodyMaterialChanged(localClientNum);
                    }
                    else if ( stringIndex == 12 )
                    {
                      CG_DrawTools_LaserMaterialChanged(localClientNum);
                    }
                    else if ( (unsigned int)(stringIndex - 4014) > 0x3F )
                    {
                      if ( stringIndex == 13 )
                      {
                        v15 = cl_maxLocalClients;
                        if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
                        {
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
                            __debugbreak();
                          v15 = cl_maxLocalClients;
                        }
                        if ( v15 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
                          __debugbreak();
                        if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
                          __debugbreak();
                        if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
                          __debugbreak();
                        if ( localClientNum == cls.m_localClientsActive.firstActiveIndex )
                          LB_SetWriteLeaderboards(ConfigString);
                      }
                    }
                    else
                    {
                      CG_TargetsChanged(localClientNum, stringIndex);
                    }
                  }
                  else
                  {
                    CG_DrawTools_MiniMapChanged(localClientNum);
                  }
                }
                else
                {
                  v14 = CL_GetConfigString(stringIndex);
                  CG_ServerCmd_RegisterServerMaterial(localClientNum, stringIndex - 2064, v14);
                  CG_ServerCmdSP_UpdateServerMaterialsTouch();
                }
              }
              else
              {
                CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
                if ( !ConfigString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
                  __debugbreak();
                v12 = *ConfigString;
                Fx = CgDynamicMedia::GetFx(CgDynamicMedia, stringIndex - 2926);
                if ( v12 )
                {
                  FX_LoadEffect(ConfigString, Fx);
                  if ( !CgDynamicMedia::IsValidFx(CgDynamicMedia, stringIndex - 2926) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 372, ASSERT_TYPE_ASSERT, "(dynamicMedia->IsValidFx(stringIndex - CS_EFFECT_NAMES_SP))", (const char *)&queryFormat, "dynamicMedia->IsValidFx(stringIndex - CS_EFFECT_NAMES_SP)") )
                    __debugbreak();
                }
                else
                {
                  Fx->m_particleSystemDef = NULL;
                }
              }
            }
            else
            {
              CL_CGameSP_RegisterSoundAliasCacheEntry(stringIndex - 2414);
            }
          }
          else if ( DB_DoesXModelExist(ConfigString) )
          {
            R_RegisterModel(ConfigString);
          }
          else
          {
            R_RegisterCompositeModel(ConfigString);
          }
          break;
      }
    }
    else
    {
      CG_ServerCmd_ParseSunLight(localClientNum);
    }
  }
}

/*
==============
CG_ServerCmdSP_DispatchServerCommand
==============
*/
void CG_ServerCmdSP_DispatchServerCommand(LocalClientNum_t localClientNum, const char *s)
{
  __int64 v9; 
  const char *v10; 
  int v12; 
  __int64 v13; 
  Material *v14; 
  __int64 v15; 
  char v16; 
  CgSoundSystem *SoundSystem; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  centity_t *Entity; 
  unsigned int v24; 
  int v25; 
  SndAliasList *SoundAliasListByName; 
  unsigned int v28; 
  unsigned __int16 v29; 
  __int64 v30; 
  char v31; 
  const char *v32; 
  unsigned int v33; 
  const SndAliasList *AliasFromId; 
  CgSoundSystem *v35; 
  int SoundAliasSeed; 
  int v37; 
  __int64 v38; 
  char v39; 
  CgSoundSystem *v40; 
  const char *v41; 
  unsigned int v42; 
  SndAliasList *v43; 
  centity_t *v44; 
  const char *v45; 
  char v46; 
  int v47; 
  char v48; 
  unsigned int v49; 
  char v50; 
  __int64 v51; 
  char v52; 
  const char *v53; 
  const char *v54; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v57; 
  unsigned __int16 v58; 
  bool v59; 
  unsigned __int16 v60; 
  int v61; 
  double v62; 
  int v63; 
  double v64; 
  int v65; 
  BlurTime v67; 
  BlurPriority v68; 
  int v71; 
  int v72; 
  int v75; 
  __int64 v80; 
  char v81; 
  unsigned int v88; 
  unsigned int v89; 
  CgWeaponSystemSP *WeaponSystemSP; 
  CgWeaponSystemSP *v91; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  unsigned __int16 v98; 
  int v100; 
  int v105; 
  const dvar_t *v106; 
  int v110; 
  int v115; 
  int v116; 
  const char *v118; 
  const char *v120; 
  char v148; 
  char v149; 
  int v236; 
  int v237; 
  vec3_t *v279; 
  const vec3_t *v280; 
  const vec3_t *v281; 
  const char *v297; 
  int v298; 
  int v299; 
  int v305; 
  const char *v306; 
  int v307; 
  ClientVisionSetData *p_cvsData; 
  const char *v309; 
  const char *v310; 
  const char *v311; 
  const char *v312; 
  int v316; 
  const char *v317; 
  const char *v319; 
  const char *v321; 
  int v323; 
  const char *v324; 
  const char *v325; 
  __int64 v326; 
  char v327; 
  int v328; 
  const char *v329; 
  scr_string_t v330; 
  const char *v331; 
  const char *v333; 
  const char *v335; 
  const char *v337; 
  const char *v339; 
  const char *v341; 
  int v343; 
  int v344; 
  int v345; 
  int v346; 
  __int64 startTime; 
  int startTimea; 
  __int64 duration; 
  int durationa; 
  vec3_t outOrigin; 
  vec3_t seed; 
  vec4_t quat; 
  char dest[512]; 
  char v360; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v9 = localClientNum;
  v10 = Cmd_Argv(0);
  if ( !strcmp_0(v10, "disconnect") )
    Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&stru_144009360);
  _R15 = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v9);
  if ( *v10 )
  {
    v12 = -1;
    v13 = -1i64;
    do
      ++v13;
    while ( v10[v13] );
    if ( (_DWORD)v13 == 1 )
    {
      CG_ServerCmdSP_SingleCharacterCmd((LocalClientNum_t)v9, *v10, s);
      goto LABEL_275;
    }
    v14 = NULL;
    v15 = 0i64;
    while ( 1 )
    {
      v16 = v10[v15++];
      if ( v16 != aSnd_0[v15 - 1] )
        break;
      if ( v15 == 4 )
      {
        if ( (_DWORD)v9 )
          goto LABEL_275;
        SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
        LODWORD(seed.v[0]) = Com_GetSoundAliasSeed();
        v18 = Sys_Milliseconds();
        Com_SetSoundAliasSeed(v18);
        v19 = Cmd_ArgInt(1);
        v20 = Cmd_ArgInt(2);
        v21 = v20;
        if ( v20 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_SOUND_ALIASES )", "soundIndex doesn't index BgStaticLimitsSP::CS_MAX_SOUND_ALIASES\n\t%i not in [0, %i)", v20, 512) )
          __debugbreak();
        v22 = Cmd_ArgInt(3) + 3;
        Entity = CG_GetEntity(LOCAL_CLIENT_0, v19);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        if ( v22 == 3 )
        {
          v24 = SoundSystem->PlaySoundAliasByName(SoundSystem, v19, &outOrigin, v21);
          goto LABEL_21;
        }
        if ( v22 == 4 )
        {
          v24 = CgSoundSystem::PlaySoundAliasAtViewHeight(SoundSystem, v19, &outOrigin, v21);
          goto LABEL_21;
        }
        if ( v22 != 7 )
        {
          LODWORD(startTime) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1117, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad sound event enum specified: %d", startTime) )
            __debugbreak();
          goto LABEL_28;
        }
        v25 = Cmd_ArgInt(4);
        SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(v21);
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rsp+310h+duration], xmm0
          vmovss  [rsp+310h+startTime], xmm0
        }
        v24 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, v19, &outOrigin, SoundAliasListByName, v25, startTimea, durationa, 0);
LABEL_21:
        v28 = v24;
        if ( _R15->demoType != HALF )
        {
          if ( v24 )
          {
            v29 = truncate_cast<unsigned short,int>(v21);
            SND_AddSoundDoneNotify(v28, v19, v29);
            Com_SetSoundAliasSeed(SLODWORD(seed.v[0]));
LABEL_28:
            memset(&outOrigin, 0, sizeof(outOrigin));
            goto LABEL_275;
          }
          CG_Utils_ScriptNotifySoundDone(v19, v21);
        }
        Com_SetSoundAliasSeed(SLODWORD(seed.v[0]));
        goto LABEL_28;
      }
    }
    v30 = 0i64;
    while ( 1 )
    {
      v31 = v10[v30++];
      if ( v31 != aSndw[v30 - 1] )
        break;
      if ( v30 == 5 )
      {
        v32 = Cmd_Argv(1);
        v33 = strtoul(v32, NULL, 16);
        AliasFromId = SND_FindAliasFromId(v33);
        if ( AliasFromId )
        {
          *(double *)&_XMM0 = Cmd_ArgFloat(2);
          __asm { vmovss  dword ptr [rsp+310h+outOrigin], xmm0 }
          *(double *)&_XMM0 = Cmd_ArgFloat(3);
          __asm { vmovss  dword ptr [rsp+310h+outOrigin+4], xmm0 }
          *(double *)&_XMM0 = Cmd_ArgFloat(4);
          __asm { vmovss  dword ptr [rsp+310h+outOrigin+8], xmm0 }
          v35 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v9);
          SoundAliasSeed = Com_GetSoundAliasSeed();
          v37 = Sys_Milliseconds();
          Com_SetSoundAliasSeed(v37);
          CgSoundSystem::PlaySoundAlias(v35, 2046, &outOrigin, AliasFromId);
          Com_SetSoundAliasSeed(SoundAliasSeed);
        }
        goto LABEL_275;
      }
    }
    v38 = 0i64;
    while ( 1 )
    {
      v39 = v10[v38++];
      if ( v39 != aSndexp[v38 - 1] )
        break;
      if ( v38 == 7 )
      {
        v40 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v9);
        v41 = Cmd_Argv(2);
        v42 = strtoul(v41, NULL, 16);
        v43 = SND_FindAliasFromId(v42);
        if ( v43 )
        {
          LODWORD(seed.v[0]) = Cmd_ArgInt(1);
          v44 = CG_GetEntity((const LocalClientNum_t)v9, SLODWORD(seed.v[0]));
          v45 = Cmd_Argv(3);
          CG_GetPoseOrigin(&v44->pose, &outOrigin);
          if ( v45 && (v46 = *v45) != 0 )
          {
            v47 = 5381;
            do
            {
              v48 = v46;
              v49 = v46 - 65;
              v50 = v46 | 0x20;
              if ( v49 >= 0x1A )
                v50 = v48;
              v47 = 65599 * v47 + v50;
              v46 = *++v45;
            }
            while ( *v45 );
            if ( !v47 )
              v47 = 1;
          }
          else
          {
            v47 = 0;
          }
          v40->PlayExplosionSoundAsync(v40, LODWORD(seed.v[0]), &outOrigin, v43, 0, v47);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        goto LABEL_275;
      }
    }
    v51 = 0i64;
    while ( 1 )
    {
      v52 = v10[v51++];
      if ( v52 != aPrint_0[v51 - 1] )
        break;
      if ( v51 == 6 )
      {
        v53 = Cmd_Argv(1);
        v54 = SEH_LocalizeTextMessage(v53, "server print", LOCMSG_SAFE);
        Com_Printf(0, "%s\n", v54);
        goto LABEL_275;
      }
    }
    if ( !strcmp_0(v10, "gamesavestart") )
    {
      GlobalModel = LUI_Model_GetGlobalModel();
      ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "cg.sp.savingCheckpoint");
      LUI_Model_SetBool(ModelFromPath, 1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "gamesaved") )
    {
      v57 = LUI_Model_GetGlobalModel();
      v58 = LUI_Model_CreateModelFromPath(v57, "cg.sp.savingCheckpointSucceeded");
      v59 = 1;
LABEL_57:
      LUI_Model_SetBool(v58, v59);
      v60 = LUI_Model_CreateModelFromPath(v57, "cg.sp.savingCheckpoint");
      LUI_Model_SetBool(v60, 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "gamesavefailed") )
    {
      v57 = LUI_Model_GetGlobalModel();
      v58 = LUI_Model_CreateModelFromPath(v57, "cg.sp.savingCheckpointSucceeded");
      v59 = 0;
      goto LABEL_57;
    }
    if ( !strcmp_0(v10, "snd_fade") )
    {
      v61 = Cmd_ArgInt(2);
      v62 = Cmd_ArgFloat(1);
      SND_FadeAllSounds(*(float *)&v62, v61);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "level_snd_fade") )
    {
      v63 = Cmd_ArgInt(2);
      v64 = Cmd_ArgFloat(1);
      SND_SetLevelFadeIn(*(float *)&v64, v63);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "scr_blur") )
    {
      v65 = Cmd_ArgInt(1);
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovaps xmm6, xmm0 }
      v67 = Cmd_ArgInt(3);
      v68 = Cmd_ArgInt(4);
      if ( v65 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 911, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vmovaps xmm2, xmm6; endBlur
      }
      CG_Blur((LocalClientNum_t)v9, v65, *(float *)&_XMM2, v67, v68);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "clear_blur") )
    {
      CG_ClearBlur((LocalClientNum_t)v9);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "scr_fade") )
    {
      v71 = Cmd_ArgInt(3);
      v72 = Cmd_ArgInt(2);
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@437f0000
        vcvttss2si ecx, xmm1
      }
      CG_DrawSP_Fade((LocalClientNum_t)v9, 0, 0, 0, _ECX, v72, v71);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "time_slow") )
    {
      v75 = Cmd_ArgInt(1);
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovaps xmm7, xmm0 }
      if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v9, 1, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
        __debugbreak();
      if ( (unsigned int)v9 >= CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(duration) = CgDrawSystem::ms_allocatedCount;
        LODWORD(startTime) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", startTime, duration) )
          __debugbreak();
      }
      if ( !CgDrawSystem::ms_drawSystemArray[v9] )
      {
        LODWORD(duration) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", duration) )
          __debugbreak();
      }
      __asm
      {
        vmovaps xmm3, xmm7; endScale
        vmovaps xmm2, xmm6; startScale
      }
      CgDrawSystemSP::AlterTimescale((CgDrawSystemSP *)CgDrawSystem::ms_drawSystemArray[v9], v75, *(float *)&_XMM2, *(float *)&_XMM3);
      goto LABEL_275;
    }
    v80 = 0i64;
    while ( 1 )
    {
      v81 = v10[v80++];
      if ( v81 != aSlowaim[v80 - 1] )
        break;
      if ( v80 == 8 )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1250, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 241, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
          __debugbreak();
        if ( Cmd_ArgInt(1) )
        {
          *(double *)&_XMM0 = Cmd_ArgFloat(2);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = Cmd_ArgFloat(3);
          __asm
          {
            vmovaps xmm2, xmm0; slowAimYawScale
            vmovaps xmm1, xmm6; slowAimPitchScale
          }
          AimAssist_SetSlowAim((LocalClientNum_t)v9, *(const float *)&_XMM1, *(const float *)&_XMM2);
        }
        else
        {
          AimAssist_ClearSlowAim((LocalClientNum_t)v9);
        }
        goto LABEL_275;
      }
    }
    if ( !strcmp_0(v10, "capturnrate") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm
      {
        vmovaps xmm3, xmm0; maxYawSpeed
        vmovaps xmm2, xmm6; maxPitchSpeed
      }
      CL_CapTurnRate((LocalClientNum_t)v9, TURNRATECAPTYPE_FROMSCRIPT, *(float *)&_XMM2, *(float *)&_XMM3);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "addviewmodel") )
    {
      v88 = Cmd_ArgInt(1);
      v89 = Cmd_ArgInt(2);
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovss  [rsp+310h+seed], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(4);
      __asm { vmovss  [rsp+310h+var_2A4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(5);
      __asm { vmovss  dword ptr [rsp+310h+var_2A0], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(6);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(7);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(8);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+8], xmm0 }
      WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)v9);
      WeaponSystemSP->AddWeaponAttachModel(WeaponSystemSP, v88, v89, &seed, &outOrigin);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "clearviewmodels") )
    {
      v91 = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)v9);
      CgWeaponSystemSP::ClearWeaponAttachModels(v91);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "showViewModel") )
    {
      _R15->hideViewModel = 0;
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "hideViewModel") )
    {
      _R15->hideViewModel = 1;
      Handler = CgHandler::getHandler((LocalClientNum_t)v9);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v9);
      PM_ResetWeaponState(Instance, &_R15->predictedPlayerState, Handler);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "ret_lock_on") )
    {
      v94 = Cmd_ArgInt(2);
      v95 = Cmd_ArgInt(1);
      CG_ReticleStartLockOn((LocalClientNum_t)v9, v95, v94);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "checksound") )
    {
      if ( !(_DWORD)v9 )
      {
        v96 = Cmd_ArgInt(1);
        v97 = Cmd_ArgInt(2);
        v98 = truncate_cast<unsigned short,int>(v97);
        if ( !SND_IsScriptNotifySoundPlaying(v96, v98) )
          CG_Utils_ScriptNotifySoundDone(v96, v98);
      }
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_turret_fov") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [r15+59EC4h], xmm0 }
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_lerp_fov") )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1346, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
        __debugbreak();
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      v100 = Cmd_ArgInt(2);
      _RAX = CG_GetViewFovBySpace((ClientFov *)&outOrigin, (const LocalClientNum_t)v9, CG_FovSpace_Scene, 0);
      __asm
      {
        vmovsd  xmm2, qword ptr [rax]
        vshufps xmm1, xmm2, xmm2, 55h ; 'U'
        vmovss  dword ptr [r15+66A7Ch], xmm1
        vmovss  dword ptr [r15+66A80h], xmm6
      }
      _R15->fovLerpTimer = v100;
      _R15->fovLerpDuration = v100;
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_base_fov") )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1368, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
        __debugbreak();
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      v105 = Cmd_ArgInt(2);
      v106 = DVARFLT_cg_targetBaseFov;
      if ( !DVARFLT_cg_targetBaseFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFov") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v106);
      LODWORD(_R15->baseFovLerpInfo.baseFovAtLerpStart) = v106->current.integer;
      __asm { vmovss  dword ptr [r15+66A70h], xmm6 }
      _R15->baseFovLerpInfo.timer = v105;
      _R15->baseFovLerpInfo.duration = v105;
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "digitaldistort") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm
      {
        vmovaps xmm2, xmm0; timeScale
        vmovaps xmm1, xmm6; intensity
      }
      CG_SetDigitalDistortParams((const LocalClientNum_t)v9, *(const float *)&_XMM1, *(const float *)&_XMM2);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_enabled") )
    {
      v110 = Cmd_ArgInt(1);
      CG_SetPIPActive((LocalClientNum_t)v9, v110 != 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_x") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; x }
      CG_PIP_SetViewX((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_y") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; y }
      CG_PIP_SetViewY((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_width") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; width }
      CG_PIP_SetViewWidth((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_height") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; height }
      CG_PIP_SetViewHeight((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_free_camera") )
    {
      v115 = Cmd_ArgInt(1);
      CG_SetPipNonPlayer((LocalClientNum_t)v9, v115 != 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_render_to_texture") )
    {
      v116 = Cmd_ArgInt(1);
      CG_SetPipRenderToTexture((LocalClientNum_t)v9, v116 != 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_origin") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+8], xmm0 }
      CG_SetPipPos((LocalClientNum_t)v9, &outOrigin);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_origin_offset") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+8], xmm0 }
      CG_SetPipPosOffset((LocalClientNum_t)v9, &outOrigin);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_angles_offset") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovss  dword ptr [rsp+310h+outOrigin+8], xmm0 }
      CG_SetPipAnglesOffset((LocalClientNum_t)v9, &outOrigin);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_fov") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; fov }
      CG_SetPipFOV((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_dof_physical_fstop") )
    {
      v118 = Cmd_Argv(1);
      *(double *)&_XMM0 = atof(v118);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; fstop }
      CG_SetPipDofPhysicalFstop((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_dof_physical_focus_distance") )
    {
      v120 = Cmd_Argv(1);
      *(double *)&_XMM0 = atof(v120);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; focusDistance }
      CG_SetPipDofPhysicalFocusDistance((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_look") )
    {
      _R15 = CG_GetPipForward((LocalClientNum_t)v9);
      _RBX = CG_GetPipRight((LocalClientNum_t)v9);
      _RDI = CG_GetPipUp((LocalClientNum_t)v9);
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [r15], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovss  dword ptr [r15+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm6, dword ptr [r15+4]
        vmovss  xmm5, dword ptr [r15]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm0
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm4, xmm3, xmm3
        vmovss  xmm9, cs:__real@80000000
        vcmpless xmm1, xmm4, xmm9
        vmovss  xmm8, cs:__real@3f800000
        vblendvps xmm0, xmm4, xmm8, xmm1
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [r15], xmm1
        vmulss  xmm0, xmm2, xmm6
        vmovss  dword ptr [r15+4], xmm0
        vmulss  xmm3, xmm2, xmm7
        vmovss  dword ptr [r15+8], xmm3
        vmulss  xmm1, xmm1, dword ptr [rdi]
        vmulss  xmm0, xmm0, dword ptr [rdi+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rdi+8]
        vaddss  xmm3, xmm2, xmm1
        vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm3, cs:__real@3f7ae148
      }
      if ( v148 | v149 )
      {
        Vec3Cross(_R15, _RDI, _RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm3, dword ptr [rbx+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rbx], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
        Vec3Cross(_RBX, _R15, _RDI);
      }
      else
      {
        Vec3Cross(_RBX, _R15, _RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  xmm5, dword ptr [rdi]
          vmovss  xmm3, dword ptr [rdi+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rdi], xmm0
          vmulss  xmm1, xmm2, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm0
        }
        Vec3Cross(_R15, _RDI, _RBX);
      }
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_up") )
    {
      _RDI = CG_GetPipForward((LocalClientNum_t)v9);
      _RBX = CG_GetPipRight((LocalClientNum_t)v9);
      _R14 = CG_GetPipUp((LocalClientNum_t)v9);
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovss  dword ptr [r14], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovss  dword ptr [r14+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm6, dword ptr [r14+4]
        vmovss  xmm5, dword ptr [r14]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm0
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm4, xmm3, xmm3
        vmovss  xmm9, cs:__real@80000000
        vcmpless xmm1, xmm4, xmm9
        vmovss  xmm8, cs:__real@3f800000
        vblendvps xmm0, xmm4, xmm8, xmm1
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm4, xmm5, xmm2
        vmovss  dword ptr [r14], xmm4
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [r14+4], xmm0
        vmulss  xmm3, xmm2, xmm7
        vmovss  dword ptr [r14+8], xmm3
        vmulss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm0, xmm4, dword ptr [rdi]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rdi+8]
        vaddss  xmm3, xmm2, xmm1
        vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm3, cs:__real@3f7ae148
      }
      if ( v148 | v149 )
      {
        Vec3Cross(_RDI, _R14, _RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm3, dword ptr [rbx+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rbx], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
        Vec3Cross(_R14, _RBX, _RDI);
      }
      else
      {
        Vec3Cross(_R14, _RBX, _RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  xmm5, dword ptr [rdi]
          vmovss  xmm3, dword ptr [rdi+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rdi], xmm0
          vmulss  xmm1, xmm2, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm0
        }
        Vec3Cross(_RDI, _R14, _RBX);
      }
      goto LABEL_275;
    }
    v236 = 1;
    v237 = 3;
    if ( !strcmp_0(v10, "set_pip_right") )
    {
      *(_QWORD *)outOrigin.v = CG_GetPipForward((LocalClientNum_t)v9);
      *(_QWORD *)seed.v = CG_GetPipRight((LocalClientNum_t)v9);
      _R13 = CG_GetPipUp((LocalClientNum_t)v9);
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      _RAX = *(_QWORD *)seed.v;
      __asm { vmovss  dword ptr [rax], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      _RAX = *(_QWORD *)seed.v;
      __asm { vmovss  dword ptr [rax+4], xmm0 }
      *(double *)&_XMM0 = Cmd_ArgFloat(3);
      __asm { vmovaps xmm7, xmm0 }
      _RAX = *(const vec3_t **)seed.v;
      __asm
      {
        vmovss  xmm6, dword ptr [rax+4]
        vmovss  xmm5, dword ptr [rax]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm0
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm4, xmm3, xmm3
        vmovss  xmm9, cs:__real@80000000
        vcmpless xmm1, xmm4, xmm9
        vmovss  xmm8, cs:__real@3f800000
        vblendvps xmm0, xmm4, xmm8, xmm1
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rax], xmm1
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rax+4], xmm0
        vmulss  xmm3, xmm2, xmm7
        vmovss  dword ptr [rax+8], xmm3
        vmulss  xmm1, xmm1, dword ptr [r13+0]
        vmulss  xmm0, xmm0, dword ptr [r13+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [r13+8]
        vaddss  xmm3, xmm2, xmm1
        vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm3, cs:__real@3f7ae148
      }
      if ( v148 | v149 )
      {
        Vec3Cross(_R13, _RAX, *(vec3_t **)outOrigin.v);
        _RAX = *(const vec3_t **)outOrigin.v;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vmovss  xmm5, dword ptr [rax]
          vmovss  xmm3, dword ptr [rax+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rax], xmm0
          vmulss  xmm1, xmm2, dword ptr [rax+4]
          vmovss  dword ptr [rax+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rax+8]
          vmovss  dword ptr [rax+8], xmm0
        }
        v279 = _R13;
        v280 = _RAX;
        v281 = *(const vec3_t **)seed.v;
      }
      else
      {
        Vec3Cross(_RAX, *(const vec3_t **)outOrigin.v, _R13);
        __asm
        {
          vmovss  xmm0, dword ptr [r13+4]
          vmovss  xmm5, dword ptr [r13+0]
          vmovss  xmm3, dword ptr [r13+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm2
          vmovss  dword ptr [r13+0], xmm0
          vmulss  xmm1, xmm2, dword ptr [r13+4]
          vmovss  dword ptr [r13+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [r13+8]
          vmovss  dword ptr [r13+8], xmm0
        }
        v279 = *(vec3_t **)outOrigin.v;
        v280 = *(const vec3_t **)seed.v;
        v281 = _R13;
      }
      Vec3Cross(v281, v280, v279);
      v12 = -1;
    }
    if ( !strcmp_0(v10, "set_pip_thermal_body_material") )
    {
      v297 = Cmd_Argv(1);
      if ( *v297 )
        v14 = Material_RegisterHandle(v297, IMAGE_TRACK_MODEL);
      CG_SetPipThermalBodyMaterial((LocalClientNum_t)v9, v14);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_link_to_entity") )
    {
      v298 = Cmd_ArgInt(1);
      CG_SetPIPLinkEntity((LocalClientNum_t)v9, v298);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_link_to_tagname") )
    {
      v299 = Cmd_ArgInt(1);
      CG_SetPIPLinkTagname((LocalClientNum_t)v9, v299);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_unlink") )
    {
      CG_SetPIPLinkEntity((LocalClientNum_t)v9, 2047);
      CG_SetPIPLinkTagname((LocalClientNum_t)v9, 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_nearz") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; nearZ }
      CG_SetPIPNearZ((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_blur") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; blur }
      CG_SetPIPBlur((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_lod") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; lod }
      CG_SetPIPLod((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_aspect") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; aspectRatio }
      CG_PIP_SetAspectRatio((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_cull_dist") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; farZ }
      CG_SetPIPFarZ((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "set_pip_shadowmaps") )
    {
      v305 = Cmd_ArgInt(1);
      CG_SetPipShadowMaps((LocalClientNum_t)v9, v305 != 0);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_visionset_naked") )
    {
      v306 = Cmd_Argv(1);
      v307 = Cmd_ArgInt(2);
      if ( *v306 )
      {
        CG_VisionSetUpdateToNode(&_R15->cvsData, _R15->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(&_R15->cvsData, _R15->time);
        p_cvsData = &_R15->pipViews[0].cvsData;
        CG_VisionSetMergeBlendToLeaf(&_R15->pipViews[0].cvsData, _R15->time, VISIONSET_BLENDTYPE_SCRIPT_BLEND, VISIONSET_LEAFTYPE_SCRIPT_FROM);
        CG_VisionSetRegisterLeafByFile(&_R15->pipViews[0].cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, v306);
        CG_VisionSetRegisterBlendStart(&_R15->pipViews[0].cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, _R15->time, v307, 1, VISIONSETLERP_SMOOTH);
      }
      else
      {
        p_cvsData = &_R15->pipViews[0].cvsData;
      }
      CG_VisionSetScriptOverride(p_cvsData, v306, _R15->time, v307);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_visionset_night") )
    {
      v309 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&_R15->pipViews[0].cvsData, VISIONSET_LEAFTYPE_NIGHTVISION, v309);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_visionset_missilecam") )
    {
      v310 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&_R15->pipViews[0].cvsData, VISIONSET_LEAFTYPE_PREDATOR, v310);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_visionset_thermal") )
    {
      v311 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&_R15->pipViews[0].cvsData, VISIONSET_LEAFTYPE_THERMAL, v311);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_visionset_pain") )
    {
      v312 = Cmd_Argv(1);
      CG_VisionSetRegisterLeafByFile(&_R15->pipViews[0].cvsData, VISIONSET_LEAFTYPE_PAIN, v312);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_enable_visionset_naked") )
    {
      _R15->pipViews[0].cvsData.archived.painVisionActive = 0;
      _R15->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
LABEL_205:
      *(_WORD *)&_R15->pipViews[0].cvsData.transitory.remoteMissileCam = 0;
LABEL_206:
      __asm { vmovss  xmm1, cs:__real@bf800000; fadeInTime }
      CG_PIP_EnableNightVision((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_enable_visionset_night") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      _R15->pipViews[0].cvsData.archived.painVisionActive = 0;
      _R15->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&_R15->pipViews[0].cvsData.transitory.remoteMissileCam = 0;
      __asm { vmovaps xmm1, xmm0; fadeInTime }
      CG_PIP_EnableNightVision((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_275;
    }
    if ( !strcmp_0(v10, "pip_enable_visionset_missilecam") )
    {
      _R15->pipViews[0].cvsData.archived.painVisionActive = 0;
      _R15->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&_R15->pipViews[0].cvsData.transitory.remoteMissileCam = 1;
      goto LABEL_206;
    }
    if ( !strcmp_0(v10, "pip_enable_visionset_thermal") )
    {
      _R15->pipViews[0].cvsData.archived.painVisionActive = 0;
      _R15->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&_R15->pipViews[0].cvsData.transitory.remoteMissileCam = 256;
      goto LABEL_206;
    }
    if ( !strcmp_0(v10, "pip_enable_visionset_pain") )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm1, xmm0; fadeInTime }
      CG_PIP_SetPainVision((LocalClientNum_t)v9, *(float *)&_XMM1);
      goto LABEL_205;
    }
    if ( !strcmp_0(v10, "set_hud_dyn") )
    {
      v316 = Cmd_ArgInt(1);
      v317 = Cmd_Argv(2);
      *(double *)&_XMM0 = atof(v317);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+59F10h], xmm1
      }
      v319 = Cmd_Argv(3);
      *(double *)&_XMM0 = atof(v319);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+59F14h], xmm1
      }
      v321 = Cmd_Argv(4);
      *(double *)&_XMM0 = atof(v321);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+59F18h], xmm1
      }
      _R15->hudLightingState.forceAdditiveColorStart.v[0] = _R15->hudLightingState.forceAdditiveColor.v[0];
      _R15->hudLightingState.forceAdditiveColorStart.v[1] = _R15->hudLightingState.forceAdditiveColor.v[1];
      _R15->hudLightingState.forceAdditiveColorStart.v[2] = _R15->hudLightingState.forceAdditiveColor.v[2];
      _R15->hudLightingState.forceAdditiveChangeTime = v316;
      _R15->hudLightingState.forceAdditiveChangeDuration = v316;
    }
    else if ( !strcmp_0(v10, "transient") )
    {
      v323 = Cmd_Argc();
      v324 = Cmd_Argv(1);
      if ( v323 > 2 )
        v12 = Cmd_ArgInt(2);
      if ( v323 > 3 )
        LODWORD(v14) = Cmd_ArgInt(3);
      if ( I_stricmp(v324, "load") )
      {
        if ( I_stricmp(v324, "pausegame") )
        {
          if ( I_stricmp(v324, "unload") )
          {
            if ( I_stricmp(v324, "unloadall") )
            {
              if ( I_stricmp(v324, "unload_level") )
              {
                if ( I_stricmp(v324, "sync") )
                {
                  if ( I_stricmp(v324, "setvis") )
                    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443174C0, 960i64, v324);
                  else
                    CL_TransientsWorld_SetVisibility(LOCAL_CLIENT_0, v12, (_DWORD)v14 != 0);
                }
                else
                {
                  CL_TransientsSP_QueueSoftSync();
                }
              }
              else
              {
                CL_TransientsSP_QueueUnloadLevel();
              }
            }
            else
            {
              CL_TransientsSP_QueueUnloadAll();
            }
          }
          else
          {
            CL_TransientsSP_QueueUnload(v12);
          }
        }
        else
        {
          CL_TransientsSP_PauseGameWaitFor(v12);
        }
      }
      else
      {
        CL_TransientsSP_QueueLoad(v12);
      }
    }
    else if ( !strcmp_0(v10, "preloadzones") )
    {
      if ( Cmd_Argc() < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1861, ASSERT_TYPE_ASSERT, "(Cmd_Argc() >= 2)", (const char *)&queryFormat, "Cmd_Argc() >= 2") )
        __debugbreak();
      memset_0(dest, 0, sizeof(dest));
      if ( Cmd_Argc() > 1 )
      {
        do
        {
          v325 = Cmd_Argv(v236);
          if ( DB_Zones_IsPreloadZoneName(v325) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1868, ASSERT_TYPE_ASSERT, "(!DB_Zones_IsPreloadZoneName( zoneName ))", "%s\n\t%s has already been preloaded!", "!DB_Zones_IsPreloadZoneName( zoneName )", v325) )
            __debugbreak();
          Com_Printf(14, "CLIENT: preloadzones %s\n", v325);
          Core_strcpy(&dest[64 * (__int64)(v236++ - 1)], 0x40ui64, v325);
        }
        while ( v236 < Cmd_Argc() );
      }
      CL_PreloadSP_ServerAskedForLoad((const char (*)[8][64])dest);
    }
    else
    {
      v326 = 0i64;
      while ( 1 )
      {
        v327 = v10[v326++];
        if ( v327 != aMayhem[v326 - 1] )
          break;
        if ( v326 == 7 )
        {
          v328 = Cmd_Argc();
          v329 = Cmd_Argv(1);
          if ( v328 > 2 )
            LODWORD(v14) = Cmd_ArgInt(2);
          if ( I_stricmp(v329, "play") )
          {
            if ( I_stricmp(v329, "pause") )
            {
              if ( I_stricmp(v329, "hide") )
              {
                if ( I_stricmp(v329, "show") )
                {
                  if ( I_stricmp(v329, "spawn") )
                  {
                    if ( I_stricmp(v329, "kill") )
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144317600, 961i64, v329);
                    else
                      Mayhem_KillInstance((scr_string_t)v14);
                  }
                  else
                  {
                    if ( v328 != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1922, ASSERT_TYPE_ASSERT, "(argc == 10)", (const char *)&queryFormat, "argc == 10") )
                      __debugbreak();
                    v330 = Cmd_ArgInt(3);
                    v331 = Cmd_Argv(4);
                    *(double *)&_XMM0 = atof(v331);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  [rsp+310h+seed], xmm1
                    }
                    v333 = Cmd_Argv(5);
                    *(double *)&_XMM0 = atof(v333);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  [rsp+310h+var_2A4], xmm1
                    }
                    v335 = Cmd_Argv(6);
                    *(double *)&_XMM0 = atof(v335);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  dword ptr [rsp+310h+var_2A0], xmm1
                    }
                    v337 = Cmd_Argv(7);
                    *(double *)&_XMM0 = atof(v337);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  dword ptr [rsp+310h+outOrigin], xmm1
                    }
                    v339 = Cmd_Argv(8);
                    *(double *)&_XMM0 = atof(v339);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  dword ptr [rsp+310h+outOrigin+4], xmm1
                    }
                    v341 = Cmd_Argv(9);
                    *(double *)&_XMM0 = atof(v341);
                    __asm
                    {
                      vcvtsd2ss xmm1, xmm0, xmm0
                      vmovss  dword ptr [rsp+310h+outOrigin+8], xmm1
                    }
                    AnglesToQuat(&outOrigin, &quat);
                    Mayhem_SpawnInstance((scr_string_t)v14, v330, &seed, &quat);
                  }
                }
                else
                {
                  Mayhem_ShowInstance((scr_string_t)v14);
                }
              }
              else
              {
                Mayhem_HideInstance((scr_string_t)v14);
              }
            }
            else
            {
              Mayhem_PauseInstance((scr_string_t)v14);
            }
          }
          else
          {
            Mayhem_PlayInstance((scr_string_t)v14);
          }
          goto LABEL_275;
        }
      }
      if ( !strcmp_0(v10, "set_cin_lerp_lb") )
      {
        v343 = Cmd_ArgInt(1);
        v344 = Cmd_ArgInt(2);
        v345 = Cmd_ArgInt(3);
        if ( v343 == 1 )
          v237 = 1;
        _R15->cinematicLetterboxInfo.wantedState = v237;
        _R15->cinematicLetterboxInfo.scaleTimer = v344;
        _R15->cinematicLetterboxInfo.scaleDuration = v344;
        _R15->cinematicLetterboxInfo.fadeTimer = v345;
        _R15->cinematicLetterboxInfo.fadeDuration = v345;
      }
      else if ( !strcmp_0(v10, "sfreeent") )
      {
        v346 = Cmd_ArgInt(1);
        SND_FreeEntityParamInfo(v346);
      }
      else
      {
        Com_PrintWarning(14, "Unknown client game command: %s\n", v10);
      }
    }
  }
LABEL_275:
  _R11 = &v360;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_ServerCmdSP_ExecuteNewServerCommands
==============
*/
void CG_ServerCmdSP_ExecuteNewServerCommands(LocalClientNum_t localClientNum, int latestSequence)
{
  int nesting; 
  cg_t *LocalClientGlobals; 

  nesting = cmd_args.nesting;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  while ( LocalClientGlobals->serverCommandSequence < latestSequence )
  {
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 2024, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    CG_ServerCmdSP_ServerCommand(localClientNum, ++LocalClientGlobals->serverCommandSequence);
    if ( nesting != cmd_args.nesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 2029, ASSERT_TYPE_ASSERT, "(nesting == cmd_args.nesting)", (const char *)&queryFormat, "nesting == cmd_args.nesting") )
      __debugbreak();
  }
}

/*
==============
CG_ServerCmdSP_MapInit
==============
*/
void CG_ServerCmdSP_MapInit(bool restart, bool loadScripts, bool savegame)
{
  bool v4; 
  const dvar_t *v5; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  signed int v8; 
  __int64 v9; 
  CgWeaponSystem *v10; 
  CgEventSystem *v11; 
  CgEventSystem *v12; 
  CgDrawSystem *v13; 
  CgDrawSystem *v14; 
  CgViewSystem *v15; 
  CgMissile *v16; 
  const dvar_t *v17; 
  LocalClientNum_t v18; 
  cg_t *v19; 
  LocalClientNum_t v20; 
  __int64 v21; 
  unsigned int v22; 
  const char *ConfigString; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int i; 
  const char *v28; 
  Physics_WorldId v30; 
  Physics_WorldId j; 
  CgPlayer_Asm *v32; 
  CgPlayer_Asm *v33; 
  CgClientSideEffectsSystemSP *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  bdRandom v41; 
  bdRandom v42; 
  __int64 v43; 
  RefdefView out; 

  v43 = -2i64;
  v4 = restart;
  v5 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer && v4 )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
    Copy_RefdefView(&out, &LocalClientGlobals->refdef.view);
  }
  v8 = 0;
  if ( cg_maxLocalClients > 0 )
  {
    v9 = 0i64;
    do
    {
      CgGlobalsSP::ClearLocalClientGlobals((const LocalClientNum_t)v8);
      if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_SP )
      {
        LODWORD(v37) = CgWeaponSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 606, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tCgWeaponSystem::ClearWeaponSystemCommon: Trying to clear weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgWeaponSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgWeaponSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgWeaponSystem *, _QWORD))CgWeaponSystem::ms_weaponSystemArray[v9]->~CgWeaponSystem)(CgWeaponSystem::ms_weaponSystemArray[v9], 0i64);
      memset_0(CgWeaponSystem::ms_weaponSystemArray[v9], 0, 0x15E0ui64);
      v10 = CgWeaponSystem::ms_weaponSystemArray[v9];
      v10->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
      v10->m_localClientNum = v8;
      v10->m_numBulletDebugLines = 0;
      v10->m_nextBulletId = 0;
      v10->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystemSP::`vftable';
      if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgEventSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 300, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tCgEventSystem::ClearEventSystemCommon: Trying to clear event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgEventSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgEventSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgEventSystem *, _QWORD))CgEventSystem::ms_eventSystemArray[v9]->~CgEventSystem)(CgEventSystem::ms_eventSystemArray[v9], 0i64);
      v11 = CgEventSystem::ms_eventSystemArray[v9];
      v11->__vftable = NULL;
      *(_QWORD *)&v11->m_localClientNum = 0i64;
      v12 = CgEventSystem::ms_eventSystemArray[v9];
      v12->m_localClientNum = v8;
      v12->__vftable = (CgEventSystem_vtbl *)&CgEventSystemSP::`vftable';
      CG_Event_Debug_Init((LocalClientNum_t)v8);
      if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 252, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tCgDrawSystem::ClearDrawSystemCommon: Trying to clear draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgDrawSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgDrawSystem *, _QWORD))CgDrawSystem::ms_drawSystemArray[v9]->~CgDrawSystem)(CgDrawSystem::ms_drawSystemArray[v9], 0i64);
      v13 = CgDrawSystem::ms_drawSystemArray[v9];
      v13->__vftable = NULL;
      *(_QWORD *)&v13->m_localClientNum = 0i64;
      v13[1].__vftable = NULL;
      *(_QWORD *)&v13[1].m_localClientNum = 0i64;
      v14 = CgDrawSystem::ms_drawSystemArray[v9];
      v14->m_localClientNum = v8;
      v14->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemSP::`vftable';
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgCompassSystem *, _QWORD))CgCompassSystem::ms_compassSystemArray[v9]->~CgCompassSystem)(CgCompassSystem::ms_compassSystemArray[v9], 0i64);
      memset_0(CgCompassSystem::ms_compassSystemArray[v9], 0, 0x1A38ui64);
      CgCompassSystemSP::CgCompassSystemSP((CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v9], (const LocalClientNum_t)v8);
      if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
      {
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v36) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v9] )
      {
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v36) )
          __debugbreak();
      }
      CgCompassSystem::ResetCompassActorObfuscation(CgCompassSystem::ms_compassSystemArray[v9]);
      CG_SnapshotSP_ClearSnapshots((const LocalClientNum_t)v8);
      if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 368, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tCgEntitySystem::ClearEntitySystemCommon: Trying to clear entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 369, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgEntitySystem *, _QWORD))CgEntitySystem::ms_entitySystemArray[v9]->~CgEntitySystem)(CgEntitySystem::ms_entitySystemArray[v9], 0i64);
      memset_0(CgEntitySystem::ms_entitySystemArray[v9], 0, sizeof(CgEntitySystem));
      CgEntitySystemSP::CgEntitySystemSP((CgEntitySystemSP *)CgEntitySystem::ms_entitySystemArray[v9], (const LocalClientNum_t)v8);
      CgEntitySystem::ResetEntitySystemObufscation((const LocalClientNum_t)v8);
      if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgViewSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tCgViewSystem::ClearViewSystemCommon: Trying to clear view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgViewSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgViewSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgViewSystem *, _QWORD))CgViewSystem::ms_viewSystemArray[v9]->~CgViewSystem)(CgViewSystem::ms_viewSystemArray[v9], 0i64);
      memset_0(CgViewSystem::ms_viewSystemArray[v9], 0, sizeof(CgViewSystem));
      v15 = CgViewSystem::ms_viewSystemArray[v9];
      v15->m_localClientNum = v8;
      memset_0(&v15->m_viewKickState, 0, sizeof(v15->m_viewKickState));
      v15->__vftable = (CgViewSystem_vtbl *)&CgViewSystemSP::`vftable';
      if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 482, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tCgVehicleSystem::ClearVehicleSystemCommon: Trying to clear vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgVehicleSystem *, _QWORD))CgVehicleSystem::ms_vehicleSystemArray[v9]->~CgVehicleSystem)(CgVehicleSystem::ms_vehicleSystemArray[v9], 0i64);
      memset_0(CgVehicleSystem::ms_vehicleSystemArray[v9], 0, sizeof(CgVehicleSystem));
      CgVehicleSystemSP::CgVehicleSystemSP((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[v9], (const LocalClientNum_t)v8);
      CgVehicleSystem::TreadBoneAnimReset();
      CGMovingPlatformsSP::ClearMovingPlatformSystem();
      if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 147, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tCgTargetAssist::ClearInstanceCommon: Trying to clear target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgTargetAssist::ms_allocatedCount )
      {
        LODWORD(v36) = CgTargetAssist::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgTargetAssist *, _QWORD))CgTargetAssist::ms_instances[v9]->~BgTargetAssist)(CgTargetAssist::ms_instances[v9], 0i64);
      memset_0(CgTargetAssist::ms_instances[v9], 0, 0x338ui64);
      CgTargetAssistSP::CgTargetAssistSP((CgTargetAssistSP *)CgTargetAssist::ms_instances[v9], (const LocalClientNum_t)v8);
      CgAntiLag::ResetClientHistory((const LocalClientNum_t)v8);
      if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgPredictedEntitySystem::ClearSystemCommon: Trying to clear predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgPredictedEntitySystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgPredictedEntitySystem::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 298, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      CgPredictedEntitySystem::Shutdown(CgPredictedEntitySystem::ms_systemsArray[v9]);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))CgPredictedEntitySystem::ms_systemsArray[v9]->~BgPredictedEntitySystem)(CgPredictedEntitySystem::ms_systemsArray[v9], 0i64);
      memset_0(CgPredictedEntitySystem::ms_systemsArray[v9], 0, sizeof(CgPredictedEntitySystem));
      CgPredictedEntitySystemSP::CgPredictedEntitySystemSP((CgPredictedEntitySystemSP *)CgPredictedEntitySystem::ms_systemsArray[v9], (const LocalClientNum_t)v8);
      if ( (_BYTE)CgBallistics::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgBallistics::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgBallistics::ClearSystemCommon: Trying to clear ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgBallistics::ms_allocatedCount )
      {
        LODWORD(v36) = CgBallistics::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 243, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgBallistics *, _QWORD))CgBallistics::ms_systemsArray[v9]->~BgBallistics<CgBallisticInstance>)(CgBallistics::ms_systemsArray[v9], 0i64);
      memset_0(CgBallistics::ms_systemsArray[v9], 0, sizeof(CgBallistics));
      CgBallisticsSP::CgBallisticsSP((CgBallisticsSP *)CgBallistics::ms_systemsArray[v9], (const LocalClientNum_t)v8);
      if ( (_BYTE)CgMissile::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgMissile::ms_allocatedType;
        LODWORD(v36) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 350, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgMissile::ClearSystemCommon: Trying to clear missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v36, v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgMissile::ms_allocatedCount )
      {
        LODWORD(v36) = CgMissile::ms_allocatedCount;
        LODWORD(v35) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgMissile *, _QWORD))CgMissile::ms_systemsArray[v9]->~BgMissile)(CgMissile::ms_systemsArray[v9], 0i64);
      v16 = CgMissile::ms_systemsArray[v9];
      v16->__vftable = NULL;
      *(_QWORD *)&v16->BgMissile::m_grenadeLinkToMovingPlatformUsesTag = 0i64;
      *(_QWORD *)&v16->BgMissile::m_javelinOffsetRight = 0i64;
      *(_QWORD *)&v16->m_localClientNum = 0i64;
      *(_QWORD *)&v16->m_changeEntityTypeOnImpact = 0i64;
      CgMissileSP::CgMissileSP((CgMissileSP *)CgMissile::ms_systemsArray[v9++], (const LocalClientNum_t)v8++);
    }
    while ( v8 < cg_maxLocalClients );
    v4 = restart;
  }
  v17 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer && v4 )
  {
    v18 = CL_GetOnlyLocalClientNum();
    v19 = CG_GetLocalClientGlobals(v18);
    Copy_RefdefView(&v19->refdef.view, &out);
  }
  CG_FXEntities_Init();
  CG_ActorsSP_FreeLookAtData();
  CG_PIPInit();
  v20 = CL_GetOnlyLocalClientNum();
  v21 = v20;
  CG_SoundEntity_Init(v20);
  v22 = 2065;
  do
  {
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( BgDynamicLimits::ms_data.m_maxConfigStrings <= 0x810 )
    {
      LODWORD(v36) = 2064;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v36) )
        __debugbreak();
    }
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( v22 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
    {
      LODWORD(v36) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v36) )
        __debugbreak();
    }
    ConfigString = CL_GetConfigString(v22);
    CG_ServerCmd_RegisterServerMaterial((LocalClientNum_t)v21, v22 - 2064, ConfigString);
    ++v22;
  }
  while ( v22 - 2064 < 0x15E );
  CG_ServerCmdSP_UpdateServerMaterialsTouch();
  _RBP = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
  _RBP->cinematicLetterboxInfo.currentState = CINEMATIC_LETTER_BOX_OFF;
  _RBP->cinematicLetterboxInfo.wantedState = CINEMATIC_LETTER_BOX_OFF;
  _RBP->loaded = restart;
  _RBP->lastHealthLerpDelay = 1;
  _RBP->baseFovLerpInfo.targetBaseFov = 65.0;
  *(_QWORD *)&_RBP->baseFovLerpInfo.timer = 0i64;
  *(double *)&_XMM0 = CG_View_GetFovDvarValue((const LocalClientNum_t)v21);
  __asm
  {
    vmovss  dword ptr [rbp+66A7Ch], xmm0
    vmovss  dword ptr [rbp+59EC4h], xmm0
  }
  memset_0(&_RBP->viewModelPose, 0, sizeof(_RBP->viewModelPose));
  bdRandom::bdRandom(&v41);
  v25 = bdRandom::nextUInt(&v41) % 0x22;
  bdRandom::~bdRandom(&v41);
  bdRandom::bdRandom(&v42);
  v26 = bdRandom::nextUInt(&v42) % 0x22;
  bdRandom::~bdRandom(&v42);
  CG_ResetPoseZero(&_RBP->viewModelPose, v26, v25);
  _RBP->viewModelPose.eType = 29;
  _RBP->prevViewIndex = -1;
  *(_WORD *)&_RBP->m_useSellShock = 1;
  CG_Camera_Initialize((const LocalClientNum_t)v21);
  CG_InitLocalEntities((const LocalClientNum_t)v21);
  CG_VisionSetMapInit((const LocalClientNum_t)v21);
  CG_ServerCmd_VisionSetAllConfigStrings((LocalClientNum_t)v21);
  CG_StartClientSideTriggers((LocalClientNum_t)v21);
  CG_EntityWorkers_SetPlayerWorkersEnabled((const LocalClientNum_t)v21, 0);
  CG_EntityWorkers_SetMissileWorkersEnabled((const LocalClientNum_t)v21, 0);
  CG_EntityWorkers_SetAgentWorkersEnabled((const LocalClientNum_t)v21, 0);
  R_InitPrimaryLights();
  R_LightTweak_Init();
  CG_InitLightUpdate((LocalClientNum_t)v21);
  for ( i = 4014; i < 0xFEE; ++i )
    CG_TargetsChanged((LocalClientNum_t)v21, i);
  v28 = CL_GetConfigString(4078);
  *(double *)&_XMM0 = atof(v28);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0; dist }
  R_SetCullDist(*(float *)&_XMM0);
  CG_DrawTools_MiniMapChanged((LocalClientNum_t)v21);
  CG_DrawTools_ThermalBodyMaterialChanged((LocalClientNum_t)v21);
  CG_DrawTools_LaserMaterialChanged((LocalClientNum_t)v21);
  CG_ServerCmdSP_ParseSkyOverride((LocalClientNum_t)v21);
  if ( DB_IsDoingSPHotLoad() )
  {
    SND_SoftReset();
  }
  else
  {
    if ( DB_IsDoingSPHotLoadBinkTransition() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 647, ASSERT_TYPE_ASSERT, "(!DB_IsDoingSPHotLoadBinkTransition())", (const char *)&queryFormat, "!DB_IsDoingSPHotLoadBinkTransition()") )
      __debugbreak();
    SND_Reset(restart);
  }
  if ( restart )
  {
    CG_Main_FreePhysics((LocalClientNum_t)v21);
    CG_Main_FreeRagdolls((LocalClientNum_t)v21);
    Ragdoll_Reset((LocalClientNum_t)v21);
    CG_Main_FreeCloth((LocalClientNum_t)v21);
    Physics_CreateClientWorlds((LocalClientNum_t)v21);
    v30 = 3 * v21 + 4;
    for ( j = 3 * v21 + 2; j <= v30; ++j )
    {
      WorldCollision_InstantiateCollision(j);
      StaticModels_InstantiateCollision(j);
    }
    Cloth_CreateGlobalWorld(v21);
    Cloth_XAnimNode_SetDObjToClothFn(CG_Cloth_DObjToClothInstances, 0);
    CG_ClientModel_InitClient((const LocalClientNum_t)v21);
    CG_Cloth_Entity_Init((const LocalClientNum_t)v21);
    CG_Cloth_Legs_Init((const LocalClientNum_t)v21);
    LUITraceRunner::Initialize((LocalClientNum_t)v21);
    CG_Weapons_SetupAutoComplete();
    if ( PlayerASM_IsEnabled() )
    {
      v32 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v21);
      BgPlayer_Asm::Shutdown(v32, 0);
    }
  }
  FX_InitSystem((LocalClientNum_t)v21, 0);
  if ( restart )
    FX_Dismemberment_Shutdown((LocalClientNum_t)v21);
  FX_Dismemberment_Init((LocalClientNum_t)v21);
  CG_Glass_Init(1);
  if ( restart )
    Mayhem_Shutdown();
  Mayhem_Init();
  if ( PlayerASM_IsEnabled() )
  {
    v33 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v21);
    BgPlayer_Asm::Init(v33, 0, 0);
  }
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    LODWORD(v37) = 1;
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v36, v37, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v21 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v36) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v35) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v21] )
  {
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v36) )
      __debugbreak();
  }
  CgVehicleSystemSP::Init((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[v21]);
  ScriptableCl_Init((const LocalClientNum_t)v21);
  DynEntCl_InitEntities((LocalClientNum_t)v21);
  CG_PlayerStateSP_Respawn((const LocalClientNum_t)v21);
  CG_ShutdownClientSideTriggers((LocalClientNum_t)v21);
  CG_StartClientSideTriggers((LocalClientNum_t)v21);
  SND_PropagationInit();
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    LODWORD(v38) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(v37) = 1;
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v36, v37, v38) )
      __debugbreak();
  }
  if ( (unsigned int)v21 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v36) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v35) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v21] )
  {
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v36) )
      __debugbreak();
  }
  v34 = (CgClientSideEffectsSystemSP *)CgClientSideEffectsSystem::ms_cseSystemArray[v21];
  CgClientSideEffectsSystem::Shutdown(v34);
  CgClientSideEffectsSystemSP::Start(v34, !savegame);
  CG_CreateFx_OnMapRestart();
  FX_ClearViewmodelMarks((LocalClientNum_t)v21);
  CG_VehicleAudio_ResetDistanceScales();
}

/*
==============
CG_ServerCmdSP_ParseCullDist
==============
*/

void __fastcall CG_ServerCmdSP_ParseCullDist(double _XMM0_8)
{
  const char *ConfigString; 

  ConfigString = CL_GetConfigString(4078);
  _XMM0_8 = atof(ConfigString);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0; dist }
  R_SetCullDist(*(float *)&_XMM0);
}

/*
==============
CG_ServerCmdSP_ParseSkyOverride
==============
*/
void CG_ServerCmdSP_ParseSkyOverride(LocalClientNum_t localClientNum)
{
  CgGlobalsSP *LocalClientGlobals; 
  const char *ConfigString; 
  int v3; 
  SkyOverride skyOverride; 

  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  ConfigString = CL_GetConfigString(4082);
  v3 = j_sscanf(ConfigString, "%g %g %g %g %g %g", &skyOverride.refPos, &skyOverride.refPos.y, &skyOverride.refPos.z, &skyOverride.ambientColor, &skyOverride.ambientColor.y, &skyOverride.ambientColor.z);
  if ( v3 == 6 )
  {
    skyOverride.isActive = 1;
  }
  else
  {
    if ( (unsigned int)(v3 + 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 219, ASSERT_TYPE_ASSERT, "( ( argCount == 0 || argCount == (-1) ) )", "( info ) = %s", ConfigString) )
      __debugbreak();
    skyOverride.isActive = 0;
  }
  CgGlobalsSP::SetSkyOverride(LocalClientGlobals, &skyOverride);
}

/*
==============
CG_ServerCmdSP_ParseSunDirection
==============
*/
void CG_ServerCmdSP_ParseSunDirection(LocalClientNum_t localClientNum)
{
  const char *ConfigString; 
  int v2; 
  __int64 lerpDecelTime; 
  int v4; 
  int lerpAccelTime; 
  int lerpEndTime; 
  int lerpBeginTime; 
  vec3_t sunDirBegin; 
  vec3_t sunDirEnd; 

  lerpAccelTime = 0;
  v4 = 0;
  ConfigString = CL_GetConfigString(4080);
  if ( *ConfigString )
  {
    v2 = j_sscanf(ConfigString, "%g %g %g %g %g %g %d %d %d %d", &sunDirBegin, &sunDirBegin.y, &sunDirBegin.z, &sunDirEnd, &sunDirEnd.y, &sunDirEnd.z, &lerpBeginTime, &lerpEndTime, &lerpAccelTime, &v4);
    if ( v2 == 3 )
    {
      R_SetSunDirectionOverride(&sunDirBegin, 1);
    }
    else
    {
      if ( ((v2 - 8) & 0xFFFFFFFD) != 0 )
      {
        LODWORD(lerpDecelTime) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 179, ASSERT_TYPE_ASSERT, "( ( argCount == 3 || argCount == 8 || argCount == 10 ) )", "( argCount ) = %i", lerpDecelTime) )
          __debugbreak();
      }
      R_LerpSunDirectionOverride(&sunDirBegin, &sunDirEnd, lerpBeginTime, lerpEndTime, lerpAccelTime, v4, 1);
    }
  }
  else
  {
    R_ResetSunDirectionOverride();
  }
}

/*
==============
CG_ServerCmdSP_ParseSunFlarePosition
==============
*/
void CG_ServerCmdSP_ParseSunFlarePosition(LocalClientNum_t localClientNum)
{
  const char *ConfigString; 
  vec3_t angles; 

  ConfigString = CL_GetConfigString(4079);
  if ( j_sscanf(ConfigString, "%g %g %g", &angles, &angles.y, &angles.z) == 3 )
    R_SetSunFlarePosition(&angles);
}

/*
==============
CG_ServerCmdSP_RegisterServerMaterials
==============
*/
void CG_ServerCmdSP_RegisterServerMaterials(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  const char *ConfigString; 
  __int64 v4; 

  v2 = 2065;
  do
  {
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( BgDynamicLimits::ms_data.m_maxConfigStrings <= 0x810 )
    {
      LODWORD(v4) = 2064;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v4) )
        __debugbreak();
    }
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( v2 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
    {
      LODWORD(v4) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v4) )
        __debugbreak();
    }
    ConfigString = CL_GetConfigString(v2);
    CG_ServerCmd_RegisterServerMaterial(localClientNum, v2 - 2064, ConfigString);
    ++v2;
  }
  while ( v2 - 2064 < 0x15E );
  CG_ServerCmdSP_UpdateServerMaterialsTouch();
}

/*
==============
CG_ServerCmdSP_ServerCommand
==============
*/
void CG_ServerCmdSP_ServerCommand(LocalClientNum_t localClientNum, int serverCommandNumber)
{
  __int64 v3; 
  ClConnection *v4; 
  __int64 v5; 
  const char *v6; 
  const dvar_t *v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( (_BYTE)ClConnection::ms_activeConnectionType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 50, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::SP") )
    __debugbreak();
  if ( !ClConnection::ms_connections[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 51, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  v4 = ClConnection::ms_connections[v3];
  if ( (unsigned int)(HIDWORD(v4[8259].__vftable) - serverCommandNumber) >= 0x80 )
  {
    LODWORD(v9) = 128;
    LODWORD(v8) = HIDWORD(v4[8259].__vftable) - serverCommandNumber;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1985, ASSERT_TYPE_ASSERT, "(unsigned)( clcData->serverCommands.header.sequence - serverCommandNumber ) < (unsigned)( maxSvReliableCmds )", "clcData->serverCommands.header.sequence - serverCommandNumber doesn't index maxSvReliableCmds\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = *((int *)&v4[8771].m_numPacketsReceived + (serverCommandNumber & 0x7F));
  if ( (unsigned int)v5 >= LODWORD(v4[8259].__vftable) )
  {
    LODWORD(v9) = v4[8259].__vftable;
    LODWORD(v8) = *(&v4[8771].m_numPacketsReceived + (serverCommandNumber & 0x7F));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1988, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( clcData->serverCommands.header.rover )", "offset doesn't index clcData->serverCommands.header.rover\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = (char *)&v4[8259].m_numPacketsReceived + v5;
  v4[8259].m_localClientNum = serverCommandNumber;
  if ( serverCommandNumber == HIDWORD(v4[8259].__vftable) )
    LODWORD(v4[8259].__vftable) = 0;
  v7 = DVARBOOL_cl_showServerCommands;
  if ( !DVARBOOL_cl_showServerCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showServerCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    Com_DPrintf(14, "serverCommand: %i : %s\n", (unsigned int)serverCommandNumber, v6);
  Cmd_TokenizeString(v6);
  CG_ServerCmdSP_DispatchServerCommand((LocalClientNum_t)v3, v6);
  Cmd_EndTokenizedString();
}

/*
==============
CG_ServerCmdSP_ShutdownPhysics
==============
*/
void CG_ServerCmdSP_ShutdownPhysics(LocalClientNum_t localClientNum)
{
  __int32 v2; 
  Physics_WorldId v3; 
  Physics_WorldId i; 

  DynEntCl_Shutdown(localClientNum);
  ScriptableCl_Shutdown(localClientNum);
  FX_WaitKillAllEffects(localClientNum, 1);
  Glass_FreeAllPieces();
  CG_Main_FreePhysics(localClientNum);
  CG_Main_FreeRagdolls(localClientNum);
  CG_Particle_ClearParticleDeferredPhysics(localClientNum, 0);
  LUITraceRunner::Shutdown(localClientNum);
  AnimVisualizer_Terminate();
  if ( CG_Cloth_Entity_IsInitialized(localClientNum) )
    CG_Cloth_Entity_Shutdown(localClientNum);
  if ( CG_Cloth_Legs_IsInitialized(localClientNum) )
    CG_Cloth_Legs_Shutdown(localClientNum);
  if ( CG_ClientModel_IsClientInitialized(localClientNum) )
    CG_ClientModel_ShutdownClient(localClientNum);
  if ( Cloth_HasGlobalWorld(localClientNum) )
    Cloth_DestroyGlobalWorld(localClientNum);
  v2 = 3 * localClientNum;
  v3 = v2 + 2;
  for ( i = v2 + 4; i >= v3; --i )
  {
    StaticModels_ShutdownCollision(i);
    WorldCollision_ShutdownCollision(i);
  }
  Physics_DestroyClientWorlds();
}

/*
==============
CG_ServerCmdSP_SingleCharacterCmd
==============
*/
void CG_ServerCmdSP_SingleCharacterCmd(LocalClientNum_t localClientNum, const char cmd, const char *str)
{
  cg_t *LocalClientGlobals; 
  const char *v11; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v17; 
  int EquippedWeaponIndex; 
  __int64 v19; 
  bool v20; 
  const char *v21; 
  unsigned int v26; 
  int v27; 
  const char *v28; 
  ClConfigStringsSP *ClConfigStringsSP; 
  int v30; 
  int v31; 
  int v32; 
  unsigned __int16 v33; 
  int v34; 
  CgSoundSystem *v35; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  int v39; 
  CgSoundSystem *SoundSystem; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  int ControllerFromClient; 
  OnlineProgression *Instance; 
  int v48; 
  int v49; 
  int v50; 
  __int16 pitch; 
  int v52; 
  __int16 yaw; 
  int v54; 
  __int16 roll; 
  int v56; 
  int v60; 
  __int16 freqPitch; 
  int v62; 
  __int16 freqYaw; 
  int v64; 
  __int16 freqRoll; 
  int v66; 
  __int16 v67; 
  int v68; 
  __int16 v69; 
  int v70; 
  __int16 v71; 
  int v72; 
  int v76; 
  __int16 v77; 
  int v78; 
  __int16 v79; 
  int v80; 
  __int16 v81; 
  float fmt; 
  float fmta; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  Weapon result; 
  Weapon v92; 
  vec3_t src; 
  Weapon r_weapon; 
  char hudElemString[1024]; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 938, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_ServerCmd_SingleCharacterCmd(localClientNum, cmd) )
  {
    __asm
    {
      vmovaps [rsp+5B8h+var_48], xmm6
      vmovaps [rsp+5B8h+var_58], xmm7
      vmovaps [rsp+5B8h+var_68], xmm8
    }
    switch ( cmd )
    {
      case '2':
        v45 = Cmd_Argv(1);
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        Live_GiveAchievement(ControllerFromClient, v45);
        Instance = OnlineProgression::GetInstance();
        v48 = CL_Mgr_GetControllerFromClient(localClientNum);
        OnlineProgression::CheckSinglePlayerRewards(Instance, v48);
        break;
      case '8':
        v49 = Cmd_ArgInt(1);
        v50 = Cmd_ArgInt(2);
        pitch = truncate_cast<short,int>(v50);
        v52 = Cmd_ArgInt(3);
        yaw = truncate_cast<short,int>(v52);
        v54 = Cmd_ArgInt(4);
        roll = truncate_cast<short,int>(v54);
        v56 = Cmd_ArgInt(5);
        *(double *)&_XMM0 = Cmd_ArgFloat(6);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(7);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(8);
        __asm { vmovaps xmm7, xmm0 }
        v60 = Cmd_ArgInt(9);
        freqPitch = truncate_cast<short,int>(v60);
        v62 = Cmd_ArgInt(10);
        freqYaw = truncate_cast<short,int>(v62);
        v64 = Cmd_ArgInt(11);
        freqRoll = truncate_cast<short,int>(v64);
        __asm
        {
          vmovss  [rsp+5B8h+var_558], xmm6
          vmovss  [rsp+5B8h+var_560], xmm8
          vmovss  dword ptr [rsp+5B8h+fmt], xmm7
        }
        CG_StartShakeCameraWithControls(localClientNum, v56, v49, &vec3_origin, fmt, pitch, yaw, roll, freqPitch, freqYaw, freqRoll, v87, v89, 0);
        break;
      case '9':
        *(double *)&_XMM0 = Cmd_ArgFloat(1);
        __asm { vmovss  dword ptr [rsp+5B8h+src], xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(2);
        __asm { vmovss  dword ptr [rsp+5B8h+src+4], xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(3);
        __asm { vmovss  dword ptr [rsp+5B8h+src+8], xmm0 }
        v66 = Cmd_ArgInt(4);
        v67 = truncate_cast<short,int>(v66);
        v68 = Cmd_ArgInt(5);
        v69 = truncate_cast<short,int>(v68);
        v70 = Cmd_ArgInt(6);
        v71 = truncate_cast<short,int>(v70);
        v72 = Cmd_ArgInt(7);
        *(double *)&_XMM0 = Cmd_ArgFloat(8);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(9);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Cmd_ArgFloat(10);
        __asm { vmovaps xmm7, xmm0 }
        v76 = Cmd_ArgInt(11);
        v77 = truncate_cast<short,int>(v76);
        v78 = Cmd_ArgInt(12);
        v79 = truncate_cast<short,int>(v78);
        v80 = Cmd_ArgInt(13);
        v81 = truncate_cast<short,int>(v80);
        __asm
        {
          vmovss  [rsp+5B8h+var_558], xmm6
          vmovss  [rsp+5B8h+var_560], xmm8
          vmovss  dword ptr [rsp+5B8h+fmt], xmm7
        }
        CG_StartShakeCameraWithControls(localClientNum, v72, 2047, &src, fmta, v67, v69, v71, v77, v79, v81, v88, v90, 0);
        break;
      case 'a':
        v11 = Cmd_Argv(1);
        _RAX = BG_ConvertWeaponFromHexString(&result, v11);
        p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+5B8h+r_weapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsp+5B8h+r_weapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rsp+5B8h+r_weapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        v17 = CgWeaponMap::GetInstance(localClientNum);
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v17, &LocalClientGlobals->predictedPlayerState, &r_weapon);
        v20 = EquippedWeaponIndex >= 0 && (v19 = EquippedWeaponIndex, (playerState_s *)((char *)p_predictedPlayerState + v19 * 16) != (playerState_s *)-1540i64) && p_predictedPlayerState->weapEquippedData[v19].inAltMode;
        CG_SelectWeapon(localClientNum, &r_weapon, v20);
        break;
      case 'd':
        Cmd_EndTokenizedString();
        Cmd_TokenizeStringWithLimit(str, 3);
        v26 = Cmd_ArgInt(1);
        v27 = v26;
        if ( v26 >= 0x1817 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EABA0, 959i64, v26);
        v28 = Cmd_Argv(2);
        ClConfigStringsSP = ClConfigStringsSP::GetClConfigStringsSP();
        ClConfigStringsSP::ConfigStringModified(ClConfigStringsSP, localClientNum, v27, v28);
        break;
      case 'e':
        v41 = Cmd_Argv(1);
        v42 = SEH_LocalizeTextMessage(v41, "server print", LOCMSG_SAFE);
        Com_Printf(0, "%s\n", v42);
        break;
      case 'f':
        v43 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v43, "game message", hudElemString, 1024);
        CG_Utils_GameMessage(localClientNum, hudElemString, 0);
        break;
      case 'g':
        v44 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v44, "bold game message", hudElemString, 1024);
        CG_Utils_BoldGameMessage(localClientNum, hudElemString, 0);
        break;
      case 'h':
        if ( Cmd_Argc() == 2 )
        {
          v38 = Cmd_ArgInt(1);
          v39 = v38;
          if ( v38 - 1 > 0x1FF )
          {
            Com_PrintError(9, "ERROR: LocalSoundStop() called with index %i (should be in range[1,%i])\n", v38, 512i64);
          }
          else
          {
            SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
            CgSoundSystem::StopClientSoundAliasByName(SoundSystem, v39);
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: LocalSoundStop(), should be called with 2 arguments.\n");
        }
        break;
      case 'n':
        v30 = Cmd_Argc();
        v31 = v30;
        if ( v30 >= 2 )
        {
          v32 = Cmd_ArgInt(1);
          v33 = truncate_cast<unsigned short,int>(v32);
          v34 = v33;
          if ( (unsigned __int16)(v33 - 1) > 0x1FFu )
          {
            Com_PrintError(9, "ERROR: LocalSound() called with index %i (should be in range[1,%i])\n", v33, 512i64);
          }
          else
          {
            v35 = CgSoundSystem::GetSoundSystem(localClientNum);
            v36 = CgSoundSystem::PlayClientSoundAliasByName(v35, v34);
            if ( v31 > 2 )
            {
              v37 = Cmd_ArgInt(2);
              if ( v36 )
                SND_AddSoundDoneNotify(v36, v37, v34);
              else
                CG_Utils_ScriptNotifySoundDone(v37, v34);
            }
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: LocalSound() called with %i args (should be >= 2)\n", (unsigned int)v30);
        }
        break;
      case 'w':
        v21 = Cmd_Argv(1);
        _RAX = BG_ConvertWeaponFromHexString(&v92, v21);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+5B8h+r_weapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsp+5B8h+r_weapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rsp+5B8h+r_weapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        CG_SetEquippedOffHand(localClientNum, &r_weapon);
        break;
      case 'z':
        LocalClientGlobals->swimModeIntent[0] = (Cmd_ArgInt(1) == 0) + 1;
        break;
      default:
        Com_PrintWarning(14, "CG_DispatchServerCommand_Unified: Unknown command '%c'\n", (unsigned int)cmd);
        break;
    }
    __asm
    {
      vmovaps xmm7, [rsp+5B8h+var_58]
      vmovaps xmm6, [rsp+5B8h+var_48]
      vmovaps xmm8, [rsp+5B8h+var_68]
    }
  }
}

/*
==============
CG_ServerCmdSP_UpdateServerMaterialsTouch
==============
*/
void CG_ServerCmdSP_UpdateServerMaterialsTouch()
{
  __int64 v0; 
  unsigned int i; 
  const char *ConfigString; 
  const char *v3; 
  Material *v4; 

  memset_0(cgMedia.serverMaterialsTouch, 0, sizeof(cgMedia.serverMaterialsTouch));
  v0 = 0i64;
  for ( i = 2064; i <= 0x96D; ++i )
  {
    ConfigString = CL_GetConfigString(i);
    v3 = ConfigString;
    if ( ConfigString && *ConfigString )
    {
      v4 = Material_RegisterHandle(ConfigString, IMAGE_TRACK_HUD);
      if ( v0 >= 32 )
        Com_PrintWarning(8, "Too many streamed server materials at [%s] (max %i)\n", v3, 32i64);
      else
        cgMedia.serverMaterialsTouch[v0++] = v4;
    }
  }
}

/*
==============
CG_ServerCmdSP_WaitNewServerCommands
==============
*/
void CG_ServerCmdSP_WaitNewServerCommands(LocalClientNum_t localClientNum, int latestSequence)
{
  if ( CG_GetLocalClientGlobals(localClientNum)->serverCommandSequence < latestSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 2038, ASSERT_TYPE_ASSERT, "(cgameGlob->serverCommandSequence >= latestSequence)", (const char *)&queryFormat, "cgameGlob->serverCommandSequence >= latestSequence") )
    __debugbreak();
}

