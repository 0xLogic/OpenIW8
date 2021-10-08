/*
==============
bdClansGroupMembershipInfo::bdClansGroupMembershipInfo
==============
*/

void __fastcall bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(bdClansGroupMembershipInfo *this, const bdClansGroupMembershipInfo *__that)
{
  ??0bdClansGroupMembershipInfo@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansGroupMembershipInfo::serialize
==============
*/

bool __fastcall bdClansGroupMembershipInfo::serialize(bdClansGroupMembershipInfo *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGroupMembershipInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGroupMembershipInfo::getRole
==============
*/

unsigned __int16 __fastcall bdClansGroupMembershipInfo::getRole(bdClansGroupMembershipInfo *this)
{
  return ?getRole@bdClansGroupMembershipInfo@@QEBAGXZ(this);
}

/*
==============
bdClansGroupMembershipInfo::isActiveGroup
==============
*/

bool __fastcall bdClansGroupMembershipInfo::isActiveGroup(bdClansGroupMembershipInfo *this)
{
  return ?isActiveGroup@bdClansGroupMembershipInfo@@QEBA_NXZ(this);
}

/*
==============
bdClansGroupMembershipInfo::deserialize
==============
*/

bool __fastcall bdClansGroupMembershipInfo::deserialize(bdClansGroupMembershipInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupMembershipInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupMembershipInfo::bdClansGroupMembershipInfo
==============
*/

void __fastcall bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(bdClansGroupMembershipInfo *this)
{
  ??0bdClansGroupMembershipInfo@@QEAA@XZ(this);
}

/*
==============
bdClansGroupMembershipInfo::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansGroupMembershipInfo::getGroup(bdClansGroupMembershipInfo *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansGroupMembershipInfo@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipInfo::bdClansGroupMembershipInfo
==============
*/
void bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(bdClansGroupMembershipInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupMembershipInfo::`vbtable';
    *(_QWORD *)&this->gap59[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap59[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupMembershipInfo_vtbl *)&bdClansGroupMembershipInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMembershipInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupMembershipInfo_vtbl *)&bdClansGroupMembershipInfo::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = 0;
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 3));
  this->m_isActiveGroup = 0;
}

/*
==============
bdClansGroupMembershipInfo::deserialize
==============
*/
bool bdClansGroupMembershipInfo::deserialize(bdClansGroupMembershipInfo *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt16(deserializer, 1u, (unsigned __int16 *)&this->__vftable + 8) && bdStructBufferDeserializer::readObject(deserializer, 2u, (bdStructBufferSerializable *)(&this->__vftable + 3)) && bdStructBufferDeserializer::readBool(deserializer, 3u, &this->m_isActiveGroup);
}

/*
==============
bdClansGroupMembershipInfo::getGroup
==============
*/
bdClansGroupIdentifier *bdClansGroupMembershipInfo::getGroup(bdClansGroupMembershipInfo *this, bdClansGroupIdentifier *result)
{
  bdClansGroupMembershipInfo_vtbl **v3; 

  v3 = &this->__vftable + 3;
  *((_QWORD *)&result->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)(&result->m_rootID + 1), (const bdReferencable *)&this->m_group[*(int *)(*(_QWORD *)this->m_group + 4i64)]);
  bdStructBufferSerializable::bdStructBufferSerializable(result, (const bdStructBufferSerializable *)v3);
  result->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&result->__vftable + 8) = *((_WORD *)v3 + 8);
  *((_QWORD *)&result->__vftable + 3) = v3[3];
  result->m_rootKind = *((_WORD *)v3 + 16);
  result->m_rootID = (unsigned __int64)v3[5];
  return result;
}

/*
==============
bdClansGroupMembershipInfo::getRole
==============
*/
__int64 bdClansGroupMembershipInfo::getRole(bdClansGroupMembershipInfo *this)
{
  return *((unsigned __int16 *)&this->__vftable + 8);
}

/*
==============
bdClansGroupMembershipInfo::isActiveGroup
==============
*/
_BOOL8 bdClansGroupMembershipInfo::isActiveGroup(bdClansGroupMembershipInfo *this)
{
  return this->m_isActiveGroup;
}

/*
==============
bdClansGroupMembershipInfo::serialize
==============
*/
bool bdClansGroupMembershipInfo::serialize(bdClansGroupMembershipInfo *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgroupmembershipinfo.cpp", "bdClansGroupMembershipInfo::serialize", 0x23u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGroupMembershipInfo::bdClansGroupMembershipInfo
==============
*/
void bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(bdClansGroupMembershipInfo *this, const bdClansGroupMembershipInfo *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupMembershipInfo::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)&this->gap59[7], (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansGroupMembershipInfo_vtbl *)&bdClansGroupMembershipInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMembershipInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupMembershipInfo_vtbl *)&bdClansGroupMembershipInfo::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = *((_WORD *)&__that->__vftable + 8);
  *(_QWORD *)this->m_group = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[40], (const bdReferencable *)&__that->m_group[*(int *)(*(_QWORD *)__that->m_group + 4i64)]);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 3), (const bdStructBufferSerializable *)(&__that->__vftable + 3));
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&this->m_group[*(int *)(*(_QWORD *)this->m_group + 4i64)] = &bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)&this->m_group[8] = *(_WORD *)&__that->m_group[8];
  *(_QWORD *)&this->m_group[16] = *(_QWORD *)&__that->m_group[16];
  *(_WORD *)&this->m_group[24] = *(_WORD *)&__that->m_group[24];
  *(_QWORD *)&this->m_group[32] = *(_QWORD *)&__that->m_group[32];
  this->m_isActiveGroup = __that->m_isActiveGroup;
}

