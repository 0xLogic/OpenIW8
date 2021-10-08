/*
==============
bdCommsReportMessagesViewedResponse::operator delete
==============
*/

void __fastcall bdCommsReportMessagesViewedResponse::operator delete(void *p)
{
  ??3bdCommsReportMessagesViewedResponse@@SAXPEAX@Z(p);
}

/*
==============
bdCommsReportMessagesViewedResponse::operator delete
==============
*/
void bdCommsReportMessagesViewedResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

