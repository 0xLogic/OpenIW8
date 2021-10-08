/*
==============
LUI_CollectGarbageTask
==============
*/

void __fastcall LUI_CollectGarbageTask(const void *const data)
{
  ?LUI_CollectGarbageTask@@YAXQEBX@Z(data);
}

/*
==============
LUI_CollectGarbageTask
==============
*/
void LUI_CollectGarbageTask(const void *const data)
{
  unsigned __int64 v2; 
  int v3; 

  LUI_EnterCriticalSection("LUI_CollectGarbageTask");
  if ( LUI_CoD_GCCanRun() && LUI_luaVM )
  {
    if ( *(_DWORD *)data )
    {
      if ( *(_DWORD *)data != 1 )
      {
        if ( *(_DWORD *)data == 2 )
        {
          v2 = Sys_Microseconds() + 4000;
          while ( !j_lua_gc(LUI_luaVM, 5, 100) )
          {
            if ( Sys_Microseconds() >= v2 )
            {
              LUI_PostGC();
              goto LABEL_8;
            }
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_workercmd_gc.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUI_CollectGarbageTask: unknown GC type: %d", *(_DWORD *)data) )
        {
          __debugbreak();
          LUI_PostGC();
          goto LABEL_8;
        }
LABEL_16:
        LUI_PostGC();
        goto LABEL_8;
      }
      v3 = 2;
    }
    else
    {
      v3 = 5;
    }
    j_lua_gc(LUI_luaVM, v3, 0);
    goto LABEL_16;
  }
LABEL_8:
  LUI_LeaveCriticalSection();
}

