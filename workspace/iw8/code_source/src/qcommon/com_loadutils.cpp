/*
==============
Com_LoadRawTextFile
==============
*/

const char *__fastcall Com_LoadRawTextFile(const char *fullpath, char *buf, int size)
{
  return ?Com_LoadRawTextFile@@YAPEBDPEBDPEADH@Z(fullpath, buf, size);
}

/*
==============
Com_LoadInfoString
==============
*/

const char *__fastcall Com_LoadInfoString(const char *fileName, const char *fileDesc, const char *ident, char *loadBuffer)
{
  return ?Com_LoadInfoString@@YAPEBDPEBD00QEAD@Z(fileName, fileDesc, ident, loadBuffer);
}

/*
==============
Com_LoadInfoString
==============
*/
char *Com_LoadInfoString(const char *fileName, const char *fileDesc, const char *ident, char *loadBuffer)
{
  const RawFile *rawfile; 
  __int64 v9; 
  __int64 v10; 

  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, fileName, 1).rawfile;
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, fileName) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440006E0, 1216i64, fileDesc, fileName);
  DB_GetRawBuffer(rawfile, loadBuffer, 0x4000);
  v9 = -1i64;
  do
    ++v9;
  while ( ident[v9] );
  v10 = (int)v9;
  if ( strncmp(loadBuffer, ident, (int)v9) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144000718, 1217i64, fileName, fileDesc);
  if ( !Info_Validate(&loadBuffer[v10]) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144000750, 1218i64, fileName, fileDesc);
  return &loadBuffer[v10];
}

/*
==============
Com_LoadRawTextFile
==============
*/

char *__fastcall Com_LoadRawTextFile(const char *fullpath, char *buf, int size)
{
  return DB_ReadRawFile(fullpath, buf, size);
}

