/*
==============
winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::AbsoluteUri
==============
*/

winrt::hstring *__fastcall winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::AbsoluteUri(winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass> *this, winrt::hstring *result)
{
  return ?AbsoluteUri@?$impl_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBA?AUhstring@4@XZ(this, result);
}

/*
==============
winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::AbsoluteUri
==============
*/
winrt::hstring *winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::AbsoluteUri(winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass> *this, winrt::hstring *result)
{
  winrt::Windows::Foundation::impl_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass> *v3; 
  HRESULT v4; 

  result->m_handle.m_value = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::hstring *))(**(_QWORD **)v3 + 48i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

