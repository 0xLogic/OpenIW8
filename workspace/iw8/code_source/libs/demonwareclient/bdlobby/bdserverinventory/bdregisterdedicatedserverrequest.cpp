/*
==============
bdRegisterDedicatedServerRequest::init
==============
*/

void __fastcall bdRegisterDedicatedServerRequest::init(bdRegisterDedicatedServerRequest *this, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const serverJsonData, const char *const context, const unsigned int priority)
{
  ?init@bdRegisterDedicatedServerRequest@@QEAAXQEBD0PEBEVbdSecurityID@@VbdSecurityKey@@I00I@Z(this, buildName, dataCenter, addr, secID, secKey, registrationTimeout, serverJsonData, context, priority);
}

/*
==============
bdRegisterDedicatedServerRequest::serialize
==============
*/

bool __fastcall bdRegisterDedicatedServerRequest::serialize(bdRegisterDedicatedServerRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdRegisterDedicatedServerRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRegisterDedicatedServerRequest::bdRegisterDedicatedServerRequest
==============
*/

void __fastcall bdRegisterDedicatedServerRequest::bdRegisterDedicatedServerRequest(bdRegisterDedicatedServerRequest *this)
{
  ??0bdRegisterDedicatedServerRequest@@QEAA@XZ(this);
}

/*
==============
bdRegisterDedicatedServerRequest::deserialize
==============
*/

bool __fastcall bdRegisterDedicatedServerRequest::deserialize(bdRegisterDedicatedServerRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdRegisterDedicatedServerRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdRegisterDedicatedServerRequest::bdRegisterDedicatedServerRequest
==============
*/
void bdRegisterDedicatedServerRequest::bdRegisterDedicatedServerRequest(bdRegisterDedicatedServerRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRegisterDedicatedServerRequest::`vbtable';
    *(_QWORD *)&this->gap544[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap544[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRegisterDedicatedServerRequest_vtbl *)&bdRegisterDedicatedServerRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdRegisterDedicatedServerRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRegisterDedicatedServerRequest_vtbl *)&bdRegisterDedicatedServerRequest::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x80ui64);
  memset_0(this->m_addr, 0, sizeof(this->m_addr));
  *(_QWORD *)this->m_secID = 0i64;
  *(_QWORD *)this->m_addr = 0i64;
  *(_QWORD *)&this->m_addr[8] = 0i64;
  memset_0(this->m_serverJsonData, 0, 0x440ui64);
}

/*
==============
bdRegisterDedicatedServerRequest::deserialize
==============
*/
bool bdRegisterDedicatedServerRequest::deserialize(bdRegisterDedicatedServerRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdserverinventory\\bdregisterdedicatedserverrequest.cpp", "bdRegisterDedicatedServerRequest::deserialize", 0x4Cu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdRegisterDedicatedServerRequest::init
==============
*/
void bdRegisterDedicatedServerRequest::init(bdRegisterDedicatedServerRequest *this, const char *const buildName, const char *const dataCenter, const unsigned __int8 *addr, bdSecurityID secID, bdSecurityKey *secKey, const unsigned int registrationTimeout, const char *const serverJsonData, const char *const context, const unsigned int priority)
{
  _RDI = addr;
  _RBP = this;
  _R14 = secID;
  _R15 = secKey;
  bdStrlcpy((char *const)&this->__vftable + 16, buildName, 0x40ui64);
  bdStrlcpy(_RBP->m_datacenter, dataCenter, 0x40ui64);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbp+90h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbp+0B0h], ymm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbp+0D0h], xmm0
  }
  *(_DWORD *)&_RBP->m_addr[80] = *((_DWORD *)_RDI + 20);
  __asm
  {
    vmovsd  xmm0, qword ptr [r14]
    vmovsd  qword ptr [rbp+0E4h], xmm0
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rbp+0ECh], xmm0
  }
  _RBP->m_registrationTimeout = registrationTimeout;
  bdStrlcpy(_RBP->m_serverJsonData, serverJsonData, 0x400ui64);
  if ( context )
    bdStrlcpy(_RBP->m_context, context, 0x40ui64);
  _RBP->m_priority = priority;
  bdSecurityID::~bdSecurityID(*(bdSecurityID **)&secID);
  bdSecurityKey::~bdSecurityKey(secKey);
}

/*
==============
bdRegisterDedicatedServerRequest::serialize
==============
*/
bool bdRegisterDedicatedServerRequest::serialize(bdRegisterDedicatedServerRequest *this, bdStructBufferSerializer *serializer)
{
  bool v4; 
  unsigned int m_priority; 

  v4 = bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x40u) && bdStructBufferSerializer::writeString(serializer, 2u, this->m_datacenter, 0x40u) && bdStructBufferSerializer::writeBlob(serializer, 3u, this->m_addr, 0x54u) && bdStructBufferSerializer::writeBlob(serializer, 4u, this->m_secID, 8u) && bdStructBufferSerializer::writeBlob(serializer, 5u, this->m_secKey, 0x10u) && bdStructBufferSerializer::writeUInt32(serializer, 6u, this->m_registrationTimeout) && bdStructBufferSerializer::writeString(serializer, 7u, this->m_serverJsonData, 0x400u);
  if ( strncmp(this->m_context, (const char *)&queryFormat.fmt + 3, 0x40ui64) )
    v4 = v4 && bdStructBufferSerializer::writeString(serializer, 9u, this->m_context, 0x40u);
  m_priority = this->m_priority;
  if ( !m_priority )
    return v4;
  return v4 && bdStructBufferSerializer::writeUInt32(serializer, 0xAu, m_priority);
}

