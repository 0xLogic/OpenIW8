/*
==============
CG_ServerCmd_RegisterServerMaterial
==============
*/

void __fastcall CG_ServerCmd_RegisterServerMaterial(LocalClientNum_t localClientNum, const unsigned int materialIndex, const char *materialName)
{
  ?CG_ServerCmd_RegisterServerMaterial@@YAXW4LocalClientNum_t@@IPEBD@Z(localClientNum, materialIndex, materialName);
}

/*
==============
CG_ServerCmd_ConfigStringModifiedInternal
==============
*/

bool __fastcall CG_ServerCmd_ConfigStringModifiedInternal(LocalClientNum_t localClientNum, int stringIndex)
{
  return ?CG_ServerCmd_ConfigStringModifiedInternal@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, stringIndex);
}

/*
==============
CG_ServerCmd_ParseSunLight
==============
*/

void __fastcall CG_ServerCmd_ParseSunLight(const LocalClientNum_t localClientNum)
{
  ?CG_ServerCmd_ParseSunLight@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmd_SingleCharacterCmd
==============
*/

bool __fastcall CG_ServerCmd_SingleCharacterCmd(LocalClientNum_t localClientNum, const char cmd)
{
  return ?CG_ServerCmd_SingleCharacterCmd@@YA_NW4LocalClientNum_t@@D@Z(localClientNum, cmd);
}

/*
==============
CG_ServerCmd_RegisterServerStickerMaterial
==============
*/

void __fastcall CG_ServerCmd_RegisterServerStickerMaterial(LocalClientNum_t localClientNum, const unsigned int stickerMaterialIndex, const char *stickerMaterialName)
{
  ?CG_ServerCmd_RegisterServerStickerMaterial@@YAXW4LocalClientNum_t@@IPEBD@Z(localClientNum, stickerMaterialIndex, stickerMaterialName);
}

/*
==============
CG_ServerCmd_NotifyServer
==============
*/

void __fastcall CG_ServerCmd_NotifyServer(const LocalClientNum_t localClientNum, const char *channelName, const int notifyData)
{
  ?CG_ServerCmd_NotifyServer@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, channelName, notifyData);
}

/*
==============
CG_ServerCmd_VisionSetAllConfigStrings
==============
*/

void __fastcall CG_ServerCmd_VisionSetAllConfigStrings(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmd_VisionSetAllConfigStrings@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmd_AudioZone
==============
*/
void CG_ServerCmd_AudioZone(LocalClientNum_t localClientNum)
{
  int v2; 
  const char *v3; 
  char v4; 
  const char *v5; 
  unsigned int v6; 
  const char *v7; 
  unsigned int v8; 
  double v9; 
  const char *v10; 
  double v11; 
  float v12; 
  CTAudOverrideType v13; 
  const char *v14; 
  const char *v15; 
  double v16; 
  const char *v17; 
  CTAudOverrideType v18; 
  int overRideFlags; 
  double v20; 
  double v21; 
  float v22; 
  CTAudOverrideType v23; 
  const char *v24; 
  unsigned int v25; 
  const char *v26; 
  unsigned int v27; 
  unsigned int v28; 
  const char *v29; 

  v2 = Cmd_Argc();
  v3 = Cmd_Argv(1);
  if ( v2 <= 1 || !v3 || (v4 = *v3) == 0 )
  {
    Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone bad params\n");
    return;
  }
  switch ( v4 )
  {
    case 'a':
      if ( (unsigned int)(v2 - 4) <= 1 )
      {
        v5 = Cmd_Argv(2);
        v6 = strtoul(v5, NULL, 16);
        v7 = Cmd_Argv(3);
        v8 = strtoul(v7, NULL, 16);
        LODWORD(v9) = 0;
        if ( v2 == 5 )
          v9 = Cmd_ArgFloat(4);
        CG_SetAudioTriggerState(v6, v8, *(const float *)&v9);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetAudioTriggerState bad params\n");
      }
      break;
    case 'b':
      if ( v2 == 5 )
      {
        v10 = Cmd_Argv(2);
        v11 = Cmd_ArgFloat(4);
        v12 = *(float *)&v11;
      }
      else
      {
        if ( v2 != 4 )
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetClientTriggerAudio bad params\n");
          return;
        }
        v10 = Cmd_Argv(2);
        v12 = 0.0;
      }
      v13 = Cmd_ArgInt(3);
      CG_SetAudioOverride(localClientNum, v10, v13, v12, 2047);
      return;
    case 'c':
      if ( v2 == 5 )
      {
        v14 = Cmd_Argv(2);
        v15 = Cmd_Argv(3);
        v16 = Cmd_ArgFloat(4);
        CG_SetAudioLerpOverride(localClientNum, v14, v15, CTAUD_OVERRIDE_SCRIPT, *(float *)&v16, 2047);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_SetClientTriggerAudioLerp bad params\n");
      }
      break;
    case 'd':
      if ( v2 == 6 )
      {
        v17 = Cmd_Argv(2);
        v18 = Cmd_ArgInt(3);
        overRideFlags = Cmd_ArgInt(4);
        v20 = Cmd_ArgFloat(5);
        CG_SetAudioOverride(localClientNum, v17, v18, *(float *)&v20, overRideFlags);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetClientTriggerAudioPartial bad params\n");
      }
      break;
    case 'e':
      if ( v2 == 4 )
      {
        v21 = Cmd_ArgFloat(3);
        v22 = *(float *)&v21;
      }
      else
      {
        if ( v2 != 3 )
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_ClearCGTrigger bad params\n");
          return;
        }
        v22 = 0.0;
      }
      v23 = Cmd_ArgInt(2);
      CG_ClearAudioOverride(localClientNum, v23, v22);
      return;
    case 'f':
      if ( v2 == 4 )
      {
        v24 = Cmd_Argv(2);
        v25 = strtoul(v24, NULL, 16);
        v26 = Cmd_Argv(3);
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 206, ASSERT_TYPE_ASSERT, "(enabledChar)", (const char *)&queryFormat, "enabledChar") )
          __debugbreak();
        CG_EnableAudioTriggerByState(v25, *v26 != 48);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_EnableAudioTriggerByState bad params\n");
      }
      break;
    case 'g':
      if ( v2 == 4 )
      {
        v27 = Cmd_ArgInt(2);
        v28 = v27;
        if ( v27 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v27, 0x4000) )
          __debugbreak();
        v29 = Cmd_Argv(3);
        if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 221, ASSERT_TYPE_ASSERT, "(enabledChar)", (const char *)&queryFormat, "enabledChar") )
          __debugbreak();
        CG_EnableAudioTriggerByIndex(v28, *v29 != 48);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_EnableAudioTriggerByIndex bad params\n");
      }
      break;
  }
}

/*
==============
CG_ServerCmd_ConfigStringModifiedInternal
==============
*/
char CG_ServerCmd_ConfigStringModifiedInternal(LocalClientNum_t localClientNum, int stringIndex)
{
  const char *v4; 
  int v5; 
  unsigned int v6; 
  const char *v7; 
  int duration; 
  const char *v10; 
  int v11; 
  unsigned int v12; 
  const char *v13; 
  int v14; 
  unsigned int v15; 
  const char *v16; 
  int v17; 
  unsigned int v18; 
  const char *v19; 
  int v20; 
  unsigned int v21; 
  const char *v22; 
  int v23; 
  unsigned int v24; 
  const char *v25; 
  int v26; 
  const char *v27; 
  int v28; 
  unsigned int v29; 
  const char *v30; 
  int v31; 
  const char *v32; 
  int v33; 
  const char *v34; 
  int v35; 
  char *outVisionSetName[2]; 
  char *ConfigString; 
  char *data_p; 

  ConfigString = (char *)CL_GetConfigString(stringIndex);
  switch ( stringIndex )
  {
    case 1:
      if ( NetConstStrings_GetVisionSetStringCount() )
      {
        data_p = (char *)CL_GetConfigString(1);
        v4 = Com_Parse((const char **)&data_p);
        v5 = atoi(v4);
        v6 = v5;
        if ( v5 )
        {
          if ( !NetConstStrings_GetVisionSetName(v5, (const char **)outVisionSetName) )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v6);
        }
        else
        {
          outVisionSetName[0] = (char *)&queryFormat.fmt + 3;
        }
        v7 = Com_Parse((const char **)&data_p);
        duration = atoi(v7);
        CG_VisionSetFromScript(localClientNum, VISIONSET_SCRIPT, VISIONSET_LEAFTYPE_SCRIPT_TO, outVisionSetName[0], duration);
        return 1;
      }
      return 1;
    case 2:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      outVisionSetName[0] = (char *)CL_GetConfigString(2);
      v10 = Com_Parse((const char **)outVisionSetName);
      v11 = atoi(v10);
      v12 = v11;
      if ( v11 )
      {
        if ( !NetConstStrings_GetVisionSetName(v11, (const char **)&data_p) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v12);
      }
      else
      {
        data_p = (char *)&queryFormat.fmt + 3;
      }
      CG_VisionSetFromScript(localClientNum, VISIONSET_NIGHT, VISIONSET_LEAFTYPE_NIGHTVISION, data_p, 0);
      return 1;
    case 3:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      outVisionSetName[0] = (char *)CL_GetConfigString(3);
      v13 = Com_Parse((const char **)outVisionSetName);
      v14 = atoi(v13);
      v15 = v14;
      if ( v14 )
      {
        if ( !NetConstStrings_GetVisionSetName(v14, (const char **)&data_p) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v15);
      }
      else
      {
        data_p = (char *)&queryFormat.fmt + 3;
      }
      CG_VisionSetFromScript(localClientNum, VISIONSET_MISSILECAM, VISIONSET_LEAFTYPE_PREDATOR, data_p, 0);
      return 1;
    case 4:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      outVisionSetName[0] = (char *)CL_GetConfigString(4);
      v16 = Com_Parse((const char **)outVisionSetName);
      v17 = atoi(v16);
      v18 = v17;
      if ( v17 )
      {
        if ( !NetConstStrings_GetVisionSetName(v17, (const char **)&data_p) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v18);
      }
      else
      {
        data_p = (char *)&queryFormat.fmt + 3;
      }
      CG_VisionSetFromScript(localClientNum, VISIONSET_THERMAL, VISIONSET_LEAFTYPE_THERMAL, data_p, 0);
      return 1;
    case 5:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      outVisionSetName[0] = (char *)CL_GetConfigString(5);
      v19 = Com_Parse((const char **)outVisionSetName);
      v20 = atoi(v19);
      v21 = v20;
      if ( v20 )
      {
        if ( !NetConstStrings_GetVisionSetName(v20, (const char **)&data_p) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v21);
      }
      else
      {
        data_p = (char *)&queryFormat.fmt + 3;
      }
      CG_VisionSetFromScript(localClientNum, VISIONSET_PAIN, VISIONSET_LEAFTYPE_PAIN, data_p, 0);
      return 1;
    case 6:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      data_p = (char *)CL_GetConfigString(6);
      v22 = Com_Parse((const char **)&data_p);
      v23 = atoi(v22);
      v24 = v23;
      if ( v23 )
      {
        if ( !NetConstStrings_GetVisionSetName(v23, (const char **)outVisionSetName) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v24);
      }
      else
      {
        outVisionSetName[0] = (char *)&queryFormat.fmt + 3;
      }
      v25 = Com_Parse((const char **)&data_p);
      v26 = atoi(v25);
      CG_VisionSetFromScript(localClientNum, VISIONSET_FADE_TO_BLACK, VISIONSET_LEAFTYPE_FADE_BLACK, outVisionSetName[0], v26);
      return 1;
    case 7:
      if ( !NetConstStrings_GetVisionSetStringCount() )
        return 1;
      outVisionSetName[0] = (char *)CL_GetConfigString(7);
      v27 = Com_Parse((const char **)outVisionSetName);
      v28 = atoi(v27);
      v29 = v28;
      if ( v28 )
      {
        if ( !NetConstStrings_GetVisionSetName(v28, (const char **)&data_p) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v29);
      }
      else
      {
        data_p = (char *)&queryFormat.fmt + 3;
      }
      CG_VisionSetFromScript(localClientNum, VISIONSET_KILLCAM, VISIONSET_LEAFTYPE_KILLCAM_THIRDPERSON, data_p, 0);
      return 1;
    case 8:
      v30 = Com_Parse((const char **)&ConfigString);
      v31 = atoi(v30);
      v32 = Com_Parse((const char **)&ConfigString);
      v33 = atoi(v32);
      v34 = Com_Parse((const char **)&ConfigString);
      v35 = atoi(v34);
      CG_ServerCmd_VisionSetAlternate(localClientNum, v31, v33, v35);
      return 1;
    default:
      return 0;
  }
}

/*
==============
CG_ServerCmd_NotifyServer
==============
*/
void CG_ServerCmd_NotifyServer(const LocalClientNum_t localClientNum, const char *channelName, const int notifyData)
{
  __int64 v3; 
  const char *v6; 
  int v8; 
  unsigned int luiStringIndex; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v3].connectionState != CA_ACTIVE )
    Com_PrintWarning(13, "LUI_NotifyServer: Not connected to a server\n");
  if ( LUI_CoD_InFrontend() || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    v6 = j_va("cmd lui %s %i\n", channelName, (unsigned int)notifyData);
  }
  else
  {
    if ( !NetConstStrings_GetLuiStringIndex(channelName, &luiStringIndex) )
    {
      Com_PrintWarning(13, "LUI_NotifyServer: could not find NetConstString index for %s\n", channelName);
      return;
    }
    v6 = j_va("cmd lui %i %i %i\n", luiStringIndex, (unsigned int)notifyData, (unsigned int)cls.serverId);
  }
  Cbuf_AddText((LocalClientNum_t)v3, v6);
}

/*
==============
CG_ServerCmd_ParseSunLight
==============
*/
void CG_ServerCmd_ParseSunLight(const LocalClientNum_t localClientNum)
{
  const char *ConfigString; 
  float v2; 
  vec3_t sunColorLinearSrgb; 

  ConfigString = CL_GetConfigString(0);
  if ( *ConfigString )
  {
    if ( j_sscanf(ConfigString, "%g %g %g %g", &sunColorLinearSrgb, &sunColorLinearSrgb.y, &sunColorLinearSrgb.z, &v2) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 48, ASSERT_TYPE_ASSERT, "((sscanf( info, \"%g %g %g %g\", &sunColorLinearSrgb[0], &sunColorLinearSrgb[1], &sunColorLinearSrgb[2], &sunIntensity )) == (4))", (const char *)&queryFormat, "sscanf( info, \"%g %g %g %g\", &sunColorLinearSrgb[0], &sunColorLinearSrgb[1], &sunColorLinearSrgb[2], &sunIntensity ) == 4") )
      __debugbreak();
    R_SetSunColorOverride(&sunColorLinearSrgb);
    R_SetSunIntensityOverride(v2);
  }
  else
  {
    R_ResetSunColorOverride();
    R_ResetSunIntensityOverride();
  }
}

/*
==============
CG_ServerCmd_RegisterServerMaterial
==============
*/
void CG_ServerCmd_RegisterServerMaterial(LocalClientNum_t localClientNum, const unsigned int materialIndex, const char *materialName)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 

  v3 = materialIndex;
  if ( !materialName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 1103, ASSERT_TYPE_ASSERT, "(materialName)", (const char *)&queryFormat, "materialName") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v3 >= 0x15E )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 1107, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->serverMaterialCache ) ) + 0 ) )", "materialIndex doesn't index ARRAY_COUNT( cgameGlob->serverMaterialCache )\n\t%i not in [0, %i)", v7, 350) )
      __debugbreak();
  }
  if ( *materialName )
    LocalClientGlobals->serverMaterialCache[v3] = Material_RegisterHandle(materialName, IMAGE_TRACK_HUD);
  else
    LocalClientGlobals->serverMaterialCache[v3] = NULL;
}

/*
==============
CG_ServerCmd_RegisterServerStickerMaterial
==============
*/
void CG_ServerCmd_RegisterServerStickerMaterial(LocalClientNum_t localClientNum, const unsigned int stickerMaterialIndex, const char *stickerMaterialName)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 

  v3 = stickerMaterialIndex;
  if ( !stickerMaterialName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 1122, ASSERT_TYPE_ASSERT, "(stickerMaterialName)", (const char *)&queryFormat, "stickerMaterialName") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v3 >= 0x200 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 1126, ASSERT_TYPE_ASSERT, "(unsigned)( stickerMaterialIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->serverStickerMaterialCache ) ) + 0 ) )", "stickerMaterialIndex doesn't index ARRAY_COUNT( cgameGlob->serverStickerMaterialCache )\n\t%i not in [0, %i)", v7, 512) )
      __debugbreak();
  }
  if ( *stickerMaterialName )
    LocalClientGlobals->serverStickerMaterialCache[v3] = Material_RegisterHandle(stickerMaterialName, IMAGE_TRACK_MODEL);
  else
    LocalClientGlobals->serverStickerMaterialCache[v3] = NULL;
}

/*
==============
CG_ServerCmd_SingleCharacterCmd
==============
*/
bool CG_ServerCmd_SingleCharacterCmd(LocalClientNum_t localClientNum, const char cmd)
{
  int v2; 
  cg_t *LocalClientGlobals; 
  int v5; 
  const char *v6; 
  char v7; 
  int v8; 
  unsigned __int64 SndEntHandle; 
  const char *v10; 
  unsigned int v11; 
  const char *v12; 
  unsigned int v13; 
  double v14; 
  bool result; 
  const char *v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  unsigned int v20; 
  double v21; 
  int v22; 
  int v23; 
  cg_t *v24; 
  double v25; 
  cg_t *v26; 
  double v27; 
  const char *v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  char *v33; 
  int v34; 
  int v35; 
  const char *v36; 
  int v37; 
  const char *v38; 
  int v39; 
  const char *v40; 
  int v41; 
  const char *v42; 
  int v43; 
  int v44; 
  const char *VisionName; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  const char *v51; 
  unsigned int v52; 
  const char *v53; 
  unsigned int v54; 
  unsigned int v55; 
  signed int v56; 
  __int64 v57; 
  int v58; 
  const char *v59; 
  int v60; 
  double v61; 
  unsigned int v62; 
  const char *v63; 
  const char *v64; 
  unsigned int v65; 
  int v66; 
  int v67; 
  const char *v68; 
  FxImpactTable *v69; 
  const char *v70; 
  const char *v71; 
  int v72; 
  LocalClientNum_t v73; 
  int v74; 
  double v75; 
  int v76; 
  const dvar_t *v77; 
  int v78; 
  const char *v79; 
  unsigned int v80; 
  const Material *v81; 
  char *outVisionSetName; 
  unsigned int assetIdPlaylist[96]; 

  v2 = cmd;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  switch ( v2 )
  {
    case 0:
      return 1;
    case 33:
      v24 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 686, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v24->nvgInfo.activateBlindNow = 1;
      return 1;
    case 36:
      v25 = Cmd_ArgFloat(1);
      v26 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 694, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v27 = I_fclamp(*(float *)&v25, 0.0, 1.0);
      v26->nvgInfo.weightedBlind.scriptGoalWeight = *(float *)&v27;
      return 1;
    case 48:
      v47 = Cmd_ArgInt(3);
      v48 = Cmd_ArgInt(2);
      v49 = Cmd_ArgInt(1);
      CG_ServerCmd_VisionSetAlternate(localClientNum, v49, v48, v47);
      return 1;
    case 54:
      v28 = Cmd_Argv(2);
      v29 = Cmd_ArgInt(1);
      CG_VisionSetParamCmd(localClientNum, v29, v28);
      return 1;
    case 55:
      v43 = 1;
      v44 = Cmd_ArgInt(1);
      VisionName = CG_VisionSets_GetVisionName(v44);
      v46 = Cmd_ArgInt(2);
      if ( *VisionName )
        CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_FADE_BLACK, VisionName);
      else
        v43 = 0;
      CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_FADE_BLACK, LocalClientGlobals->time, v46, v43, VISIONSETLERP_SMOOTH);
      return 1;
    case 60:
      CG_Glass_Reset(localClientNum);
      return 1;
    case 62:
      v74 = 1;
      v75 = Cmd_ArgFloat(1);
      v76 = Cmd_ArgInt(2);
      v77 = DVARFLT_com_fovUserScaleFactor;
      v78 = v76;
      if ( !DVARFLT_com_fovUserScaleFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_fovUserScaleFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v77);
      LODWORD(LocalClientGlobals->fovScaleLerpBase) = v77->current.integer;
      result = 1;
      if ( v78 > 1 )
        v74 = v78;
      LocalClientGlobals->fovScaleLerpTimer = v74;
      LocalClientGlobals->fovScaleLerpDuration = v74;
      LocalClientGlobals->fovScaleLerpTarget = *(float *)&v75;
      return result;
    case 66:
      v68 = Cmd_Argv(1);
      v69 = CG_RegisterImpactEffects(v68);
      if ( cgMedia.impactFx )
      {
        cgMedia.impactFx = v69;
        return 1;
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6C00, 233i64);
        return 0;
      }
    case 69:
      if ( Cmd_Argc() == 2 )
      {
        v23 = Cmd_ArgInt(1);
        CG_GetLocalClientGlobals(localClientNum)->nvgInfo.nvgIntent = 2 - (v23 != 0);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_NightVisionSetState bad params\n");
      }
      return 1;
    case 74:
      v30 = Cmd_ArgInt(1);
      v31 = v30;
      if ( v30 )
      {
        if ( !NetConstStrings_GetVisionSetName(v30, (const char **)&outVisionSetName) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 232i64, v31);
      }
      else
      {
        outVisionSetName = (char *)&queryFormat.fmt + 3;
      }
      v32 = Cmd_ArgInt(2);
      v33 = outVisionSetName;
      v34 = v32;
      if ( *outVisionSetName )
      {
        CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(&LocalClientGlobals->cvsData, LocalClientGlobals->time);
        CG_VisionSetMergeBlendToLeaf(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_SCRIPT_BLEND, VISIONSET_LEAFTYPE_SCRIPT_FROM);
        CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, outVisionSetName);
        CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, LocalClientGlobals->time, v34, 1, VISIONSETLERP_SMOOTH);
        v33 = outVisionSetName;
      }
      CG_VisionSetScriptOverride(&LocalClientGlobals->cvsData, v33, LocalClientGlobals->time, v34);
      return 1;
    case 75:
      v35 = Cmd_ArgInt(1);
      v36 = CG_VisionSets_GetVisionName(v35);
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_NIGHTVISION, v36);
      return 1;
    case 76:
      v37 = Cmd_ArgInt(1);
      v38 = CG_VisionSets_GetVisionName(v37);
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_PREDATOR, v38);
      return 1;
    case 77:
      v39 = Cmd_ArgInt(1);
      v40 = CG_VisionSets_GetVisionName(v39);
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_THERMAL, v40);
      return 1;
    case 78:
      v41 = Cmd_ArgInt(1);
      v42 = CG_VisionSets_GetVisionName(v41);
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_PAIN, v42);
      return 1;
    case 80:
      v22 = Cmd_ArgInt(2);
      if ( Cmd_ArgInt(1) )
        CG_View_StartWaterSheetFX(localClientNum, v22);
      else
        CG_View_StopWaterSheetFX(localClientNum);
      return 1;
    case 82:
      if ( Cmd_Argc() != 3 )
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_OpenMenu bad params\n");
        return 1;
      }
      v70 = Cmd_Argv(1);
      v71 = Cmd_Argv(2);
      v72 = atoi(v71);
      if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 612, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
        __debugbreak();
      if ( v72 < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 613, ASSERT_TYPE_ASSERT, "(clientNum >= -1)", (const char *)&queryFormat, "clientNum >= -1") )
        __debugbreak();
      if ( !*v70 )
        return 1;
      v73 = LOCAL_CLIENT_0;
      if ( CL_GetLocalClientActiveCount() <= 0 )
        return 1;
      while ( CG_GetLocalClientGlobals(v73)->clientNum != v72 )
      {
        if ( ++v73 >= CL_GetLocalClientActiveCount() )
          return 1;
      }
      LUI_OpenMenu(v73, v70, 0, 0, 1);
      return 1;
    case 90:
      CG_ServerCmd_SoundSubmix(localClientNum);
      return 1;
    case 98:
      if ( Cmd_Argc() != 2 )
      {
        Com_PrintError(14, "ERROR: CG_ServerCmds_ManualStreamMaterial expected a parameter (material index)\n");
        return 1;
      }
      v79 = Cmd_Argv(1);
      v80 = atoi(v79);
      v81 = CG_Draw_MaterialHandleForIndex(localClientNum, v80);
      if ( v81 )
      {
        Stream_SetMaterialTouchedUntilLoaded(v81);
        return 1;
      }
      Com_PrintError(14, "ERROR: CG_ServerCmds_ManualStreamMaterial invalid material %u\n", v80);
      return 1;
    case 105:
      v5 = Cmd_Argc();
      if ( v5 <= 1 )
        goto LABEL_17;
      v6 = Cmd_Argv(1);
      if ( !v6 )
        goto LABEL_17;
      v7 = *v6;
      if ( !v7 )
        goto LABEL_17;
      if ( v7 == 97 )
      {
        if ( (unsigned int)(v5 - 5) <= 1 )
        {
          v8 = Cmd_ArgInt(2);
          SndEntHandle = CG_GenerateSndEntHandle(localClientNum, v8);
          v10 = Cmd_Argv(3);
          v11 = strtoul(v10, NULL, 16);
          v12 = Cmd_Argv(4);
          v13 = strtoul(v12, NULL, 16);
          if ( v5 == 6 )
            v14 = Cmd_ArgFloat(5);
          else
            LODWORD(v14) = 0;
          SND_SetEntContext(SndEntHandle, v11, v13, *(float *)&v14);
          return 1;
        }
LABEL_17:
        Com_PrintError(14, "ERROR: CG_ServerCmd_SoundContext bad params\n");
        return 1;
      }
      if ( v7 != 98 || (unsigned int)(v5 - 4) > 1 )
        goto LABEL_17;
      v16 = Cmd_Argv(2);
      v17 = strtoul(v16, NULL, 16);
      v18 = Cmd_Argv(3);
      v19 = strtoul(v18, NULL, 16);
      v20 = v19;
      if ( v5 == 5 )
      {
        v21 = Cmd_ArgFloat(4);
        SND_SetContext(v17, v20, *(float *)&v21);
      }
      else
      {
        SND_SetContext(v17, v19, 0.0);
      }
      return 1;
    case 109:
      CG_ServerCmd_AudioZone(localClientNum);
      return 1;
    case 112:
      v50 = Cmd_Argc();
      if ( v50 >= 3 )
      {
        v51 = Cmd_Argv(1);
        v52 = strtoul(v51, NULL, 16);
        v53 = Cmd_Argv(2);
        v54 = strtoul(v53, NULL, 16);
        v55 = v54;
        if ( v54 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned long>(unsigned long)", "signed", (int)v54, "unsigned", v54) )
          __debugbreak();
        v56 = v50 - 3;
        if ( v56 <= 96 )
        {
          if ( v56 > 0 )
          {
            v57 = 0i64;
            v58 = 3;
            do
            {
              v59 = Cmd_Argv(v58);
              assetIdPlaylist[v57] = strtoul(v59, NULL, 16);
              ++v58;
              ++v57;
            }
            while ( v57 < v56 );
          }
          if ( v55 )
            SND_StopMusicState(v52);
          else
            SND_SetMusicState(v52, assetIdPlaylist, v56);
          return 1;
        }
        else
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_MusicState Too many params (music id's)\n");
          return 1;
        }
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_MusicState bad params\n");
        return 1;
      }
    case 115:
      v60 = Cmd_ArgInt(1);
      v61 = Cmd_ArgFloat(2);
      SND_SetTimeScaleLerp(v60, *(const float *)&v61);
      return 1;
    case 116:
      v62 = Cmd_Argc();
      if ( v62 == 2 )
      {
        v63 = Cmd_Argv(1);
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
          SND_ResetTimeScaleDefaults();
        if ( CG_SetTimeScaleByPreset(v63) )
        {
          return 1;
        }
        else
        {
          Com_PrintError(14, "CG_ServerCmd_SoundTimeScaleTableCmd did not find an entry for preset with name %s", v63);
          return 1;
        }
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_SoundTimeScaleTableCmd called with %i args\n", v62);
        return 1;
      }
    case 120:
      if ( Cmd_Argc() == 3 )
      {
        v64 = Cmd_Argv(1);
        v65 = strtoul(v64, NULL, 16);
        v66 = Cmd_ArgInt(2);
        SND_EnablePASpeaker(v65, v66 == 1);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_EnablePASpeaker bad params\n");
      }
      return 1;
    case 121:
      if ( Cmd_Argc() == 2 )
      {
        v67 = Cmd_ArgInt(1);
        CG_SND_PlayerBreathsEnable(localClientNum, v67 == 1);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_PlayerBreathsEnable bad params\n");
      }
      return 1;
    default:
      return 0;
  }
}

/*
==============
CG_ServerCmd_SoundSubmix
==============
*/

void __fastcall CG_ServerCmd_SoundSubmix(LocalClientNum_t localClientNum, double _XMM1_8)
{
  unsigned int v3; 
  int v4; 
  const char *v5; 
  __int64 v6; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  unsigned int v16; 
  char v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  unsigned int v23; 
  const char *v24; 
  const char *v25; 

  v3 = Cmd_Argc();
  v4 = v3;
  if ( v3 - 2 > 3 )
  {
    Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix bad (%d) params, expecting 2-5\n", v3);
  }
  else
  {
    v5 = Cmd_Argv(1);
    v6 = -1i64;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 == 1 )
    {
      *(float *)&_XMM6 = FLOAT_N1_0;
      *(float *)&_XMM7 = FLOAT_1_0;
      switch ( *v5 )
      {
        case '0':
          goto $LN18_111;
        case '1':
          goto $LN15_119;
        case '2':
          if ( v4 != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 398, ASSERT_TYPE_ASSERT, "(argc == 5)", (const char *)&queryFormat, "argc == 5") )
            __debugbreak();
          v11 = Cmd_Argv(4);
          *(double *)&_XMM0 = atof(v11);
          __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
          if ( *(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0 )
          {
            v12 = Cmd_Argv(5);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Set scale (%s)\n", v12);
            *(float *)&_XMM7 = FLOAT_1_0;
          }
$LN15_119:
          if ( v4 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 406, ASSERT_TYPE_ASSERT, "(argc >= 4)", (const char *)&queryFormat, "argc >= 4") )
            __debugbreak();
          v13 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v13);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          if ( *(float *)&_XMM6 < 0.0 )
          {
            v14 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Set fadeTime (%s)\n", v14);
            *(float *)&_XMM6 = FLOAT_N1_0;
          }
$LN18_111:
          if ( v4 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 414, ASSERT_TYPE_ASSERT, "(argc >= 3)", (const char *)&queryFormat, "argc >= 3") )
            __debugbreak();
          goto LABEL_28;
        case '3':
          if ( v4 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 420, ASSERT_TYPE_ASSERT, "(argc == 4)", (const char *)&queryFormat, "argc == 4") )
            __debugbreak();
          LODWORD(_XMM6) = 0;
          v18 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v18);
          __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
          if ( *(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0 )
          {
            v19 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Scale argument (%s)\n", v19);
            *(float *)&_XMM7 = FLOAT_1_0;
          }
LABEL_28:
          v15 = Cmd_Argv(2);
          v16 = strtoul(v15, NULL, 16);
          v17 = 1;
          goto LABEL_44;
        case '4':
          goto $LN27_77;
        case '5':
          goto $LN9_199;
        case '6':
          if ( v4 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 385, ASSERT_TYPE_ASSERT, "(argc == 3)", (const char *)&queryFormat, "argc == 3") )
            __debugbreak();
          v9 = Cmd_Argv(2);
          *(double *)&_XMM0 = atof(v9);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          if ( *(float *)&_XMM6 < 0.0 )
          {
            v10 = Cmd_Argv(2);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid ClearAll fadeTime (%s)\n", v10);
            *(float *)&_XMM6 = FLOAT_N1_0;
          }
$LN9_199:
          SND_SubmixClearAllFromSource(SND_SUBMIX_TYPE_SCRIPT, *(float *)&_XMM6);
          break;
        case '7':
          if ( v4 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 433, ASSERT_TYPE_ASSERT, "(argc == 4)", (const char *)&queryFormat, "argc == 4") )
            __debugbreak();
          v20 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v20);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          if ( *(float *)&_XMM6 < 0.0 )
          {
            v21 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Clear fadeTime (%s)\n", v21);
            *(float *)&_XMM6 = FLOAT_N1_0;
          }
$LN27_77:
          if ( v4 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 441, ASSERT_TYPE_ASSERT, "(argc >= 3)", (const char *)&queryFormat, "argc >= 3") )
            __debugbreak();
          v22 = Cmd_Argv(2);
          v16 = strtoul(v22, NULL, 16);
          v17 = 0;
LABEL_44:
          v23 = v16;
          if ( v16 )
          {
            if ( *(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0 )
            {
              __asm { vxorpd  xmm1, xmm1, xmm1 }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 453, ASSERT_TYPE_ASSERT, "( (0.0f) ) <= ( scale ) && ( scale ) <= ( (1.0f) )", "scale not in [SND_SUBMIX_SCALE_MIN, SND_SUBMIX_SCALE_MAX]\n\t%g not in [%g, %g]", *(float *)&_XMM7, *(double *)&_XMM1, DOUBLE_1_0) )
                __debugbreak();
            }
            if ( *(float *)&_XMM6 < 0.0 && *(float *)&_XMM6 != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 454, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
              __debugbreak();
            if ( v17 )
              SND_SubmixAddFromSource(SND_SUBMIX_TYPE_SCRIPT, v23, *(float *)&_XMM6, *(float *)&_XMM7);
            else
              SND_SubmixClearFromSource(SND_SUBMIX_TYPE_SCRIPT, v23, *(float *)&_XMM6);
          }
          else
          {
            v24 = Cmd_Argv(2);
            v25 = "Clear";
            if ( v17 )
              v25 = "Set";
            Com_PrintError(v23 + 14, "ERROR: CG_ServerCmd_SoundSubmix invalid %s submix hash (%s)\n", v25, v24);
          }
          break;
        default:
          Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid subcmd (%c)\n", (unsigned int)*v5);
          break;
      }
    }
    else
    {
      Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid subcmd (%s)\n", v5);
    }
  }
}

/*
==============
CG_ServerCmd_VisionSetAllConfigStrings
==============
*/
void CG_ServerCmd_VisionSetAllConfigStrings(LocalClientNum_t localClientNum)
{
  const char *v2; 
  int v3; 
  unsigned int v4; 
  const char *v5; 
  int v6; 
  unsigned int v7; 
  const char *v8; 
  int v9; 
  unsigned int v10; 
  const char *v11; 
  int v12; 
  unsigned int v13; 
  const char *v14; 
  int v15; 
  unsigned int v16; 
  const char *v17; 
  int duration; 
  const char *v19; 
  int v20; 
  unsigned int v21; 
  const char *v22; 
  int v23; 
  const char *v24; 
  int v25; 
  unsigned int v26; 
  char *outVisionSetName; 
  char *data_p; 

  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    data_p = (char *)CL_GetConfigString(2);
    v2 = Com_Parse((const char **)&data_p);
    v3 = atoi(v2);
    v4 = v3;
    if ( v3 )
    {
      if ( !NetConstStrings_GetVisionSetName(v3, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v4);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetFromScript(localClientNum, VISIONSET_NIGHT, VISIONSET_LEAFTYPE_NIGHTVISION, outVisionSetName, 0);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    data_p = (char *)CL_GetConfigString(3);
    v5 = Com_Parse((const char **)&data_p);
    v6 = atoi(v5);
    v7 = v6;
    if ( v6 )
    {
      if ( !NetConstStrings_GetVisionSetName(v6, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v7);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetFromScript(localClientNum, VISIONSET_MISSILECAM, VISIONSET_LEAFTYPE_PREDATOR, outVisionSetName, 0);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    data_p = (char *)CL_GetConfigString(4);
    v8 = Com_Parse((const char **)&data_p);
    v9 = atoi(v8);
    v10 = v9;
    if ( v9 )
    {
      if ( !NetConstStrings_GetVisionSetName(v9, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v10);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetFromScript(localClientNum, VISIONSET_THERMAL, VISIONSET_LEAFTYPE_THERMAL, outVisionSetName, 0);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    data_p = (char *)CL_GetConfigString(5);
    v11 = Com_Parse((const char **)&data_p);
    v12 = atoi(v11);
    v13 = v12;
    if ( v12 )
    {
      if ( !NetConstStrings_GetVisionSetName(v12, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v13);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetFromScript(localClientNum, VISIONSET_PAIN, VISIONSET_LEAFTYPE_PAIN, outVisionSetName, 0);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    outVisionSetName = (char *)CL_GetConfigString(1);
    v14 = Com_Parse((const char **)&outVisionSetName);
    v15 = atoi(v14);
    v16 = v15;
    if ( v15 )
    {
      if ( !NetConstStrings_GetVisionSetName(v15, (const char **)&data_p) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v16);
    }
    else
    {
      data_p = (char *)&queryFormat.fmt + 3;
    }
    v17 = Com_Parse((const char **)&outVisionSetName);
    duration = atoi(v17);
    CG_VisionSetFromScript(localClientNum, VISIONSET_SCRIPT, VISIONSET_LEAFTYPE_SCRIPT_TO, data_p, duration);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    outVisionSetName = (char *)CL_GetConfigString(6);
    v19 = Com_Parse((const char **)&outVisionSetName);
    v20 = atoi(v19);
    v21 = v20;
    if ( v20 )
    {
      if ( !NetConstStrings_GetVisionSetName(v20, (const char **)&data_p) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v21);
    }
    else
    {
      data_p = (char *)&queryFormat.fmt + 3;
    }
    v22 = Com_Parse((const char **)&outVisionSetName);
    v23 = atoi(v22);
    CG_VisionSetFromScript(localClientNum, VISIONSET_FADE_TO_BLACK, VISIONSET_LEAFTYPE_FADE_BLACK, data_p, v23);
  }
  if ( NetConstStrings_GetVisionSetStringCount() )
  {
    data_p = (char *)CL_GetConfigString(7);
    v24 = Com_Parse((const char **)&data_p);
    v25 = atoi(v24);
    v26 = v25;
    if ( v25 )
    {
      if ( !NetConstStrings_GetVisionSetName(v25, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 231i64, v26);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetFromScript(localClientNum, VISIONSET_KILLCAM, VISIONSET_LEAFTYPE_KILLCAM_THIRDPERSON, outVisionSetName, 0);
  }
}

/*
==============
CG_ServerCmd_VisionSetAlternate
==============
*/
void CG_ServerCmd_VisionSetAlternate(LocalClientNum_t localClientNum, int stagedVisionStateTo, int duration, int overrideVisionStateTo)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  cg_t *v8; 
  char *v9; 
  char *outVisionSetName; 

  v4 = stagedVisionStateTo;
  outVisionSetName = (char *)&queryFormat.fmt + 3;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = LocalClientGlobals;
  if ( (int)v4 < 0 )
  {
    CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_WORLDSPAWN_ALTERNATES, LocalClientGlobals->cvsData.archived.stagedVisionStart, LocalClientGlobals->cvsData.archived.stagedVisionDuration, 0, VISIONSETLERP_SMOOTH);
    return;
  }
  if ( overrideVisionStateTo < 0 )
  {
    if ( (_DWORD)v4 != LocalClientGlobals->cvsData.archived.stagedVisionStateTo )
    {
      LocalClientGlobals->cvsData.archived.stagedVisionStateTo = v4;
      LocalClientGlobals->cvsData.archived.stagedVisionDuration = duration;
      LocalClientGlobals->cvsData.archived.stagedVisionStart = LocalClientGlobals->time;
      if ( (int)v4 < LocalClientGlobals->cvsData.transitory.numDefaultAlternates )
      {
        v9 = LocalClientGlobals->cvsData.transitory.defaultAlternates[v4];
        outVisionSetName = v9;
        goto LABEL_10;
      }
    }
  }
  else
  {
    LocalClientGlobals->cvsData.archived.stagedVisionStateTo = overrideVisionStateTo;
    LocalClientGlobals->cvsData.archived.stagedVisionDuration = duration;
    LocalClientGlobals->cvsData.archived.stagedVisionStart = LocalClientGlobals->time;
    if ( !NetConstStrings_GetVisionSetName(overrideVisionStateTo, (const char **)&outVisionSetName) )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6B78, 230i64, (unsigned int)overrideVisionStateTo);
      return;
    }
  }
  v9 = outVisionSetName;
LABEL_10:
  if ( *v9 )
  {
    CG_VisionSetUpdateToNode(&v8->cvsData, v8->time, VISIONSET_BLENDTYPE_CT_B);
    CG_VisionSetMergeBlendToLeaf(&v8->cvsData, v8->time, VISIONSET_BLENDTYPE_DEFAULT, VISIONSET_LEAFTYPE_WORLDSPAWN_FROM);
    CG_VisionSetRegisterLeafByFile(&v8->cvsData, VISIONSET_LEAFTYPE_WORLDSPAWN_TO, outVisionSetName);
    CG_VisionSetRegisterBlendStart(&v8->cvsData, VISIONSET_BLENDTYPE_WORLDSPAWN_ALTERNATES, v8->cvsData.archived.stagedVisionStart, v8->cvsData.archived.stagedVisionDuration, 1, VISIONSETLERP_SMOOTH);
  }
}

