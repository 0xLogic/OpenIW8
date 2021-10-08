/*
==============
bdObjectStoreErrors::getLobbyErrorCodeFromErrorName
==============
*/

bdLobbyErrorCode __fastcall bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(const char *errorName)
{
  return ?getLobbyErrorCodeFromErrorName@bdObjectStoreErrors@@SA?AW4bdLobbyErrorCode@@PEBD@Z(errorName);
}

/*
==============
bdObjectStoreErrors::getLobbyErrorCodeFromErrorName
==============
*/
__int64 bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(const char *errorName)
{
  __int64 result; 
  bool v3; 

  if ( !strncmp(notFoundError_0, errorName, 0x64ui64) )
    return 20000i64;
  if ( !strncmp(aclErrorName_0, errorName, 0x64ui64) )
    return 20001i64;
  if ( !strncmp(objectTooBigForRemainingSizeWindow, errorName, 0x64ui64) )
    return 20003i64;
  if ( !strncmp(objectTooBigForSizeWindow, errorName, 0x64ui64) )
    return 20004i64;
  v3 = strncmp(subjectNotPermitted, errorName, 0x64ui64) == 0;
  result = 20002i64;
  if ( v3 )
    return 20001i64;
  return result;
}

