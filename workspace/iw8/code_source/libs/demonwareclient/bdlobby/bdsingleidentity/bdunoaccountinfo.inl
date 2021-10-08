/*
==============
bdUnoAccountInfo::setUsername
==============
*/

bool __fastcall bdUnoAccountInfo::setUsername(bdUnoAccountInfo *this, const char *username)
{
  return ?setUsername@bdUnoAccountInfo@@QEAA_NPEBD@Z(this, username);
}

/*
==============
bdUnoAccountInfo::setPassword
==============
*/

bool __fastcall bdUnoAccountInfo::setPassword(bdUnoAccountInfo *this, const char *password)
{
  return ?setPassword@bdUnoAccountInfo@@QEAA_NPEBD@Z(this, password);
}

/*
==============
bdUnoAccountInfo::setEmail
==============
*/

bool __fastcall bdUnoAccountInfo::setEmail(bdUnoAccountInfo *this, const char *email)
{
  return ?setEmail@bdUnoAccountInfo@@QEAA_NPEBD@Z(this, email);
}

/*
==============
bdUnoAccountInfo::setEmail
==============
*/
char bdUnoAccountInfo::setEmail(bdUnoAccountInfo *this, const char *email)
{
  unsigned __int64 v4; 

  bdHandleAssert(email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( email[v4] );
  if ( v4 > 0x100 )
    return 0;
  bdStrlcpy(this->m_email, email, 0x100ui64);
  return 1;
}

/*
==============
bdUnoAccountInfo::setPassword
==============
*/
char bdUnoAccountInfo::setPassword(bdUnoAccountInfo *this, const char *password)
{
  unsigned __int64 v4; 

  bdHandleAssert(password != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( password[v4] );
  if ( v4 > 0x65 )
    return 0;
  bdStrlcpy(this->m_password, password, 0x65ui64);
  return 1;
}

/*
==============
bdUnoAccountInfo::setUsername
==============
*/
char bdUnoAccountInfo::setUsername(bdUnoAccountInfo *this, const char *username)
{
  unsigned __int64 v4; 

  bdHandleAssert(username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( username[v4] );
  if ( v4 > 0x97 )
    return 0;
  bdStrlcpy(this->m_username, username, 0x97ui64);
  return 1;
}

