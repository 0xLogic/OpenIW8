/*
==============
AddCivilianAnimScripts
==============
*/

void __fastcall AddCivilianAnimScripts(EntryLoadScriptArray *loadArray)
{
  ?AddCivilianAnimScripts@@YAXPEAUEntryLoadScriptArray@@@Z(loadArray);
}

/*
==============
AddSingleAnimScript
==============
*/

void __fastcall AddSingleAnimScript(EntryLoadScriptArray *loadArray, const char *name, const char *subdir)
{
  ?AddSingleAnimScript@@YAXPEAUEntryLoadScriptArray@@PEBD1@Z(loadArray, name, subdir);
}

/*
==============
GScrSP_LoadScripts_entry_c
==============
*/

void __fastcall GScrSP_LoadScripts_entry_c(EntryLoadScriptArray *loadArray, const char *mapname)
{
  ?GScrSP_LoadScripts_entry_c@@YAXPEAUEntryLoadScriptArray@@PEBD@Z(loadArray, mapname);
}

/*
==============
GScrSP_LoadScripts_entry_a
==============
*/

void __fastcall GScrSP_LoadScripts_entry_a(EntryLoadScriptArray *loadArray)
{
  ?GScrSP_LoadScripts_entry_a@@YAXPEAUEntryLoadScriptArray@@@Z(loadArray);
}

/*
==============
GScrSP_LoadScripts_entry_b
==============
*/

void __fastcall GScrSP_LoadScripts_entry_b(EntryLoadScriptArray *loadArray, const char *mapname)
{
  ?GScrSP_LoadScripts_entry_b@@YAXPEAUEntryLoadScriptArray@@PEBD@Z(loadArray, mapname);
}

/*
==============
AddScriptsForActor
==============
*/

void __fastcall AddScriptsForActor(EntryLoadScriptArray *loadArray, const char *classname)
{
  ?AddScriptsForActor@@YAXPEAUEntryLoadScriptArray@@PEBD@Z(loadArray, classname);
}

/*
==============
AddLoadScriptAndLabelFunction
==============
*/

void __fastcall AddLoadScriptAndLabelFunction(EntryLoadScriptArray *loadArray, scrContext_t *scrContext, const char *const scriptfile, const char *const label, const int enforceExists)
{
  ?AddLoadScriptAndLabelFunction@@YAXPEAUEntryLoadScriptArray@@AEAUscrContext_t@@QEBD2H@Z(loadArray, scrContext, scriptfile, label, enforceExists);
}

/*
==============
AddCivilianAnimScripts
==============
*/
void AddCivilianAnimScripts(EntryLoadScriptArray *loadArray)
{
  AddSingleAnimScript(loadArray, "civilian_death", "civilian");
  AddSingleAnimScript(loadArray, "civilian_init", "civilian");
  AddSingleAnimScript(loadArray, "civilian_pain", "civilian");
  AddSingleAnimScript(loadArray, "civilian_scripted", "civilian");
}

/*
==============
AddLoadScriptAndLabelFunction
==============
*/
void AddLoadScriptAndLabelFunction(EntryLoadScriptArray *loadArray, scrContext_t *scrContext, const char *const scriptfile, const char *const label, const int enforceExists)
{
  AddScriptAndLabel(NULL, loadArray, scrContext, scriptfile, label, enforceExists);
}

/*
==============
AddScriptsForActor
==============
*/
void AddScriptsForActor(EntryLoadScriptArray *loadArray, const char *classname)
{
  scrContext_t *v4; 
  char dest[128]; 

  v4 = ScriptContext_Server();
  Com_sprintf(dest, 0x80ui64, "aitype/%s%s", classname, ".gsc");
  AddScriptAndLabel(NULL, loadArray, v4, dest, "main", 1);
  AddScriptAndLabel(NULL, loadArray, v4, dest, "precache", 1);
  AddScriptAndLabel(NULL, loadArray, v4, dest, "spawner", 1);
}

/*
==============
AddSingleAnimScript
==============
*/
void AddSingleAnimScript(EntryLoadScriptArray *loadArray, const char *name, const char *subdir)
{
  scrContext_t *v6; 
  char dest[128]; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\g_scr_load_obj_sp_entry.cpp", 10, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( subdir )
    Com_sprintf(dest, 0x80ui64, "scripts/anim/%s/%s%s", subdir, name, ".gsc");
  else
    Com_sprintf(dest, 0x80ui64, "scripts/anim/%s%s", name, ".gsc");
  v6 = ScriptContext_Server();
  AddScriptAndLabel(NULL, loadArray, v6, dest, "main", 1);
  AddScriptAndLabel(NULL, loadArray, v6, dest, "end_script", 0);
}

/*
==============
GScrSP_LoadScripts_entry_a
==============
*/
void GScrSP_LoadScripts_entry_a(EntryLoadScriptArray *loadArray)
{
  scrContext_t *v2; 
  scrContext_t *v3; 
  char dest[128]; 

  v2 = ScriptContext_Server();
  Core_strcpy(dest, 0x80ui64, "scripts/code/delete.gsc");
  AddScriptAndLabel(NULL, loadArray, v2, dest, "main", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/code/struct.gsc");
  AddScriptAndLabel(NULL, loadArray, v2, dest, "initstructs", 1);
  AddScriptAndLabel(NULL, loadArray, v2, dest, "createstruct", 1);
  AddSingleAnimScript(loadArray, "death", NULL);
  AddSingleAnimScript(loadArray, "init", NULL);
  AddSingleAnimScript(loadArray, "pain", NULL);
  AddSingleAnimScript(loadArray, "scripted", NULL);
  v3 = ScriptContext_Server();
  AddScriptAndLabel(NULL, loadArray, v3, "scripts/anim/scripted.gsc", "init", 1);
}

/*
==============
GScrSP_LoadScripts_entry_b
==============
*/
void GScrSP_LoadScripts_entry_b(EntryLoadScriptArray *loadArray, const char *mapname)
{
  scrContext_t *v4; 
  char dest[128]; 

  v4 = ScriptContext_Server();
  Com_sprintf(dest, 0x80ui64, "scripts/sp/maps/%s/%s%s", mapname, mapname, ".gsc");
  AddScriptAndLabel(NULL, loadArray, v4, dest, "main", 0);
}

/*
==============
GScrSP_LoadScripts_entry_c
==============
*/
void GScrSP_LoadScripts_entry_c(EntryLoadScriptArray *loadArray, const char *mapname)
{
  scrContext_t *v3; 
  char dest[128]; 

  v3 = ScriptContext_Server();
  Core_strcpy(dest, 0x80ui64, "scripts/aitypes/bt_util.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "bt_getfunction", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/asm/asm.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "asm_getfunction", 1);
  AddScriptAndLabel(NULL, loadArray, v3, dest, "asm_getparams", 1);
  AddScriptAndLabel(NULL, loadArray, v3, dest, "asm_getgenerichandler", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/code/ai.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "free_expendable", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "scriptable_initialize", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "scriptable_post_initialize", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "scriptable_used", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "scriptable_touched", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "scriptable_notify_callback", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/interactive.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "entity_used", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/ui.gsc");
  AddScriptAndLabel(NULL, loadArray, v3, dest, "lui_notify_callback", 1);
}

