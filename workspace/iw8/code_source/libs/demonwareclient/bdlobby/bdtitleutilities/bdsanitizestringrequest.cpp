/*
==============
bdSanitizeStringRequest::bdSanitizeStringRequest
==============
*/

void __fastcall bdSanitizeStringRequest::bdSanitizeStringRequest(bdSanitizeStringRequest *this)
{
  ??0bdSanitizeStringRequest@@QEAA@XZ(this);
}

/*
==============
bdSanitizeStringRequest::bdSanitizeStringRequest
==============
*/

void __fastcall bdSanitizeStringRequest::bdSanitizeStringRequest(bdSanitizeStringRequest *this, const char *string)
{
  ??0bdSanitizeStringRequest@@QEAA@PEBD@Z(this, string);
}

/*
==============
bdSanitizeStringRequest::bdSanitizeStringRequest
==============
*/
void bdSanitizeStringRequest::bdSanitizeStringRequest(bdSanitizeStringRequest *this, const char *string, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringRequest::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdSanitizeStringBase::bdSanitizeStringBase(this, string);
  this->__vftable = (bdSanitizeStringRequest_vtbl *)&bdSanitizeStringRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringRequest_vtbl *)&bdSanitizeStringRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdSanitizeStringRequest::bdSanitizeStringRequest
==============
*/
void bdSanitizeStringRequest::bdSanitizeStringRequest(bdSanitizeStringRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringRequest::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdSanitizeStringBase::bdSanitizeStringBase(this);
  this->__vftable = (bdSanitizeStringRequest_vtbl *)&bdSanitizeStringRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringRequest_vtbl *)&bdSanitizeStringRequest::`vftable'{for `bdReferencable'};
}

