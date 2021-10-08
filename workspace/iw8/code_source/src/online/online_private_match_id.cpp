/*
==============
PrivateMatchId::SerializeToMsg
==============
*/

void __fastcall PrivateMatchId::SerializeToMsg(PrivateMatchId *this, msg_t *msg)
{
  ?SerializeToMsg@PrivateMatchId@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
PrivateMatchId::DeserializeFromMsg
==============
*/

void __fastcall PrivateMatchId::DeserializeFromMsg(PrivateMatchId *this, msg_t *msg)
{
  ?DeserializeFromMsg@PrivateMatchId@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
PrivateMatchId::DeserializeFromMsg
==============
*/
void PrivateMatchId::DeserializeFromMsg(PrivateMatchId *this, msg_t *msg)
{
  this->m_id = MSG_ReadInt64(msg);
}

/*
==============
PrivateMatchId::SerializeToMsg
==============
*/
void PrivateMatchId::SerializeToMsg(PrivateMatchId *this, msg_t *msg)
{
  MSG_WriteInt64(msg, this->m_id);
}

