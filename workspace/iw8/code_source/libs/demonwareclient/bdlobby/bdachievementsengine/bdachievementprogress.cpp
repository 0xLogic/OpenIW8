/*
==============
bdAchievementProgress::operator==
==============
*/

bool __fastcall bdAchievementProgress::operator==(bdAchievementProgress *this, const bdAchievementProgress *rhs)
{
  return ??8bdAchievementProgress@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementProgress::serialize
==============
*/

bool __fastcall bdAchievementProgress::serialize(bdAchievementProgress *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementProgress@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementProgress::setAchievementCurrentProgress
==============
*/

void __fastcall bdAchievementProgress::setAchievementCurrentProgress(bdAchievementProgress *this, unsigned __int64 newProgress)
{
  ?setAchievementCurrentProgress@bdAchievementProgress@@QEAAX_K@Z(this, newProgress);
}

/*
==============
bdAchievementProgress::deserialize
==============
*/

bool __fastcall bdAchievementProgress::deserialize(bdAchievementProgress *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementProgress@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementProgress::toString
==============
*/

bdString *__fastcall bdAchievementProgress::toString(bdAchievementProgress *this, bdString *result)
{
  return ?toString@bdAchievementProgress@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementProgress::bdAchievementProgress
==============
*/

void __fastcall bdAchievementProgress::bdAchievementProgress(bdAchievementProgress *this, const char *targetName, unsigned __int64 currentProgress, unsigned __int64 targetProgress)
{
  ??0bdAchievementProgress@@QEAA@PEBD_K1@Z(this, targetName, currentProgress, targetProgress);
}

/*
==============
bdAchievementProgress::getAchievementTargetProgress
==============
*/

unsigned __int64 __fastcall bdAchievementProgress::getAchievementTargetProgress(bdAchievementProgress *this)
{
  return ?getAchievementTargetProgress@bdAchievementProgress@@QEBA_KXZ(this);
}

/*
==============
bdAchievementProgress::getTargetName
==============
*/

const char *__fastcall bdAchievementProgress::getTargetName(bdAchievementProgress *this)
{
  return ?getTargetName@bdAchievementProgress@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementProgress::getAchievementCurrentProgress
==============
*/

unsigned __int64 __fastcall bdAchievementProgress::getAchievementCurrentProgress(bdAchievementProgress *this)
{
  return ?getAchievementCurrentProgress@bdAchievementProgress@@QEBA_KXZ(this);
}

/*
==============
bdAchievementProgress::operator!=
==============
*/

bool __fastcall bdAchievementProgress::operator!=(bdAchievementProgress *this, const bdAchievementProgress *rhs)
{
  return ??9bdAchievementProgress@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementProgress::bdAchievementProgress
==============
*/

void __fastcall bdAchievementProgress::bdAchievementProgress(bdAchievementProgress *this)
{
  ??0bdAchievementProgress@@QEAA@XZ(this);
}

/*
==============
bdAchievementProgress::bdAchievementProgress
==============
*/
void bdAchievementProgress::bdAchievementProgress(bdAchievementProgress *this, const char *targetName, unsigned __int64 currentProgress, unsigned __int64 targetProgress, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementProgress::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementProgress_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdReferencable'};
  if ( bdStrlcpy((char *const)&this->__vftable + 16, targetName, 0x21ui64) > 0x20 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_currentProgress = currentProgress;
  this->m_targetProgress = targetProgress;
}

/*
==============
bdAchievementProgress::bdAchievementProgress
==============
*/
void bdAchievementProgress::bdAchievementProgress(bdAchievementProgress *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementProgress::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementProgress_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementProgress *)-16i64 )
  {
    v4 = 32i64;
    if ( v3 < 0x20 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
  this->m_currentProgress = 0i64;
  this->m_targetProgress = 0i64;
}

/*
==============
bdAchievementProgress::operator==
==============
*/
bool bdAchievementProgress::operator==(bdAchievementProgress *this, const bdAchievementProgress *rhs)
{
  return !strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x20ui64) && this->m_currentProgress == rhs->m_currentProgress && this->m_targetProgress == rhs->m_targetProgress;
}

/*
==============
bdAchievementProgress::operator!=
==============
*/
bool bdAchievementProgress::operator!=(bdAchievementProgress *this, const bdAchievementProgress *rhs)
{
  return strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x20ui64) || this->m_currentProgress != rhs->m_currentProgress || this->m_targetProgress != rhs->m_targetProgress;
}

/*
==============
bdAchievementProgress::deserialize
==============
*/
bool bdAchievementProgress::deserialize(bdAchievementProgress *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x21u) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, &this->m_currentProgress) && bdStructBufferDeserializer::readUInt64(deserializer, 3u, &this->m_targetProgress);
}

/*
==============
bdAchievementProgress::getAchievementCurrentProgress
==============
*/
unsigned __int64 bdAchievementProgress::getAchievementCurrentProgress(bdAchievementProgress *this)
{
  return this->m_currentProgress;
}

/*
==============
bdAchievementProgress::getAchievementTargetProgress
==============
*/
unsigned __int64 bdAchievementProgress::getAchievementTargetProgress(bdAchievementProgress *this)
{
  return this->m_targetProgress;
}

/*
==============
bdAchievementProgress::getTargetName
==============
*/
bdAchievementProgress_vtbl **bdAchievementProgress::getTargetName(bdAchievementProgress *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdAchievementProgress::serialize
==============
*/
bool bdAchievementProgress::serialize(bdAchievementProgress *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementprogress.cpp", "bdAchievementProgress::serialize", 0x3Eu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementProgress::setAchievementCurrentProgress
==============
*/
void bdAchievementProgress::setAchievementCurrentProgress(bdAchievementProgress *this, unsigned __int64 newProgress)
{
  this->m_currentProgress = newProgress;
}

/*
==============
bdAchievementProgress::toString
==============
*/
bdString *bdAchievementProgress::toString(bdAchievementProgress *this, bdString *result)
{
  makeFormattedString(result, "{ target name:%s , current progress:%u , target progress:%u }", (const char *)&this->__vftable + 16, this->m_currentProgress, this->m_targetProgress);
  return result;
}

