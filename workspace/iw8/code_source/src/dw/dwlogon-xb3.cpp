/*
==============
dwLogOn_Shutdown
==============
*/

void dwLogOn_Shutdown(void)
{
  ?dwLogOn_Shutdown@@YAXXZ();
}

/*
==============
dwLogOnStart
==============
*/

void __fastcall dwLogOnStart(const int controllerIndex)
{
  ?dwLogOnStart@@YAXH@Z(controllerIndex);
}

/*
==============
dwGetLogOnStatus
==============
*/

DWOnlineStatus __fastcall dwGetLogOnStatus(const int controllerIndex)
{
  return ?dwGetLogOnStatus@@YA?AW4DWOnlineStatus@@H@Z(controllerIndex);
}

/*
==============
dwLogOn_Init
==============
*/

void dwLogOn_Init(void)
{
  ?dwLogOn_Init@@YAXXZ();
}

/*
==============
dwGetLogOnStatus
==============
*/
__int64 dwGetLogOnStatus(const int controllerIndex)
{
  dwLogonHSM_xb3 *v1; 

  v1 = &g_dwLogonHSMs[controllerIndex];
  if ( dwLogOnHSM_base::HSM_IsInState(v1, st_wait_for_demonware_auth_complete) )
    return 2i64;
  else
    return !dwLogOnHSM_base::HSM_IsInState(v1, st_invite_none);
}

/*
==============
dwLogOnStart
==============
*/
void dwLogOnStart(const int controllerIndex)
{
  dwLogonHSM_xb3::LogOnStart(&g_dwLogonHSMs[controllerIndex]);
}

/*
==============
dwLogOn_Init
==============
*/
void dwLogOn_Init(void)
{
  int v0; 
  dwLogonHSM_xb3 *v1; 

  v0 = 0;
  v1 = g_dwLogonHSMs;
  do
    dwLogonHSM_xb3::Initialize(v1++, v0++);
  while ( v0 < 8 );
}

/*
==============
dwLogOn_Shutdown
==============
*/
void dwLogOn_Shutdown(void)
{
  dwLogonHSM_xb3 *v0; 
  __int64 v1; 

  v0 = g_dwLogonHSMs;
  v1 = 8i64;
  do
  {
    dwLogonHSM_xb3::Shutdown(v0++);
    --v1;
  }
  while ( v1 );
}

