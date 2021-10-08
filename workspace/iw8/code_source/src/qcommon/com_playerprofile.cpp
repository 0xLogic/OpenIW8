/*
==============
Com_BuildPlayerProfilePath
==============
*/

int Com_BuildPlayerProfilePath(char *path, int pathSize, const char *format, ...)
{
  return ?Com_BuildPlayerProfilePath@@YAHPEADHPEBDZZ(path, pathSize, format);
}

/*
==============
Com_BuildPlayerProfilePath
==============
*/
int Com_BuildPlayerProfilePath(char *path, int pathSize, const char *format, ...)
{
  va_list ap; 

  va_start(ap, format);
  return Com_vsprintf(path, pathSize, format, ap);
}

