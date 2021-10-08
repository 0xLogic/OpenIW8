/*
==============
bdSanitizeStringResponse::bdSanitizeStringResponse
==============
*/

void __fastcall bdSanitizeStringResponse::bdSanitizeStringResponse(bdSanitizeStringResponse *this)
{
  ??0bdSanitizeStringResponse@@QEAA@XZ(this);
}

/*
==============
bdSanitizeStringResponse::bdSanitizeStringResponse
==============
*/

void __fastcall bdSanitizeStringResponse::bdSanitizeStringResponse(bdSanitizeStringResponse *this, const char *string)
{
  ??0bdSanitizeStringResponse@@QEAA@PEBD@Z(this, string);
}

/*
==============
bdSanitizeStringResponse::bdSanitizeStringResponse
==============
*/
void bdSanitizeStringResponse::bdSanitizeStringResponse(bdSanitizeStringResponse *this, const char *string, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringResponse::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdSanitizeStringBase::bdSanitizeStringBase(this, string);
  this->__vftable = (bdSanitizeStringResponse_vtbl *)&bdSanitizeStringResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringResponse_vtbl *)&bdSanitizeStringResponse::`vftable'{for `bdReferencable'};
}

/*
==============
bdSanitizeStringResponse::bdSanitizeStringResponse
==============
*/
void bdSanitizeStringResponse::bdSanitizeStringResponse(bdSanitizeStringResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSanitizeStringResponse::`vbtable';
    *(_QWORD *)&this->m_string[1008] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_string[1016] = 0;
  }
  bdSanitizeStringBase::bdSanitizeStringBase(this);
  this->__vftable = (bdSanitizeStringResponse_vtbl *)&bdSanitizeStringResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdSanitizeStringResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSanitizeStringResponse_vtbl *)&bdSanitizeStringResponse::`vftable'{for `bdReferencable'};
}

