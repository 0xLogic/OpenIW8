/*
==============
BG_SynchronizedPlayerInfo::DeserializeFromMemfile
==============
*/

void __fastcall BG_SynchronizedPlayerInfo::DeserializeFromMemfile(BG_SynchronizedPlayerInfo *this, MemoryFile *memFile)
{
  ?DeserializeFromMemfile@BG_SynchronizedPlayerInfo@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
BG_SynchronizedPlayerInfo_Reset
==============
*/

void __fastcall BG_SynchronizedPlayerInfo_Reset(BG_SynchronizedPlayerInfo *playerInfo)
{
  ?BG_SynchronizedPlayerInfo_Reset@@YAXPEAUBG_SynchronizedPlayerInfo@@@Z(playerInfo);
}

/*
==============
BG_SynchronizedPlayerInfo::Serialize
==============
*/

void __fastcall BG_SynchronizedPlayerInfo::Serialize(BG_SynchronizedPlayerInfo *this, msg_t *msg)
{
  ?Serialize@BG_SynchronizedPlayerInfo@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
BG_SynchronizedPlayerInfo_Print
==============
*/

void __fastcall BG_SynchronizedPlayerInfo_Print(const int channel, const BG_SynchronizedPlayerInfo *playerInfo)
{
  ?BG_SynchronizedPlayerInfo_Print@@YAXHAEBUBG_SynchronizedPlayerInfo@@@Z(channel, playerInfo);
}

/*
==============
BG_SynchronizedPlayerInfo::SerializeToMemfile
==============
*/

void __fastcall BG_SynchronizedPlayerInfo::SerializeToMemfile(BG_SynchronizedPlayerInfo *this, MemoryFile *memFile)
{
  ?SerializeToMemfile@BG_SynchronizedPlayerInfo@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
BG_SynchronizedPlayerInfo::Equals
==============
*/

bool __fastcall BG_SynchronizedPlayerInfo::Equals(BG_SynchronizedPlayerInfo *this, const BG_SynchronizedPlayerInfo *rhs)
{
  return ?Equals@BG_SynchronizedPlayerInfo@@QEAA_NAEBU1@@Z(this, rhs);
}

/*
==============
BG_SynchronizedPlayerInfo::Deserialize
==============
*/

bool __fastcall BG_SynchronizedPlayerInfo::Deserialize(BG_SynchronizedPlayerInfo *this, msg_t *msg)
{
  return ?Deserialize@BG_SynchronizedPlayerInfo@@QEAA_NPEAUmsg_t@@@Z(this, msg);
}

/*
==============
BG_SynchronizedPlayerInfo_Print
==============
*/
void BG_SynchronizedPlayerInfo_Print(const int channel, const BG_SynchronizedPlayerInfo *playerInfo)
{
  bool isGuestAccount; 
  bool isHeadless; 
  int v6; 
  unsigned __int64 platformId; 
  int localNetId; 
  const char *v9; 
  int v10; 
  BOOL v11; 
  BOOL v12; 
  int v13; 
  char dest[8]; 
  char str[24]; 
  char buffer[176]; 

  XNKIDToString(&playerInfo->partyId, str, 21);
  XNADDR::ToString(&playerInfo->xnaddr, buffer);
  Com_sprintf(dest, 2ui64, "%i", (unsigned int)playerInfo->natType);
  isGuestAccount = playerInfo->isGuestAccount;
  isHeadless = playerInfo->isHeadless;
  v6 = (char)playerInfo->clientPlatform[0];
  platformId = playerInfo->platformId;
  localNetId = playerInfo->localNetId;
  v9 = XUID::ToDevString(&playerInfo->xuid);
  v13 = v6;
  v12 = isHeadless;
  v11 = isGuestAccount;
  v10 = localNetId;
  Com_Printf(channel, "xuid: %s, xnaddr: %s, natType: %s, partyId: %s, localNetId: %d, isGuest: %d, isHeadless: %d, platformId: %llu, platform: %d\n", v9, buffer, dest, str, v10, v11, v12, platformId, v13);
}

/*
==============
BG_SynchronizedPlayerInfo_Reset
==============
*/
void BG_SynchronizedPlayerInfo_Reset(BG_SynchronizedPlayerInfo *playerInfo)
{
  const XUID *v2; 
  XUID result; 

  if ( !playerInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_synchronizedplayerinfo.cpp", 167, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
    __debugbreak();
  memset_0(playerInfo, 0, sizeof(BG_SynchronizedPlayerInfo));
  v2 = XUID::NullXUID(&result);
  XUID::operator=(&playerInfo->xuid, v2);
}

/*
==============
BG_SynchronizedPlayerInfo::Deserialize
==============
*/
bool BG_SynchronizedPlayerInfo::Deserialize(BG_SynchronizedPlayerInfo *this, msg_t *msg)
{
  __int64 Bits; 
  __int64 v5; 
  char v6; 

  if ( MSG_ReadBit(msg) )
    MSG_ReadData(msg, 84, this, 84);
  XUID::Deserialize(&this->xuid, msg);
  Bits = MSG_ReadBits(msg, 2u);
  if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  this->natType = Bits;
  MSG_ReadData(msg, 8, &this->partyId, 8);
  this->localNetId = MSG_ReadByte(msg);
  this->isGuestAccount = MSG_ReadBit(msg) != 0;
  this->isHeadless = MSG_ReadBit(msg) != 0;
  this->platformId = MSG_ReadInt64(msg);
  v5 = MSG_ReadBits(msg, 3u);
  v6 = v5;
  if ( (unsigned __int64)(v5 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum ClientPlatform __cdecl truncate_cast_impl<enum ClientPlatform,__int64>(__int64)", "signed", (char)v5, "signed", v5) )
    __debugbreak();
  this->clientPlatform[0] = v6;
  this->shouldPauseGame = MSG_ReadBit(msg) != 0;
  this->pauseStatusChanged = MSG_ReadBit(msg) != 0;
  return msg->overflowed == 0;
}

/*
==============
BG_SynchronizedPlayerInfo::DeserializeFromMemfile
==============
*/
void BG_SynchronizedPlayerInfo::DeserializeFromMemfile(BG_SynchronizedPlayerInfo *this, MemoryFile *memFile)
{
  char v4; 
  unsigned __int64 p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_synchronizedplayerinfo.cpp", 107, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 0x54ui64, this);
  MemFile_ReadData(memFile, 8ui64, &this->xuid);
  MemFile_ReadData(memFile, 1ui64, &p);
  this->natType = (unsigned __int8)p;
  MemFile_ReadData(memFile, 8ui64, &this->partyId);
  MemFile_ReadData(memFile, 1ui64, &p);
  this->localNetId = (unsigned __int8)p;
  MemFile_ReadData(memFile, 1ui64, &p);
  this->isGuestAccount = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  this->isHeadless = p;
  MemFile_ReadData(memFile, 8ui64, &p);
  this->platformId = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  v4 = p;
  if ( (unsigned __int8)p > 0x7Fu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum ClientPlatform __cdecl truncate_cast_impl<enum ClientPlatform,unsigned char>(unsigned char)", "signed", (char)p, "unsigned", (unsigned __int8)p) )
    __debugbreak();
  this->clientPlatform[0] = v4;
  MemFile_ReadData(memFile, 1ui64, &p);
  this->shouldPauseGame = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  this->pauseStatusChanged = p;
}

/*
==============
BG_SynchronizedPlayerInfo::Equals
==============
*/
bool BG_SynchronizedPlayerInfo::Equals(BG_SynchronizedPlayerInfo *this, const BG_SynchronizedPlayerInfo *rhs)
{
  bool v4; 
  bool v5; 
  bool v6; 

  v4 = memcmp_0(this, rhs, 0x54ui64) == 0;
  v5 = bdSecurityID::operator==(&this->partyId, &rhs->partyId);
  v6 = XUID::operator==(&this->xuid, &rhs->xuid);
  return v4 && v5 && v6 && this->platformId == rhs->platformId && this->natType == rhs->natType && this->localNetId == rhs->localNetId && this->isGuestAccount == rhs->isGuestAccount && this->isHeadless == rhs->isHeadless && this->clientPlatform[0] == rhs->clientPlatform[0] && this->shouldPauseGame == rhs->shouldPauseGame && rhs->pauseStatusChanged;
}

/*
==============
BG_SynchronizedPlayerInfo::Serialize
==============
*/
void BG_SynchronizedPlayerInfo::Serialize(BG_SynchronizedPlayerInfo *this, msg_t *msg)
{
  const PartyData *GameParty; 

  GameParty = Live_GetGameParty();
  if ( PeerMesh_IsEnabled(GameParty) )
  {
    MSG_WriteBool(msg, 1);
    MSG_WriteData(msg, this, 84);
  }
  else
  {
    MSG_WriteBool(msg, 0);
  }
  XUID::Serialize(&this->xuid, msg);
  MSG_WriteBits(msg, this->natType, 2u);
  MSG_WriteData(msg, &this->partyId, 8);
  MSG_WriteByte(msg, this->localNetId);
  MSG_WriteBool(msg, this->isGuestAccount);
  MSG_WriteBool(msg, this->isHeadless);
  MSG_WriteInt64(msg, this->platformId);
  MSG_WriteBits(msg, (char)this->clientPlatform[0], 3u);
  MSG_WriteBool(msg, this->shouldPauseGame);
  MSG_WriteBool(msg, this->pauseStatusChanged);
}

/*
==============
BG_SynchronizedPlayerInfo::SerializeToMemfile
==============
*/
void BG_SynchronizedPlayerInfo::SerializeToMemfile(BG_SynchronizedPlayerInfo *this, MemoryFile *memFile)
{
  char v4; 
  unsigned __int64 p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_synchronizedplayerinfo.cpp", 81, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_WriteData(memFile, 0x54ui64, this);
  MemFile_WriteData(memFile, 8ui64, &this->xuid);
  LOBYTE(p) = truncate_cast<unsigned char,int>(this->natType);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 8ui64, &this->partyId);
  LOBYTE(p) = truncate_cast<unsigned char,int>(this->localNetId);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->isGuestAccount;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->isHeadless;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = this->platformId;
  MemFile_WriteData(memFile, 8ui64, &p);
  v4 = this->clientPlatform[0];
  if ( v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum ClientPlatform>(enum ClientPlatform)", "unsigned", (unsigned __int8)v4, "signed", v4) )
    __debugbreak();
  LOBYTE(p) = v4;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->shouldPauseGame;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->pauseStatusChanged;
  MemFile_WriteData(memFile, 1ui64, &p);
}

