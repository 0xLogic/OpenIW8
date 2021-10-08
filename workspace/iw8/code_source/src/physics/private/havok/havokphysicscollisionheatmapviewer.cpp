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
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+38h+contexts.m_begin]
    vmovdqa xmmword ptr [rsp+38h+contexts.m_begin], xmm0
  }
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+contexts.m_begin]
      vmovdqa xmmword ptr [rsp+48h+contexts.m_begin], xmm0
    }
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
  unsigned int v12; 
  unsigned int v13; 
  __int64 v17; 
  bool v18; 
  char v21; 
  unsigned int v37; 
  vec4_t *setColor; 
  __int64 forceColor; 
  double shadow; 
  double v43; 
  float v44; 
  double adjust; 
  char dest[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  numCollisionHeatmapEntries = cm.numCollisionHeatmapEntries;
  _RSI = y;
  _R14 = x;
  v12 = 0;
  v13 = 0;
  if ( cm.numCollisionHeatmapEntries )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, cs:__real@3f000000
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovss  xmm7, [rsp+1B8h+charHeight]
    }
    do
    {
      _RAX = physics_debugVisualizeWorldCollisionHeatmapGood;
      v17 = v13;
      v18 = __CFADD__(cm.collisionHeatmap, v17 * 32) || &cm.collisionHeatmap[v17] == NULL;
      _RCX = &cm.collisionHeatmap[v17];
      __asm
      {
        vmovss  xmm0, dword ptr [rax+28h]
        vcomiss xmm0, dword ptr [rcx+4]
      }
      if ( v18 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+10h]
          vaddss  xmm1, xmm0, dword ptr [rcx+1Ch]
          vmovss  xmm0, dword ptr [rcx+0Ch]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm1, xmm0, dword ptr [rcx+18h]
          vmovss  xmm0, dword ptr [rcx+8]
          vcvtss2sd xmm5, xmm2, xmm2
          vmovsd  [rsp+1B8h+adjust], xmm5
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm1, xmm0, dword ptr [rcx+14h]
          vcvtss2sd xmm4, xmm2, xmm2
          vmovsd  [rsp+1B8h+var_180], xmm4
          vmulss  xmm2, xmm1, xmm6
          vcvtss2sd xmm3, xmm2, xmm2
          vmovsd  qword ptr [rsp+1B8h+shadow], xmm3
        }
        LODWORD(forceColor) = _RCX->vertexCount;
        LODWORD(setColor) = v13;
        Com_sprintf(dest, 0x100ui64, "%i entry:%i verts:%i location:(%.1f %.1f %.1f)", v12, setColor, forceColor, shadow, v43, adjust);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  dword ptr [rsp+1B8h+var_180], xmm7
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v44, 0);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm0
        }
        numCollisionHeatmapEntries = cm.numCollisionHeatmapEntries;
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
      ++v13;
      v37 = v12 + 1;
      if ( !v21 )
        v37 = v12;
      v12 = v37;
    }
    while ( v13 < numCollisionHeatmapEntries );
    __asm
    {
      vmovaps xmm7, [rsp+1B8h+var_58]
      vmovaps xmm6, [rsp+1B8h+var_48]
    }
  }
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::debugDrawEntry
==============
*/
bool HavokPhysicsCollisionHeatmapViewer::debugDrawEntry(int id, int counter, CollisionHeatmapEntry *entry, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  char v9; 
  bool result; 
  int forceColor; 
  double shadow; 
  double v37; 
  float v38; 
  double adjust; 
  char dest[256]; 

  _RAX = physics_debugVisualizeWorldCollisionHeatmapGood;
  _RSI = x;
  _RBX = y;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vcomiss xmm0, dword ptr [r8+4]
  }
  if ( !v9 )
    return 0;
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm0, dword ptr [r8+10h]
    vaddss  xmm1, xmm0, dword ptr [r8+1Ch]
    vmovss  xmm0, dword ptr [r8+0Ch]
    vaddss  xmm2, xmm0, dword ptr [r8+18h]
    vmovss  xmm0, dword ptr [r8+8]
    vmulss  xmm1, xmm1, xmm3
    vcvtss2sd xmm5, xmm1, xmm1
    vmulss  xmm1, xmm2, xmm3
    vaddss  xmm2, xmm0, dword ptr [r8+14h]
    vmovsd  [rsp+188h+adjust], xmm5
    vcvtss2sd xmm4, xmm1, xmm1
    vmovsd  [rsp+188h+var_150], xmm4
    vmulss  xmm1, xmm2, xmm3
    vcvtss2sd xmm3, xmm1, xmm1
    vmovsd  qword ptr [rsp+188h+shadow], xmm3
  }
  forceColor = entry->vertexCount;
  __asm { vmovaps [rsp+188h+var_28], xmm6 }
  Com_sprintf(dest, 0x100ui64, "%i entry:%i verts:%i location:(%.1f %.1f %.1f)", (unsigned int)counter, id, forceColor, shadow, v37, adjust);
  __asm
  {
    vmovss  xmm6, [rsp+188h+charHeight]
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [rsi]; x
    vmovss  dword ptr [rsp+188h+var_150], xmm6
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v38, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx]
    vmovaps xmm6, [rsp+188h+var_28]
  }
  result = 1;
  __asm { vmovss  dword ptr [rbx], xmm0 }
  return result;
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawBox
==============
*/
void HavokPhysicsCollisionHeatmapViewer::drawBox(HavokPhysicsCollisionHeatmapViewer *this, int id, const hkVector4f *minExtents, const hkVector4f *maxExtents, const unsigned int *color)
{
  hkDebugDisplayHandler *m_ptr; 
  unsigned int v9; 
  __int64 v12; 
  char v13[16]; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 

  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovss  xmm1, dword ptr [r9+4]
  }
  m_ptr = this->m_displayHandler.m_ptr;
  __asm
  {
    vmovups [rbp+4Fh+var_A0], xmm0
    vmovups [rbp+4Fh+var_70], xmm0
    vmovups [rbp+4Fh+var_80], xmm0
    vmovups [rbp+4Fh+var_90], xmm0
    vmovups [rbp+4Fh+var_40], xmm0
    vmovups [rbp+4Fh+var_50], xmm0
    vmovups [rbp+4Fh+var_60], xmm0
  }
  v9 = *color;
  __asm
  {
    vmovups [rbp+4Fh+var_30], xmm0
    vmovss  xmm0, dword ptr [r9]
    vmovss  dword ptr [rbp+4Fh+var_50], xmm0
    vmovss  dword ptr [rbp+4Fh+var_70], xmm0
    vmovss  dword ptr [rbp+4Fh+var_90], xmm0
    vmovss  dword ptr [rbp+4Fh+var_A0], xmm0
    vmovss  xmm0, dword ptr [r9+8]
  }
  v12 = id;
  __asm
  {
    vmovss  dword ptr [rbp+4Fh+var_60+8], xmm0
    vmovss  dword ptr [rbp+4Fh+var_80+8], xmm0
    vmovss  dword ptr [rbp+4Fh+var_90+8], xmm0
    vmovss  dword ptr [rbp+4Fh+var_A0+8], xmm0
    vmovss  dword ptr [rbp+4Fh+var_40+4], xmm1
    vmovss  dword ptr [rbp+4Fh+var_70+4], xmm1
    vmovss  dword ptr [rbp+4Fh+var_80+4], xmm1
    vmovss  dword ptr [rbp+4Fh+var_A0+4], xmm1
  }
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, _QWORD, __int128 *, __int128 *, unsigned int, int))m_ptr->display2Points)(m_ptr, v13, id, &v21, &v20, v9, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v19, &v17, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v18, &v16, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v15, &v14, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v21, &v19, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v20, &v17, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v18, &v15, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v16, &v14, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v21, &v18, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v19, &v15, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v20, &v16, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, __int64, __int128 *, __int128 *, const unsigned int, int))this->m_displayHandler.m_ptr->display2Points)(this->m_displayHandler.m_ptr, v13, v12, &v17, &v14, *color, HavokPhysicsCollisionHeatmapViewer::s_tag);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::drawEntry
==============
*/
void HavokPhysicsCollisionHeatmapViewer::drawEntry(HavokPhysicsCollisionHeatmapViewer *this, int id, CollisionHeatmapEntry *entry)
{
  __int64 v32; 
  char v35; 
  char v50; 
  unsigned int *color; 
  unsigned int v66; 
  vec3_t outPos; 
  hkVector4f maxExtents; 
  hkVector4f minExtents; 
  __int128 v70; 
  char dest[256]; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RDI = entry;
  __asm
  {
    vmovss  xmm2, cs:__real@3d000000
    vmulss  xmm1, xmm2, dword ptr [r8+1Ch]
    vmulss  xmm3, xmm2, dword ptr [r8+0Ch]
    vmulss  xmm5, xmm2, dword ptr [r8+18h]
    vmulss  xmm4, xmm2, dword ptr [r8+10h]
    vmovss  xmm0, dword ptr [r8+8]
    vmulss  xmm7, xmm0, xmm2
    vmovss  xmm0, dword ptr [r8+14h]
    vmulss  xmm6, xmm0, xmm2
    vinsertps xmm6, xmm6, xmm5, 10h
    vinsertps xmm6, xmm6, xmm1, 20h ; ' '
    vinsertps xmm7, xmm7, xmm3, 10h
    vxorps  xmm8, xmm8, xmm8
    vinsertps xmm6, xmm6, xmm8, 30h ; '0'
    vinsertps xmm7, xmm7, xmm4, 20h ; ' '
    vinsertps xmm7, xmm7, xmm8, 30h ; '0'
    vaddps  xmm1, xmm7, xmm6
    vmulps  xmm2, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
    vmovss  xmm1, cs:__real@42000000
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vmovups xmmword ptr [rsp+1F8h+maxExtents.m_quad], xmm6
    vmulss  xmm6, xmm2, xmm1
    vmovups [rsp+1F8h+var_178], xmm2
    vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+1F8h+minExtents.m_quad], xmm7
    vmulss  xmm9, xmm2, xmm1
  }
  v32 = id;
  __asm { vmulss  xmm7, xmm0, xmm1 }
  if ( cg_t::ms_allocatedCount > 0 )
  {
    CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1F8h+outPos]
      vmovss  xmm1, dword ptr [rsp+1F8h+outPos+4]
    }
    _RAX = physics_debugVisualizeWorldCollisionHeatmapRange;
    __asm
    {
      vsubss  xmm3, xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+1F8h+outPos+8]
      vsubss  xmm2, xmm1, xmm7
      vmovss  xmm5, dword ptr [rax+28h]
      vmulss  xmm1, xmm3, xmm3
      vsubss  xmm4, xmm0, xmm9
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm6, xmm3, xmm0
      vmulss  xmm1, xmm5, xmm5
      vcomiss xmm6, xmm1
    }
    if ( v35 | v50 )
    {
      _RAX = physics_debugVisualizeWorldCollisionHeatmapGood;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  xmm2, dword ptr [rax+28h]
        vcomiss xmm0, xmm2
      }
      _RAX = physics_debugVisualizeWorldCollisionHeatmapBad;
      __asm { vmovss  xmm4, dword ptr [rax+28h] }
      if ( !v35 )
      {
        __asm
        {
          vcomiss xmm0, xmm4
          vmovss  xmm3, cs:__real@3f800000; alpha
          vmovaps xmm0, xmm3
          vsubss  xmm1, xmm3, xmm0; green
          vxorps  xmm2, xmm2, xmm2; blue
        }
        v66 = hkColor::rgbFromFloats(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
        HavokPhysicsCollisionHeatmapViewer::drawBox(this, v32, &minExtents, &maxExtents, &v66);
        __asm { vcomiss xmm6, cs:__real@48742400 }
        if ( v35 )
        {
          LODWORD(color) = _RDI->vertexCount;
          Com_sprintf(dest, 0x100ui64, "%i:%i", (unsigned int)v32, color);
          ((void (__fastcall *)(hkDebugDisplayHandler *, unsigned int *, __int64, char *, __int128 *, unsigned int, int))this->m_displayHandler.m_ptr->display3dText)(this->m_displayHandler.m_ptr, &v66, v32, dest, &v70, v66, HavokPhysicsCollisionHeatmapViewer::s_tag);
        }
      }
    }
  }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

