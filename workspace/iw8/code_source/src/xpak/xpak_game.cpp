/*
==============
XPak_RemovePackFilesForZone
==============
*/

void __fastcall XPak_RemovePackFilesForZone(const char *zoneName)
{
  ?XPak_RemovePackFilesForZone@@YAXPEBD@Z(zoneName);
}

/*
==============
XPak_AddPackFilesForZone
==============
*/

bool __fastcall XPak_AddPackFilesForZone(const char *zoneName)
{
  return ?XPak_AddPackFilesForZone@@YA_NPEBD@Z(zoneName);
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/

void __fastcall XPak_ClearAdjacencyInfo(StreamKey *key)
{
  ?XPak_ClearAdjacencyInfo@@YAXPEAUStreamKey@@@Z(key);
}

/*
==============
XPak_IndexReadCallback
==============
*/

void __fastcall XPak_IndexReadCallback(FileStreamRequestID id, FileStreamStatus result, __int64 numBytesRead, void *user)
{
  ?XPak_IndexReadCallback@@YAXW4FileStreamRequestID@@W4FileStreamStatus@@_JPEAX@Z(id, result, numBytesRead, user);
}

/*
==============
XPak_Init
==============
*/

void XPak_Init(void)
{
  ?XPak_Init@@YAXXZ();
}

/*
==============
XPak_InvalidateItems
==============
*/

void XPak_InvalidateItems(void)
{
  ?XPak_InvalidateItems@@YAXXZ();
}

/*
==============
XPak_BeginUsingWorkData
==============
*/

XPakWorkData *__fastcall XPak_BeginUsingWorkData()
{
  return ?XPak_BeginUsingWorkData@@YAPEAUXPakWorkData@@XZ();
}

/*
==============
XPak_GetZoneRootName<64>
==============
*/

void __fastcall XPak_GetZoneRootName<64>(char (*zoneNameRoot)[64], const char *zoneName)
{
  ??$XPak_GetZoneRootName@$0EA@@@YAXAEAY0EA@DPEBD@Z(zoneNameRoot, zoneName);
}

/*
==============
XPak_PrintLoadedPackFiles
==============
*/

void XPak_PrintLoadedPackFiles(void)
{
  ?XPak_PrintLoadedPackFiles@@YAXXZ();
}

/*
==============
XPak_ComputeFileBlockID
==============
*/

unsigned int __fastcall XPak_ComputeFileBlockID(unsigned int xpakIndex, unsigned __int64 xpakOffset)
{
  return ?XPak_ComputeFileBlockID@@YAII_K@Z(xpakIndex, xpakOffset);
}

/*
==============
XPak_GetCurrentWorkDataCommitSize
==============
*/

unsigned __int64 __fastcall XPak_GetCurrentWorkDataCommitSize()
{
  return ?XPak_GetCurrentWorkDataCommitSize@@YA_KXZ();
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/

void __fastcall XPak_PatchAdjacencyInfo(GfxImage *image, unsigned int imageIndex)
{
  ?XPak_PatchAdjacencyInfo@@YAXPEAUGfxImage@@I@Z(image, imageIndex);
}

/*
==============
XPak_IndexToFileID
==============
*/

FileStreamFileID __fastcall XPak_IndexToFileID(int index)
{
  return ?XPak_IndexToFileID@@YA?AW4FileStreamFileID@@H@Z(index);
}

/*
==============
XPak_IndexToFileSize
==============
*/

__int64 __fastcall XPak_IndexToFileSize(int index)
{
  return ?XPak_IndexToFileSize@@YA_JH@Z(index);
}

/*
==============
XPak_NextIndexEntry
==============
*/

bool __fastcall XPak_NextIndexEntry(XPakWorkContext *work, XPakIndexEntry *entry)
{
  return ?XPak_NextIndexEntry@@YA_NPEAUXPakWorkContext@@PEAUXPakIndexEntry@@@Z(work, entry);
}

/*
==============
XPak_FindPackIndexByName
==============
*/

int __fastcall XPak_FindPackIndexByName(const char *name)
{
  return ?XPak_FindPackIndexByName@@YAHPEBD@Z(name);
}

/*
==============
XPak_EndIndexRead
==============
*/

void __fastcall XPak_EndIndexRead(XPakWorkContext *work)
{
  ?XPak_EndIndexRead@@YAXPEAUXPakWorkContext@@@Z(work);
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/

void __fastcall XPak_ClearAdjacencyInfo(GfxImage *image)
{
  ?XPak_ClearAdjacencyInfo@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
XPak_EndUsingWorkData
==============
*/

void XPak_EndUsingWorkData(void)
{
  ?XPak_EndUsingWorkData@@YAXXZ();
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/

void __fastcall XPak_PatchAdjacencyInfo(StreamKey *key, unsigned int keyIndex)
{
  ?XPak_PatchAdjacencyInfo@@YAXPEAUStreamKey@@I@Z(key, keyIndex);
}

/*
==============
XPak_MarkEntryInfoAsStale
==============
*/

void XPak_MarkEntryInfoAsStale(void)
{
  ?XPak_MarkEntryInfoAsStale@@YAXXZ();
}

/*
==============
XPak_GetEntryInfo
==============
*/

XPakEntryInfo *__fastcall XPak_GetEntryInfo(StreamItemType type, unsigned int itemPartIndex)
{
  return ?XPak_GetEntryInfo@@YAPEAUXPakEntryInfo@@W4StreamItemType@@I@Z(type, itemPartIndex);
}

/*
==============
XPak_BuildEntryInfo
==============
*/

void XPak_BuildEntryInfo(void)
{
  ?XPak_BuildEntryInfo@@YAXXZ();
}

/*
==============
XPak_CurrentIndexEntry
==============
*/

bool __fastcall XPak_CurrentIndexEntry(XPakWorkContext *work, XPakIndexEntry *entry)
{
  return ?XPak_CurrentIndexEntry@@YA_NPEAUXPakWorkContext@@PEAUXPakIndexEntry@@@Z(work, entry);
}

/*
==============
XPak_IndexToName
==============
*/

const char *__fastcall XPak_IndexToName(int index)
{
  return ?XPak_IndexToName@@YAPEBDH@Z(index);
}

/*
==============
XPak_BeginIndexRead
==============
*/

void __fastcall XPak_BeginIndexRead(XPakWorkContext *work, const XPakLoadedPackFile *pak)
{
  ?XPak_BeginIndexRead@@YAXPEAUXPakWorkContext@@PEBUXPakLoadedPackFile@@@Z(work, pak);
}

/*
==============
XPak_ClearAdjacencyInfoForEntry
==============
*/

void __fastcall XPak_ClearAdjacencyInfoForEntry(XPakEntryInfo *part)
{
  ?XPak_ClearAdjacencyInfoForEntry@@YAXPEAUXPakEntryInfo@@@Z(part);
}

/*
==============
XPak_CheckAdjacencyInfo
==============
*/

void __fastcall XPak_CheckAdjacencyInfo(const GfxImage *image)
{
  ?XPak_CheckAdjacencyInfo@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/

void __fastcall XPak_ClearAdjacencyInfo(XModelSurfs *mesh)
{
  ?XPak_ClearAdjacencyInfo@@YAXPEAUXModelSurfs@@@Z(mesh);
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/

void __fastcall XPak_PatchAdjacencyInfo(XModelSurfs *mesh, unsigned int partIndex)
{
  ?XPak_PatchAdjacencyInfo@@YAXPEAUXModelSurfs@@I@Z(mesh, partIndex);
}

/*
==============
XPak_GetZoneRootName<64>
==============
*/
void XPak_GetZoneRootName<64>(char (*zoneNameRoot)[64], const char *zoneName)
{
  const char *v2; 
  char *v4; 
  char *v5; 

  v2 = zoneName;
  v4 = strchr_0(zoneName, 47);
  if ( v4 )
    v2 = v4 + 1;
  Core_strcpy((char *)zoneNameRoot, 0x40ui64, v2);
  v5 = strchr_0((const char *)zoneNameRoot, 33);
  if ( v5 )
    *v5 = 0;
}

/*
==============
XPak_AddPackFile
==============
*/
void XPak_AddPackFile(Sys_Folder folder, const char *name)
{
  const char *v2; 
  int PackIndexByName; 
  XPakLoadedPackFile *v5; 
  __m256i *v6; 
  int v7; 
  int MultiVolumePackIndexByName; 
  XPakLoadedMultiVolumePackFile *v9; 
  char *v10; 
  const char *v11; 
  char *v12; 
  int v13; 
  FileStreamFileID v14; 
  __int64 v15; 
  __int64 v16; 
  char *v17; 
  __int64 v18; 
  const char *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  int *p_refCount; 
  __m256i v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  char *data_p; 
  const char *v29; 
  char *v30; 
  __m256i v31; 
  char dest[64]; 
  char v33[260]; 

  v2 = name;
  v29 = name;
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 459, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  PackIndexByName = XPak_FindPackIndexByName(v2);
  if ( PackIndexByName == 256 || (v5 = &s_loadedPackFiles[PackIndexByName]) == NULL )
  {
    v6 = NULL;
    v7 = 0;
    if ( s_emptyPackFileCount <= 0 )
    {
LABEL_13:
      MultiVolumePackIndexByName = XPak_FindMultiVolumePackIndexByName(v2);
      if ( MultiVolumePackIndexByName == 32 || (v9 = &s_loadedMultiVolumePackFiles[MultiVolumePackIndexByName]) == NULL )
      {
        v10 = strchr_0(v2, 47);
        v11 = v10 + 1;
        if ( !v10 )
          v11 = v2;
        Core_strcpy(dest, 0x40ui64, v11);
        v12 = strchr_0(dest, 33);
        if ( v12 )
          *v12 = 0;
        Com_sprintf<260>((char (*)[260])v33, "%s.%s", dest, "xpaklist");
        LOBYTE(v13) = FileStream_OpenFile(folder, v33, 1);
        v14 = (char)v13;
        if ( v13 == -16777217 )
        {
          XPak_AddPackFileInternal(folder, v2);
        }
        else
        {
          memset(&v31, 0, sizeof(v31));
          v15 = FileStream_Easy_FileSize((FileStreamFileID)v13);
          v16 = v15;
          if ( v15 )
          {
            v30 = (char *)Mem_Virtual_Alloc(v15 + 1, "XPak_AllocMem", TRACK_DEBUG);
            v17 = v30;
            v18 = FileStream_Easy_Read(v14, v30, v16, NULL, FILE_STREAM_TRACK_XPAK);
            if ( v18 == v16 )
            {
              v30[v18] = 0;
              FileStream_CloseFile(v14);
              Com_BeginParseSession(v33);
              data_p = v17;
              v19 = Com_Parse((const char **)&data_p);
              if ( data_p )
              {
                do
                {
                  XPak_AddPackFileInternal(folder, v19);
                  v20 = XPak_FindPackIndexByName(v19);
                  v21 = v20;
                  if ( v20 != 256 )
                  {
                    if ( v20 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)v20, "signed", v20) )
                      __debugbreak();
                    if ( v21 >= 0x100 )
                    {
                      LODWORD(v27) = 256;
                      LODWORD(v26) = v21;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
                        __debugbreak();
                    }
                    v31.m256i_i32[(unsigned __int64)v21 >> 5] |= 0x80000000 >> (v21 & 0x1F);
                  }
                  v19 = Com_Parse((const char **)&data_p);
                }
                while ( data_p );
                v2 = v29;
                v17 = v30;
                v6 = NULL;
              }
              Com_EndParseSession();
              Mem_Virtual_Free(v17);
              v22 = 0i64;
              p_refCount = &s_loadedMultiVolumePackFiles[0].refCount;
              while ( *p_refCount )
              {
                v22 = (unsigned int)(v22 + 1);
                p_refCount += 25;
                if ( (unsigned int)v22 >= 0x20 )
                  goto LABEL_43;
              }
              v6 = (__m256i *)&s_loadedMultiVolumePackFiles[v22];
              if ( v6 )
                goto LABEL_44;
LABEL_43:
              XPak_PrintLoadedPackFiles();
              Sys_Error((const ObfuscateErrorText)&stru_1441E5D50, v33);
LABEL_44:
              Core_strcpy(v6->m256i_i8, 0x40ui64, v2);
              if ( v6[3].m256i_i32[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 557, ASSERT_TYPE_ASSERT, "(mvpak->refCount == 0)", (const char *)&queryFormat, "mvpak->refCount == 0") )
                __debugbreak();
              v24 = v31;
              v6[3].m256i_i32[0] = 1;
              v6[2] = v24;
              Com_Printf(36, "XPak_AddPackFile: Added multivolume xpak file: %s\n", v2);
            }
            else
            {
              LODWORD(fmt) = v16;
              Com_PrintError(36, "Error performing initial read from xpak multivolume list file: %s. Readbytes is %d but expected %d.\n", v33, (unsigned int)v18, fmt);
              FileStream_CloseFile(v14);
              Mem_Virtual_Free(v30);
            }
          }
          else
          {
            Com_Printf(36, "XPak_AddPackFile: multivolume xpak empty: %s\n", v2);
            FileStream_CloseFile(v14);
          }
        }
      }
      else
      {
        Com_Printf(36, "XPak_AddPackFile: already added multivolume: %s (ref: %d)\n", v2, (unsigned int)++v9->refCount);
      }
    }
    else
    {
      while ( I_stricmp(v2, s_emptyPackFiles[(__int64)v7]) )
      {
        if ( ++v7 >= s_emptyPackFileCount )
          goto LABEL_13;
      }
      Com_Printf(36, "XPak_AddPackFile: xpak is empty: %s\n", v2);
    }
  }
  else
  {
    if ( *(_DWORD *)v5->fh == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 464, ASSERT_TYPE_SANITY, "( pak->fh != FileStreamFileID::INVALID )", (const char *)&queryFormat, "pak->fh != FileStreamFileID::INVALID") )
      __debugbreak();
    Com_Printf(36, "XPak_AddPackFile: already added: %s (ref: %d)\n", v2, (unsigned int)++v5->refCount);
  }
}

/*
==============
XPak_AddPackFileInternal
==============
*/
void XPak_AddPackFileInternal(Sys_Folder folder, const char *name)
{
  unsigned int *v2; 
  int PackIndexByName; 
  char *v6; 
  const char *v7; 
  char *v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  int *p_refCount; 
  __int64 v14; 
  XPakLoadedPackFile *v15; 
  __int64 v16; 
  __int64 v17; 
  double v18; 
  __int128 v19; 
  double v20; 
  __int128 v21; 
  double v22; 
  __int64 *p_fileSize; 
  unsigned int i; 
  __int64 v25; 
  unsigned __int64 v26; 
  char *fmt; 
  __int64 v28; 
  __int64 bytesRead[2]; 

  v2 = (unsigned int *)((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64);
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 334, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  PackIndexByName = XPak_FindPackIndexByName(name);
  if ( PackIndexByName != 256 && &s_loadedPackFiles[PackIndexByName] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 336, ASSERT_TYPE_ASSERT, "( ( !XPak_FindPackFile( name ) ) )", "( name ) = %s", name) )
    __debugbreak();
  v6 = strchr_0(name, 47);
  v7 = v6 + 1;
  if ( !v6 )
    v7 = name;
  Core_strcpy((char *)v2 + 16, 0x40ui64, v7);
  v8 = strchr_0((const char *)v2 + 16, 33);
  if ( v8 )
    *v8 = 0;
  Com_sprintf<260>((char (*)[260])(v2 + 20), "%s.%s", (const char *)v2 + 16, "xpak");
  LOBYTE(v9) = FileStream_OpenFile(folder, (const char *)v2 + 80, 27);
  v10 = v9;
  if ( v9 == -16777217 )
  {
    Com_Printf(36, "xpak is missing: %s\n", (const char *)v2 + 80);
  }
  else
  {
    s_xpakEntryInfoStale = 1;
    FileStream_Easy_SeekSet((FileStreamFileID)v9, 0i64);
    if ( (unsigned __int64)FileStream_Easy_Read((FileStreamFileID)v10, v2 + 1024, 4096i64, (__int64 *)((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64), FILE_STREAM_TRACK_XPAK) >= 0x320 )
    {
      if ( *(_DWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1000) != 1229996363 )
      {
        FileStream_CloseFile((FileStreamFileID)v10);
        Sys_Error((const ObfuscateErrorText)&stru_1441E58B8, v2 + 20);
      }
      if ( *(_WORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1006) == 13 )
      {
        v11 = *(_QWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1150);
        if ( v11 )
        {
          if ( 24 * v11 != *(_QWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1160) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 405, ASSERT_TYPE_ASSERT, "(header->indexSection.itemCount * ( int64_t )sizeof( XPakIndexEntry ) == header->indexSection.size)", (const char *)&queryFormat, "header->indexSection.itemCount * ( int64_t )sizeof( XPakIndexEntry ) == header->indexSection.size") )
            __debugbreak();
          v12 = 0i64;
          p_refCount = &s_loadedPackFiles[0].refCount;
          v14 = 0i64;
          while ( *p_refCount )
          {
            v14 = (unsigned int)(v14 + 1);
            p_refCount += 40;
            if ( (unsigned int)v14 >= 0x100 )
            {
              v15 = NULL;
              goto LABEL_32;
            }
          }
          v15 = &s_loadedPackFiles[v14];
          if ( v15 )
            goto LABEL_33;
LABEL_32:
          FileStream_CloseFile((FileStreamFileID)v10);
          XPak_PrintLoadedPackFiles();
          Sys_Error((const ObfuscateErrorText)&stru_1441E5A68, v2 + 20);
LABEL_33:
          v16 = FileStream_Easy_FileSize((FileStreamFileID)v10);
          v17 = v16;
          if ( v16 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 427, ASSERT_TYPE_ASSERT, "( fileSize > 0 )", "Invalid file size (%zd) for XPak %s", v16, name) )
            __debugbreak();
          Core_strcpy(v15->name, 0x40ui64, name);
          v18 = *(double *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1148);
          *(_OWORD *)&v15->data.itemCount = *(_OWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1138);
          v19 = *(_OWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1150);
          *(double *)&v15->data.size = v18;
          v20 = *(double *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1160);
          *(_OWORD *)&v15->index.itemCount = v19;
          v21 = *(_OWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1180);
          *(double *)&v15->index.size = v20;
          v22 = *(double *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1190);
          *(_OWORD *)&v15->meta.itemCount = v21;
          *(double *)&v15->meta.size = v22;
          *(_DWORD *)v15->fh = v10;
          v15->fileSize = v17;
          if ( v15->refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 440, ASSERT_TYPE_ASSERT, "(pak->refCount == 0)", (const char *)&queryFormat, "pak->refCount == 0") )
            __debugbreak();
          v15->refCount = 1;
          p_fileSize = &s_loadedPackFiles[0].fileSize;
          for ( i = 0; i < 0x100; ++i )
          {
            if ( *((_DWORD *)p_fileSize + 2) )
            {
              v25 = *p_fileSize;
              if ( *p_fileSize <= 0 )
              {
                LODWORD(v28) = i;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1125, ASSERT_TYPE_ASSERT, "( fileSize > 0 )", "Invalid file size (%zd) for XPak %d '%s'", v25, v28, s_loadedPackFiles[i].name) )
                  __debugbreak();
              }
              v12 += v25;
            }
            p_fileSize += 20;
          }
          v26 = v12 >> 20;
          if ( v26 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v26, "unsigned", v26) )
            __debugbreak();
          Stream_ValidateXPakPosition(v26);
          Com_Printf(36, "XPak_AddPackFile: Added xpak file: %s (%lld items)\n", name, *(_QWORD *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1150));
        }
        else
        {
          FileStream_CloseFile((FileStreamFileID)v10);
          Com_Printf(36, "xpak is empty: %s\n", (const char *)v2 + 80);
          if ( !DB_IsLoadingDebugZone() && (unsigned __int64)s_emptyPackFileCount < 0x100 )
          {
            Core_strcpy(s_emptyPackFiles[(__int64)s_emptyPackFileCount], 0x40ui64, name);
            ++s_emptyPackFileCount;
          }
        }
      }
      else
      {
        FileStream_CloseFile((FileStreamFileID)v10);
        Com_PrintError(36, "xpak version mismatch, got %08x, expected %08x: %s. Ignoring...\n", *(unsigned int *)(((unsigned __int64)bytesRead & 0xFFFFFFFFFFFFF000ui64) + 0x1004), 851968i64, (const char *)v2 + 80);
      }
    }
    else
    {
      LODWORD(fmt) = 800;
      Com_PrintError(36, "Error performing initial read from xpak file: %s. Readbytes is %d but expected %d.\n", (const char *)v2 + 80, *v2, fmt);
      FileStream_CloseFile((FileStreamFileID)v10);
    }
  }
}

/*
==============
XPak_AddPackFilesForZone
==============
*/
__int64 XPak_AddPackFilesForZone(const char *zoneName)
{
  __int64 v2; 
  unsigned __int8 v3; 
  const char *CurrentRegionCode; 
  int CurrentLanguage; 
  const char *LanguageCode; 
  char *v7; 
  const char *v8; 
  char *v9; 
  char *v10; 
  char v11; 
  __int64 v12; 
  int v13; 
  XHash v14; 
  bool v15; 
  bool v16; 
  Sys_Folder v17; 
  char *str; 
  XHash xhash_8; 
  __int64 v21; 
  char v22[5]; 
  char dest[2][6]; 
  char Str[64]; 
  char v25[128]; 

  v21 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_AddPackFilesForZone");
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 654, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v2 = 0i64;
  str = NULL;
  v3 = 0;
  CurrentRegionCode = RG_GetCurrentRegionCode();
  Com_sprintf<6>(dest, "%s_", CurrentRegionCode);
  CurrentLanguage = SEH_GetCurrentLanguage();
  LanguageCode = SEH_GetLanguageCode(CurrentLanguage);
  Com_sprintf<5>((char (*)[5])v22, "%s_", LanguageCode);
  v7 = strchr_0(zoneName, 47);
  v8 = v7 + 1;
  if ( !v7 )
    v8 = zoneName;
  Core_strcpy(Str, 0x40ui64, v8);
  v9 = strchr_0(Str, 33);
  if ( v9 )
    *v9 = 0;
  xhash_8.name = NULL;
  xhash_8.hashPacked = 0i64;
  v10 = Str;
  v11 = Str[0];
  if ( Str[0] )
  {
    v12 = 0xCBF29CE484222325ui64;
    do
    {
      v13 = v11;
      if ( (unsigned __int8)(v11 - 65) <= 0x19u )
        v13 = v11 + 32;
      v12 = (0x100000001B3i64 * (v13 ^ (unsigned __int64)v12)) & 0x7FFFFFFFFFFFFFFFi64;
      v11 = *++v10;
    }
    while ( *v10 );
    v2 = v12 & 0x7FFFFFFFFFFFFFFFi64;
  }
  xhash_8.hashPacked = v2;
  DB_SetHashDebugName(&xhash_8, Str, 1);
  if ( !DB_IsLoadingDebugZone() )
  {
    v14 = xhash_8;
    if ( !KeyValuePairs_GetNextValue("xpak_read", &xhash_8, (const char **)&str) )
      goto LABEL_25;
    v3 = 1;
    while ( 1 )
    {
      v15 = I_StartsWith(str, v22);
      v16 = I_StartsWith(str, dest[0]);
      if ( v15 )
        break;
      if ( v16 )
        goto LABEL_22;
      Com_sprintf<128>((char (*)[128])v25, "%s%s", v22, str);
      XPak_AddPackFile(SF_PAKFILE_LOC, v25);
      Com_sprintf<128>((char (*)[128])v25, "%s%s", dest[0], str);
      XPak_AddPackFile(SF_ZONE_REGION, v25);
      v17 = SF_PAKFILE;
LABEL_24:
      XPak_AddPackFile(v17, str);
      xhash_8 = v14;
      if ( !KeyValuePairs_GetNextValue("xpak_read", &xhash_8, (const char **)&str) )
        goto LABEL_25;
    }
    if ( !v16 )
    {
      v17 = SF_PAKFILE_LOC;
      goto LABEL_24;
    }
LABEL_22:
    v17 = SF_ZONE_REGION;
    goto LABEL_24;
  }
  Com_Printf(36, "XPak_AddPackFilesForZone: adding debug zone %s\n", zoneName);
  XPak_AddPackFile(SF_PAKFILE, Str);
  v3 = 1;
LABEL_25:
  Sys_ProfEndNamedEvent();
  return v3;
}

/*
==============
XPak_AddWorkItem
==============
*/
void XPak_AddWorkItem(XPakWorkData *work, int partIndex, StreamItemType type, unsigned int *itemPartIndex, int zoneIndex)
{
  XPakWorkData::ItemInfo *v9; 
  unsigned int v10; 
  int v11; 

  if ( *itemPartIndex >= 0x64400 )
  {
    v11 = 410624;
    v10 = *itemPartIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1320, ASSERT_TYPE_ASSERT, "(unsigned)( itemPartIndex ) < (unsigned)( ( sizeof( *array_counter( work->items ) ) + 0 ) )", "itemPartIndex doesn't index ARRAY_COUNT( work->items )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( partIndex >= 0x1000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1321, ASSERT_TYPE_ASSERT, "(partIndex < ( 1 << 24 ))", (const char *)&queryFormat, "partIndex < ( 1 << 24 )") )
    __debugbreak();
  v9 = &work->items[*itemPartIndex];
  *(_DWORD *)v9 &= 0xFF000000;
  *(_DWORD *)v9 |= partIndex & 0xFFFFFF;
  *((_BYTE *)v9 + 3) = type;
  *(_QWORD *)&v9->entryInfoLow = XPak_GetEntryInfo(type, partIndex);
  v9->zoneIndex = zoneIndex;
  ++*itemPartIndex;
}

/*
==============
XPak_AddWorkItemForAssetEntry
==============
*/
void XPak_AddWorkItemForAssetEntry(const DB_AssetEntry *assetEntry, unsigned int *itemPartIndex, XPakWorkData *work)
{
  unsigned __int8 m_type; 
  int v5; 
  XAssetHeader v7; 
  unsigned int GfxImageIndex; 
  unsigned int i; 
  XAssetHeader v10; 
  int XModelSurfsIndex; 
  XAssetHeader v12; 
  int StreamKeyIndex; 

  m_type = assetEntry->m_type;
  v5 = *((_WORD *)assetEntry + 9) & 0x7FF;
  switch ( m_type )
  {
    case 0xFu:
      v7.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
      if ( !assetEntry->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1347, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( ((__int64)v7.physicsLibrary[1].name & 0x40) != 0 )
      {
        GfxImageIndex = DB_GetGfxImageIndex(v7.image);
        for ( i = 0; i < BYTE1(v7.physicsLibrary[2].name); ++i )
        {
          if ( *((_QWORD *)&v7.physicsLibrary[2].isMaterialList + 5 * i) )
          {
            *((_QWORD *)&v7.physicsLibrary[3].isMaterialList + 5 * i) |= 0x3FFFFFFFFF0000ui64;
            *(&v7.physicsLibrary[3].isMaterialList + 40 * i) = 0;
            *((_QWORD *)&v7.physicsLibrary[3].isMaterialList + 5 * i) &= 0xFFFFFFFFFFFFFCFFui64;
            *((_QWORD *)&v7.physicsLibrary[2].havokData + 5 * i) = 0i64;
            *((_QWORD *)&v7.physicsLibrary[3].name + 5 * i) = 0i64;
            XPak_AddWorkItem(work, i + 4 * GfxImageIndex, STREAM_ITEM_IMAGE, itemPartIndex, v5);
          }
        }
      }
      break;
    case 8u:
      v10.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
      if ( !assetEntry->m_header.physicsLibrary )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1369, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
          __debugbreak();
      }
      if ( !v10.physicsLibrary[2].name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
        __debugbreak();
      if ( (v10.physicsLibrary[2].name[12] & 1) != 0 && v10.physicsLibrary->havokData )
      {
        v10.physicsLibrary[1].havokData = (char *)((unsigned __int64)v10.physicsLibrary[1].havokData | 0x3FFFFFFFFF0000i64);
        LOBYTE(v10.physicsLibrary[1].havokData) = 0;
        v10.physicsLibrary[1].havokData = (char *)((unsigned __int64)v10.physicsLibrary[1].havokData & 0xFFFFFFFFFFFFFCFFui64);
        v10.physicsLibrary[1].name = NULL;
        *(_QWORD *)&v10.physicsLibrary[1].isMaterialList = 0i64;
        XModelSurfsIndex = DB_GetXModelSurfsIndex(v10.modelSurfs);
        XPak_AddWorkItem(work, XModelSurfsIndex, STREAM_ITEM_MESH, itemPartIndex, v5);
      }
      break;
    case 0x62u:
      v12.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
      if ( !assetEntry->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1386, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
        __debugbreak();
      if ( (v12.physicsLibrary[2].havokDataSize & 0x200) == 0 && *(_QWORD *)&v12.physicsLibrary->isMaterialList )
      {
        *(_QWORD *)&v12.physicsLibrary[1].isMaterialList |= 0x3FFFFFFFFF0000ui64;
        v12.physicsLibrary[1].isMaterialList = 0;
        *(_QWORD *)&v12.physicsLibrary[1].isMaterialList &= 0xFFFFFFFFFFFFFCFFui64;
        v12.physicsLibrary->havokData = NULL;
        v12.physicsLibrary[1].name = NULL;
        StreamKeyIndex = DB_GetStreamKeyIndex(v12.streamKey);
        XPak_AddWorkItem(work, StreamKeyIndex, STREAM_ITEM_GENERIC, itemPartIndex, v5);
      }
      break;
  }
}

/*
==============
XPak_BeginIndexRead
==============
*/
void XPak_BeginIndexRead(XPakWorkContext *work, const XPakLoadedPackFile *pak)
{
  int v4; 
  int *indexBufferState; 
  __int64 *indexBufferOffset; 
  XPakIndexEntry (*indexBuffer)[4096]; 
  int *v8; 
  __int64 v9; 
  int v10; 
  signed int v11; 
  __int64 priority; 
  void (__fastcall *callback)(FileStreamRequestID, FileStreamStatus, __int64, void *); 
  int v14; 

  if ( !work && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 997, ASSERT_TYPE_ASSERT, "(work)", (const char *)&queryFormat, "work") )
    __debugbreak();
  if ( !pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 998, ASSERT_TYPE_ASSERT, "(pak)", (const char *)&queryFormat, "pak") )
    __debugbreak();
  if ( work->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1000, ASSERT_TYPE_ASSERT, "(work->pak == nullptr)", (const char *)&queryFormat, "work->pak == nullptr") )
    __debugbreak();
  work->pak = pak;
  work->indexReadOffset = 0i64;
  *(_QWORD *)&work->activeBuffer = 0i64;
  v4 = 0;
  v14 = 0;
  indexBufferState = work->indexBufferState;
  indexBufferOffset = work->indexBufferOffset;
  indexBuffer = work->indexBuffer;
  v8 = work->indexBufferState;
  do
  {
    *indexBufferState = 0;
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(callback) = 2;
      LODWORD(priority) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 946, ASSERT_TYPE_ASSERT, "(unsigned)( buffer ) < (unsigned)( 2 )", "buffer doesn't index XPAK_INDEX_BUFFER_COUNT\n\t%i not in [0, %i)", priority, callback) )
        __debugbreak();
      if ( *indexBufferState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 947, ASSERT_TYPE_ASSERT, "(work->indexBufferState[buffer] == 0)", (const char *)&queryFormat, "work->indexBufferState[buffer] == XPAK_INDEX_BUFFER_EMPTY") )
        __debugbreak();
    }
    v9 = work->pak->index.size - work->indexReadOffset;
    if ( (unsigned __int64)(v9 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v9, "signed", work->pak->index.size - work->indexReadOffset) )
      __debugbreak();
    v10 = 98304;
    if ( (int)v9 < 98304 )
      v10 = v9;
    v11 = (v10 + 0x7FFF) & 0xFFFF8000;
    if ( v11 )
    {
      *indexBufferOffset = work->indexReadOffset;
      *indexBufferState = 1;
      Sys_ProfBeginNamedEvent(0xFF808080, "XPak_ReadIndexData: IO wait");
      if ( !FileStream_AddRequest((FileStreamFileID)*(_DWORD *)work->pak->fh, work->indexReadOffset + work->pak->index.offset, v11, indexBuffer, 0, FLAT_TIRE, XPak_IndexReadCallback, v8, NULL, FILE_STREAM_TRACK_XPAK) )
      {
        do
          Sys_Sleep(0);
        while ( !FileStream_AddRequest((FileStreamFileID)*(_DWORD *)work->pak->fh, work->indexReadOffset + work->pak->index.offset, v11, indexBuffer, 0, FLAT_TIRE, XPak_IndexReadCallback, v8, NULL, FILE_STREAM_TRACK_XPAK) );
        v4 = v14;
      }
      Sys_ProfEndNamedEvent();
      work->indexReadOffset += v11;
    }
    v14 = ++v4;
    ++v8;
    ++indexBuffer;
    ++indexBufferOffset;
    ++indexBufferState;
  }
  while ( v4 < 2 );
}

/*
==============
XPak_BeginUsingWorkData
==============
*/
XPakWorkData *XPak_BeginUsingWorkData()
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  int v4; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 895, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !s_xpakWorkData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 896, ASSERT_TYPE_ASSERT, "(s_xpakWorkData)", (const char *)&queryFormat, "s_xpakWorkData") )
    __debugbreak();
  if ( ++s_xpakWorkDataInUse != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 899, ASSERT_TYPE_ASSERT, "(s_xpakWorkDataInUse == 1)", (const char *)&queryFormat, "s_xpakWorkDataInUse == 1") )
    __debugbreak();
  if ( !Mem_Paged_CommitMemoryPartial((unsigned __int8 *)s_xpakWorkData, (unsigned __int8 *)&s_xpakWorkData[1].indexBuffer[0][1024], (unsigned __int8 *)s_xpakWorkData, NULL, &s_xpakWorkDataPageRange, "XPakWorkData") )
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "XPak_BeginUsingWorkData", "c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 906, "Failed to allocate %zu bytes for XPak work data!", 0x9A0000ui64);
  if ( s_xpakWorkDataPageRange.firstPageID == -1 )
  {
    v4 = -1;
    v2 = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 909, ASSERT_TYPE_ASSERT, "( s_xpakWorkDataPageRange.firstPageID ) != ( MEM_PAGEID_INVALID )", "%s != %s\n\t%u, %u", "s_xpakWorkDataPageRange.firstPageID", "MEM_PAGEID_INVALID", v2, v4) )
      __debugbreak();
  }
  if ( s_xpakWorkDataPageRange.lastPageID == -1 )
  {
    LODWORD(v3) = -1;
    LODWORD(v1) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 910, ASSERT_TYPE_ASSERT, "( s_xpakWorkDataPageRange.lastPageID ) != ( MEM_PAGEID_INVALID )", "%s != %s\n\t%u, %u", "s_xpakWorkDataPageRange.lastPageID", "MEM_PAGEID_INVALID", v1, v3) )
      __debugbreak();
  }
  return s_xpakWorkData;
}

/*
==============
XPak_BuildEntryInfo
==============
*/
void XPak_BuildEntryInfo(void)
{
  XPakWorkData *v0; 
  const DB_AssetEntryFlags *AssetEntryUsedFlagsIncludingStashed; 
  const DB_AssetEntryFlags *AssetEntryPool; 
  unsigned int v3; 
  unsigned int v4; 
  const DB_AssetEntryFlags *v5; 
  unsigned int v6; 
  XPakWorkData *v7; 
  XPakWorkData::ItemInfo *itemScratch; 
  XPakWorkData::ItemInfo *items; 
  const dvar_t *v10; 
  int integer; 
  unsigned int v12; 
  unsigned int v13; 
  XPakWorkData::ItemInfo *v14; 
  XPakEntryInfo *v15; 
  const char *ItemName; 
  GfxImage *GfxImageAtIndex; 
  GfxImage *v18; 
  __int64 v19; 
  int v20; 
  _DWORD *v21; 
  const char *v22; 
  XPakLoadedPackFile *v23; 
  const char *ZoneNameFromIndex; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  unsigned int i; 
  int *v29; 
  __int64 v30; 
  int v31; 
  unsigned int v32; 
  const char *v33; 
  XModelSurfs *XModelSurfsAtIndex; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int8 *v39; 
  int v40; 
  char *name; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  XPak_CompareItemPartHashes v45; 
  unsigned int itemPartCount; 
  int v47; 
  __int64 v48; 
  int v49; 
  XPakWorkData *inOutWorkData; 
  Mem_PageRange inoutPageRange; 
  XPakWorkData::ItemInfo *v52; 
  XPakWorkData *v53; 
  unsigned int *p_itemPartCount; 
  __int64 v55; 
  StreamerMemLoan result; 

  v55 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_BuildEntryInfo");
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1477, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1482, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !s_xpakEntryInfoStale )
  {
    Com_Printf(36, "XPak_BuildEntryInfo: skipping because it is not stale\n");
    goto LABEL_127;
  }
  v49 = Sys_Milliseconds();
  Com_Printf(36, "XPak_BuildEntryInfo: started\n");
  Stream_ClearValidityBits();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 895, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !s_xpakWorkData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 896, ASSERT_TYPE_ASSERT, "(s_xpakWorkData)", (const char *)&queryFormat, "s_xpakWorkData") )
    __debugbreak();
  if ( ++s_xpakWorkDataInUse != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 899, ASSERT_TYPE_ASSERT, "(s_xpakWorkDataInUse == 1)", (const char *)&queryFormat, "s_xpakWorkDataInUse == 1") )
    __debugbreak();
  if ( !Mem_Paged_CommitMemoryPartial((unsigned __int8 *)s_xpakWorkData, (unsigned __int8 *)&s_xpakWorkData[1].indexBuffer[0][1024], (unsigned __int8 *)s_xpakWorkData, NULL, &s_xpakWorkDataPageRange, "XPakWorkData") )
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "XPak_BeginUsingWorkData", "c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 906, "Failed to allocate %zu bytes for XPak work data!", 0x9A0000ui64);
  if ( s_xpakWorkDataPageRange.firstPageID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 909, ASSERT_TYPE_ASSERT, "( s_xpakWorkDataPageRange.firstPageID ) != ( MEM_PAGEID_INVALID )", "%s != %s\n\t%u, %u", "s_xpakWorkDataPageRange.firstPageID", "MEM_PAGEID_INVALID", -1, -1) )
    __debugbreak();
  if ( s_xpakWorkDataPageRange.lastPageID == -1 )
  {
    LODWORD(v44) = -1;
    LODWORD(v43) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 910, ASSERT_TYPE_ASSERT, "( s_xpakWorkDataPageRange.lastPageID ) != ( MEM_PAGEID_INVALID )", "%s != %s\n\t%u, %u", "s_xpakWorkDataPageRange.lastPageID", "MEM_PAGEID_INVALID", v43, v44) )
      __debugbreak();
  }
  v0 = s_xpakWorkData;
  inOutWorkData = s_xpakWorkData;
  if ( !s_xpakWorkData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1503, ASSERT_TYPE_ASSERT, "(work)", (const char *)&queryFormat, "work") )
    __debugbreak();
  if ( ((unsigned __int16)v0 & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1504, ASSERT_TYPE_ASSERT, "(IsAligned( work, alignof( XPakWorkData ) ))", (const char *)&queryFormat, "IsAligned( work, alignof( XPakWorkData ) )") )
    __debugbreak();
  memset_0(v0, 0, 0x32000ui64);
  DB_LockHashRead();
  v48 = 0i64;
  itemPartCount = 0;
  v53 = v0;
  p_itemPartCount = &itemPartCount;
  AssetEntryUsedFlagsIncludingStashed = DB_GetAssetEntryUsedFlagsIncludingStashed();
  AssetEntryPool = (const DB_AssetEntryFlags *)DB_GetAssetEntryPool();
  v3 = 0;
  v4 = 0;
  v5 = AssetEntryUsedFlagsIncludingStashed;
  do
  {
    DB_AssetEntryPool::ForEachInBlock__lambda_436323fd6ca1463ab7e52c53da1eaccb__const__(AssetEntryPool, (unsigned __int64)AssetEntryUsedFlagsIncludingStashed, v5->m_flags.m_data[0], (const XPak_BuildEntryInfo::__l2::<lambda_436323fd6ca1463ab7e52c53da1eaccb> *)v3);
    v3 += 64;
    ++v4;
    v5 = (const DB_AssetEntryFlags *)((char *)v5 + 8);
  }
  while ( v4 < 0x1768 );
  DB_UnlockHashRead();
  v6 = itemPartCount;
  v7 = inOutWorkData;
  itemScratch = inOutWorkData->itemScratch;
  v52 = inOutWorkData->itemScratch;
  items = inOutWorkData->items;
  inoutPageRange = (Mem_PageRange)inOutWorkData->items;
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_MergeSort");
  Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(items, (XPakWorkData::ItemInfo (*)[205313])itemScratch, 0, v6 - 1, v45);
  Sys_ProfEndNamedEvent();
  XPak_IndexEntries(v7, itemPartCount);
  v10 = DCONST_DVARINT_stream_xpakSimulateMissingAssets;
  if ( !DCONST_DVARINT_stream_xpakSimulateMissingAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xpakSimulateMissingAssets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v47 = integer;
  v12 = 0;
  v13 = itemPartCount;
  if ( itemPartCount )
  {
    do
    {
      if ( v12 >= 0x64400 )
      {
        LODWORD(v42) = 410624;
        LODWORD(name) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1537, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( work->items ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( work->items )\n\t%i not in [0, %i)", name, v42) )
          __debugbreak();
      }
      v14 = &v7->items[v12];
      if ( !v14->entryInfoLow && !v14->entryInfoHigh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v15 = *(XPakEntryInfo **)&v14->entryInfoLow;
      ItemName = XPak_GetItemName((StreamItemType)SHIBYTE(*(_DWORD *)v14), (int)(*(_DWORD *)v14 << 8) >> 8);
      if ( (*((_QWORD *)v15 + 3) & 0x200i64) == 0 )
      {
        Com_Printf(36, "XPak_BuildEntryInfo: Found invalid part\n");
        if ( !HIBYTE(*(_DWORD *)v14) )
        {
          GfxImageAtIndex = DB_GetGfxImageAtIndex(((int)(*(_DWORD *)v14 << 8) >> 8) / 4);
          v18 = GfxImageAtIndex;
          v19 = ((int)(*(_DWORD *)v14 << 8) >> 8) & 0x80000003;
          if ( (int)(*(_DWORD *)v14 << 8) >> 8 < 0 )
            v19 = ((unsigned __int8)((*(_BYTE *)v14 & 3) - 1) | 0xFFFFFFFC) + 1;
          Com_Printf(36, "Image: %s, Part: %d\n", GfxImageAtIndex->name, v19);
          if ( (v18->flags & 0x40) != 0 )
          {
            v20 = 0;
            if ( v18->streamedPartCount )
            {
              v21 = (_DWORD *)&v18->streams[0].xpakEntry + 6;
              do
              {
                v22 = "not valid";
                if ( (*v21 & 0x200i64) != 0 )
                  v22 = "valid";
                Com_Printf(36, "Part %d %s\n", (unsigned int)v20++, v22);
                v21 += 10;
              }
              while ( v20 < v18->streamedPartCount );
              integer = v47;
            }
          }
          else
          {
            Com_Printf(36, "Not streamed?\n");
          }
        }
        Com_Printf(36, "key: %zu\n", v15->key);
        Com_Printf(36, "Loaded XPaks:\n");
        v23 = &s_loadedPackFiles[255];
        do
        {
          if ( v23->refCount )
          {
            Com_Printf(36, "%s\n", v23->name);
            XPak_PrintEntries(v23);
          }
          --v23;
        }
        while ( (__int64)v23 >= (__int64)s_loadedPackFiles );
        if ( (*((_QWORD *)v15 + 3) & 0x200i64) == 0 )
        {
          ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v14->zoneIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1584, ASSERT_TYPE_ASSERT, "( streamedPart->valid )", "%s (%s) is not found from any XPak files", ItemName, ZoneNameFromIndex) )
            __debugbreak();
        }
      }
      if ( integer > 0 && !(v12 % integer) )
      {
        Com_Printf(36, "Clearing XPakEntryInfo for: %s\n", ItemName);
        XPak_ClearAdjacencyInfoForEntry(v15);
        v15->offset = 0i64;
        v15->size = 0i64;
        *((_QWORD *)v15 + 3) |= 0x3FFFFFFFFF0000ui64;
        *((_BYTE *)v15 + 24) = 0;
        *((_QWORD *)v15 + 3) &= 0xFFFFFFFFFFFFFCFFui64;
      }
      v25 = *((_QWORD *)v15 + 3);
      if ( (v25 & 0x200) != 0 )
        Stream_SetItemXPakPosition((StreamItemType)SHIBYTE(*(_DWORD *)v14), (int)(*(_DWORD *)v14 << 8) >> 8, (unsigned __int8)v25, v15->offset);
      ++v12;
      v13 = itemPartCount;
      v7 = inOutWorkData;
    }
    while ( v12 < itemPartCount );
    itemScratch = v52;
    items = (XPakWorkData::ItemInfo *)inoutPageRange;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_MergeSort");
  Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(items, (XPakWorkData::ItemInfo (*)[205313])itemScratch, 0, v13 - 1, (const XPak_CompareItemOffset)v45);
  Sys_ProfEndNamedEvent();
  v47 = -1;
  v26 = 0x7FFFF;
  LOBYTE(v27) = 0;
  for ( i = 0; i < itemPartCount; ++i )
  {
    if ( i >= 0x64400 )
    {
      LODWORD(v42) = 410624;
      LODWORD(name) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1629, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( work->items ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( work->items )\n\t%i not in [0, %i)", name, v42) )
        __debugbreak();
    }
    v29 = (int *)&inOutWorkData->items[i];
    if ( !v29[1] && !v29[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
      __debugbreak();
    v30 = *(_QWORD *)(v29 + 1);
    v31 = *v29 >> 24;
    v32 = *v29 << 8 >> 8;
    if ( HIBYTE(*v29) )
    {
      if ( HIBYTE(*v29) == 1 )
      {
        XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v32);
      }
      else
      {
        if ( HIBYTE(*v29) != 2 )
        {
          LODWORD(name) = HIBYTE(*v29);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1311, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XPak_GetItemName(): Invalid item type %d.", name) )
            __debugbreak();
          v33 = (char *)&queryFormat.fmt + 3;
          goto LABEL_89;
        }
        XModelSurfsAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v32);
      }
    }
    else
    {
      XModelSurfsAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v32 >> 2);
    }
    v33 = XModelSurfsAtIndex->name;
LABEL_89:
    if ( (*(_QWORD *)(v30 + 24) & 0x7FFFF0000i64) != 0x7FFFF0000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1635, ASSERT_TYPE_ASSERT, "( ( streamedPart->adjacentLeft == XPAK_ADJACENT_INVALID ) )", "( itemName ) = %s", v33) )
      __debugbreak();
    if ( ((*(_QWORD *)(v30 + 24) >> 35) & 0x7FFFFi64) != 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1636, ASSERT_TYPE_ASSERT, "( ( streamedPart->adjacentRight == XPAK_ADJACENT_INVALID ) )", "( itemName ) = %s", v33) )
      __debugbreak();
    v35 = *(_QWORD *)(v30 + 24);
    if ( (v35 & 0x200) != 0 )
    {
      v36 = *v29 << 8 >> 8;
      if ( v47 == (unsigned __int8)v35 )
      {
        v27 = (unsigned __int8)v27;
        *(_QWORD *)(v30 + 24) = v35 & 0xFFFFFFF80000E3FFui64 | ((v27 & 7 | ((unsigned __int64)(v26 & 0x7FFFF) << 6)) << 10);
        v37 = v48;
        if ( !v48 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1648, ASSERT_TYPE_ASSERT, "(leftStreamedPart)", (const char *)&queryFormat, "leftStreamedPart") )
            __debugbreak();
          v37 = v48;
        }
        *(_QWORD *)(v37 + 24) &= 0xFFC00007FFFF1FFFui64;
        *(_QWORD *)(v48 + 24) |= (v31 & 7 | ((unsigned __int64)(v36 & 0x7FFFF) << 22)) << 13;
        if ( ((*(_QWORD *)(v30 + 24) >> 16) & 0x7FFFFi64) != v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1651, ASSERT_TYPE_ASSERT, "(streamedPart->adjacentLeft == leftPartIndex)", (const char *)&queryFormat, "streamedPart->adjacentLeft == leftPartIndex") )
          __debugbreak();
        v38 = v48;
        if ( ((*(_QWORD *)(v48 + 24) >> 35) & 0x7FFFFi64) != v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1652, ASSERT_TYPE_ASSERT, "(leftStreamedPart->adjacentRight == itemPartIndex)", (const char *)&queryFormat, "leftStreamedPart->adjacentRight == itemPartIndex") )
          __debugbreak();
        if ( ((*(_DWORD *)(v30 + 24) >> 10) & 7) != v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1653, ASSERT_TYPE_ASSERT, "(streamedPart->adjacentLeftType == ( uint )leftPartType)", (const char *)&queryFormat, "streamedPart->adjacentLeftType == ( uint )leftPartType") )
          __debugbreak();
        if ( (unsigned __int8)HIBYTE(*(_WORD *)(v38 + 24)) >> 5 != (unsigned __int64)(unsigned __int8)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1654, ASSERT_TYPE_ASSERT, "(leftStreamedPart->adjacentRightType == ( uint )type)", (const char *)&queryFormat, "leftStreamedPart->adjacentRightType == ( uint )type") )
          __debugbreak();
      }
      else
      {
        v47 = (unsigned __int8)v35;
      }
      v48 = v30;
      LOBYTE(v27) = v31;
      v26 = v36;
    }
  }
  s_xpakEntryInfoStale = 0;
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 917, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v39 = (unsigned __int8 *)s_xpakWorkData;
  if ( !s_xpakWorkData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 918, ASSERT_TYPE_ASSERT, "(s_xpakWorkData)", (const char *)&queryFormat, "s_xpakWorkData") )
      __debugbreak();
    v39 = (unsigned __int8 *)s_xpakWorkData;
  }
  inoutPageRange = s_xpakWorkDataPageRange;
  Mem_Paged_DecommitMemoryPartial(&result, v39, v39 + 10092544, v39, &inoutPageRange);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_xpakWorkDataPageRange = MEM_PAGE_RANGE_INVALID_6;
  if ( --s_xpakWorkDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 926, ASSERT_TYPE_ASSERT, "(s_xpakWorkDataInUse == 0)", (const char *)&queryFormat, "s_xpakWorkDataInUse == 0") )
    __debugbreak();
  v40 = Sys_Milliseconds();
  Com_Printf(36, "XPak_BuildEntryInfo: finished in %d ms\n", (unsigned int)(v40 - v49));
LABEL_127:
  Sys_ProfEndNamedEvent();
}

/*
==============
XPak_CheckAdjacencyInfo
==============
*/
void XPak_CheckAdjacencyInfo(const GfxImage *image)
{
  unsigned int GfxImageIndex; 
  unsigned __int8 streamedPartCount; 
  int v4; 
  unsigned __int64 *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  XPakEntryInfo *EntryInfo; 
  XPakEntryInfo *v9; 

  if ( (image->flags & 0x40) != 0 )
  {
    GfxImageIndex = DB_GetGfxImageIndex(image);
    streamedPartCount = image->streamedPartCount;
    if ( streamedPartCount )
    {
      v4 = 4 * GfxImageIndex;
      v5 = (unsigned __int64 *)&image->streams[0].xpakEntry + 3;
      v6 = streamedPartCount;
      do
      {
        v7 = *v5;
        if ( (*v5 & 0x200) != 0 )
        {
          if ( ((v7 >> 16) & 0x7FFFF) != 0x7FFFF )
          {
            EntryInfo = XPak_GetEntryInfo((StreamItemType)((v7 >> 10) & 7), (v7 >> 16) & 0x7FFFF);
            if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1913, ASSERT_TYPE_ASSERT, "(leftPart->valid)", (const char *)&queryFormat, "leftPart->valid") )
              __debugbreak();
            if ( ((*((_QWORD *)EntryInfo + 3) >> 35) & 0x7FFFFi64) != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1914, ASSERT_TYPE_ASSERT, "(leftPart->adjacentRight == imagePartIndex)", (const char *)&queryFormat, "leftPart->adjacentRight == imagePartIndex") )
              __debugbreak();
            if ( (*((_DWORD *)EntryInfo + 6) & 0xE000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1915, ASSERT_TYPE_ASSERT, "(leftPart->adjacentRightType == StreamItemType::STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "leftPart->adjacentRightType == StreamItemType::STREAM_ITEM_IMAGE") )
              __debugbreak();
            v7 = *v5;
          }
          if ( ((v7 >> 35) & 0x7FFFF) != 0x7FFFF )
          {
            v9 = XPak_GetEntryInfo((StreamItemType)((v7 >> 13) & 7), (v7 >> 35) & 0x7FFFF);
            if ( (*((_DWORD *)v9 + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1921, ASSERT_TYPE_ASSERT, "(rightPart->valid)", (const char *)&queryFormat, "rightPart->valid") )
              __debugbreak();
            if ( ((*((_QWORD *)v9 + 3) >> 16) & 0x7FFFFi64) != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1922, ASSERT_TYPE_ASSERT, "(rightPart->adjacentLeft == imagePartIndex)", (const char *)&queryFormat, "rightPart->adjacentLeft == imagePartIndex") )
              __debugbreak();
            if ( (*((_DWORD *)v9 + 6) & 0x1C00i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1923, ASSERT_TYPE_ASSERT, "(rightPart->adjacentLeftType == StreamItemType::STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "rightPart->adjacentLeftType == StreamItemType::STREAM_ITEM_IMAGE") )
              __debugbreak();
          }
        }
        ++v4;
        v5 += 5;
        --v6;
      }
      while ( v6 );
    }
  }
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/
void XPak_ClearAdjacencyInfo(GfxImage *image)
{
  unsigned __int8 streamedPartCount; 
  int v3; 
  __int64 *v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  XPakEntryInfo *EntryInfo; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  XPakEntryInfo *v13; 
  __int64 v14; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1836, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  streamedPartCount = image->streamedPartCount;
  if ( (image->flags & 0x40) != 0 )
  {
    v3 = 0;
    if ( streamedPartCount )
    {
      v4 = (__int64 *)&image->streams[0].xpakEntry + 3;
      do
      {
        v5 = *v4;
        if ( (*v4 & 0x200) != 0 )
        {
          v6 = 0i64;
          v7 = 3;
          v8 = *v4;
          if ( ((v5 >> 16) & 0x7FFFF) != 0x7FFFF )
          {
            EntryInfo = XPak_GetEntryInfo((StreamItemType)((v5 >> 10) & 7), (v5 >> 16) & 0x7FFFF);
            if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1763, ASSERT_TYPE_ASSERT, "(leftPart->valid)", (const char *)&queryFormat, "leftPart->valid") )
              __debugbreak();
            v10 = *((_QWORD *)EntryInfo + 3) >> 13;
            v11 = *((_QWORD *)EntryInfo + 3) ^ (*v4 ^ *((_QWORD *)EntryInfo + 3)) & 0x3FFFF800000000i64;
            v12 = *((_QWORD *)EntryInfo + 3) >> 35;
            *((_QWORD *)EntryInfo + 3) = v11;
            v7 = v10 & 7;
            v6 = v12 & 0x7FFFF;
            *((_QWORD *)EntryInfo + 3) = v11 ^ (*(_DWORD *)v4 ^ (unsigned int)v11) & 0xE000;
            v5 = *v4;
            v8 = *v4;
          }
          if ( ((v5 >> 35) & 0x7FFFF) != 0x7FFFF )
          {
            v13 = XPak_GetEntryInfo((StreamItemType)((v5 >> 13) & 7), (v5 >> 35) & 0x7FFFF);
            if ( (*((_DWORD *)v13 + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1777, ASSERT_TYPE_ASSERT, "(rightPart->valid)", (const char *)&queryFormat, "rightPart->valid") )
              __debugbreak();
            v14 = *v4;
            if ( (*v4 & 0x7FFFF0000i64) != 0x7FFFF0000i64 )
            {
              if ( v7 != (((unsigned __int64)*((unsigned int *)v13 + 6) >> 10) & 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1780, ASSERT_TYPE_ASSERT, "(oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType ))", (const char *)&queryFormat, "oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType )") )
                __debugbreak();
              if ( v6 != ((*((_QWORD *)v13 + 3) >> 16) & 0x7FFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1781, ASSERT_TYPE_ASSERT, "(oldRight == rightPart->adjacentLeft)", (const char *)&queryFormat, "oldRight == rightPart->adjacentLeft") )
                __debugbreak();
              v14 = *v4;
            }
            *((_QWORD *)v13 + 3) ^= (v14 ^ *((_QWORD *)v13 + 3)) & 0x7FFFF0000i64;
            *((_QWORD *)v13 + 3) ^= (*(_DWORD *)v4 ^ (unsigned int)*((_QWORD *)v13 + 3)) & 0x1C00;
            v8 = *v4;
          }
          *v4 = v8 | 0x3FFFFFFFFF0000i64;
        }
        ++v3;
        v4 += 5;
      }
      while ( v3 < image->streamedPartCount );
    }
  }
  else if ( streamedPartCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1840, ASSERT_TYPE_ASSERT, "(image->streamedPartCount == 0)", (const char *)&queryFormat, "image->streamedPartCount == 0") )
      __debugbreak();
  }
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/
void XPak_ClearAdjacencyInfo(StreamKey *key)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1858, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  XPak_ClearAdjacencyInfoForEntry(&key->xpakInfo);
}

/*
==============
XPak_ClearAdjacencyInfo
==============
*/
void XPak_ClearAdjacencyInfo(XModelSurfs *mesh)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1852, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  XPak_ClearAdjacencyInfoForEntry(&mesh->xpakEntry);
}

/*
==============
XPak_ClearAdjacencyInfoForEntry
==============
*/
void XPak_ClearAdjacencyInfoForEntry(XPakEntryInfo *part)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  char v5; 
  XPakEntryInfo *EntryInfo; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  XPakEntryInfo *v11; 
  __int64 v12; 

  v2 = *((_QWORD *)part + 3);
  if ( (v2 & 0x200) != 0 )
  {
    v3 = v2;
    v4 = 0i64;
    v5 = 3;
    if ( ((v2 >> 16) & 0x7FFFF) != 0x7FFFF )
    {
      EntryInfo = XPak_GetEntryInfo((StreamItemType)((v2 >> 10) & 7), (v2 >> 16) & 0x7FFFF);
      if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1763, ASSERT_TYPE_ASSERT, "(leftPart->valid)", (const char *)&queryFormat, "leftPart->valid") )
        __debugbreak();
      v7 = *((_QWORD *)EntryInfo + 3) >> 13;
      v8 = *((_QWORD *)EntryInfo + 3) ^ (*((_QWORD *)part + 3) ^ *((_QWORD *)EntryInfo + 3)) & 0x3FFFF800000000i64;
      v9 = *((_QWORD *)EntryInfo + 3) >> 35;
      v10 = *((_DWORD *)EntryInfo + 6);
      *((_QWORD *)EntryInfo + 3) = v8;
      v5 = v7 & 7;
      v4 = v9 & 0x7FFFF;
      *((_QWORD *)EntryInfo + 3) = v8 ^ (*((_DWORD *)part + 6) ^ v10) & 0xE000;
      v2 = *((_QWORD *)part + 3);
      v3 = v2;
    }
    if ( ((v2 >> 35) & 0x7FFFF) != 0x7FFFF )
    {
      v11 = XPak_GetEntryInfo((StreamItemType)((v2 >> 13) & 7), (v2 >> 35) & 0x7FFFF);
      if ( (*((_DWORD *)v11 + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1777, ASSERT_TYPE_ASSERT, "(rightPart->valid)", (const char *)&queryFormat, "rightPart->valid") )
        __debugbreak();
      v12 = *((_QWORD *)part + 3);
      if ( (v12 & 0x7FFFF0000i64) != 0x7FFFF0000i64 )
      {
        if ( v5 != (((unsigned __int64)*((unsigned int *)v11 + 6) >> 10) & 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1780, ASSERT_TYPE_ASSERT, "(oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType ))", (const char *)&queryFormat, "oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType )") )
          __debugbreak();
        if ( v4 != ((*((_QWORD *)v11 + 3) >> 16) & 0x7FFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1781, ASSERT_TYPE_ASSERT, "(oldRight == rightPart->adjacentLeft)", (const char *)&queryFormat, "oldRight == rightPart->adjacentLeft") )
          __debugbreak();
        v12 = *((_QWORD *)part + 3);
      }
      *((_QWORD *)v11 + 3) ^= (v12 ^ *((_QWORD *)v11 + 3)) & 0x7FFFF0000i64;
      *((_QWORD *)v11 + 3) ^= (*((_DWORD *)part + 6) ^ (unsigned int)*((_QWORD *)v11 + 3)) & 0x1C00;
      v3 = *((_QWORD *)part + 3);
    }
    *((_QWORD *)part + 3) = v3 | 0x3FFFFFFFFF0000i64;
  }
}

/*
==============
XPak_ComputeFileBlockID
==============
*/
__int64 XPak_ComputeFileBlockID(unsigned int xpakIndex, unsigned __int64 xpakOffset)
{
  __int64 v3; 
  __int64 *p_fileSize; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v9; 

  v3 = 0i64;
  if ( xpakIndex )
  {
    p_fileSize = &s_loadedPackFiles[0].fileSize;
    do
    {
      if ( *((_DWORD *)p_fileSize + 2) )
      {
        v6 = *p_fileSize;
        if ( *p_fileSize <= 0 )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1125, ASSERT_TYPE_ASSERT, "( fileSize > 0 )", "Invalid file size (%zd) for XPak %d '%s'", v6, v9, s_loadedPackFiles[v3].name) )
            __debugbreak();
        }
        xpakOffset += v6;
      }
      v3 = (unsigned int)(v3 + 1);
      p_fileSize += 20;
    }
    while ( (unsigned int)v3 < xpakIndex );
  }
  v7 = xpakOffset >> 20;
  if ( v7 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v7, "unsigned", v7) )
    __debugbreak();
  return (unsigned int)v7;
}

/*
==============
XPak_CurrentIndexEntry
==============
*/
bool XPak_CurrentIndexEntry(XPakWorkContext *work, XPakIndexEntry *entry)
{
  __int64 currentEntry; 
  bool result; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 

  if ( !work->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1018, ASSERT_TYPE_ASSERT, "(work->pak)", (const char *)&queryFormat, "work->pak") )
    __debugbreak();
  entry->key = -1i64;
  currentEntry = work->currentEntry;
  if ( currentEntry == work->pak->index.itemCount )
    return 0;
  if ( currentEntry >= work->pak->index.itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1025, ASSERT_TYPE_ASSERT, "(work->currentEntry < work->pak->index.itemCount)", (const char *)&queryFormat, "work->currentEntry < work->pak->index.itemCount") )
    __debugbreak();
  XPak_WaitReadIndexData(work, work->activeBuffer);
  v6 = work->indexBufferOffset[work->activeBuffer] / 0x18ui64;
  if ( work->currentEntry >= v6 + 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1030, ASSERT_TYPE_ASSERT, "(work->currentEntry < bufferEntryOffset + ( ( ( 96 * 1024 ) ) / sizeof( XPakIndexEntry ) ))", (const char *)&queryFormat, "work->currentEntry < bufferEntryOffset + XPAK_INDEX_BUFFER_ENTRY_COUNT") )
    __debugbreak();
  v7 = work->currentEntry + ((__int64)work->activeBuffer << 12) - v6;
  *(_OWORD *)&entry->key = *(_OWORD *)&work->indexBuffer[0][v7].key;
  result = 1;
  entry->size = work->indexBuffer[0][v7].size;
  return result;
}

/*
==============
XPak_EndIndexRead
==============
*/
void XPak_EndIndexRead(XPakWorkContext *work)
{
  int v2; 
  __int64 *indexBufferOffset; 
  int *indexBufferState; 
  XPakIndexEntry (*indexBuffer)[4096]; 
  __int64 v6; 
  __int64 v7; 

  if ( !work->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1064, ASSERT_TYPE_ASSERT, "(work->pak)", (const char *)&queryFormat, "work->pak") )
    __debugbreak();
  v2 = 0;
  indexBufferOffset = work->indexBufferOffset;
  indexBufferState = work->indexBufferState;
  indexBuffer = work->indexBuffer;
  do
  {
    if ( *indexBufferState == 1 )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 973, ASSERT_TYPE_ASSERT, "(unsigned)( buffer ) < (unsigned)( 2 )", "buffer doesn't index XPAK_INDEX_BUFFER_COUNT\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( !*indexBufferState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 974, ASSERT_TYPE_ASSERT, "(work->indexBufferState[buffer] != 0)", (const char *)&queryFormat, "work->indexBufferState[buffer] != XPAK_INDEX_BUFFER_EMPTY") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFF808080, "XPak_WaitReadIndexData: IO wait");
      while ( *indexBufferState == 1 )
      {
        Sys_CheckQuitRequest();
        Sys_Sleep(1);
      }
      Sys_ProfEndNamedEvent();
      if ( *indexBufferState == 3 )
      {
        Com_PrintError(36, "Error while reading xpak %s index data, offset %ld\n", work->pak->name, *indexBufferOffset);
        memset_0(indexBuffer, 255, sizeof(XPakIndexEntry[4096]));
      }
    }
    ++v2;
    ++indexBuffer;
    ++indexBufferState;
    ++indexBufferOffset;
  }
  while ( v2 < 2 );
  work->pak = NULL;
}

/*
==============
XPak_EndUsingWorkData
==============
*/
void XPak_EndUsingWorkData(void)
{
  unsigned __int8 *v0; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 917, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v0 = (unsigned __int8 *)s_xpakWorkData;
  if ( !s_xpakWorkData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 918, ASSERT_TYPE_ASSERT, "(s_xpakWorkData)", (const char *)&queryFormat, "s_xpakWorkData") )
      __debugbreak();
    v0 = (unsigned __int8 *)s_xpakWorkData;
  }
  inoutPageRange = s_xpakWorkDataPageRange;
  Mem_Paged_DecommitMemoryPartial(&result, v0, v0 + 10092544, v0, &inoutPageRange);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_xpakWorkDataPageRange = MEM_PAGE_RANGE_INVALID_6;
  if ( --s_xpakWorkDataInUse )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 926, ASSERT_TYPE_ASSERT, "(s_xpakWorkDataInUse == 0)", (const char *)&queryFormat, "s_xpakWorkDataInUse == 0") )
      __debugbreak();
  }
}

/*
==============
XPak_FindMultiVolumePackIndexByName
==============
*/
__int64 XPak_FindMultiVolumePackIndexByName(const char *name)
{
  unsigned int v2; 
  int *i; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v2 = 0;
  for ( i = &s_loadedMultiVolumePackFiles[0].refCount; *i <= 0; i += 25 )
  {
LABEL_19:
    if ( ++v2 >= 0x20 )
      return 32i64;
  }
  v4 = 0x7FFFFFFFi64;
  v5 = (int)v2;
  v6 = name;
  if ( !&s_loadedMultiVolumePackFiles[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = v5 * 100 - (_QWORD)name;
  do
  {
    v8 = (unsigned __int8)v6[(_QWORD)s_loadedMultiVolumePackFiles + v7];
    v9 = v4;
    v10 = *(unsigned __int8 *)v6++;
    --v4;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
        goto LABEL_19;
    }
  }
  while ( v8 );
  return v2;
}

/*
==============
XPak_FindPackIndexByName
==============
*/
__int64 XPak_FindPackIndexByName(const char *name)
{
  unsigned int v2; 
  int *i; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v2 = 0;
  for ( i = &s_loadedPackFiles[0].refCount; *i <= 0; i += 40 )
  {
LABEL_19:
    if ( ++v2 >= 0x100 )
      return 256i64;
  }
  v4 = 0x7FFFFFFFi64;
  v5 = name;
  v6 = (int)v2;
  if ( !&s_loadedPackFiles[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = v6 * 160 - (_QWORD)name;
  do
  {
    v8 = (unsigned __int8)v5[(_QWORD)s_loadedPackFiles + v7];
    v9 = v4;
    v10 = *(unsigned __int8 *)v5++;
    --v4;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
        goto LABEL_19;
    }
  }
  while ( v8 );
  return v2;
}

/*
==============
XPak_GetCurrentWorkDataCommitSize
==============
*/
unsigned __int64 XPak_GetCurrentWorkDataCommitSize()
{
  unsigned __int64 result; 

  result = 0i64;
  if ( s_xpakWorkDataPageRange.firstPageID != -1 )
    return 10092544i64;
  return result;
}

/*
==============
XPak_GetEntryInfo
==============
*/
GfxImageStreamData *XPak_GetEntryInfo(StreamItemType type, unsigned int itemPartIndex)
{
  int v3; 
  int v4; 
  int v6; 

  v3 = (unsigned __int8)type;
  if ( type == STREAM_ITEM_IMAGE )
    return &DB_GetGfxImageAtIndex(itemPartIndex >> 2)->streams[itemPartIndex & 3];
  v4 = (unsigned __int8)type - 1;
  if ( !v4 )
    return (GfxImageStreamData *)&DB_GetXModelSurfsAtIndex(itemPartIndex)->xpakEntry;
  if ( v4 == 1 )
    return (GfxImageStreamData *)&DB_GetStreamKeyAtIndex(itemPartIndex)->xpakInfo;
  v6 = v3;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1096, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported StreamItemType %d", v6) )
    __debugbreak();
  return 0i64;
}

/*
==============
XPak_GetItemName
==============
*/
const char *XPak_GetItemName(StreamItemType type, unsigned int partIndex)
{
  int v2; 
  int v3; 
  int v5; 

  v2 = (unsigned __int8)type;
  if ( type == STREAM_ITEM_IMAGE )
    return DB_GetGfxImageAtIndex(partIndex >> 2)->name;
  v3 = (unsigned __int8)type - 1;
  if ( !v3 )
    return DB_GetXModelSurfsAtIndex(partIndex)->name;
  if ( v3 == 1 )
    return DB_GetStreamKeyAtIndex(partIndex)->name;
  v5 = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1311, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XPak_GetItemName(): Invalid item type %d.", v5) )
    __debugbreak();
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
XPak_IndexEntries
==============
*/
void XPak_IndexEntries(XPakWorkData *inOutWorkData, const unsigned int itemPartCount)
{
  int v2; 
  int *p_refCount; 
  unsigned int v4; 
  unsigned int v6; 
  __int64 size; 
  unsigned int *p_entryInfoLow; 
  unsigned __int64 key; 
  __int64 v10; 
  unsigned __int64 v11; 
  const XPakLoadedPackFile *pak; 
  __int64 currentEntry; 
  __int64 v14; 
  int v15; 
  int *indexBufferState; 
  XPakIndexEntry entry; 
  int v18; 
  int *v20; 
  __int64 v21; 

  v2 = 255;
  p_refCount = &s_loadedPackFiles[255].refCount;
  v18 = 255;
  v20 = &s_loadedPackFiles[255].refCount;
  v4 = itemPartCount;
  do
  {
    if ( *p_refCount )
    {
      XPak_BeginIndexRead(inOutWorkData, (const XPakLoadedPackFile *)(p_refCount - 38));
      XPak_CurrentIndexEntry(inOutWorkData, &entry);
      v6 = 0;
      if ( v4 )
      {
        size = entry.size;
        p_entryInfoLow = &inOutWorkData->items[0].entryInfoLow;
        key = entry.key;
        while ( 1 )
        {
          if ( !*p_entryInfoLow && !p_entryInfoLow[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
            __debugbreak();
          v10 = *(_QWORD *)p_entryInfoLow;
          v21 = *(_QWORD *)p_entryInfoLow;
          if ( !*(_QWORD *)p_entryInfoLow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1286, ASSERT_TYPE_ASSERT, "(streamedPart)", (const char *)&queryFormat, "streamedPart") )
            __debugbreak();
          if ( (*(_DWORD *)(v10 + 24) & 0x200i64) == 0 )
          {
            v11 = *(_QWORD *)v10;
            if ( *(_QWORD *)v10 > key )
            {
              do
              {
                if ( !inOutWorkData->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1039, ASSERT_TYPE_ASSERT, "(work->pak)", (const char *)&queryFormat, "work->pak") )
                  __debugbreak();
                pak = inOutWorkData->pak;
                key = -1i64;
                currentEntry = inOutWorkData->currentEntry;
                entry.key = -1i64;
                if ( currentEntry != pak->index.itemCount )
                {
                  inOutWorkData->currentEntry = currentEntry + 1;
                  if ( (((_DWORD)currentEntry + 1) & 0xFFF) == 0 )
                  {
                    inOutWorkData->indexBufferState[inOutWorkData->activeBuffer] = 0;
                    XPak_ReadIndexData(inOutWorkData, inOutWorkData->activeBuffer);
                    if ( ++inOutWorkData->activeBuffer == 2 )
                      inOutWorkData->activeBuffer = 0;
                  }
                  XPak_CurrentIndexEntry(inOutWorkData, &entry);
                  key = entry.key;
                }
              }
              while ( v11 > key );
              v10 = v21;
              p_refCount = v20;
              size = entry.size;
            }
            if ( key == -1i64 )
            {
LABEL_31:
              v2 = v18;
              break;
            }
            if ( v11 >= key )
            {
              if ( v11 != key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1253, ASSERT_TYPE_ASSERT, "(itemKey == inOutIndexEntry.key)", (const char *)&queryFormat, "itemKey == inOutIndexEntry.key") )
                __debugbreak();
              *(_BYTE *)(v10 + 24) = v18;
              *(_QWORD *)(v10 + 16) = size & 0x7FFFFFFFFFFFFFFFi64;
              v14 = entry.offset + *((_QWORD *)p_refCount - 10);
              *(_QWORD *)(v10 + 24) &= ~0x100ui64;
              *(_QWORD *)(v10 + 8) = v14;
              *(_QWORD *)(v10 + 24) |= ((size >> 63) & 1 | 2) << 8;
            }
          }
          ++v6;
          p_entryInfoLow += 4;
          if ( v6 >= itemPartCount )
            goto LABEL_31;
        }
      }
      if ( !inOutWorkData->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1064, ASSERT_TYPE_ASSERT, "(work->pak)", (const char *)&queryFormat, "work->pak") )
        __debugbreak();
      v15 = 0;
      indexBufferState = inOutWorkData->indexBufferState;
      do
      {
        if ( *indexBufferState == 1 )
          XPak_WaitReadIndexData(inOutWorkData, v15);
        ++v15;
        ++indexBufferState;
      }
      while ( v15 < 2 );
      v4 = itemPartCount;
      inOutWorkData->pak = NULL;
    }
    --v2;
    p_refCount -= 40;
    v18 = v2;
    v20 = p_refCount;
  }
  while ( v2 >= 0 );
}

/*
==============
XPak_IndexReadCallback
==============
*/
void XPak_IndexReadCallback(FileStreamRequestID id, int result, __int64 numBytesRead, void *user)
{
  *(_DWORD *)user = (result != 8) + 2;
}

/*
==============
XPak_IndexToFileID
==============
*/
__int64 XPak_IndexToFileID(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XPAK_MAX_LOADED_PACKFILES )", "index doesn't index XPAK_MAX_LOADED_PACKFILES\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  if ( s_loadedPackFiles[v1].refCount <= 0 )
    return 4278190079i64;
  else
    return *(unsigned int *)s_loadedPackFiles[v1].fh;
}

/*
==============
XPak_IndexToFileSize
==============
*/
__int64 XPak_IndexToFileSize(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XPAK_MAX_LOADED_PACKFILES )", "index doesn't index XPAK_MAX_LOADED_PACKFILES\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  if ( s_loadedPackFiles[v1].refCount <= 0 )
    return 0i64;
  else
    return s_loadedPackFiles[v1].fileSize;
}

/*
==============
XPak_IndexToName
==============
*/
XPakLoadedPackFile *XPak_IndexToName(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XPAK_MAX_LOADED_PACKFILES )", "index doesn't index XPAK_MAX_LOADED_PACKFILES\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  if ( s_loadedPackFiles[v1].refCount <= 0 )
    return (XPakLoadedPackFile *)"XPAK NOT LOADED";
  else
    return &s_loadedPackFiles[v1];
}

/*
==============
XPak_Init
==============
*/
void XPak_Init(void)
{
  if ( s_xpakWorkData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 873, ASSERT_TYPE_ASSERT, "(s_xpakWorkData == nullptr)", (const char *)&queryFormat, "s_xpakWorkData == nullptr") )
    __debugbreak();
  if ( s_xpakWorkDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 874, ASSERT_TYPE_ASSERT, "(s_xpakWorkDataInUse == 0)", (const char *)&queryFormat, "s_xpakWorkDataInUse == 0") )
    __debugbreak();
  s_xpakWorkData = (XPakWorkData *)Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, 0x9A0000ui64, "XPakWorkData");
}

/*
==============
XPak_InvalidateItems
==============
*/
void XPak_InvalidateItems(void)
{
  unsigned int v0; 
  __int64 *p_size; 
  const DB_AssetEntryFlags *AssetEntryUsedFlagsIncludingStashed; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int64 *v6; 
  InvalidateItemFunctor functor; 
  __int64 *v8; 

  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_InvalidateItems");
  DB_LockHashRead();
  v0 = 0;
  p_size = &s_loadedPackFiles[0].data.size;
  v8 = &s_loadedPackFiles[0].data.size;
  do
  {
    if ( !*((_DWORD *)p_size + 18) && *p_size )
    {
      functor.xpakIndex = v0;
      AssetEntryUsedFlagsIncludingStashed = DB_GetAssetEntryUsedFlagsIncludingStashed();
      AssetEntryPool = DB_GetAssetEntryPool();
      v4 = 0;
      v5 = 0;
      v6 = (unsigned __int64 *)AssetEntryUsedFlagsIncludingStashed;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<InvalidateItemFunctor>(AssetEntryPool, AssetEntryUsedFlagsIncludingStashed, *v6, v4, &functor);
        v4 += 64;
        ++v5;
        ++v6;
      }
      while ( v5 < 0x1768 );
      p_size = v8;
    }
    ++v0;
    p_size += 20;
    v8 = p_size;
  }
  while ( v0 < 0x100 );
  DB_UnlockHashRead();
  Sys_ProfEndNamedEvent();
}

/*
==============
XPak_MarkEntryInfoAsStale
==============
*/
void XPak_MarkEntryInfoAsStale(void)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 273, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  s_xpakEntryInfoStale = 1;
}

/*
==============
XPak_NextIndexEntry
==============
*/
bool XPak_NextIndexEntry(XPakWorkContext *work, XPakIndexEntry *entry)
{
  __int64 currentEntry; 

  if ( !work->pak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1039, ASSERT_TYPE_ASSERT, "(work->pak)", (const char *)&queryFormat, "work->pak") )
    __debugbreak();
  entry->key = -1i64;
  currentEntry = work->currentEntry;
  if ( currentEntry == work->pak->index.itemCount )
    return 0;
  work->currentEntry = currentEntry + 1;
  if ( (((_DWORD)currentEntry + 1) & 0xFFF) == 0 )
  {
    work->indexBufferState[work->activeBuffer] = 0;
    XPak_ReadIndexData(work, work->activeBuffer);
    if ( ++work->activeBuffer == 2 )
      work->activeBuffer = 0;
  }
  return XPak_CurrentIndexEntry(work, entry);
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/
void XPak_PatchAdjacencyInfo(GfxImage *image, unsigned int imageIndex)
{
  unsigned int streamedPartCount; 
  XPakEntryInfo *p_part; 
  __int64 v6; 
  GfxImageStreamData *streams; 
  __m256i xpakEntry; 
  unsigned int v9; 
  XPakEntryInfo *v10; 
  unsigned int v11; 
  XPakEntryInfo part; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1864, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1865, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  XPak_CheckAdjacencyInfo(image);
  streamedPartCount = image->streamedPartCount;
  if ( image->streamedPartCount )
  {
    p_part = &part;
    v6 = image->streamedPartCount;
    streams = image->streams;
    do
    {
      ++p_part;
      xpakEntry = (__m256i)streams->xpakEntry;
      ++streams;
      p_part[-1] = (XPakEntryInfo)xpakEntry;
      --v6;
    }
    while ( v6 );
  }
  v9 = 0;
  if ( streamedPartCount )
  {
    v10 = &part;
    v11 = 4 * imageIndex;
    do
      XPak_PatchAdjacencyInfoForEntry(v10++, v11 + v9++);
    while ( v9 < streamedPartCount );
  }
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/
void XPak_PatchAdjacencyInfo(StreamKey *key, unsigned int keyIndex)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1891, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  XPak_PatchAdjacencyInfoForEntry(&key->xpakInfo, keyIndex);
}

/*
==============
XPak_PatchAdjacencyInfo
==============
*/
void XPak_PatchAdjacencyInfo(XModelSurfs *mesh, unsigned int partIndex)
{
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1885, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  XPak_PatchAdjacencyInfoForEntry(&mesh->xpakEntry, partIndex);
}

/*
==============
XPak_PatchAdjacencyInfoForEntry
==============
*/
void XPak_PatchAdjacencyInfoForEntry(const XPakEntryInfo *part, unsigned int itemPartIndex)
{
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  char v6; 
  XPakEntryInfo *EntryInfo; 
  unsigned __int64 v8; 
  XPakEntryInfo *v9; 

  v3 = itemPartIndex;
  v4 = *((_QWORD *)part + 3);
  if ( (v4 & 0x200) != 0 )
  {
    v5 = 0i64;
    v6 = 3;
    if ( ((v4 >> 16) & 0x7FFFF) != 0x7FFFF )
    {
      EntryInfo = XPak_GetEntryInfo((StreamItemType)((v4 >> 10) & 7), (v4 >> 16) & 0x7FFFF);
      if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1808, ASSERT_TYPE_ASSERT, "(leftPart->valid)", (const char *)&queryFormat, "leftPart->valid") )
        __debugbreak();
      v8 = *((_QWORD *)EntryInfo + 3);
      v6 = (v8 >> 13) & 7;
      v5 = (v8 >> 35) & 0x7FFFF;
      *((_QWORD *)EntryInfo + 3) = v8 ^ (v8 ^ (v3 << 35)) & 0x3FFFF800000000i64;
      v4 = *((_QWORD *)part + 3);
    }
    if ( ((v4 >> 35) & 0x7FFFF) != 0x7FFFF )
    {
      v9 = XPak_GetEntryInfo((StreamItemType)((v4 >> 13) & 7), (v4 >> 35) & 0x7FFFF);
      if ( (*((_DWORD *)v9 + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1821, ASSERT_TYPE_ASSERT, "(rightPart->valid)", (const char *)&queryFormat, "rightPart->valid") )
        __debugbreak();
      if ( (*((_QWORD *)part + 3) & 0x7FFFF0000i64) != 0x7FFFF0000i64 )
      {
        if ( v6 != (((unsigned __int64)*((unsigned int *)v9 + 6) >> 10) & 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1824, ASSERT_TYPE_ASSERT, "(oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType ))", (const char *)&queryFormat, "oldRightType == static_cast<StreamItemType>( rightPart->adjacentLeftType )") )
          __debugbreak();
        if ( v5 != ((*((_QWORD *)v9 + 3) >> 16) & 0x7FFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1825, ASSERT_TYPE_ASSERT, "(oldRight == rightPart->adjacentLeft)", (const char *)&queryFormat, "oldRight == rightPart->adjacentLeft") )
          __debugbreak();
      }
      *((_QWORD *)v9 + 3) &= 0xFFFFFFF80000FFFFui64;
      *((_QWORD *)v9 + 3) |= (unsigned __int64)(v3 & 0x7FFFF) << 16;
    }
  }
}

/*
==============
XPak_PrintEntries
==============
*/
void XPak_PrintEntries(const XPakLoadedPackFile *const pak)
{
  signed __int64 v2; 
  char *v3; 
  char *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 i; 
  __int64 v8; 
  __int64 v11; 
  __int64 v12; 
  char v13[2048]; 

  v2 = (pak->meta.size + 4095) & 0xFFFFFFFFFFFFF000ui64;
  v3 = (char *)Mem_Virtual_TryAlloc(v2, "XPak_PrintEntries", TRACK_DEBUG);
  v4 = v3;
  if ( v3 )
  {
    if ( ((unsigned __int16)v3 & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1422, ASSERT_TYPE_ASSERT, "(IsAligned( readBuffer, 4096 ))", (const char *)&queryFormat, "IsAligned( readBuffer, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    Com_Printf(36, "Meta Entries:\n");
    FileStream_Easy_SeekSet((FileStreamFileID)*(_DWORD *)pak->fh, pak->meta.offset);
    v5 = FileStream_Easy_Read((FileStreamFileID)*(_DWORD *)pak->fh, v4, v2, NULL, FILE_STREAM_TRACK_XPAK);
    if ( v5 != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1427, ASSERT_TYPE_ASSERT, "( bytesRead ) == ( metaSectionReadSize )", "%s == %s\n\t%lli, %lli", "bytesRead", "metaSectionReadSize", v5, v2) )
      __debugbreak();
    v6 = 0i64;
    for ( i = 0i64; i < pak->meta.itemCount; ++i )
    {
      v8 = v6 + 16;
      if ( v6 + 16 > v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1431, ASSERT_TYPE_ASSERT, "( readBufferOffset + metaEntrySize ) <= ( metaSectionReadSize )", "%s <= %s\n\t%lli, %lli", "readBufferOffset + metaEntrySize", "metaSectionReadSize", v6 + 16, v2) )
        __debugbreak();
      _XMM0 = *(_OWORD *)&v4[v6];
      __asm { vpextrd rbp, xmm0, 2 }
      v11 = v6 + 16;
      if ( v8 + (unsigned int)_RBP > v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1434, ASSERT_TYPE_ASSERT, "( readBufferOffset + metaEntry.size ) <= ( metaSectionReadSize )", "%s <= %s\n\t%lli, %lli", "readBufferOffset + metaEntry.size", "metaSectionReadSize", v8 + (unsigned int)_RBP, v2) )
        __debugbreak();
      memcpy_0(v13, &v4[v8], (unsigned int)_RBP);
      v12 = 2047i64;
      v6 = (unsigned int)_RBP + v11;
      if ( (unsigned int)_RBP < 0x7FF )
        v12 = (unsigned int)_RBP;
      v13[v12] = 0;
      Com_Printf(36, "Meta Entry key %zu %s\n", (size_t)_XMM0, v13);
    }
    if ( v6 != pak->meta.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1441, ASSERT_TYPE_ASSERT, "( readBufferOffset ) == ( pak->meta.size )", "%s == %s\n\t%lli, %lli", "readBufferOffset", "pak->meta.size", v6, pak->meta.size) )
      __debugbreak();
    Mem_Virtual_Free(v4);
  }
  else
  {
    Com_PrintError(35, "XPak_PrintEntries(): Failed to allocate read buffer memory\n");
  }
}

/*
==============
XPak_PrintLoadedPackFiles
==============
*/
void XPak_PrintLoadedPackFiles(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  XPakLoadedPackFile *v3; 
  __int64 v4; 
  __int64 refCount; 
  __int64 v6; 
  XPakLoadedMultiVolumePackFile *v7; 
  __int64 v8; 
  __int64 v9; 

  v0 = 0i64;
  v1 = 0i64;
  Com_Printf(36, "Slot RefCount Name\n-----------------------------\n");
  v2 = 0i64;
  v3 = s_loadedPackFiles;
  v4 = 256i64;
  do
  {
    refCount = (unsigned int)v3->refCount;
    if ( (_DWORD)refCount )
    {
      ++v1;
      Com_Printf(36, "%-5zu%-9d%s\n", v2, refCount, v3->name);
    }
    ++v2;
    ++v3;
    --v4;
  }
  while ( v4 );
  Com_Printf(36, "-----------------------------\n  %zu/%zu slots used\n", v1, 0x100ui64);
  Com_Printf(36, "Multivolume Pak Slot RefCount Name\n-----------------------------\n");
  v6 = 0i64;
  v7 = s_loadedMultiVolumePackFiles;
  v8 = 32i64;
  do
  {
    v9 = (unsigned int)v7->refCount;
    if ( (_DWORD)v9 )
    {
      ++v0;
      Com_Printf(36, "%-5zu%-9d%s\n", v6, v9, v7->name);
    }
    ++v6;
    ++v7;
    --v8;
  }
  while ( v8 );
  Com_Printf(36, "-----------------------------\n  %zu/%zu slots used\n", v0, 0x20ui64);
}

/*
==============
XPak_ReadIndexData
==============
*/
void XPak_ReadIndexData(XPakWorkContext *work, int buffer)
{
  __int64 v2; 
  __int64 v4; 
  int *v5; 
  __int64 v6; 
  int v7; 
  signed int v8; 
  XPakIndexEntry *v9; 

  v2 = buffer;
  if ( (unsigned int)buffer >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 946, ASSERT_TYPE_ASSERT, "(unsigned)( buffer ) < (unsigned)( 2 )", "buffer doesn't index XPAK_INDEX_BUFFER_COUNT\n\t%i not in [0, %i)", buffer, 2) )
    __debugbreak();
  v4 = v2;
  v5 = &work->indexBufferState[v2];
  if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 947, ASSERT_TYPE_ASSERT, "(work->indexBufferState[buffer] == 0)", (const char *)&queryFormat, "work->indexBufferState[buffer] == XPAK_INDEX_BUFFER_EMPTY") )
    __debugbreak();
  v6 = work->pak->index.size - work->indexReadOffset;
  if ( (unsigned __int64)(v6 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v6, "signed", work->pak->index.size - work->indexReadOffset) )
    __debugbreak();
  v7 = 98304;
  if ( (int)v6 < 98304 )
    v7 = v6;
  v8 = (v7 + 0x7FFF) & 0xFFFF8000;
  if ( v8 )
  {
    work->indexBufferOffset[v4] = work->indexReadOffset;
    *v5 = 1;
    Sys_ProfBeginNamedEvent(0xFF808080, "XPak_ReadIndexData: IO wait");
    v9 = work->indexBuffer[v4];
    while ( !FileStream_AddRequest((FileStreamFileID)*(_DWORD *)work->pak->fh, work->indexReadOffset + work->pak->index.offset, v8, v9, 0, FLAT_TIRE, XPak_IndexReadCallback, v5, NULL, FILE_STREAM_TRACK_XPAK) )
      Sys_Sleep(0);
    Sys_ProfEndNamedEvent();
    work->indexReadOffset += v8;
  }
}

/*
==============
XPak_RemovePackFile
==============
*/
__int64 XPak_RemovePackFile(const char *name)
{
  int PackIndexByName; 
  int MultiVolumePackIndexByName; 
  unsigned int refCount; 
  XPakLoadedMultiVolumePackFile *v5; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v11; 
  __int64 v12; 

  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_RemovePackFile");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 608, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  PackIndexByName = XPak_FindPackIndexByName(name);
  MultiVolumePackIndexByName = XPak_FindMultiVolumePackIndexByName(name);
  if ( PackIndexByName == 256 )
  {
    if ( MultiVolumePackIndexByName == 32 )
    {
      Com_Printf(36, "XPak_RemovePackFile: xpak or multixpak file not found: %s\n", name);
      refCount = -1;
    }
    else
    {
      v5 = &s_loadedMultiVolumePackFiles[MultiVolumePackIndexByName];
      if ( v5->refCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 626, ASSERT_TYPE_ASSERT, "(mvpak->refCount > 0)", (const char *)&queryFormat, "mvpak->refCount > 0") )
        __debugbreak();
      if ( v5->refCount-- == 1 )
      {
        LODWORD(v7) = 0;
        v8 = v5->loadedPaks.array[0];
        while ( v8 )
        {
LABEL_15:
          v9 = __lzcnt(v8);
          if ( v9 >= 0x20 )
          {
            LODWORD(v12) = 32;
            LODWORD(v11) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
              __debugbreak();
          }
          if ( (v8 & (0x80000000 >> v9)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v8 &= ~(0x80000000 >> v9);
          XPak_RemovePackFileInternal(s_loadedPackFiles[32 * (_DWORD)v7 + v9].name);
        }
        while ( 1 )
        {
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= 8 )
            break;
          v8 = v5->loadedPaks.array[v7];
          if ( v8 )
            goto LABEL_15;
        }
        Com_Printf(36, "XPak_RemovePackFile: Removed multivolume xpak file: %s\n", v5->name);
        refCount = v5->refCount;
      }
      else
      {
        Com_Printf(36, "XPak_RemovePackFile (multivolume): %s (ref: %d)\n", name, (unsigned int)v5->refCount);
        refCount = v5->refCount;
      }
    }
  }
  else
  {
    refCount = XPak_RemovePackFileInternal(name);
  }
  Sys_ProfEndNamedEvent();
  return refCount;
}

/*
==============
XPak_RemovePackFileInternal
==============
*/
__int64 XPak_RemovePackFileInternal(const char *name)
{
  int PackIndexByName; 
  __int64 v3; 
  unsigned int refCount; 
  XPakLoadedPackFile *v5; 

  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_RemovePackFileInternal");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 569, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  PackIndexByName = XPak_FindPackIndexByName(name);
  v3 = PackIndexByName;
  if ( PackIndexByName == 256 )
  {
    Com_Printf(36, "XPak_RemovePackFile: xpak file not found: %s\n", name);
    refCount = -1;
  }
  else
  {
    v5 = &s_loadedPackFiles[PackIndexByName];
    if ( v5->refCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 579, ASSERT_TYPE_ASSERT, "(pak->refCount > 0)", (const char *)&queryFormat, "pak->refCount > 0") )
      __debugbreak();
    if ( v5->refCount-- == 1 )
    {
      Stream_Debug_RemoveFromHeatMap(v3);
      FileStream_CloseFile((FileStreamFileID)*(_DWORD *)v5->fh);
      *(_DWORD *)v5->fh = -16777217;
      Com_Printf(36, "XPak_RemovePackFile: Removed xpak file: %s\n", s_loadedPackFiles[v3].name);
      s_xpakEntryInfoStale = 1;
    }
    else
    {
      Com_Printf(36, "XPak_RemovePackFile: %s (ref: %d)\n", name, (unsigned int)v5->refCount);
    }
    refCount = v5->refCount;
  }
  Sys_ProfEndNamedEvent();
  return refCount;
}

/*
==============
XPak_RemovePackFilesForZone
==============
*/
void XPak_RemovePackFilesForZone(const char *zoneName)
{
  char *v2; 
  const char *v3; 
  char *v4; 
  char *v5; 
  char v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  char v10; 
  int CurrentLanguage; 
  const char *LanguageCode; 
  const char *CurrentRegionCode; 
  XHash v14; 
  bool v15; 
  bool v16; 
  char v17; 
  unsigned int xpakIndex; 
  const char *p_size; 
  const DB_AssetEntryFlags *AssetEntryUsedFlagsIncludingStashed; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned __int64 *v24; 
  char *str; 
  XHash xhash_8; 
  InvalidateItemFunctor functor[2]; 
  __int64 v28; 
  char dest[64]; 
  char v30[128]; 

  v28 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_RemovePackFilesForZone");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 739, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = strchr_0(zoneName, 47);
  v3 = v2 + 1;
  if ( !v2 )
    v3 = zoneName;
  Core_strcpy(dest, 0x40ui64, v3);
  v4 = strchr_0(dest, 33);
  if ( v4 )
    *v4 = 0;
  xhash_8.name = NULL;
  xhash_8.hashPacked = 0i64;
  v5 = dest;
  v6 = dest[0];
  if ( dest[0] )
  {
    v7 = 0xCBF29CE484222325ui64;
    do
    {
      v8 = v6;
      if ( (unsigned __int8)(v6 - 65) <= 0x19u )
        v8 = v6 + 32;
      v7 = (0x100000001B3i64 * (v8 ^ (unsigned __int64)v7)) & 0x7FFFFFFFFFFFFFFFi64;
      v6 = *++v5;
    }
    while ( *v5 );
    v9 = v7 & 0x7FFFFFFFFFFFFFFFi64;
  }
  else
  {
    v9 = 0i64;
  }
  xhash_8.hashPacked = v9;
  DB_SetHashDebugName(&xhash_8, dest, 1);
  v10 = 0;
  if ( DB_IsLoadingDebugZone() )
  {
    Com_Printf(36, "XPak_RemovePackFilesForZone: remove debug zone %s as %s\n", zoneName, dest);
    XPak_RemovePackFile(dest);
  }
  else
  {
    CurrentLanguage = SEH_GetCurrentLanguage();
    LanguageCode = SEH_GetLanguageCode(CurrentLanguage);
    CurrentRegionCode = RG_GetCurrentRegionCode();
    str = NULL;
    v14 = xhash_8;
    if ( KeyValuePairs_GetNextValue("xpak_read", &xhash_8, (const char **)&str) )
    {
      do
      {
        v15 = I_StartsWith(str, LanguageCode);
        v16 = I_StartsWith(str, CurrentRegionCode);
        if ( !v15 && !v16 )
        {
          Com_sprintf<128>((char (*)[128])v30, "%s_%s", LanguageCode, str);
          v17 = v10;
          if ( !(unsigned int)XPak_RemovePackFile(v30) )
            v17 = 1;
          Com_sprintf<128>((char (*)[128])v30, "%s_%s", CurrentRegionCode, str);
          v10 = v17;
          if ( !(unsigned int)XPak_RemovePackFile(v30) )
            v10 = 1;
        }
        if ( !(unsigned int)XPak_RemovePackFile(str) )
          v10 = 1;
        xhash_8 = v14;
      }
      while ( KeyValuePairs_GetNextValue("xpak_read", &xhash_8, (const char **)&str) );
      if ( v10 )
      {
        Sys_ProfBeginNamedEvent(0xFF808080, "XPak_InvalidateItems");
        DB_LockHashRead();
        xpakIndex = 0;
        functor[0].xpakIndex = 0;
        p_size = (const char *)&s_loadedPackFiles[0].data.size;
        xhash_8.name = (const char *)&s_loadedPackFiles[0].data.size;
        do
        {
          if ( !*((_DWORD *)p_size + 18) && *(_QWORD *)p_size )
          {
            functor[1].xpakIndex = xpakIndex;
            AssetEntryUsedFlagsIncludingStashed = DB_GetAssetEntryUsedFlagsIncludingStashed();
            AssetEntryPool = DB_GetAssetEntryPool();
            v22 = 0;
            v23 = 0;
            v24 = (unsigned __int64 *)AssetEntryUsedFlagsIncludingStashed;
            do
            {
              DB_AssetEntryPool::ForEachInBlock<InvalidateItemFunctor>(AssetEntryPool, AssetEntryUsedFlagsIncludingStashed, *v24, v22, &functor[1]);
              v22 += 64;
              ++v23;
              ++v24;
            }
            while ( v23 < 0x1768 );
            p_size = xhash_8.name;
            xpakIndex = functor[0].xpakIndex;
          }
          functor[0].xpakIndex = ++xpakIndex;
          p_size += 160;
          xhash_8.name = p_size;
        }
        while ( xpakIndex < 0x100 );
        DB_UnlockHashRead();
        Sys_ProfEndNamedEvent();
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
XPak_WaitReadIndexData
==============
*/
void XPak_WaitReadIndexData(XPakWorkContext *work, int buffer)
{
  __int64 v2; 
  int v5; 

  v2 = buffer;
  if ( (unsigned int)buffer >= 2 )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 973, ASSERT_TYPE_ASSERT, "(unsigned)( buffer ) < (unsigned)( 2 )", "buffer doesn't index XPAK_INDEX_BUFFER_COUNT\n\t%i not in [0, %i)", buffer, v5) )
      __debugbreak();
  }
  if ( !work->indexBufferState[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 974, ASSERT_TYPE_ASSERT, "(work->indexBufferState[buffer] != 0)", (const char *)&queryFormat, "work->indexBufferState[buffer] != XPAK_INDEX_BUFFER_EMPTY") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "XPak_WaitReadIndexData: IO wait");
  while ( work->indexBufferState[v2] == 1 )
  {
    Sys_CheckQuitRequest();
    Sys_Sleep(1);
  }
  Sys_ProfEndNamedEvent();
  if ( work->indexBufferState[v2] == 3 )
  {
    Com_PrintError(36, "Error while reading xpak %s index data, offset %ld\n", work->pak->name, work->indexBufferOffset[v2]);
    memset_0(work->indexBuffer[v2], 255, sizeof(work->indexBuffer[v2]));
  }
}

