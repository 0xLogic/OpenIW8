/*
==============
Online_InvitationManager::OnDisconnect
==============
*/

void __fastcall Online_InvitationManager::OnDisconnect(Online_InvitationManager *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_InvitationManager@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_InvitationManager::Uninit
==============
*/

void __fastcall Online_InvitationManager::Uninit(Online_InvitationManager *this)
{
  ?Uninit@Online_InvitationManager@@UEAAXXZ(this);
}

/*
==============
JoinerData::Reset
==============
*/

void __fastcall JoinerData::Reset(JoinerData *this)
{
  ?Reset@JoinerData@@QEAAXXZ(this);
}

/*
==============
Online_InvitationManager::Uninit
==============
*/
void Online_InvitationManager::Uninit(Online_InvitationManager *this)
{
  ;
}

/*
==============
Online_InvitationManager::OnDisconnect
==============
*/
void Online_InvitationManager::OnDisconnect(Online_InvitationManager *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
JoinerData::Reset
==============
*/
void JoinerData::Reset(JoinerData *this)
{
  const XUID *v2; 
  const XUID *v3; 
  XUID result; 

  v2 = XUID::NullXUID(&result);
  XUID::operator=(&this->xuid, v2);
  v3 = XUID::NullXUID(&result);
  XUID::operator=(&this->xuidOfUserBeingJoinedOn, v3);
  *(_QWORD *)&this->cancelRequestTime = 0i64;
}

