/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this)
{
  ??0bdUserPresenceV3@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceV3::setPresence
==============
*/

void __fastcall bdUserPresenceV3::setPresence(bdUserPresenceV3 *this, const bdUserPresenceInfoV3 *presence)
{
  ?setPresence@bdUserPresenceV3@@QEAAXAEBVbdUserPresenceInfoV3@@@Z(this, presence);
}

/*
==============
bdUserPresenceV3::getContext
==============
*/

const char *__fastcall bdUserPresenceV3::getContext(bdUserPresenceV3 *this)
{
  return ?getContext@bdUserPresenceV3@@QEBAPEBDXZ(this);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfoV3 *presence)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserAccountID@@PEBDAEBVbdUserPresenceInfoV3@@@Z(this, user, context, presence);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfoV3 *presences, unsigned int numPresences)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserAccountID@@PEBDQEBVbdUserPresenceInfoV3@@I@Z(this, user, context, presences, numPresences);
}

/*
==============
bdUserPresenceV3::getNumPresences
==============
*/

unsigned int __fastcall bdUserPresenceV3::getNumPresences(bdUserPresenceV3 *this)
{
  return ?getNumPresences@bdUserPresenceV3@@QEBAIXZ(this);
}

/*
==============
bdUserPresenceV3::getPresence
==============
*/

const bdUserPresenceInfoV3 *__fastcall bdUserPresenceV3::getPresence(bdUserPresenceV3 *this, unsigned int index)
{
  return ?getPresence@bdUserPresenceV3@@QEBAAEBVbdUserPresenceInfoV3@@I@Z(this, index);
}

/*
==============
bdUserPresenceV3::getUserDetails
==============
*/

bdUserDetails *__fastcall bdUserPresenceV3::getUserDetails(bdUserPresenceV3 *this, bdUserDetails *result)
{
  return ?getUserDetails@bdUserPresenceV3@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdUserPresenceV3::setPresences
==============
*/

void __fastcall bdUserPresenceV3::setPresences(bdUserPresenceV3 *this, const bdUserPresenceInfoV3 *presences, const unsigned int numPresences)
{
  ?setPresences@bdUserPresenceV3@@QEAAXQEBVbdUserPresenceInfoV3@@I@Z(this, presences, numPresences);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserAccountID@@PEBD@Z(this, user, context);
}

/*
==============
bdUserPresenceV3::setUserDetails
==============
*/

void __fastcall bdUserPresenceV3::setUserDetails(bdUserPresenceV3 *this, const bdUserDetails *userDetails)
{
  ?setUserDetails@bdUserPresenceV3@@QEAAXAEBVbdUserDetails@@@Z(this, userDetails);
}

/*
==============
bdUserPresenceV3::~bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::~bdUserPresenceV3(bdUserPresenceV3 *this)
{
  ??1bdUserPresenceV3@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceV3::setContext
==============
*/

void __fastcall bdUserPresenceV3::setContext(bdUserPresenceV3 *this, const char *context)
{
  ?setContext@bdUserPresenceV3@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfoV3 *presence)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserDetails@@PEBDAEBVbdUserPresenceInfoV3@@@Z(this, userDetails, context, presence);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfoV3 *presences, unsigned int numPresences)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserDetails@@PEBDQEBVbdUserPresenceInfoV3@@I@Z(this, userDetails, context, presences, numPresences);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/

void __fastcall bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context)
{
  ??0bdUserPresenceV3@@QEAA@AEBVbdUserDetails@@PEBD@Z(this, userDetails, context);
}

/*
==============
bdUserPresenceV3::setUser
==============
*/

void __fastcall bdUserPresenceV3::setUser(bdUserPresenceV3 *this, const bdUserAccountID *user)
{
  ?setUser@bdUserPresenceV3@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdUserPresenceV3::getUser
==============
*/

bdUserAccountID *__fastcall bdUserPresenceV3::getUser(bdUserPresenceV3 *this, bdUserAccountID *result)
{
  return ?getUser@bdUserPresenceV3@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfoV3 *presence)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3>::pushBack(&this->m_presences, presence);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfoV3 *presences, unsigned int numPresences)
{
  unsigned int v8; 
  __int64 m_size; 
  bdUserPresenceInfoV3 *v11; 
  char *p_m_hasValue; 

  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  v8 = 0;
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
  bdHandleAssert(numPresences <= 3, "numPresences <= BD_CROSS_PLATFORM_PRESENCE_MAX_ONLINE_TITLES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bduserpresencev3.cpp", "bdUserPresenceV3::bdUserPresenceV3", 0x38u, "bdUserPresenceV3::bdUserPresenceV3 too many presences provided", -2i64, &this->m_presences);
  if ( numPresences )
  {
    _RBX = &presences->m_titleID.m_value;
    do
    {
      if ( this->m_presences.m_size >= 3 )
        break;
      bdHandleAssert(this->m_presences.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceInfoV3,3>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_presences.m_size;
      if ( (unsigned int)m_size < 3 )
      {
        v11 = &this->m_presences.m_elements[m_size];
        this->m_presences.m_size = m_size + 1;
        v11->m_online = *((_BYTE *)_RBX - 620);
        _RCX = &v11->m_platform;
        if ( &v11->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)((char *)_RBX - 619) )
        {
          _RCX->m_hasValue = *((_BYTE *)_RBX - 619);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx-26Ah]
            vmovups xmmword ptr [rcx+1], xmm0
          }
          v11->m_platform.m_value.m_buffer[16] = *((_BYTE *)_RBX - 602);
        }
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v11->m_titleToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 149));
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v11->m_presenceToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 75));
        if ( &v11->m_titleID != (bdStructOptionalObject<unsigned int> *)(_RBX - 1) )
        {
          v11->m_titleID.m_hasValue = *((_BYTE *)_RBX - 4);
          v11->m_titleID.m_value = *_RBX;
        }
        if ( &v11->m_data != (bdStructOptionalObject<bdPresenceData> *)(_RBX + 1) )
        {
          v11->m_data.m_hasValue = *((_BYTE *)_RBX + 4);
          bdCrossPlatformUserMetadata::operator=(&v11->m_data.m_value, (const bdCrossPlatformUserMetadata *)(_RBX + 3));
        }
        p_m_hasValue = (char *)&v11->m_updateTime.m_hasValue;
        if ( p_m_hasValue != (char *)(_RBX + 9) )
        {
          *p_m_hasValue = *((_BYTE *)_RBX + 36);
          *((_QWORD *)p_m_hasValue + 1) = *(_QWORD *)(_RBX + 11);
        }
      }
      ++v8;
      _RBX += 168;
    }
    while ( v8 < numPresences );
  }
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfoV3 *presence)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3>::pushBack(&this->m_presences, presence);
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfoV3 *presences, unsigned int numPresences)
{
  unsigned int v8; 
  __int64 m_size; 
  bdUserPresenceInfoV3 *v11; 
  char *p_m_hasValue; 

  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  v8 = 0;
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdHandleAssert(numPresences <= 3, "numPresences <= BD_CROSS_PLATFORM_PRESENCE_MAX_ONLINE_TITLES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bduserpresencev3.cpp", "bdUserPresenceV3::bdUserPresenceV3", 0x4Cu, "bdUserPresenceV3::bdUserPresenceV3 too many presences provided", -2i64, &this->m_presences);
  if ( numPresences )
  {
    _RBX = &presences->m_titleID.m_value;
    do
    {
      if ( this->m_presences.m_size >= 3 )
        break;
      bdHandleAssert(this->m_presences.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceInfoV3,3>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_presences.m_size;
      if ( (unsigned int)m_size < 3 )
      {
        v11 = &this->m_presences.m_elements[m_size];
        this->m_presences.m_size = m_size + 1;
        v11->m_online = *((_BYTE *)_RBX - 620);
        _RCX = &v11->m_platform;
        if ( &v11->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)((char *)_RBX - 619) )
        {
          _RCX->m_hasValue = *((_BYTE *)_RBX - 619);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx-26Ah]
            vmovups xmmword ptr [rcx+1], xmm0
          }
          v11->m_platform.m_value.m_buffer[16] = *((_BYTE *)_RBX - 602);
        }
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v11->m_titleToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 149));
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v11->m_presenceToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 75));
        if ( &v11->m_titleID != (bdStructOptionalObject<unsigned int> *)(_RBX - 1) )
        {
          v11->m_titleID.m_hasValue = *((_BYTE *)_RBX - 4);
          v11->m_titleID.m_value = *_RBX;
        }
        if ( &v11->m_data != (bdStructOptionalObject<bdPresenceData> *)(_RBX + 1) )
        {
          v11->m_data.m_hasValue = *((_BYTE *)_RBX + 4);
          bdCrossPlatformUserMetadata::operator=(&v11->m_data.m_value, (const bdCrossPlatformUserMetadata *)(_RBX + 3));
        }
        p_m_hasValue = (char *)&v11->m_updateTime.m_hasValue;
        if ( p_m_hasValue != (char *)(_RBX + 9) )
        {
          *p_m_hasValue = *((_BYTE *)_RBX + 36);
          *((_QWORD *)p_m_hasValue + 1) = *(_QWORD *)(_RBX + 11);
        }
      }
      ++v8;
      _RBX += 168;
    }
    while ( v8 < numPresences );
  }
}

/*
==============
bdUserPresenceV3::bdUserPresenceV3
==============
*/
void bdUserPresenceV3::bdUserPresenceV3(bdUserPresenceV3 *this)
{
  unsigned __int64 v2; 
  size_t v3; 

  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this )
  {
    v3 = 16i64;
    if ( v2 < 0x10 )
      v3 = v2;
    memcpy_0(this, (char *)&queryFormat.fmt + 3, v3);
    this->m_context.m_buffer[v3] = 0;
  }
  `eh vector constructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  this->m_presences.m_size = 0;
  bdUserDetails::bdUserDetails(&this->m_userDetails);
}

/*
==============
bdUserPresenceV3::~bdUserPresenceV3
==============
*/
void bdUserPresenceV3::~bdUserPresenceV3(bdUserPresenceV3 *this)
{
  bdUserDetails::~bdUserDetails((bdUserDetails *)&this->m_userDetails.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_userDetails.gap79[7]);
  `eh vector destructor iterator'(&this->m_presences, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
}

/*
==============
bdUserPresenceV3::getContext
==============
*/
bdUserPresenceV3 *bdUserPresenceV3::getContext(bdUserPresenceV3 *this)
{
  return this;
}

/*
==============
bdUserPresenceV3::getNumPresences
==============
*/
__int64 bdUserPresenceV3::getNumPresences(bdUserPresenceV3 *this)
{
  return this->m_presences.m_size;
}

/*
==============
bdUserPresenceV3::getPresence
==============
*/
const bdUserPresenceInfoV3 *bdUserPresenceV3::getPresence(bdUserPresenceV3 *this, unsigned int index)
{
  bdUserPresenceV3 *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_presences.m_size, "index < m_presences.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bduserpresencev3.cpp", "bdUserPresenceV3::getPresence", 0x96u, "bdUserPresenceV3::getPresence index out of range");
  v2 = (bdUserPresenceV3 *)((char *)v2 + 24);
  bdHandleAssert((unsigned int)v3 < LODWORD(v2->m_presences.m_elements[2].m_data.m_value.m_jsonValue.m_string), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceInfoV3,3>::operator []", 0x54u, "i is out of range");
  return (const bdUserPresenceInfoV3 *)((char *)v2 + 672 * v3);
}

/*
==============
bdUserPresenceV3::getUser
==============
*/
bdUserAccountID *bdUserPresenceV3::getUser(bdUserPresenceV3 *this, bdUserAccountID *result)
{
  bdUserDetails *p_m_userDetails; 
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  p_m_userDetails = &this->m_userDetails;
  AccountType = bdUserDetails::getAccountType(&this->m_userDetails);
  userID = bdUserDetails::getUserID(p_m_userDetails);
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdUserPresenceV3::getUserDetails
==============
*/
bdUserDetails *bdUserPresenceV3::getUserDetails(bdUserPresenceV3 *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, &this->m_userDetails);
  return result;
}

/*
==============
bdUserPresenceV3::setContext
==============
*/

void __fastcall bdUserPresenceV3::setContext(bdUserPresenceV3 *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdUserPresenceV3::setPresence
==============
*/
void bdUserPresenceV3::setPresence(bdUserPresenceV3 *this, const bdUserPresenceInfoV3 *presence)
{
  this->m_presences.m_size = 0;
  bdStructFixedSizeArray<bdUserPresenceInfoV3,3>::pushBack(&this->m_presences, presence);
}

/*
==============
bdUserPresenceV3::setPresences
==============
*/
void bdUserPresenceV3::setPresences(bdUserPresenceV3 *this, const bdUserPresenceInfoV3 *presences, const unsigned int numPresences)
{
  unsigned int v6; 
  __int64 m_size; 
  bdUserPresenceInfoV3 *v9; 
  char *p_m_hasValue; 

  bdHandleAssert(numPresences <= 3, "numPresences <= BD_CROSS_PLATFORM_PRESENCE_MAX_ONLINE_TITLES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bduserpresencev3.cpp", "bdUserPresenceV3::setPresences", 0x71u, "bdUserPresenceV3::setPresences too many presences provided");
  v6 = 0;
  this->m_presences.m_size = 0;
  if ( numPresences )
  {
    _RBX = &presences->m_titleID.m_value;
    do
    {
      if ( this->m_presences.m_size >= 3 )
        break;
      bdHandleAssert(this->m_presences.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceInfoV3,3>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_presences.m_size;
      if ( (unsigned int)m_size < 3 )
      {
        this->m_presences.m_size = m_size + 1;
        v9 = &this->m_presences.m_elements[m_size];
        v9->m_online = *((_BYTE *)_RBX - 620);
        _RCX = &v9->m_platform;
        if ( &v9->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)((char *)_RBX - 619) )
        {
          _RCX->m_hasValue = *((_BYTE *)_RBX - 619);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx-26Ah]
            vmovups xmmword ptr [rcx+1], xmm0
          }
          v9->m_platform.m_value.m_buffer[16] = *((_BYTE *)_RBX - 602);
        }
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v9->m_titleToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 149));
        bdStructOptionalObject<bdLocalizationToken>::operator=(&v9->m_presenceToken, (const bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 75));
        if ( &v9->m_titleID != (bdStructOptionalObject<unsigned int> *)(_RBX - 1) )
        {
          v9->m_titleID.m_hasValue = *((_BYTE *)_RBX - 4);
          v9->m_titleID.m_value = *_RBX;
        }
        if ( &v9->m_data != (bdStructOptionalObject<bdPresenceData> *)(_RBX + 1) )
        {
          v9->m_data.m_hasValue = *((_BYTE *)_RBX + 4);
          bdCrossPlatformUserMetadata::operator=(&v9->m_data.m_value, (const bdCrossPlatformUserMetadata *)(_RBX + 3));
        }
        p_m_hasValue = (char *)&v9->m_updateTime.m_hasValue;
        if ( p_m_hasValue != (char *)(_RBX + 9) )
        {
          *p_m_hasValue = *((_BYTE *)_RBX + 36);
          *((_QWORD *)p_m_hasValue + 1) = *(_QWORD *)(_RBX + 11);
        }
      }
      ++v6;
      _RBX += 168;
    }
    while ( v6 < numPresences );
  }
}

/*
==============
bdUserPresenceV3::setUser
==============
*/
void bdUserPresenceV3::setUser(bdUserPresenceV3 *this, const bdUserAccountID *user)
{
  const bdUserDetails *v3; 
  bdUserDetails v4; 

  bdUserDetails::bdUserDetails(&v4, user);
  bdUserDetails::operator=(&this->m_userDetails, v3);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v4.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)&v4.gap79[7]);
}

/*
==============
bdUserPresenceV3::setUserDetails
==============
*/
void bdUserPresenceV3::setUserDetails(bdUserPresenceV3 *this, const bdUserDetails *userDetails)
{
  bdUserDetails::operator=(&this->m_userDetails, userDetails);
}

