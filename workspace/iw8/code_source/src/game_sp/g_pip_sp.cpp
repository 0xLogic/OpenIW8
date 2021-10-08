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
  PipElement *v5; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+4]
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v5 = pipElem;
  __asm { vmovq   r8, xmm2 }
  v7 = j_va("%s %f", "set_pip_x", _R8);
  v8 = v7;
  if ( v5->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetY
==============
*/
void PIP_SetY(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v5; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+8]
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v5 = pipElem;
  __asm { vmovq   r8, xmm2 }
  v7 = j_va("%s %f", "set_pip_y", _R8);
  v8 = v7;
  if ( v5->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetWidth
==============
*/
void PIP_SetWidth(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v5; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+0Ch]
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v5 = pipElem;
  __asm { vmovq   r8, xmm2 }
  v7 = j_va("%s %f", "set_pip_width", _R8);
  v8 = v7;
  if ( v5->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
  }
}

/*
==============
PIP_SetHeight
==============
*/
void PIP_SetHeight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v5; 
  const char *v7; 
  const char *v8; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+10h]
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v5 = pipElem;
  __asm { vmovq   r8, xmm2 }
  v7 = j_va("%s %f", "set_pip_height", _R8);
  v8 = v7;
  if ( v5->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v8);
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
  PipElement *v8; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+24h]
    vmovss  xmm2, dword ptr [rdx+20h]
    vmovss  xmm0, dword ptr [rdx+28h]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v8 = pipElem;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_origin", _R8, _R9, v15);
  v13 = v12;
  if ( v8->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v8->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetOriginOffset
==============
*/
void PIP_SetOriginOffset(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v8; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+30h]
    vmovss  xmm2, dword ptr [rdx+2Ch]
    vmovss  xmm0, dword ptr [rdx+34h]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v8 = pipElem;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_origin_offset", _R8, _R9, v15);
  v13 = v12;
  if ( v8->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v8->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetAnglesOffset
==============
*/
void PIP_SetAnglesOffset(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v8; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+3Ch]
    vmovss  xmm2, dword ptr [rdx+38h]
    vmovss  xmm0, dword ptr [rdx+40h]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v8 = pipElem;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_angles_offset", _R8, _R9, v15);
  v13 = v12;
  if ( v8->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v8->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetFov
==============
*/
void PIP_SetFov(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v8; 
  const char *v9; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+44h]
    vcomiss xmm0, cs:__real@3f800000
  }
  _RBX = pipElem;
  __asm { vcomiss xmm0, cs:__real@43330000 }
  Scr_Error(COM_ERR_2953, scrContext, "1 >= pip fov <= 179");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+44h]
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r8, xmm2
  }
  v8 = j_va("%s %f", "set_pip_fov", _R8);
  v9 = v8;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v8);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v9);
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
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+60h]
    vmovss  [rsp+38h+arg_8], xmm2
  }
  _RBX = pipElem;
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+64h]
    vmovss  [rsp+38h+arg_8], xmm1
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+68h]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_4:
    Scr_Error(COM_ERR_2960, scrContext, "PIP look direction being set to NANs.");
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+68h]
      vmovss  xmm1, dword ptr [rbx+64h]
      vmovss  xmm2, dword ptr [rbx+60h]
    }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_look", _R8, _R9, v15);
  v13 = v12;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetUp
==============
*/
void PIP_SetUp(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+6Ch]
    vmovss  [rsp+38h+arg_8], xmm2
  }
  _RBX = pipElem;
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+70h]
    vmovss  [rsp+38h+arg_8], xmm1
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+74h]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_4:
    Scr_Error(COM_ERR_2961, scrContext, "PIP up direction being set to NANs.");
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+74h]
      vmovss  xmm1, dword ptr [rbx+70h]
      vmovss  xmm2, dword ptr [rbx+6Ch]
    }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_up", _R8, _R9, v15);
  v13 = v12;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetRight
==============
*/
void PIP_SetRight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+78h]
    vmovss  [rsp+38h+arg_8], xmm2
  }
  _RBX = pipElem;
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+7Ch]
    vmovss  [rsp+38h+arg_8], xmm1
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+80h]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_4:
    Scr_Error(COM_ERR_2962, scrContext, "PIP right direction being set to NANs.");
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+80h]
      vmovss  xmm1, dword ptr [rbx+7Ch]
      vmovss  xmm2, dword ptr [rbx+78h]
    }
  }
  __asm
  {
    vcvtss2sd xmm3, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm0
  }
  v12 = j_va("%s %f %f %f", "set_pip_right", _R8, _R9, v15);
  v13 = v12;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
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
  PipElement *v6; 
  const char *v9; 
  const char *v10; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx+84h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  v6 = pipElem;
  __asm
  {
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  v9 = j_va("%s %f", "set_pip_nearz", _R8);
  v10 = v9;
  if ( v6->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v6->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v10);
  }
}

/*
==============
PIP_SetBlurRadius
==============
*/
void PIP_SetBlurRadius(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v6; 
  const char *v9; 
  const char *v10; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx+88h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  v6 = pipElem;
  __asm
  {
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  v9 = j_va("%s %f", "set_pip_blur", _R8);
  v10 = v9;
  if ( v6->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v6->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v10);
  }
}

/*
==============
PIP_SetLOD
==============
*/
void PIP_SetLOD(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  const char *v8; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8Ch]
    vcomiss xmm0, cs:__real@3f800000
  }
  _RBX = pipElem;
  __asm
  {
    vcomiss xmm0, cs:__real@45000000
    vmovsd  xmm1, cs:__real@40a0000000000000
    vmovq   rdx, xmm1
  }
  v8 = j_va("LOD over-ride must be <= %f", _RDX, offset);
  Scr_Error(COM_ERR_2966, scrContext, v8);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r8, xmm2
  }
  v12 = j_va("%s %f", "set_pip_lod", _R8);
  v13 = v12;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetAspectRatio
==============
*/
void PIP_SetAspectRatio(scrContext_t *scrContext, PipElement *pipElem, __int64 offset)
{
  const char *v8; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+90h]
    vcomiss xmm0, cs:__real@3dcccccd
  }
  _RBX = pipElem;
  __asm
  {
    vcomiss xmm0, cs:__real@41a00000
    vmovsd  xmm1, cs:__real@4034000000000000
    vmovq   rdx, xmm1
  }
  v8 = j_va("PIP aspect ratio must be <= %f", _RDX, offset);
  Scr_Error(COM_ERR_2968, scrContext, v8);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r8, xmm2
  }
  v12 = j_va("%s %f", "set_pip_aspect", _R8);
  v13 = v12;
  if ( _RBX->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(_RBX->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetCullDist
==============
*/
void PIP_SetCullDist(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v6; 
  const char *v9; 
  const char *v10; 
  SvClient *CommonClient; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx+94h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  v6 = pipElem;
  __asm
  {
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  v9 = j_va("%s %f", "set_pip_cull_dist", _R8);
  v10 = v9;
  if ( v6->clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v6->clientNum);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v10);
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
  PipElement *v4; 
  const char *v6; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+9Ch]
  }
  v6 = SL_ConvertToString(pipElem->visionSetNaked);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si r9d, xmm4
  }
  v12 = j_va("%s %s %i", "pip_visionset_naked", v6, _R9);
  v13 = v12;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetVisionSetNight
==============
*/
void PIP_SetVisionSetNight(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v4; 
  const char *v6; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+0A0h]
  }
  v6 = SL_ConvertToString(pipElem->visionSetNight);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si r9d, xmm4
  }
  v12 = j_va("%s %s %i", "pip_visionset_night", v6, _R9);
  v13 = v12;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetVisionSetMissileCam
==============
*/
void PIP_SetVisionSetMissileCam(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v4; 
  const char *v6; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+0A4h]
  }
  v6 = SL_ConvertToString(pipElem->visionSetMissileCam);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si r9d, xmm4
  }
  v12 = j_va("%s %s %i", "pip_visionset_missilecam", v6, _R9);
  v13 = v12;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetVisionSetThermal
==============
*/
void PIP_SetVisionSetThermal(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v4; 
  const char *v6; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+0A8h]
  }
  v6 = SL_ConvertToString(pipElem->visionSetThermal);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si r9d, xmm4
  }
  v12 = j_va("%s %s %i", "pip_visionset_thermal", v6, _R9);
  v13 = v12;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetVisionSetPain
==============
*/
void PIP_SetVisionSetPain(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v4; 
  const char *v6; 
  const char *v12; 
  const char *v13; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+0ACh]
  }
  v6 = SL_ConvertToString(pipElem->visionSetPain);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si r9d, xmm4
  }
  v12 = j_va("%s %s %i", "pip_visionset_pain", v6, _R9);
  v13 = v12;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v12);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v13);
  }
}

/*
==============
PIP_SetActiveVisionSet
==============
*/
void PIP_SetActiveVisionSet(scrContext_t *scrContext, PipElement *pipElem, int offset)
{
  PipElement *v4; 
  const char *v7; 
  const char *v10; 
  const char *v11; 
  SvClient *CommonClient; 

  v4 = pipElem;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+0B0h]
    vcvtss2sd xmm6, xmm6, xmm6
  }
  v7 = SL_ConvertToString(pipElem->activeVisionSet);
  __asm
  {
    vmovaps xmm2, xmm6
    vmovq   r8, xmm2
  }
  v10 = j_va("pip_enable_visionset_%s %f", v7, _R8);
  v11 = v10;
  if ( v4->clientNum == -1 )
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v10);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v4->clientNum);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v11);
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
  unsigned __int8 dest[224]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_pip_sp.cpp", 998, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  _RAX = g_pipParams;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
  }
  _RCX = dest;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0C0h]
    vmovups ymmword ptr [rcx+0C0h], ymm1
  }
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

void __fastcall PIP_InitAll(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm2, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
    vmovss  xmm1, cs:__real@42480000
    vmovss  xmm0, cs:__real@42c80000
    vxorps  xmm3, xmm3, xmm3
    vmovss  cs:g_pipParams.width, xmm0
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
    vmovss  cs:g_pipParams.height, xmm1
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
    vmovss  dword ptr cs:g_pipParams.origin+4, xmm1
    vmovss  dword ptr cs:g_pipParams.origin+8, xmm0
    vmovss  dword ptr cs:g_pipParams.originOffset+4, xmm1
    vmovss  dword ptr cs:g_pipParams.originOffset+8, xmm0
    vmovss  dword ptr cs:g_pipParams.anglesOffset+4, xmm1
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+4; orientation_t const orIdentity
    vmovss  dword ptr cs:g_pipParams.anglesOffset+8, xmm0
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis; orientation_t const orIdentity
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr cs:g_pipParams.right, xmm0
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+8; orientation_t const orIdentity
    vmovss  dword ptr cs:g_pipParams.right+4, xmm1
    vmovups xmm1, xmmword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+0Ch; orientation_t const orIdentity
    vmovss  dword ptr cs:g_pipParams.right+8, xmm0
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
    vmovaps xmmword ptr cs:g_pipParams.look, xmm1
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
    vmovss  dword ptr cs:g_pipParams.up+4, xmm1
    vmovss  xmm1, cs:__real@42820000
    vmovss  dword ptr cs:g_pipParams.up+8, xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:g_pipParams.fov, xmm1
    vmovups xmmword ptr cs:g_pipParams.dofNear+8, xmm0
    vmovss  cs:g_pipParams.x, xmm3
    vmovss  cs:g_pipParams.y, xmm3
    vmovss  dword ptr cs:g_pipParams.origin, xmm2
    vmovss  dword ptr cs:g_pipParams.originOffset, xmm2
    vmovss  dword ptr cs:g_pipParams.anglesOffset, xmm2
    vmovss  dword ptr cs:g_pipParams.dofNear, xmm3
    vmovss  dword ptr cs:g_pipParams.dofNear+4, xmm3
    vmovss  cs:g_pipParams.nearZ, xmm3
    vmovss  cs:g_pipParams.blurRadius, xmm3
    vmovss  cs:g_pipParams.lod, xmm6
    vmovss  cs:g_pipParams.aspectRatio, xmm6
  }
  *(_QWORD *)&g_pipParams[0].pipEnabled = 0i64;
  g_pipParams[0].pipRenderToTexture = 0;
  *(_QWORD *)&g_pipParams[0].thermalBodyMaterialName = 0i64;
  g_pipParams[0].attachedEntity = NULL;
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm
  {
    vmovss  cs:g_pipParams.cullDistance, xmm0
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr cs:g_pipParams.visionSetNightDuration, xmm0
    vpxor   xmm0, xmm0, xmm0
    vmovss  cs:g_pipParams.visionSetNakedDuration, xmm6
    vmovss  cs:g_pipParams.activeVisionSetDuration, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovdqu xmmword ptr cs:g_pipParams.visionSetMissileCam, xmm0
  }
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
  pip->width = 100.0;
  *(_QWORD *)&pip->thermalBodyMaterialName = 0i64;
  _RBX = pip;
  pip->attachedEntity = NULL;
  *(_QWORD *)&pip->x = 0i64;
  *(_QWORD *)&pip->pipFreeCamera = 0i64;
  *(_QWORD *)&pip->height = 1112014848i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
    vmovss  dword ptr [rcx+20h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
    vmovss  dword ptr [rcx+24h], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
    vmovss  dword ptr [rcx+28h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
    vmovss  dword ptr [rcx+2Ch], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
    vmovss  dword ptr [rcx+30h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
    vmovss  dword ptr [rcx+34h], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
    vmovss  dword ptr [rcx+38h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
    vmovss  dword ptr [rcx+3Ch], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
    vmovss  dword ptr [rcx+40h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis; orientation_t const orIdentity
    vmovss  dword ptr [rcx+78h], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+4; orientation_t const orIdentity
    vmovss  dword ptr [rcx+7Ch], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+8; orientation_t const orIdentity
    vmovss  dword ptr [rcx+80h], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+0Ch; orientation_t const orIdentity
    vmovss  dword ptr [rcx+60h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+10h; orientation_t const orIdentity
    vmovss  dword ptr [rcx+64h], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+14h; orientation_t const orIdentity
    vmovss  dword ptr [rcx+68h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
    vmovss  dword ptr [rcx+6Ch], xmm1
    vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
    vmovss  dword ptr [rcx+70h], xmm0
    vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
    vmovss  dword ptr [rcx+74h], xmm1
  }
  *(_OWORD *)&pip->fov = 0x42820000ui64;
  *(_QWORD *)pip->dofFar.v = 0i64;
  pip->dofFar.v[2] = 0.0;
  *(_QWORD *)&pip->thermalBodyMaterialName = 0i64;
  pip->attachedEntity = NULL;
  *(_QWORD *)&pip->nearZ = 0i64;
  pip->lod = 1.0;
  pip->aspectRatio = 1.0;
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm { vmovss  dword ptr [rbx+94h], xmm0 }
  _RBX->shadowMapsEnabled = 1;
  _RBX->visionSetNakedDuration = 1.0;
  _RBX->visionSetNightDuration = 1.0;
  _RBX->visionSetMissileCamDuration = 1.0;
  _RBX->visionSetThermalDuration = 1.0;
  _RBX->visionSetPainDuration = 1.0;
  *(_QWORD *)&_RBX->visionSetNaked = 0i64;
  *(_QWORD *)&_RBX->visionSetMissileCam = 0i64;
  *(_QWORD *)&_RBX->visionSetPain = 0i64;
  _RBX->activeVisionSetDuration = 1.0;
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

