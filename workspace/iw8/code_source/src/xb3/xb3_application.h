/*
==============
DX::ThrowIfFailed
==============
*/

void __fastcall DX::ThrowIfFailed(HRESULT hr)
{
  ?ThrowIfFailed@DX@@YAXJ@Z(hr);
}

/*
==============
DX::ThrowIfFailed
==============
*/
void DX::ThrowIfFailed(__int64 hr)
{
  void *pExceptionObject; 
  const volatile Platform::Object *Exception; 

  if ( (int)hr < 0 )
  {
    Exception = (const volatile Platform::Object *)Platform::Exception::CreateException(hr);
    pExceptionObject = __abi_winrt_ptr_ctor(Exception);
    CxxThrowException_0(&pExceptionObject, (_ThrowInfo *)&TI9PE_AAVException_Platform__);
  }
}

