/*
==============
Load_SpatialPartition_Tree
==============
*/

void __fastcall Load_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  ?Load_SpatialPartition_Tree@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_SpatialPartition_TreeArray
==============
*/

void __fastcall Load_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_SpatialPartition_TreeArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPostload_SpatialPartition_Tree
==============
*/

SpatialPartition_Tree *__fastcall AllocPostload_SpatialPartition_Tree()
{
  return ?AllocPostload_SpatialPartition_Tree@@YAPEAUSpatialPartition_Tree@@XZ();
}

/*
==============
Preload_SpatialPartition_TreeStream
==============
*/

void __fastcall Preload_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_SpatialPartition_TreeStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Load_ProcessStructLayout_SpatialPartition_Tree
==============
*/

void Load_ProcessStructLayout_SpatialPartition_Tree(void)
{
  ?Load_ProcessStructLayout_SpatialPartition_Tree@@YAXXZ();
}

/*
==============
Postload_SpatialPartition_Tree
==============
*/

void __fastcall Postload_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  ?Postload_SpatialPartition_Tree@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Preload_SpatialPartition_Tree
==============
*/

void __fastcall Preload_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  ?Preload_SpatialPartition_Tree@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Mark_SpatialPartition_TreeArray
==============
*/

int __fastcall Mark_SpatialPartition_TreeArray(const unsigned __int64 count)
{
  return ?Mark_SpatialPartition_TreeArray@@YAH_K@Z(count);
}

/*
==============
Mark_SpatialPartition_Tree
==============
*/

int __fastcall Mark_SpatialPartition_Tree()
{
  return ?Mark_SpatialPartition_Tree@@YAHXZ();
}

/*
==============
AllocLoad_SpatialPartition_Tree
==============
*/

SpatialPartition_Tree *__fastcall AllocLoad_SpatialPartition_Tree()
{
  return ?AllocLoad_SpatialPartition_Tree@@YAPEAUSpatialPartition_Tree@@XZ();
}

/*
==============
Postload_SpatialPartition_TreeArray
==============
*/

void __fastcall Postload_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_SpatialPartition_TreeArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Postload_SpatialPartition_TreeStream
==============
*/

void __fastcall Postload_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_SpatialPartition_TreeStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Load_SpatialPartition_TreeStream
==============
*/

void __fastcall Load_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_SpatialPartition_TreeStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPreload_SpatialPartition_Tree
==============
*/

SpatialPartition_Tree *__fastcall AllocPreload_SpatialPartition_Tree()
{
  return ?AllocPreload_SpatialPartition_Tree@@YAPEAUSpatialPartition_Tree@@XZ();
}

/*
==============
Preload_SpatialPartition_TreeArray
==============
*/

void __fastcall Preload_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_SpatialPartition_TreeArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocLoad_SpatialPartition_Tree
==============
*/
SpatialPartition_Tree *AllocLoad_SpatialPartition_Tree()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (SpatialPartition_Tree *)g_streamPosGlob.pos;
}

/*
==============
AllocPostload_SpatialPartition_Tree
==============
*/
SpatialPartition_Tree *AllocPostload_SpatialPartition_Tree()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (SpatialPartition_Tree *)g_streamPosGlob.pos;
}

/*
==============
AllocPreload_SpatialPartition_Tree
==============
*/
SpatialPartition_Tree *AllocPreload_SpatialPartition_Tree()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (SpatialPartition_Tree *)g_streamPosGlob.pos;
}

/*
==============
Load_ProcessStructLayout_SpatialPartition_Tree
==============
*/
void Load_ProcessStructLayout_SpatialPartition_Tree(void)
{
  if ( Load_RegisterStructSize("SpatialPartition_Tree", 0x9861EC4D, 0x18ui64, 8ui64) )
  {
    Load_RegisterStructMemberSize("SpatialPartition_Tree", 0x9861EC4D, "uint8_t", 0x2BA45D81u, "tree", 0xD254ADB8, 0i64, 8ui64, 0i64, 1, 0);
    Load_ProcessStructLayout_uint8_t();
    Load_RegisterStructMemberSize("SpatialPartition_Tree", 0x9861EC4D, "uint", 0x53A932A0u, "alwaysList", 0x4C5204D3u, 8ui64, 8ui64, 0i64, 1, 0);
    Load_ProcessStructLayout_uint();
    Load_RegisterStructMemberSize("SpatialPartition_Tree", 0x9861EC4D, "uint", 0x53A932A0u, "treeSize", 0x232C43E3u, 0x10ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_uint();
    Load_RegisterStructMemberSize("SpatialPartition_Tree", 0x9861EC4D, "uint", 0x53A932A0u, "alwaysListLength", 0xA1BB1EBu, 0x14ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_uint();
  }
}

/*
==============
Load_SpatialPartition_Tree
==============
*/
void Load_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  SpatialPartition_Tree *v1; 
  unsigned __int8 *tree; 
  unsigned __int8 *v3; 
  unsigned __int8 *uint8_t; 
  SpatialPartition_Tree *v5; 
  unsigned int *alwaysList; 
  unsigned int *v7; 
  unsigned int *uint; 

  Load_Stream(streamStart, varSpatialPartition_Tree, 0x18ui64);
  v1 = varSpatialPartition_Tree;
  tree = varSpatialPartition_Tree->tree;
  if ( varSpatialPartition_Tree->tree )
  {
    if ( tree == (unsigned __int8 *)-1i64 )
    {
      DB_PushSharedData();
    }
    else if ( tree != (unsigned __int8 *)-2i64 )
    {
      v1->tree = (unsigned __int8 *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->tree);
      goto LABEL_8;
    }
    v3 = varuint8_t;
    uint8_t = AllocLoad_uint8_t();
    v1->tree = uint8_t;
    varuint8_t = uint8_t;
    Load_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
    varuint8_t = v3;
    if ( tree == (unsigned __int8 *)-1i64 )
      DB_PopSharedData();
  }
LABEL_8:
  v5 = varSpatialPartition_Tree;
  alwaysList = varSpatialPartition_Tree->alwaysList;
  if ( !alwaysList )
    return;
  if ( alwaysList == (unsigned int *)-1i64 )
  {
    DB_PushSharedData();
  }
  else if ( alwaysList != (unsigned int *)-2i64 )
  {
    v5->alwaysList = (unsigned int *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->alwaysList);
    return;
  }
  v7 = varuint;
  uint = AllocLoad_uint();
  v5->alwaysList = uint;
  varuint = uint;
  Load_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
  varuint = v7;
  if ( alwaysList == (unsigned int *)-1i64 )
    DB_PopSharedData();
}

/*
==============
Load_SpatialPartition_TreeArray
==============
*/
void Load_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  SpatialPartition_Tree *i; 
  SpatialPartition_Tree *v4; 
  unsigned __int8 *tree; 
  unsigned __int8 *v6; 
  unsigned __int8 *uint8_t; 
  SpatialPartition_Tree *v8; 
  unsigned int *alwaysList; 
  unsigned int *v10; 
  unsigned int *uint; 

  v2 = count;
  Load_Stream(streamStart, varSpatialPartition_Tree, 24 * count);
  for ( i = varSpatialPartition_Tree; v2; --v2 )
  {
    varSpatialPartition_Tree = i;
    Load_Stream(NotAtStart, i, 0x18ui64);
    v4 = varSpatialPartition_Tree;
    tree = varSpatialPartition_Tree->tree;
    if ( !varSpatialPartition_Tree->tree )
      goto LABEL_9;
    if ( tree == (unsigned __int8 *)-1i64 )
    {
      DB_PushSharedData();
    }
    else if ( tree != (unsigned __int8 *)-2i64 )
    {
      v4->tree = (unsigned __int8 *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->tree);
      goto LABEL_9;
    }
    v6 = varuint8_t;
    uint8_t = AllocLoad_uint8_t();
    v4->tree = uint8_t;
    varuint8_t = uint8_t;
    Load_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
    varuint8_t = v6;
    if ( tree == (unsigned __int8 *)-1i64 )
      DB_PopSharedData();
LABEL_9:
    v8 = varSpatialPartition_Tree;
    alwaysList = varSpatialPartition_Tree->alwaysList;
    if ( alwaysList )
    {
      if ( alwaysList == (unsigned int *)-1i64 )
      {
        DB_PushSharedData();
LABEL_14:
        v10 = varuint;
        uint = AllocLoad_uint();
        v8->alwaysList = uint;
        varuint = uint;
        Load_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
        varuint = v10;
        if ( alwaysList == (unsigned int *)-1i64 )
          DB_PopSharedData();
        goto LABEL_16;
      }
      if ( alwaysList == (unsigned int *)-2i64 )
        goto LABEL_14;
      v8->alwaysList = (unsigned int *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->alwaysList);
    }
LABEL_16:
    ++i;
  }
}

/*
==============
Load_SpatialPartition_TreeStream
==============
*/
void Load_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 
  SpatialPartition_Tree *v4; 
  unsigned __int8 *tree; 
  unsigned __int8 *v6; 
  unsigned __int8 *uint8_t; 
  SpatialPartition_Tree *v8; 
  unsigned int *alwaysList; 
  unsigned int *v10; 
  unsigned int *uint; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_spatialpartition_tree_db.h", 307, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varSpatialPartition_Tree;
    do
    {
      Load_Stream(AtStart, pos, 0x18ui64);
      v4 = varSpatialPartition_Tree;
      tree = varSpatialPartition_Tree->tree;
      if ( !varSpatialPartition_Tree->tree )
        goto LABEL_13;
      if ( tree == (unsigned __int8 *)-1i64 )
      {
        DB_PushSharedData();
      }
      else if ( tree != (unsigned __int8 *)-2i64 )
      {
        v4->tree = (unsigned __int8 *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->tree);
        goto LABEL_13;
      }
      v6 = varuint8_t;
      uint8_t = AllocLoad_uint8_t();
      v4->tree = uint8_t;
      varuint8_t = uint8_t;
      Load_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
      varuint8_t = v6;
      if ( tree == (unsigned __int8 *)-1i64 )
        DB_PopSharedData();
LABEL_13:
      v8 = varSpatialPartition_Tree;
      alwaysList = varSpatialPartition_Tree->alwaysList;
      if ( alwaysList )
      {
        if ( alwaysList == (unsigned int *)-1i64 )
        {
          DB_PushSharedData();
LABEL_18:
          v10 = varuint;
          uint = AllocLoad_uint();
          v8->alwaysList = uint;
          varuint = uint;
          Load_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
          varuint = v10;
          if ( alwaysList == (unsigned int *)-1i64 )
            DB_PopSharedData();
          goto LABEL_20;
        }
        if ( alwaysList == (unsigned int *)-2i64 )
          goto LABEL_18;
        v8->alwaysList = (unsigned int *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->alwaysList);
      }
LABEL_20:
      pos = g_streamPosGlob.pos;
      varSpatialPartition_Tree = (SpatialPartition_Tree *)g_streamPosGlob.pos;
      --count;
    }
    while ( count );
  }
}

/*
==============
Mark_SpatialPartition_Tree
==============
*/
__int64 Mark_SpatialPartition_Tree()
{
  return 1i64;
}

/*
==============
Mark_SpatialPartition_TreeArray
==============
*/
__int64 Mark_SpatialPartition_TreeArray(const unsigned __int64 count)
{
  return 1i64;
}

/*
==============
Postload_SpatialPartition_Tree
==============
*/
void Postload_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  SpatialPartition_Tree *v2; 
  unsigned __int8 *tree; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  SpatialPartition_Tree *v6; 
  unsigned int *alwaysList; 
  unsigned int *v8; 
  unsigned int *v9; 

  if ( streamStart != (varSpatialPartition_Tree != (SpatialPartition_Tree *)g_streamPosGlob.pos) )
    DB_PatchMem_ValidatePostloadStream(streamStart, varSpatialPartition_Tree, 0x18ui64);
  if ( streamStart != NotAtStart )
    DB_IncStreamPos(0x18ui64);
  v2 = varSpatialPartition_Tree;
  tree = varSpatialPartition_Tree->tree;
  if ( varSpatialPartition_Tree->tree )
  {
    if ( tree == (unsigned __int8 *)-1i64 )
    {
      DB_PushSharedData();
    }
    else if ( tree != (unsigned __int8 *)-2i64 )
    {
      v2->tree = (unsigned __int8 *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->tree);
      goto LABEL_12;
    }
    v4 = varuint8_t;
    v5 = AllocPostload_uint8_t();
    v2->tree = v5;
    varuint8_t = v5;
    Postload_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
    varuint8_t = v4;
    if ( tree == (unsigned __int8 *)-1i64 )
      DB_PopSharedData();
  }
LABEL_12:
  v6 = varSpatialPartition_Tree;
  alwaysList = varSpatialPartition_Tree->alwaysList;
  if ( !alwaysList )
    return;
  if ( alwaysList == (unsigned int *)-1i64 )
  {
    DB_PushSharedData();
  }
  else if ( alwaysList != (unsigned int *)-2i64 )
  {
    v6->alwaysList = (unsigned int *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->alwaysList);
    return;
  }
  v8 = varuint;
  v9 = AllocPostload_uint();
  v6->alwaysList = v9;
  varuint = v9;
  Postload_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
  varuint = v8;
  if ( alwaysList == (unsigned int *)-1i64 )
    DB_PopSharedData();
}

/*
==============
Postload_SpatialPartition_TreeArray
==============
*/
void Postload_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  SpatialPartition_Tree *i; 

  v2 = count;
  Postload_Stream_6(streamStart, varSpatialPartition_Tree, 24 * count);
  for ( i = varSpatialPartition_Tree; v2; --v2 )
  {
    varSpatialPartition_Tree = i;
    Postload_SpatialPartition_Tree(NotAtStart);
    ++i;
  }
}

/*
==============
Postload_SpatialPartition_TreeStream
==============
*/
void Postload_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 
  SpatialPartition_Tree *v4; 
  unsigned __int8 *tree; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  SpatialPartition_Tree *v8; 
  unsigned int *alwaysList; 
  unsigned int *v10; 
  unsigned int *v11; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_spatialpartition_tree_db.h", 519, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varSpatialPartition_Tree;
    do
    {
      if ( pos != g_streamPosGlob.pos )
        DB_PatchMem_ValidatePostloadStream(AtStart, pos, 0x18ui64);
      if ( !g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
        __debugbreak();
      DB_CheckCanIncStreamPos(0x18ui64);
      g_streamPosGlob.pos += 24;
      v4 = varSpatialPartition_Tree;
      tree = varSpatialPartition_Tree->tree;
      if ( varSpatialPartition_Tree->tree )
      {
        if ( tree == (unsigned __int8 *)-1i64 )
        {
          DB_PushSharedData();
        }
        else if ( tree != (unsigned __int8 *)-2i64 )
        {
          v4->tree = (unsigned __int8 *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->tree);
          goto LABEL_18;
        }
        v6 = varuint8_t;
        v7 = AllocPostload_uint8_t();
        v4->tree = v7;
        varuint8_t = v7;
        Postload_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
        varuint8_t = v6;
        if ( tree == (unsigned __int8 *)-1i64 )
          DB_PopSharedData();
      }
LABEL_18:
      v8 = varSpatialPartition_Tree;
      alwaysList = varSpatialPartition_Tree->alwaysList;
      if ( alwaysList )
      {
        if ( alwaysList == (unsigned int *)-1i64 )
        {
          DB_PushSharedData();
LABEL_23:
          v10 = varuint;
          v11 = AllocPostload_uint();
          v8->alwaysList = v11;
          varuint = v11;
          Postload_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
          varuint = v10;
          if ( alwaysList == (unsigned int *)-1i64 )
            DB_PopSharedData();
          goto LABEL_25;
        }
        if ( alwaysList == (unsigned int *)-2i64 )
          goto LABEL_23;
        v8->alwaysList = (unsigned int *)DB_ResolvePackedOffsetAddress((const unsigned __int64)varSpatialPartition_Tree->alwaysList);
      }
LABEL_25:
      pos = g_streamPosGlob.pos;
      varSpatialPartition_Tree = (SpatialPartition_Tree *)g_streamPosGlob.pos;
      --count;
    }
    while ( count );
  }
}

/*
==============
Preload_SpatialPartition_Tree
==============
*/
void Preload_SpatialPartition_Tree(const DBStreamStart streamStart)
{
  unsigned __int8 *tree; 
  unsigned __int8 *v2; 
  unsigned int *alwaysList; 
  unsigned int *v4; 

  Load_Stream(streamStart, varSpatialPartition_Tree, 0x18ui64);
  tree = varSpatialPartition_Tree->tree;
  if ( varSpatialPartition_Tree->tree )
  {
    if ( tree == (unsigned __int8 *)-1i64 )
    {
      DB_PushSharedData();
    }
    else if ( tree != (unsigned __int8 *)-2i64 )
    {
      goto LABEL_8;
    }
    v2 = varuint8_t;
    varuint8_t = AllocPreload_uint8_t();
    Preload_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
    varuint8_t = v2;
    if ( tree == (unsigned __int8 *)-1i64 )
      DB_PopSharedData();
  }
LABEL_8:
  alwaysList = varSpatialPartition_Tree->alwaysList;
  if ( !alwaysList )
    return;
  if ( alwaysList == (unsigned int *)-1i64 )
  {
    DB_PushSharedData();
  }
  else if ( alwaysList != (unsigned int *)-2i64 )
  {
    return;
  }
  v4 = varuint;
  varuint = AllocPreload_uint();
  Preload_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
  varuint = v4;
  if ( alwaysList == (unsigned int *)-1i64 )
    DB_PopSharedData();
}

/*
==============
Preload_SpatialPartition_TreeArray
==============
*/
void Preload_SpatialPartition_TreeArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  SpatialPartition_Tree *i; 
  unsigned __int8 *tree; 
  unsigned __int8 *v5; 
  unsigned int *alwaysList; 
  unsigned int *v7; 

  v2 = count;
  Load_Stream(streamStart, varSpatialPartition_Tree, 24 * count);
  for ( i = varSpatialPartition_Tree; v2; --v2 )
  {
    varSpatialPartition_Tree = i;
    Load_Stream(NotAtStart, i, 0x18ui64);
    tree = varSpatialPartition_Tree->tree;
    if ( !varSpatialPartition_Tree->tree )
      goto LABEL_9;
    if ( tree == (unsigned __int8 *)-1i64 )
    {
      DB_PushSharedData();
    }
    else if ( tree != (unsigned __int8 *)-2i64 )
    {
      goto LABEL_9;
    }
    v5 = varuint8_t;
    varuint8_t = AllocPreload_uint8_t();
    Preload_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
    varuint8_t = v5;
    if ( tree == (unsigned __int8 *)-1i64 )
      DB_PopSharedData();
LABEL_9:
    alwaysList = varSpatialPartition_Tree->alwaysList;
    if ( alwaysList )
    {
      if ( alwaysList == (unsigned int *)-1i64 )
      {
        DB_PushSharedData();
LABEL_14:
        v7 = varuint;
        varuint = AllocPreload_uint();
        Preload_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
        varuint = v7;
        if ( alwaysList == (unsigned int *)-1i64 )
          DB_PopSharedData();
        goto LABEL_16;
      }
      if ( alwaysList == (unsigned int *)-2i64 )
        goto LABEL_14;
    }
LABEL_16:
    ++i;
  }
}

/*
==============
Preload_SpatialPartition_TreeStream
==============
*/
void Preload_SpatialPartition_TreeStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 
  unsigned __int8 *tree; 
  unsigned __int8 *v5; 
  unsigned int *alwaysList; 
  unsigned int *v7; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_spatialpartition_tree_db.h", 720, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varSpatialPartition_Tree;
    do
    {
      Load_Stream(AtStart, pos, 0x18ui64);
      tree = varSpatialPartition_Tree->tree;
      if ( !varSpatialPartition_Tree->tree )
        goto LABEL_13;
      if ( tree == (unsigned __int8 *)-1i64 )
      {
        DB_PushSharedData();
      }
      else if ( tree != (unsigned __int8 *)-2i64 )
      {
        goto LABEL_13;
      }
      v5 = varuint8_t;
      varuint8_t = AllocPreload_uint8_t();
      Preload_uint8_tArray(AtStart, varSpatialPartition_Tree->treeSize);
      varuint8_t = v5;
      if ( tree == (unsigned __int8 *)-1i64 )
        DB_PopSharedData();
LABEL_13:
      alwaysList = varSpatialPartition_Tree->alwaysList;
      if ( alwaysList )
      {
        if ( alwaysList == (unsigned int *)-1i64 )
        {
          DB_PushSharedData();
LABEL_18:
          v7 = varuint;
          varuint = AllocPreload_uint();
          Preload_uintArray(AtStart, varSpatialPartition_Tree->alwaysListLength);
          varuint = v7;
          if ( alwaysList == (unsigned int *)-1i64 )
            DB_PopSharedData();
          goto LABEL_20;
        }
        if ( alwaysList == (unsigned int *)-2i64 )
          goto LABEL_18;
      }
LABEL_20:
      pos = g_streamPosGlob.pos;
      varSpatialPartition_Tree = (SpatialPartition_Tree *)g_streamPosGlob.pos;
      --count;
    }
    while ( count );
  }
}

