/*
==============
bdEnvironmentString::get
==============
*/

const char *__fastcall bdEnvironmentString::get(bdEnvironmentString *this, const bdEnvironment environment)
{
  return ?get@bdEnvironmentString@@QEBAPEBDW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdEnvironmentString::set
==============
*/

bool __fastcall bdEnvironmentString::set(bdEnvironmentString *this, const bdEnvironment environment, const char *stringData)
{
  return ?set@bdEnvironmentString@@QEAA_NW4bdEnvironment@@PEBD@Z(this, environment, stringData);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/

void __fastcall bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this, const char *devString, const char *certString, const char *prodString)
{
  ??0bdEnvironmentString@@QEAA@PEBD00@Z(this, devString, certString, prodString);
}

/*
==============
bdStringToEnvironment
==============
*/

bdEnvironment __fastcall bdStringToEnvironment(const char *stringData)
{
  return ?bdStringToEnvironment@@YA?AW4bdEnvironment@@PEBD@Z(stringData);
}

/*
==============
bdEnvironmentToString
==============
*/

const char *__fastcall bdEnvironmentToString(const bdEnvironment environment)
{
  return ?bdEnvironmentToString@@YAPEBDW4bdEnvironment@@@Z(environment);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/

void __fastcall bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this)
{
  ??0bdEnvironmentString@@QEAA@XZ(this);
}

/*
==============
bdEnvironmentString::setAll
==============
*/

void __fastcall bdEnvironmentString::setAll(bdEnvironmentString *this, const char *stringData)
{
  ?setAll@bdEnvironmentString@@QEAAXPEBD@Z(this, stringData);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/

void __fastcall bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this, const bdEnvironmentString *other)
{
  ??0bdEnvironmentString@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/
void bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this, const bdEnvironmentString *other)
{
  bdStrlcpy(this->m_devString, other->m_devString, 0x400ui64);
  bdStrlcpy(this->m_certString, other->m_certString, 0x400ui64);
  bdStrlcpy(this->m_prodString, other->m_prodString, 0x400ui64);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/
void bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this, const char *devString, const char *certString, const char *prodString)
{
  bdStrlcpy(this->m_devString, devString, 0x400ui64);
  bdStrlcpy(this->m_certString, certString, 0x400ui64);
  bdStrlcpy(this->m_prodString, prodString, 0x400ui64);
}

/*
==============
bdEnvironmentString::bdEnvironmentString
==============
*/
void bdEnvironmentString::bdEnvironmentString(bdEnvironmentString *this)
{
  memset_0(this, 0, sizeof(bdEnvironmentString));
}

/*
==============
bdEnvironmentToString
==============
*/
const char *bdEnvironmentToString(const bdEnvironment environment)
{
  __int32 v1; 

  if ( environment == BD_ENVIRONMENT_DEV )
    return "DEV";
  v1 = environment - 1;
  if ( !v1 )
    return "CERT";
  if ( v1 == 1 )
    return "PROD";
  return "UNKNOWN ENVIRONMENT";
}

/*
==============
bdStringToEnvironment
==============
*/
int bdStringToEnvironment(const char *stringData)
{
  int result; 

  result = _strcmpi(stringData, "DEV");
  if ( result )
  {
    if ( _strcmpi(stringData, "CERT") )
      return (_strcmpi(stringData, "PROD") != 0) + 2;
    else
      return 1;
  }
  return result;
}

/*
==============
bdEnvironmentString::get
==============
*/
bdEnvironmentString *bdEnvironmentString::get(bdEnvironmentString *this, const bdEnvironment environment)
{
  __int32 v2; 

  if ( environment == BD_ENVIRONMENT_DEV )
    return this;
  v2 = environment - 1;
  if ( !v2 )
    return (bdEnvironmentString *)this->m_certString;
  if ( v2 == 1 )
    return (bdEnvironmentString *)this->m_prodString;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdlobby/bdLobbyCommon/bdEnvironmentString", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdenvironmentstring.cpp", "bdEnvironmentString::get", 0x50u, "Invalid environment specified");
  return 0i64;
}

/*
==============
bdEnvironmentString::set
==============
*/
char bdEnvironmentString::set(bdEnvironmentString *this, const bdEnvironment environment, const char *stringData)
{
  __int32 v3; 

  if ( environment )
  {
    v3 = environment - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdlobby/bdLobbyCommon/bdEnvironmentString", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdenvironmentstring.cpp", "bdEnvironmentString::set", 0x3Bu, "Invalid environment specified");
        return 0;
      }
      this = (bdEnvironmentString *)((char *)this + 2048);
    }
    else
    {
      this = (bdEnvironmentString *)((char *)this + 1024);
    }
  }
  bdStrlcpy(this->m_devString, stringData, 0x400ui64);
  return 1;
}

/*
==============
bdEnvironmentString::setAll
==============
*/
void bdEnvironmentString::setAll(bdEnvironmentString *this, const char *stringData)
{
  bdStrlcpy(this->m_devString, stringData, 0x400ui64);
  bdStrlcpy(this->m_certString, stringData, 0x400ui64);
  bdStrlcpy(this->m_prodString, stringData, 0x400ui64);
}

