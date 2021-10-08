/*
==============
OnlineChat::OnlineChat
==============
*/

void __fastcall OnlineChat::OnlineChat(OnlineChat *this)
{
  ??0OnlineChat@@QEAA@XZ(this);
}

/*
==============
OnlineChatMessage::OnlineChatMessage
==============
*/

void __fastcall OnlineChatMessage::OnlineChatMessage(OnlineChatMessage *this)
{
  ??0OnlineChatMessage@@QEAA@XZ(this);
}

/*
==============
OnlineChat::OnlineChat
==============
*/
void OnlineChat::OnlineChat(OnlineChat *this)
{
  *(_QWORD *)&this->m_chatType = 3i64;
  *(_QWORD *)&this->m_nextMessageIndex = 0i64;
  *(_QWORD *)&this->m_memberCount = 0i64;
  this->m_chatId.m_id = 0i64;
  this->m_controllerIndex = 0;
}

/*
==============
OnlineChatMessage::OnlineChatMessage
==============
*/
void OnlineChatMessage::OnlineChatMessage(OnlineChatMessage *this)
{
  this->m_fromId = 0i64;
  this->m_toId = 0i64;
  *(_QWORD *)&this->m_receivedTime = 0i64;
  this->m_chat = NULL;
  this->m_profanityFilterState = NOT_FILTERED;
}

