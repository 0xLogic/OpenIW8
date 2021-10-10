/*
==============
Content_GetMpDLCPacks
==============
*/

const int *__fastcall Content_GetMpDLCPacks()
{
  return ?Content_GetMpDLCPacks@@YAPEBHXZ();
}

/*
==============
Content_UnmountPackage
==============
*/

void __fastcall Content_UnmountPackage(Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package)
{
  ?Content_UnmountPackage@@YAXPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Z(package);
}

/*
==============
Content_GetCpDLCPacks
==============
*/

const int *__fastcall Content_GetCpDLCPacks()
{
  return ?Content_GetCpDLCPacks@@YAPEBHXZ();
}

/*
==============
Content_GetIndexedContentPackFilenameIdentifier
==============
*/

const char *__fastcall Content_GetIndexedContentPackFilenameIdentifier(int index)
{
  return ?Content_GetIndexedContentPackFilenameIdentifier@@YAPEBDH@Z(index);
}

/*
==============
Content_GetSpDLCPacks
==============
*/

const int *__fastcall Content_GetSpDLCPacks()
{
  return ?Content_GetSpDLCPacks@@YAPEBHXZ();
}

/*
==============
Content_FindContentPacks
==============
*/

void __fastcall Content_FindContentPacks(const int controllerIndex)
{
  ?Content_FindContentPacks@@YAXH@Z(controllerIndex);
}

/*
==============
Content_DoWeHaveDLCPackByName
==============
*/

bool __fastcall Content_DoWeHaveDLCPackByName(const char *name)
{
  return ?Content_DoWeHaveDLCPackByName@@YA_NPEBD@Z(name);
}

/*
==============
Content_GetProgress
==============
*/

ContentProgressState __fastcall Content_GetProgress(const int pack, long double *progress)
{
  return ?Content_GetProgress@@YA?AW4ContentProgressState@@HPEAN@Z(pack, progress);
}

/*
==============
Content_Init
==============
*/

void Content_Init(void)
{
  ?Content_Init@@YAXXZ();
}

/*
==============
Content_GetContentIDFromPackName
==============
*/

int __fastcall Content_GetContentIDFromPackName(const char *packName)
{
  return ?Content_GetContentIDFromPackName@@YAHPEBD@Z(packName);
}

/*
==============
Content_SetContentEnumerationCompletion
==============
*/

void __fastcall Content_SetContentEnumerationCompletion(bool finished)
{
  ?Content_SetContentEnumerationCompletion@@YAX_N@Z(finished);
}

/*
==============
Content_GetGameContentPackCount
==============
*/

int __fastcall Content_GetGameContentPackCount()
{
  return ?Content_GetGameContentPackCount@@YAHXZ();
}

/*
==============
Content_IsBRAvailable
==============
*/

bool __fastcall Content_IsBRAvailable()
{
  return ?Content_IsBRAvailable@@YA_NXZ();
}

/*
==============
Content_UpdateTrialFind
==============
*/

void __fastcall Content_UpdateTrialFind(int controllerIndex)
{
  ?Content_UpdateTrialFind@@YAXH@Z(controllerIndex);
}

/*
==============
Content_IsEnumerationDone
==============
*/

bool __fastcall Content_IsEnumerationDone()
{
  return ?Content_IsEnumerationDone@@YA_NXZ();
}

/*
==============
Content_GetDLCLabels
==============
*/

const char **__fastcall Content_GetDLCLabels()
{
  return ?Content_GetDLCLabels@@YAPEAPEBDXZ();
}

/*
==============
Content_GetDLCPacks
==============
*/

const int *__fastcall Content_GetDLCPacks()
{
  return ?Content_GetDLCPacks@@YAPEBHXZ();
}

/*
==============
Content_IsCPAvailable
==============
*/

bool __fastcall Content_IsCPAvailable()
{
  return ?Content_IsCPAvailable@@YA_NXZ();
}

/*
==============
Content_FinalizeMounting
==============
*/

void __fastcall Content_FinalizeMounting(int controllerIndex)
{
  ?Content_FinalizeMounting@@YAXH@Z(controllerIndex);
}

/*
==============
Content_InitDownloadableContentPackageManager
==============
*/

void Content_InitDownloadableContentPackageManager(void)
{
  ?Content_InitDownloadableContentPackageManager@@YAXXZ();
}

/*
==============
Content_CheckOngoingSessionTasks
==============
*/

void Content_CheckOngoingSessionTasks(void)
{
  ?Content_CheckOngoingSessionTasks@@YAXXZ();
}

/*
==============
Content_AnyNewMapPacks
==============
*/

bool __fastcall Content_AnyNewMapPacks()
{
  return ?Content_AnyNewMapPacks@@YA_NXZ();
}

/*
==============
Content_MountPackage
==============
*/

bool __fastcall Content_MountPackage(Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package)
{
  return ?Content_MountPackage@@YA_NPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Z(package);
}

/*
==============
Content_CreateFile
==============
*/

sysFileHandle_t *__fastcall Content_CreateFile(sysFileHandle_t *result, Sys_Folder folder, const char *fileName, int flags)
{
  return ?Content_CreateFile@@YA?AUsysFileHandle_t@@W4Sys_Folder@@PEBDH@Z(result, folder, fileName, flags);
}

/*
==============
Content_GetIndexedContentStrRef
==============
*/

const char *__fastcall Content_GetIndexedContentStrRef(int index)
{
  return ?Content_GetIndexedContentStrRef@@YAPEBDH@Z(index);
}

/*
==============
Content_Unmount
==============
*/

void __fastcall Content_Unmount(ContentPackList *contentPack)
{
  ?Content_Unmount@@YAXPEAUContentPackList@@@Z(contentPack);
}

/*
==============
Content_GetBrDLCPacks
==============
*/

const int *__fastcall Content_GetBrDLCPacks()
{
  return ?Content_GetBrDLCPacks@@YAPEBHXZ();
}

/*
==============
Content_DoWeHavePaidContentPackEntitlement
==============
*/

bool __fastcall Content_DoWeHavePaidContentPackEntitlement()
{
  return ?Content_DoWeHavePaidContentPackEntitlement@@YA_NXZ();
}

/*
==============
Content_MountingContentPacksInProgress
==============
*/

bool __fastcall Content_MountingContentPacksInProgress()
{
  return ?Content_MountingContentPacksInProgress@@YA_NXZ();
}

/*
==============
Content_GetIndexedContentPackTrialFilenameIdentifier
==============
*/

const char *__fastcall Content_GetIndexedContentPackTrialFilenameIdentifier(int index)
{
  return ?Content_GetIndexedContentPackTrialFilenameIdentifier@@YAPEBDH@Z(index);
}

/*
==============
Content_UnmountAllContent
==============
*/

void Content_UnmountAllContent(void)
{
  ?Content_UnmountAllContent@@YAXXZ();
}

/*
==============
Content_UpdateEnumerateIfNeeded
==============
*/

void __fastcall Content_UpdateEnumerateIfNeeded(int controllerIndex)
{
  ?Content_UpdateEnumerateIfNeeded@@YAXH@Z(controllerIndex);
}

/*
==============
Content_PackageInstallCompleted
==============
*/

void Content_PackageInstallCompleted(void)
{
  ?Content_PackageInstallCompleted@@YAXXZ();
}

/*
==============
Content_DoWeHaveContentPackByName
==============
*/

bool __fastcall Content_DoWeHaveContentPackByName(int controllerIndex, const char *name)
{
  return ?Content_DoWeHaveContentPackByName@@YA_NHPEBD@Z(controllerIndex, name);
}

/*
==============
Content_CheckIfFileExists
==============
*/

bool __fastcall Content_CheckIfFileExists(const char *driveName, const int index)
{
  return ?Content_CheckIfFileExists@@YA_NPEBDH@Z(driveName, index);
}

/*
==============
Content_DoWeHaveContentPack
==============
*/

bool __fastcall Content_DoWeHaveContentPack(const int contentPack)
{
  return ?Content_DoWeHaveContentPack@@YA_NH@Z(contentPack);
}

/*
==============
Content_GetKnownContentPackCount
==============
*/

int __fastcall Content_GetKnownContentPackCount()
{
  return ?Content_GetKnownContentPackCount@@YAHXZ();
}

/*
==============
Content_GetIndexedContentPackID
==============
*/

int __fastcall Content_GetIndexedContentPackID(int index)
{
  return ?Content_GetIndexedContentPackID@@YAHH@Z(index);
}

/*
==============
Content_EnumerateXB3
==============
*/

void __fastcall Content_EnumerateXB3(int controllerIndex)
{
  ?Content_EnumerateXB3@@YAXH@Z(controllerIndex);
}

/*
==============
Content_ContentPackIsAvailable
==============
*/

bool __fastcall Content_ContentPackIsAvailable(int index)
{
  return ?Content_ContentPackIsAvailable@@YA_NH@Z(index);
}

/*
==============
Content_EnumerateXB3_WorkerCmd
==============
*/

void __fastcall Content_EnumerateXB3_WorkerCmd(const void *data)
{
  ?Content_EnumerateXB3_WorkerCmd@@YAXPEBX@Z(data);
}

/*
==============
Content_IsMPAvailable
==============
*/

bool __fastcall Content_IsMPAvailable()
{
  return ?Content_IsMPAvailable@@YA_NXZ();
}

/*
==============
Content_RegisterDLCDvars
==============
*/

void Content_RegisterDLCDvars(void)
{
  ?Content_RegisterDLCDvars@@YAXXZ();
}

/*
==============
Content_GetAvailableContentPacks
==============
*/

int __fastcall Content_GetAvailableContentPacks()
{
  return ?Content_GetAvailableContentPacks@@YAHXZ();
}

/*
==============
Content_IsSPAvailable
==============
*/

bool __fastcall Content_IsSPAvailable()
{
  return ?Content_IsSPAvailable@@YA_NXZ();
}

/*
==============
Content_AddFileHash
==============
*/
__int64 Content_AddFileHash(const char *hashPath, const char *devPath, const int contentPack)
{
  unsigned __int8 v6; 
  unsigned int v7; 
  const char *i; 
  IWHashTable_Bucket<unsigned int> *v9; 
  unsigned int headNodeIndex; 
  __int64 v11; 
  __int64 v12; 
  __int64 result; 
  int *v14; 
  bool enabled; 
  const char *IndexedContentStrRef; 
  const char *v17; 
  unsigned int nextNodeIndex; 
  __int64 v19; 
  unsigned int v20; 
  char *fmt; 

  if ( !hashPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 768, ASSERT_TYPE_ASSERT, "(hashPath)", (const char *)&queryFormat, "hashPath") )
    __debugbreak();
  if ( !devPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 769, ASSERT_TYPE_ASSERT, "(devPath)", (const char *)&queryFormat, "devPath") )
    __debugbreak();
  if ( contentPack == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 770, ASSERT_TYPE_ASSERT, "(contentPack != (1 << 0))", (const char *)&queryFormat, "contentPack != CONTENT_UNKNOWN") )
    __debugbreak();
  v6 = *hashPath;
  v7 = 0;
  for ( i = hashPath; *i; v6 = *i )
  {
    ++i;
    v7 = v6 ^ (16777619 * v7);
  }
  v9 = &s_dlcHashTable.buckets[v7 & 0xFFF];
  headNodeIndex = v9->headNodeIndex;
  if ( v9->headNodeIndex == -1 )
    goto LABEL_15;
  while ( 1 )
  {
    v11 = headNodeIndex;
    if ( s_dlcHashNodes[headNodeIndex].key == v7 )
      break;
    headNodeIndex = s_dlcHashNodes[headNodeIndex].nextNodeIndex;
    if ( headNodeIndex == -1 )
      goto LABEL_15;
  }
  if ( headNodeIndex == -1 )
  {
LABEL_15:
    v12 = s_hashBufferIndex;
    if ( s_hashBufferIndex < 0x1000 )
    {
      if ( s_hashBufferContentPack[s_hashBufferIndex] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 823, ASSERT_TYPE_ASSERT, "( s_hashBufferContentPack[s_hashBufferIndex] ) == ( 0 )", "%s == %s\n\t%i, %i", "s_hashBufferContentPack[s_hashBufferIndex]", "0", s_hashBufferContentPack[s_hashBufferIndex], 0i64) )
          __debugbreak();
        v12 = s_hashBufferIndex;
      }
      s_hashBufferContentPack[v12] = contentPack;
      Core_strcpy(s_hashFileNames[v12], 0x100ui64, hashPath);
      nextNodeIndex = v9->headNodeIndex;
      v19 = s_hashBufferIndex;
      if ( v9->headNodeIndex != -1 )
      {
        while ( s_dlcHashNodes[nextNodeIndex].key != v7 )
        {
          nextNodeIndex = s_dlcHashNodes[nextNodeIndex].nextNodeIndex;
          if ( nextNodeIndex == -1 )
            goto LABEL_44;
        }
        if ( nextNodeIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\hash_table.h", 372, ASSERT_TYPE_ASSERT, "(this->Find( key, hash, nodes ) == Base::s_nullNodeIndex)", (const char *)&queryFormat, "this->Find( key, hash, nodes ) == Base::s_nullNodeIndex") )
          __debugbreak();
      }
LABEL_44:
      v20 = v9->headNodeIndex;
      result = 1i64;
      ++s_hashBufferIndex;
      v9->headNodeIndex = v19;
      s_dlcHashNodes[v19].nextNodeIndex = v20;
      s_dlcHashNodes[v19].key = v7;
    }
    else if ( bypassFileLimit && bypassFileLimit->current.enabled )
    {
      Com_PrintError(10, "No more file hashes remaining for this DLC. Cannot enumerate all DLC files. Capacity: %d. File '%s'.\n", 4096i64, devPath);
      return 0i64;
    }
    else
    {
      Sys_Error((const ObfuscateErrorText)&stru_1441701B0, 4096i64, devPath);
      return 0i64;
    }
  }
  else
  {
    if ( I_strnicmp(s_hashFileNames[(unsigned __int64)headNodeIndex], hashPath, 0x7FFFFFFFui64) )
    {
      if ( content_assert_hash_collisions->current.enabled )
      {
        Sys_Error((const ObfuscateErrorText)&stru_1441702C0, s_hashFileNames[v11], hashPath, v7, devPath);
      }
      else
      {
        LODWORD(fmt) = v7;
        Com_PrintError(10, "Content_AddFileHash: existing file hash '%s' collided with hash '%s' %u for file '%s'.\n", s_hashFileNames[v11], hashPath, fmt, devPath);
      }
    }
    v14 = &s_hashBufferContentPack[v11];
    if ( *v14 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 793, ASSERT_TYPE_ASSERT, "( s_hashBufferContentPack[existingHashIndex] ) > ( (1 << 0) )", "%s > %s\n\t%i, %i", "s_hashBufferContentPack[existingHashIndex]", "CONTENT_UNKNOWN", s_hashBufferContentPack[v11], 1) )
      __debugbreak();
    if ( *v14 != contentPack )
    {
      enabled = assertFileInMultipleDLCPacks->current.enabled;
      IndexedContentStrRef = Content_GetIndexedContentStrRef(contentPack);
      v17 = Content_GetIndexedContentStrRef(*v14);
      if ( enabled )
      {
        Sys_Error((const ObfuscateErrorText)&stru_144170440, devPath, hashPath, v7, v17, IndexedContentStrRef);
        return 2i64;
      }
      LODWORD(fmt) = v7;
      Com_PrintError(10, "Content_AddFileHash: '%s' (hash '%s' %d) cannot exist in contentPack '%s' and '%s'. Remove either pack from system or set dvar 'assertFileInMultipleDLCPacks' to false to continue.\n", devPath, hashPath, fmt, v17, IndexedContentStrRef);
    }
    return 2i64;
  }
  return result;
}

/*
==============
Content_AnyNewMapPacks
==============
*/
bool Content_AnyNewMapPacks()
{
  return totalContentPackCount > knownContentPackCount;
}

/*
==============
Content_BuildFileList
==============
*/
__int64 Content_BuildFileList(const char *basePath, const char *subPath, const int contentPack)
{
  unsigned int v6; 
  HANDLE FirstFileA; 
  int v9; 
  __int64 v10; 
  _WIN32_FIND_DATAA FindFileData; 
  char dest[256]; 
  char sanitizedBuffer[256]; 
  char devPath[256]; 

  if ( !basePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 1106, ASSERT_TYPE_ASSERT, "(basePath)", (const char *)&queryFormat, "basePath") )
    __debugbreak();
  if ( contentPack == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 1107, ASSERT_TYPE_ASSERT, "(contentPack != (1 << 0))", (const char *)&queryFormat, "contentPack != CONTENT_UNKNOWN") )
    __debugbreak();
  v6 = 0;
  if ( subPath )
    Com_sprintf(dest, 0x100ui64, "%s\\%s\\*", basePath, subPath);
  else
    Com_sprintf(dest, 0x100ui64, "%s\\*", basePath);
  FirstFileA = FindFirstFileA(dest, &FindFileData);
  if ( FirstFileA == (HANDLE)-1i64 )
  {
    Com_PrintWarning(16, "Unable to start a directory scan on %s\n", dest);
    return 0i64;
  }
  else
  {
    do
    {
      if ( (FindFileData.dwFileAttributes & 0x10) == 0 && FindFileData.cFileName[0] != 36 && !I_stristr(FindFileData.cFileName, ".png") && !I_stristr(FindFileData.cFileName, ".xml") && !I_stristr(FindFileData.cFileName, ".AlignmentChunk") && !I_stristr(FindFileData.cFileName, ".pri") && !I_stristr(FindFileData.cFileName, "EndChunkFile.txt") && !I_stristr(FindFileData.cFileName, ".bin") )
      {
        Content_TrimFileNameForHash(FindFileData.cFileName, sanitizedBuffer, 0x100u);
        if ( subPath )
          Com_sprintf(dest, 0x100ui64, "%s\\%s", subPath, sanitizedBuffer);
        else
          Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, sanitizedBuffer);
        Content_SanitizeHashFilePath(dest, 0x100u);
        if ( subPath )
          Com_sprintf(devPath, 0x100ui64, "%s\\%s", subPath, FindFileData.cFileName);
        else
          Com_sprintf(devPath, 0x100ui64, (const char *)&queryFormat, FindFileData.cFileName);
        v9 = Content_AddFileHash(dest, devPath, contentPack);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            ++v6;
          }
          else if ( v9 != 2 )
          {
            LODWORD(v10) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 1189, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Content_BuildFileList: unknown condition %d", v10) )
              __debugbreak();
          }
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) );
    FindClose(FirstFileA);
    return v6;
  }
}

/*
==============
Content_CheckIfFileExists
==============
*/
bool Content_CheckIfFileExists(const char *driveName, const int index)
{
  __int64 v2; 
  const char *v4; 
  int v7; 

  v2 = index;
  if ( (unsigned int)index >= 0xB )
  {
    v7 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Content_GetGameContentPackCount() )", "index doesn't index Content_GetGameContentPackCount()\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  v4 = j_va("%s\\%s.id", driveName, gameContentPackInfo[v2].packName);
  return Sys_FileExists(v4);
}

/*
==============
Content_CheckOngoingSessionTasks
==============
*/
void Content_CheckOngoingSessionTasks(void)
{
  ;
}

/*
==============
Content_ContentPackIsAvailable
==============
*/
bool Content_ContentPackIsAvailable(int index)
{
  return bypassDLCCheck && bypassDLCCheck->current.enabled || knownContentPackData[index].available;
}

/*
==============
Content_CreateFile
==============
*/
sysFileHandle_t *Content_CreateFile(sysFileHandle_t *result, const char *folder, const char *fileName, int flags)
{
  unsigned int v4; 
  Sys_Folder v6; 
  ContentPackList *ContentPackForFile; 
  const char *DlcFolder; 
  int v9; 
  sysFileHandle_t dest[32]; 

  v4 = (unsigned int)fileName;
  v6 = (int)result;
  if ( !com_allowReadContentPacks )
    return (sysFileHandle_t *)INVALID_SYS_FILE_HANDLE_0.handle;
  ContentPackForFile = Content_GetContentPackForFile((Sys_Folder)result, folder);
  if ( !ContentPackForFile )
    return (sysFileHandle_t *)INVALID_SYS_FILE_HANDLE_0.handle;
  DlcFolder = Sys_GetDlcFolder(v6);
  Com_sprintf((char *)dest, 0x100ui64, "%s\\%s%s", ContentPackForFile->mountPoint, DlcFolder, folder);
  return Sys_OpenFileReliable(dest, (const char *)v4, v9);
}

/*
==============
Content_DoWeHaveContentPack
==============
*/
bool Content_DoWeHaveContentPack(const int contentPack)
{
  int v3; 
  int *i; 

  if ( bypassDLCCheck && bypassDLCCheck->current.enabled )
    return 1;
  if ( contentPack == 2 )
  {
    if ( knownContentPackData[0].contentPack != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 495, ASSERT_TYPE_ASSERT, "(knownContentPackData[0].contentPack == (1 << 1))", (const char *)&queryFormat, "knownContentPackData[0].contentPack == CONTENT_ORIGINALMAPS") )
      __debugbreak();
    if ( !knownContentPackData[0].available && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 496, ASSERT_TYPE_ASSERT, "(knownContentPackData[0].available)", (const char *)&queryFormat, "knownContentPackData[0].available") )
      __debugbreak();
    return 1;
  }
  v3 = 0;
  if ( knownContentPackCount <= 0 )
    return 0;
  for ( i = &knownContentPackData[0].contentPack; *i != contentPack; i += 36 )
  {
    if ( ++v3 >= knownContentPackCount )
      return 0;
  }
  if ( bypassDLCCheck && bypassDLCCheck->current.enabled )
    return 1;
  return knownContentPackData[v3].available;
}

/*
==============
Content_DoWeHaveContentPackByName
==============
*/
bool Content_DoWeHaveContentPackByName(int controllerIndex, const char *name)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3656, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  return Content_DoWeHaveDLCPackByName(name);
}

/*
==============
Content_DoWeHaveDLCPackByName
==============
*/
_BOOL8 Content_DoWeHaveDLCPackByName(const char *name)
{
  const char **p_packName; 
  int v3; 
  int contentPack; 
  const dvar_t *v5; 
  int v6; 
  int *p_contentPack; 
  __int64 v8; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3611, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  p_packName = &gameContentPackInfo[0].packName;
  v3 = 0;
  while ( 1 )
  {
    if ( *((_DWORD *)p_packName + 4) != 2 )
    {
      if ( !*p_packName )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 451, ASSERT_TYPE_ASSERT, "(contentPackName)", (const char *)&queryFormat, "contentPackName") )
          __debugbreak();
        goto LABEL_10;
      }
      if ( !I_strnicmp(name, *p_packName, 0x7FFFFFFFui64) )
        break;
    }
LABEL_10:
    ++v3;
    p_packName += 4;
    if ( (__int64)p_packName >= (__int64)&s_contentDLCLables[1] )
    {
      contentPack = 1;
      goto LABEL_12;
    }
  }
  contentPack = gameContentPackInfo[v3].contentPack;
LABEL_12:
  if ( knownContentPackData[0].contentPack != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 374, ASSERT_TYPE_ASSERT, "(knownContentPackData[0].contentPack == (1 << 1))", (const char *)&queryFormat, "knownContentPackData[0].contentPack == CONTENT_ORIGINALMAPS") )
    __debugbreak();
  if ( bypassDLCCheck && bypassDLCCheck->current.enabled )
  {
    v5 = DVARBOOL_online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set;
    if ( !DVARBOOL_online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = 2;
    if ( v5->current.enabled )
      v6 = 2046;
  }
  else
  {
    v6 = 2;
    if ( knownContentPackCount > 1 )
    {
      p_contentPack = &knownContentPackData[1].contentPack;
      v8 = (unsigned int)(knownContentPackCount - 1);
      do
      {
        if ( bypassDLCCheck && bypassDLCCheck->current.enabled || *((_BYTE *)p_contentPack + 4) )
          v6 |= *p_contentPack;
        p_contentPack += 36;
        --v8;
      }
      while ( v8 );
    }
  }
  return contentPack != 1 && (v6 & contentPack) != 0;
}

/*
==============
Content_DoWeHavePaidContentPackEntitlement
==============
*/
bool Content_DoWeHavePaidContentPackEntitlement()
{
  int v0; 
  int *i; 

  if ( bypassDLCCheck && bypassDLCCheck->current.enabled )
    return 1;
  v0 = 0;
  if ( knownContentPackCount <= 0 )
    return 0;
  for ( i = &knownContentPackData[0].contentPack; *i != 8; i += 36 )
  {
    if ( ++v0 >= knownContentPackCount )
      return 0;
  }
  return bypassDLCCheck && bypassDLCCheck->current.enabled || knownContentPackData[v0].available;
}

/*
==============
Content_EnumerateXB3
==============
*/
void Content_EnumerateXB3(int controllerIndex)
{
  int data; 

  data = controllerIndex;
  while ( 1 )
  {
    if ( !s_unmountableContentLock[0] )
    {
      if ( ((unsigned __int8)s_unmountableContentLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", s_unmountableContentLock[0] + 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_unmountableContentLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(s_unmountableContentLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  Sys_AddWorkerCmd(WRKCMD_ENUMERATE_CONTENT, &data);
  Sys_ProcessWorkerCmdsWithTimeout(Content_IsEnumerateXB3Ready, NULL);
  s_isContentEnumerationFinished = 1;
  CL_PlayerData_SetMountedDLCBits(controllerIndex);
  if ( ((unsigned __int8)s_unmountableContentLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_unmountableContentLock) )
    __debugbreak();
  _InterlockedExchange(s_unmountableContentLock, 0);
}

/*
==============
Content_EnumerateXB3_WorkerCmd
==============
*/
void Content_EnumerateXB3_WorkerCmd(const void *data)
{
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v1; 
  HSTRING v2; 
  HSTRING v3; 
  __int64 v4; 
  HSTRING v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  HSTRING v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  HSTRING v17; 
  int v18; 
  int v19; 
  int v20; 
  HSTRING v21; 
  int v22; 
  __int64 v23; 
  HSTRING v24; 
  __int64 v25; 
  _QWORD *v26; 
  HSTRING v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  HSTRING v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  HSTRING v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  HSTRING v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  HSTRING v43; 
  int v44; 
  int v45; 
  HSTRING v46; 
  HSTRING v47; 
  int v48; 
  HSTRING v49; 
  int v50; 
  HSTRING v51; 
  const wchar_t *StringRawBuffer_0; 
  int v53; 
  HSTRING v54; 
  HSTRING v55; 
  int v56; 
  HSTRING v57; 
  int v58; 
  HSTRING v59; 
  const wchar_t *v60; 
  int v61; 
  HSTRING v62; 
  HSTRING v63; 
  int v64; 
  HSTRING v65; 
  const wchar_t *v66; 
  int v67; 
  HSTRING v68; 
  HSTRING v69; 
  int v70; 
  HSTRING v71; 
  int v72; 
  HSTRING v73; 
  const wchar_t *v74; 
  int v75; 
  HSTRING v76; 
  HSTRING v77; 
  int v78; 
  HSTRING v79; 
  int v80; 
  HSTRING v81; 
  const wchar_t *v82; 
  int v83; 
  HSTRING v84; 
  HSTRING v85; 
  int v86; 
  HSTRING v87; 
  int v88; 
  HSTRING v89; 
  const wchar_t *v90; 
  char v91; 
  HSTRING v92; 
  int v93; 
  int v94; 
  HSTRING v95; 
  HSTRING v96; 
  int v97; 
  int v98; 
  __int64 v99; 
  HSTRING v100; 
  int v101; 
  HSTRING v102; 
  int v103; 
  HSTRING v104; 
  int v105; 
  HSTRING v106; 
  HSTRING v107; 
  int v108; 
  HSTRING v109; 
  int v110; 
  HSTRING v111; 
  bool v112; 
  int v113; 
  int v114; 
  HSTRING v115; 
  HSTRING v116; 
  int v117; 
  int v118; 
  int v119; 
  Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *v120; 
  int v121; 
  __int64 v122; 
  int v123; 
  HSTRING v124; 
  __int64 v125; 
  int v126; 
  int v127; 
  HSTRING v128; 
  HSTRING v129; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v130; 
  int v131; 
  int v132; 
  int v133; 
  HSTRING v134; 
  int v135; 
  HSTRING v136; 
  const wchar_t *v137; 
  int v138; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage **p_package; 
  _QWORD *v140; 
  ContentPackList *v141; 
  int v142; 
  HSTRING v143; 
  int v144; 
  HSTRING v145; 
  const wchar_t *v146; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package; 
  int i; 
  __int64 v149; 
  const char *v150; 
  int contentPack; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v152; 
  int v153; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v154; 
  __int64 v155; 
  int j; 
  __int64 v157; 
  const char **p_packName; 
  const char *v159; 
  int v160; 
  HSTRING v161; 
  int v162; 
  HSTRING v163; 
  Platform::String **p_contentId; 
  HSTRING v165; 
  int v166; 
  int v167; 
  int v168; 
  const char *LanguageName; 
  const char *CurrentLanguageName; 
  int v171; 
  const char *CurrentRegionName; 
  unsigned int v173; 
  char *fmt; 
  __int64 cbMultiByte; 
  LPCCH lpDefaultChar; 
  LPBOOL lpUsedDefaultChar; 
  __int64 v178; 
  char v179; 
  char v180; 
  char v181[6]; 
  HSTRING string; 
  HSTRING v183; 
  HSTRING v184; 
  HSTRING v185; 
  __int64 v186; 
  HSTRING string2; 
  int v188; 
  HSTRING v189; 
  HSTRING string1; 
  char v191; 
  char v192[7]; 
  HSTRING v193; 
  __int64 v194; 
  HSTRING v195; 
  int v196; 
  __int64 v197[2]; 
  void *v198; 
  __int64 v199; 
  __int64 v200; 
  HSTRING v201; 
  HSTRING v202; 
  HSTRING v203; 
  HSTRING v204; 
  HSTRING v205; 
  __int64 v206; 
  void *v207; 
  __int64 v208; 
  HSTRING newString[3]; 
  HSTRING v210; 
  int v211; 
  __int64 v212; 
  char MultiByteStr[64]; 

  v212 = -2i64;
  v188 = 0;
  v1 = (Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>,1>::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>,1>(v1);
  v3 = v2;
  string2 = v2;
  if ( v2 )
  {
    v4 = (__int64)(v2 + 2);
    v193 = v2 + 2;
    if ( v2 != (HSTRING)-8i64 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 8i64))(v2 + 2);
  }
  else
  {
    v4 = 0i64;
    v193 = NULL;
  }
  v197[1] = v4;
  if ( v3 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v3 + 16i64))(v3);
  v5 = NULL;
  v183 = NULL;
  if ( s_localDlcPackageList )
  {
    v6 = s_localDlcPackageList->__abi_QueryInterface(s_localDlcPackageList, (Platform::Guid *)&_uuidof__AU__IIterable_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows__, (void **)&v183);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v183;
  }
  string2 = v5;
  v189 = NULL;
  v7 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v5 + 48i64))(v5, &v189);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = (__int64)v189;
  v9 = v189;
  if ( v189 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v189 + 8i64))(v189);
    v8 = (__int64)v189;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  string1 = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8i64))(v9);
  string1 = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v9 + 56i64))(v9, &v179);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    if ( !v179 )
      break;
    v186 = 0i64;
    v11 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v9 + 48i64))(v9, &v186);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = v186;
    v13 = (HSTRING)v186;
    if ( v186 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 8i64))(v186);
      v12 = v186;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    string2 = v13;
    v14 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v13 + 88i64))(v13, &v180);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
    if ( v180 )
    {
      v186 = 0i64;
      v15 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v9 + 48i64))(v9, &v186);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v16 = v186;
      v17 = (HSTRING)v186;
      if ( v186 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 8i64))(v186);
        v16 = v186;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
      string2 = v17;
      v18 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 104i64))(v4, v17);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      if ( v17 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
    }
    v19 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v9 + 64i64))(v9, v181);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  v20 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *))s_localDlcPackageList->Platform::Object::__vftable[2].__abi_GetIids)(s_localDlcPackageList);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  if ( !sDLCPM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 2633, ASSERT_TYPE_ASSERT, "(sDLCPM != nullptr)", (const char *)&queryFormat, "sDLCPM != nullptr") )
    __debugbreak();
  v21 = NULL;
  v189 = NULL;
  v186 = 0i64;
  v22 = sDLCPM->__abi_FindPackages(sDLCPM, AllDownloadableContentOnly, (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> **)&v186);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  v23 = v186;
  v24 = (HSTRING)v186;
  if ( v186 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 8i64))(v186);
    v23 = v186;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
  string2 = v24;
  if ( v24 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 8i64))(v24);
    v21 = v24;
    v189 = v24;
  }
  if ( v24 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16i64))(v24);
  if ( !v21 )
  {
    knownContentPackCount = 0;
    knownContentPackData[0].contentPack = 2;
    knownContentPackData[0].available = 1;
    Core_strcpy(knownContentPackData[0].contentName, 0x80ui64, "MP/ORIGINAL_MAPS");
    ++knownContentPackCount;
    if ( v4 )
    {
      v25 = *(_QWORD *)v4;
      v26 = (_QWORD *)v4;
      goto LABEL_55;
    }
    return;
  }
  v27 = NULL;
  v183 = NULL;
  if ( v4 )
  {
    v28 = (**(__int64 (__fastcall ***)(__int64, void *, HSTRING *))v4)(v4, &_uuidof__AU__IIterable_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows__, &v183);
    if ( v28 < 0 )
      __abi_WinRTraiseException(v28);
    v27 = v183;
  }
  string2 = v27;
  v186 = 0i64;
  v29 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v27 + 48i64))(v27, &v186);
  if ( v29 < 0 )
    __abi_WinRTraiseException(v29);
  v30 = v186;
  v31 = (HSTRING)v186;
  if ( v186 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 8i64))(v186);
    v30 = v186;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
  string1 = v31;
  if ( v31 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 8i64))(v31);
  string1 = v31;
  if ( v31 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16i64))(v31);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16i64))(v27);
  while ( 1 )
  {
    v32 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v31 + 56i64))(v31, &v179);
    if ( v32 < 0 )
      __abi_WinRTraiseException(v32);
    if ( !v179 )
      break;
    v197[0] = 0i64;
    v33 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v31 + 48i64))(v31, v197);
    if ( v33 < 0 )
      __abi_WinRTraiseException(v33);
    v34 = v197[0];
    v35 = (HSTRING)v197[0];
    if ( v197[0] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v197[0] + 8i64))(v197[0]);
      v34 = v197[0];
    }
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
    string2 = v35;
    v36 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, HSTRING))s_localDlcPackageList->Platform::Object::__vftable[2].__abi_AddRef)(s_localDlcPackageList, v35);
    if ( v36 < 0 )
      __abi_WinRTraiseException(v36);
    if ( v35 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 16i64))(v35);
    v37 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v31 + 64i64))(v31, v181);
    if ( v37 < 0 )
      __abi_WinRTraiseException(v37);
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16i64))(v31);
  Com_Printf(16, "==========Start Enumerating Installed Packages==========\n");
  v38 = 1;
  v196 = 1;
  v39 = NULL;
  v183 = NULL;
  if ( v189 )
  {
    v40 = (**(__int64 (__fastcall ***)(__int64, void *, HSTRING *))v189)((__int64)v189, &_uuidof__AU__IIterable_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows__, &v183);
    if ( v40 < 0 )
      __abi_WinRTraiseException(v40);
    v39 = v183;
  }
  string2 = v39;
  v200 = 0i64;
  v41 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v39 + 48i64))(v39, &v200);
  if ( v41 < 0 )
    __abi_WinRTraiseException(v41);
  v42 = v200;
  v43 = (HSTRING)v200;
  if ( v200 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v200 + 8i64))(v200);
    v42 = v200;
  }
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16i64))(v42);
  string1 = v43;
  if ( v43 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 8i64))(v43);
  v210 = v43;
  if ( v43 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16i64))(v43);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v39 + 16i64))(v39);
  while ( 1 )
  {
    v44 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v43 + 56i64))(v43, &v179);
    if ( v44 < 0 )
      __abi_WinRTraiseException(v44);
    if ( !v179 )
      break;
    Com_Printf(16, "Installed Package: %i\n", v38);
    v184 = NULL;
    v45 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &v184);
    if ( v45 < 0 )
      __abi_WinRTraiseException(v45);
    v46 = v184;
    v47 = v184;
    if ( v184 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v184 + 8i64))(v184);
      v46 = v184;
    }
    if ( v46 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v46 + 16i64))(v46);
    v183 = v47;
    string = NULL;
    v48 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v47 + 104i64))(v47, &string);
    if ( v48 < 0 )
      __abi_WinRTraiseException(v48);
    v49 = string;
    if ( string )
    {
      v50 = WindowsDuplicateString_0(string, newString);
      if ( v50 < 0 )
        __abi_WinRTraiseException(v50);
      v51 = newString[0];
      v49 = string;
    }
    else
    {
      v51 = NULL;
    }
    WindowsDeleteString_0(v49);
    v185 = v51;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v51, NULL);
    Com_Printf(16, "   Display Name: %S\n", StringRawBuffer_0);
    WindowsDeleteString_0(v51);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v47 + 16i64))(v47);
    string = NULL;
    v53 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &string);
    if ( v53 < 0 )
      __abi_WinRTraiseException(v53);
    v54 = string;
    v55 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v54 = string;
    }
    if ( v54 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v54 + 16i64))(v54);
    v183 = v55;
    v184 = NULL;
    v56 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v55 + 72i64))(v55, &v184);
    if ( v56 < 0 )
      __abi_WinRTraiseException(v56);
    v57 = v184;
    if ( v184 )
    {
      v58 = WindowsDuplicateString_0(v184, &v201);
      if ( v58 < 0 )
        __abi_WinRTraiseException(v58);
      v59 = v201;
      v57 = v184;
    }
    else
    {
      v59 = NULL;
    }
    WindowsDeleteString_0(v57);
    v185 = v59;
    v60 = WindowsGetStringRawBuffer_0(v59, NULL);
    Com_Printf(16, "   Name:\t\t  %S\n", v60);
    WindowsDeleteString_0(v59);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v55 + 16i64))(v55);
    string = NULL;
    v61 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &string);
    if ( v61 < 0 )
      __abi_WinRTraiseException(v61);
    v62 = string;
    v63 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v62 = string;
    }
    if ( v62 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v62 + 16i64))(v62);
    v183 = v63;
    v64 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v63 + 96i64))(v63, v197);
    if ( v64 < 0 )
      __abi_WinRTraiseException(v64);
    LODWORD(v186) = v197[0];
    v65 = (HSTRING)default::uint32::ToString(&v186);
    v207 = v65;
    v66 = WindowsGetStringRawBuffer_0(v65, NULL);
    Com_Printf(16, "   Type:         %S\n", v66);
    WindowsDeleteString_0(v65);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v63 + 16i64))(v63);
    string = NULL;
    v67 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &string);
    if ( v67 < 0 )
      __abi_WinRTraiseException(v67);
    v68 = string;
    v69 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v68 = string;
    }
    if ( v68 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v68 + 16i64))(v68);
    v183 = v69;
    v184 = NULL;
    v70 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v69 + 64i64))(v69, &v184);
    if ( v70 < 0 )
      __abi_WinRTraiseException(v70);
    v71 = v184;
    if ( v184 )
    {
      v72 = WindowsDuplicateString_0(v184, &v202);
      if ( v72 < 0 )
        __abi_WinRTraiseException(v72);
      v73 = v202;
      v71 = v184;
    }
    else
    {
      v73 = NULL;
    }
    WindowsDeleteString_0(v71);
    v185 = v73;
    v74 = WindowsGetStringRawBuffer_0(v73, NULL);
    Com_Printf(16, "   ProductID:    %S\n", v74);
    WindowsDeleteString_0(v73);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v69 + 16i64))(v69);
    string = NULL;
    v75 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &string);
    if ( v75 < 0 )
      __abi_WinRTraiseException(v75);
    v76 = string;
    v77 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v76 = string;
    }
    if ( v76 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v76 + 16i64))(v76);
    v183 = v77;
    v184 = NULL;
    v78 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v77 + 56i64))(v77, &v184);
    if ( v78 < 0 )
      __abi_WinRTraiseException(v78);
    v79 = v184;
    if ( v184 )
    {
      v80 = WindowsDuplicateString_0(v184, &v203);
      if ( v80 < 0 )
        __abi_WinRTraiseException(v80);
      v81 = v203;
      v79 = v184;
    }
    else
    {
      v81 = NULL;
    }
    WindowsDeleteString_0(v79);
    v185 = v81;
    v82 = WindowsGetStringRawBuffer_0(v81, NULL);
    Com_Printf(16, "   ContentID:    %S\n", v82);
    WindowsDeleteString_0(v81);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v77 + 16i64))(v77);
    string = NULL;
    v83 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &string);
    if ( v83 < 0 )
      __abi_WinRTraiseException(v83);
    v84 = string;
    v85 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v84 = string;
    }
    if ( v84 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v84 + 16i64))(v84);
    v183 = v85;
    v184 = NULL;
    v86 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v85 + 48i64))(v85, &v184);
    if ( v86 < 0 )
      __abi_WinRTraiseException(v86);
    v87 = v184;
    if ( v184 )
    {
      v88 = WindowsDuplicateString_0(v184, &v204);
      if ( v88 < 0 )
        __abi_WinRTraiseException(v88);
      v89 = v204;
      v87 = v184;
    }
    else
    {
      v89 = NULL;
    }
    WindowsDeleteString_0(v87);
    v185 = v89;
    v90 = WindowsGetStringRawBuffer_0(v89, NULL);
    Com_Printf(16, "   TitleID:      %S\n", v90);
    WindowsDeleteString_0(v89);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v85 + 16i64))(v85);
    v91 = 0;
    v92 = NULL;
    v183 = NULL;
    if ( v193 )
    {
      v93 = (**(__int64 (__fastcall ***)(__int64, void *, HSTRING *))v193)((__int64)v193, &_uuidof__AU__IIterable_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows__, &v183);
      if ( v93 < 0 )
        __abi_WinRTraiseException(v93);
      v92 = v183;
    }
    v205 = v92;
    string = NULL;
    v94 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v92 + 48i64))(v92, &string);
    if ( v94 < 0 )
      __abi_WinRTraiseException(v94);
    v95 = string;
    v96 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v95 = string;
    }
    if ( v95 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v95 + 16i64))(v95);
    v185 = v96;
    if ( v96 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v96 + 8i64))(v96);
    newString[1] = v96;
    if ( v96 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v96 + 16i64))(v96);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v92 + 16i64))(v92);
    while ( 1 )
    {
      v97 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v96 + 56i64))(v96, &v180);
      if ( v97 < 0 )
        __abi_WinRTraiseException(v97);
      if ( !v180 )
        break;
      v194 = 0i64;
      v98 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v43 + 48i64))(v43, &v194);
      if ( v98 < 0 )
        __abi_WinRTraiseException(v98);
      v99 = v194;
      v100 = (HSTRING)v194;
      if ( v194 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v194 + 8i64))(v194);
        v99 = v194;
      }
      if ( v99 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16i64))(v99);
      newString[2] = v100;
      v195 = NULL;
      v101 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v100 + 56i64))(v100, &v195);
      if ( v101 < 0 )
        __abi_WinRTraiseException(v101);
      v102 = v195;
      if ( v195 )
      {
        v103 = WindowsDuplicateString_0(v195, &string1);
        if ( v103 < 0 )
          __abi_WinRTraiseException(v103);
        v104 = string1;
        v102 = v195;
      }
      else
      {
        v104 = NULL;
      }
      WindowsDeleteString_0(v102);
      v198 = v104;
      v185 = NULL;
      v105 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v96 + 48i64))(v96, &v185);
      if ( v105 < 0 )
        __abi_WinRTraiseException(v105);
      v106 = v185;
      v107 = v185;
      if ( v185 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v185 + 8i64))(v185);
        v106 = v185;
      }
      if ( v106 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v106 + 16i64))(v106);
      v184 = v107;
      v183 = NULL;
      v108 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v107 + 56i64))(v107, &v183);
      if ( v108 < 0 )
        __abi_WinRTraiseException(v108);
      v109 = v183;
      if ( v183 )
      {
        v110 = WindowsDuplicateString_0(v183, &string2);
        if ( v110 < 0 )
          __abi_WinRTraiseException(v110);
        v111 = string2;
        v109 = v183;
      }
      else
      {
        v111 = NULL;
      }
      WindowsDeleteString_0(v109);
      LODWORD(v184) = 0;
      WindowsCompareStringOrdinal_0(v104, v111, (INT32 *)&v184);
      v112 = (_DWORD)v184 == 0;
      WindowsDeleteString_0(v111);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v107 + 16i64))(v107);
      WindowsDeleteString_0(v104);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v100 + 16i64))(v100);
      if ( v112 )
      {
        v91 = 1;
        break;
      }
      v114 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v96 + 64i64))(v96, &v191);
      v91 = 0;
      if ( v114 < 0 )
        __abi_WinRTraiseException(v114);
    }
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v96 + 16i64))(v96);
    if ( !v91 )
    {
      v183 = NULL;
      v113 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v43 + 48i64))(v43, &v183);
      if ( v113 < 0 )
        __abi_WinRTraiseException(v113);
      v115 = v183;
      v116 = v183;
      if ( v183 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v183 + 8i64))(v183);
        v115 = v183;
      }
      if ( v115 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v115 + 16i64))(v115);
      v198 = v116;
      v117 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, HSTRING))s_localDlcPackageList->Platform::Object::__vftable[2].__abi_AddRef)(s_localDlcPackageList, v116);
      if ( v117 < 0 )
        __abi_WinRTraiseException(v117);
      if ( v116 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v116 + 16i64))(v116);
    }
    v38 = ++v196;
    v118 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v43 + 64i64))(v43, v192);
    if ( v118 < 0 )
      __abi_WinRTraiseException(v118);
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16i64))(v43);
  Com_Printf(16, "==========End Enumerating Installed Packages==========\n");
  v119 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, __int64 *))s_localDlcPackageList->Platform::Object::__vftable[1].__abi_AddRef)(s_localDlcPackageList, &v186);
  if ( v119 < 0 )
    __abi_WinRTraiseException(v119);
  if ( !(_DWORD)v186 )
  {
    knownContentPackCount = 0;
    knownContentPackData[0].contentPack = 2;
    knownContentPackData[0].available = 1;
    Core_strcpy(knownContentPackData[0].contentName, 0x80ui64, "MP/ORIGINAL_MAPS");
    ++knownContentPackCount;
    if ( v189 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v189 + 16i64))(v189);
    if ( v193 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v193 + 16i64))(v193);
    return;
  }
  v120 = s_localDlcPackageList;
  string = (HSTRING)s_localDlcPackageList;
  if ( s_localDlcPackageList )
    s_localDlcPackageList->__abi_AddRef(s_localDlcPackageList);
  v198 = v120;
  v199 = 0i64;
  v121 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, __int64 *))v120->Platform::Object::__vftable[1].__abi_AddRef)(v120, &v186);
  if ( v121 < 0 )
    __abi_WinRTraiseException(v121);
  v122 = (unsigned int)v186;
  v194 = (unsigned int)v186;
  if ( v120 )
    v120->__abi_AddRef(v120);
  v207 = v120;
  v208 = v122;
  v123 = v188 | 3;
  v188 |= 3u;
  if ( v120 )
    v120->__abi_Release(v120);
  v124 = (HSTRING)s_localDlcPackageList;
  v195 = (HSTRING)s_localDlcPackageList;
  if ( s_localDlcPackageList )
    s_localDlcPackageList->__abi_AddRef(s_localDlcPackageList);
  v205 = v124;
  v125 = 0i64;
  v206 = 0i64;
  v126 = v123 | 4;
  v188 = v126;
  while ( v125 != v122 )
  {
    if ( v124 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v124 + 8i64))(v124);
    v210 = v124;
    v211 = v125;
    v188 = v126 | 8;
    v183 = NULL;
    v127 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v124 + 48i64))(v124, (unsigned int)v125, &v183);
    if ( v127 < 0 )
      __abi_WinRTraiseException(v127);
    v128 = v183;
    v129 = v183;
    v185 = v183;
    if ( v183 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v183 + 8i64))(v183);
      v128 = v183;
    }
    if ( v128 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v128 + 16i64))(v128);
    v198 = v129;
    if ( v129 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 8i64))(v129);
    if ( v129 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 16i64))(v129);
    v198 = v129;
    if ( v129 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 8i64))(v129);
    v130 = (Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v129;
    string2 = v129;
    if ( v129 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 16i64))(v129);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v124 + 16i64))(v124);
    v180 = 0;
    v179 = 0;
    if ( !v129 )
      goto LABEL_317;
    v180 = 0;
    v131 = (*(__int64 (__fastcall **)(HSTRING, char *, char *))(*(_QWORD *)v129 + 152i64))(v129, &v180, v181);
    if ( v131 < 0 )
      __abi_WinRTraiseException(v131);
    v179 = v181[0];
    if ( !v181[0] )
    {
LABEL_317:
      if ( !v129 )
        goto LABEL_319;
LABEL_318:
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 16i64))(v129);
      goto LABEL_319;
    }
    string1 = NULL;
    v132 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs _> *, HSTRING *))(*(_QWORD *)v129 + 160i64))(v129, s_licenseTerminatedEventHandler, &string1);
    if ( v132 < 0 )
      __abi_WinRTraiseException(v132);
    v185 = NULL;
    v133 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v129 + 72i64))(v129, &v185);
    if ( v133 < 0 )
      __abi_WinRTraiseException(v133);
    v134 = v185;
    if ( v185 )
    {
      v135 = WindowsDuplicateString_0(v185, &v204);
      if ( v135 < 0 )
        __abi_WinRTraiseException(v135);
      v136 = v204;
      v134 = v185;
    }
    else
    {
      v136 = NULL;
    }
    WindowsDeleteString_0(v134);
    v137 = WindowsGetStringRawBuffer_0(v136, NULL);
    WideCharToMultiByte(0xFDE9u, 0, v137, -1, MultiByteStr, 64, NULL, NULL);
    WindowsDeleteString_0(v136);
    v138 = 0;
    p_package = &contentPacks[0].package;
    while ( *p_package )
    {
      ++v138;
      p_package += 36;
      if ( (__int64)p_package >= (__int64)&knownContentPackData[1].contentId )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 1398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No free content pack slots!") )
          __debugbreak();
        goto LABEL_252;
      }
    }
    if ( v138 == -1 )
    {
LABEL_252:
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 16i64))(v129);
      break;
    }
    v141 = &contentPacks[v138];
    if ( !Content_MountPackage((Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v129) )
      goto LABEL_318;
    v185 = NULL;
    v142 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v129 + 80i64))(v129, &v185);
    if ( v142 < 0 )
      __abi_WinRTraiseException(v142);
    v143 = v185;
    if ( v185 )
    {
      v144 = WindowsDuplicateString_0(v185, &v203);
      if ( v144 < 0 )
        __abi_WinRTraiseException(v144);
      v145 = v203;
      v143 = v185;
    }
    else
    {
      v145 = NULL;
    }
    WindowsDeleteString_0(v143);
    v146 = WindowsGetStringRawBuffer_0(v145, NULL);
    WideCharToMultiByte(0xFDE9u, 0, v146, -1, v141->mountPoint, 64, NULL, NULL);
    WindowsDeleteString_0(v145);
    if ( v129 != (HSTRING)v141->package )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v129 + 8i64))(v129);
      package = v141->package;
      if ( package )
        package->__abi_Release(package);
      v141->package = (Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v129;
    }
    v141->mounted = 0;
    for ( i = 0; i < 11; ++i )
    {
      if ( (unsigned int)i >= 0xB )
      {
        LODWORD(lpDefaultChar) = 11;
        LODWORD(cbMultiByte) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Content_GetGameContentPackCount() )", "index doesn't index Content_GetGameContentPackCount()\n\t%i not in [0, %i)", cbMultiByte, lpDefaultChar) )
          __debugbreak();
      }
      v149 = i;
      v150 = j_va("%s\\%s.id", v141->mountPoint, gameContentPackInfo[v149].packName);
      if ( Sys_FileExists(v150) )
      {
        contentPack = gameContentPackInfo[v149].contentPack;
        goto LABEL_277;
      }
    }
    Com_PrintWarning(16, "Unable to determine map pack identity\n");
    contentPack = 1;
LABEL_277:
    v141->contentPack = contentPack;
    if ( Content_DoWeHaveContentPack(contentPack) )
    {
      LODWORD(fmt) = Content_IsBypassDLCCheck();
      Com_Printf(16, "We already have drive %s it mounted as a different drive (%d). bypassDLCCheck=%d\n", MultiByteStr, (unsigned int)v141->contentPack, fmt);
      Content_UnmountPackage(v130);
      v141->mountPoint[0] = 0;
      v152 = v141->package;
      if ( v152 )
      {
        v152->__abi_Release(v152);
        v141->package = NULL;
      }
      v141->contentPack = 0;
      v141->mounted = 0;
      if ( v130 )
        goto LABEL_281;
    }
    else
    {
      v153 = v141->contentPack;
      if ( v141->contentPack == 1 )
      {
        Content_UnmountPackage(v130);
        v141->mountPoint[0] = 0;
        v154 = v141->package;
        if ( v154 )
        {
          v154->__abi_Release(v154);
          v141->package = NULL;
        }
        Com_PrintError(16, "Error mounting content package %s\n", MultiByteStr);
      }
      else
      {
        v141->mounted = 1;
        v155 = knownContentPackCount;
        knownContentPackData[v155].contentPack = v153;
        knownContentPackData[v155].available = 1;
        for ( j = 0; ; ++j )
        {
          if ( j >= 11 )
          {
            Com_PrintWarning(16, "Unable to determine map pack identity\n");
            v159 = "DLC/UNKNOWN";
            goto LABEL_295;
          }
          v157 = j;
          if ( gameContentPackInfo[v157].contentPack == v153 )
            break;
        }
        p_packName = &gameContentPackInfo[v157].packName;
        if ( !*p_packName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 541, ASSERT_TYPE_ASSERT, "(gameContentPackInfo[ i ].packName)", (const char *)&queryFormat, "gameContentPackInfo[ i ].packName") )
          __debugbreak();
        v159 = *p_packName;
LABEL_295:
        Core_strcpy(knownContentPackData[knownContentPackCount].contentName, 0x80ui64, v159);
        v185 = NULL;
        v160 = v130->__abi_get_ContentId(v130, (Platform::String **)&v185);
        if ( v160 < 0 )
          __abi_WinRTraiseException(v160);
        v161 = v185;
        if ( v185 )
        {
          v162 = WindowsDuplicateString_0(v185, &v202);
          if ( v162 < 0 )
            __abi_WinRTraiseException(v162);
          v163 = v202;
          v161 = v185;
        }
        else
        {
          v163 = NULL;
        }
        WindowsDeleteString_0(v161);
        v198 = v163;
        p_contentId = &knownContentPackData[knownContentPackCount].contentId;
        v165 = (HSTRING)*p_contentId;
        if ( *p_contentId != (Platform::String *)v163 )
        {
          if ( v165 )
            WindowsDeleteString_0(v165);
          *p_contentId = NULL;
          if ( v163 )
          {
            v166 = WindowsDuplicateString_0(v163, &v201);
            if ( v166 < 0 )
              __abi_WinRTraiseException(v166);
            *p_contentId = (Platform::String *)v201;
          }
        }
        WindowsDeleteString_0(v163);
        Com_Printf(16, "Found dlc %s (%s)\n", knownContentPackData[knownContentPackCount].contentName, MultiByteStr);
        ++knownContentPackCount;
        v141->startHashIndex = s_hashBufferIndex;
        v167 = v141->contentPack;
        if ( v141->contentPack == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 1206, ASSERT_TYPE_ASSERT, "(contentPack != (1 << 0))", (const char *)&queryFormat, "contentPack != CONTENT_UNKNOWN") )
          __debugbreak();
        v168 = Content_BuildFileList(v141->mountPoint, NULL, v167);
        if ( SEH_GetCurrentLanguage() )
        {
          LanguageName = SEH_GetLanguageName(0);
          v168 += Content_BuildFileList(v141->mountPoint, LanguageName, v167);
        }
        CurrentLanguageName = SEH_GetCurrentLanguageName();
        v171 = Content_BuildFileList(v141->mountPoint, CurrentLanguageName, v167) + v168;
        CurrentRegionName = RG_GetCurrentRegionName();
        v173 = Content_BuildFileList(v141->mountPoint, CurrentRegionName, v167) + v171;
        LODWORD(fmt) = s_hashBufferIndex;
        Com_Printf(10, "Content_ReadFileList: '%s', %d files, total %d.\n", v141->mountPoint, v173, fmt);
        v141->hashCount = v173;
        if ( v173 + v141->startHashIndex != s_hashBufferIndex )
        {
          LODWORD(v178) = s_hashBufferIndex;
          LODWORD(lpUsedDefaultChar) = v173 + v141->startHashIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 2812, ASSERT_TYPE_ASSERT, "( contentPack->startHashIndex + contentPack->hashCount ) == ( s_hashBufferIndex )", "%s == %s\n\t%i, %i", "contentPack->startHashIndex + contentPack->hashCount", "s_hashBufferIndex", lpUsedDefaultChar, v178) )
            __debugbreak();
        }
        Content_UnmountPackage(v130);
        v141->mountPoint[0] = 0;
        v141->mounted = 0;
      }
      if ( v130 )
LABEL_281:
        v130->__abi_Release(v130);
    }
LABEL_319:
    v125 = ++v206;
    v124 = v195;
    v126 = v188;
    v122 = v194;
  }
  if ( v124 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v124 + 16i64))(v124);
  if ( string )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 16i64))(string);
  v140 = v193;
  if ( v189 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v189 + 16i64))(v189);
  if ( v140 )
  {
    v25 = *v140;
    v26 = v140;
LABEL_55:
    (*(void (__fastcall **)(_QWORD *))(v25 + 16))(v26);
  }
}

/*
==============
Content_FinalizeMounting
==============
*/
void Content_FinalizeMounting(int controllerIndex)
{
  s_isContentEnumerationFinished = 1;
  CL_PlayerData_SetMountedDLCBits(controllerIndex);
}

/*
==============
Content_FindContentPacks
==============
*/
void Content_FindContentPacks(const int controllerIndex)
{
  int v2; 
  bool v3; 

  v2 = R_IsInRemoteScreenUpdate();
  v3 = v2 != 0;
  if ( !v2 )
    R_BeginRemoteScreenUpdateWithAnimatedTexture();
  Content_EnumerateXB3(controllerIndex);
  if ( !v3 )
    R_EndRemoteScreenUpdateWithAnimatedTexture();
}

/*
==============
Content_GetAvailableContentPacks
==============
*/
__int64 Content_GetAvailableContentPacks()
{
  const dvar_t *v0; 
  unsigned int v1; 
  unsigned int v3; 
  int *p_contentPack; 
  __int64 v5; 

  if ( knownContentPackData[0].contentPack != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 374, ASSERT_TYPE_ASSERT, "(knownContentPackData[0].contentPack == (1 << 1))", (const char *)&queryFormat, "knownContentPackData[0].contentPack == CONTENT_ORIGINALMAPS") )
    __debugbreak();
  if ( bypassDLCCheck && bypassDLCCheck->current.enabled )
  {
    v0 = DVARBOOL_online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set;
    if ( !DVARBOOL_online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    v1 = 2;
    if ( v0->current.enabled )
      return 2046;
    return v1;
  }
  else
  {
    v3 = 2;
    if ( knownContentPackCount > 1 )
    {
      p_contentPack = &knownContentPackData[1].contentPack;
      v5 = (unsigned int)(knownContentPackCount - 1);
      do
      {
        if ( bypassDLCCheck && bypassDLCCheck->current.enabled || *((_BYTE *)p_contentPack + 4) )
          v3 |= *p_contentPack;
        p_contentPack += 36;
        --v5;
      }
      while ( v5 );
    }
    return v3;
  }
}

/*
==============
Content_GetBrDLCPacks
==============
*/
const int *Content_GetBrDLCPacks()
{
  return s_contentBrDLCPacks;
}

/*
==============
Content_GetContentIDFromPackName
==============
*/
__int64 Content_GetContentIDFromPackName(const char *packName)
{
  const char **p_packName; 
  int i; 

  p_packName = &gameContentPackInfo[0].packName;
  for ( i = 0; ; ++i )
  {
    if ( *((_DWORD *)p_packName + 4) != 2 )
    {
      if ( !*p_packName )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 451, ASSERT_TYPE_ASSERT, "(contentPackName)", (const char *)&queryFormat, "contentPackName") )
          __debugbreak();
        goto LABEL_7;
      }
      if ( !I_strnicmp(packName, *p_packName, 0x7FFFFFFFui64) )
        break;
    }
LABEL_7:
    p_packName += 4;
    if ( (__int64)p_packName >= (__int64)&s_contentDLCLables[1] )
      return 1i64;
  }
  return (unsigned int)gameContentPackInfo[i].contentPack;
}

/*
==============
Content_GetContentPackForFile
==============
*/
ContentPackList *Content_GetContentPackForFile(Sys_Folder folder, const char *fileName)
{
  const char *DlcFolder; 
  unsigned __int8 v5; 
  char *v6; 
  int i; 
  unsigned int headNodeIndex; 
  __int64 v9; 
  unsigned int v11; 
  ContentPackList *v12; 
  ContentPackList *v13; 
  int v14; 
  __int64 v15; 
  bool *p_mounted; 
  char v17; 
  unsigned int nextNodeIndex; 
  unsigned int startHashIndex; 
  __int64 v20; 
  IWHashTable_Bucket<unsigned int> *v21; 
  char dest[80]; 
  char sanitizedBuffer[256]; 

  Content_TrimFileNameForHash(fileName, sanitizedBuffer, 0x100u);
  DlcFolder = Sys_GetDlcFolder(folder);
  Com_sprintf(dest, 0x46ui64, "%s%s", DlcFolder, sanitizedBuffer);
  Content_SanitizeHashFilePath(dest, 0x46u);
  v5 = dest[0];
  v6 = dest;
  for ( i = 0; *v6; v5 = *v6 )
  {
    ++v6;
    i = v5 ^ (16777619 * i);
  }
  headNodeIndex = s_dlcHashTable.buckets[i & 0xFFF].headNodeIndex;
  v21 = &s_dlcHashTable.buckets[i & 0xFFF];
  if ( headNodeIndex == -1 )
    goto LABEL_6;
  while ( 1 )
  {
    v9 = headNodeIndex;
    if ( s_dlcHashNodes[headNodeIndex].key == i )
      break;
    headNodeIndex = s_dlcHashNodes[headNodeIndex].nextNodeIndex;
    if ( headNodeIndex == -1 )
      goto LABEL_6;
  }
  if ( headNodeIndex >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3524, ASSERT_TYPE_ASSERT, "(unsigned)( existingHashIndex ) < (unsigned)( ( sizeof( *array_counter( s_hashBufferContentPack ) ) + 0 ) )", "existingHashIndex doesn't index s_hashBufferContentPack\n\t%i not in [0, %i)", headNodeIndex, 4096) )
    __debugbreak();
  if ( s_hashBufferContentPack[v9] <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3525, ASSERT_TYPE_ASSERT, "( s_hashBufferContentPack[existingHashIndex] ) > ( (1 << 0) )", "%s > %s\n\t%i, %i", "s_hashBufferContentPack[existingHashIndex]", "CONTENT_UNKNOWN", s_hashBufferContentPack[v9], 1) )
    __debugbreak();
  v11 = s_hashBufferContentPack[v9];
  if ( v11 == 1 )
  {
LABEL_6:
    Com_Printf(16, "\t\tFAILED TO FIND CONTENT PACK for path '%s' (full name '%s')\n", dest, fileName);
    return 0i64;
  }
  if ( !Content_DoWeHaveContentPack(v11) )
  {
    LODWORD(v20) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3556, ASSERT_TYPE_ASSERT, "( Content_DoWeHaveContentPack( contentSource ) )", "Content_DoWeHaveContentPack failed for source %x (file '%s')", v20, fileName) )
      __debugbreak();
  }
  while ( 1 )
  {
    if ( !s_unmountableContentLock[0] )
    {
      if ( ((unsigned __int8)s_unmountableContentLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", s_unmountableContentLock[0] + 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_unmountableContentLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(s_unmountableContentLock, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
  v12 = contentPacks;
  v13 = NULL;
  v14 = 0;
  while ( v12->contentPack != v11 )
  {
    ++v14;
    if ( (__int64)++v12 >= (__int64)knownContentPackData )
      goto LABEL_33;
  }
  v15 = v14;
  p_mounted = &contentPacks[v15].mounted;
  v13 = &contentPacks[v15];
  if ( !*p_mounted )
  {
    if ( Content_MountContent(&contentPacks[v15], NULL) )
    {
      Com_PrintError(16, "Content_MountContentPack: Failed to mount content pack %d\n", v11);
      v17 = 0;
      v13 = NULL;
    }
    else
    {
      v17 = 1;
    }
    *p_mounted = v17;
  }
LABEL_33:
  if ( ((unsigned __int64)s_unmountableContentLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_unmountableContentLock) )
    __debugbreak();
  _InterlockedExchange(s_unmountableContentLock, 0);
  if ( !v13 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3575, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Content_GetContentPackForFile: Failure in intended execution logic - should not reach this point. filePath '%s', fileName '%s", dest, fileName) )
      __debugbreak();
    return 0i64;
  }
  nextNodeIndex = v21->headNodeIndex;
  if ( v21->headNodeIndex == -1 )
    goto LABEL_44;
  while ( s_dlcHashNodes[nextNodeIndex].key != i )
  {
    nextNodeIndex = s_dlcHashNodes[nextNodeIndex].nextNodeIndex;
    if ( nextNodeIndex == -1 )
      goto LABEL_44;
  }
  if ( nextNodeIndex == -1 || (startHashIndex = v13->startHashIndex, nextNodeIndex < startHashIndex) || nextNodeIndex >= v13->hashCount + startHashIndex )
  {
LABEL_44:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3571, ASSERT_TYPE_ASSERT, "( Content_PackListContainsFile( hash, contentPackList ) )", "Result from Content_FindContentSourceForHash does not match Content_PackListContainsFile. filePath '%s', fileName '%s", dest, fileName) )
      __debugbreak();
  }
  return v13;
}

/*
==============
Content_GetCpDLCPacks
==============
*/
const int *Content_GetCpDLCPacks()
{
  return s_contentCpDLCPacks;
}

/*
==============
Content_GetDLCLabels
==============
*/
const char **Content_GetDLCLabels()
{
  return s_contentDLCLables;
}

/*
==============
Content_GetDLCPacks
==============
*/
const int *Content_GetDLCPacks()
{
  return s_contentDLCPacks;
}

/*
==============
Content_GetGameContentPackCount
==============
*/
__int64 Content_GetGameContentPackCount()
{
  return 11i64;
}

/*
==============
Content_GetIndexedContentPackFilenameIdentifier
==============
*/
const char *Content_GetIndexedContentPackFilenameIdentifier(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0xB )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Content_GetGameContentPackCount() )", "index doesn't index Content_GetGameContentPackCount()\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return gameContentPackInfo[v1].packName;
}

/*
==============
Content_GetIndexedContentPackID
==============
*/
__int64 Content_GetIndexedContentPackID(int index)
{
  if ( index >= knownContentPackCount )
    return 1i64;
  else
    return (unsigned int)knownContentPackData[index].contentPack;
}

/*
==============
Content_GetIndexedContentPackTrialFilenameIdentifier
==============
*/
const char *Content_GetIndexedContentPackTrialFilenameIdentifier(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0xB )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 863, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( Content_GetGameContentPackCount() )", "index doesn't index Content_GetGameContentPackCount()\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return gameContentPackInfo[v1].trialName;
}

/*
==============
Content_GetIndexedContentStrRef
==============
*/
const char *Content_GetIndexedContentStrRef(int index)
{
  int v1; 
  int *p_contentPack; 
  GameContentPackInfo *v4; 

  v1 = 0;
  p_contentPack = &gameContentPackInfo[0].contentPack;
  while ( *p_contentPack != index )
  {
    ++v1;
    p_contentPack += 8;
    if ( (__int64)p_contentPack >= (__int64)&s_contentDLCLables[3] )
      return (char *)&queryFormat.fmt + 3;
  }
  v4 = &gameContentPackInfo[v1];
  if ( !v4->contentStrRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 432, ASSERT_TYPE_ASSERT, "(gameContentPackInfo[ i ].contentStrRef)", (const char *)&queryFormat, "gameContentPackInfo[ i ].contentStrRef") )
    __debugbreak();
  return v4->contentStrRef;
}

/*
==============
Content_GetKnownContentPackCount
==============
*/
__int64 Content_GetKnownContentPackCount()
{
  return (unsigned int)knownContentPackCount;
}

/*
==============
Content_GetMpDLCPacks
==============
*/
const int *Content_GetMpDLCPacks()
{
  return s_contentMpDLCPacks;
}

/*
==============
Content_GetProgress
==============
*/
__int64 Content_GetProgress(const int pack, long double *progress)
{
  int v4; 
  int *i; 

  if ( !progress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 2232, ASSERT_TYPE_ASSERT, "(progress)", (const char *)&queryFormat, "progress") )
    __debugbreak();
  v4 = 0;
  if ( knownContentPackCount <= 0 )
    return 0i64;
  for ( i = &knownContentPackData[0].contentPack; *i != pack; i += 36 )
  {
    if ( ++v4 >= knownContentPackCount )
      return 0i64;
  }
  *progress = 1.0;
  return 3i64;
}

/*
==============
Content_GetSpDLCPacks
==============
*/
const int *Content_GetSpDLCPacks()
{
  return s_contentSpDLCPacks;
}

/*
==============
Content_Init
==============
*/
void Content_Init(void)
{
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage **p_package; 
  __int64 v1; 
  IWHashTableN<4096,IWHashTable_Node32,IWHashTable_Node32::Hasher> *v2; 
  __int64 v3; 

  Dvar_BeginPermanentRegistration();
  disableDLC = Dvar_RegisterBool("MQSPQRQQRO", 0, 0, "If true, the game will behave as if every map was a base map");
  content_debug_hashtable = Dvar_RegisterBool("MQQNPPLSQP", 0, 0, "Toggles prints of the hash table building process");
  content_assert_hash_truncate = Dvar_RegisterBool("NNNPLRSSTN", 1, 0, "Toggles the errors when we have issues generating the hash truncation");
  assertFileInMultipleDLCPacks = Dvar_RegisterBool("NKKOOKSQPP", 1, 0, "Toggles the errors when same file hash exists in multiple DLC packs.");
  content_assert_hash_collisions = Dvar_RegisterBool("NSQNPPOKPK", 1, 0, "Toggles the errors when the we have hash collisions");
  Dvar_EndPermanentRegistration();
  p_package = &contentPacks[0].package;
  v1 = 64i64;
  do
  {
    *((_DWORD *)p_package - 70) = 1;
    if ( *p_package )
    {
      (*p_package)->__abi_Release(*p_package);
      *p_package = NULL;
    }
    *((_BYTE *)p_package - 276) = 0;
    p_package += 36;
    --v1;
  }
  while ( v1 );
  knownContentPackCount = 0;
  knownContentPackData[0].contentPack = 2;
  knownContentPackData[0].available = 1;
  Core_strcpy(knownContentPackData[0].contentName, 0x80ui64, "MP/ORIGINAL_MAPS");
  ++knownContentPackCount;
  v2 = &s_dlcHashTable;
  v3 = 256i64;
  s_hashBufferIndex = 0;
  do
  {
    *(_QWORD *)&v2->buckets[0].headNodeIndex = -1i64;
    *(_QWORD *)&v2->buckets[2].headNodeIndex = -1i64;
    *(_QWORD *)&v2->buckets[4].headNodeIndex = -1i64;
    v2 = (IWHashTableN<4096,IWHashTable_Node32,IWHashTable_Node32::Hasher> *)((char *)v2 + 64);
    *(_QWORD *)&v2[-1].buckets[4086].headNodeIndex = -1i64;
    *(_QWORD *)&v2[-1].buckets[4088].headNodeIndex = -1i64;
    *(_QWORD *)&v2[-1].buckets[4090].headNodeIndex = -1i64;
    *(_QWORD *)&v2[-1].buckets[4092].headNodeIndex = -1i64;
    *(_QWORD *)&v2[-1].buckets[4094].headNodeIndex = -1i64;
    --v3;
  }
  while ( v3 );
  memset_0(s_hashBufferContentPack, 0, sizeof(s_hashBufferContentPack));
}

/*
==============
Content_InitDownloadableContentPackageManager
==============
*/
void Content_InitDownloadableContentPackageManager(void)
{
  Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *v0; 
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v1; 
  Windows::Xbox::Management::Deployment::DownloadableContentPackageManager *v2; 
  Windows::Xbox::Management::Deployment::DownloadableContentPackageManager *v3; 
  Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler *v4; 
  Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler *v5; 
  int v6; 
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v7; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs _> *v8; 
  Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs _> *v9; 
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v10; 
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v11; 
  Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *v12; 
  Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *v13; 
  Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler *v14; 

  v0 = NULL;
  if ( !sDLCPM )
  {
    v13 = NULL;
    Windows::Xbox::Management::Deployment::DownloadableContentPackageManager::DownloadableContentPackageManager(NULL);
    v2 = (Windows::Xbox::Management::Deployment::DownloadableContentPackageManager *)v1;
    v13 = v1;
    v3 = sDLCPM;
    if ( v1 != (Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *)sDLCPM )
    {
      if ( v1 )
      {
        v1->__abi_AddRef(v1);
        v3 = sDLCPM;
      }
      if ( v3 )
        v3->__abi_Release(v3);
      sDLCPM = v2;
    }
    if ( v2 )
      v2->__abi_Release(v2);
    v14 = (Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler::DownloadableContentPackageInstallCompletedEventHandler__lambda_a7b512f9dc5897689313a4187a6077a2___((Content_InitDownloadableContentPackageManager::__l6::<lambda_a7b512f9dc5897689313a4187a6077a2>)v14, NonConst, 2);
    v5 = v4;
    v14 = v4;
    v13 = NULL;
    v6 = sDLCPM->__abi_add_DownloadableContentPackageInstallCompleted(sDLCPM, v4, (Windows::Foundation::EventRegistrationToken *)&v13);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( v5 )
      v5->__abi_Release(v5);
    v13 = (Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    Windows::Foundation::TypedEventHandler_Windows::Xbox::Management::Deployment::IDownloadableContentPackage___Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs___::TypedEventHandler_Windows::Xbox::Management::Deployment::IDownloadableContentPackage___Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs_____lambda_c7bd41fa649a370d8216e86f9c7012a9___((Content_InitDownloadableContentPackageManager::__l8::<lambda_c7bd41fa649a370d8216e86f9c7012a9>)v13, NonConst, 2);
    v8 = (Windows::Foundation::TypedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,Windows::Xbox::Management::Deployment::ILicenseTerminatedEventArgs _> *)v7;
    v13 = v7;
    v9 = s_licenseTerminatedEventHandler;
    if ( v7 != (Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *)s_licenseTerminatedEventHandler )
    {
      if ( v7 )
      {
        v7->__abi_AddRef(v7);
        v9 = s_licenseTerminatedEventHandler;
      }
      if ( v9 )
        v9->__abi_Release(v9);
      s_licenseTerminatedEventHandler = v8;
    }
    if ( v8 )
      v8->__abi_Release(v8);
  }
  if ( !s_localDlcPackageList )
  {
    v13 = (Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
    Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>,1>::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>,1>(v13);
    v11 = v10;
    v13 = v10;
    if ( v10 )
      v0 = &v10->Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>;
    v12 = s_localDlcPackageList;
    if ( v0 != s_localDlcPackageList )
    {
      if ( v0 )
      {
        v0->__abi_AddRef(v0);
        v12 = s_localDlcPackageList;
      }
      if ( v12 )
        v12->__abi_Release(v12);
      s_localDlcPackageList = v0;
    }
    if ( v11 )
      v11->__abi_Release(v11);
  }
}

/*
==============
Content_IsBRAvailable
==============
*/
bool Content_IsBRAvailable()
{
  ContentPackList *v1; 
  int v2; 
  __int64 v3; 
  int contentPack; 
  const int *v5; 

  if ( !checkReleaseDLC->current.enabled )
    return 1;
  v1 = contentPacks;
  v2 = 0;
  v3 = 64i64;
  do
  {
    contentPack = v1->contentPack;
    v5 = s_contentBrDLCPacks;
    while ( *v5 != contentPack || contentPack == 1 )
    {
      if ( (__int64)++v5 >= (__int64)s_contentMpDLCPacks )
        goto LABEL_11;
    }
    if ( Content_DoWeHaveContentPack(contentPack) )
      ++v2;
LABEL_11:
    ++v1;
    --v3;
  }
  while ( v3 );
  return v2 == 1;
}

/*
==============
Content_IsBypassDLCCheck
==============
*/
bool Content_IsBypassDLCCheck()
{
  return bypassDLCCheck && bypassDLCCheck->current.enabled;
}

/*
==============
Content_IsCPAvailable
==============
*/
bool Content_IsCPAvailable()
{
  ContentPackList *v1; 
  int v2; 
  __int64 v3; 
  int contentPack; 
  const int *v5; 

  if ( !checkReleaseDLC->current.enabled )
    return 1;
  v1 = contentPacks;
  v2 = 0;
  v3 = 64i64;
  do
  {
    contentPack = v1->contentPack;
    v5 = s_contentCpDLCPacks;
    while ( *v5 != contentPack || contentPack == 1 )
    {
      if ( (__int64)++v5 >= (__int64)&unk_14416E354 )
        goto LABEL_11;
    }
    if ( Content_DoWeHaveContentPack(contentPack) )
      ++v2;
LABEL_11:
    ++v1;
    --v3;
  }
  while ( v3 );
  return v2 == 3;
}

/*
==============
Content_IsEnumerateXB3Ready
==============
*/
bool Content_IsEnumerateXB3Ready(void *userData)
{
  if ( Sys_IsMainThread() )
    Sys_LoadingProcessEvents();
  return !Sys_HasPendingWorkerCmdsRange(WRKCMD_ENUMERATE_CONTENT, WRKCMD_ENUMERATE_CONTENT);
}

/*
==============
Content_IsEnumerationDone
==============
*/
__int64 Content_IsEnumerationDone()
{
  __int64 result; 

  result = s_isContentEnumerationFinished;
  if ( disableDLC->current.enabled )
    return 1i64;
  return result;
}

/*
==============
Content_IsMPAvailable
==============
*/
bool Content_IsMPAvailable()
{
  ContentPackList *v1; 
  int v2; 
  __int64 v3; 
  int contentPack; 
  const int *v5; 

  if ( !checkReleaseDLC->current.enabled )
    return 1;
  v1 = contentPacks;
  v2 = 0;
  v3 = 64i64;
  do
  {
    contentPack = v1->contentPack;
    v5 = s_contentMpDLCPacks;
    while ( *v5 != contentPack || contentPack == 1 )
    {
      if ( (__int64)++v5 >= (__int64)s_contentCpDLCPacks )
        goto LABEL_11;
    }
    if ( Content_DoWeHaveContentPack(contentPack) )
      ++v2;
LABEL_11:
    ++v1;
    --v3;
  }
  while ( v3 );
  return v2 == 4;
}

/*
==============
Content_IsSPAvailable
==============
*/
bool Content_IsSPAvailable()
{
  ContentPackList *v1; 
  int v2; 
  __int64 v3; 
  int contentPack; 
  const int *v5; 

  if ( !checkReleaseDLC->current.enabled )
    return 1;
  v1 = contentPacks;
  v2 = 0;
  v3 = 64i64;
  do
  {
    contentPack = v1->contentPack;
    v5 = s_contentSpDLCPacks;
    while ( *v5 != contentPack || contentPack == 1 )
    {
      if ( (__int64)++v5 >= (__int64)s_contentBrDLCPacks )
        goto LABEL_11;
    }
    if ( Content_DoWeHaveContentPack(contentPack) )
      ++v2;
LABEL_11:
    ++v1;
    --v3;
  }
  while ( v3 );
  return v2 == 3;
}

/*
==============
Content_MountContent
==============
*/
__int64 Content_MountContent(ContentPackList *contentPack, void *unused)
{
  HSTRING v3; 
  unsigned int v4; 
  char v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  HSTRING v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  HSTRING v18; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package; 
  int v20; 
  HSTRING v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v30; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v31; 
  HSTRING v32; 
  const wchar_t *StringRawBuffer_0; 
  int v35; 
  int v36; 
  HSTRING v37; 
  const wchar_t *v38; 
  INT32 result[2]; 
  __int64 v40; 
  __int64 v41; 
  HSTRING string; 
  HSTRING v43; 
  HSTRING v44; 
  __int64 v45; 
  HSTRING newString[9]; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v47; 
  __int64 v48; 

  newString[1] = (HSTRING)-2i64;
  v3 = NULL;
  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  v47 = NULL;
  if ( s_localDlcPackageList )
  {
    v7 = s_localDlcPackageList->__abi_QueryInterface(s_localDlcPackageList, (Platform::Guid *)&_uuidof__AU__IIterable_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows__, (void **)&v47);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v6 = (__int64)v47;
  }
  v48 = v6;
  v40 = 0i64;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48i64))(v6, &v40);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  v9 = v40;
  v10 = (HSTRING)v40;
  if ( v40 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8i64))(v40);
    v9 = v40;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  v44 = v10;
  if ( v10 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8i64))(v10);
  newString[2] = v10;
  if ( v10 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(HSTRING, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **))(*(_QWORD *)v10 + 56i64))(v10, &v47);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( !(_BYTE)v47 )
      goto LABEL_56;
    v41 = 0i64;
    v12 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v10 + 48i64))(v10, &v41);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v41;
    v14 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
      v13 = v41;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    *(_QWORD *)result = v14;
    string = NULL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 56i64))(v14, &string);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    v16 = string;
    if ( string )
    {
      v17 = WindowsDuplicateString_0(string, newString);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = newString[0];
      v16 = string;
    }
    else
    {
      v18 = NULL;
    }
    WindowsDeleteString_0(v16);
    v45 = (__int64)v18;
    package = contentPack->package;
    v43 = NULL;
    v20 = package->__abi_get_ContentId(package, (Platform::String **)&v43);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = v43;
    if ( v43 )
    {
      v22 = WindowsDuplicateString_0(v43, &v44);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v3 = v44;
      v21 = v43;
    }
    WindowsDeleteString_0(v21);
    result[0] = 0;
    WindowsCompareStringOrdinal_0(v18, v3, result);
    WindowsDeleteString_0(v3);
    WindowsDeleteString_0(v18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
    if ( !result[0] )
      break;
    ++v4;
    v23 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v10 + 64i64))(v10, &v48);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v3 = NULL;
  }
  v48 = 0i64;
  v24 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v10 + 48i64))(v10, &v48);
  if ( v24 < 0 )
    __abi_WinRTraiseException(v24);
  v25 = v48;
  v26 = v48;
  if ( v48 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8i64))(v48);
    v25 = v48;
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
  v45 = v26;
  v27 = (*(__int64 (__fastcall **)(__int64, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **))(*(_QWORD *)v26 + 88i64))(v26, &v47);
  if ( v27 < 0 )
    __abi_WinRTraiseException(v27);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
  if ( (_BYTE)v47 )
  {
    v47 = NULL;
    v28 = (*(__int64 (__fastcall **)(HSTRING, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **))(*(_QWORD *)v10 + 48i64))(v10, &v47);
    if ( v28 < 0 )
      __abi_WinRTraiseException(v28);
    v29 = (__int64)v47;
    v30 = v47;
    if ( v47 )
    {
      v47->__abi_AddRef(v47);
      v29 = (__int64)v47;
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
    v48 = (__int64)v30;
    v31 = contentPack->package;
    if ( v30 != v31 )
    {
      if ( v30 )
      {
        v30->__abi_AddRef(v30);
        v31 = contentPack->package;
      }
      if ( v31 )
        v31->__abi_Release(v31);
      contentPack->package = v30;
      v31 = v30;
    }
    if ( v30 )
    {
      v30->__abi_Release(v30);
      v31 = contentPack->package;
    }
    v32 = (HSTRING)Windows::Xbox::Management::Deployment::IDownloadableContentPackage::MountPath::get(v31);
    v47 = (Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v32;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v32, NULL);
    WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, contentPack->mountPoint, 64, NULL, NULL);
    WindowsDeleteString_0(v32);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
    return 0i64;
  }
  v5 = 1;
LABEL_56:
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
  if ( v5 )
  {
    v35 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, _QWORD))s_localDlcPackageList->Platform::Object::__vftable[2].__abi_QueryInterface)(s_localDlcPackageList, v4);
    if ( v35 < 0 )
      __abi_WinRTraiseException(v35);
  }
  if ( Content_MountPackage(contentPack->package) )
  {
    v36 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *, Windows::Xbox::Management::Deployment::IDownloadableContentPackage *))s_localDlcPackageList->Platform::Object::__vftable[2].__abi_AddRef)(s_localDlcPackageList, contentPack->package);
    if ( v36 < 0 )
      __abi_WinRTraiseException(v36);
    v37 = (HSTRING)Windows::Xbox::Management::Deployment::IDownloadableContentPackage::MountPath::get(contentPack->package);
    v47 = (Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v37;
    v38 = WindowsGetStringRawBuffer_0(v37, NULL);
    WideCharToMultiByte(0xFDE9u, 0, v38, -1, contentPack->mountPoint, 64, NULL, NULL);
    WindowsDeleteString_0(v37);
    return 0i64;
  }
  return 1i64;
}

/*
==============
Content_MountPackage
==============
*/
bool Content_MountPackage(Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package)
{
  int v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  int v6; 
  int v7; 
  int v8; 
  HSTRING v10; 
  const wchar_t *StringRawBuffer_0; 
  Windows::Xbox::Management::Deployment::IDownloadableContentPackage *v12; 
  HSTRING string; 
  HSTRING newString; 

  v12 = package;
  v2 = package->__abi_get_IsMounted(package, (bool *)&string);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  if ( (_BYTE)string )
  {
    v10 = (HSTRING)Windows::Xbox::Management::Deployment::IDownloadableContentPackage::DisplayName::get(package);
    v12 = (Windows::Xbox::Management::Deployment::IDownloadableContentPackage *)v10;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v10, NULL);
    Com_Printf(16, "Content_MountPackage: package %S already mounted\n", StringRawBuffer_0);
    WindowsDeleteString_0(v10);
    return 0;
  }
  else
  {
    v3 = NULL;
    string = NULL;
    v4 = package->__abi_Mount(package, (Platform::String **)&string);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = string;
    if ( string )
    {
      v6 = WindowsDuplicateString_0(string, &newString);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v3 = newString;
      v5 = string;
    }
    WindowsDeleteString_0(v5);
    WindowsDeleteString_0(v3);
    v7 = package->__abi_get_IsMounted(package, (bool *)&string);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    if ( !(_BYTE)string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 2414, ASSERT_TYPE_ASSERT, "(package->IsMounted)", (const char *)&queryFormat, "package->IsMounted") )
      __debugbreak();
    v8 = package->__abi_get_IsMounted(package, (bool *)&v12);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    return (char)v12;
  }
}

/*
==============
Content_MountingContentPacksInProgress
==============
*/
bool Content_MountingContentPacksInProgress()
{
  return 0;
}

/*
==============
Content_PackageInstallCompleted
==============
*/
void Content_PackageInstallCompleted(void)
{
  AcquireSRWLockExclusive(&s_packageInstallationLock.SRWLock_);
  Com_Printf(16, "Installation completed \n ");
  s_packageInstallationCompleted = 1;
  ReleaseSRWLockExclusive(&s_packageInstallationLock.SRWLock_);
}

/*
==============
Content_RegisterDLCDvars
==============
*/
void Content_RegisterDLCDvars(void)
{
  const char *v0; 
  const char *CompassBuildName; 
  __int64 v2; 
  int v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  unsigned int v7; 
  bool v8; 
  bool v9; 

  v0 = "autobuild";
  CompassBuildName = DS_GetCompassBuildName();
  v2 = 0x7FFFFFFFi64;
  v3 = 1;
  if ( !CompassBuildName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v4 = v0[CompassBuildName - "autobuild"];
    v5 = v2;
    v6 = *v0++;
    --v2;
    v7 = 0;
    if ( !v5 )
    {
LABEL_7:
      v3 = 0;
      goto LABEL_8;
    }
    if ( v4 != v6 )
      break;
    if ( !v4 )
      goto LABEL_7;
  }
  if ( v4 < v6 )
    v3 = -1;
LABEL_8:
  Dvar_BeginPermanentRegistration();
  LOBYTE(v7) = v3 == 0;
  Com_Printf(10, "Content_RegisterDLCDvars: isPackageTypeAutobuild = %d (%s)\n", v7, CompassBuildName);
  v8 = Sys_GetUsingPCHostHDDFolders() || v3;
  bypassDLCCheck = Dvar_RegisterBool("MTQLNMTRLS", v8, 0, "If true, game will behave as if every DLC was owned");
  bypassFileLimit = Dvar_RegisterBool("MNMOOPLMMS", 0, 0, "If true, game will continue to run even if we run into the file limit");
  Com_Printf(10, "Content_RegisterDLCDvars: bypassDLCCheck = %d\n", bypassDLCCheck->current.color[0]);
  Com_Printf(10, "Content_RegisterDLCDvars: bypassFileLimit = %d\n", bypassFileLimit->current.color[0]);
  v9 = !Sys_GetUsingPCHostHDDFolders() && !v3;
  checkReleaseDLC = Dvar_RegisterBool("LKSTRMKTML", v9, 0, "If true, the game will check for SP, MP and CP DLC Packs on the main menu.");
  Com_Printf(10, "Content_RegisterDLCDvars: checkReleaseDLC = %d\n", checkReleaseDLC->current.color[0]);
  Dvar_EndPermanentRegistration();
}

/*
==============
Content_SanitizeHashFilePath
==============
*/
void Content_SanitizeHashFilePath(char *path, const unsigned int pathSize)
{
  __int64 v2; 
  unsigned int v4; 
  int v5; 
  char v6; 
  char v7; 

  v2 = 0i64;
  if ( *path )
  {
    v4 = pathSize - 1;
    do
    {
      if ( (unsigned int)v2 >= v4 )
        break;
      v5 = tolower(path[v2]);
      v6 = v5;
      if ( (unsigned int)(v5 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v5, "signed", v5) )
        __debugbreak();
      v7 = v6;
      if ( v6 == 92 )
        v7 = 47;
      path[v2] = v7;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( path[v2] );
    path[v2] = 0;
  }
  else
  {
    *path = 0;
  }
}

/*
==============
Content_SetContentEnumerationCompletion
==============
*/
void Content_SetContentEnumerationCompletion(bool finished)
{
  s_isContentEnumerationFinished = finished;
}

/*
==============
Content_SkipFastFilePrefixes
==============
*/
void Content_SkipFastFilePrefixes(const char **name)
{
  const char *v2; 
  const char *v3; 
  __int64 v4; 
  __int64 v5; 
  signed __int64 v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  signed __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  const char *v24; 
  const char *v25; 
  signed __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  const char *v32; 
  __int64 v33; 
  signed __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int v39; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 566, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v2 = *name;
  v3 = "dev_";
  v4 = 4i64;
  v5 = 4i64;
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v6 = v2 - "dev_";
  while ( 1 )
  {
    v7 = (unsigned __int8)v3[v6];
    v8 = 0;
    v9 = *(unsigned __int8 *)v3++;
    if ( !v5-- )
    {
LABEL_16:
      v13 = 0;
      goto LABEL_17;
    }
    if ( v7 != v9 )
    {
      v11 = v7 + 32;
      if ( v7 - 65 > 0x19 )
        v11 = v7;
      v7 = v11;
      v12 = v9 + 32;
      if ( v9 - 65 > 0x19 )
        v12 = v9;
      if ( v7 != v12 )
        break;
    }
    if ( !v7 )
      goto LABEL_16;
  }
  v13 = 1;
  if ( v7 < v12 )
    v13 = -1;
LABEL_17:
  v14 = *name;
  if ( !v13 )
    goto LABEL_55;
  v15 = "techsets_";
  v16 = 9i64;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v17 = v14 - "techsets_";
  while ( 1 )
  {
    v18 = (unsigned __int8)v15[v17];
    v19 = v16;
    v20 = *(unsigned __int8 *)v15++;
    --v16;
    if ( !v19 )
    {
LABEL_30:
      v23 = 0;
      goto LABEL_31;
    }
    if ( v18 != v20 )
    {
      v21 = v18 + 32;
      if ( v18 - 65 > 0x19 )
        v21 = v18;
      v18 = v21;
      v22 = v20 + 32;
      if ( v20 - 65 > 0x19 )
        v22 = v20;
      if ( v18 != v22 )
        break;
    }
    if ( !v18 )
      goto LABEL_30;
  }
  v23 = 1;
  if ( v18 < v22 )
    v23 = -1;
LABEL_31:
  v24 = *name;
  if ( !v23 )
  {
    *name = v24 + 9;
    return;
  }
  v25 = "srv_";
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v26 = v24 - "srv_";
  do
  {
    v27 = (unsigned __int8)v25[v26];
    v28 = v4;
    v29 = *(unsigned __int8 *)v25++;
    --v4;
    if ( !v28 )
      break;
    if ( v27 != v29 )
    {
      v30 = v27 + 32;
      if ( v27 - 65 > 0x19 )
        v30 = v27;
      v27 = v30;
      v31 = v29 + 32;
      if ( v29 - 65 > 0x19 )
        v31 = v29;
      if ( v27 != v31 )
      {
        v8 = 1;
        if ( v27 < v31 )
          v8 = -1;
        break;
      }
    }
  }
  while ( v27 );
  v14 = *name;
  if ( v8 )
  {
    v32 = "dbgshd_";
    v33 = 7i64;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v34 = v14 - "dbgshd_";
    do
    {
      v35 = (unsigned __int8)v32[v34];
      v36 = v33;
      v37 = *(unsigned __int8 *)v32++;
      --v33;
      if ( !v36 )
        break;
      if ( v35 != v37 )
      {
        v38 = v35 + 32;
        if ( (unsigned int)(v35 - 65) > 0x19 )
          v38 = v35;
        v35 = v38;
        v39 = v37 + 32;
        if ( (unsigned int)(v37 - 65) > 0x19 )
          v39 = v37;
        if ( v35 != v39 )
          return;
      }
    }
    while ( v35 );
    *name += 7;
  }
  else
  {
LABEL_55:
    *name = v14 + 4;
  }
}

/*
==============
Content_StripWorldTransientFastfile
==============
*/
void Content_StripWorldTransientFastfile(const char *nameStart, const char **nameEnd)
{
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  bool v23; 
  __int64 v24; 
  __int64 v25; 
  char v26; 

  if ( !nameStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 593, ASSERT_TYPE_ASSERT, "(nameStart)", (const char *)&queryFormat, "nameStart") )
    __debugbreak();
  if ( !nameEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 594, ASSERT_TYPE_ASSERT, "(nameEnd)", (const char *)&queryFormat, "nameEnd") )
    __debugbreak();
  if ( !*nameEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 595, ASSERT_TYPE_ASSERT, "(*nameEnd)", (const char *)&queryFormat, "*nameEnd") )
    __debugbreak();
  if ( !**nameEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 596, ASSERT_TYPE_ASSERT, "(**nameEnd)", (const char *)&queryFormat, "**nameEnd") )
    __debugbreak();
  v4 = *nameEnd;
  if ( (unsigned __int64)(*nameEnd - nameStart) < 0xA )
    return;
  v5 = v4 - 9;
  if ( v4 - 9 <= nameStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 615, ASSERT_TYPE_ASSERT, "( transientUnderscoreBeforeDigits ) > ( nameStart )", "%s > %s\n\t%p, %p", "transientUnderscoreBeforeDigits", "nameStart", v4 - 9, nameStart) )
    __debugbreak();
  if ( *v5 != 95 )
    return;
  v6 = 3i64;
  v7 = "_tr";
  v8 = *nameEnd - 3;
  if ( *nameEnd == (const char *)3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v9 = (unsigned __int8)v7[v8 - "_tr"];
    v10 = v6;
    v11 = *(unsigned __int8 *)v7++;
    --v6;
    if ( !v10 )
      break;
    if ( v9 != v11 )
    {
      v12 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v12 = v9;
      v9 = v12;
      v13 = v11 + 32;
      if ( (unsigned int)(v11 - 65) > 0x19 )
        v13 = v11;
      if ( v9 != v13 )
        return;
    }
  }
  while ( v9 );
  v14 = v4 - 8;
  if ( v4 - 8 >= v8 )
  {
LABEL_32:
    v15 = v4 - 12;
    if ( v4 - 12 <= nameStart )
    {
LABEL_46:
      *nameEnd = v5;
      if ( j_sscanf(v4 - 8, "%05u_tr%*s", &v26) == 1 )
        return;
      LODWORD(v25) = 1;
      LODWORD(v24) = j_sscanf(v4 - 8, "%05u_tr%*s", &v26);
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 653, ASSERT_TYPE_ASSERT, "( sscanf( transientDigitsStart, \"%05u_tr\" \"%*s\", &scanAssertNumber ) ) == ( 1 )", "%s == %s\n\t%i, %i", "sscanf( transientDigitsStart, TRANSIENT_COLLISION_GRID_FILE_FORMAT_NOPREFIX \"%*s\", &scanAssertNumber )", "1", v24, v25);
    }
    else
    {
      v16 = "_cg_";
      v17 = 4i64;
      if ( v4 == (const char *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v18 = (unsigned __int8)v16[v15 - "_cg_"];
        v19 = v17;
        v20 = *(unsigned __int8 *)v16++;
        --v17;
        if ( !v19 )
          break;
        if ( v18 != v20 )
        {
          v21 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v21 = v18;
          v18 = v21;
          v22 = v20 + 32;
          if ( (unsigned int)(v20 - 65) > 0x19 )
            v22 = v20;
          if ( v18 != v22 )
            goto LABEL_46;
        }
      }
      while ( v18 );
      *nameEnd = v15;
      if ( j_sscanf(v4 - 12, "_cg_%05u_tr%*s", &v26) == 1 )
        return;
      LODWORD(v25) = 1;
      LODWORD(v24) = j_sscanf(v4 - 12, "_cg_%05u_tr%*s", &v26);
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 647, ASSERT_TYPE_ASSERT, "( sscanf( cgSuffixStart, \"_cg_\" \"%05u_tr\" \"%*s\", &scanAssertNumber ) ) == ( 1 )", "%s == %s\n\t%i, %i", "sscanf( cgSuffixStart, TRANSIENT_COLLISION_GRID_INFIX TRANSIENT_COLLISION_GRID_FILE_FORMAT_NOPREFIX \"%*s\", &scanAssertNumber )", "1", v24, v25);
    }
    if ( v23 )
      __debugbreak();
    return;
  }
  while ( (unsigned __int8)(*v14 - 48) <= 9u )
  {
    if ( ++v14 >= v8 )
      goto LABEL_32;
  }
}

/*
==============
Content_TrimFileNameForHash
==============
*/
void Content_TrimFileNameForHash(const char *const originalName, char *sanitizedBuffer, const unsigned int sanitizedBufferLen)
{
  unsigned __int64 v3; 
  unsigned __int64 v6; 
  char v7; 
  char *v8; 
  const char *v9; 
  char v10; 
  const char *i; 
  char *v12; 
  char *nameEnd; 
  char *name; 

  v3 = sanitizedBufferLen;
  if ( !originalName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 699, ASSERT_TYPE_ASSERT, "(originalName)", (const char *)&queryFormat, "originalName") )
    __debugbreak();
  if ( !sanitizedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 700, ASSERT_TYPE_ASSERT, "(sanitizedBuffer)", (const char *)&queryFormat, "sanitizedBuffer") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 701, ASSERT_TYPE_ASSERT, "(sanitizedBufferLen)", (const char *)&queryFormat, "sanitizedBufferLen") )
    __debugbreak();
  name = (char *)originalName;
  v6 = __rdtsc();
  if ( !originalName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 660, ASSERT_TYPE_ASSERT, "(nameStart)", (const char *)&queryFormat, "nameStart") )
    __debugbreak();
  v7 = *originalName;
  v8 = (char *)originalName;
  nameEnd = (char *)originalName;
  v9 = originalName;
  if ( v7 )
  {
    while ( v7 != 46 )
    {
      v7 = *++v8;
      nameEnd = v8;
      v9 = v8;
      if ( !v7 )
        goto LABEL_25;
    }
  }
  if ( *v8 )
  {
    v10 = v9[1];
    for ( i = v9 + 1; v10; ++i )
    {
      if ( v10 == 92 || (unsigned __int8)(v10 - 46) <= 1u )
      {
        if ( content_assert_hash_truncate->current.enabled )
          Sys_Error((const ObfuscateErrorText)&stru_14416FF00, originalName);
        else
          Com_PrintError(10, "Content_FindNameEndStripExt: '%s' has multiple extension characters '.' or an extension character in the folder name, which is not supported\n", originalName);
      }
      v10 = i[1];
    }
  }
LABEL_25:
  Content_SkipFastFilePrefixes((const char **)&name);
  v12 = name;
  Content_StripWorldTransientFastfile(name, (const char **)&nameEnd);
  Core_strncpy(sanitizedBuffer, v3, v12, nameEnd - v12);
  if ( content_debug_hashtable->current.enabled )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(__rdtsc() - v6) < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    Com_Printf(16, "Content_TrimFileNameForHash %.2f usec ( '%s' -> '%s' )\n", (double)(*(double *)&_XMM0 * usecPerRawTimerTick), originalName, sanitizedBuffer);
  }
}

/*
==============
Content_Unmount
==============
*/
void Content_Unmount(ContentPackList *contentPack)
{
  if ( !contentPack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3130, ASSERT_TYPE_ASSERT, "(contentPack)", (const char *)&queryFormat, "contentPack") )
    __debugbreak();
  Com_Printf(16, "Closing content pack %s (%d)\n", contentPack->mountPoint, (unsigned int)contentPack->contentPack);
  if ( !contentPack->package && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3132, ASSERT_TYPE_ASSERT, "(contentPack->package)", (const char *)&queryFormat, "contentPack->package") )
    __debugbreak();
  Content_UnmountPackage(contentPack->package);
  contentPack->mountPoint[0] = 0;
}

/*
==============
Content_UnmountAllContent
==============
*/
void Content_UnmountAllContent(void)
{
  char *mountPoint; 
  int i; 
  __int64 v2; 

  mountPoint = contentPacks[0].mountPoint;
  do
  {
    if ( *(mountPoint - 212) )
    {
      for ( i = 0; i < *((_DWORD *)mountPoint - 50); ++i )
        Sys_CloseFile(*(sysFileHandle_t *)&mountPoint[8 * i - 192]);
      v2 = *((unsigned int *)mountPoint - 54);
      *((_DWORD *)mountPoint - 50) = 0;
      *(mountPoint - 212) = 0;
      Com_Printf(16, "Closing content pack %s (%d)\n", mountPoint, v2);
      if ( !*((_QWORD *)mountPoint + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dlc.cpp", 3132, ASSERT_TYPE_ASSERT, "(contentPack->package)", (const char *)&queryFormat, "contentPack->package") )
        __debugbreak();
      Content_UnmountPackage(*((Windows::Xbox::Management::Deployment::IDownloadableContentPackage **)mountPoint + 8));
      *mountPoint = 0;
    }
    mountPoint += 288;
  }
  while ( (__int64)mountPoint < (__int64)&knownContentPackData[1].contentName[72] );
}

/*
==============
Content_UnmountPackage
==============
*/
void Content_UnmountPackage(Windows::Xbox::Management::Deployment::IDownloadableContentPackage *package)
{
  int v2; 
  HSTRING v3; 
  const wchar_t *StringRawBuffer_0; 
  int v5; 
  HSTRING v6; 
  const wchar_t *v7; 
  HSTRING v8; 

  v2 = package->__abi_get_IsMounted(package, (bool *)&v8);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  if ( (_BYTE)v8 )
  {
    v3 = (HSTRING)Windows::Xbox::Management::Deployment::IDownloadableContentPackage::DisplayName::get(package);
    v8 = v3;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v3, NULL);
    Com_Printf(16, "Content_UnmountPackage: Unmounting package %S\n", StringRawBuffer_0);
    WindowsDeleteString_0(v3);
    v5 = package->__abi_Unmount(package);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
  }
  else
  {
    v6 = (HSTRING)Windows::Xbox::Management::Deployment::IDownloadableContentPackage::DisplayName::get(package);
    v7 = WindowsGetStringRawBuffer_0(v6, NULL);
    Com_Printf(16, "Content_UnmountPackage: package %S was already unmounted\n", v7);
    WindowsDeleteString_0(v6);
  }
}

/*
==============
Content_UpdateEnumerateIfNeeded
==============
*/
void Content_UpdateEnumerateIfNeeded(int controllerIndex)
{
  AcquireSRWLockExclusive(&s_packageInstallationLock.SRWLock_);
  if ( s_packageInstallationCompleted && Com_FrontEnd_IsInFrontEnd() )
  {
    Content_EnumerateXB3(controllerIndex);
    s_packageInstallationCompleted = 0;
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "dlc_install_state_change", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
  }
  ReleaseSRWLockExclusive(&s_packageInstallationLock.SRWLock_);
}

/*
==============
Content_UpdateTrialFind
==============
*/
void Content_UpdateTrialFind(int controllerIndex)
{
  unsigned __int64 v1; 
  int v2; 
  bool v3; 
  __int64 v4; 

  v1 = controllerIndex;
  if ( s_trialFindContent[controllerIndex] && (disableDLC->current.enabled || s_isContentEnumerationFinished) )
  {
    v2 = R_IsInRemoteScreenUpdate();
    v3 = v2 != 0;
    if ( !v2 )
      R_BeginRemoteScreenUpdateWithAnimatedTexture();
    Content_EnumerateXB3(v1);
    if ( !v3 )
      R_EndRemoteScreenUpdateWithAnimatedTexture();
    if ( v1 >= 8 )
    {
      j___report_rangecheckfailure(v4);
      JUMPOUT(0x14185F2E3i64);
    }
    s_trialFindContent[v1] = 0;
  }
}

/*
==============
KnownContent_Clear
==============
*/
void KnownContent_Clear()
{
  knownContentPackCount = 0;
  knownContentPackData[0].contentPack = 2;
  knownContentPackData[0].available = 1;
  Core_strcpy(knownContentPackData[0].contentName, 0x80ui64, "MP/ORIGINAL_MAPS");
  ++knownContentPackCount;
}

