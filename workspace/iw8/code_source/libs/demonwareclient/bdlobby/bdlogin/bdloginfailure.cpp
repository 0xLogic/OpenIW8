/*
==============
bdLoginFailure::updateLoginFailureMessage
==============
*/

void __fastcall bdLoginFailure::updateLoginFailureMessage(bdLoginFailure *this, const char *messageInfo)
{
  ?updateLoginFailureMessage@bdLoginFailure@@IEAAXPEBD@Z(this, messageInfo);
}

/*
==============
bdLoginFailure::~bdLoginFailure
==============
*/

void __fastcall bdLoginFailure::~bdLoginFailure(bdLoginFailure *this)
{
  ??1bdLoginFailure@@UEAA@XZ(this);
}

/*
==============
bdLoginFailure::bdLoginFailure
==============
*/

void __fastcall bdLoginFailure::bdLoginFailure(bdLoginFailure *this)
{
  ??0bdLoginFailure@@QEAA@XZ(this);
}

/*
==============
bdLoginFailure::updateLoginFailure
==============
*/

void __fastcall bdLoginFailure::updateLoginFailure(bdLoginFailure *this, const char *messageInfo, const bdLoginFailure::bdLoginFailureCode code)
{
  ?updateLoginFailure@bdLoginFailure@@IEAAXPEBDW4bdLoginFailureCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginFailure::getLoginFailureMessage
==============
*/

const char *__fastcall bdLoginFailure::getLoginFailureMessage(bdLoginFailure *this)
{
  return ?getLoginFailureMessage@bdLoginFailure@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginFailure::updateLoginFailureCode
==============
*/

void __fastcall bdLoginFailure::updateLoginFailureCode(bdLoginFailure *this, const bdLoginFailure::bdLoginFailureCode code)
{
  ?updateLoginFailureCode@bdLoginFailure@@IEAAXW4bdLoginFailureCode@1@@Z(this, code);
}

/*
==============
bdLoginFailure::bdLoginFailure
==============
*/

void __fastcall bdLoginFailure::bdLoginFailure(bdLoginFailure *this, const char *messageInfo, const bdLoginFailure::bdLoginFailureCode *code)
{
  ??0bdLoginFailure@@QEAA@PEBDAEBW4bdLoginFailureCode@0@@Z(this, messageInfo, code);
}

/*
==============
bdLoginFailure::getLoginFailureCode
==============
*/

bdLoginFailure::bdLoginFailureCode __fastcall bdLoginFailure::getLoginFailureCode(bdLoginFailure *this)
{
  return ?getLoginFailureCode@bdLoginFailure@@QEBA?AW4bdLoginFailureCode@1@XZ(this);
}

/*
==============
bdLoginFailure::bdLoginFailure
==============
*/
void bdLoginFailure::bdLoginFailure(bdLoginFailure *this, const char *messageInfo, const bdLoginFailure::bdLoginFailureCode *code)
{
  this->__vftable = (bdLoginFailure_vtbl *)&bdLoginFailure::`vftable';
  this->m_loginFailureCode = *code;
  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginfailure.cpp", "bdLoginFailure::bdLoginFailure", 0x13u, "Attempted bdLoginFailure instantiation with invalid message.");
  bdStrlcpy(this->m_loginFailureMessage, messageInfo, 0x200ui64);
}

/*
==============
bdLoginFailure::bdLoginFailure
==============
*/
void bdLoginFailure::bdLoginFailure(bdLoginFailure *this)
{
  this->m_loginFailureCode = NOT_AN_ERROR;
  this->__vftable = (bdLoginFailure_vtbl *)&bdLoginFailure::`vftable';
  memset_0(this->m_loginFailureMessage, 0, sizeof(this->m_loginFailureMessage));
}

/*
==============
bdLoginFailure::~bdLoginFailure
==============
*/
void bdLoginFailure::~bdLoginFailure(bdLoginFailure *this)
{
  this->__vftable = (bdLoginFailure_vtbl *)&bdLoginFailure::`vftable';
}

/*
==============
bdLoginFailure::getLoginFailureCode
==============
*/
__int64 bdLoginFailure::getLoginFailureCode(bdLoginFailure *this)
{
  return (unsigned int)this->m_loginFailureCode;
}

/*
==============
bdLoginFailure::getLoginFailureMessage
==============
*/
char *bdLoginFailure::getLoginFailureMessage(bdLoginFailure *this)
{
  return this->m_loginFailureMessage;
}

/*
==============
bdLoginFailure::updateLoginFailure
==============
*/
void bdLoginFailure::updateLoginFailure(bdLoginFailure *this, const char *messageInfo, const bdLoginFailure::bdLoginFailureCode code)
{
  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginfailure.cpp", "bdLoginFailure::updateLoginFailureMessage", 0x2Cu, "Must provide valid message to update login failure message!");
  bdStrlcpy(this->m_loginFailureMessage, messageInfo, 0x200ui64);
  this->m_loginFailureCode = code;
}

/*
==============
bdLoginFailure::updateLoginFailureCode
==============
*/
void bdLoginFailure::updateLoginFailureCode(bdLoginFailure *this, const bdLoginFailure::bdLoginFailureCode code)
{
  this->m_loginFailureCode = code;
}

/*
==============
bdLoginFailure::updateLoginFailureMessage
==============
*/
void bdLoginFailure::updateLoginFailureMessage(bdLoginFailure *this, const char *messageInfo)
{
  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginfailure.cpp", "bdLoginFailure::updateLoginFailureMessage", 0x2Cu, "Must provide valid message to update login failure message!");
  bdStrlcpy(this->m_loginFailureMessage, messageInfo, 0x200ui64);
}

