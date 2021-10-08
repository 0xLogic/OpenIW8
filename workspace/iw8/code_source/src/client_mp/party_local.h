/*
==============
Party_PacketIsFromHost
==============
*/

int __fastcall Party_PacketIsFromHost(PartyData *party, const LocalClientNum_t localClientNum, const netadr_t *from)
{
  return ?Party_PacketIsFromHost@@YAHPEAUPartyData@@W4LocalClientNum_t@@AEBUnetadr_t@@@Z(party, localClientNum, from);
}

/*
==============
Party_PacketIsFromHost
==============
*/
_BOOL8 Party_PacketIsFromHost(PartyData *party, const LocalClientNum_t localClientNum, const netadr_t *from)
{
  return party->inParty && NetConnection::operator==(&party->currentHost.connections[localClientNum], from);
}

