/*
==============
AddScriptAndLabel
==============
*/

void __fastcall AddScriptAndLabel(int *func, EntryLoadScriptArray *loadArray, scrContext_t *scrContext, const char *const scriptfile, const char *const label, const int enforceExists)
{
  ?AddScriptAndLabel@@YAXPEAHPEAUEntryLoadScriptArray@@AEAUscrContext_t@@QEBD3H@Z(func, loadArray, scrContext, scriptfile, label, enforceExists);
}

/*
==============
AddScriptAndLabel
==============
*/
void AddScriptAndLabel(int *func, EntryLoadScriptArray *loadArray, scrContext_t *scrContext, const char *const scriptfile, const char *const label, const int enforceExists)
{
  __int64 count; 
  EntryLoadScript *v8; 
  int v9; 
  int v10; 

  count = loadArray->count;
  loadArray->entries[count].pScrContext = scrContext;
  v8 = &loadArray->entries[count];
  if ( func )
    v8->func = func;
  Core_strcpy(loadArray->entries[count].scriptfile, 0x80ui64, scriptfile);
  v8->label = label;
  v8->enforceExists = enforceExists;
  if ( loadArray->count >= 0xC8u )
  {
    v10 = 200;
    v9 = loadArray->count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_entry.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( loadArray->count ) < (unsigned)( 200 )", "loadArray->count doesn't index MAX_LOAD_SCRIPTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  ++loadArray->count;
}

