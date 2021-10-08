/*
==============
bdUserAchievement::bdUserAchievement
==============
*/

void __fastcall bdUserAchievement::bdUserAchievement(bdUserAchievement *this)
{
  ??0bdUserAchievement@@QEAA@XZ(this);
}

/*
==============
bdUserAchievement::serializedSizeOf
==============
*/

int __fastcall bdUserAchievement::serializedSizeOf(bdUserAchievement *this)
{
  return ?serializedSizeOf@bdUserAchievement@@UEBAHXZ(this);
}

/*
==============
bdUserAchievement::sizeOf
==============
*/

unsigned int __fastcall bdUserAchievement::sizeOf(bdUserAchievement *this)
{
  return ?sizeOf@bdUserAchievement@@UEAAIXZ(this);
}

/*
==============
bdUserAchievement::reset
==============
*/

void __fastcall bdUserAchievement::reset(bdUserAchievement *this)
{
  ?reset@bdUserAchievement@@QEAAXXZ(this);
}

/*
==============
bdUserAchievement::bdUserAchievement
==============
*/

void __fastcall bdUserAchievement::bdUserAchievement(bdUserAchievement *this, bdUserAccountID *playerID, unsigned __int64 achievementID)
{
  ??0bdUserAchievement@@QEAA@VbdUserAccountID@@_K@Z(this, playerID, achievementID);
}

/*
==============
bdUserAchievement::serialize
==============
*/

bool __fastcall bdUserAchievement::serialize(bdUserAchievement *this, bdByteBuffer *buffer)
{
  return ?serialize@bdUserAchievement@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdUserAchievement::set
==============
*/

void __fastcall bdUserAchievement::set(bdUserAchievement *this, bdUserAccountID *playerID, unsigned __int64 achievementID)
{
  ?set@bdUserAchievement@@QEAAXVbdUserAccountID@@_K@Z(this, playerID, achievementID);
}

/*
==============
bdUserAchievement::~bdUserAchievement
==============
*/

void __fastcall bdUserAchievement::~bdUserAchievement(bdUserAchievement *this)
{
  ??1bdUserAchievement@@UEAA@XZ(this);
}

/*
==============
bdUserAchievement::bdUserAchievement
==============
*/
void bdUserAchievement::bdUserAchievement(bdUserAchievement *this, bdUserAccountID *playerID, unsigned __int64 achievementID, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAchievement::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdUserAchievement_vtbl *)&bdUserAchievement::`vftable'{for `bdSerializable'};
  *(bdUserAchievement_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAchievement_vtbl *)&bdUserAchievement::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2), playerID);
  this->m_achievementID = achievementID;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerID->gap38);
}

/*
==============
bdUserAchievement::bdUserAchievement
==============
*/
void bdUserAchievement::bdUserAchievement(bdUserAchievement *this, int a2)
{
  unsigned __int64 userID; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAchievement::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdUserAchievement_vtbl *)&bdUserAchievement::`vftable'{for `bdSerializable'};
  *(bdUserAchievement_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAchievement_vtbl *)&bdUserAchievement::`vftable'{for `bdReferencable'};
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2), &userID);
  this->m_achievementID = 0i64;
}

/*
==============
bdUserAchievement::~bdUserAchievement
==============
*/
void bdUserAchievement::~bdUserAchievement(bdUserAchievement *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdUserAchievement::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 88) = &bdUserAchievement::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&this[-1].m_achievementID);
  bdReferencable::~bdReferencable((bdReferencable *)&this[-1].m_achievementID);
  bdSerializable::~bdSerializable((bdUserAchievement *)((char *)this - 80));
}

/*
==============
bdUserAchievement::reset
==============
*/
void bdUserAchievement::reset(bdUserAchievement *this)
{
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)(&this->__vftable + 2), &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_achievementID = 0i64;
}

/*
==============
bdUserAchievement::serialize
==============
*/
bool bdUserAchievement::serialize(bdUserAchievement *this, bdByteBuffer *buffer)
{
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUInt64(buffer, this->m_achievementID);
}

/*
==============
bdUserAchievement::serializedSizeOf
==============
*/
__int64 bdUserAchievement::serializedSizeOf(bdUserAchievement *this)
{
  return ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2)) + 9;
}

/*
==============
bdUserAchievement::set
==============
*/
void bdUserAchievement::set(bdUserAchievement *this, bdUserAccountID *playerID, unsigned __int64 achievementID)
{
  bdUserAccountID::operator=((bdUserAccountID *)(&this->__vftable + 2), playerID);
  this->m_achievementID = achievementID;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerID->gap38);
}

/*
==============
bdUserAchievement::sizeOf
==============
*/
__int64 bdUserAchievement::sizeOf(bdUserAchievement *this)
{
  return 112i64;
}

