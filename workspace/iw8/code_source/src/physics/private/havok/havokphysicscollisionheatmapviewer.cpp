/*
==============
HavokPhysicsCollisionHeatmapViewer::registerViewer
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::registerViewer(hkProcessFactory *factory)
{
  ?registerViewer@HavokPhysicsCollisionHeatmapViewer@@SAXAEAVhkProcessFactory@@@Z(factory);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::HavokPhysicsCollisionHeatmapViewer
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::HavokPhysicsCollisionHeatmapViewer(HavokPhysicsCollisionHeatmapViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  ??0HavokPhysicsCollisionHeatmapViewer@@IEAA@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(this, contexts);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::step
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::step(HavokPhysicsCollisionHeatmapViewer *this, float deltaTime)
{
  ?step@HavokPhysicsCollisionHeatmapViewer@@UEAAXM@Z(this, deltaTime);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::debugDrawEntry
==============
*/

bool __fastcall HavokPhysicsCollisionHeatmapViewer::debugDrawEntry(int id, int counter, CollisionHeatmapEntry *entry, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  return ?debugDrawEntry@HavokPhysicsCollisionHeatmapViewer@@KA_NHHPEAUCollisionHeatmapEntry@@PEBUScreenPlacement@@PEAM2MM@Z(id, counter, entry, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::create
==============
*/

hkProcess *__fastcall HavokPhysicsCollisionHeatmapViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  return ?create@HavokPhysicsCollisionHeatmapViewer@@SAPEAVhkProcess@@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(contexts);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::debugDraw
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::debugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?debugDraw@HavokPhysicsCollisionHeatmapViewer@@SAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawEntry
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::drawEntry(HavokPhysicsCollisionHeatmapViewer *this, int id, CollisionHeatmapEntry *entry)
{
  ?drawEntry@HavokPhysicsCollisionHeatmapViewer@@IEAAXHPEAUCollisionHeatmapEntry@@@Z(this, id, entry);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawBox
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::drawBox(HavokPhysicsCollisionHeatmapViewer *this, int id, const hkVector4f *minExtents, const hkVector4f *maxExtents, const unsigned int *color)
{
  ?drawBox@HavokPhysicsCollisionHeatmapViewer@@IEAAXHAEBVhkVector4f@@0AEBI@Z(this, id, minExtents, maxExtents, color);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::~HavokPhysicsCollisionHeatmapViewer
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::~HavokPhysicsCollisionHeatmapViewer(HavokPhysicsCollisionHeatmapViewer *this)
{
  ??1HavokPhysicsCollisionHeatmapViewer@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::HavokPhysicsCollisionHeatmapViewer
==============
*/
void HavokPhysicsCollisionHeatmapViewer::HavokPhysicsCollisionHeatmapViewer(HavokPhysicsCollisionHeatmapViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  __int64 m_size; 
  hkArrayView<hkProcessContext *> contextsa; 

  m_size = contexts->m_size;
  contextsa.m_begin = contexts->m_data;
  contextsa.m_end = &contextsa.m_begin[m_size];
  hknpViewer::hknpViewer(this, &contextsa);
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsCollisionHeatmapViewer_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkProcess'};
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::~HavokPhysicsCollisionHeatmapViewer
==============
*/
void HavokPhysicsCollisionHeatmapViewer::~HavokPhysicsCollisionHeatmapViewer(HavokPhysicsCollisionHeatmapViewer *this)
{
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsCollisionHeatmapViewer_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkProcess'};
  hknpViewer::~hknpViewer(this);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::create
==============
*/
hkProcess *HavokPhysicsCollisionHeatmapViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  hkMemoryRouter *Value; 
  hknpViewer *v3; 
  hknpViewer *v4; 
  __int64 m_size; 
  hkProcess *result; 
  hkArrayView<hkProcessContext *> contextsa; 

  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (hknpViewer *)Value->m_heap->blockAlloc(Value->m_heap, 104i64);
  v4 = v3;
  if ( v3 )
  {
    m_size = contexts->m_size;
    contextsa.m_begin = contexts->m_data;
    contextsa.m_end = &contextsa.m_begin[m_size];
    hknpViewer::hknpViewer(v3, &contextsa);
    v4->hkReferencedObject::hkBaseObject::__vftable = (hknpViewer_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkReferencedObject'};
    v4->hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionHeatmapViewer::`vftable'{for `hkProcess'};
  }
  else
  {
    v4 = NULL;
  }
  result = &v4->hkProcess;
  if ( !v4 )
    return 0i64;
  return result;
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::debugDraw
==============
*/
void HavokPhysicsCollisionHeatmapViewer::debugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int numCollisionHeatmapEntries; 
  unsigned int v9; 
  unsigned int i; 
  CollisionHeatmapEntry *v11; 
  char v12; 
  unsigned int v13; 
  vec4_t *setColor; 
  __int64 forceColor; 
  char dest[256]; 

  numCollisionHeatmapEntries = cm.numCollisionHeatmapEntries;
  v9 = 0;
  for ( i = 0; i < numCollisionHeatmapEntries; v9 = v13 )
  {
    v11 = &cm.collisionHeatmap[i];
    if ( physics_debugVisualizeWorldCollisionHeatmapGood->current.value <= v11->vertexDensity )
    {
      LODWORD(forceColor) = v11->vertexCount;
      LODWORD(setColor) = i;
      Com_sprintf(dest, 0x100ui64, "%i entry:%i verts:%i location:(%.1f %.1f %.1f)", v9, setColor, forceColor, (float)((float)(v11->minExtent.v[0] + v11->maxExtent.v[0]) * 0.5), (float)((float)(v11->minExtent.v[1] + v11->maxExtent.v[1]) * 0.5), (float)((float)(v11->minExtent.v[2] + v11->maxExtent.v[2]) * 0.5));
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      numCollisionHeatmapEntries = cm.numCollisionHeatmapEntries;
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    ++i;
    v13 = v9 + 1;
    if ( !v12 )
      v13 = v9;
  }
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::debugDrawEntry
==============
*/
bool HavokPhysicsCollisionHeatmapViewer::debugDrawEntry(int id, int counter, CollisionHeatmapEntry *entry, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  bool result; 
  int forceColor; 
  char dest[256]; 

  if ( physics_debugVisualizeWorldCollisionHeatmapGood->current.value > entry->vertexDensity )
    return 0;
  forceColor = entry->vertexCount;
  Com_sprintf(dest, 0x100ui64, "%i entry:%i verts:%i location:(%.1f %.1f %.1f)", (unsigned int)counter, id, forceColor, (float)((float)(entry->minExtent.v[0] + entry->maxExtent.v[0]) * 0.5), (float)((float)(entry->minExtent.v[1] + entry->maxExtent.v[1]) * 0.5), (float)((float)(entry->minExtent.v[2] + entry->maxExtent.v[2]) * 0.5));
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  result = 1;
  *y = charHeight + *y;
  return result;
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawBox
==============
*/
void HavokPhysicsCollisionHeatmapViewer::drawBox(HavokPhysicsCollisionHeatmapViewer *this, int id, const hkVector4f *minExtents, const hkVector4f *maxExtents, const unsigned int *color)
{
  float v5; 
  hkDebugDisplayHandler *m_ptr; 
  unsigned int v8; 
  __int64 v9; 
  char v10[16]; 
  __m128 m_quad; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 

  v5 = maxExtents->m_quad.m128_f32[1];
  m_ptr = this->m_displayHandler.m_ptr;
  m_quad = minExtents->m_quad;
  v14 = m_quad;
  v13 = m_quad;
  v12 = m_quad;
  v17 = m_quad;
  v16 = m_quad;
  v15 = m_quad;
  v8 = *color;
  v18 = m_quad;
  v16.m128_i32[0] = maxExtents->m_quad.m128_i32[0];
  v14.m128_f32[0] = v16.m128_f32[0];
  v12.m128_f32[0] = v16.m128_f32[0];
  m_quad.m128_f32[0] = v16.m128_f32[0];
  v9 = id;
  v15.m128_i32[2] = maxExtents->m_quad.m128_i32[2];
  v13.m128_f32[2] = v15.m128_f32[2];
  v12.m128_f32[2] = v15.m128_f32[2];
  m_quad.m128_f32[2] = v15.m128_f32[2];
  v17.m128_f32[1] = v5;
  v14.m128_f32[1] = v5;
  v13.m128_f32[1] = v5;
  m_quad.m128_f32[1] = v5;
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, _QWORD, __m128 *, __m128 *, unsigned int, int))m_ptr->display2Points)(m_ptr, v10, id, &v18, &v17, v8, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v16, &v14, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v15, &v13, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v12, &m_quad, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v18, &v16, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v17, &v14, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v15, &v12, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v13, &m_quad, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v18, &v15, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v16, &v12, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v17, &v13, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __m128 *, __m128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v10, v9, &v14, &m_quad, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawEntry
==============
*/
void HavokPhysicsCollisionHeatmapViewer::drawEntry(HavokPhysicsCollisionHeatmapViewer *this, int id, CollisionHeatmapEntry *entry)
{
  __int128 v5; 
  __int128 v7; 
  __m128 v14; 
  float v15; 
  __int64 v16; 
  float v18; 
  float v19; 
  float vertexDensity; 
  float value; 
  float v22; 
  float v23; 
  unsigned int *color; 
  unsigned int v25; 
  vec3_t outPos; 
  hkVector4f maxExtents; 
  hkVector4f minExtents; 
  __m128 v29; 
  char dest[256]; 

  v5 = LODWORD(entry->minExtent.v[0]);
  *(float *)&v5 = entry->minExtent.v[0] * 0.03125;
  _XMM7 = v5;
  v7 = LODWORD(entry->maxExtent.v[0]);
  *(float *)&v7 = entry->maxExtent.v[0] * 0.03125;
  _XMM6 = v7;
  __asm
  {
    vinsertps xmm6, xmm6, xmm5, 10h
    vinsertps xmm6, xmm6, xmm1, 20h ; ' '
    vinsertps xmm7, xmm7, xmm3, 10h
    vinsertps xmm6, xmm6, xmm8, 30h ; '0'
    vinsertps xmm7, xmm7, xmm4, 20h ; ' '
    vinsertps xmm7, xmm7, xmm8, 30h ; '0'
  }
  v14 = _mm128_mul_ps(_mm128_add_ps(_XMM7, _XMM6), (__m128)_xmm);
  maxExtents.m_quad = _XMM6;
  v29 = v14;
  minExtents.m_quad = _XMM7;
  v15 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0] * 32.0;
  v16 = id;
  v18 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0] * 32.0;
  if ( cg_t::ms_allocatedCount > 0 )
  {
    CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
    v19 = (float)((float)((float)(outPos.v[1] - v18) * (float)(outPos.v[1] - v18)) + (float)((float)(outPos.v[0] - (float)(v14.m128_f32[0] * 32.0)) * (float)(outPos.v[0] - (float)(v14.m128_f32[0] * 32.0)))) + (float)((float)(outPos.v[2] - v15) * (float)(outPos.v[2] - v15));
    if ( v19 <= (float)(physics_debugVisualizeWorldCollisionHeatmapRange->current.value * physics_debugVisualizeWorldCollisionHeatmapRange->current.value) )
    {
      vertexDensity = entry->vertexDensity;
      value = physics_debugVisualizeWorldCollisionHeatmapGood->current.value;
      v22 = physics_debugVisualizeWorldCollisionHeatmapBad->current.value;
      if ( vertexDensity >= value )
      {
        if ( vertexDensity < v22 )
          v23 = (float)(vertexDensity - value) / (float)(v22 - value);
        else
          v23 = FLOAT_1_0;
        v25 = hkColor::rgbFromFloats(v23, 1.0 - v23, 0.0, 1.0);
        HavokPhysicsCollisionHeatmapViewer::drawBox(this, v16, &minExtents, &maxExtents, &v25);
        if ( v19 < 250000.0 )
        {
          LODWORD(color) = entry->vertexCount;
          Com_sprintf(dest, 0x100ui64, "%i:%i", (unsigned int)v16, color);
          ((void (__fastcall *)(hkDebugDisplayHandler *, unsigned int *, __int64, char *, __m128 *, unsigned int, int))this->m_displayHandler.m_ptr->display3dText)(this->m_displayHandler.m_ptr, &v25, v16, dest, &v29, v25, HavokPhysicsCollisionHeatmapViewer::s_tag);
        }
      }
    }
  }
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::registerViewer
==============
*/
void HavokPhysicsCollisionHeatmapViewer::registerViewer(hkProcessFactory *factory)
{
  HavokPhysicsCollisionHeatmapViewer::s_tag = hkProcessFactory::registerProcess(factory, "IW World-Collision Heatmap", HavokPhysicsCollisionHeatmapViewer::create, 0);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::step
==============
*/
void HavokPhysicsCollisionHeatmapViewer::step(HavokPhysicsCollisionHeatmapViewer *this, float deltaTime)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  unsigned int i; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtIWCollisionHeatmapViewer");
  for ( i = 0; i < cm.numCollisionHeatmapEntries; ++i )
    HavokPhysicsCollisionHeatmapViewer::drawEntry((HavokPhysicsCollisionHeatmapViewer *)((char *)this - 24), i, &cm.collisionHeatmap[i]);
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
}

