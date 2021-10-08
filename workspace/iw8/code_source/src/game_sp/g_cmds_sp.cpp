/*
==============
Cmd_Echo_f
==============
*/

void Cmd_Echo_f(void)
{
  ?Cmd_Echo_f@@YAXXZ();
}

/*
==============
G_CmdSP_ClientCommand
==============
*/

void __fastcall G_CmdSP_ClientCommand(int clientNum, const char *s)
{
  ?G_CmdSP_ClientCommand@@YAXHPEBD@Z(clientNum, s);
}

/*
==============
Cmd_Echo_f
==============
*/
void Cmd_Echo_f(void)
{
  int i; 
  const char *v1; 

  for ( i = 1; i < SV_Cmd_Argc(); ++i )
  {
    v1 = SV_Cmd_Argv(i);
    Com_Printf(0, "^3%s ", v1);
  }
  Com_Printf(0, "\n");
  if ( SV_Demo_IsRecording() )
    Con_CloseConsole(LOCAL_CLIENT_0);
}

/*
==============
Cmd_JumpToNode_f
==============
*/
void Cmd_JumpToNode_f(gentity_s *ent)
{
  unsigned int v4; 
  SvClient *v5; 
  unsigned int v6; 
  SvClient *v7; 
  int v8; 
  pathnode_t *v10; 
  unsigned int v12; 
  const char *v13; 
  unsigned int EntityIndex; 
  SvClient *CommonClient; 
  __int64 v16; 
  __int64 v17; 
  vec3_t pos; 
  char buffer[1024]; 

  if ( G_Cmds_AreCheatsOk(ent) )
  {
    if ( SV_Cmd_Argc() == 2 )
    {
      SV_Cmd_ArgvBuffer(1, buffer, 0x400ui64);
      v8 = atoi(buffer);
      if ( v8 >= 0 && v8 < Path_NodeCount() && Path_NodeValid(v8) )
      {
        __asm { vmovaps [rsp+478h+var_18], xmm6 }
        Stream_ImageRecord_Disable("jumptonode");
        __asm { vxorps  xmm6, xmm6, xmm6 }
        v10 = Path_ConvertIndexToNode(v8);
        __asm { vmovss  [rsp+478h+var_448], xmm6 }
        *(double *)&_XMM0 = pathnode_t::GetAngle(v10);
        __asm
        {
          vmovss  [rsp+478h+var_444], xmm0
          vmovss  dword ptr [rsp+478h+var_440], xmm6
        }
        pathnode_t::GetPos(v10, &pos);
        __asm { vmovaps xmm6, [rsp+478h+var_18] }
        if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem", v16, v17) )
          __debugbreak();
        GClientSystem::ms_gClientSystem->TeleportPlayer(GClientSystem::ms_gClientSystem, ent, &pos, (const vec3_t *)&v16);
      }
      else
      {
        v12 = Path_NodeCount();
        v13 = j_va(aPrint, v12);
        EntityIndex = G_GetEntityIndex(ent);
        if ( EntityIndex == -1 )
        {
          SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v13);
        }
        else
        {
          CommonClient = SvClient::GetCommonClient(EntityIndex);
          CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, v13);
        }
      }
    }
    else
    {
      v6 = G_GetEntityIndex(ent);
      if ( v6 == -1 )
      {
        SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, aPrintGameUsage_0);
      }
      else
      {
        v7 = SvClient::GetCommonClient(v6);
        v7->SendServerCommand(v7, SV_CMD_CAN_IGNORE, aPrintGameUsage_0);
      }
    }
  }
  else
  {
    v4 = G_GetEntityIndex(ent);
    if ( v4 == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, "print \"GAME/CHEATSNOTENABLED\"");
    }
    else
    {
      v5 = SvClient::GetCommonClient(v4);
      v5->SendServerCommand(v5, SV_CMD_CAN_IGNORE, "print \"GAME/CHEATSNOTENABLED\"");
    }
  }
}

/*
==============
G_CmdSP_ClientCommand
==============
*/
void G_CmdSP_ClientCommand(int clientNum, const char *s)
{
  int v3; 
  gentity_s *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  __int16 v24; 
  gentity_s *v25; 
  unsigned __int16 index; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  char v36; 
  __int64 v37; 
  char v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  int v52; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  int v58; 
  int v59; 
  __int64 v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  int v64; 
  int v65; 
  int v66; 
  __int64 v67; 
  __int64 v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  int v72; 
  int v73; 
  __int64 v74; 
  __int64 v75; 
  int v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  int v80; 
  __int64 v81; 
  __int64 v82; 
  int v83; 
  __int64 v84; 
  int v85; 
  int v86; 
  int v87; 
  __int64 v88; 
  __int64 v89; 
  int v90; 
  __int64 v91; 
  int v92; 
  int v93; 
  int v94; 
  const dvar_t *v95; 
  gclient_s *client; 
  __int64 v97; 
  __int64 v98; 
  int v99; 
  __int64 v100; 
  int v101; 
  int v102; 
  int v103; 
  __int64 v104; 
  __int64 v105; 
  int v106; 
  __int64 v107; 
  int v108; 
  int v109; 
  int v110; 
  __int64 v111; 
  __int64 v112; 
  int v113; 
  __int64 v114; 
  int v115; 
  int v116; 
  int v117; 
  __int64 v118; 
  __int64 v119; 
  int v120; 
  __int64 v121; 
  int v122; 
  int v123; 
  int v124; 
  __int64 v125; 
  __int64 v126; 
  int v127; 
  __int64 v128; 
  int v129; 
  int v130; 
  int v131; 
  __int64 v132; 
  __int64 v133; 
  int v134; 
  __int64 v135; 
  int v136; 
  int v137; 
  int v138; 
  const char *v139; 
  __int64 v140; 
  __int64 v141; 
  int v142; 
  __int64 v143; 
  int v144; 
  int v145; 
  int v146; 
  __int64 v147; 
  __int64 v148; 
  int v149; 
  __int64 v150; 
  int v151; 
  int v152; 
  int v153; 
  __int64 v154; 
  __int64 v155; 
  int v156; 
  __int64 v157; 
  int v158; 
  int v159; 
  int v160; 
  __int64 v161; 
  __int64 v162; 
  int v163; 
  __int64 v164; 
  int v165; 
  int v166; 
  int v167; 
  __int64 v168; 
  __int64 v169; 
  int v170; 
  __int64 v171; 
  int v172; 
  int v173; 
  int v174; 
  __int64 v175; 
  __int64 v176; 
  int v177; 
  __int64 v178; 
  int v179; 
  int v180; 
  int v181; 
  __int64 v182; 
  __int64 v183; 
  int v184; 
  __int64 v185; 
  int v186; 
  int v187; 
  int v188; 
  __int64 v189; 
  __int64 v190; 
  int v191; 
  __int64 v192; 
  int v193; 
  int v194; 
  int v195; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  gentity_s *v198; 
  __int64 v199; 
  __int64 v200; 
  int v201; 
  __int64 v202; 
  int v203; 
  int v204; 
  int v205; 
  __int64 v206; 
  __int64 v207; 
  int v208; 
  __int64 v209; 
  int v210; 
  int v211; 
  int v212; 
  __int64 v213; 
  __int64 v214; 
  int v215; 
  __int64 v216; 
  int v217; 
  int v218; 
  int v219; 
  __int64 v220; 
  __int64 v221; 
  int v222; 
  __int64 v223; 
  int v224; 
  int v225; 
  int v226; 
  __int64 v227; 
  __int64 v228; 
  int v229; 
  __int64 v230; 
  int v231; 
  int v232; 
  int v233; 
  int v234; 
  __int64 v235; 
  __int64 v236; 
  int v237; 
  int v238; 
  const char *v239; 
  __int64 meansOfDeath; 
  tmat43_t<vec3_t> result; 
  char buffer[1024]; 
  char v243[256]; 

  v3 = 1;
  v5 = &g_entities[clientNum];
  g_allowRemoveCorpse = 1;
  if ( !v5->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_cmds_sp.cpp", 263, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  SV_Cmd_TokenizeString(s);
  SV_Cmd_ArgvBuffer(0, buffer, 0x400ui64);
  v6 = 0i64;
  v7 = 0x7FFFFFFFi64;
  v8 = 0i64;
  v9 = 0x7FFFFFFFi64;
  while ( 1 )
  {
    v10 = (unsigned __int8)buffer[v8];
    v11 = v9;
    v12 = (unsigned __int8)aN_2[v8++];
    --v9;
    if ( !v11 )
    {
LABEL_13:
      Cmd_CheckNetNotify_f(clientNum);
      goto LABEL_14;
    }
    if ( v10 != v12 )
    {
      v13 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v13 = v10;
      v10 = v13;
      v14 = v12 + 32;
      if ( (unsigned int)(v12 - 65) > 0x19 )
        v14 = v12;
      if ( v10 != v14 )
        break;
    }
    if ( !v10 )
      goto LABEL_13;
  }
  v15 = 0x7FFFFFFFi64;
  v16 = 0i64;
  while ( 1 )
  {
    v17 = (unsigned __int8)buffer[v16];
    v18 = v15;
    v19 = (unsigned __int8)aSl[v16++];
    --v15;
    if ( !v18 )
    {
LABEL_24:
      if ( SV_Cmd_Argc() != 3 )
      {
        LODWORD(meansOfDeath) = SV_Cmd_Argc();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_cmds_sp.cpp", 43, ASSERT_TYPE_ASSERT, "( ( SV_Cmd_Argc() == 3 ) )", "( SV_Cmd_Argc() ) = %i", meansOfDeath) )
          __debugbreak();
      }
      SV_Cmd_ArgvBuffer(1, v243, 0x100ui64);
      v22 = atoi(v243);
      v23 = v22;
      if ( (unsigned int)v22 >= 0x800 )
      {
        LODWORD(meansOfDeath) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_cmds_sp.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", meansOfDeath, 2048) )
          __debugbreak();
      }
      SV_Cmd_ArgvBuffer(2, v243, 0x100ui64);
      v24 = atoi(v243);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_cmds_sp.cpp", 51, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
        __debugbreak();
      v25 = &level.gentities[v23];
      index = v25->snd_wait.index;
      if ( index == v24 && v25->snd_wait.notifyString )
      {
        if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_cmds_sp.cpp", 63, ASSERT_TYPE_ASSERT, "(ent->snd_wait.index)", (const char *)&queryFormat, "ent->snd_wait.index") )
          __debugbreak();
        GScr_Notify(v25, v25->snd_wait.notifyString, 0);
        Scr_SetString((scr_string_t *)&v25->snd_wait, (scr_string_t)0);
      }
      goto LABEL_14;
    }
    if ( v17 != v19 )
    {
      v20 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v20 = v17;
      v17 = v20;
      v21 = v19 + 32;
      if ( (unsigned int)(v19 - 65) > 0x19 )
        v21 = v19;
      if ( v17 != v21 )
        break;
    }
    if ( !v17 )
      goto LABEL_24;
  }
  v27 = 0x7FFFFFFFi64;
  v28 = 0i64;
  while ( 1 )
  {
    v29 = (unsigned __int8)buffer[v28];
    v30 = v27;
    v31 = (unsigned __int8)aRemovecorpse[v28];
    --v27;
    ++v28;
    if ( !v30 )
    {
LABEL_48:
      G_GetFreeActorCorpseIndex(0);
      goto LABEL_14;
    }
    if ( v29 != v31 )
    {
      v32 = v29 + 32;
      if ( (unsigned int)(v29 - 65) > 0x19 )
        v32 = v29;
      v29 = v32;
      v33 = v31 + 32;
      if ( (unsigned int)(v31 - 65) > 0x19 )
        v33 = v31;
      if ( v29 != v33 )
        break;
    }
    if ( !v29 )
      goto LABEL_48;
  }
  v34 = 0x7FFFFFFFi64;
  v35 = 0i64;
  while ( 1 )
  {
    v36 = buffer[v35];
    v37 = v34;
    v38 = aLui_0[v35++];
    --v34;
    if ( !v37 )
    {
LABEL_53:
      G_Cmds_LuiNotifyServer_StrChannel_f(v5);
      goto LABEL_14;
    }
    if ( v36 != v38 )
      break;
    if ( !v36 )
      goto LABEL_53;
  }
  v39 = 0x7FFFFFFFi64;
  v40 = 0i64;
  while ( 1 )
  {
    v41 = (unsigned __int8)buffer[v40];
    v42 = v39;
    v43 = (unsigned __int8)aGive[v40++];
    --v39;
    if ( !v42 )
    {
LABEL_63:
      Cmd_Give_f(v5);
      goto LABEL_14;
    }
    if ( v41 != v43 )
    {
      v44 = v41 + 32;
      if ( (unsigned int)(v41 - 65) > 0x19 )
        v44 = v41;
      v41 = v44;
      v45 = v43 + 32;
      if ( (unsigned int)(v43 - 65) > 0x19 )
        v45 = v43;
      if ( v41 != v45 )
        break;
    }
    if ( !v41 )
      goto LABEL_63;
  }
  v46 = 0x7FFFFFFFi64;
  v47 = 0i64;
  while ( 1 )
  {
    v48 = (unsigned __int8)buffer[v47];
    v49 = v46;
    v50 = (unsigned __int8)aTake_0[v47++];
    --v46;
    if ( !v49 )
    {
LABEL_73:
      Cmd_Take_f(v5);
      goto LABEL_14;
    }
    if ( v48 != v50 )
    {
      v51 = v48 + 32;
      if ( (unsigned int)(v48 - 65) > 0x19 )
        v51 = v48;
      v48 = v51;
      v52 = v50 + 32;
      if ( (unsigned int)(v50 - 65) > 0x19 )
        v52 = v50;
      if ( v48 != v52 )
        break;
    }
    if ( !v48 )
      goto LABEL_73;
  }
  v53 = 0x7FFFFFFFi64;
  v54 = 0i64;
  while ( 1 )
  {
    v55 = (unsigned __int8)buffer[v54];
    v56 = v53;
    v57 = (unsigned __int8)aGod[v54++];
    --v53;
    if ( !v56 )
    {
LABEL_83:
      Cmd_God_f(v5);
      goto LABEL_14;
    }
    if ( v55 != v57 )
    {
      v58 = v55 + 32;
      if ( (unsigned int)(v55 - 65) > 0x19 )
        v58 = v55;
      v55 = v58;
      v59 = v57 + 32;
      if ( (unsigned int)(v57 - 65) > 0x19 )
        v59 = v57;
      if ( v55 != v59 )
        break;
    }
    if ( !v55 )
      goto LABEL_83;
  }
  v60 = 0x7FFFFFFFi64;
  v61 = 0i64;
  while ( 1 )
  {
    v62 = (unsigned __int8)buffer[v61];
    v63 = v60;
    v64 = (unsigned __int8)aDemigod[v61++];
    --v60;
    if ( !v63 )
    {
LABEL_93:
      Cmd_DemiGod_f(v5);
      goto LABEL_14;
    }
    if ( v62 != v64 )
    {
      v65 = v62 + 32;
      if ( (unsigned int)(v62 - 65) > 0x19 )
        v65 = v62;
      v62 = v65;
      v66 = v64 + 32;
      if ( (unsigned int)(v64 - 65) > 0x19 )
        v66 = v64;
      if ( v62 != v66 )
        break;
    }
    if ( !v62 )
      goto LABEL_93;
  }
  v67 = 0x7FFFFFFFi64;
  v68 = 0i64;
  while ( 1 )
  {
    v69 = (unsigned __int8)buffer[v68];
    v70 = v67;
    v71 = (unsigned __int8)aNotarget[v68++];
    --v67;
    if ( !v70 )
    {
LABEL_103:
      Cmd_Notarget_f(v5);
      goto LABEL_14;
    }
    if ( v69 != v71 )
    {
      v72 = v69 + 32;
      if ( (unsigned int)(v69 - 65) > 0x19 )
        v72 = v69;
      v69 = v72;
      v73 = v71 + 32;
      if ( (unsigned int)(v71 - 65) > 0x19 )
        v73 = v71;
      if ( v69 != v73 )
        break;
    }
    if ( !v69 )
      goto LABEL_103;
  }
  v74 = 0x7FFFFFFFi64;
  v75 = 0i64;
  while ( 1 )
  {
    v76 = (unsigned __int8)buffer[v75];
    v77 = v74;
    v78 = (unsigned __int8)aNoclip_1[v75++];
    --v74;
    if ( !v77 )
    {
LABEL_113:
      Cmd_Noclip_f(v5);
      goto LABEL_14;
    }
    if ( v76 != v78 )
    {
      v79 = v76 + 32;
      if ( (unsigned int)(v76 - 65) > 0x19 )
        v79 = v76;
      v76 = v79;
      v80 = v78 + 32;
      if ( (unsigned int)(v78 - 65) > 0x19 )
        v80 = v78;
      if ( v76 != v80 )
        break;
    }
    if ( !v76 )
      goto LABEL_113;
  }
  v81 = 0x7FFFFFFFi64;
  v82 = 0i64;
  while ( 1 )
  {
    v83 = (unsigned __int8)buffer[v82];
    v84 = v81;
    v85 = (unsigned __int8)aUfo[v82++];
    --v81;
    if ( !v84 )
    {
LABEL_123:
      Cmd_UFO_f(v5, 0);
      goto LABEL_14;
    }
    if ( v83 != v85 )
    {
      v86 = v83 + 32;
      if ( (unsigned int)(v83 - 65) > 0x19 )
        v86 = v83;
      v83 = v86;
      v87 = v85 + 32;
      if ( (unsigned int)(v85 - 65) > 0x19 )
        v87 = v85;
      if ( v83 != v87 )
        break;
    }
    if ( !v83 )
      goto LABEL_123;
  }
  v88 = 0x7FFFFFFFi64;
  v89 = 0i64;
  while ( 1 )
  {
    v90 = (unsigned __int8)buffer[v89];
    v91 = v88;
    v92 = (unsigned __int8)aKill[v89++];
    --v88;
    if ( !v91 )
    {
LABEL_133:
      v95 = DVARINT_reloading;
      if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      if ( !v95->current.integer )
      {
        v5->flags.m_flags[0] &= 0xFFFFFFFC;
        client = v5->client;
        v5->health = 0;
        client->ps.stats[0] = 0;
        G_CombatSP_PlayerDie(v5, v5, v5, 100000, 0, 14, &NULL_WEAPON, 0, NULL, HITLOC_NONE, 0);
      }
      goto LABEL_14;
    }
    if ( v90 != v92 )
    {
      v93 = v90 + 32;
      if ( (unsigned int)(v90 - 65) > 0x19 )
        v93 = v90;
      v90 = v93;
      v94 = v92 + 32;
      if ( (unsigned int)(v92 - 65) > 0x19 )
        v94 = v92;
      if ( v90 != v94 )
        break;
    }
    if ( !v90 )
      goto LABEL_133;
  }
  v97 = 0x7FFFFFFFi64;
  v98 = 0i64;
  while ( 1 )
  {
    v99 = (unsigned __int8)buffer[v98];
    v100 = v97;
    v101 = (unsigned __int8)aSetviewpos[v98++];
    --v97;
    if ( !v100 )
    {
LABEL_147:
      Cmd_SetViewpos_f(v5);
      goto LABEL_14;
    }
    if ( v99 != v101 )
    {
      v102 = v99 + 32;
      if ( (unsigned int)(v99 - 65) > 0x19 )
        v102 = v99;
      v99 = v102;
      v103 = v101 + 32;
      if ( (unsigned int)(v101 - 65) > 0x19 )
        v103 = v101;
      if ( v99 != v103 )
        break;
    }
    if ( !v99 )
      goto LABEL_147;
  }
  v104 = 0x7FFFFFFFi64;
  v105 = 0i64;
  while ( 1 )
  {
    v106 = (unsigned __int8)buffer[v105];
    v107 = v104;
    v108 = (unsigned __int8)aWhere[v105++];
    --v104;
    if ( !v107 )
    {
LABEL_157:
      Cmd_Where_f(v5);
      goto LABEL_14;
    }
    if ( v106 != v108 )
    {
      v109 = v106 + 32;
      if ( (unsigned int)(v106 - 65) > 0x19 )
        v109 = v106;
      v106 = v109;
      v110 = v108 + 32;
      if ( (unsigned int)(v108 - 65) > 0x19 )
        v110 = v108;
      if ( v106 != v110 )
        break;
    }
    if ( !v106 )
      goto LABEL_157;
  }
  v111 = 0x7FFFFFFFi64;
  v112 = 0i64;
  while ( 1 )
  {
    v113 = (unsigned __int8)buffer[v112];
    v114 = v111;
    v115 = (unsigned __int8)aSetsv[v112++];
    --v111;
    if ( !v114 )
    {
LABEL_167:
      Cmd_Dvar_SetSv(v5);
      goto LABEL_14;
    }
    if ( v113 != v115 )
    {
      v116 = v113 + 32;
      if ( (unsigned int)(v113 - 65) > 0x19 )
        v116 = v113;
      v113 = v116;
      v117 = v115 + 32;
      if ( (unsigned int)(v115 - 65) > 0x19 )
        v117 = v115;
      if ( v113 != v117 )
        break;
    }
    if ( !v113 )
      goto LABEL_167;
  }
  v118 = 0x7FFFFFFFi64;
  v119 = 0i64;
  while ( 1 )
  {
    v120 = (unsigned __int8)buffer[v119];
    v121 = v118;
    v122 = (unsigned __int8)aJumptonode[v119++];
    --v118;
    if ( !v121 )
    {
LABEL_177:
      Cmd_JumpToNode_f(v5);
      goto LABEL_14;
    }
    if ( v120 != v122 )
    {
      v123 = v120 + 32;
      if ( (unsigned int)(v120 - 65) > 0x19 )
        v123 = v120;
      v120 = v123;
      v124 = v122 + 32;
      if ( (unsigned int)(v122 - 65) > 0x19 )
        v124 = v122;
      if ( v120 != v124 )
        break;
    }
    if ( !v120 )
      goto LABEL_177;
  }
  v125 = 0x7FFFFFFFi64;
  v126 = 0i64;
  do
  {
    v127 = (unsigned __int8)buffer[v126];
    v128 = v125;
    v129 = (unsigned __int8)aAi_1[v126++];
    --v125;
    if ( !v128 )
      break;
    if ( v127 != v129 )
    {
      v130 = v127 + 32;
      if ( (unsigned int)(v127 - 65) > 0x19 )
        v130 = v127;
      v127 = v130;
      v131 = v129 + 32;
      if ( (unsigned int)(v129 - 65) > 0x19 )
        v131 = v129;
      if ( v127 != v131 )
        goto LABEL_189;
    }
  }
  while ( v127 );
  if ( G_Cmds_AreCheatsOk(v5) )
  {
    Cmd_AI_f();
    goto LABEL_14;
  }
LABEL_189:
  v132 = 0x7FFFFFFFi64;
  v133 = 0i64;
  while ( 1 )
  {
    v134 = (unsigned __int8)buffer[v133];
    v135 = v132;
    v136 = (unsigned __int8)aEcho[v133++];
    --v132;
    if ( !v135 )
    {
LABEL_198:
      if ( SV_Cmd_Argc() > 1 )
      {
        do
        {
          v139 = SV_Cmd_Argv(v3);
          Com_Printf(0, "^3%s ", v139);
          ++v3;
        }
        while ( v3 < SV_Cmd_Argc() );
      }
      Com_Printf(0, "\n");
      if ( SV_Demo_IsRecording() )
        Con_CloseConsole(LOCAL_CLIENT_0);
      goto LABEL_14;
    }
    if ( v134 != v136 )
    {
      v137 = v134 + 32;
      if ( (unsigned int)(v134 - 65) > 0x19 )
        v137 = v134;
      v134 = v137;
      v138 = v136 + 32;
      if ( (unsigned int)(v136 - 65) > 0x19 )
        v138 = v136;
      if ( v134 != v138 )
        break;
    }
    if ( !v134 )
      goto LABEL_198;
  }
  v140 = 0x7FFFFFFFi64;
  v141 = 0i64;
  while ( 1 )
  {
    v142 = (unsigned __int8)buffer[v141];
    v143 = v140;
    v144 = (unsigned __int8)aUfoViewmodel[v141++];
    --v140;
    if ( !v143 )
    {
LABEL_211:
      Cmd_UFO_Viewmodel_f(v5);
      goto LABEL_14;
    }
    if ( v142 != v144 )
    {
      v145 = v142 + 32;
      if ( (unsigned int)(v142 - 65) > 0x19 )
        v145 = v142;
      v142 = v145;
      v146 = v144 + 32;
      if ( (unsigned int)(v144 - 65) > 0x19 )
        v146 = v144;
      if ( v142 != v146 )
        break;
    }
    if ( !v142 )
      goto LABEL_211;
  }
  v147 = 0x7FFFFFFFi64;
  v148 = 0i64;
  while ( 1 )
  {
    v149 = (unsigned __int8)buffer[v148];
    v150 = v147;
    v151 = (unsigned __int8)aDumpentinfo[v148++];
    --v147;
    if ( !v150 )
    {
LABEL_221:
      G_Debug_PrintEntityDebugInfoToConsole(0, clientNum);
      goto LABEL_14;
    }
    if ( v149 != v151 )
    {
      v152 = v149 + 32;
      if ( (unsigned int)(v149 - 65) > 0x19 )
        v152 = v149;
      v149 = v152;
      v153 = v151 + 32;
      if ( (unsigned int)(v151 - 65) > 0x19 )
        v153 = v151;
      if ( v149 != v153 )
        break;
    }
    if ( !v149 )
      goto LABEL_221;
  }
  v154 = 0x7FFFFFFFi64;
  v155 = 0i64;
  while ( 1 )
  {
    v156 = (unsigned __int8)buffer[v155];
    v157 = v154;
    v158 = (unsigned __int8)aDumpentinfocsv[v155++];
    --v154;
    if ( !v157 )
    {
LABEL_231:
      G_Debug_PrintEntityDebugInfoToCSV((const char *)&queryFormat.fmt + 3, clientNum);
      goto LABEL_14;
    }
    if ( v156 != v158 )
    {
      v159 = v156 + 32;
      if ( (unsigned int)(v156 - 65) > 0x19 )
        v159 = v156;
      v156 = v159;
      v160 = v158 + 32;
      if ( (unsigned int)(v158 - 65) > 0x19 )
        v160 = v158;
      if ( v156 != v160 )
        break;
    }
    if ( !v156 )
      goto LABEL_231;
  }
  v161 = 0x7FFFFFFFi64;
  v162 = 0i64;
  while ( 1 )
  {
    v163 = (unsigned __int8)buffer[v162];
    v164 = v161;
    v165 = (unsigned __int8)aGTestcmd[v162++];
    --v161;
    if ( !v164 )
    {
LABEL_241:
      G_Cmds_TestCmd_f(v5);
      goto LABEL_14;
    }
    if ( v163 != v165 )
    {
      v166 = v163 + 32;
      if ( (unsigned int)(v163 - 65) > 0x19 )
        v166 = v163;
      v163 = v166;
      v167 = v165 + 32;
      if ( (unsigned int)(v165 - 65) > 0x19 )
        v167 = v165;
      if ( v163 != v167 )
        break;
    }
    if ( !v163 )
      goto LABEL_241;
  }
  v168 = 0x7FFFFFFFi64;
  v169 = 0i64;
  while ( 1 )
  {
    v170 = (unsigned __int8)buffer[v169];
    v171 = v168;
    v172 = (unsigned __int8)aDumpentspawnca[v169++];
    --v168;
    if ( !v171 )
    {
LABEL_251:
      G_DebugBlameForEntCount(0);
      goto LABEL_14;
    }
    if ( v170 != v172 )
    {
      v173 = v170 + 32;
      if ( (unsigned int)(v170 - 65) > 0x19 )
        v173 = v170;
      v170 = v173;
      v174 = v172 + 32;
      if ( (unsigned int)(v172 - 65) > 0x19 )
        v174 = v172;
      if ( v170 != v174 )
        break;
    }
    if ( !v170 )
      goto LABEL_251;
  }
  v175 = 0x7FFFFFFFi64;
  v176 = 0i64;
  while ( 1 )
  {
    v177 = (unsigned __int8)buffer[v176];
    v178 = v175;
    v179 = (unsigned __int8)aDumpunreferenc[v176++];
    --v175;
    if ( !v178 )
    {
LABEL_261:
      G_DumpUnreferencedEnts();
      goto LABEL_14;
    }
    if ( v177 != v179 )
    {
      v180 = v177 + 32;
      if ( (unsigned int)(v177 - 65) > 0x19 )
        v180 = v177;
      v177 = v180;
      v181 = v179 + 32;
      if ( (unsigned int)(v179 - 65) > 0x19 )
        v181 = v179;
      if ( v177 != v181 )
        break;
    }
    if ( !v177 )
      goto LABEL_261;
  }
  v182 = 0x7FFFFFFFi64;
  v183 = 0i64;
  while ( 1 )
  {
    v184 = (unsigned __int8)buffer[v183];
    v185 = v182;
    v186 = (unsigned __int8)aDumpomnvars[v183++];
    --v182;
    if ( !v185 )
    {
LABEL_271:
      BG_Omnvar_DumpList();
      goto LABEL_14;
    }
    if ( v184 != v186 )
    {
      v187 = v184 + 32;
      if ( (unsigned int)(v184 - 65) > 0x19 )
        v187 = v184;
      v184 = v187;
      v188 = v186 + 32;
      if ( (unsigned int)(v186 - 65) > 0x19 )
        v188 = v186;
      if ( v184 != v188 )
        break;
    }
    if ( !v184 )
      goto LABEL_271;
  }
  v189 = 0x7FFFFFFFi64;
  v190 = 0i64;
  while ( 1 )
  {
    v191 = (unsigned __int8)buffer[v190];
    v192 = v189;
    v193 = (unsigned __int8)aDropweapon_0[v190++];
    --v189;
    if ( !v192 )
    {
LABEL_281:
      if ( G_Cmds_AreCheatsOk(v5) )
      {
        Instance = GWeaponMap::GetInstance();
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        Weapon = BgWeaponMap::GetWeapon(Instance, v5->s.weaponHandle);
        AnglesAndOriginToMatrix43(&v5->r.currentAngles, &v5->r.currentOrigin, &result);
        v198 = G_Items_DropWeapon(v5, Weapon, 1, 1, &result);
        if ( v198 )
        {
          G_Items_SetDefaultState(v5, v198);
          G_Utils_AddEvent(v5, 0x10u, 0);
        }
      }
      goto LABEL_14;
    }
    if ( v191 != v193 )
    {
      v194 = v191 + 32;
      if ( (unsigned int)(v191 - 65) > 0x19 )
        v194 = v191;
      v191 = v194;
      v195 = v193 + 32;
      if ( (unsigned int)(v193 - 65) > 0x19 )
        v195 = v193;
      if ( v191 != v195 )
        break;
    }
    if ( !v191 )
      goto LABEL_281;
  }
  v199 = 0x7FFFFFFFi64;
  v200 = 0i64;
  while ( 1 )
  {
    v201 = (unsigned __int8)buffer[v200];
    v202 = v199;
    v203 = (unsigned __int8)aMpon[v200++];
    --v199;
    if ( !v202 )
    {
LABEL_296:
      Cmd_ModelPreviewer_f(v5, 1);
      goto LABEL_14;
    }
    if ( v201 != v203 )
    {
      v204 = v201 + 32;
      if ( (unsigned int)(v201 - 65) > 0x19 )
        v204 = v201;
      v201 = v204;
      v205 = v203 + 32;
      if ( (unsigned int)(v203 - 65) > 0x19 )
        v205 = v203;
      if ( v201 != v205 )
        break;
    }
    if ( !v201 )
      goto LABEL_296;
  }
  v206 = 0x7FFFFFFFi64;
  v207 = 0i64;
  while ( 1 )
  {
    v208 = (unsigned __int8)buffer[v207];
    v209 = v206;
    v210 = (unsigned __int8)aMpoff[v207++];
    --v206;
    if ( !v209 )
    {
LABEL_306:
      Cmd_ModelPreviewer_f(v5, 0);
      goto LABEL_14;
    }
    if ( v208 != v210 )
    {
      v211 = v208 + 32;
      if ( (unsigned int)(v208 - 65) > 0x19 )
        v211 = v208;
      v208 = v211;
      v212 = v210 + 32;
      if ( (unsigned int)(v210 - 65) > 0x19 )
        v212 = v210;
      if ( v208 != v212 )
        break;
    }
    if ( !v208 )
      goto LABEL_306;
  }
  v213 = 0x7FFFFFFFi64;
  v214 = 0i64;
  while ( 1 )
  {
    v215 = (unsigned __int8)buffer[v214];
    v216 = v213;
    v217 = (unsigned __int8)aCfxExploder[v214++];
    --v213;
    if ( !v216 )
    {
LABEL_316:
      Cmd_CreateFx_Exploder_f(v5);
      goto LABEL_14;
    }
    if ( v215 != v217 )
    {
      v218 = v215 + 32;
      if ( (unsigned int)(v215 - 65) > 0x19 )
        v218 = v215;
      v215 = v218;
      v219 = v217 + 32;
      if ( (unsigned int)(v217 - 65) > 0x19 )
        v219 = v217;
      if ( v215 != v219 )
        break;
    }
    if ( !v215 )
      goto LABEL_316;
  }
  v220 = 0x7FFFFFFFi64;
  v221 = 0i64;
  while ( 1 )
  {
    v222 = (unsigned __int8)buffer[v221];
    v223 = v220;
    v224 = (unsigned __int8)aUmbraportallis[v221++];
    --v220;
    if ( !v223 )
    {
LABEL_326:
      Cmd_UmbraPortalList_f();
      goto LABEL_14;
    }
    if ( v222 != v224 )
    {
      v225 = v222 + 32;
      if ( (unsigned int)(v222 - 65) > 0x19 )
        v225 = v222;
      v222 = v225;
      v226 = v224 + 32;
      if ( (unsigned int)(v224 - 65) > 0x19 )
        v226 = v224;
      if ( v222 != v226 )
        break;
    }
    if ( !v222 )
      goto LABEL_326;
  }
  v227 = 0x7FFFFFFFi64;
  v228 = 0i64;
  while ( 1 )
  {
    v229 = (unsigned __int8)buffer[v228];
    v230 = v227;
    v231 = (unsigned __int8)aUmbraportaltog[v228++];
    --v227;
    if ( !v230 )
    {
LABEL_336:
      Cmd_UmbraPortalToggle_f();
      goto LABEL_14;
    }
    if ( v229 != v231 )
    {
      v232 = v229 + 32;
      if ( (unsigned int)(v229 - 65) > 0x19 )
        v232 = v229;
      v229 = v232;
      v233 = v231 + 32;
      if ( (unsigned int)(v231 - 65) > 0x19 )
        v233 = v231;
      if ( v229 != v233 )
        break;
    }
    if ( !v229 )
      goto LABEL_336;
  }
  while ( 1 )
  {
    v234 = (unsigned __int8)buffer[v6];
    v235 = v7;
    v236 = (unsigned __int8)aBlarg[v6++];
    --v7;
    if ( !v235 )
    {
LABEL_345:
      Cmd_SetExtraGameRevenueRate(v5);
      goto LABEL_14;
    }
    if ( v234 != (_DWORD)v236 )
    {
      v237 = v234 + 32;
      if ( (unsigned int)(v234 - 65) > 0x19 )
        v237 = v234;
      v234 = v237;
      v238 = v236 + 32;
      if ( (unsigned int)(v236 - 65) > 0x19 )
        v238 = v236;
      if ( v234 != v238 )
        break;
    }
    if ( !v234 )
      goto LABEL_345;
  }
  v239 = j_va(aPrintGameUnkno, buffer, v236, v228);
  SV_Game_SendServerCommand(clientNum, SV_CMD_CAN_IGNORE, v239);
LABEL_14:
  SV_Cmd_EndTokenizedString();
}

