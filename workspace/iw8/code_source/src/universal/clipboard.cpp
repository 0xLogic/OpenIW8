/*
==============
Sys_SetUnicodeClipboardData
==============
*/

bool __fastcall Sys_SetUnicodeClipboardData(const char *text)
{
  return ?Sys_SetUnicodeClipboardData@@YA_NPEBD@Z(text);
}

/*
==============
Sys_SetClipboardData
==============
*/

int __fastcall Sys_SetClipboardData(const char *text)
{
  return ?Sys_SetClipboardData@@YAHPEBD@Z(text);
}

/*
==============
Sys_FreeClipboardData
==============
*/

void __fastcall Sys_FreeClipboardData(const char *text)
{
  ?Sys_FreeClipboardData@@YAXPEBD@Z(text);
}

/*
==============
Sys_GetClipboardData
==============
*/

char *__fastcall Sys_GetClipboardData()
{
  return ?Sys_GetClipboardData@@YAPEADXZ();
}

/*
==============
Sys_GetUnicodeClipboardData
==============
*/

const char *__fastcall Sys_GetUnicodeClipboardData()
{
  return ?Sys_GetUnicodeClipboardData@@YAPEBDXZ();
}

/*
==============
Sys_FreeClipboardData
==============
*/
void Sys_FreeClipboardData(const char *text)
{
  if ( text != s_clipboardBuff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\clipboard.cpp", 215, ASSERT_TYPE_ASSERT, "(text == s_clipboardBuff)", (const char *)&queryFormat, "text == s_clipboardBuff") )
    __debugbreak();
  s_clipboardBuff[0] = 0;
}

/*
==============
Sys_GetClipboardData
==============
*/
char *Sys_GetClipboardData()
{
  return 0i64;
}

/*
==============
Sys_GetUnicodeClipboardData
==============
*/
char *Sys_GetUnicodeClipboardData()
{
  return s_clipboardBuff;
}

/*
==============
Sys_SetClipboardData
==============
*/
__int64 Sys_SetClipboardData(const char *text)
{
  return 1i64;
}

/*
==============
Sys_SetUnicodeClipboardData
==============
*/
char Sys_SetUnicodeClipboardData(const char *text)
{
  if ( !text )
    return 0;
  Core_strcpy(s_clipboardBuff, 0x800ui64, text);
  return 1;
}

