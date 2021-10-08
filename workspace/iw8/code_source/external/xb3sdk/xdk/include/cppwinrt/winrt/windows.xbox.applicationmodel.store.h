/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowDetailsAsync
==============
*/

winrt::Windows::Foundation::IAsyncAction *__fastcall winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowDetailsAsync(winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *this, winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *productId)
{
  return ?ShowDetailsAsync@?$impl_IProductStatics@UIProductStatics@Store@ApplicationModel@Xbox@Windows@winrt@@@Store@ApplicationModel@Xbox@Windows@winrt@@QEBA?AUIAsyncAction@Foundation@56@AEBUIUser@System@456@Uhstring_view@6@@Z(this, result, requestingUser, productId);
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowPurchaseAsync
==============
*/

winrt::Windows::Foundation::IAsyncAction *__fastcall winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowPurchaseAsync(winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *this, winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *offer)
{
  return ?ShowPurchaseAsync@?$impl_IProductStatics@UIProductStatics@Store@ApplicationModel@Xbox@Windows@winrt@@@Store@ApplicationModel@Xbox@Windows@winrt@@QEBA?AUIAsyncAction@Foundation@56@AEBUIUser@System@456@Uhstring_view@6@@Z(this, result, requestingUser, offer);
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowDetailsAsync
==============
*/

winrt::Windows::Foundation::IAsyncAction *__fastcall winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowDetailsAsync(winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *productId)
{
  return ?ShowDetailsAsync@Product@Store@ApplicationModel@Xbox@Windows@winrt@@SA?AUIAsyncAction@Foundation@56@AEBUIUser@System@456@Uhstring_view@6@@Z(result, requestingUser, productId);
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowPurchaseAsync
==============
*/

winrt::Windows::Foundation::IAsyncAction *__fastcall winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowPurchaseAsync(winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *offer)
{
  return ?ShowPurchaseAsync@Product@Store@ApplicationModel@Xbox@Windows@winrt@@SA?AUIAsyncAction@Foundation@56@AEBUIUser@System@456@Uhstring_view@6@@Z(result, requestingUser, offer);
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowDetailsAsync
==============
*/
winrt::Windows::Foundation::IAsyncAction *winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowDetailsAsync(winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *this, winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *productId)
{
  winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *v7; 
  HRESULT v10; 

  result->m_ptr = NULL;
  v7 = this - 8;
  if ( !this )
    v7 = NULL;
  __asm
  {
    vmovups ymm0, ymmword ptr [r9]
    vmovq   r8, xmm0
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, IUnknown *, __int64, winrt::Windows::Foundation::IAsyncAction *, int, __int64))(**(_QWORD **)v7 + 56i64))(*(_QWORD *)v7, requestingUser->m_ptr, _R8, result, 1, -2i64);
  if ( v10 )
    winrt::impl::throw_hresult(v10);
  return result;
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowDetailsAsync
==============
*/
winrt::Windows::Foundation::IAsyncAction *winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowDetailsAsync(winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *productId)
{
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *v6; 
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *v7; 
  HRESULT v8; 
  IUnknown *m_ptr; 
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics resulta; 

  v6 = winrt::get_activation_factory<winrt::Windows::Xbox::ApplicationModel::Store::Product,winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>(&resulta);
  result->m_ptr = NULL;
  v7 = NULL;
  if ( v6 != (winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *)-8i64 )
    v7 = v6;
  v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown *, HSTRING__ *, winrt::Windows::Foundation::IAsyncAction *, int, __int64))v7->m_ptr->__vftable[2].AddRef)(v7->m_ptr, requestingUser->m_ptr, productId->m_handle, result, 2, -2i64);
  if ( v8 )
    winrt::impl::throw_hresult(v8);
  m_ptr = resulta.m_ptr;
  if ( resulta.m_ptr )
  {
    resulta.m_ptr = NULL;
    m_ptr->Release(m_ptr);
  }
  return result;
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowPurchaseAsync
==============
*/
winrt::Windows::Foundation::IAsyncAction *winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>::ShowPurchaseAsync(winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *this, winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *offer)
{
  winrt::Windows::Xbox::ApplicationModel::Store::impl_IProductStatics<winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics> *v7; 
  HRESULT v10; 

  result->m_ptr = NULL;
  v7 = this - 8;
  if ( !this )
    v7 = NULL;
  __asm
  {
    vmovups ymm0, ymmword ptr [r9]
    vmovq   r8, xmm0
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, IUnknown *, __int64, winrt::Windows::Foundation::IAsyncAction *, int, __int64))(**(_QWORD **)v7 + 48i64))(*(_QWORD *)v7, requestingUser->m_ptr, _R8, result, 1, -2i64);
  if ( v10 )
    winrt::impl::throw_hresult(v10);
  return result;
}

/*
==============
winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowPurchaseAsync
==============
*/
winrt::Windows::Foundation::IAsyncAction *winrt::Windows::Xbox::ApplicationModel::Store::Product::ShowPurchaseAsync(winrt::Windows::Foundation::IAsyncAction *result, const winrt::Windows::Xbox::System::IUser *requestingUser, winrt::hstring_view *offer)
{
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *v6; 
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *v7; 
  HRESULT v8; 
  IUnknown *m_ptr; 
  winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics resulta; 

  v6 = winrt::get_activation_factory<winrt::Windows::Xbox::ApplicationModel::Store::Product,winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics>(&resulta);
  result->m_ptr = NULL;
  v7 = NULL;
  if ( v6 != (winrt::Windows::Xbox::ApplicationModel::Store::IProductStatics *)-8i64 )
    v7 = v6;
  v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown *, HSTRING__ *, winrt::Windows::Foundation::IAsyncAction *, int, __int64))v7->m_ptr->__vftable[2].QueryInterface)(v7->m_ptr, requestingUser->m_ptr, offer->m_handle, result, 2, -2i64);
  if ( v8 )
    winrt::impl::throw_hresult(v8);
  m_ptr = resulta.m_ptr;
  if ( resulta.m_ptr )
  {
    resulta.m_ptr = NULL;
    m_ptr->Release(m_ptr);
  }
  return result;
}

