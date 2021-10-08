/*
==============
hknpShapeBuffer::~hknpShapeBuffer
==============
*/

void __fastcall hknpShapeBuffer::~hknpShapeBuffer(hknpShapeBuffer *this)
{
  ??1hknpShapeBuffer@@UEAA@XZ(this);
}

/*
==============
hknpShapeBuffer::~hknpShapeBuffer
==============
*/
void hknpShapeBuffer::~hknpShapeBuffer(hknpShapeBuffer *this)
{
  hknpShape *m_shape; 

  this->__vftable = (hknpShapeBuffer_vtbl *)hknpShapeBuffer::`vftable';
  m_shape = this->m_shape;
  if ( m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))m_shape->~hkBaseObject)(m_shape, 0i64);
}

