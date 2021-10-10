/*
==============
R_Texture_HasNullAssigned
==============
*/

bool __fastcall R_Texture_HasNullAssigned(const GfxTexture *texture)
{
  return ?R_Texture_HasNullAssigned@@YA_NPEBUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_GetLevelCount
==============
*/

unsigned int __fastcall R_Texture_GetLevelCount(const GfxBackEndData *data, GfxTextureId id)
{
  return ?R_Texture_GetLevelCount@@YAIPEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
R_Texture_CreateStreamedDefault
==============
*/

void __fastcall R_Texture_CreateStreamedDefault(GfxImage *image)
{
  ?R_Texture_CreateStreamedDefault@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
R_Texture_Shutdown
==============
*/

void R_Texture_Shutdown(void)
{
  ?R_Texture_Shutdown@@YAXXZ();
}

/*
==============
R_Texture_GetDims
==============
*/

void __fastcall R_Texture_GetDims(const GfxTexture *texture, unsigned int *outWidth, unsigned int *outHeight, unsigned int *outLevelCount, unsigned int *outElementCount)
{
  ?R_Texture_GetDims@@YAXPEBUGfxTexture@@PEAI111@Z(texture, outWidth, outHeight, outLevelCount, outElementCount);
}

/*
==============
R_Texture_IsStreamed
==============
*/

bool __fastcall R_Texture_IsStreamed(const GfxTexture *texture)
{
  return ?R_Texture_IsStreamed@@YA_NPEBUGfxTexture@@@Z(texture);
}

/*
==============
RB_Texture_SetStreamedMostDetailedMip
==============
*/

void __fastcall RB_Texture_SetStreamedMostDetailedMip(const GfxBackEndData *data, const GfxImage *image, unsigned int mostDetailedMip)
{
  ?RB_Texture_SetStreamedMostDetailedMip@@YAXPEBUGfxBackEndData@@PEBUGfxImage@@I@Z(data, image, mostDetailedMip);
}

/*
==============
R_Texture_ResetFallback
==============
*/

void __fastcall R_Texture_ResetFallback(GfxImage *image, GfxImageFallback *fallback)
{
  ?R_Texture_ResetFallback@@YAXPEAUGfxImage@@PEAUGfxImageFallback@@@Z(image, fallback);
}

/*
==============
RB_Texture_BeginAllowStreamedTextureUpdate
==============
*/

void __fastcall RB_Texture_BeginAllowStreamedTextureUpdate(const GfxBackEndData *data)
{
  ?RB_Texture_BeginAllowStreamedTextureUpdate@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_Texture_Init
==============
*/

void R_Texture_Init(void)
{
  ?R_Texture_Init@@YAXXZ();
}

/*
==============
R_Texture_GetResidentMutable
==============
*/

GfxTexture *__fastcall R_Texture_GetResidentMutable(GfxTextureId id)
{
  return ?R_Texture_GetResidentMutable@@YAPEAUGfxTexture@@W4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_Copy
==============
*/

void __fastcall R_Texture_Copy(GfxTextureId fromId, GfxTextureId *toId)
{
  ?R_Texture_Copy@@YAXW4GfxTextureId@@AEAW41@@Z(fromId, toId);
}

/*
==============
R_Texture_UpdateStreamedFallbacks
==============
*/

void __fastcall R_Texture_UpdateStreamedFallbacks(bool useImageFallback)
{
  ?R_Texture_UpdateStreamedFallbacks@@YAX_N@Z(useImageFallback);
}

/*
==============
RB_Texture_ClearForDebugShaderStreaming
==============
*/

void __fastcall RB_Texture_ClearForDebugShaderStreaming(const GfxBackEndData *data, GfxTextureId id, unsigned int mostDetailedMip, unsigned int mipLevelCount)
{
  ?RB_Texture_ClearForDebugShaderStreaming@@YAXPEBUGfxBackEndData@@W4GfxTextureId@@II@Z(data, id, mostDetailedMip, mipLevelCount);
}

/*
==============
R_Texture_IsResidentId
==============
*/

bool __fastcall R_Texture_IsResidentId(GfxTextureId id)
{
  return ?R_Texture_IsResidentId@@YA_NW4GfxTextureId@@@Z(id);
}

/*
==============
RB_Texture_HasStreamedFallbackAssigned
==============
*/

bool __fastcall RB_Texture_HasStreamedFallbackAssigned(const GfxBackEndData *data, GfxTextureId id)
{
  return ?RB_Texture_HasStreamedFallbackAssigned@@YA_NPEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
GfxTexturePool<89088>::ReturnFreeIndex
==============
*/

void __fastcall GfxTexturePool<89088>::ReturnFreeIndex(GfxTexturePool<89088> *this, unsigned int index, bool resident)
{
  ?ReturnFreeIndex@?$GfxTexturePool@$0BFMAA@@@QEAAXI_N@Z(this, index, resident);
}

/*
==============
RB_Texture_FixupStreamedPixelsPtr
==============
*/

void __fastcall RB_Texture_FixupStreamedPixelsPtr(const GfxBackEndData *data, const GfxImage *image, unsigned int mostDetailedMip)
{
  ?RB_Texture_FixupStreamedPixelsPtr@@YAXPEBUGfxBackEndData@@PEBUGfxImage@@I@Z(data, image, mostDetailedMip);
}

/*
==============
R_Texture_GetResident
==============
*/

const GfxTexture *__fastcall R_Texture_GetResident(GfxTextureId id)
{
  return ?R_Texture_GetResident@@YAPEBUGfxTexture@@W4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_GetNull
==============
*/

const GfxTexture *__fastcall R_Texture_GetNull()
{
  return ?R_Texture_GetNull@@YAPEBUGfxTexture@@XZ();
}

/*
==============
R_Texture_Move
==============
*/

void __fastcall R_Texture_Move(GfxTextureId *fromId, GfxTextureId *toId)
{
  ?R_Texture_Move@@YAXAEAW4GfxTextureId@@0@Z(fromId, toId);
}

/*
==============
R_Texture_GetLevelCount
==============
*/

unsigned int __fastcall R_Texture_GetLevelCount(const GfxTexture *texture)
{
  return ?R_Texture_GetLevelCount@@YAIPEBUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_Swap
==============
*/

void __fastcall R_Texture_Swap(GfxTextureId *fromId, GfxTextureId *toId)
{
  ?R_Texture_Swap@@YAXAEAW4GfxTextureId@@0@Z(fromId, toId);
}

/*
==============
GfxTexture::operator=
==============
*/

GfxTexture *__fastcall GfxTexture::operator=(GfxTexture *this, GfxTexture *other)
{
  return ??4GfxTexture@@QEAAAEAU0@$$QEAU0@@Z(this, other);
}

/*
==============
R_Texture_CreateNullRT
==============
*/

GfxTextureId __fastcall R_Texture_CreateNullRT()
{
  return ?R_Texture_CreateNullRT@@YA?AW4GfxTextureId@@XZ();
}

/*
==============
RB_Texture_UpdateForDebugShaderStreaming
==============
*/

void __fastcall RB_Texture_UpdateForDebugShaderStreaming(const GfxBackEndData *data, GfxTextureId id, unsigned int mostDetailedMip, unsigned int basePartMip)
{
  ?RB_Texture_UpdateForDebugShaderStreaming@@YAXPEBUGfxBackEndData@@W4GfxTextureId@@II@Z(data, id, mostDetailedMip, basePartMip);
}

/*
==============
R_Texture_Get
==============
*/

const GfxTexture *__fastcall R_Texture_Get(const GfxBackEndData *data, GfxTextureId id)
{
  return ?R_Texture_Get@@YAPEBUGfxTexture@@PEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
RB_Texture_AssignNewStreamed
==============
*/

void __fastcall RB_Texture_AssignNewStreamed(const GfxBackEndData *data, GfxTextureId id, GfxTexture *newTexture)
{
  ?RB_Texture_AssignNewStreamed@@YAXPEBUGfxBackEndData@@W4GfxTextureId@@$$QEAUGfxTexture@@@Z(data, id, newTexture);
}

/*
==============
R_Texture_IsDestroyed
==============
*/

bool __fastcall R_Texture_IsDestroyed(GfxTextureId id)
{
  return ?R_Texture_IsDestroyed@@YA_NW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_Create
==============
*/

GfxTextureId __fastcall R_Texture_Create(const GfxTexture_CreateParams *params)
{
  return ?R_Texture_Create@@YA?AW4GfxTextureId@@AEBUGfxTexture_CreateParams@@@Z(params);
}

/*
==============
RB_Texture_AssignStreamedFallback
==============
*/

void __fastcall RB_Texture_AssignStreamedFallback(const GfxBackEndData *data, GfxTextureId id)
{
  ?RB_Texture_AssignStreamedFallback@@YAXPEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
R_Texture_AssignNull
==============
*/

void __fastcall R_Texture_AssignNull(GfxTexture *texture)
{
  ?R_Texture_AssignNull@@YAXPEAUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_HasDefaultAssigned
==============
*/

bool __fastcall R_Texture_HasDefaultAssigned(const GfxTexture *texture)
{
  return ?R_Texture_HasDefaultAssigned@@YA_NPEBUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_Destroy
==============
*/

void __fastcall R_Texture_Destroy(GfxTextureId id)
{
  ?R_Texture_Destroy@@YAXW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_GetStreamed
==============
*/

const GfxTexture *__fastcall R_Texture_GetStreamed(const GfxBackEndData *data, GfxTextureId id)
{
  return ?R_Texture_GetStreamed@@YAPEBUGfxTexture@@PEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
GfxTexture::GfxTexture
==============
*/

void __fastcall GfxTexture::GfxTexture(GfxTexture *this, GfxTexture *other)
{
  ??0GfxTexture@@QEAA@$$QEAU0@@Z(this, other);
}

/*
==============
R_Texture_GetResidentLevelCount
==============
*/

unsigned int __fastcall R_Texture_GetResidentLevelCount(GfxTextureId id)
{
  return ?R_Texture_GetResidentLevelCount@@YAIW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_AssignDefault
==============
*/

void __fastcall R_Texture_AssignDefault(GfxTexture *texture)
{
  ?R_Texture_AssignDefault@@YAXPEAUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_DestroyResidentInPlace
==============
*/

void __fastcall R_Texture_DestroyResidentInPlace(GfxTexture *texture)
{
  ?R_Texture_DestroyResidentInPlace@@YAXPEAUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_GetDefault
==============
*/

const GfxTexture *__fastcall R_Texture_GetDefault()
{
  return ?R_Texture_GetDefault@@YAPEBUGfxTexture@@XZ();
}

/*
==============
R_Texture_IsDestroyed
==============
*/

bool __fastcall R_Texture_IsDestroyed(const GfxTexture *texture)
{
  return ?R_Texture_IsDestroyed@@YA_NPEBUGfxTexture@@@Z(texture);
}

/*
==============
R_Texture_GetStreamedLevelCount
==============
*/

unsigned int __fastcall R_Texture_GetStreamedLevelCount(const GfxBackEndData *data, GfxTextureId id)
{
  return ?R_Texture_GetStreamedLevelCount@@YAIPEBUGfxBackEndData@@W4GfxTextureId@@@Z(data, id);
}

/*
==============
R_Texture_UnAlias
==============
*/

void __fastcall R_Texture_UnAlias(GfxTextureId id)
{
  ?R_Texture_UnAlias@@YAXW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_CreateDefault
==============
*/

GfxTextureId __fastcall R_Texture_CreateDefault()
{
  return ?R_Texture_CreateDefault@@YA?AW4GfxTextureId@@XZ();
}

/*
==============
R_Texture_CreateWithSourceData
==============
*/

GfxTextureId __fastcall R_Texture_CreateWithSourceData(const GfxTexture_CreateParams *params, const Image_SetupData *data)
{
  return ?R_Texture_CreateWithSourceData@@YA?AW4GfxTextureId@@AEBUGfxTexture_CreateParams@@AEBUImage_SetupData@@@Z(params, data);
}

/*
==============
RB_Texture_CopyStreamedFromPrevBackendFrame
==============
*/

void __fastcall RB_Texture_CopyStreamedFromPrevBackendFrame(const GfxBackEndData *data, const GfxImage *image)
{
  ?RB_Texture_CopyStreamedFromPrevBackendFrame@@YAXPEBUGfxBackEndData@@PEBUGfxImage@@@Z(data, image);
}

/*
==============
GfxTexturePool<89088>::GetFreeIndex
==============
*/

unsigned int __fastcall GfxTexturePool<89088>::GetFreeIndex(GfxTexturePool<89088> *this, bool resident)
{
  return ?GetFreeIndex@?$GfxTexturePool@$0BFMAA@@@QEAAI_N@Z(this, resident);
}

/*
==============
R_Texture_CreateResident
==============
*/

void __fastcall R_Texture_CreateResident(GfxImage *image)
{
  ?R_Texture_CreateResident@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
R_Texture_IsOwnerId
==============
*/

bool __fastcall R_Texture_IsOwnerId(GfxTextureId id)
{
  return ?R_Texture_IsOwnerId@@YA_NW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_GetTextureIdIndex
==============
*/

unsigned int __fastcall R_Texture_GetTextureIdIndex(GfxTextureId id)
{
  return ?R_Texture_GetTextureIdIndex@@YAIW4GfxTextureId@@@Z(id);
}

/*
==============
RB_Texture_EndAllowStreamedTextureUpdate
==============
*/

void __fastcall RB_Texture_EndAllowStreamedTextureUpdate(const GfxBackEndData *data)
{
  ?RB_Texture_EndAllowStreamedTextureUpdate@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_Texture_CreateWithTiledPixelsData
==============
*/

GfxTextureId __fastcall R_Texture_CreateWithTiledPixelsData(const GfxTexture_CreateParams *params)
{
  return ?R_Texture_CreateWithTiledPixelsData@@YA?AW4GfxTextureId@@AEBUGfxTexture_CreateParams@@@Z(params);
}

/*
==============
R_Texture_IsValidTextureId
==============
*/

bool __fastcall R_Texture_IsValidTextureId(GfxTextureId id)
{
  return ?R_Texture_IsValidTextureId@@YA_NW4GfxTextureId@@@Z(id);
}

/*
==============
R_Texture_IsStreamedId
==============
*/

bool __fastcall R_Texture_IsStreamedId(GfxTextureId id)
{
  return ?R_Texture_IsStreamedId@@YA_NW4GfxTextureId@@@Z(id);
}

/*
==============
GfxTexture::GfxTexture
==============
*/
void GfxTexture::GfxTexture(GfxTexture *this, GfxTexture *other)
{
  *this = *other;
  *other = s_textureGlob.nullTexture;
}

/*
==============
GfxTexture::operator=
==============
*/
GfxTexture *GfxTexture::operator=(GfxTexture *this, GfxTexture *other)
{
  GfxTexture *result; 

  result = this;
  if ( other != this )
  {
    *this = *other;
    *other = s_textureGlob.nullTexture;
  }
  return result;
}

/*
==============
GfxTexturePool<89088>::GetFreeIndex
==============
*/
__int64 GfxTexturePool<89088>::GetFreeIndex(GfxTexturePool<89088> *this, bool resident)
{
  unsigned int searchFreeIndex; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int *v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  bitarray<89088> *p_freeList; 
  unsigned int v15; 
  __int64 v17; 
  __int64 v18; 
  FastCriticalSectionScopeWrite v19; 

  if ( !this->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 141, ASSERT_TYPE_ASSERT, "(isInitialized)", (const char *)&queryFormat, "isInitialized") )
    __debugbreak();
  v19.cs = &this->lock;
  Sys_LockWrite(&this->lock);
  if ( this->entriesUsedCount >= 0x15C00 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 147, ASSERT_TYPE_ASSERT, "(entriesUsedCount < POOL_SIZE)", (const char *)&queryFormat, "entriesUsedCount < POOL_SIZE") )
      __debugbreak();
    if ( this->entriesUsedCount >= 0x15C00 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143DB0D60, 6325i64);
  }
  searchFreeIndex = this->searchFreeIndex;
  if ( searchFreeIndex >= 0x15C00 )
  {
    LODWORD(v17) = this->searchFreeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 514, ASSERT_TYPE_ASSERT, "(unsigned)( pos ) < (unsigned)( wordCount * BITS_PER_WORD )", "pos doesn't index wordCount * BITS_PER_WORD\n\t%i not in [0, %i)", v17, 89088) )
      __debugbreak();
  }
  v5 = searchFreeIndex >> 5;
  v6 = searchFreeIndex & 0x1F;
  if ( !v6 )
    goto LABEL_17;
  v7 = __lzcnt((0xFFFFFFFF >> v6) & this->freeList.array[v5]);
  if ( v7 < 0x20 )
  {
    v8 = v7 + 32 * v5;
    goto LABEL_21;
  }
  if ( (_DWORD)v5 != 2783 )
  {
    v5 = (unsigned int)(v5 + 1);
LABEL_17:
    v9 = &this->freeList.array[v5];
    v10 = 0;
    v11 = 0;
    if ( (_DWORD)v5 != 2784 )
    {
      do
      {
        v12 = __lzcnt(*v9);
        v10 += v12;
        if ( v12 < 0x20 )
          break;
        ++v11;
        ++v9;
      }
      while ( v11 < 2784 - (int)v5 );
    }
    v8 = v10 + 32 * v5;
LABEL_21:
    if ( v8 < 0x15C00 )
      goto LABEL_28;
  }
  v8 = 0;
  v13 = 0;
  p_freeList = &this->freeList;
  do
  {
    v15 = __lzcnt(p_freeList->array[0]);
    v8 += v15;
    if ( v15 < 0x20 )
      break;
    ++v13;
    p_freeList = (bitarray<89088> *)((char *)p_freeList + 4);
  }
  while ( v13 < 0xAE0 );
  if ( v8 >= 0x15C00 )
  {
    LODWORD(v18) = 89088;
    LODWORD(v17) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( firstFreeIndex ) < (unsigned)( POOL_SIZE )", "firstFreeIndex doesn't index POOL_SIZE\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
LABEL_28:
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 160, ASSERT_TYPE_ASSERT, "( firstFreeIndex ) != ( 0 )", "%s != %s\n\t%u, %u", "firstFreeIndex", "0", 0, 0i64) )
    __debugbreak();
  bitarray_base<bitarray<89088>>::resetBit(&this->freeList, v8);
  ++this->entriesUsedCount;
  this->searchFreeIndex = (v8 + 1) % 0x15C00;
  if ( !resident )
    bitarray_base<bitarray<89088>>::setBit(&this->streamedList, v8);
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v19);
  return v8;
}

/*
==============
RB_Texture_AssignNewStreamed
==============
*/
void RB_Texture_AssignNewStreamed(const GfxBackEndData *data, GfxTextureId id, GfxTexture *newTexture)
{
  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1766, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1767, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1768, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1769, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1770, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( id ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( id )") )
    __debugbreak();
  if ( !newTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1394, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( R_Texture_HasNullAssigned(newTexture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1771, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( &newTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( &newTexture )") )
    __debugbreak();
  RB_Texture_AssignStreamedInternal(data, id, newTexture);
}

/*
==============
RB_Texture_AssignStreamedFallback
==============
*/
void RB_Texture_AssignStreamedFallback(const GfxBackEndData *data, GfxTextureId id)
{
  const GfxTexture *StreamedFallback; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1754, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1755, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1756, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1757, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1758, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( id ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( id )") )
    __debugbreak();
  StreamedFallback = R_Texture_GetStreamedFallback(id);
  RB_Texture_AssignStreamedInternal(data, id, StreamedFallback);
}

/*
==============
RB_Texture_AssignStreamedInternal
==============
*/
void RB_Texture_AssignStreamedInternal(const GfxBackEndData *data, GfxTextureId id, const GfxTexture *newTexture)
{
  GfxTexture *v6; 
  unsigned int BackEndDataIndex; 
  GfxTexturePoolEntry *v8; 
  __int64 v9; 
  bool v10; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1728, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1730, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( !newTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1731, ASSERT_TYPE_ASSERT, "(newTexture)", (const char *)&queryFormat, "newTexture") )
    __debugbreak();
  v6 = R_Texture_GetFromIdMutable(data, id);
  BackEndDataIndex = R_GetBackEndDataIndex(data);
  v8 = &s_textureGlob.pool.entries[id & 0x3FFFFFFF];
  if ( !memcmp_0(&v8->streamed.fallbackTexture, v6, 0x30ui64) )
  {
    *v6 = s_textureGlob.nullTexture;
  }
  else
  {
    v9 = 0i64;
    v10 = 1;
    while ( (_DWORD)v9 == BackEndDataIndex || memcmp_0(v6, &v8->resident.texture + v9, 0x30ui64) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 2 )
        goto LABEL_18;
    }
    v10 = 0;
LABEL_18:
    R_Texture_DestroyInternal(v6, 1, 0, v10);
  }
  *(__m256i *)&v6->basemap = *(__m256i *)&newTexture->basemap;
  *(_OWORD *)&v6->shaderRWView.rwCounterResource = *(_OWORD *)&newTexture->shaderRWView.rwCounterResource;
}

/*
==============
RB_Texture_BeginAllowStreamedTextureUpdate
==============
*/
void RB_Texture_BeginAllowStreamedTextureUpdate(const GfxBackEndData *data)
{
  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1669, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1670, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1671, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1672, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == nullptr)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == nullptr") )
    __debugbreak();
  s_textureGlob.allowedStreamedTextureUpdateData = data;
}

/*
==============
RB_Texture_ClearForDebugShaderStreaming
==============
*/
void RB_Texture_ClearForDebugShaderStreaming(const GfxBackEndData *data, GfxTextureId id, unsigned int mostDetailedMip, unsigned int mipLevelCount)
{
  unsigned __int64 v6; 

  v6 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + R_Texture_GetFromIdMutable(data, id)->shaderView.view);
  if ( (v6 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 896, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  XB3_SetTextureMostDetailedMip((D3D12_CPU_DESCRIPTOR_HANDLE)v6, mostDetailedMip);
  XB3_SetTextureLeastDetailedMip((D3D12_CPU_DESCRIPTOR_HANDLE)v6, mipLevelCount - 1);
  if ( (v6 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 817, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  *(_DWORD *)(v6 + 4) &= 0xFFF000FF;
}

/*
==============
RB_Texture_CopyStreamedFromPrevBackendFrame
==============
*/
void RB_Texture_CopyStreamedFromPrevBackendFrame(const GfxBackEndData *data, const GfxImage *image)
{
  GfxTextureId textureId; 
  unsigned int BackEndDataIndex; 
  unsigned int v6; 
  const GfxBackEndData *BackEndData; 
  const GfxTexture *v8; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1957, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1958, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1959, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1960, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1961, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  textureId = image->textureId;
  if ( textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1964, ASSERT_TYPE_ASSERT, "( ( R_Texture_IsStreamedId( id ) ) )", "( image->name ) = %s", image->name) )
    __debugbreak();
  if ( R_Texture_IsDestroyed(textureId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1965, ASSERT_TYPE_ASSERT, "( ( !R_Texture_IsDestroyed( id ) ) )", "( image->name ) = %s", image->name) )
    __debugbreak();
  BackEndDataIndex = R_GetBackEndDataIndex(data);
  v6 = 1;
  if ( BackEndDataIndex )
    v6 = BackEndDataIndex - 1;
  BackEndData = R_GetBackEndData(v6);
  if ( textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1426, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  v8 = R_Texture_GetFromId(BackEndData, textureId);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1394, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( R_Texture_HasNullAssigned(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1972, ASSERT_TYPE_ASSERT, "( ( !R_Texture_IsDestroyed( prevTexture ) ) )", "( image->name ) = %s", image->name) )
    __debugbreak();
  RB_Texture_AssignStreamedInternal(data, textureId, v8);
}

/*
==============
RB_Texture_EndAllowStreamedTextureUpdate
==============
*/
void RB_Texture_EndAllowStreamedTextureUpdate(const GfxBackEndData *data)
{
  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1679, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1680, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1681, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1682, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  s_textureGlob.allowedStreamedTextureUpdateData = NULL;
}

/*
==============
RB_Texture_FixupStreamedPixelsPtr
==============
*/
void RB_Texture_FixupStreamedPixelsPtr(const GfxBackEndData *data, const GfxImage *image, unsigned int mostDetailedMip)
{
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  GfxTextureId textureId; 
  GfxTexture *StreamedFallback; 
  const dvar_t *v11; 
  GfxTexture *v12; 
  unsigned int v13; 
  bool enabled; 
  unsigned __int64 v15; 
  int levelCount; 
  bool v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  int integer; 
  __m256i v26; 
  __m256i v27; 
  GfxTexture_CreateParams textureParams; 
  GfxTexture texture; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1781, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1782, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1783, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1784, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1785, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1786, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( image->textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1787, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( image->textureId ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( image->textureId )") )
    __debugbreak();
  v7 = Stream_AddressSpace_ResolveHandle(&image->pixels.streamedDataHandle);
  v8 = v7;
  if ( !v7 )
  {
    textureId = image->textureId;
    if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1754, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
      __debugbreak();
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1755, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
      __debugbreak();
    if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1756, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
      __debugbreak();
    if ( textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1757, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
      __debugbreak();
    if ( R_Texture_IsDestroyed(textureId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1758, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( id ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( id )") )
      __debugbreak();
    StreamedFallback = (GfxTexture *)R_Texture_GetStreamedFallback(textureId);
LABEL_127:
    RB_Texture_AssignStreamedInternal(data, textureId, StreamedFallback);
    return;
  }
  if ( (_BYTE)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1796, ASSERT_TYPE_ASSERT, "(IsAligned( pixels, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( pixels, R_IMAGE_ALIGNMENT )") )
    __debugbreak();
  if ( !Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_PRIVATE, v8) && !Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1797, ASSERT_TYPE_ASSERT, "(Mem_Paged_IsWriteCombineMemory( pixels ))", (const char *)&queryFormat, "Mem_Paged_IsWriteCombineMemory( pixels )") )
    __debugbreak();
  v11 = r_debugShaderTexture;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  v12 = R_Texture_GetFromIdMutable(data, image->textureId);
  if ( (v12->shaderRWView.rwView & 0xFFFFFFFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1840, ASSERT_TYPE_ASSERT, "(texture->shaderRWView.IsNull())", (const char *)&queryFormat, "texture->shaderRWView.IsNull()") )
    __debugbreak();
  v13 = (unsigned __int64)v8 >> 8;
  if ( v8 != (unsigned __int8 *)((unsigned __int64)v13 << 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1843, ASSERT_TYPE_ASSERT, "( pixels ) == ( reinterpret_cast<void *>( pixelsAddr << 8 ) )", "%s == %s\n\t%p, %p", "pixels", "reinterpret_cast<void *>( pixelsAddr << 8 )", v8, (const void *)((unsigned __int64)v13 << 8)) )
    __debugbreak();
  enabled = r_deviceDebug->current.enabled;
  if ( RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) || enabled )
  {
    levelCount = image->levelCount;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v27.m256i_i64[0] = 0i64;
    *(_OWORD *)&v27.m256i_u64[1] = _XMM0;
    v26.m256i_i32[0] = image->width;
    v26.m256i_i32[1] = image->height;
    v26.m256i_i32[2] = image->depth;
    v26.m256i_i32[3] = image->numElements;
    v27.m256i_i32[6] = -1;
    v18 = Image_CountMipmaps(v26.m256i_u32[0], v26.m256i_u32[1], v26.m256i_u32[2]) == levelCount;
    textureParams.pixels = v8;
    v26.m256i_i32[5] = image->flags;
    if ( v18 )
      levelCount = 0;
    v26.m256i_i32[6] = image->format;
    textureParams.name = image->name;
    v26.m256i_i32[4] = levelCount;
    memset(&texture, 0, sizeof(texture));
    *(__m256i *)&textureParams.params.width = v26;
    *(__m256i *)&textureParams.params.customAllocFunc = v27;
    Image_CreatePlacementTexture_XB3(&textureParams, &texture, mostDetailedMip);
    v19 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (texture.shaderView.view + g_descriptorPools.shaderViewPool.handle.startSlot);
    v20 = (LOBYTE(g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr) + LOBYTE(g_descriptorPools.shaderViewPool.handle.parent->descriptorSize) * (LOBYTE(texture.shaderView.view) + LOBYTE(g_descriptorPools.shaderViewPool.handle.startSlot))) & 7;
    if ( ((LOBYTE(g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr) + LOBYTE(g_descriptorPools.shaderViewPool.handle.parent->descriptorSize) * (LOBYTE(texture.shaderView.view) + LOBYTE(g_descriptorPools.shaderViewPool.handle.startSlot))) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1863, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    if ( *(_DWORD *)v19 != v13 )
    {
      LODWORD(v23) = (unsigned __int64)v8 >> 8;
      LODWORD(v22) = *(_DWORD *)v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1864, ASSERT_TYPE_ASSERT, "( ( reinterpret_cast<const uint32_t*>( viewHandle.ptr )[0] ) ) == ( truncate_cast<uint32_t>( pixelsAddr ) )", "%s == %s\n\t%u, %u", "( reinterpret_cast<const uint32_t*>( viewHandle.ptr )[0] )", "truncate_cast<uint32_t>( pixelsAddr )", v22, v23) )
        __debugbreak();
    }
    if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    if ( ((*(_DWORD *)(v19 + 4) >> 8) & 0xFFF) != mostDetailedMip << 8 )
    {
      if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
      LODWORD(v23) = mostDetailedMip << 8;
      LODWORD(v22) = (*(_DWORD *)(v19 + 4) >> 8) & 0xFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1865, ASSERT_TYPE_ASSERT, "( XB3_GetTextureMinLODClamp( viewHandle ) ) == ( ( mostDetailedMip << 8 ) )", "%s == %s\n\t%u, %u", "XB3_GetTextureMinLODClamp( viewHandle )", "( mostDetailedMip << 8 )", v22, v23) )
        __debugbreak();
    }
    if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 809, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v19 + 12)) >> 4 != mostDetailedMip )
    {
      if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 809, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
      LODWORD(v23) = mostDetailedMip;
      LODWORD(v22) = (unsigned __int8)HIBYTE(*(_WORD *)(v19 + 12)) >> 4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1866, ASSERT_TYPE_ASSERT, "( XB3_GetTextureMostDetailedMip( viewHandle ) ) == ( mostDetailedMip )", "%s == %s\n\t%u, %u", "XB3_GetTextureMostDetailedMip( viewHandle )", "mostDetailedMip", v22, v23) )
        __debugbreak();
    }
    if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 801, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    v21 = image->levelCount;
    if ( (*(_WORD *)(v19 + 14) & 0xF) + 1 != v21 )
    {
      if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 801, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
      LODWORD(v23) = v21;
      LODWORD(v22) = (*(_WORD *)(v19 + 14) & 0xF) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1867, ASSERT_TYPE_ASSERT, "( XB3_GetTextureLeastDetailedMip( viewHandle ) + 1 ) == ( image->levelCount )", "%s == %s\n\t%u, %u", "XB3_GetTextureLeastDetailedMip( viewHandle ) + 1", "image->levelCount", v22, v23) )
        __debugbreak();
    }
    if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 817, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    *(_DWORD *)(v19 + 4) &= 0xFFF000FF;
    if ( integer == 10 )
      R_Texture_UpdateForDebugShaderStreaming(&texture, mostDetailedMip, image->streamedPartCount - 1);
    textureId = image->textureId;
    if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1766, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
      __debugbreak();
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1767, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
      __debugbreak();
    if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1768, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
      __debugbreak();
    if ( textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1769, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
      __debugbreak();
    if ( R_Texture_IsDestroyed(textureId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1770, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( id ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( id )") )
      __debugbreak();
    if ( R_Texture_HasNullAssigned(&texture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1771, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( &newTexture ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( &newTexture )") )
      __debugbreak();
    StreamedFallback = &texture;
    goto LABEL_127;
  }
  v15 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v12->shaderView.view);
  *(_DWORD *)v15 = truncate_cast<unsigned int,unsigned __int64>((unsigned int)((unsigned __int64)v8 >> 8));
  XB3_SetTextureMostDetailedMip((D3D12_CPU_DESCRIPTOR_HANDLE)v15, mostDetailedMip);
  if ( integer == 10 )
  {
    R_Texture_UpdateForDebugShaderStreaming(v12, mostDetailedMip, image->streamedPartCount - 1);
  }
  else
  {
    if ( (v15 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    if ( (*(_DWORD *)(v15 + 4) & 0xFFF00) != 0 )
    {
      LODWORD(v22) = XB3_GetTextureMinLODClamp((D3D12_CPU_DESCRIPTOR_HANDLE)v15);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1895, ASSERT_TYPE_ASSERT, "( XB3_GetTextureMinLODClamp( viewHandle ) ) == ( 0 )", "%s == %s\n\t%u, %u", "XB3_GetTextureMinLODClamp( viewHandle )", "0", v22, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
RB_Texture_HasStreamedFallbackAssigned
==============
*/
bool RB_Texture_HasStreamedFallbackAssigned(const GfxBackEndData *data, GfxTextureId id)
{
  const GfxTexture *v4; 
  const GfxTexture *StreamedFallback; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1744, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1745, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( R_Texture_IsDestroyed(id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1746, ASSERT_TYPE_ASSERT, "(!R_Texture_IsDestroyed( id ))", (const char *)&queryFormat, "!R_Texture_IsDestroyed( id )") )
    __debugbreak();
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1426, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  v4 = R_Texture_GetFromId(data, id);
  StreamedFallback = R_Texture_GetStreamedFallback(id);
  return memcmp_0(StreamedFallback, v4, 0x30ui64) == 0;
}

/*
==============
RB_Texture_SetStreamedMostDetailedMip
==============
*/
void RB_Texture_SetStreamedMostDetailedMip(const GfxBackEndData *data, const GfxImage *image, unsigned int mostDetailedMip)
{
  GfxTexture *v6; 
  unsigned __int64 v7; 
  const dvar_t *v8; 
  __int64 v9; 

  if ( !Sys_IsBackendOwnerThread() && !Stream_BackendQueue_IsInForcedFlush() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1910, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1911, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( s_textureGlob.allowedStreamedTextureUpdateData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1912, ASSERT_TYPE_ASSERT, "(s_textureGlob.allowedStreamedTextureUpdateData == data)", (const char *)&queryFormat, "s_textureGlob.allowedStreamedTextureUpdateData == data") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1913, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1914, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( mostDetailedMip >= image->levelCount )
  {
    LODWORD(v9) = mostDetailedMip;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1915, ASSERT_TYPE_ASSERT, "(unsigned)( mostDetailedMip ) < (unsigned)( image->levelCount )", "mostDetailedMip doesn't index image->levelCount\n\t%i not in [0, %i)", v9, image->levelCount) )
      __debugbreak();
  }
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1916, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( image->textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1917, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( image->textureId ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( image->textureId )") )
    __debugbreak();
  if ( RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1918, ASSERT_TYPE_ASSERT, "(!RB_Texture_HasStreamedFallbackAssigned( data, image->textureId ))", (const char *)&queryFormat, "!RB_Texture_HasStreamedFallbackAssigned( data, image->textureId )") )
    __debugbreak();
  v6 = R_Texture_GetFromIdMutable(data, image->textureId);
  if ( (v6->shaderRWView.rwView & 0xFFFFFFFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1925, ASSERT_TYPE_ASSERT, "(texture->shaderRWView.IsNull())", (const char *)&queryFormat, "texture->shaderRWView.IsNull()") )
    __debugbreak();
  v7 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v6->shaderView.view);
  XB3_SetTextureMostDetailedMip((D3D12_CPU_DESCRIPTOR_HANDLE)v7, mostDetailedMip);
  v8 = r_debugShaderTexture;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == 10 )
  {
    R_Texture_UpdateForDebugShaderStreaming(v6, mostDetailedMip, image->streamedPartCount - 1);
  }
  else
  {
    if ( (v7 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
      __debugbreak();
    if ( (*(_DWORD *)(v7 + 4) & 0xFFF00) != 0 )
    {
      if ( (v7 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1943, ASSERT_TYPE_ASSERT, "( XB3_GetTextureMinLODClamp( viewHandle ) ) == ( 0 )", "%s == %s\n\t%u, %u", "XB3_GetTextureMinLODClamp( viewHandle )", "0", (*(_DWORD *)(v7 + 4) >> 8) & 0xFFF, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
RB_Texture_UpdateForDebugShaderStreaming
==============
*/
void RB_Texture_UpdateForDebugShaderStreaming(const GfxBackEndData *data, GfxTextureId id, unsigned int mostDetailedMip, unsigned int basePartMip)
{
  GfxTexture *v6; 

  v6 = R_Texture_GetFromIdMutable(data, id);
  R_Texture_UpdateForDebugShaderStreaming(v6, mostDetailedMip, basePartMip);
}

/*
==============
R_Texture_AssignDefault
==============
*/
void R_Texture_AssignDefault(GfxTexture *texture)
{
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1588, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1589, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  *texture = s_textureGlob.default2DTexture;
}

/*
==============
R_Texture_AssignNull
==============
*/
void R_Texture_AssignNull(GfxTexture *texture)
{
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1580, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1581, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  *texture = s_textureGlob.nullTexture;
}

/*
==============
R_Texture_Copy
==============
*/
void R_Texture_Copy(GfxTextureId fromId, GfxTextureId *toId)
{
  GfxTextureId v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !R_Texture_IsValidTextureId(fromId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1161, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( fromId ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( fromId )") )
    __debugbreak();
  if ( fromId < NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1162, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( fromId ))", (const char *)&queryFormat, "R_Texture_IsResidentId( fromId )") )
    __debugbreak();
  v4 = *toId;
  v5 = fromId & 0x3FFFFFFF;
  if ( *toId )
  {
    v6 = v4 & 0x3FFFFFFF;
    if ( v4 < NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1183, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( toId ))", (const char *)&queryFormat, "R_Texture_IsResidentId( toId )") )
      __debugbreak();
    if ( (*toId & 0x40000000) != 0 )
    {
      R_Texture_DestroyInternal(&s_textureGlob.pool.entries[v6].resident.texture, 0, 0, 1);
      *toId = v6;
    }
  }
  else
  {
    LODWORD(v6) = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, 1);
    *toId = v6;
  }
  v7 = (unsigned int)v6;
  *(__m256i *)&s_textureGlob.pool.entries[v7].resident.texture.basemap = *(__m256i *)&s_textureGlob.pool.entries[v5].resident.texture.basemap;
  *(_OWORD *)&s_textureGlob.pool.entries[v7].streamed.texture[0].shaderRWView.rwCounterResource = *(_OWORD *)&s_textureGlob.pool.entries[v5].streamed.texture[0].shaderRWView.rwCounterResource;
}

/*
==============
R_Texture_Create
==============
*/
GfxTextureId R_Texture_Create(const GfxTexture_CreateParams *params)
{
  return R_Texture_CreateInternal(params, NULL);
}

/*
==============
R_Texture_CreateDefault2D
==============
*/
void R_Texture_CreateDefault2D(GfxTexture *texture)
{
  const dvar_t *v2; 
  char *v4; 
  __int64 v5; 
  int v6; 
  char *v7; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  void *v44; 
  __m256i v45; 
  __m256i v46; 
  GfxTexture_CreateParams params; 
  Image_SetupData data; 
  char Src[4]; 
  char v50; 
  char v51; 

  v2 = DCONST_DVARBOOL_r_streamerUseGrayDefaultColor;
  if ( !DCONST_DVARBOOL_r_streamerUseGrayDefaultColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_streamerUseGrayDefaultColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v4 = &v51;
    v5 = 64i64;
    do
    {
      *((_DWORD *)v4 - 2) = -9079435;
      *((_DWORD *)v4 - 1) = -9079435;
      *(_DWORD *)v4 = -9079435;
      *((_DWORD *)v4 + 1) = -9079435;
      *((_DWORD *)v4 + 2) = -9079435;
      *((_DWORD *)v4 + 3) = -9079435;
      *((_DWORD *)v4 + 4) = -9079435;
      *((_DWORD *)v4 + 5) = -9079435;
      *((_DWORD *)v4 + 6) = -9079435;
      *((_DWORD *)v4 + 7) = -9079435;
      *((_DWORD *)v4 + 8) = -9079435;
      *((_DWORD *)v4 + 9) = -9079435;
      *((_DWORD *)v4 + 10) = -9079435;
      *((_DWORD *)v4 + 11) = -9079435;
      *((_DWORD *)v4 + 12) = -9079435;
      *((_DWORD *)v4 + 13) = -9079435;
      *((_DWORD *)v4 + 14) = -9079435;
      *((_DWORD *)v4 + 15) = -9079435;
      *((_DWORD *)v4 + 16) = -9079435;
      *((_DWORD *)v4 + 17) = -9079435;
      *((_DWORD *)v4 + 18) = -9079435;
      *((_DWORD *)v4 + 19) = -9079435;
      *((_DWORD *)v4 + 20) = -9079435;
      *((_DWORD *)v4 + 21) = -9079435;
      *((_DWORD *)v4 + 22) = -9079435;
      *((_DWORD *)v4 + 23) = -9079435;
      *((_DWORD *)v4 + 24) = -9079435;
      *((_DWORD *)v4 + 25) = -9079435;
      *((_DWORD *)v4 + 26) = -9079435;
      *((_DWORD *)v4 + 27) = -9079435;
      *((_DWORD *)v4 + 28) = -9079435;
      *((_DWORD *)v4 + 29) = -9079435;
      *((_DWORD *)v4 + 30) = -9079435;
      *((_DWORD *)v4 + 31) = -9079435;
      *((_DWORD *)v4 + 32) = -9079435;
      *((_DWORD *)v4 + 33) = -9079435;
      *((_DWORD *)v4 + 34) = -9079435;
      *((_DWORD *)v4 + 35) = -9079435;
      *((_DWORD *)v4 + 36) = -9079435;
      *((_DWORD *)v4 + 37) = -9079435;
      *((_DWORD *)v4 + 38) = -9079435;
      *((_DWORD *)v4 + 39) = -9079435;
      *((_DWORD *)v4 + 40) = -9079435;
      *((_DWORD *)v4 + 41) = -9079435;
      *((_DWORD *)v4 + 42) = -9079435;
      *((_DWORD *)v4 + 43) = -9079435;
      *((_DWORD *)v4 + 44) = -9079435;
      *((_DWORD *)v4 + 45) = -9079435;
      *((_DWORD *)v4 + 46) = -9079435;
      *((_DWORD *)v4 + 47) = -9079435;
      *((_DWORD *)v4 + 48) = -9079435;
      *((_DWORD *)v4 + 49) = -9079435;
      *((_DWORD *)v4 + 50) = -9079435;
      *((_DWORD *)v4 + 51) = -9079435;
      *((_DWORD *)v4 + 52) = -9079435;
      *((_DWORD *)v4 + 53) = -9079435;
      *((_DWORD *)v4 + 54) = -9079435;
      *((_DWORD *)v4 + 55) = -9079435;
      *((_DWORD *)v4 + 56) = -9079435;
      *((_DWORD *)v4 + 57) = -9079435;
      *((_DWORD *)v4 + 58) = -9079435;
      *((_DWORD *)v4 + 59) = -9079435;
      *((_DWORD *)v4 + 60) = -9079435;
      *((_DWORD *)v4 + 61) = -9079435;
      v4 += 256;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v6 = 0;
    v7 = &v50;
    do
    {
      v8 = 2;
      v9 = (unsigned int)v6 >> 2;
      v10 = 2i64;
      do
      {
        v11 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((unsigned int)(v8 - 2) >> 2)) & 1) == 0 )
          v11 = -1;
        *((_DWORD *)v7 - 1) = v11;
        v12 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 - 1) / 4)) & 1) == 0 )
          v12 = -1;
        *(_DWORD *)v7 = v12;
        v13 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)(v8 / 4)) & 1) == 0 )
          v13 = -1;
        *((_DWORD *)v7 + 1) = v13;
        v14 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 1) / 4)) & 1) == 0 )
          v14 = -1;
        *((_DWORD *)v7 + 2) = v14;
        v15 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 2) / 4)) & 1) == 0 )
          v15 = -1;
        *((_DWORD *)v7 + 3) = v15;
        v16 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 3) / 4)) & 1) == 0 )
          v16 = -1;
        *((_DWORD *)v7 + 4) = v16;
        v17 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 4) / 4)) & 1) == 0 )
          v17 = -1;
        *((_DWORD *)v7 + 5) = v17;
        v18 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 5) / 4)) & 1) == 0 )
          v18 = -1;
        *((_DWORD *)v7 + 6) = v18;
        v19 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 6) / 4)) & 1) == 0 )
          v19 = -1;
        *((_DWORD *)v7 + 7) = v19;
        v20 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 7) / 4)) & 1) == 0 )
          v20 = -1;
        *((_DWORD *)v7 + 8) = v20;
        v21 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 8) / 4)) & 1) == 0 )
          v21 = -1;
        *((_DWORD *)v7 + 9) = v21;
        v22 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 9) / 4)) & 1) == 0 )
          v22 = -1;
        *((_DWORD *)v7 + 10) = v22;
        v23 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 10) / 4)) & 1) == 0 )
          v23 = -1;
        *((_DWORD *)v7 + 11) = v23;
        v24 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 11) / 4)) & 1) == 0 )
          v24 = -1;
        *((_DWORD *)v7 + 12) = v24;
        v25 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 12) / 4)) & 1) == 0 )
          v25 = -1;
        *((_DWORD *)v7 + 13) = v25;
        v26 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 13) / 4)) & 1) == 0 )
          v26 = -1;
        *((_DWORD *)v7 + 14) = v26;
        v27 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 14) / 4)) & 1) == 0 )
          v27 = -1;
        *((_DWORD *)v7 + 15) = v27;
        v28 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 15) / 4)) & 1) == 0 )
          v28 = -1;
        *((_DWORD *)v7 + 16) = v28;
        v29 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 16) / 4)) & 1) == 0 )
          v29 = -1;
        *((_DWORD *)v7 + 17) = v29;
        v30 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 17) / 4)) & 1) == 0 )
          v30 = -1;
        *((_DWORD *)v7 + 18) = v30;
        v31 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 18) / 4)) & 1) == 0 )
          v31 = -1;
        *((_DWORD *)v7 + 19) = v31;
        v32 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 19) / 4)) & 1) == 0 )
          v32 = -1;
        *((_DWORD *)v7 + 20) = v32;
        v33 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 20) / 4)) & 1) == 0 )
          v33 = -1;
        *((_DWORD *)v7 + 21) = v33;
        v34 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 21) / 4)) & 1) == 0 )
          v34 = -1;
        *((_DWORD *)v7 + 22) = v34;
        v35 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 22) / 4)) & 1) == 0 )
          v35 = -1;
        *((_DWORD *)v7 + 23) = v35;
        v36 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 23) / 4)) & 1) == 0 )
          v36 = -1;
        *((_DWORD *)v7 + 24) = v36;
        v37 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 24) / 4)) & 1) == 0 )
          v37 = -1;
        *((_DWORD *)v7 + 25) = v37;
        v38 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 25) / 4)) & 1) == 0 )
          v38 = -1;
        *((_DWORD *)v7 + 26) = v38;
        v39 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 26) / 4)) & 1) == 0 )
          v39 = -1;
        *((_DWORD *)v7 + 27) = v39;
        v40 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 27) / 4)) & 1) == 0 )
          v40 = -1;
        *((_DWORD *)v7 + 28) = v40;
        v41 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 28) / 4)) & 1) == 0 )
          v41 = -1;
        *((_DWORD *)v7 + 29) = v41;
        v42 = -16776961;
        if ( (((_BYTE)v9 + (unsigned __int8)((v8 + 29) / 4)) & 1) == 0 )
          v42 = -1;
        v8 += 32;
        *((_DWORD *)v7 + 30) = v42;
        v7 += 128;
        --v10;
      }
      while ( v10 );
      ++v6;
    }
    while ( v6 < 64 );
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v46.m256i_u64[1] = _XMM0;
  v45.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v45.m256i_i64[1] + 4) = 1i64;
  v46.m256i_i64[0] = 0i64;
  v46.m256i_i32[6] = -1;
  v45.m256i_i64[0] = 0x4000000040i64;
  v45.m256i_i32[5] = 1027;
  v45.m256i_i32[6] = 6;
  *(__m256i *)&params.params.width = v45;
  *(__m256i *)&params.params.customAllocFunc = v46;
  params.name = "$default_2d_texture";
  v44 = PMem_Alloc(0x4000ui64, 0x100ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "$default_2d_texture");
  memcpy_0(v44, Src, 0x4000ui64);
  params.pixels = (const unsigned __int8 *)v44;
  R_Texture_CreateInternal_0(&params, &data, texture);
}

/*
==============
R_Texture_CreateDefault
==============
*/
unsigned int R_Texture_CreateDefault()
{
  unsigned int result; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 774, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  result = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, 1);
  s_textureGlob.pool.entries[result].resident.texture = s_textureGlob.default2DTexture;
  return result;
}

/*
==============
R_Texture_CreateFallback
==============
*/
void R_Texture_CreateFallback(GfxImage *image, GfxTexture *fallbackTexture)
{
  int levelCount; 
  unsigned int v7; 
  GfxImageFallback *fallback; 
  __m256i v11; 
  __m256i v12; 
  GfxTexture_CreateParams params; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 918, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !image->fallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 919, ASSERT_TYPE_ASSERT, "(image->fallback)", (const char *)&queryFormat, "image->fallback") )
    __debugbreak();
  if ( !image->fallback->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 920, ASSERT_TYPE_ASSERT, "(image->fallback->pixels)", (const char *)&queryFormat, "image->fallback->pixels") )
    __debugbreak();
  if ( !image->fallback->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 921, ASSERT_TYPE_ASSERT, "(image->fallback->size > 0)", (const char *)&queryFormat, "image->fallback->size > 0") )
    __debugbreak();
  if ( !image->fallback->width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 922, ASSERT_TYPE_ASSERT, "(image->fallback->width > 0)", (const char *)&queryFormat, "image->fallback->width > 0") )
    __debugbreak();
  if ( !image->fallback->height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 923, ASSERT_TYPE_ASSERT, "(image->fallback->height > 0)", (const char *)&queryFormat, "image->fallback->height > 0") )
    __debugbreak();
  levelCount = image->levelCount;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v12.m256i_i64[0] = 0i64;
  *(_OWORD *)&v12.m256i_u64[1] = _XMM0;
  v11.m256i_i32[0] = image->width;
  v11.m256i_i32[1] = image->height;
  v11.m256i_i32[2] = image->depth;
  v11.m256i_i32[3] = image->numElements;
  v12.m256i_i32[6] = -1;
  v7 = Image_CountMipmaps(v11.m256i_u32[0], v11.m256i_u32[1], v11.m256i_u32[2]);
  fallback = image->fallback;
  v11.m256i_i32[5] = image->flags;
  if ( v7 == levelCount )
    levelCount = 0;
  v11.m256i_i32[6] = image->format;
  *(__m256i *)&params.params.customAllocFunc = v12;
  v11.m256i_i32[4] = levelCount;
  _YMM1 = v11;
  *(__m256i *)&params.params.width = v11;
  params.params.maxLevelCount = 1;
  __asm { vextractf128 xmm1, ymm1, 1 }
  params.params.flags = DWORD1(_XMM1) & 0xFFFFFFBD | 2;
  params.params.width = fallback->width;
  params.params.height = fallback->height;
  params.name = image->name;
  params.pixels = fallback->pixels;
  if ( LOBYTE(params.pixels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 935, ASSERT_TYPE_ASSERT, "(IsAligned( params.pixels, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( params.pixels, R_IMAGE_ALIGNMENT )") )
    __debugbreak();
  R_Texture_CreateInternal_0(&params, NULL, fallbackTexture);
}

/*
==============
R_Texture_CreateInternal
==============
*/
__int64 R_Texture_CreateInternal(const GfxTexture_CreateParams *params, const Image_SetupData *data)
{
  bool v4; 
  unsigned int FreeIndex; 

  v4 = (params->params.flags & 0x40) == 0;
  FreeIndex = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, v4);
  R_Texture_CreateInternal_0(params, data, &s_textureGlob.pool.entries[FreeIndex].resident.texture);
  if ( v4 )
  {
    return FreeIndex | 0x40000000;
  }
  else
  {
    *(__m256i *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[1].basemap = *(__m256i *)&s_textureGlob.pool.entries[FreeIndex].resident.texture.basemap;
    *(_OWORD *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[1].shaderRWView.rwCounterResource = *(_OWORD *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[0].shaderRWView.rwCounterResource;
    return FreeIndex | 0xC0000000;
  }
}

/*
==============
R_Texture_CreateNullRT
==============
*/
int R_Texture_CreateNullRT()
{
  unsigned int FreeIndex; 
  __int64 v1; 
  int result; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 759, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  FreeIndex = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, 1);
  v1 = FreeIndex;
  result = FreeIndex | 0x40000000;
  s_textureGlob.pool.entries[v1].resident.texture = s_textureGlob.nullTexture;
  return result;
}

/*
==============
R_Texture_CreateResident
==============
*/
void R_Texture_CreateResident(GfxImage *image)
{
  unsigned __int64 data; 
  GfxTextureId v4; 
  int levelCount; 
  bool v7; 
  unsigned int FreeIndex; 
  int v9; 
  __m256i v10; 
  __m256i v11; 
  GfxTexture_CreateParams params; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 997, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 998, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->textureId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 999, ASSERT_TYPE_ASSERT, "(image->textureId == GfxTextureId::NULLID)", (const char *)&queryFormat, "image->textureId == GfxTextureId::NULLID") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1000, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  data = image->pixels.streamedDataHandle.data;
  if ( data )
  {
    levelCount = image->levelCount;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v11.m256i_i64[0] = 0i64;
    *(_OWORD *)&v11.m256i_u64[1] = _XMM0;
    v11.m256i_i32[6] = -1;
    v10.m256i_i32[0] = image->width;
    v10.m256i_i32[1] = image->height;
    v10.m256i_i32[2] = image->depth;
    v10.m256i_i32[3] = image->numElements;
    params.pixels = image->pixels.residentData;
    if ( Image_CountMipmaps(v10.m256i_u32[0], v10.m256i_u32[1], v10.m256i_u32[2]) == levelCount )
      levelCount = 0;
    v10.m256i_i32[5] = image->flags;
    v10.m256i_i32[6] = image->format;
    v10.m256i_i32[4] = levelCount;
    params.name = image->name;
    *(__m256i *)&params.params.width = v10;
    *(__m256i *)&params.params.customAllocFunc = v11;
    if ( (_BYTE)data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 745, ASSERT_TYPE_ASSERT, "(IsAligned( params.pixels, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( params.pixels, R_IMAGE_ALIGNMENT )") )
      __debugbreak();
    v7 = (params.params.flags & 0x40) == 0;
    FreeIndex = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, v7);
    R_Texture_CreateInternal_0(&params, NULL, &s_textureGlob.pool.entries[FreeIndex].resident.texture);
    if ( v7 )
    {
      v9 = 0x40000000;
    }
    else
    {
      *(__m256i *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[1].basemap = *(__m256i *)&s_textureGlob.pool.entries[FreeIndex].resident.texture.basemap;
      *(_OWORD *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[1].shaderRWView.rwCounterResource = *(_OWORD *)&s_textureGlob.pool.entries[FreeIndex].streamed.texture[0].shaderRWView.rwCounterResource;
      v9 = -1073741824;
    }
    image->textureId = v9 | FreeIndex;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1007, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
      __debugbreak();
    if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 774, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
      __debugbreak();
    v4 = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, 1);
    s_textureGlob.pool.entries[v4].resident.texture = s_textureGlob.default2DTexture;
    image->textureId = v4;
  }
}

/*
==============
R_Texture_CreateStreamedDefault
==============
*/
void R_Texture_CreateStreamedDefault(GfxImage *image)
{
  __int64 FreeIndex; 
  GfxTexturePoolEntry *v3; 
  GfxTexture *p_default2DTexture; 
  __int64 v5; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 950, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 951, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->textureId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 952, ASSERT_TYPE_ASSERT, "(image->textureId == GfxTextureId::NULLID)", (const char *)&queryFormat, "image->textureId == GfxTextureId::NULLID") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 953, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( image->pixels.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 954, ASSERT_TYPE_ASSERT, "(image->pixels.streamedDataHandle.data == 0)", (const char *)&queryFormat, "image->pixels.streamedDataHandle.data == 0") )
    __debugbreak();
  FreeIndex = GfxTexturePool<89088>::GetFreeIndex(&s_textureGlob.pool, 0);
  v3 = &s_textureGlob.pool.entries[FreeIndex];
  if ( image->fallback )
    R_Texture_CreateFallback(image, &v3->streamed.fallbackTexture);
  else
    v3->streamed.fallbackTexture = s_textureGlob.default2DTexture;
  p_default2DTexture = &s_textureGlob.default2DTexture;
  v5 = 2i64;
  if ( s_textureGlob.useImageFallback )
    p_default2DTexture = &v3->streamed.fallbackTexture;
  do
  {
    v3 = (GfxTexturePoolEntry *)((char *)v3 + 48);
    *(__m256i *)&v3[-1].streamed.fallbackTexture.basemap = *(__m256i *)&p_default2DTexture->basemap;
    *(_OWORD *)&v3[-1].streamed.fallbackTexture.shaderRWView.rwCounterResource = *(_OWORD *)&p_default2DTexture->shaderRWView.rwCounterResource;
    --v5;
  }
  while ( v5 );
  image->textureId = FreeIndex | 0xC0000000;
}

/*
==============
R_Texture_CreateWithSourceData
==============
*/

__int64 __fastcall R_Texture_CreateWithSourceData(const GfxTexture_CreateParams *params, const Image_SetupData *data)
{
  return R_Texture_CreateInternal(params, data);
}

/*
==============
R_Texture_CreateWithTiledPixelsData
==============
*/
__int64 R_Texture_CreateWithTiledPixelsData(const GfxTexture_CreateParams *params)
{
  if ( !params->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 744, ASSERT_TYPE_ASSERT, "(params.pixels)", (const char *)&queryFormat, "params.pixels") )
    __debugbreak();
  if ( LOBYTE(params->pixels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 745, ASSERT_TYPE_ASSERT, "(IsAligned( params.pixels, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( params.pixels, R_IMAGE_ALIGNMENT )") )
    __debugbreak();
  return R_Texture_CreateInternal(params, NULL);
}

/*
==============
R_Texture_Destroy
==============
*/
void R_Texture_Destroy(GfxTextureId id)
{
  R_Texture_DestroyEntryInternal(id);
  GfxTexturePool<89088>::ReturnFreeIndex(&s_textureGlob.pool, id & 0x3FFFFFFF, id >= NULLID);
}

/*
==============
R_Texture_DestroyEntryInternal
==============
*/
void R_Texture_DestroyEntryInternal(GfxTextureId id)
{
  __int64 v2; 
  bool v3; 
  GfxTexturePoolEntry *p_fallbackTexture; 
  bool v5; 
  unsigned int v6; 
  GfxTexturePoolEntry *v7; 
  __int64 v8; 
  GfxTexture *p_texture; 
  unsigned int v10; 

  if ( id == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1085, ASSERT_TYPE_ASSERT, "(id != GfxTextureId::NULLID)", (const char *)&queryFormat, "id != GfxTextureId::NULLID") )
    __debugbreak();
  if ( !R_Texture_IsValidTextureId(id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1086, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( id ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( id )") )
    __debugbreak();
  v2 = id & 0x3FFFFFFF;
  v3 = (id & 0x40000000) != 0;
  if ( id < NULLID )
  {
    if ( (id & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1100, ASSERT_TYPE_ASSERT, "( isOwner )", "streamed textures always own their resources") )
      __debugbreak();
    v6 = 2;
    v7 = &s_textureGlob.pool.entries[v2];
    v8 = 2i64;
    p_texture = &v7->resident.texture;
    p_fallbackTexture = (GfxTexturePoolEntry *)&v7->streamed.fallbackTexture;
    do
    {
      v10 = v6 - 1;
      if ( v6 - 1 >= v6 )
      {
LABEL_17:
        R_Texture_DestroyInternal(p_texture, 1, 0, 1);
      }
      else
      {
        while ( memcmp_0(p_texture, &v7->resident.texture + (v10 & 1), 0x30ui64) && memcmp_0(p_texture, &v7->streamed.fallbackTexture, 0x30ui64) )
        {
          if ( ++v10 >= v6 )
            goto LABEL_17;
        }
        *p_texture = s_textureGlob.nullTexture;
      }
      ++p_texture;
      ++v6;
      --v8;
    }
    while ( v8 );
    v5 = 1;
    v3 = 1;
  }
  else
  {
    p_fallbackTexture = &s_textureGlob.pool.entries[v2];
    v5 = 0;
  }
  R_Texture_DestroyInternal(&p_fallbackTexture->resident.texture, v5, 0, v3);
}

/*
==============
R_Texture_DestroyInternal
==============
*/
void R_Texture_DestroyInternal(GfxTexture *texture, bool isStreamed, bool isAlias, bool isOwner)
{
  char v7; 
  ID3D12Resource *basemap; 
  unsigned int v9; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1027, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1028, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( !isStreamed )
    goto LABEL_16;
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1604, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1605, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( !memcmp_0(texture, &s_textureGlob.default2DTexture, 0x30ui64) )
    v7 = 1;
  else
LABEL_16:
    v7 = 0;
  if ( isOwner && !v7 )
  {
    if ( (texture->shaderView.view & 0xFFFFFFFD) != 0 )
      R_ReleaseShaderTextureView(&texture->shaderView);
    if ( (texture->shaderRWView.rwView & 0xFFFFFFFB) != 0 )
      R_ReleaseShaderTextureRWView(&texture->shaderRWView);
    basemap = texture->basemap;
    if ( texture->basemap )
    {
      texture->basemap = NULL;
      v9 = basemap->m_pFunction->Release(basemap);
      if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1071, "texture->basemap", v9) )
        __debugbreak();
    }
  }
  *texture = s_textureGlob.nullTexture;
}

/*
==============
R_Texture_DestroyResidentInPlace
==============
*/
void R_Texture_DestroyResidentInPlace(GfxTexture *texture)
{
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 607, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 202, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( texture >= &s_textureGlob.pool.entries[0].resident.texture && texture < (GfxTexture *)&s_textureGlob.pool.entriesUsedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1387, ASSERT_TYPE_ASSERT, "(!R_Texture_IsInPool( texture ))", (const char *)&queryFormat, "!R_Texture_IsInPool( texture )") )
    __debugbreak();
  R_Texture_DestroyInternal(texture, 0, 0, 1);
}

/*
==============
R_Texture_Get
==============
*/

const GfxTexture *__fastcall R_Texture_Get(const GfxBackEndData *data, GfxTextureId id)
{
  return R_Texture_GetFromId(data, id);
}

/*
==============
R_Texture_GetDefault
==============
*/
GfxTexture *R_Texture_GetDefault()
{
  return &s_textureGlob.default2DTexture;
}

/*
==============
R_Texture_GetDims
==============
*/
void R_Texture_GetDims(const GfxTexture *texture, unsigned int *outWidth, unsigned int *outHeight, unsigned int *outLevelCount, unsigned int *outElementCount)
{
  unsigned __int64 v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  __int128 val_16; 
  __m256i v14; 

  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1522, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( !outWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1523, ASSERT_TYPE_ASSERT, "(outWidth)", (const char *)&queryFormat, "outWidth") )
    __debugbreak();
  if ( !outHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1524, ASSERT_TYPE_ASSERT, "(outHeight)", (const char *)&queryFormat, "outHeight") )
    __debugbreak();
  if ( !outLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1525, ASSERT_TYPE_ASSERT, "(outLevelCount)", (const char *)&queryFormat, "outLevelCount") )
    __debugbreak();
  if ( !outElementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1526, ASSERT_TYPE_ASSERT, "(outElementCount)", (const char *)&queryFormat, "outElementCount") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))texture->basemap->m_pFunction[3].AddRef)(texture->basemap, &v14);
  val_16 = *(_OWORD *)&v14.m256i_u64[2];
  if ( (texture->shaderRWView.rwView & 0xFFFFFFFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1541, ASSERT_TYPE_ASSERT, "(texture->shaderRWView.IsNull())", (const char *)&queryFormat, "texture->shaderRWView.IsNull()") )
    __debugbreak();
  v9 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + texture->shaderView.view);
  if ( (v9 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 809, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  v10 = (unsigned __int8)HIBYTE(*(_WORD *)(v9 + 12)) >> 4;
  if ( HIWORD(val_16) < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1545, ASSERT_TYPE_ASSERT, "( desc.MipLevels ) >= ( mostDetailedMip )", "%s >= %s\n\t%u, %u", "desc.MipLevels", "mostDetailedMip", HIWORD(val_16), v10) )
    __debugbreak();
  v11 = truncate_cast<unsigned int,unsigned __int64>(val_16) >> v10;
  if ( v11 < 1 )
    v11 = 1;
  *outWidth = v11;
  v12 = DWORD2(val_16) >> v10;
  if ( (int)(DWORD2(val_16) >> v10) < 1 )
    v12 = 1;
  *outHeight = v12;
  *outLevelCount = HIWORD(val_16) - v10;
  *outElementCount = WORD6(val_16);
}

/*
==============
R_Texture_GetFromId
==============
*/
GfxTexture *R_Texture_GetFromId(const GfxBackEndData *data, GfxTextureId id)
{
  __int64 v5; 
  __int64 v6; 

  if ( R_Texture_IsValidTextureId(id) )
  {
    v5 = id & 0x3FFFFFFF;
    if ( id < NULLID )
    {
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 568, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      v6 = 3 * (3 * v5 + R_GetBackEndDataIndex(data));
    }
    else
    {
      v6 = 9 * v5;
    }
    return (GfxTexture *)((char *)s_textureGlob.pool.entries + 16 * v6);
  }
  else
  {
    if ( nextPrintTime < Sys_Milliseconds() )
    {
      Com_PrintError(8, "R_Texture_GetFromId tried to get a texture with an invalid ID.  Using null texture instead.\n");
      nextPrintTime = Sys_Milliseconds() + 3000;
    }
    return &s_textureGlob.nullTexture;
  }
}

/*
==============
R_Texture_GetFromIdMutable
==============
*/
GfxTexture *R_Texture_GetFromIdMutable(const GfxBackEndData *data, GfxTextureId id)
{
  GfxTextureId v4; 
  unsigned int v5; 
  __int64 v6; 
  bool v7; 
  bool v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  __int64 v11; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 524, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  v4 = id;
  v5 = (unsigned int)id >> 31;
  v6 = id & 0x3FFFFFFF;
  v7 = (v5 & 1) == 0;
  v8 = (v4 & 0x40000000) != 0;
  if ( (unsigned int)v6 >= 0x15C00 || (v9 = 0x80000000 >> (v6 & 0x1F), v10 = (unsigned __int64)(unsigned int)v6 >> 5, v7 != ((v9 & s_textureGlob.pool.streamedList.array[v10]) == 0)) || !v7 && !v8 || (v9 & s_textureGlob.pool.freeList.array[v10]) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 581, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( id ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( id )") )
      __debugbreak();
  }
  if ( v7 )
  {
    v11 = 9 * v6;
  }
  else
  {
    if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 593, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    v11 = 3 * (3 * v6 + R_GetBackEndDataIndex(data));
  }
  return (GfxTexture *)((char *)s_textureGlob.pool.entries + 16 * v11);
}

/*
==============
R_Texture_GetLevelCount
==============
*/
unsigned int R_Texture_GetLevelCount(const GfxBackEndData *data, GfxTextureId id)
{
  GfxTexture *v2; 

  v2 = R_Texture_GetFromId(data, id);
  return R_Texture_GetLevelCount(v2);
}

/*
==============
R_Texture_GetLevelCount
==============
*/
__int64 R_Texture_GetLevelCount(const GfxTexture *texture)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  unsigned __int16 v5; 
  __m256i v6; 

  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1496, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))texture->basemap->m_pFunction[3].AddRef)(texture->basemap, &v6);
  v5 = v6.m256i_u16[15];
  if ( (texture->shaderRWView.rwView & 0xFFFFFFFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1505, ASSERT_TYPE_ASSERT, "(texture->shaderRWView.IsNull())", (const char *)&queryFormat, "texture->shaderRWView.IsNull()") )
    __debugbreak();
  v2 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + texture->shaderView.view);
  if ( (v2 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 809, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  v3 = (unsigned __int8)HIBYTE(*(_WORD *)(v2 + 12)) >> 4;
  if ( v5 < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1509, ASSERT_TYPE_ASSERT, "( desc.MipLevels ) >= ( mostDetailedMip )", "%s >= %s\n\t%u, %u", "desc.MipLevels", "mostDetailedMip", v5, v3) )
    __debugbreak();
  return v5 - v3;
}

/*
==============
R_Texture_GetNull
==============
*/
GfxTexture *R_Texture_GetNull()
{
  return &s_textureGlob.nullTexture;
}

/*
==============
R_Texture_GetResident
==============
*/
GfxTexture *R_Texture_GetResident(GfxTextureId id)
{
  if ( id == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1462, ASSERT_TYPE_ASSERT, "(id != GfxTextureId::NULLID)", (const char *)&queryFormat, "id != GfxTextureId::NULLID") )
    __debugbreak();
  if ( id < NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1463, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( id ))", (const char *)&queryFormat, "R_Texture_IsResidentId( id )") )
    __debugbreak();
  return R_Texture_GetFromIdMutable(NULL, id);
}

/*
==============
R_Texture_GetResidentLevelCount
==============
*/
unsigned int R_Texture_GetResidentLevelCount(GfxTextureId id)
{
  GfxTexture *v1; 

  v1 = R_Texture_GetFromId(NULL, id);
  return R_Texture_GetLevelCount(v1);
}

/*
==============
R_Texture_GetResidentMutable
==============
*/
GfxTexture *R_Texture_GetResidentMutable(GfxTextureId id)
{
  if ( id == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1462, ASSERT_TYPE_ASSERT, "(id != GfxTextureId::NULLID)", (const char *)&queryFormat, "id != GfxTextureId::NULLID") )
    __debugbreak();
  if ( id < NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1463, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( id ))", (const char *)&queryFormat, "R_Texture_IsResidentId( id )") )
    __debugbreak();
  return R_Texture_GetFromIdMutable(NULL, id);
}

/*
==============
R_Texture_GetStreamed
==============
*/
GfxTexture *R_Texture_GetStreamed(const GfxBackEndData *data, GfxTextureId id)
{
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1426, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  return R_Texture_GetFromId(data, id);
}

/*
==============
R_Texture_GetStreamedFallback
==============
*/
GfxTexture *R_Texture_GetStreamedFallback(GfxTextureId id)
{
  unsigned int v2; 
  unsigned __int64 v3; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 524, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( (id & 0x3FFFFFFFu) >= 0x15C00 || (v2 = 0x80000000 >> (id & 0x1F), v3 = (unsigned __int64)(id & 0x3FFFFFFF) >> 5, id >= NULLID != ((v2 & s_textureGlob.pool.streamedList.array[v3]) == 0)) || id < NULLID && (id & 0x40000000) == 0 || (v2 & s_textureGlob.pool.freeList.array[v3]) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1435, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( id ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( id )") )
      __debugbreak();
  }
  if ( id >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1436, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( s_textureGlob.useImageFallback )
    return &s_textureGlob.pool.entries[id & 0x3FFFFFFF].streamed.fallbackTexture;
  else
    return &s_textureGlob.default2DTexture;
}

/*
==============
R_Texture_GetStreamedLevelCount
==============
*/
unsigned int R_Texture_GetStreamedLevelCount(const GfxBackEndData *data, GfxTextureId id)
{
  GfxTexture *v2; 

  v2 = R_Texture_GetFromId(data, id);
  return R_Texture_GetLevelCount(v2);
}

/*
==============
R_Texture_GetTextureIdIndex
==============
*/
__int64 R_Texture_GetTextureIdIndex(GfxTextureId id)
{
  return id & 0x3FFFFFFF;
}

/*
==============
R_Texture_HasDefaultAssigned
==============
*/
bool R_Texture_HasDefaultAssigned(const GfxTexture *texture)
{
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1604, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1605, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  return memcmp_0(texture, &s_textureGlob.default2DTexture, 0x30ui64) == 0;
}

/*
==============
R_Texture_HasNullAssigned
==============
*/
bool R_Texture_HasNullAssigned(const GfxTexture *texture)
{
  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1596, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1597, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  return memcmp_0(texture, &s_textureGlob.nullTexture, 0x30ui64) == 0;
}

/*
==============
R_Texture_Init
==============
*/
void R_Texture_Init(void)
{
  __int64 v0; 
  bitarray<89088> *p_freeList; 
  __int64 v2; 
  bitarray<89088> *p_streamedList; 

  if ( s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 459, ASSERT_TYPE_ASSERT, "(!s_textureGlob.isInitialized)", (const char *)&queryFormat, "!s_textureGlob.isInitialized") )
    __debugbreak();
  if ( s_textureGlob.pool.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 118, ASSERT_TYPE_ASSERT, "(!isInitialized)", (const char *)&queryFormat, "!isInitialized") )
    __debugbreak();
  v0 = 174i64;
  p_freeList = &s_textureGlob.pool.freeList;
  v2 = 174i64;
  do
  {
    *(_QWORD *)p_freeList->array = -1i64;
    *(_QWORD *)&p_freeList->array[2] = -1i64;
    *(_QWORD *)&p_freeList->array[4] = -1i64;
    p_freeList = (bitarray<89088> *)((char *)p_freeList + 64);
    *(_QWORD *)&p_freeList[-1].array[2774] = -1i64;
    *(_QWORD *)&p_freeList[-1].array[2776] = -1i64;
    *(_QWORD *)&p_freeList[-1].array[2778] = -1i64;
    *(_QWORD *)&p_freeList[-1].array[2780] = -1i64;
    *(_QWORD *)&p_freeList[-1].array[2782] = -1i64;
    --v2;
  }
  while ( v2 );
  s_textureGlob.pool.freeList.array[0] = 0x7FFFFFFF;
  p_streamedList = &s_textureGlob.pool.streamedList;
  s_textureGlob.pool.entriesUsedCount = 1i64;
  s_textureGlob.pool.searchFreeIndex = 1;
  do
  {
    *(_QWORD *)p_streamedList->array = 0i64;
    *(_QWORD *)&p_streamedList->array[2] = 0i64;
    *(_QWORD *)&p_streamedList->array[4] = 0i64;
    p_streamedList = (bitarray<89088> *)((char *)p_streamedList + 64);
    *(_QWORD *)&p_streamedList[-1].array[2774] = 0i64;
    *(_QWORD *)&p_streamedList[-1].array[2776] = 0i64;
    *(_QWORD *)&p_streamedList[-1].array[2778] = 0i64;
    *(_QWORD *)&p_streamedList[-1].array[2780] = 0i64;
    *(_QWORD *)&p_streamedList[-1].array[2782] = 0i64;
    --v0;
  }
  while ( v0 );
  s_textureGlob.pool.isInitialized = 1;
  s_textureGlob.nullTexture.basemap = NULL;
  s_textureGlob.nullTexture.shaderView.resource = NULL;
  *(_QWORD *)&s_textureGlob.nullTexture.shaderView.view = 0i64;
  s_textureGlob.nullTexture.shaderRWView.rwResource = NULL;
  s_textureGlob.nullTexture.shaderRWView.rwCounterResource = NULL;
  *(_QWORD *)&s_textureGlob.nullTexture.shaderRWView.rwView = 0i64;
  R_AssignNullShaderTextureView(&s_textureGlob.nullTexture.shaderView);
  R_AssignNullShaderTextureRWView(&s_textureGlob.nullTexture.shaderRWView);
  s_textureGlob.isInitialized = 1;
  s_textureGlob.pool.entries[0].resident.texture = s_textureGlob.nullTexture;
  R_Texture_CreateDefault2D(&s_textureGlob.default2DTexture);
}

/*
==============
R_Texture_IsDestroyed
==============
*/
bool R_Texture_IsDestroyed(const GfxTexture *texture)
{
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1394, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  return R_Texture_HasNullAssigned(texture);
}

/*
==============
R_Texture_IsDestroyed
==============
*/
bool R_Texture_IsDestroyed(GfxTextureId id)
{
  GfxTexture *v2; 
  const GfxBackEndData *BackEndData; 
  GfxTexture *v5; 
  const GfxBackEndData *v6; 
  GfxTexture *v7; 

  if ( id == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1348, ASSERT_TYPE_ASSERT, "(id != GfxTextureId::NULLID)", (const char *)&queryFormat, "id != GfxTextureId::NULLID") )
    __debugbreak();
  if ( id < NULLID )
  {
    BackEndData = R_GetBackEndData(0);
    v5 = R_Texture_GetFromId(BackEndData, id);
    if ( R_Texture_HasNullAssigned(v5) )
    {
      v6 = R_GetBackEndData(1u);
      v7 = R_Texture_GetFromId(v6, id);
      if ( !R_Texture_HasNullAssigned(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1367, ASSERT_TYPE_ASSERT, "(R_Texture_HasNullAssigned( otherTexture ))", (const char *)&queryFormat, "R_Texture_HasNullAssigned( otherTexture )") )
        __debugbreak();
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v2 = R_Texture_GetFromId(NULL, id);
    return R_Texture_HasNullAssigned(v2);
  }
}

/*
==============
R_Texture_IsOwnerId
==============
*/
_BOOL8 R_Texture_IsOwnerId(GfxTextureId id)
{
  return (id & 0x40000000) != 0;
}

/*
==============
R_Texture_IsResidentId
==============
*/
_BOOL8 R_Texture_IsResidentId(GfxTextureId id)
{
  return id >= NULLID;
}

/*
==============
R_Texture_IsStreamed
==============
*/
bool R_Texture_IsStreamed(const GfxTexture *texture)
{
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 213, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  return texture >= &s_textureGlob.pool.entries[0].resident.texture && texture < (const GfxTexture *)&s_textureGlob.pool.entriesUsedCount && bitarray_base<bitarray<89088>>::testBit(&s_textureGlob.pool.streamedList, ((char *)texture - (char *)s_textureGlob.pool.entries) / 0x90ui64);
}

/*
==============
R_Texture_IsStreamedId
==============
*/
_BOOL8 R_Texture_IsStreamedId(GfxTextureId id)
{
  return id < NULLID;
}

/*
==============
R_Texture_IsValidTextureId
==============
*/
bool R_Texture_IsValidTextureId(GfxTextureId id)
{
  GfxTextureId v2; 
  unsigned int v3; 
  unsigned __int32 v4; 
  bool v5; 
  bool v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  bool result; 

  if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 524, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
    __debugbreak();
  v2 = id;
  v3 = (unsigned int)id >> 31;
  v4 = id & 0x3FFFFFFF;
  v5 = (v3 & 1) == 0;
  v6 = (v2 & 0x40000000) != 0;
  result = v4 < 0x15C00 && (v7 = 0x80000000 >> (v4 & 0x1F), v8 = (unsigned __int64)v4 >> 5, v5 == ((v7 & s_textureGlob.pool.streamedList.array[v8]) == 0)) && (v5 || v6) && (v7 & s_textureGlob.pool.freeList.array[v8]) == 0;
  return result;
}

/*
==============
R_Texture_Move
==============
*/
void R_Texture_Move(GfxTextureId *fromId, GfxTextureId *toId)
{
  GfxTextureId v4; 
  GfxTextureId v5; 
  char v6; 
  char v7; 
  __int64 v8; 
  __int64 v9; 
  GfxTexturePoolEntry *v10; 
  GfxTexturePoolEntry *v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  __int128 v16; 
  FastCriticalSectionScopeWrite v17; 

  if ( !R_Texture_IsValidTextureId(*fromId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1204, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( fromId ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( fromId )") )
    __debugbreak();
  if ( !R_Texture_IsValidTextureId(*toId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1205, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( toId ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( toId )") )
    __debugbreak();
  v4 = *fromId;
  v5 = *toId;
  if ( *fromId != *toId )
  {
    v6 = v4 >= NULLID;
    v7 = v5 >= NULLID;
    v8 = v4 & 0x3FFFFFFF;
    v9 = v5 & 0x3FFFFFFF;
    R_Texture_DestroyEntryInternal(v5);
    v10 = &s_textureGlob.pool.entries[v9];
    v11 = &s_textureGlob.pool.entries[v8];
    v12 = *(__m256i *)&v11->resident.texture.basemap;
    v13 = *(__m256i *)&v11->streamed.texture[0].shaderRWView.rwCounterResource;
    v14 = *(__m256i *)&v11->streamed.texture[1].shaderView.view;
    v15 = *(__m256i *)&v11->streamed.fallbackTexture.basemap;
    v16 = *(_OWORD *)&v11->streamed.fallbackTexture.shaderRWView.rwCounterResource;
    *(__m256i *)&v11->resident.texture.basemap = *(__m256i *)&v10->resident.texture.basemap;
    *(__m256i *)&v11->streamed.texture[0].shaderRWView.rwCounterResource = *(__m256i *)&v10->streamed.texture[0].shaderRWView.rwCounterResource;
    *(__m256i *)&v11->streamed.texture[1].shaderView.view = *(__m256i *)&v10->streamed.texture[1].shaderView.view;
    *(__m256i *)&v11->streamed.fallbackTexture.basemap = *(__m256i *)&v10->streamed.fallbackTexture.basemap;
    *(_OWORD *)&v11->streamed.fallbackTexture.shaderRWView.rwCounterResource = *(_OWORD *)&v10->streamed.fallbackTexture.shaderRWView.rwCounterResource;
    *(__m256i *)&v10->resident.texture.basemap = v12;
    *(__m256i *)&v10->streamed.texture[0].shaderRWView.rwCounterResource = v13;
    *(__m256i *)&v10->streamed.texture[1].shaderView.view = v14;
    *(__m256i *)&v10->streamed.fallbackTexture.basemap = v15;
    *(_OWORD *)&v10->streamed.fallbackTexture.shaderRWView.rwCounterResource = v16;
    if ( v6 != v7 )
    {
      v17.cs = (FastCriticalSection *)&s_textureGlob;
      Sys_LockWrite(&s_textureGlob.pool.lock);
      if ( v6 )
      {
        if ( (unsigned int)v9 >= 0x15C00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, 89088) )
          __debugbreak();
        s_textureGlob.pool.streamedList.array[(unsigned __int64)(unsigned int)v9 >> 5] &= ~(0x80000000 >> (v9 & 0x1F));
      }
      else
      {
        if ( (unsigned int)v9 >= 0x15C00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, 89088) )
          __debugbreak();
        s_textureGlob.pool.streamedList.array[(unsigned __int64)(unsigned int)v9 >> 5] |= 0x80000000 >> (v9 & 0x1F);
      }
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v17);
    }
    *toId = v9 | *fromId & 0xC0000000;
    *fromId = NULLID;
    GfxTexturePool<89088>::ReturnFreeIndex(&s_textureGlob.pool, v8, v6);
  }
}

/*
==============
R_Texture_ResetFallback
==============
*/
void R_Texture_ResetFallback(GfxImage *image, GfxImageFallback *fallback)
{
  GfxTextureId textureId; 
  GfxTexturePoolEntry *v5; 
  int v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1284, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !fallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1285, ASSERT_TYPE_ASSERT, "(fallback)", (const char *)&queryFormat, "fallback") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1286, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( !image->fallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1287, ASSERT_TYPE_ASSERT, "(image->fallback)", (const char *)&queryFormat, "image->fallback") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1288, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  textureId = image->textureId;
  if ( textureId >= NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1291, ASSERT_TYPE_ASSERT, "(R_Texture_IsStreamedId( id ))", (const char *)&queryFormat, "R_Texture_IsStreamedId( id )") )
    __debugbreak();
  if ( (textureId & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1292, ASSERT_TYPE_ASSERT, "(R_Texture_IsOwnerId( id ))", (const char *)&queryFormat, "R_Texture_IsOwnerId( id )") )
    __debugbreak();
  v5 = &s_textureGlob.pool.entries[textureId & 0x3FFFFFFF];
  if ( image->fallback )
  {
    v6 = memcmp_0(&s_textureGlob.pool.entries[textureId & 0x3FFFFFFF], &v5->streamed.fallbackTexture, 0x30ui64);
    v7 = memcmp_0(&v5->streamed.texture[1], &v5->streamed.fallbackTexture, 0x30ui64) == 0;
    R_Texture_DestroyInternal(&v5->streamed.fallbackTexture, 1, 0, 1);
    v8 = v6 == 0;
    v9 = v7;
    v10 = v8;
  }
  else
  {
    v10 = 0;
    v7 = 0;
    v9 = 0;
  }
  image->fallback = fallback;
  R_Texture_CreateFallback(image, &v5->streamed.fallbackTexture);
  if ( v10 )
  {
    *(__m256i *)&v5->resident.texture.basemap = *(__m256i *)&v5->streamed.fallbackTexture.basemap;
    *(_OWORD *)&v5->streamed.texture[0].shaderRWView.rwCounterResource = *(_OWORD *)&v5->streamed.fallbackTexture.shaderRWView.rwCounterResource;
    v7 = v9;
  }
  if ( v7 )
  {
    *(__m256i *)&v5->streamed.texture[1].basemap = *(__m256i *)&v5->streamed.fallbackTexture.basemap;
    *(_OWORD *)&v5->streamed.texture[1].shaderRWView.rwCounterResource = *(_OWORD *)&v5->streamed.fallbackTexture.shaderRWView.rwCounterResource;
  }
}

/*
==============
R_Texture_Shutdown
==============
*/
void R_Texture_Shutdown(void)
{
  if ( !s_textureGlob.isInitialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 489, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
      __debugbreak();
    if ( !s_textureGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 607, ASSERT_TYPE_ASSERT, "(s_textureGlob.isInitialized)", (const char *)&queryFormat, "s_textureGlob.isInitialized") )
      __debugbreak();
  }
  R_Texture_DestroyInternal(&s_textureGlob.default2DTexture, 0, 0, 1);
  if ( !s_textureGlob.pool.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 132, ASSERT_TYPE_ASSERT, "(isInitialized)", (const char *)&queryFormat, "isInitialized") )
    __debugbreak();
  if ( s_textureGlob.pool.entriesUsedCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 133, ASSERT_TYPE_ASSERT, "( entriesUsedCount == 1 )", "GfxTexture leak! Not all textures were destroyed before shutdown. %zu textures remaining, but there should be only 1 (the null texture) left.", s_textureGlob.pool.entriesUsedCount) )
    __debugbreak();
  s_textureGlob.pool.isInitialized = 0;
  s_textureGlob.isInitialized = 0;
}

/*
==============
R_Texture_Swap
==============
*/
void R_Texture_Swap(GfxTextureId *fromId, GfxTextureId *toId)
{
  char v4; 
  char v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  GfxTexturePoolEntry *v8; 
  GfxTexturePoolEntry *v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  __int128 v14; 
  unsigned __int32 v15; 
  __int64 v16; 
  __int64 v17; 
  FastCriticalSectionScopeWrite v18; 

  if ( !R_Texture_IsValidTextureId(*fromId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1249, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( fromId ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( fromId )") )
    __debugbreak();
  if ( !R_Texture_IsValidTextureId(*toId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1250, ASSERT_TYPE_ASSERT, "(R_Texture_IsValidTextureId( toId ))", (const char *)&queryFormat, "R_Texture_IsValidTextureId( toId )") )
    __debugbreak();
  v4 = *(int *)fromId >= 0;
  v5 = *(int *)toId >= 0;
  v6 = *fromId & 0x3FFFFFFF;
  v7 = *toId & 0x3FFFFFFF;
  v8 = &s_textureGlob.pool.entries[v7];
  v9 = &s_textureGlob.pool.entries[v6];
  v10 = *(__m256i *)&v9->resident.texture.basemap;
  v11 = *(__m256i *)&v9->streamed.texture[0].shaderRWView.rwCounterResource;
  v12 = *(__m256i *)&v9->streamed.texture[1].shaderView.view;
  v13 = *(__m256i *)&v9->streamed.fallbackTexture.basemap;
  v14 = *(_OWORD *)&v9->streamed.fallbackTexture.shaderRWView.rwCounterResource;
  *(__m256i *)&v9->resident.texture.basemap = *(__m256i *)&v8->resident.texture.basemap;
  *(__m256i *)&v9->streamed.texture[0].shaderRWView.rwCounterResource = *(__m256i *)&v8->streamed.texture[0].shaderRWView.rwCounterResource;
  *(__m256i *)&v9->streamed.texture[1].shaderView.view = *(__m256i *)&v8->streamed.texture[1].shaderView.view;
  *(__m256i *)&v9->streamed.fallbackTexture.basemap = *(__m256i *)&v8->streamed.fallbackTexture.basemap;
  *(_OWORD *)&v9->streamed.fallbackTexture.shaderRWView.rwCounterResource = *(_OWORD *)&v8->streamed.fallbackTexture.shaderRWView.rwCounterResource;
  *(__m256i *)&v8->resident.texture.basemap = v10;
  *(__m256i *)&v8->streamed.texture[0].shaderRWView.rwCounterResource = v11;
  *(__m256i *)&v8->streamed.texture[1].shaderView.view = v12;
  *(__m256i *)&v8->streamed.fallbackTexture.basemap = v13;
  *(_OWORD *)&v8->streamed.fallbackTexture.shaderRWView.rwCounterResource = v14;
  if ( v4 != v5 )
  {
    v18.cs = (FastCriticalSection *)&s_textureGlob;
    Sys_LockWrite(&s_textureGlob.pool.lock);
    if ( (unsigned int)v6 >= 0x15C00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 296, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, 89088) )
      __debugbreak();
    s_textureGlob.pool.streamedList.array[v6 >> 5] ^= 0x80000000 >> (v6 & 0x1F);
    if ( (unsigned int)v7 >= 0x15C00 )
    {
      LODWORD(v17) = 89088;
      LODWORD(v16) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 296, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
        __debugbreak();
    }
    s_textureGlob.pool.streamedList.array[v7 >> 5] ^= 0x80000000 >> (v7 & 0x1F);
    FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v18);
  }
  v15 = *fromId & 0xC0000000;
  *fromId = v6 | *toId & 0xC0000000;
  *toId = v7 | v15;
}

/*
==============
R_Texture_UnAlias
==============
*/
void R_Texture_UnAlias(GfxTextureId id)
{
  __int64 v2; 

  if ( id == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1335, ASSERT_TYPE_ASSERT, "(id != GfxTextureId::NULLID)", (const char *)&queryFormat, "id != GfxTextureId::NULLID") )
    __debugbreak();
  if ( id < NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1337, ASSERT_TYPE_ASSERT, "(R_Texture_IsResidentId( id ))", (const char *)&queryFormat, "R_Texture_IsResidentId( id )") )
    __debugbreak();
  if ( (id & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1338, ASSERT_TYPE_ASSERT, "(R_Texture_IsOwnerId( id ))", (const char *)&queryFormat, "R_Texture_IsOwnerId( id )") )
    __debugbreak();
  v2 = id & 0x3FFFFFFF;
  R_Texture_DestroyInternal(&s_textureGlob.pool.entries[v2].resident.texture, 0, 1, 1);
  GfxTexturePool<89088>::ReturnFreeIndex(&s_textureGlob.pool, v2, 1);
}

/*
==============
R_Texture_UpdateForDebugShaderStreaming
==============
*/
void R_Texture_UpdateForDebugShaderStreaming(GfxTexture *texture, unsigned int mostDetailedMip, unsigned int basePartMip)
{
  unsigned __int64 v6; 

  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 857, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( mostDetailedMip > basePartMip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 858, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) <= ( basePartMip )", "%s <= %s\n\t%u, %u", "mostDetailedMip", "basePartMip", mostDetailedMip, basePartMip) )
    __debugbreak();
  if ( !r_deviceDebug->current.enabled )
  {
    v6 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + texture->shaderView.view);
    if ( (v6 & 7) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 864, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 829, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
        __debugbreak();
    }
    *(_DWORD *)(v6 + 12) &= 0xFFFF0FFF;
    XB3_SetTextureLeastDetailedMip((D3D12_CPU_DESCRIPTOR_HANDLE)v6, basePartMip);
    XB3_SetTextureMinLODClamp((D3D12_CPU_DESCRIPTOR_HANDLE)v6, mostDetailedMip, 0);
  }
}

/*
==============
R_Texture_UpdateStreamedFallbacks
==============
*/
void R_Texture_UpdateStreamedFallbacks(bool useImageFallback)
{
  unsigned int v2; 
  unsigned __int64 v3; 
  GfxTexture *p_fallbackTexture; 
  GfxTexture *p_default2DTexture; 
  GfxTexture *v6; 
  GfxTexture *v7; 
  __int64 v8; 
  FastCriticalSectionScopeWrite v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1615, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_textureGlob.pool.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 1616, ASSERT_TYPE_ASSERT, "(s_textureGlob.pool.isInitialized)", (const char *)&queryFormat, "s_textureGlob.pool.isInitialized") )
    __debugbreak();
  if ( s_textureGlob.useImageFallback != useImageFallback )
  {
    R_SyncRenderThread();
    Stream_PushSyncDisable();
    v9.cs = (FastCriticalSection *)&s_textureGlob;
    Sys_LockWrite(&s_textureGlob.pool.lock);
    v2 = 0;
    v3 = 0i64;
    p_fallbackTexture = &s_textureGlob.pool.entries[0].streamed.fallbackTexture;
    do
    {
      if ( ((0x80000000 >> (v2 & 0x1F)) & s_textureGlob.pool.streamedList.array[v3 >> 5]) != 0 )
      {
        if ( useImageFallback )
        {
          p_default2DTexture = &s_textureGlob.default2DTexture;
          v6 = p_fallbackTexture;
        }
        else
        {
          p_default2DTexture = p_fallbackTexture;
          v6 = &s_textureGlob.default2DTexture;
        }
        v7 = p_fallbackTexture - 2;
        v8 = 2i64;
        do
        {
          if ( !memcmp_0(v7, p_default2DTexture, 0x30ui64) )
          {
            *(__m256i *)&v7->basemap = *(__m256i *)&v6->basemap;
            *(_OWORD *)&v7->shaderRWView.rwCounterResource = *(_OWORD *)&v6->shaderRWView.rwCounterResource;
          }
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      ++v2;
      ++v3;
      p_fallbackTexture += 3;
    }
    while ( v2 < 0x15C00 );
    FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v9);
    s_textureGlob.useImageFallback = useImageFallback;
    Stream_PopSyncDisable();
  }
}

/*
==============
GfxTexturePool<89088>::ReturnFreeIndex
==============
*/
void GfxTexturePool<89088>::ReturnFreeIndex(GfxTexturePool<89088> *this, unsigned int index, bool resident)
{
  unsigned __int64 v4; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  FastCriticalSectionScopeWrite v10; 

  v4 = index;
  if ( !this->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 178, ASSERT_TYPE_ASSERT, "(isInitialized)", (const char *)&queryFormat, "isInitialized") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)v4 < 0x15C00 )
      goto LABEL_13;
    LODWORD(v7) = v4;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( POOL_SIZE )", "index doesn't index POOL_SIZE\n\t%i not in [0, %i)", v7, 89088);
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 180, ASSERT_TYPE_ASSERT, "( index ) != ( 0 )", "%s != %s\n\t%u, %u", "index", "0", 0, 0i64);
  }
  if ( v6 )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x15C00 )
  {
    LODWORD(v9) = 89088;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
LABEL_13:
  if ( ((0x80000000 >> (v4 & 0x1F)) & this->freeList.array[v4 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 182, ASSERT_TYPE_ASSERT, "(!freeList.testBit( index ))", (const char *)&queryFormat, "!freeList.testBit( index )") )
    __debugbreak();
  if ( !this->entriesUsedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 183, ASSERT_TYPE_ASSERT, "(entriesUsedCount > 0)", (const char *)&queryFormat, "entriesUsedCount > 0") )
    __debugbreak();
  v10.cs = &this->lock;
  Sys_LockWrite(&this->lock);
  --this->entriesUsedCount;
  bitarray_base<bitarray<89088>>::setBit(&this->freeList, v4);
  this->searchFreeIndex = v4;
  if ( !resident )
    bitarray_base<bitarray<89088>>::resetBit(&this->streamedList, v4);
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v10);
}

/*
==============
XB3_GetTextureMinLODClamp
==============
*/
__int64 XB3_GetTextureMinLODClamp(D3D12_CPU_DESCRIPTOR_HANDLE viewHandle)
{
  if ( (viewHandle.ptr & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 793, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  return (*(_DWORD *)(viewHandle.ptr + 4) >> 8) & 0xFFF;
}

/*
==============
XB3_SetTextureLeastDetailedMip
==============
*/
void XB3_SetTextureLeastDetailedMip(D3D12_CPU_DESCRIPTOR_HANDLE viewHandle, unsigned int leastDetailedMip)
{
  unsigned int v4; 
  int v5; 

  if ( (viewHandle.ptr & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 840, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  if ( leastDetailedMip > 0xF )
  {
    v5 = 15;
    v4 = leastDetailedMip;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 841, ASSERT_TYPE_ASSERT, "( leastDetailedMip ) <= ( 0xf )", "%s <= %s\n\t%u, %u", "leastDetailedMip", "0xf", v4, v5) )
      __debugbreak();
  }
  *(_DWORD *)(viewHandle.ptr + 12) = (leastDetailedMip << 16) | *(_DWORD *)(viewHandle.ptr + 12) & 0xFFF0FFFF;
}

/*
==============
XB3_SetTextureMinLODClamp
==============
*/
void XB3_SetTextureMinLODClamp(D3D12_CPU_DESCRIPTOR_HANDLE viewHandle, unsigned int lodNatrual, unsigned int lodFraction)
{
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 

  if ( (viewHandle.ptr & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 817, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  if ( lodNatrual > 0xF )
  {
    v9 = 15;
    v7 = lodNatrual;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 818, ASSERT_TYPE_ASSERT, "( lodNatrual ) <= ( 0xf )", "%s <= %s\n\t%u, %u", "lodNatrual", "0xf", v7, v9) )
      __debugbreak();
  }
  if ( lodFraction > 0xFF )
  {
    LODWORD(v8) = 255;
    LODWORD(v6) = lodFraction;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 819, ASSERT_TYPE_ASSERT, "( lodFraction ) <= ( 0xff )", "%s <= %s\n\t%u, %u", "lodFraction", "0xff", v6, v8) )
      __debugbreak();
  }
  *(_DWORD *)(viewHandle.ptr + 4) = ((lodFraction + (lodNatrual << 8)) << 8) | *(_DWORD *)(viewHandle.ptr + 4) & 0xFFF000FF;
}

/*
==============
XB3_SetTextureMostDetailedMip
==============
*/
void XB3_SetTextureMostDetailedMip(D3D12_CPU_DESCRIPTOR_HANDLE viewHandle, unsigned int mostDetailedMip)
{
  unsigned int v4; 
  int v5; 

  if ( (viewHandle.ptr & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 829, ASSERT_TYPE_ASSERT, "(IsAligned( viewHandle.ptr, sizeof( uint64_t ) ))", (const char *)&queryFormat, "IsAligned( viewHandle.ptr, sizeof( uint64_t ) )") )
    __debugbreak();
  if ( mostDetailedMip > 0xF )
  {
    v5 = 15;
    v4 = mostDetailedMip;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_texture.cpp", 830, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) <= ( 0xf )", "%s <= %s\n\t%u, %u", "mostDetailedMip", "0xf", v4, v5) )
      __debugbreak();
  }
  *(_DWORD *)(viewHandle.ptr + 12) = (mostDetailedMip << 12) | *(_DWORD *)(viewHandle.ptr + 12) & 0xFFFF0FFF;
}

