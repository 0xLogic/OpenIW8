/*
==============
bdLiveStreamingInterceptor::handleUpload
==============
*/

unsigned int __fastcall bdLiveStreamingInterceptor::handleUpload(bdLiveStreamingInterceptor *this, void *uploadBuffer, unsigned int bufferSize, unsigned int bytesUploaded)
{
  return ?handleUpload@bdLiveStreamingInterceptor@@UEAAIPEAXII@Z(this, uploadBuffer, bufferSize, bytesUploaded);
}

/*
==============
bdLiveStreamingInterceptor::bdLiveStreamingInterceptor
==============
*/

void __fastcall bdLiveStreamingInterceptor::bdLiveStreamingInterceptor(bdLiveStreamingInterceptor *this, bdCSHTTPWrapper *http, StreamData *streamData)
{
  ??0bdLiveStreamingInterceptor@@QEAA@PEAVbdCSHTTPWrapper@@PEAUStreamData@@@Z(this, http, streamData);
}

/*
==============
bdLiveStreamingInterceptor::~bdLiveStreamingInterceptor
==============
*/

void __fastcall bdLiveStreamingInterceptor::~bdLiveStreamingInterceptor(bdLiveStreamingInterceptor *this)
{
  ??1bdLiveStreamingInterceptor@@UEAA@XZ(this);
}

/*
==============
bdLiveStreamingInterceptor::handleDownload
==============
*/

unsigned int __fastcall bdLiveStreamingInterceptor::handleDownload(bdLiveStreamingInterceptor *this, void *data, unsigned int dataSize)
{
  return ?handleDownload@bdLiveStreamingInterceptor@@UEAAIPEAXI@Z(this, data, dataSize);
}

/*
==============
bdLiveStreamingInterceptor::bdLiveStreamingInterceptor
==============
*/
void bdLiveStreamingInterceptor::bdLiveStreamingInterceptor(bdLiveStreamingInterceptor *this, bdCSHTTPWrapper *http, StreamData *streamData)
{
  bdUploadInterceptor::bdUploadInterceptor(this);
  bdDownloadInterceptor::bdDownloadInterceptor(&this->bdDownloadInterceptor);
  this->bdUploadInterceptor::__vftable = (bdLiveStreamingInterceptor_vtbl *)&bdLiveStreamingInterceptor::`vftable'{for `bdUploadInterceptor'};
  this->bdDownloadInterceptor::__vftable = (bdDownloadInterceptor_vtbl *)&bdLiveStreamingInterceptor::`vftable'{for `bdDownloadInterceptor'};
  this->m_http = http;
  this->m_streamData = streamData;
  this->m_numParts = 0;
  this->m_totalFileSize = 0;
  this->m_clientUploadInterceptor = NULL;
  this->m_clientDownloadInterceptor = NULL;
}

/*
==============
bdLiveStreamingInterceptor::~bdLiveStreamingInterceptor
==============
*/
void bdLiveStreamingInterceptor::~bdLiveStreamingInterceptor(bdLiveStreamingInterceptor *this)
{
  bdDownloadInterceptor *v2; 

  this->bdUploadInterceptor::__vftable = (bdLiveStreamingInterceptor_vtbl *)&bdLiveStreamingInterceptor::`vftable'{for `bdUploadInterceptor'};
  v2 = &this->bdDownloadInterceptor;
  v2->__vftable = (bdDownloadInterceptor_vtbl *)&bdLiveStreamingInterceptor::`vftable'{for `bdDownloadInterceptor'};
  bdDownloadInterceptor::~bdDownloadInterceptor(v2);
  bdUploadInterceptor::~bdUploadInterceptor(this);
}

/*
==============
bdLiveStreamingInterceptor::handleDownload
==============
*/
__int64 bdLiveStreamingInterceptor::handleDownload(bdLiveStreamingInterceptor *this, void *data, unsigned int dataSize)
{
  __int64 result; 
  int v7; 
  __int64 v8; 

  if ( !this->m_clientUploadInterceptor )
    return 0i64;
  v7 = (*((__int64 (__fastcall **)(bdDownloadInterceptor_vtbl *))this->~bdDownloadInterceptor + 14))(this->bdDownloadInterceptor::__vftable);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLiveStreamingInterceptor", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdlivestreaminginterceptor.cpp", "bdLiveStreamingInterceptor::handleDownload", 0x35u, "Download interceptor. Status code %i", v7);
  if ( (*((int (__fastcall **)(bdDownloadInterceptor_vtbl *))this->~bdDownloadInterceptor + 14))(this->bdDownloadInterceptor::__vftable) < 300 )
  {
    result = ((__int64 (__fastcall *)(bdUploadInterceptor *, void *, _QWORD))this->m_clientUploadInterceptor->__vftable[1].~bdUploadInterceptor)(this->m_clientUploadInterceptor, data, dataSize);
    HIDWORD(this->m_streamData) += result;
  }
  else
  {
    LODWORD(v8) = *((__int16 *)&this->m_http->m_refCount + 3);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLiveStreamingInterceptor", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdlivestreaminginterceptor.cpp", "bdLiveStreamingInterceptor::handleDownload", 0x38u, "FilePart %d returned error. Data for error will be ignored.", v8);
    return 0i64;
  }
  return result;
}

/*
==============
bdLiveStreamingInterceptor::handleUpload
==============
*/
__int64 bdLiveStreamingInterceptor::handleUpload(bdLiveStreamingInterceptor *this, void *uploadBuffer, __int64 bufferSize, __int64 bytesUploaded)
{
  bdUploadInterceptor *m_clientUploadInterceptor; 
  unsigned int v6; 
  unsigned int v7; 

  m_clientUploadInterceptor = this->m_clientUploadInterceptor;
  if ( !m_clientUploadInterceptor )
    return 0i64;
  v6 = m_clientUploadInterceptor->handleUpload(m_clientUploadInterceptor, uploadBuffer, bufferSize, bytesUploaded);
  v7 = v6 + this->m_totalFileSize;
  this->m_totalFileSize = v7;
  if ( !v6 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLiveStreamingInterceptor", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdlivestreaminginterceptor.cpp", "bdLiveStreamingInterceptor::handleUpload", 0x26u, "FilePart %d complete  (Total %d bytes uploaded)", this->m_numParts, v7);
    ++this->m_numParts;
  }
  return v6;
}

