/*
==============
BG_DrawDebug_PlayerVignetteActive
==============
*/

bool __fastcall BG_DrawDebug_PlayerVignetteActive(int flags)
{
  return ?BG_DrawDebug_PlayerVignetteActive@@YA_NH@Z(flags);
}

/*
==============
BG_DrawDebug_PlayerVignettePrint
==============
*/

void __fastcall BG_DrawDebug_PlayerVignettePrint(const playerState_s *ps, int client, const char *uniqueString, unsigned int flags, bool linked, int time, const char *modelName, const char *tagName, vec3_t *linkTagOrigin, vec3_t *linkTagAngles)
{
  ?BG_DrawDebug_PlayerVignettePrint@@YAXPEBUplayerState_s@@HPEBDI_NH11AEATvec3_t@@3@Z(ps, client, uniqueString, flags, linked, time, modelName, tagName, linkTagOrigin, linkTagAngles);
}

/*
==============
BG_DrawDebug_PlayerVignetteActive
==============
*/
bool BG_DrawDebug_PlayerVignetteActive(int flags)
{
  const dvar_t *v1; 
  char v2; 
  bool IsMainThread; 
  const dvar_t *v5; 
  bool v6; 
  const dvar_t *v7; 

  v1 = DCONST_DVARINT_debugVignette;
  v2 = flags;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.integer )
    return 0;
  if ( (v2 & 1) == 0 )
    return 1;
  IsMainThread = Sys_IsMainThread();
  v5 = DCONST_DVARINT_debugVignette;
  v6 = IsMainThread;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 4 )
    return 1;
  v7 = DCONST_DVARINT_debugVignette;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 2 && !v6 )
    return 1;
  return Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_debugVignette, "debugVignette") == 3 && v6;
}

/*
==============
BG_DrawDebug_PlayerVignettePrint
==============
*/
void BG_DrawDebug_PlayerVignettePrint(const playerState_s *ps, int client, const char *uniqueString, unsigned int flags, bool linked, int time, const char *modelName, const char *tagName, vec3_t *linkTagOrigin, vec3_t *linkTagAngles)
{
  char v10; 
  const dvar_t *v13; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  char dest[1008]; 

  v10 = flags;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 55, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !uniqueString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 56, ASSERT_TYPE_ASSERT, "(uniqueString)", (const char *)&queryFormat, "uniqueString") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 57, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 58, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
    __debugbreak();
  v13 = DCONST_DVARINT_debugVignette;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 60, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_debugVignette, \"debugVignette\" ) > 0)", (const char *)&queryFormat, "Dconst_GetInt( debugVignette ) > 0") )
    __debugbreak();
  v14 = "Server";
  if ( client )
    v14 = "Client";
  LODWORD(v16) = time;
  LODWORD(v15) = linked;
  Com_sprintf(dest, 0x3E8ui64, "[Vignette] %s, %s, link %d, time %d, org %.3f %.3f %.3f, ang %.3f %.3f %.3f, lAng %.3f %.3f %.3f, pMod %s, pTag %s, tOrg %.3f %.3f %.3f, tAng %.3f %.3f %.3f\n", v14, uniqueString, v15, v16, ps->origin.v[0], ps->origin.v[1], ps->origin.v[2], ps->viewangles.v[0], ps->viewangles.v[1], ps->viewangles.v[2], ps->linkAngles.v[0], ps->linkAngles.v[1], ps->linkAngles.v[2], modelName, tagName, linkTagOrigin->v[0], linkTagOrigin->v[1], linkTagOrigin->v[2], linkTagAngles->v[0], linkTagAngles->v[1], linkTagAngles->v[2]);
  if ( (v10 & 2) != 0 )
    Com_PrintWarning(19, (const char *)&queryFormat, dest);
  else
    Com_Printf(19, (const char *)&queryFormat, dest);
}

