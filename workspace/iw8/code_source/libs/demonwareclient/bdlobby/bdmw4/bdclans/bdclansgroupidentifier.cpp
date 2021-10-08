/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/

void __fastcall bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this, const bdClansGroupIdentifier *__that)
{
  ??0bdClansGroupIdentifier@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansGroupIdentifier::setRootKind
==============
*/

void __fastcall bdClansGroupIdentifier::setRootKind(bdClansGroupIdentifier *this, const unsigned __int16 rootKind)
{
  ?setRootKind@bdClansGroupIdentifier@@QEAAXG@Z(this, rootKind);
}

/*
==============
bdClansGroupIdentifier::getID
==============
*/

unsigned __int64 __fastcall bdClansGroupIdentifier::getID(bdClansGroupIdentifier *this)
{
  return ?getID@bdClansGroupIdentifier@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/

void __fastcall bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID)
{
  ??0bdClansGroupIdentifier@@QEAA@G_KG0@Z(this, kind, id, rootKind, rootID);
}

/*
==============
bdClansGroupIdentifier::setID
==============
*/

void __fastcall bdClansGroupIdentifier::setID(bdClansGroupIdentifier *this, const unsigned __int64 id)
{
  ?setID@bdClansGroupIdentifier@@QEAAX_K@Z(this, id);
}

/*
==============
bdClansGroupIdentifier::getRootID
==============
*/

unsigned __int64 __fastcall bdClansGroupIdentifier::getRootID(bdClansGroupIdentifier *this)
{
  return ?getRootID@bdClansGroupIdentifier@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupIdentifier::getKind
==============
*/

unsigned __int16 __fastcall bdClansGroupIdentifier::getKind(bdClansGroupIdentifier *this)
{
  return ?getKind@bdClansGroupIdentifier@@QEBAGXZ(this);
}

/*
==============
bdClansGroupIdentifier::getRootKind
==============
*/

unsigned __int16 __fastcall bdClansGroupIdentifier::getRootKind(bdClansGroupIdentifier *this)
{
  return ?getRootKind@bdClansGroupIdentifier@@QEBAGXZ(this);
}

/*
==============
bdClansGroupIdentifier::setKind
==============
*/

void __fastcall bdClansGroupIdentifier::setKind(bdClansGroupIdentifier *this, const unsigned __int16 kind)
{
  ?setKind@bdClansGroupIdentifier@@QEAAXG@Z(this, kind);
}

/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/

void __fastcall bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this)
{
  ??0bdClansGroupIdentifier@@QEAA@XZ(this);
}

/*
==============
bdClansGroupIdentifier::deserialize
==============
*/

bool __fastcall bdClansGroupIdentifier::deserialize(bdClansGroupIdentifier *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupIdentifier@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupIdentifier::serialize
==============
*/

bool __fastcall bdClansGroupIdentifier::serialize(bdClansGroupIdentifier *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGroupIdentifier@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGroupIdentifier::reset
==============
*/

void __fastcall bdClansGroupIdentifier::reset(bdClansGroupIdentifier *this)
{
  ?reset@bdClansGroupIdentifier@@QEAAXXZ(this);
}

/*
==============
bdClansGroupIdentifier::setRootID
==============
*/

void __fastcall bdClansGroupIdentifier::setRootID(bdClansGroupIdentifier *this, const unsigned __int64 rootID)
{
  ?setRootID@bdClansGroupIdentifier@@QEAAX_K@Z(this, rootID);
}

/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/
void bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this, const bdClansGroupIdentifier *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_rootID + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = *((_WORD *)&__that->__vftable + 8);
  *((_QWORD *)&this->__vftable + 3) = *((_QWORD *)&__that->__vftable + 3);
  this->m_rootKind = __that->m_rootKind;
  this->m_rootID = __that->m_rootID;
}

/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/
void bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this, const unsigned __int16 kind, const unsigned __int64 id, const unsigned __int16 rootKind, const unsigned __int64 rootID, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
    *(&this->m_rootID + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_rootID + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = kind;
  *((_QWORD *)&this->__vftable + 3) = id;
  this->m_rootKind = rootKind;
  this->m_rootID = rootID;
}

/*
==============
bdClansGroupIdentifier::bdClansGroupIdentifier
==============
*/
void bdClansGroupIdentifier::bdClansGroupIdentifier(bdClansGroupIdentifier *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
    *(&this->m_rootID + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_rootID + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_rootKind = 0;
  this->m_rootID = 0i64;
}

/*
==============
bdClansGroupIdentifier::deserialize
==============
*/
bool bdClansGroupIdentifier::deserialize(bdClansGroupIdentifier *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt16(deserializer, 1u, (unsigned __int16 *)&this->__vftable + 8) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)&this->__vftable + 3) && bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_rootKind) && bdStructBufferDeserializer::readUInt64(deserializer, 4u, &this->m_rootID);
}

/*
==============
bdClansGroupIdentifier::getID
==============
*/
unsigned __int64 bdClansGroupIdentifier::getID(bdClansGroupIdentifier *this)
{
  return *((_QWORD *)&this->__vftable + 3);
}

/*
==============
bdClansGroupIdentifier::getKind
==============
*/
__int64 bdClansGroupIdentifier::getKind(bdClansGroupIdentifier *this)
{
  return *((unsigned __int16 *)&this->__vftable + 8);
}

/*
==============
bdClansGroupIdentifier::getRootID
==============
*/
unsigned __int64 bdClansGroupIdentifier::getRootID(bdClansGroupIdentifier *this)
{
  return this->m_rootID;
}

/*
==============
bdClansGroupIdentifier::getRootKind
==============
*/
__int64 bdClansGroupIdentifier::getRootKind(bdClansGroupIdentifier *this)
{
  return this->m_rootKind;
}

/*
==============
bdClansGroupIdentifier::reset
==============
*/
void bdClansGroupIdentifier::reset(bdClansGroupIdentifier *this)
{
  *((_WORD *)&this->__vftable + 8) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_rootKind = 0;
  this->m_rootID = 0i64;
}

/*
==============
bdClansGroupIdentifier::serialize
==============
*/
bool bdClansGroupIdentifier::serialize(bdClansGroupIdentifier *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt16(serializer, 1u, *((_WORD *)&this->__vftable + 8)) && bdStructBufferSerializer::writeUInt64(serializer, 2u, *((_QWORD *)&this->__vftable + 3)) && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_rootKind) && bdStructBufferSerializer::writeUInt64(serializer, 4u, this->m_rootID);
}

/*
==============
bdClansGroupIdentifier::setID
==============
*/
void bdClansGroupIdentifier::setID(bdClansGroupIdentifier *this, const unsigned __int64 id)
{
  *((_QWORD *)&this->__vftable + 3) = id;
}

/*
==============
bdClansGroupIdentifier::setKind
==============
*/
void bdClansGroupIdentifier::setKind(bdClansGroupIdentifier *this, const unsigned __int16 kind)
{
  *((_WORD *)&this->__vftable + 8) = kind;
}

/*
==============
bdClansGroupIdentifier::setRootID
==============
*/
void bdClansGroupIdentifier::setRootID(bdClansGroupIdentifier *this, const unsigned __int64 rootID)
{
  this->m_rootID = rootID;
}

/*
==============
bdClansGroupIdentifier::setRootKind
==============
*/
void bdClansGroupIdentifier::setRootKind(bdClansGroupIdentifier *this, const unsigned __int16 rootKind)
{
  this->m_rootKind = rootKind;
}

