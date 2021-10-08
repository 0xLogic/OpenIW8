/*
==============
bdSanitizeStringBase::reset
==============
*/

void __fastcall bdSanitizeStringBase::reset(bdSanitizeStringBase *this)
{
  ?reset@bdSanitizeStringBase@@QEAAXXZ(this);
}

/*
==============
bdSanitizeStringBase::setString
==============
*/

void __fastcall bdSanitizeStringBase::setString(bdSanitizeStringBase *this, const char *string)
{
  ?setString@bdSanitizeStringBase@@QEAAXPEBD@Z(this, string);
}

/*
==============
bdSanitizeStringBase::getString
==============
*/

const char *__fastcall bdSanitizeStringBase::getString(bdSanitizeStringBase *this)
{
  return ?getString@bdSanitizeStringBase@@QEBAPEBDXZ(this);
}

/*
==============
bdSanitizeStringBase::bdSanitizeStringBase
==============
*/

void __fastcall bdSanitizeStringBase::bdSanitizeStringBase(bdSanitizeStringBase *this)
{
  ??0bdSanitizeStringBase@@QEAA@XZ(this);
}

/*
==============
bdSanitizeStringBase::bdSanitizeStringBase
==============
*/

void __fastcall bdSanitizeStringBase::bdSanitizeStringBase(bdSanitizeStringBase *this, const char *m_string)
{
  ??0bdSanitizeStringBase@@QEAA@PEBD@Z(this, m_string);
}

/*
==============
bdSanitizeStringBase::deserialize
==============
*/

bool __fastcall bdSanitizeStringBase::deserialize(bdSanitizeStringBase *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdSanitizeStringBase@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdSanitizeStringBase::serialize
==============
*/

bool __fastcall bdSanitizeStringBase::serialize(bdSanitizeStringBase *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdSanitizeStringBase@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdSanitizeStringBase::bdSanitizeStringBase
==============
*/
void bdSanitizeStringBase::bdSanitizeStringBase(bdSanitizeStringBase *this, const char *m_string, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringBase::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSanitizeStringBase_vtbl *)&bdSanitizeStringBase::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringBase_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringBase_vtbl *)&bdSanitizeStringBase::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x400ui64);
  bdHandleAssert(m_string != NULL, "string != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdsanitizestringbase.cpp", "bdSanitizeStringBase::setString", 0x30u, "The string must not be null.", -2i64);
  bdStrlcpy((char *const)&this->__vftable + 16, m_string, 0x400ui64);
}

/*
==============
bdSanitizeStringBase::bdSanitizeStringBase
==============
*/
void bdSanitizeStringBase::bdSanitizeStringBase(bdSanitizeStringBase *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringBase::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSanitizeStringBase_vtbl *)&bdSanitizeStringBase::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringBase_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringBase_vtbl *)&bdSanitizeStringBase::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x400ui64);
}

/*
==============
bdSanitizeStringBase::deserialize
==============
*/
bool bdSanitizeStringBase::deserialize(bdSanitizeStringBase *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x400u);
}

/*
==============
bdSanitizeStringBase::getString
==============
*/
bdSanitizeStringBase_vtbl **bdSanitizeStringBase::getString(bdSanitizeStringBase *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdSanitizeStringBase::reset
==============
*/
void bdSanitizeStringBase::reset(bdSanitizeStringBase *this)
{
  memset_0(&this->__vftable + 2, 0, 0x400ui64);
}

/*
==============
bdSanitizeStringBase::serialize
==============
*/
__int64 bdSanitizeStringBase::serialize(bdSanitizeStringBase *this, bdStructBufferSerializer *serializer)
{
  bdString string; 

  bdString::bdString(&string, (const char *const)&this->__vftable + 16);
  LOBYTE(serializer) = bdStructBufferSerializer::writeString(serializer, 1u, &string);
  bdString::~bdString(&string);
  return (unsigned __int8)serializer;
}

/*
==============
bdSanitizeStringBase::setString
==============
*/
void bdSanitizeStringBase::setString(bdSanitizeStringBase *this, const char *string)
{
  bdHandleAssert(string != NULL, "string != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdsanitizestringbase.cpp", "bdSanitizeStringBase::setString", 0x30u, "The string must not be null.");
  bdStrlcpy((char *const)&this->__vftable + 16, string, 0x400ui64);
}

