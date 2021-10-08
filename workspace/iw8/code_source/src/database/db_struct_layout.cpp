/*
==============
Load_RegisterStructMemberSize
==============
*/

void __fastcall Load_RegisterStructMemberSize(const char *structName, const unsigned int structHash, const char *memberType, const unsigned int memberTypeHash, const char *memberName, const unsigned int memberHash, const unsigned __int64 memberOffset, const unsigned __int64 memberSize, const unsigned __int64 arraySize, const bool pointer, const bool dynamic)
{
  ?Load_RegisterStructMemberSize@@YAXPEBDI0I0I_K11_N2@Z(structName, structHash, memberType, memberTypeHash, memberName, memberHash, memberOffset, memberSize, arraySize, pointer, dynamic);
}

/*
==============
DB_StructLayout_Test
==============
*/

void __fastcall DB_StructLayout_Test(const RawFile *rawFile)
{
  ?DB_StructLayout_Test@@YAXPEBURawFile@@@Z(rawFile);
}

/*
==============
Load_RegisterStructSize
==============
*/

bool __fastcall Load_RegisterStructSize(const char *structName, const unsigned int structHash, const unsigned __int64 structSize, const unsigned __int64 alignment)
{
  return ?Load_RegisterStructSize@@YA_NPEBDI_K1@Z(structName, structHash, structSize, alignment);
}

/*
==============
DB_StructLayout_ReadByte
==============
*/
__int64 DB_StructLayout_ReadByte()
{
  unsigned __int64 v0; 
  __int64 result; 

  if ( !s_structData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 272, ASSERT_TYPE_ASSERT, "(s_structData)", (const char *)&queryFormat, "s_structData") )
    __debugbreak();
  v0 = s_structDataPos;
  if ( s_structDataPos + 1 >= s_structDataSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 273, ASSERT_TYPE_ASSERT, "(s_structDataPos + sizeof( byte ) < s_structDataSize)", (const char *)&queryFormat, "s_structDataPos + sizeof( byte ) < s_structDataSize") )
      __debugbreak();
    v0 = s_structDataPos;
  }
  result = (unsigned __int8)s_structData[v0];
  s_structDataPos = v0 + 1;
  return result;
}

/*
==============
DB_StructLayout_ReadUInt32
==============
*/
__int64 DB_StructLayout_ReadUInt32()
{
  unsigned __int64 v0; 
  __int64 result; 

  if ( !s_structData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 284, ASSERT_TYPE_ASSERT, "(s_structData)", (const char *)&queryFormat, "s_structData") )
    __debugbreak();
  v0 = s_structDataPos;
  if ( s_structDataPos + 4 >= s_structDataSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 285, ASSERT_TYPE_ASSERT, "(s_structDataPos + sizeof( uint32_t ) < s_structDataSize)", (const char *)&queryFormat, "s_structDataPos + sizeof( uint32_t ) < s_structDataSize") )
      __debugbreak();
    v0 = s_structDataPos;
  }
  result = *(unsigned int *)&s_structData[v0];
  s_structDataPos = v0 + 4;
  return result;
}

/*
==============
DB_StructLayout_Test
==============
*/
void DB_StructLayout_Test(const RawFile *rawFile)
{
  int RawFileLen; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  char *v5; 

  if ( rawFile )
  {
    RawFileLen = DB_GetRawFileLen(rawFile);
    v3 = RawFileLen;
    v4 = (RawFileLen + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    v5 = (char *)Mem_Virtual_Alloc((v4 + 196607) & 0xFFFFFFFFFFFF0000ui64, "StructLayout", TRACK_MISC);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 247, ASSERT_TYPE_ASSERT, "(allocBuf)", (const char *)&queryFormat, "allocBuf") )
      __debugbreak();
    DB_GetRawBufferInflate(rawFile, v5, v3, (DBZlibInflateBuf *const)&v5[v4]);
    if ( s_structData )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 253, ASSERT_TYPE_ASSERT, "(s_structData == nullptr)", (const char *)&queryFormat, "s_structData == nullptr") )
        __debugbreak();
    }
    s_structData = v5;
    s_structDataPos = 0i64;
    s_structDataSize = v3;
    Load_ProcessStructLayout_XAssetList();
    Mem_Virtual_Free(v5);
    s_structData = NULL;
    s_structDataSize = 0i64;
    s_structDataPos = 0i64;
  }
}

/*
==============
Load_RegisterStructMemberSize
==============
*/
void Load_RegisterStructMemberSize(const char *structName, const unsigned int structHash, const char *memberType, const unsigned int memberTypeHash, const char *memberName, const unsigned int memberHash, const unsigned __int64 memberOffset, const unsigned __int64 memberSize, const unsigned __int64 arraySize)
{
  unsigned __int8 Byte; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int UInt32; 

  Byte = DB_StructLayout_ReadByte();
  if ( Byte != 2 )
  {
    v18 = Byte;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 334, ASSERT_TYPE_ASSERT, "(sentinel == DB_STRUCT_LAYOUT_SENTINEL_STRUCT_MEMBER)", "%s\n\tLoad_RegisterStructMemberSize unknown sentinel %d. Did someone make DB archive changes, but not increase the XFILE_VERSION?", "sentinel == DB_STRUCT_LAYOUT_SENTINEL_STRUCT_MEMBER", v18) )
      __debugbreak();
  }
  UInt32 = DB_StructLayout_ReadUInt32();
  v12 = DB_StructLayout_ReadUInt32();
  v13 = DB_StructLayout_ReadUInt32();
  v14 = (unsigned int)DB_StructLayout_ReadUInt32();
  v15 = (unsigned int)DB_StructLayout_ReadUInt32();
  v16 = DB_StructLayout_ReadUInt32();
  v17 = v16;
  if ( UInt32 != structHash || v12 != memberHash || v13 != memberTypeHash || v14 != memberOffset || v15 != memberSize || v16 != arraySize )
  {
    Com_PrintError(0, "Load_RegisterStructSize mismatch. Member=%s %s::%s\n", memberType, structName, memberName);
    Com_PrintError(0, "Struct Name Hash : %08x != %08x\n", UInt32, structHash);
    Com_PrintError(0, "Member Name Hash : %08x != %08x\n", v12, memberHash);
    Com_PrintError(0, "Member Type Hash : %08x != %08x\n", v13, memberTypeHash);
    Com_PrintError(0, "Member Offset    : %u != %zu\n", (unsigned int)v14, memberOffset);
    Com_PrintError(0, "Member Size      : %u != %zu\n", (unsigned int)v15, memberSize);
    Com_PrintError(0, "Member Array Size: %u != %zu\n", v17, arraySize);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 357, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Load_RegisterStructMemberSize failed. Did someone make DB archive changes, but not increase the XFILE_VERSION?") )
      __debugbreak();
  }
}

/*
==============
Load_RegisterStructSize
==============
*/
char Load_RegisterStructSize(const char *structName, const unsigned int structHash, const unsigned __int64 structSize, const unsigned __int64 alignment)
{
  unsigned __int8 Byte; 
  unsigned int UInt32; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v14; 

  Byte = DB_StructLayout_ReadByte();
  if ( Byte )
  {
    if ( Byte != 1 )
    {
      v14 = Byte;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 322, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Load_RegisterStructSize unknown sentinel %d. Did someone make DB archive changes, but not increase the XFILE_VERSION?", v14) )
        __debugbreak();
    }
    return 0;
  }
  else
  {
    UInt32 = DB_StructLayout_ReadUInt32();
    v10 = (unsigned int)DB_StructLayout_ReadUInt32();
    v11 = DB_StructLayout_ReadUInt32();
    v12 = v11;
    if ( v10 != structSize || UInt32 != structHash || v11 != alignment )
    {
      Com_PrintError(0, "Load_RegisterStructSize mismatch. Struct name=%s\n", structName);
      Com_PrintError(0, "Name Hash: %08x != %08x\n", UInt32, structHash);
      Com_PrintError(0, "Size     : %u != %zu\n", (unsigned int)v10, structSize);
      Com_PrintError(0, "Align    : %u != %zu\n", v12, alignment);
      Com_PrintError(0, "(search \\code_source\\src\\db_generated\\ to find what this hash maps to)\n");
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_struct_layout.cpp", 311, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Load_RegisterStructSize failed. Did someone make DB archive changes, but not increase the XFILE_VERSION?") )
        __debugbreak();
    }
    return 1;
  }
}

