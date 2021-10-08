/*
==============
bdABTestingRequest::bdABTestingRequest
==============
*/

void __fastcall bdABTestingRequest::bdABTestingRequest(bdABTestingRequest *this)
{
  ??0bdABTestingRequest@@QEAA@XZ(this);
}

/*
==============
bdABTestingRequest::bdABTestingRequest
==============
*/
void bdABTestingRequest::bdABTestingRequest(bdABTestingRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdABTestingRequest::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  bdHTTPProxyRequest::bdHTTPProxyRequest(this);
  this->__vftable = (bdABTestingRequest_vtbl *)&bdABTestingRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdABTestingRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdABTestingRequest_vtbl *)&bdABTestingRequest::`vftable'{for `bdReferencable'};
}

