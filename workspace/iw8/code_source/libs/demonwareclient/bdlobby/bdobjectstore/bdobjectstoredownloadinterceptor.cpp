/*
==============
bdObjectStoreDownloadInterceptor::~bdObjectStoreDownloadInterceptor
==============
*/

void __fastcall bdObjectStoreDownloadInterceptor::~bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this)
{
  ??1bdObjectStoreDownloadInterceptor@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreDownloadInterceptor::setData
==============
*/

void __fastcall bdObjectStoreDownloadInterceptor::setData(bdObjectStoreDownloadInterceptor *this, unsigned __int8 *data, unsigned __int64 contentSize)
{
  ?setData@bdObjectStoreDownloadInterceptor@@QEAAXPEAE_K@Z(this, data, contentSize);
}

/*
==============
bdObjectStoreDownloadInterceptor::setMetadata
==============
*/

void __fastcall bdObjectStoreDownloadInterceptor::setMetadata(bdObjectStoreDownloadInterceptor *this, const bdObjectStoreMetadata *metadata)
{
  ?setMetadata@bdObjectStoreDownloadInterceptor@@QEAAXPEBVbdObjectStoreMetadata@@@Z(this, metadata);
}

/*
==============
bdObjectStoreDownloadInterceptor::getMetadata
==============
*/

const bdObjectStoreMetadata *__fastcall bdObjectStoreDownloadInterceptor::getMetadata(bdObjectStoreDownloadInterceptor *this)
{
  return ?getMetadata@bdObjectStoreDownloadInterceptor@@IEBAPEBVbdObjectStoreMetadata@@XZ(this);
}

/*
==============
bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor
==============
*/

void __fastcall bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this)
{
  ??0bdObjectStoreDownloadInterceptor@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor
==============
*/

void __fastcall bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this, unsigned __int8 *data, unsigned __int64 contentSize)
{
  ??0bdObjectStoreDownloadInterceptor@@QEAA@PEAE_K@Z(this, data, contentSize);
}

/*
==============
bdObjectStoreDownloadInterceptor::hasMetadata
==============
*/

bool __fastcall bdObjectStoreDownloadInterceptor::hasMetadata(bdObjectStoreDownloadInterceptor *this)
{
  return ?hasMetadata@bdObjectStoreDownloadInterceptor@@IEBA_NXZ(this);
}

/*
==============
bdObjectStoreDownloadInterceptor::handleDownload
==============
*/

unsigned int __fastcall bdObjectStoreDownloadInterceptor::handleDownload(bdObjectStoreDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  return ?handleDownload@bdObjectStoreDownloadInterceptor@@UEAAIPEAXI@Z(this, data, dataSize);
}

/*
==============
bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor
==============
*/
void bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this, unsigned __int8 *data, unsigned __int64 contentSize)
{
  bdDownloadInterceptor::bdDownloadInterceptor(this);
  this->m_data = data;
  this->__vftable = (bdObjectStoreDownloadInterceptor_vtbl *)&bdObjectStoreDownloadInterceptor::`vftable';
  this->m_metadata = NULL;
  this->m_totalBytesReceived = 0;
  this->m_contentSize = contentSize;
}

/*
==============
bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor
==============
*/
void bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this)
{
  bdDownloadInterceptor::bdDownloadInterceptor(this);
  this->__vftable = (bdObjectStoreDownloadInterceptor_vtbl *)&bdObjectStoreDownloadInterceptor::`vftable';
  this->m_totalBytesReceived = 0;
  this->m_metadata = NULL;
}

/*
==============
bdObjectStoreDownloadInterceptor::~bdObjectStoreDownloadInterceptor
==============
*/
void bdObjectStoreDownloadInterceptor::~bdObjectStoreDownloadInterceptor(bdObjectStoreDownloadInterceptor *this)
{
  this->__vftable = (bdObjectStoreDownloadInterceptor_vtbl *)&bdObjectStoreDownloadInterceptor::`vftable';
  bdDownloadInterceptor::~bdDownloadInterceptor(this);
}

/*
==============
bdObjectStoreDownloadInterceptor::getMetadata
==============
*/
const bdObjectStoreMetadata *bdObjectStoreDownloadInterceptor::getMetadata(bdObjectStoreDownloadInterceptor *this)
{
  bdHandleAssert(this->m_metadata != NULL, "hasMetadata()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoredownloadinterceptor.cpp", "bdObjectStoreDownloadInterceptor::getMetadata", 0x45u, "Call to `getMetadata`, when metadata has not been populated");
  return this->m_metadata;
}

/*
==============
bdObjectStoreDownloadInterceptor::handleDownload
==============
*/
__int64 bdObjectStoreDownloadInterceptor::handleDownload(bdObjectStoreDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  unsigned int m_totalBytesReceived; 

  m_totalBytesReceived = this->m_totalBytesReceived;
  if ( m_totalBytesReceived + dataSize > this->m_contentSize )
    return 0i64;
  memcpy_0(&this->m_data[m_totalBytesReceived], data, dataSize);
  this->m_totalBytesReceived += dataSize;
  return dataSize;
}

/*
==============
bdObjectStoreDownloadInterceptor::hasMetadata
==============
*/
bool bdObjectStoreDownloadInterceptor::hasMetadata(bdObjectStoreDownloadInterceptor *this)
{
  return this->m_metadata != NULL;
}

/*
==============
bdObjectStoreDownloadInterceptor::setData
==============
*/
void bdObjectStoreDownloadInterceptor::setData(bdObjectStoreDownloadInterceptor *this, unsigned __int8 *data, unsigned __int64 contentSize)
{
  this->m_totalBytesReceived = 0;
  this->m_data = data;
  this->m_contentSize = contentSize;
}

/*
==============
bdObjectStoreDownloadInterceptor::setMetadata
==============
*/
void bdObjectStoreDownloadInterceptor::setMetadata(bdObjectStoreDownloadInterceptor *this, const bdObjectStoreMetadata *metadata)
{
  this->m_metadata = metadata;
}

