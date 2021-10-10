/*
==============
Online_Invitation::Deserialize
==============
*/

void __fastcall Online_Invitation::Deserialize(Online_Invitation *this, const unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  ?Deserialize@Online_Invitation@@QEAAXPEBEI@Z(this, buffer, sizeOfBuffer);
}

/*
==============
Online_Invitation::OnReceived
==============
*/

void __fastcall Online_Invitation::OnReceived(Online_Invitation *this)
{
  ?OnReceived@Online_Invitation@@QEAAXXZ(this);
}

/*
==============
Online_Invitation::OnAccept
==============
*/

bool __fastcall Online_Invitation::OnAccept(Online_Invitation *this)
{
  return ?OnAccept@Online_Invitation@@QEAA_NXZ(this);
}

/*
==============
Online_Invitation::SetData
==============
*/

void __fastcall Online_Invitation::SetData(Online_Invitation *this, InvitationType invitationType, XUID inviteeXUID, unsigned __int64 inviteePlatformId, XUID inviterXUID, unsigned __int64 inviterPlatformId, const void *payload, const int payloadSize)
{
  ?SetData@Online_Invitation@@QEAAXW4InvitationType@@UXUID@@_K12PEBXH@Z(this, invitationType, inviteeXUID, inviteePlatformId, inviterXUID, inviterPlatformId, payload, payloadSize);
}

/*
==============
Online_Invitation::Reset
==============
*/

void __fastcall Online_Invitation::Reset(Online_Invitation *this)
{
  ?Reset@Online_Invitation@@QEAAXXZ(this);
}

/*
==============
Online_Invitation::Serialize
==============
*/

unsigned int __fastcall Online_Invitation::Serialize(Online_Invitation *this, unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  return ?Serialize@Online_Invitation@@QEBAIPEAEI@Z(this, buffer, sizeOfBuffer);
}

/*
==============
Online_Invitation::Online_Invitation
==============
*/

void __fastcall Online_Invitation::Online_Invitation(Online_Invitation *this)
{
  ??0Online_Invitation@@QEAA@XZ(this);
}

/*
==============
Online_Invitation::Online_Invitation
==============
*/
void Online_Invitation::Online_Invitation(Online_Invitation *this)
{
  XUID::XUID(&this->m_inviteeXUID);
  XUID::XUID(&this->m_inviterXUID);
}

/*
==============
Online_Invitation::Deserialize
==============
*/
void Online_Invitation::Deserialize(Online_Invitation *this, const unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  __int64 v5; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 102, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v5 = -1i64;
  while ( buffer[++v5] != 0 )
    ;
  Core_strcpy(this->m_inviterName, 0x24ui64, (const char *)buffer);
  this->m_timeSentUTC = *(_DWORD *)&buffer[(unsigned int)(v5 + 1)];
  this->m_inviterXUID.m_id = *(unsigned __int64 *)&buffer[(unsigned int)(v5 + 5)];
}

/*
==============
Online_Invitation::OnAccept
==============
*/
bool Online_Invitation::OnAccept(Online_Invitation *this)
{
  int ControllerIndexFromXuid; 

  ControllerIndexFromXuid = Live_GetControllerIndexFromXuid(this->m_inviteeXUID);
  if ( ControllerIndexFromXuid != -1 )
    return InviteJoinHSM_xb3::JoinFromOnlineInvitation(&g_invitationHSM, ControllerIndexFromXuid, this);
  Com_PrintWarning(25, "Online_Invitation::OnAccept, the invitee does not have a valid controller index\n");
  return 0;
}

/*
==============
Online_Invitation::OnReceived
==============
*/
void Online_Invitation::OnReceived(Online_Invitation *this)
{
  ;
}

/*
==============
Online_Invitation::Reset
==============
*/
void Online_Invitation::Reset(Online_Invitation *this)
{
  const XUID *v2; 
  const XUID *v3; 
  XUID result; 

  this->m_inviterPlatformId = 0i64;
  this->m_inviteePlatformId = 0i64;
  v2 = XUID::NullXUID(&result);
  XUID::operator=(&this->m_inviteeXUID, v2);
  v3 = XUID::NullXUID(&result);
  XUID::operator=(&this->m_inviterXUID, v3);
  *(_QWORD *)this->m_inviterName = 0i64;
  *(_QWORD *)&this->m_inviterName[8] = 0i64;
  *(_QWORD *)&this->m_inviterName[16] = 0i64;
  *(_QWORD *)&this->m_inviterName[24] = 0i64;
  *(_QWORD *)&this->m_inviterName[32] = 0i64;
  *(_QWORD *)&this->m_invitationType = 0i64;
}

/*
==============
Online_Invitation::Serialize
==============
*/
__int64 Online_Invitation::Serialize(Online_Invitation *this, unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  unsigned __int64 v3; 
  char *m_inviterName; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 

  v3 = sizeOfBuffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 80, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  m_inviterName = this->m_inviterName;
  v7 = -1i64;
  do
    ++v7;
  while ( m_inviterName[v7] );
  Core_strcpy((char *)buffer, v3, m_inviterName);
  v8 = (unsigned int)(v7 + 1);
  *(_DWORD *)&buffer[v8] = this->m_timeSentUTC;
  v9 = (unsigned int)(v8 + 4);
  *(double *)&buffer[v9] = *(double *)&this->m_inviterXUID.m_id;
  v10 = v9 + 8;
  if ( v10 > (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 94, ASSERT_TYPE_ASSERT, "(writeSize <= sizeOfBuffer)", (const char *)&queryFormat, "writeSize <= sizeOfBuffer") )
    __debugbreak();
  return v10;
}

/*
==============
Online_Invitation::SetData
==============
*/
void Online_Invitation::SetData(Online_Invitation *this, InvitationType invitationType, XUID inviteeXUID, unsigned __int64 inviteePlatformId, XUID inviterXUID, unsigned __int64 inviterPlatformId, const void *payload)
{
  unsigned __int64 v7; 
  const char *v9; 
  __int64 v10; 
  XUID xuid; 

  xuid.m_id = inviteeXUID.m_id;
  v7 = inviterPlatformId;
  this->m_invitationType = invitationType;
  this->m_inviterPlatformId = v7;
  this->m_inviteePlatformId = inviteePlatformId;
  XUID::operator=(&this->m_inviterXUID, &inviterXUID);
  XUID::operator=(&this->m_inviteeXUID, &xuid);
  v9 = (const char *)payload;
  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 102, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v10 = -1i64;
  while ( v9[++v10] != 0 )
    ;
  Core_strcpy(this->m_inviterName, 0x24ui64, v9);
  this->m_timeSentUTC = *(_DWORD *)&v9[(unsigned int)(v10 + 1)];
  this->m_inviterXUID.m_id = *(unsigned __int64 *)&v9[(unsigned int)(v10 + 5)];
}

