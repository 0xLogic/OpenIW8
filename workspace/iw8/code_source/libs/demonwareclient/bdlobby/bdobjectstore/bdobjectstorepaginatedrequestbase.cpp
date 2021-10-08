/*
==============
bdObjectStorePaginatedRequestBase::getPageToken
==============
*/

const char *__fastcall bdObjectStorePaginatedRequestBase::getPageToken(bdObjectStorePaginatedRequestBase *this)
{
  return ?getPageToken@bdObjectStorePaginatedRequestBase@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase
==============
*/

void __fastcall bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase(bdObjectStorePaginatedRequestBase *this)
{
  ??1bdObjectStorePaginatedRequestBase@@UEAA@XZ(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::getLimit
==============
*/

unsigned int __fastcall bdObjectStorePaginatedRequestBase::getLimit(bdObjectStorePaginatedRequestBase *this)
{
  return ?getLimit@bdObjectStorePaginatedRequestBase@@QEBAIXZ(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::hasPageToken
==============
*/

bool __fastcall bdObjectStorePaginatedRequestBase::hasPageToken(bdObjectStorePaginatedRequestBase *this)
{
  return ?hasPageToken@bdObjectStorePaginatedRequestBase@@QEBA_NXZ(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::reset
==============
*/

void __fastcall bdObjectStorePaginatedRequestBase::reset(bdObjectStorePaginatedRequestBase *this)
{
  ?reset@bdObjectStorePaginatedRequestBase@@QEAAXXZ(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::setLimit
==============
*/

void __fastcall bdObjectStorePaginatedRequestBase::setLimit(bdObjectStorePaginatedRequestBase *this, unsigned int limit)
{
  ?setLimit@bdObjectStorePaginatedRequestBase@@QEAAXI@Z(this, limit);
}

/*
==============
bdObjectStorePaginatedRequestBase::setPageToken
==============
*/

void __fastcall bdObjectStorePaginatedRequestBase::setPageToken(bdObjectStorePaginatedRequestBase *this, const char *pageToken)
{
  ?setPageToken@bdObjectStorePaginatedRequestBase@@QEAAXPEBD@Z(this, pageToken);
}

/*
==============
bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase
==============
*/
void bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase(bdObjectStorePaginatedRequestBase *this)
{
  this->__vftable = (bdObjectStorePaginatedRequestBase_vtbl *)&bdObjectStorePaginatedRequestBase::`vftable';
  bdObjectStoreRequestBase::~bdObjectStoreRequestBase(this);
}

/*
==============
bdObjectStorePaginatedRequestBase::getLimit
==============
*/
__int64 bdObjectStorePaginatedRequestBase::getLimit(bdObjectStorePaginatedRequestBase *this)
{
  return this->m_limit;
}

/*
==============
bdObjectStorePaginatedRequestBase::getPageToken
==============
*/
char *bdObjectStorePaginatedRequestBase::getPageToken(bdObjectStorePaginatedRequestBase *this)
{
  return this->m_pageToken;
}

/*
==============
bdObjectStorePaginatedRequestBase::hasPageToken
==============
*/
bool bdObjectStorePaginatedRequestBase::hasPageToken(bdObjectStorePaginatedRequestBase *this)
{
  return strncmp(this->m_pageToken, (const char *)&queryFormat.fmt + 3, 0x1A6ui64) != 0;
}

/*
==============
bdObjectStorePaginatedRequestBase::reset
==============
*/
void bdObjectStorePaginatedRequestBase::reset(bdObjectStorePaginatedRequestBase *this)
{
  bdObjectStoreRequestBase::reset(this);
  memset_0(this->m_pageToken, 0, sizeof(this->m_pageToken));
  this->m_limit = 0;
}

/*
==============
bdObjectStorePaginatedRequestBase::setLimit
==============
*/
void bdObjectStorePaginatedRequestBase::setLimit(bdObjectStorePaginatedRequestBase *this, unsigned int limit)
{
  __int64 v5; 
  int v6; 

  v6 = 50;
  bdHandleAssert(limit <= 0x32, "limit <= BD_OBJECTSTORE_MAX_PAGE_LIMIT_FOR_LIST_OBJECTS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorepaginatedrequestbase.cpp", "bdObjectStorePaginatedRequestBase::setLimit", 0x26u, "limit [%d] too big. Max limit [%d]", limit, v6);
  LODWORD(v5) = limit;
  bdHandleAssert(limit != 0, "limit != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorepaginatedrequestbase.cpp", "bdObjectStorePaginatedRequestBase::setLimit", 0x27u, "limit [%d] is invalid.", v5);
  this->m_limit = limit;
}

/*
==============
bdObjectStorePaginatedRequestBase::setPageToken
==============
*/
void bdObjectStorePaginatedRequestBase::setPageToken(bdObjectStorePaginatedRequestBase *this, const char *pageToken)
{
  _BYTE *v4; 
  unsigned __int64 v5; 

  if ( pageToken )
  {
    v4 = memchr_0(pageToken, 0, 0x1A6ui64);
    v5 = 422i64;
    if ( v4 )
      v5 = v4 - pageToken;
    bdHandleAssert(v5 < 0x1A6, "(bdStrnlen(pageToken, BD_OBJECTSTORE_MAX_PAGETOKEN_LENGTH) < BD_OBJECTSTORE_MAX_PAGETOKEN_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorepaginatedrequestbase.cpp", "bdObjectStorePaginatedRequestBase::setPageToken", 0x1Fu, "Page Token is too long. Max length is %d", 421);
    bdStrlcpy(this->m_pageToken, pageToken, 0x1A6ui64);
  }
  else
  {
    memset_0(this->m_pageToken, 0, sizeof(this->m_pageToken));
  }
}

