/*
==============
bdSetUserPresenceResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdSetUserPresenceResponse::handleReplySuccess(bdSetUserPresenceResponse *this, const bdRESTResponseMessage *__formal)
{
  return ?handleReplySuccess@bdSetUserPresenceResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, __formal);
}

/*
==============
bdSetUserPresenceResponse::bdSetUserPresenceResponse
==============
*/

void __fastcall bdSetUserPresenceResponse::bdSetUserPresenceResponse(bdSetUserPresenceResponse *this)
{
  ??0bdSetUserPresenceResponse@@QEAA@XZ(this);
}

/*
==============
bdSetUserPresenceResponse::bdSetUserPresenceResponse
==============
*/
void bdSetUserPresenceResponse::bdSetUserPresenceResponse(bdSetUserPresenceResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdSetUserPresenceResponse_vtbl *)&bdSetUserPresenceResponse::`vftable';
}

/*
==============
bdSetUserPresenceResponse::handleReplySuccess
==============
*/
__int64 bdSetUserPresenceResponse::handleReplySuccess(bdSetUserPresenceResponse *this, const bdRESTResponseMessage *__formal)
{
  return 1i64;
}

