/*
==============
MemFile_ArchiveData
==============
*/

void __fastcall MemFile_ArchiveData(MemoryFile *memFile, int bytes, void *data)
{
  ?MemFile_ArchiveData@@YAXPEAUMemoryFile@@HPEAX@Z(memFile, bytes, data);
}

/*
==============
MemFile_ArchiveVec3
==============
*/

void __fastcall MemFile_ArchiveVec3(MemoryFile *memFile, vec3_t *value)
{
  ?MemFile_ArchiveVec3@@YAXPEAUMemoryFile@@AEATvec3_t@@@Z(memFile, value);
}

/*
==============
MemFile_ArchiveData
==============
*/
void MemFile_ArchiveData(MemoryFile *memFile, int bytes, void *data)
{
  unsigned __int64 v3; 

  v3 = bytes;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, v3, data);
}

/*
==============
MemFile_ArchiveVec3
==============
*/
void MemFile_ArchiveVec3(MemoryFile *memFile, vec3_t *value)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 12ui64, value);
}

