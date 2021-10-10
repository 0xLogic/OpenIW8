/*
==============
HavokPhysicsDisplayHandler::addGeometryInstanceInternal
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::addGeometryInstanceInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, const unsigned int color, const hkArrayBase<hkGeometryDecorations *> *decorations, int tag)
{
  return ?addGeometryInstanceInternal@HavokPhysicsDisplayHandler@@IEAA?AUhkResult@@_K0AEBVhkTransformf@@IPEBV?$hkArrayBase@PEAUhkGeometryDecorations@@@@H@Z(this, id, originalGeomId, transform, color, decorations, tag);
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryInstanceEx
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::addGeometryInstanceEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, const unsigned int color, const hkArrayBase<hkGeometryDecorations *> *decorations, int tag)
{
  return ?addGeometryInstanceEx@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_K0AEBVhkTransformf@@IPEBV?$hkArrayBase@PEAUhkGeometryDecorations@@@@H@Z(this, id, originalGeomId, transform, color, decorations, tag);
}

/*
==============
HavokPhysicsDisplayHandler::displayGeometry
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::displayGeometry(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, unsigned int color, int tag)
{
  return ?displayGeometry@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBV?$hkArrayBase@PEAVhkDisplayGeometry@@@@AEBVhkTransformf@@IH@Z(this, id, geometries, transform, color, tag);
}

/*
==============
HavokPhysicsDisplayHandler::setShapeViewer
==============
*/

void __fastcall HavokPhysicsDisplayHandler::setShapeViewer(HavokPhysicsDisplayHandler *this, hkProcess *process)
{
  ?setShapeViewer@HavokPhysicsDisplayHandler@@QEAAXPEAVhkProcess@@@Z(this, process);
}

/*
==============
HavokPhysicsDisplayHandler::renderTriList
==============
*/

void __fastcall HavokPhysicsDisplayHandler::renderTriList(HavokPhysicsDisplayHandler *this, const GfxCmdBufContext *gfxContext, bool mapped, const hkArray<hkVector4f,hkContainerHeapAllocator> *verts, const hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *tris, const hkTransformf *transform, const GfxColor rColor)
{
  ?renderTriList@HavokPhysicsDisplayHandler@@IEAAXAEBUGfxCmdBufContext@@_NAEBV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@AEBV?$hkArray@UTriangle@hkGeometry@@UhkContainerHeapAllocator@@@@AEBVhkTransformf@@TGfxColor@@@Z(this, gfxContext, mapped, verts, tris, transform, rColor);
}

/*
==============
HavokPhysicsDisplayHandler::setDebugMemoryRouter
==============
*/

void __fastcall HavokPhysicsDisplayHandler::setDebugMemoryRouter(hkMemoryRouter *debugRouter)
{
  ?setDebugMemoryRouter@HavokPhysicsDisplayHandler@@SAXPEAVhkMemoryRouter@@@Z(debugRouter);
}

/*
==============
HavokPhysicsDisplayHandler::setGeometryFlagBits
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::setGeometryFlagBits(HavokPhysicsDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  return ?setGeometryFlagBits@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KUhkDisplayGeometryFlags@@@Z(this, id, flagBits);
}

/*
==============
HavokPhysicsDisplayHandler::display3dText
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::display3dText(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos, unsigned int color, int tag)
{
  return ?display3dText@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KPEBDAEBVhkVector4f@@IH@Z(this, id, text, pos, color, tag);
}

/*
==============
HavokPhysicsDisplayHandler::getCurrentShapeViewer
==============
*/

HavokPhysicsShapeViewer *__fastcall HavokPhysicsDisplayHandler::getCurrentShapeViewer(HavokPhysicsDisplayHandler *this)
{
  return ?getCurrentShapeViewer@HavokPhysicsDisplayHandler@@QEAAPEAVHavokPhysicsShapeViewer@@XZ(this);
}

/*
==============
HavokPhysicsDisplayHandler::setViewerAabb
==============
*/

void __fastcall HavokPhysicsDisplayHandler::setViewerAabb(HavokPhysicsDisplayHandler *this, HavokPhysicsShapeViewer *shapeViewer)
{
  ?setViewerAabb@HavokPhysicsDisplayHandler@@IEAAXPEAVHavokPhysicsShapeViewer@@@Z(this, shapeViewer);
}

/*
==============
HavokPhysicsDisplayHandler::renderGeoList
==============
*/

void __fastcall HavokPhysicsDisplayHandler::renderGeoList(HavokPhysicsDisplayHandler *this, const HavokPhysicsDisplayHandler::DisplayGeoList *geoList, const GfxCmdBufContext *gfxContext, hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *decorations, hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *geometries, const hkTransformf *transform, const bool mapped, const GfxColor rColor)
{
  ?renderGeoList@HavokPhysicsDisplayHandler@@IEAAXPEBUDisplayGeoList@1@AEBUGfxCmdBufContext@@AEAV?$hkArray@UhkGeometryDecorations@@UhkContainerHeapAllocator@@@@AEAV?$hkArray@UDisplayGeo@HavokPhysicsDisplayHandler@@UhkContainerHeapAllocator@@@@VhkTransformf@@_NTGfxColor@@@Z(this, geoList, gfxContext, decorations, geometries, transform, mapped, rColor);
}

/*
==============
HavokPhysicsDisplayHandler::renderLineList
==============
*/

void __fastcall HavokPhysicsDisplayHandler::renderLineList(HavokPhysicsDisplayHandler *this, const GfxCmdBufContext *gfxContext, const hkArray<hkVector4f,hkContainerHeapAllocator> *lines, const hkTransformf *parentTransform, const hkTransformf *transform, const GfxColor rColor)
{
  ?renderLineList@HavokPhysicsDisplayHandler@@IEAAXAEBUGfxCmdBufContext@@AEBV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@AEBVhkTransformf@@2TGfxColor@@@Z(this, gfxContext, lines, parentTransform, transform, rColor);
}

/*
==============
HavokPhysicsDisplayHandler::render
==============
*/

void __fastcall HavokPhysicsDisplayHandler::render(HavokPhysicsDisplayHandler *this, GfxCmdBufContext *gfxContext)
{
  ?render@HavokPhysicsDisplayHandler@@QEAAXUGfxCmdBufContext@@@Z(this, gfxContext);
}

/*
==============
HavokPhysicsDisplayHandler::removeGeometry
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::removeGeometry(HavokPhysicsDisplayHandler *this, unsigned __int64 id)
{
  return ?removeGeometry@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_K@Z(this, id);
}

/*
==============
HavokPhysicsDisplayHandler::display2PointsEx
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::display2PointsEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, unsigned int color, hk2PointDisplayStyle::Enum style, float thickness, int tag)
{
  return ?display2PointsEx@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@1IW4Enum@hk2PointDisplayStyle@@MH@Z(this, id, a, b, color, style, thickness, tag);
}

/*
==============
HavokPhysicsDisplayHandler::clearGeometryFlagBits
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::clearGeometryFlagBits(HavokPhysicsDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  return ?clearGeometryFlagBits@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KUhkDisplayGeometryFlags@@@Z(this, id, flagBits);
}

/*
==============
HavokPhysicsDisplayHandler::step
==============
*/

void __fastcall HavokPhysicsDisplayHandler::step(HavokPhysicsDisplayHandler *this)
{
  ?step@HavokPhysicsDisplayHandler@@QEAAXXZ(this);
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryInternal
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::addGeometryInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, const unsigned int color, hkDisplayGeometryFlags flags, int tag, __int64 frameCount)
{
  return ?addGeometryInternal@HavokPhysicsDisplayHandler@@IEAA?AUhkResult@@_KAEBV?$hkArrayBase@PEAVhkDisplayGeometry@@@@AEBVhkTransformf@@IUhkDisplayGeometryFlags@@H_J@Z(this, id, geometries, transform, color, flags, tag, frameCount);
}

/*
==============
HavokPhysicsDisplayHandler::updateGeometryVerts
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::updateGeometryVerts(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArray<hkArray<hkVector4f,hkContainerHeapAllocator>,hkContainerHeapAllocator> *newVerts)
{
  return ?updateGeometryVerts@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBV?$hkArray@V?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@@Z(this, id, newVerts);
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryEx
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::addGeometryEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, const unsigned int color, hkDisplayGeometryFlags flags, int tag)
{
  return ?addGeometryEx@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBV?$hkArrayBase@PEAVhkDisplayGeometry@@@@AEBVhkTransformf@@IUhkDisplayGeometryFlags@@H@Z(this, id, geometries, transform, color, flags, tag);
}

/*
==============
HavokPhysicsDisplayHandler::removeGeometryInternal
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::removeGeometryInternal(HavokPhysicsDisplayHandler *this)
{
  return ?removeGeometryInternal@HavokPhysicsDisplayHandler@@IEAA?AUhkResult@@XZ(this);
}

/*
==============
HavokPhysicsDisplayHandler::updateParticleTransforms
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::updateParticleTransforms(HavokPhysicsDisplayHandler *this, unsigned __int64 id, int updateId, const hkQuaternionf *orientations, const hkVector4f *translations, unsigned int numTransforms)
{
  return ?updateParticleTransforms@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KHPEBVhkQuaternionf@@PEBVhkVector4f@@I@Z(this, id, updateId, orientations, translations, numTransforms);
}

/*
==============
HavokPhysicsDisplayHandler::HavokPhysicsDisplayHandler
==============
*/

void __fastcall HavokPhysicsDisplayHandler::HavokPhysicsDisplayHandler(HavokPhysicsDisplayHandler *this, Physics_WorldId worldId)
{
  ??0HavokPhysicsDisplayHandler@@QEAA@W4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
HavokPhysicsDisplayHandler::makeSphereTriList
==============
*/

void __fastcall HavokPhysicsDisplayHandler::makeSphereTriList(HavokPhysicsDisplayHandler *this, hkArray<hkVector4f,hkContainerHeapAllocator> *verts, hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *tris, const hkVector4f *center, const float scale)
{
  ?makeSphereTriList@HavokPhysicsDisplayHandler@@IEAAXAEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@AEAV?$hkArray@UTriangle@hkGeometry@@UhkContainerHeapAllocator@@@@AEBVhkVector4f@@M@Z(this, verts, tris, center, scale);
}

/*
==============
HavokPhysicsDisplayHandler::updateGeometryTransform
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::updateGeometryTransform(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkTransformf *transform)
{
  return ?updateGeometryTransform@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkTransformf@@@Z(this, id, transform);
}

/*
==============
HavokPhysicsDisplayHandler::displayPointEx
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::displayPointEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, unsigned int color, hk1PointDisplayStyle::Enum style, float scale, int tag)
{
  return ?displayPointEx@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@IW4Enum@hk1PointDisplayStyle@@MH@Z(this, id, a, color, style, scale, tag);
}

/*
==============
HavokPhysicsDisplayHandler::setGeometryColor
==============
*/

hkResult __fastcall HavokPhysicsDisplayHandler::setGeometryColor(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned int color)
{
  return ?setGeometryColor@HavokPhysicsDisplayHandler@@UEAA?AUhkResult@@_KI@Z(this, id, color);
}

/*
==============
HavokPhysicsDisplayHandler::HavokPhysicsDisplayHandler
==============
*/
void HavokPhysicsDisplayHandler::HavokPhysicsDisplayHandler(HavokPhysicsDisplayHandler *this, Physics_WorldId worldId)
{
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (HavokPhysicsDisplayHandler_vtbl *)&HavokPhysicsDisplayHandler::`vftable';
  this->m_displayGeoLists.m_data = NULL;
  this->m_displayGeoLists.m_size = 0;
  this->m_displayGeoLists.m_capacityAndFlags = 0x80000000;
  this->m_geoListMap.m_map.m_elem = NULL;
  this->m_geoListMap.m_map.m_numElems = 0;
  this->m_geoListMap.m_map.m_hashMod = -1;
  this->m_displayPoints.m_data = NULL;
  this->m_displayPoints.m_size = 0;
  this->m_displayPoints.m_capacityAndFlags = 0x80000000;
  this->m_displayLines.m_data = NULL;
  this->m_displayLines.m_size = 0;
  this->m_displayLines.m_capacityAndFlags = 0x80000000;
  this->m_display3DTexts.m_data = NULL;
  this->m_display3DTexts.m_size = 0;
  this->m_display3DTexts.m_capacityAndFlags = 0x80000000;
  hkCriticalSection::hkCriticalSection(&this->m_critSection, 0);
  this->m_worldId = worldId;
  this->m_tickCounter = 0;
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryEx
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::addGeometryEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, const unsigned int color, hkDisplayGeometryFlags flags, int tag, int a8)
{
  int v10; 
  __int64 frameCount; 

  LODWORD(frameCount) = a8;
  LOBYTE(v10) = tag;
  HavokPhysicsDisplayHandler::addGeometryInternal(this, id, geometries, transform, color, flags, v10, frameCount);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryInstanceEx
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::addGeometryInstanceEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, const unsigned int color, const hkArrayBase<hkGeometryDecorations *> *decorations, int tag)
{
  hkArrayBase<hkGeometryDecorations *> *v9; 

  LODWORD(v9) = (_DWORD)decorations;
  HavokPhysicsDisplayHandler::addGeometryInstanceInternal(this, id, originalGeomId, transform, color, v9, tag);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryInstanceInternal
==============
*/
_DWORD *HavokPhysicsDisplayHandler::addGeometryInstanceInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, _OWORD *color, const hkArrayBase<hkGeometryDecorations *> *decorations, __int64 tag, int a8)
{
  _DWORD *v10; 
  hkCriticalSection *p_m_critSection; 
  hkMemoryRouter *Value; 
  unsigned __int64 v14; 
  hkMemoryRouter *v15; 
  void *v16; 
  hkMemoryAllocator *v17; 
  int m_size; 
  hkMemoryAllocator *v19; 
  _OWORD *v20; 
  hkMemoryAllocator *v21; 
  int v22; 
  hkMemoryAllocator *v23; 
  int v24; 
  __int64 v25; 
  int *v26; 
  hkMemoryAllocator *v27; 
  int v28; 
  __int64 v29; 
  const hkGeometryDecorations **v30; 
  const hkGeometryDecorations *v31; 
  hkMemoryAllocator *v32; 
  int v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int64 val; 
  unsigned __int64 v39; 
  hkCriticalSection *v40; 
  hkMemoryRouter *v41; 
  __int64 v42; 
  unsigned __int64 def; 
  unsigned __int64 v44; 
  unsigned __int64 key; 

  v44 = id;
  v42 = -2i64;
  v10 = (_DWORD *)id;
  p_m_critSection = &this->m_critSection;
  v40 = &this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  v41 = Value;
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  def = 0i64;
  key = (unsigned __int64)transform;
  if ( *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def) )
  {
    if ( this->m_displayGeoLists.m_size < 0x2000 )
    {
      def = 0i64;
      key = originalGeomId;
      v14 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
      if ( !v14 )
      {
        v15 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v15 )
          v15 = hkMemoryRouter::s_fallbackRouter;
        v16 = v15->m_heap->blockAlloc(v15->m_heap, 144i64);
        v14 = (unsigned __int64)v16;
        if ( v16 )
        {
          memset_0(v16, 0, 0x90ui64);
          *(_DWORD *)(v14 + 104) = 0;
          *(_DWORD *)(v14 + 108) = 0x80000000;
          *(_QWORD *)(v14 + 112) = 0i64;
          *(_DWORD *)(v14 + 120) = 0;
          *(_DWORD *)(v14 + 124) = 0x80000000;
          *(_QWORD *)(v14 + 128) = 0i64;
          *(_DWORD *)(v14 + 136) = 0;
          *(_DWORD *)(v14 + 140) = 0x80000000;
        }
        else
        {
          v14 = 0i64;
        }
        v17 = hkMemHeapAllocator();
        m_size = this->m_displayGeoLists.m_size;
        if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v17, &this->m_displayGeoLists, 8);
          m_size = this->m_displayGeoLists.m_size;
        }
        this->m_displayGeoLists.m_data[m_size] = (HavokPhysicsDisplayHandler::DisplayGeoList *)v14;
        ++this->m_displayGeoLists.m_size;
        val = v14;
        v39 = originalGeomId;
        v19 = hkMemHeapAllocator();
        hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&this->m_geoListMap.m_map, v19, &v39, &val);
        *(_BYTE *)(v14 + 12) = 1;
        *(_QWORD *)(v14 + 16) = transform;
        *(_QWORD *)v14 = originalGeomId;
        *(_DWORD *)(v14 + 8) = a8;
        *(_BYTE *)(v14 + 24) = 0;
      }
      if ( *(const hkTransformf **)(v14 + 16) != transform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp", 1033, ASSERT_TYPE_ASSERT, "(displayGeoList->m_instanceOriginalGeoId == originalGeomId)", (const char *)&queryFormat, "displayGeoList->m_instanceOriginalGeoId == originalGeomId") )
        __debugbreak();
      *(_BYTE *)(v14 + 25) = 0;
      *(_DWORD *)(v14 + 28) = (_DWORD)decorations;
      v20 = color;
      *(_OWORD *)(v14 + 32) = *color;
      *(_OWORD *)(v14 + 48) = v20[1];
      *(_OWORD *)(v14 + 64) = v20[2];
      *(_OWORD *)(v14 + 80) = v20[3];
      v21 = hkMemHeapAllocator();
      *(_DWORD *)(v14 + 104) = 0;
      v22 = *(_DWORD *)(v14 + 108);
      if ( v22 >= 0 )
        hkMemoryAllocator::bufFree2(v21, *(void **)(v14 + 96), 64, v22 & 0x3FFFFFFF);
      *(_QWORD *)(v14 + 96) = 0i64;
      *(_DWORD *)(v14 + 108) = 0x80000000;
      v23 = hkMemHeapAllocator();
      v24 = *(_DWORD *)(v14 + 120) - 1;
      v25 = v24;
      if ( v24 >= 0 )
      {
        v26 = (int *)(112i64 * v24 + *(_QWORD *)(v14 + 112) + 100);
        do
        {
          v27 = hkMemHeapAllocator();
          *(v26 - 1) = 0;
          if ( *v26 >= 0 )
            hkMemoryAllocator::bufFree2(v27, *(void **)(v26 - 3), 16, *v26 & 0x3FFFFFFF);
          *(_QWORD *)(v26 - 3) = 0i64;
          *v26 = 0x80000000;
          v26 -= 28;
          --v25;
        }
        while ( v25 >= 0 );
      }
      *(_DWORD *)(v14 + 120) = 0;
      v28 = *(_DWORD *)(v14 + 124);
      if ( v28 >= 0 )
        hkMemoryAllocator::bufFree2(v23, *(void **)(v14 + 112), 112, v28 & 0x3FFFFFFF);
      *(_QWORD *)(v14 + 112) = 0i64;
      *(_DWORD *)(v14 + 124) = 0x80000000;
      v29 = tag;
      v30 = *(const hkGeometryDecorations ***)tag;
      if ( *(_QWORD *)tag != *(_QWORD *)tag + 8i64 * *(int *)(tag + 8) )
      {
        do
        {
          v31 = *v30;
          v32 = hkMemHeapAllocator();
          v33 = *(_DWORD *)(v14 + 136);
          if ( v33 == (*(_DWORD *)(v14 + 140) & 0x3FFFFFFF) )
          {
            hkArrayUtil::_reserveMore(v32, (void *)(v14 + 128), 152);
            v33 = *(_DWORD *)(v14 + 136);
          }
          v34 = v33;
          v35 = *(_QWORD *)(v14 + 128);
          v36 = v35 + 152i64 * v33;
          if ( v36 )
          {
            *(_QWORD *)(v36 + 8) = 0i64;
            *(_DWORD *)(v36 + 16) = 0x1FFFF;
            *(_QWORD *)v36 = hkGeometryDecorations::`vftable';
            *(_QWORD *)(v36 + 24) = 0i64;
            *(_DWORD *)(v36 + 32) = 0;
            *(_DWORD *)(v36 + 36) = 0x80000000;
            *(_QWORD *)(v36 + 40) = 0i64;
            *(_DWORD *)(v36 + 48) = 0;
            *(_DWORD *)(v36 + 52) = 0x80000000;
            *(_QWORD *)(v36 + 56) = 0i64;
            *(_DWORD *)(v36 + 64) = 0;
            *(_DWORD *)(v36 + 68) = 0x80000000;
            *(_QWORD *)(v36 + 72) = 0i64;
            *(_DWORD *)(v36 + 80) = 0;
            *(_DWORD *)(v36 + 84) = 0x80000000;
            *(_QWORD *)(v36 + 88) = 0i64;
            *(_DWORD *)(v36 + 96) = 0;
            *(_DWORD *)(v36 + 100) = 0x80000000;
            *(_QWORD *)(v36 + 104) = 0i64;
            *(_DWORD *)(v36 + 112) = 0;
            *(_DWORD *)(v36 + 116) = 0x80000000;
            *(_QWORD *)(v36 + 120) = 0i64;
            *(_DWORD *)(v36 + 128) = 0;
            *(_DWORD *)(v36 + 132) = 0x80000000;
            *(_QWORD *)(v36 + 136) = 0i64;
            *(_DWORD *)(v36 + 144) = 0;
            *(_DWORD *)(v36 + 148) = 0x80000000;
            v34 = *(_DWORD *)(v14 + 136);
            v35 = *(_QWORD *)(v14 + 128);
          }
          *(_DWORD *)(v14 + 136) = v34 + 1;
          hkGeometryDecorations::operator=((hkGeometryDecorations *)(v35 + 152i64 * v34), v31);
          ++v30;
        }
        while ( v30 != (const hkGeometryDecorations **)(*(_QWORD *)v29 + 8i64 * *(int *)(v29 + 8)) );
        p_m_critSection = v40;
        v10 = (_DWORD *)v44;
        Value = v41;
      }
    }
    TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    hkMemoryRouter::replaceInstance(Value);
    *v10 = 0;
  }
  else
  {
    *v10 = -2147220992;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_critSection);
  return v10;
}

/*
==============
HavokPhysicsDisplayHandler::addGeometryInternal
==============
*/
_DWORD *HavokPhysicsDisplayHandler::addGeometryInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, _OWORD *color, int flags, int tag, __int64 frameCount, __int64 a9)
{
  const hkTransformf *v9; 
  _DWORD *v11; 
  unsigned __int64 v13; 
  hkMemoryRouter *Value; 
  void *v15; 
  hkMemoryAllocator *v16; 
  int m_size; 
  hkMemoryAllocator *v18; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  _OWORD *v20; 
  hkMemoryAllocator *v21; 
  int v22; 
  int v23; 
  _DWORD *v24; 
  unsigned __int64 v25; 
  hkMemoryAllocator *v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  _OWORD *v32; 
  char v33; 
  _QWORD *v34; 
  int integer; 
  __int64 v36; 
  int v37; 
  int v38; 
  void (__fastcall *v39)(__int64, __int64, hkMemoryAllocator *); 
  hkMemoryAllocator *v40; 
  int v41; 
  hkMemoryAllocator *v42; 
  int v43; 
  __int64 v44; 
  hkMemoryRouter *v45; 
  hkGeometry *v46; 
  int v49; 
  int v50; 
  __int64 v51; 
  hkMemoryAllocator *v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  hkMemoryRouter *v58; 
  __int64 v59; 
  int v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  _OWORD *v66; 
  _OWORD *v67; 
  _DWORD *v68; 
  hkMemoryAllocator *v69; 
  int v70; 
  _DWORD *v71; 
  _DWORD *v72; 
  hkMemoryAllocator *v73; 
  int v74; 
  _DWORD *v75; 
  hkMemoryAllocator *v76; 
  int v77; 
  _DWORD *v78; 
  hkMemoryAllocator *v79; 
  int v80; 
  __int64 v82; 
  void (__fastcall *v83)(__int64, __int64, hkMemoryAllocator *); 
  hkMemoryAllocator *v84; 
  int v85; 
  hkMemoryAllocator *v86; 
  int v87; 
  unsigned __int64 ida; 
  void *array; 
  int v90; 
  unsigned __int64 v91; 
  hknpBodyId bodyIdOut[2]; 
  __int64 v93; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkMemoryRouter *a; 
  LPCRITICAL_SECTION lpCriticalSection; 
  __int64 v98; 
  unsigned __int64 val; 
  unsigned __int64 v100; 
  const hkTransformf *v101; 

  v101 = transform;
  v100 = id;
  v98 = -2i64;
  v9 = transform;
  v11 = (_DWORD *)id;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  a = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  if ( this->m_displayGeoLists.m_size < 0x2000 )
  {
    def = 0i64;
    key = (unsigned __int64)geometries;
    v13 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
    if ( !v13 )
    {
      Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !Value )
        Value = hkMemoryRouter::s_fallbackRouter;
      v15 = Value->m_heap->blockAlloc(Value->m_heap, 144i64);
      v13 = (unsigned __int64)v15;
      if ( v15 )
      {
        memset_0(v15, 0, 0x90ui64);
        *(_DWORD *)(v13 + 104) = 0;
        *(_DWORD *)(v13 + 108) = 0x80000000;
        *(_QWORD *)(v13 + 112) = 0i64;
        *(_DWORD *)(v13 + 120) = 0;
        *(_DWORD *)(v13 + 124) = 0x80000000;
        *(_QWORD *)(v13 + 128) = 0i64;
        *(_DWORD *)(v13 + 136) = 0;
        *(_DWORD *)(v13 + 140) = 0x80000000;
      }
      else
      {
        v13 = 0i64;
      }
      v16 = hkMemHeapAllocator();
      m_size = this->m_displayGeoLists.m_size;
      if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v16, &this->m_displayGeoLists, 8);
        m_size = this->m_displayGeoLists.m_size;
      }
      this->m_displayGeoLists.m_data[m_size] = (HavokPhysicsDisplayHandler::DisplayGeoList *)v13;
      ++this->m_displayGeoLists.m_size;
      val = v13;
      v91 = (unsigned __int64)geometries;
      v18 = hkMemHeapAllocator();
      hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&this->m_geoListMap.m_map, v18, &v91, &val);
      *(_BYTE *)(v13 + 12) = 1;
      *(_QWORD *)(v13 + 16) = 0i64;
      *(_QWORD *)v13 = geometries;
      *(_DWORD *)(v13 + 8) = frameCount;
      m_shapeViewer = this->m_shapeViewer;
      if ( m_shapeViewer )
      {
        hknpShapeViewer::decomposeDisplayObjectId(m_shapeViewer, (unsigned __int64)&ida, (hknpWorld **)geometries, bodyIdOut);
        *(_BYTE *)(v13 + 24) = PhysicsCharacterProxy_IsCharacterProxy(this->m_worldId, val);
      }
      else
      {
        *(_BYTE *)(v13 + 24) = 0;
      }
    }
    *(_BYTE *)(v13 + 25) = tag;
    *(_DWORD *)(v13 + 28) = flags;
    v20 = color;
    *(_OWORD *)(v13 + 32) = *color;
    *(_OWORD *)(v13 + 48) = v20[1];
    *(_OWORD *)(v13 + 64) = v20[2];
    *(_OWORD *)(v13 + 80) = v20[3];
    v21 = hkMemHeapAllocator();
    *(_DWORD *)(v13 + 104) = 0;
    v22 = *(_DWORD *)(v13 + 108);
    if ( v22 >= 0 )
      hkMemoryAllocator::bufFree2(v21, *(void **)(v13 + 96), 64, v22 & 0x3FFFFFFF);
    *(_QWORD *)(v13 + 96) = 0i64;
    *(_DWORD *)(v13 + 108) = 0x80000000;
    v23 = 0;
    LODWORD(ida) = 0;
    if ( v9->m_rotation.m_col0.m_quad.m128_i32[2] > 0 )
    {
      v24 = (_DWORD *)(v13 + 112);
      array = v24;
      v25 = 0i64;
      v91 = 0i64;
      while ( 1 )
      {
        v26 = hkMemHeapAllocator();
        v27 = v24[2];
        if ( v27 == (v24[3] & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v26, v24, 112);
          v27 = v24[2];
        }
        v28 = v27;
        v29 = *(_QWORD *)v24;
        v30 = *(_QWORD *)v24 + 112i64 * v27;
        if ( v30 )
        {
          *(_QWORD *)(v30 + 88) = 0i64;
          *(_DWORD *)(v30 + 96) = 0;
          *(_DWORD *)(v30 + 100) = 0x80000000;
          v28 = v24[2];
          v29 = *(_QWORD *)v24;
        }
        v31 = v29 + 112i64 * v28;
        v24[2] = v28 + 1;
        *(_QWORD *)v31 = a9;
        v32 = *(_OWORD **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25);
        *(_OWORD *)(v31 + 16) = v32[3];
        *(_OWORD *)(v31 + 32) = v32[4];
        *(_OWORD *)(v31 + 48) = v32[5];
        *(_OWORD *)(v31 + 64) = v32[6];
        *(_QWORD *)(v31 + 80) = 0i64;
        v33 = 0;
        LOBYTE(val) = 0;
        v34 = *(_QWORD **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25);
        if ( !v34[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v34 + 24i64))(v34);
          v33 = 1;
          LOBYTE(val) = 1;
        }
        integer = physics_debugVisualizeWorldViewMode->current.integer;
        if ( integer == 2 )
          break;
        v36 = *(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25);
        v37 = *(_DWORD *)(v36 + 112);
        if ( v37 == 12 || v37 == 3 )
          break;
        v38 = physics_debugVisualizeWorldComplexityTriThreshold->current.integer;
        if ( v38 <= 0 || v38 >= *(_DWORD *)(*(_QWORD *)(v36 + 24) + 48i64) )
        {
          if ( integer == 3 )
          {
            v39 = *(void (__fastcall **)(__int64, __int64, hkMemoryAllocator *))(*(_QWORD *)v36 + 32i64);
            v40 = hkMemHeapAllocator();
            v39(v36, v31 + 88, v40);
            v41 = physics_debugVisualizeWorldComplexityLineThreshold->current.integer;
            if ( v41 <= 0 || v41 >= *(_DWORD *)(v31 + 96) )
            {
              v24 = array;
            }
            else
            {
              v42 = hkMemHeapAllocator();
              *(_DWORD *)(v31 + 96) = 0;
              v43 = *(_DWORD *)(v31 + 100);
              if ( v43 >= 0 )
                hkMemoryAllocator::bufFree2(v42, *(void **)(v31 + 88), 16, v43 & 0x3FFFFFFF);
              *(_QWORD *)(v31 + 88) = 0i64;
              *(_DWORD *)(v31 + 100) = 0x80000000;
              v24 = array;
            }
          }
          v44 = *(_QWORD *)(*(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25) + 24i64);
          if ( *(_DWORD *)(v44 + 32) > 0xFFFFu || (unsigned int)(3 * *(_DWORD *)(v44 + 48)) > 0x30000 )
          {
            _XMM0 = 0x5555u;
            __asm { vpminud xmm1, xmm0, xmm1 }
            v49 = _XMM1;
            v90 = _XMM1;
            v50 = 0;
            v51 = 0i64;
            v93 = 0i64;
            if ( *(int *)(v44 + 48) > 0 )
            {
              do
              {
                if ( v51 )
                {
                  v52 = hkMemHeapAllocator();
                  v53 = v24[2];
                  v54 = v53;
                  if ( v53 == (v24[3] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::_reserveMore(v52, v24, 112);
                    v53 = v24[2];
                    v54 = v53;
                  }
                  v55 = *(_QWORD *)v24;
                  v56 = *(_QWORD *)v24 + 112i64 * v53;
                  if ( v56 )
                  {
                    *(_QWORD *)(v56 + 88) = 0i64;
                    *(_DWORD *)(v56 + 96) = 0;
                    *(_DWORD *)(v56 + 100) = 0x80000000;
                    v54 = v24[2];
                    v55 = *(_QWORD *)v24;
                  }
                  v57 = v55 + 112i64 * v54;
                  v24[2] = v54 + 1;
                  *(_QWORD *)v57 = *(_QWORD *)v31;
                  *(_OWORD *)(v57 + 16) = *(_OWORD *)(v31 + 16);
                  *(_OWORD *)(v57 + 32) = *(_OWORD *)(v31 + 32);
                  *(_OWORD *)(v57 + 48) = *(_OWORD *)(v31 + 48);
                  *(_OWORD *)(v57 + 64) = *(_OWORD *)(v31 + 64);
                  v31 = v57;
                }
                v58 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
                if ( !v58 )
                  v58 = hkMemoryRouter::s_fallbackRouter;
                v59 = (__int64)v58->m_heap->blockAlloc(v58->m_heap, 56i64);
                if ( v59 )
                {
                  *(_QWORD *)(v59 + 8) = 0i64;
                  *(_DWORD *)(v59 + 16) = 0x1FFFF;
                  *(_QWORD *)v59 = hkGeometry::`vftable';
                  *(_QWORD *)(v59 + 24) = 0i64;
                  *(_DWORD *)(v59 + 32) = 0;
                  *(_DWORD *)(v59 + 36) = 0x80000000;
                  *(_QWORD *)(v59 + 40) = 0i64;
                  *(_DWORD *)(v59 + 48) = 0;
                  *(_DWORD *)(v59 + 52) = 0x80000000;
                }
                else
                {
                  v59 = 0i64;
                }
                *(_QWORD *)(v31 + 80) = v59;
                v60 = 0;
                if ( v49 > 0 )
                {
                  v61 = 16 * v51;
                  v62 = 2;
                  do
                  {
                    v63 = *(_QWORD *)(*(_QWORD *)(v101->m_rotation.m_col0.m_quad.m128_u64[0] + v25) + 24i64);
                    if ( v50 >= *(_DWORD *)(v63 + 48) )
                      break;
                    v64 = *(_QWORD *)(v63 + 40);
                    v65 = *(_QWORD *)(v63 + 24);
                    v66 = (_OWORD *)(v65 + 16i64 * *(int *)(v64 + v61));
                    v67 = (_OWORD *)(v65 + 16i64 * *(int *)(v64 + v61 + 4));
                    *(_QWORD *)&bodyIdOut[0].m_serialAndIndex = v65 + 16i64 * *(int *)(v64 + v61 + 8);
                    v68 = *(_DWORD **)(v31 + 80);
                    v69 = hkMemHeapAllocator();
                    v70 = v68[12];
                    if ( v70 == (v68[13] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v69, v68 + 10, 16);
                      v70 = v68[12];
                    }
                    v71 = (_DWORD *)(*((_QWORD *)v68 + 5) + 16i64 * v70);
                    v68[12] = v70 + 1;
                    *v71 = v62 - 2;
                    v71[1] = v62 - 1;
                    v71[2] = v62;
                    v72 = *(_DWORD **)(v31 + 80);
                    v73 = hkMemHeapAllocator();
                    v74 = v72[8];
                    if ( v74 == (v72[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v73, v72 + 6, 16);
                      v74 = v72[8];
                    }
                    *(_OWORD *)(*((_QWORD *)v72 + 3) + 16i64 * v74) = *v66;
                    ++v72[8];
                    v75 = *(_DWORD **)(v31 + 80);
                    v76 = hkMemHeapAllocator();
                    v77 = v75[8];
                    if ( v77 == (v75[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v76, v75 + 6, 16);
                      v77 = v75[8];
                    }
                    *(_OWORD *)(*((_QWORD *)v75 + 3) + 16i64 * v77) = *v67;
                    ++v75[8];
                    v78 = *(_DWORD **)(v31 + 80);
                    v79 = hkMemHeapAllocator();
                    v80 = v78[8];
                    if ( v80 == (v78[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v79, v78 + 6, 16);
                      v80 = v78[8];
                    }
                    *(_OWORD *)(*((_QWORD *)v78 + 3) + 16i64 * v80) = *(_OWORD *)*(_QWORD *)&bodyIdOut[0].m_serialAndIndex;
                    ++v78[8];
                    ++v60;
                    v62 += 3;
                    ++v50;
                    v51 = ++v93;
                    v61 += 16i64;
                    v25 = v91;
                  }
                  while ( v60 < v90 );
                  v49 = v90;
                }
                v9 = v101;
                v24 = array;
              }
              while ( v50 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v101->m_rotation.m_col0.m_quad.m128_u64[0] + v25) + 24i64) + 48i64) );
              v23 = ida;
            }
          }
          else
          {
            v45 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
            if ( !v45 )
              v45 = hkMemoryRouter::s_fallbackRouter;
            v46 = (hkGeometry *)v45->m_heap->blockAlloc(v45->m_heap, 56i64);
            *(_QWORD *)&bodyIdOut[0].m_serialAndIndex = v46;
            if ( v46 )
              hkGeometry::hkGeometry(v46, *(const hkGeometry **)(*(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25) + 24i64));
            *(_QWORD *)(v31 + 80) = v46;
          }
LABEL_71:
          if ( (_BYTE)val )
            hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25));
          v24 = array;
          goto LABEL_74;
        }
        if ( v33 )
          hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25));
LABEL_74:
        LODWORD(ida) = ++v23;
        v25 += 8i64;
        v91 = v25;
        if ( v23 >= v9->m_rotation.m_col0.m_quad.m128_i32[2] )
        {
          v11 = (_DWORD *)v100;
          goto LABEL_76;
        }
      }
      v82 = *(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v25);
      v83 = *(void (__fastcall **)(__int64, __int64, hkMemoryAllocator *))(*(_QWORD *)v82 + 32i64);
      v84 = hkMemHeapAllocator();
      v83(v82, v31 + 88, v84);
      v85 = physics_debugVisualizeWorldComplexityLineThreshold->current.integer;
      if ( v85 > 0 && v85 < *(_DWORD *)(v31 + 96) )
      {
        v86 = hkMemHeapAllocator();
        *(_DWORD *)(v31 + 96) = 0;
        v87 = *(_DWORD *)(v31 + 100);
        if ( v87 >= 0 )
          hkMemoryAllocator::bufFree2(v86, *(void **)(v31 + 88), 16, v87 & 0x3FFFFFFF);
        *(_QWORD *)(v31 + 88) = 0i64;
        *(_DWORD *)(v31 + 100) = 0x80000000;
      }
      goto LABEL_71;
    }
  }
LABEL_76:
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(a);
  *v11 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return v11;
}

/*
==============
HavokPhysicsDisplayHandler::clearGeometryFlagBits
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::clearGeometryFlagBits(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 flagBits, char a4)
{
  __int64 v6; 
  unsigned __int64 def; 
  unsigned __int64 key; 

  key = flagBits;
  def = 0i64;
  v6 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v6 )
    *(_BYTE *)(v6 + 25) &= ~a4;
  *(_DWORD *)id = 0;
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::display2PointsEx
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::display2PointsEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, __m128 *color, hk2PointDisplayStyle::Enum style, float thickness)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v11; 
  int m_size; 
  HavokPhysicsDisplayHandler::DisplayLine *v13; 
  __m128 m_quad; 
  __m128 v15; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  if ( this->m_displayLines.m_size < 0x2000 )
  {
    v11 = hkMemHeapAllocator();
    m_size = this->m_displayLines.m_size;
    if ( m_size == (this->m_displayLines.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v11, &this->m_displayLines, 48);
      m_size = this->m_displayLines.m_size;
    }
    v13 = &this->m_displayLines.m_data[m_size];
    this->m_displayLines.m_size = m_size + 1;
    m_quad = b->m_quad;
    v13->m_start = (hkVector4f)b->m_quad;
    if ( LODWORD(thickness) == 1 )
    {
      v13->m_end.m_quad = m_quad;
      v15 = _mm128_add_ps(m_quad, *color);
    }
    else
    {
      v15 = *color;
    }
    v13->m_end.m_quad = v15;
    v13->m_color = style;
  }
  *(_DWORD *)id = 0;
  LeaveCriticalSection(p_m_critSection);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::display3dText
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::display3dText(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos, hkVector4f *color, int tag)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v10; 
  int m_size; 
  HavokPhysicsDisplayHandler::Display3DText *v12; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  if ( this->m_display3DTexts.m_size < 0x2000 )
  {
    v10 = hkMemHeapAllocator();
    m_size = this->m_display3DTexts.m_size;
    if ( m_size == (this->m_display3DTexts.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v10, &this->m_display3DTexts, 288);
      m_size = this->m_display3DTexts.m_size;
    }
    v12 = &this->m_display3DTexts.m_data[m_size];
    this->m_display3DTexts.m_size = m_size + 1;
    hkString::strNcpy(v12->m_buffer, 256, (const char *)pos, 256);
    v12->m_buffer[255] = 0;
    v12->m_pos = (hkVector4f)color->m_quad;
    v12->m_color = tag;
  }
  *(_DWORD *)id = 0;
  LeaveCriticalSection(p_m_critSection);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::displayGeometry
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::displayGeometry(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, _OWORD *color, int tag, int a7)
{
  hkMemoryRouter *Value; 
  char *v11; 
  char *v12; 
  hkMemoryAllocator *v13; 
  int m_size; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  hkMemoryAllocator *v16; 
  int v17; 
  hkMemoryAllocator *v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  _DWORD *v24; 
  __int64 v25; 
  int v26; 
  hkMemoryAllocator *v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  _OWORD *v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  void (__fastcall *v37)(__int64, __int64, hkMemoryAllocator *); 
  hkMemoryAllocator *v38; 
  char v39; 
  hkMemoryRouter *v40; 
  hkGeometry *v41; 
  __int64 v42; 
  unsigned __int64 ida; 
  hkMemoryRouter *a; 
  LPCRITICAL_SECTION lpCriticalSection; 
  __int64 v47; 
  hknpBodyId bodyIdOut; 
  unsigned int bodyId; 

  v47 = -2i64;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  a = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  if ( this->m_displayGeoLists.m_size < 0x2000 )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v11 = (char *)Value->m_heap->blockAlloc(Value->m_heap, 144i64);
    v12 = v11;
    if ( v11 )
    {
      memset_0(v11, 0, 0x90ui64);
      *((_DWORD *)v12 + 26) = 0;
      *((_DWORD *)v12 + 27) = 0x80000000;
      *((_QWORD *)v12 + 14) = 0i64;
      *((_DWORD *)v12 + 30) = 0;
      *((_DWORD *)v12 + 31) = 0x80000000;
      *((_QWORD *)v12 + 16) = 0i64;
      *((_DWORD *)v12 + 34) = 0;
      *((_DWORD *)v12 + 35) = 0x80000000;
    }
    else
    {
      v12 = NULL;
    }
    v13 = hkMemHeapAllocator();
    m_size = this->m_displayGeoLists.m_size;
    if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v13, &this->m_displayGeoLists, 8);
      m_size = this->m_displayGeoLists.m_size;
    }
    this->m_displayGeoLists.m_data[m_size] = (HavokPhysicsDisplayHandler::DisplayGeoList *)v12;
    ++this->m_displayGeoLists.m_size;
    *(_QWORD *)v12 = geometries;
    *((_DWORD *)v12 + 2) = a7;
    v12[12] = 0;
    m_shapeViewer = this->m_shapeViewer;
    if ( m_shapeViewer )
    {
      hknpShapeViewer::decomposeDisplayObjectId(m_shapeViewer, (unsigned __int64)&ida, (hknpWorld **)geometries, &bodyIdOut);
      v12[24] = (bodyId & 0xFFFFFF) != 0xFFFFFF && PhysicsCharacterProxy_IsCharacterProxy(this->m_worldId, bodyId);
    }
    else
    {
      v12[24] = 0;
    }
    v12[25] = 7;
    *((_DWORD *)v12 + 7) = tag;
    *((_OWORD *)v12 + 2) = *color;
    *((_OWORD *)v12 + 3) = color[1];
    *((_OWORD *)v12 + 4) = color[2];
    *((_OWORD *)v12 + 5) = color[3];
    v16 = hkMemHeapAllocator();
    *((_DWORD *)v12 + 26) = 0;
    v17 = *((_DWORD *)v12 + 27);
    if ( v17 >= 0 )
      hkMemoryAllocator::bufFree2(v16, *((void **)v12 + 12), 64, v17 & 0x3FFFFFFF);
    *((_QWORD *)v12 + 12) = 0i64;
    *((_DWORD *)v12 + 27) = 0x80000000;
    v18 = hkMemHeapAllocator();
    v19 = *((_DWORD *)v12 + 34) - 1;
    if ( v19 >= 0 )
    {
      v20 = *((_QWORD *)v12 + 16) + 152i64 * v19;
      v21 = v20;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 8i64))(v21, 0i64);
        v21 -= 152i64;
        v20 -= 152i64;
        --v19;
      }
      while ( v19 >= 0 );
    }
    *((_DWORD *)v12 + 34) = 0;
    v22 = *((_DWORD *)v12 + 35);
    if ( v22 >= 0 )
      hkMemoryAllocator::bufFree2(v18, *((void **)v12 + 16), 152, v22 & 0x3FFFFFFF);
    *((_QWORD *)v12 + 16) = 0i64;
    *((_DWORD *)v12 + 35) = 0x80000000;
    v23 = 0;
    if ( transform->m_rotation.m_col0.m_quad.m128_i32[2] > 0 )
    {
      v24 = v12 + 112;
      v25 = 0i64;
      v26 = 4136;
      do
      {
        v27 = hkMemHeapAllocator();
        v28 = v24[2];
        v29 = v28;
        if ( v28 == (v24[3] & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v27, v24, 112);
          v28 = v24[2];
          v29 = v28;
        }
        v30 = *(_QWORD *)v24;
        v31 = *(_QWORD *)v24 + 112i64 * v28;
        if ( v31 )
        {
          *(_QWORD *)(v31 + 88) = 0i64;
          *(_DWORD *)(v31 + 96) = 0;
          *(_DWORD *)(v31 + 100) = 0x80000000;
          v29 = v24[2];
          v30 = *(_QWORD *)v24;
        }
        v32 = v30 + 112i64 * v29;
        v24[2] = v29 + 1;
        *(_QWORD *)v32 = 1i64;
        v33 = *(_OWORD **)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v25);
        *(_OWORD *)(v32 + 16) = v33[3];
        *(_OWORD *)(v32 + 32) = v33[4];
        *(_OWORD *)(v32 + 48) = v33[5];
        *(_OWORD *)(v32 + 64) = v33[6];
        v34 = *(_QWORD *)(v25 + transform->m_rotation.m_col0.m_quad.m128_u64[0]);
        v35 = *(_DWORD *)(v34 + 112);
        if ( v35 <= 0xC && _bittest(&v26, v35) )
        {
          *(_QWORD *)(v32 + 80) = 0i64;
          v36 = *(_QWORD *)(v25 + transform->m_rotation.m_col0.m_quad.m128_u64[0]);
          v37 = *(void (__fastcall **)(__int64, __int64, hkMemoryAllocator *))(*(_QWORD *)v36 + 32i64);
          v38 = hkMemHeapAllocator();
          v37(v36, v32 + 88, v38);
        }
        else
        {
          v39 = 0;
          if ( !*(_QWORD *)(v34 + 24) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 24i64))(v34);
            v39 = 1;
          }
          v40 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !v40 )
            v40 = hkMemoryRouter::s_fallbackRouter;
          v41 = (hkGeometry *)v40->m_heap->blockAlloc(v40->m_heap, 56i64);
          ida = (unsigned __int64)v41;
          if ( v41 )
            hkGeometry::hkGeometry(v41, *(const hkGeometry **)(*(_QWORD *)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v25) + 24i64));
          else
            v42 = 0i64;
          *(_QWORD *)(v32 + 80) = v42;
          if ( v39 )
            hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v25));
        }
        ++v23;
        v25 += 8i64;
        v26 = 4136;
      }
      while ( v23 < transform->m_rotation.m_col0.m_quad.m128_i32[2] );
    }
  }
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(a);
  *(_DWORD *)id = 0;
  LeaveCriticalSection(lpCriticalSection);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::displayPointEx
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::displayPointEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, hkVector4f *color, hk1PointDisplayStyle::Enum style)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v9; 
  int m_size; 
  HavokPhysicsDisplayHandler::DisplayPoint *v11; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  if ( this->m_displayPoints.m_size < 0x2000 )
  {
    v9 = hkMemHeapAllocator();
    m_size = this->m_displayPoints.m_size;
    if ( m_size == (this->m_displayPoints.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v9, &this->m_displayPoints, 32);
      m_size = this->m_displayPoints.m_size;
    }
    v11 = &this->m_displayPoints.m_data[m_size];
    this->m_displayPoints.m_size = m_size + 1;
    v11->m_pos = (hkVector4f)color->m_quad;
    v11->m_color = style;
  }
  *(_DWORD *)id = 0;
  LeaveCriticalSection(p_m_critSection);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::getCurrentShapeViewer
==============
*/
HavokPhysicsShapeViewer *HavokPhysicsDisplayHandler::getCurrentShapeViewer(HavokPhysicsDisplayHandler *this)
{
  return this->m_shapeViewer;
}

/*
==============
HavokPhysicsDisplayHandler::makeSphereTriList
==============
*/
void HavokPhysicsDisplayHandler::makeSphereTriList(HavokPhysicsDisplayHandler *this, hkArray<hkVector4f,hkContainerHeapAllocator> *verts, hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *tris, const hkVector4f *center, const float scale)
{
  hkMemoryAllocator *v8; 
  int m_size; 
  int v10; 
  int v11; 
  int v12; 
  signed int v14; 
  __int64 v15; 
  __int64 v21; 
  __int64 v27; 
  __int64 v33; 
  hkMemoryAllocator *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  hkGeometry::Triangle *m_data; 
  hkGeometry::Triangle *v45; 
  hkGeometry::Triangle *v46; 
  hkGeometry::Triangle *v47; 
  hkGeometry::Triangle *v48; 
  hkGeometry::Triangle *v49; 
  hkGeometry::Triangle *v50; 
  hkGeometry::Triangle *v51; 
  hkGeometry::Triangle *v52; 
  hkGeometry::Triangle *v53; 
  hkGeometry::Triangle *v54; 
  hkGeometry::Triangle *v55; 
  hkGeometry::Triangle *v56; 
  hkGeometry::Triangle *v57; 
  hkGeometry::Triangle *v58; 
  hkGeometry::Triangle *v59; 
  hkGeometry::Triangle *v60; 
  hkGeometry::Triangle *v61; 
  hkGeometry::Triangle *v62; 
  hkGeometry::Triangle *v63; 

  v8 = hkMemHeapAllocator();
  m_size = verts->m_size;
  v10 = verts->m_capacityAndFlags & 0x3FFFFFFF;
  v11 = m_size + 12;
  if ( v10 < m_size + 12 )
  {
    v12 = 2 * v10;
    if ( (unsigned int)v12 >= 0x3FFFFFFF )
      v12 = 1073741822;
    if ( v11 < v12 )
      v11 = v12;
    hkArrayUtil::_reserve(v8, verts, v11, 16);
    m_size = verts->m_size;
  }
  __asm { vbroadcastss xmm7, [rsp+58h+scale] }
  verts->m_size = m_size + 12;
  v14 = 0;
  *verts->m_data = (hkVector4f)_xmm;
  verts->m_data[1] = (hkVector4f)_xmm;
  verts->m_data[2] = (hkVector4f)_xmm;
  verts->m_data[3] = (hkVector4f)_xmm;
  verts->m_data[4] = (hkVector4f)_xmm;
  verts->m_data[5] = (hkVector4f)_xmm;
  verts->m_data[6] = (hkVector4f)_xmm;
  verts->m_data[7] = (hkVector4f)_xmm;
  verts->m_data[8] = (hkVector4f)_xmm;
  verts->m_data[9] = (hkVector4f)_xmm;
  verts->m_data[10] = (hkVector4f)_xmm;
  verts->m_data[11] = (hkVector4f)_xmm;
  do
  {
    v15 = v14;
    _XMM6 = verts->m_data[v14].m_quad;
    __asm
    {
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
    }
    _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf));
    __asm { vandnps xmm1, xmm5, xmm2 }
    verts->m_data[v15].m_quad = _mm128_mul_ps(_XMM1, _XMM6);
    verts->m_data[v15].m_quad = _mm128_mul_ps(_XMM7, verts->m_data[v14].m_quad);
    verts->m_data[v15].m_quad = _mm128_add_ps(verts->m_data[v14].m_quad, center->m_quad);
    v21 = v14 + 1i64;
    _XMM6 = verts->m_data[v14 + 1].m_quad;
    __asm
    {
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
    }
    _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf));
    __asm { vandnps xmm1, xmm5, xmm2 }
    verts->m_data[v21].m_quad = _mm128_mul_ps(_XMM1, _XMM6);
    verts->m_data[v21].m_quad = _mm128_mul_ps(_XMM7, verts->m_data[v14 + 1].m_quad);
    verts->m_data[v21].m_quad = _mm128_add_ps(verts->m_data[v14 + 1].m_quad, center->m_quad);
    v27 = v14 + 2i64;
    _XMM6 = verts->m_data[v14 + 2].m_quad;
    __asm
    {
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
    }
    _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf));
    __asm { vandnps xmm1, xmm5, xmm2 }
    verts->m_data[v27].m_quad = _mm128_mul_ps(_XMM1, _XMM6);
    verts->m_data[v27].m_quad = _mm128_mul_ps(_XMM7, verts->m_data[v14 + 2].m_quad);
    verts->m_data[v27].m_quad = _mm128_add_ps(verts->m_data[v14 + 2].m_quad, center->m_quad);
    v33 = v14 + 3i64;
    _XMM6 = verts->m_data[v14 + 3].m_quad;
    __asm
    {
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
    }
    _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf));
    __asm { vandnps xmm1, xmm5, xmm2 }
    verts->m_data[v33].m_quad = _mm128_mul_ps(_XMM1, _XMM6);
    v14 += 4;
    verts->m_data[v33].m_quad = _mm128_mul_ps(_XMM7, verts->m_data[v33].m_quad);
    verts->m_data[v33].m_quad = _mm128_add_ps(verts->m_data[v33].m_quad, center->m_quad);
  }
  while ( (unsigned int)v14 < 0xC );
  v39 = hkMemHeapAllocator();
  v40 = tris->m_size;
  v41 = tris->m_capacityAndFlags & 0x3FFFFFFF;
  v42 = v40 + 20;
  if ( v41 < v40 + 20 )
  {
    v43 = 2 * v41;
    if ( (unsigned int)v43 >= 0x3FFFFFFF )
      v43 = 1073741822;
    if ( v42 < v43 )
      v42 = v43;
    hkArrayUtil::_reserve(v39, tris, v42, 16);
    v40 = tris->m_size;
  }
  tris->m_size = v40 + 20;
  m_data = tris->m_data;
  m_data->m_a = 0;
  m_data->m_b = 11;
  m_data->m_c = 5;
  m_data->m_material = -1;
  v45 = tris->m_data;
  v45[1].m_a = 0;
  v45[1].m_b = 5;
  v45[1].m_c = 1;
  v45[1].m_material = -1;
  v46 = tris->m_data;
  v46[2].m_a = 0;
  v46[2].m_b = 1;
  v46[2].m_c = 7;
  v46[2].m_material = -1;
  v47 = tris->m_data;
  v47[3].m_a = 0;
  v47[3].m_b = 7;
  v47[3].m_c = 10;
  v47[3].m_material = -1;
  v48 = tris->m_data;
  v48[4].m_a = 0;
  v48[4].m_b = 10;
  v48[4].m_c = 11;
  v48[4].m_material = -1;
  v49 = tris->m_data;
  v49[5].m_a = 1;
  v49[5].m_b = 5;
  v49[5].m_c = 9;
  v49[5].m_material = -1;
  v50 = tris->m_data;
  v50[6].m_a = 5;
  v50[6].m_b = 11;
  v50[6].m_c = 4;
  v50[6].m_material = -1;
  v51 = tris->m_data;
  v51[7].m_a = 11;
  v51[7].m_b = 10;
  v51[7].m_c = 2;
  v51[7].m_material = -1;
  v52 = tris->m_data;
  v52[8].m_a = 10;
  v52[8].m_b = 7;
  v52[8].m_c = 6;
  v52[8].m_material = -1;
  v53 = tris->m_data;
  v53[9].m_a = 7;
  v53[9].m_b = 1;
  v53[9].m_c = 8;
  v53[9].m_material = -1;
  v54 = tris->m_data;
  v54[10].m_a = 3;
  v54[10].m_b = 9;
  v54[10].m_c = 4;
  v54[10].m_material = -1;
  v55 = tris->m_data;
  v55[11].m_a = 3;
  v55[11].m_b = 4;
  v55[11].m_c = 2;
  v55[11].m_material = -1;
  v56 = tris->m_data;
  v56[12].m_a = 3;
  v56[12].m_b = 2;
  v56[12].m_c = 6;
  v56[12].m_material = -1;
  v57 = tris->m_data;
  v57[13].m_a = 3;
  v57[13].m_b = 6;
  v57[13].m_c = 8;
  v57[13].m_material = -1;
  v58 = tris->m_data;
  v58[14].m_a = 3;
  v58[14].m_b = 8;
  v58[14].m_c = 9;
  v58[14].m_material = -1;
  v59 = tris->m_data;
  v59[15].m_a = 4;
  v59[15].m_b = 9;
  v59[15].m_c = 5;
  v59[15].m_material = -1;
  v60 = tris->m_data;
  v60[16].m_a = 2;
  v60[16].m_b = 4;
  v60[16].m_c = 11;
  v60[16].m_material = -1;
  v61 = tris->m_data;
  v61[17].m_a = 6;
  v61[17].m_b = 2;
  v61[17].m_c = 10;
  v61[17].m_material = -1;
  v62 = tris->m_data;
  v62[18].m_a = 8;
  v62[18].m_b = 6;
  v62[18].m_c = 7;
  v62[18].m_material = -1;
  v63 = tris->m_data;
  v63[19].m_a = 9;
  v63[19].m_b = 8;
  v63[19].m_c = 1;
  v63[19].m_material = -1;
}

/*
==============
HavokPhysicsDisplayHandler::removeGeometry
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::removeGeometry(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 a3)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkCriticalSection *v14; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  v14 = &this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  def = 0i64;
  key = a3;
  v7 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v7 )
  {
    v8 = 0;
    if ( *(int *)(v7 + 120) > 0 )
    {
      v9 = 0i64;
      do
      {
        v10 = *(_QWORD *)(v7 + 112);
        if ( *(_QWORD *)(v9 + v10) == -1i64 )
          *(_QWORD *)(v9 + v10) = 0i64;
        ++v8;
        v9 += 112i64;
      }
      while ( v8 < *(_DWORD *)(v7 + 120) );
    }
    HavokPhysicsDisplayHandler::removeGeometryInternal(this);
  }
  *(_DWORD *)id = 0;
  LeaveCriticalSection(p_m_critSection);
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::removeGeometryInternal
==============
*/
_DWORD *HavokPhysicsDisplayHandler::removeGeometryInternal(HavokPhysicsDisplayHandler *this, _DWORD *a2)
{
  int v4; 
  __int64 v5; 
  HavokPhysicsDisplayHandler::DisplayGeoList *v6; 
  int v7; 
  int m_size; 
  bool v9; 
  __int64 v10; 
  HavokPhysicsDisplayHandler::DisplayGeo *m_data; 
  hkReferencedObject *m_geometry; 
  HavokPhysicsDisplayHandler::DisplayGeo *v13; 
  hkMemoryAllocator *v14; 
  int m_capacityAndFlags; 
  __int64 v16; 
  HavokPhysicsDisplayHandler::DisplayGeo *v17; 
  __int64 v18; 
  int v19; 
  unsigned __int64 m_instanceOriginalGeoId; 
  __int64 v21; 
  hkMemoryRouter *Value; 
  unsigned __int64 v24; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkMemoryRouter *a; 

  a = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  v4 = 0;
  if ( this->m_displayGeoLists.m_size > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = this->m_displayGeoLists.m_data[v5];
      v7 = 0;
      m_size = v6->m_geometries.m_size;
      v9 = m_size == 0;
      if ( m_size > 0 )
      {
        v10 = 0i64;
        do
        {
          m_data = v6->m_geometries.m_data;
          if ( m_data[v10].m_frameCount )
          {
            ++v7;
            ++v10;
          }
          else
          {
            m_geometry = m_data[v10].m_geometry;
            if ( m_geometry )
            {
              hkReferencedObject::removeReference(m_geometry);
              m_data[v10].m_geometry = NULL;
            }
            v13 = &v6->m_geometries.m_data[v10];
            v14 = hkMemHeapAllocator();
            v13->m_lineArray.m_size = 0;
            m_capacityAndFlags = v13->m_lineArray.m_capacityAndFlags;
            if ( m_capacityAndFlags >= 0 )
              hkMemoryAllocator::bufFree2(v14, v13->m_lineArray.m_data, 16, m_capacityAndFlags & 0x3FFFFFFF);
            v13->m_lineArray.m_data = NULL;
            v13->m_lineArray.m_capacityAndFlags = 0x80000000;
            v16 = v6->m_geometries.m_size;
            v6->m_geometries.m_size = v16 - 1;
            if ( (_DWORD)v16 - 1 != v7 )
            {
              v17 = &v6->m_geometries.m_data[v10];
              v18 = 14i64;
              do
              {
                v17->m_frameCount = *(__int64 *)((char *)&v17->m_frameCount + 112 * v16 - 112 - v10 * 112);
                v17 = (HavokPhysicsDisplayHandler::DisplayGeo *)((char *)v17 + 8);
                --v18;
              }
              while ( v18 );
            }
          }
          v19 = v6->m_geometries.m_size;
        }
        while ( v7 < v19 );
        v9 = v19 == 0;
      }
      if ( !v9 || v6->m_decorations.m_size && (m_instanceOriginalGeoId = v6->m_instanceOriginalGeoId, def = 0i64, key = m_instanceOriginalGeoId, *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def)) )
      {
        ++v4;
        ++v5;
      }
      else
      {
        if ( v6->m_mapped )
        {
          def = v6->m_id;
          hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&this->m_geoListMap.m_map, &v24);
        }
        v21 = this->m_displayGeoLists.m_size;
        this->m_displayGeoLists.m_size = v21 - 1;
        if ( (_DWORD)v21 - 1 != v4 )
          this->m_displayGeoLists.m_data[v5] = this->m_displayGeoLists.m_data[v21 - 1];
        HavokPhysicsDisplayHandler::DisplayGeoList::~DisplayGeoList(v6);
        Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !Value )
          Value = hkMemoryRouter::s_fallbackRouter;
        Value->m_heap->blockFree(Value->m_heap, v6, 144);
      }
    }
    while ( v4 < this->m_displayGeoLists.m_size );
  }
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(a);
  *a2 = 0;
  return a2;
}

/*
==============
HavokPhysicsDisplayHandler::render
==============
*/
void HavokPhysicsDisplayHandler::render(HavokPhysicsDisplayHandler *this, GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int v10; 
  unsigned __int8 v11; 
  int v13; 
  unsigned __int8 v14; 
  int v16; 
  unsigned __int8 v17; 
  int v19; 
  unsigned __int8 v20; 
  __int64 v21; 
  hkTransformf *v22; 
  GfxMatrix *ActiveMatrixForEdit; 
  GfxColor v24; 
  int v25; 
  __int64 v26; 
  hkMemoryRouter *a; 
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkTransformf v29; 
  hkTransformf v30; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  a = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  source = gfxContext->source;
  if ( physics_debugVisualizeWorldClearZFirst->current.enabled )
    R_ClearScreen(gfxContext->state, 0x10u, 0);
  v5 = 0;
  v25 = 0;
  if ( this->m_displayGeoLists.m_size > 0 )
  {
    v6 = 0i64;
    v26 = 0i64;
    do
    {
      v7 = *(__int64 *)((char *)this->m_displayGeoLists.m_data + v6);
      if ( !physics_debugVisualizeWorldIgnoreCharacterProxies->current.enabled || !*(_BYTE *)(v7 + 24) )
      {
        _XMM4 = 0i64;
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v10 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v10 = 255;
        v11 = v10;
        if ( v10 < 0 )
          v11 = 0;
        v24.array[0] = v11;
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v13 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v13 = 255;
        v14 = v13;
        if ( v13 < 0 )
          v14 = 0;
        v24.array[1] = v14;
        __asm { vroundss xmm0, xmm4, xmm2, 1 }
        v16 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 > 255 )
          v16 = 255;
        v17 = v16;
        if ( v16 < 0 )
          v17 = 0;
        v24.array[2] = v17;
        __asm { vroundss xmm1, xmm4, xmm3, 1 }
        v19 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 > 255 )
          v19 = 255;
        v20 = v19;
        if ( v19 < 0 )
          v20 = 0;
        v24.array[3] = v20;
        v21 = *(int *)(v7 + 104);
        if ( (_DWORD)v21 )
        {
          v22 = *(hkTransformf **)(v7 + 96);
          if ( v22 != &v22[v21] )
          {
            do
            {
              v29 = *v22;
              HavokPhysicsDisplayHandler::renderGeoList(this, (const HavokPhysicsDisplayHandler::DisplayGeoList *)v7, gfxContext, (hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *)(v7 + 128), (hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *)(v7 + 112), &v29, *(_BYTE *)(v7 + 12), v24);
              ++v22;
            }
            while ( v22 != (hkTransformf *)(*(_QWORD *)(v7 + 96) + ((__int64)*(int *)(v7 + 104) << 6)) );
            v5 = v25;
          }
        }
        else
        {
          v30 = *(hkTransformf *)(v7 + 32);
          HavokPhysicsDisplayHandler::renderGeoList(this, (const HavokPhysicsDisplayHandler::DisplayGeoList *)v7, gfxContext, (hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *)(v7 + 128), (hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *)(v7 + 112), &v30, *(_BYTE *)(v7 + 12), v24);
        }
      }
      v25 = ++v5;
      v6 = v26 + 8;
      v26 += 8i64;
    }
    while ( v5 < this->m_displayGeoLists.m_size );
    source = gfxContext->source;
  }
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
  MatrixIdentity44(&ActiveMatrixForEdit->m);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(a);
  LeaveCriticalSection(p_m_critSection);
}

/*
==============
HavokPhysicsDisplayHandler::renderGeoList
==============
*/
void HavokPhysicsDisplayHandler::renderGeoList(HavokPhysicsDisplayHandler *this, const HavokPhysicsDisplayHandler::DisplayGeoList *geoList, const GfxCmdBufContext *gfxContext, hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *decorations, hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *geometries, const hkTransformf *transform, const bool mapped, const GfxColor rColor)
{
  const GfxCmdBufContext *v8; 
  const HavokPhysicsDisplayHandler::DisplayGeoList *v9; 
  HavokPhysicsDisplayHandler *v10; 
  hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *v11; 
  const hkTransformf *v12; 
  GfxColor v13; 
  __m256i *ActiveMatrixForEdit; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 m_instanceOriginalGeoId; 
  __int64 v19; 
  hkGeometry *m_geometry; 
  __int64 v21; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *p_m_vertices; 
  int v23; 
  int v24; 
  __int64 v25; 
  hkMemoryAllocator *v26; 
  int v27; 
  __int64 v28; 
  hkMemoryAllocator *v29; 
  int m_size; 
  hkGeometry::Triangle *v31; 
  hkMemoryAllocator *v32; 
  __int64 v33; 
  int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  __int64 v37; 
  hkMemoryAllocator *v38; 
  int v39; 
  hkVector4f *v40; 
  hkMemoryAllocator *v41; 
  int v42; 
  hkVector4f *v43; 
  hkMemoryAllocator *v44; 
  int v45; 
  hkVector4f *v46; 
  hkMemoryAllocator *v47; 
  int v48; 
  hkVector4f *v49; 
  hkMemoryAllocator *v50; 
  int v51; 
  hkVector4f *v52; 
  hkMemoryAllocator *v53; 
  int v54; 
  hkVector4f *v55; 
  int *v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  hkMemoryAllocator *v60; 
  __int64 v61; 
  int v62; 
  hkMemoryAllocator *v63; 
  int v64; 
  __int64 v65; 
  __int64 v66; 
  hkMemoryAllocator *v67; 
  int v68; 
  hkVector4f *v69; 
  hkMemoryAllocator *v70; 
  int v71; 
  hkVector4f *v72; 
  __int64 v73; 
  __int64 v74; 
  hkMemoryAllocator *v75; 
  unsigned __int64 v76; 
  GfxCmdBufContext *v78; 
  __int64 v79; 
  const hkVector4f *v80; 
  float v81; 
  int v84; 
  unsigned __int8 v85; 
  int v87; 
  unsigned __int8 v88; 
  int v90; 
  unsigned __int8 v91; 
  int v93; 
  unsigned __int8 v94; 
  hkMemoryAllocator *v95; 
  hkMemoryAllocator *v96; 
  __int64 v97; 
  __int64 v98; 
  const hkVector4f *v99; 
  float v101; 
  unsigned __int64 v103; 
  int v104; 
  hkMemoryAllocator *v105; 
  int v106; 
  __int64 v107; 
  hkMemoryAllocator *v108; 
  int v109; 
  hkVector4f *v110; 
  hkMemoryAllocator *v111; 
  int v112; 
  hkVector4f *v113; 
  hkMemoryAllocator *v114; 
  int v115; 
  hkVector4f *v116; 
  hkMemoryAllocator *v117; 
  int v118; 
  hkVector4f *v119; 
  hkMemoryAllocator *v120; 
  int v121; 
  hkVector4f *v122; 
  hkMemoryAllocator *v123; 
  int v124; 
  hkVector4f *v125; 
  __int64 m_b; 
  __int64 m_c; 
  __int64 m_a; 
  hkMemoryAllocator *v129; 
  hkMemoryAllocator *v130; 
  hkMemoryAllocator *v131; 
  int v132; 
  __int64 v133; 
  HavokPhysicsDisplayHandler::DisplayGeo *m_data; 
  __int64 m_frameCount; 
  __int64 v136; 
  hkGeometry *v137; 
  GfxColor v138; 
  int v139; 
  hkArray<hkVector4f,hkContainerHeapAllocator> lines; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v141; 
  HavokPhysicsDisplayHandler *v142; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v143; 
  GfxColor v144; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> array; 
  const HavokPhysicsDisplayHandler::DisplayGeoList *v146; 
  unsigned __int64 key; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v148; 
  GfxCmdBufContext *gfxContexta; 
  __int64 v150; 
  GfxColor v151; 
  int v152; 
  hkTransformf *v153; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> v154; 
  hkTransformf *parentTransform; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> tris; 
  hkArray<hkVector4f,hkContainerHeapAllocator> verts; 
  __int64 v158; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v159; 
  hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *v160; 
  unsigned __int64 def[2]; 
  __int64 v162; 
  hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *v163; 
  __int64 v164; 
  __m256i v165; 
  __m256i v166; 

  v164 = -2i64;
  v160 = decorations;
  v8 = gfxContext;
  gfxContexta = (GfxCmdBufContext *)gfxContext;
  v9 = geoList;
  v146 = geoList;
  v10 = this;
  v142 = this;
  v11 = geometries;
  v163 = geometries;
  v12 = transform;
  parentTransform = (hkTransformf *)transform;
  v13 = rColor;
  v151 = rColor;
  v165.m256i_i64[0] = transform->m_rotation.m_col0.m_quad.m128_u64[0];
  v165.m256i_i32[2] = transform->m_rotation.m_col0.m_quad.m128_i32[2];
  *(float *)&v165.m256i_i32[3] = 0.0;
  v165.m256i_i64[2] = transform->m_rotation.m_col1.m_quad.m128_i64[0];
  v165.m256i_i32[6] = transform->m_rotation.m_col1.m_quad.m128_i32[2];
  *(float *)&v165.m256i_i32[7] = 0.0;
  v166.m256i_i64[0] = transform->m_rotation.m_col2.m_quad.m128_i64[0];
  v166.m256i_i32[2] = transform->m_rotation.m_col2.m_quad.m128_i32[2];
  *(float *)&v166.m256i_i32[3] = 0.0;
  *(float *)&v166.m256i_i32[4] = 32.0 * transform->m_translation.m_quad.m128_f32[0];
  *(float *)&v166.m256i_i32[5] = 32.0 * transform->m_translation.m_quad.m128_f32[1];
  *(float *)&v166.m256i_i32[6] = 32.0 * transform->m_translation.m_quad.m128_f32[2];
  *(float *)&v166.m256i_i32[7] = FLOAT_1_0;
  R_Set3D(gfxContext->source);
  v8->source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
  ActiveMatrixForEdit = (__m256i *)R_GetActiveMatrixForEdit(v8->source, 0xAAu);
  *ActiveMatrixForEdit = v165;
  ActiveMatrixForEdit[1] = v166;
  v15 = 0;
  v139 = 0;
  do
  {
    v152 = 0;
    v16 = 0i64;
    v162 = 0i64;
    if ( v160->m_size <= 0 )
      goto LABEL_138;
    do
    {
      v17 = (__int64)&v160->m_data[v16];
      v158 = v17;
      m_instanceOriginalGeoId = v9->m_instanceOriginalGeoId;
      if ( !m_instanceOriginalGeoId )
        goto LABEL_136;
      def[0] = 0i64;
      key = m_instanceOriginalGeoId;
      v19 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&v10->m_geoListMap.m_map, &key, def);
      if ( !v19 )
      {
        v15 = v139;
        goto LABEL_136;
      }
      if ( v9->m_geometries.m_size == 1 )
      {
        m_geometry = v9->m_geometries.m_data->m_geometry;
        v21 = *(_QWORD *)(v19 + 112);
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 112);
        m_geometry = *(hkGeometry **)(v21 + 80);
      }
      p_m_vertices = &m_geometry->m_vertices;
      v159 = &m_geometry->m_vertices;
      v153 = (hkTransformf *)(v21 + 16);
      v23 = *(_DWORD *)(v17 + 128);
      v24 = v139;
      if ( v23 > 0 )
      {
        v25 = *(int *)(v17 + 128);
        key = v25;
        if ( !v139 )
        {
          array.m_data = NULL;
          array.m_size = 0;
          array.m_capacityAndFlags = 0x80000000;
          v26 = hkMemHeapAllocator();
          if ( (array.m_capacityAndFlags & 0x3FFFFFFF) < v23 )
          {
            v27 = 2 * (array.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v27 >= 0x3FFFFFFF )
              v27 = 1073741822;
            if ( v23 < v27 )
              v23 = v27;
            hkArrayUtil::_reserve(v26, &array, v23, 16);
          }
          if ( v25 > 0 )
          {
            v28 = 0i64;
            do
            {
              if ( *(_DWORD *)(*(_QWORD *)(v17 + 120) + v28 + 16) == 3 )
              {
                v29 = hkMemHeapAllocator();
                m_size = array.m_size;
                if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v29, &array, 16);
                  m_size = array.m_size;
                }
                v31 = &array.m_data[m_size];
                array.m_size = m_size + 1;
                v31->m_a = **(_DWORD **)(*(_QWORD *)(v17 + 120) + v28 + 8);
                v31->m_b = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 120) + v28 + 8) + 4i64);
                v31->m_c = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 120) + v28 + 8) + 8i64);
              }
              v28 += 32i64;
              --v25;
            }
            while ( v25 );
          }
          HavokPhysicsDisplayHandler::renderTriList(v142, v8, mapped, p_m_vertices, &array, v153, v13);
          v32 = hkMemHeapAllocator();
          v33 = 0i64;
          array.m_size = 0;
          if ( array.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v32, array.m_data, 16, array.m_capacityAndFlags & 0x3FFFFFFF);
          array.m_data = NULL;
          array.m_capacityAndFlags = 0x80000000;
          v24 = v139;
          goto LABEL_55;
        }
        if ( v139 == 1 )
        {
          lines.m_data = NULL;
          lines.m_size = 0;
          lines.m_capacityAndFlags = 0x80000000;
          v34 = 6 * v23;
          v35 = hkMemHeapAllocator();
          if ( (lines.m_capacityAndFlags & 0x3FFFFFFF) < v34 )
          {
            v36 = 2 * (lines.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v36 >= 0x3FFFFFFF )
              v36 = 1073741822;
            if ( v34 < v36 )
              v34 = v36;
            hkArrayUtil::_reserve(v35, &lines, v34, 16);
          }
          if ( v25 > 0 )
          {
            v37 = 0i64;
            v150 = 0i64;
            do
            {
              if ( *(_DWORD *)(*(_QWORD *)(v17 + 120) + v37 + 16) == 3 )
              {
                v38 = hkMemHeapAllocator();
                v39 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v38, &lines, 16);
                  v39 = lines.m_size;
                }
                v40 = &lines.m_data[v39];
                lines.m_size = v39 + 1;
                v41 = hkMemHeapAllocator();
                v42 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v41, &lines, 16);
                  v42 = lines.m_size;
                }
                v43 = &lines.m_data[v42];
                lines.m_size = v42 + 1;
                v44 = hkMemHeapAllocator();
                v45 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v44, &lines, 16);
                  v45 = lines.m_size;
                }
                v46 = &lines.m_data[v45];
                lines.m_size = v45 + 1;
                v47 = hkMemHeapAllocator();
                v48 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v47, &lines, 16);
                  v48 = lines.m_size;
                }
                v49 = &lines.m_data[v48];
                lines.m_size = v48 + 1;
                v50 = hkMemHeapAllocator();
                v51 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v50, &lines, 16);
                  v51 = lines.m_size;
                }
                v52 = &lines.m_data[v51];
                lines.m_size = v51 + 1;
                v53 = hkMemHeapAllocator();
                v54 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v53, &lines, 16);
                  v54 = lines.m_size;
                }
                v55 = &lines.m_data[v54];
                lines.m_size = v54 + 1;
                v56 = *(int **)(*(_QWORD *)(v158 + 120) + v150 + 8);
                v57 = v56[1];
                v58 = v56[2];
                v59 = *v56;
                *v40 = v159->m_data[*v56];
                p_m_vertices = v159;
                *v43 = v159->m_data[v57];
                *v46 = p_m_vertices->m_data[v57];
                *v49 = p_m_vertices->m_data[v58];
                *v52 = p_m_vertices->m_data[v58];
                *v55 = p_m_vertices->m_data[v59];
                v25 = key;
                v37 = v150;
                v17 = v158;
              }
              v37 += 32i64;
              v150 = v37;
              key = --v25;
            }
            while ( v25 );
            v8 = gfxContexta;
          }
          HavokPhysicsDisplayHandler::renderLineList(v142, v8, &lines, parentTransform, v153, (const GfxColor)-16777216);
          v60 = hkMemHeapAllocator();
          v33 = 0i64;
          lines.m_size = 0;
          if ( lines.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v60, lines.m_data, 16, lines.m_capacityAndFlags & 0x3FFFFFFF);
          lines.m_data = NULL;
          lines.m_capacityAndFlags = 0x80000000;
          v24 = v139;
          goto LABEL_55;
        }
      }
      v33 = 0i64;
LABEL_55:
      v61 = *(int *)(v17 + 96);
      if ( (int)v61 > 0 && v24 == 1 )
      {
        v143.m_data = NULL;
        v143.m_size = 0;
        v143.m_capacityAndFlags = 0x80000000;
        v62 = 2 * v61;
        v63 = hkMemHeapAllocator();
        if ( (v143.m_capacityAndFlags & 0x3FFFFFFF) < 2 * (int)v61 )
        {
          v64 = 2 * (v143.m_capacityAndFlags & 0x3FFFFFFF);
          if ( (unsigned int)v64 >= 0x3FFFFFFF )
            v64 = 1073741822;
          if ( v62 < v64 )
            v62 = v64;
          hkArrayUtil::_reserve(v63, &v143, v62, 16);
        }
        v65 = v61;
        if ( (int)v61 > 0 )
        {
          v66 = 0i64;
          do
          {
            v67 = hkMemHeapAllocator();
            v68 = v143.m_size;
            if ( v143.m_size == (v143.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v67, &v143, 16);
              v68 = v143.m_size;
            }
            v69 = &v143.m_data[v68];
            v143.m_size = v68 + 1;
            v70 = hkMemHeapAllocator();
            v71 = v143.m_size;
            if ( v143.m_size == (v143.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v70, &v143, 16);
              v71 = v143.m_size;
            }
            v72 = &v143.m_data[v71];
            v143.m_size = v71 + 1;
            v73 = *(_QWORD *)(v17 + 88);
            v74 = *(int *)(v66 + v73 + 12);
            *v69 = p_m_vertices->m_data[*(int *)(v66 + v73 + 8)];
            *v72 = p_m_vertices->m_data[v74];
            v66 += 24i64;
            --v65;
          }
          while ( v65 );
        }
        v10 = v142;
        HavokPhysicsDisplayHandler::renderLineList(v142, gfxContexta, &v143, parentTransform, v153, (const GfxColor)-16777216);
        v75 = hkMemHeapAllocator();
        v33 = 0i64;
        v143.m_size = 0;
        if ( v143.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v75, v143.m_data, 16, v143.m_capacityAndFlags & 0x3FFFFFFF);
        v143.m_data = NULL;
        v143.m_capacityAndFlags = 0x80000000;
      }
      else
      {
        v10 = v142;
      }
      v15 = v139;
      if ( *(int *)(v17 + 64) <= 0 )
        goto LABEL_135;
      v76 = *(int *)(v17 + 64);
      def[0] = v76;
      if ( !v139 )
      {
        _XMM7 = 0i64;
        v78 = gfxContexta;
        do
        {
          v79 = *(_QWORD *)(v17 + 56);
          v80 = &p_m_vertices->m_data[*(int *)(v33 + v79 + 8)];
          *(_OWORD *)def = *(_OWORD *)(*(_QWORD *)(v17 + 72) + 16i64 * *(unsigned __int16 *)(v33 + v79 + 12));
          LODWORD(v81) = _mm_shuffle_ps(*(__m128 *)def, *(__m128 *)def, 170).m128_u32[0];
          __asm { vpextrq rax, xmm0, 1 }
          if ( (_RAX & 0x100000000i64) != 0 )
            v81 = *(float *)(v33 + v79 + 16);
          verts.m_data = NULL;
          verts.m_size = 0;
          verts.m_capacityAndFlags = 0x80000000;
          tris.m_data = NULL;
          tris.m_size = 0;
          tris.m_capacityAndFlags = 0x80000000;
          HavokPhysicsDisplayHandler::makeSphereTriList(v10, &verts, &tris, v80, v81);
          __asm { vroundss xmm3, xmm7, xmm1, 1 }
          v84 = (int)*(float *)&_XMM3;
          if ( (int)*(float *)&_XMM3 > 255 )
            v84 = 255;
          v85 = v84;
          if ( v84 < 0 )
            v85 = 0;
          v144.array[0] = v85;
          __asm { vroundss xmm3, xmm7, xmm1, 1 }
          v87 = (int)*(float *)&_XMM3;
          if ( (int)*(float *)&_XMM3 > 255 )
            v87 = 255;
          v88 = v87;
          if ( v87 < 0 )
            v88 = 0;
          v144.array[1] = v88;
          __asm { vroundss xmm3, xmm7, xmm1, 1 }
          v90 = (int)*(float *)&_XMM3;
          if ( (int)*(float *)&_XMM3 > 255 )
            v90 = 255;
          v91 = v90;
          if ( v90 < 0 )
            v91 = 0;
          v144.array[2] = v91;
          __asm { vroundss xmm3, xmm7, xmm2, 1 }
          v93 = (int)*(float *)&_XMM3;
          if ( (int)*(float *)&_XMM3 > 255 )
            v93 = 255;
          v94 = v93;
          if ( v93 < 0 )
            v94 = 0;
          v144.array[3] = v94;
          HavokPhysicsDisplayHandler::renderTriList(v10, v78, mapped, &verts, &tris, v153, v144);
          v95 = hkMemHeapAllocator();
          tris.m_size = 0;
          if ( tris.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v95, tris.m_data, 16, tris.m_capacityAndFlags & 0x3FFFFFFF);
          tris.m_data = NULL;
          tris.m_capacityAndFlags = 0x80000000;
          v96 = hkMemHeapAllocator();
          verts.m_size = 0;
          if ( verts.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v96, verts.m_data, 16, verts.m_capacityAndFlags & 0x3FFFFFFF);
          verts.m_data = NULL;
          verts.m_capacityAndFlags = 0x80000000;
          v33 += 24i64;
          --v76;
        }
        while ( v76 );
        v13 = v151;
        v15 = v139;
LABEL_135:
        v9 = v146;
        goto LABEL_136;
      }
      if ( v139 == 1 )
      {
        v97 = 0i64;
        v150 = 0i64;
        do
        {
          v141.m_data = NULL;
          v141.m_size = 0;
          v141.m_capacityAndFlags = 0x80000000;
          v98 = *(_QWORD *)(v17 + 56);
          v99 = &p_m_vertices->m_data[*(int *)(v97 + v98 + 8)];
          _XMM0 = *(__m128 *)(*(_QWORD *)(v17 + 72) + 16i64 * *(unsigned __int16 *)(v97 + v98 + 12));
          LODWORD(v101) = _mm_shuffle_ps(_XMM0, _XMM0, 170).m128_u32[0];
          __asm { vpextrq rax, xmm0, 1 }
          if ( (_RAX & 0x100000000i64) != 0 )
            v101 = *(float *)(v97 + v98 + 16);
          v148.m_data = NULL;
          v148.m_size = 0;
          v148.m_capacityAndFlags = 0x80000000;
          v154.m_data = NULL;
          v154.m_size = 0;
          v154.m_capacityAndFlags = 0x80000000;
          HavokPhysicsDisplayHandler::makeSphereTriList(v142, &v148, &v154, v99, v101);
          v103 = v154.m_size;
          v104 = 6 * v154.m_size;
          v105 = hkMemHeapAllocator();
          if ( (v141.m_capacityAndFlags & 0x3FFFFFFF) < v104 )
          {
            v106 = 2 * (v141.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v106 >= 0x3FFFFFFF )
              v106 = 1073741822;
            if ( v104 < v106 )
              v104 = v106;
            hkArrayUtil::_reserve(v105, &v141, v104, 16);
          }
          key = v103;
          if ( (int)v103 > 0 )
          {
            v107 = 0i64;
            do
            {
              v108 = hkMemHeapAllocator();
              v109 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v108, &v141, 16);
                v109 = v141.m_size;
              }
              v110 = &v141.m_data[v109];
              v141.m_size = v109 + 1;
              v111 = hkMemHeapAllocator();
              v112 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v111, &v141, 16);
                v112 = v141.m_size;
              }
              v113 = &v141.m_data[v112];
              v141.m_size = v112 + 1;
              v114 = hkMemHeapAllocator();
              v115 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v114, &v141, 16);
                v115 = v141.m_size;
              }
              v116 = &v141.m_data[v115];
              v141.m_size = v115 + 1;
              v117 = hkMemHeapAllocator();
              v118 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v117, &v141, 16);
                v118 = v141.m_size;
              }
              v119 = &v141.m_data[v118];
              v141.m_size = v118 + 1;
              v120 = hkMemHeapAllocator();
              v121 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v120, &v141, 16);
                v121 = v141.m_size;
              }
              v122 = &v141.m_data[v121];
              v141.m_size = v121 + 1;
              v123 = hkMemHeapAllocator();
              v124 = v141.m_size;
              if ( v141.m_size == (v141.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v123, &v141, 16);
                v124 = v141.m_size;
              }
              v125 = &v141.m_data[v124];
              v141.m_size = v124 + 1;
              m_b = v154.m_data[v107].m_b;
              m_c = v154.m_data[v107].m_c;
              m_a = v154.m_data[v107].m_a;
              *v110 = v148.m_data[v154.m_data[v107].m_a];
              m_b *= 2i64;
              *v113 = *(hkVector4f *)((char *)v148.m_data + 8 * m_b);
              *v116 = *(hkVector4f *)((char *)v148.m_data + 8 * m_b);
              m_c *= 2i64;
              *v119 = *(hkVector4f *)((char *)v148.m_data + 8 * m_c);
              *v122 = *(hkVector4f *)((char *)v148.m_data + 8 * m_c);
              *v125 = v148.m_data[m_a];
              HavokPhysicsDisplayHandler::renderLineList(v142, gfxContexta, &v141, parentTransform, v153, (const GfxColor)-16777216);
              ++v107;
              --key;
            }
            while ( key );
            v17 = v158;
            v97 = v150;
            v76 = def[0];
            p_m_vertices = v159;
          }
          v129 = hkMemHeapAllocator();
          v154.m_size = 0;
          if ( v154.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v129, v154.m_data, 16, v154.m_capacityAndFlags & 0x3FFFFFFF);
          v154.m_data = NULL;
          v154.m_capacityAndFlags = 0x80000000;
          v130 = hkMemHeapAllocator();
          v148.m_size = 0;
          if ( v148.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v130, v148.m_data, 16, v148.m_capacityAndFlags & 0x3FFFFFFF);
          v148.m_data = NULL;
          v148.m_capacityAndFlags = 0x80000000;
          v131 = hkMemHeapAllocator();
          v141.m_size = 0;
          if ( v141.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v131, v141.m_data, 16, v141.m_capacityAndFlags & 0x3FFFFFFF);
          v141.m_data = NULL;
          v141.m_capacityAndFlags = 0x80000000;
          v97 += 24i64;
          v150 = v97;
          def[0] = --v76;
        }
        while ( v76 );
        v13 = v151;
        v10 = v142;
        v15 = v139;
        goto LABEL_135;
      }
      v9 = v146;
LABEL_136:
      ++v152;
      v16 = ++v162;
      v8 = gfxContexta;
    }
    while ( v152 < v160->m_size );
    v12 = parentTransform;
    v11 = v163;
LABEL_138:
    v132 = 0;
    if ( v11->m_size > 0 )
    {
      v133 = 0i64;
      do
      {
        m_data = v11->m_data;
        m_frameCount = v11->m_data[v133].m_frameCount;
        v136 = m_frameCount;
        if ( m_frameCount != -1 && m_frameCount > 0 )
        {
          v136 = m_frameCount - 1;
          m_data[v133].m_frameCount = m_frameCount - 1;
        }
        if ( v136 >= -1 )
        {
          if ( v15 )
          {
            if ( v15 == 1 && m_data[v133].m_lineArray.m_size > 0 )
            {
              v138 = v13;
              if ( m_data[v133].m_geometry )
                v138.packed = -16777216;
              HavokPhysicsDisplayHandler::renderLineList(v142, v8, &m_data[v133].m_lineArray, v12, &m_data[v133].m_transform, v138);
            }
          }
          else
          {
            v137 = m_data[v133].m_geometry;
            if ( v137 )
            {
              if ( physics_debugVisualizeWorldViewMode->current.integer != 2 )
                HavokPhysicsDisplayHandler::renderTriList(v142, v8, mapped, &v137->m_vertices, &v137->m_triangles, &m_data[v133].m_transform, v13);
            }
          }
        }
        ++v132;
        ++v133;
        v15 = v139;
      }
      while ( v132 < v11->m_size );
    }
    v139 = ++v15;
    v10 = v142;
    v9 = v146;
  }
  while ( v15 < 2 );
}

/*
==============
HavokPhysicsDisplayHandler::renderLineList
==============
*/
void HavokPhysicsDisplayHandler::renderLineList(HavokPhysicsDisplayHandler *this, const GfxCmdBufContext *gfxContext, const hkArray<hkVector4f,hkContainerHeapAllocator> *lines, const hkTransformf *parentTransform, const hkTransformf *transform, const GfxColor rColor)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v12; 
  float v13; 
  float v14; 
  GfxCmdBufContext v15; 
  float v16; 
  const GfxCmdBufContext *v17; 
  unsigned int v18; 
  int m_size; 
  unsigned int v20; 
  signed int v21; 
  unsigned int v22; 
  GfxCmdBufContext v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  materialCommands_t *Tess; 
  materialCommands_t *v29; 
  int v30; 
  unsigned int v31; 
  signed int v32; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  GfxCmdBufContext v46; 
  bool v47; 
  __int64 v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  unsigned int v65; 
  GfxCmdBufContext v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  unsigned int v73; 
  const GfxCmdBufContext *v74; 
  __int64 v75; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v76; 
  GfxCmdBufContext v77; 
  vec3_t v78; 

  v6 = parentTransform->m_rotation.m_col1.m_quad.m128_f32[0];
  v7 = 32.0 * parentTransform->m_translation.m_quad.m128_f32[2];
  v8 = transform->m_rotation.m_col0.m_quad.m128_f32[0];
  v9 = transform->m_rotation.m_col0.m_quad.m128_f32[1];
  v10 = transform->m_rotation.m_col1.m_quad.m128_f32[0];
  v11 = 32.0 * transform->m_translation.m_quad.m128_f32[2];
  v12 = lines;
  v13 = parentTransform->m_rotation.m_col0.m_quad.m128_f32[0];
  v14 = parentTransform->m_rotation.m_col0.m_quad.m128_f32[1];
  v70 = parentTransform->m_rotation.m_col0.m_quad.m128_f32[2];
  v69 = parentTransform->m_rotation.m_col1.m_quad.m128_f32[1];
  v63 = parentTransform->m_rotation.m_col1.m_quad.m128_f32[2];
  v59 = parentTransform->m_rotation.m_col2.m_quad.m128_f32[0];
  v61 = parentTransform->m_rotation.m_col2.m_quad.m128_f32[1];
  v60 = 32.0 * parentTransform->m_translation.m_quad.m128_f32[0];
  v62 = 32.0 * parentTransform->m_translation.m_quad.m128_f32[1];
  v57 = transform->m_rotation.m_col0.m_quad.m128_f32[2];
  v53 = transform->m_rotation.m_col1.m_quad.m128_f32[1];
  v56 = transform->m_rotation.m_col1.m_quad.m128_f32[2];
  v51 = transform->m_rotation.m_col2.m_quad.m128_f32[0];
  v54 = transform->m_rotation.m_col2.m_quad.m128_f32[1];
  v58 = transform->m_rotation.m_col2.m_quad.m128_f32[2];
  v52 = 32.0 * transform->m_translation.m_quad.m128_f32[0];
  v55 = 32.0 * transform->m_translation.m_quad.m128_f32[1];
  v15 = *gfxContext;
  v68 = v6;
  v16 = parentTransform->m_rotation.m_col2.m_quad.m128_f32[2];
  v77 = v15;
  v71 = v16;
  v72 = v7;
  v64 = v8;
  v49 = v9;
  v50 = v10;
  v67 = v11;
  v76 = lines;
  v17 = gfxContext;
  v74 = gfxContext;
  v18 = R_GetTess(&v77)->maxVertices >> 2;
  m_size = v12->m_size;
  v73 = v18;
  v20 = (m_size / 2 + v18 - 1) / v18;
  if ( v20 )
  {
    v21 = v18;
    v22 = 0;
    v65 = v18;
    v75 = v20;
    do
    {
      v23 = *v17;
      v24 = v12->m_size / 2;
      v66 = *v17;
      if ( v21 < v24 )
        v24 = v21;
      v25 = v24 + v18 - v21;
      v26 = 4 * v25;
      v27 = 6 * v25;
      Tess = R_GetTess(&v66);
      if ( v26 > Tess->maxVertices )
      {
        LODWORD(v48) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v48) )
          __debugbreak();
      }
      if ( v27 > Tess->maxIndices )
      {
        LODWORD(v48) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v48) )
          __debugbreak();
      }
      v66 = v23;
      v29 = R_GetTess(&v66);
      if ( v29->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v26 + v29->vertexCount) < v27 + v29->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v26 + Tess->vertexCount > Tess->maxVertices || v27 + Tess->indexCount > Tess->maxIndices )
      {
        v66 = v23;
        RB_TessOverflowInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      v17 = v74;
      v30 = 0;
      v31 = 2 * v24;
      v32 = v22;
      if ( v22 < v31 )
      {
        v33 = v76;
        do
        {
          v34 = 32.0 * v33->m_data[v32].m_quad.m128_f32[0];
          v35 = 32.0 * v33->m_data[v32].m_quad.m128_f32[1];
          v36 = 32.0 * v33->m_data[v32].m_quad.m128_f32[2];
          v37 = (float)((float)((float)(v8 * v34) + (float)(v35 * v10)) + (float)(v36 * v51)) + v52;
          v38 = (float)((float)((float)(v9 * v34) + (float)(v35 * v53)) + (float)(v36 * v54)) + v55;
          v39 = (float)((float)((float)(v34 * v57) + (float)(v35 * v56)) + (float)(v36 * v58)) + v67;
          v40 = 32.0 * v33->m_data[v32 + 1].m_quad.m128_f32[0];
          v41 = 32.0 * v33->m_data[v32 + 1].m_quad.m128_f32[1];
          v42 = 32.0 * v33->m_data[v32 + 1].m_quad.m128_f32[2];
          v43 = (float)((float)((float)(v41 * v50) + (float)(v40 * v8)) + (float)(v42 * v51)) + v52;
          v44 = (float)((float)((float)(v41 * v53) + (float)(v40 * v49)) + (float)(v42 * v54)) + v55;
          v45 = (float)((float)((float)(v41 * v56) + (float)(v40 * v57)) + (float)(v42 * v58)) + v67;
          *(float *)&v77.source = (float)((float)((float)(v38 * v68) + (float)(v37 * v13)) + (float)(v39 * v59)) + v60;
          *((float *)&v77.source + 1) = (float)((float)((float)(v38 * v69) + (float)(v37 * v14)) + (float)(v39 * v61)) + v62;
          *(float *)&v77.state = (float)((float)((float)(v38 * v63) + (float)(v37 * v70)) + (float)(v39 * v71)) + v72;
          v78.v[0] = (float)((float)((float)(v44 * v68) + (float)(v43 * v13)) + (float)(v45 * v59)) + v60;
          v78.v[1] = (float)((float)((float)(v44 * v69) + (float)(v43 * v14)) + (float)(v45 * v61)) + v62;
          v46 = *v17;
          v78.v[2] = (float)((float)((float)(v44 * v63) + (float)(v43 * v70)) + (float)(v45 * v71)) + v72;
          v66 = v46;
          v8 = v64;
          v9 = v49;
          v10 = v50;
          v32 += 2;
          v30 = RB_AddDebugLine(&v66, (const vec3_t *)&v77, &v78, rColor, 1, v30, 0x7FFF, s_HavokPhysicsDisplayHandlerVerts);
        }
        while ( v32 < v31 );
        v21 = v65;
      }
      v66 = *v17;
      RB_EndDebugLines(&v66, 1, v30 / 2, s_HavokPhysicsDisplayHandlerVerts);
      v18 = v73;
      v21 += v73;
      v47 = v75-- == 1;
      v12 = v76;
      v65 = v21;
      v22 += 2 * v73;
    }
    while ( !v47 );
  }
}

/*
==============
HavokPhysicsDisplayHandler::renderTriList
==============
*/
void HavokPhysicsDisplayHandler::renderTriList(HavokPhysicsDisplayHandler *this, const GfxCmdBufContext *gfxContext, bool mapped, const hkArray<hkVector4f,hkContainerHeapAllocator> *verts, const hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *tris, const hkTransformf *transform, const GfxColor rColor)
{
  _QWORD *p_m_data; 
  int integer; 
  bool v11; 
  int v12; 
  int m_size; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  materialCommands_t *Tess; 
  int v23; 
  _QWORD *v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  GfxCmdBufContext v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  int v40; 
  GfxCmdBufContext v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  int v46; 
  int v47; 
  GfxCmdBufContext v48; 
  vec3_t v49; 

  p_m_data = &tris->m_data;
  *(_QWORD *)v49.v = verts;
  integer = physics_debugVisualizeWorldViewMode->current.integer;
  v48.source = (GfxCmdBufSourceState *)tris;
  v47 = integer;
  v11 = ((integer - 1) & 0xFFFFFFFD) == 0 || !mapped;
  if ( integer && !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp", 1067, ASSERT_TYPE_ASSERT, "(renderBackface || renderFrontface)", (const char *)&queryFormat, "renderBackface || renderFrontface") )
    __debugbreak();
  v12 = 0;
  m_size = tris->m_size;
  v40 = verts->m_size;
  v46 = m_size;
  v39 = 3 * m_size * (v11 + (integer == 0));
  v14 = transform->m_rotation.m_col0.m_quad.m128_f32[0];
  v15 = transform->m_rotation.m_col0.m_quad.m128_f32[1];
  v16 = transform->m_rotation.m_col0.m_quad.m128_f32[2];
  v17 = transform->m_rotation.m_col1.m_quad.m128_f32[0];
  v18 = transform->m_rotation.m_col1.m_quad.m128_f32[1];
  v19 = transform->m_rotation.m_col1.m_quad.m128_f32[2];
  v20 = transform->m_rotation.m_col2.m_quad.m128_f32[0];
  v21 = transform->m_rotation.m_col2.m_quad.m128_f32[1];
  v44 = transform->m_rotation.m_col2.m_quad.m128_f32[2];
  v42 = 32.0 * transform->m_translation.m_quad.m128_f32[0];
  v43 = 32.0 * transform->m_translation.m_quad.m128_f32[1];
  v45 = 32.0 * transform->m_translation.m_quad.m128_f32[2];
  v41 = *gfxContext;
  Tess = R_GetTess(&v41);
  if ( v39 )
  {
    v41 = *gfxContext;
    RB_BeginSurface(&v41, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    v41 = *gfxContext;
    RB_CheckTessOverflow(&v41, v40, v39);
    v23 = v40;
    if ( v40 > 0 )
    {
      v24 = *(_QWORD **)v49.v;
      v25 = 0i64;
      v26 = v40;
      do
      {
        v27 = v12 + Tess->vertexCount;
        v28 = 32.0 * *(float *)(v25 + *v24);
        v29 = 32.0 * *(float *)(v25 + *v24 + 4);
        v30 = 32.0 * *(float *)(v25 + *v24 + 8);
        v49.v[0] = (float)((float)((float)(v29 * v17) + (float)(v28 * v14)) + (float)(v30 * v20)) + v42;
        v49.v[1] = (float)((float)((float)(v29 * v18) + (float)(v28 * v15)) + (float)(v30 * v21)) + v43;
        v31 = *gfxContext;
        v49.v[2] = (float)((float)((float)(v29 * v19) + (float)(v28 * v16)) + (float)(v30 * v44)) + v45;
        v41 = v31;
        RB_SetPolyVert(&v41, &v49, rColor, v27);
        ++v12;
        v25 += 16i64;
        --v26;
      }
      while ( v26 );
      p_m_data = v48.source;
      v12 = 0;
      m_size = v46;
      integer = v47;
      v23 = v40;
    }
    Tess->vertexCount += v23;
    v32 = m_size;
    if ( !integer )
    {
      v33 = 0;
      if ( m_size > 0 )
      {
        v34 = 0i64;
        v35 = m_size;
        do
        {
          v36 = Tess->indexCount + 3 * v33++;
          v34 += 16i64;
          Tess->indices[v36] = *(_WORD *)(v34 + *p_m_data - 16);
          Tess->indices[(unsigned int)(v36 + 1)] = *(_WORD *)(*p_m_data + v34 - 12);
          Tess->indices[(unsigned int)(v36 + 2)] = *(_WORD *)(*p_m_data + v34 - 8);
          --v35;
        }
        while ( v35 );
      }
      Tess->indexCount += 3 * m_size;
    }
    if ( v11 )
    {
      if ( m_size > 0 )
      {
        v37 = 0i64;
        do
        {
          v38 = Tess->indexCount + 3 * v12++;
          v37 += 16i64;
          Tess->indices[v38] = *(_WORD *)(v37 + *p_m_data - 16);
          Tess->indices[(unsigned int)(v38 + 1)] = *(_WORD *)(*p_m_data + v37 - 8);
          Tess->indices[(unsigned int)(v38 + 2)] = *(_WORD *)(*p_m_data + v37 - 12);
          --v32;
        }
        while ( v32 );
      }
      Tess->indexCount += 3 * m_size;
    }
    v48 = *gfxContext;
    RB_EndTessSurfaceInternal(&v48, "c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp(1146)");
  }
}

/*
==============
HavokPhysicsDisplayHandler::setDebugMemoryRouter
==============
*/
void HavokPhysicsDisplayHandler::setDebugMemoryRouter(hkMemoryRouter *debugRouter)
{
  HavokPhysicsDisplayHandler::ms_debugRouter = debugRouter;
}

/*
==============
HavokPhysicsDisplayHandler::setGeometryColor
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::setGeometryColor(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 color, int a4)
{
  __int64 v6; 
  unsigned __int64 def; 
  unsigned __int64 key; 

  key = color;
  def = 0i64;
  v6 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v6 )
    *(_DWORD *)(v6 + 28) = a4;
  *(_DWORD *)id = 0;
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::setGeometryFlagBits
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::setGeometryFlagBits(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 flagBits, char a4)
{
  __int64 v6; 
  unsigned __int64 def; 
  unsigned __int64 key; 

  key = flagBits;
  def = 0i64;
  v6 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v6 )
    *(_BYTE *)(v6 + 25) |= a4;
  *(_DWORD *)id = 0;
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::setShapeViewer
==============
*/
void HavokPhysicsDisplayHandler::setShapeViewer(HavokPhysicsDisplayHandler *this, hkProcess *process)
{
  HavokPhysicsShapeViewer *p_m_fileHandler; 

  p_m_fileHandler = (HavokPhysicsShapeViewer *)&process[-1].m_fileHandler;
  if ( !process )
    p_m_fileHandler = NULL;
  this->m_shapeViewer = p_m_fileHandler;
  if ( p_m_fileHandler )
    HavokPhysicsDisplayHandler::setViewerAabb(this, p_m_fileHandler);
}

/*
==============
HavokPhysicsDisplayHandler::setViewerAabb
==============
*/
void HavokPhysicsDisplayHandler::setViewerAabb(HavokPhysicsDisplayHandler *this, HavokPhysicsShapeViewer *shapeViewer)
{
  __int128 v4; 
  vec3_t outPos; 

  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  v4 = LODWORD(outPos.v[0]);
  *(float *)&v4 = outPos.v[0] * 0.03125;
  _XMM6 = v4;
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, xmm1, 0
    vinsertps xmm6, xmm6, xmm3, 10h
    vinsertps xmm2, xmm2, xmm1, 10h
    vinsertps xmm2, xmm2, xmm1, 20h ; ' '
    vinsertps xmm6, xmm6, xmm4, 20h ; ' '
    vinsertps xmm6, xmm6, xmm5, 30h ; '0'
  }
  shapeViewer->m_aabb.m_min.m_quad = _mm128_sub_ps(_XMM6, _XMM2);
  shapeViewer->m_aabb.m_max.m_quad = _mm128_add_ps(_XMM2, _XMM6);
  shapeViewer->m_useAabb = 1;
}

/*
==============
HavokPhysicsDisplayHandler::step
==============
*/
void HavokPhysicsDisplayHandler::step(HavokPhysicsDisplayHandler *this)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  int v3; 
  __int64 v4; 
  HavokPhysicsDisplayHandler::DisplayPoint *m_data; 
  float m_color_low; 
  int v7; 
  __int64 v8; 
  HavokPhysicsDisplayHandler::DisplayLine *v9; 
  float v10; 
  int v11; 
  __int64 v12; 
  HavokPhysicsDisplayHandler::Display3DText *v13; 
  float v14; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  void (__fastcall *refreshAllBodies)(hknpShapeViewer *, hknpWorld *, hknpCollisionFlags); 
  __int64 m_worldId; 
  int v18; 
  vec4_t color; 
  vec3_t origin; 
  Bounds bounds; 

  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  HavokPhysicsDisplayHandler::removeGeometryInternal(this);
  v3 = 0;
  if ( this->m_displayPoints.m_size > 0 )
  {
    v4 = 0i64;
    do
    {
      m_data = this->m_displayPoints.m_data;
      origin.v[0] = 32.0 * m_data[v4].m_pos.m_quad.m128_f32[0];
      origin.v[1] = 32.0 * m_data[v4].m_pos.m_quad.m128_f32[1];
      origin.v[2] = 32.0 * m_data[v4].m_pos.m_quad.m128_f32[2];
      color.v[0] = (float)BYTE2(m_data[v4].m_color) * 0.0039215689;
      color.v[1] = (float)BYTE1(m_data[v4].m_color) * 0.0039215689;
      m_color_low = (float)LOBYTE(m_data[v4].m_color);
      color.v[2] = m_color_low * 0.0039215689;
      color.v[3] = FLOAT_1_0;
      *(_OWORD *)bounds.midPoint.v = _xmm;
      bounds.halfSize.v[1] = FLOAT_1_0;
      bounds.halfSize.v[2] = FLOAT_1_0;
      CG_DebugBox(&origin, &bounds, 0.0, &color, 0, 1);
      ++v3;
      ++v4;
    }
    while ( v3 < this->m_displayPoints.m_size );
  }
  v7 = 0;
  if ( this->m_displayLines.m_size > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = this->m_displayLines.m_data;
      color.v[0] = 32.0 * v9[v8].m_start.m_quad.m128_f32[0];
      color.v[1] = 32.0 * v9[v8].m_start.m_quad.m128_f32[1];
      color.v[2] = 32.0 * v9[v8].m_start.m_quad.m128_f32[2];
      origin.v[0] = 32.0 * v9[v8].m_end.m_quad.m128_f32[0];
      origin.v[1] = 32.0 * v9[v8].m_end.m_quad.m128_f32[1];
      origin.v[2] = 32.0 * v9[v8].m_end.m_quad.m128_f32[2];
      bounds.midPoint.v[0] = (float)BYTE2(v9[v8].m_color) * 0.0039215689;
      bounds.midPoint.v[1] = (float)BYTE1(v9[v8].m_color) * 0.0039215689;
      v10 = (float)LOBYTE(v9[v8].m_color);
      bounds.midPoint.v[2] = v10 * 0.0039215689;
      bounds.halfSize.v[0] = FLOAT_1_0;
      CG_DebugLine((const vec3_t *)&color, &origin, (const vec4_t *)&bounds, 0, 1);
      ++v7;
      ++v8;
    }
    while ( v7 < this->m_displayLines.m_size );
  }
  v11 = 0;
  if ( this->m_display3DTexts.m_size > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = &this->m_display3DTexts.m_data[v12];
      color.v[0] = 32.0 * v13->m_pos.m_quad.m128_f32[0];
      color.v[1] = 32.0 * v13->m_pos.m_quad.m128_f32[1];
      color.v[2] = 32.0 * v13->m_pos.m_quad.m128_f32[2];
      bounds.midPoint.v[0] = (float)BYTE2(v13->m_color) * 0.0039215689;
      bounds.midPoint.v[1] = (float)BYTE1(v13->m_color) * 0.0039215689;
      v14 = (float)LOBYTE(v13->m_color);
      bounds.midPoint.v[2] = v14 * 0.0039215689;
      bounds.halfSize.v[0] = FLOAT_1_0;
      CL_AddDebugStringCentered((const vec3_t *)&color, (const vec4_t *)&bounds, 0.5, v13->m_buffer, 0, 1);
      ++v11;
      ++v12;
    }
    while ( v11 < this->m_display3DTexts.m_size );
  }
  this->m_displayPoints.m_size = 0;
  this->m_displayLines.m_size = 0;
  this->m_display3DTexts.m_size = 0;
  if ( ++this->m_tickCounter >= 30 )
  {
    this->m_tickCounter = 0;
    m_shapeViewer = this->m_shapeViewer;
    if ( m_shapeViewer )
    {
      HavokPhysicsDisplayHandler::setViewerAabb(this, this->m_shapeViewer);
      refreshAllBodies = m_shapeViewer->refreshAllBodies;
      m_worldId = this->m_worldId;
      if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tCan't access the mutable physics world within usermove workers", "!Sys_IsServerUserMoveWorker()") )
        __debugbreak();
      if ( (unsigned int)m_worldId > 7 )
      {
        v18 = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 45, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
          __debugbreak();
      }
      ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, __int64))refreshAllBodies)(m_shapeViewer, g_havokPhysicsWorlds[m_worldId].world, 0xFFFFFFFFi64);
    }
  }
  LeaveCriticalSection(p_m_critSection);
}

/*
==============
HavokPhysicsDisplayHandler::updateGeometryTransform
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::updateGeometryTransform(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkTransformf *transform, _OWORD *a4)
{
  _OWORD *v6; 
  unsigned __int64 def; 
  unsigned __int64 key; 

  key = (unsigned __int64)transform;
  def = 0i64;
  v6 = (_OWORD *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v6 )
  {
    v6[2] = *a4;
    v6[3] = a4[1];
    v6[4] = a4[2];
    v6[5] = a4[3];
  }
  *(_DWORD *)id = 0;
  return id;
}

/*
==============
HavokPhysicsDisplayHandler::updateGeometryVerts
==============
*/
_DWORD *HavokPhysicsDisplayHandler::updateGeometryVerts(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArray<hkArray<hkVector4f,hkContainerHeapAllocator>,hkContainerHeapAllocator> *newVerts, __int64 **a4)
{
  _DWORD *v6; 
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  _DWORD *v9; 
  int v10; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  hkMemoryRouter *Value; 
  __int64 v18; 
  hkMemoryAllocator *v19; 
  int v20; 
  __int64 v21; 
  _DWORD *v22; 
  _OWORD **v23; 
  __int64 v24; 
  __int64 v25; 
  hkMemoryAllocator *v26; 
  _OWORD *v27; 
  __int64 v28; 
  __int64 v29; 
  hkMemoryAllocator *v30; 
  __int64 v31; 
  hkMemoryAllocator *v32; 
  int v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  _OWORD *v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  _OWORD *v49; 
  int v50; 
  _OWORD *v51; 
  hkCriticalSection *v53; 
  unsigned __int64 def; 
  unsigned __int64 v55; 
  unsigned __int64 key; 

  v55 = id;
  v6 = (_DWORD *)id;
  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  v53 = &this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  def = 0i64;
  key = (unsigned __int64)newVerts;
  v9 = (_DWORD *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( !v9 )
    goto LABEL_2;
  v10 = v9[30];
  if ( !v10 )
  {
    v11 = hkMemHeapAllocator();
    v12 = v9[30];
    v13 = v12;
    if ( v12 == (v9[31] & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v11, v9 + 28, 112);
      v12 = v9[30];
      v13 = v12;
    }
    v14 = *((_QWORD *)v9 + 14);
    v15 = v14 + 112i64 * v12;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 88) = 0i64;
      *(_DWORD *)(v15 + 96) = 0;
      *(_DWORD *)(v15 + 100) = 0x80000000;
      v13 = v9[30];
      v14 = *((_QWORD *)v9 + 14);
    }
    v16 = v14 + 112i64 * v13;
    v9[30] = v13 + 1;
    *(_QWORD *)v16 = -1i64;
    *(hkMatrix3Impl<float> *)(v16 + 16) = *(hkMatrix3Impl<float> *)g_vectorfConstants[32].m128_f32;
    *(__m128 *)(v16 + 64) = g_vectorfConstants[35];
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v18 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 8) = 0i64;
      *(_DWORD *)(v18 + 16) = 0x1FFFF;
      *(_QWORD *)v18 = hkGeometry::`vftable';
      *(_QWORD *)(v18 + 24) = 0i64;
      *(_DWORD *)(v18 + 32) = 0;
      *(_DWORD *)(v18 + 36) = 0x80000000;
      *(_QWORD *)(v18 + 40) = 0i64;
      *(_DWORD *)(v18 + 48) = 0;
      *(_DWORD *)(v18 + 52) = 0x80000000;
    }
    else
    {
      v18 = 0i64;
    }
    *(_QWORD *)(v16 + 80) = v18;
    v19 = hkMemHeapAllocator();
    *(_DWORD *)(v16 + 96) = 0;
    v20 = *(_DWORD *)(v16 + 100);
    if ( v20 >= 0 )
      hkMemoryAllocator::bufFree2(v19, *(void **)(v16 + 88), 16, v20 & 0x3FFFFFFF);
    *(_QWORD *)(v16 + 88) = 0i64;
    *(_DWORD *)(v16 + 100) = 0x80000000;
    v10 = v9[30];
  }
  if ( v10 == 1 && (v21 = *((_QWORD *)v9 + 14), v22 = *(_DWORD **)(v21 + 80), (def = (unsigned __int64)v22) != 0) )
  {
    v23 = (_OWORD **)(v22 + 6);
    v24 = *((int *)*a4 + 2);
    v25 = **a4;
    v26 = hkMemHeapAllocator();
    if ( (v22[9] & 0x3FFFFFFF) < (int)v24 )
      hkArrayUtil::_reserve(v26, v22 + 6, v24, 16);
    v27 = *v23;
    v28 = v24;
    if ( (int)v24 > 0 )
    {
      v29 = v25 - (_QWORD)v27;
      do
      {
        *v27 = *(_OWORD *)((char *)v27 + v29);
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    v22[8] = v24;
    v30 = hkMemHeapAllocator();
    v31 = v21 + 88;
    v32 = hkMemHeapAllocator();
    *(_DWORD *)(v21 + 96) = 0;
    v33 = *(_DWORD *)(v21 + 100);
    if ( v33 >= 0 )
      hkMemoryAllocator::bufFree2(v32, *(void **)v31, 16, v33 & 0x3FFFFFFF);
    *(_QWORD *)v31 = 0i64;
    *(_DWORD *)(v21 + 100) = 0x80000000;
    v34 = v22[12] - 1;
    v35 = v34;
    if ( v34 >= 0 )
    {
      v36 = 16i64 * v34;
      v37 = *(_DWORD *)(v31 + 8);
      v38 = def;
      do
      {
        v39 = *(_QWORD *)(v38 + 40);
        v40 = *(int *)(v39 + v36 + 4);
        LODWORD(def) = *(_DWORD *)(v39 + v36 + 8);
        v41 = *(int *)(v39 + v36);
        key = (unsigned __int64)&(*v23)[v41];
        if ( v37 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v37 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v37) = *(_OWORD *)key;
        v42 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v42;
        v43 = v40;
        key = (unsigned __int64)&(*v23)[v43];
        if ( v42 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v42 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v42) = *(_OWORD *)key;
        v44 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v44;
        v45 = &(*v23)[v41];
        if ( v44 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v44 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v44) = *v45;
        v46 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v46;
        v47 = (int)def;
        def = (unsigned __int64)&(*v23)[v47];
        if ( v46 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v46 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v46) = *(_OWORD *)def;
        v48 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v48;
        v49 = &(*v23)[v43];
        if ( v48 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v48 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v48) = *v49;
        v50 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v50;
        v51 = &(*v23)[v47];
        if ( v50 == (*(_DWORD *)(v31 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, (void *)v31, 16);
          v50 = *(_DWORD *)(v31 + 8);
        }
        *(_OWORD *)(*(_QWORD *)v31 + 16i64 * v50) = *v51;
        v37 = *(_DWORD *)(v31 + 8) + 1;
        *(_DWORD *)(v31 + 8) = v37;
        v36 -= 16i64;
        --v35;
      }
      while ( v35 >= 0 );
      v6 = (_DWORD *)v55;
      p_m_critSection = (_RTL_CRITICAL_SECTION *)v53;
    }
    *v6 = 0;
  }
  else
  {
LABEL_2:
    *v6 = -2147220992;
  }
  LeaveCriticalSection(p_m_critSection);
  return v6;
}

/*
==============
HavokPhysicsDisplayHandler::updateParticleTransforms
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::updateParticleTransforms(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 updateId, const hkQuaternionf *orientations, const hkVector4f *translations, __int128 *numTransforms, unsigned int a7)
{
  _DWORD *v9; 
  __int64 v11; 
  hkMemoryAllocator *v12; 
  int v13; 
  __int64 v14; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkRotationImpl<float> v18; 
  __int128 v19; 

  key = updateId;
  def = 0i64;
  v9 = (_DWORD *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v9 )
  {
    v9[26] = 0;
    if ( a7 )
    {
      v11 = a7;
      do
      {
        v19 = *numTransforms;
        hkRotationImpl<float>::set(&v18, (const hkQuaternionf *)translations);
        v12 = hkMemHeapAllocator();
        v13 = v9[26];
        if ( v13 == (v9[27] & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v12, v9 + 24, 64);
          v13 = v9[26];
        }
        ++translations;
        ++numTransforms;
        v14 = *((_QWORD *)v9 + 12) + ((__int64)v13 << 6);
        *(hkRotationImpl<float> *)v14 = v18;
        *(_OWORD *)(v14 + 48) = v19;
        ++v9[26];
        --v11;
      }
      while ( v11 );
    }
  }
  *(_DWORD *)id = 0;
  return id;
}

