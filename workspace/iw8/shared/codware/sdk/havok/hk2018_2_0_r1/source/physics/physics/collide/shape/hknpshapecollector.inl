/*
==============
hknpShapeCollector::~hknpShapeCollector
==============
*/

void __fastcall hknpShapeCollector::~hknpShapeCollector(hknpShapeCollector *this)
{
  ??1hknpShapeCollector@@QEAA@XZ(this);
}

/*
==============
hknpShapeCollector::~hknpShapeCollector
==============
*/
void hknpShapeCollector::~hknpShapeCollector(hknpShapeCollector *this)
{
  hknpShape *m_shape; 

  this->m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
  m_shape = this->m_internal.m_shapeBuffer.m_shape;
  if ( m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))m_shape->~hkBaseObject)(m_shape, 0i64);
}

