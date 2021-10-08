/*
==============
bdAuthenticationTag::bdAuthenticationTag
==============
*/

void __fastcall bdAuthenticationTag::bdAuthenticationTag(bdAuthenticationTag *this, const unsigned __int8 *const tag, const unsigned __int8 tagLength)
{
  ??0bdAuthenticationTag@@QEAA@QEBEE@Z(this, tag, tagLength);
}

/*
==============
bdAuthenticationTag::getTagLength
==============
*/

unsigned __int8 __fastcall bdAuthenticationTag::getTagLength(bdAuthenticationTag *this)
{
  return ?getTagLength@bdAuthenticationTag@@QEBAEXZ(this);
}

/*
==============
bdAuthenticationTag::setTag
==============
*/

bool __fastcall bdAuthenticationTag::setTag(bdAuthenticationTag *this, const unsigned __int8 *const tag, const unsigned __int8 tagLength)
{
  return ?setTag@bdAuthenticationTag@@QEAA_NQEBEE@Z(this, tag, tagLength);
}

/*
==============
bdAuthenticationTag::getTag
==============
*/

unsigned __int8 *__fastcall bdAuthenticationTag::getTag(bdAuthenticationTag *this)
{
  return ?getTag@bdAuthenticationTag@@QEAAPEAEXZ(this);
}

/*
==============
bdAuthenticationTag::~bdAuthenticationTag
==============
*/

void __fastcall bdAuthenticationTag::~bdAuthenticationTag(bdAuthenticationTag *this)
{
  ??1bdAuthenticationTag@@UEAA@XZ(this);
}

/*
==============
bdAuthenticationTag::bdAuthenticationTag
==============
*/

void __fastcall bdAuthenticationTag::bdAuthenticationTag(bdAuthenticationTag *this)
{
  ??0bdAuthenticationTag@@QEAA@XZ(this);
}

/*
==============
bdAuthenticationTag::bdAuthenticationTag
==============
*/
void bdAuthenticationTag::bdAuthenticationTag(bdAuthenticationTag *this, const unsigned __int8 *const tag, const unsigned __int8 tagLength)
{
  int v6; 
  int v7; 
  int v8; 

  this->__vftable = (bdAuthenticationTag_vtbl *)&bdAuthenticationTag::`vftable';
  bdHandleAssert(tagLength >= 0xCu, "tagLength >= BD_TAG_SIZE_MIN", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x22u, "Tag Length too small");
  bdHandleAssert(tagLength <= 0x10u, "tagLength <= BD_TAG_SIZE_MAX", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x23u, "Tag Length too large");
  if ( (unsigned __int8)(tagLength - 12) > 4u )
  {
    v8 = 16;
    v7 = 12;
    v6 = tagLength;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuthenticationTag", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x2Eu, "Tag length [%u] not between [%d] and [%d]", v6, v7, v8);
  }
  else
  {
    this->m_tagLength = tagLength;
    memcpy_0(this->m_tag, tag, tagLength);
    memset_0(&this->m_tag[this->m_tagLength], 0, 16i64 - this->m_tagLength);
  }
}

/*
==============
bdAuthenticationTag::bdAuthenticationTag
==============
*/
void bdAuthenticationTag::bdAuthenticationTag(bdAuthenticationTag *this)
{
  this->__vftable = (bdAuthenticationTag_vtbl *)&bdAuthenticationTag::`vftable';
  *(_QWORD *)this->m_tag = 0i64;
  *(_QWORD *)&this->m_tag[8] = 0i64;
  this->m_tagLength = 16;
}

/*
==============
bdAuthenticationTag::~bdAuthenticationTag
==============
*/
void bdAuthenticationTag::~bdAuthenticationTag(bdAuthenticationTag *this)
{
  this->__vftable = (bdAuthenticationTag_vtbl *)&bdAuthenticationTag::`vftable';
}

/*
==============
bdAuthenticationTag::getTag
==============
*/
unsigned __int8 *bdAuthenticationTag::getTag(bdAuthenticationTag *this)
{
  return this->m_tag;
}

/*
==============
bdAuthenticationTag::getTagLength
==============
*/
__int64 bdAuthenticationTag::getTagLength(bdAuthenticationTag *this)
{
  return this->m_tagLength;
}

/*
==============
bdAuthenticationTag::setTag
==============
*/
char bdAuthenticationTag::setTag(bdAuthenticationTag *this, const unsigned __int8 *const tag, const unsigned __int8 tagLength)
{
  int v7; 
  int v8; 
  int v9; 

  bdHandleAssert(tagLength >= 0xCu, "tagLength >= BD_TAG_SIZE_MIN", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x22u, "Tag Length too small");
  bdHandleAssert(tagLength <= 0x10u, "tagLength <= BD_TAG_SIZE_MAX", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x23u, "Tag Length too large");
  if ( (unsigned __int8)(tagLength - 12) > 4u )
  {
    v9 = 16;
    v8 = 12;
    v7 = tagLength;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuthenticationTag", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdauthenticationtag.cpp", "bdAuthenticationTag::setTag", 0x2Eu, "Tag length [%u] not between [%d] and [%d]", v7, v8, v9);
    return 0;
  }
  else
  {
    this->m_tagLength = tagLength;
    memcpy_0(this->m_tag, tag, tagLength);
    memset_0(&this->m_tag[this->m_tagLength], 0, 16i64 - this->m_tagLength);
    return 1;
  }
}

