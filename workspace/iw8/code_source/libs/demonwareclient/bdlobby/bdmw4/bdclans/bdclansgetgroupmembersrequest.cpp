/*
==============
bdClansGetGroupMembersRequest::bdClansGetGroupMembersRequest
==============
*/

void __fastcall bdClansGetGroupMembersRequest::bdClansGetGroupMembersRequest(bdClansGetGroupMembersRequest *this, const bdClansGroupIdentifier *group)
{
  ??0bdClansGetGroupMembersRequest@@QEAA@VbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansGetGroupMembersRequest::setGroup
==============
*/

void __fastcall bdClansGetGroupMembersRequest::setGroup(bdClansGetGroupMembersRequest *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansGetGroupMembersRequest@@QEAAXVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansGetGroupMembersRequest::serialize
==============
*/

bool __fastcall bdClansGetGroupMembersRequest::serialize(bdClansGetGroupMembersRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetGroupMembersRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetGroupMembersRequest::setRoles
==============
*/

void __fastcall bdClansGetGroupMembersRequest::setRoles(bdClansGetGroupMembersRequest *this, const unsigned __int16 *roles, const unsigned __int16 numRoles)
{
  ?setRoles@bdClansGetGroupMembersRequest@@QEAAXPEBGG@Z(this, roles, numRoles);
}

/*
==============
bdClansGetGroupMembersRequest::deserialize
==============
*/

bool __fastcall bdClansGetGroupMembersRequest::deserialize(bdClansGetGroupMembersRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetGroupMembersRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupMembersRequest::setUsers
==============
*/

void __fastcall bdClansGetGroupMembersRequest::setUsers(bdClansGetGroupMembersRequest *this, const bdArray<bdUserAccountID> *users)
{
  ?setUsers@bdClansGetGroupMembersRequest@@QEAAXV?$bdArray@VbdUserAccountID@@@@@Z(this, users);
}

/*
==============
bdClansGetGroupMembersRequest::bdClansGetGroupMembersRequest
==============
*/
void bdClansGetGroupMembersRequest::bdClansGetGroupMembersRequest(bdClansGetGroupMembersRequest *this, const bdClansGroupIdentifier *group, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupMembersRequest::`vbtable';
    *(_QWORD *)&this->gap76[2] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap76[10] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupMembersRequest_vtbl *)&bdClansGetGroupMembersRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupMembersRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupMembersRequest_vtbl *)&bdClansGetGroupMembersRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), group);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupMembersRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansGetGroupMembersRequest_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *((_WORD *)&group->__vftable + 8);
  *(_QWORD *)&this->m_group[8] = *((_QWORD *)&group->__vftable + 3);
  *(_WORD *)&this->m_group[16] = group->m_rootKind;
  *(_QWORD *)&this->m_group[24] = group->m_rootID;
  this->m_users.m_data = NULL;
  *(_QWORD *)&this->m_users.m_capacity = 0i64;
  this->m_numRoles = 0;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansGetGroupMembersRequest::deserialize
==============
*/
bool bdClansGetGroupMembersRequest::deserialize(bdClansGetGroupMembersRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupmembersrequest.cpp", "bdClansGetGroupMembersRequest::deserialize", 0x38u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetGroupMembersRequest::serialize
==============
*/
bool bdClansGetGroupMembersRequest::serialize(bdClansGetGroupMembersRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned __int16 v4; 
  unsigned int m_size; 
  bool v6; 
  unsigned int v7; 
  bool result; 

  v4 = 0;
  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) )
    goto LABEL_10;
  m_size = this->m_users.m_size;
  v6 = 1;
  v7 = 0;
  if ( !m_size )
    goto LABEL_9;
  do
  {
    v6 = v6 && (bdHandleAssert(v7 < this->m_users.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdStructUserAccountID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 2u, (const bdStructBufferSerializable *)this->m_users.m_data[v7].gap38));
    ++v7;
  }
  while ( v7 < m_size );
  if ( v6 )
LABEL_9:
    result = 1;
  else
LABEL_10:
    result = 0;
  if ( this->m_numRoles )
  {
    do
      result = result && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_roles[v4++]);
    while ( v4 < this->m_numRoles );
  }
  return result;
}

/*
==============
bdClansGetGroupMembersRequest::setGroup
==============
*/
void bdClansGetGroupMembersRequest::setGroup(bdClansGetGroupMembersRequest *this, const bdClansGroupIdentifier *group)
{
  bdClansGetGroupMembersRequest_vtbl **v3; 

  v3 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v3 + 8) = *((_WORD *)&group->__vftable + 8);
  v3[3] = (bdClansGetGroupMembersRequest_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v3 + 16) = group->m_rootKind;
  v3[5] = (bdClansGetGroupMembersRequest_vtbl *)group->m_rootID;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&group->m_rootID + 1));
}

/*
==============
bdClansGetGroupMembersRequest::setRoles
==============
*/
void bdClansGetGroupMembersRequest::setRoles(bdClansGetGroupMembersRequest *this, const unsigned __int16 *roles, const unsigned __int16 numRoles)
{
  unsigned __int16 v3; 
  __int64 v4; 

  v3 = 0;
  for ( this->m_numRoles = numRoles; v3 < this->m_numRoles; this->m_roles[v4] = roles[v4] )
    v4 = v3++;
}

/*
==============
bdClansGetGroupMembersRequest::setUsers
==============
*/
void bdClansGetGroupMembersRequest::setUsers(bdClansGetGroupMembersRequest *this, const bdArray<bdUserAccountID> *users)
{
  bdClansGetGroupMembersRequest *v3; 
  bdArray<bdStructUserAccountID> *p_m_users; 
  __int64 v5; 
  unsigned int m_size; 
  bool v7; 
  const bdStructUserAccountID *v8; 
  const bdStructUserAccountID *v9; 
  unsigned int v10; 
  unsigned int m_capacity; 
  int v12; 
  bdStructUserAccountID *v13; 
  unsigned int v14; 
  bdStructUserAccountID *v15; 
  unsigned int v16; 
  bdStructUserAccountID *v17; 
  signed __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  bdUserAccountID *m_data; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const bdStructUserAccountID *v27; 
  bdStructUserAccountID v28; 

  v3 = this;
  p_m_users = &this->m_users;
  bdArray<bdStructUserAccountID>::destruct(&this->m_users, this->m_users.m_data, this->m_users.m_size);
  bdMemory::deallocate(p_m_users->m_data);
  p_m_users->m_data = NULL;
  *(_QWORD *)&p_m_users->m_capacity = 0i64;
  v5 = 0i64;
  m_size = users->m_size;
  if ( m_size )
  {
    v7 = m_size != 0;
    do
    {
      bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdUserAccountID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdStructUserAccountID::bdStructUserAccountID(&v28, &users->m_data[v5]);
      v9 = v8;
      v27 = v8;
      v10 = p_m_users->m_size;
      m_capacity = p_m_users->m_capacity;
      if ( v10 == m_capacity )
      {
        v12 = p_m_users->m_capacity;
        if ( !m_capacity )
          v12 = 1;
        v13 = NULL;
        v14 = m_capacity + v12;
        if ( v14 )
        {
          v15 = (bdStructUserAccountID *)bdMemory::allocate(88i64 * v14);
          v13 = v15;
          v16 = p_m_users->m_size;
          v10 = v16;
          if ( v16 )
          {
            v17 = v15;
            v18 = (char *)p_m_users->m_data - (char *)v15;
            v19 = v16;
            do
            {
              if ( v17 )
                bdStructUserAccountID::bdStructUserAccountID(v17, (bdStructUserAccountID *)((char *)v17 + v18));
              ++v17;
              --v19;
            }
            while ( v19 );
            v10 = p_m_users->m_size;
            v3 = this;
          }
        }
        bdArray<bdStructUserAccountID>::destruct(p_m_users, p_m_users->m_data, v10);
        bdMemory::deallocate(p_m_users->m_data);
        p_m_users->m_data = v13;
        p_m_users->m_capacity = v14;
        v9 = v27;
      }
      v20 = p_m_users->m_size;
      if ( &p_m_users->m_data[v20] )
      {
        bdStructUserAccountID::bdStructUserAccountID(&p_m_users->m_data[v20], v9);
        LODWORD(v20) = v3->m_users.m_size;
      }
      p_m_users->m_size = v20 + 1;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v28._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v28.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v28._bytes_48);
      v5 = (unsigned int)(v5 + 1);
      m_size = users->m_size;
      v7 = (unsigned int)v5 < m_size;
    }
    while ( (unsigned int)v5 < m_size );
  }
  m_data = users->m_data;
  if ( m_size )
  {
    v22 = 0i64;
    v23 = 0i64;
    v24 = m_size;
    do
    {
      v25 = *(int *)(*((_QWORD *)&m_data[v22].__vftable + 1) + 4i64);
      (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + v25 + v22 * 72 + 8))((__int64)&m_data->__vftable + v25 + v23 + 8, 0i64);
      v23 += 72i64;
      ++v22;
      --v24;
    }
    while ( v24 );
  }
  bdMemory::deallocate(users->m_data);
  users->m_data = NULL;
  *(_QWORD *)&users->m_capacity = 0i64;
}

