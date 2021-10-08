/*
==============
bdPlatformInfo::getDeviceIDInitialized
==============
*/

bool __fastcall bdPlatformInfo::getDeviceIDInitialized()
{
  return ?getDeviceIDInitialized@bdPlatformInfo@@SA_NXZ();
}

/*
==============
bdPlatformInfo::setDeviceID
==============
*/

void __fastcall bdPlatformInfo::setDeviceID(const void *const src, unsigned __int64 len)
{
  ?setDeviceID@bdPlatformInfo@@SAXQEBX_K@Z(src, len);
}

/*
==============
bdPlatformInfo::getDeviceIDInitialized
==============
*/
_BOOL8 bdPlatformInfo::getDeviceIDInitialized()
{
  return bdPlatformInfo::s_deviceIDInitialized;
}

/*
==============
bdPlatformInfo::setDeviceID
==============
*/
void bdPlatformInfo::setDeviceID(const void *const src, unsigned __int64 len)
{
  bdPlatformInfo::s_deviceIDInitialized = 1;
  memcpy_0(bdPlatformInfo::s_deviceID, src, len);
}

