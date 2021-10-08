/*
==============
XSurfaceGetVerts
==============
*/

GfxVertexUnion __fastcall XSurfaceGetVerts(const XSurface *surface)
{
  return ?XSurfaceGetVerts@@YA?AUGfxVertexUnion@@PEBUXSurface@@@Z(surface);
}

/*
==============
XSurfaceGetIndices
==============
*/

const unsigned __int16 *__fastcall XSurfaceGetIndices(const XSurface *surface)
{
  return ?XSurfaceGetIndices@@YAPEBGPEBUXSurface@@@Z(surface);
}

/*
==============
XSurfaceGetIndices
==============
*/
unsigned __int8 *XSurfaceGetIndices(const XSurface *surface)
{
  unsigned int sharedIndexDataOffset; 
  XSurfaceShared *shared; 
  unsigned __int8 *data; 
  unsigned __int8 *v5; 
  unsigned int v7; 
  unsigned int dataSize; 

  sharedIndexDataOffset = surface->sharedIndexDataOffset;
  if ( sharedIndexDataOffset >= surface->shared->dataSize )
  {
    dataSize = surface->shared->dataSize;
    v7 = sharedIndexDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedIndexDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedIndexDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v7, dataSize) )
      __debugbreak();
  }
  shared = surface->shared;
  if ( (shared->flags & 1) != 0 )
    data = Stream_AddressSpace_ResolveHandle(&surface->shared->data.streamedDataHandle);
  else
    data = (unsigned __int8 *)shared->data.streamedDataHandle.data;
  v5 = &data[surface->sharedIndexDataOffset];
  if ( ((unsigned __int8)v5 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 48, ASSERT_TYPE_ASSERT, "(IsAligned( indices, 16 ))", (const char *)&queryFormat, "IsAligned( indices, 16 )") )
    __debugbreak();
  return v5;
}

/*
==============
XSurfaceGetVerts
==============
*/
GfxVertexUnion XSurfaceGetVerts(const XSurface *surface)
{
  unsigned int sharedVertDataOffset; 
  XSurfaceShared *shared; 
  unsigned int v5; 
  unsigned int dataSize; 

  sharedVertDataOffset = surface->sharedVertDataOffset;
  if ( sharedVertDataOffset >= surface->shared->dataSize )
  {
    dataSize = surface->shared->dataSize;
    v5 = sharedVertDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedVertDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedVertDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v5, dataSize) )
      __debugbreak();
  }
  shared = surface->shared;
  if ( (shared->flags & 1) != 0 )
    return (GfxVertexUnion)&Stream_AddressSpace_ResolveHandle(&surface->shared->data.streamedDataHandle)[surface->sharedVertDataOffset];
  else
    return (GfxVertexUnion)(shared->data.streamedDataHandle.data + surface->sharedVertDataOffset);
}

