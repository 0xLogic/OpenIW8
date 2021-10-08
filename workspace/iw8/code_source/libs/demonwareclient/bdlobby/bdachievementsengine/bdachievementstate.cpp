/*
==============
bdAchievementState::getProgressTarget
==============
*/

unsigned __int64 __fastcall bdAchievementState::getProgressTarget(bdAchievementState *this, const char *name)
{
  return ?getProgressTarget@bdAchievementState@@QEBA_KPEBD@Z(this, name);
}

/*
==============
bdAchievementState::getProgressTarget
==============
*/

unsigned int __fastcall bdAchievementState::getProgressTarget(bdAchievementState *this)
{
  return ?getProgressTarget@bdAchievementState@@QEBAIXZ(this);
}

/*
==============
bdAchievementState::serialize
==============
*/

bool __fastcall bdAchievementState::serialize(bdAchievementState *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementState@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementState::getStatus
==============
*/

bdAchievementStatus::Enum __fastcall bdAchievementState::getStatus(bdAchievementState *this)
{
  return ?getStatus@bdAchievementState@@QEBA?AW4Enum@bdAchievementStatus@@XZ(this);
}

/*
==============
bdAchievementState::toString
==============
*/

bdString *__fastcall bdAchievementState::toString(bdAchievementState *this, bdString *result)
{
  return ?toString@bdAchievementState@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementState::getCompletionCount
==============
*/

unsigned int __fastcall bdAchievementState::getCompletionCount(bdAchievementState *this)
{
  return ?getCompletionCount@bdAchievementState@@QEBAIXZ(this);
}

/*
==============
bdAchievementState::setStatus
==============
*/

void __fastcall bdAchievementState::setStatus(bdAchievementState *this, bdAchievementStatus::Enum newStatus)
{
  ?setStatus@bdAchievementState@@QEAAXW4Enum@bdAchievementStatus@@@Z(this, newStatus);
}

/*
==============
bdAchievementState::getName
==============
*/

const char *__fastcall bdAchievementState::getName(bdAchievementState *this)
{
  return ?getName@bdAchievementState@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementState::getActivationTimestamp
==============
*/

unsigned __int64 __fastcall bdAchievementState::getActivationTimestamp(bdAchievementState *this)
{
  return ?getActivationTimestamp@bdAchievementState@@QEBA_KXZ(this);
}

/*
==============
bdAchievementState::setProgress
==============
*/

bool __fastcall bdAchievementState::setProgress(bdAchievementState *this, const char *name, unsigned __int64 newProgress)
{
  return ?setProgress@bdAchievementState@@QEAA_NPEBD_K@Z(this, name, newProgress);
}

/*
==============
bdAchievementState::setCompletionTimestamp
==============
*/

void __fastcall bdAchievementState::setCompletionTimestamp(bdAchievementState *this, unsigned __int64 newCompletionTimestamp)
{
  ?setCompletionTimestamp@bdAchievementState@@QEAAX_K@Z(this, newCompletionTimestamp);
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/

void __fastcall bdAchievementState::bdAchievementState(bdAchievementState *this, const char *name, unsigned __int64 id, unsigned __int16 kind, unsigned int progress, unsigned int progressTarget, bdAchievementStatus::Enum status, unsigned __int64 completionTimestamp, unsigned __int64 activationTimestamp, unsigned __int64 expirationTimestamp, unsigned int completionCount)
{
  ??0bdAchievementState@@QEAA@PEBD_KGIIW4Enum@bdAchievementStatus@@111I@Z(this, name, id, kind, progress, progressTarget, status, completionTimestamp, activationTimestamp, expirationTimestamp, completionCount);
}

/*
==============
bdAchievementState::getCompletionTimestamp
==============
*/

unsigned __int64 __fastcall bdAchievementState::getCompletionTimestamp(bdAchievementState *this)
{
  return ?getCompletionTimestamp@bdAchievementState@@QEBA_KXZ(this);
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/

void __fastcall bdAchievementState::bdAchievementState(bdAchievementState *this, const char *name, unsigned __int16 kind, unsigned int progress, unsigned int progressTarget, bdAchievementStatus::Enum status, unsigned __int64 completionTimestamp, unsigned __int64 activationTimestamp, unsigned __int64 expirationTimestamp, unsigned int completionCount)
{
  ??0bdAchievementState@@QEAA@PEBDGIIW4Enum@bdAchievementStatus@@_K22I@Z(this, name, kind, progress, progressTarget, status, completionTimestamp, activationTimestamp, expirationTimestamp, completionCount);
}

/*
==============
bdAchievementState::setCompletionCount
==============
*/

void __fastcall bdAchievementState::setCompletionCount(bdAchievementState *this, unsigned int newCompletionCount)
{
  ?setCompletionCount@bdAchievementState@@QEAAXI@Z(this, newCompletionCount);
}

/*
==============
bdAchievementState::getId
==============
*/

unsigned __int64 __fastcall bdAchievementState::getId(bdAchievementState *this)
{
  return ?getId@bdAchievementState@@QEBA_KXZ(this);
}

/*
==============
bdAchievementState::operator==
==============
*/

bool __fastcall bdAchievementState::operator==(bdAchievementState *this, const bdAchievementState *rhs)
{
  return ??8bdAchievementState@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementState::getProgress
==============
*/

unsigned int __fastcall bdAchievementState::getProgress(bdAchievementState *this)
{
  return ?getProgress@bdAchievementState@@QEBAIXZ(this);
}

/*
==============
bdAchievementState::setProgress
==============
*/

void __fastcall bdAchievementState::setProgress(bdAchievementState *this, unsigned int newProgress)
{
  ?setProgress@bdAchievementState@@QEAAXI@Z(this, newProgress);
}

/*
==============
bdAchievementState::getMultiProgress
==============
*/

const bdAchievementProgress *__fastcall bdAchievementState::getMultiProgress(bdAchievementState *this, unsigned int index)
{
  return ?getMultiProgress@bdAchievementState@@QEBAAEBVbdAchievementProgress@@I@Z(this, index);
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/

void __fastcall bdAchievementState::bdAchievementState(bdAchievementState *this)
{
  ??0bdAchievementState@@QEAA@XZ(this);
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/

void __fastcall bdAchievementState::bdAchievementState(bdAchievementState *this, const bdAchievementState *__that)
{
  ??0bdAchievementState@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdAchievementState::addMultiProgress
==============
*/

bdAchievementState *__fastcall bdAchievementState::addMultiProgress(bdAchievementState *this, const bdAchievementProgress *progress)
{
  return ?addMultiProgress@bdAchievementState@@QEAAAEAV1@AEBVbdAchievementProgress@@@Z(this, progress);
}

/*
==============
bdAchievementState::getNumMultiProgresses
==============
*/

unsigned int __fastcall bdAchievementState::getNumMultiProgresses(bdAchievementState *this)
{
  return ?getNumMultiProgresses@bdAchievementState@@QEBAIXZ(this);
}

/*
==============
bdAchievementState::getExpirationTimestamp
==============
*/

unsigned __int64 __fastcall bdAchievementState::getExpirationTimestamp(bdAchievementState *this)
{
  return ?getExpirationTimestamp@bdAchievementState@@QEBA_KXZ(this);
}

/*
==============
bdAchievementState::getKind
==============
*/

unsigned __int16 __fastcall bdAchievementState::getKind(bdAchievementState *this)
{
  return ?getKind@bdAchievementState@@QEBAGXZ(this);
}

/*
==============
bdAchievementState::getProgress
==============
*/

unsigned __int64 __fastcall bdAchievementState::getProgress(bdAchievementState *this, const char *name)
{
  return ?getProgress@bdAchievementState@@QEBA_KPEBD@Z(this, name);
}

/*
==============
bdAchievementState::findMultiProgressIndex
==============
*/

int __fastcall bdAchievementState::findMultiProgressIndex(bdAchievementState *this, const char *name)
{
  return ?findMultiProgressIndex@bdAchievementState@@AEBAHPEBD@Z(this, name);
}

/*
==============
bdAchievementState::operator!=
==============
*/

bool __fastcall bdAchievementState::operator!=(bdAchievementState *this, const bdAchievementState *rhs)
{
  return ??9bdAchievementState@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementState::deserialize
==============
*/

bool __fastcall bdAchievementState::deserialize(bdAchievementState *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementState@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/
void bdAchievementState::bdAchievementState(bdAchievementState *this, const char *name, unsigned __int16 kind, unsigned int progress, unsigned int progressTarget, bdAchievementStatus::Enum status, unsigned __int64 completionTimestamp, unsigned __int64 activationTimestamp, unsigned __int64 expirationTimestamp, unsigned int completionCount, int a11)
{
  if ( a11 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementState::`vbtable';
    *(_QWORD *)this->gap218 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap218[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementState_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 3), name);
  this->m_kind = kind;
  this->m_progress = progress;
  this->m_progressTarget = progressTarget;
  this->m_status = status;
  this->m_completionTimestamp = completionTimestamp;
  this->m_activationTimestamp = activationTimestamp;
  this->m_expirationTimestamp = expirationTimestamp;
  this->m_completionCount = completionCount;
  `eh vector vbase constructor iterator'(&this->m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
  this->m_multiProgress.m_size = 0;
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/
void bdAchievementState::bdAchievementState(bdAchievementState *this, const char *name, unsigned __int64 id, unsigned __int16 kind, unsigned int progress, unsigned int progressTarget, bdAchievementStatus::Enum status, unsigned __int64 completionTimestamp, unsigned __int64 activationTimestamp, unsigned __int64 expirationTimestamp, unsigned int completionCount, int a12)
{
  if ( a12 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementState::`vbtable';
    *(_QWORD *)this->gap218 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap218[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementState_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = id;
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 3), name);
  this->m_kind = kind;
  this->m_progress = progress;
  this->m_progressTarget = progressTarget;
  this->m_status = status;
  this->m_completionTimestamp = completionTimestamp;
  this->m_activationTimestamp = activationTimestamp;
  this->m_expirationTimestamp = expirationTimestamp;
  this->m_completionCount = completionCount;
  `eh vector vbase constructor iterator'(&this->m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
  this->m_multiProgress.m_size = 0;
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/
void bdAchievementState::bdAchievementState(bdAchievementState *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementState::`vbtable';
    *(_QWORD *)this->gap218 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap218[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementState_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementState *)-24i64 )
  {
    v4 = 100i64;
    if ( v3 < 0x64 )
      v4 = v3;
    memcpy_0(&this->__vftable + 3, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 24) = 0;
  }
  this->m_kind = 0;
  *(_QWORD *)&this->m_progress = 0i64;
  this->m_status = ACTIVE;
  this->m_completionTimestamp = 0i64;
  this->m_activationTimestamp = 0i64;
  this->m_expirationTimestamp = 0i64;
  this->m_completionCount = 0;
  `eh vector vbase constructor iterator'(&this->m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
  this->m_multiProgress.m_size = 0;
}

/*
==============
bdAchievementState::operator==
==============
*/
char bdAchievementState::operator==(bdAchievementState *this, const bdAchievementState *rhs)
{
  unsigned int m_size; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *v6; 
  unsigned int v7; 
  bool v8; 
  unsigned int v9; 

  if ( *((_QWORD *)&this->__vftable + 2) == *((_QWORD *)&rhs->__vftable + 2) && !strncmp((const char *)&this->__vftable + 24, (const char *)&rhs->__vftable + 24, 0x64ui64) && this->m_kind == rhs->m_kind && this->m_progress == rhs->m_progress && this->m_progressTarget == rhs->m_progressTarget && this->m_status == rhs->m_status && this->m_completionTimestamp == rhs->m_completionTimestamp && this->m_activationTimestamp == rhs->m_activationTimestamp && this->m_expirationTimestamp == rhs->m_expirationTimestamp && this->m_completionCount == rhs->m_completionCount )
  {
    m_size = this->m_multiProgress.m_size;
    p_m_multiProgress = &rhs->m_multiProgress;
    v6 = &this->m_multiProgress;
    if ( m_size == p_m_multiProgress->m_size )
    {
      v7 = 0;
      if ( !m_size )
        return 1;
      v8 = m_size != 0;
      while ( 1 )
      {
        bdHandleAssert(v8, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
        bdHandleAssert(v7 < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
        if ( bdAchievementProgress::operator!=(&v6->m_elements[v7], &p_m_multiProgress->m_elements[v7]) )
          break;
        v9 = v6->m_size;
        v8 = ++v7 < v9;
        if ( v7 >= v9 )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
bdAchievementState::operator!=
==============
*/
char bdAchievementState::operator!=(bdAchievementState *this, const bdAchievementState *rhs)
{
  unsigned int m_size; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *v6; 
  unsigned int v7; 
  bool v8; 
  unsigned int v9; 

  if ( *((_QWORD *)&this->__vftable + 2) == *((_QWORD *)&rhs->__vftable + 2) && !strncmp((const char *)&this->__vftable + 24, (const char *)&rhs->__vftable + 24, 0x64ui64) && this->m_kind == rhs->m_kind && this->m_progress == rhs->m_progress && this->m_progressTarget == rhs->m_progressTarget && this->m_status == rhs->m_status && this->m_completionTimestamp == rhs->m_completionTimestamp && this->m_activationTimestamp == rhs->m_activationTimestamp && this->m_expirationTimestamp == rhs->m_expirationTimestamp && this->m_completionCount == rhs->m_completionCount )
  {
    m_size = this->m_multiProgress.m_size;
    p_m_multiProgress = &rhs->m_multiProgress;
    v6 = &this->m_multiProgress;
    if ( m_size == p_m_multiProgress->m_size )
    {
      v7 = 0;
      if ( !m_size )
        return 0;
      v8 = m_size != 0;
      while ( 1 )
      {
        bdHandleAssert(v8, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
        bdHandleAssert(v7 < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
        if ( bdAchievementProgress::operator!=(&v6->m_elements[v7], &p_m_multiProgress->m_elements[v7]) )
          break;
        v9 = v6->m_size;
        v8 = ++v7 < v9;
        if ( v7 >= v9 )
          return 0;
      }
    }
  }
  return 1;
}

/*
==============
bdAchievementState::addMultiProgress
==============
*/
bdAchievementState *bdAchievementState::addMultiProgress(bdAchievementState *this, const bdAchievementProgress *progress)
{
  if ( this->m_multiProgress.m_size == 32 )
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementstate.cpp", "bdAchievementState::addMultiProgress", 0x50u, "Reach maximun number of multiProgresses");
  else
    bdStructFixedSizeArray<bdAchievementProgress,4>::pushBack(&this->m_multiProgress, progress);
  return this;
}

/*
==============
bdAchievementState::deserialize
==============
*/
bool bdAchievementState::deserialize(bdAchievementState *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 24, 0x65u) && bdStructBufferDeserializer::readUInt16(deserializer, 2u, &this->m_kind) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, &this->m_progress) && bdStructBufferDeserializer::readUInt32(deserializer, 4u, &this->m_progressTarget) && bdAchievementStatus::deserialize(deserializer, 5u, &this->m_status) && bdStructBufferDeserializer::readUInt64(deserializer, 6u, &this->m_completionTimestamp) && bdStructBufferDeserializer::readUInt64(deserializer, 7u, &this->m_activationTimestamp) && bdStructBufferDeserializer::readUInt64(deserializer, 8u, &this->m_expirationTimestamp) && bdStructBufferDeserializer::readUInt32(deserializer, 9u, &this->m_completionCount) && bdStructBufferDeserializer::readObjectArray<bdAchievementProgress,4>(deserializer, 0xAu, &this->m_multiProgress) && bdStructBufferDeserializer::readUInt64(deserializer, 0xBu, (unsigned __int64 *)&this->__vftable + 2);
}

/*
==============
bdAchievementState::findMultiProgressIndex
==============
*/
__int64 bdAchievementState::findMultiProgressIndex(bdAchievementState *this, const char *name)
{
  unsigned int v2; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  const char *TargetName; 

  v2 = 0;
  if ( !this->m_multiProgress.m_size )
    return 0xFFFFFFFFi64;
  p_m_multiProgress = &this->m_multiProgress;
  while ( 1 )
  {
    bdHandleAssert(v2 < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
    TargetName = bdAchievementProgress::getTargetName(&p_m_multiProgress->m_elements[v2]);
    if ( !strncmp(TargetName, name, 0x20ui64) )
      break;
    if ( ++v2 >= this->m_multiProgress.m_size )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
bdAchievementState::getActivationTimestamp
==============
*/
unsigned __int64 bdAchievementState::getActivationTimestamp(bdAchievementState *this)
{
  return this->m_activationTimestamp;
}

/*
==============
bdAchievementState::getCompletionCount
==============
*/
__int64 bdAchievementState::getCompletionCount(bdAchievementState *this)
{
  return this->m_completionCount;
}

/*
==============
bdAchievementState::getCompletionTimestamp
==============
*/
unsigned __int64 bdAchievementState::getCompletionTimestamp(bdAchievementState *this)
{
  return this->m_completionTimestamp;
}

/*
==============
bdAchievementState::getExpirationTimestamp
==============
*/
unsigned __int64 bdAchievementState::getExpirationTimestamp(bdAchievementState *this)
{
  return this->m_expirationTimestamp;
}

/*
==============
bdAchievementState::getId
==============
*/
unsigned __int64 bdAchievementState::getId(bdAchievementState *this)
{
  return *((_QWORD *)&this->__vftable + 2);
}

/*
==============
bdAchievementState::getKind
==============
*/
__int64 bdAchievementState::getKind(bdAchievementState *this)
{
  return this->m_kind;
}

/*
==============
bdAchievementState::getMultiProgress
==============
*/
const bdAchievementProgress *bdAchievementState::getMultiProgress(bdAchievementState *this, unsigned int index)
{
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  __int64 v3; 

  p_m_multiProgress = &this->m_multiProgress;
  v3 = index;
  bdHandleAssert(index < this->m_multiProgress.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
  return (const bdAchievementProgress *)((char *)p_m_multiProgress + 88 * v3);
}

/*
==============
bdAchievementState::getName
==============
*/
bdAchievementState_vtbl **bdAchievementState::getName(bdAchievementState *this)
{
  return &this->__vftable + 3;
}

/*
==============
bdAchievementState::getNumMultiProgresses
==============
*/
__int64 bdAchievementState::getNumMultiProgresses(bdAchievementState *this)
{
  return this->m_multiProgress.m_size;
}

/*
==============
bdAchievementState::getProgress
==============
*/
__int64 bdAchievementState::getProgress(bdAchievementState *this)
{
  return this->m_progress;
}

/*
==============
bdAchievementState::getProgress
==============
*/
unsigned __int64 bdAchievementState::getProgress(bdAchievementState *this, const char *name)
{
  int MultiProgressIndex; 
  __int64 v4; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 

  MultiProgressIndex = bdAchievementState::findMultiProgressIndex(this, name);
  v4 = (unsigned int)MultiProgressIndex;
  if ( MultiProgressIndex < 0 )
    return 0i64;
  p_m_multiProgress = &this->m_multiProgress;
  bdHandleAssert(MultiProgressIndex < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
  return bdAchievementProgress::getAchievementCurrentProgress(&p_m_multiProgress->m_elements[v4]);
}

/*
==============
bdAchievementState::getProgressTarget
==============
*/
__int64 bdAchievementState::getProgressTarget(bdAchievementState *this)
{
  return this->m_progressTarget;
}

/*
==============
bdAchievementState::getProgressTarget
==============
*/
unsigned __int64 bdAchievementState::getProgressTarget(bdAchievementState *this, const char *name)
{
  int MultiProgressIndex; 
  __int64 v4; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 

  MultiProgressIndex = bdAchievementState::findMultiProgressIndex(this, name);
  v4 = (unsigned int)MultiProgressIndex;
  if ( MultiProgressIndex < 0 )
    return 0i64;
  p_m_multiProgress = &this->m_multiProgress;
  bdHandleAssert(MultiProgressIndex < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
  return bdAchievementProgress::getAchievementTargetProgress(&p_m_multiProgress->m_elements[v4]);
}

/*
==============
bdAchievementState::getStatus
==============
*/
__int64 bdAchievementState::getStatus(bdAchievementState *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdAchievementState::serialize
==============
*/
bool bdAchievementState::serialize(bdAchievementState *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementstate.cpp", "bdAchievementState::serialize", 0xE9u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementState::setCompletionCount
==============
*/
void bdAchievementState::setCompletionCount(bdAchievementState *this, unsigned int newCompletionCount)
{
  this->m_completionCount = newCompletionCount;
}

/*
==============
bdAchievementState::setCompletionTimestamp
==============
*/
void bdAchievementState::setCompletionTimestamp(bdAchievementState *this, unsigned __int64 newCompletionTimestamp)
{
  this->m_completionTimestamp = newCompletionTimestamp;
}

/*
==============
bdAchievementState::setProgress
==============
*/
void bdAchievementState::setProgress(bdAchievementState *this, unsigned int newProgress)
{
  this->m_progress = newProgress;
}

/*
==============
bdAchievementState::setProgress
==============
*/
char bdAchievementState::setProgress(bdAchievementState *this, const char *name, unsigned __int64 newProgress)
{
  unsigned int MultiProgressIndex; 
  __int64 v7; 

  MultiProgressIndex = bdAchievementState::findMultiProgressIndex(this, name);
  v7 = MultiProgressIndex;
  if ( (MultiProgressIndex & 0x80000000) != 0 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementState", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementstate.cpp", "bdAchievementState::setProgress", 0x9Eu, "Attempted to set nonexistent multi progress '%s'", name);
    return 0;
  }
  else
  {
    bdHandleAssert(MultiProgressIndex < this->m_multiProgress.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x4Du, "i is out of range");
    bdAchievementProgress::setAchievementCurrentProgress(&this->m_multiProgress.m_elements[v7], newProgress);
    return 1;
  }
}

/*
==============
bdAchievementState::setStatus
==============
*/
void bdAchievementState::setStatus(bdAchievementState *this, bdAchievementStatus::Enum newStatus)
{
  this->m_status = newStatus;
}

/*
==============
bdAchievementState::toString
==============
*/
bdString *bdAchievementState::toString(bdAchievementState *this, bdString *result)
{
  bdString *v2; 
  unsigned int v4; 
  unsigned int m_completionCount; 
  unsigned __int64 m_expirationTimestamp; 
  unsigned __int64 m_activationTimestamp; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  bdString *v9; 
  int v10; 
  const char *Buffer; 
  __int64 line; 
  char *format; 
  unsigned int m_progressTarget; 
  bdAchievementStatus::Enum v16; 
  unsigned int v17; 
  bdString *v18; 
  unsigned __int64 m_completionTimestamp; 
  bdAchievementStatus::Enum m_status; 
  bdString v22; 
  bdString resulta; 

  v2 = result;
  v4 = 0;
  m_completionCount = this->m_completionCount;
  m_expirationTimestamp = this->m_expirationTimestamp;
  m_activationTimestamp = this->m_activationTimestamp;
  m_completionTimestamp = this->m_completionTimestamp;
  m_status = this->m_status;
  p_m_multiProgress = &this->m_multiProgress;
  bdString::bdString(&v22);
  v18 = v9;
  v10 = 2;
  bdString::operator+=(&v22, "[");
  if ( p_m_multiProgress->m_size )
  {
    do
    {
      if ( v4 )
        bdString::operator+=(&v22, " , ");
      bdHandleAssert(v4 < p_m_multiProgress->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgress,4>::operator []", 0x54u, "i is out of range");
      bdAchievementProgress::toString(&p_m_multiProgress->m_elements[v4], &resulta);
      v10 |= 4u;
      bdString::operator+=(&v22, &resulta);
      bdString::~bdString(&resulta);
      ++v4;
    }
    while ( v4 < p_m_multiProgress->m_size );
    v2 = result;
  }
  bdString::operator+=(&v22, "]");
  Buffer = bdString::getBuffer(v18);
  v17 = m_completionCount;
  v16 = m_status;
  m_progressTarget = this->m_progressTarget;
  LODWORD(format) = this->m_progress;
  LODWORD(line) = this->m_kind;
  makeFormattedString(v2, "{ name:%s , id:%I64u , kind:%d , progress:%d , progressTarget:%d , multi progress: %s , status:%d , completionTimestamp:%llu , activationTimestamp:%llu , expirationTimestamp:%llu , completionCount:%d }", (const char *)&this->__vftable + 24, *((_QWORD *)&this->__vftable + 2), line, format, m_progressTarget, Buffer, v16, m_completionTimestamp, m_activationTimestamp, m_expirationTimestamp, v17);
  bdString::~bdString(&v22);
  return v2;
}

/*
==============
bdAchievementState::bdAchievementState
==============
*/
void bdAchievementState::bdAchievementState(bdAchievementState *this, const bdAchievementState *__that, int a3)
{
  unsigned int v5; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *p_m_multiProgress; 
  bdStructFixedSizeArray<bdAchievementProgress,4> *v10; 
  unsigned int m_size; 
  __int64 v12; 

  _RDI = __that;
  _R14 = this;
  v5 = 0;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementState::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap218, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(_R14, _RDI);
  _R14->__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementState_vtbl **)((char *)&_R14->__vftable + *(int *)(*((_QWORD *)&_R14->__vftable + 1) + 4i64) + 8) = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdReferencable'};
  *((_QWORD *)&_R14->__vftable + 2) = *((_QWORD *)&_RDI->__vftable + 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+18h]
    vmovups ymmword ptr [r14+18h], ymm0
    vmovups ymm1, ymmword ptr [rdi+38h]
    vmovups ymmword ptr [r14+38h], ymm1
    vmovups ymm0, ymmword ptr [rdi+58h]
    vmovups ymmword ptr [r14+58h], ymm0
  }
  *(_DWORD *)&_R14->m_name[88] = *(_DWORD *)&_RDI->m_name[88];
  _R14->m_name[92] = _RDI->m_name[92];
  _R14->m_kind = _RDI->m_kind;
  _R14->m_progress = _RDI->m_progress;
  _R14->m_progressTarget = _RDI->m_progressTarget;
  _R14->m_status = _RDI->m_status;
  _R14->m_completionTimestamp = _RDI->m_completionTimestamp;
  _R14->m_activationTimestamp = _RDI->m_activationTimestamp;
  _R14->m_expirationTimestamp = _RDI->m_expirationTimestamp;
  _R14->m_completionCount = _RDI->m_completionCount;
  p_m_multiProgress = &_R14->m_multiProgress;
  v10 = &_RDI->m_multiProgress;
  `eh vector vbase constructor iterator'(&_R14->m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
  _R14->m_multiProgress.m_size = 0;
  m_size = _RDI->m_multiProgress.m_size;
  _R14->m_multiProgress.m_size = m_size;
  if ( m_size )
  {
    do
    {
      v12 = v5;
      _RDI = (char *)v10 + v12 * 88;
      _RSI = (char *)p_m_multiProgress + v12 * 88;
      bdReferencable::operator=((bdReferencable *)((char *)&p_m_multiProgress->m_elements[v12].__vftable + *(int *)(*((_QWORD *)&p_m_multiProgress->m_elements[v12].__vftable + 1) + 4i64) + 8), (const bdReferencable *)&_RDI[*(int *)(*((_QWORD *)_RDI + 1) + 4i64) + 8]);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+10h]
        vmovups ymmword ptr [rsi+10h], ymm0
      }
      _RSI[48] = _RDI[48];
      *((_QWORD *)_RSI + 7) = *((_QWORD *)_RDI + 7);
      *((_QWORD *)_RSI + 8) = *((_QWORD *)_RDI + 8);
      ++v5;
    }
    while ( v5 < _R14->m_multiProgress.m_size );
  }
}

