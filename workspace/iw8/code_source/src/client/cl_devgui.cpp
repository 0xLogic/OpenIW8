/*
==============
CL_DestroyDevGui
==============
*/

void CL_DestroyDevGui(void)
{
  ?CL_DestroyDevGui@@YAXXZ();
}

/*
==============
CL_DevGuiFrame
==============
*/

void __fastcall CL_DevGuiFrame(LocalClientNum_t localClientNum)
{
  ?CL_DevGuiFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CreateDevGui
==============
*/

void __fastcall CL_CreateDevGui(int fsMenuEntries, const char *modeCfg, const char *mapsCfg)
{
  ?CL_CreateDevGui@@YAXHPEBD0@Z(fsMenuEntries, modeCfg, mapsCfg);
}

/*
==============
CL_CreateDevGui
==============
*/
void CL_CreateDevGui(int fsMenuEntries, const char *modeCfg, const char *mapsCfg)
{
  int v5; 
  __int64 i; 
  __int64 v7; 
  unsigned __int8 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  __int64 j; 
  __int64 v13; 
  unsigned __int8 v14; 
  int v15; 
  __int64 k; 
  __int64 v17; 
  unsigned __int8 v18; 
  char dest[64]; 

  R_CreateDevGui();
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v5 = truncate_cast<int,unsigned __int64>(0x10ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v5 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v7] = v8 )
    {
      v7 = v5 + i;
      v8 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_main", v5 - 1);
    s_cmd_superUser_textArray[0].data[v5 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v5;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  v9 = -1i64;
  if ( modeCfg )
  {
    Com_sprintf(dest, 0x40ui64, "exec %s", modeCfg);
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v10 = -1i64;
    do
      ++v10;
    while ( dest[v10] );
    v11 = truncate_cast<int,unsigned __int64>(v10) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v11 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( j = s_cmd_superUser_textArray[0].cmdsize - 1; j >= 0; s_cmd_superUser_textArray[0].data[v13] = v14 )
      {
        v13 = v11 + j;
        v14 = s_cmd_superUser_textArray[0].data[j--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, dest, v11 - 1);
      s_cmd_superUser_textArray[0].data[v11 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v11;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  if ( mapsCfg )
  {
    Com_sprintf(dest, 0x40ui64, "exec %s", mapsCfg);
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    do
      ++v9;
    while ( dest[v9] );
    v15 = truncate_cast<int,unsigned __int64>(v9) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v15 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( k = s_cmd_superUser_textArray[0].cmdsize - 1; k >= 0; s_cmd_superUser_textArray[0].data[v17] = v18 )
      {
        v17 = v15 + k;
        v18 = s_cmd_superUser_textArray[0].data[k--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, dest, v15 - 1);
      s_cmd_superUser_textArray[0].data[v15 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v15;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  CPUTimelineProfilerView_InitDevGui();
  Physics_CreateDevGui(LOCAL_CLIENT_0);
  Cloth_CreateDevGui(LOCAL_CLIENT_0);
  DynEnt_CreateDevGui();
  CG_Edge_CreateDevGui(LOCAL_CLIENT_0);
  ScriptableBg_CreateDevGui();
  AimAssist_InitDevGui();
  CG_Rumble_InitDevguiRumbleGraph();
  Com_FrontEnd_InitDevGui();
  CM_InitDevGui();
  CL_Cameraman_InitDevGuiMenu();
}

/*
==============
CL_DestroyDevGui
==============
*/
void CL_DestroyDevGui(void)
{
  ;
}

/*
==============
CL_DevGuiFrame
==============
*/
void CL_DevGuiFrame(LocalClientNum_t localClientNum)
{
  ;
}

