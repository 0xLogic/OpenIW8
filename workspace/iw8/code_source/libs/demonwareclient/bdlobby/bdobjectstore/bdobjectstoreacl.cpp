/*
==============
bdObjectStoreACL::~bdObjectStoreACL
==============
*/

void __fastcall bdObjectStoreACL::~bdObjectStoreACL(bdObjectStoreACL *this)
{
  ??1bdObjectStoreACL@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/

void __fastcall bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this, bdObjectStoreACL::bdObjectStoreACLType aclType)
{
  ??0bdObjectStoreACL@@QEAA@W4bdObjectStoreACLType@0@@Z(this, aclType);
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/

void __fastcall bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this, const char *aclString)
{
  ??0bdObjectStoreACL@@QEAA@PEBD@Z(this, aclString);
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/

void __fastcall bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this)
{
  ??0bdObjectStoreACL@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreACL::reset
==============
*/

void __fastcall bdObjectStoreACL::reset(bdObjectStoreACL *this)
{
  ?reset@bdObjectStoreACL@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreACL::validateString
==============
*/

bool __fastcall bdObjectStoreACL::validateString(const char *aclBuffer)
{
  return ?validateString@bdObjectStoreACL@@SA_NPEBD@Z(aclBuffer);
}

/*
==============
bdObjectStoreACL::serializeToString
==============
*/

const char *__fastcall bdObjectStoreACL::serializeToString(bdObjectStoreACL *this)
{
  return ?serializeToString@bdObjectStoreACL@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/
void bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this, const char *aclString)
{
  if ( !strncmp(privateACLString, aclString, 0x64ui64) )
  {
    this->m_aclType = PRIVATE;
  }
  else if ( !strncmp(publicACLString, aclString, 0x64ui64) )
  {
    this->m_aclType = PUBLIC;
  }
  else
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreacl.cpp", "bdObjectStoreACL::bdObjectStoreACL", 0x20u, "ACL String is invalid.");
  }
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/
void bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this, bdObjectStoreACL::bdObjectStoreACLType aclType)
{
  this->m_aclType = aclType;
}

/*
==============
bdObjectStoreACL::bdObjectStoreACL
==============
*/
void bdObjectStoreACL::bdObjectStoreACL(bdObjectStoreACL *this)
{
  this->m_aclType = PRIVATE;
}

/*
==============
bdObjectStoreACL::~bdObjectStoreACL
==============
*/
void bdObjectStoreACL::~bdObjectStoreACL(bdObjectStoreACL *this)
{
  this->m_aclType = PRIVATE;
}

/*
==============
bdObjectStoreACL::reset
==============
*/
void bdObjectStoreACL::reset(bdObjectStoreACL *this)
{
  this->m_aclType = PRIVATE;
}

/*
==============
bdObjectStoreACL::serializeToString
==============
*/
const char *bdObjectStoreACL::serializeToString(bdObjectStoreACL *this)
{
  const char *result; 

  result = publicACLString;
  if ( this->m_aclType == PRIVATE )
    return privateACLString;
  return result;
}

/*
==============
bdObjectStoreACL::validateString
==============
*/
bool bdObjectStoreACL::validateString(const char *aclBuffer)
{
  return !strncmp(privateACLString, aclBuffer, 0x64ui64) || !strncmp(publicACLString, aclBuffer, 0x64ui64);
}

