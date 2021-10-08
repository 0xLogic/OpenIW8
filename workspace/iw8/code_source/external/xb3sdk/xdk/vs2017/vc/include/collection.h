/*
==============
Platform::Collections::Details::IncrementCounter
==============
*/

void __fastcall Platform::Collections::Details::IncrementCounter(std::shared_ptr<unsigned int> *ctr)
{
  ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z(ctr);
}

/*
==============
Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs
==============
*/

void __fastcall Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs(Platform::Collections::Details::VectorChangedEventArgs *this, Windows::Foundation::Collections::CollectionChange change, unsigned int index)
{
  ??0VectorChangedEventArgs@Details@Collections@Platform@@QE$AAA@W4CollectionChange@2Foundation@Windows@@I@Z(this, change, index);
}

/*
==============
Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs
==============
*/
void Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs(Platform::Collections::Details::VectorChangedEventArgs *this, Windows::Foundation::Collections::CollectionChange change, unsigned int index)
{
  Platform::Object::Object(&this->Platform::Object);
  this->Windows::Foundation::Collections::IVectorChangedEventArgs::Platform::Object::__vftable = (Platform::Collections::Details::VectorChangedEventArgs_vtbl *)&Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Windows::Foundation::Collections::IVectorChangedEventArgs'};
  this->Platform::Collections::Details::__IVectorChangedEventArgsPublicNonVirtuals::Platform::Object::__vftable = (Platform::Collections::Details::__IVectorChangedEventArgsPublicNonVirtuals_vtbl *)&Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Collections::Details::__IVectorChangedEventArgsPublicNonVirtuals'};
  this->Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object'};
  this->Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  this->Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  this->__abi_reference_count.__pUnkMarshal = (__abi_IUnknown *volatile)-1i64;
  if ( __abi_module )
    __abi_module->__abi_IncrementObjectCount(__abi_module);
  this->m_change = change;
  this->m_index = index;
}

/*
==============
Platform::Collections::Details::IncrementCounter
==============
*/
void Platform::Collections::Details::IncrementCounter(std::shared_ptr<unsigned int> *ctr)
{
  unsigned int *Ptr; 
  _DWORD *v3; 
  _DWORD *v4; 
  std::_Ref_count_base *Rep; 
  std::shared_ptr<unsigned int> _Right; 

  Ptr = ctr->_Ptr;
  if ( ++*Ptr == -1 )
  {
    v3 = operator new(0x18ui64);
    v4 = v3;
    if ( v3 )
    {
      v3[2] = 1;
      v3[3] = 1;
      *(_QWORD *)v3 = &std::_Ref_count_obj<unsigned int>::`vftable';
      v3[4] = 0;
    }
    else
    {
      v4 = NULL;
    }
    _Right._Rep = (std::_Ref_count_base *)v4;
    _Right._Ptr = v4 + 4;
    std::shared_ptr<unsigned int>::operator=(ctr, &_Right);
    if ( _Right._Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&_Right._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep = _Right._Rep;
      _Right._Rep->_Destroy(_Right._Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        _Right._Rep->_Delete_this(_Right._Rep);
    }
  }
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@____abi_GetMany@?Q?$IIterator@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Details@2Platform@@UE$AAAJIPEAPE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft______abi_GetMany__Q__IIterator_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____IteratorForVectorView_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Details_2Platform__UE_AAAJIPEAPE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__PEAI_Z(Platform::Collections::Details::IteratorForVectorView<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *this, unsigned int __param_length0, Microsoft::Xbox::Services::Marketplace::InventoryItem **__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@?$Vector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@U?$equal_to@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft______abi_add_VectorChanged__Q__IObservableVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____Vector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::VectorChangedEventHandler<Microsoft::Xbox::Services::Marketplace::InventoryItem _> *))this->Windows::Foundation::Collections::IObservableVector<Microsoft::Xbox::Services::Marketplace::InventoryItem _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@____abi_GetMany@?Q?$IVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@?$Vector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@U?$equal_to@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft______abi_GetMany__Q__IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____Vector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAJIIPEAPE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__PEAI_Z(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *this, unsigned int __param0, unsigned int __param_length1, Microsoft::Xbox::Services::Marketplace::InventoryItem **__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____Vector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00_6__Z(this, __param0, (Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@____abi_ReplaceAll@?Q?$IVector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@?$Vector@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@U?$equal_to@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft______abi_ReplaceAll__Q__IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____Vector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAJIPEAPE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Z(Platform::Collections::Vector<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *this, unsigned int __param_length0, Microsoft::Xbox::Services::Marketplace::InventoryItem **__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>'};
  arr.Platform::IBoxArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_PE$AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00_Platform__6B__I__Array_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1>::Platform::__I_$WriteOnlyArray_PE$AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00_Platform__6B__I__WriteOnlyArray_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>'};
  arr.Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>'};
  arr.Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>'};
  arr.Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____Vector_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@____abi_GetMany@?Q?$IVectorView@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@?$VectorView@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@U?$equal_to@PE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVInventoryItem@Marketplace@Services@Xbox@Microsoft@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft______abi_GetMany__Q__IVectorView_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___Collections_Foundation_Windows____VectorView_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__U__equal_to_PE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft___std___00_2Platform__UE_AAAJIIPEAPE_AAVInventoryItem_Marketplace_Services_Xbox_Microsoft__PEAI_Z(Platform::Collections::VectorView<Microsoft::Xbox::Services::Marketplace::InventoryItem _,std::equal_to<Microsoft::Xbox::Services::Marketplace::InventoryItem _>,1> *this, unsigned int __param0, unsigned int __param_length1, Microsoft::Xbox::Services::Marketplace::InventoryItem **__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>::ArrayReference<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<Microsoft::Xbox::Services::Marketplace::InventoryItem __gc *>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<Microsoft::Xbox::Services::Marketplace::InventoryItem _,1> *)&v14.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Details@2Platform@@UE$AAAJIPEAPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows______abi_GetMany__Q__IIterator_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Details_2Platform__UE_AAAJIPEAPE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_4_PEAI_Z(Platform::Collections::Details::IteratorForVectorView<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *this, unsigned int __param_length0, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@U?$equal_to@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows______abi_add_VectorChanged__Q__IObservableVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _> *))this->Windows::Foundation::Collections::IObservableVector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@____abi_GetMany@?Q?$IVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@U?$equal_to@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows______abi_GetMany__Q__IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAJIIPEAPE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_4_PEAI_Z(Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *this, unsigned int __param0, unsigned int __param_length1, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00_6__Z(this, __param0, (Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@U?$equal_to@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@4@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows______abi_ReplaceAll__Q__IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAJIPEAPE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_4__Z(Platform::Collections::Vector<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *this, unsigned int __param_length0, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>'};
  arr.Platform::IBoxArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_PE$AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00_Platform__6B__I__Array_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1>::Platform::__I_$WriteOnlyArray_PE$AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00_Platform__6B__I__WriteOnlyArray_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@____abi_GetMany@?Q?$IVectorView@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@U?$equal_to@PE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUIDownloadableContentPackage@Deployment@Management@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows______abi_GetMany__Q__IVectorView_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___Collections_Foundation_Windows____VectorView_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows__U__equal_to_PE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_Windows___std___00_2Platform__UE_AAAJIIPEAPE_AAUIDownloadableContentPackage_Deployment_Management_Xbox_4_PEAI_Z(Platform::Collections::VectorView<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,std::equal_to<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _>,1> *this, unsigned int __param0, unsigned int __param_length1, Windows::Xbox::Management::Deployment::IDownloadableContentPackage **__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>::ArrayReference<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<Windows::Xbox::Management::Deployment::IDownloadableContentPackage __gc *>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<Windows::Xbox::Management::Deployment::IDownloadableContentPackage _,1> *)&v14.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@I____abi_GetMany@?Q?$IIterator@I@Collections@Foundation@Windows@@?$IteratorForVectorView@I@Details@2Platform@@UE$AAAJIPEAI0@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_I____abi_GetMany__Q__IIterator_I_Collections_Foundation_Windows____IteratorForVectorView_I_Details_2Platform__UE_AAAJIPEAI0_Z(Platform::Collections::Details::IteratorForVectorView<unsigned int> *this, unsigned int __param_length0, unsigned int *__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<unsigned int,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<unsigned int,1>::ArrayReference<unsigned int,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<unsigned int>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<unsigned int,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@I____abi_add_VectorChanged@?Q?$IObservableVector@I@Collections@Foundation@Windows@@?$Vector@IU?$equal_to@I@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@I@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_I____abi_add_VectorChanged__Q__IObservableVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_I_234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<unsigned int> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  this->Windows::Foundation::Collections::IObservableVector<unsigned int>::Platform::Object::__vftable[1].__abi_QueryInterface(this, (Platform::Guid *)&v7, (void **)__param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@I____abi_GetMany@?Q?$IVector@I@Collections@Foundation@Windows@@?$Vector@IU?$equal_to@I@std@@$00@2Platform@@UE$AAAJIIPEAI0@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_I____abi_GetMany__Q__IVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAJIIPEAI0_Z(Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *this, unsigned int __param0, unsigned int __param_length1, unsigned int *__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<unsigned int,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<unsigned int,1>::ArrayReference<unsigned int,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_I_00_6__Z(this, __param0, (Platform::WriteOnlyArray<unsigned int,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@I____abi_ReplaceAll@?Q?$IVector@I@Collections@Foundation@Windows@@?$Vector@IU?$equal_to@I@std@@$00@2Platform@@UE$AAAJIPEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_I____abi_ReplaceAll__Q__IVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAJIPEAI_Z(Platform::Collections::Vector<unsigned int,std::equal_to<unsigned int>,1> *this, unsigned int __param_length0, unsigned int *__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<unsigned int,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<unsigned int>::Platform::Object::__vftable = (Platform::Array<unsigned int,1>_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<unsigned int>'};
  arr.Platform::IBoxArray<unsigned int>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_I$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_I_00_Platform__6B__I__Array_I_00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<unsigned int,1>::Platform::__I_$WriteOnlyArray_I$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_I_00_Platform__6B__I__WriteOnlyArray_I_00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<unsigned int,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<unsigned int,1>'};
  arr.Platform::WriteOnlyArray<unsigned int,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<unsigned int,1>'};
  arr.Platform::WriteOnlyArray<unsigned int,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<unsigned int,1>'};
  arr.Platform::WriteOnlyArray<unsigned int,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<unsigned int,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<unsigned int,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_I_Collections_Foundation_Windows____Vector_IU__equal_to_I_std___00_2Platform__UE_AAAXP_01E_ABV__Array_I_00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@I____abi_GetAt@?Q?$IVectorView@I@Collections@Foundation@Windows@@?$VectorView@IU?$equal_to@I@std@@$00@2Platform@@UE$AAAJIPEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_I____abi_GetAt__Q__IVectorView_I_Collections_Foundation_Windows____VectorView_IU__equal_to_I_std___00_2Platform__UE_AAAJIPEAI_Z(Platform::Collections::VectorView<unsigned int,std::equal_to<unsigned int>,1> *this, unsigned int __param0, unsigned int *__abi_returnValue)
{
  std::vector<unsigned int> *Ptr; 
  void *Exception; 
  void *v6; 
  void *pExceptionObject; 
  __int64 v8[4]; 
  const volatile Platform::Object *v9; 
  const volatile Platform::Object *v10; 

  v8[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  Ptr = this->m_vec._Ptr;
  if ( __param0 >= (unsigned __int64)(Ptr->_Mypair._Myval2._Mylast - Ptr->_Mypair._Myval2._Myfirst) )
  {
    v6 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v6);
    v8[0] = (__int64)__abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(v8, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Ptr->_Mypair._Myval2._Myfirst[__param0];
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@I____abi_GetMany@?Q?$IVectorView@I@Collections@Foundation@Windows@@?$VectorView@IU?$equal_to@I@std@@$00@2Platform@@UE$AAAJIIPEAI0@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_I____abi_GetMany__Q__IVectorView_I_Collections_Foundation_Windows____VectorView_IU__equal_to_I_std___00_2Platform__UE_AAAJIIPEAI0_Z(Platform::Collections::VectorView<unsigned int,std::equal_to<unsigned int>,1> *this, unsigned int __param0, unsigned int __param_length1, unsigned int *__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<unsigned int,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<unsigned int,1>::ArrayReference<unsigned int,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<unsigned int>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<unsigned int,1> *)&v14.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAVString@Platform@@____abi_GetMany@?Q?$IIterator@PE$AAVString@Platform@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAVString@Platform@@@Details@2Platform@@UE$AAAJIPEAPE$AAVString@7@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAVString_Platform______abi_GetMany__Q__IIterator_PE_AAVString_Platform___Collections_Foundation_Windows____IteratorForVectorView_PE_AAVString_Platform___Details_2Platform__UE_AAAJIPEAPE_AAVString_7_PEAI_Z(Platform::Collections::Details::IteratorForVectorView<Platform::String _> *this, unsigned int __param_length0, Platform::String **__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<Platform::String _,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Platform::String __gc *,1>::ArrayReference<Platform::String __gc *,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<Platform::String __gc *>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<Platform::String _,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAVString@Platform@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAVString@Platform@@@Collections@Foundation@Windows@@?$Vector@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAVString@Platform@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAVString_Platform______abi_add_VectorChanged__Q__IObservableVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAVString_Platform___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<Platform::String _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::VectorChangedEventHandler<Platform::String _> *))this->Windows::Foundation::Collections::IObservableVector<Platform::String _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVString@Platform@@____abi_GetMany@?Q?$IVector@PE$AAVString@Platform@@@Collections@Foundation@Windows@@?$Vector@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVString@6@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVString_Platform______abi_GetMany__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAJIIPEAPE_AAVString_6_PEAI_Z(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *this, unsigned int __param0, unsigned int __param_length1, Platform::String **__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<Platform::String _,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Platform::String __gc *,1>::ArrayReference<Platform::String __gc *,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAVString_Platform___00_6__Z(this, __param0, (Platform::WriteOnlyArray<Platform::String _,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVString@Platform@@____abi_ReplaceAll@?Q?$IVector@PE$AAVString@Platform@@@Collections@Foundation@Windows@@?$Vector@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAVString@6@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVString_Platform______abi_ReplaceAll__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAJIPEAPE_AAVString_6__Z(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *this, unsigned int __param_length0, Platform::String **__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<Platform::String _,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<Platform::String _>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Platform::String __gc *>'};
  arr.Platform::IBoxArray<Platform::String _>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_PE$AAVString_Platform__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVString_Platform___00_Platform__6B__I__Array_PE_AAVString_Platform___00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<Platform::String _,1>::Platform::__I_$WriteOnlyArray_PE$AAVString_Platform__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVString_Platform___00_Platform__6B__I__WriteOnlyArray_PE_AAVString_Platform___00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<Platform::String _,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Platform::String __gc *,1>'};
  arr.Platform::WriteOnlyArray<Platform::String _,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Platform::String __gc *,1>'};
  arr.Platform::WriteOnlyArray<Platform::String _,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Platform::String __gc *,1>'};
  arr.Platform::WriteOnlyArray<Platform::String _,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Platform::String __gc *,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Platform::String __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAVString_Platform___00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAVString@Platform@@____abi_GetMany@?Q?$IVectorView@PE$AAVString@Platform@@@Collections@Foundation@Windows@@?$VectorView@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVString@6@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_PE_AAVString_Platform______abi_GetMany__Q__IVectorView_PE_AAVString_Platform___Collections_Foundation_Windows____VectorView_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAJIIPEAPE_AAVString_6_PEAI_Z(Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *this, unsigned int __param0, unsigned int __param_length1, Platform::String **__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<Platform::String _,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Platform::String __gc *,1>::ArrayReference<Platform::String __gc *,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<Platform::String __gc *>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<Platform::String _,1> *)&v14.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAU?$IKeyValuePair@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAU?$IKeyValuePair@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@?$IteratorForAnyMapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@V?$map@PE$AAVString@Platform@@V?$Agile@PE$AAUIBuffer@Streams@Storage@Windows@@$00@2@U?$less@PE$AAVString@Platform@@@std@@V?$allocator@U?$pair@QE$AAVString@Platform@@V?$Agile@PE$AAUIBuffer@Streams@Storage@Windows@@$00@2@@std@@@5@@std@@@Details@2Platform@@UE$AAAJIPEAPE$AAU?$IKeyValuePair@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@234@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows______abi_GetMany__Q__IIterator_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___Collections_Foundation_Windows____IteratorForAnyMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__V__map_PE_AAVString_Platform__V__Agile_PE_AAUIBuffer_Streams_Storage_Windows___00_2_U__less_PE_AAVString_Platform___std__V__allocator_U__pair_QE_AAVString_Platform__V__Agile_PE_AAUIBuffer_Streams_Storage_Windows___00_2__std___5__std___Details_2Platform__UE_AAAJIPEAPE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_PEAI_Z(Platform::Collections::Details::IteratorForAnyMapView<Platform::String _,Windows::Storage::Streams::IBuffer _,std::map<Platform::String _,Platform::Agile<Windows::Storage::Streams::IBuffer _,1>> > *this, unsigned int __param_length0, Windows::Foundation::Collections::IKeyValuePair<Platform::String _,Windows::Storage::Streams::IBuffer _> **__param0, unsigned int *__abi_returnValue)
{
  __int64 v6; 
  unsigned int v8; 
  unsigned int v10; 
  __int64 v11[4]; 
  Platform::WriteOnlyArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String _,Windows::Storage::Streams::IBuffer _> _,1> dest; 
  void **v13; 
  void **v14; 

  v6 = __param_length0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v8 = 0;
  *__abi_returnValue = 0;
  memset_0(v11, 0, 0x88ui64);
  v11[0] = (__int64)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *>'};
  v11[1] = (__int64)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::IValueType'};
  v11[2] = (__int64)___7__Array_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___00_Platform__6B__I__Array_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___00PublicNonVirtuals_1__;
  v11[3] = (__int64)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::IDisposable'};
  dest.Platform::__I_$WriteOnlyArray_PE$AAU_$IKeyValuePair_PE$AAVString_Platform__PE$AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___00_Platform__6B__I__WriteOnlyArray_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___00PublicNonVirtuals_1__;
  dest.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>'};
  dest.Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>'};
  dest.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>'};
  dest.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>'};
  v13 = &Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  v14 = &Platform::Array<Windows::Foundation::Collections::IKeyValuePair<Platform::String __gc *,Windows::Storage::Streams::IBuffer __gc *> __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( (unsigned int)v6 > 0x1FFFFFFF )
    __abi_WinRTraiseInvalidArgumentException();
  memset_0(__param0, 0, 8 * v6);
  if ( dest.__size || dest.__data )
  {
    __abi_WinRTraiseFailureException();
    return v10;
  }
  else
  {
    dest.__size = v6;
    dest.__fastpassflag = 1;
    dest.__data = __param0;
    *__abi_returnValue = j__GetMany__Q__IIterator_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___Collections_Foundation_Windows____IteratorForAnyMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__V__map_PE_AAVString_Platform__V__Agile_PE_AAUIBuffer_Streams_Storage_Windows___00_2_U__less_PE_AAVString_Platform___std__V__allocator_U__pair_QE_AAVString_Platform__V__Agile_PE_AAUIBuffer_Streams_Storage_Windows___00_2__std___5__std___Details_2Platform__UE_AAAIP_01E_AAV__WriteOnlyArray_PE_AAU__IKeyValuePair_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows___00_7__Z(this, &dest);
  }
  return v8;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IMapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@____abi_HasKey@?Q?$IMapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@?$MapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@U?$less@PE$AAVString@Platform@@@std@@$00$00@2Platform@@UE$AAAJPE$AAVString@6@PEA_N@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows______abi_HasKey__Q__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____MapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAJPE_AAVString_6_PEA_N_Z(Platform::Collections::MapView<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *this, Platform::String *__param0, bool *__abi_returnValue)
{
  int v5; 
  HSTRING v6; 
  std::map<Platform::String _,Platform::Agile<Windows::Storage::Streams::IBuffer _,1>> *Ptr; 
  std::_Tree_node<std::pair<Platform::String _ const,Platform::Agile<Windows::Storage::Streams::IBuffer _,1> >,void *> *Myhead; 
  std::_Tree_node<std::pair<Platform::String _ const,Platform::Agile<Windows::Storage::Streams::IBuffer _,1> >,void *> *Parent; 
  std::_Tree_node<std::pair<Platform::String _ const,Platform::Agile<Windows::Storage::Streams::IBuffer _,1> >,void *> *v10; 
  HSTRING first; 
  bool v12; 
  __int64 pExceptionObject[7]; 
  HSTRING newString; 
  Platform::String *result; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  result = __param0;
  if ( __param0 )
  {
    v5 = WindowsDuplicateString_0((HSTRING)__param0, &newString);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = newString;
  }
  else
  {
    v6 = NULL;
  }
  result = (Platform::String *)v6;
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    newString = (HSTRING)Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    newString = (HSTRING)Platform::ChangedStateException::ChangedStateException(newString);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor((const volatile Platform::Object *const)newString);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  Ptr = this->m_map._Ptr;
  Myhead = Ptr->_Mypair._Myval2._Myval2._Myhead;
  Parent = Ptr->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = Ptr->_Mypair._Myval2._Myval2._Myhead;
  if ( !Parent->_Isnil )
  {
    do
    {
      first = (HSTRING)Parent->_Myval.first;
      LODWORD(newString) = 0;
      WindowsCompareStringOrdinal_0(first, v6, (INT32 *)&newString);
      if ( (int)newString >= 0 )
      {
        Myhead = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    while ( !Parent->_Isnil );
    v10 = Ptr->_Mypair._Myval2._Myval2._Myhead;
  }
  if ( Myhead == v10 || (LODWORD(result) = 0, WindowsCompareStringOrdinal_0(v6, (HSTRING)Myhead->_Myval.first, (INT32 *)&result), (int)result < 0) )
    Myhead = Ptr->_Mypair._Myval2._Myval2._Myhead;
  v12 = Myhead != this->m_map._Ptr->_Mypair._Myval2._Myval2._Myhead;
  WindowsDeleteString_0(v6);
  *__abi_returnValue = v12;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IMapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@____abi_Split@?Q?$IMapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@?$MapView@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@U?$less@PE$AAVString@Platform@@@std@@$00$00@2Platform@@UE$AAAJPEAPE$AAU1234@0@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows______abi_Split__Q__IMapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____MapView_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAJPEAPE_AAU1234_0_Z(Platform::Collections::MapView<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *this, Windows::Foundation::Collections::IMapView<Platform::String _,Windows::Storage::Streams::IBuffer _> **__param0, Windows::Foundation::Collections::IMapView<Platform::String _,Windows::Storage::Streams::IBuffer _> **__param1)
{
  void *Exception; 
  __int64 pExceptionObject[3]; 
  const volatile Platform::Object *v9; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  if ( __param0 )
    *__param0 = NULL;
  if ( __param1 )
    *__param1 = NULL;
  if ( *__param0 )
  {
    (*__param0)->__abi_Release(*__param0);
    *__param0 = NULL;
  }
  if ( *__param1 )
  {
    (*__param1)->__abi_Release(*__param1);
    *__param1 = NULL;
  }
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableMap@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@____abi_add_MapChanged@?Q?$IObservableMap@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@?$Map@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@U?$less@PE$AAVString@Platform@@@std@@$00$00@2Platform@@UE$AAAJPE$AAV?$MapChangedEventHandler@PE$AAVString@Platform@@PE$AAUIBuffer@Streams@Storage@Windows@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows______abi_add_MapChanged__Q__IObservableMap_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___Collections_Foundation_Windows____Map_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows__U__less_PE_AAVString_Platform___std___00_00_2Platform__UE_AAAJPE_AAV__MapChangedEventHandler_PE_AAVString_Platform__PE_AAUIBuffer_Streams_Storage_Windows___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *this, Windows::Foundation::Collections::MapChangedEventHandler<Platform::String _,Windows::Storage::Streams::IBuffer _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Map<Platform::String _,Windows::Storage::Streams::IBuffer _,std::less<Platform::String _>,1,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::MapChangedEventHandler<Platform::String _,Windows::Storage::Streams::IBuffer _> *))this->Windows::Foundation::Collections::IObservableMap<Platform::String _,Windows::Storage::Streams::IBuffer _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAVUser@System@Xbox@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAVUser@System@Xbox@Windows@@@Details@2Platform@@UE$AAAJIPEAPE$AAVUser@System@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAVUser_System_Xbox_Windows______abi_GetMany__Q__IIterator_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAVUser_System_Xbox_Windows___Details_2Platform__UE_AAAJIPEAPE_AAVUser_System_Xbox_4_PEAI_Z(Platform::Collections::Details::IteratorForVectorView<Windows::Xbox::System::User _> *this, unsigned int __param_length0, Windows::Xbox::System::User **__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<Windows::Xbox::System::User _,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::System::User __gc *,1>::ArrayReference<Windows::Xbox::System::User __gc *,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<Windows::Xbox::System::User __gc *>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<Windows::Xbox::System::User _,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAVUserAndControllerPair@@____abi_GetMany@?Q?$IIterator@PE$AAVUserAndControllerPair@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAVUserAndControllerPair@@@Details@2Platform@@UE$AAAJIPEAPE$AAVUserAndControllerPair@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IIterator_PE_AAVUserAndControllerPair______abi_GetMany__Q__IIterator_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____IteratorForVectorView_PE_AAVUserAndControllerPair___Details_2Platform__UE_AAAJIPEAPE_AAVUserAndControllerPair__PEAI_Z(Platform::Collections::Details::IteratorForVectorView<UserAndControllerPair _> *this, unsigned int __param_length0, UserAndControllerPair **__param0, unsigned int *__abi_returnValue)
{
  unsigned int v6; 
  void *Exception; 
  const volatile Platform::Object *v9; 
  __int64 pExceptionObject[3]; 
  Platform::ArrayReference<UserAndControllerPair _,1> v11; 

  pExceptionObject[1] = -2i64;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<UserAndControllerPair __gc *,1>::ArrayReference<UserAndControllerPair __gc *,1>(&v11, __param0, __param_length0, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v9 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject[0] = (__int64)__abi_winrt_ptr_ctor(v9);
    CxxThrowException_0(pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  v6 = Platform::Collections::Details::VectorGetMany<UserAndControllerPair __gc *>(this->m_vec._Ptr, this->m_index, (Platform::WriteOnlyArray<UserAndControllerPair _,1> *)&v11.__data[32]);
  this->m_index += v6;
  *__abi_returnValue = v6;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAVUser@System@Xbox@Windows@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUser@System@Xbox@Windows@@U?$equal_to@PE$AAVUser@System@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAVUser@System@Xbox@Windows@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAVUser_System_Xbox_Windows______abi_add_VectorChanged__Q__IObservableVector_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAVUser_System_Xbox_Windows___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Xbox::System::User _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Vector<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Xbox::System::User _> *))this->Windows::Foundation::Collections::IObservableVector<Windows::Xbox::System::User _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAVUserAndControllerPair@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAVUserAndControllerPair@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUserAndControllerPair@@U?$equal_to@PE$AAVUserAndControllerPair@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAVUserAndControllerPair@@@234@PEAVEventRegistrationToken@34@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAVUserAndControllerPair______abi_add_VectorChanged__Q__IObservableVector_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____Vector_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAVUserAndControllerPair___234_PEAVEventRegistrationToken_34__Z(Platform::Collections::Vector<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *this, Windows::Foundation::Collections::VectorChangedEventHandler<UserAndControllerPair _> *__param0, Windows::Foundation::EventRegistrationToken *__abi_returnValue)
{
  Platform::Object_vtbl *v7; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  __abi_returnValue->__vftable = v7;
  ((void (__fastcall *)(Platform::Collections::Vector<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *, Platform::Object_vtbl **, Windows::Foundation::Collections::VectorChangedEventHandler<UserAndControllerPair _> *))this->Windows::Foundation::Collections::IObservableVector<UserAndControllerPair _>::Platform::Object::__vftable[1].__abi_Release)(this, &v7, __param0);
  __abi_returnValue->__vftable = v7;
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVUser@System@Xbox@Windows@@____abi_GetMany@?Q?$IVector@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUser@System@Xbox@Windows@@U?$equal_to@PE$AAVUser@System@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVUser@System@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVUser_System_Xbox_Windows______abi_GetMany__Q__IVector_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAJIIPEAPE_AAVUser_System_Xbox_4_PEAI_Z(Platform::Collections::Vector<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *this, unsigned int __param0, unsigned int __param_length1, Windows::Xbox::System::User **__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<Windows::Xbox::System::User _,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::System::User __gc *,1>::ArrayReference<Windows::Xbox::System::User __gc *,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAVUser_System_Xbox_Windows___00_6__Z(this, __param0, (Platform::WriteOnlyArray<Windows::Xbox::System::User _,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVUser@System@Xbox@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUser@System@Xbox@Windows@@U?$equal_to@PE$AAVUser@System@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAVUser@System@Xbox@4@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVUser_System_Xbox_Windows______abi_ReplaceAll__Q__IVector_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAJIPEAPE_AAVUser_System_Xbox_4__Z(Platform::Collections::Vector<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *this, unsigned int __param_length0, Windows::Xbox::System::User **__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<Windows::Xbox::System::User _,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<Windows::Xbox::System::User _>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::Xbox::System::User __gc *>'};
  arr.Platform::IBoxArray<Windows::Xbox::System::User _>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_PE$AAVUser_System_Xbox_Windows__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVUser_System_Xbox_Windows___00_Platform__6B__I__Array_PE_AAVUser_System_Xbox_Windows___00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::System::User _,1>::Platform::__I_$WriteOnlyArray_PE$AAVUser_System_Xbox_Windows__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVUser_System_Xbox_Windows___00_Platform__6B__I__WriteOnlyArray_PE_AAVUser_System_Xbox_Windows___00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<Windows::Xbox::System::User _,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::Xbox::System::User __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::System::User _,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::Xbox::System::User __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::System::User _,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::Xbox::System::User __gc *,1>'};
  arr.Platform::WriteOnlyArray<Windows::Xbox::System::User _,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::Xbox::System::User __gc *,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<Windows::Xbox::System::User __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____Vector_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAVUser_System_Xbox_Windows___00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVUserAndControllerPair@@____abi_GetMany@?Q?$IVector@PE$AAVUserAndControllerPair@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUserAndControllerPair@@U?$equal_to@PE$AAVUserAndControllerPair@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVUserAndControllerPair@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVUserAndControllerPair______abi_GetMany__Q__IVector_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____Vector_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAJIIPEAPE_AAVUserAndControllerPair__PEAI_Z(Platform::Collections::Vector<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *this, unsigned int __param0, unsigned int __param_length1, UserAndControllerPair **__param1, unsigned int *__abi_returnValue)
{
  Platform::ArrayReference<UserAndControllerPair _,1> v8; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<UserAndControllerPair __gc *,1>::ArrayReference<UserAndControllerPair __gc *,1>(&v8, __param1, __param_length1, 1);
  *__abi_returnValue = j__GetMany__Q__IVector_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____Vector_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAVUserAndControllerPair___00_6__Z(this, __param0, (Platform::WriteOnlyArray<UserAndControllerPair _,1> *)&v8.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVector@PE$AAVUserAndControllerPair@@____abi_ReplaceAll@?Q?$IVector@PE$AAVUserAndControllerPair@@@Collections@Foundation@Windows@@?$Vector@PE$AAVUserAndControllerPair@@U?$equal_to@PE$AAVUserAndControllerPair@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAVUserAndControllerPair@@@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVector_PE_AAVUserAndControllerPair______abi_ReplaceAll__Q__IVector_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____Vector_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAJIPEAPE_AAVUserAndControllerPair___Z(Platform::Collections::Vector<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *this, unsigned int __param_length0, UserAndControllerPair **__param0)
{
  unsigned int v6; 
  unsigned int v8; 
  Platform::Array<UserAndControllerPair _,1> arr; 

  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v6 = 0;
  memset_0(&arr, 0, sizeof(arr));
  arr.Platform::IBoxArray<UserAndControllerPair _>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<UserAndControllerPair __gc *>'};
  arr.Platform::IBoxArray<UserAndControllerPair _>::Platform::IValueType::Platform::Object::__vftable = (Platform::IValueType_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::IValueType'};
  arr.Platform::__I_$Array_PE$AAVUserAndControllerPair__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVUserAndControllerPair___00_Platform__6B__I__Array_PE_AAVUserAndControllerPair___00PublicNonVirtuals_1__;
  arr.Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::IDisposable'};
  arr.Platform::WriteOnlyArray<UserAndControllerPair _,1>::Platform::__I_$WriteOnlyArray_PE$AAVUserAndControllerPair__$00PublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7__Array_PE_AAVUserAndControllerPair___00_Platform__6B__I__WriteOnlyArray_PE_AAVUserAndControllerPair___00PublicNonVirtuals_1__;
  arr.Platform::WriteOnlyArray<UserAndControllerPair _,1>::Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<UserAndControllerPair __gc *,1>'};
  arr.Platform::WriteOnlyArray<UserAndControllerPair _,1>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<UserAndControllerPair __gc *,1>'};
  arr.Platform::WriteOnlyArray<UserAndControllerPair _,1>::Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<UserAndControllerPair __gc *,1>'};
  arr.Platform::WriteOnlyArray<UserAndControllerPair _,1>::Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<UserAndControllerPair __gc *,1>'};
  arr.Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  arr.Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Platform::Array<UserAndControllerPair __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( arr.__size || arr.__data )
  {
    __abi_WinRTraiseFailureException();
    return v8;
  }
  else
  {
    arr.__size = __param_length0;
    arr.__fastpassflag = 1;
    arr.__data = __param0;
    j__ReplaceAll__Q__IVector_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____Vector_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAVUserAndControllerPair___00_6__Z(this, &arr);
  }
  return v6;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAVUser@System@Xbox@Windows@@____abi_GetMany@?Q?$IVectorView@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAVUser@System@Xbox@Windows@@U?$equal_to@PE$AAVUser@System@Xbox@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVUser@System@Xbox@4@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_PE_AAVUser_System_Xbox_Windows______abi_GetMany__Q__IVectorView_PE_AAVUser_System_Xbox_Windows___Collections_Foundation_Windows____VectorView_PE_AAVUser_System_Xbox_Windows__U__equal_to_PE_AAVUser_System_Xbox_Windows___std___00_2Platform__UE_AAAJIIPEAPE_AAVUser_System_Xbox_4_PEAI_Z(Platform::Collections::VectorView<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *this, unsigned int __param0, unsigned int __param_length1, Windows::Xbox::System::User **__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<Windows::Xbox::System::User _,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<Windows::Xbox::System::User __gc *,1>::ArrayReference<Windows::Xbox::System::User __gc *,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<Windows::Xbox::System::User __gc *>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<Windows::Xbox::System::User _,1> *)&v14.__data[32]);
  return 0i64;
}

/*
==============
?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAVUserAndControllerPair@@____abi_GetMany@?Q?$IVectorView@PE$AAVUserAndControllerPair@@@Collections@Foundation@Windows@@?$VectorView@PE$AAVUserAndControllerPair@@U?$equal_to@PE$AAVUserAndControllerPair@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAVUserAndControllerPair@@PEAI@Z
==============
*/
__int64 ___abi_Windows_Foundation_Collections___IVectorView_PE_AAVUserAndControllerPair______abi_GetMany__Q__IVectorView_PE_AAVUserAndControllerPair___Collections_Foundation_Windows____VectorView_PE_AAVUserAndControllerPair__U__equal_to_PE_AAVUserAndControllerPair___std___00_2Platform__UE_AAAJIIPEAPE_AAVUserAndControllerPair__PEAI_Z(Platform::Collections::VectorView<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *this, unsigned int __param0, unsigned int __param_length1, UserAndControllerPair **__param1, unsigned int *__abi_returnValue)
{
  unsigned __int64 v5; 
  void *Exception; 
  void *v9; 
  const volatile Platform::Object *v10; 
  const volatile Platform::Object *v11; 
  void *pExceptionObject; 
  __int64 v13[2]; 
  Platform::ArrayReference<UserAndControllerPair _,1> v14; 

  v13[1] = -2i64;
  v5 = __param0;
  if ( this->__abi_disposed )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *__abi_returnValue = 0;
  Platform::ArrayReference<UserAndControllerPair __gc *,1>::ArrayReference<UserAndControllerPair __gc *,1>(&v14, __param1, __param_length1, 1);
  if ( *this->m_ctr._Ptr != this->m_good_ctr )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v10 = (const volatile Platform::Object *)Platform::ChangedStateException::ChangedStateException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v10);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI11PE_AAVChangedStateException_Platform__);
  }
  if ( v5 > this->m_vec._Ptr->_Mypair._Myval2._Mylast - this->m_vec._Ptr->_Mypair._Myval2._Myfirst )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68ui64, 0x90ui64);
    v11 = (const volatile Platform::Object *)Platform::OutOfBoundsException::OutOfBoundsException(v9);
    v13[0] = (__int64)__abi_winrt_ptr_ctor(v11);
    CxxThrowException_0(v13, (_ThrowInfo *)&TI11PE_AAVOutOfBoundsException_Platform__);
  }
  *__abi_returnValue = Platform::Collections::Details::VectorGetMany<UserAndControllerPair __gc *>(this->m_vec._Ptr, v5, (Platform::WriteOnlyArray<UserAndControllerPair _,1> *)&v14.__data[32]);
  return 0i64;
}

