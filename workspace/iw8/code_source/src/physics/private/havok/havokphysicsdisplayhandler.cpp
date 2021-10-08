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
_DWORD *HavokPhysicsDisplayHandler::addGeometryInstanceInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, __int64 color, const hkArrayBase<hkGeometryDecorations *> *decorations, __int64 tag, int a8)
{
  _DWORD *v10; 
  hkCriticalSection *p_m_critSection; 
  hkMemoryRouter *Value; 
  hkMemoryRouter *v15; 
  HavokPhysicsDisplayHandler::DisplayGeoList *v16; 
  hkMemoryAllocator *v17; 
  int m_size; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v25; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v27; 
  int v28; 
  __int64 v29; 
  int *p_m_capacityAndFlags; 
  hkMemoryAllocator *v31; 
  int v32; 
  __int64 v33; 
  const hkGeometryDecorations **v34; 
  const hkGeometryDecorations *v35; 
  hkMemoryAllocator *v36; 
  int v37; 
  int v38; 
  hkGeometryDecorations *m_data; 
  hkGeometryDecorations *v40; 
  unsigned __int64 val; 
  unsigned __int64 v43; 
  hkCriticalSection *v44; 
  hkMemoryRouter *v45; 
  __int64 v46; 
  unsigned __int64 def; 
  unsigned __int64 v48; 
  unsigned __int64 key; 

  v48 = id;
  v46 = -2i64;
  v10 = (_DWORD *)id;
  p_m_critSection = &this->m_critSection;
  v44 = &this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  v45 = Value;
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
      _RDI = (HavokPhysicsDisplayHandler::DisplayGeoList *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
      if ( !_RDI )
      {
        v15 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v15 )
          v15 = hkMemoryRouter::s_fallbackRouter;
        v16 = (HavokPhysicsDisplayHandler::DisplayGeoList *)v15->m_heap->blockAlloc(v15->m_heap, 144i64);
        _RDI = v16;
        if ( v16 )
        {
          memset_0(v16, 0, sizeof(HavokPhysicsDisplayHandler::DisplayGeoList));
          _RDI->m_particleTransforms.m_size = 0;
          _RDI->m_particleTransforms.m_capacityAndFlags = 0x80000000;
          _RDI->m_geometries.m_data = NULL;
          _RDI->m_geometries.m_size = 0;
          _RDI->m_geometries.m_capacityAndFlags = 0x80000000;
          _RDI->m_decorations.m_data = NULL;
          _RDI->m_decorations.m_size = 0;
          _RDI->m_decorations.m_capacityAndFlags = 0x80000000;
        }
        else
        {
          _RDI = NULL;
        }
        v17 = hkMemHeapAllocator();
        m_size = this->m_displayGeoLists.m_size;
        if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v17, &this->m_displayGeoLists, 8);
          m_size = this->m_displayGeoLists.m_size;
        }
        this->m_displayGeoLists.m_data[m_size] = _RDI;
        ++this->m_displayGeoLists.m_size;
        val = (unsigned __int64)_RDI;
        v43 = originalGeomId;
        v19 = hkMemHeapAllocator();
        hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&this->m_geoListMap.m_map, v19, &v43, &val);
        _RDI->m_mapped = 1;
        _RDI->m_instanceOriginalGeoId = (unsigned __int64)transform;
        _RDI->m_id = originalGeomId;
        _RDI->m_tag = a8;
        _RDI->m_isCharacterProxy = 0;
      }
      if ( (const hkTransformf *)_RDI->m_instanceOriginalGeoId != transform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp", 1033, ASSERT_TYPE_ASSERT, "(displayGeoList->m_instanceOriginalGeoId == originalGeomId)", (const char *)&queryFormat, "displayGeoList->m_instanceOriginalGeoId == originalGeomId") )
        __debugbreak();
      _RDI->m_flags.m_storage = 0;
      _RDI->m_color = (unsigned int)decorations;
      _RAX = color;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rdi+20h], xmm0
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmmword ptr [rdi+30h], xmm1
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdi+40h], xmm0
        vmovups xmm1, xmmword ptr [rax+30h]
        vmovups xmmword ptr [rdi+50h], xmm1
      }
      v25 = hkMemHeapAllocator();
      _RDI->m_particleTransforms.m_size = 0;
      m_capacityAndFlags = _RDI->m_particleTransforms.m_capacityAndFlags;
      if ( m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v25, _RDI->m_particleTransforms.m_data, 64, m_capacityAndFlags & 0x3FFFFFFF);
      _RDI->m_particleTransforms.m_data = NULL;
      _RDI->m_particleTransforms.m_capacityAndFlags = 0x80000000;
      v27 = hkMemHeapAllocator();
      v28 = _RDI->m_geometries.m_size - 1;
      v29 = v28;
      if ( v28 >= 0 )
      {
        p_m_capacityAndFlags = &_RDI->m_geometries.m_data[v28].m_lineArray.m_capacityAndFlags;
        do
        {
          v31 = hkMemHeapAllocator();
          *(p_m_capacityAndFlags - 1) = 0;
          if ( *p_m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v31, *(void **)(p_m_capacityAndFlags - 3), 16, *p_m_capacityAndFlags & 0x3FFFFFFF);
          *(_QWORD *)(p_m_capacityAndFlags - 3) = 0i64;
          *p_m_capacityAndFlags = 0x80000000;
          p_m_capacityAndFlags -= 28;
          --v29;
        }
        while ( v29 >= 0 );
      }
      _RDI->m_geometries.m_size = 0;
      v32 = _RDI->m_geometries.m_capacityAndFlags;
      if ( v32 >= 0 )
        hkMemoryAllocator::bufFree2(v27, _RDI->m_geometries.m_data, 112, v32 & 0x3FFFFFFF);
      _RDI->m_geometries.m_data = NULL;
      _RDI->m_geometries.m_capacityAndFlags = 0x80000000;
      v33 = tag;
      v34 = *(const hkGeometryDecorations ***)tag;
      if ( *(_QWORD *)tag != *(_QWORD *)tag + 8i64 * *(int *)(tag + 8) )
      {
        do
        {
          v35 = *v34;
          v36 = hkMemHeapAllocator();
          v37 = _RDI->m_decorations.m_size;
          if ( v37 == (_RDI->m_decorations.m_capacityAndFlags & 0x3FFFFFFF) )
          {
            hkArrayUtil::_reserveMore(v36, &_RDI->m_decorations, 152);
            v37 = _RDI->m_decorations.m_size;
          }
          v38 = v37;
          m_data = _RDI->m_decorations.m_data;
          v40 = &m_data[v37];
          if ( v40 )
          {
            v40->m_propertyBag.m_bag = NULL;
            *(_DWORD *)&v40->m_memSizeAndFlags = 0x1FFFF;
            v40->__vftable = (hkGeometryDecorations_vtbl *)hkGeometryDecorations::`vftable';
            v40->m_text.m_data = NULL;
            v40->m_text.m_size = 0;
            v40->m_text.m_capacityAndFlags = 0x80000000;
            v40->m_textMaterials.m_data = NULL;
            v40->m_textMaterials.m_size = 0;
            v40->m_textMaterials.m_capacityAndFlags = 0x80000000;
            v40->m_points.m_data = NULL;
            v40->m_points.m_size = 0;
            v40->m_points.m_capacityAndFlags = 0x80000000;
            v40->m_pointMaterials.m_data = NULL;
            v40->m_pointMaterials.m_size = 0;
            v40->m_pointMaterials.m_capacityAndFlags = 0x80000000;
            v40->m_edges.m_data = NULL;
            v40->m_edges.m_size = 0;
            v40->m_edges.m_capacityAndFlags = 0x80000000;
            v40->m_edgeMaterials.m_data = NULL;
            v40->m_edgeMaterials.m_size = 0;
            v40->m_edgeMaterials.m_capacityAndFlags = 0x80000000;
            v40->m_faces.m_data = NULL;
            v40->m_faces.m_size = 0;
            v40->m_faces.m_capacityAndFlags = 0x80000000;
            v40->m_faceMaterials.m_data = NULL;
            v40->m_faceMaterials.m_size = 0;
            v40->m_faceMaterials.m_capacityAndFlags = 0x80000000;
            v38 = _RDI->m_decorations.m_size;
            m_data = _RDI->m_decorations.m_data;
          }
          _RDI->m_decorations.m_size = v38 + 1;
          hkGeometryDecorations::operator=(&m_data[v38], v35);
          ++v34;
        }
        while ( v34 != (const hkGeometryDecorations **)(*(_QWORD *)v33 + 8i64 * *(int *)(v33 + 8)) );
        p_m_critSection = v44;
        v10 = (_DWORD *)v48;
        Value = v45;
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
_DWORD *HavokPhysicsDisplayHandler::addGeometryInternal(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, __int64 color, unsigned int flags, int tag, __int64 frameCount, __int64 a9)
{
  const hkTransformf *v9; 
  _DWORD *v11; 
  hkMemoryRouter *Value; 
  HavokPhysicsDisplayHandler::DisplayGeoList *v15; 
  hkMemoryAllocator *v16; 
  int m_size; 
  hkMemoryAllocator *v18; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  hkMemoryAllocator *v25; 
  int m_capacityAndFlags; 
  int v27; 
  _DWORD *p_m_geometries; 
  unsigned __int64 v29; 
  hkMemoryAllocator *v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  char v41; 
  _QWORD *v42; 
  int integer; 
  __int64 v44; 
  int v45; 
  int v46; 
  void (__fastcall *v47)(__int64, _QWORD *, hkMemoryAllocator *); 
  hkMemoryAllocator *v48; 
  int v49; 
  hkMemoryAllocator *v50; 
  int v51; 
  __int64 v52; 
  hkMemoryRouter *v53; 
  hkGeometry *v54; 
  int v61; 
  __int64 v62; 
  hkMemoryAllocator *v63; 
  int v64; 
  int v65; 
  __int64 v66; 
  __int64 v67; 
  hkMemoryRouter *v73; 
  __int64 v74; 
  int v75; 
  __int64 v76; 
  int v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  _DWORD *v83; 
  hkMemoryAllocator *v84; 
  int v85; 
  _DWORD *v86; 
  _DWORD *v87; 
  hkMemoryAllocator *v88; 
  int v89; 
  _DWORD *v92; 
  hkMemoryAllocator *v93; 
  int v94; 
  _DWORD *v97; 
  hkMemoryAllocator *v98; 
  int v99; 
  __int64 v104; 
  void (__fastcall *v105)(__int64, _QWORD *, hkMemoryAllocator *); 
  hkMemoryAllocator *v106; 
  int v107; 
  hkMemoryAllocator *v108; 
  int v109; 
  unsigned __int64 ida; 
  void *array; 
  int v112; 
  unsigned __int64 v113; 
  hknpBodyId bodyIdOut[2]; 
  __int64 v115; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkMemoryRouter *a; 
  LPCRITICAL_SECTION lpCriticalSection; 
  __int64 v120; 
  unsigned __int64 val; 
  unsigned __int64 v122; 
  const hkTransformf *v123; 

  v123 = transform;
  v122 = id;
  v120 = -2i64;
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
    _RBX = (HavokPhysicsDisplayHandler::DisplayGeoList *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
    if ( !_RBX )
    {
      Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !Value )
        Value = hkMemoryRouter::s_fallbackRouter;
      v15 = (HavokPhysicsDisplayHandler::DisplayGeoList *)Value->m_heap->blockAlloc(Value->m_heap, 144i64);
      _RBX = v15;
      if ( v15 )
      {
        memset_0(v15, 0, sizeof(HavokPhysicsDisplayHandler::DisplayGeoList));
        _RBX->m_particleTransforms.m_size = 0;
        _RBX->m_particleTransforms.m_capacityAndFlags = 0x80000000;
        _RBX->m_geometries.m_data = NULL;
        _RBX->m_geometries.m_size = 0;
        _RBX->m_geometries.m_capacityAndFlags = 0x80000000;
        _RBX->m_decorations.m_data = NULL;
        _RBX->m_decorations.m_size = 0;
        _RBX->m_decorations.m_capacityAndFlags = 0x80000000;
      }
      else
      {
        _RBX = NULL;
      }
      v16 = hkMemHeapAllocator();
      m_size = this->m_displayGeoLists.m_size;
      if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v16, &this->m_displayGeoLists, 8);
        m_size = this->m_displayGeoLists.m_size;
      }
      this->m_displayGeoLists.m_data[m_size] = _RBX;
      ++this->m_displayGeoLists.m_size;
      val = (unsigned __int64)_RBX;
      v113 = (unsigned __int64)geometries;
      v18 = hkMemHeapAllocator();
      hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&this->m_geoListMap.m_map, v18, &v113, &val);
      _RBX->m_mapped = 1;
      _RBX->m_instanceOriginalGeoId = 0i64;
      _RBX->m_id = (unsigned __int64)geometries;
      _RBX->m_tag = frameCount;
      m_shapeViewer = this->m_shapeViewer;
      if ( m_shapeViewer )
      {
        hknpShapeViewer::decomposeDisplayObjectId(m_shapeViewer, (unsigned __int64)&ida, (hknpWorld **)geometries, bodyIdOut);
        _RBX->m_isCharacterProxy = PhysicsCharacterProxy_IsCharacterProxy(this->m_worldId, val);
      }
      else
      {
        _RBX->m_isCharacterProxy = 0;
      }
    }
    _RBX->m_flags.m_storage = tag;
    _RBX->m_color = flags;
    _RAX = color;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rbx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rbx+50h], xmm1
    }
    v25 = hkMemHeapAllocator();
    _RBX->m_particleTransforms.m_size = 0;
    m_capacityAndFlags = _RBX->m_particleTransforms.m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v25, _RBX->m_particleTransforms.m_data, 64, m_capacityAndFlags & 0x3FFFFFFF);
    _RBX->m_particleTransforms.m_data = NULL;
    _RBX->m_particleTransforms.m_capacityAndFlags = 0x80000000;
    v27 = 0;
    LODWORD(ida) = 0;
    if ( v9->m_rotation.m_col0.m_quad.m128_i32[2] > 0 )
    {
      p_m_geometries = &_RBX->m_geometries;
      array = p_m_geometries;
      v29 = 0i64;
      v113 = 0i64;
      while ( 1 )
      {
        v30 = hkMemHeapAllocator();
        v31 = p_m_geometries[2];
        if ( v31 == (p_m_geometries[3] & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v30, p_m_geometries, 112);
          v31 = p_m_geometries[2];
        }
        v32 = v31;
        v33 = *(_QWORD *)p_m_geometries;
        v34 = *(_QWORD *)p_m_geometries + 112i64 * v31;
        if ( v34 )
        {
          *(_QWORD *)(v34 + 88) = 0i64;
          *(_DWORD *)(v34 + 96) = 0;
          *(_DWORD *)(v34 + 100) = 0x80000000;
          v32 = p_m_geometries[2];
          v33 = *(_QWORD *)p_m_geometries;
        }
        _RSI = (_QWORD *)(v33 + 112i64 * v32);
        p_m_geometries[2] = v32 + 1;
        *_RSI = a9;
        _RCX = *(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29);
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx+30h]
          vmovups xmmword ptr [rsi+10h], xmm0
          vmovups xmm1, xmmword ptr [rcx+40h]
          vmovups xmmword ptr [rsi+20h], xmm1
          vmovups xmm0, xmmword ptr [rcx+50h]
          vmovups xmmword ptr [rsi+30h], xmm0
          vmovups xmm1, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rsi+40h], xmm1
        }
        _RSI[10] = 0i64;
        v41 = 0;
        LOBYTE(val) = 0;
        v42 = *(_QWORD **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29);
        if ( !v42[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v42 + 24i64))(v42);
          v41 = 1;
          LOBYTE(val) = 1;
        }
        integer = physics_debugVisualizeWorldViewMode->current.integer;
        if ( integer == 2 )
          break;
        v44 = *(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29);
        v45 = *(_DWORD *)(v44 + 112);
        if ( v45 == 12 || v45 == 3 )
          break;
        v46 = physics_debugVisualizeWorldComplexityTriThreshold->current.integer;
        if ( v46 <= 0 || v46 >= *(_DWORD *)(*(_QWORD *)(v44 + 24) + 48i64) )
        {
          if ( integer == 3 )
          {
            v47 = *(void (__fastcall **)(__int64, _QWORD *, hkMemoryAllocator *))(*(_QWORD *)v44 + 32i64);
            v48 = hkMemHeapAllocator();
            v47(v44, _RSI + 11, v48);
            v49 = physics_debugVisualizeWorldComplexityLineThreshold->current.integer;
            if ( v49 <= 0 || v49 >= *((_DWORD *)_RSI + 24) )
            {
              p_m_geometries = array;
            }
            else
            {
              v50 = hkMemHeapAllocator();
              *((_DWORD *)_RSI + 24) = 0;
              v51 = *((_DWORD *)_RSI + 25);
              if ( v51 >= 0 )
                hkMemoryAllocator::bufFree2(v50, (void *)_RSI[11], 16, v51 & 0x3FFFFFFF);
              _RSI[11] = 0i64;
              *((_DWORD *)_RSI + 25) = 0x80000000;
              p_m_geometries = array;
            }
          }
          v52 = *(_QWORD *)(*(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29) + 24i64);
          if ( *(_DWORD *)(v52 + 32) > 0xFFFFu || (unsigned int)(3 * *(_DWORD *)(v52 + 48)) > 0x30000 )
          {
            _EAX = 0x8000;
            __asm { vmovd   xmm1, eax }
            _EAX = 21845;
            __asm
            {
              vmovd   xmm0, eax
              vpminud xmm1, xmm0, xmm1
              vmovd   edi, xmm1
            }
            v112 = _EDI;
            v61 = 0;
            v62 = 0i64;
            v115 = 0i64;
            if ( *(int *)(v52 + 48) > 0 )
            {
              do
              {
                if ( v62 )
                {
                  v63 = hkMemHeapAllocator();
                  v64 = p_m_geometries[2];
                  v65 = v64;
                  if ( v64 == (p_m_geometries[3] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::_reserveMore(v63, p_m_geometries, 112);
                    v64 = p_m_geometries[2];
                    v65 = v64;
                  }
                  v66 = *(_QWORD *)p_m_geometries;
                  v67 = *(_QWORD *)p_m_geometries + 112i64 * v64;
                  if ( v67 )
                  {
                    *(_QWORD *)(v67 + 88) = 0i64;
                    *(_DWORD *)(v67 + 96) = 0;
                    *(_DWORD *)(v67 + 100) = 0x80000000;
                    v65 = p_m_geometries[2];
                    v66 = *(_QWORD *)p_m_geometries;
                  }
                  _RCX = (_QWORD *)(v66 + 112i64 * v65);
                  p_m_geometries[2] = v65 + 1;
                  *_RCX = *_RSI;
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rsi+10h]
                    vmovups xmmword ptr [rcx+10h], xmm0
                    vmovups xmm1, xmmword ptr [rsi+20h]
                    vmovups xmmword ptr [rcx+20h], xmm1
                    vmovups xmm0, xmmword ptr [rsi+30h]
                    vmovups xmmword ptr [rcx+30h], xmm0
                    vmovups xmm1, xmmword ptr [rsi+40h]
                    vmovups xmmword ptr [rcx+40h], xmm1
                  }
                  _RSI = _RCX;
                }
                v73 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
                if ( !v73 )
                  v73 = hkMemoryRouter::s_fallbackRouter;
                v74 = (__int64)v73->m_heap->blockAlloc(v73->m_heap, 56i64);
                if ( v74 )
                {
                  *(_QWORD *)(v74 + 8) = 0i64;
                  *(_DWORD *)(v74 + 16) = 0x1FFFF;
                  *(_QWORD *)v74 = hkGeometry::`vftable';
                  *(_QWORD *)(v74 + 24) = 0i64;
                  *(_DWORD *)(v74 + 32) = 0;
                  *(_DWORD *)(v74 + 36) = 0x80000000;
                  *(_QWORD *)(v74 + 40) = 0i64;
                  *(_DWORD *)(v74 + 48) = 0;
                  *(_DWORD *)(v74 + 52) = 0x80000000;
                }
                else
                {
                  v74 = 0i64;
                }
                _RSI[10] = v74;
                v75 = 0;
                if ( _EDI > 0 )
                {
                  v76 = 16 * v62;
                  v77 = 2;
                  do
                  {
                    v78 = *(_QWORD *)(*(_QWORD *)(v123->m_rotation.m_col0.m_quad.m128_u64[0] + v29) + 24i64);
                    if ( v61 >= *(_DWORD *)(v78 + 48) )
                      break;
                    v79 = *(_QWORD *)(v78 + 40);
                    v80 = *(_QWORD *)(v78 + 24);
                    _R12 = v80 + 16i64 * *(int *)(v79 + v76);
                    _R13 = v80 + 16i64 * *(int *)(v79 + v76 + 4);
                    *(_QWORD *)&bodyIdOut[0].m_serialAndIndex = v80 + 16i64 * *(int *)(v79 + v76 + 8);
                    v83 = (_DWORD *)_RSI[10];
                    v84 = hkMemHeapAllocator();
                    v85 = v83[12];
                    if ( v85 == (v83[13] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v84, v83 + 10, 16);
                      v85 = v83[12];
                    }
                    v86 = (_DWORD *)(*((_QWORD *)v83 + 5) + 16i64 * v85);
                    v83[12] = v85 + 1;
                    *v86 = v77 - 2;
                    v86[1] = v77 - 1;
                    v86[2] = v77;
                    v87 = (_DWORD *)_RSI[10];
                    v88 = hkMemHeapAllocator();
                    v89 = v87[8];
                    if ( v89 == (v87[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v88, v87 + 6, 16);
                      v89 = v87[8];
                    }
                    _RAX = *((_QWORD *)v87 + 3) + 16i64 * v89;
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r12]
                      vmovups xmmword ptr [rax], xmm0
                    }
                    ++v87[8];
                    v92 = (_DWORD *)_RSI[10];
                    v93 = hkMemHeapAllocator();
                    v94 = v92[8];
                    if ( v94 == (v92[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v93, v92 + 6, 16);
                      v94 = v92[8];
                    }
                    _RAX = *((_QWORD *)v92 + 3) + 16i64 * v94;
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r13+0]
                      vmovups xmmword ptr [rax], xmm0
                    }
                    ++v92[8];
                    v97 = (_DWORD *)_RSI[10];
                    v98 = hkMemHeapAllocator();
                    v99 = v97[8];
                    if ( v99 == (v97[9] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v98, v97 + 6, 16);
                      v99 = v97[8];
                    }
                    _RAX = *((_QWORD *)v97 + 3) + 16i64 * v99;
                    _RCX = *(_QWORD *)&bodyIdOut[0].m_serialAndIndex;
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [rcx]
                      vmovups xmmword ptr [rax], xmm0
                    }
                    ++v97[8];
                    ++v75;
                    v77 += 3;
                    ++v61;
                    v62 = ++v115;
                    v76 += 16i64;
                    v29 = v113;
                  }
                  while ( v75 < v112 );
                  _EDI = v112;
                }
                v9 = v123;
                p_m_geometries = array;
              }
              while ( v61 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v123->m_rotation.m_col0.m_quad.m128_u64[0] + v29) + 24i64) + 48i64) );
              v27 = ida;
            }
          }
          else
          {
            v53 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
            if ( !v53 )
              v53 = hkMemoryRouter::s_fallbackRouter;
            v54 = (hkGeometry *)v53->m_heap->blockAlloc(v53->m_heap, 56i64);
            *(_QWORD *)&bodyIdOut[0].m_serialAndIndex = v54;
            if ( v54 )
              hkGeometry::hkGeometry(v54, *(const hkGeometry **)(*(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29) + 24i64));
            _RSI[10] = v54;
          }
LABEL_71:
          if ( (_BYTE)val )
            hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29));
          p_m_geometries = array;
          goto LABEL_74;
        }
        if ( v41 )
          hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29));
LABEL_74:
        LODWORD(ida) = ++v27;
        v29 += 8i64;
        v113 = v29;
        if ( v27 >= v9->m_rotation.m_col0.m_quad.m128_i32[2] )
        {
          v11 = (_DWORD *)v122;
          goto LABEL_76;
        }
      }
      v104 = *(_QWORD *)(v9->m_rotation.m_col0.m_quad.m128_u64[0] + v29);
      v105 = *(void (__fastcall **)(__int64, _QWORD *, hkMemoryAllocator *))(*(_QWORD *)v104 + 32i64);
      v106 = hkMemHeapAllocator();
      v105(v104, _RSI + 11, v106);
      v107 = physics_debugVisualizeWorldComplexityLineThreshold->current.integer;
      if ( v107 > 0 && v107 < *((_DWORD *)_RSI + 24) )
      {
        v108 = hkMemHeapAllocator();
        *((_DWORD *)_RSI + 24) = 0;
        v109 = *((_DWORD *)_RSI + 25);
        if ( v109 >= 0 )
          hkMemoryAllocator::bufFree2(v108, (void *)_RSI[11], 16, v109 & 0x3FFFFFFF);
        _RSI[11] = 0i64;
        *((_DWORD *)_RSI + 25) = 0x80000000;
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
unsigned __int64 HavokPhysicsDisplayHandler::display2PointsEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, __int64 color, hk2PointDisplayStyle::Enum style, float thickness)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v11; 
  int m_size; 

  _RBP = b;
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
    _RCX = &this->m_displayLines.m_data[m_size];
    this->m_displayLines.m_size = m_size + 1;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rcx], xmm0
    }
    _RAX = color;
    if ( LODWORD(thickness) == 1 )
    {
      __asm
      {
        vmovups xmmword ptr [rcx+10h], xmm0
        vaddps  xmm0, xmm0, xmmword ptr [rax]
      }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr [rax] }
    }
    __asm { vmovups xmmword ptr [rcx+10h], xmm0 }
    _RCX->m_color = style;
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
unsigned __int64 HavokPhysicsDisplayHandler::display3dText(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos, __int64 color, int tag)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v10; 
  int m_size; 

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
    _RBX = &this->m_display3DTexts.m_data[m_size];
    this->m_display3DTexts.m_size = m_size + 1;
    hkString::strNcpy(_RBX->m_buffer, 256, (const char *)pos, 256);
    _RBX->m_buffer[255] = 0;
    _RAX = color;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+100h], xmm0
    }
    _RBX->m_color = tag;
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
unsigned __int64 HavokPhysicsDisplayHandler::displayGeometry(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkArrayBase<hkDisplayGeometry *> *geometries, const hkTransformf *transform, __int64 color, int tag, int a7)
{
  hkMemoryRouter *Value; 
  HavokPhysicsDisplayHandler::DisplayGeoList *v11; 
  hkMemoryAllocator *v13; 
  int m_size; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  hkMemoryAllocator *v21; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *p_m_geometries; 
  __int64 v30; 
  int v31; 
  hkMemoryAllocator *v32; 
  int v33; 
  int v34; 
  HavokPhysicsDisplayHandler::DisplayGeo *m_data; 
  __int64 v36; 
  __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  void (__fastcall *v46)(__int64, hkArray<hkVector4f,hkContainerHeapAllocator> *, hkMemoryAllocator *); 
  hkMemoryAllocator *v47; 
  char v48; 
  hkMemoryRouter *v49; 
  hkGeometry *v50; 
  hkGeometry *v51; 
  unsigned __int64 ida; 
  hkMemoryRouter *a; 
  LPCRITICAL_SECTION lpCriticalSection; 
  __int64 v56; 
  hknpBodyId bodyIdOut; 
  unsigned int bodyId; 

  v56 = -2i64;
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
    v11 = (HavokPhysicsDisplayHandler::DisplayGeoList *)Value->m_heap->blockAlloc(Value->m_heap, 144i64);
    _RBX = v11;
    if ( v11 )
    {
      memset_0(v11, 0, sizeof(HavokPhysicsDisplayHandler::DisplayGeoList));
      _RBX->m_particleTransforms.m_size = 0;
      _RBX->m_particleTransforms.m_capacityAndFlags = 0x80000000;
      _RBX->m_geometries.m_data = NULL;
      _RBX->m_geometries.m_size = 0;
      _RBX->m_geometries.m_capacityAndFlags = 0x80000000;
      _RBX->m_decorations.m_data = NULL;
      _RBX->m_decorations.m_size = 0;
      _RBX->m_decorations.m_capacityAndFlags = 0x80000000;
    }
    else
    {
      _RBX = NULL;
    }
    v13 = hkMemHeapAllocator();
    m_size = this->m_displayGeoLists.m_size;
    if ( m_size == (this->m_displayGeoLists.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v13, &this->m_displayGeoLists, 8);
      m_size = this->m_displayGeoLists.m_size;
    }
    this->m_displayGeoLists.m_data[m_size] = _RBX;
    ++this->m_displayGeoLists.m_size;
    _RBX->m_id = (unsigned __int64)geometries;
    _RBX->m_tag = a7;
    _RBX->m_mapped = 0;
    m_shapeViewer = this->m_shapeViewer;
    if ( m_shapeViewer )
    {
      hknpShapeViewer::decomposeDisplayObjectId(m_shapeViewer, (unsigned __int64)&ida, (hknpWorld **)geometries, &bodyIdOut);
      _RBX->m_isCharacterProxy = (bodyId & 0xFFFFFF) != 0xFFFFFF && PhysicsCharacterProxy_IsCharacterProxy(this->m_worldId, bodyId);
    }
    else
    {
      _RBX->m_isCharacterProxy = 0;
    }
    _RBX->m_flags.m_storage = 7;
    _RBX->m_color = tag;
    _RAX = color;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rbx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rbx+50h], xmm1
    }
    v21 = hkMemHeapAllocator();
    _RBX->m_particleTransforms.m_size = 0;
    m_capacityAndFlags = _RBX->m_particleTransforms.m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v21, _RBX->m_particleTransforms.m_data, 64, m_capacityAndFlags & 0x3FFFFFFF);
    _RBX->m_particleTransforms.m_data = NULL;
    _RBX->m_particleTransforms.m_capacityAndFlags = 0x80000000;
    v23 = hkMemHeapAllocator();
    v24 = _RBX->m_decorations.m_size - 1;
    if ( v24 >= 0 )
    {
      v25 = (__int64)&_RBX->m_decorations.m_data[v24];
      v26 = v25;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 8i64))(v26, 0i64);
        v26 -= 152i64;
        v25 -= 152i64;
        --v24;
      }
      while ( v24 >= 0 );
    }
    _RBX->m_decorations.m_size = 0;
    v27 = _RBX->m_decorations.m_capacityAndFlags;
    if ( v27 >= 0 )
      hkMemoryAllocator::bufFree2(v23, _RBX->m_decorations.m_data, 152, v27 & 0x3FFFFFFF);
    _RBX->m_decorations.m_data = NULL;
    _RBX->m_decorations.m_capacityAndFlags = 0x80000000;
    v28 = 0;
    if ( transform->m_rotation.m_col0.m_quad.m128_i32[2] > 0 )
    {
      p_m_geometries = &_RBX->m_geometries;
      v30 = 0i64;
      v31 = 4136;
      do
      {
        v32 = hkMemHeapAllocator();
        v33 = p_m_geometries->m_size;
        v34 = v33;
        if ( v33 == (p_m_geometries->m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v32, p_m_geometries, 112);
          v33 = p_m_geometries->m_size;
          v34 = v33;
        }
        m_data = p_m_geometries->m_data;
        v36 = (__int64)&p_m_geometries->m_data[v33];
        if ( v36 )
        {
          *(_QWORD *)(v36 + 88) = 0i64;
          *(_DWORD *)(v36 + 96) = 0;
          *(_DWORD *)(v36 + 100) = 0x80000000;
          v34 = p_m_geometries->m_size;
          m_data = p_m_geometries->m_data;
        }
        _RBP = &m_data[v34];
        p_m_geometries->m_size = v34 + 1;
        _RBP->m_frameCount = 1i64;
        _RCX = *(_QWORD *)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v30);
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx+30h]
          vmovups xmmword ptr [rbp+10h], xmm0
          vmovups xmm1, xmmword ptr [rcx+40h]
          vmovups xmmword ptr [rbp+20h], xmm1
          vmovups xmm0, xmmword ptr [rcx+50h]
          vmovups xmmword ptr [rbp+30h], xmm0
          vmovups xmm1, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rbp+40h], xmm1
        }
        v43 = *(_QWORD *)(v30 + transform->m_rotation.m_col0.m_quad.m128_u64[0]);
        v44 = *(_DWORD *)(v43 + 112);
        if ( v44 <= 0xC && _bittest(&v31, v44) )
        {
          _RBP->m_geometry = NULL;
          v45 = *(_QWORD *)(v30 + transform->m_rotation.m_col0.m_quad.m128_u64[0]);
          v46 = *(void (__fastcall **)(__int64, hkArray<hkVector4f,hkContainerHeapAllocator> *, hkMemoryAllocator *))(*(_QWORD *)v45 + 32i64);
          v47 = hkMemHeapAllocator();
          v46(v45, &_RBP->m_lineArray, v47);
        }
        else
        {
          v48 = 0;
          if ( !*(_QWORD *)(v43 + 24) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 24i64))(v43);
            v48 = 1;
          }
          v49 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !v49 )
            v49 = hkMemoryRouter::s_fallbackRouter;
          v50 = (hkGeometry *)v49->m_heap->blockAlloc(v49->m_heap, 56i64);
          ida = (unsigned __int64)v50;
          if ( v50 )
            hkGeometry::hkGeometry(v50, *(const hkGeometry **)(*(_QWORD *)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v30) + 24i64));
          else
            v51 = NULL;
          _RBP->m_geometry = v51;
          if ( v48 )
            hkDisplayGeometry::releaseGeometry(*(hkDisplayGeometry **)(transform->m_rotation.m_col0.m_quad.m128_u64[0] + v30));
        }
        ++v28;
        v30 += 8i64;
        v31 = 4136;
      }
      while ( v28 < transform->m_rotation.m_col0.m_quad.m128_i32[2] );
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
unsigned __int64 HavokPhysicsDisplayHandler::displayPointEx(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, __int64 color, hk1PointDisplayStyle::Enum style)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkMemoryAllocator *v9; 
  int m_size; 

  _RBP = color;
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
    _RDX = &this->m_displayPoints.m_data[m_size];
    this->m_displayPoints.m_size = m_size + 1;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rdx], xmm0
    }
    _RDX->m_color = style;
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
  hkMemoryAllocator *v11; 
  int m_size; 
  int v13; 
  int v14; 
  int v15; 
  signed int v20; 
  hkMemoryAllocator *v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  hkGeometry::Triangle *m_data; 
  hkGeometry::Triangle *v125; 
  hkGeometry::Triangle *v126; 
  hkGeometry::Triangle *v127; 
  hkGeometry::Triangle *v128; 
  hkGeometry::Triangle *v129; 
  hkGeometry::Triangle *v130; 
  hkGeometry::Triangle *v131; 
  hkGeometry::Triangle *v132; 
  hkGeometry::Triangle *v133; 
  hkGeometry::Triangle *v134; 
  hkGeometry::Triangle *v135; 
  hkGeometry::Triangle *v136; 
  hkGeometry::Triangle *v137; 
  hkGeometry::Triangle *v138; 
  hkGeometry::Triangle *v139; 
  hkGeometry::Triangle *v143; 
  hkGeometry::Triangle *v144; 
  hkGeometry::Triangle *v145; 
  hkGeometry::Triangle *v146; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v11 = hkMemHeapAllocator();
  m_size = verts->m_size;
  v13 = verts->m_capacityAndFlags & 0x3FFFFFFF;
  v14 = m_size + 12;
  if ( v13 < m_size + 12 )
  {
    v15 = 2 * v13;
    if ( (unsigned int)v15 >= 0x3FFFFFFF )
      v15 = 1073741822;
    if ( v14 < v15 )
      v14 = v15;
    hkArrayUtil::_reserve(v11, verts, v14, 16);
    m_size = verts->m_size;
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000000000003fcf1bbdbf800000
    vmovups xmm1, cs:__xmm@00000000000000003fcf1bbd3f800000
    vbroadcastss xmm7, [rsp+58h+scale]
  }
  verts->m_size = m_size + 12;
  _RAX = verts->m_data;
  v20 = 0;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovups xmmword ptr [rax], xmm0
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm0, cs:__xmm@0000000000000000bfcf1bbdbf800000
    vmovups xmmword ptr [rax+10h], xmm1
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm1, cs:__xmm@0000000000000000bfcf1bbd3f800000
    vmovups xmmword ptr [rax+20h], xmm0
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm0, cs:__xmm@000000003fcf1bbdbf80000000000000
    vmovups xmmword ptr [rax+30h], xmm1
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm1, cs:__xmm@000000003fcf1bbd3f80000000000000
    vmovups xmmword ptr [rax+40h], xmm0
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000bfcf1bbdbf80000000000000
    vmovups xmmword ptr [rax+50h], xmm1
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm1, cs:__xmm@00000000bfcf1bbd3f80000000000000
    vmovups xmmword ptr [rax+60h], xmm0
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000bf800000000000003fcf1bbd
    vmovups xmmword ptr [rax+70h], xmm1
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm1, cs:__xmm@000000003f800000000000003fcf1bbd
    vmovups xmmword ptr [rax+80h], xmm0
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000bf80000000000000bfcf1bbd
    vmovups xmmword ptr [rax+90h], xmm1
  }
  _RAX = verts->m_data;
  __asm
  {
    vmovups xmm1, cs:__xmm@000000003f80000000000000bfcf1bbd
    vmovups xmmword ptr [rax+0A0h], xmm0
  }
  _RAX = verts->m_data;
  __asm { vmovups xmmword ptr [rax+0B0h], xmm1 }
  do
  {
    _RAX = verts->m_data;
    __asm { vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree }
    _RCX = 2i64 * v20;
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+rcx*8]
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
      vmulps  xmm0, xmm4, xmm0
      vmulps  xmm2, xmm0, xmm4
      vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vsubps  xmm3, xmm1, xmm2
      vmulps  xmm2, xmm3, xmm0
      vandnps xmm1, xmm5, xmm2
      vmulps  xmm3, xmm1, xmm6
      vmovups xmmword ptr [rax+rcx*8], xmm3
    }
    _RAX = verts->m_data;
    __asm
    {
      vmulps  xmm0, xmm7, xmmword ptr [rax+rcx*8]
      vmovups xmmword ptr [rax+rcx*8], xmm0
    }
    _RAX = verts->m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+rcx*8]
      vaddps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rax+rcx*8], xmm1
    }
    _RAX = verts->m_data;
    __asm { vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree }
    _RCX = 2 * (v20 + 1i64);
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+rcx*8]
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
      vmulps  xmm0, xmm4, xmm0
      vmulps  xmm2, xmm0, xmm4
      vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vsubps  xmm3, xmm1, xmm2
      vmulps  xmm2, xmm3, xmm0
      vandnps xmm1, xmm5, xmm2
      vmulps  xmm3, xmm1, xmm6
      vmovups xmmword ptr [rax+rcx*8], xmm3
    }
    _RAX = verts->m_data;
    __asm
    {
      vmulps  xmm0, xmm7, xmmword ptr [rax+rcx*8]
      vmovups xmmword ptr [rax+rcx*8], xmm0
    }
    _RAX = verts->m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+rcx*8]
      vaddps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rax+rcx*8], xmm1
    }
    _RAX = verts->m_data;
    __asm { vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree }
    _RCX = 2 * (v20 + 2i64);
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+rcx*8]
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
      vmulps  xmm0, xmm4, xmm0
      vmulps  xmm2, xmm0, xmm4
      vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vsubps  xmm3, xmm1, xmm2
      vmulps  xmm2, xmm3, xmm0
      vandnps xmm1, xmm5, xmm2
      vmulps  xmm3, xmm1, xmm6
      vmovups xmmword ptr [rax+rcx*8], xmm3
    }
    _RAX = verts->m_data;
    __asm
    {
      vmulps  xmm0, xmm7, xmmword ptr [rax+rcx*8]
      vmovups xmmword ptr [rax+rcx*8], xmm0
    }
    _RAX = verts->m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+rcx*8]
      vaddps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rax+rcx*8], xmm1
    }
    _RAX = verts->m_data;
    __asm { vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree }
    _RCX = 2 * (v20 + 3i64);
    __asm
    {
      vmovups xmm6, xmmword ptr [rax+rcx*8]
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vrsqrtps xmm4, xmm0
      vcmpleps xmm5, xmm0, xmm8
      vmulps  xmm0, xmm4, xmm0
      vmulps  xmm2, xmm0, xmm4
      vsubps  xmm3, xmm1, xmm2
      vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vmulps  xmm2, xmm3, xmm0
      vandnps xmm1, xmm5, xmm2
      vmulps  xmm3, xmm1, xmm6
      vmovups xmmword ptr [rax+rcx*8], xmm3
    }
    _RAX = verts->m_data;
    v20 += 4;
    __asm
    {
      vmulps  xmm0, xmm7, xmmword ptr [rax+rcx*8]
      vmovups xmmword ptr [rax+rcx*8], xmm0
    }
    _RAX = verts->m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+rcx*8]
      vaddps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rax+rcx*8], xmm1
    }
  }
  while ( (unsigned int)v20 < 0xC );
  v119 = hkMemHeapAllocator();
  v120 = tris->m_size;
  v121 = tris->m_capacityAndFlags & 0x3FFFFFFF;
  v122 = v120 + 20;
  if ( v121 < v120 + 20 )
  {
    v123 = 2 * v121;
    if ( (unsigned int)v123 >= 0x3FFFFFFF )
      v123 = 1073741822;
    if ( v122 < v123 )
      v122 = v123;
    hkArrayUtil::_reserve(v119, tris, v122, 16);
    v120 = tris->m_size;
  }
  tris->m_size = v120 + 20;
  m_data = tris->m_data;
  m_data->m_a = 0;
  m_data->m_b = 11;
  m_data->m_c = 5;
  m_data->m_material = -1;
  v125 = tris->m_data;
  v125[1].m_a = 0;
  v125[1].m_b = 5;
  v125[1].m_c = 1;
  v125[1].m_material = -1;
  v126 = tris->m_data;
  v126[2].m_a = 0;
  v126[2].m_b = 1;
  v126[2].m_c = 7;
  v126[2].m_material = -1;
  v127 = tris->m_data;
  v127[3].m_a = 0;
  v127[3].m_b = 7;
  v127[3].m_c = 10;
  v127[3].m_material = -1;
  v128 = tris->m_data;
  v128[4].m_a = 0;
  v128[4].m_b = 10;
  v128[4].m_c = 11;
  v128[4].m_material = -1;
  v129 = tris->m_data;
  v129[5].m_a = 1;
  v129[5].m_b = 5;
  v129[5].m_c = 9;
  v129[5].m_material = -1;
  v130 = tris->m_data;
  v130[6].m_a = 5;
  v130[6].m_b = 11;
  v130[6].m_c = 4;
  v130[6].m_material = -1;
  v131 = tris->m_data;
  v131[7].m_a = 11;
  v131[7].m_b = 10;
  v131[7].m_c = 2;
  v131[7].m_material = -1;
  v132 = tris->m_data;
  v132[8].m_a = 10;
  v132[8].m_b = 7;
  v132[8].m_c = 6;
  v132[8].m_material = -1;
  v133 = tris->m_data;
  v133[9].m_a = 7;
  v133[9].m_b = 1;
  v133[9].m_c = 8;
  v133[9].m_material = -1;
  v134 = tris->m_data;
  v134[10].m_a = 3;
  v134[10].m_b = 9;
  v134[10].m_c = 4;
  v134[10].m_material = -1;
  v135 = tris->m_data;
  v135[11].m_a = 3;
  v135[11].m_b = 4;
  v135[11].m_c = 2;
  v135[11].m_material = -1;
  v136 = tris->m_data;
  v136[12].m_a = 3;
  v136[12].m_b = 2;
  v136[12].m_c = 6;
  v136[12].m_material = -1;
  v137 = tris->m_data;
  v137[13].m_a = 3;
  v137[13].m_b = 6;
  v137[13].m_c = 8;
  v137[13].m_material = -1;
  v138 = tris->m_data;
  v138[14].m_a = 3;
  v138[14].m_b = 8;
  v138[14].m_c = 9;
  v138[14].m_material = -1;
  v139 = tris->m_data;
  v139[15].m_a = 4;
  v139[15].m_b = 9;
  v139[15].m_c = 5;
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  v139[15].m_material = -1;
  v143 = tris->m_data;
  v143[16].m_a = 2;
  v143[16].m_b = 4;
  v143[16].m_c = 11;
  v143[16].m_material = -1;
  v144 = tris->m_data;
  v144[17].m_a = 6;
  v144[17].m_b = 2;
  v144[17].m_c = 10;
  v144[17].m_material = -1;
  v145 = tris->m_data;
  v145[18].m_a = 8;
  v145[18].m_b = 6;
  v145[18].m_c = 7;
  v145[18].m_material = -1;
  v146 = tris->m_data;
  v146[19].m_a = 9;
  v146[19].m_b = 8;
  v146[19].m_c = 1;
  v146[19].m_material = -1;
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
  int v10; 
  __int64 v11; 
  unsigned __int8 v20; 
  unsigned __int8 v26; 
  unsigned __int8 v32; 
  unsigned __int8 v38; 
  __int64 m_size; 
  GfxMatrix *ActiveMatrixForEdit; 
  GfxColor v49; 
  int v50; 
  __int64 v51; 
  hkMemoryRouter *a; 
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  hkTransformf v54; 
  hkTransformf v55; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  a = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(HavokPhysicsDisplayHandler::ms_debugRouter);
  source = gfxContext->source;
  if ( physics_debugVisualizeWorldClearZFirst->current.enabled )
    R_ClearScreen(gfxContext->state, 0x10u, 0);
  v10 = 0;
  v50 = 0;
  if ( this->m_displayGeoLists.m_size > 0 )
  {
    v11 = 0i64;
    v51 = 0i64;
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmovss  xmm7, cs:__real@3f400000
    }
    do
    {
      _RDI = *(HavokPhysicsDisplayHandler::DisplayGeoList **)((char *)this->m_displayGeoLists.m_data + v11);
      if ( !physics_debugVisualizeWorldIgnoreCharacterProxies->current.enabled || !_RDI->m_isCharacterProxy )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm2, xmm0, xmm6
          vxorps  xmm4, xmm4, xmm4
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v20 = _ECX;
        if ( _ECX < 0 )
          v20 = 0;
        v49.array[0] = v20;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm2, xmm0, xmm6
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v26 = _ECX;
        if ( _ECX < 0 )
          v26 = 0;
        v49.array[1] = v26;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vaddss  xmm2, xmm0, xmm6
          vroundss xmm0, xmm4, xmm2, 1
          vcvttss2si ecx, xmm0
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v32 = _ECX;
        if ( _ECX < 0 )
          v32 = 0;
        v49.array[2] = v32;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edx
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm3, xmm1, xmm6
          vroundss xmm1, xmm4, xmm3, 1
          vcvttss2si ecx, xmm1
        }
        if ( _ECX > 255 )
          _ECX = 255;
        v38 = _ECX;
        if ( _ECX < 0 )
          v38 = 0;
        v49.array[3] = v38;
        m_size = _RDI->m_particleTransforms.m_size;
        if ( (_DWORD)m_size )
        {
          _RSI = _RDI->m_particleTransforms.m_data;
          if ( _RSI != &_RSI[m_size] )
          {
            do
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rsi]
                vmovups [rsp+138h+var_C8], ymm0
                vmovups ymm1, ymmword ptr [rsi+20h]
                vmovups [rsp+138h+var_A8], ymm1
              }
              HavokPhysicsDisplayHandler::renderGeoList(this, _RDI, gfxContext, &_RDI->m_decorations, &_RDI->m_geometries, &v54, _RDI->m_mapped, v49);
              ++_RSI;
            }
            while ( _RSI != &_RDI->m_particleTransforms.m_data[(__int64)_RDI->m_particleTransforms.m_size] );
            v10 = v50;
          }
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi+20h]
            vmovups [rsp+138h+var_88], ymm0
            vmovups ymm1, ymmword ptr [rdi+40h]
            vmovups [rsp+138h+var_68], ymm1
          }
          HavokPhysicsDisplayHandler::renderGeoList(this, _RDI, gfxContext, &_RDI->m_decorations, &_RDI->m_geometries, &v55, _RDI->m_mapped, v49);
        }
      }
      v50 = ++v10;
      v11 = v51 + 8;
      v51 += 8i64;
    }
    while ( v10 < this->m_displayGeoLists.m_size );
    source = gfxContext->source;
  }
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
  MatrixIdentity44(&ActiveMatrixForEdit->m);
  TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  hkMemoryRouter::replaceInstance(a);
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  LeaveCriticalSection(p_m_critSection);
}

/*
==============
HavokPhysicsDisplayHandler::renderGeoList
==============
*/
void HavokPhysicsDisplayHandler::renderGeoList(HavokPhysicsDisplayHandler *this, const HavokPhysicsDisplayHandler::DisplayGeoList *geoList, const GfxCmdBufContext *gfxContext, hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *decorations, hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *geometries, const hkTransformf *transform, const bool mapped, const GfxColor rColor)
{
  const GfxCmdBufContext *v15; 
  const HavokPhysicsDisplayHandler::DisplayGeoList *v16; 
  HavokPhysicsDisplayHandler *v17; 
  hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *v18; 
  const hkTransformf *v19; 
  GfxColor v20; 
  int v39; 
  __int64 v43; 
  __int64 v44; 
  unsigned __int64 m_instanceOriginalGeoId; 
  __int64 v46; 
  hkGeometry *m_geometry; 
  __int64 v48; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *p_m_vertices; 
  int v50; 
  int v51; 
  __int64 v52; 
  hkMemoryAllocator *v53; 
  int v54; 
  __int64 v55; 
  hkMemoryAllocator *v56; 
  int m_size; 
  hkGeometry::Triangle *v58; 
  hkMemoryAllocator *v59; 
  int v61; 
  hkMemoryAllocator *v62; 
  int v63; 
  __int64 v64; 
  hkMemoryAllocator *v65; 
  int v66; 
  hkMemoryAllocator *v68; 
  int v69; 
  hkMemoryAllocator *v71; 
  int v72; 
  hkMemoryAllocator *v74; 
  int v75; 
  hkMemoryAllocator *v77; 
  int v78; 
  hkMemoryAllocator *v80; 
  int v81; 
  int *v83; 
  __int64 v84; 
  __int64 v85; 
  hkMemoryAllocator *v101; 
  __int64 v102; 
  int v103; 
  hkMemoryAllocator *v104; 
  int v105; 
  __int64 v106; 
  __int64 v107; 
  hkMemoryAllocator *v108; 
  int v109; 
  hkMemoryAllocator *v111; 
  int v112; 
  __int64 v114; 
  __int64 v115; 
  hkMemoryAllocator *v120; 
  unsigned __int64 v121; 
  GfxCmdBufContext *v122; 
  const hkVector4f *v124; 
  unsigned __int8 v142; 
  unsigned __int8 v146; 
  unsigned __int8 v150; 
  unsigned __int8 v155; 
  hkMemoryAllocator *v156; 
  hkMemoryAllocator *v157; 
  const hkVector4f *v160; 
  unsigned __int64 v166; 
  int v167; 
  hkMemoryAllocator *v168; 
  int v169; 
  __int64 v170; 
  hkMemoryAllocator *v171; 
  int v172; 
  hkMemoryAllocator *v174; 
  int v175; 
  hkMemoryAllocator *v177; 
  int v178; 
  hkMemoryAllocator *v180; 
  int v181; 
  hkMemoryAllocator *v183; 
  int v184; 
  hkMemoryAllocator *v186; 
  int v187; 
  hkMemoryAllocator *v204; 
  hkMemoryAllocator *v205; 
  hkMemoryAllocator *v206; 
  int v207; 
  __int64 v208; 
  HavokPhysicsDisplayHandler::DisplayGeo *m_data; 
  __int64 m_frameCount; 
  __int64 v211; 
  hkGeometry *v212; 
  GfxColor v213; 
  float tris; 
  float trisa; 
  int v222; 
  hkArray<hkVector4f,hkContainerHeapAllocator> lines; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v224; 
  HavokPhysicsDisplayHandler *v225; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v226; 
  GfxColor v227; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> array; 
  const HavokPhysicsDisplayHandler::DisplayGeoList *v229; 
  unsigned __int64 key; 
  hkArray<hkVector4f,hkContainerHeapAllocator> v231; 
  GfxCmdBufContext *gfxContexta; 
  __int64 v233; 
  GfxColor v234; 
  int v235; 
  hkTransformf *v236; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> v237; 
  hkTransformf *parentTransform; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> v239; 
  hkArray<hkVector4f,hkContainerHeapAllocator> verts; 
  __int64 v241; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v242; 
  hkArray<hkGeometryDecorations,hkContainerHeapAllocator> *v243; 
  unsigned __int64 def[2]; 
  __int64 v245; 
  hkArray<HavokPhysicsDisplayHandler::DisplayGeo,hkContainerHeapAllocator> *v246; 
  __int64 v247; 
  char v250; 
  void *retaddr; 

  _R11 = &retaddr;
  v247 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  v243 = decorations;
  v15 = gfxContext;
  gfxContexta = (GfxCmdBufContext *)gfxContext;
  v16 = geoList;
  v229 = geoList;
  v17 = this;
  v225 = this;
  v18 = geometries;
  v246 = geometries;
  v19 = transform;
  parentTransform = (hkTransformf *)transform;
  v20 = rColor;
  v234 = rColor;
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  dword ptr [rsp+228h+var_D8], xmm0
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  dword ptr [rsp+228h+var_D8+4], xmm1
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  dword ptr [rsp+228h+var_D8+8], xmm0
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+228h+var_D8+0Ch], xmm2
    vmovss  xmm0, dword ptr [r15+10h]
    vmovss  dword ptr [rsp+228h+var_D8+10h], xmm0
    vmovss  xmm1, dword ptr [r15+14h]
    vmovss  dword ptr [rsp+228h+var_D8+14h], xmm1
    vmovss  xmm0, dword ptr [r15+18h]
    vmovss  dword ptr [rsp+228h+var_D8+18h], xmm0
    vmovss  dword ptr [rsp+228h+var_D8+1Ch], xmm2
    vmovss  xmm0, dword ptr [r15+20h]
    vmovss  dword ptr [rsp+228h+var_B8], xmm0
    vmovss  xmm1, dword ptr [r15+24h]
    vmovss  dword ptr [rsp+228h+var_B8+4], xmm1
    vmovss  xmm0, dword ptr [r15+28h]
    vmovss  dword ptr [rsp+228h+var_B8+8], xmm0
    vmovss  dword ptr [rsp+228h+var_B8+0Ch], xmm2
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm0, xmm3, dword ptr [r15+30h]
    vmovss  dword ptr [rsp+228h+var_B8+10h], xmm0
    vmulss  xmm2, xmm3, dword ptr [r15+34h]
    vmovss  dword ptr [rsp+228h+var_B8+14h], xmm2
    vmulss  xmm1, xmm3, dword ptr [r15+38h]
    vmovss  dword ptr [rsp+228h+var_B8+18h], xmm1
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [rsp+228h+var_B8+1Ch], xmm2
  }
  R_Set3D(gfxContext->source);
  v15->source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
  _RAX = R_GetActiveMatrixForEdit(v15->source, 0xAAu);
  __asm
  {
    vmovups ymm0, [rsp+228h+var_D8]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, [rsp+228h+var_B8]
    vmovups ymmword ptr [rax+20h], ymm1
  }
  v39 = 0;
  v222 = 0;
  __asm
  {
    vmovss  xmm8, cs:__real@433f4000
    vmovss  xmm9, cs:__real@3f400000
    vmovss  xmm10, cs:__real@3f000000
  }
  do
  {
    v235 = 0;
    v43 = 0i64;
    v245 = 0i64;
    if ( v243->m_size <= 0 )
      goto LABEL_141;
    do
    {
      v44 = (__int64)&v243->m_data[v43];
      v241 = v44;
      m_instanceOriginalGeoId = v16->m_instanceOriginalGeoId;
      if ( !m_instanceOriginalGeoId )
        goto LABEL_139;
      def[0] = 0i64;
      key = m_instanceOriginalGeoId;
      v46 = *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&v17->m_geoListMap.m_map, &key, def);
      if ( !v46 )
      {
        v39 = v222;
        goto LABEL_139;
      }
      if ( v16->m_geometries.m_size == 1 )
      {
        m_geometry = v16->m_geometries.m_data->m_geometry;
        v48 = *(_QWORD *)(v46 + 112);
      }
      else
      {
        v48 = *(_QWORD *)(v46 + 112);
        m_geometry = *(hkGeometry **)(v48 + 80);
      }
      p_m_vertices = &m_geometry->m_vertices;
      v242 = &m_geometry->m_vertices;
      v236 = (hkTransformf *)(v48 + 16);
      v50 = *(_DWORD *)(v44 + 128);
      v51 = v222;
      if ( v50 > 0 )
      {
        v52 = *(int *)(v44 + 128);
        key = v52;
        if ( !v222 )
        {
          array.m_data = NULL;
          array.m_size = 0;
          array.m_capacityAndFlags = 0x80000000;
          v53 = hkMemHeapAllocator();
          if ( (array.m_capacityAndFlags & 0x3FFFFFFF) < v50 )
          {
            v54 = 2 * (array.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v54 >= 0x3FFFFFFF )
              v54 = 1073741822;
            if ( v50 < v54 )
              v50 = v54;
            hkArrayUtil::_reserve(v53, &array, v50, 16);
          }
          if ( v52 > 0 )
          {
            v55 = 0i64;
            do
            {
              if ( *(_DWORD *)(*(_QWORD *)(v44 + 120) + v55 + 16) == 3 )
              {
                v56 = hkMemHeapAllocator();
                m_size = array.m_size;
                if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v56, &array, 16);
                  m_size = array.m_size;
                }
                v58 = &array.m_data[m_size];
                array.m_size = m_size + 1;
                v58->m_a = **(_DWORD **)(*(_QWORD *)(v44 + 120) + v55 + 8);
                v58->m_b = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 120) + v55 + 8) + 4i64);
                v58->m_c = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 120) + v55 + 8) + 8i64);
              }
              v55 += 32i64;
              --v52;
            }
            while ( v52 );
          }
          HavokPhysicsDisplayHandler::renderTriList(v225, v15, mapped, p_m_vertices, &array, v236, v20);
          v59 = hkMemHeapAllocator();
          _RSI = 0i64;
          array.m_size = 0;
          if ( array.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v59, array.m_data, 16, array.m_capacityAndFlags & 0x3FFFFFFF);
          array.m_data = NULL;
          array.m_capacityAndFlags = 0x80000000;
          v51 = v222;
          goto LABEL_55;
        }
        if ( v222 == 1 )
        {
          lines.m_data = NULL;
          lines.m_size = 0;
          lines.m_capacityAndFlags = 0x80000000;
          v61 = 6 * v50;
          v62 = hkMemHeapAllocator();
          if ( (lines.m_capacityAndFlags & 0x3FFFFFFF) < v61 )
          {
            v63 = 2 * (lines.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v63 >= 0x3FFFFFFF )
              v63 = 1073741822;
            if ( v61 < v63 )
              v61 = v63;
            hkArrayUtil::_reserve(v62, &lines, v61, 16);
          }
          if ( v52 > 0 )
          {
            v64 = 0i64;
            v233 = 0i64;
            do
            {
              if ( *(_DWORD *)(*(_QWORD *)(v44 + 120) + v64 + 16) == 3 )
              {
                v65 = hkMemHeapAllocator();
                v66 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v65, &lines, 16);
                  v66 = lines.m_size;
                }
                _R13 = &lines.m_data[v66];
                lines.m_size = v66 + 1;
                v68 = hkMemHeapAllocator();
                v69 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v68, &lines, 16);
                  v69 = lines.m_size;
                }
                _R12 = &lines.m_data[v69];
                lines.m_size = v69 + 1;
                v71 = hkMemHeapAllocator();
                v72 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v71, &lines, 16);
                  v72 = lines.m_size;
                }
                _R15 = &lines.m_data[v72];
                lines.m_size = v72 + 1;
                v74 = hkMemHeapAllocator();
                v75 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v74, &lines, 16);
                  v75 = lines.m_size;
                }
                _R14 = &lines.m_data[v75];
                lines.m_size = v75 + 1;
                v77 = hkMemHeapAllocator();
                v78 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v77, &lines, 16);
                  v78 = lines.m_size;
                }
                _RSI = &lines.m_data[v78];
                lines.m_size = v78 + 1;
                v80 = hkMemHeapAllocator();
                v81 = lines.m_size;
                if ( lines.m_size == (lines.m_capacityAndFlags & 0x3FFFFFFF) )
                {
                  hkArrayUtil::_reserveMore(v80, &lines, 16);
                  v81 = lines.m_size;
                }
                _R10 = &lines.m_data[v81];
                lines.m_size = v81 + 1;
                v83 = *(int **)(*(_QWORD *)(v241 + 120) + v233 + 8);
                v84 = v83[1];
                v85 = v83[2];
                _R9 = 2i64 * *v83;
                _RAX = v242->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+r9*8]
                  vmovups xmmword ptr [r13+0], xmm0
                }
                _RCX = 2 * v84;
                p_m_vertices = v242;
                _RAX = v242->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+rcx*8]
                  vmovups xmmword ptr [r12], xmm0
                }
                _RAX = p_m_vertices->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+rcx*8]
                  vmovups xmmword ptr [r15], xmm0
                }
                _RCX = 2 * v85;
                _RAX = p_m_vertices->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+rcx*8]
                  vmovups xmmword ptr [r14], xmm0
                }
                _RAX = p_m_vertices->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+rcx*8]
                  vmovups xmmword ptr [rsi], xmm0
                }
                _RAX = p_m_vertices->m_data;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax+r9*8]
                  vmovups xmmword ptr [r10], xmm0
                }
                v52 = key;
                v64 = v233;
                v44 = v241;
              }
              v64 += 32i64;
              v233 = v64;
              key = --v52;
            }
            while ( v52 );
            v15 = gfxContexta;
          }
          HavokPhysicsDisplayHandler::renderLineList(v225, v15, &lines, parentTransform, v236, (const GfxColor)-16777216);
          v101 = hkMemHeapAllocator();
          _RSI = 0i64;
          lines.m_size = 0;
          if ( lines.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v101, lines.m_data, 16, lines.m_capacityAndFlags & 0x3FFFFFFF);
          lines.m_data = NULL;
          lines.m_capacityAndFlags = 0x80000000;
          v51 = v222;
          goto LABEL_55;
        }
      }
      _RSI = 0i64;
LABEL_55:
      v102 = *(int *)(v44 + 96);
      if ( (int)v102 > 0 && v51 == 1 )
      {
        v226.m_data = NULL;
        v226.m_size = 0;
        v226.m_capacityAndFlags = 0x80000000;
        v103 = 2 * v102;
        v104 = hkMemHeapAllocator();
        if ( (v226.m_capacityAndFlags & 0x3FFFFFFF) < 2 * (int)v102 )
        {
          v105 = 2 * (v226.m_capacityAndFlags & 0x3FFFFFFF);
          if ( (unsigned int)v105 >= 0x3FFFFFFF )
            v105 = 1073741822;
          if ( v103 < v105 )
            v103 = v105;
          hkArrayUtil::_reserve(v104, &v226, v103, 16);
        }
        v106 = v102;
        if ( (int)v102 > 0 )
        {
          v107 = 0i64;
          do
          {
            v108 = hkMemHeapAllocator();
            v109 = v226.m_size;
            if ( v226.m_size == (v226.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v108, &v226, 16);
              v109 = v226.m_size;
            }
            _RSI = &v226.m_data[v109];
            v226.m_size = v109 + 1;
            v111 = hkMemHeapAllocator();
            v112 = v226.m_size;
            if ( v226.m_size == (v226.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v111, &v226, 16);
              v112 = v226.m_size;
            }
            _R8 = &v226.m_data[v112];
            v226.m_size = v112 + 1;
            v114 = *(_QWORD *)(v44 + 88);
            v115 = *(int *)(v107 + v114 + 12);
            _RCX = (__int64)&p_m_vertices->m_data[*(int *)(v107 + v114 + 8)];
            __asm
            {
              vmovups xmm0, xmmword ptr [rcx]
              vmovups xmmword ptr [rsi], xmm0
            }
            _RAX = (__int64)&p_m_vertices->m_data[v115];
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups xmmword ptr [r8], xmm0
            }
            v107 += 24i64;
            --v106;
          }
          while ( v106 );
        }
        v17 = v225;
        HavokPhysicsDisplayHandler::renderLineList(v225, gfxContexta, &v226, parentTransform, v236, (const GfxColor)-16777216);
        v120 = hkMemHeapAllocator();
        _RSI = 0i64;
        v226.m_size = 0;
        if ( v226.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v120, v226.m_data, 16, v226.m_capacityAndFlags & 0x3FFFFFFF);
        v226.m_data = NULL;
        v226.m_capacityAndFlags = 0x80000000;
      }
      else
      {
        v17 = v225;
      }
      v39 = v222;
      if ( *(int *)(v44 + 64) <= 0 )
        goto LABEL_138;
      v121 = *(int *)(v44 + 64);
      def[0] = v121;
      if ( !v222 )
      {
        __asm { vxorps  xmm7, xmm7, xmm7 }
        v122 = gfxContexta;
        do
        {
          _RDX = *(_QWORD *)(v44 + 56);
          v124 = &p_m_vertices->m_data[*(int *)(_RSI + _RDX + 8)];
          _RCX = 2i64 * *(unsigned __int16 *)(_RSI + _RDX + 12);
          _RAX = *(_QWORD *)(v44 + 72);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax+rcx*8]
            vmovups xmmword ptr [rsp+228h+def], xmm0
            vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
            vpextrq rax, xmm0, 1
          }
          if ( (_RAX & 0x100000000i64) != 0 )
            __asm { vmovss  xmm1, dword ptr [rsi+rdx+10h] }
          verts.m_data = NULL;
          verts.m_size = 0;
          verts.m_capacityAndFlags = 0x80000000;
          v239.m_data = NULL;
          v239.m_size = 0;
          v239.m_capacityAndFlags = 0x80000000;
          __asm { vmovss  dword ptr [rsp+228h+tris], xmm1 }
          HavokPhysicsDisplayHandler::makeSphereTriList(v17, &verts, &v239, v124, tris);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rax
            vxorps  xmm5, xmm5, xmm5
            vcvtsi2ss xmm5, xmm5, rax
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, rax
          }
          if ( (def[0] & 0xFF00000000000000ui64) != 0 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm4, xmm0, xmm9
            }
          }
          else
          {
            __asm { vmovaps xmm4, xmm8 }
          }
          __asm
          {
            vaddss  xmm1, xmm1, xmm10
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm3, xmm7, xmm1, 1
            vcvttss2si ecx, xmm3
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v142 = _ECX;
          if ( _ECX < 0 )
            v142 = 0;
          v227.array[0] = v142;
          __asm
          {
            vaddss  xmm1, xmm5, xmm10
            vroundss xmm3, xmm7, xmm1, 1
            vcvttss2si ecx, xmm3
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v146 = _ECX;
          if ( _ECX < 0 )
            v146 = 0;
          v227.array[1] = v146;
          __asm
          {
            vaddss  xmm1, xmm6, xmm10
            vroundss xmm3, xmm7, xmm1, 1
            vcvttss2si ecx, xmm3
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v150 = _ECX;
          if ( _ECX < 0 )
            v150 = 0;
          v227.array[2] = v150;
          __asm
          {
            vaddss  xmm1, xmm4, xmm10
            vmovss  xmm2, xmm0, xmm1
            vroundss xmm3, xmm7, xmm2, 1
            vcvttss2si ecx, xmm3
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v155 = _ECX;
          if ( _ECX < 0 )
            v155 = 0;
          v227.array[3] = v155;
          HavokPhysicsDisplayHandler::renderTriList(v17, v122, mapped, &verts, &v239, v236, v227);
          v156 = hkMemHeapAllocator();
          v239.m_size = 0;
          if ( v239.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v156, v239.m_data, 16, v239.m_capacityAndFlags & 0x3FFFFFFF);
          v239.m_data = NULL;
          v239.m_capacityAndFlags = 0x80000000;
          v157 = hkMemHeapAllocator();
          verts.m_size = 0;
          if ( verts.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v157, verts.m_data, 16, verts.m_capacityAndFlags & 0x3FFFFFFF);
          verts.m_data = NULL;
          verts.m_capacityAndFlags = 0x80000000;
          _RSI += 24i64;
          --v121;
        }
        while ( v121 );
        v20 = v234;
        v39 = v222;
LABEL_138:
        v16 = v229;
        goto LABEL_139;
      }
      if ( v222 == 1 )
      {
        _R14 = 0i64;
        v233 = 0i64;
        do
        {
          v224.m_data = NULL;
          v224.m_size = 0;
          v224.m_capacityAndFlags = 0x80000000;
          _RDX = *(_QWORD *)(v44 + 56);
          v160 = &p_m_vertices->m_data[*(int *)(_R14 + _RDX + 8)];
          _RCX = 2i64 * *(unsigned __int16 *)(_R14 + _RDX + 12);
          _RAX = *(_QWORD *)(v44 + 72);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax+rcx*8]
            vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
            vpextrq rax, xmm0, 1
          }
          if ( (_RAX & 0x100000000i64) != 0 )
            __asm { vmovss  xmm1, dword ptr [r14+rdx+10h] }
          v231.m_data = NULL;
          v231.m_size = 0;
          v231.m_capacityAndFlags = 0x80000000;
          v237.m_data = NULL;
          v237.m_size = 0;
          v237.m_capacityAndFlags = 0x80000000;
          __asm { vmovss  dword ptr [rsp+228h+tris], xmm1 }
          HavokPhysicsDisplayHandler::makeSphereTriList(v225, &v231, &v237, v160, trisa);
          v166 = v237.m_size;
          v167 = 6 * v237.m_size;
          v168 = hkMemHeapAllocator();
          if ( (v224.m_capacityAndFlags & 0x3FFFFFFF) < v167 )
          {
            v169 = 2 * (v224.m_capacityAndFlags & 0x3FFFFFFF);
            if ( (unsigned int)v169 >= 0x3FFFFFFF )
              v169 = 1073741822;
            if ( v167 < v169 )
              v167 = v169;
            hkArrayUtil::_reserve(v168, &v224, v167, 16);
          }
          key = v166;
          if ( (int)v166 > 0 )
          {
            v170 = 0i64;
            do
            {
              v171 = hkMemHeapAllocator();
              v172 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v171, &v224, 16);
                v172 = v224.m_size;
              }
              _R13 = &v224.m_data[v172];
              v224.m_size = v172 + 1;
              v174 = hkMemHeapAllocator();
              v175 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v174, &v224, 16);
                v175 = v224.m_size;
              }
              _R12 = &v224.m_data[v175];
              v224.m_size = v175 + 1;
              v177 = hkMemHeapAllocator();
              v178 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v177, &v224, 16);
                v178 = v224.m_size;
              }
              _R15 = &v224.m_data[v178];
              v224.m_size = v178 + 1;
              v180 = hkMemHeapAllocator();
              v181 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v180, &v224, 16);
                v181 = v224.m_size;
              }
              _R14 = &v224.m_data[v181];
              v224.m_size = v181 + 1;
              v183 = hkMemHeapAllocator();
              v184 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v183, &v224, 16);
                v184 = v224.m_size;
              }
              _RSI = &v224.m_data[v184];
              v224.m_size = v184 + 1;
              v186 = hkMemHeapAllocator();
              v187 = v224.m_size;
              if ( v224.m_size == (v224.m_capacityAndFlags & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v186, &v224, 16);
                v187 = v224.m_size;
              }
              _R10 = &v224.m_data[v187];
              v224.m_size = v187 + 1;
              _RDX = v237.m_data[v170].m_b;
              _RCX = v237.m_data[v170].m_c;
              _R9 = 2i64 * v237.m_data[v170].m_a;
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r9*8]
                vmovups xmmword ptr [r13+0], xmm0
              }
              _RDX *= 2i64;
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+rdx*8]
                vmovups xmmword ptr [r12], xmm0
              }
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+rdx*8]
                vmovups xmmword ptr [r15], xmm0
              }
              _RCX *= 2i64;
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+rcx*8]
                vmovups xmmword ptr [r14], xmm0
              }
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+rcx*8]
                vmovups xmmword ptr [rsi], xmm0
              }
              _RAX = v231.m_data;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r9*8]
                vmovups xmmword ptr [r10], xmm0
              }
              HavokPhysicsDisplayHandler::renderLineList(v225, gfxContexta, &v224, parentTransform, v236, (const GfxColor)-16777216);
              ++v170;
              --key;
            }
            while ( key );
            v44 = v241;
            _R14 = v233;
            v121 = def[0];
            p_m_vertices = v242;
          }
          v204 = hkMemHeapAllocator();
          v237.m_size = 0;
          if ( v237.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v204, v237.m_data, 16, v237.m_capacityAndFlags & 0x3FFFFFFF);
          v237.m_data = NULL;
          v237.m_capacityAndFlags = 0x80000000;
          v205 = hkMemHeapAllocator();
          v231.m_size = 0;
          if ( v231.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v205, v231.m_data, 16, v231.m_capacityAndFlags & 0x3FFFFFFF);
          v231.m_data = NULL;
          v231.m_capacityAndFlags = 0x80000000;
          v206 = hkMemHeapAllocator();
          v224.m_size = 0;
          if ( v224.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v206, v224.m_data, 16, v224.m_capacityAndFlags & 0x3FFFFFFF);
          v224.m_data = NULL;
          v224.m_capacityAndFlags = 0x80000000;
          _R14 += 24i64;
          v233 = _R14;
          def[0] = --v121;
        }
        while ( v121 );
        v20 = v234;
        v17 = v225;
        v39 = v222;
        goto LABEL_138;
      }
      v16 = v229;
LABEL_139:
      ++v235;
      v43 = ++v245;
      v15 = gfxContexta;
    }
    while ( v235 < v243->m_size );
    v19 = parentTransform;
    v18 = v246;
LABEL_141:
    v207 = 0;
    if ( v18->m_size > 0 )
    {
      v208 = 0i64;
      do
      {
        m_data = v18->m_data;
        m_frameCount = v18->m_data[v208].m_frameCount;
        v211 = m_frameCount;
        if ( m_frameCount != -1 && m_frameCount > 0 )
        {
          v211 = m_frameCount - 1;
          m_data[v208].m_frameCount = m_frameCount - 1;
        }
        if ( v211 >= -1 )
        {
          if ( v39 )
          {
            if ( v39 == 1 && m_data[v208].m_lineArray.m_size > 0 )
            {
              v213 = v20;
              if ( m_data[v208].m_geometry )
                v213.packed = -16777216;
              HavokPhysicsDisplayHandler::renderLineList(v225, v15, &m_data[v208].m_lineArray, v19, &m_data[v208].m_transform, v213);
            }
          }
          else
          {
            v212 = m_data[v208].m_geometry;
            if ( v212 && physics_debugVisualizeWorldViewMode->current.integer != 2 )
              HavokPhysicsDisplayHandler::renderTriList(v225, v15, mapped, &v212->m_vertices, &v212->m_triangles, &m_data[v208].m_transform, v20);
          }
        }
        ++v207;
        ++v208;
        v39 = v222;
      }
      while ( v207 < v18->m_size );
    }
    v222 = ++v39;
    v17 = v225;
    v16 = v229;
  }
  while ( v39 < 2 );
  _R11 = &v250;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
HavokPhysicsDisplayHandler::renderLineList
==============
*/
void HavokPhysicsDisplayHandler::renderLineList(HavokPhysicsDisplayHandler *this, const GfxCmdBufContext *gfxContext, const hkArray<hkVector4f,hkContainerHeapAllocator> *lines, const hkTransformf *parentTransform, const hkTransformf *transform, const GfxColor rColor)
{
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v26; 
  unsigned int v46; 
  int m_size; 
  unsigned int v48; 
  signed int v49; 
  unsigned int v50; 
  int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  materialCommands_t *Tess; 
  materialCommands_t *v57; 
  int v58; 
  unsigned int v59; 
  unsigned int v60; 
  bool v142; 
  __int64 v154; 
  unsigned int v171; 
  GfxCmdBufContext v172; 
  unsigned int v179; 
  const GfxCmdBufContext *v180; 
  __int64 v181; 
  const hkArray<hkVector4f,hkContainerHeapAllocator> *v182; 
  GfxCmdBufContext v183; 
  vec3_t v184; 
  char v189; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RAX = transform;
  __asm
  {
    vmovss  xmm13, cs:__real@42000000
    vmovss  xmm0, dword ptr [r9+8]
    vmovss  xmm1, dword ptr [r9+10h]
    vmulss  xmm2, xmm13, dword ptr [r9+38h]
    vmovss  xmm12, dword ptr [rax]
    vmovss  xmm10, dword ptr [rax+4]
    vmovss  xmm11, dword ptr [rax+10h]
    vmulss  xmm3, xmm13, dword ptr [rax+38h]
  }
  v26 = lines;
  __asm
  {
    vmovss  xmm14, dword ptr [r9]
    vmovss  xmm15, dword ptr [r9+4]
    vmovss  [rbp+1B0h+var_178], xmm0
    vmovss  xmm0, dword ptr [r9+14h]
    vmovss  [rbp+1B0h+var_180], xmm0
    vmovss  xmm0, dword ptr [r9+18h]
    vmovss  [rbp+1B0h+var_1D8], xmm0
    vmovss  xmm0, dword ptr [r9+20h]
    vmovss  [rbp+1B0h+var_200], xmm0
    vmovss  xmm0, dword ptr [r9+24h]
    vmovss  [rbp+1B0h+var_1E0], xmm0
    vmulss  xmm0, xmm13, dword ptr [r9+30h]
    vmovss  [rbp+1B0h+var_1F0], xmm0
    vmulss  xmm0, xmm13, dword ptr [r9+34h]
    vmovss  [rbp+1B0h+var_1DC], xmm0
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+1B0h+var_218], xmm0
    vmovss  xmm0, dword ptr [rax+14h]
    vmovss  [rbp+1B0h+var_230], xmm0
    vmovss  xmm0, dword ptr [rax+18h]
    vmovss  [rbp+1B0h+var_220], xmm0
    vmovss  xmm0, dword ptr [rax+20h]
    vmovss  [rsp+2B0h+var_250], xmm0
    vmovss  xmm0, dword ptr [rax+24h]
    vmovss  [rbp+1B0h+var_22C], xmm0
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rbp+1B0h+var_210], xmm0
    vmulss  xmm0, xmm13, dword ptr [rax+30h]
    vmovss  [rsp+2B0h+var_240], xmm0
    vmulss  xmm0, xmm13, dword ptr [rax+34h]
    vmovss  [rbp+1B0h+var_228], xmm0
    vmovups xmm0, xmmword ptr [rdx]
    vmovss  [rbp+1B0h+var_190], xmm1
    vmovss  xmm1, dword ptr [r9+28h]
    vmovups [rbp+1B0h+var_140], xmm0
    vmovss  [rbp+1B0h+var_170], xmm1
    vmovss  [rbp+1B0h+var_168], xmm2
    vmovss  [rbp+1B0h+var_1D0], xmm12
    vmovss  [rsp+2B0h+var_270], xmm10
    vmovss  [rsp+2B0h+var_260], xmm11
    vmovss  [rbp+1B0h+var_1A0], xmm3
  }
  v182 = lines;
  _RDI = gfxContext;
  v180 = gfxContext;
  v46 = R_GetTess(&v183)->maxVertices >> 2;
  m_size = v26->m_size;
  v179 = v46;
  v48 = (m_size / 2 + v46 - 1) / v46;
  if ( v48 )
  {
    v49 = v46;
    v50 = 0;
    __asm
    {
      vmovaps xmmword ptr [rsp+2B0h+var_48+8], xmm6
      vmovaps [rsp+2B0h+var_58+8], xmm7
      vmovaps [rsp+2B0h+var_68+8], xmm8
      vmovaps [rsp+2B0h+var_78+8], xmm9
    }
    v171 = v46;
    v181 = v48;
    do
    {
      __asm { vmovups xmm6, xmmword ptr [rdi] }
      v52 = v26->m_size / 2;
      __asm { vmovups [rbp+1B0h+var_1B0], xmm6 }
      if ( v49 < v52 )
        v52 = v49;
      v53 = v52 + v46 - v49;
      v54 = 4 * v53;
      v55 = 6 * v53;
      Tess = R_GetTess(&v172);
      if ( v54 > Tess->maxVertices )
      {
        LODWORD(v154) = v54;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v154) )
          __debugbreak();
      }
      if ( v55 > Tess->maxIndices )
      {
        LODWORD(v154) = v55;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v154) )
          __debugbreak();
      }
      __asm { vmovdqa [rbp+1B0h+var_1B0], xmm6 }
      v57 = R_GetTess(&v172);
      if ( v57->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (v54 + v57->vertexCount) < v55 + v57->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v54 + Tess->vertexCount > Tess->maxVertices || v55 + Tess->indexCount > Tess->maxIndices )
      {
        __asm { vmovdqa [rbp+1B0h+var_1B0], xmm6 }
        RB_TessOverflowInternal(&v172, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      _RDI = v180;
      v58 = 0;
      v59 = 2 * v52;
      v60 = v50;
      if ( v50 < v59 )
      {
        do
        {
          __asm
          {
            vmulss  xmm6, xmm13, dword ptr [rdx+rax*8]
            vmulss  xmm4, xmm13, dword ptr [rdx+rax*8+4]
            vmulss  xmm5, xmm13, dword ptr [rdx+rax*8+8]
            vmulss  xmm0, xmm5, [rsp+2B0h+var_250]
            vmulss  xmm2, xmm12, xmm6
            vmulss  xmm1, xmm4, xmm11
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm11, xmm2, [rsp+2B0h+var_240]
            vmulss  xmm0, xmm4, [rbp+1B0h+var_230]
            vmulss  xmm3, xmm6, [rbp+1B0h+var_218]
            vmulss  xmm1, xmm10, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, [rbp+1B0h+var_22C]
            vmulss  xmm0, xmm4, [rbp+1B0h+var_220]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm10, xmm2, [rbp+1B0h+var_228]
            vmulss  xmm1, xmm5, [rbp+1B0h+var_210]
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm4, xmm2, [rbp+1B0h+var_1A0]
            vmulss  xmm9, xmm13, dword ptr [rdx+rax*8]
            vmulss  xmm7, xmm13, dword ptr [rdx+rax*8+4]
            vmulss  xmm8, xmm13, dword ptr [rdx+rax*8+8]
            vmulss  xmm3, xmm7, [rsp+2B0h+var_260]
            vmulss  xmm1, xmm8, [rsp+2B0h+var_250]
            vmulss  xmm0, xmm9, xmm12
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm7, [rbp+1B0h+var_230]
            vmulss  xmm0, xmm9, [rsp+2B0h+var_270]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm12, xmm2, [rsp+2B0h+var_240]
            vmulss  xmm1, xmm8, [rbp+1B0h+var_22C]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm7, [rbp+1B0h+var_220]
            vmulss  xmm0, xmm9, [rbp+1B0h+var_218]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm6, xmm2, [rbp+1B0h+var_228]
            vmulss  xmm1, xmm8, [rbp+1B0h+var_210]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm10, [rbp+1B0h+var_190]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm5, xmm2, [rbp+1B0h+var_1A0]
            vmulss  xmm1, xmm4, [rbp+1B0h+var_200]
            vmulss  xmm0, xmm11, xmm14
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm10, [rbp+1B0h+var_180]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm0, xmm2, [rbp+1B0h+var_1F0]
            vmovss  dword ptr [rbp+1B0h+var_140], xmm0
            vmulss  xmm0, xmm4, [rbp+1B0h+var_1E0]
            vmulss  xmm1, xmm11, xmm15
            vaddss  xmm2, xmm3, xmm1
            vmulss  xmm3, xmm10, [rbp+1B0h+var_1D8]
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm1, xmm2, [rbp+1B0h+var_1DC]
            vmulss  xmm0, xmm11, [rbp+1B0h+var_178]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm6, [rbp+1B0h+var_190]
            vmovss  dword ptr [rbp+1B0h+var_140+4], xmm1
            vmulss  xmm1, xmm4, [rbp+1B0h+var_170]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm0, xmm2, [rbp+1B0h+var_168]
            vmulss  xmm1, xmm12, xmm14
            vaddss  xmm2, xmm3, xmm1
            vmulss  xmm3, xmm6, [rbp+1B0h+var_180]
            vmovss  dword ptr [rbp+1B0h+var_140+8], xmm0
            vmulss  xmm0, xmm5, [rbp+1B0h+var_200]
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm1, xmm2, [rbp+1B0h+var_1F0]
            vmulss  xmm0, xmm12, xmm15
            vmovss  [rbp+1B0h+var_130], xmm1
            vmulss  xmm1, xmm5, [rbp+1B0h+var_1E0]
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm0, xmm2, [rbp+1B0h+var_1DC]
            vmulss  xmm1, xmm12, [rbp+1B0h+var_178]
            vmulss  xmm3, xmm6, [rbp+1B0h+var_1D8]
            vmovss  [rbp+1B0h+var_12C], xmm0
            vmulss  xmm0, xmm5, [rbp+1B0h+var_170]
            vaddss  xmm2, xmm3, xmm1
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm1, xmm2, [rbp+1B0h+var_168]
            vmovups xmm0, xmmword ptr [rdi]
            vmovss  [rbp+1B0h+var_128], xmm1
            vmovups [rbp+1B0h+var_1B0], xmm0
            vmovss  xmm12, [rbp+1B0h+var_1D0]
            vmovss  xmm10, [rsp+2B0h+var_270]
            vmovss  xmm11, [rsp+2B0h+var_260]
          }
          v60 += 2;
          v58 = RB_AddDebugLine(&v172, (const vec3_t *)&v183, &v184, rColor, 1, v58, 0x7FFF, s_HavokPhysicsDisplayHandlerVerts);
        }
        while ( v60 < v59 );
        v49 = v171;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rbp+1B0h+var_1B0], xmm0
      }
      RB_EndDebugLines(&v172, 1, v58 / 2, s_HavokPhysicsDisplayHandlerVerts);
      v46 = v179;
      v49 += v179;
      v142 = v181-- == 1;
      v26 = v182;
      v171 = v49;
      v50 += 2 * v179;
    }
    while ( !v142 );
    __asm
    {
      vmovaps xmm9, [rsp+2B0h+var_78+8]
      vmovaps xmm8, [rsp+2B0h+var_68+8]
      vmovaps xmm7, [rsp+2B0h+var_58+8]
      vmovaps xmm6, xmmword ptr [rsp+2B0h+var_48+8]
    }
  }
  _R11 = &v189;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
    vmovaps xmm13, xmmword ptr [r11-98h]
    vmovaps xmm14, xmmword ptr [r11-0A8h]
    vmovaps xmm15, xmmword ptr [r11-0B8h]
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
  bool v22; 
  int v23; 
  int m_size; 
  materialCommands_t *Tess; 
  int v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  unsigned int v88; 
  int v89; 
  GfxCmdBufContext v90; 
  int v95; 
  int v96; 
  GfxCmdBufContext v97; 
  vec3_t v98; 
  char v100; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  p_m_data = &tris->m_data;
  _R13 = gfxContext;
  *(_QWORD *)v98.v = verts;
  integer = physics_debugVisualizeWorldViewMode->current.integer;
  v97.source = (GfxCmdBufSourceState *)tris;
  v96 = integer;
  v22 = ((integer - 1) & 0xFFFFFFFD) == 0 || !mapped;
  if ( integer && !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp", 1067, ASSERT_TYPE_ASSERT, "(renderBackface || renderFrontface)", (const char *)&queryFormat, "renderBackface || renderFrontface") )
    __debugbreak();
  v23 = 0;
  m_size = tris->m_size;
  __asm { vmovss  xmm7, cs:__real@42000000 }
  v89 = verts->m_size;
  v95 = m_size;
  v88 = 3 * m_size * (v22 + (integer == 0));
  _RAX = transform;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm8, dword ptr [rax]
    vmovss  xmm9, dword ptr [rax+4]
    vmovss  xmm10, dword ptr [rax+8]
    vmovss  xmm11, dword ptr [rax+10h]
    vmovss  xmm12, dword ptr [rax+14h]
    vmovss  xmm13, dword ptr [rax+18h]
    vmovss  xmm14, dword ptr [rax+20h]
    vmovss  xmm15, dword ptr [rax+24h]
    vmovss  [rsp+188h+var_120], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+30h]
    vmovss  [rsp+188h+var_138], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+34h]
    vmovss  [rsp+188h+var_128], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+38h]
    vmovss  [rsp+188h+var_118], xmm0
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rsp+188h+var_148], xmm0
  }
  Tess = R_GetTess(&v90);
  if ( v88 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rsp+188h+var_148], xmm0
    }
    RB_BeginSurface(&v90, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG, 1);
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rsp+188h+var_148], xmm0
    }
    RB_CheckTessOverflow(&v90, v89, v88);
    v43 = v89;
    if ( v89 > 0 )
    {
      v44 = 0i64;
      __asm { vmovaps [rsp+188h+var_48], xmm6 }
      v45 = v89;
      do
      {
        v46 = v23 + Tess->vertexCount;
        __asm
        {
          vmulss  xmm6, xmm7, dword ptr [rsi+rax]
          vmulss  xmm4, xmm7, dword ptr [rsi+rax+4]
          vmulss  xmm5, xmm7, dword ptr [rsi+rax+8]
          vmulss  xmm2, xmm4, xmm11
          vmulss  xmm1, xmm6, xmm8
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm14
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm1, xmm2, [rsp+188h+var_138]
          vmovss  dword ptr [rsp+188h+var_F8], xmm1
          vmulss  xmm3, xmm4, xmm12
          vmulss  xmm0, xmm6, xmm9
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm5, xmm15
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm0, xmm2, [rsp+188h+var_128]
          vmulss  xmm1, xmm6, xmm10
          vmovss  dword ptr [rsp+188h+var_F8+4], xmm0
          vmulss  xmm0, xmm5, [rsp+188h+var_120]
          vmulss  xmm3, xmm4, xmm13
          vaddss  xmm2, xmm3, xmm1
          vaddss  xmm2, xmm2, xmm0
          vaddss  xmm1, xmm2, [rsp+188h+var_118]
          vmovups xmm0, xmmword ptr [r13+0]
          vmovss  [rsp+188h+var_F0], xmm1
          vmovups [rsp+188h+var_148], xmm0
        }
        RB_SetPolyVert(&v90, &v98, rColor, v46);
        ++v23;
        v44 += 16i64;
        --v45;
      }
      while ( v45 );
      p_m_data = v97.source;
      v23 = 0;
      m_size = v95;
      integer = v96;
      v43 = v89;
      __asm { vmovaps xmm6, [rsp+188h+var_48] }
    }
    Tess->vertexCount += v43;
    v70 = m_size;
    if ( !integer )
    {
      v71 = 0;
      if ( m_size > 0 )
      {
        v72 = 0i64;
        v73 = m_size;
        do
        {
          v74 = Tess->indexCount + 3 * v71++;
          v72 += 16i64;
          Tess->indices[v74] = *(_WORD *)(v72 + *p_m_data - 16);
          Tess->indices[(unsigned int)(v74 + 1)] = *(_WORD *)(*p_m_data + v72 - 12);
          Tess->indices[(unsigned int)(v74 + 2)] = *(_WORD *)(*p_m_data + v72 - 8);
          --v73;
        }
        while ( v73 );
      }
      Tess->indexCount += 3 * m_size;
    }
    if ( v22 )
    {
      if ( m_size > 0 )
      {
        v75 = 0i64;
        do
        {
          v76 = Tess->indexCount + 3 * v23++;
          v75 += 16i64;
          Tess->indices[v76] = *(_WORD *)(v75 + *p_m_data - 16);
          Tess->indices[(unsigned int)(v76 + 1)] = *(_WORD *)(*p_m_data + v75 - 8);
          Tess->indices[(unsigned int)(v76 + 2)] = *(_WORD *)(*p_m_data + v75 - 12);
          --v70;
        }
        while ( v70 );
      }
      Tess->indexCount += 3 * m_size;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rsp+188h+var_108], xmm0
    }
    RB_EndTessSurfaceInternal(&v97, "c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdisplayhandler.cpp(1146)");
  }
  _R11 = &v100;
  __asm
  {
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
  vec3_t outPos; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = shapeViewer;
  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  __asm
  {
    vmovss  xmm2, cs:__real@3d000000
    vmulss  xmm3, xmm2, dword ptr [rsp+58h+outPos+4]
    vmulss  xmm4, xmm2, dword ptr [rsp+58h+outPos+8]
    vmovss  xmm0, dword ptr [rsp+58h+outPos]
    vmulss  xmm6, xmm0, xmm2
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+28h]
    vmulss  xmm1, xmm0, cs:__real@3ec00000
    vinsertps xmm2, xmm2, xmm1, 0
    vinsertps xmm6, xmm6, xmm3, 10h
    vinsertps xmm2, xmm2, xmm1, 10h
    vinsertps xmm2, xmm2, xmm1, 20h ; ' '
    vxorps  xmm5, xmm5, xmm5
    vinsertps xmm6, xmm6, xmm4, 20h ; ' '
    vinsertps xmm6, xmm6, xmm5, 30h ; '0'
    vsubps  xmm0, xmm6, xmm2
    vmovups xmmword ptr [rbx+0D0h], xmm0
    vaddps  xmm1, xmm2, xmm6
    vmovups xmmword ptr [rbx+0E0h], xmm1
  }
  _RBX->m_useAabb = 1;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
HavokPhysicsDisplayHandler::step
==============
*/
void HavokPhysicsDisplayHandler::step(HavokPhysicsDisplayHandler *this)
{
  _RTL_CRITICAL_SECTION *p_m_critSection; 
  int v8; 
  __int64 v12; 
  int v27; 
  __int64 v28; 
  int v44; 
  __int64 v45; 
  HavokPhysicsDisplayHandler::Display3DText *v47; 
  HavokPhysicsShapeViewer *m_shapeViewer; 
  void (__fastcall *refreshAllBodies)(hknpShapeViewer *, hknpWorld *, hknpCollisionFlags); 
  __int64 m_worldId; 
  int v69; 
  vec4_t color; 
  vec3_t origin; 
  Bounds bounds; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_critSection);
  HavokPhysicsDisplayHandler::removeGeometryInternal(this);
  v8 = 0;
  __asm
  {
    vmovss  xmm6, cs:__real@42000000
    vmovss  xmm7, cs:__real@3b808081
    vmovss  xmm8, cs:__real@3f800000
  }
  if ( this->m_displayPoints.m_size > 0 )
  {
    v12 = 0i64;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsi+rcx]
        vmovss  dword ptr [rbp+57h+origin], xmm1
        vmulss  xmm0, xmm6, dword ptr [rsi+rcx+4]
        vmovss  dword ptr [rbp+57h+origin+4], xmm0
        vmulss  xmm2, xmm6, dword ptr [rsi+rcx+8]
        vmovss  dword ptr [rbp+57h+origin+8], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+color], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+color+4], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+color+8], xmm1
        vmovss  dword ptr [rbp+57h+color+0Ch], xmm8
        vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
        vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm0
        vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm8
        vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm8
        vxorps  xmm2, xmm2, xmm2; yaw
      }
      CG_DebugBox(&origin, &bounds, *(float *)&_XMM2, &color, 0, 1);
      ++v8;
      v12 += 32i64;
    }
    while ( v8 < this->m_displayPoints.m_size );
  }
  v27 = 0;
  if ( this->m_displayLines.m_size > 0 )
  {
    v28 = 0i64;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsi+rcx]
        vmovss  dword ptr [rbp+57h+color], xmm1
        vmulss  xmm0, xmm6, dword ptr [rsi+rcx+4]
        vmovss  dword ptr [rbp+57h+color+4], xmm0
        vmulss  xmm2, xmm6, dword ptr [rsi+rcx+8]
        vmovss  dword ptr [rbp+57h+color+8], xmm2
        vmulss  xmm1, xmm6, dword ptr [rsi+rcx+10h]
        vmovss  dword ptr [rbp+57h+origin], xmm1
        vmulss  xmm0, xmm6, dword ptr [rsi+rcx+14h]
        vmovss  dword ptr [rbp+57h+origin+4], xmm0
        vmulss  xmm2, xmm6, dword ptr [rsi+rcx+18h]
        vmovss  dword ptr [rbp+57h+origin+8], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm1
        vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm8
      }
      CG_DebugLine((const vec3_t *)&color, &origin, (const vec4_t *)&bounds, 0, 1);
      ++v27;
      v28 += 48i64;
    }
    while ( v27 < this->m_displayLines.m_size );
  }
  v44 = 0;
  if ( this->m_display3DTexts.m_size > 0 )
  {
    v45 = 0i64;
    __asm { vmovss  xmm9, cs:__real@3f000000 }
    do
    {
      v47 = &this->m_display3DTexts.m_data[v45];
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r9+100h]
        vmovss  dword ptr [rbp+57h+color], xmm1
        vmulss  xmm0, xmm6, dword ptr [r9+104h]
        vmovss  dword ptr [rbp+57h+color+4], xmm0
        vmulss  xmm2, xmm6, dword ptr [r9+108h]
        vmovss  dword ptr [rbp+57h+color+8], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm1
        vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm8
        vmovaps xmm2, xmm9; scale
      }
      CL_AddDebugStringCentered((const vec3_t *)&color, (const vec4_t *)&bounds, *(float *)&_XMM2, v47->m_buffer, 0, 1);
      ++v44;
      ++v45;
    }
    while ( v44 < this->m_display3DTexts.m_size );
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
        v69 = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 45, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, __int64))refreshAllBodies)(m_shapeViewer, g_havokPhysicsWorlds[m_worldId].world, 0xFFFFFFFFi64);
    }
  }
  LeaveCriticalSection(p_m_critSection);
  _R11 = &v73;
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
HavokPhysicsDisplayHandler::updateGeometryTransform
==============
*/
unsigned __int64 HavokPhysicsDisplayHandler::updateGeometryTransform(HavokPhysicsDisplayHandler *this, unsigned __int64 id, const hkTransformf *transform, __int64 a4)
{
  unsigned __int64 def; 
  unsigned __int64 key; 

  key = (unsigned __int64)transform;
  def = 0i64;
  _RDI = a4;
  if ( *hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rdi+10h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rdi+30h]
      vmovups xmmword ptr [rcx+50h], xmm1
    }
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
  hkMemoryRouter *Value; 
  __int64 v22; 
  hkMemoryAllocator *v23; 
  int v24; 
  __int64 v25; 
  _DWORD *v26; 
  __int64 *v27; 
  __int64 v28; 
  __int64 v29; 
  hkMemoryAllocator *v30; 
  __int64 v32; 
  hkMemoryAllocator *v35; 
  __int64 v36; 
  hkMemoryAllocator *v37; 
  int v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  unsigned __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  int v50; 
  __int64 v51; 
  int v55; 
  int v59; 
  __int64 v60; 
  int v64; 
  int v68; 
  hkCriticalSection *v73; 
  unsigned __int64 def; 
  unsigned __int64 v75; 
  unsigned __int64 key; 

  v75 = id;
  v6 = (_DWORD *)id;
  p_m_critSection = (_RTL_CRITICAL_SECTION *)&this->m_critSection;
  v73 = &this->m_critSection;
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
    _RBX = v14 + 112i64 * v13;
    v9[30] = v13 + 1;
    *(_QWORD *)_RBX = -1i64;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rbx+10h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+210h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rbx+30h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rbx+40h], xmm1
    }
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v22 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
    if ( v22 )
    {
      *(_QWORD *)(v22 + 8) = 0i64;
      *(_DWORD *)(v22 + 16) = 0x1FFFF;
      *(_QWORD *)v22 = hkGeometry::`vftable';
      *(_QWORD *)(v22 + 24) = 0i64;
      *(_DWORD *)(v22 + 32) = 0;
      *(_DWORD *)(v22 + 36) = 0x80000000;
      *(_QWORD *)(v22 + 40) = 0i64;
      *(_DWORD *)(v22 + 48) = 0;
      *(_DWORD *)(v22 + 52) = 0x80000000;
    }
    else
    {
      v22 = 0i64;
    }
    *(_QWORD *)(_RBX + 80) = v22;
    v23 = hkMemHeapAllocator();
    *(_DWORD *)(_RBX + 96) = 0;
    v24 = *(_DWORD *)(_RBX + 100);
    if ( v24 >= 0 )
      hkMemoryAllocator::bufFree2(v23, *(void **)(_RBX + 88), 16, v24 & 0x3FFFFFFF);
    *(_QWORD *)(_RBX + 88) = 0i64;
    *(_DWORD *)(_RBX + 100) = 0x80000000;
    v10 = v9[30];
  }
  if ( v10 == 1 && (v25 = *((_QWORD *)v9 + 14), v26 = *(_DWORD **)(v25 + 80), (def = (unsigned __int64)v26) != 0) )
  {
    v27 = (__int64 *)(v26 + 6);
    v28 = *((int *)*a4 + 2);
    v29 = **a4;
    v30 = hkMemHeapAllocator();
    if ( (v26[9] & 0x3FFFFFFF) < (int)v28 )
      hkArrayUtil::_reserve(v30, v26 + 6, v28, 16);
    _RAX = *v27;
    v32 = v28;
    if ( (int)v28 > 0 )
    {
      _RBX = v29 - _RAX;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+rax]
          vmovups xmmword ptr [rax], xmm0
        }
        _RAX += 16i64;
        --v32;
      }
      while ( v32 );
    }
    v26[8] = v28;
    v35 = hkMemHeapAllocator();
    v36 = v25 + 88;
    v37 = hkMemHeapAllocator();
    *(_DWORD *)(v25 + 96) = 0;
    v38 = *(_DWORD *)(v25 + 100);
    if ( v38 >= 0 )
      hkMemoryAllocator::bufFree2(v37, *(void **)v36, 16, v38 & 0x3FFFFFFF);
    *(_QWORD *)v36 = 0i64;
    *(_DWORD *)(v25 + 100) = 0x80000000;
    v39 = v26[12] - 1;
    v40 = v39;
    if ( v39 >= 0 )
    {
      v41 = 16i64 * v39;
      v42 = *(_DWORD *)(v36 + 8);
      v43 = def;
      do
      {
        v44 = *(_QWORD *)(v43 + 40);
        v45 = *(int *)(v44 + v41 + 4);
        LODWORD(def) = *(_DWORD *)(v44 + v41 + 8);
        v46 = 16i64 * *(int *)(v44 + v41);
        key = v46 + *v27;
        if ( v42 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v42 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v42;
        _RCX = key;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
        }
        v50 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v50;
        v51 = 16 * v45;
        key = v51 + *v27;
        if ( v50 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v50 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v50;
        _RCX = key;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
        }
        v55 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v55;
        _R14 = *v27 + v46;
        if ( v55 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v55 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v55;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups xmmword ptr [rax], xmm0
        }
        v59 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v59;
        v60 = 16i64 * (int)def;
        def = v60 + *v27;
        if ( v59 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v59 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v59;
        _RCX = def;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
        }
        v64 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v64;
        _R15 = *v27 + v51;
        if ( v64 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v64 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v64;
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovups xmmword ptr [rax], xmm0
        }
        v68 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v68;
        _R14 = *v27 + v60;
        if ( v68 == (*(_DWORD *)(v36 + 12) & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v35, (void *)v36, 16);
          v68 = *(_DWORD *)(v36 + 8);
        }
        _RAX = *(_QWORD *)v36 + 16i64 * v68;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups xmmword ptr [rax], xmm0
        }
        v42 = *(_DWORD *)(v36 + 8) + 1;
        *(_DWORD *)(v36 + 8) = v42;
        v41 -= 16i64;
        --v40;
      }
      while ( v40 >= 0 );
      v6 = (_DWORD *)v75;
      p_m_critSection = (_RTL_CRITICAL_SECTION *)v73;
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
unsigned __int64 HavokPhysicsDisplayHandler::updateParticleTransforms(HavokPhysicsDisplayHandler *this, unsigned __int64 id, unsigned __int64 updateId, const hkQuaternionf *orientations, const hkVector4f *translations, __int64 numTransforms, unsigned int a7)
{
  _DWORD *v9; 
  __int64 v11; 
  hkMemoryAllocator *v13; 
  int v14; 
  unsigned __int64 def; 
  unsigned __int64 key; 
  hkRotationImpl<float> v23; 

  key = updateId;
  def = 0i64;
  v9 = (_DWORD *)*hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::getWithDefault(&this->m_geoListMap.m_map, &key, &def);
  if ( v9 )
  {
    v9[26] = 0;
    if ( a7 )
    {
      _RSI = numTransforms;
      v11 = a7;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+0A8h+var_48], xmm0
        }
        hkRotationImpl<float>::set(&v23, (const hkQuaternionf *)translations);
        v13 = hkMemHeapAllocator();
        v14 = v9[26];
        if ( v14 == (v9[27] & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v13, v9 + 24, 64);
          v14 = v9[26];
        }
        __asm { vmovups xmm0, xmmword ptr [rsp+0A8h+var_78.baseclass_0.m_col0.m_quad] }
        ++translations;
        _RSI += 16i64;
        _RAX = *((_QWORD *)v9 + 12) + ((__int64)v14 << 6);
        __asm
        {
          vmovups xmmword ptr [rax], xmm0
          vmovups xmm1, xmmword ptr [rsp+0A8h+var_78.baseclass_0.m_col1.m_quad]
          vmovups xmmword ptr [rax+10h], xmm1
          vmovups xmm0, xmmword ptr [rsp+0A8h+var_78.baseclass_0.m_col2.m_quad]
          vmovups xmmword ptr [rax+20h], xmm0
          vmovups xmm1, [rsp+0A8h+var_48]
          vmovups xmmword ptr [rax+30h], xmm1
        }
        ++v9[26];
        --v11;
      }
      while ( v11 );
    }
  }
  *(_DWORD *)id = 0;
  return id;
}

