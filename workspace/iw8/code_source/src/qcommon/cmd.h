/*
==============
Cbuf_AddCall
==============
*/

void __fastcall Cbuf_AddCall(LocalClientNum_t localClientNum, void (__fastcall *func)(LocalClientNum_t))
{
  ?Cbuf_AddCall@@YAXW4LocalClientNum_t@@P6AX0@Z@Z(localClientNum, func);
}

/*
==============
Cmd_ExecuteServerString
==============
*/

void __fastcall Cmd_ExecuteServerString(const char *text)
{
  ?Cmd_ExecuteServerString@@YAXPEBD@Z(text);
}

/*
==============
Cbuf_AddText
==============
*/

void __fastcall Cbuf_AddText(LocalClientNum_t localClientNum, const char *text)
{
  ?Cbuf_AddText@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, text);
}

/*
==============
Cbuf_AddText_Internal
==============
*/

void __fastcall Cbuf_AddText_Internal(const char *text, CmdText *cmd_text)
{
  ?Cbuf_AddText_Internal@@YAXPEBDPEAUCmdText@@@Z(text, cmd_text);
}

/*
==============
Cmd_ExecuteSingleCommand_Internal
==============
*/

void __fastcall Cmd_ExecuteSingleCommand_Internal(LocalClientNum_t localClientNum, int controllerIndex, const char *text, const bool isSuperUser)
{
  ?Cmd_ExecuteSingleCommand_Internal@@YAXW4LocalClientNum_t@@HPEBD_N@Z(localClientNum, controllerIndex, text, isSuperUser);
}

/*
==============
Cbuf_InsertSuperUserText
==============
*/

void __fastcall Cbuf_InsertSuperUserText(LocalClientNum_t localClientNum, const char *text)
{
  ?Cbuf_InsertSuperUserText@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, text);
}

/*
==============
Cbuf_ExecuteBufferInternal
==============
*/

void __fastcall Cbuf_ExecuteBufferInternal(const LocalClientNum_t localClientNum, const int controllerIndex, const char *buffer, const bool isSuperUser, const bool isFromDisk)
{
  ?Cbuf_ExecuteBufferInternal@@YAXW4LocalClientNum_t@@HPEBD_N2@Z(localClientNum, controllerIndex, buffer, isSuperUser, isFromDisk);
}

/*
==============
Cmd_ExecuteCommandFunctions
==============
*/

bool __fastcall Cmd_ExecuteCommandFunctions(const char *arg0, const char *text, cmd_function_s **functions)
{
  return ?Cmd_ExecuteCommandFunctions@@YA_NPEBD0PEAPEAUcmd_function_s@@@Z(arg0, text, functions);
}

/*
==============
Cbuf_ExecuteBufferInternal
==============
*/
void Cbuf_ExecuteBufferInternal(const LocalClientNum_t localClientNum, const int controllerIndex, const char *buffer, const bool isSuperUser)
{
  const char *v5; 
  unsigned __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned __int64 v12; 
  char v13; 
  int v14; 
  int v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  char text[4096]; 

  v5 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 689, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  v8 = -1i64;
  do
    ++v8;
  while ( v5[v8] );
  v9 = truncate_cast<int,unsigned __int64>(v8);
  while ( v9 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0i64;
    if ( v9 > 0 )
    {
      do
      {
        v13 = v5[v12];
        v14 = v10 + 1;
        if ( v13 != 34 )
          v14 = v10;
        v10 = v14;
        if ( (v14 & 1) == 0 && v13 == 59 )
          break;
        if ( v13 == 10 )
          break;
        if ( v13 == 13 )
          break;
        ++v11;
        ++v12;
      }
      while ( (__int64)v12 < v9 );
      if ( v11 >= 4095 )
      {
        v11 = 4095;
        v12 = 4095i64;
      }
    }
    memcpy_0(text, v5, v11);
    if ( v12 >= 0x1000 )
    {
      j___report_rangecheckfailure();
      JUMPOUT(0x140226D72i64);
    }
    text[v12] = 0;
    v15 = v11 + 1;
    if ( v11 == v9 )
      v15 = v11;
    v9 -= v15;
    v5 += v15;
    if ( isSuperUser )
    {
      Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, text, 1);
    }
    else
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v18) = 2;
        LODWORD(v17) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 555, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      Cmd_TokenizeString(text);
      if ( Cmd_Argc() )
      {
        cmd_args.localClientNum[cmd_args.nesting] = localClientNum;
        cmd_args.controllerIndex[cmd_args.nesting] = controllerIndex;
        v16 = Cmd_Argv(0);
        if ( !Cmd_ExecuteCommandFunctions(v16, text, &s_cmd_functions) && !Dvar_Command(0) )
          CL_Main_ForwardCommandToServer(localClientNum, text);
      }
      Cmd_EndTokenizedString();
    }
  }
}

/*
==============
Cmd_ExecuteCommandFunctions
==============
*/
char Cmd_ExecuteCommandFunctions(const char *arg0, const char *text, cmd_function_s **functions)
{
  cmd_function_s *v3; 
  cmd_function_s **v7; 
  const char *name; 
  __int64 v9; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  void (__fastcall *function)(); 
  const char *v17; 
  __int64 v18; 
  cmd_function_s *v19; 
  cmd_function_s **p_next; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  signed __int64 v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  void (__fastcall *v29)(); 
  __int64 v31; 

  v3 = *functions;
  v7 = functions;
  if ( *functions )
  {
    while ( 2 )
    {
      name = v3->name;
      v9 = 0x7FFFFFFFi64;
      if ( !arg0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v10 = (const char *)(arg0 - name);
      while ( 1 )
      {
        v11 = (unsigned __int8)name[(_QWORD)v10];
        v12 = v9;
        v13 = *(unsigned __int8 *)name++;
        --v9;
        if ( !v12 )
        {
LABEL_17:
          *v7 = v3->next;
          v3->next = *functions;
          *functions = v3;
          function = v3->function;
          if ( !function )
            return 0;
          if ( function == Cbuf_AddServerText_f )
          {
            SV_WaitServer();
            Com_CheckError();
            if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
              __debugbreak();
            if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
            {
              LODWORD(v31) = g_serverThreadOwnership;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 521, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v31) )
                __debugbreak();
            }
            if ( SV_Main_InServerFrame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 524, ASSERT_TYPE_ASSERT, "(!SV_Main_InServerFrame())", (const char *)&queryFormat, "!SV_Main_InServerFrame()") )
              __debugbreak();
            SV_Cmd_TokenizeString(text);
            if ( SV_Cmd_Argc() )
            {
              v17 = SV_Cmd_Argv(0);
              v19 = s_sv_cmd_functions;
              p_next = &s_sv_cmd_functions;
              v21 = v17;
              if ( s_sv_cmd_functions )
              {
                while ( 2 )
                {
                  v22 = v19->name;
                  v23 = 0x7FFFFFFFi64;
                  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                    __debugbreak();
                  v24 = v21 - v22;
                  while ( 1 )
                  {
                    v25 = (unsigned __int8)v22[v24];
                    v26 = v23;
                    v27 = *(unsigned __int8 *)v22++;
                    --v23;
                    if ( !v26 )
                    {
LABEL_45:
                      *p_next = v19->next;
                      v19->next = s_sv_cmd_functions;
                      s_sv_cmd_functions = v19;
                      v29 = v19->function;
                      if ( v29 )
                        ((void (__fastcall *)(__int64, __int64, __int64))v29)(v26, v18, v27);
                      goto LABEL_51;
                    }
                    if ( v25 != (_DWORD)v27 )
                    {
                      v28 = v25 + 32;
                      v26 = (unsigned int)(v27 - 65);
                      if ( (unsigned int)(v25 - 65) > 0x19 )
                        v28 = v25;
                      v25 = v28;
                      v18 = (unsigned int)(v27 + 32);
                      if ( (unsigned int)v26 > 0x19 )
                        v18 = (unsigned int)v27;
                      if ( v25 != (_DWORD)v18 )
                        break;
                    }
                    if ( !v25 )
                      goto LABEL_45;
                  }
                  p_next = &v19->next;
                  v19 = v19->next;
                  if ( v19 )
                    continue;
                  break;
                }
              }
            }
LABEL_51:
            SV_Cmd_EndTokenizedString();
            return 1;
          }
          else
          {
            ((void (__fastcall *)(void (__fastcall *)(), __int64, __int64))function)(Cbuf_AddServerText_f, v11, v13);
            return 1;
          }
        }
        if ( (_DWORD)v11 != (_DWORD)v13 )
        {
          v14 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v14 = v11;
          v11 = v14;
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          if ( (_DWORD)v11 != v15 )
            break;
        }
        if ( !(_DWORD)v11 )
          goto LABEL_17;
      }
      v7 = &v3->next;
      v3 = v3->next;
      if ( v3 )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
Cmd_ExecuteSingleCommand_Internal
==============
*/
void Cmd_ExecuteSingleCommand_Internal(LocalClientNum_t localClientNum, int controllerIndex, const char *text, const bool isSuperUser)
{
  const char *v8; 
  const char *v9; 
  __int64 v10; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v10) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 555, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  Cmd_TokenizeString(text);
  if ( Cmd_Argc() )
  {
    cmd_args.localClientNum[cmd_args.nesting] = localClientNum;
    cmd_args.controllerIndex[cmd_args.nesting] = controllerIndex;
    v8 = Cmd_Argv(0);
    v9 = v8;
    if ( (!isSuperUser || !Cmd_ExecuteCommandFunctions(v8, text, &s_cmd_superuser_functions)) && !Cmd_ExecuteCommandFunctions(v9, text, &s_cmd_functions) && !Dvar_Command(isSuperUser) )
    {
      if ( isSuperUser )
        CL_Main_ForwardSuperUserCommandToServer(localClientNum, text);
      else
        CL_Main_ForwardCommandToServer(localClientNum, text);
    }
  }
  Cmd_EndTokenizedString();
}

/*
==============
Cbuf_AddText
==============
*/
void Cbuf_AddText(LocalClientNum_t localClientNum, const char *text)
{
  CmdText *v3; 
  int v4; 
  __int64 cmdsize; 
  int v6; 
  scrContext_t *v7; 

  v3 = &s_cmd_textArray[localClientNum];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = strlen_noncrt(text);
  cmdsize = v3->cmdsize;
  v6 = v4;
  if ( (int)cmdsize + v4 < v3->maxsize )
  {
    memcpy_noncrt(&v3->data[cmdsize], text, v4 + 1);
    v3->cmdsize += v6;
    v7 = ScriptContext_Server();
    Scr_MonitorCommand(v7, text);
  }
  else
  {
    Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", text);
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
Cbuf_AddCall
==============
*/
void Cbuf_AddCall(LocalClientNum_t localClientNum, void (*func)(LocalClientNum_t))
{
  __int64 v2; 
  unsigned int *v4; 
  __int64 v5; 

  v2 = localClientNum;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = &cmd_funcCount[v2];
  if ( *v4 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 380, ASSERT_TYPE_ASSERT, "(unsigned)( cmd_funcCount[localClientNum] ) < (unsigned)( ( sizeof( *array_counter( cmd_funcArray[localClientNum] ) ) + 0 ) )", "cmd_funcCount[localClientNum] doesn't index ARRAY_COUNT( cmd_funcArray[localClientNum] )\n\t%i not in [0, %i)", cmd_funcCount[v2], 32) )
    __debugbreak();
  v5 = *v4;
  if ( (unsigned int)v5 < 0x20 )
  {
    *v4 = v5 + 1;
    cmd_funcArray[v2][v5] = func;
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
Cmd_ExecuteServerString
==============
*/
void Cmd_ExecuteServerString(const char *text)
{
  __int64 v1; 
  unsigned int nesting; 
  const char **v3; 
  cmd_function_s *v4; 
  cmd_function_s **p_next; 
  char *name; 
  __int64 v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  void (__fastcall *function)(); 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  CmdArgs::TokenizeStringKernel(&sv_cmd_args, text, 512 - sv_cmd_args.totalUsedArgvPool);
  nesting = sv_cmd_args.nesting;
  if ( sv_cmd_args.nesting >= 8u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", sv_cmd_args.nesting, 8) )
      __debugbreak();
    nesting = sv_cmd_args.nesting;
  }
  if ( sv_cmd_args.argc[nesting] )
  {
    if ( nesting >= 8 )
    {
      LODWORD(v16) = 8;
      LODWORD(v15) = nesting;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
      nesting = sv_cmd_args.nesting;
    }
    v3 = sv_cmd_args.argc[nesting] <= 0 ? (const char **)((char *)&queryFormat.fmt + 3) : (const char **)*sv_cmd_args.argv[nesting];
    v4 = s_sv_cmd_functions;
    p_next = &s_sv_cmd_functions;
    if ( s_sv_cmd_functions )
    {
LABEL_14:
      name = (char *)v4->name;
      v7 = 0x7FFFFFFFi64;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v8 = (char *)v3 - name;
      do
      {
        v9 = (unsigned __int8)name[v8];
        v10 = v7;
        v11 = (unsigned __int8)*name++;
        --v7;
        if ( !v10 )
          break;
        if ( v9 != (_DWORD)v11 )
        {
          v12 = v9 + 32;
          v10 = (unsigned int)(v11 - 65);
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v12 = v9;
          v9 = v12;
          v1 = (unsigned int)(v11 + 32);
          if ( (unsigned int)v10 > 0x19 )
            v1 = (unsigned int)v11;
          if ( v9 != (_DWORD)v1 )
          {
            p_next = &v4->next;
            v4 = v4->next;
            if ( !v4 )
              goto LABEL_31;
            goto LABEL_14;
          }
        }
      }
      while ( v9 );
      *p_next = v4->next;
      v4->next = s_sv_cmd_functions;
      s_sv_cmd_functions = v4;
      function = v4->function;
      if ( function )
        ((void (__fastcall *)(__int64, __int64, __int64))function)(v10, v1, v11);
    }
  }
LABEL_31:
  CmdArgs::AssertCmdArgsConsistency(&sv_cmd_args);
  v14 = sv_cmd_args.nesting;
  if ( sv_cmd_args.nesting >= 8u )
  {
    LODWORD(v16) = 8;
    LODWORD(v15) = sv_cmd_args.nesting;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.cpp", 1111, ASSERT_TYPE_ASSERT, "(unsigned)( nesting ) < (unsigned)( 8 )", "nesting doesn't index CMD_MAX_NESTING\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
    v14 = sv_cmd_args.nesting;
  }
  sv_cmd_args.totalUsedArgvPool -= sv_cmd_args.argc[v14];
  sv_cmd_args.totalUsedTextPool -= sv_cmd_args.usedTextPool[v14];
  sv_cmd_args.nesting = v14 - 1;
  CmdArgs::AssertCmdArgsConsistency(&sv_cmd_args);
}

/*
==============
Cbuf_AddText_Internal
==============
*/
void Cbuf_AddText_Internal(const char *text, CmdText *cmd_text)
{
  int v4; 
  __int64 cmdsize; 
  int v6; 
  scrContext_t *v7; 

  if ( !cmd_text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = strlen_noncrt(text);
  cmdsize = cmd_text->cmdsize;
  v6 = v4;
  if ( (int)cmdsize + v4 < cmd_text->maxsize )
  {
    memcpy_noncrt(&cmd_text->data[cmdsize], text, v4 + 1);
    cmd_text->cmdsize += v6;
    v7 = ScriptContext_Server();
    Scr_MonitorCommand(v7, text);
  }
  else
  {
    Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", text);
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
Cbuf_InsertSuperUserText
==============
*/
void Cbuf_InsertSuperUserText(LocalClientNum_t localClientNum, const char *text)
{
  __int64 v2; 
  unsigned __int64 v4; 
  int v5; 
  int cmdsize; 
  int v7; 
  __int64 i; 

  v2 = localClientNum;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = -1i64;
  do
    ++v4;
  while ( text[v4] );
  v5 = truncate_cast<int,unsigned __int64>(v4);
  cmdsize = s_cmd_superUser_textArray[v2].cmdsize;
  v7 = v5 + 1;
  if ( cmdsize + v5 + 1 <= s_cmd_superUser_textArray[v2].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_superUser_textArray[v2].data[v7 + i] = s_cmd_superUser_textArray[v2].data[i];
    memcpy_0(s_cmd_superUser_textArray[v2].data, text, v7 - 1);
    s_cmd_superUser_textArray[v2].data[v7 - 1] = 10;
    s_cmd_superUser_textArray[v2].cmdsize += v7;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

