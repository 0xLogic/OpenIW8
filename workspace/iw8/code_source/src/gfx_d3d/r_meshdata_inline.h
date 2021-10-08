/*
==============
R_GetMeshTotalVertexCount
==============
*/

unsigned int __fastcall R_GetMeshTotalVertexCount(const GfxMeshData *mesh)
{
  return ?R_GetMeshTotalVertexCount@@YAIPEBUGfxMeshData@@@Z(mesh);
}

/*
==============
R_SetMeshUsedVertexCount
==============
*/

void __fastcall R_SetMeshUsedVertexCount(GfxMeshData *mesh, unsigned int vertCount)
{
  ?R_SetMeshUsedVertexCount@@YAXPEAUGfxMeshData@@I@Z(mesh, vertCount);
}

/*
==============
R_GetMeshTotalVertexCount
==============
*/
__int64 R_GetMeshTotalVertexCount(const GfxMeshData *mesh)
{
  unsigned int vertSize; 
  unsigned int total; 

  vertSize = mesh->vertSize;
  if ( !vertSize )
    return 0i64;
  total = mesh->vb.total;
  if ( total % vertSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
      __debugbreak();
  }
  return total / mesh->vertSize;
}

/*
==============
R_SetMeshUsedVertexCount
==============
*/
void R_SetMeshUsedVertexCount(GfxMeshData *mesh, unsigned int vertCount)
{
  unsigned int vertSize; 
  unsigned int v5; 
  unsigned int total; 

  vertSize = mesh->vertSize;
  if ( vertSize )
  {
    total = mesh->vb.total;
    if ( total % vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
      __debugbreak();
    v5 = total / mesh->vertSize;
  }
  else
  {
    v5 = 0;
  }
  if ( vertCount > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 68, ASSERT_TYPE_ASSERT, "(vertCount <= R_GetMeshTotalVertexCount( mesh ))", (const char *)&queryFormat, "vertCount <= R_GetMeshTotalVertexCount( mesh )") )
    __debugbreak();
  mesh->vb.used = mesh->vertSize * vertCount;
}

