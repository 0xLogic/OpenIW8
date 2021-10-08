/*
==============
hkRefPtr<hkServerObjectHandler>::moveAssign<hkServerObjectHandler>
==============
*/

void __fastcall hkRefPtr<hkServerObjectHandler>::moveAssign<hkServerObjectHandler>(hkRefPtr<hkServerObjectHandler> *this, hkRefPtr<hkServerObjectHandler> *rp)
{
  ??$moveAssign@VhkServerObjectHandler@@@?$hkRefPtr@VhkServerObjectHandler@@@@AEAAX$$QEAV0@@Z(this, rp);
}

/*
==============
hkRefPtr<hkIo::Detail::WriteBufferImpl>::~hkRefPtr<hkIo::Detail::WriteBufferImpl>
==============
*/

void __fastcall hkRefPtr<hkIo::Detail::WriteBufferImpl>::~hkRefPtr<hkIo::Detail::WriteBufferImpl>(hkRefPtr<hkIo::Detail::WriteBufferImpl> *this)
{
  ??1?$hkRefPtr@UWriteBufferImpl@Detail@hkIo@@@@QEAA@XZ(this);
}

/*
==============
hkRefPtr<hknpRefDragProperties>::~hkRefPtr<hknpRefDragProperties>
==============
*/

void __fastcall hkRefPtr<hknpRefDragProperties>::~hkRefPtr<hknpRefDragProperties>(hkRefPtr<hknpRefDragProperties> *this)
{
  ??1?$hkRefPtr@UhknpRefDragProperties@@@@QEAA@XZ(this);
}

/*
==============
hkRefPtr<hknpRefMassDistribution>::~hkRefPtr<hknpRefMassDistribution>
==============
*/

void __fastcall hkRefPtr<hknpRefMassDistribution>::~hkRefPtr<hknpRefMassDistribution>(hkRefPtr<hknpRefMassDistribution> *this)
{
  ??1?$hkRefPtr@UhknpRefMassDistribution@@@@QEAA@XZ(this);
}

/*
==============
hkRefPtr<hkServerObjectSerializer>::~hkRefPtr<hkServerObjectSerializer>
==============
*/

void __fastcall hkRefPtr<hkServerObjectSerializer>::~hkRefPtr<hkServerObjectSerializer>(hkRefPtr<hkServerObjectSerializer> *this)
{
  ??1?$hkRefPtr@VhkServerObjectSerializer@@@@QEAA@XZ(this);
}

/*
==============
hkRefPtr<hkServerObjectHandler>::~hkRefPtr<hkServerObjectHandler>
==============
*/

void __fastcall hkRefPtr<hkServerObjectHandler>::~hkRefPtr<hkServerObjectHandler>(hkRefPtr<hkServerObjectHandler> *this)
{
  ??1?$hkRefPtr@VhkServerObjectHandler@@@@QEAA@XZ(this);
}

/*
==============
hkRefPtr<hkIo::Detail::WriteBufferImpl>::~hkRefPtr<hkIo::Detail::WriteBufferImpl>
==============
*/
void hkRefPtr<hkIo::Detail::WriteBufferImpl>::~hkRefPtr<hkIo::Detail::WriteBufferImpl>(hkRefPtr<hkIo::Detail::WriteBufferImpl> *this)
{
  hkIo::Detail::WriteBufferImpl *m_ptr; 

  m_ptr = this->m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
}

/*
==============
hkRefPtr<hknpRefDragProperties>::~hkRefPtr<hknpRefDragProperties>
==============
*/
void hkRefPtr<hknpRefDragProperties>::~hkRefPtr<hknpRefDragProperties>(hkRefPtr<hknpRefDragProperties> *this)
{
  hknpRefDragProperties *m_ptr; 

  m_ptr = this->m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
}

/*
==============
hkRefPtr<hknpRefMassDistribution>::~hkRefPtr<hknpRefMassDistribution>
==============
*/
void hkRefPtr<hknpRefMassDistribution>::~hkRefPtr<hknpRefMassDistribution>(hkRefPtr<hknpRefMassDistribution> *this)
{
  hknpRefMassDistribution *m_ptr; 

  m_ptr = this->m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
}

/*
==============
hkRefPtr<hkServerObjectHandler>::moveAssign<hkServerObjectHandler>
==============
*/
void hkRefPtr<hkServerObjectHandler>::moveAssign<hkServerObjectHandler>(hkRefPtr<hkServerObjectHandler> *this, hkRefPtr<hkServerObjectHandler> *rp)
{
  hkServerObjectHandler *m_ptr; 
  hkServerObjectHandler *v4; 

  m_ptr = rp->m_ptr;
  rp->m_ptr = NULL;
  v4 = this->m_ptr;
  if ( v4 )
    hkReferencedObject::removeReference(v4);
  this->m_ptr = m_ptr;
}

/*
==============
hkRefPtr<hkServerObjectHandler>::~hkRefPtr<hkServerObjectHandler>
==============
*/
void hkRefPtr<hkServerObjectHandler>::~hkRefPtr<hkServerObjectHandler>(hkRefPtr<hkServerObjectHandler> *this)
{
  hkServerObjectHandler *m_ptr; 

  m_ptr = this->m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
}

/*
==============
hkRefPtr<hkServerObjectSerializer>::~hkRefPtr<hkServerObjectSerializer>
==============
*/
void hkRefPtr<hkServerObjectSerializer>::~hkRefPtr<hkServerObjectSerializer>(hkRefPtr<hkServerObjectSerializer> *this)
{
  hkServerObjectSerializer *m_ptr; 

  m_ptr = this->m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
}

