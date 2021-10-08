/*
==============
bdRemoveUsersFromUserListResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdRemoveUsersFromUserListResponse::getErrorMap(bdRemoveUsersFromUserListResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdRemoveUsersFromUserListResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdRemoveUsersFromUserListResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRemoveUsersFromUserListResponse::handleReplySuccess(bdRemoveUsersFromUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdRemoveUsersFromUserListResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdRemoveUsersFromUserListResponse::bdRemoveUsersFromUserListResponse
==============
*/

void __fastcall bdRemoveUsersFromUserListResponse::bdRemoveUsersFromUserListResponse(bdRemoveUsersFromUserListResponse *this)
{
  ??0bdRemoveUsersFromUserListResponse@@QEAA@XZ(this);
}

/*
==============
bdRemoveUsersFromUserListResponse::bdRemoveUsersFromUserListResponse
==============
*/
void bdRemoveUsersFromUserListResponse::bdRemoveUsersFromUserListResponse(bdRemoveUsersFromUserListResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdRemoveUsersFromUserListResponse_vtbl *)&bdRemoveUsersFromUserListResponse::`vftable';
}

/*
==============
bdRemoveUsersFromUserListResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdRemoveUsersFromUserListResponse::getErrorMap(bdRemoveUsersFromUserListResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_USERLISTS_ERROR_MAP_19, 4u);
  return result;
}

/*
==============
bdRemoveUsersFromUserListResponse::handleReplySuccess
==============
*/
__int64 bdRemoveUsersFromUserListResponse::handleReplySuccess(bdRemoveUsersFromUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return 1i64;
}

