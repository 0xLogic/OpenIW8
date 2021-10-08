/*
==============
dwPlatformTypes_GetAccountTypeString
==============
*/

const char *__fastcall dwPlatformTypes_GetAccountTypeString(const ClientPlatform platform)
{
  return ?dwPlatformTypes_GetAccountTypeString@@YAPEBDW4ClientPlatform@@@Z(platform);
}

/*
==============
dwPlatformTypes_GetLocalAccountTypeString
==============
*/

const char *__fastcall dwPlatformTypes_GetLocalAccountTypeString()
{
  return ?dwPlatformTypes_GetLocalAccountTypeString@@YAPEBDXZ();
}

/*
==============
dwPlatformTypes_GetAccountTypeString
==============
*/
const char *dwPlatformTypes_GetAccountTypeString(const ClientPlatform platform)
{
  switch ( (char)platform )
  {
    case PLATFORM_ANDROID:
      return "steam";
    case PLATFORM_BATTLENET:
      return "bnet";
    case PLATFORM_IOS:
      return "xbl";
    case PLATFORM_KINDLE_FIRE:
      return "psn";
    case PLATFORM_NX:
      return "wecn";
  }
  return 0i64;
}

/*
==============
dwPlatformTypes_GetLocalAccountTypeString
==============
*/
const char *dwPlatformTypes_GetLocalAccountTypeString()
{
  char ClientPlatform; 

  ClientPlatform = GetClientPlatform();
  switch ( ClientPlatform )
  {
    case 1:
      return "steam";
    case 2:
      return "bnet";
    case 3:
      return "xbl";
    case 4:
      return "psn";
    case 5:
      return "wecn";
  }
  return 0i64;
}

