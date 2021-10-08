/*
==============
bdAchievementProgressTarget::bdAchievementProgressTarget
==============
*/

void __fastcall bdAchievementProgressTarget::bdAchievementProgressTarget(bdAchievementProgressTarget *this)
{
  ??0bdAchievementProgressTarget@@QEAA@XZ(this);
}

/*
==============
bdAchievementProgressTarget::deserialize
==============
*/

bool __fastcall bdAchievementProgressTarget::deserialize(bdAchievementProgressTarget *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementProgressTarget@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementProgressTarget::getName
==============
*/

const char *__fastcall bdAchievementProgressTarget::getName(bdAchievementProgressTarget *this)
{
  return ?getName@bdAchievementProgressTarget@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementProgressTarget::operator==
==============
*/

bool __fastcall bdAchievementProgressTarget::operator==(bdAchievementProgressTarget *this, const bdAchievementProgressTarget *rhs)
{
  return ??8bdAchievementProgressTarget@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementProgressTarget::bdAchievementProgressTarget
==============
*/

void __fastcall bdAchievementProgressTarget::bdAchievementProgressTarget(bdAchievementProgressTarget *this, const char *progressTargetName, unsigned __int64 progress)
{
  ??0bdAchievementProgressTarget@@QEAA@PEBD_K@Z(this, progressTargetName, progress);
}

/*
==============
bdAchievementProgressTarget::toString
==============
*/

bdString *__fastcall bdAchievementProgressTarget::toString(bdAchievementProgressTarget *this, bdString *result)
{
  return ?toString@bdAchievementProgressTarget@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementProgressTarget::operator!=
==============
*/

bool __fastcall bdAchievementProgressTarget::operator!=(bdAchievementProgressTarget *this, const bdAchievementProgressTarget *rhs)
{
  return ??9bdAchievementProgressTarget@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementProgressTarget::getProgress
==============
*/

unsigned __int64 __fastcall bdAchievementProgressTarget::getProgress(bdAchievementProgressTarget *this)
{
  return ?getProgress@bdAchievementProgressTarget@@QEBA_KXZ(this);
}

/*
==============
bdAchievementProgressTarget::serialize
==============
*/

bool __fastcall bdAchievementProgressTarget::serialize(bdAchievementProgressTarget *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementProgressTarget@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementProgressTarget::bdAchievementProgressTarget
==============
*/
void bdAchievementProgressTarget::bdAchievementProgressTarget(bdAchievementProgressTarget *this, const char *progressTargetName, unsigned __int64 progress, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementProgressTarget::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementProgressTarget_vtbl *)&bdAchievementProgressTarget::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementProgressTarget_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementProgressTarget_vtbl *)&bdAchievementProgressTarget::`vftable'{for `bdReferencable'};
  if ( bdStrlcpy((char *const)&this->__vftable + 16, progressTargetName, 0x21ui64) > 0x20 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_progress = progress;
}

/*
==============
bdAchievementProgressTarget::bdAchievementProgressTarget
==============
*/
void bdAchievementProgressTarget::bdAchievementProgressTarget(bdAchievementProgressTarget *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementProgressTarget::`vbtable';
    *(_QWORD *)this->gap40 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap40[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementProgressTarget_vtbl *)&bdAchievementProgressTarget::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementProgressTarget_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementProgressTarget_vtbl *)&bdAchievementProgressTarget::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementProgressTarget *)-16i64 )
  {
    v4 = 32i64;
    if ( v3 < 0x20 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
  this->m_progress = 0i64;
}

/*
==============
bdAchievementProgressTarget::operator==
==============
*/
bool bdAchievementProgressTarget::operator==(bdAchievementProgressTarget *this, const bdAchievementProgressTarget *rhs)
{
  return !strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x20ui64) && this->m_progress == rhs->m_progress;
}

/*
==============
bdAchievementProgressTarget::operator!=
==============
*/
bool bdAchievementProgressTarget::operator!=(bdAchievementProgressTarget *this, const bdAchievementProgressTarget *rhs)
{
  return strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x20ui64) || this->m_progress != rhs->m_progress;
}

/*
==============
bdAchievementProgressTarget::deserialize
==============
*/
bool bdAchievementProgressTarget::deserialize(bdAchievementProgressTarget *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x21u) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, &this->m_progress);
}

/*
==============
bdAchievementProgressTarget::getName
==============
*/
bdAchievementProgressTarget_vtbl **bdAchievementProgressTarget::getName(bdAchievementProgressTarget *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdAchievementProgressTarget::getProgress
==============
*/
unsigned __int64 bdAchievementProgressTarget::getProgress(bdAchievementProgressTarget *this)
{
  return this->m_progress;
}

/*
==============
bdAchievementProgressTarget::serialize
==============
*/
bool bdAchievementProgressTarget::serialize(bdAchievementProgressTarget *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementprogresstarget.cpp", "bdAchievementProgressTarget::serialize", 0x30u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementProgressTarget::toString
==============
*/
bdString *bdAchievementProgressTarget::toString(bdAchievementProgressTarget *this, bdString *result)
{
  makeFormattedString(result, "{ name:%s , progress:%d }", (const char *)&this->__vftable + 16, this->m_progress);
  return result;
}

