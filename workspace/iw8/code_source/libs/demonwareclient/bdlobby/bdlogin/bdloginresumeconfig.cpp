/*
==============
bdLoginResumeConfig::getNumSubscriptions
==============
*/

unsigned __int16 __fastcall bdLoginResumeConfig::getNumSubscriptions(bdLoginResumeConfig *this)
{
  return ?getNumSubscriptions@bdLoginResumeConfig@@QEAAGXZ(this);
}

/*
==============
bdLoginResumeConfig::setSubscription
==============
*/

void __fastcall bdLoginResumeConfig::setSubscription(bdLoginResumeConfig *this, bdUnoSubscription *subscriptions)
{
  ?setSubscription@bdLoginResumeConfig@@QEAAXPEAVbdUnoSubscription@@@Z(this, subscriptions);
}

/*
==============
bdLoginResumeConfig::bdLoginResumeConfig
==============
*/

void __fastcall bdLoginResumeConfig::bdLoginResumeConfig(bdLoginResumeConfig *this)
{
  ??0bdLoginResumeConfig@@QEAA@XZ(this);
}

/*
==============
bdLoginResumeConfig::setFields
==============
*/

void __fastcall bdLoginResumeConfig::setFields(bdLoginResumeConfig *this, const char *fields)
{
  ?setFields@bdLoginResumeConfig@@QEAAXPEBD@Z(this, fields);
}

/*
==============
bdLoginResumeConfig::isInitialized
==============
*/

bool __fastcall bdLoginResumeConfig::isInitialized(bdLoginResumeConfig *this)
{
  return ?isInitialized@bdLoginResumeConfig@@QEAA_NXZ(this);
}

/*
==============
bdLoginResumeConfig::getLocale
==============
*/

const char *__fastcall bdLoginResumeConfig::getLocale(bdLoginResumeConfig *this)
{
  return ?getLocale@bdLoginResumeConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginResumeConfig::setNumSubscriptions
==============
*/

void __fastcall bdLoginResumeConfig::setNumSubscriptions(bdLoginResumeConfig *this, const unsigned __int16 numSubs)
{
  ?setNumSubscriptions@bdLoginResumeConfig@@QEAAXG@Z(this, numSubs);
}

/*
==============
bdLoginResumeConfig::setSource
==============
*/

void __fastcall bdLoginResumeConfig::setSource(bdLoginResumeConfig *this, const char *source)
{
  ?setSource@bdLoginResumeConfig@@QEAAXPEBD@Z(this, source);
}

/*
==============
bdLoginResumeConfig::getTermsOfService
==============
*/

bdUnoTermsOfService *__fastcall bdLoginResumeConfig::getTermsOfService(bdLoginResumeConfig *this)
{
  return ?getTermsOfService@bdLoginResumeConfig@@QEAAPEAVbdUnoTermsOfService@@XZ(this);
}

/*
==============
bdLoginResumeConfig::getSource
==============
*/

const char *__fastcall bdLoginResumeConfig::getSource(bdLoginResumeConfig *this)
{
  return ?getSource@bdLoginResumeConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginResumeConfig::setLocale
==============
*/

bool __fastcall bdLoginResumeConfig::setLocale(bdLoginResumeConfig *this, const char *locale)
{
  return ?setLocale@bdLoginResumeConfig@@QEAA_NPEBD@Z(this, locale);
}

/*
==============
bdLoginResumeConfig::getFields
==============
*/

const char *__fastcall bdLoginResumeConfig::getFields(bdLoginResumeConfig *this)
{
  return ?getFields@bdLoginResumeConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginResumeConfig::setAccountInfo
==============
*/

void __fastcall bdLoginResumeConfig::setAccountInfo(bdLoginResumeConfig *this, bdUnoAccountInfo *accountInfo)
{
  ?setAccountInfo@bdLoginResumeConfig@@QEAAXAEAVbdUnoAccountInfo@@@Z(this, accountInfo);
}

/*
==============
bdLoginResumeConfig::getAccountInfo
==============
*/

bdUnoAccountInfo *__fastcall bdLoginResumeConfig::getAccountInfo(bdLoginResumeConfig *this, bdUnoAccountInfo *result)
{
  return ?getAccountInfo@bdLoginResumeConfig@@QEAA?AVbdUnoAccountInfo@@XZ(this, result);
}

/*
==============
bdLoginResumeConfig::setTermsOfService
==============
*/

void __fastcall bdLoginResumeConfig::setTermsOfService(bdLoginResumeConfig *this, bdUnoTermsOfService *termsOfService)
{
  ?setTermsOfService@bdLoginResumeConfig@@QEAAXPEAVbdUnoTermsOfService@@@Z(this, termsOfService);
}

/*
==============
bdLoginResumeConfig::bdLoginResumeConfig
==============
*/

void __fastcall bdLoginResumeConfig::bdLoginResumeConfig(bdLoginResumeConfig *this, const bdLoginResumeConfig *__that)
{
  ??0bdLoginResumeConfig@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdLoginResumeConfig::~bdLoginResumeConfig
==============
*/

void __fastcall bdLoginResumeConfig::~bdLoginResumeConfig(bdLoginResumeConfig *this)
{
  ??1bdLoginResumeConfig@@QEAA@XZ(this);
}

/*
==============
bdLoginResumeConfig::getSubscription
==============
*/

bdUnoSubscription *__fastcall bdLoginResumeConfig::getSubscription(bdLoginResumeConfig *this)
{
  return ?getSubscription@bdLoginResumeConfig@@QEAAPEAVbdUnoSubscription@@XZ(this);
}

/*
==============
bdLoginResumeConfig::bdLoginResumeConfig
==============
*/
void bdLoginResumeConfig::bdLoginResumeConfig(bdLoginResumeConfig *this, const bdLoginResumeConfig *__that)
{
  bdUnoAccountInfo::bdUnoAccountInfo(&this->m_accountInfo, &__that->m_accountInfo);
  this->m_subscriptions = __that->m_subscriptions;
  this->m_numSubscriptions = __that->m_numSubscriptions;
  this->m_termsOfService = __that->m_termsOfService;
  *(_DWORD *)this->m_locale = *(_DWORD *)__that->m_locale;
  *(_WORD *)&this->m_locale[4] = *(_WORD *)&__that->m_locale[4];
  this->m_fields = __that->m_fields;
  this->m_source = __that->m_source;
  this->m_initialized = __that->m_initialized;
}

/*
==============
bdLoginResumeConfig::bdLoginResumeConfig
==============
*/
void bdLoginResumeConfig::bdLoginResumeConfig(bdLoginResumeConfig *this)
{
  bdUnoAccountInfo::bdUnoAccountInfo(&this->m_accountInfo);
  this->m_subscriptions = NULL;
  this->m_numSubscriptions = 0;
  this->m_termsOfService = NULL;
  this->m_fields = NULL;
  this->m_source = NULL;
  this->m_initialized = 0;
  *(_DWORD *)this->m_locale = 0;
  *(_WORD *)&this->m_locale[4] = 0;
}

/*
==============
bdLoginResumeConfig::~bdLoginResumeConfig
==============
*/

void __fastcall bdLoginResumeConfig::~bdLoginResumeConfig(bdLoginResumeConfig *this)
{
  bdUnoAccountInfo::~bdUnoAccountInfo(&this->m_accountInfo);
}

/*
==============
bdLoginResumeConfig::getAccountInfo
==============
*/
bdUnoAccountInfo *bdLoginResumeConfig::getAccountInfo(bdLoginResumeConfig *this, bdUnoAccountInfo *result)
{
  bdUnoAccountInfo::bdUnoAccountInfo(result, &this->m_accountInfo);
  return result;
}

/*
==============
bdLoginResumeConfig::getFields
==============
*/
char *bdLoginResumeConfig::getFields(bdLoginResumeConfig *this)
{
  return this->m_fields;
}

/*
==============
bdLoginResumeConfig::getLocale
==============
*/
char *bdLoginResumeConfig::getLocale(bdLoginResumeConfig *this)
{
  return this->m_locale;
}

/*
==============
bdLoginResumeConfig::getNumSubscriptions
==============
*/
__int64 bdLoginResumeConfig::getNumSubscriptions(bdLoginResumeConfig *this)
{
  return this->m_numSubscriptions;
}

/*
==============
bdLoginResumeConfig::getSource
==============
*/
char *bdLoginResumeConfig::getSource(bdLoginResumeConfig *this)
{
  return this->m_source;
}

/*
==============
bdLoginResumeConfig::getSubscription
==============
*/
bdUnoSubscription *bdLoginResumeConfig::getSubscription(bdLoginResumeConfig *this)
{
  return this->m_subscriptions;
}

/*
==============
bdLoginResumeConfig::getTermsOfService
==============
*/
bdUnoTermsOfService *bdLoginResumeConfig::getTermsOfService(bdLoginResumeConfig *this)
{
  return this->m_termsOfService;
}

/*
==============
bdLoginResumeConfig::isInitialized
==============
*/
_BOOL8 bdLoginResumeConfig::isInitialized(bdLoginResumeConfig *this)
{
  return this->m_initialized;
}

/*
==============
bdLoginResumeConfig::setAccountInfo
==============
*/
void bdLoginResumeConfig::setAccountInfo(bdLoginResumeConfig *this, bdUnoAccountInfo *accountInfo)
{
  bdUnoAccountInfo::operator=(&this->m_accountInfo, accountInfo);
  this->m_initialized = 1;
}

/*
==============
bdLoginResumeConfig::setFields
==============
*/
void bdLoginResumeConfig::setFields(bdLoginResumeConfig *this, const char *fields)
{
  bdStrlcpy(this->m_fields, fields, 8ui64);
}

/*
==============
bdLoginResumeConfig::setLocale
==============
*/
char bdLoginResumeConfig::setLocale(bdLoginResumeConfig *this, const char *locale)
{
  unsigned __int64 v4; 

  bdHandleAssert(locale != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( locale[v4] );
  if ( v4 > 6 )
    return 0;
  bdStrlcpy(this->m_locale, locale, 6ui64);
  return 1;
}

/*
==============
bdLoginResumeConfig::setNumSubscriptions
==============
*/
void bdLoginResumeConfig::setNumSubscriptions(bdLoginResumeConfig *this, const unsigned __int16 numSubs)
{
  this->m_numSubscriptions = numSubs;
}

/*
==============
bdLoginResumeConfig::setSource
==============
*/
void bdLoginResumeConfig::setSource(bdLoginResumeConfig *this, const char *source)
{
  bdStrlcpy(this->m_source, source, 8ui64);
}

/*
==============
bdLoginResumeConfig::setSubscription
==============
*/
void bdLoginResumeConfig::setSubscription(bdLoginResumeConfig *this, bdUnoSubscription *subscriptions)
{
  this->m_subscriptions = subscriptions;
}

/*
==============
bdLoginResumeConfig::setTermsOfService
==============
*/
void bdLoginResumeConfig::setTermsOfService(bdLoginResumeConfig *this, bdUnoTermsOfService *termsOfService)
{
  this->m_termsOfService = termsOfService;
}

