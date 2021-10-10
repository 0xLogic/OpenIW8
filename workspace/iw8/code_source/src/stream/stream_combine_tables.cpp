/*
==============
Stream_CombineTables_BuildIfStale
==============
*/

void __fastcall Stream_CombineTables_BuildIfStale(bool incremental)
{
  ?Stream_CombineTables_BuildIfStale@@YAX_N@Z(incremental);
}

/*
==============
Stream_CombineTables_Get
==============
*/

const StreamCombineTables *__fastcall Stream_CombineTables_Get()
{
  return ?Stream_CombineTables_Get@@YAPEBUStreamCombineTables@@XZ();
}

/*
==============
Stream_CombineTables_MarkModelMaterialTableAsStale
==============
*/

void __fastcall Stream_CombineTables_MarkModelMaterialTableAsStale(unsigned int modelIndex)
{
  ?Stream_CombineTables_MarkModelMaterialTableAsStale@@YAXI@Z(modelIndex);
}

/*
==============
Stream_CombineTables_ModelRemoved
==============
*/

void __fastcall Stream_CombineTables_ModelRemoved(unsigned int modelIndex)
{
  ?Stream_CombineTables_ModelRemoved@@YAXI@Z(modelIndex);
}

/*
==============
Stream_CombineTables_MaterialRemoved
==============
*/

void __fastcall Stream_CombineTables_MaterialRemoved(unsigned int materialIndex)
{
  ?Stream_CombineTables_MaterialRemoved@@YAXI@Z(materialIndex);
}

/*
==============
Stream_CombineTables_GetCommitSize
==============
*/

unsigned __int64 __fastcall Stream_CombineTables_GetCommitSize()
{
  return ?Stream_CombineTables_GetCommitSize@@YA_KXZ();
}

/*
==============
Stream_CombineTables_MaterialAdded
==============
*/

void __fastcall Stream_CombineTables_MaterialAdded(unsigned int materialIndex)
{
  ?Stream_CombineTables_MaterialAdded@@YAXI@Z(materialIndex);
}

/*
==============
Stream_CombineTables_MarkMaterialImageTableAsStale
==============
*/

void __fastcall Stream_CombineTables_MarkMaterialImageTableAsStale(unsigned int materialIndex)
{
  ?Stream_CombineTables_MarkMaterialImageTableAsStale@@YAXI@Z(materialIndex);
}

/*
==============
Stream_CombineTables_OneTimeInit
==============
*/

void Stream_CombineTables_OneTimeInit(void)
{
  ?Stream_CombineTables_OneTimeInit@@YAXXZ();
}

/*
==============
Stream_CombineTables_ModelAdded
==============
*/

void __fastcall Stream_CombineTables_ModelAdded(unsigned int modelIndex)
{
  ?Stream_CombineTables_ModelAdded@@YAXI@Z(modelIndex);
}

/*
==============
AddMaterialToBufferCheckOnly
==============
*/
char AddMaterialToBufferCheckOnly(unsigned int materialIndex)
{
  unsigned __int64 v1; 
  Material *MaterialAtIndex; 
  unsigned __int8 textureCount; 
  unsigned __int8 v4; 
  int v7; 

  v1 = materialIndex;
  if ( materialIndex >= 0xB400 )
  {
    v7 = 46080;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", materialIndex, v7) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v1 & 0x1F)) & s_streamCombineTablesGlob.validMaterials.array[v1 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 625, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validMaterials.testBit( materialIndex )") )
    __debugbreak();
  MaterialAtIndex = DB_GetMaterialAtIndex(v1);
  textureCount = MaterialAtIndex->textureCount;
  if ( !textureCount )
    return 0;
  v4 = 0;
  while ( (MaterialAtIndex->textureTable[v4].image->flags & 0x40) == 0 )
  {
    if ( ++v4 >= textureCount )
      return 0;
  }
  return 1;
}

/*
==============
AddModelToBufferCheckOnly
==============
*/
char AddModelToBufferCheckOnly(const unsigned int modelIndex)
{
  unsigned __int64 v1; 
  XModel *XModelAtIndex; 
  __int64 v3; 
  unsigned __int16 numsurfs; 
  Material *v5; 
  int v8; 

  v1 = modelIndex;
  if ( modelIndex >= 0x6000 )
  {
    v8 = 24576;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", modelIndex, v8) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v1 & 0x1F)) & s_streamCombineTablesGlob.validModels.array[v1 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 337, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validModels.testBit( modelIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validModels.testBit( modelIndex )") )
    __debugbreak();
  XModelAtIndex = DB_GetXModelAtIndex(v1);
  v3 = 0i64;
  numsurfs = XModelAtIndex->numsurfs;
  if ( !numsurfs )
    return 0;
  while ( 1 )
  {
    v5 = XModelAtIndex->materialHandles[v3];
    if ( v5 )
    {
      if ( XModelAtIndex->himipRadiusInvSq[v3] != 0.0 && (v5->runtimeFlags & 0x10) != 0 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= numsurfs )
      return 0;
  }
  return 1;
}

/*
==============
BuildMaterialImageTable
==============
*/
void BuildMaterialImageTable(StreamCombineTable *materialImageTable, unsigned __int8 *startWritePtr)
{
  unsigned __int8 *v2; 
  unsigned int v4; 
  unsigned __int8 *writePtr; 
  unsigned int writeHighWatermark; 
  unsigned int v7; 
  unsigned int v8; 
  bool v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  bitarray<46080> *p_modifiedMaterials; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  TableBuildContext context; 

  v2 = startWritePtr;
  if ( !startWritePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 923, ASSERT_TYPE_ASSERT, "( startWritePtr ) != ( nullptr )", "%s != %s\n\t%p, %p", "startWritePtr", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BuildMaterialImageTable");
  ValidateMaterials();
  TableBuildContext_Init(&context, materialImageTable, v2);
  LODWORD(v2) = 0;
  v4 = s_streamCombineTablesGlob.validMaterials.array[0];
  writePtr = context.writePtr;
LABEL_5:
  writeHighWatermark = context.writeHighWatermark;
  while ( v4 )
  {
LABEL_9:
    v7 = __lzcnt(v4);
    v8 = v7 + 32 * (_DWORD)v2;
    if ( v7 >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v7);
    if ( v8 >= 0xB400 )
    {
      LODWORD(v16) = 46080;
      LODWORD(v15) = v7 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( iterator.index ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "iterator.index doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v9 = AddMaterialToBuffer_0_(&context.writePtr, v8);
    writePtr = context.writePtr;
    if ( !v9 )
      goto LABEL_5;
    writeHighWatermark = LODWORD(context.writePtr) - LODWORD(context.lastWritePtr);
    if ( context.writeHighWatermark > LODWORD(context.writePtr) - LODWORD(context.lastWritePtr) )
      writeHighWatermark = context.writeHighWatermark;
    context.writeHighWatermark = writeHighWatermark;
    context.lastWritePtr = context.writePtr;
    if ( context.writePtr - context.startWritePtr > 916480 )
      Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "BuildMaterialImageTable", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 946, "Out of scratch memory to build the MaterialImageTable");
    ++context.entryCount;
  }
  while ( 1 )
  {
    v2 = (unsigned __int8 *)(unsigned int)((_DWORD)v2 + 1);
    if ( (unsigned int)v2 >= 0x5A0 )
      break;
    v4 = s_streamCombineTablesGlob.validMaterials.array[(_QWORD)v2];
    if ( v4 )
      goto LABEL_9;
  }
  v10 = writePtr - context.startWritePtr;
  v11 = (float)v10;
  if ( v10 < 0 )
  {
    v12 = (float)v10;
    v11 = v12 + 1.8446744e19;
  }
  Com_Printf(35, "Stream Combine: Table '%s' used %d kb (%.2f %%)\n", "MaterialImage", (unsigned int)((unsigned __int64)v10 >> 10), (float)(v11 * 0.00010899135));
  if ( writeHighWatermark <= 0x400 )
    Com_Printf(35, "Stream Combine: Largest Write: '%d' \n", writeHighWatermark);
  else
    Com_PrintError(35, "Stream Combine: Largest Write: '%d'. EXCEEDED SAFETY THRESHOLD!!\n", writeHighWatermark);
  FinalizeRebuildOfCombineTable(&context, materialImageTable);
  p_modifiedMaterials = &s_streamCombineTablesGlob.modifiedMaterials;
  v14 = 90i64;
  do
  {
    *(_QWORD *)p_modifiedMaterials->array = 0i64;
    *(_QWORD *)&p_modifiedMaterials->array[2] = 0i64;
    *(_QWORD *)&p_modifiedMaterials->array[4] = 0i64;
    p_modifiedMaterials = (bitarray<46080> *)((char *)p_modifiedMaterials + 64);
    *(_QWORD *)&p_modifiedMaterials[-1].array[1430] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1432] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1434] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1436] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1438] = 0i64;
    --v14;
  }
  while ( v14 );
  Sys_ProfEndNamedEvent();
}

/*
==============
BuildMaterialImageTableIncremental
==============
*/
void BuildMaterialImageTableIncremental(StreamCombineTable *materialImageTable, unsigned __int8 *startWritePtr)
{
  unsigned __int8 *v2; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  int writeHighWatermark; 
  unsigned __int8 *writePtr; 
  unsigned __int8 *v9; 
  float v10; 
  float v11; 
  bitarray<46080> *p_modifiedMaterials; 
  __int64 v13; 
  unsigned __int64 memEnd; 
  unsigned __int64 memBegin; 
  size_t v16; 
  const void *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  TableBuildContext context; 

  v2 = startWritePtr;
  if ( !startWritePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 960, ASSERT_TYPE_ASSERT, "( startWritePtr ) != ( nullptr )", "%s != %s\n\t%p, %p", "startWritePtr", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !materialImageTable->memBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 961, ASSERT_TYPE_ASSERT, "( materialImageTable.memBegin ) != ( 0 )", "%s != %s\n\t%llu, %llu", "materialImageTable.memBegin", "0", 0i64, 0i64) )
    __debugbreak();
  if ( !materialImageTable->vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 962, ASSERT_TYPE_ASSERT, "( materialImageTable.vaSize ) > ( 0 )", "%s > %s\n\t%llu, %llu", "materialImageTable.vaSize", "0", 0i64, 0i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BuildMaterialImageTableIncremental");
  ValidateMaterials();
  TableBuildContext_Init(&context, materialImageTable, v2);
  LODWORD(v2) = 0;
  v4 = s_streamCombineTablesGlob.modifiedMaterials.array[0];
  while ( v4 )
  {
LABEL_14:
    v5 = __lzcnt(v4);
    v6 = v5 + 32 * (_DWORD)v2;
    if ( v5 >= 0x20 )
    {
      LODWORD(v19) = 32;
      LODWORD(v18) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v5);
    if ( v6 >= 0xB400 )
    {
      LODWORD(v19) = 46080;
      LODWORD(v18) = v5 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 977, ASSERT_TYPE_ASSERT, "(unsigned)( iterator.index ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "iterator.index doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    MaterialImageTable_CopyFromOldTableUnchangedEntries(&context, v6);
    if ( v6 >= 0xB400 )
    {
      LODWORD(v19) = 46080;
      LODWORD(v18) = v5 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v6 & 0x1F)) & s_streamCombineTablesGlob.validMaterials.array[(unsigned __int64)v6 >> 5]) != 0 && AddMaterialToBuffer_0_(&context.writePtr, v6) )
    {
      writeHighWatermark = LODWORD(context.writePtr) - LODWORD(context.lastWritePtr);
      if ( context.writeHighWatermark > LODWORD(context.writePtr) - LODWORD(context.lastWritePtr) )
        writeHighWatermark = context.writeHighWatermark;
      context.writeHighWatermark = writeHighWatermark;
      context.lastWritePtr = context.writePtr;
      if ( context.writePtr - context.startWritePtr > 916480 )
        Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "BuildMaterialImageTableIncremental", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 986, "Out of scratch memory to build the MaterialImageIncremental");
      ++context.entryCount;
    }
  }
  while ( 1 )
  {
    v2 = (unsigned __int8 *)(unsigned int)((_DWORD)v2 + 1);
    if ( (unsigned int)v2 >= 0x5A0 )
      break;
    v4 = s_streamCombineTablesGlob.modifiedMaterials.array[(_QWORD)v2];
    if ( v4 )
      goto LABEL_14;
  }
  MaterialImageTable_CopyFromOldTableUnchangedEntries(&context, 0xB400u);
  writePtr = context.writePtr;
  v9 = context.startWritePtr;
  v10 = (float)(context.writePtr - context.startWritePtr);
  if ( context.writePtr - context.startWritePtr < 0 )
  {
    v11 = (float)(context.writePtr - context.startWritePtr);
    v10 = v11 + 1.8446744e19;
  }
  Com_Printf(35, "Stream Combine: Table '%s' used %d kb (%.2f %%)\n", "MaterialImageIncremental", (unsigned int)((unsigned __int64)(context.writePtr - context.startWritePtr) >> 10), (float)(v10 * 0.00010899135));
  if ( context.writeHighWatermark <= 0x400 )
    Com_Printf(35, "Stream Combine: Largest Write: '%d' \n", context.writeHighWatermark);
  else
    Com_PrintError(35, "Stream Combine: Largest Write: '%d'. EXCEEDED SAFETY THRESHOLD!!\n", context.writeHighWatermark);
  FinalizeRebuildOfCombineTable(&context, materialImageTable);
  p_modifiedMaterials = &s_streamCombineTablesGlob.modifiedMaterials;
  v13 = 90i64;
  do
  {
    *(_QWORD *)p_modifiedMaterials->array = 0i64;
    *(_QWORD *)&p_modifiedMaterials->array[2] = 0i64;
    *(_QWORD *)&p_modifiedMaterials->array[4] = 0i64;
    p_modifiedMaterials = (bitarray<46080> *)((char *)p_modifiedMaterials + 64);
    *(_QWORD *)&p_modifiedMaterials[-1].array[1430] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1432] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1434] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1436] = 0i64;
    *(_QWORD *)&p_modifiedMaterials[-1].array[1438] = 0i64;
    --v13;
  }
  while ( v13 );
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_comprehensiveSanityChecks, "db_comprehensiveSanityChecks") )
  {
    BuildMaterialImageTable(materialImageTable, s_validationScratchBuffer);
    if ( materialImageTable->count != context.entryCount )
    {
      LODWORD(v21) = context.entryCount;
      LODWORD(v20) = materialImageTable->count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1001, ASSERT_TYPE_ASSERT, "( materialImageTable.count ) == ( context.entryCount )", "%s == %s\n\t%i, %i", "materialImageTable.count", "context.entryCount", v20, v21) )
        __debugbreak();
    }
    memEnd = materialImageTable->memEnd;
    memBegin = materialImageTable->memBegin;
    if ( memEnd - memBegin != writePtr - v9 )
    {
      LODWORD(v21) = LODWORD(context.writePtr) - LODWORD(context.startWritePtr);
      LODWORD(v20) = memEnd - memBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1002, ASSERT_TYPE_ASSERT, "( reinterpret_cast<byte*>( materialImageTable.memEnd ) - reinterpret_cast<byte*>( materialImageTable.memBegin ) ) == ( context.writePtr - context.startWritePtr )", "%s == %s\n\t%i, %i", "reinterpret_cast<byte*>( materialImageTable.memEnd ) - reinterpret_cast<byte*>( materialImageTable.memBegin )", "context.writePtr - context.startWritePtr", v20, v21) )
        __debugbreak();
    }
    v16 = writePtr - v9;
    v17 = (const void *)materialImageTable->memBegin;
    if ( memcmp_0(v17, v9, v16) )
    {
      LODWORD(v21) = memcmp_0(v17, v9, v16);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1003, ASSERT_TYPE_ASSERT, "( 0 ) == ( memcmp( reinterpret_cast<byte *>( materialImageTable.memBegin ), context.startWritePtr, context.writePtr - context.startWritePtr ) )", "%s == %s\n\t%i, %i", "0", "memcmp( reinterpret_cast<byte *>( materialImageTable.memBegin ), context.startWritePtr, context.writePtr - context.startWritePtr )", 0i64, v21) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BuildModelMaterialTable
==============
*/
void BuildModelMaterialTable(StreamCombineTable *modelMaterialTable, unsigned __int8 *scratchBuffer)
{
  unsigned __int8 *v2; 
  unsigned int v4; 
  unsigned __int8 *writePtr; 
  unsigned int writeHighWatermark; 
  unsigned int v7; 
  unsigned int v8; 
  bool v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  bitarray<24576> *p_modifiedModels; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  TableBuildContext context; 

  v2 = scratchBuffer;
  if ( !scratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 538, ASSERT_TYPE_ASSERT, "( scratchBuffer ) != ( nullptr )", "%s != %s\n\t%p, %p", "scratchBuffer", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BuildModelMaterialTable");
  ValidateModels();
  TableBuildContext_Init(&context, modelMaterialTable, v2);
  LODWORD(v2) = 0;
  v4 = s_streamCombineTablesGlob.validModels.array[0];
  writePtr = context.writePtr;
LABEL_5:
  writeHighWatermark = context.writeHighWatermark;
  while ( v4 )
  {
LABEL_9:
    v7 = __lzcnt(v4);
    v8 = v7 + 32 * (_DWORD)v2;
    if ( v7 >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v7);
    if ( v8 >= 0x6000 )
    {
      LODWORD(v16) = 24576;
      LODWORD(v15) = v7 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 553, ASSERT_TYPE_ASSERT, "(unsigned)( iterator.index ) < (unsigned)( (24064 + 512) )", "iterator.index doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v9 = AddModelToBuffer_0_(&context.writePtr, v8);
    writePtr = context.writePtr;
    if ( !v9 )
      goto LABEL_5;
    writeHighWatermark = LODWORD(context.writePtr) - LODWORD(context.lastWritePtr);
    if ( context.writeHighWatermark > LODWORD(context.writePtr) - LODWORD(context.lastWritePtr) )
      writeHighWatermark = context.writeHighWatermark;
    context.writeHighWatermark = writeHighWatermark;
    context.lastWritePtr = context.writePtr;
    if ( context.writePtr - context.startWritePtr > 916480 )
      Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "BuildModelMaterialTable", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 561, "Out of scratch memory to build the ModelMaterial");
    ++context.entryCount;
  }
  while ( 1 )
  {
    v2 = (unsigned __int8 *)(unsigned int)((_DWORD)v2 + 1);
    if ( (unsigned int)v2 >= 0x300 )
      break;
    v4 = s_streamCombineTablesGlob.validModels.array[(_QWORD)v2];
    if ( v4 )
      goto LABEL_9;
  }
  v10 = writePtr - context.startWritePtr;
  v11 = (float)v10;
  if ( v10 < 0 )
  {
    v12 = (float)v10;
    v11 = v12 + 1.8446744e19;
  }
  Com_Printf(35, "Stream Combine: Table '%s' used %d kb (%.2f %%)\n", "ModelMaterial", (unsigned int)((unsigned __int64)v10 >> 10), (float)(v11 * 0.00010899135));
  if ( writeHighWatermark <= 0x400 )
    Com_Printf(35, "Stream Combine: Largest Write: '%d' \n", writeHighWatermark);
  else
    Com_PrintError(35, "Stream Combine: Largest Write: '%d'. EXCEEDED SAFETY THRESHOLD!!\n", writeHighWatermark);
  FinalizeRebuildOfCombineTable(&context, modelMaterialTable);
  p_modifiedModels = &s_streamCombineTablesGlob.modifiedModels;
  v14 = 48i64;
  do
  {
    *(_QWORD *)p_modifiedModels->array = 0i64;
    *(_QWORD *)&p_modifiedModels->array[2] = 0i64;
    *(_QWORD *)&p_modifiedModels->array[4] = 0i64;
    p_modifiedModels = (bitarray<24576> *)((char *)p_modifiedModels + 64);
    *(_QWORD *)&p_modifiedModels[-1].array[758] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[760] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[762] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[764] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[766] = 0i64;
    --v14;
  }
  while ( v14 );
  Sys_ProfEndNamedEvent();
}

/*
==============
BuildModelMaterialTableIncremental
==============
*/
void BuildModelMaterialTableIncremental(StreamCombineTable *modelMaterialTable, unsigned __int8 *scratchBuffer)
{
  unsigned __int8 *v2; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  int writeHighWatermark; 
  unsigned __int8 *writePtr; 
  unsigned __int8 *startWritePtr; 
  float v10; 
  float v11; 
  bitarray<24576> *p_modifiedModels; 
  __int64 v13; 
  unsigned __int64 memEnd; 
  unsigned __int64 memBegin; 
  size_t v16; 
  const void *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  TableBuildContext context; 

  v2 = scratchBuffer;
  if ( !scratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 575, ASSERT_TYPE_ASSERT, "( scratchBuffer ) != ( nullptr )", "%s != %s\n\t%p, %p", "scratchBuffer", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BuildModelMaterialTableIncremental");
  ValidateModels();
  TableBuildContext_Init(&context, modelMaterialTable, v2);
  LODWORD(v2) = 0;
  v4 = s_streamCombineTablesGlob.modifiedModels.array[0];
  while ( v4 )
  {
LABEL_8:
    v5 = __lzcnt(v4);
    v6 = v5 + 32 * (_DWORD)v2;
    if ( v5 >= 0x20 )
    {
      LODWORD(v19) = 32;
      LODWORD(v18) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v5);
    if ( v6 >= 0x6000 )
    {
      LODWORD(v19) = 24576;
      LODWORD(v18) = v5 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 590, ASSERT_TYPE_ASSERT, "(unsigned)( iterator.index ) < (unsigned)( (24064 + 512) )", "iterator.index doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    ModelMaterialTable_CopyFromOldTableUnchangedEntries(&context, v6);
    if ( v6 >= 0x6000 )
    {
      LODWORD(v19) = 24576;
      LODWORD(v18) = v5 + 32 * (_DWORD)v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v6 & 0x1F)) & s_streamCombineTablesGlob.validModels.array[(unsigned __int64)v6 >> 5]) != 0 && AddModelToBuffer_0_(&context.writePtr, v6) )
    {
      writeHighWatermark = LODWORD(context.writePtr) - LODWORD(context.lastWritePtr);
      if ( context.writeHighWatermark > LODWORD(context.writePtr) - LODWORD(context.lastWritePtr) )
        writeHighWatermark = context.writeHighWatermark;
      context.writeHighWatermark = writeHighWatermark;
      context.lastWritePtr = context.writePtr;
      if ( context.writePtr - context.startWritePtr > 916480 )
        Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "BuildModelMaterialTableIncremental", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 599, "Out of scratch memory to build the ModelMaterialIncremental");
      ++context.entryCount;
    }
  }
  while ( 1 )
  {
    v2 = (unsigned __int8 *)(unsigned int)((_DWORD)v2 + 1);
    if ( (unsigned int)v2 >= 0x300 )
      break;
    v4 = s_streamCombineTablesGlob.modifiedModels.array[(_QWORD)v2];
    if ( v4 )
      goto LABEL_8;
  }
  ModelMaterialTable_CopyFromOldTableUnchangedEntries(&context, 0x6000u);
  writePtr = context.writePtr;
  startWritePtr = context.startWritePtr;
  v10 = (float)(context.writePtr - context.startWritePtr);
  if ( context.writePtr - context.startWritePtr < 0 )
  {
    v11 = (float)(context.writePtr - context.startWritePtr);
    v10 = v11 + 1.8446744e19;
  }
  Com_Printf(35, "Stream Combine: Table '%s' used %d kb (%.2f %%)\n", "ModelMaterialIncremental", (unsigned int)((unsigned __int64)(context.writePtr - context.startWritePtr) >> 10), (float)(v10 * 0.00010899135));
  if ( context.writeHighWatermark <= 0x400 )
    Com_Printf(35, "Stream Combine: Largest Write: '%d' \n", context.writeHighWatermark);
  else
    Com_PrintError(35, "Stream Combine: Largest Write: '%d'. EXCEEDED SAFETY THRESHOLD!!\n", context.writeHighWatermark);
  FinalizeRebuildOfCombineTable(&context, modelMaterialTable);
  p_modifiedModels = &s_streamCombineTablesGlob.modifiedModels;
  v13 = 48i64;
  do
  {
    *(_QWORD *)p_modifiedModels->array = 0i64;
    *(_QWORD *)&p_modifiedModels->array[2] = 0i64;
    *(_QWORD *)&p_modifiedModels->array[4] = 0i64;
    p_modifiedModels = (bitarray<24576> *)((char *)p_modifiedModels + 64);
    *(_QWORD *)&p_modifiedModels[-1].array[758] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[760] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[762] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[764] = 0i64;
    *(_QWORD *)&p_modifiedModels[-1].array[766] = 0i64;
    --v13;
  }
  while ( v13 );
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_comprehensiveSanityChecks, "db_comprehensiveSanityChecks") )
  {
    BuildModelMaterialTable(modelMaterialTable, s_validationScratchBuffer);
    if ( modelMaterialTable->count != context.entryCount )
    {
      LODWORD(v21) = context.entryCount;
      LODWORD(v20) = modelMaterialTable->count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 614, ASSERT_TYPE_ASSERT, "( modelMaterialTable.count ) == ( context.entryCount )", "%s == %s\n\t%i, %i", "modelMaterialTable.count", "context.entryCount", v20, v21) )
        __debugbreak();
    }
    memEnd = modelMaterialTable->memEnd;
    memBegin = modelMaterialTable->memBegin;
    if ( memEnd - memBegin != writePtr - startWritePtr )
    {
      LODWORD(v21) = LODWORD(context.writePtr) - LODWORD(context.startWritePtr);
      LODWORD(v20) = memEnd - memBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 615, ASSERT_TYPE_ASSERT, "( reinterpret_cast< byte* >( modelMaterialTable.memEnd ) - reinterpret_cast< byte* >( modelMaterialTable.memBegin ) ) == ( context.writePtr - context.startWritePtr )", "%s == %s\n\t%i, %i", "reinterpret_cast< byte* >( modelMaterialTable.memEnd ) - reinterpret_cast< byte* >( modelMaterialTable.memBegin )", "context.writePtr - context.startWritePtr", v20, v21) )
        __debugbreak();
    }
    v16 = writePtr - startWritePtr;
    v17 = (const void *)modelMaterialTable->memBegin;
    if ( memcmp_0(v17, startWritePtr, v16) )
    {
      LODWORD(v21) = memcmp_0(v17, startWritePtr, v16);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 616, ASSERT_TYPE_ASSERT, "( 0 ) == ( memcmp( reinterpret_cast< byte * >( modelMaterialTable.memBegin ), context.startWritePtr, context.writePtr - context.startWritePtr ) )", "%s == %s\n\t%i, %i", "0", "memcmp( reinterpret_cast< byte * >( modelMaterialTable.memBegin ), context.startWritePtr, context.writePtr - context.startWritePtr )", 0i64, v21) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
FinalizeRebuildOfCombineTable
==============
*/
void FinalizeRebuildOfCombineTable(TableBuildContext *context, StreamCombineTable *table)
{
  unsigned __int8 *startWritePtr; 
  size_t v5; 
  unsigned __int64 memSize; 
  bool v7; 
  ScopedCriticalSection v8; 

  if ( !context->startWritePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 311, ASSERT_TYPE_ASSERT, "( context.startWritePtr ) != ( nullptr )", "%s != %s\n\t%p, %p", "context.startWritePtr", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !context->writePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 312, ASSERT_TYPE_ASSERT, "( context.writePtr ) != ( nullptr )", "%s != %s\n\t%p, %p", "context.writePtr", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !table->memBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 313, ASSERT_TYPE_ASSERT, "( table.memBegin ) != ( 0 )", "%s != %s\n\t%llu, %llu", "table.memBegin", "0", 0i64, 0i64) )
    __debugbreak();
  if ( !table->vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 314, ASSERT_TYPE_ASSERT, "( table.vaSize ) > ( 0 )", "%s > %s\n\t%llu, %llu", "table.vaSize", "0", 0i64, 0i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_COMBINE_TABLES, SCOPED_CRITSECT_NORMAL);
  startWritePtr = context->startWritePtr;
  v5 = context->writePtr - context->startWritePtr;
  memSize = table->memSize;
  v7 = memSize > 0x20000 && v5 < memSize - 0x20000;
  if ( v5 > memSize || v7 )
  {
    Stream_CombineTable_Resize(table, (v5 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
    startWritePtr = context->startWritePtr;
  }
  memcpy_0((void *)table->memBegin, startWritePtr, v5);
  table->memEnd = v5 + table->memBegin;
  table->count = context->entryCount;
  table->isStale = 0;
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
}

/*
==============
MaterialImageTable_CopyFromOldTableUnchangedEntries
==============
*/
void MaterialImageTable_CopyFromOldTableUnchangedEntries(TableBuildContext *context, unsigned int untilMaterialIndexToSkip)
{
  unsigned __int64 oldTablePtr; 
  unsigned __int64 oldTableEnd; 
  unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 *writePtr; 
  unsigned __int8 *v22; 

  oldTablePtr = context->oldTablePtr;
  oldTableEnd = context->oldTableEnd;
  if ( oldTablePtr > oldTableEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 864, ASSERT_TYPE_ASSERT, "( context.oldTablePtr ) <= ( context.oldTableEnd )", "%s <= %s\n\t%lli, %lli", "context.oldTablePtr", "context.oldTableEnd", oldTablePtr, oldTableEnd) )
    __debugbreak();
  v6 = (unsigned __int8 *)context->oldTablePtr;
  v7 = 0;
  v8 = context->oldTableEnd;
  v9 = v6;
  v22 = v6;
  if ( (unsigned __int64)v6 < v8 )
  {
    do
    {
      v10 = *(unsigned __int16 *)v9;
      if ( (unsigned int)v10 >= untilMaterialIndexToSkip )
        break;
      if ( (unsigned int)v10 >= 0xB400 )
      {
        LODWORD(v18) = 46080;
        LODWORD(v17) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v10 & 0x1F)) & s_streamCombineTablesGlob.validMaterials.array[v10 >> 5]) == 0 )
      {
        LODWORD(v17) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 875, ASSERT_TYPE_ASSERT, "( ( s_streamCombineTablesGlob.validMaterials.testBit( materialImageList->materialIndex ) ) )", "( materialImageList->materialIndex ) = %i", v17) )
          __debugbreak();
      }
      v11 = *(unsigned __int16 *)v9;
      if ( (unsigned int)v11 >= 0xB400 )
      {
        LODWORD(v18) = 46080;
        LODWORD(v17) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v11 & 0x1F)) & s_streamCombineTablesGlob.modifiedMaterials.array[v11 >> 5]) != 0 )
      {
        LODWORD(v17) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 876, ASSERT_TYPE_ASSERT, "( ( !s_streamCombineTablesGlob.modifiedMaterials.testBit( materialImageList->materialIndex ) ) )", "( materialImageList->materialIndex ) = %i", v17) )
          __debugbreak();
      }
      MaterialImageTable_ValidateEmptyGap(context, *(unsigned __int16 *)v9);
      v12 = *(unsigned __int16 *)v9;
      writePtr = v9;
      if ( !AddMaterialToBuffer_1_(&writePtr, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 882, ASSERT_TYPE_ASSERT, "(AddMaterialToBuffer<true>( writePtr, materialImageList->materialIndex ))", (const char *)&queryFormat, "AddMaterialToBuffer<true>( writePtr, materialImageList->materialIndex )") )
        __debugbreak();
      ++v7;
      v9 += 4 * *((unsigned __int16 *)v9 + 1) + 4;
      v8 = context->oldTableEnd;
    }
    while ( (unsigned __int64)v9 < v8 );
    v6 = v22;
  }
  if ( (unsigned __int64)v9 > v8 )
  {
    LODWORD(v20) = v8;
    LODWORD(v19) = (_DWORD)v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 891, ASSERT_TYPE_ASSERT, "( ptr ) <= ( context.oldTableEnd )", "%s <= %s\n\t%i, %i", "ptr", "context.oldTableEnd", v19, v20) )
      __debugbreak();
  }
  MaterialImageTable_ValidateEmptyGap(context, untilMaterialIndexToSkip);
  v13 = context->writePtr;
  if ( v9 - v6 + v13 - context->startWritePtr > 916480 )
  {
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "MaterialImageTable_CopyFromOldTableUnchangedEntries", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 901, "Out of scratch memory in MaterialImageTable_CopyFromOldTableUnchangedEntries");
    v13 = context->writePtr;
  }
  memcpy_0(v13, v6, v9 - v6);
  v14 = context->writePtr;
  context->entryCount += v7;
  v15 = &v14[v9 - v6];
  context->writePtr = v15;
  if ( (unsigned __int64)v9 < context->oldTableEnd && *(unsigned __int16 *)v9 == untilMaterialIndexToSkip )
  {
    v16 = *((unsigned __int16 *)v9 + 1);
    context->lastWritePtr = v15;
    context->oldTablePtr = (unsigned __int64)&v9[4 * v16 + 4];
  }
  else
  {
    context->oldTablePtr = (unsigned __int64)v9;
    context->lastWritePtr = v15;
  }
}

/*
==============
MaterialImageTable_ValidateEmptyGap
==============
*/
void MaterialImageTable_ValidateEmptyGap(TableBuildContext *context, const unsigned int untilMaterialIndex)
{
  unsigned int validateIndex; 
  __int64 v5; 
  __int64 v6; 

  validateIndex = context->validateIndex;
  if ( validateIndex >= untilMaterialIndex )
  {
    context->validateIndex = validateIndex + 1;
  }
  else
  {
    do
    {
      if ( validateIndex >= 0xB400 )
      {
        LODWORD(v6) = 46080;
        LODWORD(v5) = validateIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (validateIndex & 0x1F)) & s_streamCombineTablesGlob.validMaterials.array[(unsigned __int64)validateIndex >> 5]) != 0 && AddMaterialToBufferCheckOnly(context->validateIndex) )
      {
        LODWORD(v5) = context->validateIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 850, ASSERT_TYPE_ASSERT, "( ( !AddMaterialToBufferCheckOnly( context.validateIndex ) ) )", "( context.validateIndex ) = %i", v5) )
          __debugbreak();
      }
      validateIndex = context->validateIndex + 1;
      context->validateIndex = validateIndex;
    }
    while ( validateIndex < untilMaterialIndex );
    context->validateIndex = validateIndex + 1;
  }
}

/*
==============
ModelMaterialTable_CopyFromOldTableUnchangedEntries
==============
*/
void ModelMaterialTable_CopyFromOldTableUnchangedEntries(TableBuildContext *context, unsigned int untilModelIndexToSkip)
{
  unsigned __int64 oldTablePtr; 
  unsigned __int64 oldTableEnd; 
  unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  __int16 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int8 *writePtr; 
  unsigned __int8 *v21; 

  oldTablePtr = context->oldTablePtr;
  oldTableEnd = context->oldTableEnd;
  if ( oldTablePtr > oldTableEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 479, ASSERT_TYPE_ASSERT, "( context.oldTablePtr ) <= ( context.oldTableEnd )", "%s <= %s\n\t%lli, %lli", "context.oldTablePtr", "context.oldTableEnd", oldTablePtr, oldTableEnd) )
    __debugbreak();
  v6 = (unsigned __int8 *)context->oldTablePtr;
  v7 = 0;
  v8 = context->oldTableEnd;
  v9 = v6;
  v21 = v6;
  if ( (unsigned __int64)v6 < v8 )
  {
    do
    {
      v10 = *(unsigned __int16 *)v9;
      if ( (unsigned int)v10 >= untilModelIndexToSkip )
        break;
      if ( (unsigned int)v10 >= 0x6000 )
      {
        LODWORD(v17) = 24576;
        LODWORD(v16) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v10 & 0x1F)) & s_streamCombineTablesGlob.validModels.array[v10 >> 5]) == 0 )
      {
        LODWORD(v16) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 490, ASSERT_TYPE_ASSERT, "( ( s_streamCombineTablesGlob.validModels.testBit( modelMaterialList->modelIndex ) ) )", "( modelMaterialList->modelIndex ) = %i", v16) )
          __debugbreak();
      }
      v11 = *(unsigned __int16 *)v9;
      if ( (unsigned int)v11 >= 0x6000 )
      {
        LODWORD(v17) = 24576;
        LODWORD(v16) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v11 & 0x1F)) & s_streamCombineTablesGlob.modifiedModels.array[v11 >> 5]) != 0 )
      {
        LODWORD(v16) = *(unsigned __int16 *)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 491, ASSERT_TYPE_ASSERT, "( ( !s_streamCombineTablesGlob.modifiedModels.testBit( modelMaterialList->modelIndex ) ) )", "( modelMaterialList->modelIndex ) = %i", v16) )
          __debugbreak();
      }
      ModelMaterialTable_ValidateEmptyGap(context, *(unsigned __int16 *)v9);
      v12 = *(unsigned __int16 *)v9;
      writePtr = v9;
      if ( !AddModelToBuffer_1_(&writePtr, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 497, ASSERT_TYPE_ASSERT, "(AddModelToBuffer<true>( writePtr, modelMaterialList->modelIndex ))", (const char *)&queryFormat, "AddModelToBuffer<true>( writePtr, modelMaterialList->modelIndex )") )
        __debugbreak();
      ++v7;
      v9 += 6 * ((unsigned __int16)(*((_WORD *)v9 + 1) + 1) & 0xFFFE) + 4;
      v8 = context->oldTableEnd;
    }
    while ( (unsigned __int64)v9 < v8 );
    v6 = v21;
  }
  if ( (unsigned __int64)v9 > v8 )
  {
    LODWORD(v19) = v8;
    LODWORD(v18) = (_DWORD)v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 506, ASSERT_TYPE_ASSERT, "( ptr ) <= ( context.oldTableEnd )", "%s <= %s\n\t%i, %i", "ptr", "context.oldTableEnd", v18, v19) )
      __debugbreak();
  }
  ModelMaterialTable_ValidateEmptyGap(context, untilModelIndexToSkip);
  v13 = context->writePtr;
  if ( v9 - v6 + v13 - context->startWritePtr > 916480 )
  {
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "ModelMaterialTable_CopyFromOldTableUnchangedEntries", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 516, "Out of scratch memory in ModelMaterialTable_CopyFromOldTableUnchangedEntries");
    v13 = context->writePtr;
  }
  memcpy_0(v13, v6, v9 - v6);
  context->writePtr += v9 - v6;
  context->entryCount += v7;
  v14 = context->writePtr;
  if ( (unsigned __int64)v9 < context->oldTableEnd && *(unsigned __int16 *)v9 == untilModelIndexToSkip )
  {
    v15 = *((_WORD *)v9 + 1) + 1;
    context->lastWritePtr = v14;
    context->oldTablePtr = (unsigned __int64)&v9[6 * (v15 & 0xFFFE) + 4];
  }
  else
  {
    context->oldTablePtr = (unsigned __int64)v9;
    context->lastWritePtr = v14;
  }
}

/*
==============
ModelMaterialTable_ValidateEmptyGap
==============
*/
void ModelMaterialTable_ValidateEmptyGap(TableBuildContext *context, const unsigned int untilModelIndex)
{
  unsigned int validateIndex; 
  __int64 v5; 
  __int64 v6; 

  validateIndex = context->validateIndex;
  if ( validateIndex >= untilModelIndex )
  {
    context->validateIndex = validateIndex + 1;
  }
  else
  {
    do
    {
      if ( validateIndex >= 0x6000 )
      {
        LODWORD(v6) = 24576;
        LODWORD(v5) = validateIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (validateIndex & 0x1F)) & s_streamCombineTablesGlob.validModels.array[(unsigned __int64)validateIndex >> 5]) != 0 && AddModelToBufferCheckOnly(context->validateIndex) )
      {
        LODWORD(v5) = context->validateIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 465, ASSERT_TYPE_ASSERT, "( ( !AddModelToBufferCheckOnly( context.validateIndex ) ) )", "( context.validateIndex ) = %i", v5) )
          __debugbreak();
      }
      validateIndex = context->validateIndex + 1;
      context->validateIndex = validateIndex;
    }
    while ( validateIndex < untilModelIndex );
    context->validateIndex = validateIndex + 1;
  }
}

/*
==============
SetActiveMaterial
==============
*/
void SetActiveMaterial(XAssetHeader header, void *data)
{
  unsigned int MaterialIndex; 

  if ( !header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 938, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( (BYTE2(header.physicsLibrary[1].name) & 0x10) != 0 )
  {
    MaterialIndex = DB_GetMaterialIndex(header.material);
    bitarray_base<bitarray<46080>>::setBit((bitarray_base<bitarray<46080> > *)data, MaterialIndex);
  }
}

/*
==============
SetActiveModel
==============
*/
void SetActiveModel(XAssetHeader header, void *data)
{
  unsigned int XModelIndex; 

  if ( XModelHasMaterialsWithStreamedImages(header.model) )
  {
    XModelIndex = DB_GetXModelIndex(header.model);
    bitarray_base<bitarray<24576>>::setBit((bitarray_base<bitarray<24576> > *)data, XModelIndex);
  }
}

/*
==============
StreamCombine_MaterialImageTableUnitTests_CheckRelativeError
==============
*/
void StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(const unsigned int area, const unsigned int minArea)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int128 v8; 
  float v9; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  int v18; 

  v2 = minArea;
  v3 = area;
  v4 = Stream_CombineTables_EncodeMaterialImageScale(area, minArea);
  v5 = v4 >> 5;
  v6 = 1 << (v4 & 0x1F);
  if ( v4 >> 5 >= 0x200 )
  {
    v18 = 512;
    v17 = v4 >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 176, ASSERT_TYPE_ASSERT, "( imageScaleSqMinorUnpacked ) < ( StreamCombineTable::IMAGE_SCALE_INTERVAL_MAX )", "%s < %s\n\t%i, %i", "imageScaleSqMinorUnpacked", "StreamCombineTable::IMAGE_SCALE_INTERVAL_MAX", v17, v18) )
      __debugbreak();
  }
  v8 = 0i64;
  *(float *)&v8 = (float)v5;
  _XMM0 = v8;
  v9 = *(float *)&v8 * 0.001953125;
  if ( v9 < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 179, ASSERT_TYPE_ASSERT, "( imageScaleSqMinorScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "imageScaleSqMinorScale", "0.0f", v9, *(double *)&_XMM0) )
      __debugbreak();
  }
  if ( v9 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 180, ASSERT_TYPE_ASSERT, "( imageScaleSqMinorScale ) < ( 1.0f )", "%s < %s\n\t%g, %g", "imageScaleSqMinorScale", "1.0f", v9, DOUBLE_1_0) )
    __debugbreak();
  v11 = v9 + 1.0;
  v12 = (float)v2;
  v13 = (float)v3;
  v14 = v13 / v12;
  v15 = (float)v6;
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)(v11 * v15) - v14) & _xmm;
  if ( (float)(v16 / v14) >= 0.001953125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 784, ASSERT_TYPE_ASSERT, "( relativeError ) < ( minimumRelativeError )", "%s < %s\n\t%g, %g", "relativeError", "minimumRelativeError", (float)(v16 / v14), DOUBLE_0_001953125) )
    __debugbreak();
}

/*
==============
Stream_CombineTable_OneTimeInit
==============
*/
void Stream_CombineTable_OneTimeInit(StreamCombineTable *table, const unsigned __int64 vaSize)
{
  ScopedCriticalSection v4; 

  if ( table->vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 129, ASSERT_TYPE_ASSERT, "(0 == table.vaSize)", (const char *)&queryFormat, "0 == table.vaSize", -2i64) )
    __debugbreak();
  if ( table->memBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 130, ASSERT_TYPE_ASSERT, "(0 == table.memBegin)", (const char *)&queryFormat, "0 == table.memBegin") )
    __debugbreak();
  if ( table->memEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 131, ASSERT_TYPE_ASSERT, "(0 == table.memEnd)", (const char *)&queryFormat, "0 == table.memEnd") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v4, CRITSECT_STREAM_COMBINE_TABLES, SCOPED_CRITSECT_NORMAL);
  table->vaSize = vaSize;
  table->memBegin = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, vaSize, "StreamerCombineTables");
  table->memEnd = s_streamCombineTablesGlob.tables.materialImage.memBegin;
  table->memSize = 0i64;
  ScopedCriticalSection::~ScopedCriticalSection(&v4);
}

/*
==============
Stream_CombineTable_Resize
==============
*/
void Stream_CombineTable_Resize(StreamCombineTable *table, unsigned __int64 newSize)
{
  unsigned __int64 memBegin; 
  unsigned __int64 memSize; 
  unsigned __int8 *v6; 
  int v7; 
  unsigned int v8; 
  unsigned int outPageDeficitOrCommitCount; 
  __int64 v10; 
  StreamerMemLoan result; 

  v10 = -2i64;
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 163, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  if ( newSize == table->memSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 164, ASSERT_TYPE_ASSERT, "( newSize ) != ( table.memSize )", "%s != %s\n\t%llu, %llu", "newSize", "table.memSize", newSize, table->memSize) )
    __debugbreak();
  if ( newSize > table->vaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 165, ASSERT_TYPE_ASSERT, "( newSize ) <= ( table.vaSize )", "%s <= %s\n\t%llu, %llu", "newSize", "table.vaSize", newSize, table->vaSize) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CombineTable_Resize");
  memBegin = table->memBegin;
  memSize = table->memSize;
  v6 = (unsigned __int8 *)(newSize + memBegin);
  if ( newSize <= memSize )
  {
    Mem_Paged_DecommitSubPageMemory(&result, v6, (unsigned __int8 *)(memSize + memBegin));
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  else
  {
    outPageDeficitOrCommitCount = 0;
    if ( !Mem_Paged_CommitSubPageMemory((unsigned __int8 *)(memBegin + memSize), v6, NULL, &outPageDeficitOrCommitCount, "StreamerCombineTables") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 173, ASSERT_TYPE_ASSERT, "(Mem_Paged_CommitSubPageMemory( memStart + table.memSize, memStart + newSize, nullptr, &pageDeficitOrCommitCount , \"StreamerCombineTables\" ))", (const char *)&queryFormat, "Mem_Paged_CommitSubPageMemory( memStart + table.memSize, memStart + newSize, nullptr, &pageDeficitOrCommitCount MEM_TRACK_ARGS( \"StreamerCombineTables\" ) )") )
      __debugbreak();
  }
  v7 = truncate_cast<int,unsigned __int64>(table->memSize);
  v8 = truncate_cast<int,unsigned __int64>(newSize) - v7;
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.totalCommitSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamCombineTablesGlob.totalCommitSize) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_streamCombineTablesGlob.totalCommitSize, v8);
  table->memSize = newSize;
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CombineTables_Build
==============
*/
void Stream_CombineTables_Build(StreamCombineTables *tables, bool buildModelMaterialTable, bool buildMaterialImageTable, bool incremental)
{
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int8 startWritePtr[917512]; 

  if ( !buildModelMaterialTable && !buildMaterialImageTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1011, ASSERT_TYPE_ASSERT, "(buildModelMaterialTable || buildMaterialImageTable)", (const char *)&queryFormat, "buildModelMaterialTable || buildMaterialImageTable") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CombineTables_Build");
  v8 = (unsigned __int64)&s_streamCombineTablesGlob.rebuildingTables & 3;
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( _InterlockedIncrement(&s_streamCombineTablesGlob.rebuildingTables) != 1 )
  {
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1017, ASSERT_TYPE_ASSERT, "( Sys_InterlockedIncrement( &s_streamCombineTablesGlob.rebuildingTables ) ) == ( 1 )", "%s == %s\n\t%i, %i", "Sys_InterlockedIncrement( &s_streamCombineTablesGlob.rebuildingTables )", "1", _InterlockedIncrement(&s_streamCombineTablesGlob.rebuildingTables), 1) )
      __debugbreak();
  }
  if ( buildMaterialImageTable )
  {
    if ( incremental )
    {
      Com_PrintWarning(35, "Stream_CombineTables_Build: Unexpected incremental build for Material->Image table. This process was intended for transient updates only.\n");
      BuildMaterialImageTableIncremental(&tables->materialImage, startWritePtr);
      if ( !Sys_IsDatabaseThread() )
        goto LABEL_23;
    }
    else
    {
      if ( Sys_IsDatabaseThread() )
        Sys_EnterCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
      BuildMaterialImageTable(&tables->materialImage, startWritePtr);
      if ( Sys_IsDatabaseThread() )
        Sys_LeaveCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
    }
    Sys_YieldWorkerCmd();
  }
LABEL_23:
  if ( buildModelMaterialTable )
  {
    if ( !incremental )
    {
      if ( Sys_IsDatabaseThread() )
        Sys_EnterCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
      BuildModelMaterialTable(&tables->modelMaterial, startWritePtr);
      if ( Sys_IsDatabaseThread() )
        Sys_LeaveCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
      goto LABEL_31;
    }
    BuildModelMaterialTableIncremental(&tables->modelMaterial, startWritePtr);
    if ( Sys_IsDatabaseThread() )
LABEL_31:
      Sys_YieldWorkerCmd();
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&s_streamCombineTablesGlob.rebuildingTables, 0xFFFFFFFF) != 1 )
  {
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
      __debugbreak();
    LODWORD(v9) = _InterlockedDecrement(&s_streamCombineTablesGlob.rebuildingTables);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1057, ASSERT_TYPE_ASSERT, "( Sys_InterlockedDecrement( &s_streamCombineTablesGlob.rebuildingTables ) ) == ( 0 )", "%s == %s\n\t%i, %i", "Sys_InterlockedDecrement( &s_streamCombineTablesGlob.rebuildingTables )", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( tables->modelMaterial.isStale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1059, ASSERT_TYPE_ASSERT, "(!tables.modelMaterial.isStale)", (const char *)&queryFormat, "!tables.modelMaterial.isStale") )
    __debugbreak();
  if ( tables->materialImage.isStale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1060, ASSERT_TYPE_ASSERT, "(!tables.materialImage.isStale)", (const char *)&queryFormat, "!tables.materialImage.isStale") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CombineTables_BuildIfStale
==============
*/
void Stream_CombineTables_BuildIfStale(bool incremental)
{
  bool isStale; 
  bool v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  int v8; 
  int v9; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1066, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  isStale = s_streamCombineTablesGlob.tables.modelMaterial.isStale;
  v3 = s_streamCombineTablesGlob.tables.materialImage.isStale;
  if ( s_streamCombineTablesGlob.tables.modelMaterial.isStale || s_streamCombineTablesGlob.tables.materialImage.isStale )
  {
    v5 = " not";
    v6 = " not";
    v7 = "Full";
    if ( incremental )
      v7 = "Incremental";
    if ( s_streamCombineTablesGlob.tables.materialImage.isStale )
      v6 = (char *)&queryFormat.fmt + 3;
    if ( s_streamCombineTablesGlob.tables.modelMaterial.isStale )
      v5 = (char *)&queryFormat.fmt + 3;
    Com_Printf(35, "Stream combine tables need to be rebuilt. Model->material table is%s stale. Material->image table is%s stale. %s\n", v5, v6, v7);
    v8 = Sys_Milliseconds();
    Stream_CombineTables_Build(&s_streamCombineTablesGlob.tables, isStale, v3, incremental);
    v9 = Sys_Milliseconds();
    Com_Printf(35, "Stream combine tables rebuilt in %d ms\n", (unsigned int)(v9 - v8));
  }
  else
  {
    v4 = "Full";
    if ( incremental )
      v4 = "Incremental";
    Com_Printf(35, "Stream combine tables do not need to be rebuilt (%s)\n", v4);
  }
}

/*
==============
Stream_CombineTables_Get
==============
*/
StreamCombineTablesGlob *Stream_CombineTables_Get()
{
  return &s_streamCombineTablesGlob;
}

/*
==============
Stream_CombineTables_GetCommitSize
==============
*/
unsigned __int64 Stream_CombineTables_GetCommitSize()
{
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.totalCommitSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.totalCommitSize) )
    __debugbreak();
  return s_streamCombineTablesGlob.totalCommitSize;
}

/*
==============
Stream_CombineTables_MarkMaterialImageTableAsStale
==============
*/
void Stream_CombineTables_MarkMaterialImageTableAsStale(unsigned int materialIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 

  v1 = materialIndex;
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1147, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1148, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v5 = 46080;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  v3 = v1 >> 5;
  if ( (v2 & s_streamCombineTablesGlob.validMaterials.array[v3]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1149, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validMaterials.testBit( materialIndex )") )
    __debugbreak();
  s_streamCombineTablesGlob.tables.materialImage.isStale = 1;
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v7 = 46080;
    v6 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.modifiedMaterials.array[v3] |= v2;
}

/*
==============
Stream_CombineTables_MarkModelMaterialTableAsStale
==============
*/
void Stream_CombineTables_MarkModelMaterialTableAsStale(unsigned int modelIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 

  v1 = modelIndex;
  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1136, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1137, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v5 = 24576;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  v3 = v1 >> 5;
  if ( (v2 & s_streamCombineTablesGlob.validModels.array[v3]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1138, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validModels.testBit( modelIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validModels.testBit( modelIndex )") )
    __debugbreak();
  s_streamCombineTablesGlob.tables.modelMaterial.isStale = 1;
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v7 = 24576;
    v6 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.modifiedModels.array[v3] |= v2;
}

/*
==============
Stream_CombineTables_MaterialAdded
==============
*/
void Stream_CombineTables_MaterialAdded(unsigned int materialIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 

  v1 = materialIndex;
  if ( !DB_HasHashWriteLock() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1116, ASSERT_TYPE_ASSERT, "(DB_HasHashWriteLock())", (const char *)&queryFormat, "DB_HasHashWriteLock()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1117, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v4 = 46080;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_streamCombineTablesGlob.validMaterials.array[v1 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1118, ASSERT_TYPE_ASSERT, "(!s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ))", (const char *)&queryFormat, "!s_streamCombineTablesGlob.validMaterials.testBit( materialIndex )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v6 = 46080;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.validMaterials.array[v1 >> 5] |= v2;
}

/*
==============
Stream_CombineTables_MaterialRemoved
==============
*/
void Stream_CombineTables_MaterialRemoved(unsigned int materialIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 

  v1 = materialIndex;
  if ( !DB_HasHashWriteLock() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1126, ASSERT_TYPE_ASSERT, "(DB_HasHashWriteLock())", (const char *)&queryFormat, "DB_HasHashWriteLock()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1127, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v4 = 46080;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_streamCombineTablesGlob.validMaterials.array[v1 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1128, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validMaterials.testBit( materialIndex )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xB400 )
  {
    v6 = 46080;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.validMaterials.array[v1 >> 5] &= ~v2;
}

/*
==============
Stream_CombineTables_ModelAdded
==============
*/
void Stream_CombineTables_ModelAdded(unsigned int modelIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 

  v1 = modelIndex;
  if ( !DB_HasHashWriteLock() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1096, ASSERT_TYPE_ASSERT, "(DB_HasHashWriteLock())", (const char *)&queryFormat, "DB_HasHashWriteLock()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1097, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v4 = 24576;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_streamCombineTablesGlob.validModels.array[v1 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1098, ASSERT_TYPE_ASSERT, "(!s_streamCombineTablesGlob.validModels.testBit( modelIndex ))", (const char *)&queryFormat, "!s_streamCombineTablesGlob.validModels.testBit( modelIndex )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v6 = 24576;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.validModels.array[v1 >> 5] |= v2;
}

/*
==============
Stream_CombineTables_ModelRemoved
==============
*/
void Stream_CombineTables_ModelRemoved(unsigned int modelIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 

  v1 = modelIndex;
  if ( !DB_HasHashWriteLock() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1106, ASSERT_TYPE_ASSERT, "(DB_HasHashWriteLock())", (const char *)&queryFormat, "DB_HasHashWriteLock()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamCombineTablesGlob.rebuildingTables & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_streamCombineTablesGlob.rebuildingTables) )
    __debugbreak();
  if ( s_streamCombineTablesGlob.rebuildingTables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1107, ASSERT_TYPE_ASSERT, "(!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables ))", (const char *)&queryFormat, "!Sys_InterlockedLoad( &s_streamCombineTablesGlob.rebuildingTables )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v4 = 24576;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_streamCombineTablesGlob.validModels.array[v1 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 1108, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validModels.testBit( modelIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validModels.testBit( modelIndex )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x6000 )
  {
    v6 = 24576;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_streamCombineTablesGlob.validModels.array[v1 >> 5] &= ~v2;
}

/*
==============
Stream_CombineTables_OneTimeInit
==============
*/
void Stream_CombineTables_OneTimeInit(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int i; 
  unsigned int v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __m256i Src; 
  __m256i v10; 
  __m256i v11; 
  char v12[5760]; 
  char v13[5760]; 
  char v14[3072]; 
  char v15[3072]; 
  volatile int v16; 
  volatile int v17; 
  char v18[17776]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 144, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  *(_OWORD *)Src.m256i_i8 = (unsigned __int64)MEM_PAGE_RANGE_INVALID_4;
  *(_OWORD *)&Src.m256i_u64[2] = 0ui64;
  v10.m256i_i64[0] = 0i64;
  v10.m256i_i32[2] = 0;
  v10.m256i_i8[12] = 0;
  memset_0(v12, 0, 0x4508ui64);
  *(_OWORD *)&v10.m256i_u64[2] = (unsigned __int64)MEM_PAGE_RANGE_INVALID_4;
  memset(&v11, 0, 29);
  memcpy_0(v18, &Src, 0x4568ui64);
  *(__m256i *)&s_streamCombineTablesGlob.tables.materialImage.pages.firstPageID = Src;
  *(__m256i *)&s_streamCombineTablesGlob.tables.modelMaterial.memBegin = v11;
  *(__m256i *)&s_streamCombineTablesGlob.tables.materialImage.memSize = v10;
  memcpy_0(&s_streamCombineTablesGlob.validMaterials, v12, sizeof(s_streamCombineTablesGlob.validMaterials));
  memcpy_0(&s_streamCombineTablesGlob.modifiedMaterials, v13, sizeof(s_streamCombineTablesGlob.modifiedMaterials));
  memcpy_0(&s_streamCombineTablesGlob.validModels, v14, sizeof(s_streamCombineTablesGlob.validModels));
  memcpy_0(&s_streamCombineTablesGlob.modifiedModels, v15, sizeof(s_streamCombineTablesGlob.modifiedModels));
  s_streamCombineTablesGlob.totalCommitSize = v16;
  s_streamCombineTablesGlob.rebuildingTables = v17;
  Stream_CombineTable_OneTimeInit(&s_streamCombineTablesGlob.tables.materialImage, 0x470000ui64);
  Stream_CombineTable_OneTimeInit(&s_streamCombineTablesGlob.tables.modelMaterial, 0x140000ui64);
  v0 = Stream_CombineTables_EncodeMaterialImageScale(1u, 1u);
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 811, ASSERT_TYPE_ASSERT, "( minEncoding ) == ( 0 )", "%s == %s\n\t%i, %i", "minEncoding", "0", v0, 0i64) )
    __debugbreak();
  v1 = Stream_CombineTables_EncodeMaterialImageScale(0xFFFE0001, 1u);
  if ( v1 != 0x3FFF )
  {
    LODWORD(v8) = 0x3FFF;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 814, ASSERT_TYPE_ASSERT, "( maxEncoding ) == ( ( ( 1u << StreamCombineTable::IMAGE_SCALE_BITS ) - 1 ) )", "%s == %s\n\t%i, %i", "maxEncoding", "( ( 1u << StreamCombineTable::IMAGE_SCALE_BITS ) - 1 )", v7, v8) )
      __debugbreak();
  }
  StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(0xFFFE0001, 1u);
  StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(0xFFFE0001, 4u);
  StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(4u, 1u);
  StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(4u, 4u);
  for ( i = 1; i < 0x10; ++i )
  {
    v3 = 1;
    v4 = 2;
    v5 = __ROL4__(1, i);
    do
    {
      StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(v4 * v5, 1u);
      StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(v4 * v5, 4u);
      v6 = v4 * v5 + v4 * v5 / (v3 + i);
      StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(v6, 1u);
      StreamCombine_MaterialImageTableUnitTests_CheckRelativeError(v6, 4u);
      ++v3;
      v4 = __ROL4__(v4, 1);
    }
    while ( v3 < 0x10 );
  }
}

/*
==============
TableBuildContext_Init
==============
*/
void TableBuildContext_Init(TableBuildContext *context, const StreamCombineTable *table, unsigned __int8 *scratchBuffer)
{
  unsigned __int64 memEnd; 

  if ( !scratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 254, ASSERT_TYPE_ASSERT, "( scratchBuffer ) != ( nullptr )", "%s != %s\n\t%p, %p", "scratchBuffer", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !table->memBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 255, ASSERT_TYPE_ASSERT, "( table.memBegin ) != ( 0 )", "%s != %s\n\t%llu, %llu", "table.memBegin", "0", 0i64, 0i64) )
    __debugbreak();
  if ( !table->memEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 256, ASSERT_TYPE_ASSERT, "( table.memEnd ) != ( 0 )", "%s != %s\n\t%llu, %llu", "table.memEnd", "0", 0i64, 0i64) )
    __debugbreak();
  context->startWritePtr = scratchBuffer;
  context->writePtr = scratchBuffer;
  context->entryCount = 0;
  context->oldTablePtr = table->memBegin;
  memEnd = table->memEnd;
  context->writeHighWatermark = 0;
  context->lastWritePtr = scratchBuffer;
  context->validateIndex = 0;
  context->oldTableEnd = memEnd;
}

/*
==============
ValidateMaterials
==============
*/
char ValidateMaterials()
{
  unsigned __int64 v0; 
  int *v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  int inData[1440]; 

  LOBYTE(v0) = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_comprehensiveSanityChecks, "db_comprehensiveSanityChecks");
  if ( (_BYTE)v0 )
  {
    v1 = inData;
    v2 = 0;
    v3 = 90i64;
    do
    {
      *(_QWORD *)v1 = 0i64;
      *((_QWORD *)v1 + 1) = 0i64;
      *((_QWORD *)v1 + 2) = 0i64;
      v1 += 16;
      *((_QWORD *)v1 - 5) = 0i64;
      *((_QWORD *)v1 - 4) = 0i64;
      *((_QWORD *)v1 - 3) = 0i64;
      *((_QWORD *)v1 - 2) = 0i64;
      *((_QWORD *)v1 - 1) = 0i64;
      --v3;
    }
    while ( v3 );
    DB_EnumXAssets(ASSET_TYPE_MATERIAL, SetActiveMaterial, inData, 0);
    v4 = 0i64;
    do
    {
      v0 = v4 >> 5;
      v5 = 0x80000000 >> (v2 & 0x1F);
      v6 = v4 >> 5;
      if ( (v5 & s_streamCombineTablesGlob.validMaterials.array[v6]) == 0 && (v5 & inData[v6]) != 0 )
      {
        LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 245, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ) || !activeMaterials.testBit( materialIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validMaterials.testBit( materialIndex ) || !activeMaterials.testBit( materialIndex )");
        if ( (_BYTE)v0 )
          __debugbreak();
      }
      ++v2;
      ++v4;
    }
    while ( v2 < 0xB400 );
  }
  return v0;
}

/*
==============
ValidateModels
==============
*/
char ValidateModels()
{
  unsigned __int64 v0; 
  int *v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  int inData[768]; 

  LOBYTE(v0) = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_db_comprehensiveSanityChecks, "db_comprehensiveSanityChecks");
  if ( (_BYTE)v0 )
  {
    v1 = inData;
    v2 = 0;
    v3 = 48i64;
    do
    {
      *(_QWORD *)v1 = 0i64;
      *((_QWORD *)v1 + 1) = 0i64;
      *((_QWORD *)v1 + 2) = 0i64;
      v1 += 16;
      *((_QWORD *)v1 - 5) = 0i64;
      *((_QWORD *)v1 - 4) = 0i64;
      *((_QWORD *)v1 - 3) = 0i64;
      *((_QWORD *)v1 - 2) = 0i64;
      *((_QWORD *)v1 - 1) = 0i64;
      --v3;
    }
    while ( v3 );
    DB_EnumXAssets(ASSET_TYPE_XMODEL, SetActiveModel, inData, 0);
    v4 = 0i64;
    do
    {
      v0 = v4 >> 5;
      v5 = 0x80000000 >> (v2 & 0x1F);
      v6 = v4 >> 5;
      if ( (v5 & s_streamCombineTablesGlob.validModels.array[v6]) == 0 && (v5 & inData[v6]) != 0 )
      {
        LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.cpp", 214, ASSERT_TYPE_ASSERT, "(s_streamCombineTablesGlob.validModels.testBit( modelIndex ) || !activeModels.testBit( modelIndex ))", (const char *)&queryFormat, "s_streamCombineTablesGlob.validModels.testBit( modelIndex ) || !activeModels.testBit( modelIndex )");
        if ( (_BYTE)v0 )
          __debugbreak();
      }
      ++v2;
      ++v4;
    }
    while ( v2 < 0x6000 );
  }
  return v0;
}

