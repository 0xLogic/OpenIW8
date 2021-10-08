/*
==============
bdPlatformInfo::getConsoleId
==============
*/

unsigned int __fastcall bdPlatformInfo::getConsoleId(unsigned __int8 *id, unsigned int size)
{
  return ?getConsoleId@bdPlatformInfo@@SAIPEAEI@Z(id, size);
}

/*
==============
bdPlatformInfo::reset
==============
*/

void bdPlatformInfo::reset(void)
{
  ?reset@bdPlatformInfo@@SAXXZ();
}

/*
==============
bdPlatformInfo::getConsoleId
==============
*/
__int64 bdPlatformInfo::getConsoleId(unsigned __int8 *id, unsigned int size)
{
  int v5; 

  if ( id )
  {
    if ( !bdPlatformInfo::s_deviceIDInitialized )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatform", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatforminfo\\bdplatforminfo-xboxone.cpp", "bdPlatformInfo::getConsoleId", 0x28u, "Cannot retrieve XboxOne ConsoleID before authentication");
      return 0i64;
    }
    if ( size < 0x14 )
    {
      v5 = 20;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatform", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatforminfo\\bdplatforminfo-xboxone.cpp", "bdPlatformInfo::getConsoleId", 0x2Eu, "id[%u] is too small to write %u byte console ID to", size, v5);
      return 0i64;
    }
    __asm
    {
      vmovups xmm0, cs:?s_deviceID@bdPlatformInfo@@1PAEA; uchar near * bdPlatformInfo::s_deviceID
      vmovups xmmword ptr [rcx], xmm0
    }
    *((_DWORD *)id + 4) = dword_1564C5CD8;
  }
  return 20i64;
}

/*
==============
bdPlatformInfo::reset
==============
*/
void bdPlatformInfo::reset(void)
{
  *(_QWORD *)bdPlatformInfo::s_deviceID = 0i64;
  *(_QWORD *)&bdPlatformInfo::s_deviceID[8] = 0i64;
  dword_1564C5CD8 = 0;
  bdPlatformInfo::s_deviceIDInitialized = 0;
}

