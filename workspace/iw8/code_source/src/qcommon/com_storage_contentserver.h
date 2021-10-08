/*
==============
AllocContentServerArray<dwCSReadPublisherFileTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSReadPublisherFileTask>(dwCSReadPublisherFileTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSReadPublisherFileTask@@@@YA_NAEAPEAUdwCSReadPublisherFileTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<csCacheFileDetails_t>
==============
*/

bool __fastcall AllocContentServerArray<csCacheFileDetails_t>(csCacheFileDetails_t **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UcsCacheFileDetails_t@@@@YA_NAEAPEAUcsCacheFileDetails_t@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSUploadSummaryTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSUploadSummaryTask>(dwCSUploadSummaryTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSUploadSummaryTask@@@@YA_NAEAPEAUdwCSUploadSummaryTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSCopyFileTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSCopyFileTask>(dwCSCopyFileTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSCopyFileTask@@@@YA_NAEAPEAUdwCSCopyFileTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSRemoveFileTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSRemoveFileTask>(dwCSRemoveFileTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSRemoveFileTask@@@@YA_NAEAPEAUdwCSRemoveFileTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSSearchTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSSearchTask>(dwCSSearchTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSSearchTask@@@@YA_NAEAPEAUdwCSSearchTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSReadFileTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSReadFileTask>(dwCSReadFileTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSReadFileTask@@@@YA_NAEAPEAUdwCSReadFileTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSDownloadSummaryTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSDownloadSummaryTask>(dwCSDownloadSummaryTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSDownloadSummaryTask@@@@YA_NAEAPEAUdwCSDownloadSummaryTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSDescriptorsTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSDescriptorsTask>(dwCSDescriptorsTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSDescriptorsTask@@@@YA_NAEAPEAUdwCSDescriptorsTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSListTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSListTask>(dwCSListTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSListTask@@@@YA_NAEAPEAUdwCSListTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSTagTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSTagTask>(dwCSTagTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSTagTask@@@@YA_NAEAPEAUdwCSTagTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSListPublisherFilesTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSListPublisherFilesTask>(dwCSListPublisherFilesTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSListPublisherFilesTask@@@@YA_NAEAPEAUdwCSListPublisherFilesTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<contentServerPrivateData>
==============
*/

bool __fastcall AllocContentServerArray<contentServerPrivateData>(contentServerPrivateData **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UcontentServerPrivateData@@@@YA_NAEAPEAUcontentServerPrivateData@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<dwCSWriteFileTask>
==============
*/

bool __fastcall AllocContentServerArray<dwCSWriteFileTask>(dwCSWriteFileTask **ptr, const int arrayLength, const char *allocHint)
{
  return ??$AllocContentServerArray@UdwCSWriteFileTask@@@@YA_NAEAPEAUdwCSWriteFileTask@@HPEBD@Z(ptr, arrayLength, allocHint);
}

/*
==============
AllocContentServerArray<csCacheFileDetails_t>
==============
*/
bool AllocContentServerArray<csCacheFileDetails_t>(csCacheFileDetails_t **ptr, const int arrayLength, const char *allocHint)
{
  __int64 v4; 
  csCacheFileDetails_t *v5; 
  unsigned __int64 v6; 
  __int64 v7; 

  v4 = (unsigned int)arrayLength;
  if ( *ptr )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = 19744i64 * arrayLength;
    v5 = (csCacheFileDetails_t *)PMem_Alloc(v6, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v5 )
    {
      *ptr = v5;
      if ( (int)v4 > 0 )
      {
        v7 = 0i64;
        do
        {
          bdFileMetaData::bdFileMetaData(&(*ptr)[v7++].descriptor);
          --v4;
        }
        while ( v4 );
      }
      g_AllocatedContentServerMemorySize += v6;
      LOBYTE(v5) = 1;
    }
  }
  return (char)v5;
}

/*
==============
AllocContentServerArray<contentServerPrivateData>
==============
*/
bool AllocContentServerArray<contentServerPrivateData>(contentServerPrivateData **ptr, const int arrayLength, const char *allocHint)
{
  __int64 v4; 
  contentServerPrivateData *v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  contentServerPrivateData *v9; 

  v4 = (unsigned int)arrayLength;
  if ( *ptr )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = 631832i64 * arrayLength;
    v5 = (contentServerPrivateData *)PMem_Alloc(v6, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v5 )
    {
      *ptr = v5;
      if ( (int)v4 > 0 )
      {
        v7 = v4;
        v8 = 0i64;
        do
        {
          v9 = &(*ptr)[v8];
          XUID::XUID(&v9->m_playerXuid);
          `eh vector vbase constructor iterator'(v9->m_descriptors, 0x4D20ui64, 0x20ui64, (void (__fastcall *)(void *))bdFileMetaData::bdFileMetaData, (void (__fastcall *)(void *))bdFileMetaData::`vbase destructor);
          ++v8;
          --v7;
        }
        while ( v7 );
      }
      g_AllocatedContentServerMemorySize += v6;
      LOBYTE(v5) = 1;
    }
  }
  return (char)v5;
}

/*
==============
AllocContentServerArray<dwCSCopyFileTask>
==============
*/
bool AllocContentServerArray<dwCSCopyFileTask>(dwCSCopyFileTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSCopyFileTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 88i64 * arrayLength;
    v4 = (dwCSCopyFileTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSDescriptorsTask>
==============
*/
bool AllocContentServerArray<dwCSDescriptorsTask>(dwCSDescriptorsTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSDescriptorsTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 56i64 * arrayLength;
    v4 = (dwCSDescriptorsTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSDownloadSummaryTask>
==============
*/
bool AllocContentServerArray<dwCSDownloadSummaryTask>(dwCSDownloadSummaryTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSDownloadSummaryTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 40i64 * arrayLength;
    v4 = (dwCSDownloadSummaryTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSListPublisherFilesTask>
==============
*/
bool AllocContentServerArray<dwCSListPublisherFilesTask>(dwCSListPublisherFilesTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSListPublisherFilesTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 72i64 * arrayLength;
    v4 = (dwCSListPublisherFilesTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSListTask>
==============
*/
bool AllocContentServerArray<dwCSListTask>(dwCSListTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSListTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = (__int64)arrayLength << 6;
    v4 = (dwCSListTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSReadFileTask>
==============
*/
bool AllocContentServerArray<dwCSReadFileTask>(dwCSReadFileTask **ptr, const int arrayLength, const char *allocHint)
{
  __int64 v4; 
  dwCSReadFileTask *v5; 
  unsigned __int64 v6; 
  __int64 v7; 

  v4 = (unsigned int)arrayLength;
  if ( *ptr )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = 19824i64 * arrayLength;
    v5 = (dwCSReadFileTask *)PMem_Alloc(v6, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v5 )
    {
      *ptr = v5;
      if ( (int)v4 > 0 )
      {
        v7 = 0i64;
        do
        {
          bdFileMetaData::bdFileMetaData(&(*ptr)[v7++].m_descriptor);
          --v4;
        }
        while ( v4 );
      }
      g_AllocatedContentServerMemorySize += v6;
      LOBYTE(v5) = 1;
    }
  }
  return (char)v5;
}

/*
==============
AllocContentServerArray<dwCSReadPublisherFileTask>
==============
*/
bool AllocContentServerArray<dwCSReadPublisherFileTask>(dwCSReadPublisherFileTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSReadPublisherFileTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 112i64 * arrayLength;
    v4 = (dwCSReadPublisherFileTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSRemoveFileTask>
==============
*/
bool AllocContentServerArray<dwCSRemoveFileTask>(dwCSRemoveFileTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSRemoveFileTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 24i64 * arrayLength;
    v4 = (dwCSRemoveFileTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSSearchTask>
==============
*/
bool AllocContentServerArray<dwCSSearchTask>(dwCSSearchTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSSearchTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 72i64 * arrayLength;
    v4 = (dwCSSearchTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSTagTask>
==============
*/
bool AllocContentServerArray<dwCSTagTask>(dwCSTagTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSTagTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 40i64 * arrayLength;
    v4 = (dwCSTagTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSUploadSummaryTask>
==============
*/
bool AllocContentServerArray<dwCSUploadSummaryTask>(dwCSUploadSummaryTask **ptr, const int arrayLength, const char *allocHint)
{
  dwCSUploadSummaryTask *v4; 
  unsigned __int64 v5; 

  if ( *ptr )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v5 = 72i64 * arrayLength;
    v4 = (dwCSUploadSummaryTask *)PMem_Alloc(v5, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v4 )
    {
      *ptr = v4;
      LOBYTE(v4) = 1;
      g_AllocatedContentServerMemorySize += v5;
    }
  }
  return (char)v4;
}

/*
==============
AllocContentServerArray<dwCSWriteFileTask>
==============
*/
bool AllocContentServerArray<dwCSWriteFileTask>(dwCSWriteFileTask **ptr, const int arrayLength, const char *allocHint)
{
  __int64 v4; 
  dwCSWriteFileTask *v5; 
  unsigned __int64 v6; 
  __int64 v7; 

  v4 = (unsigned int)arrayLength;
  if ( *ptr )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = 160i64 * arrayLength;
    v5 = (dwCSWriteFileTask *)PMem_Alloc(v6, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, allocHint);
    if ( v5 )
    {
      *ptr = v5;
      if ( (int)v4 > 0 )
      {
        v7 = 0i64;
        do
        {
          bdFileID::bdFileID(&(*ptr)[v7++].m_outFileID);
          --v4;
        }
        while ( v4 );
      }
      g_AllocatedContentServerMemorySize += v6;
      LOBYTE(v5) = 1;
    }
  }
  return (char)v5;
}

