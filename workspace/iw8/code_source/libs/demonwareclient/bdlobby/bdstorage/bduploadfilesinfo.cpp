/*
==============
bdUploadFilesInfo::bdUploadFilesInfo
==============
*/

void __fastcall bdUploadFilesInfo::bdUploadFilesInfo(bdUploadFilesInfo *this)
{
  ??0bdUploadFilesInfo@@QEAA@XZ(this);
}

/*
==============
bdUploadFilesInfo::~bdUploadFilesInfo
==============
*/

void __fastcall bdUploadFilesInfo::~bdUploadFilesInfo(bdUploadFilesInfo *this)
{
  ??1bdUploadFilesInfo@@UEAA@XZ(this);
}

/*
==============
bdUploadFilesInfo::bdUploadFilesInfo
==============
*/

void __fastcall bdUploadFilesInfo::bdUploadFilesInfo(bdUploadFilesInfo *this, const char *fileName, void *fileData, unsigned int fileSize, unsigned int version, bdFileInfo::bdVisibility visibility)
{
  ??0bdUploadFilesInfo@@QEAA@PEBDPEAXIIW4bdVisibility@bdFileInfo@@@Z(this, fileName, fileData, fileSize, version, visibility);
}

/*
==============
bdUploadFilesInfo::bdUploadFilesInfo
==============
*/
void bdUploadFilesInfo::bdUploadFilesInfo(bdUploadFilesInfo *this, const char *fileName, void *fileData, unsigned int fileSize, unsigned int version, bdFileInfo::bdVisibility visibility)
{
  _BYTE *v8; 
  int v9; 

  this->__vftable = (bdUploadFilesInfo_vtbl *)&bdUploadFilesInfo::`vftable';
  bdFileData::bdFileData(&this->m_fileData, fileData, fileSize);
  this->m_version = version;
  this->m_visibility = visibility;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
  if ( fileName )
  {
    v8 = memchr_0(fileName, 0, 0x7Fui64);
    if ( v8 && (unsigned __int64)(v8 - fileName) >= 0x80 )
    {
      v9 = 128;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdStorage/bdUploadFilesInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bduploadfilesinfo.cpp", "bdUploadFilesInfo::bdUploadFilesInfo", 0x2Cu, "Ignoring a filename that exceeds %d characters.", v9);
    }
    else
    {
      bdStrlcpy(this->m_fileName, fileName, 0x80ui64);
    }
  }
}

/*
==============
bdUploadFilesInfo::bdUploadFilesInfo
==============
*/
void bdUploadFilesInfo::bdUploadFilesInfo(bdUploadFilesInfo *this)
{
  this->__vftable = (bdUploadFilesInfo_vtbl *)&bdUploadFilesInfo::`vftable';
  bdFileData::bdFileData(&this->m_fileData, NULL, 0);
  this->m_version = 0;
  this->m_visibility = BD_MAX_VISIBILITY_TYPE;
  memset_0(this->m_fileName, 0, sizeof(this->m_fileName));
}

/*
==============
bdUploadFilesInfo::~bdUploadFilesInfo
==============
*/
void bdUploadFilesInfo::~bdUploadFilesInfo(bdUploadFilesInfo *this)
{
  bdReferencable *v1; 

  v1 = (bdReferencable *)this->m_fileData.gap20;
  this->__vftable = (bdUploadFilesInfo_vtbl *)&bdUploadFilesInfo::`vftable';
  bdFileData::~bdFileData((bdFileData *)this->m_fileData.gap20);
  bdReferencable::~bdReferencable(v1);
}

