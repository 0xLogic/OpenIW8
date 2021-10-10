/*
==============
GScrSP_LoadScripts
==============
*/

void __fastcall GScrSP_LoadScripts(const char *mapname, ScriptFunctions *functions, int savegame, EntryLoadScriptArray *loadscripts)
{
  ?GScrSP_LoadScripts@@YAXPEBDPEAUScriptFunctions@@HPEAUEntryLoadScriptArray@@@Z(mapname, functions, savegame, loadscripts);
}

/*
==============
GScr_LoadScriptAndLabelFunction
==============
*/

int __fastcall GScr_LoadScriptAndLabelFunction(scrContext_t *scrContext, const char *const scriptfile, const char *const label, ScriptFunctions *const functions, const int enforceExists)
{
  return ?GScr_LoadScriptAndLabelFunction@@YAHAEAUscrContext_t@@QEBD1QEAUScriptFunctions@@H@Z(scrContext, scriptfile, label, functions, enforceExists);
}

/*
==============
GScrSP_LoadScripts
==============
*/
void GScrSP_LoadScripts(const char *mapname, ScriptFunctions *functions, int savegame, EntryLoadScriptArray *loadscripts)
{
  _DWORD *p_maxSize; 
  const char *v7; 
  scrContext_t *v8; 
  int NumWeapons; 
  unsigned __int16 v10; 
  WeaponDef **v11; 
  const char *szScript; 
  int v13; 
  int v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  char *scriptfile; 
  int v18; 
  const char *v19; 
  int FunctionHandle; 
  __int64 v21; 
  __int64 v22; 
  _DWORD *data; 
  unsigned int setId; 
  char *outName; 
  scrContext_t *v27; 

  outName = (char *)functions;
  p_maxSize = &functions->maxSize;
  v7 = mapname;
  v8 = ScriptContext_Server();
  v27 = v8;
  ProfLoad_Begin("GScr_LoadScripts");
  Scr_BeginLoadScripts(v8, MAIN);
  if ( savegame )
    G_SaveSP_LoadCanonicalStrings();
  GScrSP_LoadScripts_entry_a(loadscripts);
  NumWeapons = BG_GetNumWeapons();
  v10 = 1;
  if ( NumWeapons > 1 )
  {
    do
    {
      if ( v10 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v22) = bg_lastParsedWeaponIndex;
        LODWORD(v21) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v21, v22) )
          __debugbreak();
      }
      v11 = &bg_weaponDefs[v10];
      if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( *v11 )
      {
        szScript = (*v11)->szScript;
        if ( szScript )
        {
          if ( *szScript )
            AddSingleAnimScript(loadscripts, szScript, NULL);
        }
      }
      ++v10;
    }
    while ( v10 < NumWeapons );
    p_maxSize = outName;
    v7 = mapname;
    v8 = v27;
  }
  GScrSP_LoadScripts_entry_b(loadscripts, v7);
  v13 = 0;
  v14 = 1;
  if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_AITYPE, 0, (const char **)&outName) )
  {
    do
    {
      if ( !v13 && I_stristr(outName, "civilian_") )
      {
        v13 = 1;
        AddCivilianAnimScripts(loadscripts);
      }
      AddScriptsForActor(loadscripts, outName);
      v15 = v14++;
    }
    while ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_AITYPE, v15, (const char **)&outName) );
  }
  setId = Scr_InitStringSet(v8);
  data = p_maxSize;
  Path_CallFunctionForNodes(GScr_LoadScriptsForPathNode, &data);
  Scr_ShutdownStringSet(v8, setId);
  GScrSP_LoadScripts_entry_c(loadscripts, v7);
  v16 = 0i64;
  if ( loadscripts->count )
  {
    scriptfile = loadscripts->entries[0].scriptfile;
    do
    {
      v18 = *((_DWORD *)scriptfile + 34);
      v19 = (const char *)*((_QWORD *)scriptfile + 16);
      if ( G_MainSP_ShouldLoadScripts() )
      {
        if ( p_maxSize[1] >= *p_maxSize )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C470, 815i64);
        if ( Scr_LoadScript(v8, scriptfile) )
        {
          FunctionHandle = Scr_GetFunctionHandle(v8, scriptfile, v19);
          *(_DWORD *)(*((_QWORD *)p_maxSize + 1) + 4i64 * (int)p_maxSize[1]++) = FunctionHandle;
          if ( !FunctionHandle && v18 )
          {
            if ( !scriptfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 295, ASSERT_TYPE_ASSERT, "(scriptfile)", (const char *)&queryFormat, "scriptfile") )
              __debugbreak();
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 296, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
              __debugbreak();
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE4408, 1230i64, v19, scriptfile);
          }
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)p_maxSize + 1) + 4i64 * (int)p_maxSize[1]++) = 0;
          Com_Printf(15, "Could not find script '%s'\n", scriptfile);
        }
      }
      if ( Sys_IsMainThread() )
        Sys_LoadingProcessEvents();
      ++v16;
      scriptfile += 160;
    }
    while ( v16 < loadscripts->count );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_load_obj_sp.cpp", 220, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_PROJECTILE_SCRIPT_SPEED ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_PROJECTILE_SCRIPT_SPEED )") )
    __debugbreak();
  Scr_PostCompileScripts(v8);
  ProfLoad_End();
}

/*
==============
GScr_LoadScriptAndLabelFunction
==============
*/
int GScr_LoadScriptAndLabelFunction(scrContext_t *scrContext, const char *const scriptfile, const char *const label, ScriptFunctions *const functions, const int enforceExists)
{
  int result; 

  if ( !G_MainSP_ShouldLoadScripts() )
    return 0;
  if ( functions->count >= functions->maxSize )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14435C470, 815i64);
  if ( !Scr_LoadScript(scrContext, scriptfile) )
  {
    functions->address[functions->count++] = 0;
    Com_Printf(15, "Could not find script '%s'\n", scriptfile);
    return 0;
  }
  result = Scr_GetFunctionHandle(scrContext, scriptfile, label);
  functions->address[functions->count++] = result;
  if ( !result && enforceExists )
  {
    if ( !scriptfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 295, ASSERT_TYPE_ASSERT, "(scriptfile)", (const char *)&queryFormat, "scriptfile") )
      __debugbreak();
    if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 296, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
      __debugbreak();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE4408, 1230i64, label, scriptfile);
    return 0;
  }
  return result;
}

/*
==============
GScr_LoadScriptsForPathNode
==============
*/
void GScr_LoadScriptsForPathNode(pathnode_t *loadNode, void *data)
{
  unsigned __int16 type; 
  scr_string_t animscript; 
  vec3_t pos; 

  if ( !*(_QWORD *)data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_load_obj_sp.cpp", 104, ASSERT_TYPE_ASSERT, "(functions)", (const char *)&queryFormat, "functions") )
    __debugbreak();
  type = loadNode->constant.type;
  if ( type )
  {
    animscript = loadNode->constant.animscript;
    if ( ((1 << type) & 0x68010000) != 0 )
    {
      if ( !animscript )
      {
        pathnode_t::GetPos(loadNode, &pos);
        Com_PrintError(1, "ERROR: Pathnode (Begin) at (%g %g %g) has no animscript specified\n", pos.v[0], pos.v[1], pos.v[2]);
        Path_SetNodeTypeError(loadNode);
      }
    }
    else if ( animscript )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_load_obj_sp.cpp", 111, ASSERT_TYPE_ASSERT, "(loadNode->constant.animscript == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "loadNode->constant.animscript == NULL_SCR_STRING") )
        __debugbreak();
    }
  }
}

