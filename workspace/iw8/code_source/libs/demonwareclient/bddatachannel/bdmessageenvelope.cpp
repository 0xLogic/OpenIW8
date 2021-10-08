/*
==============
bdSchemaInfo::bdSchemaInfo
==============
*/

void __fastcall bdSchemaInfo::bdSchemaInfo(bdSchemaInfo *this, const char *const guid, unsigned int guidSize)
{
  ??0bdSchemaInfo@@QEAA@QEBCI@Z(this, guid, guidSize);
}

/*
==============
bdMessageEnvelopeV2::bdMessageEnvelopeV2
==============
*/

void __fastcall bdMessageEnvelopeV2::bdMessageEnvelopeV2(bdMessageEnvelopeV2 *this)
{
  ??0bdMessageEnvelopeV2@@IEAA@XZ(this);
}

/*
==============
bdMessageEnvelopeV2::serialize
==============
*/

bool __fastcall bdMessageEnvelopeV2::serialize(bdMessageEnvelopeV2 *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdMessageEnvelopeV2@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdMessageEnvelopeV2::toString
==============
*/

bdString *__fastcall bdMessageEnvelopeV2::toString(bdMessageEnvelopeV2 *this, bdString *result)
{
  return ?toString@bdMessageEnvelopeV2@@UEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdSchemaInfo::deserialize
==============
*/

bool __fastcall bdSchemaInfo::deserialize(bdSchemaInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdSchemaInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdMessageEnvelope::getMaxBaseByteSize
==============
*/

unsigned int __fastcall bdMessageEnvelope::getMaxBaseByteSize()
{
  return ?getMaxBaseByteSize@bdMessageEnvelope@@SAIXZ();
}

/*
==============
bdSchemaInfo::bdSchemaInfo
==============
*/

void __fastcall bdSchemaInfo::bdSchemaInfo(bdSchemaInfo *this)
{
  ??0bdSchemaInfo@@QEAA@XZ(this);
}

/*
==============
toString
==============
*/

void __fastcall toString(const hkMpUint *bi, unsigned int base, hkStringBuf *stringOut)
{
  ?toString@@YAXAEBUhkMpUint@@IAEAVhkStringBuf@@@Z(bi, base, stringOut);
}

/*
==============
bdMessageEnvelopeBase::bdMessageEnvelopeBase
==============
*/

void __fastcall bdMessageEnvelopeBase::bdMessageEnvelopeBase(bdMessageEnvelopeBase *this, unsigned __int64 titleId, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  ??0bdMessageEnvelopeBase@@QEAA@_K0QEAEQEBDQEBCI1IW4bdMsgSerializationType@0@W4bdMsgCompressionType@0@@Z(this, titleId, createTime, msgEnvelopeId, msgName, msgSchemaGuid, msgSchemaGuidSize, msgData, msgDataSize, msgSerializationType, msgCompressionType);
}

/*
==============
toString
==============
*/

void __fastcall toString(const hkMpRational *rat, unsigned int base, hkStringBuf *stringOut)
{
  ?toString@@YAXAEBUhkMpRational@@IAEAVhkStringBuf@@@Z(rat, base, stringOut);
}

/*
==============
bdMessageEnvelopeBase::bdMessageEnvelopeBase
==============
*/

void __fastcall bdMessageEnvelopeBase::bdMessageEnvelopeBase(bdMessageEnvelopeBase *this)
{
  ??0bdMessageEnvelopeBase@@IEAA@XZ(this);
}

/*
==============
bdMessageEnvelopeV2::operator==
==============
*/

bool __fastcall bdMessageEnvelopeV2::operator==(bdMessageEnvelopeV2 *this, const bdMessageEnvelopeV2 *rhs)
{
  return ??8bdMessageEnvelopeV2@@UEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdMessageEnvelope::toString
==============
*/

bdString *__fastcall bdMessageEnvelope::toString(bdMessageEnvelope *this, bdString *result)
{
  return ?toString@bdMessageEnvelope@@UEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdMessageEnvelopeV2::bdMessageEnvelopeV2
==============
*/

void __fastcall bdMessageEnvelopeV2::bdMessageEnvelopeV2(bdMessageEnvelopeV2 *this, unsigned __int64 titleId, const bdDataChannelUserInfoV2 *userInfo, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  ??0bdMessageEnvelopeV2@@QEAA@_KAEBVbdDataChannelUserInfoV2@@0QEAEQEBDQEBCI2IW4bdMsgSerializationType@bdMessageEnvelopeBase@@W4bdMsgCompressionType@3@@Z(this, titleId, userInfo, createTime, msgEnvelopeId, msgName, msgSchemaGuid, msgSchemaGuidSize, msgData, msgDataSize, msgSerializationType, msgCompressionType);
}

/*
==============
bdMessageEnvelope::serialize
==============
*/

bool __fastcall bdMessageEnvelope::serialize(bdMessageEnvelope *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdMessageEnvelope@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdMessageEnvelope::operator==
==============
*/

bool __fastcall bdMessageEnvelope::operator==(bdMessageEnvelope *this, const bdMessageEnvelope *rhs)
{
  return ??8bdMessageEnvelope@@UEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdMessageEnvelope::bdMessageEnvelope
==============
*/

void __fastcall bdMessageEnvelope::bdMessageEnvelope(bdMessageEnvelope *this, unsigned __int64 titleId, unsigned __int64 userId, const char *const userAcctType, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  ??0bdMessageEnvelope@@QEAA@_K0QEBD0QEAE1QEBCI2IW4bdMsgSerializationType@bdMessageEnvelopeBase@@W4bdMsgCompressionType@2@@Z(this, titleId, userId, userAcctType, createTime, msgEnvelopeId, msgName, msgSchemaGuid, msgSchemaGuidSize, msgData, msgDataSize, msgSerializationType, msgCompressionType);
}

/*
==============
bdMessageEnvelopeV2::getMaxBaseByteSize
==============
*/

unsigned int __fastcall bdMessageEnvelopeV2::getMaxBaseByteSize()
{
  return ?getMaxBaseByteSize@bdMessageEnvelopeV2@@SAIXZ();
}

/*
==============
bdSchemaInfo::serialize
==============
*/

bool __fastcall bdSchemaInfo::serialize(bdSchemaInfo *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdSchemaInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdMessageEnvelope::bdMessageEnvelope
==============
*/

void __fastcall bdMessageEnvelope::bdMessageEnvelope(bdMessageEnvelope *this)
{
  ??0bdMessageEnvelope@@IEAA@XZ(this);
}

/*
==============
bdMessageEnvelopeBase::deserialize
==============
*/

bool __fastcall bdMessageEnvelopeBase::deserialize(bdMessageEnvelopeBase *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdMessageEnvelopeBase@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
toString
==============
*/

const char *__fastcall toString(bdTask::bdStatus taskStatus)
{
  return ?toString@@YAPEBDW4bdStatus@bdTask@@@Z(taskStatus);
}

/*
==============
toString
==============
*/
void toString(const hkMpRational *rat, unsigned int base, hkStringBuf *stringOut)
{
  const char *v6; 
  hkStringBuf v7; 
  hkStringBuf stringOuta; 

  stringOuta.m_string.m_capacityAndFlags = -2147483520;
  stringOuta.m_string.m_size = 1;
  stringOuta.m_string.m_data = (char *)&stringOuta.m_string.m_storage;
  stringOuta.m_string.m_storage.m_storage.m_storage[0] = 0;
  toString(&rat->m_num, base, &stringOuta);
  v7.m_string.m_capacityAndFlags = -2147483520;
  v7.m_string.m_data = (char *)&v7.m_string.m_storage;
  v7.m_string.m_size = 1;
  v7.m_string.m_storage.m_storage.m_storage[0] = 0;
  toString(&rat->m_den, base, &v7);
  v6 = (char *)&queryFormat.fmt + 3;
  if ( rat->m_signed )
    v6 = "-";
  hkStringBuf::printf(stringOut, "%s%s/%s", v6, stringOuta.m_string.m_data, v7.m_string.m_data);
  v7.m_string.m_size = 0;
  if ( v7.m_string.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v7.m_string.m_data, 1, v7.m_string.m_capacityAndFlags & 0x3FFFFFFF);
  v7.m_string.m_data = NULL;
  v7.m_string.m_capacityAndFlags = 0x80000000;
  stringOuta.m_string.m_size = 0;
  if ( stringOuta.m_string.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, stringOuta.m_string.m_data, 1, stringOuta.m_string.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
toString
==============
*/
void toString(const hkMpUint *bi, unsigned int base, hkStringBuf *stringOut)
{
  hkMemoryAllocator *v5; 
  int v6; 
  unsigned __int64 v7; 
  int v8; 
  unsigned __int64 v9; 
  int v10; 
  hkMemoryAllocator *v11; 
  int m_size; 
  int v13; 
  __int64 v14; 
  unsigned int *m_data; 
  hkMemoryAllocator *v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int *v20; 
  __int64 v21; 
  signed __int64 v22; 
  unsigned int v23; 
  hkMemoryAllocator *v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  char v29; 
  char *v30; 
  int v31; 
  hkMemoryAllocator *v32; 
  hkMemoryAllocator *v33; 
  hkMemoryAllocator *v34; 
  hkMemoryAllocator *v35; 
  hkMpUint bi0; 
  hkMpUint bi1; 
  hkMpUint rOut; 
  char *array; 
  int len; 
  int v41; 
  char v42; 

  array = &v42;
  len = 0;
  v41 = -2147483616;
  if ( bi->m_atoms.m_size )
  {
    v7 = base;
    bi1.m_atoms.m_data = NULL;
    bi1.m_atoms.m_capacityAndFlags = 0x80000000;
    hkMemHeapAllocator();
    bi1.m_atoms.m_size = 0;
    if ( v7 )
    {
      do
      {
        v8 = (unsigned __int16)v7;
        v9 = v7 >> 16;
        v7 >>= 32;
        v10 = v8 | ((_DWORD)v9 << 16);
        v11 = hkMemHeapAllocator();
        m_size = bi1.m_atoms.m_size;
        if ( bi1.m_atoms.m_size == (bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v11, &bi1, 4);
          m_size = bi1.m_atoms.m_size;
        }
        bi1.m_atoms.m_data[m_size] = v10;
        ++bi1.m_atoms.m_size;
      }
      while ( v9 >= 0x10000 );
    }
    bi0.m_atoms.m_data = NULL;
    bi0.m_atoms.m_size = 0;
    v13 = 0;
    bi0.m_atoms.m_capacityAndFlags = 0x80000000;
    if ( &bi0 != bi )
    {
      v14 = bi->m_atoms.m_size;
      m_data = bi->m_atoms.m_data;
      v16 = hkMemHeapAllocator();
      v17 = bi0.m_atoms.m_size;
      v13 = bi0.m_atoms.m_size + v14;
      if ( bi0.m_atoms.m_size + (int)v14 > (bi0.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        v18 = 2 * (bi0.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
        v19 = bi0.m_atoms.m_size + v14;
        if ( (unsigned int)v18 >= 0x3FFFFFFF )
          v18 = 1073741822;
        if ( v13 < v18 )
          v19 = v18;
        hkArrayUtil::_reserve(v16, &bi0, v19, 4);
        v17 = bi0.m_atoms.m_size;
      }
      v20 = &bi0.m_atoms.m_data[v17];
      v21 = v14;
      if ( (int)v14 > 0 )
      {
        v22 = (char *)m_data - (char *)v20;
        do
        {
          *v20 = *(unsigned int *)((char *)v20 + v22);
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      bi0.m_atoms.m_size = v13;
    }
    rOut.m_atoms.m_data = NULL;
    rOut.m_atoms.m_size = 0;
    rOut.m_atoms.m_capacityAndFlags = 0x80000000;
    if ( v13 )
    {
      do
      {
        div(&bi0, &bi1, &bi0, &rOut);
        if ( rOut.m_atoms.m_size )
          v23 = *rOut.m_atoms.m_data;
        else
          v23 = 0;
        v24 = hkMemHeapAllocator();
        v25 = len;
        if ( len == (v41 & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v24, &array, 1);
          v25 = len;
        }
        array[v25] = hkMpMath_digits[v23];
        v26 = ++len;
      }
      while ( bi0.m_atoms.m_size );
    }
    else
    {
      v26 = len;
    }
    v27 = 0;
    if ( v26 >= 0 && (v26 & 0xFFFFFFFE) != 0 )
    {
      v28 = 0i64;
      do
      {
        v29 = array[v28];
        v30 = &array[v28++];
        *v30 = array[v26 - v27 - 1];
        v31 = len - v27++;
        array[v31 - 1] = v29;
        v26 = len;
      }
      while ( v27 < len >> 1 );
    }
    v32 = hkMemHeapAllocator();
    rOut.m_atoms.m_size = 0;
    if ( rOut.m_atoms.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v32, rOut.m_atoms.m_data, 4, rOut.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
    rOut.m_atoms.m_data = NULL;
    rOut.m_atoms.m_capacityAndFlags = 0x80000000;
    v33 = hkMemHeapAllocator();
    bi0.m_atoms.m_size = 0;
    if ( bi0.m_atoms.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v33, bi0.m_atoms.m_data, 4, bi0.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
    bi0.m_atoms.m_data = NULL;
    bi0.m_atoms.m_capacityAndFlags = 0x80000000;
    v34 = hkMemHeapAllocator();
    bi1.m_atoms.m_size = 0;
    if ( bi1.m_atoms.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v34, bi1.m_atoms.m_data, 4, bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
    v5 = hkMemHeapAllocator();
    v6 = len;
    if ( len == (v41 & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v5, &array, 1);
      v6 = len;
    }
    array[v6] = 48;
    ++len;
  }
  hkStringBuf::set(stringOut, array, len);
  v35 = hkMemHeapAllocator();
  len = 0;
  if ( v41 >= 0 )
    hkMemoryAllocator::bufFree2(v35, array, 1, v41 & 0x3FFFFFFF);
}

/*
==============
bdMessageEnvelope::bdMessageEnvelope
==============
*/
void bdMessageEnvelope::bdMessageEnvelope(bdMessageEnvelope *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessageEnvelope::`vbtable';
    *(_QWORD *)this->gap118 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap118[8] = 0;
  }
  bdMessageEnvelopeBase::bdMessageEnvelopeBase(this);
  this->__vftable = (bdMessageEnvelope_vtbl *)&bdMessageEnvelope::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelope_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelope_vtbl *)&bdMessageEnvelope::`vftable'{for `bdReferencable'};
  bdDataChannelUserInfoV1::bdDataChannelUserInfoV1((bdDataChannelUserInfoV1 *)this->gapC8);
}

/*
==============
bdMessageEnvelope::bdMessageEnvelope
==============
*/
void bdMessageEnvelope::bdMessageEnvelope(bdMessageEnvelope *this, unsigned __int64 titleId, unsigned __int64 userId, const char *const userAcctType, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType, int a14)
{
  unsigned __int64 v17; 

  if ( a14 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessageEnvelope::`vbtable';
    *(_QWORD *)this->gap118 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap118[8] = 0;
  }
  bdMessageEnvelopeBase::bdMessageEnvelopeBase(this, titleId, createTime, msgEnvelopeId, msgName, msgSchemaGuid, msgSchemaGuidSize, msgData, msgDataSize, msgSerializationType, msgCompressionType);
  this->__vftable = (bdMessageEnvelope_vtbl *)&bdMessageEnvelope::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelope_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelope_vtbl *)&bdMessageEnvelope::`vftable'{for `bdReferencable'};
  bdDataChannelUserInfoV1::bdDataChannelUserInfoV1((bdDataChannelUserInfoV1 *)this->gapC8, userId, userAcctType);
  bdHandleAssert(userAcctType != NULL, "userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelope::bdMessageEnvelope", 0x80u, "The 'userAcctType' must not be null.");
  bdHandleAssert(userAcctType != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v17 = -1i64;
  do
    ++v17;
  while ( userAcctType[v17] );
  bdHandleAssert(v17 < 0x20, "bdStrlen(userAcctType) < BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelope::bdMessageEnvelope", 0x82u, "The 'userAcctType' must not be longer than 32 in length.");
}

/*
==============
bdMessageEnvelopeBase::bdMessageEnvelopeBase
==============
*/
void bdMessageEnvelopeBase::bdMessageEnvelopeBase(bdMessageEnvelopeBase *this)
{
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMessageEnvelopeBase_vtbl *)&bdMessageEnvelopeBase::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelopeBase_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelopeBase_vtbl *)&bdMessageEnvelopeBase::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_dataSize = 128;
  *((_QWORD *)&this->m_msgSchema.__vftable + 1) = &bdSchemaInfo::`vbtable';
  *(_QWORD *)&this->m_msgSchema.gap34[4] = &bdReferencable::`vftable';
  *(_DWORD *)&this->m_msgSchema.gap34[12] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_msgSchema);
  this->m_msgSchema.__vftable = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdSchemaInfo_vtbl **)((char *)&this->m_msgSchema.__vftable + *(int *)(*((_QWORD *)&this->m_msgSchema.__vftable + 1) + 4i64) + 8) = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->m_msgSchema.__vftable + 2) = 0i64;
  *((_QWORD *)&this->m_msgSchema.__vftable + 3) = 0i64;
  *(_QWORD *)this->m_msgSchema.m_guid = 0i64;
  *(_QWORD *)&this->m_msgSchema.m_guid[8] = 0i64;
  *(_QWORD *)&this->m_msgSerializationType = 0i64;
  this->m_msgData = NULL;
  *(_QWORD *)this->m_msgName = 0i64;
  *(_QWORD *)&this->m_msgName[8] = 0i64;
  *(_QWORD *)&this->m_msgName[16] = 0i64;
  *(_QWORD *)&this->m_msgName[24] = 0i64;
  *(_QWORD *)&this->m_msgName[32] = 0i64;
  *(_QWORD *)&this->m_msgName[40] = 0i64;
  *(_QWORD *)&this->m_msgName[48] = 0i64;
  *(_QWORD *)&this->m_msgName[56] = 0i64;
  this->m_msgEnvelopeId = NULL;
}

/*
==============
bdMessageEnvelopeBase::bdMessageEnvelopeBase
==============
*/
void bdMessageEnvelopeBase::bdMessageEnvelopeBase(bdMessageEnvelopeBase *this, unsigned __int64 titleId, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  _BYTE *v15; 
  unsigned __int64 v16; 

  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMessageEnvelopeBase_vtbl *)&bdMessageEnvelopeBase::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelopeBase_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelopeBase_vtbl *)&bdMessageEnvelopeBase::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = titleId;
  *((_QWORD *)&this->__vftable + 3) = createTime;
  this->m_msgEnvelopeId = msgEnvelopeId;
  this->m_msgData = msgData;
  this->m_dataSize = msgDataSize;
  *((_QWORD *)&this->m_msgSchema.__vftable + 1) = &bdSchemaInfo::`vbtable';
  *(_QWORD *)&this->m_msgSchema.gap34[4] = &bdReferencable::`vftable';
  *(_DWORD *)&this->m_msgSchema.gap34[12] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_msgSchema);
  this->m_msgSchema.__vftable = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdSchemaInfo_vtbl **)((char *)&this->m_msgSchema.__vftable + *(int *)(*((_QWORD *)&this->m_msgSchema.__vftable + 1) + 4i64) + 8) = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdReferencable'};
  this->m_msgSchema.m_guidSize = msgSchemaGuidSize;
  bdHandleAssert(&this->m_msgSchema.__vftable + 2 != NULL, "m_guid != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdSchemaInfo::bdSchemaInfo", 0x1Cu, "The message schema GUID must not be null.", -2i64);
  *((_QWORD *)&this->m_msgSchema.__vftable + 2) = 0i64;
  *((_QWORD *)&this->m_msgSchema.__vftable + 3) = 0i64;
  *(_QWORD *)this->m_msgSchema.m_guid = 0i64;
  *(_QWORD *)&this->m_msgSchema.m_guid[8] = 0i64;
  memcpy_0(&this->m_msgSchema.__vftable + 2, msgSchemaGuid, this->m_msgSchema.m_guidSize);
  this->m_msgSerializationType = msgSerializationType;
  this->m_msgCompressionType = msgCompressionType;
  bdHandleAssert(titleId != 0, "titleId > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelopeBase::bdMessageEnvelopeBase", 0x55u, "The 'titleId' must be valid and non-zero.");
  bdHandleAssert(msgName != NULL, "msgName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelopeBase::bdMessageEnvelopeBase", 0x57u, "The message name must not be null.");
  v15 = memchr_0(msgName, 0, 0x40ui64);
  v16 = 64i64;
  if ( v15 )
    v16 = v15 - msgName;
  bdHandleAssert(v16 < 0x40, "bdStrnlen(msgName, BD_DATACHANNEL_MAX_CATEGORY_LENGTH) < BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelopeBase::bdMessageEnvelopeBase", 0x59u, "The length of 'msgName' must not be longer than 64.");
  *(_QWORD *)this->m_msgName = 0i64;
  *(_QWORD *)&this->m_msgName[8] = 0i64;
  *(_QWORD *)&this->m_msgName[16] = 0i64;
  *(_QWORD *)&this->m_msgName[24] = 0i64;
  *(_QWORD *)&this->m_msgName[32] = 0i64;
  *(_QWORD *)&this->m_msgName[40] = 0i64;
  *(_QWORD *)&this->m_msgName[48] = 0i64;
  *(_QWORD *)&this->m_msgName[56] = 0i64;
  bdStrlcpy(this->m_msgName, msgName, 0x40ui64);
}

/*
==============
bdMessageEnvelopeV2::bdMessageEnvelopeV2
==============
*/
void bdMessageEnvelopeV2::bdMessageEnvelopeV2(bdMessageEnvelopeV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessageEnvelopeV2::`vbtable';
    *(_QWORD *)this->gap108 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap108[8] = 0;
  }
  bdMessageEnvelopeBase::bdMessageEnvelopeBase(this);
  this->__vftable = (bdMessageEnvelopeV2_vtbl *)&bdMessageEnvelopeV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelopeV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelopeV2_vtbl *)&bdMessageEnvelopeV2::`vftable'{for `bdReferencable'};
  bdDataChannelUserInfoV2::bdDataChannelUserInfoV2((bdDataChannelUserInfoV2 *)this->gapC8);
}

/*
==============
bdMessageEnvelopeV2::bdMessageEnvelopeV2
==============
*/
void bdMessageEnvelopeV2::bdMessageEnvelopeV2(bdMessageEnvelopeV2 *this, unsigned __int64 titleId, const bdDataChannelUserInfoV2 *userInfo, unsigned __int64 createTime, unsigned __int8 *const msgEnvelopeId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, unsigned __int8 *const msgData, unsigned int msgDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType, int a13)
{
  if ( a13 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessageEnvelopeV2::`vbtable';
    *(_QWORD *)this->gap108 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap108[8] = 0;
  }
  bdMessageEnvelopeBase::bdMessageEnvelopeBase(this, titleId, createTime, msgEnvelopeId, msgName, msgSchemaGuid, msgSchemaGuidSize, msgData, msgDataSize, msgSerializationType, msgCompressionType);
  this->__vftable = (bdMessageEnvelopeV2_vtbl *)&bdMessageEnvelopeV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMessageEnvelopeV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessageEnvelopeV2_vtbl *)&bdMessageEnvelopeV2::`vftable'{for `bdReferencable'};
  bdDataChannelUserInfoV2::bdDataChannelUserInfoV2((bdDataChannelUserInfoV2 *)this->gapC8, userInfo);
}

/*
==============
bdSchemaInfo::bdSchemaInfo
==============
*/
void bdSchemaInfo::bdSchemaInfo(bdSchemaInfo *this, const char *const guid, unsigned int guidSize, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSchemaInfo::`vbtable';
    *(_QWORD *)&this->gap34[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap34[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdSchemaInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdReferencable'};
  this->m_guidSize = guidSize;
  bdHandleAssert(&this->__vftable + 2 != NULL, "m_guid != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdSchemaInfo::bdSchemaInfo", 0x1Cu, "The message schema GUID must not be null.", -2i64);
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_guid = 0i64;
  *(_QWORD *)&this->m_guid[8] = 0i64;
  memcpy_0(&this->__vftable + 2, guid, this->m_guidSize);
}

/*
==============
bdSchemaInfo::bdSchemaInfo
==============
*/
void bdSchemaInfo::bdSchemaInfo(bdSchemaInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSchemaInfo::`vbtable';
    *(_QWORD *)&this->gap34[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap34[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdSchemaInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSchemaInfo_vtbl *)&bdSchemaInfo::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_guid = 0i64;
  *(_QWORD *)&this->m_guid[8] = 0i64;
}

/*
==============
bdMessageEnvelope::operator==
==============
*/
char bdMessageEnvelope::operator==(bdMessageEnvelope *this, const bdMessageEnvelope *rhs)
{
  char *m_msgName; 
  int v5; 
  int v6; 
  unsigned __int8 *m_msgEnvelopeId; 
  unsigned __int8 *v8; 
  unsigned int m_dataSize; 

  if ( *((_QWORD *)&this->__vftable + 3) != *((_QWORD *)&rhs->__vftable + 3) || *((_QWORD *)&this->__vftable + 2) != *((_QWORD *)&rhs->__vftable + 2) || !(*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)this->gapC8 + 40i64))(this->gapC8, rhs->gapC8) )
    return 0;
  m_msgName = this->m_msgName;
  do
  {
    v5 = (unsigned __int8)m_msgName[(char *)rhs - (char *)this];
    v6 = (unsigned __int8)*m_msgName - v5;
    if ( v6 )
      break;
    ++m_msgName;
  }
  while ( v5 );
  if ( !v6 && (m_msgEnvelopeId = this->m_msgEnvelopeId, v8 = rhs->m_msgEnvelopeId, *(_QWORD *)m_msgEnvelopeId == *(_QWORD *)v8) && *((_QWORD *)m_msgEnvelopeId + 1) == *((_QWORD *)v8 + 1) && !memcmp_0(&this->m_msgSchema.bdMessageEnvelopeBase::__vftable + 2, &rhs->m_msgSchema.bdMessageEnvelopeBase::__vftable + 2, 0x20ui64) && this->m_msgSerializationType == rhs->m_msgSerializationType && this->m_msgCompressionType == rhs->m_msgCompressionType && (m_dataSize = this->m_dataSize, m_dataSize == rhs->m_dataSize) && !memcmp_0(this->m_msgData, rhs->m_msgData, m_dataSize) )
    return 1;
  else
    return 0;
}

/*
==============
bdMessageEnvelopeV2::operator==
==============
*/
char bdMessageEnvelopeV2::operator==(bdMessageEnvelopeV2 *this, const bdMessageEnvelopeV2 *rhs)
{
  char *m_msgName; 
  int v5; 
  int v6; 
  unsigned __int8 *m_msgEnvelopeId; 
  unsigned __int8 *v8; 
  unsigned int m_dataSize; 

  if ( *((_QWORD *)&this->__vftable + 3) != *((_QWORD *)&rhs->__vftable + 3) || *((_QWORD *)&this->__vftable + 2) != *((_QWORD *)&rhs->__vftable + 2) || !(*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)this->gapC8 + 40i64))(this->gapC8, rhs->gapC8) )
    return 0;
  m_msgName = this->m_msgName;
  do
  {
    v5 = (unsigned __int8)m_msgName[(char *)rhs - (char *)this];
    v6 = (unsigned __int8)*m_msgName - v5;
    if ( v6 )
      break;
    ++m_msgName;
  }
  while ( v5 );
  if ( !v6 && (m_msgEnvelopeId = this->m_msgEnvelopeId, v8 = rhs->m_msgEnvelopeId, *(_QWORD *)m_msgEnvelopeId == *(_QWORD *)v8) && *((_QWORD *)m_msgEnvelopeId + 1) == *((_QWORD *)v8 + 1) && !memcmp_0(&this->m_msgSchema.bdMessageEnvelopeBase::__vftable + 2, &rhs->m_msgSchema.bdMessageEnvelopeBase::__vftable + 2, 0x20ui64) && this->m_msgSerializationType == rhs->m_msgSerializationType && this->m_msgCompressionType == rhs->m_msgCompressionType && (m_dataSize = this->m_dataSize, m_dataSize == rhs->m_dataSize) && !memcmp_0(this->m_msgData, rhs->m_msgData, m_dataSize) )
    return 1;
  else
    return 0;
}

/*
==============
bdMessageEnvelopeBase::deserialize
==============
*/
bool bdMessageEnvelopeBase::deserialize(bdMessageEnvelopeBase *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdmessageenvelope.cpp", "bdMessageEnvelopeBase::deserialize", 0x61u, "Cannot call deserialize on bdMessageEnvelope");
  return 0;
}

/*
==============
bdSchemaInfo::deserialize
==============
*/
bool bdSchemaInfo::deserialize(bdSchemaInfo *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readBlob(deserializer, 1u, &this->__vftable + 2, 0x20u, &this->m_guidSize);
}

/*
==============
bdMessageEnvelope::getMaxBaseByteSize
==============
*/
__int64 bdMessageEnvelope::getMaxBaseByteSize()
{
  return 222i64;
}

/*
==============
bdMessageEnvelopeV2::getMaxBaseByteSize
==============
*/
__int64 bdMessageEnvelopeV2::getMaxBaseByteSize()
{
  return 202i64;
}

/*
==============
bdMessageEnvelope::serialize
==============
*/
bool bdMessageEnvelope::serialize(bdMessageEnvelope *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeBlob(serializer, 2u, this->m_msgEnvelopeId, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 3u, *((_QWORD *)&this->__vftable + 3)) && bdStructBufferSerializer::writeUInt64(serializer, 8u, *((_QWORD *)&this->__vftable + 2)) && bdStructBufferSerializer::writeObject(serializer, 0xBu, (const bdStructBufferSerializable *)this->gapC8) && bdStructBufferSerializer::writeObject(serializer, 0xCu, &this->m_msgSchema) && bdStructBufferSerializer::writeString(serializer, 0xDu, this->m_msgName, 0x40u) && bdStructBufferSerializer::writeUInt64(serializer, 0xEu, this->m_msgSerializationType) && bdStructBufferSerializer::writeUInt64(serializer, 0xFu, this->m_msgCompressionType) && bdStructBufferSerializer::writeBlob(serializer, 0x64u, this->m_msgData, this->m_dataSize);
}

/*
==============
bdMessageEnvelopeV2::serialize
==============
*/
bool bdMessageEnvelopeV2::serialize(bdMessageEnvelopeV2 *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeBlob(serializer, 2u, this->m_msgEnvelopeId, 0x10u) && bdStructBufferSerializer::writeUInt64(serializer, 3u, *((_QWORD *)&this->__vftable + 3)) && bdStructBufferSerializer::writeUInt64(serializer, 8u, *((_QWORD *)&this->__vftable + 2)) && bdStructBufferSerializer::writeObject(serializer, 0xBu, (const bdStructBufferSerializable *)this->gapC8) && bdStructBufferSerializer::writeObject(serializer, 0xCu, &this->m_msgSchema) && bdStructBufferSerializer::writeString(serializer, 0xDu, this->m_msgName, 0x40u) && bdStructBufferSerializer::writeUInt64(serializer, 0xEu, this->m_msgSerializationType) && bdStructBufferSerializer::writeUInt64(serializer, 0xFu, this->m_msgCompressionType) && bdStructBufferSerializer::writeBlob(serializer, 0x64u, this->m_msgData, this->m_dataSize);
}

/*
==============
bdSchemaInfo::serialize
==============
*/
bool bdSchemaInfo::serialize(bdSchemaInfo *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeBlob(serializer, 1u, &this->__vftable + 2, this->m_guidSize);
}

/*
==============
bdMessageEnvelope::toString
==============
*/
bdString *bdMessageEnvelope::toString(bdMessageEnvelope *this, bdString *result)
{
  bdMessageEnvelopeBase::bdMsgCompressionType m_msgCompressionType; 
  bdMessageEnvelopeBase::bdMsgSerializationType m_msgSerializationType; 
  bdString *v6; 
  const char *Buffer; 
  __int64 v8; 
  __int64 v9; 
  bdString *v10; 
  const char *v11; 
  bdMessageEnvelopeBase::bdMsgSerializationType v13; 
  bdMessageEnvelopeBase::bdMsgCompressionType v14; 
  bdString v15; 
  bdString resulta; 

  resulta.m_string = (char *)result;
  m_msgCompressionType = this->m_msgCompressionType;
  m_msgSerializationType = this->m_msgSerializationType;
  v6 = (bdString *)(*(__int64 (__fastcall **)(_BYTE *, bdString *))(*(_QWORD *)this->gapC8 + 48i64))(this->gapC8, &v15);
  Buffer = bdString::getBuffer(v6);
  v8 = *((_QWORD *)&this->__vftable + 2);
  v9 = *((_QWORD *)&this->__vftable + 3);
  v10 = bdUUIDGenerator::uuidToString(&resulta, this->m_msgEnvelopeId);
  v11 = bdString::getBuffer(v10);
  v14 = m_msgCompressionType;
  v13 = m_msgSerializationType;
  makeFormattedString(result, "{ msgEnvelopeId: %s , createTime: %llu , titleId: %llu , userInfo: %s, msgSchemaGuid: %s , msgName: %s, serializationType: %d, compressionType: %d}", v11, v9, v8, Buffer, (const char *)&this->m_msgSchema.bdMessageEnvelopeBase::__vftable + 16, this->m_msgName, v13, v14);
  bdString::~bdString(&resulta);
  bdString::~bdString(&v15);
  return result;
}

/*
==============
bdMessageEnvelopeV2::toString
==============
*/
bdString *bdMessageEnvelopeV2::toString(bdMessageEnvelopeV2 *this, bdString *result)
{
  bdMessageEnvelopeBase::bdMsgCompressionType m_msgCompressionType; 
  bdMessageEnvelopeBase::bdMsgSerializationType m_msgSerializationType; 
  bdString *v6; 
  const char *Buffer; 
  __int64 v8; 
  __int64 v9; 
  bdString *v10; 
  const char *v11; 
  bdMessageEnvelopeBase::bdMsgSerializationType v13; 
  bdMessageEnvelopeBase::bdMsgCompressionType v14; 
  bdString v15; 
  bdString resulta; 

  resulta.m_string = (char *)result;
  m_msgCompressionType = this->m_msgCompressionType;
  m_msgSerializationType = this->m_msgSerializationType;
  v6 = (bdString *)(*(__int64 (__fastcall **)(_BYTE *, bdString *))(*(_QWORD *)this->gapC8 + 48i64))(this->gapC8, &v15);
  Buffer = bdString::getBuffer(v6);
  v8 = *((_QWORD *)&this->__vftable + 2);
  v9 = *((_QWORD *)&this->__vftable + 3);
  v10 = bdUUIDGenerator::uuidToString(&resulta, this->m_msgEnvelopeId);
  v11 = bdString::getBuffer(v10);
  v14 = m_msgCompressionType;
  v13 = m_msgSerializationType;
  makeFormattedString(result, "{ msgEnvelopeId: %s , createTime: %llu , titleId: %llu , userInfo: %s, msgSchemaGuid: %s , msgName: %s, serializationType: %d, compressionType: %d}", v11, v9, v8, Buffer, (const char *)&this->m_msgSchema.bdMessageEnvelopeBase::__vftable + 16, this->m_msgName, v13, v14);
  bdString::~bdString(&resulta);
  bdString::~bdString(&v15);
  return result;
}

/*
==============
toString
==============
*/
const char *toString(bdTask::bdStatus taskStatus)
{
  const char *result; 

  switch ( taskStatus )
  {
    case BD_EMPTY:
      result = "BD_EMPTY";
      break;
    case BD_PENDING:
      result = "BD_PENDING";
      break;
    case BD_DONE:
      result = "BD_DONE";
      break;
    case BD_FAILED:
      result = "BD_FAILED";
      break;
    case BD_TIMED_OUT:
      result = "BD_TIMED_OUT";
      break;
    case BD_CANCELLED:
      result = "BD_CANCELLED";
      break;
    default:
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdtask.cpp", "toString", 0x3Cu, "bad taskStatus");
      result = "???";
      break;
  }
  return result;
}

