/*
==============
bdAllocateDedicatedServerRequest::serialize
==============
*/

bool __fastcall bdAllocateDedicatedServerRequest::serialize(bdAllocateDedicatedServerRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdAllocateDedicatedServerRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/

void __fastcall bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, const char **dataCenterPreferences, unsigned int numDataCenterPreferences, const char *context)
{
  ??0bdAllocateDedicatedServerRequest@@QEAA@PEBDPEAPEBDI0@Z(this, buildName, dataCenterPreferences, numDataCenterPreferences, context);
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/

void __fastcall bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, const bdDataCenterPreferences *dataCenterPreferences, const char *context)
{
  ??0bdAllocateDedicatedServerRequest@@QEAA@PEBDPEBVbdDataCenterPreferences@@0@Z(this, buildName, dataCenterPreferences, context);
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/

void __fastcall bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, bdArray<bdString> *dataCenterPreferences, const char *context)
{
  ??0bdAllocateDedicatedServerRequest@@QEAA@PEBDV?$bdArray@VbdString@@@@0@Z(this, buildName, dataCenterPreferences, context);
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/

void __fastcall bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this)
{
  ??0bdAllocateDedicatedServerRequest@@QEAA@XZ(this);
}

/*
==============
bdAllocateDedicatedServerRequest::deserialize
==============
*/

bool __fastcall bdAllocateDedicatedServerRequest::deserialize(bdAllocateDedicatedServerRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdAllocateDedicatedServerRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/
void bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, const char **dataCenterPreferences, unsigned int numDataCenterPreferences, const char *context, int a6)
{
  __int64 v10; 

  v10 = 0i64;
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAllocateDedicatedServerRequest::`vbtable';
    *(_QWORD *)this->gap228 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap228[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdAllocateDedicatedServerRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = buildName;
  this->m_context = context;
  this->m_numDataCenterPreferences = numDataCenterPreferences;
  if ( numDataCenterPreferences )
  {
    do
    {
      *((_QWORD *)&this->__vftable + v10 + 3) = dataCenterPreferences[v10];
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < this->m_numDataCenterPreferences );
  }
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/
void bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, const bdDataCenterPreferences *dataCenterPreferences, const char *context, int a5)
{
  __int64 v9; 
  unsigned int m_numDataCenterPreferences; 

  v9 = 0i64;
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAllocateDedicatedServerRequest::`vbtable';
    *(_QWORD *)this->gap228 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap228[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdAllocateDedicatedServerRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = buildName;
  this->m_context = context;
  m_numDataCenterPreferences = dataCenterPreferences->m_numDataCenterPreferences;
  this->m_numDataCenterPreferences = m_numDataCenterPreferences;
  if ( m_numDataCenterPreferences )
  {
    do
    {
      *((_QWORD *)&this->__vftable + v9 + 3) = &dataCenterPreferences->_bytes_20[64 * (unsigned __int64)(unsigned int)v9];
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < this->m_numDataCenterPreferences );
  }
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/
void bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, const char *buildName, bdArray<bdString> *dataCenterPreferences, const char *context, int a5)
{
  unsigned int m_size; 
  unsigned int i; 
  unsigned int v11; 
  bdString *m_data; 
  __int64 v13; 
  bdString v14; 

  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAllocateDedicatedServerRequest::`vbtable';
    *(_QWORD *)this->gap228 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap228[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdAllocateDedicatedServerRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = buildName;
  this->m_context = context;
  m_size = dataCenterPreferences->m_size;
  this->m_numDataCenterPreferences = m_size;
  for ( i = 0; i < this->m_numDataCenterPreferences; ++i )
  {
    bdString::bdString(&v14);
    if ( i < dataCenterPreferences->m_size )
      bdString::operator=(&v14, &dataCenterPreferences->m_data[i]);
    *((_QWORD *)&this->__vftable + i + 3) = bdString::getBuffer(&v14);
    bdString::~bdString(&v14);
  }
  v11 = dataCenterPreferences->m_size;
  m_data = dataCenterPreferences->m_data;
  if ( v11 )
  {
    v13 = v11;
    do
    {
      bdString::~bdString(m_data++);
      --v13;
    }
    while ( v13 );
  }
  bdMemory::deallocate(dataCenterPreferences->m_data);
  dataCenterPreferences->m_data = NULL;
  *(_QWORD *)&dataCenterPreferences->m_capacity = 0i64;
}

/*
==============
bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest
==============
*/
void bdAllocateDedicatedServerRequest::bdAllocateDedicatedServerRequest(bdAllocateDedicatedServerRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAllocateDedicatedServerRequest::`vbtable';
    *(_QWORD *)this->gap228 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap228[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdAllocateDedicatedServerRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAllocateDedicatedServerRequest_vtbl *)&bdAllocateDedicatedServerRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  this->m_context = NULL;
  this->m_numDataCenterPreferences = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_dataCenterPreferences = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[8] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[16] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[24] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[32] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[40] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[48] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[56] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[64] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[72] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[80] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[88] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[96] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[104] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[112] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[120] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[128] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[136] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[144] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[152] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[160] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[168] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[176] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[184] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[192] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[200] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[208] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[216] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[224] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[232] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[240] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[248] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[256] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[264] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[272] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[280] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[288] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[296] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[304] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[312] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[320] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[328] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[336] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[344] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[352] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[360] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[368] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[376] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[384] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[392] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[400] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[408] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[416] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[424] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[432] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[440] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[448] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[456] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[464] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[472] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[480] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[488] = 0i64;
  *(_QWORD *)&this->m_dataCenterPreferences[496] = 0i64;
}

/*
==============
bdAllocateDedicatedServerRequest::deserialize
==============
*/
bool bdAllocateDedicatedServerRequest::deserialize(bdAllocateDedicatedServerRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdallocatededicatedserverrequest.cpp", "bdAllocateDedicatedServerRequest::deserialize", 0x56u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAllocateDedicatedServerRequest::serialize
==============
*/
bool bdAllocateDedicatedServerRequest::serialize(bdAllocateDedicatedServerRequest *this, bdStructBufferSerializer *serializer)
{
  bool v4; 
  __int64 i; 
  const char *m_context; 

  v4 = bdStructBufferSerializer::writeString(serializer, 1u, *((const char **)&this->__vftable + 2), 0x40u);
  for ( i = 0i64; (unsigned int)i < this->m_numDataCenterPreferences; i = (unsigned int)(i + 1) )
  {
    if ( v4 )
      bdStructBufferSerializer::writeString(serializer, 2u, *((const char **)&this->__vftable + i + 3), 0x40u);
  }
  m_context = this->m_context;
  if ( !m_context )
    return v4;
  return v4 && bdStructBufferSerializer::writeString(serializer, 3u, m_context, 0x40u);
}

