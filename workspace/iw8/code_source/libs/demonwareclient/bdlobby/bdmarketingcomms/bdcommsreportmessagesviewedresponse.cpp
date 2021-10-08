/*
==============
bdCommsReportMessagesViewedResponse::bdCommsReportMessagesViewedResponse
==============
*/

void __fastcall bdCommsReportMessagesViewedResponse::bdCommsReportMessagesViewedResponse(bdCommsReportMessagesViewedResponse *this)
{
  ??0bdCommsReportMessagesViewedResponse@@QEAA@XZ(this);
}

/*
==============
bdCommsReportMessagesViewedResponse::deserialize
==============
*/

bool __fastcall bdCommsReportMessagesViewedResponse::deserialize(bdCommsReportMessagesViewedResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsReportMessagesViewedResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsReportMessagesViewedResponse::reset
==============
*/

void __fastcall bdCommsReportMessagesViewedResponse::reset(bdCommsReportMessagesViewedResponse *this)
{
  ?reset@bdCommsReportMessagesViewedResponse@@QEAAXXZ(this);
}

/*
==============
bdCommsReportMessagesViewedResponse::serialize
==============
*/

bool __fastcall bdCommsReportMessagesViewedResponse::serialize(bdCommsReportMessagesViewedResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsReportMessagesViewedResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsReportMessagesViewedResponse::bdCommsReportMessagesViewedResponse
==============
*/
void bdCommsReportMessagesViewedResponse::bdCommsReportMessagesViewedResponse(bdCommsReportMessagesViewedResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsReportMessagesViewedResponse::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsReportMessagesViewedResponse_vtbl *)&bdCommsReportMessagesViewedResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsReportMessagesViewedResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsReportMessagesViewedResponse_vtbl *)&bdCommsReportMessagesViewedResponse::`vftable'{for `bdReferencable'};
}

/*
==============
bdCommsReportMessagesViewedResponse::deserialize
==============
*/
char bdCommsReportMessagesViewedResponse::deserialize(bdCommsReportMessagesViewedResponse *this, bdStructBufferDeserializer *deserializer)
{
  return 1;
}

/*
==============
bdCommsReportMessagesViewedResponse::reset
==============
*/
void bdCommsReportMessagesViewedResponse::reset(bdCommsReportMessagesViewedResponse *this)
{
  ;
}

/*
==============
bdCommsReportMessagesViewedResponse::serialize
==============
*/
bool bdCommsReportMessagesViewedResponse::serialize(bdCommsReportMessagesViewedResponse *this, bdStructBufferSerializer *serializer)
{
  return 0;
}

