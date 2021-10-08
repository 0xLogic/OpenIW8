/*
==============
bdCreateUserListResponse::bdCreateUserListResponse
==============
*/

void __fastcall bdCreateUserListResponse::bdCreateUserListResponse(bdCreateUserListResponse *this)
{
  ??0bdCreateUserListResponse@@QEAA@XZ(this);
}

/*
==============
bdCreateUserListResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdCreateUserListResponse::getErrorMap(bdCreateUserListResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdCreateUserListResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdCreateUserListResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdCreateUserListResponse::handleReplySuccess(bdCreateUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdCreateUserListResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdCreateUserListResponse::bdCreateUserListResponse
==============
*/
void bdCreateUserListResponse::bdCreateUserListResponse(bdCreateUserListResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdCreateUserListResponse_vtbl *)&bdCreateUserListResponse::`vftable';
}

/*
==============
bdCreateUserListResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdCreateUserListResponse::getErrorMap(bdCreateUserListResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_USERLISTS_ERROR_MAP_20, 4u);
  return result;
}

/*
==============
bdCreateUserListResponse::handleReplySuccess
==============
*/
__int64 bdCreateUserListResponse::handleReplySuccess(bdCreateUserListResponse *this, const bdRESTResponseMessage *reply)
{
  return 1i64;
}

