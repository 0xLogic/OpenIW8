/*
==============
UI_ExecuteBrowserCallback
==============
*/

void __fastcall UI_ExecuteBrowserCallback(bool bBrowserSuccess)
{
  ?UI_ExecuteBrowserCallback@@YAX_N@Z(bBrowserSuccess);
}

/*
==============
UI_BrowserStateClear
==============
*/

void UI_BrowserStateClear(void)
{
  ?UI_BrowserStateClear@@YAXXZ();
}

/*
==============
UI_SampleBrowserCallback
==============
*/

void __fastcall UI_SampleBrowserCallback(LocalClientNum_t localClientNum, bool bBrowserSuccess)
{
  ?UI_SampleBrowserCallback@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, bBrowserSuccess);
}

/*
==============
UI_ShowBrowser_f
==============
*/

void __fastcall UI_ShowBrowser_f()
{
  ?UI_ShowBrowser_f@@YAXXZ();
}

/*
==============
UI_BrowserStateClear
==============
*/
void UI_BrowserStateClear(void)
{
  s_browserState.active = 0;
  s_browserState.startURL = (char *)&queryFormat.fmt + 3;
  s_browserState.endURL = (char *)&queryFormat.fmt + 3;
  s_browserState.callback = NULL;
  s_browserState.owningController = 8;
}

/*
==============
UI_ExecuteBrowserCallback
==============
*/
void UI_ExecuteBrowserCallback(bool bBrowserSuccess)
{
  void (__fastcall *callback)(LocalClientNum_t, bool); 
  LocalClientNum_t ClientFromController; 

  callback = s_browserState.callback;
  if ( s_browserState.callback )
  {
    if ( s_browserState.active )
    {
      ClientFromController = CL_Mgr_GetClientFromController(s_browserState.owningController);
      callback(ClientFromController, bBrowserSuccess);
    }
  }
}

/*
==============
UI_SampleBrowserCallback
==============
*/
void UI_SampleBrowserCallback(LocalClientNum_t localClientNum, bool bBrowserSuccess)
{
  LocalClientNum_t ClientFromController; 
  const char *v4; 

  ClientFromController = CL_Mgr_GetClientFromController(localClientNum);
  v4 = "Browser callback called after browser successfully open and closed for controller %d\n";
  if ( !bBrowserSuccess )
    v4 = "Browser callback called after failed browser open for controller %d\n";
  Com_Printf(16, v4, (unsigned int)ClientFromController);
}

/*
==============
UI_ShowBrowser_f
==============
*/
void UI_ShowBrowser_f(void)
{
  int v0; 
  UI_BROWSER_TYPE v1; 
  const char *v2; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = Cmd_ArgInt(1);
    v2 = Cmd_Argv(2);
    UI_ShowBrowser(v0, v2, (const char *)&queryFormat.fmt + 3, v1, UI_SampleBrowserCallback);
  }
  else
  {
    Com_PrintError(16, "usage: openbrowser <browserType> <url>\n");
  }
}

