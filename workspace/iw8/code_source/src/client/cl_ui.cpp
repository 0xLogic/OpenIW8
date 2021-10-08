/*
==============
CL_InitUI
==============
*/

void CL_InitUI(void)
{
  ?CL_InitUI@@YAXXZ();
}

/*
==============
CL_ShutdownUI
==============
*/

int __fastcall CL_ShutdownUI()
{
  return ?CL_ShutdownUI@@YAHXZ();
}

/*
==============
CL_InitUI
==============
*/
void CL_InitUI(void)
{
  bool v0; 
  PublisherVariableManager *Instance; 
  int v2; 

  UI_Init();
  LUI_CoD_Shutdown();
  v0 = Com_FrontEnd_IsInFrontEnd();
  if ( DB_DevFastBoot_DevmapBootSkipUI() )
  {
    CL_SetLocalClientActive(LOCAL_CLIENT_0, 1);
    v0 = 0;
  }
  LUI_CoD_Init(v0, 0);
  if ( !s_publisherVariableSubscriptionInitialized )
  {
    s_publisherVariableSubscriptionInitialized = 1;
    Instance = PublisherVariableManager::GetInstance();
    PublisherVariableManager::AddRetrievedCallback(Instance, LUI_CoD_Update_Publisher_Variables);
  }
  v2 = R_PopRemoteScreenUpdate();
  cls.uiStarted = 1;
  R_PushRemoteScreenUpdate(v2);
}

/*
==============
CL_ShutdownUI
==============
*/
__int64 CL_ShutdownUI()
{
  __int64 result; 

  if ( !cls.uiStarted )
    return 0i64;
  CL_Keys_RemoveCatcher(LOCAL_CLIENT_0, -65);
  CL_Keys_RemoveCatcher(LOCAL_CLIENT_0, -513);
  CL_Keys_RemoveCatcher(LOCAL_CLIENT_0, -257);
  LUI_CoD_Shutdown();
  result = 1i64;
  cls.uiStarted = 0;
  return result;
}

