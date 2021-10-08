/*
==============
bdCrossPlatformIdentityPushMessageHandler::handlePushMessage
==============
*/

void __fastcall bdCrossPlatformIdentityPushMessageHandler::handlePushMessage(bdCrossPlatformIdentityPushMessageHandler *this, bdDemonataPushMessage *message)
{
  ?handlePushMessage@bdCrossPlatformIdentityPushMessageHandler@@MEAAXAEAVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformIdentityPushMessageHandler::handlePushMessage
==============
*/
void bdCrossPlatformIdentityPushMessageHandler::handlePushMessage(bdCrossPlatformIdentityPushMessageHandler *this, bdDemonataPushMessage *message)
{
  __int64 v4; 
  const char *Schema; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  char *Platform; 
  char v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  bdCrossPlatformIdentityAccountBannedPushMessage v14; 
  bdCrossPlatformIdentityUsernameChangedPushMessage v15; 

  v4 = 0i64;
  Schema = bdDemonataPushMessage::getSchema(message);
  if ( strstr_0(Schema, "CrossPlatformIdentityUsernameChangedPushMessage") )
  {
    bdCrossPlatformIdentityUsernameChangedPushMessage::bdCrossPlatformIdentityUsernameChangedPushMessage(&v15);
    if ( bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage(&v15, message) )
    {
      this->crossPlatformIdentityUsernameChanged(this, &v15);
    }
    else
    {
      v6 = bdDemonataPushMessage::getSchema(message);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformIdentityPushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessagehandler.cpp", "bdCrossPlatformIdentityPushMessageHandler::handlePushMessage", 0x1Eu, "Unable to parse push message with schema [%s].", v6);
    }
    bdUserDetails::~bdUserDetails((bdUserDetails *)&v15.m_newUserDetails.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&v15.m_newUserDetails.gap79[7]);
  }
  else
  {
    v7 = bdDemonataPushMessage::getSchema(message);
    if ( strstr_0(v7, "CrossPlatformIdentityIDChangedPushMessage") )
    {
      this->crossPlatformIdentityIDChanged(this);
    }
    else
    {
      v8 = bdDemonataPushMessage::getSchema(message);
      if ( strstr_0(v8, "CrossPlatformIdentityAccountBannedPushMessage") )
      {
        bdCrossPlatformIdentityAccountBannedPushMessage::bdCrossPlatformIdentityAccountBannedPushMessage(&v14);
        if ( bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage(&v14, message) )
        {
          Platform = bdCrossPlatformIdentityAccountBannedPushMessage::getPlatform(&v14);
          while ( 1 )
          {
            v10 = Platform[v4++];
            if ( v10 != aXb1_0[v4 - 1] )
              break;
            if ( v4 == 4 )
              goto LABEL_13;
          }
          if ( *Platform == asc_143D6868C[0] && Platform[1] == asc_143D6868C[1] )
LABEL_13:
            this->crossPlatformIdentityAccountBanned(this);
        }
      }
      else
      {
        v11 = bdDemonataPushMessage::getSchema(message);
        if ( strstr_0(v11, "CrossPlatformIdentityAccountUnlinkedPushMessage") )
        {
          *(_QWORD *)v14.m_platform = &v15;
          *((_QWORD *)&v15.m_newUserDetails.__vftable + 1) = &bdCrossPlatformIdentityMappedUser::`vbtable'{for `bdTaskResult'};
          *((_QWORD *)&v15.m_newUserDetails.__vftable + 3) = &bdCrossPlatformIdentityMappedUser::`vbtable'{for `bdSerializable'};
          *(_QWORD *)&v15.m_newUserDetails.m_username[14] = &bdCrossPlatformIdentityMappedUser::`vbtable';
          *(_QWORD *)&v15.m_newUserDetails.m_username[22] = &bdReferencable::`vftable';
          *(_DWORD *)&v15.m_newUserDetails.m_username[30] = 0;
          bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&v15);
          v15.m_newUserDetails.__vftable = (bdUserDetails_vtbl *)&bdCrossPlatformIdentityMappedUser::`vftable'{for `bdTaskResult'};
          *((_QWORD *)&v15.m_newUserDetails.__vftable + 2) = &bdCrossPlatformIdentityMappedUser::`vftable'{for `bdSerializable'};
          *(_QWORD *)&v15.m_newUserDetails.m_username[6] = &bdCrossPlatformIdentityMappedUser::`vftable'{for `bdStructBufferSerializable'};
          *(bdUserDetails_vtbl **)((char *)&v15.m_newUserDetails.__vftable + *(int *)(*((_QWORD *)&v15.m_newUserDetails.__vftable + 1) + 4i64) + 8) = (bdUserDetails_vtbl *)&bdCrossPlatformIdentityMappedUser::`vftable'{for `bdReferencable'};
          if ( bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage((bdCrossPlatformIdentityAccountUnlinkedPushMessage *)&v15, message) )
          {
            this->crossPlatformIdentityAccountUnlinked(this, (bdCrossPlatformIdentityAccountUnlinkedPushMessage *)&v15);
          }
          else
          {
            v12 = bdDemonataPushMessage::getSchema(message);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformIdentityPushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessagehandler.cpp", "bdCrossPlatformIdentityPushMessageHandler::handlePushMessage", 0x5Du, "Unable to parse push message with schema [%s].", v12);
          }
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v15.m_newUserDetails.m_username[22]);
          bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v15.m_newUserDetails.m_username[6]);
          bdReferencable::~bdReferencable((bdReferencable *)&v15.m_newUserDetails.m_username[22]);
        }
        else
        {
          v13 = bdDemonataPushMessage::getSchema(message);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformIdentityPushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessagehandler.cpp", "bdCrossPlatformIdentityPushMessageHandler::handlePushMessage", 0x64u, "Received push message with unknown schema [%s].", v13);
        }
      }
    }
  }
}

