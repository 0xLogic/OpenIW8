/*
==============
IWHavokError::message
==============
*/

int __fastcall IWHavokError::message(IWHavokError *this, hkError::Message msg, int id, const char *description, const char *file, int line)
{
  return ?message@IWHavokError@@UEAAHW4Message@hkError@@HPEBD1H@Z(this, msg, id, description, file, line);
}

/*
==============
IWHavokError::IWHavokError
==============
*/

void __fastcall IWHavokError::IWHavokError(IWHavokError *this, void (__fastcall *errorReportFunction)(const char *, void *), void *errorReportObject)
{
  ??0IWHavokError@@QEAA@P6AXPEBDPEAX@Z1@Z(this, errorReportFunction, errorReportObject);
}

/*
==============
IWHavokError::IWHavokError
==============
*/
void IWHavokError::IWHavokError(IWHavokError *this, void (*errorReportFunction)(const char *, void *), void *errorReportObject)
{
  hkDefaultError::hkDefaultError(this, errorReportFunction, errorReportObject);
  this->__vftable = (IWHavokError_vtbl *)&IWHavokError::`vftable';
}

/*
==============
IWHavokError::message
==============
*/
__int64 IWHavokError::message(IWHavokError *this, hkError::Message msg, int id, const char *description, const char *file, int line)
{
  unsigned int v7; 
  __int32 v9; 
  __int32 v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  bool IsDebugCodeReadingServer; 
  const char *v17; 
  const char *v18; 
  const char *ErrorString; 
  __int64 v20; 
  char v21; 

  v7 = id;
  if ( id == -1 && this->m_sectionIds.m_size )
    v7 = this->m_sectionIds.m_data[this->m_sectionIds.m_size - 1];
  if ( !this->isEnabled(this, &v21, v7)->m_bool )
    return 0i64;
  if ( msg == MESSAGE_ALL )
  {
    ErrorString = Physics_GetErrorString();
    Com_Printf(20, "Havok Internal Report %x: %s (%s)\n", v7, description, ErrorString);
    return 0i64;
  }
  v9 = msg - 1;
  if ( !v9 )
  {
    v18 = Physics_GetErrorString();
    Com_Printf(20, "Havok Internal Warning %x: %s (%s)\n", v7, description, v18);
    return 0i64;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    IsDebugCodeReadingServer = Physics_IsDebugCodeReadingServer();
    v17 = Physics_GetErrorString();
    if ( IsDebugCodeReadingServer )
    {
      Com_Printf(20, "Havok Internal Assert %x: %s (%s): %s: %i", v7, description, v17, file, line);
      return 0i64;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicserror.cpp", 69, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Havok Internal Assert %x: %s (%s): %s: %i", v7, description, v17, file, line) )
    {
      __debugbreak();
      return 0i64;
    }
    return 0i64;
  }
  if ( v10 != 1 )
    return 0i64;
  v11 = Physics_GetErrorString();
  v12 = line;
  v13 = file;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicserror.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Havok Internal Error %x: %s (%s): %s: %i", v7, description, v11, file, line) )
    __debugbreak();
  v14 = Physics_GetErrorString();
  LODWORD(v20) = v12;
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144265618, 1336i64, v7, description, v14, v13, v20);
  return 0i64;
}

