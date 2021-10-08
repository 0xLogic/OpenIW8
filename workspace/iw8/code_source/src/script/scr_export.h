/*
==============
Scr_UnknownLabel
==============
*/

void __fastcall Scr_UnknownLabel(const char *const scriptfile, const char *const label)
{
  ?Scr_UnknownLabel@@YAXQEBD0@Z(scriptfile, label);
}

/*
==============
Scr_UnknownLabel
==============
*/
void Scr_UnknownLabel(const char *const scriptfile, const char *const label)
{
  if ( !scriptfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 295, ASSERT_TYPE_ASSERT, "(scriptfile)", (const char *)&queryFormat, "scriptfile") )
    __debugbreak();
  if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_export.h", 296, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
    __debugbreak();
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE4408, 1230i64, label, scriptfile);
}

