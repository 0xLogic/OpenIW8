/*
==============
bdRejectFriendResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdRejectFriendResponse::getErrorMap(bdRejectFriendResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdRejectFriendResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdRejectFriendResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRejectFriendResponse::handleReplySuccess(bdRejectFriendResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdRejectFriendResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdRejectFriendResponse::bdRejectFriendResponse
==============
*/

void __fastcall bdRejectFriendResponse::bdRejectFriendResponse(bdRejectFriendResponse *this)
{
  ??0bdRejectFriendResponse@@QEAA@XZ(this);
}

/*
==============
bdRejectFriendResponse::~bdRejectFriendResponse
==============
*/

void __fastcall bdRejectFriendResponse::~bdRejectFriendResponse(bdRejectFriendResponse *this)
{
  ??1bdRejectFriendResponse@@UEAA@XZ(this);
}

/*
==============
bdRejectFriendResponse::bdRejectFriendResponse
==============
*/
void bdRejectFriendResponse::bdRejectFriendResponse(bdRejectFriendResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdRejectFriendResponse_vtbl *)&bdRejectFriendResponse::`vftable';
}

/*
==============
bdRejectFriendResponse::~bdRejectFriendResponse
==============
*/
void bdRejectFriendResponse::~bdRejectFriendResponse(bdRejectFriendResponse *this)
{
  this->__vftable = (bdRejectFriendResponse_vtbl *)&bdRejectFriendResponse::`vftable';
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdRejectFriendResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdRejectFriendResponse::getErrorMap(bdRejectFriendResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_FRIENDS_ERROR_MAP_5, 0xBu);
  return result;
}

/*
==============
bdRejectFriendResponse::handleReplySuccess
==============
*/
__int64 bdRejectFriendResponse::handleReplySuccess(bdRejectFriendResponse *this, const bdRESTResponseMessage *reply)
{
  return 1i64;
}

