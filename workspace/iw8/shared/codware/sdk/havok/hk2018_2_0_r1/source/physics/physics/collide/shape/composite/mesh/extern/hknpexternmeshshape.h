/*
==============
hknpExternMeshShapeGeometry::getNumQuads
==============
*/

int __fastcall hknpExternMeshShapeGeometry::getNumQuads(hknpExternMeshShapeGeometry *this)
{
  return ?getNumQuads@hknpExternMeshShapeGeometry@@UEBAHXZ(this);
}

/*
==============
hknpExternMeshShapeGeometry::getTriangleShapeTag
==============
*/

unsigned __int16 __fastcall hknpExternMeshShapeGeometry::getTriangleShapeTag(hknpExternMeshShapeGeometry *this, int index)
{
  return ?getTriangleShapeTag@hknpExternMeshShapeGeometry@@UEBAGH@Z(this, index);
}

/*
==============
hknpExternMeshShapeGeometry::getQuadVertices
==============
*/

void __fastcall hknpExternMeshShapeGeometry::getQuadVertices(hknpExternMeshShapeGeometry *this, int index, hkVector4f *verticesOut)
{
  ?getQuadVertices@hknpExternMeshShapeGeometry@@UEBAXHPEAVhkVector4f@@@Z(this, index, verticesOut);
}

/*
==============
hknpExternMeshShape::operator delete
==============
*/

void __fastcall hknpExternMeshShape::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hknpExternMeshShape@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hknpExternMeshShapeGeometry::getTriangleFlags
==============
*/

int __fastcall hknpExternMeshShapeGeometry::getTriangleFlags(hknpExternMeshShapeGeometry *this, int index)
{
  return ?getTriangleFlags@hknpExternMeshShapeGeometry@@UEBAHH@Z(this, index);
}

/*
==============
hknpExternMeshShapeGeometry::getPrimitiveFlags
==============
*/

int __fastcall hknpExternMeshShapeGeometry::getPrimitiveFlags(hknpExternMeshShapeGeometry *this, int index)
{
  return ?getPrimitiveFlags@hknpExternMeshShapeGeometry@@UEBAHH@Z(this, index);
}

/*
==============
hknpExternMeshShapeGeometry::hasSurfaceVelocity
==============
*/

bool __fastcall hknpExternMeshShapeGeometry::hasSurfaceVelocity(hknpExternMeshShapeGeometry *this)
{
  return ?hasSurfaceVelocity@hknpExternMeshShapeGeometry@@UEBA_NXZ(this);
}

/*
==============
hknpExternMeshShapeGeometry::getQuadFlags
==============
*/

int __fastcall hknpExternMeshShapeGeometry::getQuadFlags(hknpExternMeshShapeGeometry *this, int index)
{
  return ?getQuadFlags@hknpExternMeshShapeGeometry@@UEBAHH@Z(this, index);
}

/*
==============
hknpExternMeshShapeGeometry::getNumPrimitives
==============
*/

int __fastcall hknpExternMeshShapeGeometry::getNumPrimitives(hknpExternMeshShapeGeometry *this)
{
  return ?getNumPrimitives@hknpExternMeshShapeGeometry@@UEBAHXZ(this);
}

/*
==============
hknpExternMeshShapeGeometry::getQuadShapeTag
==============
*/

unsigned __int16 __fastcall hknpExternMeshShapeGeometry::getQuadShapeTag(hknpExternMeshShapeGeometry *this, int index)
{
  return ?getQuadShapeTag@hknpExternMeshShapeGeometry@@UEBAGH@Z(this, index);
}

/*
==============
hknpExternMeshShape::operator delete
==============
*/
void hknpExternMeshShape::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    if ( *((_WORD *)p + 8) != 0xFFFF )
      v2 = *((unsigned __int16 *)p + 8);
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hknpExternMeshShapeGeometry::getNumPrimitives
==============
*/
__int64 hknpExternMeshShapeGeometry::getNumPrimitives(hknpExternMeshShapeGeometry *this)
{
  int v2; 

  v2 = this->getNumQuads(this);
  return v2 + (unsigned int)this->getNumTriangles(this);
}

/*
==============
hknpExternMeshShapeGeometry::getNumQuads
==============
*/
__int64 hknpExternMeshShapeGeometry::getNumQuads(hknpExternMeshShapeGeometry *this)
{
  return 0i64;
}

/*
==============
hknpExternMeshShapeGeometry::getPrimitiveFlags
==============
*/
__int64 hknpExternMeshShapeGeometry::getPrimitiveFlags(hknpExternMeshShapeGeometry *this, int index)
{
  int v4; 
  hknpExternMeshShapeGeometry_vtbl *v5; 
  int v7; 

  v4 = this->getNumTriangles(this);
  v5 = this->__vftable;
  if ( index < v4 )
    return ((__int64 (__fastcall *)(hknpExternMeshShapeGeometry *, _QWORD))v5->getTriangleFlags)(this, (unsigned int)index);
  v7 = v5->getNumTriangles(this);
  return ((__int64 (__fastcall *)(hknpExternMeshShapeGeometry *, _QWORD))v5->getQuadFlags)(this, (unsigned int)(index - v7));
}

/*
==============
hknpExternMeshShapeGeometry::getQuadFlags
==============
*/
__int64 hknpExternMeshShapeGeometry::getQuadFlags(hknpExternMeshShapeGeometry *this, int index)
{
  return 1i64;
}

/*
==============
hknpExternMeshShapeGeometry::getQuadShapeTag
==============
*/
__int64 hknpExternMeshShapeGeometry::getQuadShapeTag(hknpExternMeshShapeGeometry *this, int index)
{
  hkErrStream v3; 
  char buf[512]; 

  hkErrStream::hkErrStream(&v3, buf, 512);
  hkOstream::operator<<(&v3, "Not implemented.");
  if ( hkErrorFwd::messageError(-648760481, buf, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\physics\\physics\\collide\\shape\\composite\\mesh\\extern\\hknpexternmeshshape.h", 82) )
    __debugbreak();
  hkErrStream::~hkErrStream(&v3);
  return 0i64;
}

/*
==============
hknpExternMeshShapeGeometry::getQuadVertices
==============
*/
void hknpExternMeshShapeGeometry::getQuadVertices(hknpExternMeshShapeGeometry *this, int index, hkVector4f *verticesOut)
{
  hkErrStream v3; 
  char buf[512]; 

  hkErrStream::hkErrStream(&v3, buf, 512);
  hkOstream::operator<<(&v3, "Not implemented.");
  if ( hkErrorFwd::messageError(-648760481, buf, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\physics\\physics\\collide\\shape\\composite\\mesh\\extern\\hknpexternmeshshape.h", 79) )
    __debugbreak();
  hkErrStream::~hkErrStream(&v3);
}

/*
==============
hknpExternMeshShapeGeometry::getTriangleFlags
==============
*/
__int64 hknpExternMeshShapeGeometry::getTriangleFlags(hknpExternMeshShapeGeometry *this, int index)
{
  return 6i64;
}

/*
==============
hknpExternMeshShapeGeometry::getTriangleShapeTag
==============
*/
__int64 hknpExternMeshShapeGeometry::getTriangleShapeTag(hknpExternMeshShapeGeometry *this, int index)
{
  return 0xFFFFi64;
}

/*
==============
hknpExternMeshShapeGeometry::hasSurfaceVelocity
==============
*/
bool hknpExternMeshShapeGeometry::hasSurfaceVelocity(hknpExternMeshShapeGeometry *this)
{
  return 0;
}

