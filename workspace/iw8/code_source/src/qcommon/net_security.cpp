/*
==============
XSECURITY_INFO::IsValid
==============
*/

bool __fastcall XSECURITY_INFO::IsValid(XSECURITY_INFO *this)
{
  return ?IsValid@XSECURITY_INFO@@QEBA_NXZ(this);
}

/*
==============
XSECURITY_INFO::operator!=
==============
*/

bool __fastcall XSECURITY_INFO::operator!=(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  return ??9XSECURITY_INFO@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
XSECURITY_INFO::Deserialize
==============
*/

int __fastcall XSECURITY_INFO::Deserialize(XSECURITY_INFO *this, const unsigned __int8 *data, const int length)
{
  return ?Deserialize@XSECURITY_INFO@@QEAAHPEBEH@Z(this, data, length);
}

/*
==============
XSECURITY_INFO::operator==
==============
*/

bool __fastcall XSECURITY_INFO::operator==(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  return ??8XSECURITY_INFO@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
XSECURITY_INFO::GetId
==============
*/

bdSecurityID *__fastcall XSECURITY_INFO::GetId(XSECURITY_INFO *this)
{
  return ?GetId@XSECURITY_INFO@@QEAAAEAVbdSecurityID@@XZ(this);
}

/*
==============
XSECURITY_INFO::Clear
==============
*/

void __fastcall XSECURITY_INFO::Clear(XSECURITY_INFO *this)
{
  ?Clear@XSECURITY_INFO@@QEAAXXZ(this);
}

/*
==============
XSECURITY_INFO::GetString
==============
*/

const char *__fastcall XSECURITY_INFO::GetString(XSECURITY_INFO *this)
{
  return ?GetString@XSECURITY_INFO@@QEBAPEBDXZ(this);
}

/*
==============
XSECURITY_INFO::Serialize
==============
*/

int __fastcall XSECURITY_INFO::Serialize(XSECURITY_INFO *this, unsigned __int8 *buffer, const int size)
{
  return ?Serialize@XSECURITY_INFO@@QEBAHPEAEH@Z(this, buffer, size);
}

/*
==============
XSECURITY_INFO::XSECURITY_INFO
==============
*/

void __fastcall XSECURITY_INFO::XSECURITY_INFO(XSECURITY_INFO *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  ??0XSECURITY_INFO@@QEAA@AEBVbdSecurityID@@AEBVbdSecurityKey@@@Z(this, id, key);
}

/*
==============
XSECURITY_INFO::GetKey
==============
*/

const bdSecurityKey *__fastcall XSECURITY_INFO::GetKey(XSECURITY_INFO *this)
{
  return ?GetKey@XSECURITY_INFO@@QEBAAEBVbdSecurityKey@@XZ(this);
}

/*
==============
XSECURITY_INFO::operator=
==============
*/

XSECURITY_INFO *__fastcall XSECURITY_INFO::operator=(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  return ??4XSECURITY_INFO@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
XSECURITY_INFO::GetKey
==============
*/

bdSecurityKey *__fastcall XSECURITY_INFO::GetKey(XSECURITY_INFO *this)
{
  return ?GetKey@XSECURITY_INFO@@QEAAAEAVbdSecurityKey@@XZ(this);
}

/*
==============
XSECURITY_INFO::Set
==============
*/

void __fastcall XSECURITY_INFO::Set(XSECURITY_INFO *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  ?Set@XSECURITY_INFO@@QEAAXAEBVbdSecurityID@@AEBVbdSecurityKey@@@Z(this, id, key);
}

/*
==============
XSECURITY_INFO::GetId
==============
*/

const bdSecurityID *__fastcall XSECURITY_INFO::GetId(XSECURITY_INFO *this)
{
  return ?GetId@XSECURITY_INFO@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
XSECURITY_INFO::Serialize
==============
*/

void __fastcall XSECURITY_INFO::Serialize(XSECURITY_INFO *this, msg_t *msg)
{
  ?Serialize@XSECURITY_INFO@@QEBAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
XSECURITY_INFO::Deserialize
==============
*/

void __fastcall XSECURITY_INFO::Deserialize(XSECURITY_INFO *this, msg_t *msg)
{
  ?Deserialize@XSECURITY_INFO@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
XSECURITY_INFO::XSECURITY_INFO
==============
*/
void XSECURITY_INFO::XSECURITY_INFO(XSECURITY_INFO *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  bdSecurityID::bdSecurityID(&this->m_id, id);
  bdSecurityKey::bdSecurityKey(&this->m_key, key);
}

/*
==============
XSECURITY_INFO::operator=
==============
*/
XSECURITY_INFO *XSECURITY_INFO::operator=(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  *this = *other;
  return this;
}

/*
==============
XSECURITY_INFO::operator==
==============
*/

bool __fastcall XSECURITY_INFO::operator==(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  return bdSecurityID::operator==(&this->m_id, &other->m_id);
}

/*
==============
XSECURITY_INFO::operator!=
==============
*/

bool __fastcall XSECURITY_INFO::operator!=(XSECURITY_INFO *this, const XSECURITY_INFO *other)
{
  return bdSecurityID::operator!=(&this->m_id, &other->m_id);
}

/*
==============
XSECURITY_INFO::Clear
==============
*/
void XSECURITY_INFO::Clear(XSECURITY_INFO *this)
{
  this->m_id = 0i64;
  *(_QWORD *)this->m_key.ab = 0i64;
  *(_QWORD *)&this->m_key.ab[8] = 0i64;
}

/*
==============
XSECURITY_INFO::Deserialize
==============
*/
__int64 XSECURITY_INFO::Deserialize(XSECURITY_INFO *this, const unsigned __int8 *data, const int length)
{
  __int64 result; 

  if ( length < 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_security.cpp", 119, ASSERT_TYPE_ASSERT, "(length >= Size())", (const char *)&queryFormat, "length >= Size()") )
    __debugbreak();
  this->m_key = *(bdSecurityKey *)data;
  result = 24i64;
  this->m_id = *((bdSecurityID *)data + 2);
  return result;
}

/*
==============
XSECURITY_INFO::Deserialize
==============
*/
void XSECURITY_INFO::Deserialize(XSECURITY_INFO *this, msg_t *msg)
{
  MSG_ReadData(msg, 16, &this->m_key, 16);
  MSG_ReadData(msg, 8, this, 8);
}

/*
==============
XSECURITY_INFO::GetId
==============
*/
XSECURITY_INFO *XSECURITY_INFO::GetId(XSECURITY_INFO *this)
{
  return this;
}

/*
==============
XSECURITY_INFO::GetId
==============
*/
XSECURITY_INFO *XSECURITY_INFO::GetId(XSECURITY_INFO *this)
{
  return this;
}

/*
==============
XSECURITY_INFO::GetKey
==============
*/
bdSecurityKey *XSECURITY_INFO::GetKey(XSECURITY_INFO *this)
{
  return &this->m_key;
}

/*
==============
XSECURITY_INFO::GetKey
==============
*/
bdSecurityKey *XSECURITY_INFO::GetKey(XSECURITY_INFO *this)
{
  return &this->m_key;
}

/*
==============
XSECURITY_INFO::GetString
==============
*/

const char *__fastcall XSECURITY_INFO::GetString(XSECURITY_INFO *this)
{
  return dwSecurityIdToString(&this->m_id);
}

/*
==============
XSECURITY_INFO::IsValid
==============
*/

bool __fastcall XSECURITY_INFO::IsValid(XSECURITY_INFO *this)
{
  return bdSecurityID::IsValid(&this->m_id);
}

/*
==============
XSECURITY_INFO::Serialize
==============
*/
__int64 XSECURITY_INFO::Serialize(XSECURITY_INFO *this, unsigned __int8 *buffer, const int size)
{
  if ( (unsigned int)size < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_security.cpp", 96, ASSERT_TYPE_ASSERT, "(size >= sizeof( m_key.ab ) + sizeof( m_id.ab ))", (const char *)&queryFormat, "size >= sizeof( m_key.ab ) + sizeof( m_id.ab )") )
    __debugbreak();
  *(bdSecurityKey *)buffer = this->m_key;
  *((double *)buffer + 2) = *(double *)&this->m_id;
  return 24i64;
}

/*
==============
XSECURITY_INFO::Serialize
==============
*/
void XSECURITY_INFO::Serialize(XSECURITY_INFO *this, msg_t *msg)
{
  MSG_WriteData(msg, &this->m_key, 16);
  MSG_WriteData(msg, this, 8);
}

/*
==============
XSECURITY_INFO::Set
==============
*/
void XSECURITY_INFO::Set(XSECURITY_INFO *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  this->m_id = *id;
  this->m_key = *key;
}

