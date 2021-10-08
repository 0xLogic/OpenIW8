/*
==============
FontCache_Init
==============
*/

bool __fastcall FontCache_Init()
{
  return ?FontCache_Init@@YA_NXZ();
}

/*
==============
FontCache_GetKerningAmount
==============
*/

int __fastcall FontCache_GetKerningAmount(TTFDef *ttf, int height, const CachedGlyph *prevGlyph, const CachedGlyph *nextGlyph)
{
  return ?FontCache_GetKerningAmount@@YAHPEAUTTFDef@@HPEBUCachedGlyph@@1@Z(ttf, height, prevGlyph, nextGlyph);
}

/*
==============
Float8x2IntersectLineCount
==============
*/

void __fastcall Float8x2IntersectLineCount(const float8x2 *p0, const float8x2 *p1, __m256 *result)
{
  ?Float8x2IntersectLineCount@@YQXAEBUfloat8x2@@0AEAT__m256@@@Z(p0, p1, result);
}

/*
==============
FontCache_CancelPreCacheGlyphs
==============
*/

void FontCache_CancelPreCacheGlyphs(void)
{
  ?FontCache_CancelPreCacheGlyphs@@YAXXZ();
}

/*
==============
FontCache_SetCacheClearCallback
==============
*/

void __fastcall FontCache_SetCacheClearCallback(void (__fastcall *callback)())
{
  ?FontCache_SetCacheClearCallback@@YAXP6AXXZ@Z(callback);
}

/*
==============
Float8x2IntersectQuadraticBezierCount
==============
*/

void __fastcall Float8x2IntersectQuadraticBezierCount(const float8x2 *b0, const float8x2 *b1, const float8x2 *b2, __m256 *result)
{
  ?Float8x2IntersectQuadraticBezierCount@@YQXAEBUfloat8x2@@00AEAT__m256@@@Z(b0, b1, b2, result);
}

/*
==============
FontCache_Shutdown
==============
*/

void FontCache_Shutdown(void)
{
  ?FontCache_Shutdown@@YAXXZ();
}

/*
==============
FontCache_FlushDeferredGlyphs
==============
*/

void __fastcall FontCache_FlushDeferredGlyphs(CmdBufState *state)
{
  ?FontCache_FlushDeferredGlyphs@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
FontCache_PreCacheFlush
==============
*/

void __fastcall FontCache_PreCacheFlush(unsigned int requestedItemCount)
{
  ?FontCache_PreCacheFlush@@YAXI@Z(requestedItemCount);
}

/*
==============
Float8x2IntersectLine
==============
*/

void __fastcall Float8x2IntersectLine(const float8x2 *p0, const float8x2 *p1, __m256 *result)
{
  ?Float8x2IntersectLine@@YQXAEBUfloat8x2@@0AEAT__m256@@@Z(p0, p1, result);
}

/*
==============
FontCache_GetCachedGlyph
==============
*/

bool __fastcall FontCache_GetCachedGlyph(TTFDef *ttf, int height, const int charCode, FontCacheFXFlags fontCacheFXFlags, bool allowMissingGlyph, CachedGlyph *glyphOut)
{
  return ?FontCache_GetCachedGlyph@@YA_NPEAUTTFDef@@HHW4FontCacheFXFlags@@_NPEAUCachedGlyph@@@Z(ttf, height, charCode, fontCacheFXFlags, allowMissingGlyph, glyphOut);
}

/*
==============
FontCache_GetMinHeightForDistanceField
==============
*/

int __fastcall FontCache_GetMinHeightForDistanceField()
{
  return ?FontCache_GetMinHeightForDistanceField@@YAHXZ();
}

/*
==============
FontCache_RenderDebug
==============
*/

void FontCache_RenderDebug(void)
{
  ?FontCache_RenderDebug@@YAXXZ();
}

/*
==============
FontCache_PreCacheGlyphs
==============
*/

bool __fastcall FontCache_PreCacheGlyphs(GfxFont *font, int height, const char *chars)
{
  return ?FontCache_PreCacheGlyphs@@YA_NPEAUGfxFont@@HPEBD@Z(font, height, chars);
}

/*
==============
FontCache_DoesGlyphUseDistanceField
==============
*/

bool __fastcall FontCache_DoesGlyphUseDistanceField(int height)
{
  return ?FontCache_DoesGlyphUseDistanceField@@YA_NH@Z(height);
}

/*
==============
FontCache_GetImage
==============
*/

GfxImage *__fastcall FontCache_GetImage()
{
  return ?FontCache_GetImage@@YAPEAUGfxImage@@XZ();
}

/*
==============
Float8x2IntersectLine
==============
*/
void Float8x2IntersectLine(const float8x2 *p0, const float8x2 *p1, __m256 *result)
{
  __asm
  {
    vmovups ymm2, ymmword ptr [rcx+20h]
    vsubps  ymm1, ymm2, ymmword ptr [rdx+20h]
    vxorps  xmm0, xmm0, xmm0
    vcmpneq_oqps ymm3, ymm1, ymm0
    vdivps  ymm2, ymm2, ymm1
    vmovups ymm1, cs:__ymm@bf800000bf800000bf800000bf800000bf800000bf800000bf800000bf800000
    vblendvps ymm0, ymm1, ymm2, ymm3
    vmovups ymmword ptr [r8], ymm0
  }
}

/*
==============
Float8x2IntersectLineCount
==============
*/
void Float8x2IntersectLineCount(const float8x2 *p0, const float8x2 *p1, __m256 *result)
{
  __asm
  {
    vmovups ymm1, ymmword ptr [rcx+20h]
    vsubps  ymm0, ymm1, ymmword ptr [rdx+20h]
    vdivps  ymm1, ymm1, ymm0
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcmpneq_oqps ymm2, ymm0, ymm7
    vmovups ymm0, cs:__ymm@bf800000bf800000bf800000bf800000bf800000bf800000bf800000bf800000
    vblendvps ymm6, ymm0, ymm1, ymm2
    vmovups ymm0, ymmword ptr [rdx]
    vsubps  ymm1, ymm0, ymmword ptr [rcx]
    vmulps  ymm2, ymm1, ymm6
    vaddps  ymm3, ymm2, ymmword ptr [rcx]
    vcmplt_oqps ymm1, ymm6, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vcmpge_oqps ymm0, ymm6, ymm7
    vmovaps xmm6, [rsp+28h+var_18]
    vcmpge_oqps ymm4, ymm3, ymm7
    vmovaps xmm7, [rsp+28h+var_28]
    vandps  ymm2, ymm4, ymm0
    vandps  ymm2, ymm2, ymm1
    vandps  ymm0, ymm2, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vmovups ymmword ptr [r8], ymm0
  }
}

/*
==============
Float8x2IntersectQuadraticBezierCount
==============
*/
void Float8x2IntersectQuadraticBezierCount(const float8x2 *b0, const float8x2 *b1, const float8x2 *b2, __m256 *result)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups ymm7, ymmword ptr [rcx+20h]
    vsubps  ymm0, ymm7, ymm1
    vmovaps xmmword ptr [rax-38h], xmm8
    vaddps  ymm8, ymm0, ymm0
    vsubps  ymm0, ymm1, ymm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovups ymm9, ymmword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovups ymm10, ymmword ptr [r8]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovups ymm13, cs:__ymm@4000000040000000400000004000000040000000400000004000000040000000
    vmulps  ymm4, ymm0, ymm13
    vaddps  ymm0, ymm1, ymm1
    vsubps  ymm1, ymm7, ymm0
    vaddps  ymm6, ymm1, ymmword ptr [r8+20h]
    vsubps  ymm0, ymm7, ymmword ptr [r8+20h]
    vmulps  ymm1, ymm4, ymm4
    vmulps  ymm2, ymm6, ymm7
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmulps  ymm3, ymm2, cs:__ymm@4080000040800000408000004080000040800000408000004080000040800000
    vmovups ymm15, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vsubps  ymm4, ymm1, ymm3
    vdivps  ymm1, ymm7, ymm0
    vxorps  xmm14, xmm14, xmm14
    vcmpneq_oqps ymm2, ymm0, ymm14
    vmovups ymm0, cs:__ymm@bf800000bf800000bf800000bf800000bf800000bf800000bf800000bf800000
    vblendvps ymm5, ymm0, ymm1, ymm2
    vandps  ymm0, ymm4, cs:__ymm@7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff
    vsqrtps ymm1, ymm0
    vaddps  ymm0, ymm1, ymm8
    vsubps  ymm1, ymm8, ymm1
    vmulps  ymm3, ymm6, ymm13
    vrcpps  ymm2, ymm3
    vmulps  ymm6, ymm1, ymm2
    vmulps  ymm12, ymm0, ymm2
    vcmplt_oqps ymm0, ymm4, ymm14
    vcmpeqps ymm1, ymm3, ymm14
    vorps   ymm11, ymm1, ymm0
    vsubps  ymm1, ymm10, ymm9
    vmulps  ymm2, ymm1, ymm5
    vaddps  ymm0, ymm2, ymm9
    vcmpge_oqps ymm3, ymm0, ymm14
    vcmpge_oqps ymm1, ymm5, ymm14
    vandps  ymm2, ymm3, ymm1
    vcmplt_oqps ymm0, ymm5, ymm15
    vandps  ymm2, ymm2, ymm0
    vandps  ymm8, ymm2, ymm15
    vaddps  ymm1, ymm6, ymm6
    vsubps  ymm0, ymm13, ymm1
    vmulps  ymm2, ymm0, ymm6
    vmulps  ymm4, ymm2, ymmword ptr [rdx]
    vsubps  ymm1, ymm6, ymm13
    vmulps  ymm0, ymm1, ymm6
    vaddps  ymm2, ymm0, ymm15
    vmulps  ymm3, ymm2, ymm9
    vaddps  ymm4, ymm4, ymm3
    vmulps  ymm0, ymm6, ymm6
    vmulps  ymm1, ymm0, ymm10
    vaddps  ymm2, ymm4, ymm1
    vcmpge_oqps ymm3, ymm2, ymm14
    vcmpge_oqps ymm0, ymm6, ymm14
    vandps  ymm4, ymm3, ymm0
    vcmplt_oqps ymm1, ymm6, ymm15
    vandps  ymm2, ymm4, ymm1
    vaddps  ymm0, ymm12, ymm12
    vsubps  ymm1, ymm13, ymm0
    vandps  ymm5, ymm2, ymm15
    vmulps  ymm2, ymm1, ymm12
    vmulps  ymm4, ymm2, ymmword ptr [rdx]
    vsubps  ymm0, ymm12, ymm13
    vmulps  ymm1, ymm0, ymm12
    vaddps  ymm2, ymm1, ymm15
    vmulps  ymm3, ymm2, ymm9
    vaddps  ymm4, ymm4, ymm3
    vmulps  ymm0, ymm12, ymm12
    vmovaps xmm6, xmmword ptr [rax-18h]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm13, [rsp+0A8h+var_88]
    vmulps  ymm1, ymm0, ymm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vaddps  ymm2, ymm4, ymm1
    vcmpge_oqps ymm3, ymm2, ymm14
    vcmpge_oqps ymm0, ymm12, ymm14
    vmovaps xmm14, [rsp+0A8h+var_98]
    vcmplt_oqps ymm1, ymm12, ymm15
    vmovaps xmm12, xmmword ptr [r11-78h]
    vandps  ymm4, ymm3, ymm0
    vandps  ymm2, ymm4, ymm1
    vandps  ymm0, ymm2, ymm15
    vmovaps xmm15, [rsp+0A8h+var_A8]
    vaddps  ymm3, ymm5, ymm0
    vblendvps ymm1, ymm3, ymm8, ymm11
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovups ymmword ptr [r9], ymm1
  }
}

/*
==============
FontCache_CancelPreCacheGlyphs
==============
*/
void FontCache_CancelPreCacheGlyphs(void)
{
  int fontCacheIsLocked; 
  int v1; 

  FontCache_Lock();
  s_fcGlob.precacheQueue.cleared = 1;
  *(_DWORD *)&s_fcGlob.precacheQueue.start = 0;
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    v1 = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v1) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
}

/*
==============
FontCache_Clear
==============
*/
int *FontCache_Clear()
{
  unsigned __int16 *p_next; 
  __int64 v1; 
  GfxImage *fontcacheImage; 
  int *result; 
  __int64 v4; 
  __int64 v5; 

  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 814, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( s_fcGlob.fontCacheClearCallback )
    s_fcGlob.fontCacheClearCallback();
  memset_0(s_fcGlob.cachedGlyphs, 0, sizeof(s_fcGlob.cachedGlyphs));
  memset_0(s_fcGlob.glyphHashEntries, 0, sizeof(s_fcGlob.glyphHashEntries));
  p_next = &s_fcGlob.cachedGlyphs[0].next;
  s_fcGlob.nextFreeGlyphIndex = 1;
  v1 = 9216i64;
  do
  {
    *p_next = 0;
    p_next += 28;
    --v1;
  }
  while ( v1 );
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v5) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 469, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v5) )
      __debugbreak();
  }
  fontcacheImage = s_fcGlob.fontcacheImage;
  if ( !s_fcGlob.fontcacheImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (fontcacheImage->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  memset_0(fontcacheImage->pixels.residentData, 0, (unsigned __int64)s_fcGlob.fontcacheImage->width << 11);
  memset_0(s_fcGlob.tileArray, 0, sizeof(s_fcGlob.tileArray));
  result = &s_fcGlob.tilePacker[0].Skyline[0].Width;
  v4 = 64i64;
  do
  {
    *((_QWORD *)result - 1) = 0i64;
    *result = 256;
    result[766] = 1;
    result += 769;
    --v4;
  }
  while ( v4 );
  s_fcGlob.precacheQueue.cleared = 1;
  s_fcGlob.frameIndex = 0i64;
  s_fcGlob.rectCount = 0;
  *(_DWORD *)&s_fcGlob.precacheQueue.start = 0;
  return result;
}

/*
==============
FontCache_CommitGlyph
==============
*/
CachedGlyph *FontCache_CommitGlyph(const CachedGlyph *glyph, unsigned int hash)
{
  __int64 v3; 
  unsigned __int16 nextFreeGlyphIndex; 
  unsigned __int16 v9; 
  __int64 v10; 

  _RDI = glyph;
  v3 = hash;
  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1492, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1493, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RBX = &s_fcGlob.cachedGlyphs[s_fcGlob.nextFreeGlyphIndex];
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  v9 = s_fcGlob.glyphHashEntries[v3];
  if ( v9 )
  {
    v10 = v9;
    _RBX->next = s_fcGlob.cachedGlyphs[v10].next;
    s_fcGlob.cachedGlyphs[v10].next = nextFreeGlyphIndex;
  }
  else
  {
    s_fcGlob.glyphHashEntries[v3] = nextFreeGlyphIndex;
  }
  FontCache_TileUpdateLRU(_RBX->tile);
  ++s_fcGlob.nextFreeGlyphIndex;
  return _RBX;
}

/*
==============
FontCache_DistFieldOutlineSpanCallback
==============
*/
void FontCache_DistFieldOutlineSpanCallback(int y, int count, const FT_Span_ *spans, void *user)
{
  __int64 v5; 
  __int64 v6; 
  unsigned __int16 *p_len; 
  int v8; 
  __int64 v9; 

  v5 = count;
  v6 = *((_QWORD *)user + 2) + (unsigned int)(**(_DWORD **)user + *((_DWORD *)user + 6) * (*((_DWORD *)user + 8) + *(_DWORD *)(*(_QWORD *)user + 4i64) - y + 15));
  if ( count > 0 )
  {
    p_len = &spans->len;
    do
    {
      v8 = 0;
      v9 = v6 + (__int16)*(p_len - 1) - *((_DWORD *)user + 7) + 16;
      if ( *p_len )
      {
        do
        {
          ++v9;
          ++v8;
          *(_BYTE *)(*((int *)user + 11) + v9 - 1) = *((_BYTE *)p_len + 2);
        }
        while ( v8 < *p_len );
      }
      p_len += 3;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
FontCache_DoesGlyphUseDistanceField
==============
*/
bool FontCache_DoesGlyphUseDistanceField(int height)
{
  return height >= 64;
}

/*
==============
FontCache_FT_Alloc
==============
*/
void *FontCache_FT_Alloc(FT_MemoryRec_ *__formal, int size)
{
  return ntl::nxheap::allocate(&s_ftHeap.m_heap, size, 8ui64, 1);
}

/*
==============
FontCache_FT_Free
==============
*/
void FontCache_FT_Free(FT_MemoryRec_ *__formal, void *block)
{
  ntl::nxheap::free(&s_ftHeap.m_heap, block);
}

/*
==============
FontCache_FT_Realloc
==============
*/
void *FontCache_FT_Realloc(FT_MemoryRec_ *__formal, int curSize, int newSize, void *block)
{
  int v4; 
  void *v8; 
  void *v9; 

  v4 = newSize;
  if ( newSize )
  {
    v8 = ntl::nxheap::allocate(&s_ftHeap.m_heap, newSize, 8ui64, 1);
    v9 = v8;
    if ( v8 )
    {
      if ( block )
      {
        if ( curSize < v4 )
          v4 = curSize;
        memcpy_0(v8, block, v4);
        ntl::nxheap::free(&s_ftHeap.m_heap, block);
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 272, ASSERT_TYPE_ASSERT, "(newBlock)", (const char *)&queryFormat, "newBlock") )
    {
      __debugbreak();
    }
    return v9;
  }
  else
  {
    if ( block )
      ntl::nxheap::free(&s_ftHeap.m_heap, block);
    return 0i64;
  }
}

/*
==============
FontCache_FlushDeferredGlyphs
==============
*/
void FontCache_FlushDeferredGlyphs(CmdBufState *state)
{
  int fontCacheIsLocked; 
  int v2; 

  FontCache_Lock(state);
  ++s_fcGlob.frameIndex;
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    v2 = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v2) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
}

/*
==============
FontCache_GetCachedGlyph
==============
*/
__int64 FontCache_GetCachedGlyph(TTFDef *ttf, int height, const int charCode, FontCacheFXFlags fontCacheFXFlags, bool allowMissingGlyph, CachedGlyph *glyphOut)
{
  void *ftFace; 
  bool v11; 
  const CachedGlyph *v12; 
  unsigned __int8 v13; 
  int fontCacheIsLocked; 
  __int64 v25; 
  FT_FaceRec_ *aface; 

  if ( !ttf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1951, ASSERT_TYPE_ASSERT, "(ttf)", (const char *)&queryFormat, "ttf") )
    __debugbreak();
  FontCache_Lock(ttf);
  ftFace = ttf->ftFace;
  v11 = allowMissingGlyph;
  v12 = NULL;
  v13 = 0;
  if ( !ftFace )
  {
    if ( !s_ftLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2064, ASSERT_TYPE_ASSERT, "(s_ftLibrary)", (const char *)&queryFormat, "s_ftLibrary") )
      __debugbreak();
    if ( s_fcGlob.fontCacheIsLocked != 1 )
    {
      LODWORD(v25) = s_fcGlob.fontCacheIsLocked;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2065, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v25) )
        __debugbreak();
    }
    ftFace = ttf->ftFace;
    if ( !ftFace )
    {
      if ( j_FT_New_Memory_Face(s_ftLibrary, (const unsigned __int8 *)ttf->file, ttf->fileLen, 0, &aface) )
        goto LABEL_22;
      ftFace = aface;
      if ( (aface->face_flags & 1) == 0 )
      {
        j_FT_Done_Face(aface);
        goto LABEL_22;
      }
      ttf->ftFace = aface;
    }
  }
  if ( charCode == 160 )
    charCode = 32;
  _RAX = FontCache_GetCachedGlyph_Internal_Actual(ftFace, height, charCode, fontCacheFXFlags, v11);
  v12 = _RAX;
  if ( _RAX )
  {
    _RCX = glyphOut;
    if ( glyphOut )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rcx+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rcx+30h], xmm0
      }
    }
    v13 = 1;
    goto LABEL_28;
  }
LABEL_22:
  if ( v11 )
  {
    if ( s_fcGlob.nextFreeGlyphIndex <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1978, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex > 1)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex > 1") )
      __debugbreak();
    _RAX = glyphOut;
    if ( glyphOut )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:s_fcGlob.cachedGlyphs.font+38h
        vmovups ymmword ptr [rax], ymm0
        vmovups xmm1, xmmword ptr cs:s_fcGlob.cachedGlyphs.next+38h
        vmovups xmmword ptr [rax+20h], xmm1
        vmovsd  xmm0, qword ptr cs:s_fcGlob.cachedGlyphs._dx+38h
        vmovsd  qword ptr [rax+30h], xmm0
      }
    }
  }
LABEL_28:
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v25) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v25) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
  if ( !v13 && v11 )
  {
    if ( ttf->ftFace )
    {
      if ( !v12 )
        Com_PrintError(8, "Failed to get glyph because FT_Load_Glyph() failed. Using placeholder glyph so expect text corruption\n");
    }
    else
    {
      Com_PrintError(8, "Error loading font: %s. Using placeholder glyph so expect text corruption\n", ttf->name);
    }
  }
  return v13;
}

/*
==============
FontCache_GetCachedGlyph_Internal_Actual
==============
*/
CachedGlyph *FontCache_GetCachedGlyph_Internal_Actual(void *font, int height, const int charCode, FontCacheFXFlags fxFlags, bool allowMissingGlyph)
{
  int v11; 
  int v12; 
  unsigned __int8 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int16 next; 
  CachedGlyph *v18; 
  unsigned int Char_Index; 
  unsigned int v20; 
  unsigned __int16 LRU; 
  CachedGlyph *result; 
  unsigned int v30; 
  int v48; 
  int *v49; 
  int v50; 
  unsigned int v51; 
  int v52; 
  unsigned int v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  __int16 v56; 
  unsigned int v57; 
  int v68; 
  __int64 v72; 
  __int16 v73; 
  __int16 v74; 
  void (__fastcall *v75)(int, int, const FT_Span_ *, void *); 
  __int64 v76; 
  __int64 v78; 
  int (__fastcall *bit_test)(int, int, void *); 
  __int64 i; 
  int y; 
  int v82; 
  char *v90; 
  char *v91; 
  __int64 v92; 
  char *v93; 
  char *v136; 
  char *v137; 
  __int64 v138; 
  __int64 v153; 
  __int64 v154; 
  unsigned __int8 v155; 
  unsigned __int16 v157; 
  unsigned int hash; 
  CachedGlyph glyph; 
  unsigned int v161; 
  unsigned int v162; 
  PackedBin *p_packedBinOut; 
  void *pixels; 
  unsigned int pitch; 
  int v166; 
  int v167; 
  int v168; 
  unsigned int v169; 
  int v170; 
  PackedBin packedBinOut; 
  FT_Raster_Params_ params; 
  FT_Outline_Funcs_ req; 
  FT_Size_RequestRec_ v174; 

  v11 = charCode;
  v12 = height;
  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1533, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1534, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  v155 = 0;
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1542, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( v12 >= 64 || (fxFlags & 1) != 0 )
  {
    v155 = 1;
    fxFlags = FONT_CACHE_FX_DISTANCE_FIELD;
  }
  v14 = truncate_cast<unsigned char,enum FontCacheFXFlags>(fxFlags);
  v15 = FontCache_GetHash(font, v12, v11, v14);
  v16 = v15;
  hash = v15;
  if ( v15 >= 0x9000 )
  {
    LODWORD(v153) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1552, ASSERT_TYPE_ASSERT, "(unsigned)( hash ) < (unsigned)( MAX_GLYPH_CACHE_HASHTABLE_ENTRIES )", "hash doesn't index MAX_GLYPH_CACHE_HASHTABLE_ENTRIES\n\t%i not in [0, %i)", v153, 36864) )
      __debugbreak();
  }
  next = s_fcGlob.glyphHashEntries[v16];
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1557, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  if ( !next )
  {
LABEL_25:
    __asm { vmovaps [rsp+200h+var_50], xmm6 }
    Char_Index = j_FT_Get_Char_Index((FT_FaceRec_ *)font, v11);
    if ( !Char_Index )
    {
      if ( !allowMissingGlyph )
        goto LABEL_52;
      Char_Index = j_FT_Get_Char_Index((FT_FaceRec_ *)font, 0x25A1u);
    }
    v20 = 0;
    LOBYTE(LRU) = 0;
    if ( s_fcGlob.nextFreeGlyphIndex >= 0x23FEu )
    {
      do
      {
        if ( v20 >= 0x64 )
        {
          LODWORD(v153) = 100;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1598, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to free any glyphs after %d attempts!  This should not happen...", v153) )
            __debugbreak();
          LRU = ((_BYTE)LRU + 1) & 0x3F;
        }
        else
        {
          LRU = FontCache_TileGetLRU();
        }
        if ( !FontCache_TileFree(LRU) )
          ++v20;
        if ( LRU > 0x3Fu )
        {
          LODWORD(v154) = 63;
          LODWORD(v153) = LRU;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 737, ASSERT_TYPE_ASSERT, "( 0 ) <= ( tileIndex ) && ( tileIndex ) <= ( FONTCACHE_TILE_COUNT - 1 )", "tileIndex not in [0, FONTCACHE_TILE_COUNT - 1]\n\t%i not in [%i, %i]", v153, 0i64, v154) )
            __debugbreak();
        }
        s_fcGlob.tileArray[LRU].frameIndex = s_fcGlob.frameIndex;
      }
      while ( s_fcGlob.nextFreeGlyphIndex >= 0x23FEu );
      v12 = height;
      v11 = charCode;
    }
    if ( !v155 || v12 == 64 )
    {
      *(_QWORD *)&v174.type = 1i64;
      v174.height = v12 << 6;
      *(_QWORD *)&v174.horiResolution = 0i64;
      j_FT_Request_Size((FT_FaceRec_ *)font, &v174);
      v48 = 40;
      if ( (*((_BYTE *)font + 8) & 4) != 0 || v155 )
        v48 = 8;
      if ( !j_FT_Load_Glyph((FT_FaceRec_ *)font, Char_Index, v48) )
      {
        v49 = (int *)*((_QWORD *)font + 15);
        v166 = v49[14] >> 6;
        v50 = v49[12] >> 6;
        v168 = v50 + v166;
        v51 = v50 + 32;
        v167 = v49[15] >> 6;
        v52 = v49[13] >> 6;
        v169 = v167 - v52;
        p_packedBinOut = &packedBinOut;
        v170 = 0;
        v53 = v52 + 32;
        if ( !v155 )
          v53 = v52;
        if ( !v155 )
          v51 = v50;
        v161 = v53;
        v162 = v51;
        v54 = FontCache_PackGlyph(v51 + 4, v53 + 4, &packedBinOut);
        packedBinOut.x += 2;
        packedBinOut.y += 2;
        v157 = v54;
        glyph.dx = truncate_cast<short,long>(*(_DWORD *)(*((_QWORD *)font + 15) + 88i64) / 64);
        glyph.fontHeight = truncate_cast<unsigned short,int>(v12);
        glyph.fxFlags = truncate_cast<unsigned char,enum FontCacheFXFlags>(fxFlags);
        v55 = truncate_cast<unsigned short,int>(v11);
        v56 = 2 * (v155 ^ 1);
        v57 = v161;
        glyph.letter = v55;
        glyph.glyphIndex = Char_Index;
        glyph.next = 0;
        glyph.pixelHeight = truncate_cast<unsigned short,int>(v161 + 4 * (v155 ^ 1));
        __asm { vmovss  xmm2, cs:__real@3a000000 }
        glyph.pixelWidth = truncate_cast<unsigned short,int>(v51 + 4 * (v155 ^ 1));
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, xmm2
          vmovss  [rsp+200h+glyph.s0], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm2
          vmovss  [rsp+200h+glyph.s1], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm2
        }
        v68 = v166 - 2 * (v155 ^ 1);
        glyph.font = font;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  [rsp+200h+glyph.t0], xmm1
          vmulss  xmm1, xmm0, xmm2
          vmovss  [rsp+200h+glyph.t1], xmm1
        }
        if ( (unsigned int)(v68 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)(v166 - v56), "signed", v68) )
          __debugbreak();
        v72 = *((_QWORD *)font + 16);
        glyph.x0 = v166 - 2 * (v155 ^ 1);
        v73 = *(_DWORD *)(v72 + 36) / 64 - v56;
        glyph.tile = v157;
        v30 = hash;
        v74 = v73 - v12 - v167;
        glyph.y0 = v74;
        glyph.hash = hash;
        FontCache_GetPixels(&pixels, &pitch);
        if ( !pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1745, ASSERT_TYPE_ASSERT, "(renderUserData.pixels != 0)", (const char *)&queryFormat, "renderUserData.pixels != NULL") )
          __debugbreak();
        if ( pitch < 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1746, ASSERT_TYPE_ASSERT, "(renderUserData.pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS)", (const char *)&queryFormat, "renderUserData.pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS") )
          __debugbreak();
        v75 = FontCache_OutlineSpanCallback;
        *(_QWORD *)&params.flags = 7i64;
        params.target = NULL;
        params.source = NULL;
        if ( v155 )
          v75 = FontCache_DistFieldOutlineSpanCallback;
        params.bit_set = NULL;
        params.gray_spans = v75;
        params.clip_box.xMin = v166;
        params.clip_box.xMax = v168;
        params.clip_box.yMin = v169;
        params.clip_box.yMax = v167;
        params.user = &p_packedBinOut;
        v76 = *((_QWORD *)font + 15);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+100h+params.black_spans], xmm0
        }
        if ( *(_DWORD *)(v76 + 96) != 1869968492 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1772, ASSERT_TYPE_ASSERT, "(face->glyph->format == FT_GLYPH_FORMAT_OUTLINE)", (const char *)&queryFormat, "face->glyph->format == FT_GLYPH_FORMAT_OUTLINE") )
          __debugbreak();
        j_FT_Outline_Render(s_ftLibrary, (FT_Outline_ *)(*((_QWORD *)font + 15) + 152i64), &params);
        if ( v155 )
        {
          *(_QWORD *)&req.shift = 0i64;
          v78 = (int)v162;
          req.move_to = FontCache_OutlineDecompose_MoveTo;
          params.source = (const void *)__PAIR64__(v161, v162);
          req.line_to = FontCache_OutlineDecompose_LineTo;
          req.conic_to = FontCache_OutlineDecompose_ConicTo;
          req.cubic_to = FontCache_OutlineDecompose_CubicTo;
          *(&params.flags + 1) = v166;
          params.flags = v168;
          params.gray_spans = (void (__fastcall *)(int, int, const FT_Span_ *, void *))__PAIR64__(v169, v167);
          LODWORD(params.black_spans) = (v162 + 7) & 0xFFFFFFF8;
          bit_test = (int (__fastcall *)(int, int, void *))ntl::nxheap::allocate(&s_ftHeap.m_heap, 4 * (int)v161 * (__int64)SLODWORD(params.black_spans), 0x20ui64, 1);
          params.bit_test = bit_test;
          if ( (int (__fastcall *)(int, int, void *))(((unsigned __int64)bit_test + 31) & 0xFFFFFFFFFFFFFFE0ui64) != bit_test )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1801, ASSERT_TYPE_ASSERT, "(( ( ( reinterpret_cast<uintptr_t>( decomposeData.dist ) ) + ( 32 ) - 1 ) & ( ~( ( 32 ) - 1 ) ) ) == reinterpret_cast<uintptr_t>( decomposeData.dist ))", (const char *)&queryFormat, "ALIGN_VALUE( reinterpret_cast<uintptr_t>( decomposeData.dist ), 32 ) == reinterpret_cast<uintptr_t>( decomposeData.dist )") )
              __debugbreak();
            bit_test = params.bit_test;
          }
          if ( (int (__fastcall *)(int, int, void *))(((unsigned __int64)bit_test + 31) & 0xFFFFFFFFFFFFFFE0ui64) != bit_test )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1806, ASSERT_TYPE_ASSERT, "(( ( ( reinterpret_cast<uintptr_t>( decomposeData.dist ) ) + ( 32 ) - 1 ) & ( ~( ( 32 ) - 1 ) ) ) == reinterpret_cast<uintptr_t>( decomposeData.dist ))", (const char *)&queryFormat, "ALIGN_VALUE( reinterpret_cast<uintptr_t>( decomposeData.dist ), 32 ) == reinterpret_cast<uintptr_t>( decomposeData.dist )") )
              __debugbreak();
            bit_test = params.bit_test;
          }
          if ( (int)(v161 * LODWORD(params.black_spans)) > 0 )
          {
            for ( i = (int)(v161 * LODWORD(params.black_spans)); i; --i )
            {
              *(_DWORD *)bit_test = 1157627904;
              bit_test = (int (__fastcall *)(int, int, void *))((char *)bit_test + 4);
            }
          }
          j_FT_Outline_Decompose((FT_Outline_ *)(*((_QWORD *)font + 15) + 152i64), &req, &params);
          y = packedBinOut.y;
          v82 = packedBinOut.y;
          if ( packedBinOut.y < (int)(packedBinOut.y + v57) )
          {
            __asm
            {
              vmovss  xmm4, cs:__real@41000000
              vmovss  xmm5, cs:__real@43000000
              vmovss  xmm6, cs:__real@437f0000
              vmovaps [rsp+200h+var_60], xmm7
            }
            _EBX = 128;
            __asm
            {
              vmovaps [rsp+200h+var_70], xmm8
              vmovss  xmm8, cs:__real@c1000000
              vmovaps [rsp+200h+var_80], xmm9
              vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
              vxorps  xmm7, xmm7, xmm7
            }
            do
            {
              v90 = (char *)pixels + packedBinOut.x + pitch * v82;
              v91 = (char *)params.bit_test + 4 * LODWORD(params.black_spans) * (v82 - y);
              v92 = 0i64;
              if ( v78 >= 4 )
              {
                v93 = v91 + 8;
                do
                {
                  _EAX = (unsigned __int8)v90[v92];
                  v93 += 16;
                  __asm
                  {
                    vmovd   xmm1, eax
                    vmovd   xmm0, ebx
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                    vmulss  xmm1, xmm0, dword ptr [rdi-18h]
                    vaddss  xmm2, xmm1, xmm5
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                    vcvttss2si eax, xmm0
                  }
                  v90[v92] = _EAX;
                  _EAX = (unsigned __int8)v90[v92 + 1];
                  __asm
                  {
                    vmovd   xmm1, eax
                    vmovd   xmm0, ebx
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                    vmulss  xmm1, xmm0, dword ptr [rdi-14h]
                    vaddss  xmm2, xmm1, xmm5
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                    vcvttss2si eax, xmm0
                  }
                  v90[v92 + 1] = _EAX;
                  __asm { vmulss  xmm3, xmm4, dword ptr [rdi-10h] }
                  _EAX = (unsigned __int8)v90[v92 + 2];
                  __asm
                  {
                    vmovd   xmm1, eax
                    vxorps  xmm2, xmm3, xmm9
                    vmovd   xmm0, ebx
                    vpcmpgtd xmm1, xmm0, xmm1
                    vblendvps xmm1, xmm3, xmm2, xmm1
                    vaddss  xmm0, xmm1, xmm5
                    vminss  xmm2, xmm0, xmm6
                    vmaxss  xmm1, xmm2, xmm7
                    vcvttss2si eax, xmm1
                  }
                  v90[v92 + 2] = _EAX;
                  _EAX = (unsigned __int8)v90[v92 + 3];
                  __asm
                  {
                    vmulss  xmm3, xmm4, dword ptr [rdi-0Ch]
                    vmovd   xmm1, eax
                    vmovd   xmm0, ebx
                    vpcmpgtd xmm1, xmm0, xmm1
                    vxorps  xmm2, xmm3, xmm9
                    vblendvps xmm1, xmm3, xmm2, xmm1
                    vaddss  xmm0, xmm1, xmm5
                    vminss  xmm2, xmm0, xmm6
                    vmaxss  xmm1, xmm2, xmm7
                    vcvttss2si eax, xmm1
                  }
                  v90[v92 + 3] = _EAX;
                  v92 += 4i64;
                }
                while ( v92 < v78 - 3 );
                y = packedBinOut.y;
              }
              if ( v92 < v78 )
              {
                v136 = &v91[4 * v92];
                v137 = &v90[v92];
                v138 = v78 - v92;
                do
                {
                  _EAX = (unsigned __int8)*v137++;
                  v136 += 4;
                  __asm
                  {
                    vmovd   xmm1, eax
                    vmovd   xmm0, ebx
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                    vmulss  xmm1, xmm0, dword ptr [rdi-4]
                    vaddss  xmm2, xmm1, xmm5
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                    vcvttss2si eax, xmm0
                  }
                  *(v137 - 1) = _EAX;
                  --v138;
                }
                while ( v138 );
                y = packedBinOut.y;
              }
              ++v82;
            }
            while ( v82 < (int)(y + v57) );
            v30 = hash;
            __asm
            {
              vmovaps xmm9, [rsp+200h+var_80]
              vmovaps xmm8, [rsp+200h+var_70]
              vmovaps xmm7, [rsp+200h+var_60]
            }
          }
          ntl::nxheap::free(&s_ftHeap.m_heap, params.bit_test);
          glyph.x0 = v68 - 16;
          glyph.y0 = v74 - 16;
        }
        goto LABEL_97;
      }
    }
    else
    {
      if ( v11 == 160 )
        v11 = 32;
      _RAX = FontCache_GetCachedGlyph_Internal_Actual(font, 64, v11, FONT_CACHE_FX_DISTANCE_FIELD, 1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+200h+glyph.font], ymm0
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      req.move_to = (int (__fastcall *)(const FT_Vector_ *, void *))1;
      LODWORD(req.line_to) = v12 << 6;
      __asm
      {
        vmovups xmmword ptr [rbp+100h+glyph.next], xmm1
        vmovsd  qword ptr [rbp+100h+glyph._dx], xmm0
      }
      *(int (__fastcall **)(const FT_Vector_ *, void *))((char *)&req.line_to + 4) = NULL;
      j_FT_Request_Size((FT_FaceRec_ *)font, (FT_Size_RequestRec_ *)&req);
      if ( !j_FT_Load_Glyph((FT_FaceRec_ *)font, Char_Index, ~(8 * (unsigned __int8)*((_DWORD *)font + 2)) & 0x20 | 8) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, r14d
        }
        glyph.fontHeight = truncate_cast<unsigned short,int>(v12);
        __asm { vmulss  xmm2, xmm6, cs:__real@3f000000 }
        v30 = hash;
        glyph.dx = truncate_cast<short,long>(*(_DWORD *)(*((_QWORD *)font + 15) + 88i64) / 64);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm1, xmm0, xmm2
          vcvttss2si eax, xmm1
        }
        glyph.pixelWidth = _EAX;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm1, xmm0, xmm2
          vmulss  xmm2, xmm6, cs:__real@3e800000
          vcvttss2si eax, xmm1
        }
        glyph.pixelHeight = _EAX;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm2
          vcvttss2si eax, xmm1
        }
        glyph.x0 = _EAX;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        glyph.glyphIndex = Char_Index;
        glyph.next = 0;
        glyph.hash = hash;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm2
          vcvttss2si eax, xmm1
        }
        glyph.y0 = _EAX;
LABEL_97:
        result = FontCache_CommitGlyph(&glyph, v30);
        goto LABEL_98;
      }
    }
LABEL_52:
    result = NULL;
LABEL_98:
    __asm { vmovaps xmm6, [rsp+200h+var_50] }
    return result;
  }
  while ( 1 )
  {
    v18 = &s_fcGlob.cachedGlyphs[next];
    if ( v18->letter == v11 && v18->fontHeight == v12 && v18->font == font && v18->fxFlags == fxFlags )
      break;
    next = v18->next;
    if ( !next )
      goto LABEL_25;
  }
  FontCache_TileUpdateLRU(v18->tile);
  return v18;
}

/*
==============
FontCache_GetHash
==============
*/
__int64 FontCache_GetHash(void *font, const unsigned __int16 height, const unsigned __int16 charCode, const unsigned __int8 fxFlags)
{
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 

  v19 = HIBYTE(charCode);
  v18 = HIBYTE(height);
  v4 = height;
  v5 = charCode;
  v6 = g_crc32Table[(unsigned __int8)font ^ 0xFAi64] ^ 0xFFFFEA;
  v7 = (((v6 >> 8) ^ g_crc32Table[BYTE1(font) ^ (unsigned __int64)(unsigned __int8)v6]) >> 8) ^ g_crc32Table[BYTE2(font) ^ (unsigned __int64)(unsigned __int8)(BYTE1(v6) ^ LOBYTE(g_crc32Table[BYTE1(font) ^ (unsigned __int64)(unsigned __int8)v6]))];
  v8 = (v7 >> 8) ^ g_crc32Table[BYTE3(font) ^ (unsigned __int64)(unsigned __int8)v7];
  v9 = (v8 >> 8) ^ g_crc32Table[BYTE4(font) ^ (unsigned __int64)(unsigned __int8)v8];
  v10 = (v9 >> 8) ^ g_crc32Table[BYTE5(font) ^ (unsigned __int64)(unsigned __int8)v9];
  v11 = (v10 >> 8) ^ g_crc32Table[BYTE6(font) ^ (unsigned __int64)(unsigned __int8)v10];
  v12 = (v11 >> 8) ^ g_crc32Table[HIBYTE(font) ^ (unsigned __int64)(unsigned __int8)v11];
  v13 = (v12 >> 8) ^ g_crc32Table[v4 ^ (unsigned __int64)(unsigned __int8)v12];
  v14 = (v13 >> 8) ^ g_crc32Table[v18 ^ (unsigned __int64)(unsigned __int8)v13];
  v15 = (v14 >> 8) ^ g_crc32Table[v5 ^ (unsigned __int64)(unsigned __int8)v14];
  v16 = (v15 >> 8) ^ g_crc32Table[v19 ^ (unsigned __int64)(unsigned __int8)v15];
  return ~((v16 >> 8) ^ g_crc32Table[fxFlags ^ (unsigned __int64)(unsigned __int8)v16]) % 0x9000;
}

/*
==============
FontCache_GetImage
==============
*/
GfxImage *FontCache_GetImage()
{
  return s_fcGlob.fontcacheImage;
}

/*
==============
FontCache_GetKerningAmount
==============
*/
__int64 FontCache_GetKerningAmount(TTFDef *ttf, int height, const CachedGlyph *prevGlyph, const CachedGlyph *nextGlyph)
{
  unsigned int v4; 
  FT_FaceRec_ *ftFace; 
  int Kerning; 
  FT_Vector_ akerning; 
  FT_Size_RequestRec_ req; 

  v4 = 0;
  if ( !ttf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2011, ASSERT_TYPE_ASSERT, "(ttf)", (const char *)&queryFormat, "ttf") )
    __debugbreak();
  if ( !ttf->ftFace )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2012, ASSERT_TYPE_ASSERT, "(ttf->ftFace)", (const char *)&queryFormat, "ttf->ftFace") )
      __debugbreak();
    if ( !ttf->ftFace )
      return 0i64;
  }
  FontCache_Lock(ttf);
  ftFace = (FT_FaceRec_ *)ttf->ftFace;
  *(_QWORD *)&req.type = 1i64;
  req.height = height << 6;
  *(_QWORD *)&req.horiResolution = 0i64;
  j_FT_Request_Size(ftFace, &req);
  Kerning = 0;
  if ( prevGlyph )
  {
    if ( nextGlyph )
    {
      Kerning = j_FT_Get_Kerning(ftFace, prevGlyph->glyphIndex, nextGlyph->glyphIndex, 0, &akerning);
      if ( !Kerning )
        v4 = akerning.x / 64;
    }
  }
  FontCache_Unlock();
  if ( Kerning )
    Com_PrintError(8, "Failed to load kerning from font!\n");
  return v4;
}

/*
==============
FontCache_GetMinHeightForDistanceField
==============
*/
__int64 FontCache_GetMinHeightForDistanceField()
{
  return 64i64;
}

/*
==============
FontCache_GetPixels
==============
*/
void FontCache_GetPixels(void **pixels, unsigned int *pitch)
{
  GfxImage *fontcacheImage; 

  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 469, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( !pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 470, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  fontcacheImage = s_fcGlob.fontcacheImage;
  if ( !s_fcGlob.fontcacheImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (fontcacheImage->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  *pixels = fontcacheImage->pixels.residentData;
  *pitch = s_fcGlob.fontcacheImage->width;
}

/*
==============
FontCache_Init
==============
*/
char FontCache_Init(__int64 a1)
{
  int fontCacheIsLocked; 
  __m256i v7; 
  __m256i v8; 
  Image_SetupParams params; 

  FontCache_Lock(a1);
  if ( !s_ftLibrary )
  {
    s_fcGlob.ftMemoryRec.alloc = FontCache_FT_Alloc;
    s_fcGlob.ftMemoryRec.user = NULL;
    s_fcGlob.ftMemoryRec.free = FontCache_FT_Free;
    s_fcGlob.ftMemoryRec.realloc = FontCache_FT_Realloc;
    if ( j_FT_New_Library(&s_fcGlob.ftMemoryRec, &s_ftLibrary) )
    {
      FontCache_Unlock();
      Com_PrintError(8, "Error creating new FreeType library\n");
      return 0;
    }
    j_FT_Add_Default_Modules(s_ftLibrary);
    s_fcGlob.rectCount = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0B8h+var_68+8], xmm0
    }
    v7.m256i_i32[2] = 1;
    *(__int64 *)((char *)&v7.m256i_i64[1] + 4) = 1i64;
    v8.m256i_i64[0] = 0i64;
    v8.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rsp+0B8h+var_68] }
    v7.m256i_i64[0] = 0x80000000800i64;
    v7.m256i_i32[5] = 1027;
    v7.m256i_i32[6] = 2;
    __asm
    {
      vmovups ymm0, [rsp+0B8h+var_88]
      vmovups ymmword ptr [rsp+0B8h+params.width], ymm0
      vmovups ymmword ptr [rsp+0B8h+params.customAllocFunc], ymm1
    }
    s_fcGlob.fontcacheImage = Image_AllocProg(IMAGE_PROG_FONT_CACHE, IMG_CATEGORY_RAW, TS_2D);
    Image_Setup(s_fcGlob.fontcacheImage, &params);
  }
  FontCache_Clear();
  rgp.fontCacheImage = s_fcGlob.fontcacheImage;
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
  return 1;
}

/*
==============
FontCache_Lock
==============
*/
char FontCache_Lock()
{
  char result; 
  int fontCacheIsLocked; 

  Sys_EnterCriticalSection(CRITSECT_FONT_CACHE);
  if ( s_fcGlob.fontCacheIsLocked )
  {
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 291, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 0 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", fontCacheIsLocked);
    if ( result )
      __debugbreak();
    ++s_fcGlob.fontCacheIsLocked;
  }
  else
  {
    result = LOBYTE(s_fcGlob.fontCacheIsLocked) + 1;
    ++s_fcGlob.fontCacheIsLocked;
  }
  return result;
}

/*
==============
FontCache_OutlineDecompose_Conic
==============
*/
void FontCache_OutlineDecompose_Conic(const vec2_t *fA, const vec2_t *fB, const vec2_t *fC, DecomposeData *data)
{
  float *dist; 
  __int64 v71; 
  __int64 v97; 
  int stride; 
  __int64 v109; 
  int v110; 
  __int64 v121; 
  char v211[576]; 
  char v212; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  _RBP = (unsigned __int64)v211 & 0xFFFFFFFFFFFFFFE0ui64;
  __asm
  {
    vmovss  xmm10, dword ptr [rcx+4]
    vmovss  xmm9, dword ptr [rcx]
    vmovss  xmm14, dword ptr [r8+4]
    vmovss  xmm13, dword ptr [r8]
    vmovss  xmm11, dword ptr [rdx]
    vmovss  xmm12, dword ptr [rdx+4]
    vsubss  xmm0, xmm14, xmm10
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm2, xmm13, xmm9
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcomiss xmm2, cs:__real@3a83126f
    vsubss  xmm7, xmm9, xmm11
    vsubss  xmm8, xmm10, xmm12
    vxorps  xmm15, xmm15, xmm15
  }
  if ( ((unsigned __int64)v211 & 0xFFFFFFFFFFFFFFE0ui64) != 0 )
  {
    __asm
    {
      vsubss  xmm0, xmm13, xmm11
      vsubss  xmm5, xmm0, xmm7
      vmulss  xmm2, xmm5, xmm7
      vsubss  xmm1, xmm14, xmm12
      vsubss  xmm6, xmm1, xmm8
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm4, xmm2, xmm0
      vmulss  xmm3, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm3, xmm1
      vdivss  xmm2, xmm4, xmm0
      vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
      vminss  xmm1, xmm3, cs:__real@3f800000
      vmaxss  xmm2, xmm1, xmm15
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm1, xmm2, xmm6
      vaddss  xmm7, xmm0, xmm7
      vaddss  xmm8, xmm1, xmm8
    }
  }
  __asm
  {
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcomiss xmm2, cs:__real@3dcccccd
  }
  if ( ((unsigned __int64)v211 & 0xFFFFFFFFFFFFFFE0ui64) != 0 )
  {
    __asm { vmovss  xmm3, cs:__real@41800000 }
    dist = data->dist;
    __asm
    {
      vmaxss  xmm0, xmm12, xmm10
      vmaxss  xmm1, xmm0, xmm14
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vaddss  xmm2, xmm1, xmm3
      vminss  xmm1, xmm2, xmm0
      vcvttss2si edi, xmm1
      vminss  xmm2, xmm11, xmm9
      vminss  xmm0, xmm2, xmm13
      vsubss  xmm1, xmm0, xmm3
      vmaxss  xmm1, xmm1, xmm15
      vcvttss2si eax, xmm1
    }
    v71 = _EAX / 8;
    __asm
    {
      vmovaps xmm0, xmm13
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rbp+100h], ymm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vaddps  ymm0, ymm0, cs:__ymm@40e0000040c0000040a000004080000040400000400000003f80000000000000
      vmovups ymmword ptr [rbp+0E0h], ymm0
      vminss  xmm0, xmm12, xmm10
      vminss  xmm1, xmm0, xmm14
      vsubss  xmm2, xmm1, xmm3
      vmaxss  xmm0, xmm2, xmm15
      vcvttss2si r8d, xmm0
      vmaxss  xmm1, xmm11, xmm9
      vmaxss  xmm2, xmm1, xmm13
      vmovaps xmm7, xmm9
      vmovaps xmm4, xmm10
      vmovaps xmm8, xmm11
      vmovaps xmm5, xmm12
      vmovaps xmm6, xmm14
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vaddss  xmm3, xmm2, xmm3
      vminss  xmm1, xmm3, xmm0
      vcvttss2si eax, xmm1
    }
    v97 = (_EAX + 7) / 8;
    __asm
    {
      vshufps xmm7, xmm7, xmm7, 0
      vshufps xmm4, xmm4, xmm4, 0
      vshufps xmm8, xmm8, xmm8, 0
      vshufps xmm5, xmm5, xmm5, 0
      vshufps xmm6, xmm6, xmm6, 0
      vinsertf128 ymm7, ymm7, xmm7, 1
      vinsertf128 ymm4, ymm4, xmm4, 1
      vinsertf128 ymm8, ymm8, xmm8, 1
      vinsertf128 ymm5, ymm5, xmm5, 1
      vinsertf128 ymm6, ymm6, xmm6, 1
      vmovups ymmword ptr [rbp+0A0h], ymm7
      vmovups ymmword ptr [rbp+140h], ymm4
      vmovups ymmword ptr [rbp+0C0h], ymm8
      vmovups ymmword ptr [rbp+160h], ymm5
      vmovups ymmword ptr [rbp+180h], ymm6
    }
    if ( _ER8 < _EDI )
    {
      stride = data->stride;
      v109 = v71;
      v110 = _ER8 * stride;
      do
      {
        __asm
        {
          vmovups ymm1, ymmword ptr [rbp+0E0h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r8d
          vshufps xmm0, xmm0, xmm0, 0
          vinsertf128 ymm0, ymm0, xmm0, 1
          vmovups ymmword ptr [rbp+60h], ymm1
        }
        if ( v109 < v97 )
        {
          __asm
          {
            vsubps  ymm15, ymm4, ymm0
            vsubps  ymm4, ymm5, ymm0
            vsubps  ymm5, ymm6, ymm0
            vsubps  ymm0, ymm5, ymm15
            vmovups ymmword ptr [rbp+0], ymm0
          }
          _RCX = &dist[8 * v109 + 8 * (v110 / 8)];
          __asm
          {
            vsubps  ymm6, ymm4, ymm15
            vsubps  ymm0, ymm5, ymm4
          }
          v121 = v97 - v109;
          __asm
          {
            vmovups ymmword ptr [rbp+80h], ymm4
            vmovups ymmword ptr [rbp+120h], ymm5
            vmovups ymmword ptr [rbp+20h], ymm6
            vmovups ymmword ptr [rbp+40h], ymm0
          }
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+100h]
              vsubps  ymm3, ymm0, ymm1
              vsubps  ymm13, ymm7, ymm1
              vsubps  ymm14, ymm8, ymm1
              vmulps  ymm1, ymm3, ymm15
              vsubps  ymm12, ymm3, ymm14
              vsubps  ymm7, ymm3, ymm13
              vmulps  ymm0, ymm5, ymm13
              vsubps  ymm11, ymm0, ymm1
              vmulps  ymm0, ymm4, ymm13
              vsubps  ymm9, ymm14, ymm13
              vmulps  ymm2, ymm14, ymm15
              vsubps  ymm1, ymm2, ymm0
              vaddps  ymm10, ymm1, ymm1
              vmulps  ymm2, ymm3, ymm4
              vmulps  ymm3, ymm11, ymmword ptr [rbp+0]
              vmulps  ymm0, ymm5, ymm14
              vmulps  ymm5, ymm10, ymmword ptr [rbp+40h]
              vsubps  ymm1, ymm2, ymm0
              vaddps  ymm8, ymm1, ymm1
              vmulps  ymm1, ymm6, ymm8
              vaddps  ymm1, ymm1, ymm5
              vaddps  ymm3, ymm1, ymm3
              vaddps  ymm5, ymm3, ymm3
              vmulps  ymm4, ymm12, ymm10
              vmulps  ymm0, ymm9, ymm8
              vaddps  ymm0, ymm0, ymm4
              vmulps  ymm2, ymm7, ymm11
              vaddps  ymm2, ymm0, ymm2
              vaddps  ymm6, ymm2, ymm2
              vmulps  ymm0, ymm8, ymm10
              vmulps  ymm1, ymm11, ymm11
              vsubps  ymm1, ymm0, ymm1
              vxorps  xmm0, xmm0, xmm0
              vsubps  ymm2, ymm0, ymm1
              vmulps  ymm4, ymm2, ymm5
              vmulps  ymm3, ymm6, ymm2
              vmulps  ymm0, ymm5, ymm5
              vmulps  ymm1, ymm6, ymm6
              vaddps  ymm2, ymm1, ymm0
              vdivps  ymm3, ymm3, ymm2
              vdivps  ymm0, ymm4, ymm2
              vsubps  ymm2, ymm15, ymm0
              vsubps  ymm5, ymm13, ymm3
              vmulps  ymm0, ymm5, ymmword ptr [rbp+20h]
              vmulps  ymm1, ymm2, ymm9
              vsubps  ymm4, ymm1, ymm0
              vmulps  ymm0, ymm5, ymmword ptr [rbp+0]
              vmulps  ymm2, ymm2, ymm7
              vsubps  ymm3, ymm0, ymm2
              vaddps  ymm1, ymm4, ymm4
              vaddps  ymm4, ymm3, ymm1
              vaddps  ymm0, ymm11, ymm11
              vaddps  ymm2, ymm0, ymm10
              vxorps  xmm0, xmm0, xmm0
              vaddps  ymm1, ymm2, ymm8
              vdivps  ymm3, ymm4, ymm1
              vmaxps  ymm0, ymm3, ymm0
              vminps  ymm6, ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
              vmulps  ymm1, ymm6, ymmword ptr [rbp+20h]
              vaddps  ymm5, ymm1, ymm15
              vmulps  ymm1, ymm6, ymmword ptr [rbp+40h]
              vaddps  ymm3, ymm1, ymmword ptr [rbp+80h]
              vsubps  ymm1, ymm3, ymm5
              vmulps  ymm3, ymm1, ymm6
              vmulps  ymm0, ymm9, ymm6
              vaddps  ymm4, ymm0, ymm13
              vmulps  ymm0, ymm12, ymm6
              vaddps  ymm2, ymm0, ymm14
              vsubps  ymm0, ymm2, ymm4
              vmulps  ymm2, ymm0, ymm6
              vaddps  ymm0, ymm3, ymm5
              vaddps  ymm4, ymm2, ymm4
              vmulps  ymm1, ymm0, ymm0
              vmulps  ymm0, ymm4, ymm4
              vaddps  ymm1, ymm1, ymm0
              vsqrtps ymm2, ymm1
              vminps  ymm3, ymm2, ymmword ptr [rcx]
              vmovups ymm1, ymmword ptr [rbp+60h]
              vmovups ymmword ptr [rcx], ymm3
            }
            _RCX += 8;
            __asm
            {
              vaddps  ymm1, ymm1, cs:__ymm@4100000041000000410000004100000041000000410000004100000041000000
              vmovups ymm4, ymmword ptr [rbp+80h]
              vmovups ymm5, ymmword ptr [rbp+120h]
              vmovups ymm7, ymmword ptr [rbp+0A0h]
              vmovups ymm8, ymmword ptr [rbp+0C0h]
              vmovups ymmword ptr [rbp+60h], ymm1
              vsubps  ymm6, ymm4, ymm15
            }
            --v121;
          }
          while ( v121 );
          __asm
          {
            vmovups ymm4, ymmword ptr [rbp+140h]
            vmovups ymm5, ymmword ptr [rbp+160h]
            vmovups ymm6, ymmword ptr [rbp+180h]
          }
        }
        ++_ER8;
        v110 += stride;
      }
      while ( _ER8 < _EDI );
    }
  }
  else
  {
    FontCache_OutlineDecompose_Line(fA, fC, data);
  }
  _R11 = &v212;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
FontCache_OutlineDecompose_ConicTo
==============
*/
__int64 FontCache_OutlineDecompose_ConicTo(const FT_Vector_ *control, const FT_Vector_ *to, void *user)
{
  __int64 result; 
  vec2_t fC; 
  vec2_t fB; 
  vec2_t fA; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm8, cs:__real@3c800000
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  xmm6, cs:__real@41780000
  }
  _RBX = user;
  __asm
  {
    vmovss  dword ptr [rsp+78h+fA], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm0, xmm8
    vmovss  dword ptr [rsp+78h+fA+4], xmm1
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, dword ptr [r8+1Ch]
    vsubss  xmm1, xmm0, xmm5
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, dword ptr [r8+14h]
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
    vsubss  xmm2, xmm7, xmm1
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+78h+fB+4], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rcx]
    vmulss  xmm0, xmm1, xmm8
    vsubss  xmm2, xmm0, xmm4
    vaddss  xmm3, xmm2, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm0, xmm8
    vsubss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+78h+fB], xmm3
    vsubss  xmm3, xmm7, xmm2
    vaddss  xmm0, xmm3, xmm6
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rsp+78h+fC+4], xmm0
    vsubss  xmm0, xmm2, xmm4
    vaddss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rsp+78h+fC], xmm3
  }
  FontCache_OutlineDecompose_Conic(&fA, &fB, &fC, (DecomposeData *)user);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+fC]
    vmovss  xmm1, dword ptr [rsp+78h+fC+4]
    vmovss  dword ptr [rbx], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
FontCache_OutlineDecompose_CubicTo
==============
*/
__int64 FontCache_OutlineDecompose_CubicTo(const FT_Vector_ *control1, const FT_Vector_ *control2, const FT_Vector_ *to, void *user)
{
  bool v91; 
  bool v92; 
  unsigned int v93; 
  __int64 v129; 
  __int64 result; 
  CubicBezierVec2 fA; 
  CubicBezierVec2 a; 
  CubicBezierVec2 b; 
  CubicBezierVec2 v163; 
  CubicBezierVec2 v164; 
  char v165; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovss  xmm8, cs:__real@3c800000
    vmovss  xmm6, cs:__real@41780000
    vmovss  xmm11, cs:__real@40400000
  }
  _ER10 = *((_DWORD *)user + 7);
  _R14 = (DecomposeData *)user;
  __asm { vmovd   xmm0, dword ptr [rcx+4] }
  LODWORD(_RAX) = *((_DWORD *)user + 6);
  __asm
  {
    vmovss  xmm9, dword ptr [r9]
    vmovss  xmm10, dword ptr [r9+4]
    vmovd   xmm4, dword ptr [r9+14h]
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, xmm8
    vcvtdq2ps xmm4, xmm4
  }
  v91 = (unsigned int)_RAX < _ER10;
  v92 = (_DWORD)_RAX == _ER10;
  LODWORD(_RAX) = (_DWORD)_RAX - _ER10;
  __asm
  {
    vmovd   xmm5, r10d
    vcvtdq2ps xmm5, xmm5
    vsubss  xmm1, xmm0, xmm5
    vmovd   xmm0, dword ptr [rcx]
    vcvtdq2ps xmm0, xmm0
    vmovd   xmm7, eax
    vcvtdq2ps xmm7, xmm7
    vsubss  xmm2, xmm7, xmm1
    vmulss  xmm1, xmm0, xmm8
    vmovd   xmm0, dword ptr [rdx+4]
    vaddss  xmm12, xmm2, xmm6
    vcvtdq2ps xmm0, xmm0
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm8
    vmovd   xmm0, dword ptr [rdx]
    vaddss  xmm13, xmm2, xmm6
    vsubss  xmm2, xmm1, xmm5
    vsubss  xmm3, xmm7, xmm2
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, xmm8
    vmovd   xmm0, dword ptr [r8+4]
    vsubss  xmm2, xmm1, xmm4
    vaddss  xmm15, xmm2, xmm6
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, xmm8
    vmovd   xmm0, dword ptr [r8]
    vsubss  xmm2, xmm1, xmm5
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm14, xmm3, xmm6
    vsubss  xmm3, xmm7, xmm2
    vsubss  xmm2, xmm1, xmm4
    vaddss  xmm7, xmm3, xmm6
    vaddss  xmm6, xmm2, xmm6
    vmulss  xmm0, xmm15, xmm11
    vsubss  xmm2, xmm6, xmm0
    vmulss  xmm1, xmm13, xmm11
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm5, xmm2, xmm9
    vmulss  xmm0, xmm14, xmm11
    vsubss  xmm3, xmm7, xmm0
    vmulss  xmm1, xmm12, xmm11
    vaddss  xmm2, xmm3, xmm1
    vsubss  xmm0, xmm2, xmm10
    vmulss  xmm4, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vcomiss xmm1, cs:__real@40800000
    vmovss  [rsp+190h+var_170], xmm7
    vmovss  [rsp+190h+var_16C], xmm6
    vmovss  dword ptr [rsp+190h+fA], xmm9
    vmovss  dword ptr [rsp+190h+fA+4], xmm10
    vmovss  dword ptr [rsp+190h+fB], xmm13
    vmovss  dword ptr [rsp+190h+fB+4], xmm12
    vmovss  dword ptr [rsp+190h+fC], xmm15
    vmovss  dword ptr [rsp+190h+fC+4], xmm14
    vmovss  [rsp+190h+var_150], xmm6
    vmovss  [rsp+190h+var_14C], xmm7
  }
  if ( v91 || v92 )
  {
    __asm
    {
      vmovss  xmm5, cs:__real@3f400000
      vaddss  xmm0, xmm15, xmm13
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm0, xmm6, xmm9
      vmulss  xmm1, xmm0, cs:__real@3e800000
      vsubss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm7, cs:__real@be800000
      vmulss  xmm0, xmm14, xmm5
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm10, cs:__real@be800000
      vmovss  dword ptr [rsp+190h+fB], xmm2
      vmulss  xmm2, xmm12, xmm5
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vmovss  dword ptr [rsp+190h+fB+4], xmm2
      vmovss  dword ptr [rsp+190h+fA], xmm9
      vmovss  dword ptr [rsp+190h+fA+4], xmm10
      vmovss  dword ptr [rsp+190h+fC], xmm6
      vmovss  dword ptr [rsp+190h+fC+4], xmm7
    }
    FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], (DecomposeData *)user);
  }
  else
  {
    Vec2CubicBezierSplitHalf(&fA, &a, &b);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  xmm8, cs:__real@3e800000
    }
    v91 = 0;
    v92 = 1;
    v93 = 0;
    _RDI = (float *)&a.p[1] + 1;
    do
    {
      __asm
      {
        vmovss  xmm12, dword ptr [rdi+4]
        vmovss  xmm14, dword ptr [rdi-4]
        vmovss  xmm5, dword ptr [rdi+0Ch]
        vmovss  xmm13, dword ptr [rdi+8]
        vmovss  xmm9, dword ptr [rdi-0Ch]
        vmovss  xmm15, dword ptr [rdi]
        vmovss  xmm6, dword ptr [rdi+10h]
        vmovss  xmm10, dword ptr [rdi-8]
        vmulss  xmm0, xmm12, xmm11
        vsubss  xmm2, xmm5, xmm0
        vmulss  xmm1, xmm14, xmm11
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm4, xmm2, xmm9
        vmulss  xmm0, xmm13, xmm11
        vsubss  xmm2, xmm6, xmm0
        vmulss  xmm1, xmm15, xmm11
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm2, xmm10
        vmulss  xmm3, xmm0, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vmulss  xmm3, xmm0, cs:__real@3f000000
        vcomiss xmm3, cs:__real@40800000
      }
      if ( v91 || v92 )
      {
        __asm
        {
          vaddss  xmm0, xmm14, xmm12
          vmulss  xmm3, xmm0, xmm7
          vaddss  xmm1, xmm9, xmm5
          vmulss  xmm2, xmm1, xmm8
          vsubss  xmm0, xmm3, xmm2
          vaddss  xmm1, xmm13, xmm15
          vmovss  dword ptr [rsp+190h+fB], xmm0
          vaddss  xmm0, xmm6, xmm10
          vmulss  xmm2, xmm0, xmm8
          vmulss  xmm3, xmm1, xmm7
          vsubss  xmm1, xmm3, xmm2
          vmovss  dword ptr [rsp+190h+fB+4], xmm1
          vmovss  dword ptr [rsp+190h+fA], xmm9
          vmovss  dword ptr [rsp+190h+fA+4], xmm10
          vmovss  dword ptr [rsp+190h+fC], xmm5
          vmovss  dword ptr [rsp+190h+fC+4], xmm6
        }
        FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], _R14);
      }
      else
      {
        Vec2CubicBezierSplitHalf(&a + v93, &v163, &v164);
        _RBX = (float *)&v163.p[1] + 1;
        v129 = 2i64;
        do
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx+0Ch]
            vmovss  xmm4, dword ptr [rbx-0Ch]
            vmovss  xmm0, dword ptr [rbx-4]
            vaddss  xmm1, xmm0, dword ptr [rbx+4]
            vmovss  xmm5, dword ptr [rbx+10h]
            vmovss  xmm6, dword ptr [rbx-8]
            vmovss  dword ptr [rsp+190h+fC], xmm2
            vaddss  xmm2, xmm4, xmm2
            vmulss  xmm0, xmm2, xmm8
            vmovss  xmm2, dword ptr [rbx+8]
            vmulss  xmm3, xmm1, xmm7
            vsubss  xmm1, xmm3, xmm0
            vaddss  xmm0, xmm2, dword ptr [rbx]
            vmovss  dword ptr [rsp+190h+fB], xmm1
            vaddss  xmm1, xmm6, xmm5
            vmulss  xmm2, xmm1, xmm8
            vmulss  xmm3, xmm0, xmm7
            vsubss  xmm0, xmm3, xmm2
            vmovss  dword ptr [rsp+190h+fB+4], xmm0
            vmovss  dword ptr [rsp+190h+fA], xmm4
            vmovss  dword ptr [rsp+190h+fA+4], xmm6
            vmovss  dword ptr [rsp+190h+fC+4], xmm5
          }
          FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], _R14);
          _RBX += 8;
          --v129;
        }
        while ( v129 );
      }
      ++v93;
      _RDI += 8;
      v91 = v93 < 2;
      v92 = v93 == 2;
    }
    while ( v93 < 2 );
    __asm
    {
      vmovss  xmm7, [rsp+190h+var_170]
      vmovss  xmm6, [rsp+190h+var_16C]
    }
  }
  __asm
  {
    vmovss  dword ptr [r14], xmm6
    vmovss  dword ptr [r14+4], xmm7
  }
  result = 0i64;
  _R11 = &v165;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
  return result;
}

/*
==============
FontCache_OutlineDecompose_Line
==============
*/

void __fastcall FontCache_OutlineDecompose_Line(const vec2_t *fA, const vec2_t *fB, DecomposeData *data, double _XMM3_8)
{
  float *dist; 
  __int64 v39; 
  __int64 v57; 
  int stride; 
  __int64 v67; 
  int v68; 
  __int64 v77; 
  char v110; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
  }
  _RBP = (unsigned __int64)&v110 & 0xFFFFFFFFFFFFFFE0ui64;
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm7, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm6, cs:__real@41800000
    vmovss  xmm8, dword ptr [rcx]
  }
  dist = data->dist;
  __asm
  {
    vmaxss  xmm0, xmm4, xmm5
    vaddss  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vminss  xmm1, xmm1, xmm0
    vcvttss2si edi, xmm1
    vminss  xmm2, xmm7, xmm8
    vsubss  xmm0, xmm2, xmm6
    vxorps  xmm3, xmm3, xmm3
    vmaxss  xmm0, xmm0, xmm3
    vcvttss2si eax, xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  v39 = (int)_RAX / 8;
  __asm
  {
    vmovaps xmm10, xmm5
    vmovaps xmm11, xmm4
    vmovaps xmm14, xmm8
    vcvtsi2ss xmm0, xmm0, eax
    vshufps xmm0, xmm0, xmm0, 0
    vinsertf128 ymm0, ymm0, xmm0, 1
    vaddps  ymm9, ymm0, cs:__ymm@40e0000040c0000040a000004080000040400000400000003f80000000000000
    vminss  xmm0, xmm4, xmm5
    vsubss  xmm1, xmm0, xmm6
    vmaxss  xmm1, xmm1, xmm3
    vcvttss2si r8d, xmm1
    vmaxss  xmm0, xmm7, xmm8
    vmovaps xmm15, xmm7
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vaddss  xmm2, xmm0, xmm6
    vminss  xmm0, xmm2, xmm1
    vcvttss2si eax, xmm0
  }
  v57 = ((int)_RAX + 7) / 8;
  __asm
  {
    vshufps xmm10, xmm10, xmm10, 0
    vshufps xmm11, xmm11, xmm11, 0
    vshufps xmm14, xmm14, xmm14, 0
    vinsertf128 ymm10, ymm10, xmm10, 1
    vshufps xmm15, xmm15, xmm15, 0
    vinsertf128 ymm11, ymm11, xmm11, 1
    vinsertf128 ymm14, ymm14, xmm14, 1
    vmovups ymmword ptr [rbp+20h], ymm10
    vinsertf128 ymm15, ymm15, xmm15, 1
    vmovups ymmword ptr [rbp+40h], ymm11
    vmovups ymmword ptr [rbp+0], ymm9
  }
  if ( _ER8 < _EDI )
  {
    stride = data->stride;
    v67 = v39;
    v68 = _ER8 * stride;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r8d
        vshufps xmm0, xmm0, xmm0, 0
        vinsertf128 ymm0, ymm0, xmm0, 1
        vmovups ymm6, ymm9
      }
      if ( v67 < v57 )
      {
        __asm
        {
          vmovups ymm13, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
          vsubps  ymm8, ymm10, ymm0
          vsubps  ymm0, ymm11, ymm0
          vsubps  ymm7, ymm0, ymm8
        }
        _RCX = &dist[8 * v67 + 8 * (v68 / 8)];
        v77 = v57 - v67;
        __asm
        {
          vmulps  ymm9, ymm7, ymm8
          vxorps  xmm10, xmm10, xmm10
          vmulps  ymm11, ymm7, ymm7
          vxorps  xmm12, xmm12, xmm12
        }
        do
        {
          _RCX += 8;
          __asm
          {
            vsubps  ymm5, ymm14, ymm6
            vsubps  ymm0, ymm15, ymm6
            vaddps  ymm6, ymm6, cs:__ymm@4100000041000000410000004100000041000000410000004100000041000000
            vsubps  ymm4, ymm0, ymm5
            vmulps  ymm0, ymm4, ymm5
            vaddps  ymm1, ymm0, ymm9
            vsubps  ymm3, ymm10, ymm1
            vmulps  ymm2, ymm4, ymm4
            vaddps  ymm0, ymm2, ymm11
            vdivps  ymm1, ymm3, ymm0
            vmaxps  ymm3, ymm1, ymm12
            vminps  ymm2, ymm3, ymm13
            vmulps  ymm0, ymm4, ymm2
            vmulps  ymm1, ymm7, ymm2
            vaddps  ymm3, ymm0, ymm5
            vaddps  ymm0, ymm1, ymm8
            vmulps  ymm1, ymm0, ymm0
            vmulps  ymm0, ymm3, ymm3
            vaddps  ymm1, ymm1, ymm0
            vsqrtps ymm2, ymm1
            vminps  ymm3, ymm2, ymmword ptr [rcx-20h]
            vmovups ymmword ptr [rcx-20h], ymm3
          }
          --v77;
        }
        while ( v77 );
        __asm
        {
          vmovups ymm9, ymmword ptr [rbp+0]
          vmovups ymm10, ymmword ptr [rbp+20h]
          vmovups ymm11, ymmword ptr [rbp+40h]
        }
      }
      ++_ER8;
      v68 += stride;
    }
    while ( _ER8 < _EDI );
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
FontCache_OutlineDecompose_LineTo
==============
*/

__int64 __fastcall FontCache_OutlineDecompose_LineTo(const FT_Vector_ *to, void *user, double _XMM2_8, double a4)
{
  __int64 result; 
  vec2_t fB; 
  vec2_t fA; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
  }
  _RBX = user;
  __asm
  {
    vmovss  dword ptr [rsp+68h+fA], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+68h+fA+4], xmm1
    vmulss  xmm1, xmm0, cs:__real@3c800000
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+1Ch]
    vsubss  xmm1, xmm1, xmm0
    vcvtsi2ss xmm2, xmm2, eax
    vsubss  xmm2, xmm2, xmm1
    vaddss  xmm7, xmm2, cs:__real@41780000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx]
    vmulss  xmm2, xmm0, cs:__real@3c800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdx+14h]
    vsubss  xmm2, xmm2, xmm1
    vaddss  xmm6, xmm2, cs:__real@41780000
    vmovss  dword ptr [rsp+68h+fB], xmm6
    vmovss  dword ptr [rsp+68h+fB+4], xmm7
  }
  FontCache_OutlineDecompose_Line(&fA, &fB, (DecomposeData *)user, a4);
  result = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx], xmm6
    vmovss  dword ptr [rbx+4], xmm7
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
FontCache_OutlineDecompose_MoveTo
==============
*/
__int64 FontCache_OutlineDecompose_MoveTo(const FT_Vector_ *to, void *user)
{
  _ER8 = *((_DWORD *)user + 7);
  __asm
  {
    vmovd   xmm0, dword ptr [rcx+4]
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@3c800000
  }
  _EAX = *((_DWORD *)user + 6) - _ER8;
  __asm
  {
    vmovd   xmm2, eax
    vcvtdq2ps xmm2, xmm2
    vmovd   xmm0, r8d
    vcvtdq2ps xmm0, xmm0
    vsubss  xmm1, xmm1, xmm0
    vmovd   xmm0, dword ptr [rcx]
    vsubss  xmm2, xmm2, xmm1
    vmovd   xmm1, dword ptr [rdx+14h]
    vaddss  xmm5, xmm2, cs:__real@41780000
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm3, xmm0, cs:__real@3c800000
    vcvtdq2ps xmm1, xmm1
    vsubss  xmm2, xmm3, xmm1
    vaddss  xmm0, xmm2, cs:__real@41780000
    vmovss  dword ptr [rdx], xmm0
    vmovss  dword ptr [rdx+4], xmm5
  }
  return 0i64;
}

/*
==============
FontCache_OutlineSpanCallback
==============
*/
void FontCache_OutlineSpanCallback(int y, int count, const FT_Span_ *spans, void *user)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int16 *p_len; 
  int v11; 
  __int64 v12; 

  v4 = count;
  if ( !spans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 880, ASSERT_TYPE_ASSERT, "(spans != 0)", (const char *)&queryFormat, "spans != NULL") )
    __debugbreak();
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 881, ASSERT_TYPE_ASSERT, "(userData != 0)", (const char *)&queryFormat, "userData != NULL") )
    __debugbreak();
  if ( !*((_QWORD *)user + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 882, ASSERT_TYPE_ASSERT, "(userData->pixels != 0)", (const char *)&queryFormat, "userData->pixels != NULL") )
    __debugbreak();
  if ( !*(_QWORD *)user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 883, ASSERT_TYPE_ASSERT, "(userData->packedBin != 0)", (const char *)&queryFormat, "userData->packedBin != NULL") )
    __debugbreak();
  if ( *((_DWORD *)user + 6) < 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 884, ASSERT_TYPE_ASSERT, "(userData->pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS)", (const char *)&queryFormat, "userData->pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS") )
    __debugbreak();
  v8 = v4;
  v9 = *((_QWORD *)user + 2) + (unsigned int)(**(_DWORD **)user + *((_DWORD *)user + 6) * (*((_DWORD *)user + 8) + *(_DWORD *)(*(_QWORD *)user + 4i64) - y - 1));
  if ( (int)v4 > 0 )
  {
    p_len = &spans->len;
    do
    {
      v11 = 0;
      v12 = v9 + (__int16)*(p_len - 1) - *((_DWORD *)user + 7);
      if ( *p_len )
      {
        do
        {
          if ( v12 + *((int *)user + 11) - *((_QWORD *)user + 2) >= (unsigned int)(*((_DWORD *)user + 6) << 11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 896, ASSERT_TYPE_ASSERT, "(&currentFontCachePixel[userData->channel] - userData->pixels < GLYPH_CACHE_HEIGHT * userData->pitch)", (const char *)&queryFormat, "&currentFontCachePixel[userData->channel] - userData->pixels < GLYPH_CACHE_HEIGHT * userData->pitch") )
            __debugbreak();
          ++v11;
          *(_BYTE *)(*((int *)user + 11) + v12++) = *((_BYTE *)p_len + 2);
        }
        while ( v11 < *p_len );
      }
      p_len += 3;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
FontCache_PackGlyph
==============
*/
__int64 FontCache_PackGlyph(int width, int height, PackedBin *packedBinOut)
{
  unsigned __int16 i; 
  unsigned __int64 v7; 
  __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int64 frameIndex; 
  __int64 result; 
  PackedBin *out; 
  PackedBin *outa; 
  __int64 v15; 
  int v16; 

  if ( (unsigned int)width > 0x100 )
  {
    v16 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 746, ASSERT_TYPE_ASSERT, "( 0 ) <= ( width ) && ( width ) <= ( FONTCACHE_TILE_SIZE )", "width not in [0, FONTCACHE_TILE_SIZE]\n\t%i not in [%i, %i]", width, 0i64, v16) )
      __debugbreak();
  }
  if ( (unsigned int)height > 0x100 )
  {
    LODWORD(v15) = 256;
    LODWORD(out) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 747, ASSERT_TYPE_ASSERT, "( 0 ) <= ( height ) && ( height ) <= ( FONTCACHE_TILE_SIZE )", "height not in [0, FONTCACHE_TILE_SIZE]\n\t%i not in [%i, %i]", out, 0i64, v15) )
      __debugbreak();
  }
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(out) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 748, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", out) )
      __debugbreak();
  }
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( !s_fcGlob.tileArray[i].full )
    {
      if ( OnlineBinPacker<256,256>::Pack(&s_fcGlob.tilePacker[i], width, height, 0, 1, packedBinOut) )
        goto LABEL_26;
      if ( width < 32 && height < 32 )
        s_fcGlob.tileArray[i].full = 1;
    }
  }
  v7 = -1i64;
  v8 = -1;
  v9 = 0;
  do
  {
    i = v9;
    frameIndex = s_fcGlob.tileArray[v9].frameIndex;
    if ( frameIndex >= v7 )
      i = v8;
    ++v9;
    v8 = i;
    if ( frameIndex >= v7 )
      frameIndex = v7;
    v7 = frameIndex;
  }
  while ( v9 < 0x40u );
  FontCache_TileFree(i);
  if ( !OnlineBinPacker<256,256>::Pack(&s_fcGlob.tilePacker[i], width, height, 0, 1, packedBinOut) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 786, ASSERT_TYPE_ASSERT, "(packingSucceeded)", (const char *)&queryFormat, "packingSucceeded") )
    __debugbreak();
LABEL_26:
  if ( i > 0x3Fu )
  {
    LODWORD(v15) = 63;
    LODWORD(outa) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 737, ASSERT_TYPE_ASSERT, "( 0 ) <= ( tileIndex ) && ( tileIndex ) <= ( FONTCACHE_TILE_COUNT - 1 )", "tileIndex not in [0, FONTCACHE_TILE_COUNT - 1]\n\t%i not in [%i, %i]", outa, 0i64, v15) )
      __debugbreak();
  }
  result = i;
  s_fcGlob.tileArray[i].frameIndex = s_fcGlob.frameIndex;
  packedBinOut->x += (i & 7) << 8;
  packedBinOut->y += i >> 3 << 8;
  return result;
}

/*
==============
FontCache_PreCacheFlush
==============
*/
void FontCache_PreCacheFlush(unsigned int requestedItemCount)
{
  __int64 size; 
  __int64 v4; 
  bool v6; 
  int fontCacheIsLocked; 
  char *v9; 
  __int64 v10; 
  char v11; 
  char v12; 

  size = requestedItemCount;
  if ( requestedItemCount > 0x10 )
  {
    size = 16i64;
    Com_PrintError(8, "Trying to flush too many glyphs per frame from precache, max %d, requested %d\n", 16i64, requestedItemCount);
  }
  FontCache_Lock();
  if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( (unsigned int)size > s_fcGlob.precacheQueue.size )
  {
    if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_fcGlob.precacheQueue.size;
  }
  if ( (_DWORD)size )
  {
    _RBX = &v11;
    _R12 = s_fcGlob.precacheQueue.entries;
    v4 = (unsigned int)size;
    do
    {
      if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_fcGlob.precacheQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      _RAX = 2i64 * s_fcGlob.precacheQueue.start;
      v6 = !s_fcGlob.precacheQueue.cleared;
      __asm
      {
        vmovups xmm0, xmmword ptr [r12+rax*8]
        vmovups xmmword ptr [rbx], xmm0
      }
      if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_fcGlob.precacheQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      --s_fcGlob.precacheQueue.size;
      _RBX += 16;
      s_fcGlob.precacheQueue.start = ((unsigned int)s_fcGlob.precacheQueue.start + 1) % 0xC00;
      --v4;
    }
    while ( v4 );
  }
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v10) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v10) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
  if ( (_DWORD)size )
  {
    v9 = &v12;
    do
    {
      R_GetCharacterGlyph(*((GfxFont **)v9 - 1), *(_DWORD *)v9, *((_DWORD *)v9 + 1), NULL);
      v9 += 16;
      --size;
    }
    while ( size );
  }
}

/*
==============
FontCache_PreCacheGlyphs
==============
*/
char FontCache_PreCacheGlyphs(GfxFont *font, int height, const char *chars)
{
  const char *v4; 
  const char *v6; 
  char i; 
  unsigned int v8; 
  int v9; 
  unsigned __int16 size; 
  __int64 v11; 
  int fontCacheIsLocked; 
  __int64 v14; 

  v4 = chars;
  if ( !chars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2294, ASSERT_TYPE_ASSERT, "(chars)", (const char *)&queryFormat, "chars") )
    __debugbreak();
  v6 = NULL;
  FontCache_Lock();
  for ( i = *v4; *v4; i = *v4 )
  {
    if ( i < 0 )
    {
      if ( (i & 0xE0) == 0xC0 )
      {
        v8 = v4[1] & 0x7F | ((i & 0x1F) << 6);
        if ( v8 < 0x80 )
          goto LABEL_38;
        v9 = 2;
      }
      else if ( (i & 0xF0) == 0xE0 )
      {
        v8 = v4[2] & 0x7F | ((v4[1] & 0x7F | ((i & 0xF) << 6)) << 6);
        if ( v8 - 2048 > 0xCFFF && v8 < 0xE000 )
          goto LABEL_38;
        v9 = 3;
      }
      else
      {
        if ( (i & 0xF8) != 0xF0 || (v8 = v4[3] & 0x7F | ((v4[2] & 0x7F | ((v4[1] & 0x7F | ((i & 7) << 6)) << 6)) << 6), v8 - 0x10000 > 0xFFFFE) )
        {
LABEL_38:
          v6 = "Encountered an error trying to process UTF-8 string in FontCache_PreCacheGlyphs()\n";
          break;
        }
        v9 = 4;
      }
    }
    else
    {
      v8 = (unsigned __int8)i;
      v9 = 1;
    }
    if ( v8 > 0xFFFF )
      v8 = 32;
    if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( s_fcGlob.precacheQueue.size == 3072 )
    {
      v6 = "Fontcache warm up queue is full\n";
      break;
    }
    if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_fcGlob.precacheQueue.size;
    if ( s_fcGlob.precacheQueue.size >= 0xC00u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_fcGlob.precacheQueue.size = size + 1;
    if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 91, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !s_fcGlob.precacheQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 92, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    v11 = (s_fcGlob.precacheQueue.start + (unsigned int)s_fcGlob.precacheQueue.size - 1) % 0xC00;
    s_fcGlob.precacheQueue.entries[v11].font = font;
    s_fcGlob.precacheQueue.entries[v11].pixelHeight = height;
    s_fcGlob.precacheQueue.entries[v11].charCode = v8;
    v4 += v9;
  }
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v14) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v14) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
  if ( !v6 )
    return 1;
  Com_PrintError(8, (const char *)&queryFormat, v6);
  return 0;
}

/*
==============
FontCache_RenderDebug
==============
*/

void __fastcall FontCache_RenderDebug(__int64 a1, double _XMM1_8)
{
  bool *p_full; 
  unsigned int i; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  Material *material; 
  vec4_t color; 
  vec4_t v52; 
  vec2_t verts; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( r_font_cache_debug_display->current.enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
      vmovss  xmm3, cs:__real@44000000; h
      vmovups xmmword ptr [rsp+0E8h+var_98], xmm0
      vmovaps xmmword ptr [r11-18h], xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    material = rgp.whiteMaterial;
    __asm
    {
      vdivss  xmm1, xmm1, xmm0
      vmovaps xmmword ptr [r11-38h], xmm9
      vmulss  xmm9, xmm1, cs:__real@44000000
      vmovss  [rsp+0E8h+var_B0], xmm7
      vmovaps xmmword ptr [r11-48h], xmm10
      vmovss  xmm10, cs:__real@43480000
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+var_C0], xmm6
      vmovaps xmm2, xmm9; w
      vmovaps xmm1, xmm10; y
      vmovaps xmm0, xmm10; x
      vmovss  [rsp+0E8h+var_C8], xmm6
    }
    R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v42, v44, v46, v48, &color, material);
    __asm
    {
      vmovss  xmm3, cs:__real@44000000; h
      vmovss  [rsp+0E8h+var_B0], xmm7
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+var_C0], xmm6
      vmovaps xmm2, xmm9; w
      vmovaps xmm1, xmm10; y
      vmovaps xmm0, xmm10; x
      vmovss  [rsp+0E8h+var_C8], xmm6
    }
    R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v43, v45, v47, v49, &colorWhite, rgp.fontMaterial[0]);
    __asm
    {
      vmovss  xmm6, cs:__real@42800000
      vmovaps xmm9, [rsp+0E8h+var_38]
    }
    p_full = &s_fcGlob.tileArray[0].full;
    __asm { vmovaps xmm7, [rsp+0E8h+var_28] }
    for ( i = 0; i < 0x40; ++i )
    {
      if ( *p_full )
      {
        __asm
        {
          vmovups xmm2, cs:__xmm@3e99999a00000000000000003f800000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm4, xmm1, xmm10
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm3, xmm1, xmm10
          vaddss  xmm1, xmm3, xmm6
          vaddss  xmm0, xmm4, xmm6
          vmovss  [rsp+0E8h+var_64], xmm1
          vmovss  [rsp+0E8h+var_5C], xmm1
          vmovss  dword ptr [rsp+0E8h+verts], xmm4
          vmovss  dword ptr [rsp+0E8h+verts+4], xmm3
          vmovss  [rsp+0E8h+var_70], xmm0
          vmovss  [rsp+0E8h+var_6C], xmm3
          vmovss  [rsp+0E8h+var_68], xmm0
          vmovss  [rsp+0E8h+var_60], xmm4
          vmovups xmmword ptr [rsp+0E8h+var_88], xmm2
        }
        R_AddCmdDrawQuadPic(&verts, &v52, rgp.whiteMaterial);
      }
      p_full += 16;
    }
    __asm
    {
      vmovaps xmm10, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_18]
    }
  }
}

/*
==============
FontCache_SetCacheClearCallback
==============
*/
void FontCache_SetCacheClearCallback(void (*callback)())
{
  s_fcGlob.fontCacheClearCallback = callback;
}

/*
==============
FontCache_Shutdown
==============
*/
void FontCache_Shutdown(void)
{
  if ( s_fcGlob.fontcacheImage )
  {
    Image_Release(s_fcGlob.fontcacheImage);
    rgp.fontCacheImage = NULL;
    s_fcGlob.fontcacheImage = NULL;
  }
  j_FT_Done_Library(s_ftLibrary);
  s_ftLibrary = NULL;
  ntl::nxheap::clear(&s_ftHeap.m_heap);
}

/*
==============
FontCache_TileDeleteGlyphs
==============
*/
__int64 FontCache_TileDeleteGlyphs(unsigned __int16 tile)
{
  unsigned __int16 nextFreeGlyphIndex; 
  unsigned __int16 v3; 
  unsigned __int16 v4; 
  __int64 v5; 
  CachedGlyph *v7; 
  unsigned __int16 *v9; 
  CachedGlyph *i; 
  unsigned __int16 next; 
  unsigned __int16 *v12; 
  CachedGlyph *v13; 
  CachedGlyph *v14; 
  __int64 v19; 

  nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  if ( s_fcGlob.nextFreeGlyphIndex >= 0x2400u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 609, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex < MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex < MAX_GLYPHS") )
      __debugbreak();
    nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  }
  if ( tile >= 0x40u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 610, ASSERT_TYPE_ASSERT, "(tile < FONTCACHE_TILE_COUNT)", (const char *)&queryFormat, "tile < FONTCACHE_TILE_COUNT") )
      __debugbreak();
    nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  }
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v19) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 611, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v19) )
      __debugbreak();
    nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  }
  v3 = 1;
  v4 = nextFreeGlyphIndex;
  while ( v3 < nextFreeGlyphIndex )
  {
    v5 = v3;
    if ( s_fcGlob.cachedGlyphs[v5].tile == tile )
    {
      _R8 = &s_fcGlob.cachedGlyphs[v5];
      v7 = NULL;
      _RDX = &s_fcGlob.cachedGlyphs[(unsigned __int16)(nextFreeGlyphIndex - 1)];
      v9 = &s_fcGlob.glyphHashEntries[s_fcGlob.cachedGlyphs[v5].hash];
      for ( i = &s_fcGlob.cachedGlyphs[*v9]; i != _R8; i = &s_fcGlob.cachedGlyphs[i->next] )
        v7 = i;
      next = _R8->next;
      if ( v7 )
        v7->next = next;
      else
        *v9 = next;
      if ( _R8 != _RDX )
      {
        v12 = &s_fcGlob.glyphHashEntries[_RDX->hash];
        v13 = &s_fcGlob.cachedGlyphs[*v12];
        if ( v13 == _RDX )
          goto LABEL_25;
        do
        {
          v14 = v13;
          v13 = &s_fcGlob.cachedGlyphs[v13->next];
        }
        while ( v13 != _RDX );
        if ( !v14 )
LABEL_25:
          *v12 = v3;
        else
          v14->next = v3;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdx]
          vmovups ymmword ptr [r8], ymm0
          vmovups xmm1, xmmword ptr [rdx+20h]
          vmovups xmmword ptr [r8+20h], xmm1
          vmovsd  xmm0, qword ptr [rdx+30h]
          vmovsd  qword ptr [r8+30h], xmm0
        }
      }
      nextFreeGlyphIndex = --s_fcGlob.nextFreeGlyphIndex;
    }
    else
    {
      ++v3;
    }
  }
  return v4 - (unsigned int)nextFreeGlyphIndex;
}

/*
==============
FontCache_TileFree
==============
*/
bool FontCache_TileFree(unsigned __int16 tile)
{
  int v2; 
  __int64 v3; 
  int v4; 
  char v5; 
  int v6; 
  int v7; 
  int v8; 
  GfxImage *fontcacheImage; 
  unsigned __int64 data; 
  int width; 
  __int64 v13; 

  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 690, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( tile == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 691, ASSERT_TYPE_ASSERT, "(tile != FONTCACHE_INVALID_TILE_INDEX)", (const char *)&queryFormat, "tile != FONTCACHE_INVALID_TILE_INDEX") )
    __debugbreak();
  if ( s_fcGlob.frameIndex - s_fcGlob.tileArray[tile].frameIndex <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 692, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.frameIndex - s_fcGlob.tileArray[tile].frameIndex ) > 2 )", "Trying to free a glyph tile in use.  Possibly need to increase MAX_GLYPHS?") )
    __debugbreak();
  v2 = FontCache_TileDeleteGlyphs(tile);
  v3 = tile;
  v4 = v2;
  *(_QWORD *)&s_fcGlob.tilePacker[v3].Skyline[0].X = 0i64;
  s_fcGlob.tilePacker[v3].Skyline[0].Width = 256;
  s_fcGlob.tilePacker[v3].SkylineSegmentCount = 1;
  s_fcGlob.tileArray[tile].full = 0;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v13) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 652, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v13) )
      __debugbreak();
  }
  v5 = tile;
  v6 = tile >> 3 << 8;
  v7 = (v5 & 7) << 8;
  if ( (unsigned int)v6 > 0x800 )
  {
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 658, ASSERT_TYPE_ASSERT, "( 0 ) <= ( yOffset ) && ( yOffset ) <= ( GLYPH_CACHE_HEIGHT )", "yOffset not in [0, GLYPH_CACHE_HEIGHT]\n\t%i not in [%i, %i]", v13, 0i64, 2048) )
      __debugbreak();
  }
  v8 = v6 + 256;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v13) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 469, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v13) )
      __debugbreak();
  }
  fontcacheImage = s_fcGlob.fontcacheImage;
  if ( !s_fcGlob.fontcacheImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (fontcacheImage->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  data = fontcacheImage->pixels.streamedDataHandle.data;
  width = s_fcGlob.fontcacheImage->width;
  do
    memset_0((void *)(data + (unsigned int)(v7 + width * v6++)), 0, 0x100ui64);
  while ( v6 < v8 );
  return v4 != 0;
}

/*
==============
FontCache_TileGetLRU
==============
*/
__int16 FontCache_TileGetLRU()
{
  unsigned __int16 v0; 
  __int16 v1; 
  unsigned __int64 v2; 
  unsigned __int64 frameIndex; 
  __int16 result; 

  v0 = 0;
  v1 = -1;
  v2 = -1i64;
  do
  {
    frameIndex = s_fcGlob.tileArray[v0].frameIndex;
    result = v0;
    if ( frameIndex >= v2 )
      result = v1;
    ++v0;
    v1 = result;
    if ( frameIndex >= v2 )
      frameIndex = v2;
    v2 = frameIndex;
  }
  while ( v0 < 0x40u );
  return result;
}

/*
==============
FontCache_TileUpdateLRU
==============
*/
void FontCache_TileUpdateLRU(const unsigned __int16 tileIndex)
{
  int v2; 
  int v3; 

  if ( tileIndex > 0x3Fu )
  {
    v3 = 63;
    v2 = tileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 737, ASSERT_TYPE_ASSERT, "( 0 ) <= ( tileIndex ) && ( tileIndex ) <= ( FONTCACHE_TILE_COUNT - 1 )", "tileIndex not in [0, FONTCACHE_TILE_COUNT - 1]\n\t%i not in [%i, %i]", v2, 0i64, v3) )
      __debugbreak();
  }
  s_fcGlob.tileArray[tileIndex].frameIndex = s_fcGlob.frameIndex;
}

/*
==============
FontCache_Unlock
==============
*/
void FontCache_Unlock()
{
  int fontCacheIsLocked; 
  int v1; 

  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    v1 = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v1) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
}

