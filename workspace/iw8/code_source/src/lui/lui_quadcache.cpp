/*
==============
LUI_QuadCache_ExecDrawList_All
==============
*/

void __fastcall LUI_QuadCache_ExecDrawList_All(const LocalClientNum_t localClientNum, lua_State *luaVM)
{
  ?LUI_QuadCache_ExecDrawList_All@@YAXW4LocalClientNum_t@@PEAUlua_State@@@Z(localClientNum, luaVM);
}

/*
==============
LUI_QuadCache_GetNumAllocatedQuadCaches
==============
*/

int __fastcall LUI_QuadCache_GetNumAllocatedQuadCaches()
{
  return ?LUI_QuadCache_GetNumAllocatedQuadCaches@@YAHXZ();
}

/*
==============
LUI_QuadCache_Element_CacheImageQuad
==============
*/

void __fastcall LUI_QuadCache_Element_CacheImageQuad(lua_State *luaVM, LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *verts, const vec4_t *color, LUIQuadUV *uv, const GfxImage *image, Material *material, float glitchAmount, float blurAmount, unsigned __int16 samplerState, float parallaxAmount, const LUIColorOpData *colorOp, const bool has3DTransforms, const int scopeIndex, const bool applyScopeBufferWeight, const LUIColorSource colorSource, const float extraParam)
{
  ?LUI_QuadCache_Element_CacheImageQuad@@YAXPEAUlua_State@@W4LocalClientNum_t@@PEAULUIElement@@QEBTvec4_t@@AEBT4@PEAULUIQuadUV@@PEBUGfxImage@@PEAUMaterial@@MMGMPEBULUIColorOpData@@_NH9W4LUIColorSource@@M@Z(luaVM, localClientNum, element, verts, color, uv, image, material, glitchAmount, blurAmount, samplerState, parallaxAmount, colorOp, has3DTransforms, scopeIndex, applyScopeBufferWeight, colorSource, extraParam);
}

/*
==============
LUI_QuadCache_GetDrawListState
==============
*/

void __fastcall LUI_QuadCache_GetDrawListState(const LocalClientNum_t localClientNum, UIDrawListState *outState)
{
  ?LUI_QuadCache_GetDrawListState@@YAXW4LocalClientNum_t@@PEAUUIDrawListState@@@Z(localClientNum, outState);
}

/*
==============
LUI_QuadCache_CustomDrawListBegin
==============
*/

void __fastcall LUI_QuadCache_CustomDrawListBegin(const LocalClientNum_t localClientNum, unsigned int customList)
{
  ?LUI_QuadCache_CustomDrawListBegin@@YAXW4LocalClientNum_t@@I@Z(localClientNum, customList);
}

/*
==============
LUI_QuadCache_Element_CanDraw
==============
*/

bool __fastcall LUI_QuadCache_Element_CanDraw(LUIElement *element)
{
  return ?LUI_QuadCache_Element_CanDraw@@YA_NPEAULUIElement@@@Z(element);
}

/*
==============
LUI_QuadCache_CustomDrawListEnd
==============
*/

void __fastcall LUI_QuadCache_CustomDrawListEnd(const LocalClientNum_t localClientNum, unsigned int customList)
{
  ?LUI_QuadCache_CustomDrawListEnd@@YAXW4LocalClientNum_t@@I@Z(localClientNum, customList);
}

/*
==============
LUI_QuadCache_Allocate
==============
*/

UIQuadCache *__fastcall LUI_QuadCache_Allocate(lua_State *luaVM)
{
  return ?LUI_QuadCache_Allocate@@YAPEAUUIQuadCache@@PEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_QuadCache_Element_Invalidate
==============
*/

void __fastcall LUI_QuadCache_Element_Invalidate(LUIElement *element)
{
  ?LUI_QuadCache_Element_Invalidate@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUI_QuadCache_ExecDrawList
==============
*/

void __fastcall LUI_QuadCache_ExecDrawList(const LocalClientNum_t localClientNum, lua_State *luaVM)
{
  ?LUI_QuadCache_ExecDrawList@@YAXW4LocalClientNum_t@@PEAUlua_State@@@Z(localClientNum, luaVM);
}

/*
==============
LUI_QuadCache_Initialize
==============
*/

void LUI_QuadCache_Initialize(void)
{
  ?LUI_QuadCache_Initialize@@YAXXZ();
}

/*
==============
LUI_QuadCache_AddDrawListElement
==============
*/

void __fastcall LUI_QuadCache_AddDrawListElement(const LocalClientNum_t localClientNum, LUIElement *element)
{
  ?LUI_QuadCache_AddDrawListElement@@YAXW4LocalClientNum_t@@PEAULUIElement@@@Z(localClientNum, element);
}

/*
==============
LUI_QuadCache_AddDrawListDeepCachedElement
==============
*/

void __fastcall LUI_QuadCache_AddDrawListDeepCachedElement(const LocalClientNum_t localClientNum, LUIElement *element)
{
  ?LUI_QuadCache_AddDrawListDeepCachedElement@@YAXW4LocalClientNum_t@@PEAULUIElement@@@Z(localClientNum, element);
}

/*
==============
LUI_QuadCache_AddDrawListCommand
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand(const LocalClientNum_t localClientNum, void (__fastcall *function)())
{
  ?LUI_QuadCache_AddDrawListCommand@@YAXW4LocalClientNum_t@@P6AXXZ@Z(localClientNum, function);
}

/*
==============
LUI_QuadCache_GetMemoryAllocatedForQuadCaches
==============
*/

int __fastcall LUI_QuadCache_GetMemoryAllocatedForQuadCaches()
{
  return ?LUI_QuadCache_GetMemoryAllocatedForQuadCaches@@YAHXZ();
}

/*
==============
LUI_QuadCache_ExecDrawList_CustomList
==============
*/

void __fastcall LUI_QuadCache_ExecDrawList_CustomList(const LocalClientNum_t localClientNum, const unsigned int customList, lua_State *luaVM)
{
  ?LUI_QuadCache_ExecDrawList_CustomList@@YAXW4LocalClientNum_t@@IPEAUlua_State@@@Z(localClientNum, customList, luaVM);
}

/*
==============
LUI_QuadCache_FreeChain
==============
*/

void __fastcall LUI_QuadCache_FreeChain(lua_State *luaVM, UIQuadCache *chainStart, UIQuadCache *chainEnd)
{
  ?LUI_QuadCache_FreeChain@@YAXPEAUlua_State@@PEAUUIQuadCache@@1@Z(luaVM, chainStart, chainEnd);
}

/*
==============
LUI_QuadCache_GetNext
==============
*/

UIQuadCache *__fastcall LUI_QuadCache_GetNext(UIQuadCache *quadCache)
{
  return ?LUI_QuadCache_GetNext@@YAPEAUUIQuadCache@@PEAU1@@Z(quadCache);
}

/*
==============
LUI_QuadCache_ClearDrawList
==============
*/

void __fastcall LUI_QuadCache_ClearDrawList(const LocalClientNum_t localClientNum)
{
  ?LUI_QuadCache_ClearDrawList@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_QuadCache_RestoreDrawListState
==============
*/

void __fastcall LUI_QuadCache_RestoreDrawListState(const LocalClientNum_t localClientNum, const UIDrawListState *state)
{
  ?LUI_QuadCache_RestoreDrawListState@@YAXW4LocalClientNum_t@@PEBUUIDrawListState@@@Z(localClientNum, state);
}

/*
==============
LUI_QuadCache_AddDrawListCommandInternal
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommandInternal(const LocalClientNum_t localClientNum, void (__fastcall *function)(const void *), const void *data, unsigned __int64 dataSize, unsigned __int64 alignment)
{
  ?LUI_QuadCache_AddDrawListCommandInternal@@YAXW4LocalClientNum_t@@P6AXPEBX@Z1_K3@Z(localClientNum, function, data, dataSize, alignment);
}

/*
==============
LUI_QuadCache_DrawList_Checksum
==============
*/

unsigned __int64 __fastcall LUI_QuadCache_DrawList_Checksum(unsigned __int8 *buffer, const unsigned int bufferSize, LUIQuadCacheListInfo *info)
{
  return ?LUI_QuadCache_DrawList_Checksum@@YA_KPEAEIPEAULUIQuadCacheListInfo@@@Z(buffer, bufferSize, info);
}

/*
==============
LUI_QuadCache_Element_CacheTextQuad
==============
*/

void __fastcall LUI_QuadCache_Element_CacheTextQuad(lua_State *luaVM, LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *verts, const vec4_t *color, GfxFont *font, const char *text, char tracking, float rotation, int fontSize, Material *fontMaterial, Material *iconsMaterial, bool tintIcons, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, float glitchAmount, float blurAmount, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms)
{
  ?LUI_QuadCache_Element_CacheTextQuad@@YAXPEAUlua_State@@W4LocalClientNum_t@@PEAULUIElement@@QEBTvec4_t@@AEBT4@PEAUGfxFont@@PEBDDMHPEAUMaterial@@7_NPEAUFontDecodeStyle@@PEAUFontGlowStyle@@MMMPEBULUIColorOpData@@8@Z(luaVM, localClientNum, element, verts, color, font, text, tracking, rotation, fontSize, fontMaterial, iconsMaterial, tintIcons, fontDecodeStyle, fontGlowStyle, glitchAmount, blurAmount, parallaxAmount, colorOp, has3DTransforms);
}

/*
==============
LUI_QuadCache_Element_WipeCache
==============
*/

void __fastcall LUI_QuadCache_Element_WipeCache(lua_State *luaVM, LUIElement *element)
{
  ?LUI_QuadCache_Element_WipeCache@@YAXPEAUlua_State@@PEAULUIElement@@@Z(luaVM, element);
}

/*
==============
LUI_QuadCache_GetDrawListHighWaterMark
==============
*/

int __fastcall LUI_QuadCache_GetDrawListHighWaterMark()
{
  return ?LUI_QuadCache_GetDrawListHighWaterMark@@YAHXZ();
}

/*
==============
LUI_QuadCache_GetDrawListMaxSize
==============
*/

int __fastcall LUI_QuadCache_GetDrawListMaxSize()
{
  return ?LUI_QuadCache_GetDrawListMaxSize@@YAHXZ();
}

/*
==============
LUI_QuadCache_UsingCustomDrawList
==============
*/

bool __fastcall LUI_QuadCache_UsingCustomDrawList(const LocalClientNum_t localClientNum, unsigned int customList)
{
  return ?LUI_QuadCache_UsingCustomDrawList@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, customList);
}

/*
==============
LUI_QuadCache_GetDrawListSize
==============
*/

unsigned int __fastcall LUI_QuadCache_GetDrawListSize(const LocalClientNum_t localClientNum)
{
  return ?LUI_QuadCache_GetDrawListSize@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_QuadCache_AddDrawListCommandVarSizeInternal
==============
*/

void *__fastcall LUI_QuadCache_AddDrawListCommandVarSizeInternal(const LocalClientNum_t localClientNum, void (__fastcall *function)(const void *), unsigned __int64 dataSize, unsigned __int64 alignment)
{
  return ?LUI_QuadCache_AddDrawListCommandVarSizeInternal@@YAPEAXW4LocalClientNum_t@@P6AXPEBX@Z_K3@Z(localClientNum, function, dataSize, alignment);
}

/*
==============
LUI_QuadCache_AddDrawListCommand
==============
*/
void LUI_QuadCache_AddDrawListCommand(const LocalClientNum_t localClientNum, void (*function)())
{
  __int64 v4; 
  unsigned __int8 *v5; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v4 = (s_uiDrawList.size + 7) & 0xFFFFFFF8;
  if ( !s_uiDrawList.lastHeader && (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
    __debugbreak();
  if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v4 + 16) )
  {
    v5 = &s_uiDrawList.buffer[v4];
    *v5 = 0;
    *((_WORD *)v5 + 1) = 0;
    if ( s_uiDrawList.lastHeader )
      s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v5 - (unsigned __int8 *)s_uiDrawList.lastHeader);
    s_uiDrawList.lastHeader = (UIDrawListHeader *)v5;
    *((_QWORD *)v5 + 1) = function;
  }
}

/*
==============
LUI_QuadCache_AddDrawListCommandInternal
==============
*/
void LUI_QuadCache_AddDrawListCommandInternal(const LocalClientNum_t localClientNum, void (*function)(const void *), const void *data, unsigned __int64 dataSize, unsigned __int64 alignment)
{
  void *v7; 

  v7 = LUI_QuadCache_AddDrawListCommandVarSizeInternal(localClientNum, function, dataSize, alignment);
  if ( v7 )
    memcpy_0(v7, data, dataSize);
}

/*
==============
LUI_QuadCache_AddDrawListCommandVarSizeInternal
==============
*/
unsigned __int8 *LUI_QuadCache_AddDrawListCommandVarSizeInternal(const LocalClientNum_t localClientNum, void (*function)(const void *), unsigned __int64 dataSize, unsigned __int64 alignment)
{
  int v5; 
  __int64 v8; 
  unsigned __int8 *v9; 
  __int64 v10; 
  bool v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  unsigned __int64 v15; 

  v5 = dataSize;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v8 = (s_uiDrawList.size + 7) & 0xFFFFFFF8;
  if ( !s_uiDrawList.lastHeader && (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
    __debugbreak();
  if ( !LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v8 + 24) )
    return 0i64;
  v9 = &s_uiDrawList.buffer[v8];
  v10 = 0i64;
  *v9 = 1;
  *((_WORD *)v9 + 1) = 0;
  if ( s_uiDrawList.lastHeader )
    s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v9 - (unsigned __int8 *)s_uiDrawList.lastHeader);
  v11 = localClientNum == s_uiDrawListClient;
  s_uiDrawList.lastHeader = (UIDrawListHeader *)v9;
  *((_QWORD *)v9 + 2) = function;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  if ( alignment > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 566, ASSERT_TYPE_ASSERT, "(alignment <= UI_DRAW_LIST_MAX_ALIGN)", (const char *)&queryFormat, "alignment <= UI_DRAW_LIST_MAX_ALIGN") )
    __debugbreak();
  v12 = AlignUp<unsigned int>(s_uiDrawList.size, alignment);
  v13 = &s_uiDrawList.buffer[v12];
  v14 = v12;
  v15 = v13 - v9;
  if ( (v13 - v9 < 0 || v15 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v15, "signed", v15) )
    __debugbreak();
  v9[4] = v15;
  *((_DWORD *)v9 + 2) = v5;
  if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v5 + v14) )
    return v13;
  return (unsigned __int8 *)v10;
}

/*
==============
LUI_QuadCache_AddDrawListDeepCachedElement
==============
*/
void LUI_QuadCache_AddDrawListDeepCachedElement(const LocalClientNum_t localClientNum, LUIElement *element)
{
  UIQuadCache *firstDeepCache; 

  if ( !element->deeplyCached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 541, ASSERT_TYPE_ASSERT, "(element->deeplyCached)", (const char *)&queryFormat, "element->deeplyCached") )
    __debugbreak();
  firstDeepCache = element->firstDeepCache;
  if ( firstDeepCache )
    LUI_QuadCache_AddDrawListQuads(localClientNum, firstDeepCache, element->lastDeepCache);
}

/*
==============
LUI_QuadCache_AddDrawListElement
==============
*/
void LUI_QuadCache_AddDrawListElement(const LocalClientNum_t localClientNum, LUIElement *element)
{
  LUI_QuadCache_AddDrawListQuads(localClientNum, element->firstCache, element->lastCache);
}

/*
==============
LUI_QuadCache_AddDrawListQuad
==============
*/
void LUI_QuadCache_AddDrawListQuad(const LocalClientNum_t localClientNum, UIQuadCache *quad)
{
  __int64 v4; 
  unsigned __int8 *v5; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v4 = (s_uiDrawList.size + 7) & 0xFFFFFFF8;
  if ( !s_uiDrawList.lastHeader && (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
    __debugbreak();
  if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v4 + 16) )
  {
    v5 = &s_uiDrawList.buffer[v4];
    *v5 = 2;
    *((_WORD *)v5 + 1) = 0;
    if ( s_uiDrawList.lastHeader )
      s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v5 - (unsigned __int8 *)s_uiDrawList.lastHeader);
    s_uiDrawList.lastHeader = (UIDrawListHeader *)v5;
    *((_QWORD *)v5 + 1) = quad;
  }
}

/*
==============
LUI_QuadCache_AddDrawListQuads
==============
*/
void LUI_QuadCache_AddDrawListQuads(const LocalClientNum_t localClientNum, UIQuadCache *chainStart, UIQuadCache *chainEnd)
{
  __int64 v6; 
  unsigned __int8 *v7; 

  if ( !chainStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 521, ASSERT_TYPE_ASSERT, "(chainStart)", (const char *)&queryFormat, "chainStart") )
    __debugbreak();
  if ( !chainEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 522, ASSERT_TYPE_ASSERT, "(chainEnd)", (const char *)&queryFormat, "chainEnd") )
    __debugbreak();
  if ( chainStart == chainEnd )
  {
    LUI_QuadCache_AddDrawListQuad(localClientNum, chainStart);
  }
  else
  {
    if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
      __debugbreak();
    if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
      __debugbreak();
    v6 = (s_uiDrawList.size + 7) & 0xFFFFFFF8;
    if ( !s_uiDrawList.lastHeader && (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
      __debugbreak();
    if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v6 + 24) )
    {
      v7 = &s_uiDrawList.buffer[v6];
      *v7 = 3;
      *((_WORD *)v7 + 1) = 0;
      if ( s_uiDrawList.lastHeader )
        s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v7 - (unsigned __int8 *)s_uiDrawList.lastHeader);
      s_uiDrawList.lastHeader = (UIDrawListHeader *)v7;
      *((_QWORD *)v7 + 1) = chainStart;
      *((_QWORD *)v7 + 2) = chainEnd;
    }
  }
}

/*
==============
LUI_QuadCache_Allocate
==============
*/
UIQuadCache *LUI_QuadCache_Allocate(lua_State *luaVM)
{
  int i; 
  unsigned __int16 m_firstFree; 
  UIQuadCache *v4; 
  UIQuadCache *result; 

  for ( i = 0; ; i = 1 )
  {
    m_firstFree = s_quadCachePool.m_firstFree;
    if ( s_quadCachePool.m_firstFree < 0x1194u )
    {
      s_quadCachePool.m_firstFree = s_quadCachePool.m_poolData[s_quadCachePool.m_firstFree];
      s_quadCachePool.m_poolData[m_firstFree] = 4501;
      v4 = &s_quadCachePool.m_pool[m_firstFree];
      j_lua_pushlightuserdata(luaVM, v4);
      if ( v4 )
        break;
    }
    if ( i )
      j_luaL_error(luaVM, "Failed to allocate from quad cache pool");
    LUI_EmergencyFullGC(luaVM, "Quad cache pool full (%i) (MAX_LUI_ELEMENTS)", 4500i64);
  }
  j_lua_settop(luaVM, -2);
  ++s_LUIAllocatedQuadCaches;
  result = v4;
  s_LUIAllocatedQuadCachesMemory += 248;
  return result;
}

/*
==============
LUI_QuadCache_CacheText
==============
*/
void LUI_QuadCache_CacheText(UIQuadCache *quadCache, lua_State *luaVM, LocalClientNum_t localClientNum, const vec4_t *verts, const vec4_t *color, GfxFont *font, const char *text, char tracking, float rotation, int fontSize, Material *fontMaterial, Material *iconsMaterial, bool tintIcons, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, float glitchAmount, float blurAmount, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms)
{
  __int64 v23; 
  double CurrentUnitScale; 
  int v25; 
  unsigned __int8 CurrentRTT; 
  __int64 v27; 
  unsigned int v28; 
  const char *v29; 
  __int64 v30; 

  *(__m256i *)quadCache->verts[0].v = *(__m256i *)verts->v;
  *(__m256i *)quadCache->verts[2].v = *(__m256i *)verts[2].v;
  quadCache->color = *color;
  if ( has3DTransforms )
    quadCache->flags |= 2u;
  if ( LUI_Render_GetAsyncRenderSuspended() )
    quadCache->flags |= 0x20u;
  v23 = -1i64;
  quadCache->glitchAmount = glitchAmount;
  quadCache->scopeIndex = -1;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v25 = 0;
  quadCache->unitScale = *(float *)&CurrentUnitScale;
  quadCache->blurAmount = blurAmount;
  quadCache->parallaxAmount = parallaxAmount;
  quadCache->extraParam = 0.0;
  quadCache->colorOp = *colorOp;
  quadCache->type[0] = 1;
  CurrentRTT = LUI_Render_GetCurrentRTT();
  if ( text && CurrentRTT && R_RTT_UseDirtyCheck(localClientNum, CurrentRTT) )
  {
    do
      ++v23;
    while ( text[v23] );
    if ( (unsigned int)v23 > 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 376, ASSERT_TYPE_ASSERT, "(stringSize <= 4096)", (const char *)&queryFormat, "stringSize <= 4096") )
      __debugbreak();
    v27 = (unsigned int)v23;
    v28 = ~(_DWORD)v23;
    v29 = text;
    if ( (_DWORD)v23 )
    {
      do
      {
        v30 = *(unsigned __int8 *)v29++;
        v28 = (v28 >> 8) ^ g_crc32Table[v30 ^ (unsigned __int8)v28];
        --v27;
      }
      while ( v27 );
    }
    v25 = ~v28;
  }
  quadCache->text.textChecksum = v25;
  j_lua_pushstring(luaVM, text);
  quadCache->text.textRef = LUI_Ref_Monitor_AddRef(luaVM, -10000);
  quadCache->text.tracking = tracking;
  quadCache->text.fontSize = fontSize;
  quadCache->text.font = font;
  quadCache->text.fontMaterial = fontMaterial;
  quadCache->text.iconsMaterial = iconsMaterial;
  quadCache->text.textRotation = rotation;
  if ( fontDecodeStyle )
  {
    quadCache->flags |= 4u;
    quadCache->text.decodeStyle = *fontDecodeStyle;
  }
  if ( fontGlowStyle )
  {
    quadCache->flags |= 8u;
    quadCache->text.glowStyle = *fontGlowStyle;
  }
  if ( tintIcons )
    quadCache->flags |= 1u;
}

/*
==============
LUI_QuadCache_ClearDrawList
==============
*/
void LUI_QuadCache_ClearDrawList(const LocalClientNum_t localClientNum)
{
  s_uiDrawListClient = localClientNum;
  s_uiDrawList.size = 0;
  s_uiDrawList.lastHeader = NULL;
  memset_0(s_uiDrawList.customList, 0, sizeof(s_uiDrawList.customList));
}

/*
==============
LUI_QuadCache_CustomDrawListBegin
==============
*/
void LUI_QuadCache_CustomDrawListBegin(const LocalClientNum_t localClientNum, unsigned int customList)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int8 *v5; 
  bool v6; 

  v2 = customList;
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 602, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v4 = (s_uiDrawList.size + 3) & 0xFFFFFFFC;
  if ( !s_uiDrawList.lastHeader && (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
    __debugbreak();
  if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v4 + 8) )
  {
    v5 = &s_uiDrawList.buffer[v4];
    *v5 = 4;
    *((_WORD *)v5 + 1) = 0;
    if ( s_uiDrawList.lastHeader )
      s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v5 - (unsigned __int8 *)s_uiDrawList.lastHeader);
    v6 = localClientNum == s_uiDrawListClient;
    s_uiDrawList.lastHeader = (UIDrawListHeader *)v5;
    *((_DWORD *)v5 + 1) = v2;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
      __debugbreak();
    if ( !s_uiDrawList.customList[v2] )
      s_uiDrawList.customList[v2] = v5;
  }
}

/*
==============
LUI_QuadCache_CustomDrawListEnd
==============
*/
void LUI_QuadCache_CustomDrawListEnd(const LocalClientNum_t localClientNum, unsigned int customList)
{
  __int64 v2; 
  unsigned __int8 **v4; 
  __int64 v5; 
  unsigned __int8 *v6; 
  unsigned __int8 CurrentRTT; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  LUIQuadCacheListInfo info; 
  unsigned int drawListBufferSize; 
  unsigned __int64 drawListChecksum; 

  v2 = customList;
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 826, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v4 = &s_uiDrawList.customList[v2];
  if ( &s_uiDrawList.buffer[s_uiDrawList.size] == *v4 )
    *v4 = NULL;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 266, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  v5 = (s_uiDrawList.size + 3) & 0xFFFFFFFC;
  if ( !s_uiDrawList.lastHeader && (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 271, ASSERT_TYPE_ASSERT, "(list->lastHeader != nullptr || cmdStart == 0)", (const char *)&queryFormat, "list->lastHeader != nullptr || cmdStart == 0") )
    __debugbreak();
  if ( LUI_QuadCache_SetDrawListSize(&s_uiDrawList, v5 + 8) )
  {
    v6 = &s_uiDrawList.buffer[v5];
    *v6 = 5;
    *((_WORD *)v6 + 1) = 0;
    if ( s_uiDrawList.lastHeader )
      s_uiDrawList.lastHeader->bytesToNext = truncate_cast<unsigned short,__int64>(v6 - (unsigned __int8 *)s_uiDrawList.lastHeader);
    s_uiDrawList.lastHeader = (UIDrawListHeader *)v6;
    *((_DWORD *)v6 + 1) = v2;
  }
  CurrentRTT = LUI_Render_GetCurrentRTT();
  v8 = CurrentRTT;
  if ( CurrentRTT && *v4 && R_RTT_UseDirtyCheck(localClientNum, CurrentRTT) )
  {
    R_RTT_GetChecksum(localClientNum, v8, &drawListChecksum, &drawListBufferSize);
    v9 = (unsigned int)&s_uiDrawList + s_uiDrawList.size - *(_DWORD *)v4;
    v10 = LUI_QuadCache_DrawList_Checksum(*v4, v9, &info);
    if ( v9 == drawListBufferSize && v10 == drawListChecksum )
      *v4 = NULL;
    else
      R_RTT_SetChecksum(localClientNum, v8, v10, v9);
  }
}

/*
==============
LUI_QuadCache_DrawListOverflowed
==============
*/
bool LUI_QuadCache_DrawListOverflowed(UIDrawList *list)
{
  bool ShouldDrawDebugBounds; 
  unsigned int v3; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 238, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  ShouldDrawDebugBounds = LUI_ShouldDrawDebugBounds();
  v3 = 0x8000;
  if ( ShouldDrawDebugBounds )
    v3 = 76800;
  return list->size > v3;
}

/*
==============
LUI_QuadCache_DrawList_Checksum
==============
*/
unsigned __int64 LUI_QuadCache_DrawList_Checksum(unsigned __int8 *buffer, const unsigned int bufferSize, LUIQuadCacheListInfo *info)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  unsigned __int8 *v6; 
  int i; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  const void *v12; 
  unsigned __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int8 *v18; 
  unsigned __int64 v19; 
  int v20; 
  unsigned __int8 *v21; 
  unsigned __int64 v22; 
  unsigned __int16 v23; 
  int v25; 

  v25 = (int)buffer;
  v3 = bufferSize;
  v4 = (int)buffer;
  v5 = bufferSize;
  v6 = buffer;
  for ( i = (int)buffer; ; i = (int)v6 )
  {
    if ( i - v4 > v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 702, ASSERT_TYPE_ASSERT, "(bufferUsed <= bufferSize)", (const char *)&queryFormat, "bufferUsed <= bufferSize") )
      __debugbreak();
    if ( !*v6 )
    {
      v18 = (unsigned __int8 *)*((_QWORD *)v6 + 1);
      v19 = 8i64;
      goto LABEL_33;
    }
    if ( *v6 == 1 )
    {
      v21 = &v6[v6[4]];
      v22 = j_CoD_XXH64(*((const void **)v6 + 2), 8ui64, v5);
      v19 = *((unsigned int *)v6 + 2);
      v17 = v22;
      v18 = v21;
      goto LABEL_34;
    }
    if ( *v6 != 2 )
    {
      if ( *v6 != 3 )
        goto LABEL_35;
      v8 = *((_QWORD *)v6 + 1);
      v9 = 0;
      while ( 1 )
      {
        v10 = v8;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 759, ASSERT_TYPE_ASSERT, "(quadCache)", (const char *)&queryFormat, "quadCache") )
          __debugbreak();
        v11 = v5;
        v12 = (const void *)v8;
        if ( *(_BYTE *)(v8 + 116) )
        {
          v5 = j_CoD_XXH64((const void *)v8, 0xA0ui64, v5);
          v14 = *(_DWORD *)(v8 + 80);
          if ( (v14 & 4) != 0 )
          {
            v5 = j_CoD_XXH64((const void *)(v8 + 160), 0x14ui64, v5);
            v14 = *(_DWORD *)(v8 + 80);
          }
          if ( (v14 & 8) == 0 )
            goto LABEL_20;
          v12 = (const void *)(v8 + 180);
          v11 = v5;
          v13 = 56i64;
        }
        else
        {
          v13 = 184i64;
        }
        v5 = j_CoD_XXH64(v12, v13, v11);
LABEL_20:
        v15 = *((_QWORD *)v6 + 2);
        ++v9;
        v8 = *(_QWORD *)(v8 + 240);
        if ( v9 >= 4500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 782, ASSERT_TYPE_ASSERT, "(quadCount < 4500)", (const char *)&queryFormat, "quadCount < MAX_LUI_ELEMENTS") )
          __debugbreak();
        if ( v10 == v15 )
        {
          v4 = v25;
          v3 = bufferSize;
          goto LABEL_35;
        }
      }
    }
    v16 = *((_QWORD *)v6 + 1);
    v17 = v5;
    v18 = (unsigned __int8 *)v16;
    if ( !*(_BYTE *)(v16 + 116) )
    {
      v19 = 184i64;
LABEL_34:
      v5 = j_CoD_XXH64(v18, v19, v17);
      goto LABEL_35;
    }
    v5 = j_CoD_XXH64((const void *)v16, 0xA0ui64, v5);
    v20 = *(_DWORD *)(v16 + 80);
    if ( (v20 & 4) != 0 )
    {
      v5 = j_CoD_XXH64((const void *)(v16 + 160), 0x14ui64, v5);
      v20 = *(_DWORD *)(v16 + 80);
    }
    if ( (v20 & 8) != 0 )
    {
      v18 = (unsigned __int8 *)(v16 + 180);
      v19 = 56i64;
LABEL_33:
      v17 = v5;
      goto LABEL_34;
    }
LABEL_35:
    v23 = *((_WORD *)v6 + 1);
    if ( !v23 )
      break;
    v6 += v23;
  }
  return v5;
}

/*
==============
LUI_QuadCache_Element_AppendToCache
==============
*/
void LUI_QuadCache_Element_AppendToCache(const LocalClientNum_t localClientNum, LUIElement *element, UIQuadCache *quadCache)
{
  if ( element->hasLeftoverQuadcache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 307, ASSERT_TYPE_ASSERT, "(!element->hasLeftoverQuadcache)", (const char *)&queryFormat, "!element->hasLeftoverQuadcache") )
    __debugbreak();
  if ( element->firstCache )
  {
    if ( !element->lastCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 315, ASSERT_TYPE_ASSERT, "(element->lastCache)", (const char *)&queryFormat, "element->lastCache") )
      __debugbreak();
    element->lastCache->next = quadCache;
  }
  else
  {
    element->firstCache = quadCache;
  }
  element->lastCache = quadCache;
  LUI_QuadCache_AddDrawListQuad(localClientNum, quadCache);
}

/*
==============
LUI_QuadCache_Element_CacheImageQuad
==============
*/
void LUI_QuadCache_Element_CacheImageQuad(lua_State *luaVM, LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *verts, const vec4_t *color, LUIQuadUV *uv, const GfxImage *image, Material *material, float glitchAmount, float blurAmount, unsigned __int16 samplerState, float parallaxAmount, const LUIColorOpData *colorOp, const bool has3DTransforms, const int scopeIndex, const bool applyScopeBufferWeight, const LUIColorSource colorSource, const float extraParam)
{
  UIQuadCache *FreeQuadCacheForElement; 
  double CurrentUnitScale; 
  double v24; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 465, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  FreeQuadCacheForElement = LUI_QuadCache_GetFreeQuadCacheForElement(luaVM, element);
  *(__m256i *)FreeQuadCacheForElement->verts[0].v = *(__m256i *)verts->v;
  *(__m256i *)FreeQuadCacheForElement->verts[2].v = *(__m256i *)verts[2].v;
  FreeQuadCacheForElement->color = *color;
  if ( has3DTransforms )
    FreeQuadCacheForElement->flags |= 2u;
  if ( colorSource == LUI_COLOR_SOURCE_IMAGE_PIXEL_SHAPE )
    FreeQuadCacheForElement->flags |= 0x10u;
  if ( LUI_Render_GetAsyncRenderSuspended() )
    FreeQuadCacheForElement->flags |= 0x20u;
  if ( applyScopeBufferWeight )
    FreeQuadCacheForElement->flags |= 0x40u;
  FreeQuadCacheForElement->glitchAmount = glitchAmount;
  FreeQuadCacheForElement->scopeIndex = scopeIndex;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  FreeQuadCacheForElement->blurAmount = blurAmount;
  FreeQuadCacheForElement->unitScale = *(float *)&CurrentUnitScale;
  FreeQuadCacheForElement->extraParam = extraParam;
  FreeQuadCacheForElement->parallaxAmount = parallaxAmount;
  FreeQuadCacheForElement->colorOp = *colorOp;
  FreeQuadCacheForElement->type[0] = 0;
  FreeQuadCacheForElement->image.texture = image;
  FreeQuadCacheForElement->image.material = material;
  *(__m256i *)&FreeQuadCacheForElement->image.uv.minMax.uMin = *(__m256i *)&uv->minMax.uMin;
  v24 = *(double *)&uv->rotated.angle;
  FreeQuadCacheForElement->image.samplerState = samplerState;
  *(double *)&FreeQuadCacheForElement->image.uv.rotated.angle = v24;
  LUI_QuadCache_Element_AppendToCache(localClientNum, element, FreeQuadCacheForElement);
}

/*
==============
LUI_QuadCache_Element_CacheTextQuad
==============
*/
void LUI_QuadCache_Element_CacheTextQuad(lua_State *luaVM, LocalClientNum_t localClientNum, LUIElement *element, const vec4_t *verts, const vec4_t *color, GfxFont *font, const char *text, char tracking, float rotation, int fontSize, Material *fontMaterial, Material *iconsMaterial, bool tintIcons, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, float glitchAmount, float blurAmount, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms)
{
  UIQuadCache *FreeQuadCacheForElement; 

  FreeQuadCacheForElement = LUI_QuadCache_GetFreeQuadCacheForElement(luaVM, element);
  LUI_QuadCache_CacheText(FreeQuadCacheForElement, luaVM, localClientNum, verts, color, font, text, tracking, rotation, fontSize, fontMaterial, iconsMaterial, tintIcons, fontDecodeStyle, fontGlowStyle, glitchAmount, blurAmount, parallaxAmount, colorOp, has3DTransforms);
  LUI_QuadCache_Element_AppendToCache(localClientNum, element, FreeQuadCacheForElement);
}

/*
==============
LUI_QuadCache_Element_CanDraw
==============
*/
bool LUI_QuadCache_Element_CanDraw(LUIElement *element)
{
  return !element->hasLeftoverQuadcache && element->firstCache && element->lastCache;
}

/*
==============
LUI_QuadCache_Element_Invalidate
==============
*/
void LUI_QuadCache_Element_Invalidate(LUIElement *element)
{
  bool v1; 
  bool v2; 

  v1 = element->firstCache == NULL;
  element->quadCached = 0;
  v2 = !v1;
  v1 = !element->deeplyCached;
  element->hasLeftoverQuadcache = v2;
  if ( !v1 )
    LUI_QuadCache_Element_InvalidateParents(element);
}

/*
==============
LUI_QuadCache_Element_InvalidateParents
==============
*/
void LUI_QuadCache_Element_InvalidateParents(LUIElement *element)
{
  LUIElement *v1; 

  v1 = element;
  if ( !element->deeplyCached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 497, ASSERT_TYPE_ASSERT, "(element->deeplyCached)", (const char *)&queryFormat, "element->deeplyCached") )
    __debugbreak();
  do
  {
    v1->deeplyCached = 0;
    v1->firstDeepCache = NULL;
    v1->lastDeepCache = NULL;
    v1 = v1->parent;
  }
  while ( v1 && v1->deeplyCached );
}

/*
==============
LUI_QuadCache_Element_WipeCache
==============
*/
void LUI_QuadCache_Element_WipeCache(lua_State *luaVM, LUIElement *element)
{
  UIQuadCache *firstCache; 

  firstCache = element->firstCache;
  if ( firstCache )
  {
    LUI_QuadCache_FreeChain(luaVM, firstCache, element->lastCache);
    element->firstCache = NULL;
    element->lastCache = NULL;
    element->hasLeftoverQuadcache = 0;
  }
}

/*
==============
LUI_QuadCache_ExecDrawList
==============
*/
void LUI_QuadCache_ExecDrawList(const LocalClientNum_t localClientNum, lua_State *luaVM)
{
  LUI_QuadCache_ExecDrawList_Internal(localClientNum, 1u, luaVM);
}

/*
==============
LUI_QuadCache_ExecDrawList_All
==============
*/
void LUI_QuadCache_ExecDrawList_All(const LocalClientNum_t localClientNum, lua_State *luaVM)
{
  LUI_QuadCache_ExecDrawList_Internal(localClientNum, 0xFFFFFFFF, luaVM);
}

/*
==============
LUI_QuadCache_ExecDrawList_CustomList
==============
*/
void LUI_QuadCache_ExecDrawList_CustomList(const LocalClientNum_t localClientNum, const unsigned int customList, lua_State *luaVM)
{
  char v4; 

  v4 = customList;
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 1041, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  LUI_QuadCache_ExecDrawList_Internal(localClientNum, 1 << v4, luaVM);
}

/*
==============
LUI_QuadCache_ExecDrawList_Internal
==============
*/
void LUI_QuadCache_ExecDrawList_Internal(const LocalClientNum_t localClientNum, const unsigned int filterMask, lua_State *luaVM, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; 
  bool ShouldDrawDebugBounds; 
  __int64 v10; 
  UIDrawList *v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  const char *v14; 
  UIQuadCache *Next; 
  int v16; 
  UIQuadCache *v17; 
  UIQuadCache *v18; 
  unsigned __int16 v19; 
  unsigned __int8 v20; 
  unsigned __int8 v22; 

  v8 = filterMask;
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  if ( s_uiDrawList.size )
  {
    if ( LUI_QuadCache_DrawListOverflowed(&s_uiDrawList) )
    {
      ShouldDrawDebugBounds = LUI_ShouldDrawDebugBounds();
      v10 = 0x8000i64;
      if ( ShouldDrawDebugBounds )
        v10 = 76800i64;
      Com_PrintError(13, "LUI: draw list size %u exceeded limit %i, dropping LUI frame\n", s_uiDrawList.size, v10, a5, a6, a7);
    }
    else
    {
      v11 = &s_uiDrawList;
      v12 = v8 & 1;
      v22 = v8 & 1;
      v13 = v8 & 1;
      v20 = v8 & 1;
      while ( 1 )
      {
        v14 = "reinterpret_cast<uint8_t*>( header ) < ( list->buffer + list->size )";
        if ( v11 >= (UIDrawList *)&s_uiDrawList.buffer[s_uiDrawList.size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 942, ASSERT_TYPE_ASSERT, "(reinterpret_cast<uint8_t*>( header ) < ( list->buffer + list->size ))", (const char *)&queryFormat, "reinterpret_cast<uint8_t*>( header ) < ( list->buffer + list->size )") )
          __debugbreak();
        switch ( v11->buffer[0] )
        {
          case 0u:
            if ( v13 )
              (*(void (__fastcall **)(const char *, unsigned __int64))&v11->buffer[8])(v14, 0x140000000ui64);
            break;
          case 1u:
            if ( v13 )
              (*(void (__fastcall **)(unsigned __int8 *, unsigned __int64))&v11->buffer[16])(&v11->buffer[v11->buffer[4]], 0x140000000ui64);
            break;
          case 2u:
            if ( v13 )
              LUI_Render_DrawQuadCache(luaVM, *(UIQuadCache **)&v11->buffer[8]);
            break;
          case 3u:
            if ( v13 )
            {
              Next = *(UIQuadCache **)&v11->buffer[8];
              v16 = 0;
              do
              {
                v17 = Next;
                if ( !Next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 987, ASSERT_TYPE_ASSERT, "(quadCache)", (const char *)&queryFormat, "quadCache") )
                  __debugbreak();
                v18 = *(UIQuadCache **)&v11->buffer[16];
                LUI_Render_DrawQuadCache(luaVM, Next);
                ++v16;
                Next = LUI_QuadCache_GetNext(Next);
                if ( v16 >= 4500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 993, ASSERT_TYPE_ASSERT, "(quadCount < 4500)", (const char *)&queryFormat, "quadCount < MAX_LUI_ELEMENTS") )
                  __debugbreak();
              }
              while ( v17 != v18 );
              v13 = v20;
              v12 = v22;
              v8 = filterMask;
            }
            break;
          case 4u:
            v13 = _bittest((const int *)&v8, *(_DWORD *)&v11->buffer[4]);
            v20 = v13;
            break;
          case 5u:
            v13 = v12;
            v20 = v12;
            break;
          default:
            break;
        }
        v19 = *(_WORD *)&v11->buffer[2];
        if ( !v19 )
          break;
        v11 = (UIDrawList *)((char *)v11 + v19);
      }
    }
  }
}

/*
==============
LUI_QuadCache_FreeChain
==============
*/
void LUI_QuadCache_FreeChain(lua_State *luaVM, UIQuadCache *chainStart, UIQuadCache *chainEnd)
{
  UIQuadCache *v4; 
  bool v6; 
  UIQuadCache *next; 
  unsigned __int64 v8; 
  __int64 v9; 

  if ( chainStart )
  {
    v4 = chainStart;
    v6 = 0;
    do
    {
      if ( v6 )
        break;
      v6 = v4 == chainEnd;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 142, ASSERT_TYPE_ASSERT, "(quadCache)", (const char *)&queryFormat, "quadCache") )
        __debugbreak();
      next = v4->next;
      --s_LUIAllocatedQuadCaches;
      s_LUIAllocatedQuadCachesMemory -= 248;
      if ( !LUI_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 196, ASSERT_TYPE_ASSERT, "(LUI_IsInitialized())", (const char *)&queryFormat, "LUI_IsInitialized()") )
        __debugbreak();
      LUI_QuadCache_FreeTextRef(luaVM, v4);
      v8 = ((char *)v4 - (char *)&s_quadCachePool) / 248;
      if ( v8 > 0x1193 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 198, ASSERT_TYPE_ASSERT, "(s_quadCachePool.Free( quadCache ))", (const char *)&queryFormat, "s_quadCachePool.Free( quadCache )") )
          __debugbreak();
      }
      else
      {
        v9 = (unsigned __int16)v8;
        if ( (unsigned __int16)v8 >= 0x1194ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 363, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
          __debugbreak();
        if ( s_quadCachePool.m_poolData[v9] <= 0x1194u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 364, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
          __debugbreak();
        s_quadCachePool.m_poolData[v9] = s_quadCachePool.m_firstFree;
        s_quadCachePool.m_firstFree = v9;
        memset_0(v4, 0, sizeof(UIQuadCache));
      }
      v4 = next;
    }
    while ( next );
  }
}

/*
==============
LUI_QuadCache_FreeTextRef
==============
*/
void LUI_QuadCache_FreeTextRef(lua_State *luaVM, UIQuadCache *quadCache)
{
  int textRef; 

  if ( quadCache->type[0] == 1 )
  {
    if ( quadCache->text.textRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 183, ASSERT_TYPE_ASSERT, "(quadCache->text.textRef != (-2))", (const char *)&queryFormat, "quadCache->text.textRef != LUA_NOREF") )
      __debugbreak();
    textRef = quadCache->text.textRef;
    LUI_Tween_Verify_Tween_Metatable_Unref(-10000, textRef);
    if ( textRef != -1 )
    {
      j_lua_rawgeti(luaVM, -10000, textRef);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 86, ASSERT_TYPE_ASSERT, "(isFunction( luaVM, -1 ))", (const char *)&queryFormat, "isFunction( luaVM, -1 )") )
        __debugbreak();
      j_lua_settop(luaVM, -2);
    }
    LUI_Ref_Monitor_RemoveRef(luaVM, -10000, quadCache->text.textRef);
    quadCache->text.textRef = -2;
  }
}

/*
==============
LUI_QuadCache_GetDrawListHighWaterMark
==============
*/
__int64 LUI_QuadCache_GetDrawListHighWaterMark()
{
  return s_uiDrawListHighWaterMark;
}

/*
==============
LUI_QuadCache_GetDrawListMaxSize
==============
*/
__int64 LUI_QuadCache_GetDrawListMaxSize()
{
  bool ShouldDrawDebugBounds; 
  unsigned int v1; 

  ShouldDrawDebugBounds = LUI_ShouldDrawDebugBounds();
  v1 = 0x8000;
  if ( ShouldDrawDebugBounds )
    return 76800;
  return v1;
}

/*
==============
LUI_QuadCache_GetDrawListSize
==============
*/
__int64 LUI_QuadCache_GetDrawListSize(const LocalClientNum_t localClientNum)
{
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  return s_uiDrawList.size;
}

/*
==============
LUI_QuadCache_GetDrawListState
==============
*/
void LUI_QuadCache_GetDrawListState(const LocalClientNum_t localClientNum, UIDrawListState *outState)
{
  if ( localClientNum == s_uiDrawListClient )
  {
    outState->size = s_uiDrawList.size;
    outState->lastHeader = s_uiDrawList.lastHeader;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
      __debugbreak();
    outState->size = s_uiDrawList.size;
    outState->lastHeader = s_uiDrawList.lastHeader;
  }
}

/*
==============
LUI_QuadCache_GetFreeQuadCacheForElement
==============
*/
UIQuadCache *LUI_QuadCache_GetFreeQuadCacheForElement(lua_State *luaVM, LUIElement *element)
{
  int i; 
  unsigned __int16 m_firstFree; 
  UIQuadCache *v6; 
  UIQuadCache *result; 
  UIQuadCache *firstCache; 
  UIQuadCache *v9; 
  UIQuadCache *lastCache; 

  if ( element->hasLeftoverQuadcache )
  {
    if ( !element->firstCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 444, ASSERT_TYPE_ASSERT, "(element->firstCache)", (const char *)&queryFormat, "element->firstCache") )
      __debugbreak();
    firstCache = element->firstCache;
    LUI_QuadCache_FreeTextRef(luaVM, firstCache);
    v9 = element->firstCache;
    lastCache = element->lastCache;
    if ( v9 != lastCache )
      LUI_QuadCache_FreeChain(luaVM, v9->next, lastCache);
    element->firstCache = NULL;
    element->lastCache = NULL;
    memset_0(firstCache, 0, sizeof(UIQuadCache));
    result = firstCache;
    element->hasLeftoverQuadcache = 0;
  }
  else
  {
    for ( i = 0; ; i = 1 )
    {
      m_firstFree = s_quadCachePool.m_firstFree;
      if ( s_quadCachePool.m_firstFree < 0x1194u )
      {
        s_quadCachePool.m_firstFree = s_quadCachePool.m_poolData[s_quadCachePool.m_firstFree];
        s_quadCachePool.m_poolData[m_firstFree] = 4501;
        v6 = &s_quadCachePool.m_pool[m_firstFree];
        j_lua_pushlightuserdata(luaVM, v6);
        if ( v6 )
          break;
      }
      if ( i )
        j_luaL_error(luaVM, "Failed to allocate from quad cache pool");
      LUI_EmergencyFullGC(luaVM, "Quad cache pool full (%i) (MAX_LUI_ELEMENTS)", 4500i64);
    }
    j_lua_settop(luaVM, -2);
    ++s_LUIAllocatedQuadCaches;
    result = v6;
    s_LUIAllocatedQuadCachesMemory += 248;
  }
  return result;
}

/*
==============
LUI_QuadCache_GetMemoryAllocatedForQuadCaches
==============
*/
__int64 LUI_QuadCache_GetMemoryAllocatedForQuadCaches()
{
  return (unsigned int)s_LUIAllocatedQuadCachesMemory;
}

/*
==============
LUI_QuadCache_GetNext
==============
*/
UIQuadCache *LUI_QuadCache_GetNext(UIQuadCache *quadCache)
{
  if ( quadCache )
    return quadCache->next;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 142, ASSERT_TYPE_ASSERT, "(quadCache)", (const char *)&queryFormat, "quadCache") )
    __debugbreak();
  return (UIQuadCache *)MEMORY[0xF0];
}

/*
==============
LUI_QuadCache_GetNumAllocatedQuadCaches
==============
*/
__int64 LUI_QuadCache_GetNumAllocatedQuadCaches()
{
  return (unsigned int)s_LUIAllocatedQuadCaches;
}

/*
==============
LUI_QuadCache_Initialize
==============
*/
void LUI_QuadCache_Initialize(void)
{
  unsigned __int16 *m_poolData; 
  unsigned __int16 i; 

  memset_0(&s_quadCachePool, 0, 0x110760ui64);
  m_poolData = s_quadCachePool.m_poolData;
  for ( i = 0; i < 0x1194u; *m_poolData++ = ++i )
    ;
  s_quadCachePool.m_firstFree = 0;
}

/*
==============
LUI_QuadCache_RestoreDrawListState
==============
*/
void LUI_QuadCache_RestoreDrawListState(const LocalClientNum_t localClientNum, const UIDrawListState *state)
{
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  s_uiDrawList.size = state->size;
  s_uiDrawList.lastHeader = state->lastHeader;
  s_uiDrawList.lastHeader->bytesToNext = 0;
}

/*
==============
LUI_QuadCache_SetDrawListSize
==============
*/
bool LUI_QuadCache_SetDrawListSize(UIDrawList *list, const unsigned int size)
{
  bool v4; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 245, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( size <= list->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 247, ASSERT_TYPE_ASSERT, "(size > list->size)", (const char *)&queryFormat, "size > list->size") )
    __debugbreak();
  v4 = s_uiDrawListHighWaterMark <= size;
  list->size = size;
  if ( !v4 )
    size = s_uiDrawListHighWaterMark;
  s_uiDrawListHighWaterMark = size;
  return !LUI_QuadCache_DrawListOverflowed(list);
}

/*
==============
LUI_QuadCache_UsingCustomDrawList
==============
*/
bool LUI_QuadCache_UsingCustomDrawList(const LocalClientNum_t localClientNum, unsigned int customList)
{
  __int64 v2; 

  v2 = customList;
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 876, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  if ( localClientNum != s_uiDrawListClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_quadcache.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum == s_uiDrawListClient)", (const char *)&queryFormat, "localClientNum == s_uiDrawListClient") )
    __debugbreak();
  return s_uiDrawList.customList[v2] != NULL;
}

