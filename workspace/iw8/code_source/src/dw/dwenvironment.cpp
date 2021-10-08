/*
==============
dwGetEnvironmentFlavorName
==============
*/

const char *__fastcall dwGetEnvironmentFlavorName()
{
  return ?dwGetEnvironmentFlavorName@@YAPEBDXZ();
}

/*
==============
dwRegisterEnvironmentDvars
==============
*/

void dwRegisterEnvironmentDvars(void)
{
  ?dwRegisterEnvironmentDvars@@YAXXZ();
}

/*
==============
dwGetGameId
==============
*/

const char *__fastcall dwGetGameId()
{
  return ?dwGetGameId@@YAPEBDXZ();
}

/*
==============
dwGetLoginQueueURLs
==============
*/

const bdEnvironmentString *__fastcall dwGetLoginQueueURLs()
{
  return ?dwGetLoginQueueURLs@@YAAEBVbdEnvironmentString@@XZ();
}

/*
==============
dwSelectEnvironment
==============
*/

void __fastcall dwSelectEnvironment(const bdEnvironment environment, const DWEnvironmentFlavor flavor)
{
  ?dwSelectEnvironment@@YAXW4bdEnvironment@@W4DWEnvironmentFlavor@@@Z(environment, flavor);
}

/*
==============
dwGetAuthURLs
==============
*/

const bdEnvironmentString *__fastcall dwGetAuthURLs()
{
  return ?dwGetAuthURLs@@YAAEBVbdEnvironmentString@@XZ();
}

/*
==============
dwGetLSGURLs
==============
*/

const bdEnvironmentString *__fastcall dwGetLSGURLs()
{
  return ?dwGetLSGURLs@@YAAEBVbdEnvironmentString@@XZ();
}

/*
==============
dwGetEnvironmentName
==============
*/

const char *__fastcall dwGetEnvironmentName()
{
  return ?dwGetEnvironmentName@@YAPEBDXZ();
}

/*
==============
dwIsChinaSubmissionZone
==============
*/

bool __fastcall dwIsChinaSubmissionZone(int titleId)
{
  return ?dwIsChinaSubmissionZone@@YA_NH@Z(titleId);
}

/*
==============
dwGetEnvironment
==============
*/

bdEnvironment __fastcall dwGetEnvironment()
{
  return ?dwGetEnvironment@@YA?AW4bdEnvironment@@XZ();
}

/*
==============
dwGetTitleIds
==============
*/

const unsigned int *__fastcall dwGetTitleIds()
{
  return ?dwGetTitleIds@@YAPEBIXZ();
}

/*
==============
dwGetAuthURLs
==============
*/
bdEnvironmentString *dwGetAuthURLs()
{
  return &s_environmentConfig->authAddrs;
}

/*
==============
dwGetEnvironment
==============
*/
__int64 dwGetEnvironment()
{
  return (unsigned int)s_environment;
}

/*
==============
dwGetEnvironmentFlavorName
==============
*/
const char *dwGetEnvironmentFlavorName()
{
  return s_flavorNames[s_flavor];
}

/*
==============
dwGetEnvironmentName
==============
*/
const char *dwGetEnvironmentName()
{
  return s_environmentNames[s_environment];
}

/*
==============
dwGetGameId
==============
*/
const char *dwGetGameId()
{
  return "iw8";
}

/*
==============
dwGetLSGURLs
==============
*/
bdEnvironmentString *dwGetLSGURLs()
{
  return &s_environmentConfig->lsgAddrs;
}

/*
==============
dwGetLoginQueueURLs
==============
*/
bdEnvironmentString *dwGetLoginQueueURLs()
{
  return &s_environmentConfig->loginQueueAddrs;
}

/*
==============
dwGetTitleIds
==============
*/
const DWEnvironmentConfig *dwGetTitleIds()
{
  return s_environmentConfig;
}

/*
==============
dwIsChinaSubmissionZone
==============
*/
bool dwIsChinaSubmissionZone(int titleId)
{
  return titleId == 5791;
}

/*
==============
dwRegisterEnvironmentDvars
==============
*/
void dwRegisterEnvironmentDvars(void)
{
  const char **v0; 
  const dvar_t *v1; 
  char *integer64; 
  int v3; 
  __int64 v4; 
  DWEnvironmentFlavor v5; 
  const char *v6; 
  __int64 v7; 
  char *v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  Dvar_BeginPermanentRegistration();
  v0 = s_flavorNames;
  s_flavorName = Dvar_RegisterString("NSMOLTTOTN", s_flavorNames[s_flavor], 0, "Demonware environment flavor (vanilla, zebra, etc.)");
  Dvar_EndPermanentRegistration();
  v1 = s_flavorName;
  integer64 = (char *)s_flavorName->current.integer64;
  v3 = *integer64;
  if ( *integer64 )
  {
    do
    {
      *integer64++ = v3 + ((unsigned int)(v3 - 65) < 0x1A ? 0x20 : 0);
      v3 = *integer64;
    }
    while ( *integer64 );
    integer64 = (char *)v1->current.integer64;
  }
  if ( I_strcmp(integer64, s_flavorNames[s_flavor]) )
  {
    v4 = s_flavorName->current.integer64;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwenvironment.cpp", 166, ASSERT_TYPE_ASSERT, "(sourceString)", (const char *)&queryFormat, "sourceString") )
      __debugbreak();
    v5 = DW_VANILLA;
LABEL_9:
    v6 = *v0;
    v7 = 0x7FFFFFFFi64;
    v8 = (char *)v4;
    if ( !*v0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = &v6[-v4];
    do
    {
      v10 = v8[(_QWORD)v9];
      v11 = v7;
      v12 = *v8++;
      --v7;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        ++v5;
        if ( (__int64)++v0 < (__int64)&s_dwEnvironments[0].lsgAddrs.m_devString[436] )
          goto LABEL_9;
LABEL_20:
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D62ED0, 719i64, s_flavorName->current.integer64);
        return;
      }
    }
    while ( v10 );
    if ( v5 == -1 )
      goto LABEL_20;
    s_flavor = v5;
  }
  else
  {
    v5 = s_flavor;
  }
  s_environmentConfig = &s_dwEnvironments[v5];
}

/*
==============
dwSelectEnvironment
==============
*/
void dwSelectEnvironment(const bdEnvironment environment, const DWEnvironmentFlavor flavor)
{
  s_environment = environment;
  s_flavor = flavor;
  s_environmentConfig = &s_dwEnvironments[flavor];
}

