/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/

void __fastcall bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this, const bdMarketplaceMetadata *metadata)
{
  ??0bdMarketplaceMetadata@@QEAA@AEBV0@@Z(this, metadata);
}

/*
==============
bdMarketplaceMetadata::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceMetadata::serializedSizeOf(bdMarketplaceMetadata *this)
{
  return ?serializedSizeOf@bdMarketplaceMetadata@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/

void __fastcall bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this)
{
  ??0bdMarketplaceMetadata@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/

void __fastcall bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this, const char *key, const char *value)
{
  ??0bdMarketplaceMetadata@@QEAA@QEBD0@Z(this, key, value);
}

/*
==============
bdMarketplaceMetadata::reset
==============
*/

void __fastcall bdMarketplaceMetadata::reset(bdMarketplaceMetadata *this)
{
  ?reset@bdMarketplaceMetadata@@UEAAXXZ(this);
}

/*
==============
bdMarketplaceMetadata::serialize
==============
*/

bool __fastcall bdMarketplaceMetadata::serialize(bdMarketplaceMetadata *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceMetadata@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceMetadata::~bdMarketplaceMetadata
==============
*/

void __fastcall bdMarketplaceMetadata::~bdMarketplaceMetadata(bdMarketplaceMetadata *this)
{
  ??1bdMarketplaceMetadata@@UEAA@XZ(this);
}

/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/
void bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this, const bdMarketplaceMetadata *metadata, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceMetadata::`vbtable';
    *(_QWORD *)this->gap120 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap120[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdSerializable'};
  *(bdMarketplaceMetadata_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdReferencable'};
  bdStrlcpy((char *const)&this->__vftable + 16, (const char *const)&metadata->__vftable + 16, 0x10ui64);
  bdStrlcpy(this->m_value, metadata->m_value, 0x100ui64);
}

/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/
void bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this, const char *key, const char *value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceMetadata::`vbtable';
    *(_QWORD *)this->gap120 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap120[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdSerializable'};
  *(bdMarketplaceMetadata_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdReferencable'};
  bdStrlcpy((char *const)&this->__vftable + 16, key, 0x10ui64);
  bdStrlcpy(this->m_value, value, 0x100ui64);
}

/*
==============
bdMarketplaceMetadata::bdMarketplaceMetadata
==============
*/
void bdMarketplaceMetadata::bdMarketplaceMetadata(bdMarketplaceMetadata *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceMetadata::`vbtable';
    *(_QWORD *)this->gap120 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap120[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdSerializable'};
  *(bdMarketplaceMetadata_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceMetadata_vtbl *)&bdMarketplaceMetadata::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x110ui64);
}

/*
==============
bdMarketplaceMetadata::~bdMarketplaceMetadata
==============
*/
void bdMarketplaceMetadata::~bdMarketplaceMetadata(bdMarketplaceMetadata *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMarketplaceMetadata::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 280) = &bdMarketplaceMetadata::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdMarketplaceMetadata *)((char *)this - 272));
}

/*
==============
bdMarketplaceMetadata::reset
==============
*/
void bdMarketplaceMetadata::reset(bdMarketplaceMetadata *this)
{
  memset_0(&this->__vftable + 2, 0, 0x110ui64);
}

/*
==============
bdMarketplaceMetadata::serialize
==============
*/
bool bdMarketplaceMetadata::serialize(bdMarketplaceMetadata *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0x10ui64) && bdByteBuffer::writeString(buffer, this->m_value, 0x100ui64);
}

/*
==============
bdMarketplaceMetadata::serializedSizeOf
==============
*/
__int64 bdMarketplaceMetadata::serializedSizeOf(bdMarketplaceMetadata *this)
{
  int v1; 
  unsigned int v3; 
  int v4; 
  void *v5; 
  char *m_value; 
  int v8; 
  void *v9; 

  v1 = (_DWORD)this + 16;
  if ( this == (bdMarketplaceMetadata *)-16i64 )
  {
    v3 = 0;
  }
  else
  {
    v4 = 16;
    v5 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
    if ( v5 )
      v4 = (_DWORD)v5 - v1;
    v3 = v4 + 2;
  }
  m_value = this->m_value;
  if ( !m_value )
    return v3;
  v8 = 256;
  v9 = memchr_0(m_value, 0, 0x100ui64);
  if ( v9 )
    v8 = (_DWORD)v9 - (_DWORD)m_value;
  return v8 + v3 + 2;
}

