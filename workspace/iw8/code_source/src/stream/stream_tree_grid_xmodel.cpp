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
  unsigned __int64 v16; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 

  _RBP = this;
  Com_Printf(0, "XModelStreamTreeGridCell [%u,%u]\n", this->rowIndex, this->columnIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vmovss  xmm1, dword ptr [rbp+14h]
    vmovss  xmm4, dword ptr [rbp+10h]
    vmovss  xmm3, dword ptr [rbp+8]
    vmovss  xmm2, dword ptr [rbp+4]
    vmovss  xmm5, dword ptr [rbp+0Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+48h+var_18], xmm1
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+48h+var_20], xmm4
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+48h+var_28], xmm5
  }
  Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", *(double *)&_XMM2, *(double *)&_XMM3, v33, v35, v37, v39);
  Com_Printf(0, "  Total InstanceIndexCount: %u\n", _RBP->instanceIndexCount);
  Com_Printf(0, "  Large InstanceIndexCount: %u\n", _RBP->largeInstanceIndexCount);
  Com_Printf(0, "  Instance Count: %u\n", _RBP->instanceCount);
  Com_Printf(0, "  Nodes [%u]:\n", _RBP->nodeCount);
  v16 = 0i64;
  if ( _RBP->nodeCount )
  {
    _RDI = 0i64;
    do
    {
      _RBX = _RBP->nodes;
      Com_Printf(0, "    Node %u:\n", (unsigned int)v16);
      Com_Printf(0, "      Children: %u %u\n", _RBX[_RDI].childNodes[0], _RBX[_RDI].childNodes[1]);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rbx+18h]
        vmovss  xmm1, dword ptr [rdi+rbx+14h]
        vmovss  xmm4, dword ptr [rdi+rbx+10h]
        vmovss  xmm3, dword ptr [rdi+rbx+8]
        vmovss  xmm2, dword ptr [rdi+rbx+4]
        vmovss  xmm5, dword ptr [rdi+rbx+0Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+48h+var_10], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+48h+var_18], xmm1
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+48h+var_20], xmm4
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+48h+var_28], xmm5
      }
      Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", *(double *)&_XMM2, *(double *)&_XMM3, v34, v36, v38, v40);
      Com_Printf(0, "      Instances:  Start=%u  Count=%u\n", _RBX[_RDI].instanceStartIndex, _RBX[_RDI].instanceCount);
      ++_RDI;
      ++v16;
    }
    while ( v16 < _RBP->nodeCount );
  }
}

