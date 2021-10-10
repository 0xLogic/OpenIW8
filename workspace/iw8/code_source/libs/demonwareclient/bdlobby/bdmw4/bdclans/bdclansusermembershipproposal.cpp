/*
==============
bdClansUserMembershipProposal::hasAttachment
==============
*/

bool __fastcall bdClansUserMembershipProposal::hasAttachment(bdClansUserMembershipProposal *this)
{
  return ?hasAttachment@bdClansUserMembershipProposal@@QEBA_NXZ(this);
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/

void __fastcall bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this)
{
  ??0bdClansUserMembershipProposal@@QEAA@XZ(this);
}

/*
==============
bdClansUserMembershipProposal::getUserDetails
==============
*/

bdUserDetails *__fastcall bdClansUserMembershipProposal::getUserDetails(bdClansUserMembershipProposal *this, bdUserDetails *result)
{
  return ?getUserDetails@bdClansUserMembershipProposal@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdClansUserMembershipProposal::setAttachment
==============
*/

bool __fastcall bdClansUserMembershipProposal::setAttachment(bdClansUserMembershipProposal *this, const unsigned __int8 *attachment, const unsigned int attachmentSize)
{
  return ?setAttachment@bdClansUserMembershipProposal@@QEAA_NPEBEI@Z(this, attachment, attachmentSize);
}

/*
==============
bdClansUserMembershipProposal::serialize
==============
*/

bool __fastcall bdClansUserMembershipProposal::serialize(bdClansUserMembershipProposal *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansUserMembershipProposal@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansUserMembershipProposal::getAttachment
==============
*/

const unsigned __int8 *__fastcall bdClansUserMembershipProposal::getAttachment(bdClansUserMembershipProposal *this)
{
  return ?getAttachment@bdClansUserMembershipProposal@@QEBAPEBEXZ(this);
}

/*
==============
bdClansUserMembershipProposal::getUser
==============
*/

bdUserAccountID *__fastcall bdClansUserMembershipProposal::getUser(bdClansUserMembershipProposal *this, bdUserAccountID *result)
{
  return ?getUser@bdClansUserMembershipProposal@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdClansUserMembershipProposal::setUser
==============
*/

void __fastcall bdClansUserMembershipProposal::setUser(bdClansUserMembershipProposal *this, const bdUserAccountID *user)
{
  ?setUser@bdClansUserMembershipProposal@@QEAAXVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/

void __fastcall bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this, const bdClansUserMembershipProposal *__that)
{
  ??0bdClansUserMembershipProposal@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansUserMembershipProposal::getAttachmentSize
==============
*/

unsigned int __fastcall bdClansUserMembershipProposal::getAttachmentSize(bdClansUserMembershipProposal *this)
{
  return ?getAttachmentSize@bdClansUserMembershipProposal@@QEBAIXZ(this);
}

/*
==============
bdClansUserMembershipProposal::setRole
==============
*/

void __fastcall bdClansUserMembershipProposal::setRole(bdClansUserMembershipProposal *this, const unsigned __int16 role)
{
  ?setRole@bdClansUserMembershipProposal@@QEAAXG@Z(this, role);
}

/*
==============
bdClansUserMembershipProposal::getRole
==============
*/

unsigned __int16 __fastcall bdClansUserMembershipProposal::getRole(bdClansUserMembershipProposal *this)
{
  return ?getRole@bdClansUserMembershipProposal@@QEBAGXZ(this);
}

/*
==============
bdClansUserMembershipProposal::deserialize
==============
*/

bool __fastcall bdClansUserMembershipProposal::deserialize(bdClansUserMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansUserMembershipProposal@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/

void __fastcall bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this, const bdUserAccountID *user)
{
  ??0bdClansUserMembershipProposal@@QEAA@VbdUserAccountID@@@Z(this, user);
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/
void bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this, const bdClansUserMembershipProposal *__that, int a3)
{
  unsigned __int8 *m_attachment; 
  unsigned __int8 *v6; 
  __int64 v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansUserMembershipProposal::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap4B8, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansUserMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2), (const bdStructUserDetails *)(&__that->__vftable + 2));
  this->m_role = __that->m_role;
  this->m_attachmentSize = __that->m_attachmentSize;
  m_attachment = this->m_attachment;
  v6 = __that->m_attachment;
  v7 = 8i64;
  do
  {
    *(_OWORD *)m_attachment = *(_OWORD *)v6;
    *((_OWORD *)m_attachment + 1) = *((_OWORD *)v6 + 1);
    *((_OWORD *)m_attachment + 2) = *((_OWORD *)v6 + 2);
    *((_OWORD *)m_attachment + 3) = *((_OWORD *)v6 + 3);
    *((_OWORD *)m_attachment + 4) = *((_OWORD *)v6 + 4);
    *((_OWORD *)m_attachment + 5) = *((_OWORD *)v6 + 5);
    *((_OWORD *)m_attachment + 6) = *((_OWORD *)v6 + 6);
    m_attachment += 128;
    *((_OWORD *)m_attachment - 1) = *((_OWORD *)v6 + 7);
    v6 += 128;
    --v7;
  }
  while ( v7 );
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/
void bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this, const bdUserAccountID *user, int a3)
{
  const char *AccountType; 
  const bdUserDetails *v6; 
  const bdUserDetails *v7; 
  unsigned __int64 other[5]; 
  bdStructUserDetails v9; 

  other[1] = -2i64;
  other[2] = (unsigned __int64)this;
  other[3] = (unsigned __int64)user;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansUserMembershipProposal::`vbtable';
    *(_QWORD *)this->gap4B8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4B8[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansUserMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  this->m_role = 0;
  this->m_attachmentSize = 0;
  AccountType = bdUserAccountID::getAccountType((bdUserAccountID *)user);
  other[0] = bdUserAccountID::getUserID((bdUserAccountID *)user);
  bdStructUserDetails::bdStructUserDetails(&v9, other, AccountType);
  v7 = v6;
  bdUserDetails::operator=((bdUserDetails *)(&this->__vftable + 2), v6);
  bdReferencable::operator=((bdReferencable *)&this->m_user[*(int *)(*(_QWORD *)&this->m_user[120] + 4i64) + 120], (const bdReferencable *)&v7->gap79[*(int *)(*(_QWORD *)&v7->gap79[15] + 4i64) + 15]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v9._bytes_90);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v9.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)v9._bytes_90);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

/*
==============
bdClansUserMembershipProposal::bdClansUserMembershipProposal
==============
*/
void bdClansUserMembershipProposal::bdClansUserMembershipProposal(bdClansUserMembershipProposal *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansUserMembershipProposal::`vbtable';
    *(_QWORD *)this->gap4B8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4B8[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansUserMembershipProposal_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansUserMembershipProposal_vtbl *)&bdClansUserMembershipProposal::`vftable'{for `bdReferencable'};
  bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&this->__vftable + 2));
  this->m_role = 0;
  this->m_attachmentSize = 0;
}

/*
==============
bdClansUserMembershipProposal::deserialize
==============
*/
bool bdClansUserMembershipProposal::deserialize(bdClansUserMembershipProposal *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferDeserializer::readUInt16(deserializer, 2u, &this->m_role) && bdStructBufferDeserializer::readBlob(deserializer, 3u, this->m_attachment, 0x400u, &this->m_attachmentSize);
}

/*
==============
bdClansUserMembershipProposal::getAttachment
==============
*/
unsigned __int8 *bdClansUserMembershipProposal::getAttachment(bdClansUserMembershipProposal *this)
{
  return this->m_attachment;
}

/*
==============
bdClansUserMembershipProposal::getAttachmentSize
==============
*/
__int64 bdClansUserMembershipProposal::getAttachmentSize(bdClansUserMembershipProposal *this)
{
  return this->m_attachmentSize;
}

/*
==============
bdClansUserMembershipProposal::getRole
==============
*/
__int64 bdClansUserMembershipProposal::getRole(bdClansUserMembershipProposal *this)
{
  return this->m_role;
}

/*
==============
bdClansUserMembershipProposal::getUser
==============
*/
bdUserAccountID *bdClansUserMembershipProposal::getUser(bdClansUserMembershipProposal *this, bdUserAccountID *result)
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
bdClansUserMembershipProposal::getUserDetails
==============
*/
bdUserDetails *bdClansUserMembershipProposal::getUserDetails(bdClansUserMembershipProposal *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, (const bdUserDetails *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansUserMembershipProposal::hasAttachment
==============
*/
bool bdClansUserMembershipProposal::hasAttachment(bdClansUserMembershipProposal *this)
{
  return this->m_attachmentSize != 0;
}

/*
==============
bdClansUserMembershipProposal::serialize
==============
*/
bool bdClansUserMembershipProposal::serialize(bdClansUserMembershipProposal *this, bdStructBufferSerializer *serializer)
{
  bool result; 
  unsigned int m_attachmentSize; 

  result = bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)&this->m_user[112]) && bdStructBufferSerializer::writeUInt16(serializer, 2u, this->m_role);
  m_attachmentSize = this->m_attachmentSize;
  if ( m_attachmentSize )
    return result && bdStructBufferSerializer::writeBlob(serializer, 3u, this->m_attachment, m_attachmentSize);
  return result;
}

/*
==============
bdClansUserMembershipProposal::setAttachment
==============
*/
char bdClansUserMembershipProposal::setAttachment(bdClansUserMembershipProposal *this, const unsigned __int8 *attachment, const unsigned int attachmentSize)
{
  if ( attachmentSize > 0x400 )
    return 0;
  this->m_attachmentSize = attachmentSize;
  memcpy_0(this->m_attachment, attachment, attachmentSize);
  return 1;
}

/*
==============
bdClansUserMembershipProposal::setRole
==============
*/
void bdClansUserMembershipProposal::setRole(bdClansUserMembershipProposal *this, const unsigned __int16 role)
{
  this->m_role = role;
}

/*
==============
bdClansUserMembershipProposal::setUser
==============
*/
void bdClansUserMembershipProposal::setUser(bdClansUserMembershipProposal *this, const bdUserAccountID *user)
{
  const char *AccountType; 
  const bdUserDetails *v5; 
  const bdUserDetails *v6; 
  unsigned __int64 other[4]; 
  bdStructUserDetails v8; 

  other[1] = -2i64;
  other[2] = (unsigned __int64)user;
  AccountType = bdUserAccountID::getAccountType((bdUserAccountID *)user);
  other[0] = bdUserAccountID::getUserID((bdUserAccountID *)user);
  bdStructUserDetails::bdStructUserDetails(&v8, other, AccountType);
  v6 = v5;
  bdUserDetails::operator=((bdUserDetails *)(&this->__vftable + 2), v5);
  bdReferencable::operator=((bdReferencable *)&this->m_user[*(int *)(*(_QWORD *)&this->m_user[120] + 4i64) + 120], (const bdReferencable *)&v6->gap79[*(int *)(*(_QWORD *)&v6->gap79[15] + 4i64) + 15]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v8._bytes_90);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v8.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)v8._bytes_90);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
}

