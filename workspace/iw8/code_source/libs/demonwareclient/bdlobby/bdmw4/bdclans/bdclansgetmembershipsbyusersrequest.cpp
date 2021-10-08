/*
==============
bdClansGetMembershipsByUsersRequest::setUsers
==============
*/

void __fastcall bdClansGetMembershipsByUsersRequest::setUsers(bdClansGetMembershipsByUsersRequest *this, const bdArray<bdUserAccountID> *users)
{
  ?setUsers@bdClansGetMembershipsByUsersRequest@@QEAAXV?$bdArray@VbdUserAccountID@@@@@Z(this, users);
}

/*
==============
bdClansGetMembershipsByUsersRequest::deserialize
==============
*/

bool __fastcall bdClansGetMembershipsByUsersRequest::deserialize(bdClansGetMembershipsByUsersRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetMembershipsByUsersRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetMembershipsByUsersRequest::setKinds
==============
*/

void __fastcall bdClansGetMembershipsByUsersRequest::setKinds(bdClansGetMembershipsByUsersRequest *this, const unsigned __int16 *kinds, const unsigned __int16 numKinds)
{
  ?setKinds@bdClansGetMembershipsByUsersRequest@@QEAAXPEBGG@Z(this, kinds, numKinds);
}

/*
==============
bdClansGetMembershipsByUsersRequest::bdClansGetMembershipsByUsersRequest
==============
*/

void __fastcall bdClansGetMembershipsByUsersRequest::bdClansGetMembershipsByUsersRequest(bdClansGetMembershipsByUsersRequest *this, const bdArray<bdUserAccountID> *users)
{
  ??0bdClansGetMembershipsByUsersRequest@@QEAA@V?$bdArray@VbdUserAccountID@@@@@Z(this, users);
}

/*
==============
bdClansGetMembershipsByUsersRequest::serialize
==============
*/

bool __fastcall bdClansGetMembershipsByUsersRequest::serialize(bdClansGetMembershipsByUsersRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetMembershipsByUsersRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetMembershipsByUsersRequest::bdClansGetMembershipsByUsersRequest
==============
*/
void bdClansGetMembershipsByUsersRequest::bdClansGetMembershipsByUsersRequest(bdClansGetMembershipsByUsersRequest *this, const bdArray<bdUserAccountID> *users, int a3)
{
  bdArray<bdUserAccountID> *v3; 
  bdArray<bdStructUserAccountID> *v5; 
  unsigned int v6; 
  unsigned int m_size; 
  bool v8; 
  const bdStructUserAccountID *v9; 
  const bdStructUserAccountID *v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  bdStructUserAccountID *v14; 
  unsigned int v15; 
  unsigned int v16; 
  bdStructUserAccountID *v17; 
  signed __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  const bdStructUserAccountID *v24; 
  bdStructUserAccountID v25; 

  v3 = (bdArray<bdUserAccountID> *)users;
  LODWORD(v22) = 0;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetMembershipsByUsersRequest::`vbtable';
    *(_QWORD *)&this->gap36[2] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap36[10] = 0;
    LODWORD(v22) = 1;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetMembershipsByUsersRequest_vtbl *)&bdClansGetMembershipsByUsersRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetMembershipsByUsersRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetMembershipsByUsersRequest_vtbl *)&bdClansGetMembershipsByUsersRequest::`vftable'{for `bdReferencable'};
  v5 = (bdArray<bdStructUserAccountID> *)(&this->__vftable + 2);
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_numKinds = 0;
  v6 = 0;
  m_size = v3->m_size;
  if ( m_size )
  {
    v8 = m_size != 0;
    do
    {
      bdHandleAssert(v8, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdUserAccountID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed", v22);
      bdStructUserAccountID::bdStructUserAccountID(&v25, &v3->m_data[v6]);
      v10 = v9;
      v24 = v9;
      v11 = *((_DWORD *)&this->__vftable + 7);
      v12 = *((_DWORD *)&this->__vftable + 6);
      if ( v11 == v12 )
      {
        v13 = *((_DWORD *)&this->__vftable + 6);
        if ( !v12 )
          v13 = 1;
        v14 = NULL;
        v15 = v12 + v13;
        if ( v15 )
        {
          v14 = (bdStructUserAccountID *)bdMemory::allocate(88i64 * v15);
          v16 = *((_DWORD *)&this->__vftable + 7);
          v11 = v16;
          if ( v16 )
          {
            v17 = v14;
            v18 = (char *)v5->m_data - (char *)v14;
            v19 = v16;
            do
            {
              if ( v17 )
                bdStructUserAccountID::bdStructUserAccountID(v17, (bdStructUserAccountID *)((char *)v17 + v18));
              ++v17;
              --v19;
            }
            while ( v19 );
            v11 = *((_DWORD *)&this->__vftable + 7);
            v3 = (bdArray<bdUserAccountID> *)users;
          }
        }
        bdArray<bdStructUserAccountID>::destruct(v5, v5->m_data, v11);
        bdMemory::deallocate(v5->m_data);
        v5->m_data = v14;
        *((_DWORD *)&this->__vftable + 6) = v15;
        v10 = v24;
      }
      v20 = *((unsigned int *)&this->__vftable + 7);
      if ( &v5->m_data[v20] )
      {
        bdStructUserAccountID::bdStructUserAccountID(&v5->m_data[v20], v10);
        LODWORD(v20) = *((_DWORD *)&this->__vftable + 7);
      }
      *((_DWORD *)&this->__vftable + 7) = v20 + 1;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v25._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v25.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v25._bytes_48);
      ++v6;
      v21 = v3->m_size;
      v8 = v6 < v21;
    }
    while ( v6 < v21 );
  }
  bdArray<bdUserAccountID>::~bdArray<bdUserAccountID>(v3);
}

/*
==============
bdClansGetMembershipsByUsersRequest::deserialize
==============
*/
bool bdClansGetMembershipsByUsersRequest::deserialize(bdClansGetMembershipsByUsersRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetmembershipsbyusersrequest.cpp", "bdClansGetMembershipsByUsersRequest::deserialize", 0x33u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetMembershipsByUsersRequest::serialize
==============
*/
bool bdClansGetMembershipsByUsersRequest::serialize(bdClansGetMembershipsByUsersRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned __int16 v2; 
  unsigned int v3; 
  bool result; 
  unsigned int i; 

  v2 = 0;
  v3 = *((_DWORD *)&this->__vftable + 7);
  result = 1;
  for ( i = 0; i < v3; ++i )
    result = result && (bdHandleAssert(i < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdStructUserAccountID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(*((_QWORD *)&this->__vftable + 2) + 88i64 * i + 56)));
  if ( this->m_numKinds )
  {
    do
      result = result && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_kinds[v2++]);
    while ( v2 < this->m_numKinds );
  }
  return result;
}

/*
==============
bdClansGetMembershipsByUsersRequest::setKinds
==============
*/
void bdClansGetMembershipsByUsersRequest::setKinds(bdClansGetMembershipsByUsersRequest *this, const unsigned __int16 *kinds, const unsigned __int16 numKinds)
{
  unsigned __int16 v3; 
  __int64 v4; 

  v3 = 0;
  for ( this->m_numKinds = numKinds; v3 < this->m_numKinds; this->m_kinds[v4] = kinds[v4] )
    v4 = v3++;
}

/*
==============
bdClansGetMembershipsByUsersRequest::setUsers
==============
*/
void bdClansGetMembershipsByUsersRequest::setUsers(bdClansGetMembershipsByUsersRequest *this, const bdArray<bdUserAccountID> *users)
{
  bdClansGetMembershipsByUsersRequest *v3; 
  bdClansGetMembershipsByUsersRequest_vtbl **v4; 
  __int64 v5; 
  unsigned int m_size; 
  bool v7; 
  const bdStructUserAccountID *v8; 
  const bdStructUserAccountID *v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  bdClansGetMembershipsByUsersRequest_vtbl *v13; 
  unsigned int v14; 
  bdStructUserAccountID *v15; 
  unsigned int v16; 
  bdStructUserAccountID *v17; 
  signed __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  const bdStructUserAccountID *v23; 
  bdStructUserAccountID v24; 

  v3 = this;
  v4 = &this->__vftable + 2;
  bdArray<bdStructUserAccountID>::destruct((bdArray<bdStructUserAccountID> *)&this->__vftable + 1, *((bdStructUserAccountID **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*v4);
  *v4 = NULL;
  v4[1] = NULL;
  v5 = 0i64;
  m_size = users->m_size;
  if ( m_size )
  {
    v7 = m_size != 0;
    do
    {
      bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdUserAccountID>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdStructUserAccountID::bdStructUserAccountID(&v24, &users->m_data[v5]);
      v9 = v8;
      v23 = v8;
      v10 = *((_DWORD *)v4 + 3);
      v11 = *((_DWORD *)v4 + 2);
      if ( v10 == v11 )
      {
        v12 = *((_DWORD *)v4 + 2);
        if ( !v11 )
          v12 = 1;
        v13 = NULL;
        v14 = v11 + v12;
        if ( v14 )
        {
          v15 = (bdStructUserAccountID *)bdMemory::allocate(88i64 * v14);
          v13 = (bdClansGetMembershipsByUsersRequest_vtbl *)v15;
          v16 = *((_DWORD *)v4 + 3);
          v10 = v16;
          if ( v16 )
          {
            v17 = v15;
            v18 = (char *)*v4 - (char *)v15;
            v19 = v16;
            do
            {
              if ( v17 )
                bdStructUserAccountID::bdStructUserAccountID(v17, (bdStructUserAccountID *)((char *)v17 + v18));
              ++v17;
              --v19;
            }
            while ( v19 );
            v10 = *((_DWORD *)v4 + 3);
            v3 = this;
          }
        }
        bdArray<bdStructUserAccountID>::destruct((bdArray<bdStructUserAccountID> *)v4, (bdStructUserAccountID *)*v4, v10);
        bdMemory::deallocate(*v4);
        *v4 = v13;
        *((_DWORD *)v4 + 2) = v14;
        v9 = v23;
      }
      v20 = *((unsigned int *)v4 + 3);
      if ( (bdClansGetMembershipsByUsersRequest_vtbl *)((char *)*v4 + 88 * v20) )
      {
        bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)*v4 + v20, v9);
        LODWORD(v20) = *((_DWORD *)&v3->__vftable + 7);
      }
      *((_DWORD *)v4 + 3) = v20 + 1;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v24._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v24.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v24._bytes_48);
      v5 = (unsigned int)(v5 + 1);
      v21 = users->m_size;
      v7 = (unsigned int)v5 < v21;
    }
    while ( (unsigned int)v5 < v21 );
  }
  bdArray<bdUserAccountID>::~bdArray<bdUserAccountID>((bdArray<bdUserAccountID> *)users);
}

