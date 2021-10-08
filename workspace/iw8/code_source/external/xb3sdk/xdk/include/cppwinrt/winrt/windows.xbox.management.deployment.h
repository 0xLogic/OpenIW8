/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager>::FindPackages
==============
*/

winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *__fastcall winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager>::FindPackages(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager> *this, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *result, winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter filter)
{
  return ?FindPackages@?$impl_IDownloadableContentPackageManager@UIDownloadableContentPackageManager@Deployment@Management@Xbox@Windows@winrt@@@Deployment@Management@Xbox@Windows@winrt@@QEBA?AU?$IVectorView@UIDownloadableContentPackage@Deployment@Management@Xbox@Windows@winrt@@@Collections@Foundation@56@W4InstalledPackagesFilter@23456@@Z(this, result, filter);
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ContentId
==============
*/

winrt::hstring *__fastcall winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ContentId(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, winrt::hstring *result)
{
  return ?ContentId@?$impl_IDownloadableContentPackage@UIDownloadableContentPackage@Deployment@Management@Xbox@Windows@winrt@@@Deployment@Management@Xbox@Windows@winrt@@QEBA?AUhstring@6@XZ(this, result);
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ProductId
==============
*/

winrt::hstring *__fastcall winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ProductId(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, winrt::hstring *result)
{
  return ?ProductId@?$impl_IDownloadableContentPackage@UIDownloadableContentPackage@Deployment@Management@Xbox@Windows@winrt@@@Deployment@Management@Xbox@Windows@winrt@@QEBA?AUhstring@6@XZ(this, result);
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::CheckLicense
==============
*/

bool __fastcall winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::CheckLicense(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, bool *isTrial)
{
  return ?CheckLicense@?$impl_IDownloadableContentPackage@UIDownloadableContentPackage@Deployment@Management@Xbox@Windows@winrt@@@Deployment@Management@Xbox@Windows@winrt@@QEBA_NAEA_N@Z(this, isTrial);
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::CheckLicense
==============
*/
__int64 winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::CheckLicense(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, bool *isTrial)
{
  winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *v2; 
  HRESULT v3; 
  unsigned __int8 v5; 

  v5 = 0;
  v2 = this - 8;
  if ( !this )
    v2 = NULL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, bool *, unsigned __int8 *))(**(_QWORD **)v2 + 152i64))(*(_QWORD *)v2, isTrial, &v5);
  if ( v3 )
    winrt::impl::throw_hresult(v3);
  return v5;
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ContentId
==============
*/
winrt::hstring *winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ContentId(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, winrt::hstring *result)
{
  winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *v3; 
  HRESULT v4; 

  result->m_handle.m_value = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::hstring *))(**(_QWORD **)v3 + 56i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager>::FindPackages
==============
*/
winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager>::FindPackages(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager> *this, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *result, winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter filter)
{
  winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackageManager<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageManager> *v4; 
  HRESULT v5; 

  result->m_ptr = NULL;
  v4 = this - 8;
  if ( !this )
    v4 = NULL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *))(**(_QWORD **)v4 + 48i64))(*(_QWORD *)v4, (unsigned int)filter, result);
  if ( v5 )
    winrt::impl::throw_hresult(v5);
  return result;
}

/*
==============
winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ProductId
==============
*/
winrt::hstring *winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage>::ProductId(winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *this, winrt::hstring *result)
{
  winrt::Windows::Xbox::Management::Deployment::impl_IDownloadableContentPackage<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> *v3; 
  HRESULT v4; 

  result->m_handle.m_value = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::hstring *))(**(_QWORD **)v3 + 64i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

