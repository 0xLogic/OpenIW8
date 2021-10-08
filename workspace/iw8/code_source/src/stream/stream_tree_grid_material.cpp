/*
==============
MaterialStreamTreeGridCell::DeserializeEnd
==============
*/

void __fastcall MaterialStreamTreeGridCell::DeserializeEnd(const MaterialStreamTreeGridCell *gridCell)
{
  ?DeserializeEnd@MaterialStreamTreeGridCell@@SAXPEBU1@@Z(gridCell);
}

/*
==============
MaterialStreamTreeGridCell::GetLeafNodeCount
==============
*/

unsigned __int64 __fastcall MaterialStreamTreeGridCell::GetLeafNodeCount(MaterialStreamTreeGridCell *this)
{
  return ?GetLeafNodeCount@MaterialStreamTreeGridCell@@QEBA_KXZ(this);
}

/*
==============
MaterialStreamTreeGridCell::GetMemorySize
==============
*/

unsigned __int64 __fastcall MaterialStreamTreeGridCell::GetMemorySize(MaterialStreamTreeGridCell *this)
{
  return ?GetMemorySize@MaterialStreamTreeGridCell@@QEBA_KXZ(this);
}

/*
==============
MaterialStreamTreeGridCell::DeserializeBegin
==============
*/

void __fastcall MaterialStreamTreeGridCell::DeserializeBegin(const MaterialStreamTreeGridCell *gridCell)
{
  ?DeserializeBegin@MaterialStreamTreeGridCell@@SAXPEBU1@@Z(gridCell);
}

/*
==============
MaterialStreamTreeGridCell::Print
==============
*/

void __fastcall MaterialStreamTreeGridCell::Print(MaterialStreamTreeGridCell *this)
{
  ?Print@MaterialStreamTreeGridCell@@QEBAXXZ(this);
}

/*
==============
MaterialStreamTreeGridCell::DeserializeBegin
==============
*/
void MaterialStreamTreeGridCell::DeserializeBegin(const MaterialStreamTreeGridCell *gridCell)
{
  __int64 nodeCount; 
  MaterialStreamTreeNode *v3; 
  MatImgInstanceGroup *v4; 

  nodeCount = gridCell->nodeCount;
  if ( (_DWORD)nodeCount )
    v3 = (MaterialStreamTreeNode *)&gridCell[1];
  else
    v3 = NULL;
  gridCell->nodes = v3;
  if ( gridCell->instanceGroupCount )
    v4 = (MatImgInstanceGroup *)((char *)&gridCell[1] + 52 * nodeCount);
  else
    v4 = NULL;
  gridCell->instanceGroups = v4;
  if ( gridCell->materialInstanceCount + gridCell->imageInstanceCount )
    gridCell->instances = (MatImgInstance *)((char *)&gridCell[1] + 52 * gridCell->nodeCount + 8 * gridCell->instanceGroupCount);
  else
    gridCell->instances = NULL;
}

/*
==============
MaterialStreamTreeGridCell::DeserializeEnd
==============
*/
void MaterialStreamTreeGridCell::DeserializeEnd(const MaterialStreamTreeGridCell *gridCell)
{
  if ( !gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree_grid_material.cpp", 203, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
    __debugbreak();
  gridCell->nodes = NULL;
  gridCell->instanceGroups = NULL;
  gridCell->instances = NULL;
}

/*
==============
MaterialStreamTreeGridCell::GetLeafNodeCount
==============
*/
__int64 MaterialStreamTreeGridCell::GetLeafNodeCount(MaterialStreamTreeGridCell *this)
{
  __int64 nodeCount; 
  __int64 v2; 
  MaterialStreamTreeNode *nodes; 
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
MaterialStreamTreeGridCell::GetMemorySize
==============
*/
__int64 MaterialStreamTreeGridCell::GetMemorySize(MaterialStreamTreeGridCell *this)
{
  return 52i64 * this->nodeCount + 8 * (this->instanceGroupCount + 3i64 * (this->materialInstanceCount + this->imageInstanceCount)) + 80;
}

/*
==============
MaterialStreamTreeGridCell::Print
==============
*/
void MaterialStreamTreeGridCell::Print(MaterialStreamTreeGridCell *this)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned __int64 largeMaterialInstanceGroupCount; 
  int instanceCount; 
  unsigned __int64 v21; 
  __int64 p_instanceCount; 
  unsigned __int64 v23; 
  int v24; 
  unsigned __int64 largeImageInstanceGroupCount; 
  int v26; 
  __int64 v27; 
  int v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  double v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  double v38; 
  double v39; 
  double v40; 

  _RBP = this;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  Com_Printf(0, "MaterialStreamTreeGridCell [%u]\n", this->transientZone);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+14h]
    vmovss  xmm1, dword ptr [rbp+10h]
    vmovss  xmm4, dword ptr [rbp+0Ch]
    vmovss  xmm3, dword ptr [rbp+4]
    vmovss  xmm2, dword ptr [rbp+0]
    vmovss  xmm5, dword ptr [rbp+8]
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
  Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", *(double *)&_XMM2, *(double *)&_XMM3, v34, v38, v39, v40);
  Com_Printf(0, "  Total InstanceGroupCount: %u\n", _RBP->instanceGroupCount);
  largeMaterialInstanceGroupCount = _RBP->largeMaterialInstanceGroupCount;
  instanceCount = 0;
  v21 = 0i64;
  if ( largeMaterialInstanceGroupCount >= 2 )
  {
    p_instanceCount = (__int64)&_RBP->instanceGroups[1].instanceCount;
    v23 = ((largeMaterialInstanceGroupCount - 2) >> 1) + 1;
    v21 = 2 * v23;
    do
    {
      v24 = *(unsigned __int16 *)(p_instanceCount - 8);
      p_instanceCount += 16i64;
      v3 += v24;
      v4 += *(unsigned __int16 *)(p_instanceCount - 16);
      --v23;
    }
    while ( v23 );
  }
  if ( v21 < largeMaterialInstanceGroupCount )
    instanceCount = _RBP->instanceGroups[v21].instanceCount;
  largeImageInstanceGroupCount = _RBP->largeImageInstanceGroupCount;
  v26 = v4 + v3 + instanceCount;
  v27 = 0i64;
  v28 = 0;
  if ( largeMaterialInstanceGroupCount < largeImageInstanceGroupCount )
  {
    if ( (unsigned int)largeImageInstanceGroupCount - largeMaterialInstanceGroupCount >= 2 )
    {
      v29 = (((unsigned int)largeImageInstanceGroupCount - largeMaterialInstanceGroupCount - 2) >> 1) + 1;
      v30 = (__int64)&_RBP->instanceGroups[largeMaterialInstanceGroupCount + 1].instanceCount;
      largeMaterialInstanceGroupCount += 2 * v29;
      do
      {
        v31 = *(unsigned __int16 *)(v30 - 8);
        v30 += 16i64;
        v2 += v31;
        v27 = *(unsigned __int16 *)(v30 - 16) + (unsigned int)v27;
        --v29;
      }
      while ( v29 );
    }
    if ( largeMaterialInstanceGroupCount < largeImageInstanceGroupCount )
      v28 = _RBP->instanceGroups[largeMaterialInstanceGroupCount].instanceCount;
    v28 += v27 + v2;
  }
  v32 = _RBP->materialInstanceCount - v26;
  v33 = _RBP->imageInstanceCount - v28;
  Com_Printf(0, "  Instances:\n", v27);
  LODWORD(v35) = v26;
  Com_Printf(0, "    Material Inst Count:    %8u   N:%8u   L:%8u\n", _RBP->materialInstanceCount, v32, v35);
  LODWORD(v36) = v28;
  Com_Printf(0, "    Image Inst Count:       %8u   N:%8u   L:%8u\n", _RBP->imageInstanceCount, v33, v36);
  LODWORD(v37) = v28 + v26;
  Com_Printf(0, "    Total Inst Count:       %8u   N:%8u   L:%8u\n", _RBP->materialInstanceCount + _RBP->imageInstanceCount, v33 + v32, v37);
}

