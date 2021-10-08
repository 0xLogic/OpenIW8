/*
==============
bdExtendedAuthInfo::setData
==============
*/

bool __fastcall bdExtendedAuthInfo::setData(bdExtendedAuthInfo *this, const char *data)
{
  return ?setData@bdExtendedAuthInfo@@IEAA_NPEBD@Z(this, data);
}

/*
==============
bdExtendedAuthInfo::bdExtendedAuthInfo
==============
*/

void __fastcall bdExtendedAuthInfo::bdExtendedAuthInfo(bdExtendedAuthInfo *this)
{
  ??0bdExtendedAuthInfo@@QEAA@XZ(this);
}

/*
==============
bdExtendedAuthInfo::serialize
==============
*/

bool __fastcall bdExtendedAuthInfo::serialize(bdExtendedAuthInfo *this, bdByteBuffer *buffer)
{
  return ?serialize@bdExtendedAuthInfo@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdExtendedAuthInfo::getData
==============
*/

const char *__fastcall bdExtendedAuthInfo::getData(bdExtendedAuthInfo *this)
{
  return ?getData@bdExtendedAuthInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdExtendedAuthInfo::sizeOf
==============
*/

unsigned int __fastcall bdExtendedAuthInfo::sizeOf(bdExtendedAuthInfo *this)
{
  return ?sizeOf@bdExtendedAuthInfo@@UEAAIXZ(this);
}

/*
==============
bdExtendedAuthInfo::~bdExtendedAuthInfo
==============
*/

void __fastcall bdExtendedAuthInfo::~bdExtendedAuthInfo(bdExtendedAuthInfo *this)
{
  ??1bdExtendedAuthInfo@@UEAA@XZ(this);
}

/*
==============
bdExtendedAuthInfo::bdExtendedAuthInfo
==============
*/
void bdExtendedAuthInfo::bdExtendedAuthInfo(bdExtendedAuthInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdExtendedAuthInfo::`vbtable';
    *(_QWORD *)&this->gap1012[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1012[14] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdExtendedAuthInfo_vtbl *)&bdExtendedAuthInfo::`vftable'{for `bdSerializable'};
  *(bdExtendedAuthInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdExtendedAuthInfo_vtbl *)&bdExtendedAuthInfo::`vftable'{for `bdReferencable'};
  this->m_initialized = 0;
  memset_0(&this->__vftable + 2, 0, 0x1001ui64);
}

/*
==============
bdExtendedAuthInfo::~bdExtendedAuthInfo
==============
*/
void bdExtendedAuthInfo::~bdExtendedAuthInfo(bdExtendedAuthInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdExtendedAuthInfo::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 4112) = &bdExtendedAuthInfo::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdExtendedAuthInfo *)((char *)this - 4104));
}

/*
==============
bdExtendedAuthInfo::getData
==============
*/
const char *bdExtendedAuthInfo::getData(bdExtendedAuthInfo *this)
{
  const char *result; 

  result = (const char *)(&this->__vftable + 2);
  if ( !this->m_initialized )
    return 0i64;
  return result;
}

/*
==============
bdExtendedAuthInfo::serialize
==============
*/
bool bdExtendedAuthInfo::serialize(bdExtendedAuthInfo *this, bdByteBuffer *buffer)
{
  bool v2; 

  if ( this->m_initialized )
  {
    v2 = bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0x1001ui64);
    if ( !v2 )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAntiCheat/bdExtendedAuthInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdextendedauthinfo.cpp", "bdExtendedAuthInfo::serialize", 0x20u, "Failed to serialize bdExtendedAuthInfo");
    return v2;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAntiCheat/bdExtendedAuthInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdextendedauthinfo.cpp", "bdExtendedAuthInfo::serialize", 0x25u, "Cannot Send uninitialized bdExtendedAuthInfo");
    return 0;
  }
}

/*
==============
bdExtendedAuthInfo::setData
==============
*/
char bdExtendedAuthInfo::setData(bdExtendedAuthInfo *this, const char *data)
{
  unsigned __int64 v4; 

  bdHandleAssert(data != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( data[v4] );
  if ( v4 > 0x1000 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdextendedauthinfo.cpp", "bdExtendedAuthInfo::setData", 0x49u, "bdExtendedAuthInfo::setData data too large: [%u]bytes", v4);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAntiCheat/bdExtendedAuthInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdextendedauthinfo.cpp", "bdExtendedAuthInfo::setData", 0x4Au, "bdExtendedAuthInfo::setData data too large: [%u]bytes", v4);
  }
  else if ( bdStrlcpy((char *const)&this->__vftable + 16, data, 0x1001ui64) == v4 )
  {
    this->m_initialized = 1;
    return 1;
  }
  return 0;
}

/*
==============
bdExtendedAuthInfo::sizeOf
==============
*/
__int64 bdExtendedAuthInfo::sizeOf(bdExtendedAuthInfo *this)
{
  return 4136i64;
}

