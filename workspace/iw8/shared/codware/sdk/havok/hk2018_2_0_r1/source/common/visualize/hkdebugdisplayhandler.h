/*
==============
hkDebugDisplayHandler::updateGeometryMaterialData
==============
*/

hkResult __fastcall hkDebugDisplayHandler::updateGeometryMaterialData(hkDebugDisplayHandler *this, unsigned __int64 id, const hkArray<hkDisplayMaterialDatas *,hkContainerHeapAllocator> *newDatas)
{
  return ?updateGeometryMaterialData@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBV?$hkArray@PEAUhkDisplayMaterialDatas@@UhkContainerHeapAllocator@@@@@Z(this, id, newDatas);
}

/*
==============
hkDebugDisplayHandler::updateParticleTransforms
==============
*/

hkResult __fastcall hkDebugDisplayHandler::updateParticleTransforms(hkDebugDisplayHandler *this, unsigned __int64 id, int updateId, const hkQuaternionf *orientations, const hkVector4f *translations, unsigned int numTransforms)
{
  return ?updateParticleTransforms@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KHPEBVhkQuaternionf@@PEBVhkVector4f@@I@Z(this, id, updateId, orientations, translations, numTransforms);
}

/*
==============
hkDebugDisplayHandler::displayPointEx
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayPointEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, unsigned int color, hk1PointDisplayStyle::Enum style, float scale, int tag)
{
  return ?displayPointEx@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@IW4Enum@hk1PointDisplayStyle@@MH@Z(this, id, a, color, style, scale, tag);
}

/*
==============
hkDebugDisplayHandler::updateCamera
==============
*/

hkResult __fastcall hkDebugDisplayHandler::updateCamera(hkDebugDisplayHandler *this, const char *name, hkDisplayCamera *camera)
{
  return ?updateCamera@hkDebugDisplayHandler@@UEAA?AUhkResult@@PEBDAEAUhkDisplayCamera@@@Z(this, name, camera);
}

/*
==============
hkDebugDisplayHandler::displayText2d
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayText2d(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos, float sizeScale, unsigned int color, int tag)
{
  return ?displayText2d@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KPEBDAEBVhkVector4f@@MIH@Z(this, id, text, pos, sizeScale, color, tag);
}

/*
==============
hkDebugDisplayHandler::clearGeometryFlagBits
==============
*/

hkResult __fastcall hkDebugDisplayHandler::clearGeometryFlagBits(hkDebugDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  return ?clearGeometryFlagBits@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KUhkDisplayGeometryFlags@@@Z(this, id, flagBits);
}

/*
==============
hkDebugDisplayHandler::setGeometryFlagBits
==============
*/

hkResult __fastcall hkDebugDisplayHandler::setGeometryFlagBits(hkDebugDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  return ?setGeometryFlagBits@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KUhkDisplayGeometryFlags@@@Z(this, id, flagBits);
}

/*
==============
hkDebugDisplayHandler::getDeprecatedInterface
==============
*/

hkDeprecatedDebugDisplayHandlerInterface *__fastcall hkDebugDisplayHandler::getDeprecatedInterface(hkDebugDisplayHandler *this)
{
  return ?getDeprecatedInterface@hkDebugDisplayHandler@@UEAAPEAVhkDeprecatedDebugDisplayHandlerInterface@@XZ(this);
}

/*
==============
hkDebugDisplayHandler::displayPoint2d
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayPoint2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *position, unsigned int color, int tag)
{
  return ?displayPoint2d@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@IH@Z(this, id, position, color, tag);
}

/*
==============
hkDebugDisplayHandler::display2Points
==============
*/

hkResult __fastcall hkDebugDisplayHandler::display2Points(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, unsigned int color, int tag)
{
  return ?display2Points@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@1IH@Z(this, id, a, b, color, tag);
}

/*
==============
hkDebugDisplayHandler::displayLine2d
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayLine2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *start, const hkVector4f *end, unsigned int color, int tag)
{
  return ?displayLine2d@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@1IH@Z(this, id, start, end, color, tag);
}

/*
==============
hkDebugDisplayHandler::display3PointsEx
==============
*/

hkResult __fastcall hkDebugDisplayHandler::display3PointsEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, const hkVector4f *c, unsigned int color, hk3PointDisplayStyle::Enum style, int tag)
{
  return ?display3PointsEx@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@11IW4Enum@hk3PointDisplayStyle@@H@Z(this, id, a, b, c, color, style, tag);
}

/*
==============
hkDebugDisplayHandler::display3dText
==============
*/

hkResult __fastcall hkDebugDisplayHandler::display3dText(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos, unsigned int color, int tag)
{
  return ?display3dText@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KPEBDAEBVhkVector4f@@IH@Z(this, id, text, pos, color, tag);
}

/*
==============
hkDebugDisplayHandler::endFrame
==============
*/

hkResult __fastcall hkDebugDisplayHandler::endFrame(hkDebugDisplayHandler *this)
{
  return ?endFrame@hkDebugDisplayHandler@@UEAA?AUhkResult@@XZ(this);
}

/*
==============
hkDebugDisplayHandler::removeGeometry
==============
*/

hkResult __fastcall hkDebugDisplayHandler::removeGeometry(hkDebugDisplayHandler *this, unsigned __int64 id)
{
  return ?removeGeometry@hkDebugDisplayHandler@@UEAA?AUhkResult@@_K@Z(this, id);
}

/*
==============
hkDebugDisplayHandler::unlockForUpdate
==============
*/

void __fastcall hkDebugDisplayHandler::unlockForUpdate(hkDebugDisplayHandler *this)
{
  ?unlockForUpdate@hkDebugDisplayHandler@@UEAAXXZ(this);
}

/*
==============
hkDebugDisplayHandler::~hkDebugDisplayHandler
==============
*/

void __fastcall hkDebugDisplayHandler::~hkDebugDisplayHandler(hkDebugDisplayHandler *this)
{
  ??1hkDebugDisplayHandler@@UEAA@XZ(this);
}

/*
==============
hkDebugDisplayHandler::display3Points
==============
*/

hkResult __fastcall hkDebugDisplayHandler::display3Points(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, const hkVector4f *c, unsigned int color, int tag)
{
  return ?display3Points@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@11IH@Z(this, id, a, b, c, color, tag);
}

/*
==============
hkDebugDisplayHandler::displayText
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayText(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, unsigned int color, int tag)
{
  return ?displayText@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KPEBDIH@Z(this, id, text, color, tag);
}

/*
==============
hkDebugDisplayHandler::displayTriangle2d
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayTriangle2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, const hkVector4f *c, unsigned int color, int tag)
{
  return ?displayTriangle2d@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@11IH@Z(this, id, a, b, c, color, tag);
}

/*
==============
hkDebugDisplayHandler::displayPoint
==============
*/

hkResult __fastcall hkDebugDisplayHandler::displayPoint(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, unsigned int color, int tag)
{
  return ?displayPoint@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@IH@Z(this, id, a, color, tag);
}

/*
==============
hkDebugDisplayHandler::updateGeometryVerts
==============
*/

hkResult __fastcall hkDebugDisplayHandler::updateGeometryVerts(hkDebugDisplayHandler *this, unsigned __int64 id, const hkArray<hkArray<hkVector4f,hkContainerHeapAllocator>,hkContainerHeapAllocator> *newVerts)
{
  return ?updateGeometryVerts@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBV?$hkArray@V?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@@Z(this, id, newVerts);
}

/*
==============
hkDebugDisplayHandler::addGeometryInstanceEx
==============
*/

hkResult __fastcall hkDebugDisplayHandler::addGeometryInstanceEx(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, const unsigned int color, const hkArrayBase<hkGeometryDecorations *> *decorations, int tag)
{
  return ?addGeometryInstanceEx@hkDebugDisplayHandler@@UEAA?AUhkResult@@_K0AEBVhkTransformf@@IPEBV?$hkArrayBase@PEAUhkGeometryDecorations@@@@H@Z(this, id, originalGeomId, transform, color, decorations, tag);
}

/*
==============
hkDebugDisplayHandler::flushDisplay
==============
*/

hkResult __fastcall hkDebugDisplayHandler::flushDisplay(hkDebugDisplayHandler *this, bool clearDisplayGeometry)
{
  return ?flushDisplay@hkDebugDisplayHandler@@UEAA?AUhkResult@@_N@Z(this, clearDisplayGeometry);
}

/*
==============
hkDebugDisplayHandler::lockForUpdate
==============
*/

void __fastcall hkDebugDisplayHandler::lockForUpdate(hkDebugDisplayHandler *this)
{
  ?lockForUpdate@hkDebugDisplayHandler@@UEAAXXZ(this);
}

/*
==============
hkDebugDisplayHandler::setGeometryAlpha
==============
*/

hkResult __fastcall hkDebugDisplayHandler::setGeometryAlpha(hkDebugDisplayHandler *this, unsigned __int64 id, float alpha)
{
  return ?setGeometryAlpha@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KM@Z(this, id, alpha);
}

/*
==============
hkDebugDisplayHandler::removeCamera
==============
*/

hkResult __fastcall hkDebugDisplayHandler::removeCamera(hkDebugDisplayHandler *this, const char *name)
{
  return ?removeCamera@hkDebugDisplayHandler@@UEAA?AUhkResult@@PEBD@Z(this, name);
}

/*
==============
hkDebugDisplayHandler::updateGeometryTransform
==============
*/

hkResult __fastcall hkDebugDisplayHandler::updateGeometryTransform(hkDebugDisplayHandler *this, unsigned __int64 id, const hkTransformf *transform)
{
  return ?updateGeometryTransform@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkTransformf@@@Z(this, id, transform);
}

/*
==============
hkDebugDisplayHandler::addGeometryInstance
==============
*/

hkResult __fastcall hkDebugDisplayHandler::addGeometryInstance(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform, int tag)
{
  return ?addGeometryInstance@hkDebugDisplayHandler@@UEAA?AUhkResult@@_K0AEBVhkTransformf@@H@Z(this, id, originalGeomId, transform, tag);
}

/*
==============
hkDebugDisplayHandler::setGeometryColor
==============
*/

hkResult __fastcall hkDebugDisplayHandler::setGeometryColor(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned int color)
{
  return ?setGeometryColor@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KI@Z(this, id, color);
}

/*
==============
hkDebugDisplayHandler::display2PointsEx
==============
*/

hkResult __fastcall hkDebugDisplayHandler::display2PointsEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, unsigned int color, hk2PointDisplayStyle::Enum style, float thickness, int tag)
{
  return ?display2PointsEx@hkDebugDisplayHandler@@UEAA?AUhkResult@@_KAEBVhkVector4f@@1IW4Enum@hk2PointDisplayStyle@@MH@Z(this, id, a, b, color, style, thickness, tag);
}

/*
==============
hkDebugDisplayHandler::setDisplayOptions
==============
*/

hkResult __fastcall hkDebugDisplayHandler::setDisplayOptions(hkDebugDisplayHandler *this, hkDebugDisplayHandler::Options *options)
{
  return ?setDisplayOptions@hkDebugDisplayHandler@@UEAA?AUhkResult@@AEAUOptions@1@@Z(this, options);
}

/*
==============
hkDebugDisplayHandler::~hkDebugDisplayHandler
==============
*/
void hkDebugDisplayHandler::~hkDebugDisplayHandler(hkDebugDisplayHandler *this)
{
  this->__vftable = (hkDebugDisplayHandler_vtbl *)hkDebugDisplayHandler::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
hkDebugDisplayHandler::addGeometryInstance
==============
*/
unsigned __int64 hkDebugDisplayHandler::addGeometryInstance(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::addGeometryInstanceEx
==============
*/
unsigned __int64 hkDebugDisplayHandler::addGeometryInstanceEx(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned __int64 originalGeomId, const hkTransformf *transform)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::clearGeometryFlagBits
==============
*/
unsigned __int64 hkDebugDisplayHandler::clearGeometryFlagBits(hkDebugDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::display2Points
==============
*/
unsigned __int64 hkDebugDisplayHandler::display2Points(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, __int64 color, int tag, int a7)
{
  int v11; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+var_20], xmm0
  }
  ((void (__fastcall *)(hkDebugDisplayHandler *, unsigned __int64, const hkVector4f *, const hkVector4f *, __int64, int, _DWORD, int, int))this->display2PointsEx)(this, id, a, b, color, tag, 0, v11, a7);
  return id;
}

/*
==============
hkDebugDisplayHandler::display2PointsEx
==============
*/
unsigned __int64 hkDebugDisplayHandler::display2PointsEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::display3Points
==============
*/
unsigned __int64 hkDebugDisplayHandler::display3Points(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b, const hkVector4f *c, __int64 color, int tag, int a8)
{
  ((void (__fastcall *)(hkDebugDisplayHandler *, unsigned __int64, const hkVector4f *, const hkVector4f *, const hkVector4f *, __int64, int, _DWORD, int))this->display3PointsEx)(this, id, a, b, c, color, tag, 0, a8);
  return id;
}

/*
==============
hkDebugDisplayHandler::display3PointsEx
==============
*/
unsigned __int64 hkDebugDisplayHandler::display3PointsEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::display3dText
==============
*/
unsigned __int64 hkDebugDisplayHandler::display3dText(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayLine2d
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayLine2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *start, const hkVector4f *end)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayPoint2d
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayPoint2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *position, unsigned int color)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayPoint
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayPoint(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, __int64 color, int tag, int a6)
{
  int v10; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+48h+var_18], xmm0
  }
  ((void (__fastcall *)(hkDebugDisplayHandler *, unsigned __int64, const hkVector4f *, __int64, int, _DWORD, int, int))this->displayPointEx)(this, id, a, color, tag, 0, v10, a6);
  return id;
}

/*
==============
hkDebugDisplayHandler::displayPointEx
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayPointEx(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, unsigned int color)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayText2d
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayText2d(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, const hkVector4f *pos)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayText
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayText(hkDebugDisplayHandler *this, unsigned __int64 id, const char *text, unsigned int color)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::displayTriangle2d
==============
*/
unsigned __int64 hkDebugDisplayHandler::displayTriangle2d(hkDebugDisplayHandler *this, unsigned __int64 id, const hkVector4f *a, const hkVector4f *b)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::endFrame
==============
*/
_DWORD *hkDebugDisplayHandler::endFrame(hkDebugDisplayHandler *this, _DWORD *a2)
{
  *a2 = -2147220992;
  return a2;
}

/*
==============
hkDebugDisplayHandler::flushDisplay
==============
*/
_DWORD *hkDebugDisplayHandler::flushDisplay(hkDebugDisplayHandler *this, _DWORD *clearDisplayGeometry)
{
  *clearDisplayGeometry = -2147220992;
  return clearDisplayGeometry;
}

/*
==============
hkDebugDisplayHandler::getDeprecatedInterface
==============
*/
hkDeprecatedDebugDisplayHandlerInterface *hkDebugDisplayHandler::getDeprecatedInterface(hkDebugDisplayHandler *this)
{
  return 0i64;
}

/*
==============
hkDebugDisplayHandler::lockForUpdate
==============
*/
void hkDebugDisplayHandler::lockForUpdate(hkDebugDisplayHandler *this)
{
  ;
}

/*
==============
hkDebugDisplayHandler::removeCamera
==============
*/
const char *hkDebugDisplayHandler::removeCamera(hkDebugDisplayHandler *this, const char *name)
{
  *(_DWORD *)name = -2147220992;
  return name;
}

/*
==============
hkDebugDisplayHandler::removeGeometry
==============
*/
unsigned __int64 hkDebugDisplayHandler::removeGeometry(hkDebugDisplayHandler *this, unsigned __int64 id)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::setDisplayOptions
==============
*/
hkDebugDisplayHandler::Options *hkDebugDisplayHandler::setDisplayOptions(hkDebugDisplayHandler *this, hkDebugDisplayHandler::Options *options)
{
  options->m_up.m_quad.m128_i32[0] = -2147220992;
  return options;
}

/*
==============
hkDebugDisplayHandler::setGeometryAlpha
==============
*/
unsigned __int64 hkDebugDisplayHandler::setGeometryAlpha(hkDebugDisplayHandler *this, unsigned __int64 id, float alpha)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::setGeometryColor
==============
*/
unsigned __int64 hkDebugDisplayHandler::setGeometryColor(hkDebugDisplayHandler *this, unsigned __int64 id, unsigned int color)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::setGeometryFlagBits
==============
*/
unsigned __int64 hkDebugDisplayHandler::setGeometryFlagBits(hkDebugDisplayHandler *this, unsigned __int64 id, hkDisplayGeometryFlags flagBits)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::unlockForUpdate
==============
*/
void hkDebugDisplayHandler::unlockForUpdate(hkDebugDisplayHandler *this)
{
  ;
}

/*
==============
hkDebugDisplayHandler::updateCamera
==============
*/
const char *hkDebugDisplayHandler::updateCamera(hkDebugDisplayHandler *this, const char *name, hkDisplayCamera *camera)
{
  *(_DWORD *)name = -2147220992;
  return name;
}

/*
==============
hkDebugDisplayHandler::updateGeometryMaterialData
==============
*/
unsigned __int64 hkDebugDisplayHandler::updateGeometryMaterialData(hkDebugDisplayHandler *this, unsigned __int64 id, const hkArray<hkDisplayMaterialDatas *,hkContainerHeapAllocator> *newDatas)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::updateGeometryTransform
==============
*/
unsigned __int64 hkDebugDisplayHandler::updateGeometryTransform(hkDebugDisplayHandler *this, unsigned __int64 id, const hkTransformf *transform)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::updateGeometryVerts
==============
*/
unsigned __int64 hkDebugDisplayHandler::updateGeometryVerts(hkDebugDisplayHandler *this, unsigned __int64 id, const hkArray<hkArray<hkVector4f,hkContainerHeapAllocator>,hkContainerHeapAllocator> *newVerts)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

/*
==============
hkDebugDisplayHandler::updateParticleTransforms
==============
*/
unsigned __int64 hkDebugDisplayHandler::updateParticleTransforms(hkDebugDisplayHandler *this, unsigned __int64 id, int updateId, const hkQuaternionf *orientations)
{
  *(_DWORD *)id = -2147220992;
  return id;
}

