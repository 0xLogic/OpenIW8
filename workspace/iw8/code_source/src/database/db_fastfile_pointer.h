/*
==============
DB_ConvertOffsetToAlias
==============
*/

void __fastcall DB_ConvertOffsetToAlias(unsigned __int64 *writeLocation)
{
  ?DB_ConvertOffsetToAlias@@YAXPEA_K@Z(writeLocation);
}

/*
==============
DB_ResolvePackedOffsetAddress
==============
*/

void *__fastcall DB_ResolvePackedOffsetAddress(const unsigned __int64 offset)
{
  return ?DB_ResolvePackedOffsetAddress@@YAPEAX_K@Z(offset);
}

/*
==============
DB_ConvertOffsetToAlias
==============
*/
void DB_ConvertOffsetToAlias(unsigned __int64 *writeLocation)
{
  unsigned __int64 v1; 

  v1 = *writeLocation;
  if ( !*writeLocation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_pointer.h", 192, ASSERT_TYPE_ASSERT, "(packedOffset != 0)", (const char *)&queryFormat, "packedOffset != 0") )
    __debugbreak();
  *writeLocation = *(_QWORD *)DB_ResolvePackedOffsetAddress(v1);
}

/*
==============
DB_ResolvePackedOffsetAddress
==============
*/
unsigned __int8 *DB_ResolvePackedOffsetAddress(const unsigned __int64 offset)
{
  unsigned int v2; 
  __int64 v4; 
  unsigned int streamOffsetPtr; 

  streamOffsetPtr = offset;
  if ( !(_DWORD)offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_pointer.h", 155, ASSERT_TYPE_ASSERT, "(streamOffset != 0)", (const char *)&queryFormat, "streamOffset != 0") )
    __debugbreak();
  --streamOffsetPtr;
  v2 = BYTE4(offset) & 0xF;
  if ( v2 >= 0xB )
  {
    LODWORD(v4) = BYTE4(offset) & 0xF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_pointer.h", 160, ASSERT_TYPE_ASSERT, "(unsigned)( streamIndex ) < (unsigned)( MAX_XFILE_COUNT )", "streamIndex doesn't index MAX_XFILE_COUNT\n\t%i not in [0, %i)", v4, 11) )
      __debugbreak();
  }
  if ( (offset & 0x1000000000i64) != 0 )
    streamOffsetPtr += DB_PatchMem_GetAssetRelativePointerOffset(v2);
  if ( (offset & 0xFFFFFFE000000000ui64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_pointer.h", 172, ASSERT_TYPE_ASSERT, "(( offset & DB_PTR_UNSET_PART ) == 0)", (const char *)&queryFormat, "( offset & DB_PTR_UNSET_PART ) == 0") )
    __debugbreak();
  DB_PatchMem_AdjustOffsetForDiscards(v2, &streamOffsetPtr);
  return &g_streamPosGlob.archiveBlocks.blocks[BYTE4(offset) & 0xF].data[streamOffsetPtr];
}

