/*
==============
bdGetUsersPresenceResponseV3::reset
==============
*/

void __fastcall bdGetUsersPresenceResponseV3::reset(bdGetUsersPresenceResponseV3 *this)
{
  ?reset@bdGetUsersPresenceResponseV3@@QEAAXXZ(this);
}

/*
==============
bdGetUsersPresenceResponseV3::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetUsersPresenceResponseV3::handleReplySuccess(bdGetUsersPresenceResponseV3 *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetUsersPresenceResponseV3@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3
==============
*/

void __fastcall bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3(bdGetUsersPresenceResponseV3 *this)
{
  ??0bdGetUsersPresenceResponseV3@@QEAA@XZ(this);
}

/*
==============
bdGetUsersPresenceResponseV3::getNumUsers
==============
*/

unsigned int __fastcall bdGetUsersPresenceResponseV3::getNumUsers(bdGetUsersPresenceResponseV3 *this)
{
  return ?getNumUsers@bdGetUsersPresenceResponseV3@@QEBAIXZ(this);
}

/*
==============
bdGetUsersPresenceResponseV3::getUserPresence
==============
*/

const bdUserPresenceV3 *__fastcall bdGetUsersPresenceResponseV3::getUserPresence(bdGetUsersPresenceResponseV3 *this, unsigned int index)
{
  return ?getUserPresence@bdGetUsersPresenceResponseV3@@QEBAAEBVbdUserPresenceV3@@I@Z(this, index);
}

/*
==============
bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3
==============
*/
void bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3(bdGetUsersPresenceResponseV3 *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdGetUsersPresenceResponseV3_vtbl *)&bdGetUsersPresenceResponseV3::`vftable';
  `eh vector constructor iterator'(&this->m_usersPresence, 0x890ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserPresenceV3::bdUserPresenceV3, (void (__fastcall *)(void *))bdUserPresenceV3::~bdUserPresenceV3);
  this->m_usersPresence.m_size = 0;
}

/*
==============
bdGetUsersPresenceResponseV3::getNumUsers
==============
*/
__int64 bdGetUsersPresenceResponseV3::getNumUsers(bdGetUsersPresenceResponseV3 *this)
{
  return this->m_usersPresence.m_size;
}

/*
==============
bdGetUsersPresenceResponseV3::getUserPresence
==============
*/
const bdUserPresenceV3 *bdGetUsersPresenceResponseV3::getUserPresence(bdGetUsersPresenceResponseV3 *this, unsigned int index)
{
  bdGetUsersPresenceResponseV3 *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < this->m_usersPresence.m_size, "index < m_usersPresence.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdgetuserspresenceresponsev3.cpp", "bdGetUsersPresenceResponseV3::getUserPresence", 0x18u, "bdGetUsersPresenceResponseV3::getUserPresence index out of range");
  v2 = (bdGetUsersPresenceResponseV3 *)((char *)v2 + 40);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_usersPresence.m_elements[24].m_userDetails.m_username[54], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceV3,25>::operator []", 0x54u, "i is out of range");
  return (const bdUserPresenceV3 *)((char *)v2 + 2192 * v3);
}

/*
==============
bdGetUsersPresenceResponseV3::handleReplySuccess
==============
*/
__int64 bdGetUsersPresenceResponseV3::handleReplySuccess(bdGetUsersPresenceResponseV3 *this, const bdRESTResponseMessage *reply)
{
  bdGetUsersPresenceResponseV3 *v3; 
  unsigned int v4; 
  bool String; 
  unsigned int m_count; 
  unsigned int v7; 
  bool v8; 
  unsigned int v9; 
  unsigned int i; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int j; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  char *v18; 
  unsigned __int64 v19; 
  unsigned int m_size; 
  unsigned int v22; 
  unsigned int titleID; 
  unsigned int v24; 
  unsigned __int64 userID; 
  bdJSONDeserializer v26; 
  bdGetUsersPresenceResponseV3 *v27; 
  bdJSONDeserializer v28; 
  bdJSONDeserializer v29; 
  bdJSONDeserializer value; 
  __int64 v31; 
  bdJSONDeserializer deserializer; 
  bdUserDetails userDetails; 
  bdUserPresenceInfoV3 __that; 
  bdUserPresenceV3 v35; 
  bdUserPresenceInfoV3 ptr[3]; 
  char accountType[8]; 
  __int16 v38; 
  char context[8]; 
  __int64 v40; 
  char usernameWithHash[112]; 

  v31 = -2i64;
  v3 = this;
  v27 = this;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v4 = 0;
  if ( !bdJSONDeserializer::getArray(&deserializer, "users", &value) )
  {
    String = 0;
LABEL_44:
    v8 = !String;
    goto LABEL_45;
  }
  String = 1;
  m_count = value.m_count;
  v24 = value.m_count;
  if ( v3->m_usersPresence.m_size )
  {
    m_size = v3->m_usersPresence.m_size;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdgetuserspresenceresponsev3.cpp", "bdGetUsersPresenceResponseV3::handleReplySuccess", 0x50u, "bdGetUsersPresenceResponseV3 usersPresence array still contains %u elements.", m_size);
  }
  v7 = 0;
  v22 = 0;
  if ( !m_count )
    goto LABEL_44;
  while ( 1 )
  {
    v8 = !String;
    if ( !String )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v26);
    userID = 0i64;
    *(_QWORD *)accountType = 0i64;
    v38 = 0;
    *(_QWORD *)context = 0i64;
    v40 = 0i64;
    memset_0(usernameWithHash, 0, 0x61ui64);
    if ( bdJSONDeserializer::getObject(&value, v7, &v26) && bdJSONDeserializer::getUInt64(&v26, "userID", &userID) && bdJSONDeserializer::getString(&v26, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&v26, "context", context, 0x10u) )
    {
      String = 1;
      if ( bdJSONDeserializer::hasKey(&v26, "username") )
        String = bdJSONDeserializer::getString(&v26, "username", usernameWithHash, 0x61u);
    }
    else
    {
      String = 0;
    }
    if ( String )
    {
      bdUserDetails::bdUserDetails(&userDetails, &userID, accountType);
      bdUserDetails::setUsernameWithHash(&userDetails, usernameWithHash);
      bdUserPresenceV3::bdUserPresenceV3(&v35, &userDetails, context);
      `eh vector constructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::bdUserPresenceInfoV3, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdJSONDeserializer::bdJSONDeserializer(&v29);
      String = bdJSONDeserializer::getArray(&v26, "titles", &v29);
      v9 = v29.m_count;
      for ( i = 0; i < v9; ++i )
      {
        if ( i >= 3 )
          break;
        if ( !String )
          goto LABEL_39;
        bdJSONDeserializer::bdJSONDeserializer(&v28);
        titleID = 0;
        bdUserPresenceInfoV3::bdUserPresenceInfoV3(&__that);
        if ( bdJSONDeserializer::getObject(&v29, i, &v28) && bdJSONDeserializer::getUInt32(&v28, "titleID", &titleID) && bdUserPresenceInfoV3::deserialize(&__that, "presence", &v28) )
        {
          String = 1;
          bdUserPresenceInfoV3::setTitleID(&__that, titleID);
          bdUserPresenceInfoV3::operator=(&ptr[i], &__that);
        }
        else
        {
          String = 0;
        }
        bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&__that);
        bdJSONDeserializer::~bdJSONDeserializer(&v28);
      }
      if ( String && v3->m_usersPresence.m_size < 0x19 )
      {
        bdUserPresenceV3::setPresences(&v35, ptr, v9);
        bdHandleAssert(v3->m_usersPresence.m_size < 0x19, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceV3,25>::pushBack", 0x40u, "No more capacity for pushBack");
        v11 = v3->m_usersPresence.m_size;
        if ( (unsigned int)v11 < 0x19 )
        {
          v12 = (__int64)&v3->m_usersPresence.m_elements[v11];
          v3->m_usersPresence.m_size = v11 + 1;
          *(_OWORD *)v12 = *(_OWORD *)v35.m_context.m_buffer;
          *(_BYTE *)(v12 + 16) = v35.m_context.m_buffer[16];
          v13 = v12 + 24;
          if ( (bdStructFixedSizeArray<bdUserPresenceInfoV3,3> *)(v12 + 24) != &v35.m_presences )
          {
            *(_DWORD *)(v12 + 2040) = v35.m_presences.m_size;
            for ( j = 0; j < *(_DWORD *)(v12 + 2040); ++j )
            {
              v15 = 672i64 * j;
              v16 = (char *)&v35.m_presences + v15;
              v17 = v15 + v13;
              *(_BYTE *)(v15 + v13) = v35.m_presences.m_elements[v15 / 0x2A0].m_online;
              if ( (bdStructOptionalObject<bdStructFixedSizeString<16> > *)(v15 + v13 + 1) != &v35.m_presences.m_elements[v15 / 0x2A0].m_platform )
              {
                *(_BYTE *)(v17 + 1) = v16[1];
                *(_OWORD *)(v17 + 2) = *(_OWORD *)(v16 + 2);
                *(_BYTE *)(v17 + 18) = v16[18];
              }
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v17 + 24), (const bdStructOptionalObject<bdLocalizationToken> *)(v16 + 24));
              bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v17 + 320), (const bdStructOptionalObject<bdLocalizationToken> *)(v16 + 320));
              if ( (char *)(v17 + 616) != v16 + 616 )
              {
                *(_BYTE *)(v17 + 616) = v16[616];
                *(_DWORD *)(v17 + 620) = *((_DWORD *)v16 + 155);
              }
              if ( (char *)(v17 + 624) != v16 + 624 )
              {
                *(_BYTE *)(v17 + 624) = v16[624];
                bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(v17 + 632), (const bdCrossPlatformUserMetadata *)(v16 + 632));
              }
              v18 = v16 + 656;
              v19 = v17 + 656;
              if ( (char *)v19 != v18 )
              {
                *(_BYTE *)v19 = *v18;
                *(_QWORD *)(v19 + 8) = *((_QWORD *)v18 + 1);
              }
            }
            v7 = v22;
          }
          bdUserDetails::operator=((bdUserDetails *)(v12 + 2048), &v35.m_userDetails);
          v3 = v27;
          m_count = v24;
        }
      }
      else
      {
LABEL_39:
        String = 0;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v29);
      `eh vector destructor iterator'(ptr, 0x2A0ui64, 3ui64, (void (__fastcall *)(void *))bdUserPresenceInfoV3::~bdUserPresenceInfoV3);
      bdUserPresenceV3::~bdUserPresenceV3(&v35);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v26);
    v22 = ++v7;
    if ( v7 >= m_count )
      goto LABEL_44;
  }
LABEL_45:
  LOBYTE(v4) = !v8;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

/*
==============
bdGetUsersPresenceResponseV3::reset
==============
*/
void bdGetUsersPresenceResponseV3::reset(bdGetUsersPresenceResponseV3 *this)
{
  this->m_usersPresence.m_size = 0;
}

