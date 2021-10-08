/*
==============
CL_DevJoin_Init
==============
*/

void __fastcall CL_DevJoin_Init(const char *hostName)
{
  ?CL_DevJoin_Init@@YAXPEBD@Z(hostName);
}

/*
==============
CL_DevJoin_Start
==============
*/

void CL_DevJoin_Start(void)
{
  ?CL_DevJoin_Start@@YAXXZ();
}

/*
==============
CL_DevJoin_Frame
==============
*/

void __fastcall CL_DevJoin_Frame(const LocalClientNum_t localClientNum)
{
  ?CL_DevJoin_Frame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_DevJoin_IsEnabled
==============
*/

bool __fastcall CL_DevJoin_IsEnabled()
{
  return ?CL_DevJoin_IsEnabled@@YA_NXZ();
}

/*
==============
CL_DevJoin_Frame
==============
*/
void CL_DevJoin_Frame(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v3; 
  ClServerInfo *v4; 
  XSESSION_INFO hostInfo; 

  if ( s_status == DEV_JOIN_ACTIVE && CL_Mgr_IsClientActive(localClientNum) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( dwGetLogOnStatus(ControllerFromClient) != DW_LIVE_CONNECTING )
    {
      if ( Sys_Milliseconds() > s_nextBroadcastTimeMS )
      {
        CL_MainMP_LocalServers(localClientNum);
        s_nextBroadcastTimeMS = Sys_Milliseconds() + 5000;
      }
      v3 = 0;
      if ( cls.numlocalservers > 0 )
      {
        while ( 1 )
        {
          v4 = &cls.localServers[v3];
          if ( !I_stricmp(s_hostName, v4->hostName) )
            break;
          if ( ++v3 >= cls.numlocalservers )
            return;
        }
        s_status = DEV_JOIN_COMPLETE;
        XSESSION_INFO::XSESSION_INFO(&hostInfo, &v4->xninfo, &v4->xnaddr);
        Party_StartLANServerJoin(localClientNum, &hostInfo);
        bdSecurityKey::~bdSecurityKey(&hostInfo.m_security.m_key);
        bdSecurityID::~bdSecurityID(&hostInfo.m_security.m_id);
      }
    }
  }
}

/*
==============
CL_DevJoin_Init
==============
*/
void CL_DevJoin_Init(const char *hostName)
{
  __int64 v2; 

  if ( !hostName )
    goto LABEL_6;
  v2 = -1i64;
  do
    ++v2;
  while ( hostName[v2] );
  if ( (_DWORD)v2 )
  {
    Dvar_SetBool_Internal(DVARBOOL_systemlink, 1);
    Core_strcpy(s_hostName, 0x400ui64, hostName);
    s_status = DEV_JOIN_INITIALIZED;
  }
  else
  {
LABEL_6:
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D08180, 526i64);
  }
}

/*
==============
CL_DevJoin_IsEnabled
==============
*/
bool CL_DevJoin_IsEnabled()
{
  return s_status != DEV_JOIN_INACTIVE;
}

/*
==============
CL_DevJoin_Start
==============
*/
void CL_DevJoin_Start(void)
{
  if ( s_status < DEV_JOIN_INITIALIZED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_devjoin.cpp", 44, ASSERT_TYPE_ASSERT, "(s_status >= DEV_JOIN_INITIALIZED)", (const char *)&queryFormat, "s_status >= DEV_JOIN_INITIALIZED") )
    __debugbreak();
  s_status = DEV_JOIN_ACTIVE;
}

