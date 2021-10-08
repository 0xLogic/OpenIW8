/*
==============
bdChannelUnsubscribeFromCategoryRequest::serialize
==============
*/

bool __fastcall bdChannelUnsubscribeFromCategoryRequest::serialize(bdChannelUnsubscribeFromCategoryRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelUnsubscribeFromCategoryRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
GeneralChannelRequest::serialize
==============
*/

bool __fastcall GeneralChannelRequest::serialize(GeneralChannelRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@GeneralChannelRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelPromoteUserRequest::bdChannelPromoteUserRequest
==============
*/

void __fastcall bdChannelPromoteUserRequest::bdChannelPromoteUserRequest(bdChannelPromoteUserRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID)
{
  ??0bdChannelPromoteUserRequest@@QEAA@QEBD_K1@Z(this, category, channelID, userID);
}

/*
==============
bdChannelKickUserRequest::serialize
==============
*/

bool __fastcall bdChannelKickUserRequest::serialize(bdChannelKickUserRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelKickUserRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelGetChannelInfosRequest::serialize
==============
*/

bool __fastcall bdChannelGetChannelInfosRequest::serialize(bdChannelGetChannelInfosRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelGetChannelInfosRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelGetChannelMembersRequest::bdChannelGetChannelMembersRequest
==============
*/

void __fastcall bdChannelGetChannelMembersRequest::bdChannelGetChannelMembersRequest(bdChannelGetChannelMembersRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned int maxNumResult)
{
  ??0bdChannelGetChannelMembersRequest@@QEAA@QEBD_KI@Z(this, category, channelID, maxNumResult);
}

/*
==============
bdChannelKickUserRequest::bdChannelKickUserRequest
==============
*/

void __fastcall bdChannelKickUserRequest::bdChannelKickUserRequest(bdChannelKickUserRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan)
{
  ??0bdChannelKickUserRequest@@QEAA@QEBD_K1I_N@Z(this, category, channelID, userID, kickReason, alsoBan);
}

/*
==============
GeneralChannelRequest::GeneralChannelRequest
==============
*/

void __fastcall GeneralChannelRequest::GeneralChannelRequest(GeneralChannelRequest *this, const GeneralChannelRequest *__that)
{
  ??0GeneralChannelRequest@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdChannelSendMessageRequest::~bdChannelSendMessageRequest
==============
*/

void __fastcall bdChannelSendMessageRequest::~bdChannelSendMessageRequest(bdChannelSendMessageRequest *this)
{
  ??1bdChannelSendMessageRequest@@UEAA@XZ(this);
}

/*
==============
bdChannelGetChannelMembersRequest::serialize
==============
*/

bool __fastcall bdChannelGetChannelMembersRequest::serialize(bdChannelGetChannelMembersRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelGetChannelMembersRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelSendMessageRequest::bdChannelSendMessageRequest
==============
*/

void __fastcall bdChannelSendMessageRequest::bdChannelSendMessageRequest(bdChannelSendMessageRequest *this, const char *const category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  ??0bdChannelSendMessageRequest@@QEAA@QEBD_KQEBXII@Z(this, category, channelID, message, messageSize, messageType);
}

/*
==============
bdChannelGetChannelInfosRequest::addChannel
==============
*/

bdChannelGetChannelInfosRequest *__fastcall bdChannelGetChannelInfosRequest::addChannel(bdChannelGetChannelInfosRequest *this, const char *const category, const unsigned __int64 channelID)
{
  return ?addChannel@bdChannelGetChannelInfosRequest@@QEAAAEAV1@QEBD_K@Z(this, category, channelID);
}

/*
==============
bdChannelUnsubscribeFromCategoryRequest::bdChannelUnsubscribeFromCategoryRequest
==============
*/

void __fastcall bdChannelUnsubscribeFromCategoryRequest::bdChannelUnsubscribeFromCategoryRequest(bdChannelUnsubscribeFromCategoryRequest *this, const char *const category)
{
  ??0bdChannelUnsubscribeFromCategoryRequest@@QEAA@QEBD@Z(this, category);
}

/*
==============
bdChannelWisperMessageRequest::bdChannelWisperMessageRequest
==============
*/

void __fastcall bdChannelWisperMessageRequest::bdChannelWisperMessageRequest(bdChannelWisperMessageRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  ??0bdChannelWisperMessageRequest@@QEAA@QEBD_K1QEBXII@Z(this, category, channelID, userID, message, messageSize, messageType);
}

/*
==============
bdChannelWisperMessageRequest::serialize
==============
*/

bool __fastcall bdChannelWisperMessageRequest::serialize(bdChannelWisperMessageRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelWisperMessageRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelSendMessageRequest::serialize
==============
*/

bool __fastcall bdChannelSendMessageRequest::serialize(bdChannelSendMessageRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelSendMessageRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest
==============
*/

void __fastcall bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest(bdChannelSetChannelPasswordRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 newPassword)
{
  ??0bdChannelSetChannelPasswordRequest@@QEAA@QEBD_K1@Z(this, category, channelID, newPassword);
}

/*
==============
GeneralChannelRequest::GeneralChannelRequest
==============
*/

void __fastcall GeneralChannelRequest::GeneralChannelRequest(GeneralChannelRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password)
{
  ??0GeneralChannelRequest@@QEAA@QEBD_K1@Z(this, category, channelID, password);
}

/*
==============
bdChannelWisperMessageRequest::~bdChannelWisperMessageRequest
==============
*/

void __fastcall bdChannelWisperMessageRequest::~bdChannelWisperMessageRequest(bdChannelWisperMessageRequest *this)
{
  ??1bdChannelWisperMessageRequest@@UEAA@XZ(this);
}

/*
==============
bdChannelSetChannelPasswordRequest::serialize
==============
*/

bool __fastcall bdChannelSetChannelPasswordRequest::serialize(bdChannelSetChannelPasswordRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelSetChannelPasswordRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdChannelPromoteUserRequest::serialize
==============
*/

bool __fastcall bdChannelPromoteUserRequest::serialize(bdChannelPromoteUserRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdChannelPromoteUserRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
GeneralChannelRequest::GeneralChannelRequest
==============
*/
void GeneralChannelRequest::GeneralChannelRequest(GeneralChannelRequest *this, const GeneralChannelRequest *__that, int a3)
{
  _RDI = __that;
  _RBX = this;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &GeneralChannelRequest::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_password + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(_RBX, _RDI);
  _RBX->__vftable = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdStructBufferSerializable'};
  *(GeneralChannelRequest_vtbl **)((char *)&_RBX->__vftable + *(int *)(*((_QWORD *)&_RBX->__vftable + 1) + 4i64) + 8) = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdReferencable'};
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10h]
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  _RBX->m_channelID = _RDI->m_channelID;
  _RBX->m_password = _RDI->m_password;
}

/*
==============
GeneralChannelRequest::GeneralChannelRequest
==============
*/
void GeneralChannelRequest::GeneralChannelRequest(GeneralChannelRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &GeneralChannelRequest::`vbtable';
    *(&this->m_password + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_password + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdStructBufferSerializable'};
  *(GeneralChannelRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_password = password;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelGetChannelMembersRequest::bdChannelGetChannelMembersRequest
==============
*/
void bdChannelGetChannelMembersRequest::bdChannelGetChannelMembersRequest(bdChannelGetChannelMembersRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned int maxNumResult, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelGetChannelMembersRequest::`vbtable';
    *((_QWORD *)&this->m_maxNumResult + 1) = &bdReferencable::`vftable';
    *(&this->m_maxNumResult + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelGetChannelMembersRequest_vtbl *)&bdChannelGetChannelMembersRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelGetChannelMembersRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelGetChannelMembersRequest_vtbl *)&bdChannelGetChannelMembersRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_maxNumResult = maxNumResult;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelKickUserRequest::bdChannelKickUserRequest
==============
*/
void bdChannelKickUserRequest::bdChannelKickUserRequest(bdChannelKickUserRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan, int a7)
{
  if ( a7 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelKickUserRequest::`vbtable';
    *(_QWORD *)&this->gap35[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap35[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelKickUserRequest_vtbl *)&bdChannelKickUserRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelKickUserRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelKickUserRequest_vtbl *)&bdChannelKickUserRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_kickedUser = userID;
  this->m_kickReason = kickReason;
  this->m_alsoBan = alsoBan;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelPromoteUserRequest::bdChannelPromoteUserRequest
==============
*/
void bdChannelPromoteUserRequest::bdChannelPromoteUserRequest(bdChannelPromoteUserRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelPromoteUserRequest::`vbtable';
    *(&this->m_newAdmin + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_newAdmin + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelPromoteUserRequest_vtbl *)&bdChannelPromoteUserRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelPromoteUserRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelPromoteUserRequest_vtbl *)&bdChannelPromoteUserRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_newAdmin = userID;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelSendMessageRequest::bdChannelSendMessageRequest
==============
*/
void bdChannelSendMessageRequest::bdChannelSendMessageRequest(bdChannelSendMessageRequest *this, const char *const category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType, int a7)
{
  unsigned __int8 *v11; 

  if ( a7 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelSendMessageRequest::`vbtable';
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelSendMessageRequest_vtbl *)&bdChannelSendMessageRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelSendMessageRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelSendMessageRequest_vtbl *)&bdChannelSendMessageRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_messageType = messageType;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
  this->m_messageSize = messageSize;
  v11 = (unsigned __int8 *)bdMemory::allocate(messageSize);
  this->m_message = v11;
  memcpy_0(v11, message, this->m_messageSize);
}

/*
==============
bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest
==============
*/
void bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest(bdChannelSetChannelPasswordRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 newPassword, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelSetChannelPasswordRequest::`vbtable';
    *(&this->m_password + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_password + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelSetChannelPasswordRequest_vtbl *)&bdChannelSetChannelPasswordRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelSetChannelPasswordRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelSetChannelPasswordRequest_vtbl *)&bdChannelSetChannelPasswordRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_password = newPassword;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelUnsubscribeFromCategoryRequest::bdChannelUnsubscribeFromCategoryRequest
==============
*/
void bdChannelUnsubscribeFromCategoryRequest::bdChannelUnsubscribeFromCategoryRequest(bdChannelUnsubscribeFromCategoryRequest *this, const char *const category, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelUnsubscribeFromCategoryRequest::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelUnsubscribeFromCategoryRequest_vtbl *)&bdChannelUnsubscribeFromCategoryRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelUnsubscribeFromCategoryRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelUnsubscribeFromCategoryRequest_vtbl *)&bdChannelUnsubscribeFromCategoryRequest::`vftable'{for `bdReferencable'};
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
}

/*
==============
bdChannelWisperMessageRequest::bdChannelWisperMessageRequest
==============
*/
void bdChannelWisperMessageRequest::bdChannelWisperMessageRequest(bdChannelWisperMessageRequest *this, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType, int a8)
{
  unsigned __int8 *v12; 

  if ( a8 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelWisperMessageRequest::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelWisperMessageRequest_vtbl *)&bdChannelWisperMessageRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelWisperMessageRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelWisperMessageRequest_vtbl *)&bdChannelWisperMessageRequest::`vftable'{for `bdReferencable'};
  this->m_channelID = channelID;
  this->m_userID = userID;
  this->m_messageType = messageType;
  bdStrlcpy((char *const)&this->__vftable + 16, category, 0x10ui64);
  this->m_messageSize = messageSize;
  v12 = (unsigned __int8 *)bdMemory::allocate(messageSize);
  this->m_message = v12;
  memcpy_0(v12, message, this->m_messageSize);
}

/*
==============
bdChannelSendMessageRequest::~bdChannelSendMessageRequest
==============
*/
void bdChannelSendMessageRequest::~bdChannelSendMessageRequest(bdChannelSendMessageRequest *this)
{
  void *v2; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdChannelSendMessageRequest::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 48) = &bdChannelSendMessageRequest::`vftable'{for `bdReferencable'};
  v2 = *(void **)this[-1].gap38;
  if ( v2 )
    bdMemory::deallocate(v2);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdChannelSendMessageRequest *)((char *)this - 40));
}

/*
==============
bdChannelWisperMessageRequest::~bdChannelWisperMessageRequest
==============
*/
void bdChannelWisperMessageRequest::~bdChannelWisperMessageRequest(bdChannelWisperMessageRequest *this)
{
  void *v2; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdChannelWisperMessageRequest::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 56) = &bdChannelWisperMessageRequest::`vftable'{for `bdReferencable'};
  v2 = *(void **)this[-1].gap40;
  if ( v2 )
    bdMemory::deallocate(v2);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdChannelWisperMessageRequest *)((char *)this - 48));
}

/*
==============
bdChannelGetChannelInfosRequest::addChannel
==============
*/
bdChannelGetChannelInfosRequest *bdChannelGetChannelInfosRequest::addChannel(bdChannelGetChannelInfosRequest *this, const char *const category, const unsigned __int64 channelID)
{
  GeneralChannelRequest value; 

  *((_QWORD *)&value.__vftable + 1) = &GeneralChannelRequest::`vbtable';
  *(&value.m_password + 1) = (unsigned __int64)&bdReferencable::`vftable';
  *((_DWORD *)&value.m_password + 4) = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&value);
  value.__vftable = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdStructBufferSerializable'};
  *(GeneralChannelRequest_vtbl **)((char *)&value.__vftable + *(int *)(*((_QWORD *)&value.__vftable + 1) + 4i64) + 8) = (GeneralChannelRequest_vtbl *)&GeneralChannelRequest::`vftable'{for `bdReferencable'};
  value.m_channelID = channelID;
  value.m_password = 0i64;
  bdStrlcpy((char *const)&value.__vftable + 16, category, 0x10ui64);
  bdArray<GeneralChannelRequest>::pushBack((bdArray<GeneralChannelRequest> *)(&this->__vftable + 3), &value);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&value.m_password + 1));
  ++*((_DWORD *)&this->__vftable + 4);
  return this;
}

/*
==============
GeneralChannelRequest::serialize
==============
*/
bool GeneralChannelRequest::serialize(GeneralChannelRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_password);
}

/*
==============
bdChannelGetChannelInfosRequest::serialize
==============
*/
bool bdChannelGetChannelInfosRequest::serialize(bdChannelGetChannelInfosRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int v2; 
  unsigned int v3; 
  bool result; 

  v2 = *((_DWORD *)&this->__vftable + 4);
  v3 = 0;
  result = 1;
  if ( !v2 )
    return 1;
  do
  {
    result = result && (bdHandleAssert(v3 < *(_DWORD *)&this->m_channels[4], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class GeneralChannelRequest>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(*((_QWORD *)&this->__vftable + 3) + ((unsigned __int64)v3 << 6))));
    ++v3;
  }
  while ( v3 < v2 );
  if ( result )
    return 1;
  return result;
}

/*
==============
bdChannelGetChannelMembersRequest::serialize
==============
*/
bool bdChannelGetChannelMembersRequest::serialize(bdChannelGetChannelMembersRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt32(serializer, 3u, this->m_maxNumResult);
}

/*
==============
bdChannelKickUserRequest::serialize
==============
*/
bool bdChannelKickUserRequest::serialize(bdChannelKickUserRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_kickedUser) && bdStructBufferSerializer::writeUInt32(serializer, 4u, this->m_kickReason) && bdStructBufferSerializer::writeBool(serializer, 5u, this->m_alsoBan);
}

/*
==============
bdChannelPromoteUserRequest::serialize
==============
*/
bool bdChannelPromoteUserRequest::serialize(bdChannelPromoteUserRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_newAdmin);
}

/*
==============
bdChannelSendMessageRequest::serialize
==============
*/
bool bdChannelSendMessageRequest::serialize(bdChannelSendMessageRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeBlob(serializer, 3u, this->m_message, this->m_messageSize) && bdStructBufferSerializer::writeUInt32(serializer, 4u, this->m_messageType);
}

/*
==============
bdChannelSetChannelPasswordRequest::serialize
==============
*/
bool bdChannelSetChannelPasswordRequest::serialize(bdChannelSetChannelPasswordRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_password);
}

/*
==============
bdChannelUnsubscribeFromCategoryRequest::serialize
==============
*/
bool bdChannelUnsubscribeFromCategoryRequest::serialize(bdChannelUnsubscribeFromCategoryRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u);
}

/*
==============
bdChannelWisperMessageRequest::serialize
==============
*/
bool bdChannelWisperMessageRequest::serialize(bdChannelWisperMessageRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 2u, this->m_channelID) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_userID) && bdStructBufferSerializer::writeBlob(serializer, 4u, this->m_message, this->m_messageSize) && bdStructBufferSerializer::writeUInt32(serializer, 5u, this->m_messageType);
}

