/*
==============
bdClansGroupMembershipProposal::getProposingUser
==============
*/

bdUserAccountID *__fastcall bdClansGroupMembershipProposal::getProposingUser(bdClansGroupMembershipProposal *this, bdUserAccountID *result)
{
  return ?getProposingUser@bdClansGroupMembershipProposal@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipProposal::bdClansGroupMembershipProposal
==============
*/

void __fastcall bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(bdClansGroupMembershipProposal *this)
{
  ??0bdClansGroupMembershipProposal@@QEAA@XZ(this);
}

/*
==============
bdClansGroupMembershipProposal::getReplacesGroupID
==============
*/

unsigned __int64 __fastcall bdClansGroupMembershipProposal::getReplacesGroupID(bdClansGroupMembershipProposal *this)
{
  return ?getReplacesGroupID@bdClansGroupMembershipProposal@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::getProposingUserDetails
==============
*/

bdUserDetails *__fastcall bdClansGroupMembershipProposal::getProposingUserDetails(bdClansGroupMembershipProposal *this, bdUserDetails *result)
{
  return ?getProposingUserDetails@bdClansGroupMembershipProposal@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipProposal::deserialize
==============
*/

bool __fastcall bdClansGroupMembershipProposal::deserialize(bdClansGroupMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupMembershipProposal@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupMembershipProposal::getUpdatedTimestamp
==============
*/

unsigned __int64 __fastcall bdClansGroupMembershipProposal::getUpdatedTimestamp(bdClansGroupMembershipProposal *this)
{
  return ?getUpdatedTimestamp@bdClansGroupMembershipProposal@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::getRole
==============
*/

unsigned __int16 __fastcall bdClansGroupMembershipProposal::getRole(bdClansGroupMembershipProposal *this)
{
  return ?getRole@bdClansGroupMembershipProposal@@QEBAGXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::getAttachment
==============
*/

const unsigned __int8 *__fastcall bdClansGroupMembershipProposal::getAttachment(bdClansGroupMembershipProposal *this)
{
  return ?getAttachment@bdClansGroupMembershipProposal@@QEBAPEBEXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::bdClansGroupMembershipProposal
==============
*/

void __fastcall bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(bdClansGroupMembershipProposal *this, const bdClansGroupMembershipProposal *__that)
{
  ??0bdClansGroupMembershipProposal@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansGroupMembershipProposal::getTargetUser
==============
*/

bdUserAccountID *__fastcall bdClansGroupMembershipProposal::getTargetUser(bdClansGroupMembershipProposal *this, bdUserAccountID *result)
{
  return ?getTargetUser@bdClansGroupMembershipProposal@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipProposal::serialize
==============
*/

bool __fastcall bdClansGroupMembershipProposal::serialize(bdClansGroupMembershipProposal *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGroupMembershipProposal@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGroupMembershipProposal::getTargetUserDetails
==============
*/

bdUserDetails *__fastcall bdClansGroupMembershipProposal::getTargetUserDetails(bdClansGroupMembershipProposal *this, bdUserDetails *result)
{
  return ?getTargetUserDetails@bdClansGroupMembershipProposal@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipProposal::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansGroupMembershipProposal::getGroup(bdClansGroupMembershipProposal *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansGroupMembershipProposal@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansGroupMembershipProposal::getAttachmentSize
==============
*/

unsigned int __fastcall bdClansGroupMembershipProposal::getAttachmentSize(bdClansGroupMembershipProposal *this)
{
  return ?getAttachmentSize@bdClansGroupMembershipProposal@@QEBAIXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::hasAttachment
==============
*/

bool __fastcall bdClansGroupMembershipProposal::hasAttachment(bdClansGroupMembershipProposal *this)
{
  return ?hasAttachment@bdClansGroupMembershipProposal@@QEBA_NXZ(this);
}

/*
==============
bdClansGroupMembershipProposal::bdClansGroupMembershipProposal
==============
*/
void bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(bdClansGroupMembershipProposal *this, const bdClansGroupMembershipProposal *__that, int a3)
{
  __int64 v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupMembershipProposal::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_updatedTimestamp + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2), (const bdStructUserDetails *)(&__that->__vftable + 2));
  bdStructUserDetails::bdStructUserDetails(&this->m_targetUser, &__that->m_targetUser);
  this->m_role = __that->m_role;
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group, &__that->m_group);
  this->m_replacesGroupID = __that->m_replacesGroupID;
  this->m_attachmentSize = __that->m_attachmentSize;
  _RCX = this->m_attachment;
  _RAX = __that->m_attachment;
  v7 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128;
    --v7;
  }
  while ( v7 );
  this->m_updatedTimestamp = __that->m_updatedTimestamp;
}

/*
==============
bdClansGroupMembershipProposal::bdClansGroupMembershipProposal
==============
*/
void bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(bdClansGroupMembershipProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupMembershipProposal::`vbtable';
    *(&this->m_updatedTimestamp + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_updatedTimestamp + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  bdStructUserDetails::bdStructUserDetails(&this->m_targetUser);
  this->m_role = 0;
  bdClansGroupIdentifier::bdClansGroupIdentifier(&this->m_group);
  this->m_replacesGroupID = 0i64;
  this->m_attachmentSize = 0;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupMembershipProposal::deserialize
==============
*/
bool bdClansGroupMembershipProposal::deserialize(bdClansGroupMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_proposingUser[112]) && bdStructBufferDeserializer::readObject(deserializer, 2u, (bdStructBufferSerializable *)&this->m_targetUser.gap79[7]) && bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_role) && bdStructBufferDeserializer::readObject(deserializer, 4u, &this->m_group) && bdStructBufferDeserializer::readUInt64(deserializer, 5u, &this->m_replacesGroupID) && bdStructBufferDeserializer::readBlob(deserializer, 6u, this->m_attachment, 0x400u, &this->m_attachmentSize) && bdStructBufferDeserializer::readUInt64(deserializer, 7u, &this->m_updatedTimestamp);
}

/*
==============
bdClansGroupMembershipProposal::getAttachment
==============
*/
unsigned __int8 *bdClansGroupMembershipProposal::getAttachment(bdClansGroupMembershipProposal *this)
{
  return this->m_attachment;
}

/*
==============
bdClansGroupMembershipProposal::getAttachmentSize
==============
*/
__int64 bdClansGroupMembershipProposal::getAttachmentSize(bdClansGroupMembershipProposal *this)
{
  return this->m_attachmentSize;
}

/*
==============
bdClansGroupMembershipProposal::getGroup
==============
*/
bdClansGroupIdentifier *bdClansGroupMembershipProposal::getGroup(bdClansGroupMembershipProposal *this, bdClansGroupIdentifier *result)
{
  bdClansGroupIdentifier *p_m_group; 

  p_m_group = &this->m_group;
  *((_QWORD *)&result->__vftable + 1) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)(&result->m_rootID + 1), (const bdReferencable *)((char *)&this->m_group.__vftable + *(int *)(*((_QWORD *)&this->m_group.__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(result, p_m_group);
  result->__vftable = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupIdentifier_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdClansGroupIdentifier_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *((_WORD *)&result->__vftable + 8) = *((_WORD *)&p_m_group->__vftable + 8);
  *((_QWORD *)&result->__vftable + 3) = *((_QWORD *)&p_m_group->__vftable + 3);
  result->m_rootKind = p_m_group->m_rootKind;
  result->m_rootID = p_m_group->m_rootID;
  return result;
}

/*
==============
bdClansGroupMembershipProposal::getProposingUser
==============
*/
bdUserAccountID *bdClansGroupMembershipProposal::getProposingUser(bdClansGroupMembershipProposal *this, bdUserAccountID *result)
{
  bdUserDetails *v2; 
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  v2 = (bdUserDetails *)(&this->__vftable + 2);
  AccountType = bdUserDetails::getAccountType((bdUserDetails *)(&this->__vftable + 2));
  userID = bdUserDetails::getUserID(v2);
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdClansGroupMembershipProposal::getProposingUserDetails
==============
*/
bdUserDetails *bdClansGroupMembershipProposal::getProposingUserDetails(bdClansGroupMembershipProposal *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansGroupMembershipProposal::getReplacesGroupID
==============
*/
unsigned __int64 bdClansGroupMembershipProposal::getReplacesGroupID(bdClansGroupMembershipProposal *this)
{
  return this->m_replacesGroupID;
}

/*
==============
bdClansGroupMembershipProposal::getRole
==============
*/
__int64 bdClansGroupMembershipProposal::getRole(bdClansGroupMembershipProposal *this)
{
  return this->m_role;
}

/*
==============
bdClansGroupMembershipProposal::getTargetUser
==============
*/
bdUserAccountID *bdClansGroupMembershipProposal::getTargetUser(bdClansGroupMembershipProposal *this, bdUserAccountID *result)
{
  bdStructUserDetails *p_m_targetUser; 
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  p_m_targetUser = &this->m_targetUser;
  AccountType = bdUserDetails::getAccountType(&this->m_targetUser);
  userID = bdUserDetails::getUserID(p_m_targetUser);
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdClansGroupMembershipProposal::getTargetUserDetails
==============
*/
bdUserDetails *bdClansGroupMembershipProposal::getTargetUserDetails(bdClansGroupMembershipProposal *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, &this->m_targetUser);
  return result;
}

/*
==============
bdClansGroupMembershipProposal::getUpdatedTimestamp
==============
*/
unsigned __int64 bdClansGroupMembershipProposal::getUpdatedTimestamp(bdClansGroupMembershipProposal *this)
{
  return this->m_updatedTimestamp;
}

/*
==============
bdClansGroupMembershipProposal::hasAttachment
==============
*/
bool bdClansGroupMembershipProposal::hasAttachment(bdClansGroupMembershipProposal *this)
{
  return this->m_attachmentSize != 0;
}

/*
==============
bdClansGroupMembershipProposal::serialize
==============
*/
bool bdClansGroupMembershipProposal::serialize(bdClansGroupMembershipProposal *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgroupmembershipproposal.cpp", "bdClansGroupMembershipProposal::serialize", 0x4Fu, "NOT IMPLEMENTED");
  return 0;
}

