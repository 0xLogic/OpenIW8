/*
==============
CL_ParseSP_TransferPlayerstate
==============
*/

void __fastcall CL_ParseSP_TransferPlayerstate(int clientNum, playerState_s *ps)
{
  ?CL_ParseSP_TransferPlayerstate@@YAXHPEAUplayerState_s@@@Z(clientNum, ps);
}

/*
==============
CL_ParseSP_ParseCommandString
==============
*/

void __fastcall CL_ParseSP_ParseCommandString(LocalClientNum_t localClientNum, ServerCommandsSP *serverCommands)
{
  ?CL_ParseSP_ParseCommandString@@YAXW4LocalClientNum_t@@PEAUServerCommandsSP@@@Z(localClientNum, serverCommands);
}

/*
==============
CL_ParseSP_ParseServerMessage
==============
*/

void __fastcall CL_ParseSP_ParseServerMessage(msg_t *msg)
{
  ?CL_ParseSP_ParseServerMessage@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
CL_ParseSP_SetScriptableChecksum
==============
*/

void __fastcall CL_ParseSP_SetScriptableChecksum(const unsigned int scriptableChecksum)
{
  ?CL_ParseSP_SetScriptableChecksum@@YAXI@Z(scriptableChecksum);
}

/*
==============
CL_ParseSP_ParseCommandString
==============
*/
void CL_ParseSP_ParseCommandString(LocalClientNum_t localClientNum, ServerCommandsSP *serverCommands)
{
  __int64 v3; 
  ClConnection *v4; 
  int i; 
  char v6; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( (_BYTE)ClConnection::ms_activeConnectionType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 50, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeConnectionType == GameModeType::SP") )
    __debugbreak();
  if ( !ClConnection::ms_connections[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_connection_sp.h", 51, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  v4 = ClConnection::ms_connections[v3];
  CG_ServerCmdSP_WaitNewServerCommands((LocalClientNum_t)v3, HIDWORD(v4[8259].__vftable));
  if ( v4[8259].m_localClientNum != HIDWORD(v4[8259].__vftable) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 102, ASSERT_TYPE_ASSERT, "( clcData->serverCommands.header.sent ) == ( clcData->serverCommands.header.sequence )", "%s == %s\n\t%i, %i", "clcData->serverCommands.header.sent", "clcData->serverCommands.header.sequence", v4[8259].m_localClientNum, HIDWORD(v4[8259].__vftable)) )
    __debugbreak();
  if ( LODWORD(v4[8259].__vftable) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 103, ASSERT_TYPE_ASSERT, "(!clcData->serverCommands.header.rover)", "%s\n\t%s", "!clcData->serverCommands.header.rover", (const char *)&v4[8259].m_numPacketsReceived) )
    __debugbreak();
  if ( HIDWORD(v4[8259].__vftable) - serverCommands->header.sequence > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 106, ASSERT_TYPE_ASSERT, "(clcData->serverCommands.header.sequence - serverCommands->header.sequence <= 0)", (const char *)&queryFormat, "clcData->serverCommands.header.sequence - serverCommands->header.sequence <= 0") )
    __debugbreak();
  if ( HIDWORD(v4[8259].__vftable) != serverCommands->header.sequence )
  {
    v4[8259].__vftable = *(ClConnection_vtbl **)&serverCommands->header.rover;
    v4[8259].m_localClientNum = serverCommands->header.sent;
    memcpy_0(&v4[8259].m_numPacketsReceived, serverCommands->buf, serverCommands->header.rover);
    for ( i = serverCommands->header.sent + 1; i <= serverCommands->header.sequence; *(&v4[8771].m_numPacketsReceived + (v6 & 0x7F)) = serverCommands->commands[v6 & 0x7F] )
      v6 = i++;
  }
}

/*
==============
CL_ParseSP_ParseServerMessage
==============
*/
void CL_ParseSP_ParseServerMessage(msg_t *msg)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  int v4; 
  __int64 Bits; 
  const dvar_t *v6; 
  const char *v7; 
  const dvar_t *v8; 
  LocalClientNum_t OnlyLocalClientNum; 
  CG_GlassPieceChangeWithIndex *ChangesBuffer; 
  unsigned int ChangesBufferSize; 
  unsigned int Changes; 
  unsigned int v13; 
  const dvar_t *v14; 
  __int64 v15; 
  __int64 v16; 

  v1 = DVARINT_cl_shownet;
  if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer == 1 )
  {
    Com_Printf(14, "%i ", (unsigned int)msg->cursize);
  }
  else
  {
    v3 = DVARINT_cl_shownet;
    if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer >= 2 )
      Com_Printf(14, "------------------\n");
  }
  v4 = 0;
  while ( 1 )
  {
    if ( msg->readcount > msg->cursize )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14423CCC0);
    Bits = MSG_ReadBits(msg, 4u);
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum svc_ops_e __cdecl truncate_cast_impl<enum svc_ops_e,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    if ( (_DWORD)Bits == 1 )
      break;
    v6 = DVARINT_cl_shownet;
    if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer >= 2 )
    {
      v7 = SVC_STRINGS_SP[(int)Bits];
      if ( v7 )
      {
        v8 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.integer >= 2 )
          Com_Printf(14, "%3i %3i:%s\n", (unsigned int)(msg->readcount - 1), (unsigned int)msg->cursize, v7);
      }
      else
      {
        Com_Printf(14, "%3i:BAD CMD %i\n", (unsigned int)(msg->readcount - 1), (unsigned int)Bits);
      }
    }
    if ( (_DWORD)Bits )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14423CD20, 44i64, (unsigned int)Bits);
    }
    else
    {
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 182, ASSERT_TYPE_ASSERT, "(!parsedSnapshot)", (const char *)&queryFormat, "!parsedSnapshot") )
        __debugbreak();
      v4 = 1;
      cls.snap.serverTime = MSG_ReadLong(msg);
      cls.snap.snapFlags = 0;
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      ChangesBuffer = CL_Glass_GetChangesBuffer(OnlyLocalClientNum);
      ChangesBufferSize = CL_Glass_GetChangesBufferSize();
      Changes = BG_Glass_ReadChanges(msg, ChangesBuffer, ChangesBufferSize);
      v13 = Changes;
      if ( Changes > ChangesBufferSize )
      {
        LODWORD(v16) = ChangesBufferSize;
        LODWORD(v15) = Changes;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 72, ASSERT_TYPE_ASSERT, "( glassChangeCount ) <= ( glassPieceChangesSize )", "%s <= %s\n\t%i, %i", "glassChangeCount", "glassPieceChangesSize", v15, v16) )
          __debugbreak();
      }
      BG_Glass_RecordChanges(ChangesBuffer, v13);
      v14 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.integer == 3 )
        Com_Printf(14, "   snapshot:%i\n", (unsigned int)cls.serverMessageSequence);
    }
  }
  CL_ParseSP_ShowNet(msg, "END OF MESSAGE");
}

/*
==============
CL_ParseSP_SetScriptableChecksum
==============
*/
void CL_ParseSP_SetScriptableChecksum(const unsigned int scriptableChecksum)
{
  cls.m_scriptableNetChecksum = scriptableChecksum;
}

/*
==============
CL_ParseSP_ShowNet
==============
*/
void CL_ParseSP_ShowNet(msg_t *msg, const char *s)
{
  const dvar_t *v2; 

  v2 = DVARINT_cl_shownet;
  if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer >= 2 )
    Com_Printf(14, "%3i %3i:%s\n", (unsigned int)(msg->readcount - 1), (unsigned int)msg->cursize, s);
}

/*
==============
CL_ParseSP_TransferPlayerstate
==============
*/
void CL_ParseSP_TransferPlayerstate(int clientNum, playerState_s *ps)
{
  __int64 v2; 
  bool v4; 
  ClActiveClient **v5; 
  __int64 v6; 
  float v7; 

  v2 = clientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_parse_sp.cpp", 57, ASSERT_TYPE_ASSERT, "(clientNum == CL_GetOnlyLocalClientNum())", (const char *)&queryFormat, "clientNum == CL_GetOnlyLocalClientNum()") )
    __debugbreak();
  if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
  {
    v7 = cl_maxLocalClients;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( (_BYTE)ClActiveClient::ms_activeClientType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 84, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::SP") )
    __debugbreak();
  v4 = ClActiveClient::ms_activeClients[v2] == NULL;
  v5 = &ClActiveClient::ms_activeClients[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 85, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  memcpy_0((*v5)[1].weightedDx, ps, 0x53A4ui64);
}

