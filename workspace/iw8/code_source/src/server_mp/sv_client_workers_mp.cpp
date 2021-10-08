/*
==============
SV_ClientWorkersMP_FinishActiveClientEndFrame
==============
*/

void __fastcall SV_ClientWorkersMP_FinishActiveClientEndFrame(ClientEndFrameWorkFlags *workFlags)
{
  ?SV_ClientWorkersMP_FinishActiveClientEndFrame@@YAXQEAW4ClientEndFrameWorkFlags@@@Z(workFlags);
}

/*
==============
SV_ClientWorkersMP_ClientEntityLoDCmd
==============
*/

void __fastcall SV_ClientWorkersMP_ClientEntityLoDCmd(const void *const cmdInfo)
{
  ?SV_ClientWorkersMP_ClientEntityLoDCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_ClientWorkersMP_AddScriptableTrigger
==============
*/

bool __fastcall SV_ClientWorkersMP_AddScriptableTrigger(const unsigned int clientIndex, const unsigned int scriptableIndex, const unsigned int scriptablePartIndex)
{
  return ?SV_ClientWorkersMP_AddScriptableTrigger@@YA_NIII@Z(clientIndex, scriptableIndex, scriptablePartIndex);
}

/*
==============
SV_ClientWorkersMP_ShutdownMemory
==============
*/

void SV_ClientWorkersMP_ShutdownMemory(void)
{
  ?SV_ClientWorkersMP_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_ClientWorkersMP_FinishClientTriggersUpdate
==============
*/

void SV_ClientWorkersMP_FinishClientTriggersUpdate(void)
{
  ?SV_ClientWorkersMP_FinishClientTriggersUpdate@@YAXXZ();
}

/*
==============
SV_ClientWorkersMP_GetAllocationSize
==============
*/

unsigned int __fastcall SV_ClientWorkersMP_GetAllocationSize(const unsigned int clientCount)
{
  return ?SV_ClientWorkersMP_GetAllocationSize@@YAII@Z(clientCount);
}

/*
==============
SV_ClientWorkersMP_AddEntityTrigger
==============
*/

bool __fastcall SV_ClientWorkersMP_AddEntityTrigger(const unsigned int clientIndex, const unsigned int entityIndex, const bool isVehicleTrigger)
{
  return ?SV_ClientWorkersMP_AddEntityTrigger@@YA_NII_N@Z(clientIndex, entityIndex, isVehicleTrigger);
}

/*
==============
SV_ClientWorkersMP_FinishEntityLoDUpdate
==============
*/

void SV_ClientWorkersMP_FinishEntityLoDUpdate(void)
{
  ?SV_ClientWorkersMP_FinishEntityLoDUpdate@@YAXXZ();
}

/*
==============
SV_ClientWorkersMP_StartActiveClientEndFrame
==============
*/

void __fastcall SV_ClientWorkersMP_StartActiveClientEndFrame(const unsigned int clientIndex, const ClientEndFrameWorkFlags workFlags)
{
  ?SV_ClientWorkersMP_StartActiveClientEndFrame@@YAXIW4ClientEndFrameWorkFlags@@@Z(clientIndex, workFlags);
}

/*
==============
SV_ClientWorkersMP_StartClientTriggersUpdate
==============
*/

void __fastcall SV_ClientWorkersMP_StartClientTriggersUpdate(const unsigned int clientIndex)
{
  ?SV_ClientWorkersMP_StartClientTriggersUpdate@@YAXI@Z(clientIndex);
}

/*
==============
SV_ClientWorkersMP_ProcessClientUsabilityUpdate
==============
*/

void SV_ClientWorkersMP_ProcessClientUsabilityUpdate(void)
{
  ?SV_ClientWorkersMP_ProcessClientUsabilityUpdate@@YAXXZ();
}

/*
==============
SV_ClientWorkersMP_ClientUpdateUsabilityCmd
==============
*/

void __fastcall SV_ClientWorkersMP_ClientUpdateUsabilityCmd(const void *const cmdInfo)
{
  ?SV_ClientWorkersMP_ClientUpdateUsabilityCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_ClientWorkersMP_StartEntityLoDUpdate
==============
*/

void __fastcall SV_ClientWorkersMP_StartEntityLoDUpdate(const unsigned int clientIndex)
{
  ?SV_ClientWorkersMP_StartEntityLoDUpdate@@YAXI@Z(clientIndex);
}

/*
==============
SV_ClientWorkersMP_AllocateMemory
==============
*/

void __fastcall SV_ClientWorkersMP_AllocateMemory(HunkUser *hunkUser, const unsigned int clientCount)
{
  ?SV_ClientWorkersMP_AllocateMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, clientCount);
}

/*
==============
SV_ClientWorkersMP_ActiveClientEndFrameCmd
==============
*/

void __fastcall SV_ClientWorkersMP_ActiveClientEndFrameCmd(const void *const cmdInfo)
{
  ?SV_ClientWorkersMP_ActiveClientEndFrameCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_ClientWorkersMP_ClientTriggersCmd
==============
*/

void __fastcall SV_ClientWorkersMP_ClientTriggersCmd(const void *const cmdInfo)
{
  ?SV_ClientWorkersMP_ClientTriggersCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_ClientWorkersMP_AddClientUsabilityUpdate
==============
*/

void __fastcall SV_ClientWorkersMP_AddClientUsabilityUpdate(const unsigned int clientIndex)
{
  ?SV_ClientWorkersMP_AddClientUsabilityUpdate@@YAXI@Z(clientIndex);
}

/*
==============
SV_ClientWorkersMP_ActiveClientEndFrameCmd
==============
*/
void SV_ClientWorkersMP_ActiveClientEndFrameCmd(const void *const cmdInfo)
{
  __int64 v2; 
  BgStatic *v3; 
  __int64 v4; 
  char v5; 
  const gentity_s *v6; 
  gentity_s *v7; 

  if ( !s_clientEndFrameWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 116, ASSERT_TYPE_ASSERT, "( s_clientEndFrameWorkers != nullptr )", (const char *)&queryFormat, "s_clientEndFrameWorkers != nullptr") )
    __debugbreak();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v3 = *(BgStatic **)(v2 + 272);
  *(_QWORD *)(v2 + 272) = 0i64;
  GStatic::SetActiveStatics();
  v4 = *(unsigned int *)cmdInfo;
  v5 = *((_BYTE *)s_clientEndFrameWorkers + v4);
  v6 = SV_GentityNum(v4);
  v7 = (gentity_s *)v6;
  if ( (v5 & 0x20) != 0 )
    G_ActiveMP_UpdateHudElements(v6);
  if ( (v5 & 8) != 0 )
  {
    G_Objectives_Update(v7);
    G_CalloutMarkerPings_Update(v7);
  }
  if ( (v5 & 1) != 0 )
    G_PlayerUse_ProcessUseList(v7);
  if ( (v5 & 0x10) != 0 )
    G_EntityMarks_ProcessEntityMarks(*(_DWORD *)cmdInfo);
  if ( (v5 & 2) != 0 )
    G_ActiveMP_PlayerAnimation(*(_DWORD *)cmdInfo);
  if ( (v5 & 4) != 0 )
    G_ActiveMP_UpdateClientStreamList(*(_DWORD *)cmdInfo);
  if ( (v5 & 0x40) != 0 )
    G_ActiveMP_UpdateClientSighted(*(_DWORD *)cmdInfo);
  if ( v5 < 0 )
    G_Antilag_UpdateClosestEntities(*(_DWORD *)cmdInfo);
  GStatic::ClearActiveStatics();
  BgStatic::RestoreActiveStatics(v3);
}

/*
==============
SV_ClientWorkersMP_AddClientUsabilityUpdate
==============
*/
void SV_ClientWorkersMP_AddClientUsabilityUpdate(const unsigned int clientIndex)
{
  unsigned __int64 v1; 
  unsigned __int64 v4; 
  char v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  int v12; 

  v1 = clientIndex;
  if ( !s_clientUsabilityOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 423, ASSERT_TYPE_ASSERT, "( s_clientUsabilityOutput != nullptr )", (const char *)&queryFormat, "s_clientUsabilityOutput != nullptr") )
    __debugbreak();
  if ( (unsigned int)v1 >= SvClient::ms_clientCount )
  {
    v10 = SvClient::ms_clientCount;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( s_clientUsabilityBuildWorker.clientCount >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 426, ASSERT_TYPE_ASSERT, "( s_clientUsabilityBuildWorker.clientCount < ( sizeof( *array_counter( s_clientUsabilityBuildWorker.clientIndexArray ) ) + 0 ) )", (const char *)&queryFormat, "s_clientUsabilityBuildWorker.clientCount < ARRAY_COUNT( s_clientUsabilityBuildWorker.clientIndexArray )") )
    __debugbreak();
  s_clientUsabilityBuildWorker.clientIndexArray[s_clientUsabilityBuildWorker.clientCount++] = v1;
  s_clientUsabilityOutput[v1].workStage[0] = 1;
  if ( (unsigned int)v1 >= 0xE0 )
  {
    v12 = 224;
    v11 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array
    vmovsd  xmm1, qword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array+10h
  }
  v4 = v1 >> 5;
  v5 = v1 & 0x1F;
  v6 = (unsigned int)v1 >> 5;
  v7 = 0x80000000 >> v5;
  __asm { vmovups [rsp+78h+var_28], xmm0 }
  s_clientUsabilityProcessingBits.array[v4] |= 0x80000000 >> v5;
  __asm { vmovsd  [rsp+78h+var_18], xmm1 }
  if ( v6 >= 7 )
  {
    LODWORD(v9) = 7;
    LODWORD(v8) = v6;
    __asm
    {
      vmovups [rsp+78h+var_28], xmm0
      vmovsd  [rsp+78h+var_18], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( clientBits.WORD_COUNT )", "clientIndex >> 5 doesn't index clientBits.WORD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (((unsigned __int8)0x40000000u + 4 * (_BYTE)v4 - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_clientUsabilityThreadedReadyBits.array[v4]) )
    __debugbreak();
  _InterlockedAnd((volatile signed __int32 *)&s_clientUsabilityThreadedReadyBits.array[v4], ~v7);
  if ( s_clientUsabilityBuildWorker.clientCount == 4 )
  {
    SV_ClientWorkersMP_StartClientUsabilityUpdateWorker();
    if ( s_clientUsabilityBuildWorker.clientCount )
    {
      LODWORD(v8) = s_clientUsabilityBuildWorker.clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 442, ASSERT_TYPE_ASSERT, "( s_clientUsabilityBuildWorker.clientCount ) == ( 0 )", "s_clientUsabilityBuildWorker.clientCount == 0\n\t%i, %i", v8, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
SV_ClientWorkersMP_AddEntityTrigger
==============
*/
char SV_ClientWorkersMP_AddEntityTrigger(const unsigned int clientIndex, const unsigned int entityIndex, const bool isVehicleTrigger)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 entityTriggerCount; 
  unsigned __int16 v9; 
  ClientTriggersWorkOutput *v10; 
  __int64 v12; 
  unsigned int v13; 

  v5 = clientIndex;
  if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 341, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
    __debugbreak();
  if ( (unsigned int)v5 >= SvClient::ms_clientCount )
  {
    v13 = SvClient::ms_clientCount;
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v6 = v5;
  v7 = v5;
  if ( !s_clientTriggerOutput[v7].workerActive )
    return 0;
  entityTriggerCount = s_clientTriggerOutput[v7].entityTriggerCount;
  v9 = truncate_cast<unsigned short,unsigned int>(entityIndex);
  v10 = s_clientTriggerOutput;
  s_clientTriggerOutput[v6].entityIndex[entityTriggerCount] = v9;
  if ( isVehicleTrigger )
    v10[v6].isVehicleTrigger[(unsigned __int64)(unsigned int)entityTriggerCount >> 5] |= 0x80000000 >> (entityTriggerCount & 0x1F);
  ++v10[v7].entityTriggerCount;
  return 1;
}

/*
==============
SV_ClientWorkersMP_AddScriptableTrigger
==============
*/
bool SV_ClientWorkersMP_AddScriptableTrigger(const unsigned int clientIndex, const unsigned int scriptableIndex, const unsigned int scriptablePartIndex)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  ClientTriggersWorkOutput *v9; 
  bool result; 
  __int64 v11; 
  unsigned int v12; 

  v5 = clientIndex;
  if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 365, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
    __debugbreak();
  if ( (unsigned int)v5 >= SvClient::ms_clientCount )
  {
    v12 = SvClient::ms_clientCount;
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = v5;
  if ( !s_clientTriggerOutput[v5].workerActive )
    return 0;
  v7 = 6276 * v5 + s_clientTriggerOutput[v6].scriptableTriggerCount;
  s_clientTriggerOutput->scriptableIndex[v7] = truncate_cast<unsigned short,unsigned int>(scriptableIndex);
  v8 = truncate_cast<unsigned short,unsigned int>(scriptablePartIndex);
  v9 = s_clientTriggerOutput;
  s_clientTriggerOutput->scriptablePartIndex[v7] = v8;
  result = 1;
  ++v9[v6].scriptableTriggerCount;
  return result;
}

/*
==============
SV_ClientWorkersMP_AllocateMemory
==============
*/
void SV_ClientWorkersMP_AllocateMemory(HunkUser *hunkUser, const unsigned int clientCount)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned __int64 v5; 

  v2 = 12552 * clientCount;
  v3 = 260 * clientCount;
  v5 = clientCount;
  if ( s_clientEndFrameWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 82, ASSERT_TYPE_ASSERT, "( s_clientEndFrameWorkers == nullptr )", (const char *)&queryFormat, "s_clientEndFrameWorkers == nullptr") )
    __debugbreak();
  s_clientEndFrameWorkers = (ClientEndFrameWorkFlags *)Mem_HunkUser_AllocInternal(hunkUser, v5, 0x80ui64, "SV_ClientWorkersMP_AllocateMemory");
  memset_0(s_clientEndFrameWorkers, 0, v5);
  if ( s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput == nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput == nullptr") )
    __debugbreak();
  s_clientTriggerOutput = (ClientTriggersWorkOutput *)Mem_HunkUser_AllocInternal(hunkUser, v2, 0x80ui64, "SV_ClientWorkersMP_AllocateMemory");
  memset_0(s_clientTriggerOutput, 0, v2);
  if ( s_clientUsabilityOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 90, ASSERT_TYPE_ASSERT, "( s_clientUsabilityOutput == nullptr )", (const char *)&queryFormat, "s_clientUsabilityOutput == nullptr") )
    __debugbreak();
  s_clientUsabilityOutput = (ClientUsabilityWorkOutput *)Mem_HunkUser_AllocInternal(hunkUser, v3, 0x80ui64, "SV_ClientWorkersMP_AllocateMemory");
  DebugWipe(s_clientUsabilityOutput, v3);
  DebugWipe(&s_clientUsabilityBuildWorker, 0x14ui64);
  s_clientUsabilityBuildWorker.clientCount = 0;
  s_workerOutputCount = v5;
}

/*
==============
SV_ClientWorkersMP_ClientEntityLoDCmd
==============
*/
void SV_ClientWorkersMP_ClientEntityLoDCmd(const void *const cmdInfo)
{
  int v2; 
  unsigned int v3; 

  if ( *(_DWORD *)cmdInfo >= SvClient::ms_clientCount )
  {
    v3 = SvClient::ms_clientCount;
    v2 = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "cmd->clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  G_ActiveMP_UpdateEntityLoD(*(_DWORD *)cmdInfo);
}

/*
==============
SV_ClientWorkersMP_ClientTriggersCmd
==============
*/
void SV_ClientWorkersMP_ClientTriggersCmd(const void *const cmdInfo)
{
  __int64 v2; 
  BgStatic *v3; 
  gentity_s *v4; 
  __int64 v5; 
  unsigned int v6; 

  if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 317, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
    __debugbreak();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v3 = *(BgStatic **)(v2 + 272);
  *(_QWORD *)(v2 + 272) = 0i64;
  GStatic::SetActiveStatics();
  if ( *(_DWORD *)cmdInfo >= SvClient::ms_clientCount )
  {
    v6 = SvClient::ms_clientCount;
    LODWORD(v5) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "cmd->clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = SV_GentityNum(*(_DWORD *)cmdInfo);
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 326, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  s_clientTriggerOutput[*(unsigned int *)cmdInfo].workerActive = 1;
  G_ActiveMP_TouchTriggers(v4);
  s_clientTriggerOutput[*(unsigned int *)cmdInfo].workerActive = 0;
  GStatic::ClearActiveStatics();
  BgStatic::RestoreActiveStatics(v3);
}

/*
==============
SV_ClientWorkersMP_ClientUpdateUsabilityCmd
==============
*/
void SV_ClientWorkersMP_ClientUpdateUsabilityCmd(const void *const cmdInfo)
{
  unsigned int v2; 
  __int64 v3; 
  BgStatic *v4; 
  unsigned __int64 v5; 
  gentity_s *v6; 
  ClientUsabilityWorkOutput *v7; 
  volatile signed __int32 *v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !s_clientUsabilityOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 511, ASSERT_TYPE_ASSERT, "( s_clientUsabilityOutput != nullptr )", (const char *)&queryFormat, "s_clientUsabilityOutput != nullptr") )
    __debugbreak();
  v2 = 0;
  v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v4 = *(BgStatic **)(v3 + 272);
  *(_QWORD *)(v3 + 272) = 0i64;
  GStatic::SetActiveStatics();
  if ( *((_DWORD *)cmdInfo + 4) )
  {
    do
    {
      v5 = *((unsigned int *)cmdInfo + v2);
      if ( (unsigned int)v5 >= SvClient::ms_clientCount )
      {
        LODWORD(v12) = SvClient::ms_clientCount;
        LODWORD(v11) = *((_DWORD *)cmdInfo + v2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
        __debugbreak();
      v6 = &SvGameGlobals::ms_svGameGlobals->gentities[(int)v5];
      if ( !v6->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 525, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
        __debugbreak();
      v7 = &s_clientUsabilityOutput[v5];
      if ( v7->workStage[0] != 1 )
      {
        LODWORD(v12) = 1;
        LODWORD(v11) = v7->workStage[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 528, ASSERT_TYPE_ASSERT, "( usabilityOutput.workStage ) == ( UsabilityWorkStage::PROCESSING )", "usabilityOutput.workStage == UsabilityWorkStage::PROCESSING\n\t%i, %i", v11, v12) )
          __debugbreak();
      }
      v7->vehicleCount = G_PlayerUse_UpdateScriptableVehiclesCollect(v6, v7->vehicleList, 0x80u);
      v7->workStage[0] = 2;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array
        vmovsd  xmm1, qword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array+10h
        vmovups [rsp+0A8h+var_68], xmm0
        vmovsd  [rsp+0A8h+var_58], xmm1
      }
      if ( (unsigned int)v5 >> 5 >= 7 )
      {
        LODWORD(v12) = 7;
        LODWORD(v11) = (unsigned int)v5 >> 5;
        __asm
        {
          vmovups [rsp+0A8h+var_48], xmm0
          vmovsd  [rsp+0A8h+var_38], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( clientBits.WORD_COUNT )", "clientIndex >> 5 doesn't index clientBits.WORD_COUNT\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v10 = (volatile signed __int32 *)&s_clientUsabilityThreadedReadyBits.array[v5 >> 5];
      if ( ((unsigned __int8)v10 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_clientUsabilityThreadedReadyBits.array[v5 >> 5]) )
        __debugbreak();
      _InterlockedOr(v10, 0x80000000 >> (v5 & 0x1F));
      ++v2;
    }
    while ( v2 < *((_DWORD *)cmdInfo + 4) );
  }
  GStatic::ClearActiveStatics();
  BgStatic::RestoreActiveStatics(v4);
}

/*
==============
SV_ClientWorkersMP_FinishActiveClientEndFrame
==============
*/
void SV_ClientWorkersMP_FinishActiveClientEndFrame(ClientEndFrameWorkFlags *workFlags)
{
  signed int v2; 
  __int64 v3; 

  if ( !workFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 198, ASSERT_TYPE_ASSERT, "( workFlags != nullptr )", (const char *)&queryFormat, "workFlags != nullptr") )
    __debugbreak();
  if ( !s_clientEndFrameWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 199, ASSERT_TYPE_ASSERT, "( s_clientEndFrameWorkers != nullptr )", (const char *)&queryFormat, "s_clientEndFrameWorkers != nullptr") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 200, ASSERT_TYPE_ASSERT, "( BgStatic::GetActiveStatics() != nullptr )", (const char *)&queryFormat, "BgStatic::GetActiveStatics() != nullptr") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_ACTIVE_CLIENT_ENDFRAME);
  memcpy_0(workFlags, s_clientEndFrameWorkers, (int)SvClient::ms_clientCount);
  v2 = SvClient::ms_clientCount;
  if ( s_workerOutputCount != SvClient::ms_clientCount )
  {
    LODWORD(v3) = s_workerOutputCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 210, ASSERT_TYPE_ASSERT, "( s_workerOutputCount ) == ( static_cast<uint32_t>(SvClient::GetClientCount()) )", "s_workerOutputCount == static_cast<uint32_t>(SvClient::GetClientCount())\n\t%i, %i", v3, SvClient::ms_clientCount) )
      __debugbreak();
    v2 = SvClient::ms_clientCount;
  }
  memset_0(s_clientEndFrameWorkers, 0, v2);
}

/*
==============
SV_ClientWorkersMP_FinishClientTriggersUpdate
==============
*/
void SV_ClientWorkersMP_FinishClientTriggersUpdate(void)
{
  __int64 v0; 
  signed int v1; 
  __int64 v2; 
  bool *v3; 
  unsigned __int16 v4; 
  gentity_s *v5; 
  unsigned __int16 v6; 
  unsigned __int16 i; 
  __int64 v8; 
  unsigned int v9; 
  signed int v10; 
  __int64 v11; 

  if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 280, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
    __debugbreak();
  v0 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 281, ASSERT_TYPE_ASSERT, "( BgStatic::GetActiveStatics() != nullptr )", (const char *)&queryFormat, "BgStatic::GetActiveStatics() != nullptr") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_ACTIVE_CLIENT_TRIGGERS);
  v1 = 0;
  v10 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    v2 = 0i64;
    v11 = 0i64;
    do
    {
      v3 = &s_clientTriggerOutput->workerActive + v2;
      if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
        __debugbreak();
      v4 = 0;
      v5 = &SvGameGlobals::ms_svGameGlobals->gentities[v1];
      if ( *((_WORD *)v3 + 2178) )
      {
        do
        {
          v6 = *(_WORD *)&v3[2 * v4 + 260];
          if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
            __debugbreak();
          G_ActiveMP_ProcessEntityTrigger(v5, &SvGameGlobals::ms_svGameGlobals->gentities[v6], ((0x80000000 >> (v4 & 0x1F)) & *(_DWORD *)&v3[4 * ((unsigned __int64)v4 >> 5) + 4]) != 0);
          ++v4;
        }
        while ( v4 < *((_WORD *)v3 + 2178) );
        v1 = v10;
        v2 = v11;
      }
      for ( i = 0; i < *((_WORD *)v3 + 6275); ++i )
        G_ActiveMP_ProcessScriptableTrigger(v5, *(unsigned __int16 *)&v3[2 * i + 4358], *(unsigned __int16 *)&v3[2 * i + 8454]);
      ++v1;
      v2 += 12552i64;
      v10 = v1;
      v11 = v2;
    }
    while ( v1 < (int)SvClient::ms_clientCount );
  }
  if ( s_workerOutputCount != SvClient::ms_clientCount )
  {
    v9 = SvClient::ms_clientCount;
    LODWORD(v8) = s_workerOutputCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 310, ASSERT_TYPE_ASSERT, "( s_workerOutputCount ) == ( static_cast<uint32_t>(SvClient::GetClientCount()) )", "s_workerOutputCount == static_cast<uint32_t>(SvClient::GetClientCount())\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
  memset_0(s_clientTriggerOutput, 0, 12552i64 * (int)SvClient::ms_clientCount);
}

/*
==============
SV_ClientWorkersMP_FinishEntityLoDUpdate
==============
*/
void SV_ClientWorkersMP_FinishEntityLoDUpdate(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_ACTIVE_CLIENT_ENDFRAME);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_ACTIVE_CLIENT_ENTITYLOD);
}

/*
==============
SV_ClientWorkersMP_GetAllocationSize
==============
*/
__int64 SV_ClientWorkersMP_GetAllocationSize(const unsigned int clientCount)
{
  return (260 * clientCount + 127) & 0xFFFFFF80;
}

/*
==============
SV_ClientWorkersMP_ProcessClientUsabilityUpdate
==============
*/
void SV_ClientWorkersMP_ProcessClientUsabilityUpdate(void)
{
  __int64 v0; 
  int v1; 
  unsigned int v2; 
  ClientBits *v3; 
  ClientBits *i; 
  __int64 v5; 

  v0 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 489, ASSERT_TYPE_ASSERT, "( BgStatic::GetActiveStatics() != nullptr )", (const char *)&queryFormat, "BgStatic::GetActiveStatics() != nullptr") )
    __debugbreak();
  SV_ClientWorkersMP_StartClientUsabilityUpdateWorker();
  v1 = 0;
  if ( s_clientUsabilityBuildWorker.clientCount )
  {
    LODWORD(v5) = s_clientUsabilityBuildWorker.clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 493, ASSERT_TYPE_ASSERT, "( s_clientUsabilityBuildWorker.clientCount ) == ( 0 )", "s_clientUsabilityBuildWorker.clientCount == 0\n\t%i, %i", v5, 0i64) )
      __debugbreak();
  }
  G_PlayerUse_DisableAllScriptableVehicles();
  Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout(WRKCMD_SV_ACTIVE_CLIENT_USABILITY, SV_ClientWorkersMP_ProcessUsabilityUpdateOutput, NULL);
  v2 = 0;
  v3 = &s_clientUsabilityProcessingBits;
  while ( !v3->array[0] )
  {
    ++v2;
    v3 = (ClientBits *)((char *)v3 + 4);
    if ( v2 >= 7 )
      goto LABEL_16;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 504, ASSERT_TYPE_ASSERT, "( !s_clientUsabilityProcessingBits.anyBitsOn() )", (const char *)&queryFormat, "!s_clientUsabilityProcessingBits.anyBitsOn()") )
    __debugbreak();
LABEL_16:
  for ( i = &s_clientUsabilityThreadedReadyBits; !i->array[0]; i = (ClientBits *)((char *)i + 4) )
  {
    if ( (unsigned int)++v1 >= 7 )
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 505, ASSERT_TYPE_ASSERT, "( !const_cast<const ClientBits *>( &s_clientUsabilityThreadedReadyBits )->anyBitsOn() )", (const char *)&queryFormat, "!const_cast<const ClientBits *>( &s_clientUsabilityThreadedReadyBits )->anyBitsOn()") )
    __debugbreak();
}

/*
==============
SV_ClientWorkersMP_ProcessUsabilityUpdateOutput
==============
*/

void __fastcall SV_ClientWorkersMP_ProcessUsabilityUpdateOutput(void *data)
{
  __int64 v3; 
  unsigned int v5; 
  unsigned int v6; 
  ClientUsabilityWorkOutput *v7; 
  unsigned __int8 vehicleCount; 
  char v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  volatile signed __int32 *v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  __asm
  {
    vmovups xmm1, xmmword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array
    vmovsd  xmm0, qword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array+10h
  }
  LODWORD(v3) = 0;
  __asm
  {
    vmovups [rsp+0B8h+var_68], xmm1
    vmovsd  [rsp+0B8h+var_58], xmm0
    vmovd   edi, xmm1
  }
  while ( 1 )
  {
    for ( ; !_EDI; _EDI = s_clientUsabilityThreadedReadyBits.array[v3] )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 7 )
      {
        v17 = s_clientUsabilityProcessingBits.array[0];
        LODWORD(v18) = 0;
        while ( 1 )
        {
          for ( ; !v17; v17 = s_clientUsabilityProcessingBits.array[v18] )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= 7 )
              JUMPOUT(0x141471053i64);
          }
          v19 = __lzcnt(v17);
          if ( v19 >= 0x20 )
          {
            LODWORD(v21) = 32;
            LODWORD(v20) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( (v17 & (0x80000000 >> v19)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v17 &= ~(0x80000000 >> v19);
          if ( !s_clientUsabilityOutput[(int)(v19 + 32 * v18)].workStage[0] )
          {
            LODWORD(v20) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 479, ASSERT_TYPE_ASSERT, "( usabilityOutput.workStage ) != ( UsabilityWorkStage::IDLE )", "usabilityOutput.workStage != UsabilityWorkStage::IDLE\n\t%i, %i", v20, 0i64) )
              __debugbreak();
          }
        }
      }
    }
    v5 = __lzcnt(_EDI);
    v6 = v5 + 32 * v3;
    if ( v5 >= 0x20 )
    {
      LODWORD(v21) = 32;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( (_EDI & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    _EDI &= ~(0x80000000 >> v5);
    v7 = &s_clientUsabilityOutput[v6];
    if ( v7->workStage[0] != 2 )
    {
      LODWORD(v21) = 2;
      LODWORD(v20) = v7->workStage[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 460, ASSERT_TYPE_ASSERT, "( usabilityOutput.workStage ) == ( UsabilityWorkStage::READY )", "usabilityOutput.workStage == UsabilityWorkStage::READY\n\t%i, %i", v20, v21) )
        __debugbreak();
    }
    vehicleCount = v7->vehicleCount;
    v7->workStage[0] = 0;
    if ( vehicleCount )
    {
      if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
        __debugbreak();
      G_PlayerUse_UpdateScriptableVehiclesNotify(&SvGameGlobals::ms_svGameGlobals->gentities[v6], v7->vehicleList, vehicleCount);
    }
    if ( v6 >= 0xE0 )
    {
      LODWORD(v23) = 224;
      LODWORD(v22) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v22, v23) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array
      vmovsd  xmm1, qword ptr cs:s_clientUsabilityThreadedReadyBits.baseclass_0.array+10h
    }
    v11 = v6 & 0x1F;
    v12 = (unsigned __int64)v6 >> 5;
    v13 = v6 >> 5;
    v14 = 0x80000000 >> v11;
    v15 = 4 * v12;
    s_clientUsabilityProcessingBits.array[v12] &= ~(0x80000000 >> v11);
    __asm
    {
      vmovups [rsp+0B8h+var_68], xmm0
      vmovsd  [rsp+0B8h+var_58], xmm1
    }
    if ( v13 >= 7 )
    {
      LODWORD(v21) = 7;
      LODWORD(v20) = v13;
      __asm
      {
        vmovups [rsp+0B8h+var_48], xmm0
        vmovsd  [rsp+0B8h+var_38], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( clientBits.WORD_COUNT )", "clientIndex >> 5 doesn't index clientBits.WORD_COUNT\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v16 = (volatile signed __int32 *)((char *)&s_clientUsabilityThreadedReadyBits + v15);
    if ( ((unsigned __int8)v16 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v16) )
      __debugbreak();
    _InterlockedAnd(v16, ~v14);
  }
}

/*
==============
SV_ClientWorkersMP_ShutdownMemory
==============
*/
void SV_ClientWorkersMP_ShutdownMemory(void)
{
  s_clientEndFrameWorkers = NULL;
  s_clientTriggerOutput = NULL;
  s_clientUsabilityOutput = NULL;
  s_workerOutputCount = 0;
}

/*
==============
SV_ClientWorkersMP_StartActiveClientEndFrame
==============
*/
void SV_ClientWorkersMP_StartActiveClientEndFrame(const unsigned int clientIndex, const ClientEndFrameWorkFlags workFlags)
{
  char v2; 
  __int64 v3; 
  const dvar_t *v4; 
  __int64 v5; 
  BgStatic *v6; 
  char v7; 
  const gentity_s *v8; 
  gentity_s *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int data; 

  v2 = workFlags;
  v3 = clientIndex;
  if ( !s_clientEndFrameWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 175, ASSERT_TYPE_ASSERT, "( s_clientEndFrameWorkers != nullptr )", (const char *)&queryFormat, "s_clientEndFrameWorkers != nullptr") )
    __debugbreak();
  if ( (unsigned int)v3 >= SvClient::ms_clientCount )
  {
    v11 = SvClient::ms_clientCount;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  *((_BYTE *)s_clientEndFrameWorkers + v3) = v2;
  data = v3;
  v4 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
  if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_SV_ACTIVE_CLIENT_ENDFRAME, &data);
  }
  else
  {
    if ( !s_clientEndFrameWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 116, ASSERT_TYPE_ASSERT, "( s_clientEndFrameWorkers != nullptr )", (const char *)&queryFormat, "s_clientEndFrameWorkers != nullptr") )
      __debugbreak();
    v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    v6 = *(BgStatic **)(v5 + 272);
    *(_QWORD *)(v5 + 272) = 0i64;
    GStatic::SetActiveStatics();
    v7 = *((_BYTE *)s_clientEndFrameWorkers + data);
    v8 = SV_GentityNum(data);
    v9 = (gentity_s *)v8;
    if ( (v7 & 0x20) != 0 )
      G_ActiveMP_UpdateHudElements(v8);
    if ( (v7 & 8) != 0 )
    {
      G_Objectives_Update(v9);
      G_CalloutMarkerPings_Update(v9);
    }
    if ( (v7 & 1) != 0 )
      G_PlayerUse_ProcessUseList(v9);
    if ( (v7 & 0x10) != 0 )
      G_EntityMarks_ProcessEntityMarks(data);
    if ( (v7 & 2) != 0 )
      G_ActiveMP_PlayerAnimation(data);
    if ( (v7 & 4) != 0 )
      G_ActiveMP_UpdateClientStreamList(data);
    if ( (v7 & 0x40) != 0 )
      G_ActiveMP_UpdateClientSighted(data);
    if ( v7 < 0 )
      G_Antilag_UpdateClosestEntities(data);
    GStatic::ClearActiveStatics();
    BgStatic::RestoreActiveStatics(v6);
  }
}

/*
==============
SV_ClientWorkersMP_StartClientTriggersUpdate
==============
*/
void SV_ClientWorkersMP_StartClientTriggersUpdate(const unsigned int clientIndex)
{
  const dvar_t *v2; 
  __int64 v3; 
  BgStatic *v4; 
  int v5; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int data; 

  if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 259, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
    __debugbreak();
  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v9 = SvClient::ms_clientCount;
    LODWORD(v7) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  data = clientIndex;
  v2 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
  if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_SV_ACTIVE_CLIENT_TRIGGERS, &data);
  }
  else
  {
    if ( !s_clientTriggerOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 317, ASSERT_TYPE_ASSERT, "( s_clientTriggerOutput != nullptr )", (const char *)&queryFormat, "s_clientTriggerOutput != nullptr") )
      __debugbreak();
    v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    v4 = *(BgStatic **)(v3 + 272);
    *(_QWORD *)(v3 + 272) = 0i64;
    GStatic::SetActiveStatics();
    v5 = data;
    if ( data >= SvClient::ms_clientCount )
    {
      LODWORD(v8) = SvClient::ms_clientCount;
      LODWORD(v7) = data;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "cmd->clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
      v5 = data;
    }
    v6 = SV_GentityNum(v5);
    if ( !v6->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 326, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
      __debugbreak();
    s_clientTriggerOutput[data].workerActive = 1;
    G_ActiveMP_TouchTriggers(v6);
    s_clientTriggerOutput[data].workerActive = 0;
    GStatic::ClearActiveStatics();
    BgStatic::RestoreActiveStatics(v4);
  }
}

/*
==============
SV_ClientWorkersMP_StartClientUsabilityUpdateWorker
==============
*/
void SV_ClientWorkersMP_StartClientUsabilityUpdateWorker()
{
  const dvar_t *v0; 

  if ( s_clientUsabilityBuildWorker.clientCount )
  {
    v0 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
    if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      Sys_AddWorkerCmd(WRKCMD_SV_ACTIVE_CLIENT_USABILITY, &s_clientUsabilityBuildWorker);
      s_clientUsabilityBuildWorker.clientCount = 0;
      return;
    }
    SV_ClientWorkersMP_ClientUpdateUsabilityCmd(&s_clientUsabilityBuildWorker);
  }
  s_clientUsabilityBuildWorker.clientCount = 0;
}

/*
==============
SV_ClientWorkersMP_StartEntityLoDUpdate
==============
*/
void SV_ClientWorkersMP_StartEntityLoDUpdate(const unsigned int clientIndex)
{
  const dvar_t *v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int data; 

  v1 = DCONST_DVARBOOL_sv_clientWorkersEnabled;
  data = clientIndex;
  if ( !DCONST_DVARBOOL_sv_clientWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_SV_ACTIVE_CLIENT_ENTITYLOD, &data);
  }
  else
  {
    v2 = data;
    if ( data >= SvClient::ms_clientCount )
    {
      LODWORD(v4) = SvClient::ms_clientCount;
      LODWORD(v3) = data;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_workers_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "cmd->clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
      v2 = data;
    }
    G_ActiveMP_UpdateEntityLoD(v2);
  }
}

