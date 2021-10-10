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
  unsigned int *p_m_value; 
  bdStructFixedSizeArray<bdUserPresenceV3,25> *p_m_usersPresence; 
  __int64 v21; 
  bdUserPresenceV3 *v22; 
  char *p_m_presences; 
  unsigned int i; 
  unsigned __int64 v25; 
  char *v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  __int64 v31; 
  unsigned int titleID; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned __int64 userID; 
  bdJSONDeserializer v36; 
  bdSubscribeToUsersPresenceResponseV3 *v37; 
  bdJSONDeserializer v38; 
  bdJSONDeserializer v39; 
  bdJSONDeserializer v40; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  __int64 v43; 
  bdUserPresenceError v44; 
  bdUserDetails v45; 
  bdStructOptionalObject<bdLocalizationToken> v46; 
  char v47; 
  unsigned int v48; 
  char v49; 
  bdCrossPlatformUserMetadata v50; 
  char v51; 
  __int64 v52; 
  bdUserPresenceV3 v53; 
  bdUserPresenceInfoV3 ptr[3]; 
  char accountType[8]; 
  __int16 v56; 
  char context[8]; 
  __int64 v58; 

  v43 = -2i64;
  v3 = this;
  v37 = this;
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
        bdUserPresenceError::bdUserPresenceError(&v44);
        bdJSONDeserializer::bdJSONDeserializer(&v36);
        Object = bdJSONDeserializer::getObject(&value, v8, &v36);
        v10 = Object && bdUserPresenceError::deserialize(&v44, &v36);
        Array = Object && v10;
        if ( v10 )
        {
          bdHandleAssert(v3->m_userErrors.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceError,25>::pushBack", 0x40u, "No more capacity for pushBack");
          v11 = v3->m_userErrors.m_size;
          if ( (unsigned int)v11 < 0x19 )
          {
            v12 = (__int64)&v3->m_userErrors.m_elements[v11];
            v3->m_userErrors.m_size = v11 + 1;
            bdUserAccountID::operator=((bdUserAccountID *)v12, &v44.m_user);
            *(_DWORD *)(v12 + 72) = v44.m_errorCode;
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v36);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v44.m_user.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v44.m_user.gap38);
        ++v8;
      }
      while ( Array );
    }
  }
  bdJSONDeserializer::bdJSONDeserializer(&v40);
  if ( !Array || !bdJSONDeserializer::getArray(&deserializer, "users", &v40) )
  {
    v13 = 0;
LABEL_70:
    v16 = !v13;
    goto LABEL_71;
  }
  v13 = 1;
  v14 = v40.m_count;
  v34 = v40.m_count;
  if ( v3->m_usersPresence.m_size )
  {
    LODWORD(v31) = v3->m_usersPresence.m_size;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdsubscribetouserspresenceresponsev3.cpp", "bdSubscribeToUsersPresenceResponseV3::handleReplySuccess", 0x82u, "SubscribeToUsersPresenceResponseV3 usersPresence array still contains %u elements.", v31);
  }
  v15 = 0;
  v33 = 0;
  if ( !v14 )
    goto LABEL_70;
  while ( 1 )
  {
    v16 = !v13;
    if ( !v13 )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v38);
    userID = 0i64;
    *(_QWORD *)accountType = 0i64;
    v56 = 0;
    *(_QWORD *)context = 0i64;
    v58 = 0i64;
    v13 = bdJSONDeserializer::getObject(&v40, v15, &v38) && bdJSONDeserializer::getUInt64(&v38, "userID", &userID) && bdJSONDeserializer::getString(&v38, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&v38, "context", context, 0x10u);
    if ( v13 )
    {
      bdUserDetails::bdUserDetails((bdUserDetails *)&v44, &userID, accountType);
      bdUserPresenceV3::bdUserPresenceV3(&v53, (const bdUserDetails *)&v44, context);
      `eh vector constructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdJSONDeserializer::bdJSONDeserializer(&v36);
      v13 = bdJSONDeserializer::getArray(&v38, "titles", &v36);
      v17 = v36.m_count;
      v18 = 0;
      if ( v36.m_count )
      {
        p_m_value = &ptr[0].m_titleID.m_value;
        do
        {
          if ( v18 >= 3 )
            break;
          if ( !v13 )
            goto LABEL_65;
          bdJSONDeserializer::bdJSONDeserializer(&v39);
          titleID = 0;
          bdUserPresenceInfoV3::bdUserPresenceInfoV3((bdUserPresenceInfoV3 *)(&v45.__vftable + 2));
          if ( bdJSONDeserializer::getObject(&v36, v18, &v39) && bdJSONDeserializer::getUInt32(&v39, "titleID", &titleID) && bdUserPresenceInfoV3::deserialize((bdUserPresenceInfoV3 *)(&v45.__vftable + 2), "presence", &v39) )
          {
            v13 = 1;
            bdUserPresenceInfoV3::setTitleID((bdUserPresenceInfoV3 *)(&v45.__vftable + 2), titleID);
            *((_BYTE *)p_m_value - 620) = *((_BYTE *)&v45.__vftable + 16);
            if ( (char *)p_m_value - 619 != (char *)&v45.__vftable + 17 )
            {
              *((_BYTE *)p_m_value - 619) = *((_BYTE *)&v45.__vftable + 17);
              *(_OWORD *)((char *)p_m_value - 618) = *(_OWORD *)((char *)&v45.__vftable + 18);
              *((_BYTE *)p_m_value - 602) = v45._bytes_20[2];
            }
            bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(p_m_value - 149), (const bdStructOptionalObject<bdLocalizationToken> *)&v45._bytes_20[8]);
            bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(p_m_value - 75), &v46);
            if ( p_m_value - 1 != (unsigned int *)&v47 )
            {
              *((_BYTE *)p_m_value - 4) = v47;
              *p_m_value = v48;
            }
            if ( p_m_value + 1 != (unsigned int *)&v49 )
            {
              *((_BYTE *)p_m_value + 4) = v49;
              bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(p_m_value + 3), &v50);
            }
            if ( p_m_value + 9 != (unsigned int *)&v51 )
            {
              *((_BYTE *)p_m_value + 36) = v51;
              *(_QWORD *)(p_m_value + 11) = v52;
            }
          }
          else
          {
            v13 = 0;
          }
          bdUserPresenceInfoV3::~bdUserPresenceInfoV3((bdUserPresenceInfoV3 *)(&v45.__vftable + 2));
          bdJSONDeserializer::~bdJSONDeserializer(&v39);
          ++v18;
          p_m_value += 168;
        }
        while ( v18 < v17 );
      }
      if ( v13 && v3->m_usersPresence.m_size < 0x19 )
      {
        bdUserPresenceV3::setPresences(&v53, ptr, v17);
        p_m_usersPresence = &v3->m_usersPresence;
        bdHandleAssert(v3->m_usersPresence.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceV3,25>::pushBack", 0x40u, "No more capacity for pushBack");
        v21 = v3->m_usersPresence.m_size;
        if ( (unsigned int)v21 < 0x19 )
        {
          v22 = &p_m_usersPresence->m_elements[v21];
          p_m_usersPresence->m_size = v21 + 1;
          *(_OWORD *)v22->m_context.m_buffer = *(_OWORD *)v53.m_context.m_buffer;
          v22->m_context.m_buffer[16] = v53.m_context.m_buffer[16];
          p_m_presences = (char *)&v22->m_presences;
          if ( &v22->m_presences != &v53.m_presences )
          {
            v22->m_presences.m_size = v53.m_presences.m_size;
            for ( i = 0; i < v22->m_presences.m_size; ++i )
            {
              v25 = 672i64 * i;
              v26 = (char *)&v53.m_presences + v25;
              v27 = &p_m_presences[v25];
              p_m_presences[v25] = v53.m_presences.m_elements[v25 / 0x2A0].m_online;
              if ( &p_m_presences[v25 + 1] != (char *)&v53.m_presences.m_elements[v25 / 0x2A0].m_platform )
              {
                v27[1] = v26[1];
                *(_OWORD *)(v27 + 2) = *(_OWORD *)(v26 + 2);
                v27[18] = v26[18];
              }
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v27 + 24), (const bdStructOptionalObject<bdLocalizationToken> *)(v26 + 24));
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v27 + 320), (const bdStructOptionalObject<bdLocalizationToken> *)(v26 + 320));
              if ( v27 + 616 != v26 + 616 )
              {
                v27[616] = v26[616];
                *((_DWORD *)v27 + 155) = *((_DWORD *)v26 + 155);
              }
              if ( v27 + 624 != v26 + 624 )
              {
                v27[624] = v26[624];
                bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(v27 + 632), (const bdCrossPlatformUserMetadata *)(v26 + 632));
              }
              v28 = v26 + 656;
              v29 = v27 + 656;
              if ( v29 != v28 )
              {
                *v29 = *v28;
                *((_QWORD *)v29 + 1) = *((_QWORD *)v28 + 1);
              }
            }
          }
          bdUserDetails::operator=(&v22->m_userDetails, &v53.m_userDetails);
          v15 = v33;
          v3 = v37;
        }
      }
      else
      {
LABEL_65:
        v13 = 0;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v36);
      `eh vector destructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdUserPresenceV3::~bdUserPresenceV3(&v53);
      bdUserDetails::~bdUserDetails(&v45);
      bdReferencable::~bdReferencable((bdReferencable *)&v45);
      v14 = v34;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v38);
    v33 = ++v15;
    if ( v15 >= v14 )
      goto LABEL_70;
  }
LABEL_71:
  LOBYTE(v5) = !v16;
  bdJSONDeserializer::~bdJSONDeserializer(&v40);
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

