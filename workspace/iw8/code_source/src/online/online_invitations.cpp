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

  _RDI = buffer;
  _RSI = this;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 102, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v5 = -1i64;
  while ( _RDI[++v5] != 0 )
    ;
  Core_strcpy(_RSI->m_inviterName, 0x24ui64, (const char *)_RDI);
  _RSI->m_timeSentUTC = *(_DWORD *)&_RDI[(unsigned int)(v5 + 1)];
  _RAX = (unsigned int)(v5 + 5);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+rdi]
    vmovsd  qword ptr [rsi+18h], xmm0
  }
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
  const char *m_inviterName; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v11; 

  v3 = sizeOfBuffer;
  _RDI = buffer;
  _RSI = this;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 80, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  m_inviterName = _RSI->m_inviterName;
  v7 = -1i64;
  do
    ++v7;
  while ( m_inviterName[v7] );
  Core_strcpy((char *)_RDI, v3, m_inviterName);
  v8 = (unsigned int)(v7 + 1);
  *(_DWORD *)&_RDI[v8] = _RSI->m_timeSentUTC;
  _RBX = (unsigned int)(v8 + 4);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+18h]
    vmovsd  qword ptr [rbx+rdi], xmm0
  }
  v11 = _RBX + 8;
  if ( v11 > (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 94, ASSERT_TYPE_ASSERT, "(writeSize <= sizeOfBuffer)", (const char *)&queryFormat, "writeSize <= sizeOfBuffer") )
    __debugbreak();
  return v11;
}

/*
==============
Online_Invitation::SetData
==============
*/
void Online_Invitation::SetData(Online_Invitation *this, InvitationType invitationType, XUID inviteeXUID, unsigned __int64 inviteePlatformId, XUID inviterXUID, unsigned __int64 inviterPlatformId, const void *payload)
{
  unsigned __int64 v7; 
  __int64 v10; 
  XUID xuid; 

  xuid.m_id = inviteeXUID.m_id;
  v7 = inviterPlatformId;
  _RSI = this;
  this->m_invitationType = invitationType;
  this->m_inviterPlatformId = v7;
  this->m_inviteePlatformId = inviteePlatformId;
  XUID::operator=(&this->m_inviterXUID, &inviterXUID);
  XUID::operator=(&_RSI->m_inviteeXUID, &xuid);
  _RDI = (const char *)payload;
  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitations.cpp", 102, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v10 = -1i64;
  while ( _RDI[++v10] != 0 )
    ;
  Core_strcpy(_RSI->m_inviterName, 0x24ui64, _RDI);
  _RSI->m_timeSentUTC = *(_DWORD *)&_RDI[(unsigned int)(v10 + 1)];
  _RAX = (unsigned int)(v10 + 5);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+rdi]
    vmovsd  qword ptr [rsi+18h], xmm0
  }
}

