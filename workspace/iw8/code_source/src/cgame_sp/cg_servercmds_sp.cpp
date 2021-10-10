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
  __int64 v4; 
  const char *v5; 
  CgGlobalsSP *LocalClientGlobals; 
  int v7; 
  __int64 v8; 
  Material *v9; 
  __int64 v10; 
  char v11; 
  CgSoundSystem *SoundSystem; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  centity_t *Entity; 
  unsigned int v19; 
  int v20; 
  SndAliasList *SoundAliasListByName; 
  unsigned int v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  char v25; 
  const char *v26; 
  unsigned int v27; 
  const SndAliasList *AliasFromId; 
  double v29; 
  double v30; 
  double v31; 
  CgSoundSystem *v32; 
  int SoundAliasSeed; 
  int v34; 
  __int64 v35; 
  char v36; 
  CgSoundSystem *v37; 
  const char *v38; 
  unsigned int v39; 
  SndAliasList *v40; 
  centity_t *v41; 
  const char *v42; 
  char v43; 
  int v44; 
  char v45; 
  unsigned int v46; 
  char v47; 
  __int64 v48; 
  char v49; 
  const char *v50; 
  const char *v51; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  bool v56; 
  unsigned __int16 v57; 
  int v58; 
  double v59; 
  int v60; 
  double v61; 
  int v62; 
  double v63; 
  BlurTime v64; 
  BlurPriority v65; 
  int v66; 
  int v67; 
  double v68; 
  int v69; 
  double v70; 
  float v71; 
  double v72; 
  __int64 v73; 
  char v74; 
  double v75; 
  float v76; 
  double v77; 
  double v78; 
  float v79; 
  double v80; 
  unsigned int v81; 
  unsigned int v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  CgWeaponSystemSP *WeaponSystemSP; 
  CgWeaponSystemSP *v90; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  unsigned __int16 v97; 
  double v98; 
  double v99; 
  int v100; 
  ClientFov *ViewFovBySpace; 
  double v102; 
  int v103; 
  const dvar_t *v104; 
  double v105; 
  float v106; 
  double v107; 
  int v108; 
  double v109; 
  double v110; 
  double v111; 
  double v112; 
  int v113; 
  int v114; 
  double v115; 
  double v116; 
  double v117; 
  double v118; 
  double v119; 
  double v120; 
  double v121; 
  double v122; 
  double v123; 
  double v124; 
  const char *v125; 
  const char *v127; 
  vec3_t *PipForward; 
  vec3_t *PipRight; 
  vec3_t *PipUp; 
  double v132; 
  double v133; 
  double v134; 
  float v135; 
  float v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v142; 
  __int128 v143; 
  __int128 v147; 
  __int128 v148; 
  vec3_t *v152; 
  vec3_t *v153; 
  vec3_t *v154; 
  double v155; 
  double v156; 
  double v157; 
  float v158; 
  float v159; 
  __int128 v160; 
  __int128 v161; 
  __int128 v165; 
  __int128 v166; 
  __int128 v170; 
  __int128 v171; 
  int v175; 
  int v176; 
  vec3_t *v177; 
  double v178; 
  double v179; 
  double v180; 
  float v181; 
  const vec3_t *v182; 
  float v183; 
  __int128 v184; 
  __int128 v185; 
  __int128 v189; 
  __int128 v190; 
  vec3_t *v193; 
  const vec3_t *v194; 
  const vec3_t *v195; 
  const vec3_t *v196; 
  __int128 v197; 
  __int128 v198; 
  const char *v201; 
  int v202; 
  int v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  double v208; 
  int v209; 
  const char *v210; 
  int v211; 
  ClientVisionSetData *p_cvsData; 
  const char *v213; 
  const char *v214; 
  const char *v215; 
  const char *v216; 
  double v217; 
  double v218; 
  int v219; 
  const char *v220; 
  const char *v222; 
  const char *v224; 
  int v226; 
  const char *v227; 
  const char *v228; 
  __int64 v229; 
  char v230; 
  int v231; 
  const char *v232; 
  scr_string_t v233; 
  const char *v234; 
  const char *v236; 
  const char *v238; 
  const char *v240; 
  const char *v242; 
  const char *v244; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  __int64 startTime; 
  __int64 duration; 
  vec3_t outOrigin; 
  vec3_t seed; 
  vec4_t quat; 
  char dest[512]; 

  v4 = localClientNum;
  v5 = Cmd_Argv(0);
  if ( !strcmp_0(v5, "disconnect") )
    Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&stru_144009360);
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( *v5 )
  {
    v7 = -1;
    v8 = -1i64;
    do
      ++v8;
    while ( v5[v8] );
    if ( (_DWORD)v8 == 1 )
    {
      CG_ServerCmdSP_SingleCharacterCmd((LocalClientNum_t)v4, *v5, s);
      return;
    }
    v9 = NULL;
    v10 = 0i64;
    while ( 1 )
    {
      v11 = v5[v10++];
      if ( v11 != aSnd_0[v10 - 1] )
        break;
      if ( v10 == 4 )
      {
        if ( (_DWORD)v4 )
          return;
        SoundSystem = CgSoundSystem::GetSoundSystem(LOCAL_CLIENT_0);
        LODWORD(seed.v[0]) = Com_GetSoundAliasSeed();
        v13 = Sys_Milliseconds();
        Com_SetSoundAliasSeed(v13);
        v14 = Cmd_ArgInt(1);
        v15 = Cmd_ArgInt(2);
        v16 = v15;
        if ( v15 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_SOUND_ALIASES )", "soundIndex doesn't index BgStaticLimitsSP::CS_MAX_SOUND_ALIASES\n\t%i not in [0, %i)", v15, 512) )
          __debugbreak();
        v17 = Cmd_ArgInt(3) + 3;
        Entity = CG_GetEntity(LOCAL_CLIENT_0, v14);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        if ( v17 == 3 )
        {
          v19 = SoundSystem->PlaySoundAliasByName(SoundSystem, v14, &outOrigin, v16);
          goto LABEL_21;
        }
        if ( v17 == 4 )
        {
          v19 = CgSoundSystem::PlaySoundAliasAtViewHeight(SoundSystem, v14, &outOrigin, v16);
          goto LABEL_21;
        }
        if ( v17 != 7 )
        {
          LODWORD(startTime) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1117, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad sound event enum specified: %d", startTime) )
            __debugbreak();
          goto LABEL_28;
        }
        v20 = Cmd_ArgInt(4);
        SoundAliasListByName = CL_CGameSP_GetSoundAliasListByName(v16);
        v19 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, v14, &outOrigin, SoundAliasListByName, v20, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
LABEL_21:
        v22 = v19;
        if ( LocalClientGlobals->demoType != HALF )
        {
          if ( v19 )
          {
            v23 = truncate_cast<unsigned short,int>(v16);
            SND_AddSoundDoneNotify(v22, v14, v23);
            Com_SetSoundAliasSeed(SLODWORD(seed.v[0]));
LABEL_28:
            memset(&outOrigin, 0, sizeof(outOrigin));
            return;
          }
          CG_Utils_ScriptNotifySoundDone(v14, v16);
        }
        Com_SetSoundAliasSeed(SLODWORD(seed.v[0]));
        goto LABEL_28;
      }
    }
    v24 = 0i64;
    while ( 1 )
    {
      v25 = v5[v24++];
      if ( v25 != aSndw[v24 - 1] )
        break;
      if ( v24 == 5 )
      {
        v26 = Cmd_Argv(1);
        v27 = strtoul(v26, NULL, 16);
        AliasFromId = SND_FindAliasFromId(v27);
        if ( AliasFromId )
        {
          v29 = Cmd_ArgFloat(2);
          outOrigin.v[0] = *(float *)&v29;
          v30 = Cmd_ArgFloat(3);
          outOrigin.v[1] = *(float *)&v30;
          v31 = Cmd_ArgFloat(4);
          outOrigin.v[2] = *(float *)&v31;
          v32 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v4);
          SoundAliasSeed = Com_GetSoundAliasSeed();
          v34 = Sys_Milliseconds();
          Com_SetSoundAliasSeed(v34);
          CgSoundSystem::PlaySoundAlias(v32, 2046, &outOrigin, AliasFromId);
          Com_SetSoundAliasSeed(SoundAliasSeed);
        }
        return;
      }
    }
    v35 = 0i64;
    while ( 1 )
    {
      v36 = v5[v35++];
      if ( v36 != aSndexp[v35 - 1] )
        break;
      if ( v35 == 7 )
      {
        v37 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v4);
        v38 = Cmd_Argv(2);
        v39 = strtoul(v38, NULL, 16);
        v40 = SND_FindAliasFromId(v39);
        if ( v40 )
        {
          LODWORD(seed.v[0]) = Cmd_ArgInt(1);
          v41 = CG_GetEntity((const LocalClientNum_t)v4, SLODWORD(seed.v[0]));
          v42 = Cmd_Argv(3);
          CG_GetPoseOrigin(&v41->pose, &outOrigin);
          if ( v42 && (v43 = *v42) != 0 )
          {
            v44 = 5381;
            do
            {
              v45 = v43;
              v46 = v43 - 65;
              v47 = v43 | 0x20;
              if ( v46 >= 0x1A )
                v47 = v45;
              v44 = 65599 * v44 + v47;
              v43 = *++v42;
            }
            while ( *v42 );
            if ( !v44 )
              v44 = 1;
          }
          else
          {
            v44 = 0;
          }
          v37->PlayExplosionSoundAsync(v37, LODWORD(seed.v[0]), &outOrigin, v40, 0, v44);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        return;
      }
    }
    v48 = 0i64;
    while ( 1 )
    {
      v49 = v5[v48++];
      if ( v49 != aPrint_0[v48 - 1] )
        break;
      if ( v48 == 6 )
      {
        v50 = Cmd_Argv(1);
        v51 = SEH_LocalizeTextMessage(v50, "server print", LOCMSG_SAFE);
        Com_Printf(0, "%s\n", v51);
        return;
      }
    }
    if ( !strcmp_0(v5, "gamesavestart") )
    {
      GlobalModel = LUI_Model_GetGlobalModel();
      ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "cg.sp.savingCheckpoint");
      LUI_Model_SetBool(ModelFromPath, 1);
      return;
    }
    if ( !strcmp_0(v5, "gamesaved") )
    {
      v54 = LUI_Model_GetGlobalModel();
      v55 = LUI_Model_CreateModelFromPath(v54, "cg.sp.savingCheckpointSucceeded");
      v56 = 1;
LABEL_57:
      LUI_Model_SetBool(v55, v56);
      v57 = LUI_Model_CreateModelFromPath(v54, "cg.sp.savingCheckpoint");
      LUI_Model_SetBool(v57, 0);
      return;
    }
    if ( !strcmp_0(v5, "gamesavefailed") )
    {
      v54 = LUI_Model_GetGlobalModel();
      v55 = LUI_Model_CreateModelFromPath(v54, "cg.sp.savingCheckpointSucceeded");
      v56 = 0;
      goto LABEL_57;
    }
    if ( !strcmp_0(v5, "snd_fade") )
    {
      v58 = Cmd_ArgInt(2);
      v59 = Cmd_ArgFloat(1);
      SND_FadeAllSounds(*(float *)&v59, v58);
      return;
    }
    if ( !strcmp_0(v5, "level_snd_fade") )
    {
      v60 = Cmd_ArgInt(2);
      v61 = Cmd_ArgFloat(1);
      SND_SetLevelFadeIn(*(float *)&v61, v60);
      return;
    }
    if ( !strcmp_0(v5, "scr_blur") )
    {
      v62 = Cmd_ArgInt(1);
      v63 = Cmd_ArgFloat(2);
      v64 = Cmd_ArgInt(3);
      v65 = Cmd_ArgInt(4);
      if ( v62 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 911, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
        __debugbreak();
      if ( *(float *)&v63 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 912, ASSERT_TYPE_ASSERT, "(blurEndValue >= 0)", (const char *)&queryFormat, "blurEndValue >= 0") )
        __debugbreak();
      CG_Blur((LocalClientNum_t)v4, v62, *(float *)&v63, v64, v65);
      return;
    }
    if ( !strcmp_0(v5, "clear_blur") )
    {
      CG_ClearBlur((LocalClientNum_t)v4);
      return;
    }
    if ( !strcmp_0(v5, "scr_fade") )
    {
      v66 = Cmd_ArgInt(3);
      v67 = Cmd_ArgInt(2);
      v68 = Cmd_ArgFloat(1);
      CG_DrawSP_Fade((LocalClientNum_t)v4, 0, 0, 0, (int)(float)(*(float *)&v68 * 255.0), v67, v66);
      return;
    }
    if ( !strcmp_0(v5, "time_slow") )
    {
      v69 = Cmd_ArgInt(1);
      v70 = Cmd_ArgFloat(2);
      v71 = *(float *)&v70;
      v72 = Cmd_ArgFloat(3);
      if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v4, 1, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
        __debugbreak();
      if ( (unsigned int)v4 >= CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(duration) = CgDrawSystem::ms_allocatedCount;
        LODWORD(startTime) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", startTime, duration) )
          __debugbreak();
      }
      if ( !CgDrawSystem::ms_drawSystemArray[v4] )
      {
        LODWORD(duration) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", duration) )
          __debugbreak();
      }
      CgDrawSystemSP::AlterTimescale((CgDrawSystemSP *)CgDrawSystem::ms_drawSystemArray[v4], v69, v71, *(float *)&v72);
      return;
    }
    v73 = 0i64;
    while ( 1 )
    {
      v74 = v5[v73++];
      if ( v74 != aSlowaim[v73 - 1] )
        break;
      if ( v73 == 8 )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1250, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 241, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
          __debugbreak();
        if ( Cmd_ArgInt(1) )
        {
          v75 = Cmd_ArgFloat(2);
          v76 = *(float *)&v75;
          v77 = Cmd_ArgFloat(3);
          AimAssist_SetSlowAim((LocalClientNum_t)v4, v76, *(const float *)&v77);
        }
        else
        {
          AimAssist_ClearSlowAim((LocalClientNum_t)v4);
        }
        return;
      }
    }
    if ( !strcmp_0(v5, "capturnrate") )
    {
      v78 = Cmd_ArgFloat(1);
      v79 = *(float *)&v78;
      v80 = Cmd_ArgFloat(2);
      CL_CapTurnRate((LocalClientNum_t)v4, TURNRATECAPTYPE_FROMSCRIPT, v79, *(float *)&v80);
      return;
    }
    if ( !strcmp_0(v5, "addviewmodel") )
    {
      v81 = Cmd_ArgInt(1);
      v82 = Cmd_ArgInt(2);
      v83 = Cmd_ArgFloat(3);
      seed.v[0] = *(float *)&v83;
      v84 = Cmd_ArgFloat(4);
      seed.v[1] = *(float *)&v84;
      v85 = Cmd_ArgFloat(5);
      seed.v[2] = *(float *)&v85;
      v86 = Cmd_ArgFloat(6);
      outOrigin.v[0] = *(float *)&v86;
      v87 = Cmd_ArgFloat(7);
      outOrigin.v[1] = *(float *)&v87;
      v88 = Cmd_ArgFloat(8);
      outOrigin.v[2] = *(float *)&v88;
      WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)v4);
      WeaponSystemSP->AddWeaponAttachModel(WeaponSystemSP, v81, v82, &seed, &outOrigin);
      return;
    }
    if ( !strcmp_0(v5, "clearviewmodels") )
    {
      v90 = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)v4);
      CgWeaponSystemSP::ClearWeaponAttachModels(v90);
      return;
    }
    if ( !strcmp_0(v5, "showViewModel") )
    {
      LocalClientGlobals->hideViewModel = 0;
      return;
    }
    if ( !strcmp_0(v5, "hideViewModel") )
    {
      LocalClientGlobals->hideViewModel = 1;
      Handler = CgHandler::getHandler((LocalClientNum_t)v4);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
      PM_ResetWeaponState(Instance, &LocalClientGlobals->predictedPlayerState, Handler);
      return;
    }
    if ( !strcmp_0(v5, "ret_lock_on") )
    {
      v93 = Cmd_ArgInt(2);
      v94 = Cmd_ArgInt(1);
      CG_ReticleStartLockOn((LocalClientNum_t)v4, v94, v93);
      return;
    }
    if ( !strcmp_0(v5, "checksound") )
    {
      if ( !(_DWORD)v4 )
      {
        v95 = Cmd_ArgInt(1);
        v96 = Cmd_ArgInt(2);
        v97 = truncate_cast<unsigned short,int>(v96);
        if ( !SND_IsScriptNotifySoundPlaying(v95, v97) )
          CG_Utils_ScriptNotifySoundDone(v95, v97);
      }
      return;
    }
    if ( !strcmp_0(v5, "set_turret_fov") )
    {
      v98 = Cmd_ArgFloat(1);
      LocalClientGlobals->turretFov = *(float *)&v98;
      return;
    }
    if ( !strcmp_0(v5, "set_lerp_fov") )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1346, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
        __debugbreak();
      v99 = Cmd_ArgFloat(1);
      v100 = Cmd_ArgInt(2);
      ViewFovBySpace = CG_GetViewFovBySpace((ClientFov *)&outOrigin, (const LocalClientNum_t)v4, CG_FovSpace_Scene, 0);
      LocalClientGlobals->fovLerpBase = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&ViewFovBySpace->finalFov, (__m128)*(unsigned __int64 *)&ViewFovBySpace->finalFov, 85).m128_f32[0];
      LocalClientGlobals->fovLerpTarget = *(float *)&v99;
      LocalClientGlobals->fovLerpTimer = v100;
      LocalClientGlobals->fovLerpDuration = v100;
      return;
    }
    if ( !strcmp_0(v5, "set_base_fov") )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1368, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
        __debugbreak();
      v102 = Cmd_ArgFloat(1);
      v103 = Cmd_ArgInt(2);
      v104 = DVARFLT_cg_targetBaseFov;
      if ( !DVARFLT_cg_targetBaseFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFov") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v104);
      LODWORD(LocalClientGlobals->baseFovLerpInfo.baseFovAtLerpStart) = v104->current.integer;
      LocalClientGlobals->baseFovLerpInfo.targetBaseFov = *(float *)&v102;
      LocalClientGlobals->baseFovLerpInfo.timer = v103;
      LocalClientGlobals->baseFovLerpInfo.duration = v103;
      return;
    }
    if ( !strcmp_0(v5, "digitaldistort") )
    {
      v105 = Cmd_ArgFloat(1);
      v106 = *(float *)&v105;
      v107 = Cmd_ArgFloat(2);
      CG_SetDigitalDistortParams((const LocalClientNum_t)v4, v106, *(const float *)&v107);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_enabled") )
    {
      v108 = Cmd_ArgInt(1);
      CG_SetPIPActive((LocalClientNum_t)v4, v108 != 0);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_x") )
    {
      v109 = Cmd_ArgFloat(1);
      CG_PIP_SetViewX((LocalClientNum_t)v4, *(float *)&v109);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_y") )
    {
      v110 = Cmd_ArgFloat(1);
      CG_PIP_SetViewY((LocalClientNum_t)v4, *(float *)&v110);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_width") )
    {
      v111 = Cmd_ArgFloat(1);
      CG_PIP_SetViewWidth((LocalClientNum_t)v4, *(float *)&v111);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_height") )
    {
      v112 = Cmd_ArgFloat(1);
      CG_PIP_SetViewHeight((LocalClientNum_t)v4, *(float *)&v112);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_free_camera") )
    {
      v113 = Cmd_ArgInt(1);
      CG_SetPipNonPlayer((LocalClientNum_t)v4, v113 != 0);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_render_to_texture") )
    {
      v114 = Cmd_ArgInt(1);
      CG_SetPipRenderToTexture((LocalClientNum_t)v4, v114 != 0);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_origin") )
    {
      v115 = Cmd_ArgFloat(1);
      outOrigin.v[0] = *(float *)&v115;
      v116 = Cmd_ArgFloat(2);
      outOrigin.v[1] = *(float *)&v116;
      v117 = Cmd_ArgFloat(3);
      outOrigin.v[2] = *(float *)&v117;
      CG_SetPipPos((LocalClientNum_t)v4, &outOrigin);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_origin_offset") )
    {
      v118 = Cmd_ArgFloat(1);
      outOrigin.v[0] = *(float *)&v118;
      v119 = Cmd_ArgFloat(2);
      outOrigin.v[1] = *(float *)&v119;
      v120 = Cmd_ArgFloat(3);
      outOrigin.v[2] = *(float *)&v120;
      CG_SetPipPosOffset((LocalClientNum_t)v4, &outOrigin);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_angles_offset") )
    {
      v121 = Cmd_ArgFloat(1);
      outOrigin.v[0] = *(float *)&v121;
      v122 = Cmd_ArgFloat(2);
      outOrigin.v[1] = *(float *)&v122;
      v123 = Cmd_ArgFloat(3);
      outOrigin.v[2] = *(float *)&v123;
      CG_SetPipAnglesOffset((LocalClientNum_t)v4, &outOrigin);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_fov") )
    {
      v124 = Cmd_ArgFloat(1);
      CG_SetPipFOV((LocalClientNum_t)v4, *(float *)&v124);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_dof_physical_fstop") )
    {
      v125 = Cmd_Argv(1);
      *(double *)&_XMM0 = atof(v125);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; fstop }
      CG_SetPipDofPhysicalFstop((LocalClientNum_t)v4, *(float *)&_XMM1);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_dof_physical_focus_distance") )
    {
      v127 = Cmd_Argv(1);
      *(double *)&_XMM0 = atof(v127);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; focusDistance }
      CG_SetPipDofPhysicalFocusDistance((LocalClientNum_t)v4, *(float *)&_XMM1);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_look") )
    {
      PipForward = CG_GetPipForward((LocalClientNum_t)v4);
      PipRight = CG_GetPipRight((LocalClientNum_t)v4);
      PipUp = CG_GetPipUp((LocalClientNum_t)v4);
      v132 = Cmd_ArgFloat(1);
      PipForward->v[0] = *(float *)&v132;
      v133 = Cmd_ArgFloat(2);
      PipForward->v[1] = *(float *)&v133;
      v134 = Cmd_ArgFloat(3);
      v135 = *(float *)&v134;
      v136 = PipForward->v[1];
      v137 = LODWORD(PipForward->v[0]);
      v138 = v137;
      *(float *)&v138 = fsqrt((float)((float)(*(float *)&v137 * *(float *)&v137) + (float)(v136 * v136)) + (float)(*(float *)&v134 * *(float *)&v134));
      _XMM4 = v138;
      __asm
      {
        vcmpless xmm1, xmm4, xmm9
        vblendvps xmm0, xmm4, xmm8, xmm1
      }
      *(float *)&_XMM1 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v137;
      PipForward->v[0] = *(float *)&_XMM1;
      PipForward->v[1] = (float)(1.0 / *(float *)&_XMM0) * v136;
      PipForward->v[2] = (float)(1.0 / *(float *)&_XMM0) * v135;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*(float *)&_XMM1 * PipUp->v[0]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v136) * PipUp->v[1])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v135) * PipUp->v[2])) & _xmm) <= 0.98000002 )
      {
        Vec3Cross(PipForward, PipUp, PipRight);
        v147 = LODWORD(PipRight->v[0]);
        v148 = v147;
        *(float *)&v148 = fsqrt((float)((float)(*(float *)&v147 * *(float *)&v147) + (float)(PipRight->v[1] * PipRight->v[1])) + (float)(PipRight->v[2] * PipRight->v[2]));
        _XMM4 = v148;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        PipRight->v[0] = *(float *)&v147 * (float)(1.0 / *(float *)&_XMM0);
        PipRight->v[1] = (float)(1.0 / *(float *)&_XMM0) * PipRight->v[1];
        PipRight->v[2] = (float)(1.0 / *(float *)&_XMM0) * PipRight->v[2];
        Vec3Cross(PipRight, PipForward, PipUp);
      }
      else
      {
        Vec3Cross(PipRight, PipForward, PipUp);
        v142 = LODWORD(PipUp->v[0]);
        v143 = v142;
        *(float *)&v143 = fsqrt((float)((float)(*(float *)&v142 * *(float *)&v142) + (float)(PipUp->v[1] * PipUp->v[1])) + (float)(PipUp->v[2] * PipUp->v[2]));
        _XMM4 = v143;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        PipUp->v[0] = *(float *)&v142 * (float)(1.0 / *(float *)&_XMM0);
        PipUp->v[1] = (float)(1.0 / *(float *)&_XMM0) * PipUp->v[1];
        PipUp->v[2] = (float)(1.0 / *(float *)&_XMM0) * PipUp->v[2];
        Vec3Cross(PipForward, PipUp, PipRight);
      }
      return;
    }
    if ( !strcmp_0(v5, "set_pip_up") )
    {
      v152 = CG_GetPipForward((LocalClientNum_t)v4);
      v153 = CG_GetPipRight((LocalClientNum_t)v4);
      v154 = CG_GetPipUp((LocalClientNum_t)v4);
      v155 = Cmd_ArgFloat(1);
      v154->v[0] = *(float *)&v155;
      v156 = Cmd_ArgFloat(2);
      v154->v[1] = *(float *)&v156;
      v157 = Cmd_ArgFloat(3);
      v158 = *(float *)&v157;
      v159 = v154->v[1];
      v160 = LODWORD(v154->v[0]);
      v161 = v160;
      *(float *)&v161 = fsqrt((float)((float)(*(float *)&v160 * *(float *)&v160) + (float)(v159 * v159)) + (float)(*(float *)&v157 * *(float *)&v157));
      _XMM4 = v161;
      __asm
      {
        vcmpless xmm1, xmm4, xmm9
        vblendvps xmm0, xmm4, xmm8, xmm1
      }
      v154->v[0] = *(float *)&v160 * (float)(1.0 / *(float *)&_XMM0);
      v154->v[1] = v159 * (float)(1.0 / *(float *)&_XMM0);
      v154->v[2] = (float)(1.0 / *(float *)&_XMM0) * v158;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v159 * (float)(1.0 / *(float *)&_XMM0)) * v152->v[1]) + (float)((float)(*(float *)&v160 * (float)(1.0 / *(float *)&_XMM0)) * v152->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v158) * v152->v[2])) & _xmm) <= 0.98000002 )
      {
        Vec3Cross(v152, v154, v153);
        v170 = LODWORD(v153->v[0]);
        v171 = v170;
        *(float *)&v171 = fsqrt((float)((float)(*(float *)&v170 * *(float *)&v170) + (float)(v153->v[1] * v153->v[1])) + (float)(v153->v[2] * v153->v[2]));
        _XMM4 = v171;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        v153->v[0] = *(float *)&v170 * (float)(1.0 / *(float *)&_XMM0);
        v153->v[1] = (float)(1.0 / *(float *)&_XMM0) * v153->v[1];
        v153->v[2] = (float)(1.0 / *(float *)&_XMM0) * v153->v[2];
        Vec3Cross(v154, v153, v152);
      }
      else
      {
        Vec3Cross(v154, v153, v152);
        v165 = LODWORD(v152->v[0]);
        v166 = v165;
        *(float *)&v166 = fsqrt((float)((float)(*(float *)&v165 * *(float *)&v165) + (float)(v152->v[1] * v152->v[1])) + (float)(v152->v[2] * v152->v[2]));
        _XMM4 = v166;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        v152->v[0] = *(float *)&v165 * (float)(1.0 / *(float *)&_XMM0);
        v152->v[1] = (float)(1.0 / *(float *)&_XMM0) * v152->v[1];
        v152->v[2] = (float)(1.0 / *(float *)&_XMM0) * v152->v[2];
        Vec3Cross(v152, v154, v153);
      }
      return;
    }
    v175 = 1;
    v176 = 3;
    if ( !strcmp_0(v5, "set_pip_right") )
    {
      *(_QWORD *)outOrigin.v = CG_GetPipForward((LocalClientNum_t)v4);
      *(_QWORD *)seed.v = CG_GetPipRight((LocalClientNum_t)v4);
      v177 = CG_GetPipUp((LocalClientNum_t)v4);
      v178 = Cmd_ArgFloat(1);
      **(float **)seed.v = *(float *)&v178;
      v179 = Cmd_ArgFloat(2);
      *(float *)(*(_QWORD *)seed.v + 4i64) = *(float *)&v179;
      v180 = Cmd_ArgFloat(3);
      v181 = *(float *)&v180;
      v182 = *(const vec3_t **)seed.v;
      v183 = *(float *)(*(_QWORD *)seed.v + 4i64);
      v184 = (unsigned int)**(_DWORD **)seed.v;
      v185 = v184;
      *(float *)&v185 = fsqrt((float)((float)(*(float *)&v184 * *(float *)&v184) + (float)(v183 * v183)) + (float)(*(float *)&v180 * *(float *)&v180));
      _XMM4 = v185;
      __asm
      {
        vcmpless xmm1, xmm4, xmm9
        vblendvps xmm0, xmm4, xmm8, xmm1
      }
      **(float **)seed.v = *(float *)&v184 * (float)(1.0 / *(float *)&_XMM0);
      v182->v[1] = v183 * (float)(1.0 / *(float *)&_XMM0);
      v182->v[2] = (float)(1.0 / *(float *)&_XMM0) * v181;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v184 * (float)(1.0 / *(float *)&_XMM0)) * v177->v[0]) + (float)((float)(v183 * (float)(1.0 / *(float *)&_XMM0)) * v177->v[1])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v181) * v177->v[2])) & _xmm) <= 0.98000002 )
      {
        Vec3Cross(v177, v182, *(vec3_t **)outOrigin.v);
        v196 = *(const vec3_t **)outOrigin.v;
        v197 = (unsigned int)**(_DWORD **)outOrigin.v;
        v198 = v197;
        *(float *)&v198 = fsqrt((float)((float)(*(float *)&v197 * *(float *)&v197) + (float)(*(float *)(*(_QWORD *)outOrigin.v + 4i64) * *(float *)(*(_QWORD *)outOrigin.v + 4i64))) + (float)(*(float *)(*(_QWORD *)outOrigin.v + 8i64) * *(float *)(*(_QWORD *)outOrigin.v + 8i64)));
        _XMM4 = v198;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        **(float **)outOrigin.v = *(float *)&v197 * (float)(1.0 / *(float *)&_XMM0);
        v196->v[1] = (float)(1.0 / *(float *)&_XMM0) * v196->v[1];
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        v196->v[2] = (float)(1.0 / *(float *)&_XMM0) * v196->v[2];
        v193 = v177;
        v194 = v196;
        v195 = *(const vec3_t **)seed.v;
      }
      else
      {
        Vec3Cross(v182, *(const vec3_t **)outOrigin.v, v177);
        v189 = LODWORD(v177->v[0]);
        v190 = v189;
        *(float *)&v190 = fsqrt((float)((float)(*(float *)&v189 * *(float *)&v189) + (float)(v177->v[1] * v177->v[1])) + (float)(v177->v[2] * v177->v[2]));
        _XMM4 = v190;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        v177->v[0] = *(float *)&v189 * (float)(1.0 / *(float *)&_XMM0);
        v177->v[1] = (float)(1.0 / *(float *)&_XMM0) * v177->v[1];
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        v177->v[2] = (float)(1.0 / *(float *)&_XMM0) * v177->v[2];
        v193 = *(vec3_t **)outOrigin.v;
        v194 = *(const vec3_t **)seed.v;
        v195 = v177;
      }
      Vec3Cross(v195, v194, v193);
      v7 = -1;
    }
    if ( !strcmp_0(v5, "set_pip_thermal_body_material") )
    {
      v201 = Cmd_Argv(1);
      if ( *v201 )
        v9 = Material_RegisterHandle(v201, IMAGE_TRACK_MODEL);
      CG_SetPipThermalBodyMaterial((LocalClientNum_t)v4, v9);
      return;
    }
    if ( !strcmp_0(v5, "pip_link_to_entity") )
    {
      v202 = Cmd_ArgInt(1);
      CG_SetPIPLinkEntity((LocalClientNum_t)v4, v202);
      return;
    }
    if ( !strcmp_0(v5, "pip_link_to_tagname") )
    {
      v203 = Cmd_ArgInt(1);
      CG_SetPIPLinkTagname((LocalClientNum_t)v4, v203);
      return;
    }
    if ( !strcmp_0(v5, "pip_unlink") )
    {
      CG_SetPIPLinkEntity((LocalClientNum_t)v4, 2047);
      CG_SetPIPLinkTagname((LocalClientNum_t)v4, 0);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_nearz") )
    {
      v204 = Cmd_ArgFloat(1);
      CG_SetPIPNearZ((LocalClientNum_t)v4, *(float *)&v204);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_blur") )
    {
      v205 = Cmd_ArgFloat(1);
      CG_SetPIPBlur((LocalClientNum_t)v4, *(float *)&v205);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_lod") )
    {
      v206 = Cmd_ArgFloat(1);
      CG_SetPIPLod((LocalClientNum_t)v4, *(float *)&v206);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_aspect") )
    {
      v207 = Cmd_ArgFloat(1);
      CG_PIP_SetAspectRatio((LocalClientNum_t)v4, *(float *)&v207);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_cull_dist") )
    {
      v208 = Cmd_ArgFloat(1);
      CG_SetPIPFarZ((LocalClientNum_t)v4, *(float *)&v208);
      return;
    }
    if ( !strcmp_0(v5, "set_pip_shadowmaps") )
    {
      v209 = Cmd_ArgInt(1);
      CG_SetPipShadowMaps((LocalClientNum_t)v4, v209 != 0);
      return;
    }
    if ( !strcmp_0(v5, "pip_visionset_naked") )
    {
      v210 = Cmd_Argv(1);
      v211 = Cmd_ArgInt(2);
      if ( *v210 )
      {
        CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(&LocalClientGlobals->cvsData, LocalClientGlobals->time);
        p_cvsData = &LocalClientGlobals->pipViews[0].cvsData;
        CG_VisionSetMergeBlendToLeaf(&LocalClientGlobals->pipViews[0].cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_SCRIPT_BLEND, VISIONSET_LEAFTYPE_SCRIPT_FROM);
        CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, v210);
        CG_VisionSetRegisterBlendStart(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, LocalClientGlobals->time, v211, 1, VISIONSETLERP_SMOOTH);
      }
      else
      {
        p_cvsData = &LocalClientGlobals->pipViews[0].cvsData;
      }
      CG_VisionSetScriptOverride(p_cvsData, v210, LocalClientGlobals->time, v211);
      return;
    }
    if ( !strcmp_0(v5, "pip_visionset_night") )
    {
      v213 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_LEAFTYPE_NIGHTVISION, v213);
      return;
    }
    if ( !strcmp_0(v5, "pip_visionset_missilecam") )
    {
      v214 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_LEAFTYPE_PREDATOR, v214);
      return;
    }
    if ( !strcmp_0(v5, "pip_visionset_thermal") )
    {
      v215 = Cmd_Argv(1);
      CG_VisionSetSpecialVision(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_LEAFTYPE_THERMAL, v215);
      return;
    }
    if ( !strcmp_0(v5, "pip_visionset_pain") )
    {
      v216 = Cmd_Argv(1);
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_LEAFTYPE_PAIN, v216);
      return;
    }
    if ( !strcmp_0(v5, "pip_enable_visionset_naked") )
    {
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive = 0;
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
LABEL_208:
      *(_WORD *)&LocalClientGlobals->pipViews[0].cvsData.transitory.remoteMissileCam = 0;
LABEL_209:
      CG_PIP_EnableNightVision((LocalClientNum_t)v4, -1.0);
      return;
    }
    if ( !strcmp_0(v5, "pip_enable_visionset_night") )
    {
      v217 = Cmd_ArgFloat(1);
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive = 0;
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&LocalClientGlobals->pipViews[0].cvsData.transitory.remoteMissileCam = 0;
      CG_PIP_EnableNightVision((LocalClientNum_t)v4, *(float *)&v217);
      return;
    }
    if ( !strcmp_0(v5, "pip_enable_visionset_missilecam") )
    {
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive = 0;
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&LocalClientGlobals->pipViews[0].cvsData.transitory.remoteMissileCam = 1;
      goto LABEL_209;
    }
    if ( !strcmp_0(v5, "pip_enable_visionset_thermal") )
    {
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive = 0;
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
      *(_WORD *)&LocalClientGlobals->pipViews[0].cvsData.transitory.remoteMissileCam = 256;
      goto LABEL_209;
    }
    if ( !strcmp_0(v5, "pip_enable_visionset_pain") )
    {
      v218 = Cmd_ArgFloat(1);
      CG_PIP_SetPainVision((LocalClientNum_t)v4, *(float *)&v218);
      goto LABEL_208;
    }
    if ( !strcmp_0(v5, "set_hud_dyn") )
    {
      v219 = Cmd_ArgInt(1);
      v220 = Cmd_Argv(2);
      *(double *)&_XMM0 = atof(v220);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      LocalClientGlobals->hudLightingState.forceAdditiveColorEnd.v[0] = *(float *)&_XMM1;
      v222 = Cmd_Argv(3);
      *(double *)&_XMM0 = atof(v222);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      LocalClientGlobals->hudLightingState.forceAdditiveColorEnd.v[1] = *(float *)&_XMM1;
      v224 = Cmd_Argv(4);
      *(double *)&_XMM0 = atof(v224);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      LocalClientGlobals->hudLightingState.forceAdditiveColorEnd.v[2] = *(float *)&_XMM1;
      LocalClientGlobals->hudLightingState.forceAdditiveColorStart.v[0] = LocalClientGlobals->hudLightingState.forceAdditiveColor.v[0];
      LocalClientGlobals->hudLightingState.forceAdditiveColorStart.v[1] = LocalClientGlobals->hudLightingState.forceAdditiveColor.v[1];
      LocalClientGlobals->hudLightingState.forceAdditiveColorStart.v[2] = LocalClientGlobals->hudLightingState.forceAdditiveColor.v[2];
      LocalClientGlobals->hudLightingState.forceAdditiveChangeTime = v219;
      LocalClientGlobals->hudLightingState.forceAdditiveChangeDuration = v219;
    }
    else if ( !strcmp_0(v5, "transient") )
    {
      v226 = Cmd_Argc();
      v227 = Cmd_Argv(1);
      if ( v226 > 2 )
        v7 = Cmd_ArgInt(2);
      if ( v226 > 3 )
        LODWORD(v9) = Cmd_ArgInt(3);
      if ( I_stricmp(v227, "load") )
      {
        if ( I_stricmp(v227, "pausegame") )
        {
          if ( I_stricmp(v227, "unload") )
          {
            if ( I_stricmp(v227, "unloadall") )
            {
              if ( I_stricmp(v227, "unload_level") )
              {
                if ( I_stricmp(v227, "sync") )
                {
                  if ( I_stricmp(v227, "setvis") )
                    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443174C0, 960i64, v227);
                  else
                    CL_TransientsWorld_SetVisibility(LOCAL_CLIENT_0, v7, (_DWORD)v9 != 0);
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
            CL_TransientsSP_QueueUnload(v7);
          }
        }
        else
        {
          CL_TransientsSP_PauseGameWaitFor(v7);
        }
      }
      else
      {
        CL_TransientsSP_QueueLoad(v7);
      }
    }
    else if ( !strcmp_0(v5, "preloadzones") )
    {
      if ( Cmd_Argc() < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1861, ASSERT_TYPE_ASSERT, "(Cmd_Argc() >= 2)", (const char *)&queryFormat, "Cmd_Argc() >= 2") )
        __debugbreak();
      memset_0(dest, 0, sizeof(dest));
      if ( Cmd_Argc() > 1 )
      {
        do
        {
          v228 = Cmd_Argv(v175);
          if ( DB_Zones_IsPreloadZoneName(v228) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1868, ASSERT_TYPE_ASSERT, "(!DB_Zones_IsPreloadZoneName( zoneName ))", "%s\n\t%s has already been preloaded!", "!DB_Zones_IsPreloadZoneName( zoneName )", v228) )
            __debugbreak();
          Com_Printf(14, "CLIENT: preloadzones %s\n", v228);
          Core_strcpy(&dest[64 * (__int64)(v175++ - 1)], 0x40ui64, v228);
        }
        while ( v175 < Cmd_Argc() );
      }
      CL_PreloadSP_ServerAskedForLoad((const char (*)[8][64])dest);
    }
    else
    {
      v229 = 0i64;
      while ( 1 )
      {
        v230 = v5[v229++];
        if ( v230 != aMayhem[v229 - 1] )
          break;
        if ( v229 == 7 )
        {
          v231 = Cmd_Argc();
          v232 = Cmd_Argv(1);
          if ( v231 > 2 )
            LODWORD(v9) = Cmd_ArgInt(2);
          if ( I_stricmp(v232, "play") )
          {
            if ( I_stricmp(v232, "pause") )
            {
              if ( I_stricmp(v232, "hide") )
              {
                if ( I_stricmp(v232, "show") )
                {
                  if ( I_stricmp(v232, "spawn") )
                  {
                    if ( I_stricmp(v232, "kill") )
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144317600, 961i64, v232);
                    else
                      Mayhem_KillInstance((scr_string_t)v9);
                  }
                  else
                  {
                    if ( v231 != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 1922, ASSERT_TYPE_ASSERT, "(argc == 10)", (const char *)&queryFormat, "argc == 10") )
                      __debugbreak();
                    v233 = Cmd_ArgInt(3);
                    v234 = Cmd_Argv(4);
                    *(double *)&_XMM0 = atof(v234);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    seed.v[0] = *(float *)&_XMM1;
                    v236 = Cmd_Argv(5);
                    *(double *)&_XMM0 = atof(v236);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    seed.v[1] = *(float *)&_XMM1;
                    v238 = Cmd_Argv(6);
                    *(double *)&_XMM0 = atof(v238);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    seed.v[2] = *(float *)&_XMM1;
                    v240 = Cmd_Argv(7);
                    *(double *)&_XMM0 = atof(v240);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    outOrigin.v[0] = *(float *)&_XMM1;
                    v242 = Cmd_Argv(8);
                    *(double *)&_XMM0 = atof(v242);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    outOrigin.v[1] = *(float *)&_XMM1;
                    v244 = Cmd_Argv(9);
                    *(double *)&_XMM0 = atof(v244);
                    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                    outOrigin.v[2] = *(float *)&_XMM1;
                    AnglesToQuat(&outOrigin, &quat);
                    Mayhem_SpawnInstance((scr_string_t)v9, v233, &seed, &quat);
                  }
                }
                else
                {
                  Mayhem_ShowInstance((scr_string_t)v9);
                }
              }
              else
              {
                Mayhem_HideInstance((scr_string_t)v9);
              }
            }
            else
            {
              Mayhem_PauseInstance((scr_string_t)v9);
            }
          }
          else
          {
            Mayhem_PlayInstance((scr_string_t)v9);
          }
          return;
        }
      }
      if ( !strcmp_0(v5, "set_cin_lerp_lb") )
      {
        v246 = Cmd_ArgInt(1);
        v247 = Cmd_ArgInt(2);
        v248 = Cmd_ArgInt(3);
        if ( v246 == 1 )
          v176 = 1;
        LocalClientGlobals->cinematicLetterboxInfo.wantedState = v176;
        LocalClientGlobals->cinematicLetterboxInfo.scaleTimer = v247;
        LocalClientGlobals->cinematicLetterboxInfo.scaleDuration = v247;
        LocalClientGlobals->cinematicLetterboxInfo.fadeTimer = v248;
        LocalClientGlobals->cinematicLetterboxInfo.fadeDuration = v248;
      }
      else if ( !strcmp_0(v5, "sfreeent") )
      {
        v249 = Cmd_ArgInt(1);
        SND_FreeEntityParamInfo(v249);
      }
      else
      {
        Com_PrintWarning(14, "Unknown client game command: %s\n", v5);
      }
    }
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
  cg_t *v24; 
  double FovDvarValue; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int i; 
  const char *v29; 
  Physics_WorldId v31; 
  Physics_WorldId j; 
  CgPlayer_Asm *v33; 
  CgPlayer_Asm *v34; 
  CgClientSideEffectsSystemSP *v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  bdRandom v42; 
  bdRandom v43; 
  __int64 v44; 
  RefdefView out; 

  v44 = -2i64;
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
        LODWORD(v38) = CgWeaponSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 606, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tCgWeaponSystem::ClearWeaponSystemCommon: Trying to clear weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgWeaponSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgWeaponSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
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
        LODWORD(v38) = (unsigned __int8)CgEventSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 300, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tCgEventSystem::ClearEventSystemCommon: Trying to clear event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgEventSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgEventSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
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
        LODWORD(v38) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 252, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tCgDrawSystem::ClearDrawSystemCommon: Trying to clear draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgDrawSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
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
        LODWORD(v38) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgCompassSystem *, _QWORD))CgCompassSystem::ms_compassSystemArray[v9]->~CgCompassSystem)(CgCompassSystem::ms_compassSystemArray[v9], 0i64);
      memset_0(CgCompassSystem::ms_compassSystemArray[v9], 0, 0x1A38ui64);
      CgCompassSystemSP::CgCompassSystemSP((CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v9], (const LocalClientNum_t)v8);
      if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
      {
        LODWORD(v37) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v37) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v9] )
      {
        LODWORD(v37) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v37) )
          __debugbreak();
      }
      CgCompassSystem::ResetCompassActorObfuscation(CgCompassSystem::ms_compassSystemArray[v9]);
      CG_SnapshotSP_ClearSnapshots((const LocalClientNum_t)v8);
      if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 368, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tCgEntitySystem::ClearEntitySystemCommon: Trying to clear entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 369, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgEntitySystem *, _QWORD))CgEntitySystem::ms_entitySystemArray[v9]->~CgEntitySystem)(CgEntitySystem::ms_entitySystemArray[v9], 0i64);
      memset_0(CgEntitySystem::ms_entitySystemArray[v9], 0, sizeof(CgEntitySystem));
      CgEntitySystemSP::CgEntitySystemSP((CgEntitySystemSP *)CgEntitySystem::ms_entitySystemArray[v9], (const LocalClientNum_t)v8);
      CgEntitySystem::ResetEntitySystemObufscation((const LocalClientNum_t)v8);
      if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgViewSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tCgViewSystem::ClearViewSystemCommon: Trying to clear view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgViewSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgViewSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
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
        LODWORD(v38) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 482, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tCgVehicleSystem::ClearVehicleSystemCommon: Trying to clear vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgVehicleSystem *, _QWORD))CgVehicleSystem::ms_vehicleSystemArray[v9]->~CgVehicleSystem)(CgVehicleSystem::ms_vehicleSystemArray[v9], 0i64);
      memset_0(CgVehicleSystem::ms_vehicleSystemArray[v9], 0, sizeof(CgVehicleSystem));
      CgVehicleSystemSP::CgVehicleSystemSP((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[v9], (const LocalClientNum_t)v8);
      CgVehicleSystem::TreadBoneAnimReset();
      CGMovingPlatformsSP::ClearMovingPlatformSystem();
      if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 147, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tCgTargetAssist::ClearInstanceCommon: Trying to clear target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgTargetAssist::ms_allocatedCount )
      {
        LODWORD(v37) = CgTargetAssist::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgTargetAssist *, _QWORD))CgTargetAssist::ms_instances[v9]->~BgTargetAssist)(CgTargetAssist::ms_instances[v9], 0i64);
      memset_0(CgTargetAssist::ms_instances[v9], 0, 0x338ui64);
      CgTargetAssistSP::CgTargetAssistSP((CgTargetAssistSP *)CgTargetAssist::ms_instances[v9], (const LocalClientNum_t)v8);
      CgAntiLag::ResetClientHistory((const LocalClientNum_t)v8);
      if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgPredictedEntitySystem::ClearSystemCommon: Trying to clear predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgPredictedEntitySystem::ms_allocatedCount )
      {
        LODWORD(v37) = CgPredictedEntitySystem::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 298, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      CgPredictedEntitySystem::Shutdown(CgPredictedEntitySystem::ms_systemsArray[v9]);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))CgPredictedEntitySystem::ms_systemsArray[v9]->~BgPredictedEntitySystem)(CgPredictedEntitySystem::ms_systemsArray[v9], 0i64);
      memset_0(CgPredictedEntitySystem::ms_systemsArray[v9], 0, sizeof(CgPredictedEntitySystem));
      CgPredictedEntitySystemSP::CgPredictedEntitySystemSP((CgPredictedEntitySystemSP *)CgPredictedEntitySystem::ms_systemsArray[v9], (const LocalClientNum_t)v8);
      if ( (_BYTE)CgBallistics::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgBallistics::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgBallistics::ClearSystemCommon: Trying to clear ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgBallistics::ms_allocatedCount )
      {
        LODWORD(v37) = CgBallistics::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 243, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      ((void (__fastcall *)(CgBallistics *, _QWORD))CgBallistics::ms_systemsArray[v9]->~BgBallistics<CgBallisticInstance>)(CgBallistics::ms_systemsArray[v9], 0i64);
      memset_0(CgBallistics::ms_systemsArray[v9], 0, sizeof(CgBallistics));
      CgBallisticsSP::CgBallisticsSP((CgBallisticsSP *)CgBallistics::ms_systemsArray[v9], (const LocalClientNum_t)v8);
      if ( (_BYTE)CgMissile::ms_allocatedType != HALF )
      {
        LODWORD(v38) = (unsigned __int8)CgMissile::ms_allocatedType;
        LODWORD(v37) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 350, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgMissile::ClearSystemCommon: Trying to clear missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v37, v38) )
          __debugbreak();
      }
      if ( v8 >= (unsigned int)CgMissile::ms_allocatedCount )
      {
        LODWORD(v37) = CgMissile::ms_allocatedCount;
        LODWORD(v36) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
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
      LODWORD(v37) = 2064;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v37) )
        __debugbreak();
    }
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( v22 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
    {
      LODWORD(v37) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v37) )
        __debugbreak();
    }
    ConfigString = CL_GetConfigString(v22);
    CG_ServerCmd_RegisterServerMaterial((LocalClientNum_t)v21, v22 - 2064, ConfigString);
    ++v22;
  }
  while ( v22 - 2064 < 0x15E );
  CG_ServerCmdSP_UpdateServerMaterialsTouch();
  v24 = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
  v24->cinematicLetterboxInfo.currentState = CINEMATIC_LETTER_BOX_OFF;
  v24->cinematicLetterboxInfo.wantedState = CINEMATIC_LETTER_BOX_OFF;
  v24->loaded = restart;
  v24->lastHealthLerpDelay = 1;
  v24->baseFovLerpInfo.targetBaseFov = 65.0;
  *(_QWORD *)&v24->baseFovLerpInfo.timer = 0i64;
  FovDvarValue = CG_View_GetFovDvarValue((const LocalClientNum_t)v21);
  v24->fovLerpBase = *(float *)&FovDvarValue;
  v24->turretFov = *(float *)&FovDvarValue;
  memset_0(&v24->viewModelPose, 0, sizeof(v24->viewModelPose));
  bdRandom::bdRandom(&v42);
  v26 = bdRandom::nextUInt(&v42) % 0x22;
  bdRandom::~bdRandom(&v42);
  bdRandom::bdRandom(&v43);
  v27 = bdRandom::nextUInt(&v43) % 0x22;
  bdRandom::~bdRandom(&v43);
  CG_ResetPoseZero(&v24->viewModelPose, v27, v26);
  v24->viewModelPose.eType = 29;
  v24->prevViewIndex = -1;
  *(_WORD *)&v24->m_useSellShock = 1;
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
  v29 = CL_GetConfigString(4078);
  *(double *)&_XMM0 = atof(v29);
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
    v31 = 3 * v21 + 4;
    for ( j = 3 * v21 + 2; j <= v31; ++j )
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
      v33 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v21);
      BgPlayer_Asm::Shutdown(v33, 0);
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
    v34 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v21);
    BgPlayer_Asm::Init(v34, 0, 0);
  }
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    LODWORD(v38) = 1;
    LODWORD(v37) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v37, v38, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v21 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v37) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v21] )
  {
    LODWORD(v37) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v37) )
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
    LODWORD(v39) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(v38) = 1;
    LODWORD(v37) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v37, v38, v39) )
      __debugbreak();
  }
  if ( (unsigned int)v21 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v37) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v36) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v21] )
  {
    LODWORD(v37) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v37) )
      __debugbreak();
  }
  v35 = (CgClientSideEffectsSystemSP *)CgClientSideEffectsSystem::ms_cseSystemArray[v21];
  CgClientSideEffectsSystem::Shutdown(v35);
  CgClientSideEffectsSystemSP::Start(v35, !savegame);
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
  const char *v7; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v9; 
  int EquippedWeaponIndex; 
  __int64 v11; 
  bool v12; 
  const char *v13; 
  unsigned int v14; 
  int v15; 
  const char *v16; 
  ClConfigStringsSP *ClConfigStringsSP; 
  int v18; 
  int v19; 
  int v20; 
  unsigned __int16 v21; 
  int v22; 
  CgSoundSystem *v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  int v27; 
  CgSoundSystem *SoundSystem; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  int ControllerFromClient; 
  OnlineProgression *Instance; 
  int v36; 
  int v37; 
  int v38; 
  __int16 pitch; 
  int v40; 
  __int16 yaw; 
  int v42; 
  __int16 roll; 
  int v44; 
  double v45; 
  float v46; 
  double v47; 
  float v48; 
  double v49; 
  int v50; 
  __int16 freqPitch; 
  int v52; 
  __int16 freqYaw; 
  int v54; 
  __int16 freqRoll; 
  double v56; 
  double v57; 
  double v58; 
  int v59; 
  __int16 v60; 
  int v61; 
  __int16 v62; 
  int v63; 
  __int16 v64; 
  int v65; 
  double v66; 
  float v67; 
  double v68; 
  float v69; 
  double v70; 
  int v71; 
  __int16 v72; 
  int v73; 
  __int16 v74; 
  int v75; 
  __int16 v76; 
  Weapon result; 
  Weapon v78; 
  vec3_t src; 
  Weapon r_weapon; 
  char hudElemString[1024]; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_servercmds_sp.cpp", 938, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_ServerCmd_SingleCharacterCmd(localClientNum, cmd) )
  {
    switch ( cmd )
    {
      case '2':
        v33 = Cmd_Argv(1);
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        Live_GiveAchievement(ControllerFromClient, v33);
        Instance = OnlineProgression::GetInstance();
        v36 = CL_Mgr_GetControllerFromClient(localClientNum);
        OnlineProgression::CheckSinglePlayerRewards(Instance, v36);
        break;
      case '8':
        v37 = Cmd_ArgInt(1);
        v38 = Cmd_ArgInt(2);
        pitch = truncate_cast<short,int>(v38);
        v40 = Cmd_ArgInt(3);
        yaw = truncate_cast<short,int>(v40);
        v42 = Cmd_ArgInt(4);
        roll = truncate_cast<short,int>(v42);
        v44 = Cmd_ArgInt(5);
        v45 = Cmd_ArgFloat(6);
        v46 = *(float *)&v45;
        v47 = Cmd_ArgFloat(7);
        v48 = *(float *)&v47;
        v49 = Cmd_ArgFloat(8);
        v50 = Cmd_ArgInt(9);
        freqPitch = truncate_cast<short,int>(v50);
        v52 = Cmd_ArgInt(10);
        freqYaw = truncate_cast<short,int>(v52);
        v54 = Cmd_ArgInt(11);
        freqRoll = truncate_cast<short,int>(v54);
        CG_StartShakeCameraWithControls(localClientNum, v44, v37, &vec3_origin, *(const float *)&v49, pitch, yaw, roll, freqPitch, freqYaw, freqRoll, v46, v48, 0);
        break;
      case '9':
        v56 = Cmd_ArgFloat(1);
        src.v[0] = *(float *)&v56;
        v57 = Cmd_ArgFloat(2);
        src.v[1] = *(float *)&v57;
        v58 = Cmd_ArgFloat(3);
        src.v[2] = *(float *)&v58;
        v59 = Cmd_ArgInt(4);
        v60 = truncate_cast<short,int>(v59);
        v61 = Cmd_ArgInt(5);
        v62 = truncate_cast<short,int>(v61);
        v63 = Cmd_ArgInt(6);
        v64 = truncate_cast<short,int>(v63);
        v65 = Cmd_ArgInt(7);
        v66 = Cmd_ArgFloat(8);
        v67 = *(float *)&v66;
        v68 = Cmd_ArgFloat(9);
        v69 = *(float *)&v68;
        v70 = Cmd_ArgFloat(10);
        v71 = Cmd_ArgInt(11);
        v72 = truncate_cast<short,int>(v71);
        v73 = Cmd_ArgInt(12);
        v74 = truncate_cast<short,int>(v73);
        v75 = Cmd_ArgInt(13);
        v76 = truncate_cast<short,int>(v75);
        CG_StartShakeCameraWithControls(localClientNum, v65, 2047, &src, *(const float *)&v70, v60, v62, v64, v72, v74, v76, v67, v69, 0);
        break;
      case 'a':
        v7 = Cmd_Argv(1);
        p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
        r_weapon = *BG_ConvertWeaponFromHexString(&result, v7);
        v9 = CgWeaponMap::GetInstance(localClientNum);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v9, &LocalClientGlobals->predictedPlayerState, &r_weapon);
        v12 = EquippedWeaponIndex >= 0 && (v11 = EquippedWeaponIndex, (playerState_s *)((char *)p_predictedPlayerState + v11 * 16) != (playerState_s *)-1540i64) && p_predictedPlayerState->weapEquippedData[v11].inAltMode;
        CG_SelectWeapon(localClientNum, &r_weapon, v12);
        break;
      case 'd':
        Cmd_EndTokenizedString();
        Cmd_TokenizeStringWithLimit(str, 3);
        v14 = Cmd_ArgInt(1);
        v15 = v14;
        if ( v14 >= 0x1817 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EABA0, 959i64, v14);
        v16 = Cmd_Argv(2);
        ClConfigStringsSP = ClConfigStringsSP::GetClConfigStringsSP();
        ClConfigStringsSP::ConfigStringModified(ClConfigStringsSP, localClientNum, v15, v16);
        break;
      case 'e':
        v29 = Cmd_Argv(1);
        v30 = SEH_LocalizeTextMessage(v29, "server print", LOCMSG_SAFE);
        Com_Printf(0, "%s\n", v30);
        break;
      case 'f':
        v31 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v31, "game message", hudElemString, 1024);
        CG_Utils_GameMessage(localClientNum, hudElemString, 0);
        break;
      case 'g':
        v32 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v32, "bold game message", hudElemString, 1024);
        CG_Utils_BoldGameMessage(localClientNum, hudElemString, 0);
        break;
      case 'h':
        if ( Cmd_Argc() == 2 )
        {
          v26 = Cmd_ArgInt(1);
          v27 = v26;
          if ( v26 - 1 > 0x1FF )
          {
            Com_PrintError(9, "ERROR: LocalSoundStop() called with index %i (should be in range[1,%i])\n", v26, 512i64);
          }
          else
          {
            SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
            CgSoundSystem::StopClientSoundAliasByName(SoundSystem, v27);
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: LocalSoundStop(), should be called with 2 arguments.\n");
        }
        break;
      case 'n':
        v18 = Cmd_Argc();
        v19 = v18;
        if ( v18 >= 2 )
        {
          v20 = Cmd_ArgInt(1);
          v21 = truncate_cast<unsigned short,int>(v20);
          v22 = v21;
          if ( (unsigned __int16)(v21 - 1) > 0x1FFu )
          {
            Com_PrintError(9, "ERROR: LocalSound() called with index %i (should be in range[1,%i])\n", v21, 512i64);
          }
          else
          {
            v23 = CgSoundSystem::GetSoundSystem(localClientNum);
            v24 = CgSoundSystem::PlayClientSoundAliasByName(v23, v22);
            if ( v19 > 2 )
            {
              v25 = Cmd_ArgInt(2);
              if ( v24 )
                SND_AddSoundDoneNotify(v24, v25, v22);
              else
                CG_Utils_ScriptNotifySoundDone(v25, v22);
            }
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: LocalSound() called with %i args (should be >= 2)\n", (unsigned int)v18);
        }
        break;
      case 'w':
        v13 = Cmd_Argv(1);
        r_weapon = *BG_ConvertWeaponFromHexString(&v78, v13);
        CG_SetEquippedOffHand(localClientNum, &r_weapon);
        break;
      case 'z':
        LocalClientGlobals->swimModeIntent[0] = (Cmd_ArgInt(1) == 0) + 1;
        break;
      default:
        Com_PrintWarning(14, "CG_DispatchServerCommand_Unified: Unknown command '%c'\n", (unsigned int)cmd);
        break;
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

