/*
==============
dwMultiFileTask::Initialize
==============
*/

void __fastcall dwMultiFileTask::Initialize(dwMultiFileTask *this)
{
  ?Initialize@dwMultiFileTask@@QEAAXXZ(this);
}

/*
==============
dwMultiFileTask::Initialize
==============
*/
void dwMultiFileTask::Initialize(dwMultiFileTask *this)
{
  __int64 v2; 
  __int64 v3; 
  void **m_buffer; 
  unsigned int *m_fileSize; 
  bdFileData_vtbl **v6; 
  bdContextUserStorageFileInfo *m_infoResult; 
  const bdContextUserStorageFileInfo *v8; 
  const bdFileInfo *v9; 
  __int64 v10; 
  __int64 v11; 
  const bdFileQueryResult *v12; 
  const bdUserAccountID *v13; 
  const bdValidatedContextUserStorageFileInfo *v14; 
  bool v15; 
  bdContextUserStorageFileInfo *v16; 
  bdValidatedContextUserStorageFileInfo *m_validatedFileInfo; 
  __int64 v18; 
  bdFileData v19; 
  bdUserAccountID v20; 
  bdFileQueryResult v21[41]; 
  bdReferencable v22; 

  this->m_fileCount = 0;
  this->m_taskInUse = 0;
  v2 = 0i64;
  v3 = 0i64;
  m_buffer = this->m_buffer;
  m_fileSize = this->m_fileSize;
  m_validatedFileInfo = this->m_validatedFileInfo;
  v6 = &this->m_dataResult[0].__vftable + 2;
  m_infoResult = this->m_infoResult;
  v16 = this->m_infoResult;
  v18 = 24i64;
  do
  {
    *(m_buffer - 33948) = NULL;
    *(m_fileSize - 24) = 0;
    *m_fileSize = 0;
    bdContextUserStorageFileInfo::bdContextUserStorageFileInfo((bdContextUserStorageFileInfo *)(&v20.__vftable + 3));
    bdContextUserStorageFileInfo::operator=(m_infoResult, v8);
    bdContextUserStorageFileInfo::~bdContextUserStorageFileInfo((bdContextUserStorageFileInfo *)(&v21[0].__vftable + 1));
    bdReferencable::~bdReferencable((bdReferencable *)(&v21[0].__vftable + 1));
    bdFileInfo::bdFileInfo((bdFileInfo *)(&v20.__vftable + 3));
    bdFileInfo::operator=(&this->m_infoPublisherResult[v3], v9);
    bdFileInfo::~bdFileInfo((bdFileInfo *)v21);
    bdReferencable::~bdReferencable((bdReferencable *)v21);
    bdFileData::bdFileData(&v19);
    v11 = v10;
    bdReferencable::operator=((bdReferencable *)((char *)v6 + SHIDWORD((*(v6 - 1))->deserialize) - 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v10 + 8) + 4i64) + v10 + 8));
    *v6 = *(bdFileData_vtbl **)(v11 + 16);
    *((_DWORD *)v6 + 2) = *(_DWORD *)(v11 + 24);
    bdFileData::~bdFileData((bdFileData *)v19.gap20);
    bdReferencable::~bdReferencable((bdReferencable *)v19.gap20);
    bdFileQueryResult::bdFileQueryResult((bdFileQueryResult *)(&v20.__vftable + 3));
    bdFileQueryResult::operator=(&this->m_queryResult[v3], v12);
    bdFileQueryResult::~bdFileQueryResult(v21);
    bdReferencable::~bdReferencable((bdReferencable *)v21);
    m_fileSize[67800] = 0;
    *m_buffer = NULL;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&v19);
    bdUserAccountID::operator=(&this->m_userAccountID[v2], v13);
    bdUserAccountID::~bdUserAccountID(&v20);
    bdReferencable::~bdReferencable((bdReferencable *)&v20);
    bdValidatedContextUserStorageFileInfo::bdValidatedContextUserStorageFileInfo((bdValidatedContextUserStorageFileInfo *)(&v20.__vftable + 3));
    bdValidatedContextUserStorageFileInfo::operator=(m_validatedFileInfo, v14);
    bdValidatedContextUserStorageFileInfo::~bdValidatedContextUserStorageFileInfo((bdValidatedContextUserStorageFileInfo *)&v22);
    bdReferencable::~bdReferencable(&v22);
    ++v16;
    ++v3;
    ++v2;
    ++m_validatedFileInfo;
    ++m_fileSize;
    ++m_buffer;
    v6 += 6;
    v15 = v18-- == 1;
    m_infoResult = v16;
  }
  while ( !v15 );
  dwMultiFileTask::SetContext(this, "unknown");
}

