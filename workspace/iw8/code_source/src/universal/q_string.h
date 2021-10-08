/*
==============
Com_sprintfPos_truncate<1024>
==============
*/

int Com_sprintfPos_truncate<1024>(char (*dest)[1024], int *destPos, const char *fmt, ...)
{
  return ??$Com_sprintfPos_truncate@$0EAA@@@YAHAEIAY0EAA@DPEIAHPEIBDZZ(dest, destPos, fmt);
}

/*
==============
Com_sprintfPos_truncate<1024>
==============
*/
int Com_sprintfPos_truncate<1024>(char (*dest)[1024], int *destPos, const char *fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  return Com_vsprintfPos_truncate((char *)dest, 0x400ui64, destPos, fmt, va);
}

