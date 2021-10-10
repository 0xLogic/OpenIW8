/*
==============
XModelStreamTreeGridCell::GetMemorySize
==============
*/

unsigned __int64 __fastcall XModelStreamTreeGridCell::GetMemorySize(XModelStreamTreeGridCell *this)
{
  return ?GetMemorySize@XModelStreamTreeGridCell@@QEBA_KXZ(this);
}

/*
==============
XModelStreamTreeGridCell::DeserializeEnd
==============
*/

void __fastcall XModelStreamTreeGridCell::DeserializeEnd(const XModelStreamTreeGridCell *gridCell)
{
  ?DeserializeEnd@XModelStreamTreeGridCell@@SAXPEBU1@@Z(gridCell);
}

/*
==============
XModelStreamTreeGridCell::GetLeafNodeCount
==============
*/

unsigned __int64 __fastcall XModelStreamTreeGridCell::GetLeafNodeCount(XModelStreamTreeGridCell *this)
{
  return ?GetLeafNodeCount@XModelStreamTreeGridCell@@QEBA_KXZ(this);
}

/*
==============
XModelStreamTreeGridCell::DeserializeBegin
==============
*/

const XModelStreamTreeGridCell *__fastcall XModelStreamTreeGridCell::DeserializeBegin(const StreamKey *streamKey)
{
  return ?DeserializeBegin@XModelStreamTreeGridCell@@SAPEBU1@AEBUStreamKey@@@Z(streamKey);
}

/*
==============
XModelStreamTreeGridCell::Print
==============
*/

void __fastcall XModelStreamTreeGridCell::Print(XModelStreamTreeGridCell *this)
{
  ?Print@XModelStreamTreeGridCell@@QEBAXXZ(this);
}

/*
==============
XModelStreamTreeGridCell::DeserializeBegin
==============
*/
const XModelStreamTreeGridCell *XModelStreamTreeGridCell::DeserializeBegin(const StreamKey *streamKey)
{
  const XModelStreamTreeGridCell *data; 
  XModelStreamTreeNode *v2; 
  XModelInstance *v3; 
  const XModelStreamTreeGridCell *result; 

  if ( (streamKey->flags & 2) != 0 )
    data = (const XModelStreamTreeGridCell *)streamKey->data.dataHandle.data;
  else
    data = (const XModelStreamTreeGridCell *)Stream_AddressSpace_ResolveHandle(&streamKey->data.dataHandle);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree_grid_xmodel.cpp", 157, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
    __debugbreak();
  v2 = (XModelStreamTreeNode *)&data[1];
  if ( !data->nodeCount )
    v2 = NULL;
  data->nodes = v2;
  if ( data->instanceCount )
    v3 = (XModelInstance *)((char *)&data[1] + 36 * data->nodeCount);
  else
    v3 = NULL;
  data->instances = v3;
  if ( data->instanceIndexCount )
  {
    result = data;
    data->instanceIndices = &data[1].rowIndex + 18 * data->nodeCount + 12 * data->instanceCount;
  }
  else
  {
    data->instanceIndices = NULL;
    return data;
  }
  return result;
}

/*
==============
XModelStreamTreeGridCell::DeserializeEnd
==============
*/
void XModelStreamTreeGridCell::DeserializeEnd(const XModelStreamTreeGridCell *gridCell)
{
  gridCell->nodes = NULL;
  gridCell->instances = NULL;
  gridCell->instanceIndices = NULL;
}

/*
==============
XModelStreamTreeGridCell::GetLeafNodeCount
==============
*/
__int64 XModelStreamTreeGridCell::GetLeafNodeCount(XModelStreamTreeGridCell *this)
{
  __int64 nodeCount; 
  __int64 v2; 
  XModelStreamTreeNode *nodes; 
  bool v4; 
  __int64 v5; 

  nodeCount = this->nodeCount;
  v2 = 0i64;
  if ( this->nodeCount )
  {
    nodes = this->nodes;
    do
    {
      v4 = nodes->childNodes[0] == 0xFFFF && nodes->childNodes[1] == 0xFFFF;
      v5 = v2 + 1;
      if ( !v4 )
        v5 = v2;
      ++nodes;
      v2 = v5;
      --nodeCount;
    }
    while ( nodeCount );
  }
  return v2;
}

/*
==============
XModelStreamTreeGridCell::GetMemorySize
==============
*/
__int64 XModelStreamTreeGridCell::GetMemorySize(XModelStreamTreeGridCell *this)
{
  return 2 * (this->instanceIndexCount + 12i64 * this->instanceCount + 2 * (9i64 * this->nodeCount + 18));
}

/*
==============
XModelStreamTreeGridCell::Print
==============
*/
void XModelStreamTreeGridCell::Print(XModelStreamTreeGridCell *this)
{
  unsigned __int64 v2; 
  __int64 v3; 
  XModelStreamTreeNode *nodes; 

  Com_Printf(0, "XModelStreamTreeGridCell [%u,%u]\n", this->rowIndex, this->columnIndex);
  Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", this->bounds.mins.v[0], this->bounds.mins.v[1], this->bounds.mins.v[2], this->bounds.maxs.v[0], this->bounds.maxs.v[1], this->bounds.maxs.v[2]);
  Com_Printf(0, "  Total InstanceIndexCount: %u\n", this->instanceIndexCount);
  Com_Printf(0, "  Large InstanceIndexCount: %u\n", this->largeInstanceIndexCount);
  Com_Printf(0, "  Instance Count: %u\n", this->instanceCount);
  Com_Printf(0, "  Nodes [%u]:\n", this->nodeCount);
  v2 = 0i64;
  if ( this->nodeCount )
  {
    v3 = 0i64;
    do
    {
      nodes = this->nodes;
      Com_Printf(0, "    Node %u:\n", (unsigned int)v2);
      Com_Printf(0, "      Children: %u %u\n", nodes[v3].childNodes[0], nodes[v3].childNodes[1]);
      Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", nodes[v3].bounds.mins.v[0], nodes[v3].bounds.mins.v[1], nodes[v3].bounds.mins.v[2], nodes[v3].bounds.maxs.v[0], nodes[v3].bounds.maxs.v[1], nodes[v3].bounds.maxs.v[2]);
      Com_Printf(0, "      Instances:  Start=%u  Count=%u\n", nodes[v3].instanceStartIndex, nodes[v3].instanceCount);
      ++v3;
      ++v2;
    }
    while ( v2 < this->nodeCount );
  }
}

