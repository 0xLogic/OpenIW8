/*
==============
ATClient_StateMachineAddCalloutMarkerEnter
==============
*/

void __fastcall ATClient_StateMachineAddCalloutMarkerEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineAddCalloutMarkerEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineAddCalloutMarkerTransition
==============
*/

bool __fastcall ATClient_StateMachineAddCalloutMarkerTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineAddCalloutMarkerTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineAddCalloutMarkerEnter
==============
*/
void ATClient_StateMachineAddCalloutMarkerEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int *v2; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  const char *v6; 
  CmdText *v7; 
  int v8; 
  __int64 cmdsize; 
  int v10; 
  scrContext_t *v11; 
  unsigned int luiStringIndex; 

  v1 = localClientNum;
  v2 = &s_markerCreationTime[localClientNum];
  v3 = Sys_Milliseconds();
  v4 = DVARINT_ATClient_CalloutMarkerCooldown;
  v5 = v3 - *v2;
  if ( !DVARINT_ATClient_CalloutMarkerCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CalloutMarkerCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v5 >= v4->current.integer )
  {
    if ( NetConstStrings_GetLuiStringIndex("dpad_mark_location", &luiStringIndex) )
    {
      v6 = j_va("cmd lui %i %i %i\n", luiStringIndex, 1i64, (unsigned int)cls.serverId);
      v7 = &s_cmd_textArray[v1];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
        __debugbreak();
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      v8 = strlen_noncrt(v6);
      cmdsize = v7->cmdsize;
      v10 = v8;
      if ( (int)cmdsize + v8 < v7->maxsize )
      {
        memcpy_noncrt(&v7->data[cmdsize], v6, v8 + 1);
        v7->cmdsize += v10;
        v11 = ScriptContext_Server();
        Scr_MonitorCommand(v11, v6);
      }
      else
      {
        Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", v6);
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
      *v2 = Sys_Milliseconds();
    }
    else
    {
      Com_PrintError(14, "Failed to find NCS entry for dpad_mark_location\n");
    }
  }
}

/*
==============
ATClient_StateMachineAddCalloutMarkerTransition
==============
*/
char ATClient_StateMachineAddCalloutMarkerTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( Sys_Milliseconds() - s_markerCreationTime[localClientNum] < 1000 )
    return 0;
  *outNewState = 0;
  return 1;
}

