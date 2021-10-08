/*
==============
bdObjectStoreRestResponseBase::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdObjectStoreRestResponseBase::getErrorMap(bdObjectStoreRestResponseBase *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdObjectStoreRestResponseBase@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdObjectStoreRestResponseBase::~bdObjectStoreRestResponseBase
==============
*/

void __fastcall bdObjectStoreRestResponseBase::~bdObjectStoreRestResponseBase(bdObjectStoreRestResponseBase *this)
{
  ??1bdObjectStoreRestResponseBase@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreRestResponseBase::~bdObjectStoreRestResponseBase
==============
*/
void bdObjectStoreRestResponseBase::~bdObjectStoreRestResponseBase(bdObjectStoreRestResponseBase *this)
{
  this->__vftable = (bdObjectStoreRestResponseBase_vtbl *)&bdObjectStoreRestResponseBase::`vftable';
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdObjectStoreRestResponseBase::getErrorMap
==============
*/
bdRESTErrorMap *bdObjectStoreRestResponseBase::getErrorMap(bdObjectStoreRestResponseBase *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_OBJECTSTORE_REST_ERRORS, 5u);
  return result;
}

