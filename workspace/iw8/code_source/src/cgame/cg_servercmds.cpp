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
  int v4; 
  const char *v5; 
  char v6; 
  const char *v7; 
  unsigned int v8; 
  const char *v9; 
  unsigned int v10; 
  const char *v13; 
  CTAudOverrideType v15; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  CTAudOverrideType v21; 
  int v22; 
  CTAudOverrideType v25; 
  const char *v27; 
  unsigned int v28; 
  const char *v29; 
  unsigned int v30; 
  unsigned int v31; 
  const char *v32; 
  int overRideFlags; 

  v4 = Cmd_Argc();
  v5 = Cmd_Argv(1);
  if ( v4 <= 1 || !v5 || (v6 = *v5) == 0 )
  {
    Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone bad params\n");
    return;
  }
  if ( v6 != 97 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( v6 == 98 )
    {
      if ( v4 == 5 )
      {
        v13 = Cmd_Argv(2);
        *(double *)&_XMM0 = Cmd_ArgFloat(4);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        if ( v4 != 4 )
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetClientTriggerAudio bad params\n");
          goto LABEL_17;
        }
        v13 = Cmd_Argv(2);
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      v15 = Cmd_ArgInt(3);
      __asm { vmovaps xmm3, xmm6; fadeTime }
      CG_SetAudioOverride(localClientNum, v13, v15, *(float *)&_XMM3, 2047);
    }
    else
    {
      if ( v6 == 99 )
      {
        if ( v4 == 5 )
        {
          v18 = Cmd_Argv(2);
          v19 = Cmd_Argv(3);
          *(double *)&_XMM0 = Cmd_ArgFloat(4);
          __asm { vmovss  [rsp+58h+overRideFlags], xmm0 }
          CG_SetAudioLerpOverride(localClientNum, v18, v19, CTAUD_OVERRIDE_SCRIPT, *(float *)&overRideFlags, 2047);
        }
        else
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_SetClientTriggerAudioLerp bad params\n");
        }
        goto LABEL_17;
      }
      if ( v6 == 100 )
      {
        if ( v4 == 6 )
        {
          v20 = Cmd_Argv(2);
          v21 = Cmd_ArgInt(3);
          v22 = Cmd_ArgInt(4);
          *(double *)&_XMM0 = Cmd_ArgFloat(5);
          __asm { vmovaps xmm3, xmm0; fadeTime }
          CG_SetAudioOverride(localClientNum, v20, v21, *(float *)&_XMM3, v22);
        }
        else
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetClientTriggerAudioPartial bad params\n");
        }
        goto LABEL_17;
      }
      if ( v6 != 101 )
      {
        if ( v6 == 102 )
        {
          if ( v4 == 4 )
          {
            v27 = Cmd_Argv(2);
            v28 = strtoul(v27, NULL, 16);
            v29 = Cmd_Argv(3);
            if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 206, ASSERT_TYPE_ASSERT, "(enabledChar)", (const char *)&queryFormat, "enabledChar") )
              __debugbreak();
            CG_EnableAudioTriggerByState(v28, *v29 != 48);
          }
          else
          {
            Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_EnableAudioTriggerByState bad params\n");
          }
        }
        else if ( v6 == 103 )
        {
          if ( v4 == 4 )
          {
            v30 = Cmd_ArgInt(2);
            v31 = v30;
            if ( v30 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v30, 0x4000) )
              __debugbreak();
            v32 = Cmd_Argv(3);
            if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 221, ASSERT_TYPE_ASSERT, "(enabledChar)", (const char *)&queryFormat, "enabledChar") )
              __debugbreak();
            CG_EnableAudioTriggerByIndex(v31, *v32 != 48);
          }
          else
          {
            Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_EnableAudioTriggerByIndex bad params\n");
          }
        }
        goto LABEL_17;
      }
      if ( v4 == 4 )
      {
        *(double *)&_XMM0 = Cmd_ArgFloat(3);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        if ( v4 != 3 )
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - CG_ClearCGTrigger bad params\n");
          goto LABEL_17;
        }
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      v25 = Cmd_ArgInt(2);
      __asm { vmovaps xmm2, xmm6; fadeTime }
      CG_ClearAudioOverride(localClientNum, v25, *(float *)&_XMM2);
    }
LABEL_17:
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return;
  }
  if ( (unsigned int)(v4 - 4) <= 1 )
  {
    v7 = Cmd_Argv(2);
    v8 = strtoul(v7, NULL, 16);
    v9 = Cmd_Argv(3);
    v10 = strtoul(v9, NULL, 16);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( v4 == 5 )
      *(double *)&_XMM0 = Cmd_ArgFloat(4);
    __asm { vmovaps xmm2, xmm0; fadeTime }
    CG_SetAudioTriggerState(v8, v10, *(const float *)&_XMM2);
  }
  else
  {
    Com_PrintError(14, "ERROR: CG_ServerCmd_AudioZone - SetAudioTriggerState bad params\n");
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
  int v3; 
  vec3_t sunColorLinearSrgb; 

  ConfigString = CL_GetConfigString(0);
  if ( *ConfigString )
  {
    if ( j_sscanf(ConfigString, "%g %g %g %g", &sunColorLinearSrgb, &sunColorLinearSrgb.y, &sunColorLinearSrgb.z, &v3) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 48, ASSERT_TYPE_ASSERT, "((sscanf( info, \"%g %g %g %g\", &sunColorLinearSrgb[0], &sunColorLinearSrgb[1], &sunColorLinearSrgb[2], &sunIntensity )) == (4))", (const char *)&queryFormat, "sscanf( info, \"%g %g %g %g\", &sunColorLinearSrgb[0], &sunColorLinearSrgb[1], &sunColorLinearSrgb[2], &sunIntensity ) == 4") )
      __debugbreak();
    R_SetSunColorOverride(&sunColorLinearSrgb);
    __asm { vmovss  xmm0, [rsp+58h+var_28]; sunIntensity }
    R_SetSunIntensityOverride(*(const float *)&_XMM0);
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
  int v6; 
  int v9; 
  const char *v10; 
  char v11; 
  int v12; 
  unsigned __int64 SndEntHandle; 
  const char *v14; 
  unsigned int v15; 
  const char *v16; 
  unsigned int v17; 
  bool result; 
  const char *v20; 
  unsigned int v21; 
  const char *v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v28; 
  int v29; 
  cg_t *LocalClientGlobals; 
  const char *v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  char *v41; 
  int v42; 
  int v43; 
  const char *v44; 
  int v45; 
  const char *v46; 
  int v47; 
  const char *v48; 
  int v49; 
  const char *v50; 
  int v51; 
  int v52; 
  const char *VisionName; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  const char *v59; 
  unsigned int v60; 
  const char *v61; 
  unsigned int v62; 
  unsigned int v63; 
  signed int v64; 
  __int64 v65; 
  int v66; 
  const char *v67; 
  int v68; 
  unsigned int v70; 
  const char *v71; 
  const char *v72; 
  unsigned int v73; 
  int v74; 
  int v75; 
  const char *v76; 
  FxImpactTable *v77; 
  const char *v80; 
  const char *v81; 
  int v82; 
  LocalClientNum_t v83; 
  int v84; 
  int v86; 
  const dvar_t *v87; 
  int v88; 
  const char *v89; 
  unsigned int v90; 
  const Material *v91; 
  char *outVisionSetName; 
  unsigned int assetIdPlaylist[96]; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v6 = cmd;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  switch ( v6 )
  {
    case 0:
      goto LABEL_113;
    case 33:
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 686, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      LocalClientGlobals->nvgInfo.activateBlindNow = 1;
      result = 1;
      goto LABEL_86;
    case 36:
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 694, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm0, xmm6; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+77DFCh], xmm0 }
      result = 1;
      goto LABEL_86;
    case 48:
      v55 = Cmd_ArgInt(3);
      v56 = Cmd_ArgInt(2);
      v57 = Cmd_ArgInt(1);
      CG_ServerCmd_VisionSetAlternate(localClientNum, v57, v56, v55);
      result = 1;
      goto LABEL_86;
    case 54:
      v36 = Cmd_Argv(2);
      v37 = Cmd_ArgInt(1);
      CG_VisionSetParamCmd(localClientNum, v37, v36);
      result = 1;
      goto LABEL_86;
    case 55:
      v51 = 1;
      v52 = Cmd_ArgInt(1);
      VisionName = CG_VisionSets_GetVisionName(v52);
      v54 = Cmd_ArgInt(2);
      if ( *VisionName )
        CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_FADE_BLACK, VisionName);
      else
        v51 = 0;
      CG_VisionSetRegisterBlendStart(&_RDI->cvsData, VISIONSET_BLENDTYPE_FADE_BLACK, _RDI->time, v54, v51, VISIONSETLERP_SMOOTH);
      result = 1;
      goto LABEL_86;
    case 60:
      CG_Glass_Reset(localClientNum);
      result = 1;
      goto LABEL_86;
    case 62:
      v84 = 1;
      *(double *)&_XMM0 = Cmd_ArgFloat(1);
      __asm { vmovaps xmm6, xmm0 }
      v86 = Cmd_ArgInt(2);
      v87 = DVARFLT_com_fovUserScaleFactor;
      v88 = v86;
      if ( !DVARFLT_com_fovUserScaleFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_fovUserScaleFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v87);
      LODWORD(_RDI->fovScaleLerpBase) = v87->current.integer;
      result = 1;
      if ( v88 > 1 )
        v84 = v88;
      _RDI->fovScaleLerpTimer = v84;
      _RDI->fovScaleLerpDuration = v84;
      __asm { vmovss  dword ptr [rdi+66A90h], xmm6 }
      goto LABEL_86;
    case 66:
      v76 = Cmd_Argv(1);
      v77 = CG_RegisterImpactEffects(v76);
      if ( cgMedia.impactFx )
      {
        cgMedia.impactFx = v77;
        result = 1;
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6C00, 233i64);
LABEL_85:
        result = 0;
      }
      goto LABEL_86;
    case 69:
      if ( Cmd_Argc() == 2 )
      {
        v29 = Cmd_ArgInt(1);
        CG_GetLocalClientGlobals(localClientNum)->nvgInfo.nvgIntent = 2 - (v29 != 0);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_NightVisionSetState bad params\n");
      }
      result = 1;
      goto LABEL_86;
    case 74:
      v38 = Cmd_ArgInt(1);
      v39 = v38;
      if ( v38 )
      {
        if ( !NetConstStrings_GetVisionSetName(v38, (const char **)&outVisionSetName) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 232i64, v39);
      }
      else
      {
        outVisionSetName = (char *)&queryFormat.fmt + 3;
      }
      v40 = Cmd_ArgInt(2);
      v41 = outVisionSetName;
      v42 = v40;
      if ( *outVisionSetName )
      {
        CG_VisionSetUpdateToNode(&_RDI->cvsData, _RDI->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(&_RDI->cvsData, _RDI->time);
        CG_VisionSetMergeBlendToLeaf(&_RDI->cvsData, _RDI->time, VISIONSET_BLENDTYPE_SCRIPT_BLEND, VISIONSET_LEAFTYPE_SCRIPT_FROM);
        CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, outVisionSetName);
        CG_VisionSetRegisterBlendStart(&_RDI->cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, _RDI->time, v42, 1, VISIONSETLERP_SMOOTH);
        v41 = outVisionSetName;
      }
      CG_VisionSetScriptOverride(&_RDI->cvsData, v41, _RDI->time, v42);
      result = 1;
      goto LABEL_86;
    case 75:
      v43 = Cmd_ArgInt(1);
      v44 = CG_VisionSets_GetVisionName(v43);
      CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_NIGHTVISION, v44);
      result = 1;
      goto LABEL_86;
    case 76:
      v45 = Cmd_ArgInt(1);
      v46 = CG_VisionSets_GetVisionName(v45);
      CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_PREDATOR, v46);
      result = 1;
      goto LABEL_86;
    case 77:
      v47 = Cmd_ArgInt(1);
      v48 = CG_VisionSets_GetVisionName(v47);
      CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_THERMAL, v48);
      result = 1;
      goto LABEL_86;
    case 78:
      v49 = Cmd_ArgInt(1);
      v50 = CG_VisionSets_GetVisionName(v49);
      CG_VisionSetRegisterLeafByFile(&_RDI->cvsData, VISIONSET_LEAFTYPE_PAIN, v50);
      result = 1;
      goto LABEL_86;
    case 80:
      v28 = Cmd_ArgInt(2);
      if ( Cmd_ArgInt(1) )
        CG_View_StartWaterSheetFX(localClientNum, v28);
      else
        CG_View_StopWaterSheetFX(localClientNum);
      result = 1;
      goto LABEL_86;
    case 82:
      if ( Cmd_Argc() != 3 )
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_OpenMenu bad params\n");
        result = 1;
        goto LABEL_86;
      }
      v80 = Cmd_Argv(1);
      v81 = Cmd_Argv(2);
      v82 = atoi(v81);
      if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 612, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
        __debugbreak();
      if ( v82 < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 613, ASSERT_TYPE_ASSERT, "(clientNum >= -1)", (const char *)&queryFormat, "clientNum >= -1") )
        __debugbreak();
      if ( !*v80 )
        goto LABEL_113;
      v83 = LOCAL_CLIENT_0;
      if ( CL_GetLocalClientActiveCount() <= 0 )
        goto LABEL_113;
      while ( CG_GetLocalClientGlobals(v83)->clientNum != v82 )
      {
        if ( ++v83 >= CL_GetLocalClientActiveCount() )
        {
          result = 1;
          goto LABEL_86;
        }
      }
      LUI_OpenMenu(v83, v80, 0, 0, 1);
      result = 1;
      goto LABEL_86;
    case 90:
      CG_ServerCmd_SoundSubmix(localClientNum);
      result = 1;
      goto LABEL_86;
    case 98:
      if ( Cmd_Argc() != 2 )
      {
        Com_PrintError(14, "ERROR: CG_ServerCmds_ManualStreamMaterial expected a parameter (material index)\n");
        result = 1;
        goto LABEL_86;
      }
      v89 = Cmd_Argv(1);
      v90 = atoi(v89);
      v91 = CG_Draw_MaterialHandleForIndex(localClientNum, v90);
      if ( v91 )
      {
        Stream_SetMaterialTouchedUntilLoaded(v91);
        result = 1;
        goto LABEL_86;
      }
      Com_PrintError(14, "ERROR: CG_ServerCmds_ManualStreamMaterial invalid material %u\n", v90);
      goto LABEL_113;
    case 105:
      v9 = Cmd_Argc();
      if ( v9 <= 1 )
        goto LABEL_17;
      v10 = Cmd_Argv(1);
      if ( !v10 )
        goto LABEL_17;
      v11 = *v10;
      if ( !v11 )
        goto LABEL_17;
      if ( v11 == 97 )
      {
        if ( (unsigned int)(v9 - 5) <= 1 )
        {
          v12 = Cmd_ArgInt(2);
          SndEntHandle = CG_GenerateSndEntHandle(localClientNum, v12);
          v14 = Cmd_Argv(3);
          v15 = strtoul(v14, NULL, 16);
          v16 = Cmd_Argv(4);
          v17 = strtoul(v16, NULL, 16);
          if ( v9 == 6 )
            *(double *)&_XMM0 = Cmd_ArgFloat(5);
          else
            __asm { vxorps  xmm0, xmm0, xmm0 }
          __asm { vmovaps xmm3, xmm0; fadeTime }
          SND_SetEntContext(SndEntHandle, v15, v17, *(float *)&_XMM3);
          result = 1;
          goto LABEL_86;
        }
LABEL_17:
        Com_PrintError(14, "ERROR: CG_ServerCmd_SoundContext bad params\n");
        result = 1;
        goto LABEL_86;
      }
      if ( v11 != 98 || (unsigned int)(v9 - 4) > 1 )
        goto LABEL_17;
      v20 = Cmd_Argv(2);
      v21 = strtoul(v20, NULL, 16);
      v22 = Cmd_Argv(3);
      v23 = strtoul(v22, NULL, 16);
      v24 = v23;
      if ( v9 == 5 )
      {
        *(double *)&_XMM0 = Cmd_ArgFloat(4);
        __asm { vmovaps xmm2, xmm0; fadeTime }
        SND_SetContext(v21, v24, *(float *)&_XMM2);
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovaps xmm2, xmm0; fadeTime
        }
        SND_SetContext(v21, v23, *(float *)&_XMM2);
      }
      result = 1;
LABEL_86:
      _R11 = &v94;
      __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
      return result;
    case 109:
      CG_ServerCmd_AudioZone(localClientNum);
      result = 1;
      goto LABEL_86;
    case 112:
      v58 = Cmd_Argc();
      if ( v58 >= 3 )
      {
        v59 = Cmd_Argv(1);
        v60 = strtoul(v59, NULL, 16);
        v61 = Cmd_Argv(2);
        v62 = strtoul(v61, NULL, 16);
        v63 = v62;
        if ( v62 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned long>(unsigned long)", "signed", (int)v62, "unsigned", v62) )
          __debugbreak();
        v64 = v58 - 3;
        if ( v64 <= 96 )
        {
          if ( v64 > 0 )
          {
            v65 = 0i64;
            v66 = 3;
            do
            {
              v67 = Cmd_Argv(v66);
              assetIdPlaylist[v65] = strtoul(v67, NULL, 16);
              ++v66;
              ++v65;
            }
            while ( v65 < v64 );
          }
          if ( v63 )
            SND_StopMusicState(v60);
          else
            SND_SetMusicState(v60, assetIdPlaylist, v64);
          result = 1;
        }
        else
        {
          Com_PrintError(14, "ERROR: CG_ServerCmd_MusicState Too many params (music id's)\n");
          result = 1;
        }
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_MusicState bad params\n");
        result = 1;
      }
      goto LABEL_86;
    case 115:
      v68 = Cmd_ArgInt(1);
      *(double *)&_XMM0 = Cmd_ArgFloat(2);
      __asm { vmovaps xmm1, xmm0; lerp }
      SND_SetTimeScaleLerp(v68, *(const float *)&_XMM1);
      result = 1;
      goto LABEL_86;
    case 116:
      v70 = Cmd_Argc();
      if ( v70 == 2 )
      {
        v71 = Cmd_Argv(1);
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
          SND_ResetTimeScaleDefaults();
        if ( CG_SetTimeScaleByPreset(v71) )
        {
LABEL_113:
          result = 1;
        }
        else
        {
          Com_PrintError(14, "CG_ServerCmd_SoundTimeScaleTableCmd did not find an entry for preset with name %s", v71);
          result = 1;
        }
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_SoundTimeScaleTableCmd called with %i args\n", v70);
        result = 1;
      }
      goto LABEL_86;
    case 120:
      if ( Cmd_Argc() == 3 )
      {
        v72 = Cmd_Argv(1);
        v73 = strtoul(v72, NULL, 16);
        v74 = Cmd_ArgInt(2);
        SND_EnablePASpeaker(v73, v74 == 1);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_EnablePASpeaker bad params\n");
      }
      result = 1;
      goto LABEL_86;
    case 121:
      if ( Cmd_Argc() == 2 )
      {
        v75 = Cmd_ArgInt(1);
        CG_SND_PlayerBreathsEnable(localClientNum, v75 == 1);
      }
      else
      {
        Com_PrintError(14, "ERROR: CG_ServerCmd_PlayerBreathsEnable bad params\n");
      }
      result = 1;
      goto LABEL_86;
    default:
      goto LABEL_85;
  }
}

/*
==============
CG_ServerCmd_SoundSubmix
==============
*/

void __fastcall CG_ServerCmd_SoundSubmix(LocalClientNum_t localClientNum, double _XMM1_8)
{
  unsigned int v8; 
  int v9; 
  const char *v10; 
  __int64 v11; 
  const char *v17; 
  const char *v19; 
  const char *v26; 
  char v27; 
  char v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  unsigned int v33; 
  char v34; 
  const char *v35; 
  char v36; 
  char v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  unsigned int v42; 
  const char *v43; 
  const char *v44; 
  double v50; 
  double v51; 
  double v52; 

  v8 = Cmd_Argc();
  v9 = v8;
  if ( v8 - 2 > 3 )
  {
    Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix bad (%d) params, expecting 2-5\n", v8);
  }
  else
  {
    v10 = Cmd_Argv(1);
    v11 = -1i64;
    do
      ++v11;
    while ( v10[v11] );
    if ( v11 == 1 )
    {
      __asm
      {
        vmovaps [rsp+98h+var_18], xmm6
        vmovaps [rsp+98h+var_28], xmm7
        vmovaps [rsp+98h+var_38], xmm8
        vmovaps [rsp+98h+var_48], xmm9
        vmovaps [rsp+98h+var_58], xmm10
        vmovss  xmm10, cs:__real@bf800000
        vmovss  xmm8, cs:__real@3f800000
        vmovaps xmm6, xmm10
        vmovaps xmm7, xmm8
        vxorps  xmm9, xmm9, xmm9
      }
      switch ( *v10 )
      {
        case '0':
          goto $LN18_111;
        case '1':
          goto $LN15_119;
        case '2':
          if ( v9 != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 398, ASSERT_TYPE_ASSERT, "(argc == 5)", (const char *)&queryFormat, "argc == 5") )
            __debugbreak();
          v26 = Cmd_Argv(4);
          *(double *)&_XMM0 = atof(v26);
          __asm
          {
            vcvtsd2ss xmm7, xmm0, xmm0
            vcomiss xmm7, xmm9
          }
          if ( v27 )
            goto LABEL_19;
          __asm { vcomiss xmm7, xmm8 }
          if ( !(v27 | v28) )
          {
LABEL_19:
            v29 = Cmd_Argv(5);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Set scale (%s)\n", v29);
            __asm { vmovaps xmm7, xmm8 }
          }
$LN15_119:
          if ( v9 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 406, ASSERT_TYPE_ASSERT, "(argc >= 4)", (const char *)&queryFormat, "argc >= 4") )
            __debugbreak();
          v30 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v30);
          __asm
          {
            vcvtsd2ss xmm6, xmm0, xmm0
            vcomiss xmm6, xmm9
          }
          if ( v27 )
          {
            v31 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Set fadeTime (%s)\n", v31);
            __asm { vmovaps xmm6, xmm10 }
          }
$LN18_111:
          if ( v9 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 414, ASSERT_TYPE_ASSERT, "(argc >= 3)", (const char *)&queryFormat, "argc >= 3") )
            __debugbreak();
          goto LABEL_28;
        case '3':
          if ( v9 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 420, ASSERT_TYPE_ASSERT, "(argc == 4)", (const char *)&queryFormat, "argc == 4") )
            __debugbreak();
          __asm { vxorps  xmm6, xmm6, xmm6 }
          v35 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v35);
          __asm
          {
            vcvtsd2ss xmm7, xmm0, xmm0
            vcomiss xmm7, xmm9
          }
          if ( v36 )
            goto LABEL_34;
          __asm { vcomiss xmm7, xmm8 }
          if ( !(v36 | v37) )
          {
LABEL_34:
            v38 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Scale argument (%s)\n", v38);
            __asm { vmovaps xmm7, xmm8 }
          }
LABEL_28:
          v32 = Cmd_Argv(2);
          v33 = strtoul(v32, NULL, 16);
          v34 = 1;
          goto LABEL_44;
        case '4':
          goto $LN27_77;
        case '5':
          goto $LN9_199;
        case '6':
          if ( v9 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 385, ASSERT_TYPE_ASSERT, "(argc == 3)", (const char *)&queryFormat, "argc == 3") )
            __debugbreak();
          v17 = Cmd_Argv(2);
          *(double *)&_XMM0 = atof(v17);
          __asm
          {
            vcvtsd2ss xmm6, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcomiss xmm6, xmm1
          }
          if ( v27 )
          {
            v19 = Cmd_Argv(2);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid ClearAll fadeTime (%s)\n", v19);
            __asm { vmovaps xmm6, xmm10 }
          }
$LN9_199:
          __asm { vmovaps xmm1, xmm6; jumptable 0000000141D49B93 case 53 }
          SND_SubmixClearAllFromSource(SND_SUBMIX_TYPE_SCRIPT, *(float *)&_XMM1);
          break;
        case '7':
          if ( v9 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 433, ASSERT_TYPE_ASSERT, "(argc == 4)", (const char *)&queryFormat, "argc == 4") )
            __debugbreak();
          v39 = Cmd_Argv(3);
          *(double *)&_XMM0 = atof(v39);
          __asm
          {
            vcvtsd2ss xmm6, xmm0, xmm0
            vcomiss xmm6, xmm9
          }
          if ( v27 )
          {
            v40 = Cmd_Argv(3);
            Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid Clear fadeTime (%s)\n", v40);
            __asm { vmovaps xmm6, xmm10 }
          }
$LN27_77:
          if ( v9 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 441, ASSERT_TYPE_ASSERT, "(argc >= 3)", (const char *)&queryFormat, "argc >= 3") )
            __debugbreak();
          v41 = Cmd_Argv(2);
          v33 = strtoul(v41, NULL, 16);
          v34 = 0;
LABEL_44:
          v42 = v33;
          if ( v33 )
          {
            __asm
            {
              vcomiss xmm7, xmm9
              vcomiss xmm7, xmm8
              vmovsd  xmm0, cs:__real@3ff0000000000000
              vmovsd  [rsp+98h+var_60], xmm0
              vxorpd  xmm1, xmm1, xmm1
              vmovsd  [rsp+98h+var_68], xmm1
              vcvtss2sd xmm2, xmm7, xmm7
              vmovsd  [rsp+98h+var_70], xmm2
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_servercmds.cpp", 453, ASSERT_TYPE_ASSERT, "( (0.0f) ) <= ( scale ) && ( scale ) <= ( (1.0f) )", "scale not in [SND_SUBMIX_SCALE_MIN, SND_SUBMIX_SCALE_MAX]\n\t%g not in [%g, %g]", v50, v51, v52) )
              __debugbreak();
            __asm
            {
              vcomiss xmm6, xmm9
              vmovaps xmm2, xmm6; fadeTimeSec
            }
            if ( v34 )
            {
              __asm { vmovaps xmm3, xmm7; scale }
              SND_SubmixAddFromSource(SND_SUBMIX_TYPE_SCRIPT, v42, *(float *)&_XMM2, *(float *)&_XMM3);
            }
            else
            {
              SND_SubmixClearFromSource(SND_SUBMIX_TYPE_SCRIPT, v42, *(float *)&_XMM2);
            }
          }
          else
          {
            v43 = Cmd_Argv(2);
            v44 = "Clear";
            if ( v34 )
              v44 = "Set";
            Com_PrintError(v42 + 14, "ERROR: CG_ServerCmd_SoundSubmix invalid %s submix hash (%s)\n", v44, v43);
          }
          break;
        default:
          Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid subcmd (%c)\n", (unsigned int)*v10);
          break;
      }
      __asm
      {
        vmovaps xmm9, [rsp+98h+var_48]
        vmovaps xmm8, [rsp+98h+var_38]
        vmovaps xmm7, [rsp+98h+var_28]
        vmovaps xmm6, [rsp+98h+var_18]
        vmovaps xmm10, [rsp+98h+var_58]
      }
    }
    else
    {
      Com_PrintError(14, "ERROR: CG_ServerCmd_SoundSubmix invalid subcmd (%s)\n", v10);
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

