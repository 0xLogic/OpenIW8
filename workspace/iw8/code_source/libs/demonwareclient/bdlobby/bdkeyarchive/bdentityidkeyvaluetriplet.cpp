/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/

void __fastcall bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const unsigned __int16 index, const __int64 value, const unsigned __int8 updateType)
{
  ?reset@bdEntityIDKeyValueTriplet@@QEAAX_KG_JE@Z(this, entityID, index, value, updateType);
}

/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/

void __fastcall bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const bdKeyValuePair *keyValuePair)
{
  ?reset@bdEntityIDKeyValueTriplet@@QEAAX_KAEBVbdKeyValuePair@@@Z(this, entityID, keyValuePair);
}

/*
==============
bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet
==============
*/

void __fastcall bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const bdKeyValuePair *keyValuePair)
{
  ??0bdEntityIDKeyValueTriplet@@QEAA@_KAEBVbdKeyValuePair@@@Z(this, entityID, keyValuePair);
}

/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/

void __fastcall bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this)
{
  ?reset@bdEntityIDKeyValueTriplet@@QEAAXXZ(this);
}

/*
==============
bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet
==============
*/

void __fastcall bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet(bdEntityIDKeyValueTriplet *this)
{
  ??0bdEntityIDKeyValueTriplet@@QEAA@XZ(this);
}

/*
==============
bdEntityIDKeyValueTriplet::serialize
==============
*/

bool __fastcall bdEntityIDKeyValueTriplet::serialize(bdEntityIDKeyValueTriplet *this, bdByteBuffer *buffer)
{
  return ?serialize@bdEntityIDKeyValueTriplet@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet
==============
*/
void bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet(bdEntityIDKeyValueTriplet *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdEntityIDKeyValueTriplet::`vbtable';
    *((_QWORD *)&this->m_updateType + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_updateType + 4) = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdEntityIDKeyValueTriplet_vtbl *)&bdEntityIDKeyValueTriplet::`vftable'{for `bdSerializable'};
  *(bdEntityIDKeyValueTriplet_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdEntityIDKeyValueTriplet_vtbl *)&bdEntityIDKeyValueTriplet::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_WORD *)&this->__vftable + 12) = 0;
  this->m_value = 0i64;
  this->m_updateType = 1;
}

/*
==============
bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet
==============
*/
void bdEntityIDKeyValueTriplet::bdEntityIDKeyValueTriplet(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const bdKeyValuePair *keyValuePair, int a4)
{
  unsigned __int8 v7; 
  __int64 v8; 
  __int16 v9; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdEntityIDKeyValueTriplet::`vbtable';
    *((_QWORD *)&this->m_updateType + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_updateType + 4) = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdEntityIDKeyValueTriplet_vtbl *)&bdEntityIDKeyValueTriplet::`vftable'{for `bdSerializable'};
  *(bdEntityIDKeyValueTriplet_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdEntityIDKeyValueTriplet_vtbl *)&bdEntityIDKeyValueTriplet::`vftable'{for `bdReferencable'};
  v7 = keyValuePair->_bytes_20[0];
  v8 = *(_QWORD *)&keyValuePair->_bytes_20[8];
  v9 = *(_WORD *)&keyValuePair->_bytes_20[2];
  *((_QWORD *)&this->__vftable + 2) = entityID;
  *((_WORD *)&this->__vftable + 12) = v9;
  this->m_value = v8;
  this->m_updateType = v7;
}

/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/
void bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this)
{
  this->m_updateType = 1;
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_WORD *)&this->__vftable + 12) = 0;
  this->m_value = 0i64;
}

/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/
void bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const bdKeyValuePair *keyValuePair)
{
  unsigned __int8 v3; 
  __int64 v4; 

  v3 = keyValuePair->_bytes_20[0];
  v4 = *(_QWORD *)&keyValuePair->_bytes_20[8];
  *((_WORD *)&this->__vftable + 12) = *(_WORD *)&keyValuePair->_bytes_20[2];
  this->m_value = v4;
  this->m_updateType = v3;
  *((_QWORD *)&this->__vftable + 2) = entityID;
}

/*
==============
bdEntityIDKeyValueTriplet::reset
==============
*/
void bdEntityIDKeyValueTriplet::reset(bdEntityIDKeyValueTriplet *this, const unsigned __int64 entityID, const unsigned __int16 index, const __int64 value, const unsigned __int8 updateType)
{
  this->m_updateType = updateType;
  *((_QWORD *)&this->__vftable + 2) = entityID;
  *((_WORD *)&this->__vftable + 12) = index;
  this->m_value = value;
}

/*
==============
bdEntityIDKeyValueTriplet::serialize
==============
*/
bool bdEntityIDKeyValueTriplet::serialize(bdEntityIDKeyValueTriplet *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2)) && bdByteBuffer::writeUInt16(buffer, *((_WORD *)&this->__vftable + 12)) && bdByteBuffer::writeInt64(buffer, this->m_value) && bdByteBuffer::writeUByte8(buffer, this->m_updateType);
}

