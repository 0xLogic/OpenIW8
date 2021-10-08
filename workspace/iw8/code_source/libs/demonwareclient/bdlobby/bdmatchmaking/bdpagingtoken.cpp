/*
==============
bdPagingToken::~bdPagingToken
==============
*/

void __fastcall bdPagingToken::~bdPagingToken(bdPagingToken *this)
{
  ??1bdPagingToken@@UEAA@XZ(this);
}

/*
==============
bdPagingToken::bdPagingToken
==============
*/

void __fastcall bdPagingToken::bdPagingToken(bdPagingToken *this, unsigned int numResultsPerPage)
{
  ??0bdPagingToken@@QEAA@I@Z(this, numResultsPerPage);
}

/*
==============
bdPagingToken::getSessionID
==============
*/

const bdSecurityID *__fastcall bdPagingToken::getSessionID(bdPagingToken *this)
{
  return ?getSessionID@bdPagingToken@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
bdPagingToken::processResult
==============
*/

bool __fastcall bdPagingToken::processResult(bdPagingToken *this, bdTaskResult *lastResultSet, unsigned int numResults)
{
  return ?processResult@bdPagingToken@@MEAA_NPEAVbdTaskResult@@I@Z(this, lastResultSet, numResults);
}

/*
==============
bdPagingToken::bdPagingToken
==============
*/

void __fastcall bdPagingToken::bdPagingToken(bdPagingToken *this, const bdPagingToken *other)
{
  ??0bdPagingToken@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdPagingToken::getNumResultsPerPage
==============
*/

unsigned int __fastcall bdPagingToken::getNumResultsPerPage(bdPagingToken *this)
{
  return ?getNumResultsPerPage@bdPagingToken@@QEBAIXZ(this);
}

/*
==============
bdPagingToken::getStatus
==============
*/

bdPagingToken::bdStatus __fastcall bdPagingToken::getStatus(bdPagingToken *this)
{
  return ?getStatus@bdPagingToken@@QEBA?AW4bdStatus@1@XZ(this);
}

/*
==============
bdPagingToken::bdPagingToken
==============
*/
void bdPagingToken::bdPagingToken(bdPagingToken *this, const bdPagingToken *other)
{
  bdTaskResultProcessor::bdTaskResultProcessor(this);
  this->__vftable = (bdPagingToken_vtbl *)&bdPagingToken::`vftable';
  bdSecurityID::bdSecurityID(&this->m_sessionID);
  this->m_sessionID = other->m_sessionID;
  this->m_status = other->m_status;
  this->m_numResultsPerPage = other->m_numResultsPerPage;
}

/*
==============
bdPagingToken::bdPagingToken
==============
*/
void bdPagingToken::bdPagingToken(bdPagingToken *this, unsigned int numResultsPerPage)
{
  bdTaskResultProcessor::bdTaskResultProcessor(this);
  this->__vftable = (bdPagingToken_vtbl *)&bdPagingToken::`vftable';
  this->m_status = BD_IDLE;
  bdSecurityID::bdSecurityID(&this->m_sessionID);
  this->m_numResultsPerPage = numResultsPerPage;
}

/*
==============
bdPagingToken::~bdPagingToken
==============
*/
void bdPagingToken::~bdPagingToken(bdPagingToken *this)
{
  this->__vftable = (bdPagingToken_vtbl *)&bdPagingToken::`vftable';
  bdSecurityID::~bdSecurityID(&this->m_sessionID);
  bdTaskResultProcessor::~bdTaskResultProcessor(this);
}

/*
==============
bdPagingToken::getNumResultsPerPage
==============
*/
__int64 bdPagingToken::getNumResultsPerPage(bdPagingToken *this)
{
  return this->m_numResultsPerPage;
}

/*
==============
bdPagingToken::getSessionID
==============
*/
bdSecurityID *bdPagingToken::getSessionID(bdPagingToken *this)
{
  return &this->m_sessionID;
}

/*
==============
bdPagingToken::getStatus
==============
*/
__int64 bdPagingToken::getStatus(bdPagingToken *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdPagingToken::processResult
==============
*/
char bdPagingToken::processResult(bdPagingToken *this, bdTaskResult *lastResultSet, unsigned int numResults)
{
  unsigned int m_numResultsPerPage; 
  bool v8; 
  bdPagingToken::bdStatus v9; 
  unsigned int v10; 
  bdSecurityID *v11; 
  bdSecurityID v12; 

  if ( this->m_status == BD_RUNNING )
    return 0;
  m_numResultsPerPage = this->m_numResultsPerPage;
  if ( numResults < m_numResultsPerPage || (v8 = m_numResultsPerPage == 0, v9 = BD_CREATING, v8) )
    v9 = BD_RUNNING;
  this->m_status = v9;
  if ( numResults )
  {
    v10 = lastResultSet->sizeOf(lastResultSet);
    bdSecurityID::bdSecurityID(&v12, (const bdSecurityID *)((char *)&lastResultSet[1] + (numResults - 1) * v10));
    this->m_sessionID = *v11;
    bdSecurityID::~bdSecurityID(&v12);
  }
  return 1;
}

