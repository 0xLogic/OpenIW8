/*
==============
DB_GetMyChanges_ActionMessage
==============
*/

const char *__fastcall DB_GetMyChanges_ActionMessage(const MyChangesAction action)
{
  return ?DB_GetMyChanges_ActionMessage@@YAPEBDW4MyChangesAction@@@Z(action);
}

/*
==============
DB_GetXAssetMyChangesAction
==============
*/

MyChangesAction __fastcall DB_GetXAssetMyChangesAction(const int type)
{
  return ?DB_GetXAssetMyChangesAction@@YA?AW4MyChangesAction@@H@Z(type);
}

/*
==============
DB_GetMyChangesIconDirective
==============
*/

const char *__fastcall DB_GetMyChangesIconDirective(const MyChangesAction action, vec4_t *color)
{
  return ?DB_GetMyChangesIconDirective@@YAPEBDW4MyChangesAction@@AEATvec4_t@@@Z(action, color);
}

/*
==============
DB_SetMyChangesProgressCallback
==============
*/

void __fastcall DB_SetMyChangesProgressCallback(void (__fastcall *beginFunc)(), void (__fastcall *endFunc)())
{
  ?DB_SetMyChangesProgressCallback@@YAXP6AXXZ0@Z(beginFunc, endFunc);
}

/*
==============
DB_MyChanges_Reload
==============
*/

void DB_MyChanges_Reload(void)
{
  ?DB_MyChanges_Reload@@YAXXZ();
}

/*
==============
DB_GetMyChangesBeginCallback
==============
*/

void (__fastcall *__fastcall DB_GetMyChangesBeginCallback())()
{
  return ?DB_GetMyChangesBeginCallback@@YAP6AXXZXZ();
}

/*
==============
DB_SetMyChangesReportCallback
==============
*/

void __fastcall DB_SetMyChangesReportCallback(void (__fastcall *func)(const XAssetType, const char *, const MyChangesAction))
{
  ?DB_SetMyChangesReportCallback@@YAXP6AXW4XAssetType@@PEBDW4MyChangesAction@@@Z@Z(func);
}

/*
==============
DB_MyChanges_LoadAsset
==============
*/

void __fastcall DB_MyChanges_LoadAsset(const XAssetType type, const char *name)
{
  ?DB_MyChanges_LoadAsset@@YAXW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_GetMyChangesEndCallback
==============
*/

void (__fastcall *__fastcall DB_GetMyChangesEndCallback())()
{
  return ?DB_GetMyChangesEndCallback@@YAP6AXXZXZ();
}

/*
==============
DB_GetMyChangesReportCallback
==============
*/

void (__fastcall *__fastcall DB_GetMyChangesReportCallback())(const XAssetType, const char *, const MyChangesAction)
{
  return ?DB_GetMyChangesReportCallback@@YAP6AXW4XAssetType@@PEBDW4MyChangesAction@@@ZXZ();
}

/*
==============
DB_SetMyChangesReloadCallback
==============
*/

void __fastcall DB_SetMyChangesReloadCallback(void (__fastcall *func)())
{
  ?DB_SetMyChangesReloadCallback@@YAXP6AXXZ@Z(func);
}

/*
==============
DB_MyChangesMainThreadInit
==============
*/

void DB_MyChangesMainThreadInit(void)
{
  ?DB_MyChangesMainThreadInit@@YAXXZ();
}

/*
==============
DB_GetMyChangesReloadCallback
==============
*/

void (__fastcall *__fastcall DB_GetMyChangesReloadCallback())()
{
  return ?DB_GetMyChangesReloadCallback@@YAP6AXXZXZ();
}

/*
==============
DB_GetMyChangesBeginCallback
==============
*/
void (*DB_GetMyChangesBeginCallback())()
{
  return s_mychangesBeginFunc;
}

/*
==============
DB_GetMyChangesEndCallback
==============
*/
void (*DB_GetMyChangesEndCallback())()
{
  return s_mychangesEndFunc;
}

/*
==============
DB_GetMyChangesIconDirective
==============
*/
const char *DB_GetMyChangesIconDirective(const MyChangesAction action, vec4_t *color)
{
  *color = MYCHANGES_FAIL_COLOR;
  if ( action )
  {
    switch ( action )
    {
      case ASSET_MYCHANGES_RELOAD:
        *color = MYCHANGES_WARN_COLOR;
        return "[{ui_mychanges_reload}]";
      case ASSET_MYCHANGES_RESTART:
        *color = MYCHANGES_WARN_COLOR;
        return "[{ui_mychanges_restart}]";
      case ASSET_MYCHANGES_UNKNOWN:
        *color = MYCHANGES_WARN_COLOR;
        return "[{ui_mychanges_warn}]";
      default:
        return (char *)&queryFormat.fmt + 3;
    }
  }
  else
  {
    *color = MYCHANGES_SUCCESS_COLOR;
    return "[{ui_mychanges_ok}]";
  }
}

/*
==============
DB_GetMyChangesReloadCallback
==============
*/
void (*DB_GetMyChangesReloadCallback())()
{
  return s_mychangesReloadFunc;
}

/*
==============
DB_GetMyChangesReportCallback
==============
*/
void (*DB_GetMyChangesReportCallback())(const XAssetType, const char *, const MyChangesAction)
{
  return s_mychangesReportFunc;
}

/*
==============
DB_GetMyChanges_ActionMessage
==============
*/
const char *DB_GetMyChanges_ActionMessage(const MyChangesAction action)
{
  return s_actionStrings[(unsigned __int8)action];
}

/*
==============
DB_GetXAssetMyChangesAction
==============
*/
__int64 DB_GetXAssetMyChangesAction(const int type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= 0x71 )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_mychanges.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return (unsigned __int8)s_assetTypeMyChangesAction[v1];
}

/*
==============
DB_MyChangesBeginCallbackProxy
==============
*/
void DB_MyChangesBeginCallbackProxy()
{
  if ( s_mychangesBeginFunc )
    s_mychangesBeginFunc();
}

/*
==============
DB_MyChangesEndCallbackProxy
==============
*/
void DB_MyChangesEndCallbackProxy()
{
  if ( s_mychangesEndFunc )
    s_mychangesEndFunc();
}

/*
==============
DB_MyChangesMainThreadInit
==============
*/
void DB_MyChangesMainThreadInit(void)
{
  Cmd_AddCommandInternal("mychanges_begin", DB_MyChangesBeginCallbackProxy, &DB_MyChangesBeginCallbackProxy_VAR);
  Cmd_AddCommandInternal("mychanges_end", DB_MyChangesEndCallbackProxy, &DB_MyChangesEndCallbackProxy_VAR);
}

/*
==============
DB_MyChanges_LoadAsset
==============
*/
void DB_MyChanges_LoadAsset(const XAssetType type, const char *name)
{
  __int64 v2; 
  int v5; 

  v2 = type;
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    v5 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_mychanges.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, v5) )
      __debugbreak();
  }
  if ( s_mychangesReportFunc )
    s_mychangesReportFunc((const XAssetType)v2, name, s_assetTypeMyChangesAction[v2]);
}

/*
==============
DB_MyChanges_Reload
==============
*/
void DB_MyChanges_Reload(void)
{
  if ( s_mychangesReloadFunc )
    s_mychangesReloadFunc();
}

/*
==============
DB_SetMyChangesProgressCallback
==============
*/
void DB_SetMyChangesProgressCallback(void (*beginFunc)(), void (*endFunc)())
{
  s_mychangesBeginFunc = beginFunc;
  s_mychangesEndFunc = endFunc;
}

/*
==============
DB_SetMyChangesReloadCallback
==============
*/
void DB_SetMyChangesReloadCallback(void (*func)())
{
  if ( !func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_mychanges.cpp", 323, ASSERT_TYPE_ASSERT, "( func != nullptr )", "Mychanges report callback must be non-null") )
    __debugbreak();
  s_mychangesReloadFunc = func;
}

/*
==============
DB_SetMyChangesReportCallback
==============
*/
void DB_SetMyChangesReportCallback(void (*func)(const XAssetType, const char *, const MyChangesAction))
{
  if ( !func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_mychanges.cpp", 310, ASSERT_TYPE_ASSERT, "( func != nullptr )", "Mychanges report callback must be non-null") )
    __debugbreak();
  s_mychangesReportFunc = func;
}

