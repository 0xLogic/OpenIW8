/*
==============
DB_XModelLookups_Release
==============
*/

void __fastcall DB_XModelLookups_Release(const XModel *model)
{
  ?DB_XModelLookups_Release@@YAXPEBUXModel@@@Z(model);
}

/*
==============
DB_XModelLookups_Swap
==============
*/

void __fastcall DB_XModelLookups_Swap(const XModel *fromModel, const XModel *toModel)
{
  ?DB_XModelLookups_Swap@@YAXPEBUXModel@@0@Z(fromModel, toModel);
}

/*
==============
DB_XModelLookups_Move
==============
*/

void __fastcall DB_XModelLookups_Move(const XModel *fromModel, const XModel *toModel)
{
  ?DB_XModelLookups_Move@@YAXPEBUXModel@@0@Z(fromModel, toModel);
}

/*
==============
DB_ModelFixup_FixXModelSurf
==============
*/

void __fastcall DB_ModelFixup_FixXModelSurf(const XModel *model, XModelLodInfo *lodInfo, const XModelSurfs *modelSurfs)
{
  ?DB_ModelFixup_FixXModelSurf@@YAXPEBUXModel@@PEAUXModelLodInfo@@PEBUXModelSurfs@@@Z(model, lodInfo, modelSurfs);
}

/*
==============
DB_XModelLookups_Create
==============
*/

void __fastcall DB_XModelLookups_Create(const XModel *model)
{
  ?DB_XModelLookups_Create@@YAXPEBUXModel@@@Z(model);
}

/*
==============
DB_XModelLookups_Copy
==============
*/

void __fastcall DB_XModelLookups_Copy(const XModel *fromModel, const XModel *toModel)
{
  ?DB_XModelLookups_Copy@@YAXPEBUXModel@@0@Z(fromModel, toModel);
}

/*
==============
DB_ModelFixup_CheckFixupAll
==============
*/

void DB_ModelFixup_CheckFixupAll(void)
{
  ?DB_ModelFixup_CheckFixupAll@@YAXXZ();
}

/*
==============
DB_ModelFixup_SetDefaultSurfs
==============
*/

void __fastcall DB_ModelFixup_SetDefaultSurfs(XSurface *surface)
{
  ?DB_ModelFixup_SetDefaultSurfs@@YAXPEAUXSurface@@@Z(surface);
}

/*
==============
DB_ModelFixup_TryFullFixup
==============
*/

void DB_ModelFixup_TryFullFixup(void)
{
  ?DB_ModelFixup_TryFullFixup@@YAXXZ();
}

/*
==============
DB_MarkXModelSurfsForFixup
==============
*/

void __fastcall DB_MarkXModelSurfsForFixup(const XModelSurfs *modelSurfs)
{
  ?DB_MarkXModelSurfsForFixup@@YAXPEBUXModelSurfs@@@Z(modelSurfs);
}

/*
==============
DB_ModelFixup_FixXModel
==============
*/

void __fastcall DB_ModelFixup_FixXModel(XModel *model)
{
  ?DB_ModelFixup_FixXModel@@YAXPEAUXModel@@@Z(model);
}

/*
==============
DB_ModelFixup_Init
==============
*/

void DB_ModelFixup_Init(void)
{
  ?DB_ModelFixup_Init@@YAXXZ();
}

/*
==============
DB_ModelFixup_TryTransientFixup
==============
*/

void __fastcall DB_ModelFixup_TryTransientFixup(const DB_ZoneBitArray *zones)
{
  ?DB_ModelFixup_TryTransientFixup@@YAXAEBUDB_ZoneBitArray@@@Z(zones);
}

/*
==============
XModelLookupTable::AddXModelLookup
==============
*/

void __fastcall XModelLookupTable::AddXModelLookup(XModelLookupTable *this, const unsigned int xmodelSurfsIndex, const unsigned int xmodelIndex)
{
  ?AddXModelLookup@XModelLookupTable@@QEAAXII@Z(this, xmodelSurfsIndex, xmodelIndex);
}

/*
==============
XModelLookupTable::XModelNodeFreeList::GetNodeIndex
==============
*/

unsigned __int16 __fastcall XModelLookupTable::XModelNodeFreeList::GetNodeIndex(XModelLookupTable::XModelNodeFreeList *this, const XModelLookupTable::XModelNode *const node)
{
  return ?GetNodeIndex@XModelNodeFreeList@XModelLookupTable@@QEBAGQEBUXModelNode@2@@Z(this, node);
}

/*
==============
XModelLookupTable::FreeXModelInXModelSurfEntry
==============
*/

void __fastcall XModelLookupTable::FreeXModelInXModelSurfEntry(XModelLookupTable *this, const unsigned int xmodelSurfsIndex, const unsigned int xmodelIndex)
{
  ?FreeXModelInXModelSurfEntry@XModelLookupTable@@QEAAXII@Z(this, xmodelSurfsIndex, xmodelIndex);
}

/*
==============
DB_ModelFixup_SetDirtyFixup
==============
*/

void DB_ModelFixup_SetDirtyFixup(void)
{
  ?DB_ModelFixup_SetDirtyFixup@@YAXXZ();
}

/*
==============
DB_ModelFixup_CheckMissingModelDVar
==============
*/

void DB_ModelFixup_CheckMissingModelDVar(void)
{
  ?DB_ModelFixup_CheckMissingModelDVar@@YAXXZ();
}

/*
==============
XModelLookupTable::AddXModelLookup
==============
*/
void XModelLookupTable::AddXModelLookup(XModelLookupTable *this, const unsigned int xmodelSurfsIndex, const unsigned int xmodelIndex)
{
  __int64 v4; 
  unsigned __int16 *v6; 
  unsigned __int16 next; 
  bool v8; 
  XModelLookupTable::XModelNode *v9; 
  XModelLookupTable::XModelNode *v10; 
  unsigned __int16 v11; 
  unsigned __int16 NodeIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v4 = xmodelSurfsIndex;
  if ( xmodelSurfsIndex >= 0xB000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", xmodelSurfsIndex, 45056) )
    __debugbreak();
  if ( xmodelIndex >= 0x6000 )
  {
    LODWORD(v15) = 24576;
    LODWORD(v13) = xmodelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( (24064 + 512) )", "xmodelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0xB000 )
  {
    LODWORD(v15) = 45056;
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
    LODWORD(v16) = 45056;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( xmodelIndex >= 0x6000 )
  {
    LODWORD(v15) = 24576;
    LODWORD(v13) = xmodelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( (24064 + 512) )", "xmodelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0xB000 )
  {
    LODWORD(v15) = 45056;
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  v6 = &this->m_table[v4];
  next = *v6;
  v8 = *v6 != 0xFFFF;
  if ( *v6 != 0xFFFF )
  {
    while ( 1 )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 113, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
        __debugbreak();
      v9 = &this->m_nodePool.nodes[next];
      if ( v9->xmodelIndex == xmodelIndex )
        break;
      next = v9->next;
      v8 = next != 0xFFFF;
      if ( next == 0xFFFF )
        goto LABEL_27;
    }
    LODWORD(v15) = xmodelIndex;
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 205, ASSERT_TYPE_ASSERT, "( !FindXModel( xmodelSurfsIndex, xmodelIndex ) )", "AddXModelLookup: xmodelSurfsIndex %u, xmodelIndex %u already found", v13, v15) )
      __debugbreak();
  }
LABEL_27:
  if ( this->m_nodePool.freeHead == 0xFFFF )
  {
    if ( this->m_nodePool.allocCount != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 124, ASSERT_TYPE_ASSERT, "(allocCount == NODE_COUNT)", (const char *)&queryFormat, "allocCount == NODE_COUNT") )
      __debugbreak();
    Sys_Error((const ObfuscateErrorText)&stru_143DFE3C0);
  }
  else
  {
    v10 = &this->m_nodePool.nodes[this->m_nodePool.freeHead];
    v11 = v10->next;
    ++this->m_nodePool.allocCount;
    this->m_nodePool.freeHead = v11;
    NodeIndex = XModelLookupTable::XModelNodeFreeList::GetNodeIndex(&this->m_nodePool, v10);
    if ( NodeIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 212, ASSERT_TYPE_ASSERT, "(newNodeIndex != INVALID_NODE)", (const char *)&queryFormat, "newNodeIndex != INVALID_NODE") )
      __debugbreak();
    v10->xmodelIndex = truncate_cast<unsigned short,unsigned int>(xmodelIndex);
    v10->next = *v6;
    *v6 = NodeIndex;
  }
}

/*
==============
DB_AllocXModelLookups_WithIndex
==============
*/
void DB_AllocXModelLookups_WithIndex(const XModel *const model, const unsigned int xmodelIndex)
{
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned int *v5; 
  int v6; 
  XModelLodInfo *lodInfo; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  __int64 v10; 

  v3 = xmodelIndex;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 425, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x6000 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, 24576) )
      __debugbreak();
  }
  v4 = 0x80000000 >> (v3 & 0x1F);
  v5 = &s_modelFixup.validXModelBits.array[v3 >> 5];
  if ( (v4 & *v5) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 427, ASSERT_TYPE_ASSERT, "(!s_modelFixup.validXModelBits.testBit( xmodelIndex ))", (const char *)&queryFormat, "!s_modelFixup.validXModelBits.testBit( xmodelIndex )") )
    __debugbreak();
  v6 = 0;
  if ( model->numLods )
  {
    lodInfo = model->lodInfo;
    do
    {
      if ( !lodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      modelSurfsStaging = lodInfo->modelSurfsStaging;
      if ( lodInfo->modelSurfsStaging )
      {
        if ( !DB_IsXModelSurfsInPool(lodInfo->modelSurfsStaging) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 436, ASSERT_TYPE_ASSERT, "(DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "DB_IsXModelSurfsInPool( modelSurfs )") )
          __debugbreak();
        XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
        XModelLookupTable::AddXModelLookup(&s_modelFixup.xmodelLookupTable, XModelSurfsIndex, v3);
      }
      ++v6;
      ++lodInfo;
    }
    while ( v6 < model->numLods );
  }
  if ( (unsigned int)v3 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 24576) )
    __debugbreak();
  *v5 |= v4;
}

/*
==============
DB_CheckAllXModelLookups_WithIndex
==============
*/
char DB_CheckAllXModelLookups_WithIndex(const XModel *const model, const unsigned int xmodelIndex)
{
  int v4; 
  XModelLodInfo *lodInfo; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  __int64 v8; 
  unsigned __int16 next; 
  bool v10; 
  __int64 v12; 
  __int64 v13; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 372, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v4 = 0;
  if ( model->numLods )
  {
    lodInfo = model->lodInfo;
    do
    {
      if ( !lodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      modelSurfsStaging = lodInfo->modelSurfsStaging;
      if ( lodInfo->modelSurfsStaging )
      {
        if ( !DB_IsXModelSurfsInPool(lodInfo->modelSurfsStaging) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 381, ASSERT_TYPE_ASSERT, "(DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "DB_IsXModelSurfsInPool( modelSurfs )") )
          __debugbreak();
        XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
        v8 = XModelSurfsIndex;
        if ( XModelSurfsIndex >= 0xB000 )
        {
          LODWORD(v13) = 45056;
          LODWORD(v12) = XModelSurfsIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( xmodelIndex >= 0x6000 )
        {
          LODWORD(v13) = 24576;
          LODWORD(v12) = xmodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( (24064 + 512) )", "xmodelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( (unsigned int)v8 >= 0xB000 )
        {
          LODWORD(v13) = 45056;
          LODWORD(v12) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        next = s_modelFixup.xmodelLookupTable.m_table[v8];
        v10 = next != 0xFFFF;
        if ( next == 0xFFFF )
          return 0;
        while ( 1 )
        {
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 113, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
            __debugbreak();
          if ( s_modelFixup.xmodelLookupTable.m_nodePool.nodes[next].xmodelIndex == xmodelIndex )
            break;
          next = s_modelFixup.xmodelLookupTable.m_nodePool.nodes[next].next;
          v10 = next != 0xFFFF;
          if ( next == 0xFFFF )
            return 0;
        }
      }
      ++v4;
      ++lodInfo;
    }
    while ( v4 < model->numLods );
  }
  return 1;
}

/*
==============
DB_CheckAnyXModelLookups_WithIndex
==============
*/
char DB_CheckAnyXModelLookups_WithIndex(const XModel *const model, const unsigned int xmodelIndex)
{
  int v4; 
  XModelLodInfo *i; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  __int64 v8; 
  unsigned __int16 next; 
  bool v10; 
  __int64 v12; 
  __int64 v13; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 398, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v4 = 0;
  if ( !model->numLods )
    return 0;
  for ( i = model->lodInfo; ; ++i )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
      __debugbreak();
    modelSurfsStaging = i->modelSurfsStaging;
    if ( i->modelSurfsStaging )
    {
      if ( !DB_IsXModelSurfsInPool(i->modelSurfsStaging) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 407, ASSERT_TYPE_ASSERT, "(DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "DB_IsXModelSurfsInPool( modelSurfs )") )
        __debugbreak();
      XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
      v8 = XModelSurfsIndex;
      if ( XModelSurfsIndex >= 0xB000 )
      {
        LODWORD(v13) = 45056;
        LODWORD(v12) = XModelSurfsIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( xmodelIndex >= 0x6000 )
      {
        LODWORD(v13) = 24576;
        LODWORD(v12) = xmodelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( (24064 + 512) )", "xmodelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( (unsigned int)v8 >= 0xB000 )
      {
        LODWORD(v13) = 45056;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      next = s_modelFixup.xmodelLookupTable.m_table[v8];
      v10 = next != 0xFFFF;
      if ( next != 0xFFFF )
        break;
    }
LABEL_28:
    if ( ++v4 >= model->numLods )
      return 0;
  }
  while ( 1 )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 113, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
      __debugbreak();
    if ( s_modelFixup.xmodelLookupTable.m_nodePool.nodes[next].xmodelIndex == xmodelIndex )
      return 1;
    next = s_modelFixup.xmodelLookupTable.m_nodePool.nodes[next].next;
    v10 = next != 0xFFFF;
    if ( next == 0xFFFF )
      goto LABEL_28;
  }
}

/*
==============
DB_FreeXModelLookups_WithIndex
==============
*/
void DB_FreeXModelLookups_WithIndex(const XModel *const model, const unsigned int xmodelIndex)
{
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned int *v5; 
  int v6; 
  XModelLodInfo *lodInfo; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  __int64 v10; 

  v3 = xmodelIndex;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 450, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( DB_GetXModelIndex(model) != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 452, ASSERT_TYPE_ASSERT, "(DB_GetXModelIndex( model ) == xmodelIndex)", (const char *)&queryFormat, "DB_GetXModelIndex( model ) == xmodelIndex") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x6000 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, 24576) )
      __debugbreak();
  }
  v4 = 0x80000000 >> (v3 & 0x1F);
  v5 = &s_modelFixup.validXModelBits.array[v3 >> 5];
  if ( (v4 & *v5) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 453, ASSERT_TYPE_ASSERT, "(s_modelFixup.validXModelBits.testBit( xmodelIndex ))", (const char *)&queryFormat, "s_modelFixup.validXModelBits.testBit( xmodelIndex )") )
    __debugbreak();
  v6 = 0;
  if ( model->numLods )
  {
    lodInfo = model->lodInfo;
    do
    {
      if ( !lodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      modelSurfsStaging = lodInfo->modelSurfsStaging;
      if ( lodInfo->modelSurfsStaging )
      {
        if ( !DB_IsXModelSurfsInPool(lodInfo->modelSurfsStaging) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 462, ASSERT_TYPE_ASSERT, "(DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "DB_IsXModelSurfsInPool( modelSurfs )") )
          __debugbreak();
        XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
        XModelLookupTable::FreeXModelInXModelSurfEntry(&s_modelFixup.xmodelLookupTable, XModelSurfsIndex, v3);
      }
      ++v6;
      ++lodInfo;
    }
    while ( v6 < model->numLods );
  }
  if ( (unsigned int)v3 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 24576) )
    __debugbreak();
  *v5 &= ~v4;
}

/*
==============
DB_MarkXModelSurfsForFixup
==============
*/
void DB_MarkXModelSurfsForFixup(const XModelSurfs *modelSurfs)
{
  unsigned int XModelSurfsIndex; 
  unsigned __int64 v3; 

  if ( !modelSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 311, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
    __debugbreak();
  XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfs);
  v3 = XModelSurfsIndex;
  if ( XModelSurfsIndex >= 0xB000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", XModelSurfsIndex, 45056) )
    __debugbreak();
  s_modelFixup.dirtyModelSurfBits.array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
}

/*
==============
DB_ModelFixup_CheckFixupAll
==============
*/
void DB_ModelFixup_CheckFixupAll(void)
{
  const dvar_t *v0; 
  DB_AssetEntryPool *AssetEntryPool; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned __int64 *v5; 
  XModelFixupCheckFunctor v6; 

  v0 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFC71585, "DB_ModelFixup_CheckFixupAll");
    DB_ValidateRegistryState();
    AssetEntryPool = DB_GetAssetEntryPool();
    p_m_allocatedFlags = &DB_GetAssetEntryPool()->m_allocatedFlags;
    v3 = 0;
    v4 = 0;
    v5 = (unsigned __int64 *)p_m_allocatedFlags;
    do
    {
      DB_AssetEntryPool::ForEachInBlock<XModelFixupCheckFunctor>(AssetEntryPool, p_m_allocatedFlags, *v5, v3, &v6);
      v3 += 64;
      ++v4;
      ++v5;
    }
    while ( v4 < 0x1768 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DB_ModelFixup_CheckMissingModelDVar
==============
*/
void DB_ModelFixup_CheckMissingModelDVar(void)
{
  const dvar_t *v0; 

  if ( s_modelFixup.postBoot )
  {
    v0 = DVARBOOL_g_hideMissingXmodels;
    if ( !DVARBOOL_g_hideMissingXmodels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_hideMissingXmodels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( s_modelFixup.lastHideMissingModelsSetting != v0->current.enabled )
    {
      s_modelFixup.lastHideMissingModelsSetting = v0->current.enabled;
      DB_ModelFixup_FixupAll(0);
    }
  }
}

/*
==============
DB_ModelFixup_FixXModel
==============
*/
void DB_ModelFixup_FixXModel(XModel *model)
{
  int numLods; 
  int v3; 
  int v4; 
  XSurface **p_surfs; 
  const XModelSurfs **v6; 
  const XModelSurfs *v7; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 771, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  DB_ValidateRegistryState();
  LOBYTE(numLods) = model->numLods;
  model->flags &= 0xFFFCFFFF;
  v3 = 0;
  v4 = 0;
  if ( (_BYTE)numLods )
  {
    p_surfs = &model->lodInfo[0].surfs;
    do
    {
      v6 = (const XModelSurfs **)(p_surfs - 1);
      if ( p_surfs == (XSurface **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", (_DWORD)v6 + 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      v7 = *v6;
      if ( v7 )
      {
        if ( DB_XModelSurfsAreDefault(model, v4, v7) )
        {
          *p_surfs = NULL;
          *((_DWORD *)p_surfs + 12) = 0;
          model->flags |= 0x10000u;
          ++v3;
        }
        else
        {
          *p_surfs = v7->surfs;
          R_UGB_EnqueueXModelSurfs(v7);
        }
      }
      else
      {
        *p_surfs = NULL;
      }
      numLods = model->numLods;
      ++v4;
      p_surfs += 8;
    }
    while ( v4 < numLods );
  }
  if ( v3 == (unsigned __int8)numLods )
    model->flags |= 0x20000u;
  if ( DB_IsLoadingDebugZone() )
    XModelSetupForNewSurfaces(model);
}

/*
==============
DB_ModelFixup_FixXModelSurf
==============
*/
void DB_ModelFixup_FixXModelSurf(const XModel *model, XModelLodInfo *lodInfo, const XModelSurfs *modelSurfs)
{
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 827, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !lodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 828, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( !modelSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 829, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
    __debugbreak();
  DB_ValidateRegistryState();
  v6 = ((char *)lodInfo - (char *)model - 224) >> 6;
  if ( (unsigned __int64)(v6 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v6, "signed", ((char *)lodInfo - (char *)model - 224) >> 6) )
    __debugbreak();
  if ( (unsigned int)v6 >= model->numLods )
  {
    LODWORD(v8) = model->numLods;
    LODWORD(v7) = ((char *)lodInfo - (char *)model - 224) >> 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 836, ASSERT_TYPE_ASSERT, "(unsigned)( lodIndex ) < (unsigned)( model->numLods )", "lodIndex doesn't index model->numLods\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( DB_XModelSurfsAreDefault(model, v6, modelSurfs) )
    lodInfo->surfs = NULL;
  else
    lodInfo->surfs = modelSurfs->surfs;
}

/*
==============
DB_ModelFixup_FixupAll
==============
*/
void DB_ModelFixup_FixupAll(const bool deltaFixup)
{
  const dvar_t *v2; 
  __int64 v3; 
  unsigned int v4; 
  ModelFixupGlob *v5; 
  unsigned int v6; 
  const XModelSurfs *XModelSurfsAtIndex; 
  unsigned int XModelSurfsIndex; 
  __int64 v9; 
  unsigned __int16 next; 
  bool v11; 
  XModelLookupTable::XModelNode *v12; 
  XModel *XModelAtIndex; 
  __int64 v14; 
  DB_AssetEntryPool *AssetEntryPool; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int64 *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 

  Sys_ProfBeginNamedEvent(0xFFC71585, "DB_ModelFixup_FixupAll");
  DB_ValidateRegistryState();
  if ( !deltaFixup )
    goto LABEL_38;
  v2 = DVARBOOL_db_deltaModelFixupEnable;
  if ( !DVARBOOL_db_deltaModelFixupEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_deltaModelFixupEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LODWORD(v3) = 0;
    v24 = 0;
    v4 = s_modelFixup.dirtyModelSurfBits.array[0];
    v5 = &s_modelFixup;
    while ( v4 )
    {
LABEL_10:
      v6 = __lzcnt(v4);
      if ( v6 >= 0x20 )
      {
        LODWORD(v22) = 32;
        LODWORD(v20) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v20, v22) )
          __debugbreak();
      }
      if ( (v4 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v4 &= ~(0x80000000 >> v6);
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v6 + 32 * v3);
      if ( !XModelSurfsAtIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 900, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 602, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
          __debugbreak();
      }
      XModelSurfsIndex = DB_GetXModelSurfsIndex(XModelSurfsAtIndex);
      v9 = XModelSurfsIndex;
      if ( XModelSurfsIndex >= 0xB000 )
      {
        LODWORD(v22) = 45056;
        LODWORD(v20) = XModelSurfsIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", v20, v22) )
          __debugbreak();
        LODWORD(v23) = 45056;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v21, v23) )
          __debugbreak();
      }
      next = s_modelFixup.xmodelLookupTable.m_table[v9];
      v11 = next != 0xFFFF;
      if ( next != 0xFFFF )
      {
        do
        {
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 113, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
            __debugbreak();
          v12 = &s_modelFixup.xmodelLookupTable.m_nodePool.nodes[next];
          XModelAtIndex = DB_GetXModelAtIndex(v12->xmodelIndex);
          if ( !XModelAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 271, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          DB_ModelFixup_FixXModel(XModelAtIndex);
          next = v12->next;
          v11 = next != 0xFFFF;
        }
        while ( next != 0xFFFF );
        LODWORD(v3) = v24;
      }
    }
    while ( 1 )
    {
      v3 = (unsigned int)(v3 + 1);
      v24 = v3;
      if ( (unsigned int)v3 >= 0x580 )
        break;
      v4 = s_modelFixup.dirtyModelSurfBits.array[v3];
      if ( v4 )
        goto LABEL_10;
    }
    v14 = 88i64;
    do
    {
      *(_QWORD *)v5->dirtyModelSurfBits.array = 0i64;
      *(_QWORD *)&v5->dirtyModelSurfBits.array[2] = 0i64;
      *(_QWORD *)&v5->dirtyModelSurfBits.array[4] = 0i64;
      v5 = (ModelFixupGlob *)((char *)v5 + 64);
      *(_QWORD *)&v5[-1].xmodelLookupTable.m_table[45046] = 0i64;
      *(_QWORD *)&v5[-1].xmodelLookupTable.m_table[45050] = 0i64;
      *(_QWORD *)&v5[-1].xmodelLookupTable.m_table[45054] = 0i64;
      v5[-1].defaultSurfs = NULL;
      *(_QWORD *)&v5[-1].needFixup = 0i64;
      --v14;
    }
    while ( v14 );
  }
  else
  {
LABEL_38:
    AssetEntryPool = DB_GetAssetEntryPool();
    p_m_allocatedFlags = &DB_GetAssetEntryPool()->m_allocatedFlags;
    v17 = 0;
    v18 = 0;
    v19 = (unsigned __int64 *)p_m_allocatedFlags;
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<XModelFixupFunctor>(AssetEntryPool, p_m_allocatedFlags, *v19, v17, (XModelFixupFunctor *)&v24);
      v17 += 64;
      ++v18;
      ++v19;
    }
    while ( v18 < 0x1768 );
  }
  DB_ModelFixup_CheckFixupAll();
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_ModelFixup_Init
==============
*/
void DB_ModelFixup_Init(void)
{
  unsigned __int16 *p_next; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int16 *m_table; 
  __int64 i; 
  __int64 v6; 
  __int64 v7; 

  p_next = &s_modelFixup.xmodelLookupTable.m_nodePool.nodes[0].next;
  v1 = 1;
  s_modelFixup.xmodelLookupTable.m_nodePool.freeHead = 0;
  s_modelFixup.xmodelLookupTable.m_nodePool.allocCount = 0;
  v2 = 1i64;
  v3 = 0xFFFFi64;
  do
  {
    *(p_next - 1) = 24576;
    if ( v1 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v1, "unsigned", v2) )
      __debugbreak();
    *p_next = v1;
    ++v2;
    ++v1;
    p_next += 2;
    --v3;
  }
  while ( v3 );
  if ( s_modelFixup.xmodelLookupTable.m_nodePool.nodes[65534].next != 0xFFFF )
  {
    LODWORD(v7) = 0xFFFF;
    LODWORD(v6) = s_modelFixup.xmodelLookupTable.m_nodePool.nodes[65534].next;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 80, ASSERT_TYPE_ASSERT, "( nodes[NODE_COUNT - 1].next ) == ( INVALID_NODE )", "%s == %s\n\t%u, %u", "nodes[NODE_COUNT - 1].next", "INVALID_NODE", v6, v7) )
      __debugbreak();
  }
  m_table = s_modelFixup.xmodelLookupTable.m_table;
  for ( i = 45056i64; i; --i )
    *m_table++ = -1;
}

/*
==============
DB_ModelFixup_SetDefaultSurfs
==============
*/
void DB_ModelFixup_SetDefaultSurfs(XSurface *surface)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_g_hideMissingXmodels;
  s_modelFixup.defaultSurfs = surface;
  if ( !DVARBOOL_g_hideMissingXmodels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_hideMissingXmodels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  s_modelFixup.lastHideMissingModelsSetting = v1->current.enabled;
  s_modelFixup.postBoot = 1;
}

/*
==============
DB_ModelFixup_SetDirtyFixup
==============
*/
void DB_ModelFixup_SetDirtyFixup(void)
{
  s_modelFixup.needFixup = 1;
}

/*
==============
DB_ModelFixup_TryFullFixup
==============
*/
void DB_ModelFixup_TryFullFixup(void)
{
  DB_ModelFixup_CheckMissingModelDVar();
  if ( s_modelFixup.needFixup )
  {
    s_modelFixup.needFixup = 0;
    DB_ModelFixup_FixupAll(1);
  }
  else
  {
    DB_ModelFixup_CheckFixupAll();
  }
}

/*
==============
DB_ModelFixup_TryTransientFixup
==============
*/
void DB_ModelFixup_TryTransientFixup(const DB_ZoneBitArray *zones)
{
  __int64 v2; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  DB_ModelFixup_CheckMissingModelDVar();
  if ( s_modelFixup.needFixup )
  {
    LODWORD(v2) = 0;
    s_modelFixup.needFixup = 0;
    v3 = zones->zones.array[0];
    while ( v3 )
    {
LABEL_6:
      v4 = __lzcnt(v3);
      if ( v4 >= 0x20 )
      {
        LODWORD(v6) = 32;
        LODWORD(v5) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( (v3 & (0x80000000 >> v4)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v3 &= ~(0x80000000 >> v4);
      CL_TransientsMP_FixupModelAssets(v4 + 32 * v2);
    }
    while ( 1 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 0x3E )
        break;
      v3 = zones->zones.array[v2];
      if ( v3 )
        goto LABEL_6;
    }
  }
  else
  {
    DB_ModelFixup_CheckFixupAll();
  }
}

/*
==============
DB_XModelLookups_Copy
==============
*/
void DB_XModelLookups_Copy(const XModel *fromModel, const XModel *toModel)
{
  unsigned int XModelIndex; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !fromModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 519, ASSERT_TYPE_ASSERT, "(fromModel)", (const char *)&queryFormat, "fromModel") )
    __debugbreak();
  if ( !toModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 520, ASSERT_TYPE_ASSERT, "(toModel)", (const char *)&queryFormat, "toModel") )
    __debugbreak();
  if ( !DB_IsXModelInPool(fromModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 522, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( fromModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( fromModel )") )
    __debugbreak();
  if ( !DB_IsXModelInPool(toModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 523, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( toModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( toModel )") )
    __debugbreak();
  XModelIndex = DB_GetXModelIndex(fromModel);
  v5 = XModelIndex;
  if ( XModelIndex >= 0x6000 )
  {
    LODWORD(v8) = XModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, 24576) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v5 & 0x1F)) & s_modelFixup.validXModelBits.array[v5 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 527, ASSERT_TYPE_ASSERT, "(s_modelFixup.validXModelBits.testBit( fromIndex ))", (const char *)&queryFormat, "s_modelFixup.validXModelBits.testBit( fromIndex )") )
    __debugbreak();
  v6 = DB_GetXModelIndex(toModel);
  v7 = v6;
  if ( v6 >= 0x6000 )
  {
    LODWORD(v9) = 24576;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v7 & 0x1F)) & s_modelFixup.validXModelBits.array[v7 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 531, ASSERT_TYPE_ASSERT, "(!s_modelFixup.validXModelBits.testBit( toIndex ))", (const char *)&queryFormat, "!s_modelFixup.validXModelBits.testBit( toIndex )") )
    __debugbreak();
  DB_AllocXModelLookups_WithIndex(fromModel, v7);
}

/*
==============
DB_XModelLookups_Create
==============
*/
void DB_XModelLookups_Create(const XModel *model)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  XModelLodInfo *lodInfo; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  unsigned __int64 v8; 
  const dvar_t *v9; 
  XAssetHeader *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int XModelIndex; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 479, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  XModelIndex = DB_GetXModelIndex(model);
  v2 = XModelIndex;
  DB_AllocXModelLookups_WithIndex(model, XModelIndex);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 321, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v3 = 0;
  v4 = 0;
  if ( model->numLods )
  {
    lodInfo = model->lodInfo;
    do
    {
      if ( !lodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      modelSurfsStaging = lodInfo->modelSurfsStaging;
      if ( lodInfo->modelSurfsStaging )
      {
        if ( !DB_IsXModelSurfsInPool(lodInfo->modelSurfsStaging) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 330, ASSERT_TYPE_ASSERT, "(DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "DB_IsXModelSurfsInPool( modelSurfs )") )
          __debugbreak();
        XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
        v8 = XModelSurfsIndex;
        if ( XModelSurfsIndex >= 0xB000 )
        {
          LODWORD(v12) = 45056;
          LODWORD(v11) = XModelSurfsIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
            __debugbreak();
        }
        s_modelFixup.dirtyModelSurfBits.array[v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
      }
      ++v4;
      ++lodInfo;
    }
    while ( v4 < model->numLods );
    v2 = XModelIndex;
    v3 = 0;
  }
  v9 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    if ( model->numLods )
    {
      v10 = (XAssetHeader *)model->lodInfo;
      while ( 1 )
      {
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
          __debugbreak();
        if ( v10->physicsLibrary && !DB_IsLiveHeadAssetNonLocking(ASSET_TYPE_XMODEL_SURFS, (XAssetHeader)v10->physicsLibrary) )
          break;
        ++v3;
        v10 += 8;
        if ( v3 >= model->numLods )
          goto LABEL_37;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 489, ASSERT_TYPE_ASSERT, "(DB_CheckAllXModelSurfsAreLiveHeadAssets( model ))", (const char *)&queryFormat, "DB_CheckAllXModelSurfsAreLiveHeadAssets( model )") )
        __debugbreak();
    }
LABEL_37:
    if ( !DB_CheckAllXModelLookups_WithIndex(model, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 490, ASSERT_TYPE_ASSERT, "(DB_CheckAllXModelLookups_WithIndex( model, xmodelIndex ))", (const char *)&queryFormat, "DB_CheckAllXModelLookups_WithIndex( model, xmodelIndex )") )
      __debugbreak();
  }
}

/*
==============
DB_XModelLookups_Move
==============
*/
void DB_XModelLookups_Move(const XModel *fromModel, const XModel *toModel)
{
  unsigned __int64 XModelIndex; 
  unsigned __int64 v5; 
  const dvar_t *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !fromModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 541, ASSERT_TYPE_ASSERT, "(fromModel)", (const char *)&queryFormat, "fromModel") )
    __debugbreak();
  if ( !toModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 542, ASSERT_TYPE_ASSERT, "(toModel)", (const char *)&queryFormat, "toModel") )
    __debugbreak();
  if ( !DB_IsXModelInPool(fromModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 544, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( fromModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( fromModel )") )
    __debugbreak();
  if ( !DB_IsXModelInPool(toModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 545, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( toModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( toModel )") )
    __debugbreak();
  XModelIndex = DB_GetXModelIndex(fromModel);
  v5 = DB_GetXModelIndex(toModel);
  if ( (unsigned int)XModelIndex >= 0x6000 )
  {
    LODWORD(v7) = XModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, 24576) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (XModelIndex & 0x1F)) & s_modelFixup.validXModelBits.array[XModelIndex >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 550, ASSERT_TYPE_ASSERT, "(s_modelFixup.validXModelBits.testBit( fromIndex ))", (const char *)&queryFormat, "s_modelFixup.validXModelBits.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x6000 )
  {
    LODWORD(v8) = 24576;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v5 & 0x1F)) & s_modelFixup.validXModelBits.array[v5 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 551, ASSERT_TYPE_ASSERT, "(!s_modelFixup.validXModelBits.testBit( toIndex ))", (const char *)&queryFormat, "!s_modelFixup.validXModelBits.testBit( toIndex )") )
    __debugbreak();
  DB_FreeXModelLookups_WithIndex(fromModel, XModelIndex);
  DB_AllocXModelLookups_WithIndex(fromModel, v5);
  v6 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && !DB_CheckAllXModelLookups_WithIndex(fromModel, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 561, ASSERT_TYPE_ASSERT, "(DB_CheckAllXModelLookups_WithIndex( fromModel, toIndex ))", (const char *)&queryFormat, "DB_CheckAllXModelLookups_WithIndex( fromModel, toIndex )") )
    __debugbreak();
}

/*
==============
DB_XModelLookups_Release
==============
*/
void DB_XModelLookups_Release(const XModel *model)
{
  unsigned int XModelIndex; 
  const dvar_t *v3; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 500, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  XModelIndex = DB_GetXModelIndex(model);
  DB_FreeXModelLookups_WithIndex(model, XModelIndex);
  v3 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && DB_CheckAnyXModelLookups_WithIndex(model, XModelIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 509, ASSERT_TYPE_ASSERT, "(!DB_CheckAnyXModelLookups_WithIndex( model, xmodelIndex ))", (const char *)&queryFormat, "!DB_CheckAnyXModelLookups_WithIndex( model, xmodelIndex )") )
    __debugbreak();
}

/*
==============
DB_XModelLookups_Swap
==============
*/
void DB_XModelLookups_Swap(const XModel *fromModel, const XModel *toModel)
{
  unsigned __int64 XModelIndex; 
  unsigned __int64 v5; 
  const dvar_t *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !fromModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 571, ASSERT_TYPE_ASSERT, "(fromModel)", (const char *)&queryFormat, "fromModel") )
    __debugbreak();
  if ( !toModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 572, ASSERT_TYPE_ASSERT, "(toModel)", (const char *)&queryFormat, "toModel") )
    __debugbreak();
  if ( !DB_IsXModelInPool(fromModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 574, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( fromModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( fromModel )") )
    __debugbreak();
  if ( !DB_IsXModelInPool(toModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 575, ASSERT_TYPE_ASSERT, "(DB_IsXModelInPool( toModel ))", (const char *)&queryFormat, "DB_IsXModelInPool( toModel )") )
    __debugbreak();
  XModelIndex = DB_GetXModelIndex(fromModel);
  v5 = DB_GetXModelIndex(toModel);
  if ( (unsigned int)XModelIndex >= 0x6000 )
  {
    LODWORD(v7) = XModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, 24576) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (XModelIndex & 0x1F)) & s_modelFixup.validXModelBits.array[XModelIndex >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 580, ASSERT_TYPE_ASSERT, "(s_modelFixup.validXModelBits.testBit( fromIndex ))", (const char *)&queryFormat, "s_modelFixup.validXModelBits.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x6000 )
  {
    LODWORD(v8) = 24576;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v5 & 0x1F)) & s_modelFixup.validXModelBits.array[v5 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 581, ASSERT_TYPE_ASSERT, "(s_modelFixup.validXModelBits.testBit( toIndex ))", (const char *)&queryFormat, "s_modelFixup.validXModelBits.testBit( toIndex )") )
    __debugbreak();
  DB_FreeXModelLookups_WithIndex(fromModel, XModelIndex);
  DB_FreeXModelLookups_WithIndex(toModel, v5);
  DB_AllocXModelLookups_WithIndex(fromModel, v5);
  DB_AllocXModelLookups_WithIndex(toModel, XModelIndex);
  v6 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( !DB_CheckAllXModelLookups_WithIndex(fromModel, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 592, ASSERT_TYPE_ASSERT, "(DB_CheckAllXModelLookups_WithIndex( fromModel, toIndex ))", (const char *)&queryFormat, "DB_CheckAllXModelLookups_WithIndex( fromModel, toIndex )") )
      __debugbreak();
    if ( !DB_CheckAllXModelLookups_WithIndex(toModel, XModelIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 593, ASSERT_TYPE_ASSERT, "(DB_CheckAllXModelLookups_WithIndex( toModel, fromIndex ))", (const char *)&queryFormat, "DB_CheckAllXModelLookups_WithIndex( toModel, fromIndex )") )
      __debugbreak();
  }
}

/*
==============
DB_XModelSurfsAreDefault
==============
*/
char DB_XModelSurfsAreDefault(const XModel *model, const int lod, const XModelSurfs *modelSurfs)
{
  XModelSurfs *modelSurfsStaging; 
  const dvar_t *v7; 
  char result; 
  XSurface *surfs; 
  bool v10; 
  int v11; 
  const dvar_t *v12; 
  int integer; 
  __int64 v14; 
  __int64 v15; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 619, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !modelSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 620, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
    __debugbreak();
  if ( !modelSurfs->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 621, ASSERT_TYPE_ASSERT, "(modelSurfs->numsurfs > 0)", (const char *)&queryFormat, "modelSurfs->numsurfs > 0") )
    __debugbreak();
  if ( !s_modelFixup.defaultSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 622, ASSERT_TYPE_ASSERT, "(s_modelFixup.defaultSurfs)", (const char *)&queryFormat, "s_modelFixup.defaultSurfs") )
    __debugbreak();
  if ( (model->flags & 0x8000) != 0 )
  {
    if ( model->numsurfs != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 628, ASSERT_TYPE_ASSERT, "(model->numsurfs == 1)", (const char *)&queryFormat, "model->numsurfs == 1") )
      __debugbreak();
    if ( model->numLods != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 629, ASSERT_TYPE_ASSERT, "(model->numLods == 1)", (const char *)&queryFormat, "model->numLods == 1") )
      __debugbreak();
    if ( modelSurfs->surfs != s_modelFixup.defaultSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 630, ASSERT_TYPE_ASSERT, "(&modelSurfs->surfs[0] == s_modelFixup.defaultSurfs)", (const char *)&queryFormat, "&modelSurfs->surfs[0] == s_modelFixup.defaultSurfs") )
      __debugbreak();
    if ( model == (const XModel *)-224i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 33, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
      __debugbreak();
    modelSurfsStaging = model->lodInfo[0].modelSurfsStaging;
    if ( !modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 632, ASSERT_TYPE_ASSERT, "(lodInfoModelSurfs)", (const char *)&queryFormat, "lodInfoModelSurfs") )
      __debugbreak();
    if ( modelSurfsStaging->surfs != s_modelFixup.defaultSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 633, ASSERT_TYPE_ASSERT, "(&lodInfoModelSurfs->surfs[0] == s_modelFixup.defaultSurfs)", (const char *)&queryFormat, "&lodInfoModelSurfs->surfs[0] == s_modelFixup.defaultSurfs") )
      __debugbreak();
    v7 = DVARBOOL_g_hideMissingXmodels;
    if ( !DVARBOOL_g_hideMissingXmodels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_hideMissingXmodels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled )
      return 0;
  }
  surfs = modelSurfs->surfs;
  v10 = surfs == s_modelFixup.defaultSurfs;
  if ( surfs != s_modelFixup.defaultSurfs )
  {
    v11 = 1;
    if ( modelSurfs->numsurfs > 1u )
    {
      do
      {
        if ( &modelSurfs->surfs[v11] == s_modelFixup.defaultSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 649, ASSERT_TYPE_ASSERT, "(&modelSurfs->surfs[i] != s_modelFixup.defaultSurfs)", (const char *)&queryFormat, "&modelSurfs->surfs[i] != s_modelFixup.defaultSurfs") )
          __debugbreak();
        ++v11;
      }
      while ( v11 < modelSurfs->numsurfs );
    }
  }
  v12 = DVARINT_db_maxUsableXModelLods;
  if ( !DVARINT_db_maxUsableXModelLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_maxUsableXModelLods") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  if ( lod >= (unsigned int)model->numLods )
  {
    LODWORD(v15) = model->numLods;
    LODWORD(v14) = lod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  result = v10;
  if ( model->numLods - lod > integer )
    return 1;
  return result;
}

/*
==============
XModelLookupTable::FreeXModelInXModelSurfEntry
==============
*/
void XModelLookupTable::FreeXModelInXModelSurfEntry(XModelLookupTable *this, const unsigned int xmodelSurfsIndex, const unsigned int xmodelIndex)
{
  __int64 v3; 
  unsigned __int16 *p_next; 
  unsigned __int16 next; 
  bool v8; 
  XModelLookupTable::XModelNode *v9; 
  unsigned __int16 NodeIndex; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = xmodelSurfsIndex;
  if ( xmodelIndex >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelIndex ) < (unsigned)( (24064 + 512) )", "xmodelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", xmodelIndex, 24576) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xB000 )
  {
    LODWORD(v14) = 45056;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( (XMODEL_SURFS_POOL_SIZE_SHIP + 4096) )", "xmodelSurfsIndex doesn't index XMODEL_SURFS_POOL_SIZE\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
    LODWORD(v15) = 45056;
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( xmodelSurfsIndex ) < (unsigned)( ( sizeof( *array_counter( m_table ) ) + 0 ) )", "xmodelSurfsIndex doesn't index m_table\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  p_next = &this->m_table[v3];
  next = *p_next;
  v8 = *p_next != 0xFFFF;
  if ( *p_next == 0xFFFF )
  {
LABEL_15:
    LODWORD(v12) = xmodelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 254, ASSERT_TYPE_ASSERT, "( found )", "FreeXModelInXModelSurfEntry: xmodelIndex %u not found", v12) )
      __debugbreak();
  }
  else
  {
    while ( 1 )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 105, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
        __debugbreak();
      v9 = &this->m_nodePool.nodes[next];
      if ( v9->xmodelIndex == xmodelIndex )
        break;
      p_next = &v9->next;
      next = v9->next;
      v8 = next != 0xFFFF;
      if ( next == 0xFFFF )
        goto LABEL_15;
    }
    *p_next = v9->next;
    NodeIndex = XModelLookupTable::XModelNodeFreeList::GetNodeIndex(&this->m_nodePool, v9);
    if ( NodeIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 146, ASSERT_TYPE_ASSERT, "(freeIndex != INVALID_NODE)", (const char *)&queryFormat, "freeIndex != INVALID_NODE") )
      __debugbreak();
    v9->xmodelIndex = 24576;
    v9->next = this->m_nodePool.freeHead;
    v11 = this->m_nodePool.allocCount == 0;
    this->m_nodePool.freeHead = NodeIndex;
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 152, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
      __debugbreak();
    --this->m_nodePool.allocCount;
  }
}

/*
==============
XModelLookupTable::XModelNodeFreeList::GetNodeIndex
==============
*/
__int64 XModelLookupTable::XModelNodeFreeList::GetNodeIndex(XModelLookupTable::XModelNodeFreeList *this, const XModelLookupTable::XModelNode *const node)
{
  signed __int64 v2; 

  v2 = ((char *)node - (char *)this) >> 2;
  if ( (v2 < 0 || (unsigned __int64)v2 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v2, "signed", ((char *)node - (char *)this) >> 2) )
    __debugbreak();
  if ( (_WORD)v2 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_modelfixup.cpp", 97, ASSERT_TYPE_ASSERT, "(IsValidNodeIndex( nodeIndex ))", (const char *)&queryFormat, "IsValidNodeIndex( nodeIndex )") )
    __debugbreak();
  return (unsigned __int16)v2;
}

