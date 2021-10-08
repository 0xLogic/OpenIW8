/*
==============
LiveStorage_CS_ClearCacheMemory
==============
*/

void LiveStorage_CS_ClearCacheMemory(void)
{
  ?LiveStorage_CS_ClearCacheMemory@@YAXXZ();
}

/*
==============
LiveStorage_CS_IsCached
==============
*/

bool __fastcall LiveStorage_CS_IsCached(unsigned __int64 fileID, int *index)
{
  return ?LiveStorage_CS_IsCached@@YA_N_KPEAH@Z(fileID, index);
}

/*
==============
LiveStorage_CS_Hash
==============
*/

int __fastcall LiveStorage_CS_Hash(unsigned __int64 fileID)
{
  return ?LiveStorage_CS_Hash@@YAH_K@Z(fileID);
}

/*
==============
LiveStorage_CSCache_AddDescriptor
==============
*/

void __fastcall LiveStorage_CSCache_AddDescriptor(unsigned __int64 fileID, bdFileMetaData *descriptor)
{
  ?LiveStorage_CSCache_AddDescriptor@@YAX_KPEAVbdFileMetaData@@@Z(fileID, descriptor);
}

/*
==============
LiveStorage_CSCache_GetDescriptor
==============
*/

bool __fastcall LiveStorage_CSCache_GetDescriptor(unsigned __int64 fileID, bdFileMetaData *descriptor)
{
  return ?LiveStorage_CSCache_GetDescriptor@@YA_N_KPEAVbdFileMetaData@@@Z(fileID, descriptor);
}

/*
==============
LiveStorage_CS_AllocCacheMemory
==============
*/

void LiveStorage_CS_AllocCacheMemory(void)
{
  ?LiveStorage_CS_AllocCacheMemory@@YAXXZ();
}

/*
==============
LiveStorage_CSCache_AddDescriptor
==============
*/
void LiveStorage_CSCache_AddDescriptor(unsigned __int64 fileID, bdFileMetaData *descriptor)
{
  if ( g_csCache )
    memcpy_0(&g_csCache[((unsigned int)fileID ^ HIDWORD(fileID)) % 0x64], descriptor, sizeof(csCacheFileDetails_t));
}

/*
==============
LiveStorage_CSCache_GetDescriptor
==============
*/
char LiveStorage_CSCache_GetDescriptor(unsigned __int64 fileID, bdFileMetaData *descriptor)
{
  csCacheFileDetails_t *v3; 

  if ( !g_csCache )
    return 0;
  v3 = &g_csCache[((unsigned int)fileID ^ HIDWORD(fileID)) % 0x64];
  if ( *((_QWORD *)&v3->descriptor.__vftable + 2) != fileID )
    return 0;
  memcpy_0(descriptor, v3, sizeof(bdFileMetaData));
  return 1;
}

/*
==============
LiveStorage_CS_AllocCacheMemory
==============
*/
void LiveStorage_CS_AllocCacheMemory(void)
{
  csCacheFileDetails_t *v0; 
  __int64 v1; 
  __int64 v2; 

  if ( !g_csCache )
  {
    v0 = (csCacheFileDetails_t *)PMem_Alloc(0x1E2080ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocCacheMemory:g_csCache");
    if ( v0 )
    {
      v1 = 0i64;
      g_csCache = v0;
      v2 = 100i64;
      while ( 1 )
      {
        bdFileMetaData::bdFileMetaData(&v0[v1++].descriptor);
        if ( !--v2 )
          break;
        v0 = g_csCache;
      }
      g_AllocatedContentServerMemorySize += 1974400i64;
    }
  }
}

/*
==============
LiveStorage_CS_ClearCacheMemory
==============
*/
void LiveStorage_CS_ClearCacheMemory(void)
{
  g_csCache = NULL;
}

/*
==============
LiveStorage_CS_Hash
==============
*/
__int64 LiveStorage_CS_Hash(unsigned __int64 fileID)
{
  return ((unsigned int)fileID ^ HIDWORD(fileID)) % 0x64;
}

/*
==============
LiveStorage_CS_IsCached
==============
*/
char LiveStorage_CS_IsCached(unsigned __int64 fileID, int *index)
{
  int v2; 

  if ( !g_csCache )
    return 0;
  v2 = ((unsigned int)fileID ^ HIDWORD(fileID)) % 0x64;
  if ( *((_QWORD *)&g_csCache[v2].descriptor.__vftable + 2) != fileID )
    return 0;
  *index = v2;
  return 1;
}

