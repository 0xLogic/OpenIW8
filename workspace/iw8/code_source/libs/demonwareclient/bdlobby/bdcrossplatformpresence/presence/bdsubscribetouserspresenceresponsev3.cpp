/*
==============
bdSubscribeToUsersPresenceResponseV3::getUserError
==============
*/

bdUserPresenceError *__fastcall bdSubscribeToUsersPresenceResponseV3::getUserError(bdSubscribeToUsersPresenceResponseV3 *this, unsigned int index)
{
  return ?getUserError@bdSubscribeToUsersPresenceResponseV3@@QEAAAEAVbdUserPresenceError@@I@Z(this, index);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getNumErrors
==============
*/

unsigned int __fastcall bdSubscribeToUsersPresenceResponseV3::getNumErrors(bdSubscribeToUsersPresenceResponseV3 *this)
{
  return ?getNumErrors@bdSubscribeToUsersPresenceResponseV3@@QEBAIXZ(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::bdSubscribeToUsersPresenceResponseV3
==============
*/

void __fastcall bdSubscribeToUsersPresenceResponseV3::bdSubscribeToUsersPresenceResponseV3(bdSubscribeToUsersPresenceResponseV3 *this)
{
  ??0bdSubscribeToUsersPresenceResponseV3@@QEAA@XZ(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::reset
==============
*/

void __fastcall bdSubscribeToUsersPresenceResponseV3::reset(bdSubscribeToUsersPresenceResponseV3 *this)
{
  ?reset@bdSubscribeToUsersPresenceResponseV3@@QEAAXXZ(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdSubscribeToUsersPresenceResponseV3::getErrorMap(bdSubscribeToUsersPresenceResponseV3 *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdSubscribeToUsersPresenceResponseV3@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::~bdSubscribeToUsersPresenceResponseV3
==============
*/

void __fastcall bdSubscribeToUsersPresenceResponseV3::~bdSubscribeToUsersPresenceResponseV3(bdSubscribeToUsersPresenceResponseV3 *this)
{
  ??1bdSubscribeToUsersPresenceResponseV3@@UEAA@XZ(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getUserPresence
==============
*/

bdUserPresenceV3 *__fastcall bdSubscribeToUsersPresenceResponseV3::getUserPresence(bdSubscribeToUsersPresenceResponseV3 *this, unsigned int index)
{
  return ?getUserPresence@bdSubscribeToUsersPresenceResponseV3@@QEAAAEAVbdUserPresenceV3@@I@Z(this, index);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getNumUsers
==============
*/

unsigned int __fastcall bdSubscribeToUsersPresenceResponseV3::getNumUsers(bdSubscribeToUsersPresenceResponseV3 *this)
{
  return ?getNumUsers@bdSubscribeToUsersPresenceResponseV3@@QEBAIXZ(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdSubscribeToUsersPresenceResponseV3::handleReplySuccess(bdSubscribeToUsersPresenceResponseV3 *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdSubscribeToUsersPresenceResponseV3@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::bdSubscribeToUsersPresenceResponseV3
==============
*/
void bdSubscribeToUsersPresenceResponseV3::bdSubscribeToUsersPresenceResponseV3(bdSubscribeToUsersPresenceResponseV3 *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdSubscribeToUsersPresenceResponseV3_vtbl *)&bdSubscribeToUsersPresenceResponseV3::`vftable';
  `eh vector constructor iterator'(&this->m_userErrors, 0x50ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserPresenceError::bdUserPresenceError, (void (__fastcall *)(void *))bdUserPresenceError::~bdUserPresenceError);
  this->m_userErrors.m_size = 0;
  `eh vector constructor iterator'(&this->m_usersPresence, 0x890ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserPresenceV3::bdUserPresenceV3, (void (__fastcall *)(void *))bdUserPresenceV3::~bdUserPresenceV3);
  this->m_usersPresence.m_size = 0;
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::~bdSubscribeToUsersPresenceResponseV3
==============
*/
void bdSubscribeToUsersPresenceResponseV3::~bdSubscribeToUsersPresenceResponseV3(bdSubscribeToUsersPresenceResponseV3 *this)
{
  this->__vftable = (bdSubscribeToUsersPresenceResponseV3_vtbl *)&bdSubscribeToUsersPresenceResponseV3::`vftable';
  `eh vector destructor iterator'(&this->m_usersPresence, 0x890ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserPresenceV3::~bdUserPresenceV3);
  `eh vector destructor iterator'(&this->m_userErrors, 0x50ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserPresenceError::~bdUserPresenceError);
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getErrorMap
==============
*/
bdRESTErrorMap *bdSubscribeToUsersPresenceResponseV3::getErrorMap(bdSubscribeToUsersPresenceResponseV3 *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_PRESENCE_ERROR_MAP_50, 5u);
  return result;
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getNumErrors
==============
*/
__int64 bdSubscribeToUsersPresenceResponseV3::getNumErrors(bdSubscribeToUsersPresenceResponseV3 *this)
{
  return this->m_userErrors.m_size;
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getNumUsers
==============
*/
__int64 bdSubscribeToUsersPresenceResponseV3::getNumUsers(bdSubscribeToUsersPresenceResponseV3 *this)
{
  return this->m_usersPresence.m_size;
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getUserError
==============
*/
bdUserPresenceError *bdSubscribeToUsersPresenceResponseV3::getUserError(bdSubscribeToUsersPresenceResponseV3 *this, unsigned int index)
{
  bdSubscribeToUsersPresenceResponseV3 *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_userErrors.m_size, "index < m_userErrors.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresenceresponsev3.cpp", "bdSubscribeToUsersPresenceResponseV3::getUserError", 0x1Bu, "bdSubscribeToUsersPresenceResponseV3::getUserError index out of range");
  v2 = (bdSubscribeToUsersPresenceResponseV3 *)((char *)v2 + 40);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_userErrors.m_elements[24].m_user._bytes_20[8], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceError,25>::operator []", 0x4Du, "i is out of range");
  return (bdUserPresenceError *)((char *)v2 + 80 * v3);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::getUserPresence
==============
*/
bdUserPresenceV3 *bdSubscribeToUsersPresenceResponseV3::getUserPresence(bdSubscribeToUsersPresenceResponseV3 *this, unsigned int index)
{
  bdSubscribeToUsersPresenceResponseV3 *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_usersPresence.m_size, "index < m_usersPresence.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresenceresponsev3.cpp", "bdSubscribeToUsersPresenceResponseV3::getUserPresence", 0x27u, "bdSubscribeToUsersPresenceResponseV3::getUserPresence index out of range");
  v2 = (bdSubscribeToUsersPresenceResponseV3 *)((char *)v2 + 2048);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_usersPresence.m_elements[24].m_presences.m_elements[0].m_titleToken.m_value.m_localizationToken.m_buffer[2], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceV3,25>::operator []", 0x4Du, "i is out of range");
  return (bdUserPresenceV3 *)((char *)v2 + 2192 * v3);
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::handleReplySuccess
==============
*/
__int64 bdSubscribeToUsersPresenceResponseV3::handleReplySuccess(bdSubscribeToUsersPresenceResponseV3 *this, const bdRESTResponseMessage *reply)
{
  bdSubscribeToUsersPresenceResponseV3 *v3; 
  bool Array; 
  unsigned int v5; 
  unsigned int m_count; 
  unsigned int m_size; 
  unsigned int v8; 
  bool Object; 
  bool v10; 
  __int64 v11; 
  __int64 v12; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  bool v16; 
  unsigned int v17; 
  unsigned int v18; 
  bdStructFixedSizeArray<bdUserPresenceV3,25> *p_m_usersPresence; 
  __int64 v22; 
  unsigned int i; 
  unsigned __int64 v26; 
  char *v27; 
  unsigned __int64 v28; 
  char *v32; 
  unsigned __int64 v33; 
  __int64 v35; 
  unsigned int titleID; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned __int64 userID; 
  bdJSONDeserializer v40; 
  bdSubscribeToUsersPresenceResponseV3 *v41; 
  bdJSONDeserializer v42; 
  bdJSONDeserializer v43; 
  bdJSONDeserializer v44; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  __int64 v47; 
  bdUserPresenceError v48; 
  bdUserDetails v49; 
  bdStructOptionalObject<bdLocalizationToken> v50; 
  char v51; 
  unsigned int v52; 
  char v53; 
  bdCrossPlatformUserMetadata v54; 
  char v55; 
  __int64 v56; 
  bdUserPresenceV3 v57; 
  bdUserPresenceInfoV3 ptr[3]; 
  char accountType[8]; 
  __int16 v60; 
  char context[8]; 
  __int64 v62; 

  v47 = -2i64;
  v3 = this;
  v41 = this;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(&deserializer, "errorUsers", &value);
  v5 = 0;
  if ( Array )
  {
    m_count = value.m_count;
    m_size = v3->m_userErrors.m_size;
    if ( m_size )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresenceresponsev3.cpp", "bdSubscribeToUsersPresenceResponseV3::handleReplySuccess", 0x63u, "SubscribeToUsersPresenceResponseV3 userErrors array still contains %u elements.", v3->m_userErrors.m_size);
      m_size = v3->m_userErrors.m_size;
    }
    if ( m_count + m_size > 0x19 )
    {
      Array = 0;
    }
    else
    {
      Array = 1;
      v8 = 0;
      do
      {
        if ( v8 >= m_count )
          break;
        bdUserPresenceError::bdUserPresenceError(&v48);
        bdJSONDeserializer::bdJSONDeserializer(&v40);
        Object = bdJSONDeserializer::getObject(&value, v8, &v40);
        v10 = Object && bdUserPresenceError::deserialize(&v48, &v40);
        Array = Object && v10;
        if ( v10 )
        {
          bdHandleAssert(v3->m_userErrors.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceError,25>::pushBack", 0x40u, "No more capacity for pushBack");
          v11 = v3->m_userErrors.m_size;
          if ( (unsigned int)v11 < 0x19 )
          {
            v12 = (__int64)&v3->m_userErrors.m_elements[v11];
            v3->m_userErrors.m_size = v11 + 1;
            bdUserAccountID::operator=((bdUserAccountID *)v12, &v48.m_user);
            *(_DWORD *)(v12 + 72) = v48.m_errorCode;
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v40);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v48.m_user.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v48.m_user.gap38);
        ++v8;
      }
      while ( Array );
    }
  }
  bdJSONDeserializer::bdJSONDeserializer(&v44);
  if ( !Array || !bdJSONDeserializer::getArray(&deserializer, "users", &v44) )
  {
    v13 = 0;
LABEL_70:
    v16 = !v13;
    goto LABEL_71;
  }
  v13 = 1;
  v14 = v44.m_count;
  v38 = v44.m_count;
  if ( v3->m_usersPresence.m_size )
  {
    LODWORD(v35) = v3->m_usersPresence.m_size;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresenceresponsev3.cpp", "bdSubscribeToUsersPresenceResponseV3::handleReplySuccess", 0x82u, "SubscribeToUsersPresenceResponseV3 usersPresence array still contains %u elements.", v35);
  }
  v15 = 0;
  v37 = 0;
  if ( !v14 )
    goto LABEL_70;
  while ( 1 )
  {
    v16 = !v13;
    if ( !v13 )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v42);
    userID = 0i64;
    *(_QWORD *)accountType = 0i64;
    v60 = 0;
    *(_QWORD *)context = 0i64;
    v62 = 0i64;
    v13 = bdJSONDeserializer::getObject(&v44, v15, &v42) && bdJSONDeserializer::getUInt64(&v42, "userID", &userID) && bdJSONDeserializer::getString(&v42, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&v42, "context", context, 0x10u);
    if ( v13 )
    {
      bdUserDetails::bdUserDetails((bdUserDetails *)&v48, &userID, accountType);
      bdUserPresenceV3::bdUserPresenceV3(&v57, (const bdUserDetails *)&v48, context);
      `eh vector constructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdJSONDeserializer::bdJSONDeserializer(&v40);
      v13 = bdJSONDeserializer::getArray(&v42, "titles", &v40);
      v17 = v40.m_count;
      v18 = 0;
      if ( v40.m_count )
      {
        _RBX = &ptr[0].m_titleID.m_value;
        do
        {
          if ( v18 >= 3 )
            break;
          if ( !v13 )
            goto LABEL_65;
          bdJSONDeserializer::bdJSONDeserializer(&v43);
          titleID = 0;
          bdUserPresenceInfoV3::bdUserPresenceInfoV3((bdUserPresenceInfoV3 *)(&v49.__vftable + 2));
          if ( bdJSONDeserializer::getObject(&v40, v18, &v43) && bdJSONDeserializer::getUInt32(&v43, "titleID", &titleID) && bdUserPresenceInfoV3::deserialize((bdUserPresenceInfoV3 *)(&v49.__vftable + 2), "presence", &v43) )
          {
            v13 = 1;
            bdUserPresenceInfoV3::setTitleID((bdUserPresenceInfoV3 *)(&v49.__vftable + 2), titleID);
            *((_BYTE *)_RBX - 620) = *((_BYTE *)&v49.__vftable + 16);
            if ( (char *)_RBX - 619 != (char *)&v49.__vftable + 17 )
            {
              *((_BYTE *)_RBX - 619) = *((_BYTE *)&v49.__vftable + 17);
              __asm
              {
                vmovups xmm0, xmmword ptr [rbp+1430h+var_1380.baseclass_0+12h]
                vmovups xmmword ptr [rbx-26Ah], xmm0
              }
              *((_BYTE *)_RBX - 602) = v49._bytes_20[2];
            }
            bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 149), (const bdStructOptionalObject<bdLocalizationToken> *)&v49._bytes_20[8]);
            bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(_RBX - 75), &v50);
            if ( _RBX - 1 != (unsigned int *)&v51 )
            {
              *((_BYTE *)_RBX - 4) = v51;
              *_RBX = v52;
            }
            if ( _RBX + 1 != (unsigned int *)&v53 )
            {
              *((_BYTE *)_RBX + 4) = v53;
              bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(_RBX + 3), &v54);
            }
            if ( _RBX + 9 != (unsigned int *)&v55 )
            {
              *((_BYTE *)_RBX + 36) = v55;
              *(_QWORD *)(_RBX + 11) = v56;
            }
          }
          else
          {
            v13 = 0;
          }
          bdUserPresenceInfoV3::~bdUserPresenceInfoV3((bdUserPresenceInfoV3 *)(&v49.__vftable + 2));
          bdJSONDeserializer::~bdJSONDeserializer(&v43);
          ++v18;
          _RBX += 168;
        }
        while ( v18 < v17 );
      }
      if ( v13 && v3->m_usersPresence.m_size < 0x19 )
      {
        bdUserPresenceV3::setPresences(&v57, ptr, v17);
        p_m_usersPresence = &v3->m_usersPresence;
        bdHandleAssert(v3->m_usersPresence.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceV3,25>::pushBack", 0x40u, "No more capacity for pushBack");
        v22 = v3->m_usersPresence.m_size;
        if ( (unsigned int)v22 < 0x19 )
        {
          _R13 = &p_m_usersPresence->m_elements[v22];
          p_m_usersPresence->m_size = v22 + 1;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+1430h+var_10D0.m_context.m_buffer]
            vmovups xmmword ptr [r13+0], xmm0
          }
          _R13->m_context.m_buffer[16] = v57.m_context.m_buffer[16];
          if ( &_R13->m_presences != &v57.m_presences )
          {
            _R13->m_presences.m_size = v57.m_presences.m_size;
            for ( i = 0; i < _R13->m_presences.m_size; ++i )
            {
              v26 = 672i64 * i;
              v27 = (char *)&v57.m_presences + v26;
              v28 = (unsigned __int64)&_R13->m_presences + v26;
              *(_BYTE *)v28 = v57.m_presences.m_elements[v26 / 0x2A0].m_online;
              _RCX = v27 + 1;
              _RDX = (_BYTE *)(v28 + 1);
              if ( (char *)(v28 + 1) != v27 + 1 )
              {
                *_RDX = *_RCX;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rcx+1]
                  vmovups xmmword ptr [rdx+1], xmm0
                }
                *(_BYTE *)(v28 + 18) = v27[18];
              }
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v28 + 24), (const bdStructOptionalObject<bdLocalizationToken> *)(v27 + 24));
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v28 + 320), (const bdStructOptionalObject<bdLocalizationToken> *)(v27 + 320));
              if ( (char *)(v28 + 616) != v27 + 616 )
              {
                *(_BYTE *)(v28 + 616) = v27[616];
                *(_DWORD *)(v28 + 620) = *((_DWORD *)v27 + 155);
              }
              if ( (char *)(v28 + 624) != v27 + 624 )
              {
                *(_BYTE *)(v28 + 624) = v27[624];
                bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(v28 + 632), (const bdCrossPlatformUserMetadata *)(v27 + 632));
              }
              v32 = v27 + 656;
              v33 = v28 + 656;
              if ( (char *)v33 != v32 )
              {
                *(_BYTE *)v33 = *v32;
                *(_QWORD *)(v33 + 8) = *((_QWORD *)v32 + 1);
              }
            }
          }
          bdUserDetails::operator=(&_R13->m_userDetails, &v57.m_userDetails);
          v15 = v37;
          v3 = v41;
        }
      }
      else
      {
LABEL_65:
        v13 = 0;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v40);
      `eh vector destructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdUserPresenceV3::~bdUserPresenceV3(&v57);
      bdUserDetails::~bdUserDetails(&v49);
      bdReferencable::~bdReferencable((bdReferencable *)&v49);
      v14 = v38;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v42);
    v37 = ++v15;
    if ( v15 >= v14 )
      goto LABEL_70;
  }
LABEL_71:
  LOBYTE(v5) = !v16;
  bdJSONDeserializer::~bdJSONDeserializer(&v44);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

/*
==============
bdSubscribeToUsersPresenceResponseV3::reset
==============
*/
void bdSubscribeToUsersPresenceResponseV3::reset(bdSubscribeToUsersPresenceResponseV3 *this)
{
  this->m_userErrors.m_size = 0;
  this->m_usersPresence.m_size = 0;
}

