/*
==============
ClStatic::IsFirstActiveGameLocalClient
==============
*/

bool __fastcall ClStatic::IsFirstActiveGameLocalClient(ClStatic *this, LocalClientNum_t localClientNum)
{
  return ?IsFirstActiveGameLocalClient@ClStatic@@QEBA_NW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClStatic::GetFirstActiveGameLocalClient
==============
*/

LocalClientNum_t __fastcall ClStatic::GetFirstActiveGameLocalClient(ClStatic *this)
{
  return ?GetFirstActiveGameLocalClient@ClStatic@@QEBA?AW4LocalClientNum_t@@XZ(this);
}

/*
==============
ClStatic::GetServerFrameDuration
==============
*/

int __fastcall ClStatic::GetServerFrameDuration(ClStatic *this)
{
  return ?GetServerFrameDuration@ClStatic@@QEBAHXZ(this);
}

/*
==============
ClStatic::GetServerFrameDuration
==============
*/
__int64 ClStatic::GetServerFrameDuration(ClStatic *this)
{
  if ( this->m_serverFrameDuration )
    return (unsigned int)this->m_serverFrameDuration;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
    __debugbreak();
  return (unsigned int)this->m_serverFrameDuration;
}

/*
==============
ClStatic::GetFirstActiveGameLocalClient
==============
*/
__int64 ClStatic::GetFirstActiveGameLocalClient(ClStatic *this)
{
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( this->m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 372, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( this->m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 373, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  return (unsigned int)this->m_localClientsActive.firstActiveIndex;
}

/*
==============
ClStatic::IsFirstActiveGameLocalClient
==============
*/
bool ClStatic::IsFirstActiveGameLocalClient(ClStatic *this, LocalClientNum_t localClientNum)
{
  float v2; 
  float v7; 

  v2 = cl_maxLocalClients;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v7 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
    v2 = cl_maxLocalClients;
  }
  if ( v2 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( this->m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( this->m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  return localClientNum == this->m_localClientsActive.firstActiveIndex;
}

