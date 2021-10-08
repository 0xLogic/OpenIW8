/*
==============
MsgPack::GetKey<128>
==============
*/

bool __fastcall MsgPack::GetKey<128>(MsgPack *this, char (*value)[128])
{
  return ??$GetKey@$0IA@@MsgPack@@QEBA_NAEAY0IA@D@Z(this, value);
}

/*
==============
MsgPack::GetKey<128>
==============
*/
bool MsgPack::GetKey<128>(MsgPack *this, char (*value)[128])
{
  return MsgPack_DecodeString(this->m_key, (char *)value, 0x80ui64);
}

