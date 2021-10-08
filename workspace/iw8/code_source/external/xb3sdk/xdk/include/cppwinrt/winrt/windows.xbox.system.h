/*
==============
winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics>::GetUserById
==============
*/

winrt::Windows::Xbox::System::User *__fastcall winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics>::GetUserById(winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics> *this, winrt::Windows::Xbox::System::User *result, unsigned int id)
{
  return ?GetUserById@?$impl_IUserStatics@UIUserStatics@System@Xbox@Windows@winrt@@@System@Xbox@Windows@winrt@@QEBA?AUUser@2345@I@Z(this, result, id);
}

/*
==============
winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser>::XboxUserId
==============
*/

winrt::hstring *__fastcall winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser>::XboxUserId(winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser> *this, winrt::hstring *result)
{
  return ?XboxUserId@?$impl_IUser@UIUser@System@Xbox@Windows@winrt@@@System@Xbox@Windows@winrt@@QEBA?AUhstring@5@XZ(this, result);
}

/*
==============
winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics>::GetUserById
==============
*/
winrt::Windows::Xbox::System::User *winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics>::GetUserById(winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics> *this, winrt::Windows::Xbox::System::User *result, unsigned int id)
{
  winrt::Windows::Xbox::System::impl_IUserStatics<winrt::Windows::Xbox::System::IUserStatics> *v4; 
  HRESULT v5; 

  result->m_ptr = NULL;
  v4 = this - 8;
  if ( !this )
    v4 = NULL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, winrt::Windows::Xbox::System::User *))(**(_QWORD **)v4 + 112i64))(*(_QWORD *)v4, id, result);
  if ( v5 )
    winrt::impl::throw_hresult(v5);
  return result;
}

/*
==============
winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser>::XboxUserId
==============
*/
winrt::hstring *winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser>::XboxUserId(winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser> *this, winrt::hstring *result)
{
  winrt::Windows::Xbox::System::impl_IUser<winrt::Windows::Xbox::System::IUser> *v3; 
  HRESULT v4; 

  result->m_handle.m_value = NULL;
  v3 = this - 8;
  if ( !this )
    v3 = NULL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, winrt::hstring *))(**(_QWORD **)v3 + 120i64))(*(_QWORD *)v3, result);
  if ( v4 )
    winrt::impl::throw_hresult(v4);
  return result;
}

