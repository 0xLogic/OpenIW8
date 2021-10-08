/*
==============
hkThreadPool::~hkThreadPool
==============
*/

void __fastcall hkThreadPool::~hkThreadPool(hkThreadPool *this)
{
  ??1hkThreadPool@@UEAA@XZ(this);
}

/*
==============
hkThreadPool::isProcessing
==============
*/

bool __fastcall hkThreadPool::isProcessing(hkThreadPool *this)
{
  return ?isProcessing@hkThreadPool@@UEBA_NXZ(this);
}

/*
==============
hkThreadPool::~hkThreadPool
==============
*/
void hkThreadPool::~hkThreadPool(hkThreadPool *this)
{
  this->__vftable = (hkThreadPool_vtbl *)&hkThreadPool::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
hkThreadPool::isProcessing
==============
*/
bool hkThreadPool::isProcessing(hkThreadPool *this)
{
  hkJobQueue *v2; 

  if ( this->getProcessingTaskQueue(this) || (v2 = this->getProcessingJobQueue(this)) != NULL )
    LOBYTE(v2) = 1;
  return (char)v2;
}

