/*
==============
R_CreateDevGui
==============
*/

void R_CreateDevGui(void)
{
  ?R_CreateDevGui@@YAXXZ();
}

/*
==============
R_CreateDevGui
==============
*/
void R_CreateDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 
  int v4; 
  __int64 j; 
  __int64 v6; 
  unsigned __int8 v7; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = truncate_cast<int,unsigned __int64>(0x14ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
    {
      v2 = v0 + i;
      v3 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_renderer", v0 - 1);
    s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v0;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = truncate_cast<int,unsigned __int64>(0x16ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v4 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( j = s_cmd_superUser_textArray[0].cmdsize - 1; j >= 0; s_cmd_superUser_textArray[0].data[v6] = v7 )
    {
      v6 = v4 + j;
      v7 = s_cmd_superUser_textArray[0].data[j--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_visibility", v4 - 1);
    s_cmd_superUser_textArray[0].data[v4 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v4;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  RB_ProfileDevGui();
}

