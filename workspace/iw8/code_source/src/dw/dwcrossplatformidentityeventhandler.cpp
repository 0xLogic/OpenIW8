/*
==============
DWCrossPlatformIdentityEventHandler::GetControllerIndex
==============
*/

int __fastcall DWCrossPlatformIdentityEventHandler::GetControllerIndex(DWCrossPlatformIdentityEventHandler *this)
{
  return ?GetControllerIndex@DWCrossPlatformIdentityEventHandler@@QEBAHXZ(this);
}

/*
==============
DWCrossPlatformIdentityEventHandler::GetInstance
==============
*/

DWCrossPlatformIdentityEventHandler *__fastcall DWCrossPlatformIdentityEventHandler::GetInstance(const int controllerIndex)
{
  return ?GetInstance@DWCrossPlatformIdentityEventHandler@@SAAEAV1@H@Z(controllerIndex);
}

/*
==============
DWCrossPlatformIdentityEventHandler::DWCrossPlatformIdentityEventHandler
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::DWCrossPlatformIdentityEventHandler(DWCrossPlatformIdentityEventHandler *this)
{
  ??0DWCrossPlatformIdentityEventHandler@@AEAA@XZ(this);
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityIDChanged
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityIDChanged(DWCrossPlatformIdentityEventHandler *this)
{
  ?crossPlatformIdentityIDChanged@DWCrossPlatformIdentityEventHandler@@MEAAXXZ(this);
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountBanned
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountBanned(DWCrossPlatformIdentityEventHandler *this)
{
  ?crossPlatformIdentityAccountBanned@DWCrossPlatformIdentityEventHandler@@MEAAXXZ(this);
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityUsernameChanged
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityUsernameChanged(DWCrossPlatformIdentityEventHandler *this, bdCrossPlatformIdentityUsernameChangedPushMessage *message)
{
  ?crossPlatformIdentityUsernameChanged@DWCrossPlatformIdentityEventHandler@@MEAAXAEAVbdCrossPlatformIdentityUsernameChangedPushMessage@@@Z(this, message);
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountUnlinked
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountUnlinked(DWCrossPlatformIdentityEventHandler *this, bdCrossPlatformIdentityAccountUnlinkedPushMessage *message)
{
  ?crossPlatformIdentityAccountUnlinked@DWCrossPlatformIdentityEventHandler@@MEAAXAEAVbdCrossPlatformIdentityAccountUnlinkedPushMessage@@@Z(this, message);
}

/*
==============
DWCrossPlatformIdentityEventHandler::DWCrossPlatformIdentityEventHandler
==============
*/
void DWCrossPlatformIdentityEventHandler::DWCrossPlatformIdentityEventHandler(DWCrossPlatformIdentityEventHandler *this)
{
  this->__vftable = (DWCrossPlatformIdentityEventHandler_vtbl *)&DWCrossPlatformIdentityEventHandler::`vftable';
}

/*
==============
DWCrossPlatformIdentityEventHandler::GetControllerIndex
==============
*/
__int64 DWCrossPlatformIdentityEventHandler::GetControllerIndex(DWCrossPlatformIdentityEventHandler *this)
{
  __int64 result; 

  result = 0i64;
  while ( &DWCrossPlatformIdentityEventHandler::s_instance[(int)result] != this )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 8 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
DWCrossPlatformIdentityEventHandler::GetInstance
==============
*/
DWCrossPlatformIdentityEventHandler *DWCrossPlatformIdentityEventHandler::GetInstance(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcrossplatformidentityeventhandler.cpp", 23, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return &DWCrossPlatformIdentityEventHandler::s_instance[v1];
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountBanned
==============
*/
void DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountBanned(DWCrossPlatformIdentityEventHandler *this)
{
  int v2; 

  v2 = 0;
  while ( &DWCrossPlatformIdentityEventHandler::s_instance[v2] != this )
  {
    if ( (unsigned int)++v2 >= 8 )
    {
      v2 = -1;
      break;
    }
  }
  LiveAntiCheat_CoDAccountBan(v2);
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountUnlinked
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityAccountUnlinked(DWCrossPlatformIdentityEventHandler *this, bdCrossPlatformIdentityAccountUnlinkedPushMessage *message)
{
  dwDisconnectFromCrossplatformUnlinkEvent();
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityIDChanged
==============
*/

void __fastcall DWCrossPlatformIdentityEventHandler::crossPlatformIdentityIDChanged(DWCrossPlatformIdentityEventHandler *this)
{
  dwDisconnectFromCrossPlatformAccountEvent();
}

/*
==============
DWCrossPlatformIdentityEventHandler::crossPlatformIdentityUsernameChanged
==============
*/
void DWCrossPlatformIdentityEventHandler::crossPlatformIdentityUsernameChanged(DWCrossPlatformIdentityEventHandler *this, bdCrossPlatformIdentityUsernameChangedPushMessage *message)
{
  bdUserDetails *NewUserDetails; 
  char usernameWithHash[112]; 

  NewUserDetails = bdCrossPlatformIdentityUsernameChangedPushMessage::getNewUserDetails(message);
  bdUserDetails::getUsernameWithHash(NewUserDetails, usernameWithHash);
  dwDisconnectFromCrossPlatformRenameEvent(usernameWithHash);
}

