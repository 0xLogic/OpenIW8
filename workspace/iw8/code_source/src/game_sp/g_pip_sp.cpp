/*
==============
Scr_FreePIPConstStrings
==============
*/

void __fastcall Scr_FreePIPConstStrings(PipElement *pip)
{
  ?Scr_FreePIPConstStrings@@YAXPEAUPipElement@@@Z(pip);
}

/*
==============
GScr_AddFieldsForPIPElems
==============
*/

void __fastcall GScr_AddFieldsForPIPElems(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForPIPElems@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_PIPSP_CreateNew
==============
*/

void __fastcall GScr_PIPSP_CreateNew(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_PIPSP_CreateNew@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_AddPIP
==============
*/

void __fastcall Scr_AddPIP(scrContext_t *scrContext, PipElement *pip)
{
  ?Scr_AddPIP@@YAXAEAUscrContext_t@@PEAUPipElement@@@Z(scrContext, pip);
}

/*
==============
Scr_SetPIPElemField
==============
*/

void __fastcall Scr_SetPIPElemField(scrContext_t *scrContext, int entnum, int offset)
{
  ?Scr_SetPIPElemField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
PIP_DestroyAll
==============
*/

void PIP_DestroyAll(void)
{
  ?PIP_DestroyAll@@YAXXZ();
}

/*
==============
Scr_FreePIP
==============
*/

void __fastcall Scr_FreePIP(PipElement *pip)
{
  ?Scr_FreePIP@@YAXPEAUPipElement@@@Z(pip);
}

/*
==============
PIP_InitAll
==============
*/

void PIP_InitAll(void)
{
  ?PIP_InitAll@@YAXXZ();
}

/*
==============
Scr_GetPIPElemField
==============
*/

void __fastcall Scr_GetPIPElemField(scrContext_t *scrContext, int entnum, int offset)
{
  ?Scr_GetPIPElemField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
G_PIP_Read
==============
*/

void __fastcall G_PIP_Read(SaveGame *save)
{
  ?G_PIP_Read@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_PIP_Write
==============
*/

void __fastcall G_PIP_Write(MemoryFile *memFile)
{
  ?G_PIP_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
PIP_SetX
==============
*/
void PIP_SetX(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f", "set_pip_x", pipElem->x);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetY
==============
*/
void PIP_SetY(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f", "set_pip_y", pipElem->y);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetWidth
==============
*/
void PIP_SetWidth(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f", "set_pip_width", pipElem->width);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetHeight
==============
*/
void PIP_SetHeight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f", "set_pip_height", pipElem->height);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetPipEnabled
==============
*/
void PIP_SetPipEnabled(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %i", "set_pip_enabled", (unsigned int)pipElem->pipEnabled);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetPipFreeCamera
==============
*/
void PIP_SetPipFreeCamera(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %i", "set_pip_free_camera", (unsigned int)pipElem->pipFreeCamera);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetPipRenderToTexture
==============
*/
void PIP_SetPipRenderToTexture(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %i", "set_pip_render_to_texture", (unsigned int)pipElem->pipRenderToTexture);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetOrigin
==============
*/
void PIP_SetOrigin(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f %f %f", "set_pip_origin", pipElem->origin.v[0], pipElem->origin.v[1], pipElem->origin.v[2]);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetOriginOffset
==============
*/
void PIP_SetOriginOffset(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f %f %f", "set_pip_origin_offset", pipElem->originOffset.v[0], pipElem->originOffset.v[1], pipElem->originOffset.v[2]);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetAnglesOffset
==============
*/
void PIP_SetAnglesOffset(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %f %f %f", "set_pip_angles_offset", pipElem->anglesOffset.v[0], pipElem->anglesOffset.v[1], pipElem->anglesOffset.v[2]);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetFov
==============
*/
void PIP_SetFov(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float fov; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 

  fov = pipElem->fov;
  if ( fov < 1.0 || fov > 179.0 )
  {
    Scr_Error(COM_ERR_2953, scrContext, "1 >= pip fov <= 179");
    fov = pipElem->fov;
  }
  v5 = j_va("%s %f", "set_pip_fov", fov);
  v6 = v5;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
PIP_SetDofNear
==============
*/
void PIP_SetDofNear(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  Com_PrintWarning(24, "PIP_SetDofNear: Legacy DoF controls deprecated. Please update script to physical DoF controls!\n", offset);
}

/*
==============
PIP_SetDofFar
==============
*/
void PIP_SetDofFar(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  Com_PrintWarning(24, "PIP_SetDofFar: Legacy DoF controls deprecated. Please update script to physical DoF controls!\n", offset);
}

/*
==============
PIP_SetLook
==============
*/
void PIP_SetLook(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float v3; 
  float v5; 
  float v6; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v3 = pipElem->look.v[0];
  if ( (LODWORD(v3) & 0x7F800000) == 2139095040 || (v5 = pipElem->look.v[1], (LODWORD(v5) & 0x7F800000) == 2139095040) || (v6 = pipElem->look.v[2], (LODWORD(v6) & 0x7F800000) == 2139095040) )
  {
    Scr_Error(COM_ERR_2960, scrContext, "PIP look direction being set to NANs.");
    v6 = pipElem->look.v[2];
    v5 = pipElem->look.v[1];
    v3 = pipElem->look.v[0];
  }
  v7 = j_va("%s %f %f %f", "set_pip_look", v3, v5, v6);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetUp
==============
*/
void PIP_SetUp(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float v3; 
  float v5; 
  float v6; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v3 = pipElem->up.v[0];
  if ( (LODWORD(v3) & 0x7F800000) == 2139095040 || (v5 = pipElem->up.v[1], (LODWORD(v5) & 0x7F800000) == 2139095040) || (v6 = pipElem->up.v[2], (LODWORD(v6) & 0x7F800000) == 2139095040) )
  {
    Scr_Error(COM_ERR_2961, scrContext, "PIP up direction being set to NANs.");
    v6 = pipElem->up.v[2];
    v5 = pipElem->up.v[1];
    v3 = pipElem->up.v[0];
  }
  v7 = j_va("%s %f %f %f", "set_pip_up", v3, v5, v6);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetRight
==============
*/
void PIP_SetRight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float v3; 
  float v5; 
  float v6; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v3 = pipElem->right.v[0];
  if ( (LODWORD(v3) & 0x7F800000) == 2139095040 || (v5 = pipElem->right.v[1], (LODWORD(v5) & 0x7F800000) == 2139095040) || (v6 = pipElem->right.v[2], (LODWORD(v6) & 0x7F800000) == 2139095040) )
  {
    Scr_Error(COM_ERR_2962, scrContext, "PIP right direction being set to NANs.");
    v6 = pipElem->right.v[2];
    v5 = pipElem->right.v[1];
    v3 = pipElem->right.v[0];
  }
  v7 = j_va("%s %f %f %f", "set_pip_right", v3, v5, v6);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetThermalBodyMaterialName
==============
*/
void PIP_SetThermalBodyMaterialName(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->thermalBodyMaterialName);
  v5 = j_va("%s %s", "set_pip_thermal_body_material", v4);
  v6 = v5;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
PIP_SetEntity
==============
*/
void PIP_SetEntity(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  gentity_s *attachedEntity; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 
  SvClient *v8; 

  attachedEntity = pipElem->attachedEntity;
  if ( attachedEntity )
  {
    v5 = j_va("%s %i", "pip_link_to_entity", (unsigned int)attachedEntity->s.number);
    v6 = v5;
    if ( pipElem->clientNum == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
    }
    else
    {
      CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
    }
  }
  else if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "pip_unlink");
  }
  else
  {
    v8 = SvClient::GetCommonClient(pipElem->clientNum);
    v8->SendServerCommand(v8, SV_CMD_RELIABLE, "pip_unlink");
  }
}

/*
==============
PIP_SetTagname
==============
*/
void PIP_SetTagname(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->attachedTagname);
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v5 = GConfigStrings::ms_gConfigStrings->GetClientTagIndex(GConfigStrings::ms_gConfigStrings, v4);
  if ( v5 <= 0 )
  {
    Com_PrintError(1, "PIP_SetTagname: Could not find tag ID for '%s'\n", v4);
  }
  else
  {
    v6 = j_va("%s %i", "pip_link_to_tagname", (unsigned int)v5);
    v7 = v6;
    if ( pipElem->clientNum == -1 )
    {
      SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v6);
    }
    else
    {
      CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v7);
    }
  }
}

/*
==============
PIP_SetNearZ
==============
*/
void PIP_SetNearZ(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float nearZ; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 

  nearZ = pipElem->nearZ;
  if ( nearZ < 0.0 )
  {
    Scr_Error(COM_ERR_2963, scrContext, "pip near z must be >= 0");
    nearZ = pipElem->nearZ;
  }
  v5 = j_va("%s %f", "set_pip_nearz", nearZ);
  v6 = v5;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
PIP_SetBlurRadius
==============
*/
void PIP_SetBlurRadius(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float blurRadius; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 

  blurRadius = pipElem->blurRadius;
  if ( blurRadius < 0.0 )
  {
    Scr_Error(COM_ERR_2964, scrContext, "pip blur radius must be >= 0");
    blurRadius = pipElem->blurRadius;
  }
  v5 = j_va("%s %f", "set_pip_blur", blurRadius);
  v6 = v5;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
PIP_SetLOD
==============
*/
void PIP_SetLOD(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  float lod; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  SvClient *CommonClient; 

  lod = pipElem->lod;
  if ( lod < 1.0 )
  {
    v6 = j_va("LOD over-ride must be >= %f", DOUBLE_1_0, offset);
    Scr_Error(COM_ERR_2965, scrContext, v6);
    lod = pipElem->lod;
  }
  if ( lod > 2048.0 )
  {
    v7 = j_va("LOD over-ride must be <= %f", DOUBLE_2048_0, offset);
    Scr_Error(COM_ERR_2966, scrContext, v7);
    lod = pipElem->lod;
  }
  v8 = j_va("%s %f", "set_pip_lod", lod);
  v9 = v8;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v8);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v9);
  }
}

/*
==============
PIP_SetAspectRatio
==============
*/
void PIP_SetAspectRatio(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  float aspectRatio; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  SvClient *CommonClient; 

  aspectRatio = pipElem->aspectRatio;
  if ( aspectRatio < 0.1 )
  {
    v6 = j_va("PIP aspect ratio must be >= %f", DOUBLE_0_1000000014901161, offset);
    Scr_Error(COM_ERR_2967, scrContext, v6);
    aspectRatio = pipElem->aspectRatio;
  }
  if ( aspectRatio > 20.0 )
  {
    v7 = j_va("PIP aspect ratio must be <= %f", DOUBLE_20_0, offset);
    Scr_Error(COM_ERR_2968, scrContext, v7);
    aspectRatio = pipElem->aspectRatio;
  }
  v8 = j_va("%s %f", "set_pip_aspect", aspectRatio);
  v9 = v8;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v8);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v9);
  }
}

/*
==============
PIP_SetCullDist
==============
*/
void PIP_SetCullDist(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  float cullDistance; 
  const char *v5; 
  const char *v6; 
  SvClient *CommonClient; 

  cullDistance = pipElem->cullDistance;
  if ( cullDistance < 0.0 )
  {
    Scr_Error(COM_ERR_2969, scrContext, "pip cull distance must be >= 0");
    cullDistance = pipElem->cullDistance;
  }
  v5 = j_va("%s %f", "set_pip_cull_dist", cullDistance);
  v6 = v5;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v6);
  }
}

/*
==============
PIP_SetShadowMapsEnabled
==============
*/
void PIP_SetShadowMapsEnabled(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v5; 
  SvClient *CommonClient; 

  v4 = j_va("%s %i", "set_pip_shadowmaps", (unsigned int)pipElem->shadowMapsEnabled);
  v5 = v4;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v4);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v5);
  }
}

/*
==============
PIP_SetVisionSetNaked
==============
*/
void PIP_SetVisionSetNaked(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->visionSetNaked);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v7 = j_va("%s %s %i", "pip_visionset_naked", v4, (unsigned int)(int)*(float *)&_XMM4);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetVisionSetNight
==============
*/
void PIP_SetVisionSetNight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->visionSetNight);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v7 = j_va("%s %s %i", "pip_visionset_night", v4, (unsigned int)(int)*(float *)&_XMM4);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetVisionSetMissileCam
==============
*/
void PIP_SetVisionSetMissileCam(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->visionSetMissileCam);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v7 = j_va("%s %s %i", "pip_visionset_missilecam", v4, (unsigned int)(int)*(float *)&_XMM4);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetVisionSetThermal
==============
*/
void PIP_SetVisionSetThermal(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->visionSetThermal);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v7 = j_va("%s %s %i", "pip_visionset_thermal", v4, (unsigned int)(int)*(float *)&_XMM4);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetVisionSetPain
==============
*/
void PIP_SetVisionSetPain(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v4; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  v4 = SL_ConvertToString(pipElem->visionSetPain);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v7 = j_va("%s %s %i", "pip_visionset_pain", v4, (unsigned int)(int)*(float *)&_XMM4);
  v8 = v7;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetActiveVisionSet
==============
*/
void PIP_SetActiveVisionSet(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  double activeVisionSetDuration; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  SvClient *CommonClient; 

  activeVisionSetDuration = pipElem->activeVisionSetDuration;
  v5 = SL_ConvertToString(pipElem->activeVisionSet);
  v6 = j_va("pip_enable_visionset_%s %f", v5, activeVisionSetDuration);
  v7 = v6;
  if ( pipElem->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v6);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(pipElem->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v7);
  }
}

/*
==============
GScr_AddFieldsForPIPElems
==============
*/
void GScr_AddFieldsForPIPElems(scrContext_t *scrContext)
{
  const pipelem_viewparams_field *i; 
  __int64 v3; 

  for ( i = fields_1; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&fields_1[0].canonicalString) / 48;
    if ( (v3 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 777, ASSERT_TYPE_ASSERT, "(((f - fields) & ENTFIELD_MASK) == ENTFIELD_ENTITY)", (const char *)&queryFormat, "((f - fields) & ENTFIELD_MASK) == ENTFIELD_ENTITY") )
      __debugbreak();
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 778, ASSERT_TYPE_ASSERT, "((f - fields) == (unsigned short)( f - fields ))", (const char *)&queryFormat, "(f - fields) == (unsigned short)( f - fields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_PIP, *i->name, i->canonicalString, (unsigned __int16)v3);
  }
}

/*
==============
GScr_PIPSP_CreateNew
==============
*/
void GScr_PIPSP_CreateNew(scrContext_t *scrContext, scr_entref_t entref)
{
  PipElement *v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  const char *v6; 
  int number; 
  PipElement *v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 

  v2 = NULL;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 984, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( !v5->client )
    {
      v6 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v6);
    }
  }
  number = v5->s.number;
  v8 = g_pipParams;
  v9 = 0;
  while ( v8->clientNum >= 0 )
  {
    ++v9;
    ++v8;
    if ( v9 )
      goto LABEL_13;
  }
  v2 = &g_pipParams[v9];
  PIP_SetDefaults(v2);
  v2->activeVisionSet = SL_GetString("naked", 0);
  v2->clientNum = number;
  if ( v2 )
    goto LABEL_15;
LABEL_13:
  Scr_Error(COM_ERR_2970, scrContext, "Pip already allocated for this client");
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 940, ASSERT_TYPE_ASSERT, "(pip)", (const char *)&queryFormat, "pip") )
    __debugbreak();
LABEL_15:
  v10 = v2 - g_pipParams;
  if ( (_DWORD)v10 )
  {
    LODWORD(v11) = v2 - g_pipParams;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(unsigned)( pip - g_pipParams ) < (unsigned)( 1 )", "pip - g_pipParams doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", v11, 1) )
      __debugbreak();
  }
  if ( v2->clientNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 942, ASSERT_TYPE_ASSERT, "(pip->clientNum >= 0)", (const char *)&queryFormat, "pip->clientNum >= 0") )
    __debugbreak();
  Scr_AddEntityNum(scrContext, v10, ENTITY_CLASS_PIP);
}

/*
==============
G_PIP_Read
==============
*/
void G_PIP_Read(SaveGame *save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 1011, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  G_SaveFieldSP_ReadStruct(saveFields, (unsigned __int8 *)g_pipParams, 224, save);
}

/*
==============
G_PIP_Write
==============
*/
void G_PIP_Write(MemoryFile *memFile)
{
  __m256i v2; 
  _BYTE dest[224]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 998, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = *(__m256i *)&g_pipParams[0].right.z;
  *(__m256i *)dest = *(__m256i *)&g_pipParams[0].clientNum;
  *(__m256i *)&dest[32] = *(__m256i *)g_pipParams[0].origin.v;
  *(__m256i *)&dest[64] = *(__m256i *)&g_pipParams[0].anglesOffset.z;
  *(__m256i *)&dest[96] = *(__m256i *)g_pipParams[0].look.v;
  *(__m256i *)&dest[128] = v2;
  *(__m256i *)&dest[160] = *(__m256i *)&g_pipParams[0].visionSetNightDuration;
  *(__m256i *)&dest[192] = *(__m256i *)&g_pipParams[0].thermalBodyMaterialName;
  G_SaveFieldSP_WriteStruct(saveFields, (const unsigned __int8 *)g_pipParams, dest, 224, memFile);
}

/*
==============
PIP_DestroyAll
==============
*/
void PIP_DestroyAll(void)
{
  scrContext_t *v0; 
  __int64 *p_ofs; 

  if ( g_pipParams[0].clientNum >= 0 )
  {
    v0 = ScriptContext_Server();
    Scr_NotifyNum(v0, 0, ENTITY_CLASS_PIP, scr_const.death, 0, LOCAL_CLIENT_0);
    Scr_NotifyNum(v0, 0, ENTITY_CLASS_PIP, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
    p_ofs = &fields_1[0].ofs;
    do
    {
      if ( *((_DWORD *)p_ofs + 2) == 5 )
        Scr_SetString((scr_string_t *)((char *)g_pipParams + *p_ofs), (scr_string_t)0);
      p_ofs += 6;
    }
    while ( *(p_ofs - 2) );
    Scr_FreeEntityNum(v0, 0, ENTITY_CLASS_PIP);
    g_pipParams[0].clientNum = -1;
  }
}

/*
==============
PIP_InitAll
==============
*/
void PIP_InitAll(void)
{
  double FarPlaneDist; 

  g_pipParams[0].width = FLOAT_100_0;
  g_pipParams[0].height = FLOAT_50_0;
  g_pipParams[0].origin = orIdentity.origin;
  g_pipParams[0].originOffset = orIdentity.origin;
  g_pipParams[0].anglesOffset = orIdentity.origin;
  g_pipParams[0].right = orIdentity.axis.m[0];
  *(_OWORD *)g_pipParams[0].look.v = *(_OWORD *)orIdentity.axis.row1.v;
  g_pipParams[0].up.v[1] = orIdentity.axis.m[2].v[1];
  g_pipParams[0].up.v[2] = orIdentity.axis.m[2].v[2];
  g_pipParams[0].fov = FLOAT_65_0;
  *(_OWORD *)&g_pipParams[0].dofNear.z = 0i64;
  g_pipParams[0].x = 0.0;
  g_pipParams[0].y = 0.0;
  g_pipParams[0].dofNear.v[0] = 0.0;
  g_pipParams[0].dofNear.v[1] = 0.0;
  g_pipParams[0].nearZ = 0.0;
  g_pipParams[0].blurRadius = 0.0;
  g_pipParams[0].lod = FLOAT_1_0;
  g_pipParams[0].aspectRatio = FLOAT_1_0;
  *(_QWORD *)&g_pipParams[0].pipEnabled = 0i64;
  g_pipParams[0].pipRenderToTexture = 0;
  *(_QWORD *)&g_pipParams[0].thermalBodyMaterialName = 0i64;
  g_pipParams[0].attachedEntity = NULL;
  FarPlaneDist = R_GetFarPlaneDist();
  g_pipParams[0].cullDistance = *(float *)&FarPlaneDist;
  *(_OWORD *)&g_pipParams[0].visionSetNightDuration = _xmm;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  g_pipParams[0].visionSetNakedDuration = FLOAT_1_0;
  g_pipParams[0].activeVisionSetDuration = FLOAT_1_0;
  *(_OWORD *)&g_pipParams[0].visionSetMissileCam = _XMM0;
  g_pipParams[0].shadowMapsEnabled = 1;
  *(_QWORD *)&g_pipParams[0].visionSetNaked = 0i64;
  g_pipParams[0].clientNum = -1;
}

/*
==============
PIP_SetDefaults
==============
*/
void PIP_SetDefaults(PipElement *pip)
{
  double FarPlaneDist; 

  pip->width = 100.0;
  *(_QWORD *)&pip->thermalBodyMaterialName = 0i64;
  pip->attachedEntity = NULL;
  *(_QWORD *)&pip->x = 0i64;
  *(_QWORD *)&pip->pipFreeCamera = 0i64;
  *(_QWORD *)&pip->height = 1112014848i64;
  pip->origin = orIdentity.origin;
  pip->originOffset = orIdentity.origin;
  pip->anglesOffset = orIdentity.origin;
  pip->right = orIdentity.axis.m[0];
  *(_BYTE (*)[24])pip->look.v = *(_BYTE (*)[24])orIdentity.axis.row1.v;
  *(_OWORD *)&pip->fov = 0x42820000ui64;
  *(_QWORD *)pip->dofFar.v = 0i64;
  pip->dofFar.v[2] = 0.0;
  *(_QWORD *)&pip->thermalBodyMaterialName = 0i64;
  pip->attachedEntity = NULL;
  *(_QWORD *)&pip->nearZ = 0i64;
  pip->lod = 1.0;
  pip->aspectRatio = 1.0;
  FarPlaneDist = R_GetFarPlaneDist();
  pip->cullDistance = *(float *)&FarPlaneDist;
  pip->shadowMapsEnabled = 1;
  pip->visionSetNakedDuration = 1.0;
  pip->visionSetNightDuration = 1.0;
  pip->visionSetMissileCamDuration = 1.0;
  pip->visionSetThermalDuration = 1.0;
  pip->visionSetPainDuration = 1.0;
  *(_QWORD *)&pip->visionSetNaked = 0i64;
  *(_QWORD *)&pip->visionSetMissileCam = 0i64;
  *(_QWORD *)&pip->visionSetPain = 0i64;
  pip->activeVisionSetDuration = 1.0;
}

/*
==============
Scr_AddPIP
==============
*/
void Scr_AddPIP(scrContext_t *scrContext, PipElement *pip)
{
  signed __int64 v4; 
  __int64 v5; 

  if ( !pip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 940, ASSERT_TYPE_ASSERT, "(pip)", (const char *)&queryFormat, "pip") )
    __debugbreak();
  v4 = pip - g_pipParams;
  if ( (_DWORD)v4 )
  {
    LODWORD(v5) = pip - g_pipParams;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(unsigned)( pip - g_pipParams ) < (unsigned)( 1 )", "pip - g_pipParams doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", v5, 1) )
      __debugbreak();
  }
  if ( pip->clientNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 942, ASSERT_TYPE_ASSERT, "(pip->clientNum >= 0)", (const char *)&queryFormat, "pip->clientNum >= 0") )
    __debugbreak();
  Scr_AddEntityNum(scrContext, v4, ENTITY_CLASS_PIP);
}

/*
==============
Scr_FreePIP
==============
*/
void Scr_FreePIP(PipElement *pip)
{
  signed __int64 v2; 
  scrContext_t *v3; 
  __int64 *p_ofs; 
  __int64 localClientNum; 

  if ( !pip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 923, ASSERT_TYPE_ASSERT, "(pip)", (const char *)&queryFormat, "pip") )
    __debugbreak();
  v2 = pip - g_pipParams;
  if ( (_DWORD)v2 )
  {
    LODWORD(localClientNum) = pip - g_pipParams;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( pip - g_pipParams ) < (unsigned)( 1 )", "pip - g_pipParams doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", localClientNum, 1) )
      __debugbreak();
  }
  if ( pip->clientNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 925, ASSERT_TYPE_ASSERT, "(pip->clientNum >= 0)", (const char *)&queryFormat, "pip->clientNum >= 0") )
    __debugbreak();
  v3 = ScriptContext_Server();
  Scr_NotifyNum(v3, v2, ENTITY_CLASS_PIP, scr_const.death, 0, LOCAL_CLIENT_0);
  Scr_NotifyNum(v3, v2, ENTITY_CLASS_PIP, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
  p_ofs = &fields_1[0].ofs;
  do
  {
    if ( *((_DWORD *)p_ofs + 2) == 5 )
      Scr_SetString((scr_string_t *)((char *)pip + *p_ofs), (scr_string_t)0);
    p_ofs += 6;
  }
  while ( *(p_ofs - 2) );
  Scr_FreeEntityNum(v3, v2, ENTITY_CLASS_PIP);
}

/*
==============
Scr_FreePIPConstStrings
==============
*/
void Scr_FreePIPConstStrings(PipElement *pip)
{
  __int64 *p_ofs; 

  if ( fields_1[0].name )
  {
    p_ofs = &fields_1[0].ofs;
    do
    {
      if ( *((_DWORD *)p_ofs + 2) == 5 )
        Scr_SetString((scr_string_t *)((char *)pip + *p_ofs), (scr_string_t)0);
      p_ofs += 6;
    }
    while ( *(p_ofs - 2) );
  }
}

/*
==============
Scr_GetPIPElemField
==============
*/
void Scr_GetPIPElemField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 *v6; 
  void (__fastcall *getter)(scrContext_t *, PipElement *, int); 

  v3 = offset;
  v4 = entnum;
  if ( (unsigned int)offset >= 0x25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 874, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  if ( (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 875, ASSERT_TYPE_ASSERT, "((unsigned)entnum < 1)", (const char *)&queryFormat, "(unsigned)entnum < MAX_PIP_VIEWS") )
    __debugbreak();
  v6 = (unsigned __int8 *)&g_pipParams[v4];
  Scr_GetGenericField(scrContext, v6, fields_1[v3].type, fields_1[v3].ofs);
  getter = fields_1[v3].getter;
  if ( getter )
    getter(scrContext, (PipElement *)v6, v3);
}

/*
==============
Scr_SetPIPElemField
==============
*/
void Scr_SetPIPElemField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 *v6; 
  void (__fastcall *setter)(scrContext_t *, PipElement *, int); 

  v3 = offset;
  v4 = entnum;
  if ( (unsigned int)offset >= 0x25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 893, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  if ( (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 894, ASSERT_TYPE_ASSERT, "((unsigned)entnum < 1)", (const char *)&queryFormat, "(unsigned)entnum < MAX_PIP_VIEWS") )
    __debugbreak();
  v6 = (unsigned __int8 *)&g_pipParams[v4];
  Scr_SetGenericField(scrContext, v6, fields_1[v3].type, fields_1[v3].ofs);
  setter = fields_1[v3].setter;
  if ( setter )
    setter(scrContext, (PipElement *)v6, v3);
}

