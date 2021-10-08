/*
==============
bdObjectStoreUploadInterceptor::bdObjectStoreUploadInterceptor
==============
*/

void __fastcall bdObjectStoreUploadInterceptor::bdObjectStoreUploadInterceptor(bdObjectStoreUploadInterceptor *this)
{
  ??0bdObjectStoreUploadInterceptor@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadInterceptor::setData
==============
*/

void __fastcall bdObjectStoreUploadInterceptor::setData(bdObjectStoreUploadInterceptor *this, const unsigned __int8 *data, unsigned __int64 contentSize)
{
  ?setData@bdObjectStoreUploadInterceptor@@QEAAXPEBE_K@Z(this, data, contentSize);
}

/*
==============
bdObjectStoreUploadInterceptor::getContentSize
==============
*/

unsigned __int64 __fastcall bdObjectStoreUploadInterceptor::getContentSize(bdObjectStoreUploadInterceptor *this)
{
  return ?getContentSize@bdObjectStoreUploadInterceptor@@QEBA_KXZ(this);
}

/*
==============
bdObjectStoreUploadInterceptor::~bdObjectStoreUploadInterceptor
==============
*/

void __fastcall bdObjectStoreUploadInterceptor::~bdObjectStoreUploadInterceptor(bdObjectStoreUploadInterceptor *this)
{
  ??1bdObjectStoreUploadInterceptor@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadInterceptor::handleUpload
==============
*/

unsigned int __fastcall bdObjectStoreUploadInterceptor::handleUpload(bdObjectStoreUploadInterceptor *this, unsigned __int8 *uploadBuffer, unsigned int bufferSize, unsigned int bytesUploaded)
{
  return ?handleUpload@bdObjectStoreUploadInterceptor@@QEAAIPEAEII@Z(this, uploadBuffer, bufferSize, bytesUploaded);
}

/*
==============
bdObjectStoreUploadInterceptor::handleUpload
==============
*/

unsigned int __fastcall bdObjectStoreUploadInterceptor::handleUpload(bdObjectStoreUploadInterceptor *this, void *uploadBuffer, unsigned int bufferSize, unsigned int bytesUploaded)
{
  return ?handleUpload@bdObjectStoreUploadInterceptor@@UEAAIPEAXII@Z(this, uploadBuffer, bufferSize, bytesUploaded);
}

/*
==============
bdObjectStoreUploadInterceptor::bdObjectStoreUploadInterceptor
==============
*/
void bdObjectStoreUploadInterceptor::bdObjectStoreUploadInterceptor(bdObjectStoreUploadInterceptor *this)
{
  bdUploadInterceptor::bdUploadInterceptor(this);
  this->__vftable = (bdObjectStoreUploadInterceptor_vtbl *)&bdObjectStoreUploadInterceptor::`vftable';
}

/*
==============
bdObjectStoreUploadInterceptor::~bdObjectStoreUploadInterceptor
==============
*/
void bdObjectStoreUploadInterceptor::~bdObjectStoreUploadInterceptor(bdObjectStoreUploadInterceptor *this)
{
  this->__vftable = (bdObjectStoreUploadInterceptor_vtbl *)&bdObjectStoreUploadInterceptor::`vftable';
  bdUploadInterceptor::~bdUploadInterceptor(this);
}

/*
==============
bdObjectStoreUploadInterceptor::getContentSize
==============
*/
unsigned __int64 bdObjectStoreUploadInterceptor::getContentSize(bdObjectStoreUploadInterceptor *this)
{
  return this->m_contentSize;
}

/*
==============
bdObjectStoreUploadInterceptor::handleUpload
==============
*/
__int64 bdObjectStoreUploadInterceptor::handleUpload(bdObjectStoreUploadInterceptor *this, unsigned __int8 *uploadBuffer, unsigned int bufferSize, unsigned int bytesUploaded)
{
  unsigned int v4; 

  v4 = LODWORD(this->m_contentSize) - bytesUploaded;
  if ( bufferSize < v4 )
    v4 = bufferSize;
  if ( !v4 )
    return 0i64;
  memcpy_0(uploadBuffer, &this->m_data[bytesUploaded], v4);
  return v4;
}

/*
==============
bdObjectStoreUploadInterceptor::handleUpload
==============
*/
__int64 bdObjectStoreUploadInterceptor::handleUpload(bdObjectStoreUploadInterceptor *this, void *uploadBuffer, unsigned int bufferSize, unsigned int bytesUploaded)
{
  unsigned int v4; 

  v4 = LODWORD(this->m_contentSize) - bytesUploaded;
  if ( bufferSize < v4 )
    v4 = bufferSize;
  if ( !v4 )
    return 0i64;
  memcpy_0(uploadBuffer, &this->m_data[bytesUploaded], v4);
  return v4;
}

/*
==============
bdObjectStoreUploadInterceptor::setData
==============
*/
void bdObjectStoreUploadInterceptor::setData(bdObjectStoreUploadInterceptor *this, const unsigned __int8 *data, unsigned __int64 contentSize)
{
  this->m_data = data;
  this->m_contentSize = contentSize;
}

