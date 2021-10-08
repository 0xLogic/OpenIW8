/*
==============
FenceObject::IsPassing
==============
*/

bool __fastcall FenceObject::IsPassing(FenceObject *this)
{
  return ?IsPassing@FenceObject@@QEBA_NXZ(this);
}

/*
==============
FenceObject::IsComplete
==============
*/

bool __fastcall FenceObject::IsComplete(FenceObject *this)
{
  return ?IsComplete@FenceObject@@QEBA_NXZ(this);
}

/*
==============
FenceObject::AreDependenciesMet
==============
*/

bool __fastcall FenceObject::AreDependenciesMet(FenceObject *this)
{
  return ?AreDependenciesMet@FenceObject@@QEBA_NXZ(this);
}

/*
==============
FenceObject::GetErrorCode
==============
*/

int __fastcall FenceObject::GetErrorCode(FenceObject *this)
{
  return ?GetErrorCode@FenceObject@@UEAAHXZ(this);
}

/*
==============
FenceObject::IsFailed
==============
*/

bool __fastcall FenceObject::IsFailed(FenceObject *this)
{
  return ?IsFailed@FenceObject@@QEBA_NXZ(this);
}

/*
==============
FenceObject::UpdateIsPassingInternal
==============
*/

void __fastcall FenceObject::UpdateIsPassingInternal(FenceObject *this)
{
  ?UpdateIsPassingInternal@FenceObject@@UEAAXXZ(this);
}

/*
==============
FenceObject::UpdateDependencies
==============
*/

void __fastcall FenceObject::UpdateDependencies(FenceObject *this, unsigned __int64 passingFlags, unsigned __int64 failedFlags)
{
  ?UpdateDependencies@FenceObject@@UEAAX_K0@Z(this, passingFlags, failedFlags);
}

/*
==============
FenceObject::AreDependenciesMet
==============
*/
_BOOL8 FenceObject::AreDependenciesMet(FenceObject *this)
{
  int m_controllerIndex; 
  int v4; 

  if ( this->m_controllerIndex < 8u )
    return this->m_dependenciesMet;
  v4 = 8;
  m_controllerIndex = this->m_controllerIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, v4) )
    __debugbreak();
  return this->m_dependenciesMet;
}

/*
==============
FenceObject::IsComplete
==============
*/
bool FenceObject::IsComplete(FenceObject *this)
{
  int m_controllerIndex; 
  int v4; 

  if ( this->m_controllerIndex >= 8u )
  {
    v4 = 8;
    m_controllerIndex = this->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, v4) )
      __debugbreak();
  }
  return this->m_isPassing || this->m_failed;
}

/*
==============
FenceObject::IsFailed
==============
*/
_BOOL8 FenceObject::IsFailed(FenceObject *this)
{
  int m_controllerIndex; 
  int v4; 

  if ( this->m_controllerIndex < 8u )
    return this->m_failed;
  v4 = 8;
  m_controllerIndex = this->m_controllerIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, v4) )
    __debugbreak();
  return this->m_failed;
}

/*
==============
FenceObject::IsPassing
==============
*/
_BOOL8 FenceObject::IsPassing(FenceObject *this)
{
  int m_controllerIndex; 
  int v4; 

  if ( this->m_controllerIndex < 8u )
    return this->m_isPassing;
  v4 = 8;
  m_controllerIndex = this->m_controllerIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, v4) )
    __debugbreak();
  return this->m_isPassing;
}

/*
==============
FenceObject::GetErrorCode
==============
*/
__int64 FenceObject::GetErrorCode(FenceObject *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
FenceObject::UpdateIsPassingInternal
==============
*/
void FenceObject::UpdateIsPassingInternal(FenceObject *this)
{
  ;
}

/*
==============
FenceObject::UpdateDependencies
==============
*/
void FenceObject::UpdateDependencies(FenceObject *this, unsigned __int64 passingFlags, unsigned __int64 failedFlags)
{
  unsigned __int64 m_fenceDependencies; 

  m_fenceDependencies = this->m_fenceDependencies;
  this->m_dependenciesMet = (passingFlags & m_fenceDependencies) == m_fenceDependencies;
  this->m_failed = (m_fenceDependencies & failedFlags) != 0 && (m_fenceDependencies & (failedFlags | passingFlags)) == m_fenceDependencies;
}

