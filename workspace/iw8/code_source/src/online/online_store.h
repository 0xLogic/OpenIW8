/*
==============
Online_Store::~Online_Store
==============
*/

void __fastcall Online_Store::~Online_Store(Online_Store *this)
{
  ??1Online_Store@@UEAA@XZ(this);
}

/*
==============
Online_Store::~Online_Store
==============
*/
void Online_Store::~Online_Store(Online_Store *this)
{
  this->__vftable = (Online_Store_vtbl *)&Online_Store::`vftable';
  TaskCreateRequest::~TaskCreateRequest(&this->m_recommendationRequestTask);
  bdMemory::deallocate(*((void **)&this->m_recommendationsResponse.__vftable + 2));
  *((_QWORD *)&this->m_recommendationsResponse.__vftable + 2) = 0i64;
  *((_QWORD *)&this->m_recommendationsResponse.__vftable + 3) = 0i64;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_recommendationsResponse.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)this->m_recommendationsResponse.gap20);
  bdMemory::deallocate(this->m_recommendationsRequest.m_locationCounts.m_data);
  this->m_recommendationsRequest.m_locationCounts.m_data = NULL;
  *(_QWORD *)&this->m_recommendationsRequest.m_locationCounts.m_capacity = 0i64;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_recommendationsRequest.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)this->m_recommendationsRequest.gap48);
  `eh vector destructor iterator'(this->m_responseObjects, 0xDC8ui64, 0x1Eui64, (void (__fastcall *)(void *))bdObjectStoreErrorWrappedObject::~bdObjectStoreErrorWrappedObject);
  `eh vector destructor iterator'(this->m_getStoreResponse, 0x2068ui64, 3ui64, (void (__fastcall *)(void *))bdObjectStoreGetPublisherObjectsResponse::`vbase destructor);
}

