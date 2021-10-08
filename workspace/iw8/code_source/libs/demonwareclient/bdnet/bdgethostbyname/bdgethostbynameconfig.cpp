/*
==============
bdGetHostByNameConfig::sanityCheckConfig
==============
*/

void __fastcall bdGetHostByNameConfig::sanityCheckConfig(bdGetHostByNameConfig *this)
{
  ?sanityCheckConfig@bdGetHostByNameConfig@@QEAAXXZ(this);
}

/*
==============
bdGetHostByNameConfig::reset
==============
*/

void __fastcall bdGetHostByNameConfig::reset(bdGetHostByNameConfig *this)
{
  ?reset@bdGetHostByNameConfig@@QEAAXXZ(this);
}

/*
==============
bdGetHostByNameConfig::bdGetHostByNameConfig
==============
*/

void __fastcall bdGetHostByNameConfig::bdGetHostByNameConfig(bdGetHostByNameConfig *this)
{
  ??0bdGetHostByNameConfig@@QEAA@XZ(this);
}

/*
==============
bdGetHostByNameConfig::bdGetHostByNameConfig
==============
*/
void bdGetHostByNameConfig::bdGetHostByNameConfig(bdGetHostByNameConfig *this)
{
  this->m_timeout = 10.0;
}

/*
==============
bdGetHostByNameConfig::reset
==============
*/
void bdGetHostByNameConfig::reset(bdGetHostByNameConfig *this)
{
  this->m_timeout = 10.0;
}

/*
==============
bdGetHostByNameConfig::sanityCheckConfig
==============
*/
void bdGetHostByNameConfig::sanityCheckConfig(bdGetHostByNameConfig *this)
{
  double v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@42200000
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm0
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "getHostByNameConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbynameconfig.cpp", "bdGetHostByNameConfig::sanityCheckConfig", 0x2Bu, "Lookup timeout set to %f seconds. This is outside the normal recommended range", v3);
}

