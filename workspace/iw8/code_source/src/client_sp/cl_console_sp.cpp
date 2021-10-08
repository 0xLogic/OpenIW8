/*
==============
CL_ConsoleSP_RegisterCommands
==============
*/

void CL_ConsoleSP_RegisterCommands(void)
{
  ?CL_ConsoleSP_RegisterCommands@@YAXXZ();
}

/*
==============
CL_ArchiveMessages
==============
*/

void __fastcall CL_ArchiveMessages(MemoryFile *memFile)
{
  ?CL_ArchiveMessages@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CL_ConsoleSP_UnregisterCommands
==============
*/

void CL_ConsoleSP_UnregisterCommands(void)
{
  ?CL_ConsoleSP_UnregisterCommands@@YAXXZ();
}

/*
==============
Con_Echo_f
==============
*/
void Con_Echo_f()
{
  __int64 v0; 

  Con_ToggleConsole();
  Core_strcpy(g_consoleField.buffer, 0x100ui64, "\\echo ");
  v0 = -1i64;
  do
    ++v0;
  while ( g_consoleField.buffer[v0] );
  g_consoleField.cursor = v0;
  CL_Keys_AdjustScrollField(&scrPlaceFull, &g_consoleField);
}

/*
==============
CL_ArchiveMessages
==============
*/
void CL_ArchiveMessages(MemoryFile *memFile)
{
  int *p_messageIndex; 
  __int64 v3; 
  void **v4; 
  int v5; 
  int v6; 
  void *v7; 

  p_messageIndex = &con.messageBuffer[0].gamemsgWindows[0].messageIndex;
  v3 = 4i64;
  do
  {
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_console_sp.cpp", 30, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    v4 = (void **)(p_messageIndex - 15);
    if ( p_messageIndex == (int *)60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_console_sp.cpp", (_DWORD)v4 + 31, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
      __debugbreak();
    MemFile_ArchiveData(memFile, 4, p_messageIndex - 1);
    MemFile_ArchiveData(memFile, 4, p_messageIndex - 2);
    MemFile_ArchiveData(memFile, 4, p_messageIndex);
    MemFile_ArchiveData(memFile, 4, p_messageIndex - 3);
    MemFile_ArchiveData(memFile, 24 * *(p_messageIndex - 8), *v4);
    MemFile_ArchiveData(memFile, 8 * *(p_messageIndex - 8), *(void **)(p_messageIndex - 13));
    v5 = *(p_messageIndex - 3);
    v6 = *((_DWORD *)*v4 + 6 * *(p_messageIndex - 2) + 1);
    v7 = (void *)(*(_QWORD *)(p_messageIndex - 11) + v6);
    if ( v6 >= v5 )
    {
      MemFile_ArchiveData(memFile, *(p_messageIndex - 9) - v6, v7);
      v7 = *(void **)(p_messageIndex - 11);
    }
    else
    {
      v5 -= v6;
    }
    MemFile_ArchiveData(memFile, v5, v7);
    p_messageIndex += 16;
    --v3;
  }
  while ( v3 );
}

/*
==============
CL_ConsoleSP_RegisterCommands
==============
*/
void CL_ConsoleSP_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_MAIN_CMD_SP, 1u);
}

/*
==============
CL_ConsoleSP_UnregisterCommands
==============
*/
void CL_ConsoleSP_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_MAIN_CMD_SP, 1u);
}

