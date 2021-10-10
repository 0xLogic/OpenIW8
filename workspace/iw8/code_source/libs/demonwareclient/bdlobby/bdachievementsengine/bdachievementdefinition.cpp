/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/

void __fastcall bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const char *name, unsigned __int64 id, const char *description, unsigned __int16 kind, const bdAchievementTriggers *successTriggers, unsigned int successLimit, const bdAchievementRelativeTimestamp *successCooldown, unsigned int progressTarget, bool requiresClaim, bool requiresActivation, const bdAchievementTriggers *expiryTriggers, const bdAchievementSchedule *progressSchedule, const bdAchievementSchedule *activationSchedule)
{
  ??0bdAchievementDefinition@@QEAA@PEBD_K0GAEBVbdAchievementTriggers@@IAEBVbdAchievementRelativeTimestamp@@I_N42PEBVbdAchievementSchedule@@5@Z(this, name, id, description, kind, successTriggers, successLimit, successCooldown, progressTarget, requiresClaim, requiresActivation, expiryTriggers, progressSchedule, activationSchedule);
}

/*
==============
bdAchievementDefinition::addMultiProgressTarget
==============
*/

bdAchievementDefinition *__fastcall bdAchievementDefinition::addMultiProgressTarget(bdAchievementDefinition *this, const bdAchievementProgressTarget *progressTarget)
{
  return ?addMultiProgressTarget@bdAchievementDefinition@@QEAAAEAV1@AEBVbdAchievementProgressTarget@@@Z(this, progressTarget);
}

/*
==============
bdAchievementDefinition::deserialize
==============
*/

bool __fastcall bdAchievementDefinition::deserialize(bdAchievementDefinition *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementDefinition@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementDefinition::serialize
==============
*/

bool __fastcall bdAchievementDefinition::serialize(bdAchievementDefinition *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementDefinition@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementDefinition::addSubscribedEvent
==============
*/

bdAchievementDefinition *__fastcall bdAchievementDefinition::addSubscribedEvent(bdAchievementDefinition *this, unsigned __int64 eventID)
{
  return ?addSubscribedEvent@bdAchievementDefinition@@QEAAAEAV1@_K@Z(this, eventID);
}

/*
==============
bdAchievementDefinition::hasArchetypeParameter
==============
*/

bool __fastcall bdAchievementDefinition::hasArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key)
{
  return ?hasArchetypeParameter@bdAchievementDefinition@@QEBA_N_K@Z(this, key);
}

/*
==============
bdAchievementDefinition::getSuccessLimit
==============
*/

unsigned int __fastcall bdAchievementDefinition::getSuccessLimit(bdAchievementDefinition *this)
{
  return ?getSuccessLimit@bdAchievementDefinition@@QEBAIXZ(this);
}

/*
==============
bdAchievementDefinition::getExpiryTriggers
==============
*/

const bdAchievementTriggers *__fastcall bdAchievementDefinition::getExpiryTriggers(bdAchievementDefinition *this)
{
  return ?getExpiryTriggers@bdAchievementDefinition@@QEBAAEBVbdAchievementTriggers@@XZ(this);
}

/*
==============
bdAchievementDefinition::getKind
==============
*/

unsigned __int16 __fastcall bdAchievementDefinition::getKind(bdAchievementDefinition *this)
{
  return ?getKind@bdAchievementDefinition@@QEBAGXZ(this);
}

/*
==============
bdAchievementDefinition::getNumMultiProgressTargets
==============
*/

unsigned int __fastcall bdAchievementDefinition::getNumMultiProgressTargets(bdAchievementDefinition *this)
{
  return ?getNumMultiProgressTargets@bdAchievementDefinition@@QEBAIXZ(this);
}

/*
==============
bdAchievementDefinition::hasActivationSchedule
==============
*/

bool __fastcall bdAchievementDefinition::hasActivationSchedule(bdAchievementDefinition *this)
{
  return ?hasActivationSchedule@bdAchievementDefinition@@QEBA_NXZ(this);
}

/*
==============
bdAchievementDefinition::getArchetypeID
==============
*/

unsigned __int64 __fastcall bdAchievementDefinition::getArchetypeID(bdAchievementDefinition *this)
{
  return ?getArchetypeID@bdAchievementDefinition@@QEBA_KXZ(this);
}

/*
==============
bdAchievementDefinition::getProgressTarget
==============
*/

unsigned int __fastcall bdAchievementDefinition::getProgressTarget(bdAchievementDefinition *this)
{
  return ?getProgressTarget@bdAchievementDefinition@@QEBAIXZ(this);
}

/*
==============
bdAchievementDefinition::getMultiProgressTarget
==============
*/

const bdAchievementProgressTarget *__fastcall bdAchievementDefinition::getMultiProgressTarget(bdAchievementDefinition *this, unsigned int index)
{
  return ?getMultiProgressTarget@bdAchievementDefinition@@QEBAAEBVbdAchievementProgressTarget@@I@Z(this, index);
}

/*
==============
bdAchievementDefinition::getActivationSchedule
==============
*/

const bdAchievementSchedule *__fastcall bdAchievementDefinition::getActivationSchedule(bdAchievementDefinition *this)
{
  return ?getActivationSchedule@bdAchievementDefinition@@QEBAAEBVbdAchievementSchedule@@XZ(this);
}

/*
==============
bdAchievementDefinition::getRequiresClaim
==============
*/

bool __fastcall bdAchievementDefinition::getRequiresClaim(bdAchievementDefinition *this)
{
  return ?getRequiresClaim@bdAchievementDefinition@@QEBA_NXZ(this);
}

/*
==============
bdAchievementDefinition::getSuccessTriggers
==============
*/

const bdAchievementTriggers *__fastcall bdAchievementDefinition::getSuccessTriggers(bdAchievementDefinition *this)
{
  return ?getSuccessTriggers@bdAchievementDefinition@@QEBAAEBVbdAchievementTriggers@@XZ(this);
}

/*
==============
bdAchievementDefinition::getId
==============
*/

unsigned __int64 __fastcall bdAchievementDefinition::getId(bdAchievementDefinition *this)
{
  return ?getId@bdAchievementDefinition@@QEBA_KXZ(this);
}

/*
==============
bdAchievementDefinition::getName
==============
*/

const char *__fastcall bdAchievementDefinition::getName(bdAchievementDefinition *this)
{
  return ?getName@bdAchievementDefinition@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/

void __fastcall bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const char *name, const char *description, unsigned __int16 kind, const bdAchievementTriggers *successTriggers, unsigned int successLimit, const bdAchievementRelativeTimestamp *successCooldown, unsigned int progressTarget, bool requiresClaim, bool requiresActivation, const bdAchievementTriggers *expiryTriggers, const bdAchievementSchedule *progressSchedule, const bdAchievementSchedule *activationSchedule)
{
  ??0bdAchievementDefinition@@QEAA@PEBD0GAEBVbdAchievementTriggers@@IAEBVbdAchievementRelativeTimestamp@@I_N31PEBVbdAchievementSchedule@@4@Z(this, name, description, kind, successTriggers, successLimit, successCooldown, progressTarget, requiresClaim, requiresActivation, expiryTriggers, progressSchedule, activationSchedule);
}

/*
==============
bdAchievementDefinition::getRequiresActivation
==============
*/

bool __fastcall bdAchievementDefinition::getRequiresActivation(bdAchievementDefinition *this)
{
  return ?getRequiresActivation@bdAchievementDefinition@@QEBA_NXZ(this);
}

/*
==============
bdAchievementDefinition::getProgressSchedule
==============
*/

const bdAchievementSchedule *__fastcall bdAchievementDefinition::getProgressSchedule(bdAchievementDefinition *this)
{
  return ?getProgressSchedule@bdAchievementDefinition@@QEBAAEBVbdAchievementSchedule@@XZ(this);
}

/*
==============
bdAchievementDefinition::addArchetypeParameter
==============
*/

bdAchievementDefinition *__fastcall bdAchievementDefinition::addArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key, unsigned __int64 value)
{
  return ?addArchetypeParameter@bdAchievementDefinition@@QEAAAEAV1@_K0@Z(this, key, value);
}

/*
==============
bdAchievementDefinition::getArchetypeParameter
==============
*/

unsigned __int64 __fastcall bdAchievementDefinition::getArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key)
{
  return ?getArchetypeParameter@bdAchievementDefinition@@QEBA_K_K@Z(this, key);
}

/*
==============
bdAchievementDefinition::hasProgressSchedule
==============
*/

bool __fastcall bdAchievementDefinition::hasProgressSchedule(bdAchievementDefinition *this)
{
  return ?hasProgressSchedule@bdAchievementDefinition@@QEBA_NXZ(this);
}

/*
==============
bdAchievementDefinition::setArchetypeID
==============
*/

bdAchievementDefinition *__fastcall bdAchievementDefinition::setArchetypeID(bdAchievementDefinition *this, unsigned __int64 id)
{
  return ?setArchetypeID@bdAchievementDefinition@@QEAAAEAV1@_K@Z(this, id);
}

/*
==============
bdAchievementDefinition::toString
==============
*/

bdString *__fastcall bdAchievementDefinition::toString(bdAchievementDefinition *this, bdString *result)
{
  return ?toString@bdAchievementDefinition@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementDefinition::operator==
==============
*/

bool __fastcall bdAchievementDefinition::operator==(bdAchievementDefinition *this, const bdAchievementDefinition *rhs)
{
  return ??8bdAchievementDefinition@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementDefinition::getDescription
==============
*/

const char *__fastcall bdAchievementDefinition::getDescription(bdAchievementDefinition *this)
{
  return ?getDescription@bdAchievementDefinition@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementDefinition::subscribesToEvent
==============
*/

bool __fastcall bdAchievementDefinition::subscribesToEvent(bdAchievementDefinition *this, unsigned __int64 eventID)
{
  return ?subscribesToEvent@bdAchievementDefinition@@QEBA_N_K@Z(this, eventID);
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/

void __fastcall bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const bdAchievementDefinition *__that)
{
  ??0bdAchievementDefinition@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdAchievementDefinition::operator!=
==============
*/

bool __fastcall bdAchievementDefinition::operator!=(bdAchievementDefinition *this, const bdAchievementDefinition *rhs)
{
  return ??9bdAchievementDefinition@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementDefinition::getSuccessCooldown
==============
*/

const bdAchievementRelativeTimestamp *__fastcall bdAchievementDefinition::getSuccessCooldown(bdAchievementDefinition *this)
{
  return ?getSuccessCooldown@bdAchievementDefinition@@QEBAAEBVbdAchievementRelativeTimestamp@@XZ(this);
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/

void __fastcall bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this)
{
  ??0bdAchievementDefinition@@QEAA@XZ(this);
}

/*
==============
bdAchievementDefinition::hasArchetypeID
==============
*/

bool __fastcall bdAchievementDefinition::hasArchetypeID(bdAchievementDefinition *this)
{
  return ?hasArchetypeID@bdAchievementDefinition@@QEBA_NXZ(this);
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/
void bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const bdAchievementDefinition *__that, int a3)
{
  __int64 v5; 
  unsigned int m_size; 

  v5 = 0i64;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementDefinition::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gapBE8, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementDefinition_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = *((_QWORD *)&__that->__vftable + 2);
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 24) = *(bdStructBufferSerializable *)((char *)&__that->bdStructBufferSerializable + 24);
  *(__m256i *)&this->m_name[24] = *(__m256i *)&__that->m_name[24];
  *(__m256i *)&this->m_name[56] = *(__m256i *)&__that->m_name[56];
  *(_DWORD *)&this->m_name[88] = *(_DWORD *)&__that->m_name[88];
  this->m_name[92] = __that->m_name[92];
  *(_OWORD *)this->m_description.m_buffer = *(_OWORD *)__that->m_description.m_buffer;
  *(_OWORD *)&this->m_description.m_buffer[16] = *(_OWORD *)&__that->m_description.m_buffer[16];
  *(_OWORD *)&this->m_description.m_buffer[32] = *(_OWORD *)&__that->m_description.m_buffer[32];
  *(_OWORD *)&this->m_description.m_buffer[48] = *(_OWORD *)&__that->m_description.m_buffer[48];
  *(_OWORD *)&this->m_description.m_buffer[64] = *(_OWORD *)&__that->m_description.m_buffer[64];
  *(_OWORD *)&this->m_description.m_buffer[80] = *(_OWORD *)&__that->m_description.m_buffer[80];
  *(_OWORD *)&this->m_description.m_buffer[96] = *(_OWORD *)&__that->m_description.m_buffer[96];
  *(_OWORD *)&this->m_description.m_buffer[112] = *(_OWORD *)&__that->m_description.m_buffer[112];
  *(_OWORD *)&this->m_description.m_buffer[128] = *(_OWORD *)&__that->m_description.m_buffer[128];
  *(_OWORD *)&this->m_description.m_buffer[144] = *(_OWORD *)&__that->m_description.m_buffer[144];
  *(_OWORD *)&this->m_description.m_buffer[160] = *(_OWORD *)&__that->m_description.m_buffer[160];
  *(_OWORD *)&this->m_description.m_buffer[176] = *(_OWORD *)&__that->m_description.m_buffer[176];
  *(_OWORD *)&this->m_description.m_buffer[192] = *(_OWORD *)&__that->m_description.m_buffer[192];
  *(_OWORD *)&this->m_description.m_buffer[208] = *(_OWORD *)&__that->m_description.m_buffer[208];
  *(_OWORD *)&this->m_description.m_buffer[224] = *(_OWORD *)&__that->m_description.m_buffer[224];
  *(_QWORD *)&this->m_description.m_buffer[240] = *(_QWORD *)&__that->m_description.m_buffer[240];
  *(_WORD *)&this->m_description.m_buffer[248] = *(_WORD *)&__that->m_description.m_buffer[248];
  this->m_description.m_buffer[250] = __that->m_description.m_buffer[250];
  this->m_kind = __that->m_kind;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_successTriggers, &__that->m_successTriggers);
  this->m_successLimit = __that->m_successLimit;
  *((_QWORD *)&this->m_successCooldown.__vftable + 1) = &bdAchievementRelativeTimestamp::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_successCooldown.m_periodParams[48], (const bdReferencable *)((char *)&__that->m_successCooldown.__vftable + *(int *)(*((_QWORD *)&__that->m_successCooldown.__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(&this->m_successCooldown, &__that->m_successCooldown);
  this->m_successCooldown.__vftable = (bdAchievementRelativeTimestamp_vtbl *)&bdAchievementRelativeTimestamp::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementRelativeTimestamp_vtbl **)((char *)&this->m_successCooldown.__vftable + *(int *)(*((_QWORD *)&this->m_successCooldown.__vftable + 1) + 4i64) + 8) = (bdAchievementRelativeTimestamp_vtbl *)&bdAchievementRelativeTimestamp::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->m_successCooldown.__vftable + 4) = *((_DWORD *)&__that->m_successCooldown.__vftable + 4);
  *(_QWORD *)this->m_successCooldown.m_periodParams = &bdAchievementRelativeTimestampPeriodParams::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_successCooldown.m_periodParams[32], (const bdReferencable *)&__that->m_successCooldown.m_periodParams[*(int *)(*(_QWORD *)__that->m_successCooldown.m_periodParams + 4i64)]);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_successCooldown.__vftable + 3), (const bdStructBufferSerializable *)(&__that->m_successCooldown.__vftable + 3));
  *((_QWORD *)&this->m_successCooldown.__vftable + 3) = &bdAchievementRelativeTimestampPeriodParams::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&this->m_successCooldown.m_periodParams[*(int *)(*(_QWORD *)this->m_successCooldown.m_periodParams + 4i64)] = &bdAchievementRelativeTimestampPeriodParams::`vftable'{for `bdReferencable'};
  *(_DWORD *)&this->m_successCooldown.m_periodParams[8] = *(_DWORD *)&__that->m_successCooldown.m_periodParams[8];
  *(_DWORD *)&this->m_successCooldown.m_periodParams[12] = *(_DWORD *)&__that->m_successCooldown.m_periodParams[12];
  *(_DWORD *)&this->m_successCooldown.m_periodParams[16] = *(_DWORD *)&__that->m_successCooldown.m_periodParams[16];
  *(_DWORD *)&this->m_successCooldown.m_periodParams[20] = *(_DWORD *)&__that->m_successCooldown.m_periodParams[20];
  *(_DWORD *)&this->m_successCooldown.m_periodParams[24] = *(_DWORD *)&__that->m_successCooldown.m_periodParams[24];
  this->m_progressTarget = __that->m_progressTarget;
  this->m_requiresClaim = __that->m_requiresClaim;
  this->m_requiresActivation = __that->m_requiresActivation;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_expiryTriggers, &__that->m_expiryTriggers);
  `eh vector vbase constructor iterator'(&this->m_multiProgressTarget, 0x50ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgressTarget::bdAchievementProgressTarget, (void (__fastcall *)(void *))bdAchievementProgressTarget::`vbase destructor);
  this->m_multiProgressTarget.m_size = 0;
  bdStructFixedSizeArray<bdAchievementProgressTarget,4>::copy(&this->m_multiProgressTarget, &__that->m_multiProgressTarget);
  bdStructOptionalObject<bdAchievementSchedule>::bdStructOptionalObject<bdAchievementSchedule>(&this->m_progressSchedule, &__that->m_progressSchedule);
  bdStructOptionalObject<bdAchievementSchedule>::bdStructOptionalObject<bdAchievementSchedule>(&this->m_activationSchedule, &__that->m_activationSchedule);
  this->m_archetypeID.m_hasValue = __that->m_archetypeID.m_hasValue;
  this->m_archetypeID.m_value = __that->m_archetypeID.m_value;
  `eh vector vbase constructor iterator'(&this->m_archetypeParameters, 0x30ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::bdAchievementArchetypeParameter, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::`vbase destructor);
  this->m_archetypeParameters.m_size = 0;
  bdStructFixedSizeArray<bdAchievementArchetypeParameter,4>::copy(&this->m_archetypeParameters, &__that->m_archetypeParameters);
  this->m_subscribedEvents.m_size = 0;
  m_size = __that->m_subscribedEvents.m_size;
  this->m_subscribedEvents.m_size = m_size;
  if ( m_size )
  {
    do
    {
      this->m_subscribedEvents.m_elements[v5] = __that->m_subscribedEvents.m_elements[v5];
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < this->m_subscribedEvents.m_size );
  }
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/
void bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const char *name, const char *description, unsigned __int16 kind, const bdAchievementTriggers *successTriggers, unsigned int successLimit, const bdAchievementRelativeTimestamp *successCooldown, unsigned int progressTarget, bool requiresClaim, bool requiresActivation, const bdAchievementTriggers *expiryTriggers, const bdAchievementSchedule *progressSchedule, const bdAchievementSchedule *activationSchedule, int a14)
{
  char v18; 
  char *v19; 
  char v20; 
  char *v21; 
  char v22; 
  char v23; 
  bdAchievementSchedule v24; 
  char v25; 
  bdAchievementSchedule v26; 
  char v27; 
  bdAchievementSchedule v28; 
  char v29; 
  bdAchievementSchedule v30; 

  v18 = 0;
  if ( a14 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementDefinition::`vbtable';
    *(_QWORD *)this->gapBE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapBE8[8] = 0;
    v18 = 1;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementDefinition_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 3), name);
  bdStructFixedSizeString<250>::bdStructFixedSizeString<250>(&this->m_description, description);
  this->m_kind = kind;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_successTriggers, successTriggers);
  this->m_successLimit = successLimit;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_successCooldown, successCooldown);
  this->m_progressTarget = progressTarget;
  this->m_requiresClaim = requiresClaim;
  this->m_requiresActivation = requiresActivation;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_expiryTriggers, expiryTriggers);
  `eh vector vbase constructor iterator'(&this->m_multiProgressTarget, 0x50ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgressTarget::bdAchievementProgressTarget, (void (__fastcall *)(void *))bdAchievementProgressTarget::`vbase destructor);
  this->m_multiProgressTarget.m_size = 0;
  if ( progressSchedule )
  {
    v25 = 1;
    bdAchievementSchedule::bdAchievementSchedule(&v26, progressSchedule);
    v19 = &v25;
    v20 = v18 | 2;
  }
  else
  {
    v23 = 0;
    bdAchievementSchedule::bdAchievementSchedule(&v24);
    v19 = &v23;
    v20 = v18 | 4;
  }
  this->m_progressSchedule.m_hasValue = *v19;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_progressSchedule.m_value, (const bdAchievementSchedule *)(v19 + 8));
  if ( (v20 & 4) != 0 )
  {
    v20 &= ~4u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v24.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v24.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v24.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v24.gap48);
  }
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~2u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v26.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v26.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v26.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v26.gap48);
  }
  if ( activationSchedule )
  {
    v29 = 1;
    bdAchievementSchedule::bdAchievementSchedule(&v30, activationSchedule);
    v21 = &v29;
    v22 = v20 | 8;
  }
  else
  {
    v27 = 0;
    bdAchievementSchedule::bdAchievementSchedule(&v28);
    v21 = &v27;
    v22 = v20 | 0x10;
  }
  this->m_activationSchedule.m_hasValue = *v21;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_activationSchedule.m_value, (const bdAchievementSchedule *)(v21 + 8));
  if ( (v22 & 0x10) != 0 )
  {
    v22 &= ~0x10u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v28.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v28.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v28.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v28.gap48);
  }
  if ( (v22 & 8) != 0 )
  {
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v30.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v30.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v30.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v30.gap48);
  }
  this->m_archetypeID.m_hasValue = 0;
  `eh vector vbase constructor iterator'(&this->m_archetypeParameters, 0x30ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::bdAchievementArchetypeParameter, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::`vbase destructor);
  this->m_archetypeParameters.m_size = 0;
  this->m_subscribedEvents.m_size = 0;
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/
void bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, const char *name, unsigned __int64 id, const char *description, unsigned __int16 kind, const bdAchievementTriggers *successTriggers, unsigned int successLimit, const bdAchievementRelativeTimestamp *successCooldown, unsigned int progressTarget, bool requiresClaim, bool requiresActivation, const bdAchievementTriggers *expiryTriggers, const bdAchievementSchedule *progressSchedule, const bdAchievementSchedule *activationSchedule, int a15)
{
  char v19; 
  char *v20; 
  char v21; 
  char *v22; 
  char v23; 
  char v24; 
  bdAchievementSchedule v25; 
  char v26; 
  bdAchievementSchedule v27; 
  char v28; 
  bdAchievementSchedule v29; 
  char v30; 
  bdAchievementSchedule v31; 

  v19 = 0;
  if ( a15 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementDefinition::`vbtable';
    *(_QWORD *)this->gapBE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapBE8[8] = 0;
    v19 = 1;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementDefinition_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = id;
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 3), name);
  bdStructFixedSizeString<250>::bdStructFixedSizeString<250>(&this->m_description, description);
  this->m_kind = kind;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_successTriggers, successTriggers);
  this->m_successLimit = successLimit;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_successCooldown, successCooldown);
  this->m_progressTarget = progressTarget;
  this->m_requiresClaim = requiresClaim;
  this->m_requiresActivation = requiresActivation;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_expiryTriggers, expiryTriggers);
  `eh vector vbase constructor iterator'(&this->m_multiProgressTarget, 0x50ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgressTarget::bdAchievementProgressTarget, (void (__fastcall *)(void *))bdAchievementProgressTarget::`vbase destructor);
  this->m_multiProgressTarget.m_size = 0;
  if ( progressSchedule )
  {
    v26 = 1;
    bdAchievementSchedule::bdAchievementSchedule(&v27, progressSchedule);
    v20 = &v26;
    v21 = v19 | 2;
  }
  else
  {
    v24 = 0;
    bdAchievementSchedule::bdAchievementSchedule(&v25);
    v20 = &v24;
    v21 = v19 | 4;
  }
  this->m_progressSchedule.m_hasValue = *v20;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_progressSchedule.m_value, (const bdAchievementSchedule *)(v20 + 8));
  if ( (v21 & 4) != 0 )
  {
    v21 &= ~4u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v25.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v25.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v25.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v25.gap48);
  }
  if ( (v21 & 2) != 0 )
  {
    v21 &= ~2u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v27.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v27.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v27.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v27.gap48);
  }
  if ( activationSchedule )
  {
    v30 = 1;
    bdAchievementSchedule::bdAchievementSchedule(&v31, activationSchedule);
    v22 = &v30;
    v23 = v21 | 8;
  }
  else
  {
    v28 = 0;
    bdAchievementSchedule::bdAchievementSchedule(&v29);
    v22 = &v28;
    v23 = v21 | 0x10;
  }
  this->m_activationSchedule.m_hasValue = *v22;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_activationSchedule.m_value, (const bdAchievementSchedule *)(v22 + 8));
  if ( (v23 & 0x10) != 0 )
  {
    v23 &= ~0x10u;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v29.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v29.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v29.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v29.gap48);
  }
  if ( (v23 & 8) != 0 )
  {
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v31.m_nextPeriod[8]);
    bdReferencable::~bdReferencable((bdReferencable *)&v31.m_nextPeriod[24]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v31.gap48);
  }
  this->m_archetypeID.m_hasValue = 0;
  `eh vector vbase constructor iterator'(&this->m_archetypeParameters, 0x30ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::bdAchievementArchetypeParameter, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::`vbase destructor);
  this->m_archetypeParameters.m_size = 0;
  this->m_subscribedEvents.m_size = 0;
}

/*
==============
bdAchievementDefinition::bdAchievementDefinition
==============
*/
void bdAchievementDefinition::bdAchievementDefinition(bdAchievementDefinition *this, int a2)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementDefinition::`vbtable';
    *(_QWORD *)this->gapBE8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapBE8[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementDefinition_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementDefinition_vtbl *)&bdAchievementDefinition::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( this != (bdAchievementDefinition *)-24i64 )
  {
    v5 = 100i64;
    if ( v4 < 0x64 )
      v5 = v4;
    memcpy_0(&this->__vftable + 3, (char *)&queryFormat.fmt + 3, v5);
    *((_BYTE *)&this->__vftable + v5 + 24) = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementDefinition *)-125i64 )
  {
    v6 = 250i64;
    if ( v3 < 0xFA )
      v6 = v3;
    memcpy_0(&this->m_description, (char *)&queryFormat.fmt + 3, v6);
    this->m_description.m_buffer[v6] = 0;
  }
  this->m_kind = 0;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_successTriggers);
  this->m_successLimit = 0;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_successCooldown);
  this->m_progressTarget = 0;
  *(_WORD *)&this->m_requiresClaim = 0;
  bdAchievementTriggers::bdAchievementTriggers(&this->m_expiryTriggers);
  `eh vector vbase constructor iterator'(&this->m_multiProgressTarget, 0x50ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgressTarget::bdAchievementProgressTarget, (void (__fastcall *)(void *))bdAchievementProgressTarget::`vbase destructor);
  this->m_multiProgressTarget.m_size = 0;
  this->m_progressSchedule.m_hasValue = 0;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_progressSchedule.m_value);
  this->m_activationSchedule.m_hasValue = 0;
  bdAchievementSchedule::bdAchievementSchedule(&this->m_activationSchedule.m_value);
  this->m_archetypeID.m_hasValue = 0;
  `eh vector vbase constructor iterator'(&this->m_archetypeParameters, 0x30ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::bdAchievementArchetypeParameter, (void (__fastcall *)(void *))bdAchievementArchetypeParameter::`vbase destructor);
  this->m_archetypeParameters.m_size = 0;
  this->m_subscribedEvents.m_size = 0;
}

/*
==============
bdAchievementDefinition::operator==
==============
*/
char bdAchievementDefinition::operator==(bdAchievementDefinition *this, const bdAchievementDefinition *rhs)
{
  unsigned int m_size; 
  __int64 v5; 
  unsigned int v6; 
  bool v7; 
  unsigned int v8; 
  bool m_hasValue; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  bool v15; 
  unsigned int v16; 

  if ( *((_QWORD *)&this->__vftable + 2) == *((_QWORD *)&rhs->__vftable + 2) && !strncmp((const char *)&this->__vftable + 24, (const char *)&rhs->__vftable + 24, 0x64ui64) && !strncmp(this->m_description.m_buffer, rhs->m_description.m_buffer, 0xFAui64) && this->m_kind == rhs->m_kind && bdAchievementTriggers::operator==(&this->m_successTriggers, &rhs->m_successTriggers) && this->m_successLimit == rhs->m_successLimit && bdAchievementRelativeTimestamp::operator==(&this->m_successCooldown, &rhs->m_successCooldown) && this->m_progressTarget == rhs->m_progressTarget && this->m_requiresClaim == rhs->m_requiresClaim && this->m_requiresActivation == rhs->m_requiresActivation && bdAchievementTriggers::operator==(&this->m_expiryTriggers, &rhs->m_expiryTriggers) )
  {
    m_size = this->m_multiProgressTarget.m_size;
    if ( m_size == rhs->m_multiProgressTarget.m_size )
    {
      v5 = 0i64;
      v6 = 0;
      if ( m_size )
      {
        v7 = m_size != 0;
        while ( 1 )
        {
          bdHandleAssert(v7, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgressTarget,4>::operator []", 0x54u, "i is out of range");
          bdHandleAssert(v6 < rhs->m_multiProgressTarget.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgressTarget,4>::operator []", 0x54u, "i is out of range");
          if ( bdAchievementProgressTarget::operator!=(&this->m_multiProgressTarget.m_elements[v6], &rhs->m_multiProgressTarget.m_elements[v6]) )
            break;
          v8 = this->m_multiProgressTarget.m_size;
          v7 = ++v6 < v8;
          if ( v6 >= v8 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        if ( operator==<bdAchievementSchedule>(&this->m_progressSchedule, &rhs->m_progressSchedule) && operator==<bdAchievementSchedule>(&this->m_activationSchedule, &rhs->m_activationSchedule) )
        {
          m_hasValue = this->m_archetypeID.m_hasValue;
          if ( m_hasValue == rhs->m_archetypeID.m_hasValue )
          {
            if ( !m_hasValue || (bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value"), bdHandleAssert(rhs->m_archetypeID.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value"), this->m_archetypeID.m_value == rhs->m_archetypeID.m_value) )
            {
              v10 = this->m_archetypeParameters.m_size;
              if ( v10 == rhs->m_archetypeParameters.m_size )
              {
                v11 = 0;
                if ( v10 )
                {
                  v12 = v10 != 0;
                  while ( 1 )
                  {
                    bdHandleAssert(v12, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range");
                    bdHandleAssert(v11 < rhs->m_archetypeParameters.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range");
                    if ( bdAchievementArchetypeParameter::operator!=(&this->m_archetypeParameters.m_elements[v11], &rhs->m_archetypeParameters.m_elements[v11]) )
                      break;
                    v13 = this->m_archetypeParameters.m_size;
                    v12 = ++v11 < v13;
                    if ( v11 >= v13 )
                      goto LABEL_27;
                  }
                }
                else
                {
LABEL_27:
                  v14 = this->m_subscribedEvents.m_size;
                  if ( v14 == rhs->m_subscribedEvents.m_size )
                  {
                    if ( !v14 )
                      return 1;
                    v15 = v14 != 0;
                    while ( 1 )
                    {
                      bdHandleAssert(v15, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::operator []", 0x54u, "i is out of range");
                      bdHandleAssert((unsigned int)v5 < rhs->m_subscribedEvents.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::operator []", 0x54u, "i is out of range");
                      if ( this->m_subscribedEvents.m_elements[v5] != rhs->m_subscribedEvents.m_elements[v5] )
                        break;
                      v16 = this->m_subscribedEvents.m_size;
                      v5 = (unsigned int)(v5 + 1);
                      v15 = (unsigned int)v5 < v16;
                      if ( (unsigned int)v5 >= v16 )
                        return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
bdAchievementDefinition::operator!=
==============
*/
bool bdAchievementDefinition::operator!=(bdAchievementDefinition *this, const bdAchievementDefinition *rhs)
{
  return !bdAchievementDefinition::operator==(this, rhs);
}

/*
==============
bdAchievementDefinition::addArchetypeParameter
==============
*/
bdAchievementDefinition *bdAchievementDefinition::addArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key, unsigned __int64 value)
{
  const bdAchievementArchetypeParameter *v4; 
  bdAchievementArchetypeParameter v6; 

  bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(&v6, key, value);
  bdStructFixedSizeArray<bdAchievementArchetypeParameter,4>::pushBack(&this->m_archetypeParameters, v4);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v6.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)v6.gap20);
  return this;
}

/*
==============
bdAchievementDefinition::addMultiProgressTarget
==============
*/
bdAchievementDefinition *bdAchievementDefinition::addMultiProgressTarget(bdAchievementDefinition *this, const bdAchievementProgressTarget *progressTarget)
{
  bdStructFixedSizeArray<bdAchievementProgressTarget,4>::pushBack(&this->m_multiProgressTarget, progressTarget);
  return this;
}

/*
==============
bdAchievementDefinition::addSubscribedEvent
==============
*/
bdAchievementDefinition *bdAchievementDefinition::addSubscribedEvent(bdAchievementDefinition *this, unsigned __int64 eventID)
{
  __int64 m_size; 

  bdHandleAssert(this->m_subscribedEvents.m_size < 4, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::pushBack", 0x40u, "No more capacity for pushBack");
  m_size = this->m_subscribedEvents.m_size;
  if ( (unsigned int)m_size < 4 )
  {
    this->m_subscribedEvents.m_elements[m_size] = eventID;
    ++this->m_subscribedEvents.m_size;
  }
  return this;
}

/*
==============
bdAchievementDefinition::deserialize
==============
*/
char bdAchievementDefinition::deserialize(bdAchievementDefinition *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  char v5; 
  __int64 m_size; 
  _QWORD *v8; 
  char v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  bdAchievementArchetypeParameter v13; 
  unsigned __int64 value; 

  if ( !bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 24, 0x65u) || !bdStructBufferDeserializer::readString(deserializer, 2u, this->m_description.m_buffer, 0xFBu) || !bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_kind) || !bdStructBufferDeserializer::readObject(deserializer, 4u, &this->m_successTriggers) || !bdStructBufferDeserializer::readUInt32(deserializer, 5u, &this->m_successLimit) || !bdStructBufferDeserializer::readObject(deserializer, 6u, &this->m_successCooldown) || !bdStructBufferDeserializer::readUInt32(deserializer, 7u, &this->m_progressTarget) || !bdStructBufferDeserializer::readBool(deserializer, 8u, &this->m_requiresClaim) || !bdStructBufferDeserializer::readBool(deserializer, 9u, &this->m_requiresActivation) || !bdStructBufferDeserializer::readObject(deserializer, 0xAu, &this->m_expiryTriggers) || !bdStructBufferDeserializer::readObjectArray<bdAchievementProgressTarget,4>(deserializer, 0xBu, &this->m_multiProgressTarget) || !bdStructBufferDeserializer::readOptionalObject<bdAchievementSchedule>(deserializer, 0xCu, &this->m_progressSchedule) || !bdStructBufferDeserializer::readOptionalObject<bdAchievementSchedule>(deserializer, 0xDu, &this->m_activationSchedule) || !bdStructBufferDeserializer::readUInt64(deserializer, 0xEu, (unsigned __int64 *)&this->__vftable + 2) || !bdStructBufferDeserializer::readOptionalUInt64(deserializer, 0xFu, &this->m_archetypeID) )
    return 0;
  this->m_archetypeParameters.m_size = 0;
  v4 = 0;
  while ( !v4 )
  {
    bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(&v13);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 0x10u, &v13) )
      goto LABEL_23;
    v5 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( this->m_archetypeParameters.m_size < 4 )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::pushBack", 0x40u, "No more capacity for pushBack");
        m_size = this->m_archetypeParameters.m_size;
        if ( (unsigned int)m_size < 4 )
        {
          v8 = &this->m_archetypeParameters.m_elements[m_size].__vftable;
          this->m_archetypeParameters.m_size = m_size + 1;
          bdReferencable::operator=((bdReferencable *)((char *)v8 + *(int *)(v8[1] + 4i64) + 8), (const bdReferencable *)&v13.gap20[*(int *)(*((_QWORD *)&v13.__vftable + 1) + 4i64) - 24]);
          v8[2] = *((_QWORD *)&v13.__vftable + 2);
          v8[3] = *((_QWORD *)&v13.__vftable + 3);
        }
        goto LABEL_24;
      }
      LODWORD(v12) = 4;
      LODWORD(v11) = 16;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v11, v12);
LABEL_23:
      v5 = 0;
      goto LABEL_24;
    }
    v4 = 1;
LABEL_24:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v13.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)v13.gap20);
    if ( !v5 )
      return 0;
  }
  this->m_subscribedEvents.m_size = 0;
  v9 = 0;
  while ( !v9 )
  {
    value = 0i64;
    if ( !bdStructBufferDeserializer::readUInt64(deserializer, 0x11u, &value) )
      return 0;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) == BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      v9 = 1;
    }
    else
    {
      if ( this->m_subscribedEvents.m_size >= 4 )
      {
        LODWORD(v12) = 4;
        LODWORD(v11) = 17;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readUInt64Array", 0xAFu, "No capacity to push back deserialized UInt64. tag=%d , capacity=%d", v11, v12);
        return 0;
      }
      bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::pushBack", 0x40u, "No more capacity for pushBack");
      v10 = this->m_subscribedEvents.m_size;
      if ( v10 < 4 )
      {
        this->m_subscribedEvents.m_elements[v10] = value;
        ++this->m_subscribedEvents.m_size;
      }
    }
  }
  return 1;
}

/*
==============
bdAchievementDefinition::getActivationSchedule
==============
*/
bdAchievementSchedule *bdAchievementDefinition::getActivationSchedule(bdAchievementDefinition *this)
{
  bdHandleAssert(this->m_activationSchedule.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementSchedule>::getValue", 0x3Cu, "Has no value");
  return &this->m_activationSchedule.m_value;
}

/*
==============
bdAchievementDefinition::getArchetypeID
==============
*/
unsigned __int64 bdAchievementDefinition::getArchetypeID(bdAchievementDefinition *this)
{
  bool m_hasValue; 

  m_hasValue = this->m_archetypeID.m_hasValue;
  if ( !m_hasValue )
    return 0i64;
  bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value");
  return this->m_archetypeID.m_value;
}

/*
==============
bdAchievementDefinition::getArchetypeParameter
==============
*/
unsigned __int64 bdAchievementDefinition::getArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key)
{
  __int64 v2; 
  unsigned __int64 v5; 
  unsigned int m_size; 

  v2 = 0i64;
  if ( !this->m_archetypeParameters.m_size )
    return 0i64;
  while ( 1 )
  {
    bdHandleAssert((unsigned int)v2 < this->m_archetypeParameters.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range");
    v5 = bdAchievementArchetypeParameter::getKey(&this->m_archetypeParameters.m_elements[v2]);
    m_size = this->m_archetypeParameters.m_size;
    if ( v5 == key )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= m_size )
      return 0i64;
  }
  bdHandleAssert((unsigned int)v2 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range");
  return bdAchievementArchetypeParameter::getValue(&this->m_archetypeParameters.m_elements[v2]);
}

/*
==============
bdAchievementDefinition::getDescription
==============
*/
bdStructFixedSizeString<250> *bdAchievementDefinition::getDescription(bdAchievementDefinition *this)
{
  return &this->m_description;
}

/*
==============
bdAchievementDefinition::getExpiryTriggers
==============
*/
bdAchievementTriggers *bdAchievementDefinition::getExpiryTriggers(bdAchievementDefinition *this)
{
  return &this->m_expiryTriggers;
}

/*
==============
bdAchievementDefinition::getId
==============
*/
unsigned __int64 bdAchievementDefinition::getId(bdAchievementDefinition *this)
{
  return *((_QWORD *)&this->__vftable + 2);
}

/*
==============
bdAchievementDefinition::getKind
==============
*/
__int64 bdAchievementDefinition::getKind(bdAchievementDefinition *this)
{
  return this->m_kind;
}

/*
==============
bdAchievementDefinition::getMultiProgressTarget
==============
*/
const bdAchievementProgressTarget *bdAchievementDefinition::getMultiProgressTarget(bdAchievementDefinition *this, unsigned int index)
{
  bdStructFixedSizeArray<bdAchievementProgressTarget,4> *p_m_multiProgressTarget; 
  __int64 v3; 

  p_m_multiProgressTarget = &this->m_multiProgressTarget;
  v3 = index;
  bdHandleAssert(index < this->m_multiProgressTarget.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgressTarget,4>::operator []", 0x54u, "i is out of range");
  return (const bdAchievementProgressTarget *)((char *)p_m_multiProgressTarget + 80 * v3);
}

/*
==============
bdAchievementDefinition::getName
==============
*/
bdAchievementDefinition_vtbl **bdAchievementDefinition::getName(bdAchievementDefinition *this)
{
  return &this->__vftable + 3;
}

/*
==============
bdAchievementDefinition::getNumMultiProgressTargets
==============
*/
__int64 bdAchievementDefinition::getNumMultiProgressTargets(bdAchievementDefinition *this)
{
  return this->m_multiProgressTarget.m_size;
}

/*
==============
bdAchievementDefinition::getProgressSchedule
==============
*/
bdAchievementSchedule *bdAchievementDefinition::getProgressSchedule(bdAchievementDefinition *this)
{
  bdHandleAssert(this->m_progressSchedule.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementSchedule>::getValue", 0x3Cu, "Has no value");
  return &this->m_progressSchedule.m_value;
}

/*
==============
bdAchievementDefinition::getProgressTarget
==============
*/
__int64 bdAchievementDefinition::getProgressTarget(bdAchievementDefinition *this)
{
  return this->m_progressTarget;
}

/*
==============
bdAchievementDefinition::getRequiresActivation
==============
*/
_BOOL8 bdAchievementDefinition::getRequiresActivation(bdAchievementDefinition *this)
{
  return this->m_requiresActivation;
}

/*
==============
bdAchievementDefinition::getRequiresClaim
==============
*/
_BOOL8 bdAchievementDefinition::getRequiresClaim(bdAchievementDefinition *this)
{
  return this->m_requiresClaim;
}

/*
==============
bdAchievementDefinition::getSuccessCooldown
==============
*/
bdAchievementRelativeTimestamp *bdAchievementDefinition::getSuccessCooldown(bdAchievementDefinition *this)
{
  return &this->m_successCooldown;
}

/*
==============
bdAchievementDefinition::getSuccessLimit
==============
*/
__int64 bdAchievementDefinition::getSuccessLimit(bdAchievementDefinition *this)
{
  return this->m_successLimit;
}

/*
==============
bdAchievementDefinition::getSuccessTriggers
==============
*/
bdAchievementTriggers *bdAchievementDefinition::getSuccessTriggers(bdAchievementDefinition *this)
{
  return &this->m_successTriggers;
}

/*
==============
bdAchievementDefinition::hasActivationSchedule
==============
*/
_BOOL8 bdAchievementDefinition::hasActivationSchedule(bdAchievementDefinition *this)
{
  return this->m_activationSchedule.m_hasValue;
}

/*
==============
bdAchievementDefinition::hasArchetypeID
==============
*/
_BOOL8 bdAchievementDefinition::hasArchetypeID(bdAchievementDefinition *this)
{
  return this->m_archetypeID.m_hasValue;
}

/*
==============
bdAchievementDefinition::hasArchetypeParameter
==============
*/
char bdAchievementDefinition::hasArchetypeParameter(bdAchievementDefinition *this, unsigned __int64 key)
{
  __int64 v2; 
  bdStructFixedSizeArray<bdAchievementArchetypeParameter,4> *p_m_archetypeParameters; 

  v2 = 0i64;
  if ( !this->m_archetypeParameters.m_size )
    return 0;
  p_m_archetypeParameters = &this->m_archetypeParameters;
  while ( 1 )
  {
    bdHandleAssert((unsigned int)v2 < p_m_archetypeParameters->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range");
    if ( bdAchievementArchetypeParameter::getKey(&p_m_archetypeParameters->m_elements[v2]) == key )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= this->m_archetypeParameters.m_size )
      return 0;
  }
  return 1;
}

/*
==============
bdAchievementDefinition::hasProgressSchedule
==============
*/
_BOOL8 bdAchievementDefinition::hasProgressSchedule(bdAchievementDefinition *this)
{
  return this->m_progressSchedule.m_hasValue;
}

/*
==============
bdAchievementDefinition::serialize
==============
*/
bool bdAchievementDefinition::serialize(bdAchievementDefinition *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementdefinition.cpp", "bdAchievementDefinition::serialize", 0x120u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementDefinition::setArchetypeID
==============
*/
bdAchievementDefinition *bdAchievementDefinition::setArchetypeID(bdAchievementDefinition *this, unsigned __int64 id)
{
  char v3; 

  if ( &this->m_archetypeID != (bdStructOptionalObject<unsigned __int64> *)&v3 )
  {
    this->m_archetypeID.m_hasValue = 1;
    this->m_archetypeID.m_value = id;
  }
  return this;
}

/*
==============
bdAchievementDefinition::subscribesToEvent
==============
*/
char bdAchievementDefinition::subscribesToEvent(bdAchievementDefinition *this, unsigned __int64 eventID)
{
  __int64 v2; 
  bool v5; 

  v2 = 0i64;
  if ( !this->m_subscribedEvents.m_size )
    return 0;
  v5 = this->m_subscribedEvents.m_size != 0;
  while ( 1 )
  {
    bdHandleAssert(v5, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::operator []", 0x54u, "i is out of range");
    if ( this->m_subscribedEvents.m_elements[v2] == eventID )
      break;
    v2 = (unsigned int)(v2 + 1);
    v5 = (unsigned int)v2 < this->m_subscribedEvents.m_size;
    if ( (unsigned int)v2 >= this->m_subscribedEvents.m_size )
      return 0;
  }
  return 1;
}

/*
==============
bdAchievementDefinition::toString
==============
*/
bdString *bdAchievementDefinition::toString(bdAchievementDefinition *this, bdString *result)
{
  bdString *Array; 
  bdString *v4; 
  bool m_hasValue; 
  bdString *p_str; 
  char v7; 
  char v8; 
  bdString *OptionalObject; 
  bdString *v10; 
  bdString *v11; 
  const char *v12; 
  bdString *v13; 
  const char *v14; 
  BOOL m_requiresActivation; 
  BOOL m_requiresClaim; 
  unsigned int m_progressTarget; 
  bdString *v18; 
  const char *v19; 
  unsigned int m_successLimit; 
  bdString *v21; 
  const char *v22; 
  char *format; 
  unsigned int v25; 
  unsigned int v26; 
  BOOL v27; 
  BOOL v28; 
  bdString v29; 
  const char *Buffer; 
  const char *v31; 
  const char *v32; 
  bdString v33; 
  bdString v34; 
  bdString v35; 
  bdString v36; 
  bdString v37; 
  bdString v38; 
  bdString v39; 
  bdString resulta; 
  __int64 v41; 
  bdString str; 
  bdString v45; 

  v41 = -2i64;
  Array = makeArrayString<unsigned __int64,4>(&resulta, &this->m_subscribedEvents);
  Buffer = bdString::getBuffer(Array);
  v4 = makeArrayString<bdAchievementArchetypeParameter,4>(&v39, &this->m_archetypeParameters);
  v31 = bdString::getBuffer(v4);
  m_hasValue = this->m_archetypeID.m_hasValue;
  if ( m_hasValue )
  {
    bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value");
    makeFormattedString(&str, "%I64u", this->m_archetypeID.m_value);
    p_str = &str;
    v7 = 32;
  }
  else
  {
    bdString::bdString(&v29, "none");
    v7 = 64;
  }
  bdString::bdString(&v45, p_str);
  v8 = v7 | 0x80;
  if ( (v8 & 0x40) != 0 )
  {
    v8 &= ~0x40u;
    bdString::~bdString(&v29);
  }
  if ( (v8 & 0x20) != 0 )
    bdString::~bdString(&str);
  v32 = bdString::getBuffer(&v45);
  OptionalObject = makeOptionalObjectString<bdAchievementSchedule>(&v38, &this->m_activationSchedule);
  str.m_string = (char *)bdString::getBuffer(OptionalObject);
  v10 = makeOptionalObjectString<bdAchievementSchedule>(&v37, &this->m_progressSchedule);
  v29.m_string = (char *)bdString::getBuffer(v10);
  v11 = makeArrayString<bdAchievementProgressTarget,4>(&v36, &this->m_multiProgressTarget);
  v12 = bdString::getBuffer(v11);
  v13 = bdAchievementTriggers::toString(&this->m_expiryTriggers, &v35);
  v14 = bdString::getBuffer(v13);
  m_requiresActivation = this->m_requiresActivation;
  m_requiresClaim = this->m_requiresClaim;
  m_progressTarget = this->m_progressTarget;
  v18 = bdAchievementRelativeTimestamp::toString(&this->m_successCooldown, &v34);
  v19 = bdString::getBuffer(v18);
  m_successLimit = this->m_successLimit;
  v21 = bdAchievementTriggers::toString(&this->m_successTriggers, &v33);
  v22 = bdString::getBuffer(v21);
  v28 = m_requiresActivation;
  v27 = m_requiresClaim;
  v26 = m_progressTarget;
  v25 = m_successLimit;
  LODWORD(format) = this->m_kind;
  makeFormattedString(result, "{ name:%s , id:%I64u , description:%s , kind:%d , successTriggers:%s , successLimit:%d , successCooldown:%s , progressTarget:%d , requiresClaim:%d , requiresActivation:%d , expiryTriggers:%s , multiProgressTarget:%s , progressSchedule:%s , activationSchedule:%s , archetypeID:%s , archetypeParameters:%s , subscribedEvents:%s }", (const char *)&this->__vftable + 24, *((_QWORD *)&this->__vftable + 2), this->m_description.m_buffer, format, v22, v25, v19, v26, v27, v28, v14, v12, v29.m_string, str.m_string, v32, v31, Buffer);
  bdString::~bdString(&v33);
  bdString::~bdString(&v34);
  bdString::~bdString(&v35);
  bdString::~bdString(&v36);
  bdString::~bdString(&v37);
  bdString::~bdString(&v38);
  bdString::~bdString(&v45);
  bdString::~bdString(&v39);
  bdString::~bdString(&resulta);
  return result;
}

