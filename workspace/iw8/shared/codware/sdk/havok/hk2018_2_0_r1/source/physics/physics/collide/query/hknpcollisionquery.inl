/*
==============
hknpCollisionQueryContext::~hknpCollisionQueryContext
==============
*/

void __fastcall hknpCollisionQueryContext::~hknpCollisionQueryContext(hknpCollisionQueryContext *this)
{
  ??1hknpCollisionQueryContext@@QEAA@XZ(this);
}

/*
==============
hknpCollisionQueryContext::~hknpCollisionQueryContext
==============
*/
void hknpCollisionQueryContext::~hknpCollisionQueryContext(hknpCollisionQueryContext *this)
{
  if ( !this->m_externallyAllocatedTriangles )
  {
    hkReferencedObject::removeReference(this->m_queryTriangle);
    hkReferencedObject::removeReference(this->m_targetTriangle);
  }
}

