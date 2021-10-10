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
  unsigned __int64 v7; 
  char *p_instanceCount; 
  unsigned __int64 v9; 
  int v10; 
  unsigned __int64 largeImageInstanceGroupCount; 
  int v12; 
  __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  unsigned __int16 *v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v2 = 0;
  v3 = 0;
  v4 = 0;
  Com_Printf(0, "MaterialStreamTreeGridCell [%u]\n", this->transientZone);
  Com_Printf(0, "      Bounds: min={ %f %f %f } max={ %f %f %f }\n", this->bounds.mins.v[0], this->bounds.mins.v[1], this->bounds.mins.v[2], this->bounds.maxs.v[0], this->bounds.maxs.v[1], this->bounds.maxs.v[2]);
  Com_Printf(0, "  Total InstanceGroupCount: %u\n", this->instanceGroupCount);
  largeMaterialInstanceGroupCount = this->largeMaterialInstanceGroupCount;
  instanceCount = 0;
  v7 = 0i64;
  if ( largeMaterialInstanceGroupCount >= 2 )
  {
    p_instanceCount = (char *)&this->instanceGroups[1].instanceCount;
    v9 = ((largeMaterialInstanceGroupCount - 2) >> 1) + 1;
    v7 = 2 * v9;
    do
    {
      v10 = *((unsigned __int16 *)p_instanceCount - 4);
      p_instanceCount += 16;
      v3 += v10;
      v4 += *((unsigned __int16 *)p_instanceCount - 8);
      --v9;
    }
    while ( v9 );
  }
  if ( v7 < largeMaterialInstanceGroupCount )
    instanceCount = this->instanceGroups[v7].instanceCount;
  largeImageInstanceGroupCount = this->largeImageInstanceGroupCount;
  v12 = v4 + v3 + instanceCount;
  v13 = 0i64;
  v14 = 0;
  if ( largeMaterialInstanceGroupCount < largeImageInstanceGroupCount )
  {
    if ( (unsigned int)largeImageInstanceGroupCount - largeMaterialInstanceGroupCount >= 2 )
    {
      v15 = (((unsigned int)largeImageInstanceGroupCount - largeMaterialInstanceGroupCount - 2) >> 1) + 1;
      v16 = &this->instanceGroups[largeMaterialInstanceGroupCount + 1].instanceCount;
      largeMaterialInstanceGroupCount += 2 * v15;
      do
      {
        v17 = *(v16 - 4);
        v16 += 8;
        v2 += v17;
        v13 = *(v16 - 8) + (unsigned int)v13;
        --v15;
      }
      while ( v15 );
    }
    if ( largeMaterialInstanceGroupCount < largeImageInstanceGroupCount )
      v14 = this->instanceGroups[largeMaterialInstanceGroupCount].instanceCount;
    v14 += v13 + v2;
  }
  v18 = this->materialInstanceCount - v12;
  v19 = this->imageInstanceCount - v14;
  Com_Printf(0, "  Instances:\n", v13);
  LODWORD(v20) = v12;
  Com_Printf(0, "    Material Inst Count:    %8u   N:%8u   L:%8u\n", this->materialInstanceCount, v18, v20);
  LODWORD(v21) = v14;
  Com_Printf(0, "    Image Inst Count:       %8u   N:%8u   L:%8u\n", this->imageInstanceCount, v19, v21);
  LODWORD(v22) = v14 + v12;
  Com_Printf(0, "    Total Inst Count:       %8u   N:%8u   L:%8u\n", this->materialInstanceCount + this->imageInstanceCount, v19 + v18, v22);
}

