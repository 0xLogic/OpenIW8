/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, unsigned int value)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBDI@Z(this, key, value);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, void *value, unsigned __int64 length)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBDPEAX_K@Z(this, key, value, length);
}

/*
==============
bdProfileItem::serialize
==============
*/

bool __fastcall bdProfileItem::serialize(bdProfileItem *this, bdByteBuffer *buffer)
{
  return ?serialize@bdProfileItem@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, bool value)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBD_N@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, bool value)
{
  ??0bdProfileItem@@QEAA@PEBD_N@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, void *value, unsigned __int64 length)
{
  ??0bdProfileItem@@QEAA@PEBDPEAX_K@Z(this, key, value, length);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, unsigned __int64 value)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBD_K@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, int value)
{
  ??0bdProfileItem@@QEAA@PEBDH@Z(this, key, value);
}

/*
==============
bdProfileItem::setKey
==============
*/

void __fastcall bdProfileItem::setKey(bdProfileItem *this, const char *key)
{
  ?setKey@bdProfileItem@@IEAAXPEBD@Z(this, key);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, char *value, unsigned __int64 length)
{
  ??0bdProfileItem@@QEAA@PEBDPEAD_K@Z(this, key, value, length);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, int value)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBDH@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, __int64 value)
{
  ??0bdProfileItem@@QEAA@PEBD_J@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, unsigned int value)
{
  ??0bdProfileItem@@QEAA@PEBDI@Z(this, key, value);
}

/*
==============
bdProfileItem::clear
==============
*/

void __fastcall bdProfileItem::clear(bdProfileItem *this)
{
  ?clear@bdProfileItem@@IEAAXXZ(this);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, unsigned __int64 value)
{
  ??0bdProfileItem@@QEAA@PEBD_K@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/

void __fastcall bdProfileItem::bdProfileItem(bdProfileItem *this)
{
  ??0bdProfileItem@@QEAA@XZ(this);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, char *value, unsigned __int64 length)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBDPEAD_K@Z(this, key, value, length);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/

void __fastcall bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, __int64 value)
{
  ?setKeyAndValue@bdProfileItem@@QEAAXPEBD_J@Z(this, key, value);
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, int value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_value.m_int32 = value;
  this->m_valueType = BD_BB_SIGNED_INTEGER32_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, unsigned int value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_value.m_int32 = value;
  this->m_valueType = BD_BB_UNSIGNED_INTEGER32_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, char *value, unsigned __int64 length, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_valueLength = length;
  this->m_value.m_int64 = (__int64)value;
  this->m_valueType = BD_BB_SIGNED_CHAR8_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, void *value, unsigned __int64 length, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_valueLength = length;
  this->m_value.m_int64 = (__int64)value;
  this->m_valueType = BD_BB_BLOB_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, __int64 value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_value.m_int64 = value;
  this->m_valueType = BD_BB_SIGNED_INTEGER64_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, unsigned __int64 value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_value.m_int64 = value;
  this->m_valueType = BD_BB_UNSIGNED_INTEGER64_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, const char *key, bool value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
  this->m_value.m_bool = value;
  this->m_valueType = BD_BB_BOOL_TYPE;
}

/*
==============
bdProfileItem::bdProfileItem
==============
*/
void bdProfileItem::bdProfileItem(bdProfileItem *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdProfileItem::`vbtable';
    *(_QWORD *)&this->gap64[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap64[12] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdSerializable'};
  *(bdProfileItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdProfileItem_vtbl *)&bdProfileItem::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
}

/*
==============
bdProfileItem::clear
==============
*/
void bdProfileItem::clear(bdProfileItem *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_name = 0i64;
  *(_QWORD *)&this->m_name[8] = 0i64;
  *(_QWORD *)&this->m_name[16] = 0i64;
  *(_QWORD *)&this->m_name[24] = 0i64;
  *(_QWORD *)&this->m_name[32] = 0i64;
  *(_QWORD *)&this->m_name[40] = 0i64;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
}

/*
==============
bdProfileItem::serialize
==============
*/
_BOOL8 bdProfileItem::serialize(bdProfileItem *this, bdByteBuffer *buffer)
{
  bool v4; 
  _BOOL8 result; 

  v4 = bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0x40ui64);
  switch ( this->m_valueType )
  {
    case BD_BB_NO_TYPE:
      bdByteBuffer::writeNoType(buffer);
      result = v4;
      break;
    case BD_BB_BOOL_TYPE:
      bdByteBuffer::writeBool(buffer, this->m_value.m_bool);
      result = v4;
      break;
    case BD_BB_SIGNED_CHAR8_TYPE:
      bdByteBuffer::writeString(buffer, this->m_value.m_string, this->m_valueLength);
      result = v4;
      break;
    case BD_BB_SIGNED_INTEGER32_TYPE:
      bdByteBuffer::writeInt32(buffer, this->m_value.m_int32);
      result = v4;
      break;
    case BD_BB_UNSIGNED_INTEGER32_TYPE:
      bdByteBuffer::writeUInt32(buffer, this->m_value.m_uint32);
      result = v4;
      break;
    case BD_BB_SIGNED_INTEGER64_TYPE:
      bdByteBuffer::writeInt64(buffer, this->m_value.m_int64);
      result = v4;
      break;
    case BD_BB_UNSIGNED_INTEGER64_TYPE:
      bdByteBuffer::writeUInt64(buffer, this->m_value.m_uint64);
      result = v4;
      break;
    case BD_BB_BLOB_TYPE:
      bdByteBuffer::writeBlob(buffer, this->m_value.m_blob, this->m_valueLength);
      result = v4;
      break;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "profileItem", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdprofiles\\bdprofileitem.cpp", "bdProfileItem::serialize", 0x72u, "Unable to write to buffer, value not set");
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
bdProfileItem::setKey
==============
*/
void bdProfileItem::setKey(bdProfileItem *this, const char *key)
{
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x40ui64);
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, int value)
{
  bdProfileItem_vtbl **v4; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v4 = &this->__vftable + 2;
  v4[1] = NULL;
  v4[2] = NULL;
  v4[3] = NULL;
  v4[4] = NULL;
  v4[5] = NULL;
  v4[6] = NULL;
  v4[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v4, key, 0x40ui64);
  this->m_value.m_int32 = value;
  this->m_valueType = BD_BB_SIGNED_INTEGER32_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, unsigned int value)
{
  bdProfileItem_vtbl **v4; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v4 = &this->__vftable + 2;
  v4[1] = NULL;
  v4[2] = NULL;
  v4[3] = NULL;
  v4[4] = NULL;
  v4[5] = NULL;
  v4[6] = NULL;
  v4[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v4, key, 0x40ui64);
  this->m_value.m_int32 = value;
  this->m_valueType = BD_BB_UNSIGNED_INTEGER32_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, char *value, unsigned __int64 length)
{
  bdProfileItem_vtbl **v5; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v5 = &this->__vftable + 2;
  v5[1] = NULL;
  v5[2] = NULL;
  v5[3] = NULL;
  v5[4] = NULL;
  v5[5] = NULL;
  v5[6] = NULL;
  v5[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v5, key, 0x40ui64);
  this->m_value.m_int64 = (__int64)value;
  this->m_valueLength = length;
  this->m_valueType = BD_BB_SIGNED_CHAR8_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, void *value, unsigned __int64 length)
{
  bdProfileItem_vtbl **v5; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v5 = &this->__vftable + 2;
  v5[1] = NULL;
  v5[2] = NULL;
  v5[3] = NULL;
  v5[4] = NULL;
  v5[5] = NULL;
  v5[6] = NULL;
  v5[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v5, key, 0x40ui64);
  this->m_value.m_int64 = (__int64)value;
  this->m_valueLength = length;
  this->m_valueType = BD_BB_BLOB_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, __int64 value)
{
  bdProfileItem_vtbl **v4; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v4 = &this->__vftable + 2;
  v4[1] = NULL;
  v4[2] = NULL;
  v4[3] = NULL;
  v4[4] = NULL;
  v4[5] = NULL;
  v4[6] = NULL;
  v4[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v4, key, 0x40ui64);
  this->m_value.m_int64 = value;
  this->m_valueType = BD_BB_SIGNED_INTEGER64_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, unsigned __int64 value)
{
  bdProfileItem_vtbl **v4; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v4 = &this->__vftable + 2;
  v4[1] = NULL;
  v4[2] = NULL;
  v4[3] = NULL;
  v4[4] = NULL;
  v4[5] = NULL;
  v4[6] = NULL;
  v4[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v4, key, 0x40ui64);
  this->m_value.m_int64 = value;
  this->m_valueType = BD_BB_UNSIGNED_INTEGER64_TYPE;
}

/*
==============
bdProfileItem::setKeyAndValue
==============
*/
void bdProfileItem::setKeyAndValue(bdProfileItem *this, const char *key, bool value)
{
  bdProfileItem_vtbl **v4; 

  *((_QWORD *)&this->__vftable + 2) = 0i64;
  v4 = &this->__vftable + 2;
  v4[1] = NULL;
  v4[2] = NULL;
  v4[3] = NULL;
  v4[4] = NULL;
  v4[5] = NULL;
  v4[6] = NULL;
  v4[7] = NULL;
  this->m_valueLength = 0i64;
  this->m_valueType = BD_BB_NO_TYPE;
  bdStrlcpy((char *const)v4, key, 0x40ui64);
  this->m_value.m_bool = value;
  this->m_valueType = BD_BB_BOOL_TYPE;
}

