/*
==============
bdStructBufferSerializable::serializeWithLobbyService
==============
*/

bool __fastcall bdStructBufferSerializable::serializeWithLobbyService(bdStructBufferSerializable *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdStructBufferSerializable@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdStructBufferSerializable::deserialize
==============
*/

bool __fastcall bdStructBufferSerializable::deserialize(bdStructBufferSerializable *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdStructBufferSerializable@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdStructBufferSerializable::bdStructBufferSerializable
==============
*/

void __fastcall bdStructBufferSerializable::bdStructBufferSerializable(bdStructBufferSerializable *this)
{
  ??0bdStructBufferSerializable@@QEAA@XZ(this);
}

/*
==============
bdStructBufferSerializable::~bdStructBufferSerializable
==============
*/

void __fastcall bdStructBufferSerializable::~bdStructBufferSerializable(bdStructBufferSerializable *this)
{
  ??1bdStructBufferSerializable@@UEAA@XZ(this);
}

/*
==============
bdStructBufferSerializable::bdStructBufferSerializable
==============
*/

void __fastcall bdStructBufferSerializable::bdStructBufferSerializable(bdStructBufferSerializable *this, const bdStructBufferSerializable *__formal)
{
  ??0bdStructBufferSerializable@@IEAA@AEBV0@@Z(this, __formal);
}

/*
==============
bdStructBufferSerializable::deserializeWithLobbyService
==============
*/

bool __fastcall bdStructBufferSerializable::deserializeWithLobbyService(bdStructBufferSerializable *this, bdStructBufferDeserializer *deserializer, bdLobbyService *lobbyService)
{
  return ?deserializeWithLobbyService@bdStructBufferSerializable@@UEAA_NAEAVbdStructBufferDeserializer@@PEAVbdLobbyService@@@Z(this, deserializer, lobbyService);
}

/*
==============
bdStructBufferSerializable::serialize
==============
*/

bool __fastcall bdStructBufferSerializable::serialize(bdStructBufferSerializable *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdStructBufferSerializable@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdStructBufferSerializable::bdStructBufferSerializable
==============
*/
void bdStructBufferSerializable::bdStructBufferSerializable(bdStructBufferSerializable *this, const bdStructBufferSerializable *__formal, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructBufferSerializable::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  this->__vftable = (bdStructBufferSerializable_vtbl *)&bdStructBufferSerializable::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdStructBufferSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdStructBufferSerializable::bdStructBufferSerializable
==============
*/
void bdStructBufferSerializable::bdStructBufferSerializable(bdStructBufferSerializable *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStructBufferSerializable::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  this->__vftable = (bdStructBufferSerializable_vtbl *)&bdStructBufferSerializable::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdStructBufferSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdStructBufferSerializable::~bdStructBufferSerializable
==============
*/
void bdStructBufferSerializable::~bdStructBufferSerializable(bdStructBufferSerializable *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdStructBufferSerializable::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 8) = &bdStructBufferSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdStructBufferSerializable::deserialize
==============
*/
bool bdStructBufferSerializable::deserialize(bdStructBufferSerializable *this, bdStructBufferDeserializer *deserializer)
{
  return 0;
}

/*
==============
bdStructBufferSerializable::deserializeWithLobbyService
==============
*/
__int64 bdStructBufferSerializable::deserializeWithLobbyService(bdStructBufferSerializable *this, bdStructBufferDeserializer *deserializer, bdLobbyService *lobbyService)
{
  return ((__int64 (__fastcall *)(bdStructBufferSerializable *, bdStructBufferDeserializer *, bdLobbyService *))this->deserialize)(this, deserializer, lobbyService);
}

/*
==============
bdStructBufferSerializable::serialize
==============
*/
bool bdStructBufferSerializable::serialize(bdStructBufferSerializable *this, bdStructBufferSerializer *serializer)
{
  return 0;
}

/*
==============
bdStructBufferSerializable::serializeWithLobbyService
==============
*/
__int64 bdStructBufferSerializable::serializeWithLobbyService(bdStructBufferSerializable *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ((__int64 (__fastcall *)(bdStructBufferSerializable *, bdStructBufferSerializer *, bdLobbyService *))this->serialize)(this, serializer, lobbyService);
}

