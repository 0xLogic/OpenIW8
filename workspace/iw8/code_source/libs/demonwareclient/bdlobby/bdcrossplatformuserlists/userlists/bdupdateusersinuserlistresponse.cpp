/*
==============
bdUpdateUsersInUserListResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdUpdateUsersInUserListResponse::getErrorMap(bdUpdateUsersInUserListResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdUpdateUsersInUserListResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdUpdateUsersInUserListResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdUpdateUsersInUserListResponse::handleReplySuccess(bdUpdateUsersInUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdUpdateUsersInUserListResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdUpdateUsersInUserListResponse::bdUpdateUsersInUserListResponse
==============
*/

void __fastcall bdUpdateUsersInUserListResponse::bdUpdateUsersInUserListResponse(bdUpdateUsersInUserListResponse *this)
{
  ??0bdUpdateUsersInUserListResponse@@QEAA@XZ(this);
}

/*
==============
bdUpdateUsersInUserListResponse::bdUpdateUsersInUserListResponse
==============
*/
void bdUpdateUsersInUserListResponse::bdUpdateUsersInUserListResponse(bdUpdateUsersInUserListResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdUpdateUsersInUserListResponse_vtbl *)&bdUpdateUsersInUserListResponse::`vftable';
}

/*
==============
bdUpdateUsersInUserListResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdUpdateUsersInUserListResponse::getErrorMap(bdUpdateUsersInUserListResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_USERLISTS_ERROR_MAP_18, 4u);
  return result;
}

/*
==============
bdUpdateUsersInUserListResponse::handleReplySuccess
==============
*/
__int64 bdUpdateUsersInUserListResponse::handleReplySuccess(bdUpdateUsersInUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return 1i64;
}

