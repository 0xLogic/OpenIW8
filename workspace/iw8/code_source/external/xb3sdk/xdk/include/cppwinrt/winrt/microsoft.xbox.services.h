/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>::CreateInstance
==============
*/

winrt::Microsoft::Xbox::Services::XboxLiveContext *__fastcall winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>::CreateInstance(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory> *this, winrt::Microsoft::Xbox::Services::XboxLiveContext *result, const winrt::Windows::Xbox::System::User *user)
{
  return ?CreateInstance@?$impl___IXboxLiveContextFactory@U__IXboxLiveContextFactory@Services@Xbox@Microsoft@winrt@@@Services@Xbox@Microsoft@winrt@@QEBA?AUXboxLiveContext@2345@AEBUUser@System@3Windows@5@@Z(this, result, user);
}

/*
==============
winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext
==============
*/

void __fastcall winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext(winrt::Microsoft::Xbox::Services::XboxLiveContext *this, const winrt::Windows::Xbox::System::User *user)
{
  ??0XboxLiveContext@Services@Xbox@Microsoft@winrt@@QEAA@AEBUUser@System@2Windows@4@@Z(this, user);
}

/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::InventoryService
==============
*/

winrt::Microsoft::Xbox::Services::Marketplace::InventoryService *__fastcall winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::InventoryService(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *this, winrt::Microsoft::Xbox::Services::Marketplace::InventoryService *result)
{
  return ?InventoryService@?$impl___IXboxLiveContextPublicNonVirtuals@U__IXboxLiveContextPublicNonVirtuals@Services@Xbox@Microsoft@winrt@@@Services@Xbox@Microsoft@winrt@@QEBA?AU0Marketplace@2345@XZ(this, result);
}

/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::CatalogService
==============
*/

winrt::Microsoft::Xbox::Services::Marketplace::CatalogService *__fastcall winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::CatalogService(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *this, winrt::Microsoft::Xbox::Services::Marketplace::CatalogService *result)
{
  return ?CatalogService@?$impl___IXboxLiveContextPublicNonVirtuals@U__IXboxLiveContextPublicNonVirtuals@Services@Xbox@Microsoft@winrt@@@Services@Xbox@Microsoft@winrt@@QEBA?AU0Marketplace@2345@XZ(this, result);
}

/*
==============
winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext
==============
*/
void winrt::Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext(winrt::Microsoft::Xbox::Services::XboxLiveContext *this, const winrt::Windows::Xbox::System::User *user)
{
  HRESULT ActivationFactory_0; 
  HRESULT v5; 
  __int64 v6; 
  __int64 v7[3]; 
  HSTRING string; 
  HSTRING_HEADER hstringHeader; 

  v7[1] = -2i64;
  v7[2] = (__int64)this;
  if ( __TSS0__1____get_activation_factory_UXboxLiveContext_Services_Xbox_Microsoft_winrt__U__IXboxLiveContextFactory_2345__winrt__YA_AU__IXboxLiveContextFactory_Services_Xbox_Microsoft_1_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&__TSS0__1____get_activation_factory_UXboxLiveContext_Services_Xbox_Microsoft_winrt__U__IXboxLiveContextFactory_2345__winrt__YA_AU__IXboxLiveContextFactory_Services_Xbox_Microsoft_1_XZ_4HA);
    if ( __TSS0__1____get_activation_factory_UXboxLiveContext_Services_Xbox_Microsoft_winrt__U__IXboxLiveContextFactory_2345__winrt__YA_AU__IXboxLiveContextFactory_Services_Xbox_Microsoft_1_XZ_4HA == -1 )
    {
      winrt::impl::get_agile_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>(&`winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory);
      j_atexit(winrt::get_activation_factory_winrt::Microsoft::Xbox::Services::XboxLiveContext_winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory__::_2_::_dynamic_atexit_destructor_for__factory__);
      j__Init_thread_footer(&__TSS0__1____get_activation_factory_UXboxLiveContext_Services_Xbox_Microsoft_winrt__U__IXboxLiveContextFactory_2345__winrt__YA_AU__IXboxLiveContextFactory_Services_Xbox_Microsoft_1_XZ_4HA);
    }
  }
  if ( `winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory.m_ptr )
  {
    v7[0] = (__int64)`winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory.m_ptr;
    `winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory.m_ptr->AddRef(`winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory.m_ptr);
  }
  else
  {
    WindowsCreateStringReference_0(L"Microsoft.Xbox.Services.XboxLiveContext", LODWORD(`winrt::get_activation_factory<winrt::Microsoft::Xbox::Services::XboxLiveContext,winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>'::`2'::factory.m_ptr) + 39, &hstringHeader, &string);
    v7[0] = 0i64;
    ActivationFactory_0 = RoGetActivationFactory_0(string, &GUID_bedc781e_a29e_3333_9d97_7af19812192d, v7);
    if ( ActivationFactory_0 )
      winrt::impl::throw_hresult(ActivationFactory_0);
  }
  this->m_ptr = NULL;
  v5 = (*(__int64 (__fastcall **)(__int64, IUnknown *, winrt::Microsoft::Xbox::Services::XboxLiveContext *))(*(_QWORD *)v7[0] + 48i64))(v7[0], user->m_ptr, this);
  if ( v5 )
    winrt::impl::throw_hresult(v5);
  v6 = v7[0];
  if ( v7[0] )
  {
    v7[0] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  }
}

/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::CatalogService
==============
*/
winrt::Microsoft::Xbox::Services::Marketplace::CatalogService *winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::CatalogService(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *this, winrt::Microsoft::Xbox::Services::Marketplace::CatalogService *result)
{
  winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *v3; 
  HRESULT v4; 

  result->m_ptr = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::Microsoft::Xbox::Services::Marketplace::CatalogService *))(**(_QWORD **)v3 + 192i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>::CreateInstance
==============
*/
winrt::Microsoft::Xbox::Services::XboxLiveContext *winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory>::CreateInstance(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory> *this, winrt::Microsoft::Xbox::Services::XboxLiveContext *result, const winrt::Windows::Xbox::System::User *user)
{
  winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextFactory<winrt::Microsoft::Xbox::Services::__IXboxLiveContextFactory> *v4; 
  HRESULT v5; 

  result->m_ptr = NULL;
  v4 = this - 8;
  if ( !this )
    v4 = NULL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, IUnknown *, winrt::Microsoft::Xbox::Services::XboxLiveContext *))(**(_QWORD **)v4 + 48i64))(*(_QWORD *)v4, user->m_ptr, result);
  if ( v5 )
    winrt::impl::throw_hresult(v5);
  return result;
}

/*
==============
winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::InventoryService
==============
*/
winrt::Microsoft::Xbox::Services::Marketplace::InventoryService *winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals>::InventoryService(winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *this, winrt::Microsoft::Xbox::Services::Marketplace::InventoryService *result)
{
  winrt::Microsoft::Xbox::Services::impl___IXboxLiveContextPublicNonVirtuals<winrt::Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals> *v3; 
  HRESULT v4; 

  result->m_ptr = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::Microsoft::Xbox::Services::Marketplace::InventoryService *))(**(_QWORD **)v3 + 200i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

