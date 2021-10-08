/*
==============
GetClientSubPlatform
==============
*/

char __fastcall GetClientSubPlatform()
{
  return ?GetClientSubPlatform@@YADXZ();
}

/*
==============
Com_GetMatchmakingStringForClientPlatform
==============
*/

const char *__fastcall Com_GetMatchmakingStringForClientPlatform(const ClientPlatform clientPlatform)
{
  return ?Com_GetMatchmakingStringForClientPlatform@@YAPEBDW4ClientPlatform@@@Z(clientPlatform);
}

/*
==============
GetClientPlatform
==============
*/

ClientPlatform __fastcall GetClientPlatform()
{
  return ?GetClientPlatform@@YA?AW4ClientPlatform@@XZ();
}

/*
==============
Com_GetMatchmakingStringForClientPlatform
==============
*/
const char *Com_GetMatchmakingStringForClientPlatform(const ClientPlatform clientPlatform)
{
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  v1 = (char)clientPlatform;
  v2 = (char)clientPlatform - 1;
  if ( !v2 )
    return "steam";
  v3 = v2 - 1;
  if ( !v3 )
    return "bnet";
  v4 = v3 - 1;
  if ( !v4 )
    return "xb1";
  v5 = v4 - 1;
  if ( !v5 )
    return "ps4";
  if ( v5 == 1 )
    return "we";
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_client_platform.cpp", 47, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported client platform for matchmaking %hhd", v1) )
    __debugbreak();
  return "UNKNOWN";
}

/*
==============
GetClientPlatform
==============
*/
char GetClientPlatform()
{
  return 3;
}

/*
==============
GetClientSubPlatform
==============
*/
char GetClientSubPlatform()
{
  return 0;
}

