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
  __m256 y; 

  y = p0->y;
  _YMM1 = _mm256_sub_ps(y, p1->y);
  __asm { vcmpneq_oqps ymm3, ymm1, ymm0 }
  _mm256_div_ps(y, _YMM1);
  _YMM1 = _ymm_bf800000bf800000bf800000bf800000bf800000bf800000bf800000bf800000;
  __asm { vblendvps ymm0, ymm1, ymm2, ymm3 }
  *(__m256i *)result = _YMM0;
}

/*
==============
Float8x2IntersectLineCount
==============
*/
void Float8x2IntersectLineCount(float8x2 const &,float8x2 const &,__m256 &)
{
	//Failed decompiling
}

/*
==============
Float8x2IntersectQuadraticBezierCount
==============
*/
void Float8x2IntersectQuadraticBezierCount(float8x2 const &,float8x2 const &,float8x2 const &,__m256 &)
{
	//Failed decompiling
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
  CachedGlyph *v5; 
  unsigned __int16 v6; 
  __int64 v7; 

  v3 = hash;
  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1492, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1493, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  nextFreeGlyphIndex = s_fcGlob.nextFreeGlyphIndex;
  v5 = &s_fcGlob.cachedGlyphs[s_fcGlob.nextFreeGlyphIndex];
  *(__m256i *)&v5->font = *(__m256i *)&glyph->font;
  *(_OWORD *)&v5->next = *(_OWORD *)&glyph->next;
  *(double *)&v5->dx = *(double *)&glyph->dx;
  v6 = s_fcGlob.glyphHashEntries[v3];
  if ( v6 )
  {
    v7 = v6;
    v5->next = s_fcGlob.cachedGlyphs[v7].next;
    s_fcGlob.cachedGlyphs[v7].next = nextFreeGlyphIndex;
  }
  else
  {
    s_fcGlob.glyphHashEntries[v3] = nextFreeGlyphIndex;
  }
  FontCache_TileUpdateLRU(v5->tile);
  ++s_fcGlob.nextFreeGlyphIndex;
  return v5;
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
  const CachedGlyph *CachedGlyph_Internal_Actual; 
  CachedGlyph *v15; 
  CachedGlyph *v16; 
  int fontCacheIsLocked; 
  __int64 v19; 
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
      LODWORD(v19) = s_fcGlob.fontCacheIsLocked;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 2065, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v19) )
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
  CachedGlyph_Internal_Actual = FontCache_GetCachedGlyph_Internal_Actual(ftFace, height, charCode, fontCacheFXFlags, v11);
  v12 = CachedGlyph_Internal_Actual;
  if ( CachedGlyph_Internal_Actual )
  {
    v15 = glyphOut;
    if ( glyphOut )
    {
      *(__m256i *)&glyphOut->font = *(__m256i *)&CachedGlyph_Internal_Actual->font;
      *(_OWORD *)&v15->next = *(_OWORD *)&CachedGlyph_Internal_Actual->next;
      *(double *)&v15->dx = *(double *)&CachedGlyph_Internal_Actual->dx;
    }
    v13 = 1;
    goto LABEL_28;
  }
LABEL_22:
  if ( v11 )
  {
    if ( s_fcGlob.nextFreeGlyphIndex <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1978, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex > 1)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex > 1") )
      __debugbreak();
    v16 = glyphOut;
    if ( glyphOut )
    {
      *(__m256i *)&glyphOut->font = *(__m256i *)&s_fcGlob.cachedGlyphs[1].font;
      *(_OWORD *)&v16->next = *(_OWORD *)&s_fcGlob.cachedGlyphs[1].next;
      *(double *)&v16->dx = *(double *)&s_fcGlob.cachedGlyphs[1].dx;
    }
  }
LABEL_28:
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v19) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v19) )
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
  int v6; 
  int v7; 
  unsigned __int8 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 next; 
  CachedGlyph *v13; 
  unsigned int Char_Index; 
  unsigned int v15; 
  unsigned __int16 LRU; 
  const CachedGlyph *CachedGlyph_Internal_Actual; 
  __int128 v19; 
  double v20; 
  float v21; 
  __int16 v22; 
  int *v23; 
  unsigned int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  int *v29; 
  int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  unsigned __int16 v34; 
  unsigned __int16 v35; 
  __int16 v36; 
  unsigned int v37; 
  int v38; 
  __int128 v40; 
  __int64 v41; 
  __int16 v42; 
  __int16 v43; 
  void (__fastcall *v44)(int, int, const FT_Span_ *, void *); 
  __int64 v45; 
  __int64 v47; 
  int (__fastcall *bit_test)(int, int, void *); 
  __int64 i; 
  int y; 
  int v51; 
  char *v53; 
  char *v54; 
  __int64 v55; 
  char *v56; 
  __int128 v60; 
  __int128 v67; 
  __int128 v72; 
  __int128 v77; 
  __int128 v81; 
  __int128 v86; 
  char *v89; 
  char *v90; 
  __int64 v91; 
  __int128 v95; 
  __int64 v99; 
  __int64 v100; 
  unsigned __int8 v101; 
  unsigned __int16 v103; 
  unsigned int hash; 
  int v106; 
  CachedGlyph glyph; 
  unsigned int v108; 
  unsigned int v109; 
  PackedBin *p_packedBinOut; 
  void *pixels; 
  unsigned int pitch; 
  int v113; 
  int v114; 
  int v115; 
  unsigned int v116; 
  int v117; 
  PackedBin packedBinOut; 
  FT_Raster_Params_ params; 
  FT_Outline_Funcs_ req; 
  FT_Size_RequestRec_ v121; 

  v6 = charCode;
  v7 = height;
  if ( s_fcGlob.fontCacheIsLocked != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1533, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", s_fcGlob.fontCacheIsLocked) )
    __debugbreak();
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1534, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  v101 = 0;
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1542, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( v7 >= 64 || (fxFlags & 1) != 0 )
  {
    v101 = 1;
    fxFlags = FONT_CACHE_FX_DISTANCE_FIELD;
  }
  v9 = truncate_cast<unsigned char,enum FontCacheFXFlags>(fxFlags);
  v10 = FontCache_GetHash(font, v7, v6, v9);
  v11 = v10;
  hash = v10;
  if ( v10 >= 0x9000 )
  {
    LODWORD(v99) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1552, ASSERT_TYPE_ASSERT, "(unsigned)( hash ) < (unsigned)( MAX_GLYPH_CACHE_HASHTABLE_ENTRIES )", "hash doesn't index MAX_GLYPH_CACHE_HASHTABLE_ENTRIES\n\t%i not in [0, %i)", v99, 36864) )
      __debugbreak();
  }
  next = s_fcGlob.glyphHashEntries[v11];
  if ( s_fcGlob.nextFreeGlyphIndex > 0x2400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1557, ASSERT_TYPE_ASSERT, "(s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS)", (const char *)&queryFormat, "s_fcGlob.nextFreeGlyphIndex <= MAX_GLYPHS") )
    __debugbreak();
  if ( !next )
  {
LABEL_25:
    Char_Index = j_FT_Get_Char_Index((FT_FaceRec_ *)font, v6);
    if ( !Char_Index )
    {
      if ( !allowMissingGlyph )
        return 0i64;
      Char_Index = j_FT_Get_Char_Index((FT_FaceRec_ *)font, 0x25A1u);
    }
    v15 = 0;
    LOBYTE(LRU) = 0;
    if ( s_fcGlob.nextFreeGlyphIndex >= 0x23FEu )
    {
      do
      {
        if ( v15 >= 0x64 )
        {
          LODWORD(v99) = 100;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1598, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to free any glyphs after %d attempts!  This should not happen...", v99) )
            __debugbreak();
          LRU = ((_BYTE)LRU + 1) & 0x3F;
        }
        else
        {
          LRU = FontCache_TileGetLRU();
        }
        if ( !FontCache_TileFree(LRU) )
          ++v15;
        if ( LRU > 0x3Fu )
        {
          LODWORD(v100) = 63;
          LODWORD(v99) = LRU;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 737, ASSERT_TYPE_ASSERT, "( 0 ) <= ( tileIndex ) && ( tileIndex ) <= ( FONTCACHE_TILE_COUNT - 1 )", "tileIndex not in [0, FONTCACHE_TILE_COUNT - 1]\n\t%i not in [%i, %i]", v99, 0i64, v100) )
            __debugbreak();
        }
        s_fcGlob.tileArray[LRU].frameIndex = s_fcGlob.frameIndex;
      }
      while ( s_fcGlob.nextFreeGlyphIndex >= 0x23FEu );
      v7 = height;
      v6 = charCode;
    }
    if ( !v101 || v7 == 64 )
    {
      *(_QWORD *)&v121.type = 1i64;
      v121.height = v7 << 6;
      *(_QWORD *)&v121.horiResolution = 0i64;
      j_FT_Request_Size((FT_FaceRec_ *)font, &v121);
      v28 = 40;
      if ( (*((_BYTE *)font + 8) & 4) != 0 || v101 )
        v28 = 8;
      if ( !j_FT_Load_Glyph((FT_FaceRec_ *)font, Char_Index, v28) )
      {
        v29 = (int *)*((_QWORD *)font + 15);
        v113 = v29[14] >> 6;
        v30 = v29[12] >> 6;
        v115 = v30 + v113;
        v31 = v30 + 32;
        v114 = v29[15] >> 6;
        v32 = v29[13] >> 6;
        v116 = v114 - v32;
        p_packedBinOut = &packedBinOut;
        v117 = 0;
        v33 = v32 + 32;
        if ( !v101 )
          v33 = v32;
        if ( !v101 )
          v31 = v30;
        v108 = v33;
        v109 = v31;
        v34 = FontCache_PackGlyph(v31 + 4, v33 + 4, &packedBinOut);
        packedBinOut.x += 2;
        packedBinOut.y += 2;
        v103 = v34;
        v106 = 2 * (v101 ^ 1);
        glyph.dx = truncate_cast<short,long>(*(_DWORD *)(*((_QWORD *)font + 15) + 88i64) / 64);
        glyph.fontHeight = truncate_cast<unsigned short,int>(v7);
        glyph.fxFlags = truncate_cast<unsigned char,enum FontCacheFXFlags>(fxFlags);
        v35 = truncate_cast<unsigned short,int>(v6);
        v36 = 2 * (v101 ^ 1);
        v37 = v108;
        glyph.letter = v35;
        glyph.glyphIndex = Char_Index;
        glyph.next = 0;
        glyph.pixelHeight = truncate_cast<unsigned short,int>(v108 + 4 * (v101 ^ 1));
        glyph.pixelWidth = truncate_cast<unsigned short,int>(v31 + 4 * (v101 ^ 1));
        glyph.s0 = (float)(packedBinOut.x - v106) * 0.00048828125;
        glyph.s1 = (float)(int)(v31 + packedBinOut.x + v106) * 0.00048828125;
        v38 = v113 - v106;
        glyph.font = font;
        v40 = 0i64;
        *(float *)&v40 = (float)(int)(v108 + packedBinOut.y + v106);
        _XMM0 = v40;
        glyph.t0 = (float)(packedBinOut.y - v106) * 0.00048828125;
        glyph.t1 = *(float *)&v40 * 0.00048828125;
        if ( (unsigned int)(v113 - v106 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)(v113 - v36), "signed", v38) )
          __debugbreak();
        v41 = *((_QWORD *)font + 16);
        glyph.x0 = v113 - v106;
        v42 = *(_DWORD *)(v41 + 36) / 64 - v36;
        glyph.tile = v103;
        v24 = hash;
        v43 = v42 - v7 - v114;
        glyph.y0 = v43;
        glyph.hash = hash;
        FontCache_GetPixels(&pixels, &pitch);
        if ( !pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1745, ASSERT_TYPE_ASSERT, "(renderUserData.pixels != 0)", (const char *)&queryFormat, "renderUserData.pixels != NULL") )
          __debugbreak();
        if ( pitch < 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1746, ASSERT_TYPE_ASSERT, "(renderUserData.pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS)", (const char *)&queryFormat, "renderUserData.pitch >= GLYPH_CACHE_WIDTH * GLYPH_CACHE_CHANNELS") )
          __debugbreak();
        v44 = FontCache_OutlineSpanCallback;
        *(_QWORD *)&params.flags = 7i64;
        params.target = NULL;
        params.source = NULL;
        if ( v101 )
          v44 = FontCache_DistFieldOutlineSpanCallback;
        params.bit_set = NULL;
        params.gray_spans = v44;
        params.clip_box.xMin = v113;
        params.clip_box.xMax = v115;
        params.clip_box.yMin = v116;
        params.clip_box.yMax = v114;
        params.user = &p_packedBinOut;
        v45 = *((_QWORD *)font + 15);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&params.black_spans = _XMM0;
        if ( *(_DWORD *)(v45 + 96) != 1869968492 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 1772, ASSERT_TYPE_ASSERT, "(face->glyph->format == FT_GLYPH_FORMAT_OUTLINE)", (const char *)&queryFormat, "face->glyph->format == FT_GLYPH_FORMAT_OUTLINE") )
          __debugbreak();
        j_FT_Outline_Render(s_ftLibrary, (FT_Outline_ *)(*((_QWORD *)font + 15) + 152i64), &params);
        if ( v101 )
        {
          *(_QWORD *)&req.shift = 0i64;
          v47 = (int)v109;
          req.move_to = FontCache_OutlineDecompose_MoveTo;
          params.source = (const void *)__PAIR64__(v108, v109);
          req.line_to = FontCache_OutlineDecompose_LineTo;
          req.conic_to = FontCache_OutlineDecompose_ConicTo;
          req.cubic_to = FontCache_OutlineDecompose_CubicTo;
          *(&params.flags + 1) = v113;
          params.flags = v115;
          params.gray_spans = (void (__fastcall *)(int, int, const FT_Span_ *, void *))__PAIR64__(v116, v114);
          LODWORD(params.black_spans) = (v109 + 7) & 0xFFFFFFF8;
          bit_test = (int (__fastcall *)(int, int, void *))ntl::nxheap::allocate(&s_ftHeap.m_heap, 4 * (int)v108 * (__int64)SLODWORD(params.black_spans), 0x20ui64, 1);
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
          if ( (int)(v108 * LODWORD(params.black_spans)) > 0 )
          {
            for ( i = (int)(v108 * LODWORD(params.black_spans)); i; --i )
            {
              *(_DWORD *)bit_test = 1157627904;
              bit_test = (int (__fastcall *)(int, int, void *))((char *)bit_test + 4);
            }
          }
          j_FT_Outline_Decompose((FT_Outline_ *)(*((_QWORD *)font + 15) + 152i64), &req, &params);
          y = packedBinOut.y;
          v51 = packedBinOut.y;
          if ( packedBinOut.y < (int)(packedBinOut.y + v37) )
          {
            _XMM4 = LODWORD(FLOAT_8_0);
            do
            {
              v53 = (char *)pixels + packedBinOut.x + pitch * v51;
              v54 = (char *)params.bit_test + 4 * LODWORD(params.black_spans) * (v51 - y);
              v55 = 0i64;
              if ( v47 >= 4 )
              {
                v56 = v54 + 8;
                do
                {
                  v56 += 16;
                  _XMM0 = 0x80u;
                  __asm
                  {
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                  }
                  v60 = _XMM0;
                  *(float *)&v60 = (float)(*(float *)&_XMM0 * *((float *)v56 - 6)) + 128.0;
                  _XMM2 = v60;
                  __asm
                  {
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                  }
                  v53[v55] = (int)*(float *)&_XMM0;
                  _XMM0 = 0x80u;
                  __asm
                  {
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                  }
                  v67 = _XMM0;
                  *(float *)&v67 = (float)(*(float *)&_XMM0 * *((float *)v56 - 5)) + 128.0;
                  _XMM2 = v67;
                  __asm
                  {
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                  }
                  v53[v55 + 1] = (int)*(float *)&_XMM0;
                  v72 = LODWORD(FLOAT_8_0);
                  *(float *)&v72 = 8.0 * *((float *)v56 - 4);
                  _XMM3 = v72;
                  _XMM0 = 0x80u;
                  __asm
                  {
                    vpcmpgtd xmm1, xmm0, xmm1
                    vblendvps xmm1, xmm3, xmm2, xmm1
                  }
                  v77 = _XMM1;
                  *(float *)&v77 = *(float *)&_XMM1 + 128.0;
                  _XMM0 = v77;
                  __asm
                  {
                    vminss  xmm2, xmm0, xmm6
                    vmaxss  xmm1, xmm2, xmm7
                  }
                  v53[v55 + 2] = (int)*(float *)&_XMM1;
                  v81 = LODWORD(FLOAT_8_0);
                  *(float *)&v81 = 8.0 * *((float *)v56 - 3);
                  _XMM3 = v81;
                  _XMM0 = 0x80u;
                  __asm
                  {
                    vpcmpgtd xmm1, xmm0, xmm1
                    vblendvps xmm1, xmm3, xmm2, xmm1
                  }
                  v86 = _XMM1;
                  *(float *)&v86 = *(float *)&_XMM1 + 128.0;
                  _XMM0 = v86;
                  __asm
                  {
                    vminss  xmm2, xmm0, xmm6
                    vmaxss  xmm1, xmm2, xmm7
                  }
                  v53[v55 + 3] = (int)*(float *)&_XMM1;
                  v55 += 4i64;
                }
                while ( v55 < v47 - 3 );
                y = packedBinOut.y;
              }
              if ( v55 < v47 )
              {
                v89 = &v54[4 * v55];
                v90 = &v53[v55];
                v91 = v47 - v55;
                do
                {
                  ++v90;
                  v89 += 4;
                  _XMM0 = 0x80u;
                  __asm
                  {
                    vpcmpgtd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm4, xmm8, xmm2
                  }
                  v95 = _XMM0;
                  *(float *)&v95 = (float)(*(float *)&_XMM0 * *((float *)v89 - 1)) + 128.0;
                  _XMM2 = v95;
                  __asm
                  {
                    vminss  xmm3, xmm2, xmm6
                    vmaxss  xmm0, xmm3, xmm7
                  }
                  *(v90 - 1) = (int)*(float *)&_XMM0;
                  --v91;
                }
                while ( v91 );
                y = packedBinOut.y;
              }
              ++v51;
            }
            while ( v51 < (int)(y + v37) );
            v24 = hash;
          }
          ntl::nxheap::free(&s_ftHeap.m_heap, params.bit_test);
          glyph.x0 = v38 - 16;
          glyph.y0 = v43 - 16;
        }
        return FontCache_CommitGlyph(&glyph, v24);
      }
    }
    else
    {
      if ( v6 == 160 )
        v6 = 32;
      CachedGlyph_Internal_Actual = FontCache_GetCachedGlyph_Internal_Actual(font, 64, v6, FONT_CACHE_FX_DISTANCE_FIELD, 1);
      v19 = *(_OWORD *)&CachedGlyph_Internal_Actual->next;
      *(__m256i *)&glyph.font = *(__m256i *)&CachedGlyph_Internal_Actual->font;
      v20 = *(double *)&CachedGlyph_Internal_Actual->dx;
      req.move_to = (int (__fastcall *)(const FT_Vector_ *, void *))1;
      LODWORD(req.line_to) = v7 << 6;
      *(_OWORD *)&glyph.next = v19;
      *(double *)&glyph.dx = v20;
      *(int (__fastcall **)(const FT_Vector_ *, void *))((char *)&req.line_to + 4) = NULL;
      j_FT_Request_Size((FT_FaceRec_ *)font, (FT_Size_RequestRec_ *)&req);
      if ( !j_FT_Load_Glyph((FT_FaceRec_ *)font, Char_Index, ~(8 * (unsigned __int8)*((_DWORD *)font + 2)) & 0x20 | 8) )
      {
        v21 = (float)v7;
        glyph.fontHeight = truncate_cast<unsigned short,int>(v7);
        v22 = truncate_cast<short,long>(*(_DWORD *)(*((_QWORD *)font + 15) + 88i64) / 64);
        v23 = (int *)*((_QWORD *)font + 15);
        v24 = hash;
        glyph.dx = v22;
        glyph.pixelWidth = (int)(float)((float)(v23[12] >> 6) + (float)(v21 * 0.5));
        glyph.pixelHeight = (int)(float)((float)(v23[13] >> 6) + (float)(v21 * 0.5));
        v25 = v23[14];
        LODWORD(v23) = v23[15];
        glyph.x0 = (int)(float)((float)(v25 >> 6) - (float)(v21 * 0.25));
        v26 = *((_QWORD *)font + 16);
        glyph.glyphIndex = Char_Index;
        v27 = *(int *)(v26 + 36);
        glyph.next = 0;
        glyph.hash = hash;
        glyph.y0 = (int)(float)((float)((((BYTE4(v27) & 0x3F) + (int)v27) >> 6) - ((int)v23 >> 6) - v7) - (float)(*(float *)&v27 * 0.25));
        return FontCache_CommitGlyph(&glyph, v24);
      }
    }
    return 0i64;
  }
  while ( 1 )
  {
    v13 = &s_fcGlob.cachedGlyphs[next];
    if ( v13->letter == v6 && v13->fontHeight == v7 && v13->font == font && v13->fxFlags == fxFlags )
      break;
    next = v13->next;
    if ( !next )
      goto LABEL_25;
  }
  FontCache_TileUpdateLRU(v13->tile);
  return v13;
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
  int v5; 
  __m256i v6; 
  __m256i v7; 
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v7.m256i_u64[1] = _XMM0;
    v6.m256i_i32[2] = 1;
    *(__int64 *)((char *)&v6.m256i_i64[1] + 4) = 1i64;
    v7.m256i_i64[0] = 0i64;
    v7.m256i_i32[6] = -1;
    v6.m256i_i64[0] = 0x80000000800i64;
    v6.m256i_i32[5] = 1027;
    v6.m256i_i32[6] = 2;
    *(__m256i *)&params.width = v6;
    *(__m256i *)&params.customAllocFunc = v7;
    s_fcGlob.fontcacheImage = Image_AllocProg(IMAGE_PROG_FONT_CACHE, IMG_CATEGORY_RAW, TS_2D);
    Image_Setup(s_fcGlob.fontcacheImage, &params);
  }
  FontCache_Clear();
  rgp.fontCacheImage = s_fcGlob.fontcacheImage;
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    v5 = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v5) )
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
  __m256 *v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float *dist; 
  __int128 v23; 
  int v25; 
  __int128 v29; 
  __int64 v31; 
  __m128 v34; 
  __int128 v40; 
  int v42; 
  __int128 v46; 
  __int64 v48; 
  int stride; 
  __int64 v60; 
  int v61; 
  __m256 v62; 
  __m128 v63; 
  __m256 v66; 
  __m256 v67; 
  __m256 v68; 
  __m256i *v69; 
  __m256 v70; 
  __int64 v71; 
  __m256 v72; 
  __m256 v73; 
  __m256 v74; 
  __m256 v75; 
  __m256 v76; 
  __m256 v77; 
  __m256 v78; 
  __m256 v79; 
  __m256 v80; 
  __m256 v81; 
  __m256 v82; 
  __m256 v83; 
  __m256 v84; 
  __m256 v85; 
  __m256 v86; 
  __m256 v87; 
  __m256 v88; 
  __m256 v89; 
  __m256 v90; 
  __m256 v91; 
  __m256 v92; 
  __m256 v93; 
  __m256 v94; 
  __m256 v98; 
  __m256 v99; 
  __m256 v100; 
  __m256 v101; 
  __m256 v104; 
  char v105[576]; 

  v4 = (__m256 *)((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64);
  v5 = (__m128)LODWORD(fA->v[1]);
  v6 = (__m128)LODWORD(fA->v[0]);
  v7 = (__m128)LODWORD(fC->v[1]);
  v8 = (__m128)LODWORD(fC->v[0]);
  _XMM11 = (__m128)LODWORD(fB->v[0]);
  _XMM12 = (__m128)LODWORD(fB->v[1]);
  v11 = v6.m128_f32[0] - _XMM11.m128_f32[0];
  v12 = v5.m128_f32[0] - _XMM12.m128_f32[0];
  if ( fsqrt((float)((float)(v7.m128_f32[0] - v5.m128_f32[0]) * (float)(v7.m128_f32[0] - v5.m128_f32[0])) + (float)((float)(v8.m128_f32[0] - v6.m128_f32[0]) * (float)(v8.m128_f32[0] - v6.m128_f32[0]))) > 0.001 )
  {
    v13 = LODWORD(fC->v[0]);
    v14 = (float)(v8.m128_f32[0] - _XMM11.m128_f32[0]) - v11;
    v15 = (float)(v7.m128_f32[0] - _XMM12.m128_f32[0]) - v12;
    *(float *)&v13 = (float)((float)(v14 * v11) + (float)(v15 * v12)) / (float)((float)(v15 * v15) + (float)(v14 * v14));
    _XMM3 = v13 ^ _xmm;
    __asm
    {
      vminss  xmm1, xmm3, cs:__real@3f800000
      vmaxss  xmm2, xmm1, xmm15
    }
    v11 = (float)(*(float *)&_XMM2 * v14) + v11;
    v12 = (float)(*(float *)&_XMM2 * v15) + v12;
  }
  if ( fsqrt((float)(v12 * v12) + (float)(v11 * v11)) > 0.1 )
  {
    dist = data->dist;
    __asm
    {
      vmaxss  xmm0, xmm12, xmm10
      vmaxss  xmm1, xmm0, xmm14
    }
    v23 = _XMM1;
    *(float *)&v23 = *(float *)&_XMM1 + 16.0;
    _XMM2 = v23;
    __asm { vminss  xmm1, xmm2, xmm0 }
    v25 = (int)*(float *)&_XMM1;
    __asm
    {
      vminss  xmm2, xmm11, xmm9
      vminss  xmm0, xmm2, xmm13
    }
    v29 = _XMM0;
    *(float *)&v29 = *(float *)&_XMM0 - 16.0;
    _XMM1 = v29;
    __asm { vmaxss  xmm1, xmm1, xmm15 }
    v31 = (int)*(float *)&_XMM1 / 8;
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v8, v8, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256i *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = _YMM0;
    v34 = 0i64;
    v34.m128_f32[0] = (float)(8 * v31);
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v34, v34, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _mm256_add_ps(_YMM0, _ymm);
    __asm
    {
      vminss  xmm0, xmm12, xmm10
      vminss  xmm1, xmm0, xmm14
    }
    v40 = _XMM1;
    *(float *)&v40 = *(float *)&_XMM1 - 16.0;
    _XMM2 = v40;
    __asm { vmaxss  xmm0, xmm2, xmm15 }
    v42 = (int)*(float *)&_XMM0;
    __asm
    {
      vmaxss  xmm1, xmm11, xmm9
      vmaxss  xmm2, xmm1, xmm13
    }
    v46 = _XMM2;
    *(float *)&v46 = *(float *)&_XMM2 + 16.0;
    _XMM3 = v46;
    __asm { vminss  xmm1, xmm3, xmm0 }
    v48 = ((int)*(float *)&_XMM1 + 7) / 8;
    _YMM7 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
    _YMM4 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v5, v5, 0);
    _YMM8 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(_XMM11, _XMM11, 0);
    _YMM5 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(_XMM12, _XMM12, 0);
    _YMM6 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v7, v7, 0);
    __asm
    {
      vinsertf128 ymm7, ymm7, xmm7, 1
      vinsertf128 ymm4, ymm4, xmm4, 1
      vinsertf128 ymm8, ymm8, xmm8, 1
      vinsertf128 ymm5, ymm5, xmm5, 1
      vinsertf128 ymm6, ymm6, xmm6, 1
    }
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = _YMM7;
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = _YMM4;
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0) = _YMM8;
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) = _YMM5;
    *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180) = _YMM6;
    if ( (int)*(float *)&_XMM0 < v25 )
    {
      stride = data->stride;
      v60 = v31;
      v61 = v42 * stride;
      do
      {
        v62 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
        v63 = 0i64;
        v63.m128_f32[0] = (float)v42;
        _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v63, v63, 0);
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v62;
        if ( v60 < v48 )
        {
          v66 = _mm256_sub_ps(_YMM4, _YMM0);
          v67 = _mm256_sub_ps(_YMM5, _YMM0);
          v68 = _mm256_sub_ps(_YMM6, _YMM0);
          *v4 = _mm256_sub_ps(v68, v66);
          v69 = (__m256i *)&dist[8 * v60 + 8 * (v61 / 8)];
          v70 = _mm256_sub_ps(v67, v66);
          v71 = v48 - v60;
          *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v67;
          *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = v68;
          *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v70;
          *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _mm256_sub_ps(v68, v67);
          do
          {
            v72 = _mm256_sub_ps(*(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100), v62);
            v73 = _mm256_sub_ps(_YMM7, v62);
            v74 = _mm256_sub_ps(_YMM8, v62);
            v75 = _mm256_sub_ps(v72, v74);
            v76 = _mm256_sub_ps(v72, v73);
            v77 = _mm256_sub_ps(_mm256_mul_ps(v68, v73), _mm256_mul_ps(v72, v66));
            v78 = _mm256_sub_ps(v74, v73);
            v79 = _mm256_sub_ps(_mm256_mul_ps(v74, v66), _mm256_mul_ps(v67, v73));
            v80 = _mm256_add_ps(v79, v79);
            v81 = _mm256_sub_ps(_mm256_mul_ps(v72, v67), _mm256_mul_ps(v68, v74));
            v82 = _mm256_add_ps(v81, v81);
            v83 = _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(v70, v82), _mm256_mul_ps(v80, *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40))), _mm256_mul_ps(v77, *v4));
            v84 = _mm256_add_ps(v83, v83);
            v85 = _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(v78, v82), _mm256_mul_ps(v75, v80)), _mm256_mul_ps(v76, v77));
            v86 = _mm256_add_ps(v85, v85);
            v87 = _mm256_sub_ps((__m256)0i64, _mm256_sub_ps(_mm256_mul_ps(v82, v80), _mm256_mul_ps(v77, v77)));
            v88 = _mm256_mul_ps(v87, v84);
            v89 = _mm256_mul_ps(v86, v87);
            v90 = _mm256_add_ps(_mm256_mul_ps(v86, v86), _mm256_mul_ps(v84, v84));
            v91 = _mm256_div_ps(v89, v90);
            v92 = _mm256_sub_ps(v66, _mm256_div_ps(v88, v90));
            v93 = _mm256_sub_ps(v73, v91);
            v94 = _mm256_sub_ps(_mm256_mul_ps(v92, v78), _mm256_mul_ps(v93, *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20)));
            _YMM3 = _mm256_div_ps(_mm256_add_ps(_mm256_sub_ps(_mm256_mul_ps(v93, *v4), _mm256_mul_ps(v92, v76)), _mm256_add_ps(v94, v94)), _mm256_add_ps(_mm256_add_ps(_mm256_add_ps(v77, v77), v80), v82));
            __asm
            {
              vmaxps  ymm0, ymm3, ymm0
              vminps  ymm6, ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
            }
            v98 = _mm256_add_ps(_mm256_mul_ps(_YMM6, *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20)), v66);
            v99 = _mm256_add_ps(_mm256_mul_ps(v78, _YMM6), v73);
            v100 = _mm256_add_ps(_mm256_mul_ps(_mm256_sub_ps(_mm256_add_ps(_mm256_mul_ps(_YMM6, *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40)), *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80)), v98), _YMM6), v98);
            v101 = _mm256_add_ps(_mm256_mul_ps(_mm256_sub_ps(_mm256_add_ps(_mm256_mul_ps(v75, _YMM6), v74), v99), _YMM6), v99);
            _YMM2 = _mm256_sqrt_ps(_mm256_add_ps(_mm256_mul_ps(v100, v100), _mm256_mul_ps(v101, v101)));
            __asm { vminps  ymm3, ymm2, ymmword ptr [rcx] }
            v104 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
            *v69++ = _YMM3;
            v62 = _mm256_add_ps(v104, _ymm);
            v67 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80);
            v68 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120);
            _YMM7 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
            _YMM8 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
            *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v62;
            v70 = _mm256_sub_ps(v67, v66);
            --v71;
          }
          while ( v71 );
          _YMM4 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140);
          _YMM5 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160);
          _YMM6 = *(__m256 *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180);
        }
        ++v42;
        v61 += stride;
      }
      while ( v42 < v25 );
    }
  }
  else
  {
    FontCache_OutlineDecompose_Line(fA, fC, data);
  }
}

/*
==============
FontCache_OutlineDecompose_ConicTo
==============
*/
__int64 FontCache_OutlineDecompose_ConicTo(const FT_Vector_ *control, const FT_Vector_ *to, void *user)
{
  float v3; 
  int v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec2_t fC; 
  vec2_t fB; 
  vec2_t fA; 

  v3 = *((float *)user + 1);
  v5 = *((_DWORD *)user + 6) - *((_DWORD *)user + 7);
  fA.v[0] = *(float *)user;
  v6 = (float)control->y * 0.015625;
  fA.v[1] = v3;
  v7 = (float)*((int *)user + 7);
  v8 = (float)*((int *)user + 5);
  v9 = (float)v5;
  fB.v[1] = (float)(v9 - (float)(v6 - v7)) + 15.5;
  v10 = (float)((float)to->y * 0.015625) - v7;
  fB.v[0] = (float)((float)((float)control->x * 0.015625) - v8) + 15.5;
  v11 = (float)(v9 - v10) + 15.5;
  v12 = (float)to->x * 0.015625;
  fC.v[1] = v11;
  fC.v[0] = (float)(v12 - v8) + 15.5;
  FontCache_OutlineDecompose_Conic(&fA, &fB, &fC, (DecomposeData *)user);
  v13 = fC.v[1];
  *(float *)user = fC.v[0];
  *((float *)user + 1) = v13;
  return 0i64;
}

/*
==============
FontCache_OutlineDecompose_CubicTo
==============
*/
__int64 FontCache_OutlineDecompose_CubicTo(const FT_Vector_ *control1, const FT_Vector_ *control2, const FT_Vector_ *to, void *user)
{
  unsigned int v4; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int v18; 
  float *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float *v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v38; 
  CubicBezierVec2 fA; 
  CubicBezierVec2 a; 
  CubicBezierVec2 b; 
  CubicBezierVec2 v42; 
  CubicBezierVec2 v43; 

  v4 = *((_DWORD *)user + 7);
  v6 = *(float *)user;
  v7 = *((float *)user + 1);
  v8 = _mm_cvtepi32_ps((__m128i)*((unsigned int *)user + 5)).m128_f32[0];
  v9 = _mm_cvtepi32_ps((__m128i)v4).m128_f32[0];
  v10 = _mm_cvtepi32_ps((__m128i)(*((_DWORD *)user + 6) - v4)).m128_f32[0];
  v11 = (float)(v10 - (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)control1->y).m128_f32[0] * 0.015625) - v9)) + 15.5;
  v12 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)control1->x).m128_f32[0] * 0.015625) - v8) + 15.5;
  v13 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)control2->x).m128_f32[0] * 0.015625) - v8) + 15.5;
  v14 = (float)(v10 - (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)control2->y).m128_f32[0] * 0.015625) - v9)) + 15.5;
  v15 = (float)(v10 - (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)to->y).m128_f32[0] * 0.015625) - v9)) + 15.5;
  v16 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)to->x).m128_f32[0] * 0.015625) - v8) + 15.5;
  v17 = (float)((float)(v16 - (float)(v13 * 3.0)) + (float)(v12 * 3.0)) - *(float *)user;
  v38 = v16;
  fA.p[0].v[0] = *(float *)user;
  fA.p[0].v[1] = v7;
  fA.p[1].v[0] = v12;
  fA.p[1].v[1] = v11;
  fA.p[2].v[0] = v13;
  fA.p[2].v[1] = v14;
  fA.p[3].v[0] = v16;
  fA.p[3].v[1] = v15;
  if ( (float)(fsqrt((float)((float)((float)((float)(v15 - (float)(v14 * 3.0)) + (float)(fA.p[1].v[1] * 3.0)) - v7) * (float)((float)((float)(v15 - (float)(v14 * 3.0)) + (float)(fA.p[1].v[1] * 3.0)) - v7)) + (float)(v17 * v17)) * 0.5) > 4.0 )
  {
    Vec2CubicBezierSplitHalf(&fA, &a, &b);
    v18 = 0;
    v19 = (float *)&a.p[1] + 1;
    do
    {
      v20 = v19[1];
      v21 = *(v19 - 1);
      v22 = v19[3];
      v23 = v19[2];
      v24 = *(v19 - 3);
      v25 = *v19;
      v26 = v19[4];
      v27 = *(v19 - 2);
      v28 = (float)((float)(v22 - (float)(v20 * 3.0)) + (float)(v21 * 3.0)) - v24;
      v29 = (float)((float)(v26 - (float)(v23 * 3.0)) + (float)(*v19 * 3.0)) - v27;
      if ( (float)(fsqrt((float)(v29 * v29) + (float)(v28 * v28)) * 0.5) > 4.0 )
      {
        Vec2CubicBezierSplitHalf(&a + v18, &v42, &v43);
        v30 = (float *)&v42.p[1] + 1;
        v31 = 2i64;
        do
        {
          v32 = *(v30 - 3);
          v33 = *(v30 - 1) + v30[1];
          v34 = v30[4];
          v35 = *(v30 - 2);
          fA.p[2].v[0] = v30[3];
          v36 = v30[2] + *v30;
          fA.p[1].v[0] = (float)(v33 * 0.75) - (float)((float)(v32 + fA.p[2].v[0]) * 0.25);
          fA.p[1].v[1] = (float)(v36 * 0.75) - (float)((float)(v35 + v34) * 0.25);
          fA.p[0].v[0] = v32;
          fA.p[0].v[1] = v35;
          fA.p[2].v[1] = v34;
          FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], (DecomposeData *)user);
          v30 += 8;
          --v31;
        }
        while ( v31 );
      }
      else
      {
        fA.p[1].v[0] = (float)((float)(v21 + v20) * 0.75) - (float)((float)(v24 + v22) * 0.25);
        fA.p[1].v[1] = (float)((float)(v23 + v25) * 0.75) - (float)((float)(v26 + v27) * 0.25);
        fA.p[0].v[0] = v24;
        fA.p[0].v[1] = v27;
        fA.p[2].v[0] = v22;
        fA.p[2].v[1] = v26;
        FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], (DecomposeData *)user);
      }
      ++v18;
      v19 += 8;
    }
    while ( v18 < 2 );
    v16 = v38;
  }
  else
  {
    fA.p[1].v[0] = (float)((float)(v13 + v12) * 0.75) - (float)((float)(v16 + v6) * 0.25);
    fA.p[1].v[1] = (float)((float)(v15 * -0.25) + (float)(v14 * 0.75)) + (float)((float)(v11 * 0.75) + (float)(v7 * -0.25));
    fA.p[0].v[0] = v6;
    fA.p[0].v[1] = v7;
    fA.p[2].v[0] = v16;
    fA.p[2].v[1] = v15;
    FontCache_OutlineDecompose_Conic(fA.p, &fA.p[1], &fA.p[2], (DecomposeData *)user);
  }
  *(float *)user = v16;
  *((float *)user + 1) = v15;
  return 0i64;
}

/*
==============
FontCache_OutlineDecompose_Line
==============
*/
void FontCache_OutlineDecompose_Line(const vec2_t *fA, const vec2_t *fB, DecomposeData *data)
{
  __m256i *v3; 
  __m128 v6; 
  __m128 v8; 
  float *dist; 
  __int128 v12; 
  int v14; 
  __int128 v17; 
  __int64 v19; 
  __m128 v20; 
  __m256 v23; 
  __int128 v26; 
  int v28; 
  __int128 v31; 
  __int64 v33; 
  int stride; 
  __int64 v43; 
  int v44; 
  __m128 v45; 
  __m256 v48; 
  __m256 v49; 
  __m256 v50; 
  float *v51; 
  __int64 v52; 
  __m256 v53; 
  __m256 v54; 
  __m256 v55; 
  __m256 v56; 
  __m256 v57; 
  __m256 v61; 
  __m256 v62; 
  char v65[256]; 

  v3 = (__m256i *)((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64);
  _XMM4 = (__m128)LODWORD(fB->v[1]);
  _XMM7 = (__m128)LODWORD(fB->v[0]);
  v6 = (__m128)LODWORD(fA->v[1]);
  v8 = (__m128)LODWORD(fA->v[0]);
  dist = data->dist;
  __asm { vmaxss  xmm0, xmm4, xmm5 }
  v12 = _XMM0;
  *(float *)&v12 = *(float *)&_XMM0 + 16.0;
  _XMM1 = v12;
  __asm { vminss  xmm1, xmm1, xmm0 }
  v14 = (int)*(float *)&_XMM1;
  __asm { vminss  xmm2, xmm7, xmm8 }
  v17 = _XMM2;
  *(float *)&v17 = *(float *)&_XMM2 - 16.0;
  _XMM0 = v17;
  __asm { vmaxss  xmm0, xmm0, xmm3 }
  v19 = (int)*(float *)&_XMM0 / 8;
  v20 = 0i64;
  v20.m128_f32[0] = (float)(8 * v19);
  _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v20, v20, 0);
  __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
  v23 = _mm256_add_ps(_YMM0, _ymm);
  __asm { vminss  xmm0, xmm4, xmm5 }
  v26 = _XMM0;
  *(float *)&v26 = *(float *)&_XMM0 - 16.0;
  _XMM1 = v26;
  __asm { vmaxss  xmm1, xmm1, xmm3 }
  v28 = (int)*(float *)&_XMM1;
  __asm { vmaxss  xmm0, xmm7, xmm8 }
  v31 = _XMM0;
  *(float *)&v31 = *(float *)&_XMM0 + 16.0;
  _XMM2 = v31;
  __asm { vminss  xmm0, xmm2, xmm1 }
  v33 = ((int)*(float *)&_XMM0 + 7) / 8;
  _YMM10 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
  _YMM11 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(_XMM4, _XMM4, 0);
  _YMM14 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v8, v8, 0);
  __asm { vinsertf128 ymm10, ymm10, xmm10, 1 }
  _YMM15 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(_XMM7, _XMM7, 0);
  __asm
  {
    vinsertf128 ymm11, ymm11, xmm11, 1
    vinsertf128 ymm14, ymm14, xmm14, 1
  }
  v3[1] = (__m256i)_YMM10;
  __asm { vinsertf128 ymm15, ymm15, xmm15, 1 }
  v3[2] = (__m256i)_YMM11;
  *(__m256 *)v3 = v23;
  if ( (int)*(float *)&_XMM1 < v14 )
  {
    stride = data->stride;
    v43 = v19;
    v44 = v28 * stride;
    do
    {
      v45 = 0i64;
      v45.m128_f32[0] = (float)v28;
      _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v45, v45, 0);
      __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
      v48 = v23;
      if ( v43 < v33 )
      {
        v49 = _mm256_sub_ps(_YMM10, _YMM0);
        v50 = _mm256_sub_ps(_mm256_sub_ps(_YMM11, _YMM0), v49);
        v51 = &dist[8 * v43 + 8 * (v44 / 8)];
        v52 = v33 - v43;
        v53 = _mm256_mul_ps(v50, v49);
        v54 = _mm256_mul_ps(v50, v50);
        do
        {
          v51 += 8;
          v55 = _mm256_sub_ps(_YMM14, v48);
          v56 = _mm256_sub_ps(_YMM15, v48);
          v48 = _mm256_add_ps(v48, _ymm);
          v57 = _mm256_sub_ps(v56, v55);
          _YMM1 = _mm256_div_ps(_mm256_sub_ps((__m256)0i64, _mm256_add_ps(_mm256_mul_ps(v57, v55), v53)), _mm256_add_ps(_mm256_mul_ps(v57, v57), v54));
          __asm
          {
            vmaxps  ymm3, ymm1, ymm12
            vminps  ymm2, ymm3, ymm13
          }
          v61 = _mm256_add_ps(_mm256_mul_ps(v57, _YMM2), v55);
          v62 = _mm256_add_ps(_mm256_mul_ps(v50, _YMM2), v49);
          _YMM2 = _mm256_sqrt_ps(_mm256_add_ps(_mm256_mul_ps(v62, v62), _mm256_mul_ps(v61, v61)));
          __asm { vminps  ymm3, ymm2, ymmword ptr [rcx-20h] }
          *((__m256i *)v51 - 1) = _YMM3;
          --v52;
        }
        while ( v52 );
        v23 = *(__m256 *)v3;
        _YMM10 = *(__m256 *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
        _YMM11 = *(__m256 *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
      }
      ++v28;
      v44 += stride;
    }
    while ( v28 < v14 );
  }
}

/*
==============
FontCache_OutlineDecompose_LineTo
==============
*/
__int64 FontCache_OutlineDecompose_LineTo(const FT_Vector_ *to, void *user)
{
  float v2; 
  int v4; 
  float y; 
  float v6; 
  float v7; 
  __int64 result; 
  vec2_t fB; 
  vec2_t fA; 

  v2 = *((float *)user + 1);
  v4 = *((_DWORD *)user + 6) - *((_DWORD *)user + 7);
  fA.v[0] = *(float *)user;
  y = (float)to->y;
  fA.v[1] = v2;
  v6 = (float)((float)v4 - (float)((float)(y * 0.015625) - (float)*((int *)user + 7))) + 15.5;
  fB.v[0] = (float)((float)((float)to->x * 0.015625) - (float)*((int *)user + 5)) + 15.5;
  v7 = fB.v[0];
  fB.v[1] = v6;
  FontCache_OutlineDecompose_Line(&fA, &fB, (DecomposeData *)user);
  result = 0i64;
  *(float *)user = v7;
  *((float *)user + 1) = v6;
  return result;
}

/*
==============
FontCache_OutlineDecompose_MoveTo
==============
*/
__int64 FontCache_OutlineDecompose_MoveTo(const FT_Vector_ *to, void *user)
{
  float v2; 

  v2 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(*((_DWORD *)user + 6) - *((_DWORD *)user + 7))).m128_f32[0] - (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)to->y).m128_f32[0] * 0.015625) - _mm_cvtepi32_ps((__m128i)*((unsigned int *)user + 7)).m128_f32[0])) + 15.5;
  *(float *)user = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)to->x).m128_f32[0] * 0.015625) - _mm_cvtepi32_ps((__m128i)*((unsigned int *)user + 5)).m128_f32[0]) + 15.5;
  *((float *)user + 1) = v2;
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
  FontCacheQueueItem *v2; 
  __int64 v3; 
  bool v4; 
  int fontCacheIsLocked; 
  char *v6; 
  __int64 v7; 
  char v8; 
  char v9; 

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
    v2 = (FontCacheQueueItem *)&v8;
    v3 = (unsigned int)size;
    do
    {
      if ( !s_fcGlob.precacheQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_fcGlob.precacheQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      v4 = !s_fcGlob.precacheQueue.cleared;
      *v2 = s_fcGlob.precacheQueue.entries[s_fcGlob.precacheQueue.start];
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_fcGlob.precacheQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      --s_fcGlob.precacheQueue.size;
      ++v2;
      s_fcGlob.precacheQueue.start = ((unsigned int)s_fcGlob.precacheQueue.start + 1) % 0xC00;
      --v3;
    }
    while ( v3 );
  }
  fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  if ( s_fcGlob.fontCacheIsLocked != 1 )
  {
    LODWORD(v7) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 300, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v7) )
      __debugbreak();
    fontCacheIsLocked = s_fcGlob.fontCacheIsLocked;
  }
  s_fcGlob.fontCacheIsLocked = fontCacheIsLocked - 1;
  Sys_LeaveCriticalSection(CRITSECT_FONT_CACHE);
  if ( (_DWORD)size )
  {
    v6 = &v9;
    do
    {
      R_GetCharacterGlyph(*((GfxFont **)v6 - 1), *(_DWORD *)v6, *((_DWORD *)v6 + 1), NULL);
      v6 += 16;
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
void FontCache_RenderDebug(void)
{
  float v0; 
  bool *p_full; 
  unsigned int i; 
  float v3; 
  float v4; 
  float v5; 
  vec4_t color; 
  vec4_t v7; 
  vec2_t verts; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  if ( r_font_cache_debug_display->current.enabled )
  {
    color = (vec4_t)_xmm;
    v0 = (float)((float)s_fcGlob.fontcacheImage->width / (float)s_fcGlob.fontcacheImage->height) * 512.0;
    R_AddCmdDrawStretchPic(200.0, 200.0, v0, 512.0, 0.0, 0.0, 1.0, 1.0, &color, rgp.whiteMaterial);
    R_AddCmdDrawStretchPic(200.0, 200.0, v0, 512.0, 0.0, 0.0, 1.0, 1.0, &colorWhite, rgp.fontMaterial[0]);
    p_full = &s_fcGlob.tileArray[0].full;
    for ( i = 0; i < 0x40; ++i )
    {
      if ( *p_full )
      {
        v3 = (float)(i & 7);
        v4 = (float)(v3 * 64.0) + 200.0;
        v5 = (float)(i >> 3);
        v12 = (float)((float)(v5 * 64.0) + 200.0) + 64.0;
        v14 = v12;
        verts.v[0] = v4;
        verts.v[1] = (float)(v5 * 64.0) + 200.0;
        v9 = v4 + 64.0;
        v10 = verts.v[1];
        v11 = v4 + 64.0;
        v13 = v4;
        v7 = (vec4_t)_xmm;
        R_AddCmdDrawQuadPic(&verts, &v7, rgp.whiteMaterial);
      }
      p_full += 16;
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
  CachedGlyph *v6; 
  CachedGlyph *v7; 
  CachedGlyph *v8; 
  unsigned __int16 *v9; 
  CachedGlyph *i; 
  unsigned __int16 next; 
  unsigned __int16 *v12; 
  CachedGlyph *v13; 
  CachedGlyph *v14; 
  __int64 v16; 

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
    LODWORD(v16) = s_fcGlob.fontCacheIsLocked;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fontcache.cpp", 611, ASSERT_TYPE_ASSERT, "( ( s_fcGlob.fontCacheIsLocked == 1 ) )", "( s_fcGlob.fontCacheIsLocked ) = %i", v16) )
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
      v6 = &s_fcGlob.cachedGlyphs[v5];
      v7 = NULL;
      v8 = &s_fcGlob.cachedGlyphs[(unsigned __int16)(nextFreeGlyphIndex - 1)];
      v9 = &s_fcGlob.glyphHashEntries[s_fcGlob.cachedGlyphs[v5].hash];
      for ( i = &s_fcGlob.cachedGlyphs[*v9]; i != v6; i = &s_fcGlob.cachedGlyphs[i->next] )
        v7 = i;
      next = v6->next;
      if ( v7 )
        v7->next = next;
      else
        *v9 = next;
      if ( v6 != v8 )
      {
        v12 = &s_fcGlob.glyphHashEntries[v8->hash];
        v13 = &s_fcGlob.cachedGlyphs[*v12];
        if ( v13 == v8 )
          goto LABEL_25;
        do
        {
          v14 = v13;
          v13 = &s_fcGlob.cachedGlyphs[v13->next];
        }
        while ( v13 != v8 );
        if ( !v14 )
LABEL_25:
          *v12 = v3;
        else
          v14->next = v3;
        *(__m256i *)&v6->font = *(__m256i *)&v8->font;
        *(_OWORD *)&v6->next = *(_OWORD *)&v8->next;
        *(double *)&v6->dx = *(double *)&v8->dx;
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

