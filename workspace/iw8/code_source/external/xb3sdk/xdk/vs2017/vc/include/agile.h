/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap
==============
*/

void __fastcall Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this, Platform::Agile<Windows::UI::Core::CoreWindow,1> *object)
{
  ?Swap@?$Agile@VCoreWindow@Core@UI@Windows@@$00@Platform@@QEAAXAEAV12@@Z(this, object);
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release
==============
*/

void __fastcall Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this)
{
  ?Release@?$Agile@VCoreWindow@Core@UI@Windows@@$00@Platform@@QEAAXXZ(this);
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Get
==============
*/

Windows::UI::Core::CoreWindow *__fastcall Platform::Agile<Windows::UI::Core::CoreWindow,1>::Get(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this)
{
  return ?Get@?$Agile@VCoreWindow@Core@UI@Windows@@$00@Platform@@QEBAPE$AAVCoreWindow@Core@UI@Windows@@XZ(this);
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject
==============
*/

void __fastcall Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this, Windows::UI::Core::CoreWindow *object)
{
  ?SetObject@?$Agile@VCoreWindow@Core@UI@Windows@@$00@Platform@@AEAAXPE$AAVCoreWindow@Core@UI@Windows@@@Z(this, object);
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Get
==============
*/
Windows::UI::Core::CoreWindow *Platform::Agile<Windows::UI::Core::CoreWindow,1>::Get(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this)
{
  int ContextToken; 
  void *object; 
  int ProxyImpl; 
  unsigned int (__fastcall *v5)(IUnknown_vtbl *, GUID *, void **); 
  void **v6; 
  IUnknown *ptr; 
  __int64 v8; 
  __int64 v10; 
  IUnknown_vtbl *v11; 
  struct IUnknown v12; 
  __int64 v13; 
  ULONG_PTR pToken; 
  Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAgileObject> > v15; 

  if ( this->_agileState == Japan || !this->_object )
  {
    object = this->_object;
LABEL_24:
    if ( object )
      (*(void (__fastcall **)(void *))(*(_QWORD *)object + 8i64))(object);
    return (Windows::UI::Core::CoreWindow *)object;
  }
  ContextToken = CoGetContextToken(&pToken);
  if ( ContextToken < 0 )
    __abi_WinRTraiseException(ContextToken);
  if ( pToken == this->_contextToken )
  {
    object = this->_object;
    goto LABEL_24;
  }
  v12.__vftable = NULL;
  ProxyImpl = Platform::Details::GetProxyImpl((Platform::Details *)this->_object, (struct IUnknown *)&_uuidof__AVCoreWindow_Core_UI_Windows__, (const struct _GUID *)this->_contextCallback.ptr_, &v12, (struct IUnknown **)0xFFFFFFFFFFFFFFFEi64);
  if ( ProxyImpl < 0 )
    __abi_WinRTraiseException(ProxyImpl);
  if ( this->_agileState == SaudiArabia )
  {
    v13 = 0i64;
    v5 = *(unsigned int (__fastcall **)(IUnknown_vtbl *, GUID *, void **))v12.QueryInterface;
    v15.ptr_ = (Microsoft::WRL::ComPtr<IAgileObject> *)&v13;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAgileObject>>::operator void * *(&v15);
    if ( !v5(v12.__vftable, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v6) )
    {
      this->_agileState = Japan;
      this->_contextToken = 0i64;
      ptr = this->_contextCallback.ptr_;
      if ( ptr )
      {
        this->_contextCallback.ptr_ = NULL;
        ptr->Release(ptr);
      }
      object = this->_object;
      if ( this->_object )
        (*(void (__fastcall **)(Windows::UI::Core::CoreWindow *))(*(_QWORD *)object + 8i64))(this->_object);
      v8 = v13;
      if ( v13 )
      {
        v13 = 0i64;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      }
      if ( v12.__vftable )
      {
        (*((void (__fastcall **)(IUnknown_vtbl *))v12.QueryInterface + 2))(v12.__vftable);
        return (Windows::UI::Core::CoreWindow *)object;
      }
      return (Windows::UI::Core::CoreWindow *)object;
    }
    this->_agileState = Worldwide;
    v10 = v13;
    if ( v13 )
    {
      v13 = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    }
  }
  v11 = v12.__vftable;
  object = v12.__vftable;
  if ( v12.__vftable )
  {
    (*((void (__fastcall **)(IUnknown_vtbl *))v12.QueryInterface + 1))(v12.__vftable);
    v11 = v12.__vftable;
  }
  if ( v11 )
  {
    (*((void (__fastcall **)(IUnknown_vtbl *))v11->QueryInterface + 2))(v11);
    return (Windows::UI::Core::CoreWindow *)object;
  }
  return (Windows::UI::Core::CoreWindow *)object;
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release
==============
*/
void Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this)
{
  Windows::UI::Core::CoreWindow *object; 
  int ContextToken; 
  struct IUnknown *v4; 
  unsigned __int64 v5; 
  struct IUnknown *ptr; 
  IUnknown *v7; 
  ULONG_PTR pToken; 

  object = this->_object;
  if ( this->_object )
  {
    this->_object = NULL;
    ContextToken = CoGetContextToken(&pToken);
    if ( ContextToken < 0 )
      __abi_WinRTraiseException(ContextToken);
    v5 = this->_contextToken;
    if ( v5 && (ptr = this->_contextCallback.ptr_) != NULL && v5 != pToken )
      Platform::Details::ReleaseInContextImpl((Platform::Details *)object, ptr, v4);
    else
      object->__abi_Release(object);
    v7 = this->_contextCallback.ptr_;
    if ( v7 )
    {
      this->_contextCallback.ptr_ = NULL;
      v7->Release(v7);
    }
    this->_contextToken = 0i64;
    this->_agileState = SaudiArabia;
  }
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject
==============
*/
void Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this, Windows::UI::Core::CoreWindow *object)
{
  Platform::Details *v4; 
  struct IUnknown *ObjectContext; 
  IUnknown *v6; 
  IUnknown *ptr; 
  int ContextToken; 
  __int64 v9; 
  Windows::UI::Core::CoreWindow *v10; 
  __int64 v11; 

  Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release(this);
  if ( object )
  {
    v11 = 0i64;
    if ( object->__abi_QueryInterface(object, (Platform::Guid *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, (void **)&v11) )
    {
      this->_agileState = Worldwide;
      ObjectContext = Platform::Details::GetObjectContext(v4);
      v6 = ObjectContext;
      ptr = this->_contextCallback.ptr_;
      if ( ptr != ObjectContext )
      {
        if ( ObjectContext )
        {
          ObjectContext->AddRef(ObjectContext);
          ptr = this->_contextCallback.ptr_;
        }
        this->_contextCallback.ptr_ = v6;
        if ( ptr )
          ptr->Release(ptr);
      }
      ContextToken = CoGetContextToken(&this->_contextToken);
      if ( ContextToken < 0 )
        __abi_WinRTraiseException(ContextToken);
    }
    else
    {
      this->_agileState = Japan;
    }
    v9 = v11;
    if ( v11 )
    {
      v11 = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    }
  }
  v10 = this->_object;
  if ( object != this->_object )
  {
    if ( object )
    {
      object->__abi_AddRef(object);
      v10 = this->_object;
    }
    if ( v10 )
      v10->__abi_Release(v10);
    this->_object = object;
  }
}

/*
==============
Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap
==============
*/
void Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap(Platform::Agile<Windows::UI::Core::CoreWindow,1> *this, Platform::Agile<Windows::UI::Core::CoreWindow,1> *object)
{
  Windows::UI::Core::CoreWindow *v4; 
  Windows::UI::Core::CoreWindow *v5; 
  Windows::UI::Core::CoreWindow *v6; 
  Windows::UI::Core::CoreWindow *v7; 
  char *p_contextCallback; 
  Microsoft::WRL::ComPtr<IUnknown> *v9; 
  IUnknown *v10; 
  IUnknown *ptr; 
  IUnknown *v12; 
  IUnknown *v13; 
  IUnknown *v14; 
  unsigned __int64 contextToken; 
  char v16; 

  v4 = this->_object;
  v5 = v4;
  if ( v4 )
  {
    v4->__abi_AddRef(v4);
    v5 = this->_object;
  }
  v6 = object->_object;
  if ( object->_object != v5 )
  {
    if ( v6 )
    {
      v6->__abi_AddRef(object->_object);
      v5 = this->_object;
    }
    if ( v5 )
      v5->__abi_Release(v5);
    this->_object = v6;
  }
  v7 = object->_object;
  if ( v4 != object->_object )
  {
    if ( v4 )
    {
      v4->__abi_AddRef(v4);
      v7 = object->_object;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    object->_object = v4;
  }
  if ( v4 )
    v4->__abi_Release(v4);
  p_contextCallback = (char *)&object->_contextCallback;
  v9 = &this->_contextCallback;
  v10 = NULL;
  ptr = NULL;
  if ( &v16 != (char *)&this->_contextCallback )
  {
    ptr = v9->ptr_;
    v9->ptr_ = NULL;
  }
  if ( &v16 != p_contextCallback )
  {
    v12 = *(IUnknown **)p_contextCallback;
    *(_QWORD *)p_contextCallback = 0i64;
    v10 = v12;
  }
  v13 = v9->ptr_;
  v9->ptr_ = v10;
  if ( v13 )
    v13->Release(v13);
  v14 = *(IUnknown **)p_contextCallback;
  *(_QWORD *)p_contextCallback = ptr;
  if ( v14 )
    v14->Release(v14);
  contextToken = this->_contextToken;
  this->_contextToken = object->_contextToken;
  object->_contextToken = contextToken;
  LODWORD(contextToken) = this->_agileState;
  this->_agileState = object->_agileState;
  object->_agileState = contextToken;
}

