/*
==============
PublisherVariableManager::GetInstancePtr
==============
*/

PublisherVariableManager *__fastcall PublisherVariableManager::GetInstancePtr()
{
  return ?GetInstancePtr@PublisherVariableManager@@SAPEAV1@XZ();
}

/*
==============
Fence_PublisherVarsDependenciesUpdated
==============
*/

void __fastcall Fence_PublisherVarsDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_PublisherVarsDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
PublisherVariableManager::SetDvarByString
==============
*/

void __fastcall PublisherVariableManager::SetDvarByString(const dvar_t *dvar, const char *value)
{
  ?SetDvarByString@PublisherVariableManager@@SAXPEBUdvar_t@@PEBD@Z(dvar, value);
}

/*
==============
PublisherVariableManager::OnUnregistered
==============
*/

void __fastcall PublisherVariableManager::OnUnregistered(PublisherVariableManager *this)
{
  ?OnUnregistered@PublisherVariableManager@@UEAAXXZ(this);
}

/*
==============
PublisherVariableManager::RegisterCommands
==============
*/

void __fastcall PublisherVariableManager::RegisterCommands(PublisherVariableManager *this)
{
  ?RegisterCommands@PublisherVariableManager@@QEAAXXZ(this);
}

/*
==============
PublisherVariableManager::GetInstance
==============
*/

PublisherVariableManager *__fastcall PublisherVariableManager::GetInstance()
{
  return ?GetInstance@PublisherVariableManager@@SAAEAV1@XZ();
}

/*
==============
PublisherVariableManager::Uninit
==============
*/

void __fastcall PublisherVariableManager::Uninit(PublisherVariableManager *this)
{
  ?Uninit@PublisherVariableManager@@UEAAXXZ(this);
}

/*
==============
PublisherVariableManager::OutputCurrentState
==============
*/

void __fastcall PublisherVariableManager::OutputCurrentState(PublisherVariableManager *this, const int controllerIndex)
{
  ?OutputCurrentState@PublisherVariableManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
PublisherVariableManager::OnSignedOut
==============
*/

void __fastcall PublisherVariableManager::OnSignedOut(PublisherVariableManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@PublisherVariableManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
PublisherVariableManager::ReapplyAllPublisherVariables
==============
*/

void __fastcall PublisherVariableManager::ReapplyAllPublisherVariables(PublisherVariableManager *this)
{
  ?ReapplyAllPublisherVariables@PublisherVariableManager@@QEAAXXZ(this);
}

/*
==============
PublisherVariableManager::OnDisconnect
==============
*/

void __fastcall PublisherVariableManager::OnDisconnect(PublisherVariableManager *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@PublisherVariableManager@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
PublisherVariableManager::OnRegistered
==============
*/

void __fastcall PublisherVariableManager::OnRegistered(PublisherVariableManager *this)
{
  ?OnRegistered@PublisherVariableManager@@UEAAXXZ(this);
}

/*
==============
PublisherVariableManager::Init
==============
*/

bool __fastcall PublisherVariableManager::Init(PublisherVariableManager *this)
{
  return ?Init@PublisherVariableManager@@UEAA_NXZ(this);
}

/*
==============
PublisherVariableManager::HasRetrievedVariables
==============
*/

bool __fastcall PublisherVariableManager::HasRetrievedVariables(PublisherVariableManager *this)
{
  return ?HasRetrievedVariables@PublisherVariableManager@@QEBA_NXZ(this);
}

/*
==============
OnRetrieveVariablesComplete
==============
*/

void __fastcall OnRetrieveVariablesComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRetrieveVariablesComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
PublisherVariableManager::HasPendingRetrieve
==============
*/

bool __fastcall PublisherVariableManager::HasPendingRetrieve(PublisherVariableManager *this)
{
  return ?HasPendingRetrieve@PublisherVariableManager@@QEBA_NXZ(this);
}

/*
==============
PublisherVariableManager::ControllerFrame
==============
*/

void __fastcall PublisherVariableManager::ControllerFrame(PublisherVariableManager *this, const int controllerIndex)
{
  ?ControllerFrame@PublisherVariableManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnSubscribeToGroupComplete
==============
*/

void __fastcall OnSubscribeToGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnSubscribeToGroupComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
PublisherVariableManager::RegisterDvarByString
==============
*/

const dvar_t *__fastcall PublisherVariableManager::RegisterDvarByString(const char *name, const char *value)
{
  return ?RegisterDvarByString@PublisherVariableManager@@SAPEBUdvar_t@@PEBD0@Z(name, value);
}

/*
==============
PublisherVariableManager::Frame
==============
*/

void __fastcall PublisherVariableManager::Frame(PublisherVariableManager *this)
{
  ?Frame@PublisherVariableManager@@UEAAXXZ(this);
}

/*
==============
PublisherVariableManager::GetVariablesVersion
==============
*/

bool __fastcall PublisherVariableManager::GetVariablesVersion(PublisherVariableManager *this, const char *nameSpace, int *outMajor, int *outMinor)
{
  return ?GetVariablesVersion@PublisherVariableManager@@QEAA_NPEBDAEAH1@Z(this, nameSpace, outMajor, outMinor);
}

/*
==============
PublisherVariableManager::SubscribeToGroup
==============
*/

void __fastcall PublisherVariableManager::SubscribeToGroup(PublisherVariableManager *this, const int controllerIndex, const unsigned int group)
{
  ?SubscribeToGroup@PublisherVariableManager@@QEAAXHI@Z(this, controllerIndex, group);
}

/*
==============
PublisherVariables_ResetData
==============
*/

void PublisherVariables_ResetData(void)
{
  ?PublisherVariables_ResetData@@YAXXZ();
}

/*
==============
PublisherVariableManager::OnSignedIn
==============
*/

void __fastcall PublisherVariableManager::OnSignedIn(PublisherVariableManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@PublisherVariableManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
PublisherVariableManager::OnSuspendResume
==============
*/

void __fastcall PublisherVariableManager::OnSuspendResume(PublisherVariableManager *this)
{
  ?OnSuspendResume@PublisherVariableManager@@QEAAXXZ(this);
}

/*
==============
PublisherVariables_ResetControllerAndData
==============
*/

void PublisherVariables_ResetControllerAndData(void)
{
  ?PublisherVariables_ResetControllerAndData@@YAXXZ();
}

/*
==============
PublisherVariableManager::AddRetrievedCallback
==============
*/

void __fastcall PublisherVariableManager::AddRetrievedCallback(PublisherVariableManager *this, void (__fastcall *cb)())
{
  ?AddRetrievedCallback@PublisherVariableManager@@QEAAXP6AXXZ@Z(this, cb);
}

/*
==============
PublisherVariableManager::EnqueueRetrieveVariables
==============
*/

void __fastcall PublisherVariableManager::EnqueueRetrieveVariables(PublisherVariableManager *this, const int controllerIndex, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion)
{
  ?EnqueueRetrieveVariables@PublisherVariableManager@@QEAAXHPEBDGG@Z(this, controllerIndex, nameSpace, majorVersion, minorVersion);
}

/*
==============
PublisherVariableManager::OnRegistered
==============
*/

void __fastcall PublisherVariableManager::OnRegistered(PublisherVariableManager *this)
{
  OnlineConfig_CreateAllDVars();
}

/*
==============
PublisherVariableManager::OnUnregistered
==============
*/
void PublisherVariableManager::OnUnregistered(PublisherVariableManager *this)
{
  ;
}

/*
==============
PublisherVariableManager::Init
==============
*/
char PublisherVariableManager::Init(PublisherVariableManager *this)
{
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_PUBLISHER_VARS, Fence_PublisherVarsDependenciesUpdated);
  s_controllerIndex = -1;
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
  s_pubVarNamespaces[0] = "general";
  s_pubVarNamespaces[1] = "xb3";
  s_pubVarNamespaces[2] = "f2p";
  s_pubVarNamespaces[3] = "general_8_24";
  s_pubVarNamespaces[4] = "xb3_8_24";
  s_pubVarNamespaces[5] = "f2p_8_24";
  s_pubVarNamespaces[6] = DS_GetCompassBuildName();
  Cmd_AddCommandInternal("pubvar_testcallbacks", TestCallBacks_f, &TestCallBacks_f_VAR);
  return 1;
}

/*
==============
PublisherVariableManager::Uninit
==============
*/
void PublisherVariableManager::Uninit(PublisherVariableManager *this)
{
  s_controllerIndex = -1;
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
}

/*
==============
PublisherVariableManager::Frame
==============
*/
void PublisherVariableManager::Frame(PublisherVariableManager *this)
{
  int v1; 
  unsigned __int16 *p_majorVersionRequested; 
  PublisherVariableRequestState state; 
  PublisherVariableRequestState v4; 
  PublisherVariableRequestState v5; 
  PublisherVariableRequestState v6; 
  PublisherVariableRequestState v7; 
  PublisherVariableRequestState v8; 
  PublisherVariableRequestState v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 

  if ( s_controllerIndex != -1 && Com_FrontEnd_IsInFrontEnd() )
  {
    v1 = 0;
    p_majorVersionRequested = &s_pubVarData[0].majorVersionRequested;
    do
    {
      if ( *((_DWORD *)p_majorVersionRequested - 2) == 1 )
      {
        if ( !*p_majorVersionRequested || *(p_majorVersionRequested - 2) == *p_majorVersionRequested )
          PublisherVariables_AddToRetrieveList((PublisherVariableNamespaces)v1);
        else
          Sys_Restart("LUA_MENU/PATCH_UPDATE_SUCCESS");
      }
      ++v1;
      p_majorVersionRequested += 8;
    }
    while ( v1 < 7 );
    if ( s_numNamespacesToRetrieve )
    {
      request.m_appTaskType = -1;
      memset(&request.m_appData, 0, 32);
      request.m_onUpdateCallback = NULL;
      request.m_cancelTaskOnSignoutEvent = 1;
      request.m_timeoutInSeconds = 0;
      request.m_controllerIndex = s_controllerIndex;
      request.m_onCompletionCallback = OnRetrieveVariablesComplete;
      Com_Printf(25, "[PubVar] Retrieving %i namespaces\n", s_numNamespacesToRetrieve);
      if ( !dwRetrievePublisherVariables(&request, s_pubVarNamespacesToRetrieve, s_numNamespacesToRetrieve) )
      {
        state = s_pubVarData[0].state;
        if ( s_pubVarData[0].state == NOT_FIND )
          state = GENERAL;
        s_pubVarData[0].state = state;
        v4 = s_pubVarData[1].state;
        if ( s_pubVarData[1].state == NOT_FIND )
          v4 = GENERAL;
        s_pubVarData[1].state = v4;
        v5 = s_pubVarData[2].state;
        if ( s_pubVarData[2].state == NOT_FIND )
          v5 = GENERAL;
        s_pubVarData[2].state = v5;
        v6 = s_pubVarData[3].state;
        if ( s_pubVarData[3].state == NOT_FIND )
          v6 = GENERAL;
        s_pubVarData[3].state = v6;
        v7 = s_pubVarData[4].state;
        if ( s_pubVarData[4].state == NOT_FIND )
          v7 = GENERAL;
        s_pubVarData[4].state = v7;
        v8 = s_pubVarData[5].state;
        if ( s_pubVarData[5].state == NOT_FIND )
          v8 = GENERAL;
        s_pubVarData[5].state = v8;
        v9 = s_pubVarData[6].state;
        if ( s_pubVarData[6].state == NOT_FIND )
          v9 = GENERAL;
        s_pubVarData[6].state = v9;
      }
      s_numNamespacesToRetrieve = 0;
      request.m_onCompletionCallback = NULL;
      request.m_onUpdateCallback = NULL;
      request.m_appSecondaryCallback = NULL;
      request.m_timeoutInSeconds = 0;
      m_asyncInfo = request.m_asyncInfo;
      if ( request.m_asyncInfo )
      {
        request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
        m_asyncInfo = NULL;
        request.m_asyncInfo = NULL;
      }
      if ( request.m_remoteDemonwareTask.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( request.m_remoteDemonwareTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
          request.m_remoteDemonwareTask.m_ptr = NULL;
        }
        m_asyncInfo = request.m_asyncInfo;
      }
      if ( m_asyncInfo )
        m_asyncInfo->__abi_Release(m_asyncInfo);
    }
  }
}

/*
==============
PublisherVariableManager::ControllerFrame
==============
*/
void PublisherVariableManager::ControllerFrame(PublisherVariableManager *this, const int controllerIndex)
{
  ;
}

/*
==============
PublisherVariableManager::OnSignedIn
==============
*/
void PublisherVariableManager::OnSignedIn(PublisherVariableManager *this, const int controllerIndex, GenericSignInState signinState)
{
  bool v4; 

  if ( s_controllerIndex == controllerIndex )
  {
    v4 = signinState == SignedInToDemonWare;
    if ( signinState < SignedInToDemonWare )
    {
      s_controllerIndex = -1;
      memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
      s_pubVarData[0].required = 1;
      return;
    }
  }
  else
  {
    v4 = signinState == SignedInToDemonWare;
  }
  if ( v4 )
  {
    if ( s_controllerIndex == -1 )
      s_controllerIndex = controllerIndex;
  }
  else if ( signinState == SignedInToLocalClient && Live_IsUserSignedInToDemonware(controllerIndex) && s_controllerIndex == -1 )
  {
    s_controllerIndex = controllerIndex;
    if ( FenceManager_AreDependenciesMet(controllerIndex, FENCE_PUBLISHER_VARS) )
      Fence_PublisherVarsDependenciesUpdated(s_controllerIndex, 1);
  }
}

/*
==============
PublisherVariableManager::OnSignedOut
==============
*/
void PublisherVariableManager::OnSignedOut(PublisherVariableManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  int v4; 
  PublisherVariableRequestState state; 
  PublisherVariableRequestState v6; 
  PublisherVariableRequestState v7; 
  PublisherVariableRequestState v8; 
  PublisherVariableRequestState v9; 
  PublisherVariableRequestState v10; 
  PublisherVariableRequestState v11; 

  if ( s_controllerIndex == controllerIndex )
  {
    s_controllerIndex = -1;
    memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
    v4 = 0;
    s_pubVarData[0].required = 1;
    while ( controllerIndex == v4 || !Live_IsConnectedToDemonware(v4) )
    {
      if ( ++v4 >= 8 )
        return;
    }
    s_controllerIndex = v4;
    if ( FenceManager_AreDependenciesMet(v4, FENCE_PUBLISHER_VARS) )
    {
      state = s_pubVarData[0].state;
      if ( s_pubVarData[0].state == NO_FREIND_ERROR )
        state = GENERAL;
      s_pubVarData[0].state = state;
      v6 = s_pubVarData[1].state;
      if ( s_pubVarData[1].state == NO_FREIND_ERROR )
        v6 = GENERAL;
      s_pubVarData[1].state = v6;
      v7 = s_pubVarData[2].state;
      if ( s_pubVarData[2].state == NO_FREIND_ERROR )
        v7 = GENERAL;
      s_pubVarData[2].state = v7;
      v8 = s_pubVarData[3].state;
      if ( s_pubVarData[3].state == NO_FREIND_ERROR )
        v8 = GENERAL;
      s_pubVarData[3].state = v8;
      v9 = s_pubVarData[4].state;
      if ( s_pubVarData[4].state == NO_FREIND_ERROR )
        v9 = GENERAL;
      s_pubVarData[4].state = v9;
      v10 = s_pubVarData[5].state;
      if ( s_pubVarData[5].state == NO_FREIND_ERROR )
        v10 = GENERAL;
      s_pubVarData[5].state = v10;
      v11 = s_pubVarData[6].state;
      if ( s_pubVarData[6].state == NO_FREIND_ERROR )
        v11 = GENERAL;
      s_pubVarData[6].state = v11;
    }
  }
}

/*
==============
PublisherVariableManager::OnDisconnect
==============
*/
void PublisherVariableManager::OnDisconnect(PublisherVariableManager *this, ONLINE_DISCONNECT reason)
{
  s_controllerIndex = -1;
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
}

/*
==============
PublisherVariableManager::OutputCurrentState
==============
*/
void PublisherVariableManager::OutputCurrentState(PublisherVariableManager *this, const int controllerIndex)
{
  __asm
  {
    vmovsd  xmm3, cs:__real@3fb0000000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "[PubVar] %s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
}

/*
==============
PublisherVariableManager::AddRetrievedCallback
==============
*/
void PublisherVariableManager::AddRetrievedCallback(PublisherVariableManager *this, void (*cb)())
{
  int v2; 
  int v3; 
  void (__fastcall **v4)(); 

  v2 = s_numRetrievedCallbacks;
  if ( s_numRetrievedCallbacks < 14 )
  {
    v3 = 0;
    if ( s_numRetrievedCallbacks <= 0 )
    {
LABEL_8:
      s_variablesRetrievedCallbacks[s_numRetrievedCallbacks] = cb;
      s_numRetrievedCallbacks = v2 + 1;
    }
    else
    {
      v4 = s_variablesRetrievedCallbacks;
      while ( *v4 != cb )
      {
        ++v3;
        ++v4;
        if ( v3 >= s_numRetrievedCallbacks )
          goto LABEL_8;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 738, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "[PubVar] callback already registered") )
        goto LABEL_11;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 730, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Maximum social config callbacks reached, increase MAX_SOCIAL_CONFIG_COMPLETE_CALLBACKS if more are needed") )
  {
LABEL_11:
    __debugbreak();
  }
}

/*
==============
ApplyPublisherVariables
==============
*/
__int64 ApplyPublisherVariables(PublisherVariableData *pubVarData)
{
  unsigned __int8 v3; 
  const char *NameSpaceForData; 
  __int64 v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  int v10; 
  unsigned __int16 v11; 
  bool v12; 
  const dvar_t *v13; 
  __int64 minorVersion; 
  __int64 majorVersion; 
  __int64 v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  int v21; 
  unsigned __int16 v22; 
  const dvar_t *VarByName; 
  const dvar_t *v24; 
  unsigned __int8 type; 
  int v26; 
  unsigned __int64 v28; 
  __int64 v29; 
  int v30; 
  char *value; 
  __int64 valueSize; 
  bdPublisherVariablesIterator iterator; 
  char key[64]; 
  char str[1024]; 

  bdPublisherVariablesIterator::bdPublisherVariablesIterator(&iterator);
  v3 = 0;
  NameSpaceForData = PublisherVariables_GetNameSpaceForData(pubVarData);
  dwGetPublisherVariablesIterator(s_controllerIndex, NameSpaceForData, &iterator);
  while ( bdPublisherVariablesIterator::valid(&iterator) )
  {
    dwGetPublisherVariableKeyValueByIterator(s_controllerIndex, &iterator, key, 0x40u, str, 0x400u);
    v5 = 0i64;
    v6 = 16i64;
    while ( 1 )
    {
      v7 = key[v5];
      v8 = v6;
      v9 = aMajorversion[v5++];
      --v6;
      if ( !v8 )
      {
LABEL_6:
        v10 = atoi(str);
        v11 = v10;
        if ( (v10 < 0 || (unsigned int)v10 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v10, "signed", v10) )
          __debugbreak();
        v12 = pubVarData->majorVersionRequested == 0;
        pubVarData->majorVersion = v11;
        if ( v12 )
          pubVarData->majorVersionRequested = v11;
        Com_Printf(25, "[PubVar] Retrieved major version %i for namespace \"%s\"\n", v11, NameSpaceForData);
        goto LABEL_13;
      }
      if ( v7 != v9 )
        break;
      if ( !v7 )
        goto LABEL_6;
    }
    v16 = 0i64;
    v17 = 16i64;
    do
    {
      v18 = key[v16];
      v19 = v17;
      v20 = aMinorversion[v16++];
      --v17;
      if ( !v19 )
        break;
      if ( v18 != v20 )
      {
        v3 = 1;
        Com_Printf(25, "[PubVar] %s = %s\n", key, str);
        VarByName = Dvar_FindVarByName(key);
        v24 = VarByName;
        if ( VarByName )
        {
          type = VarByName->type;
          if ( type == 9 )
          {
            Dvar_SetString_Internal(v24, str);
            Com_StartupVariable(key);
          }
          else if ( type )
          {
            if ( type == 1 )
            {
              *(double *)&_XMM0 = atof(str);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
              Dvar_SetFloat_Internal(v24, *(float *)&_XMM1);
              Com_StartupVariable(key);
            }
            else if ( type == 7 )
            {
              v28 = I_atoui64(str);
              Dvar_SetUInt64_Internal(v24, v28);
              Com_StartupVariable(key);
            }
            else
            {
              if ( type == 6 )
              {
                v29 = I_atoi64(str);
                Dvar_SetInt64_Internal(v24, v29);
              }
              else
              {
                v30 = atoi(str);
                Dvar_SetInt_Internal(v24, v30);
              }
              Com_StartupVariable(key);
            }
          }
          else
          {
            v26 = atoi(str);
            Dvar_SetBool_Internal(v24, v26 != 0);
            Com_StartupVariable(key);
          }
        }
        else
        {
          Dvar_BeginPermanentRegistration();
          Dvar_RegisterString(key, str, 0x100u, "Publisher variable created dvar");
          Dvar_EndPermanentRegistration();
          Com_Printf(25, "[PubVar] Created dvar '%s'.\n", key);
          Com_StartupVariable(key);
        }
        goto LABEL_13;
      }
    }
    while ( v18 );
    v21 = atoi(str);
    v22 = v21;
    if ( (v21 < 0 || (unsigned int)v21 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v21, "signed", v21) )
      __debugbreak();
    v12 = pubVarData->minorVersionRequested == 0;
    pubVarData->minorVersion = v22;
    if ( v12 )
      pubVarData->minorVersionRequested = v22;
    Com_Printf(25, "[PubVar] Retrieved minor version %i for namespace \"%s\"\n", v22, NameSpaceForData);
LABEL_13:
    bdPublisherVariablesIterator::operator++(&iterator);
  }
  if ( pubVarData->majorVersion < pubVarData->majorVersionRequested || pubVarData->minorVersion < pubVarData->minorVersionRequested )
  {
    v13 = DVARBOOL_online_pub_var_refetch_on_mismatch;
    if ( !DVARBOOL_online_pub_var_refetch_on_mismatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_pub_var_refetch_on_mismatch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    minorVersion = pubVarData->minorVersion;
    majorVersion = pubVarData->majorVersion;
    LODWORD(valueSize) = pubVarData->minorVersionRequested;
    LODWORD(value) = pubVarData->majorVersionRequested;
    if ( v13->current.enabled )
    {
      Com_Printf(25, "[PubVar] Versions retrieved (%i,%i) area less than requested (%i,%i) for namespace \"%s\", will re-fetch\n", majorVersion, minorVersion, value, valueSize, NameSpaceForData);
      pubVarData->state = GENERAL;
    }
    else
    {
      Com_Printf(25, "[PubVar] Versions retrieved (%i,%i) area less than requested (%i,%i) for namespace \"%s\", will NOT re-fetch due to online_pub_var_refetch_on_mismatch disabled\n", majorVersion, minorVersion, value, valueSize, NameSpaceForData);
    }
  }
  return v3;
}

/*
==============
PublisherVariableManager::EnqueueRetrieveVariables
==============
*/
void PublisherVariableManager::EnqueueRetrieveVariables(PublisherVariableManager *this, const int controllerIndex, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion)
{
  PublisherVariableData *DataForNameSpace; 
  PublisherVariableData *v8; 
  char v9; 
  const dvar_t *v10; 
  bool v11; 
  const char *v12; 
  const dvar_t *v13; 
  PublisherVariableRequestState state; 
  PublisherVariableRequestState v15; 
  PublisherVariableRequestState v16; 
  PublisherVariableRequestState v17; 
  PublisherVariableRequestState v18; 
  PublisherVariableRequestState v19; 
  PublisherVariableRequestState v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 

  DataForNameSpace = PublisherVariables_GetDataForNameSpace(nameSpace);
  v8 = DataForNameSpace;
  if ( DataForNameSpace )
  {
    v9 = 0;
    if ( majorVersion > DataForNameSpace->majorVersionRequested )
    {
      DataForNameSpace->majorVersionRequested = majorVersion;
      v9 = 1;
    }
    if ( minorVersion > DataForNameSpace->minorVersionRequested )
    {
      DataForNameSpace->minorVersionRequested = minorVersion;
      v9 = 1;
    }
    v10 = DVARBOOL_online_pub_var_fetch_always;
    if ( !DVARBOOL_online_pub_var_fetch_always && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_pub_var_fetch_always") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled || v9 )
    {
      if ( (unsigned int)(v8->state - 3) <= 1 )
      {
        v11 = s_controllerIndex != -1 && Com_FrontEnd_IsInFrontEnd();
        v12 = "deferring fetch until returning to front end";
        if ( v11 )
          v12 = (char *)&queryFormat.fmt + 3;
        LODWORD(v23) = v8->minorVersionRequested;
        LODWORD(v22) = v8->majorVersionRequested;
        LODWORD(fmt) = v8->minorVersion;
        Com_Printf(25, "[PubVar] Update requested for namespace \"%s\", current version (%i,%i) requested (%i,%i) %s\n", nameSpace, v8->majorVersion, fmt, v22, v23, v12);
        v8->state = GENERAL;
      }
      v13 = DVARBOOL_online_pub_var_fetch_all_on_update;
      if ( !DVARBOOL_online_pub_var_fetch_all_on_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_pub_var_fetch_all_on_update") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
      {
        Com_Printf(25, "[PubVar] requesting re-fetch of all namespaces due to online_pub_var_fetch_all_on_update\n");
        state = s_pubVarData[0].state;
        if ( (unsigned int)(s_pubVarData[0].state - 3) <= 1 )
          state = GENERAL;
        s_pubVarData[0].state = state;
        v15 = s_pubVarData[1].state;
        if ( (unsigned int)(s_pubVarData[1].state - 3) <= 1 )
          v15 = GENERAL;
        s_pubVarData[1].state = v15;
        v16 = s_pubVarData[2].state;
        if ( (unsigned int)(s_pubVarData[2].state - 3) <= 1 )
          v16 = GENERAL;
        s_pubVarData[2].state = v16;
        v17 = s_pubVarData[3].state;
        if ( (unsigned int)(s_pubVarData[3].state - 3) <= 1 )
          v17 = GENERAL;
        s_pubVarData[3].state = v17;
        v18 = s_pubVarData[4].state;
        if ( (unsigned int)(s_pubVarData[4].state - 3) <= 1 )
          v18 = GENERAL;
        s_pubVarData[4].state = v18;
        v19 = s_pubVarData[5].state;
        if ( (unsigned int)(s_pubVarData[5].state - 3) <= 1 )
          v19 = GENERAL;
        s_pubVarData[5].state = v19;
        v20 = s_pubVarData[6].state;
        if ( (unsigned int)(s_pubVarData[6].state - 3) <= 1 )
          v20 = GENERAL;
        s_pubVarData[6].state = v20;
      }
    }
  }
}

/*
==============
Fence_PublisherVarsDependenciesUpdated
==============
*/
void Fence_PublisherVarsDependenciesUpdated(int controllerIndex, bool value)
{
  PublisherVariableRequestState state; 
  PublisherVariableRequestState v3; 
  PublisherVariableRequestState v4; 
  PublisherVariableRequestState v5; 
  PublisherVariableRequestState v6; 
  PublisherVariableRequestState v7; 
  PublisherVariableRequestState v8; 

  if ( value )
  {
    state = s_pubVarData[0].state;
    if ( s_pubVarData[0].state == NO_FREIND_ERROR )
      state = GENERAL;
    s_pubVarData[0].state = state;
    v3 = s_pubVarData[1].state;
    if ( s_pubVarData[1].state == NO_FREIND_ERROR )
      v3 = GENERAL;
    s_pubVarData[1].state = v3;
    v4 = s_pubVarData[2].state;
    if ( s_pubVarData[2].state == NO_FREIND_ERROR )
      v4 = GENERAL;
    s_pubVarData[2].state = v4;
    v5 = s_pubVarData[3].state;
    if ( s_pubVarData[3].state == NO_FREIND_ERROR )
      v5 = GENERAL;
    s_pubVarData[3].state = v5;
    v6 = s_pubVarData[4].state;
    if ( s_pubVarData[4].state == NO_FREIND_ERROR )
      v6 = GENERAL;
    s_pubVarData[4].state = v6;
    v7 = s_pubVarData[5].state;
    if ( s_pubVarData[5].state == NO_FREIND_ERROR )
      v7 = GENERAL;
    s_pubVarData[5].state = v7;
    v8 = s_pubVarData[6].state;
    if ( s_pubVarData[6].state == NO_FREIND_ERROR )
      v8 = GENERAL;
    s_pubVarData[6].state = v8;
  }
}

/*
==============
PublisherVariableManager::GetInstance
==============
*/
PublisherVariableManager *PublisherVariableManager::GetInstance()
{
  return &PublisherVariableManager::s_instance;
}

/*
==============
PublisherVariableManager::GetInstancePtr
==============
*/
PublisherVariableManager *PublisherVariableManager::GetInstancePtr()
{
  return &PublisherVariableManager::s_instance;
}

/*
==============
PublisherVariableManager::GetVariablesVersion
==============
*/
char PublisherVariableManager::GetVariablesVersion(PublisherVariableManager *this, const char *nameSpace, int *outMajor, int *outMinor)
{
  bool *p_retrievedOnce; 
  PublisherVariableData *DataForNameSpace; 

  p_retrievedOnce = &s_pubVarData[0].retrievedOnce;
  do
  {
    if ( *(_DWORD *)(p_retrievedOnce - 13) != 3 && !*p_retrievedOnce )
      return 0;
    p_retrievedOnce += 16;
  }
  while ( (__int64)p_retrievedOnce < (__int64)&s_pubVarNamespaces[1] + 5 );
  DataForNameSpace = PublisherVariables_GetDataForNameSpace(nameSpace);
  if ( !DataForNameSpace )
    return 0;
  *outMajor = DataForNameSpace->majorVersion;
  *outMinor = DataForNameSpace->minorVersion;
  return 1;
}

/*
==============
PublisherVariableManager::HasPendingRetrieve
==============
*/
char PublisherVariableManager::HasPendingRetrieve(PublisherVariableManager *this)
{
  PublisherVariableData *v1; 

  v1 = s_pubVarData;
  while ( v1->state != GENERAL )
  {
    if ( (__int64)++v1 >= (__int64)s_pubVarNamespaces )
      return 0;
  }
  return 1;
}

/*
==============
PublisherVariableManager::HasRetrievedVariables
==============
*/
char PublisherVariableManager::HasRetrievedVariables(PublisherVariableManager *this)
{
  bool *p_retrievedOnce; 

  p_retrievedOnce = &s_pubVarData[0].retrievedOnce;
  while ( *(_DWORD *)(p_retrievedOnce - 13) == 3 || *p_retrievedOnce )
  {
    p_retrievedOnce += 16;
    if ( (__int64)p_retrievedOnce >= (__int64)&s_pubVarNamespaces[1] + 5 )
      return 1;
  }
  return 0;
}

/*
==============
OnRetrieveVariablesComplete
==============
*/

void __fastcall OnRetrieveVariablesComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  PublisherVariableRequestState state; 
  PublisherVariableRequestState v5; 
  PublisherVariableRequestState v6; 
  PublisherVariableRequestState v7; 
  PublisherVariableRequestState v8; 
  PublisherVariableRequestState v9; 
  PublisherVariableRequestState v10; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  PublisherVariableData *v13; 
  __int64 v14; 
  PublisherVariableData *v15; 
  const char *NameSpaceForData; 
  bool required; 
  const char *v18; 
  __int64 v19; 

  if ( taskState == TASKSTATE_PENDING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 560, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
    goto LABEL_4;
  }
  if ( taskState )
  {
    if ( taskState > TASKSTATE_SUCCESS )
    {
      if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
      {
        TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
        ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
        Com_PrintError(25, "[PubVar] Error fetching publisher variables, error %i, transaction id %zu\n", (unsigned int)ErrorCode, TransactionID);
        goto LABEL_6;
      }
      if ( taskState <= TASKSTATE_CANCELED )
      {
        Com_PrintError(25, "[PubVar] Canceled fetching publisher variables\n");
LABEL_6:
        state = s_pubVarData[0].state;
        if ( s_pubVarData[0].state == NOT_FIND )
          state = ALREADY_FRIENDS;
        s_pubVarData[0].state = state;
        v5 = s_pubVarData[1].state;
        if ( s_pubVarData[1].state == NOT_FIND )
          v5 = ALREADY_FRIENDS;
        s_pubVarData[1].state = v5;
        v6 = s_pubVarData[2].state;
        if ( s_pubVarData[2].state == NOT_FIND )
          v6 = ALREADY_FRIENDS;
        s_pubVarData[2].state = v6;
        v7 = s_pubVarData[3].state;
        if ( s_pubVarData[3].state == NOT_FIND )
          v7 = ALREADY_FRIENDS;
        s_pubVarData[3].state = v7;
        v8 = s_pubVarData[4].state;
        if ( s_pubVarData[4].state == NOT_FIND )
          v8 = ALREADY_FRIENDS;
        s_pubVarData[4].state = v8;
        v9 = s_pubVarData[5].state;
        if ( s_pubVarData[5].state == NOT_FIND )
          v9 = ALREADY_FRIENDS;
        s_pubVarData[5].state = v9;
        v10 = s_pubVarData[6].state;
        if ( s_pubVarData[6].state == NOT_FIND )
          v10 = ALREADY_FRIENDS;
        s_pubVarData[6].state = v10;
LABEL_35:
        JUMPOUT(0x140E70012i64);
      }
    }
LABEL_4:
    LODWORD(v19) = taskState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 605, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v19) )
      __debugbreak();
    goto LABEL_6;
  }
  v13 = s_pubVarData;
  v14 = 7i64;
  v15 = s_pubVarData;
  while ( 1 )
  {
    if ( v13->state == NOT_FIND )
    {
      NameSpaceForData = PublisherVariables_GetNameSpaceForData(v13);
      Com_Printf(25, "[PubVar] Publisher variables fetched for namespace \"%s\".  Attempting to apply them (could be none)\n", NameSpaceForData);
      if ( (unsigned __int8)ApplyPublisherVariables(v15) )
        goto LABEL_33;
      required = v13->required;
      v18 = PublisherVariables_GetNameSpaceForData(v13);
      if ( !required )
      {
        Com_Printf(25, "[PubVar] Found no variables for non-critical publisher namespace \"%s\", this will NOT prevent the fence from completing.\n", v18);
LABEL_33:
        v13->state = BLOCKED;
        v13->retrievedOnce = 1;
        goto LABEL_34;
      }
      Com_Printf(131097, "[PubVar] Found no variables for critical publisher namespace \"%s\", this WILL prevent the fence from completing.\n", v18);
      v13->state = ALREADY_FRIENDS;
    }
LABEL_34:
    ++v15;
    ++v13;
    if ( !--v14 )
      goto LABEL_35;
  }
}

/*
==============
OnSubscribeToGroupComplete
==============
*/
void OnSubscribeToGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 v3; 

  if ( taskState == TASKSTATE_PENDING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 750, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
  }
  else
  {
    if ( taskState == TASKSTATE_SUCCESS )
    {
      Com_Printf(25, "[PubVar] Subscribe to group successful.\n");
      return;
    }
    if ( taskState > TASKSTATE_SUCCESS )
    {
      if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
      {
        Com_PrintError(25, "[PubVar] Error subscribing to group\n");
        return;
      }
      if ( taskState <= TASKSTATE_CANCELED )
      {
        Com_PrintError(25, "[PubVar] Canceled subscribing to group\n");
        return;
      }
    }
  }
  LODWORD(v3) = taskState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 773, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v3) )
    __debugbreak();
}

/*
==============
PublisherVariableManager::OnSuspendResume
==============
*/
void PublisherVariableManager::OnSuspendResume(PublisherVariableManager *this)
{
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
}

/*
==============
PublisherVariables_AddToRetrieveList
==============
*/
void PublisherVariables_AddToRetrieveList(int nameSpace)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v4; 
  const dvar_t *v5; 
  Online_Commerce *Instance; 
  Online_Commerce *v7; 
  char v8; 
  Online_Commerce *v9; 
  bool HavePaidEntitlement; 
  unsigned __int16 v11; 
  const char *v12; 

  v1 = nameSpace;
  v2 = nameSpace;
  if ( nameSpace != 2 && nameSpace != 5 )
    goto LABEL_21;
  v3 = DVARBOOL_com_force_free_to_play;
  v4 = s_controllerIndex;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    goto LABEL_21;
  v5 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  if ( (Dvar_CheckFrontendServerThread(v5), v5->current.enabled) || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() || ((Instance = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(Instance, v4) == ENTITLEMENT_STATE_COMPLETE) || (v7 = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(v7, v4) == ENTITLEMENT_STATE_ERROR) ? (v8 = 1) : (v8 = 0), (v9 = Online_Commerce::GetInstance(), HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v9, v4), Live_IsUserSignedInToLive(v4)) && v8 && HavePaidEntitlement) )
  {
    Com_Printf(25, "[PubVar] %s will NOT fetch nameSpace %s since we are a paid user\n", "PublisherVariables_CanFetchNameSpace", s_pubVarNamespaces[v1]);
    Com_Printf(25, "[PubVar] NOT Retrieving \"%s\", setting status to retrieved\n", s_pubVarNamespaces[v1]);
    s_pubVarData[v2].retrievedOnce = 1;
    s_pubVarData[v2].state = BLOCKED;
  }
  else
  {
LABEL_21:
    Com_Printf(25, "[PubVar] Adding namespace \"%s\" to retrieve list\n", s_pubVarNamespaces[v1]);
    v11 = s_numNamespacesToRetrieve;
    if ( s_numNamespacesToRetrieve >= 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\publisher_variables.cpp", 685, ASSERT_TYPE_ASSERT, "(s_numNamespacesToRetrieve < static_cast<int>(PublisherVariableNamespaces::COUNT))", (const char *)&queryFormat, "s_numNamespacesToRetrieve < static_cast<int>(PublisherVariableNamespaces::COUNT)") )
        __debugbreak();
      v11 = s_numNamespacesToRetrieve;
    }
    v12 = s_pubVarNamespaces[v1];
    s_numNamespacesToRetrieve = v11 + 1;
    s_pubVarNamespacesToRetrieve[v11] = v12;
    s_pubVarData[v2].state = NOT_FIND;
  }
}

/*
==============
PublisherVariables_GetDataForNameSpace
==============
*/
PublisherVariableData *PublisherVariables_GetDataForNameSpace(const char *nameSpace)
{
  const char **v2; 
  int v3; 

  v2 = s_pubVarNamespaces;
  v3 = 0;
  while ( I_strncmp(nameSpace, *v2, 0x7FFFFFFFui64) )
  {
    ++v3;
    if ( (__int64)++v2 >= (__int64)s_pubVarNamespacesToRetrieve )
    {
      Com_PrintWarning(25, "[PubVar] Could not find namespace %s", nameSpace);
      return 0i64;
    }
  }
  return &s_pubVarData[v3];
}

/*
==============
PublisherVariables_GetNameSpaceForData
==============
*/
const char *PublisherVariables_GetNameSpaceForData(const PublisherVariableData *pubVarData)
{
  int v1; 

  v1 = 0;
  while ( &s_pubVarData[v1] != pubVarData )
  {
    if ( ++v1 >= 7 )
    {
      Com_PrintWarning(25, "[PubVar] Could not find namespace for pub var data", s_pubVarData);
      return (char *)&queryFormat.fmt + 3;
    }
  }
  return s_pubVarNamespaces[v1];
}

/*
==============
PublisherVariables_ResetControllerAndData
==============
*/
void PublisherVariables_ResetControllerAndData(void)
{
  s_controllerIndex = -1;
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
}

/*
==============
PublisherVariables_ResetData
==============
*/
void PublisherVariables_ResetData(void)
{
  memset_0(s_pubVarData, 0, sizeof(s_pubVarData));
  s_pubVarData[0].required = 1;
}

/*
==============
PublisherVariableManager::ReapplyAllPublisherVariables
==============
*/
void PublisherVariableManager::ReapplyAllPublisherVariables(PublisherVariableManager *this)
{
  PublisherVariableData *v1; 
  __int64 v2; 
  PublisherVariableData *v3; 
  bool *p_retrievedOnce; 
  int v5; 
  int v6; 
  void (**v7)(void); 

  v1 = s_pubVarData;
  v2 = 7i64;
  v3 = s_pubVarData;
  do
  {
    if ( v1->state == BLOCKED )
      ApplyPublisherVariables(v3);
    ++v3;
    ++v1;
    --v2;
  }
  while ( v2 );
  p_retrievedOnce = &s_pubVarData[0].retrievedOnce;
  while ( *(_DWORD *)(p_retrievedOnce - 13) == 3 || *p_retrievedOnce )
  {
    p_retrievedOnce += 16;
    if ( (__int64)p_retrievedOnce >= (__int64)&s_pubVarNamespaces[1] + 5 )
    {
      v5 = s_numRetrievedCallbacks;
      v6 = 0;
      if ( s_numRetrievedCallbacks > 0 )
      {
        v7 = s_variablesRetrievedCallbacks;
        do
        {
          if ( *v7 )
          {
            (*v7)();
            v5 = s_numRetrievedCallbacks;
          }
          ++v6;
          ++v7;
        }
        while ( v6 < v5 );
      }
      return;
    }
  }
}

/*
==============
PublisherVariableManager::RegisterCommands
==============
*/
void PublisherVariableManager::RegisterCommands(PublisherVariableManager *this)
{
  Cmd_AddCommandInternal("pubvar_testcallbacks", TestCallBacks_f, &TestCallBacks_f_VAR);
}

/*
==============
PublisherVariableManager::RegisterDvarByString
==============
*/
const dvar_t *PublisherVariableManager::RegisterDvarByString(const char *name, const char *value)
{
  const dvar_t *VarByName; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  unsigned __int8 type; 
  int v10; 
  unsigned __int64 v12; 
  __int64 v13; 
  int v14; 

  VarByName = Dvar_FindVarByName(name);
  v6 = VarByName;
  if ( VarByName )
  {
    type = VarByName->type;
    if ( type == 9 )
    {
      Dvar_SetString_Internal(v6, value);
      return v6;
    }
    else if ( type )
    {
      if ( type == 1 )
      {
        *(double *)&_XMM0 = atof(value);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
        Dvar_SetFloat_Internal(v6, *(float *)&_XMM1);
        return v6;
      }
      else if ( type == 7 )
      {
        v12 = I_atoui64(value);
        Dvar_SetUInt64_Internal(v6, v12);
        return v6;
      }
      else
      {
        if ( type == 6 )
        {
          v13 = I_atoi64(value);
          Dvar_SetInt64_Internal(v6, v13);
        }
        else
        {
          v14 = atoi(value);
          Dvar_SetInt_Internal(v6, v14);
        }
        return v6;
      }
    }
    else
    {
      v10 = atoi(value);
      Dvar_SetBool_Internal(v6, v10 != 0);
      return v6;
    }
  }
  else
  {
    Dvar_BeginPermanentRegistration();
    v7 = Dvar_RegisterString(name, value, 0x100u, "Publisher variable created dvar");
    Dvar_EndPermanentRegistration();
    Com_Printf(25, "[PubVar] Created dvar '%s'.\n", name);
    return v7;
  }
}

/*
==============
PublisherVariableManager::SetDvarByString
==============
*/
void PublisherVariableManager::SetDvarByString(const dvar_t *dvar, const char *value)
{
  unsigned __int8 type; 
  int v5; 
  unsigned __int64 v7; 
  __int64 v8; 
  int v9; 

  type = dvar->type;
  if ( type == 9 )
  {
    Dvar_SetString_Internal(dvar, value);
  }
  else if ( type )
  {
    switch ( type )
    {
      case 1u:
        *(double *)&_XMM0 = atof(value);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
        Dvar_SetFloat_Internal(dvar, *(float *)&_XMM1);
        break;
      case 7u:
        v7 = I_atoui64(value);
        Dvar_SetUInt64_Internal(dvar, v7);
        break;
      case 6u:
        v8 = I_atoi64(value);
        Dvar_SetInt64_Internal(dvar, v8);
        break;
      default:
        v9 = atoi(value);
        Dvar_SetInt_Internal(dvar, v9);
        break;
    }
  }
  else
  {
    v5 = atoi(value);
    Dvar_SetBool_Internal(dvar, v5 != 0);
  }
}

/*
==============
PublisherVariableManager::SubscribeToGroup
==============
*/
void PublisherVariableManager::SubscribeToGroup(PublisherVariableManager *this, const int controllerIndex, const unsigned int group)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 

  request.m_appTaskType = -1;
  request.m_onUpdateCallback = NULL;
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  request.m_controllerIndex = controllerIndex;
  request.m_onCompletionCallback = OnSubscribeToGroupComplete;
  memset(&request.m_appData, 0, 32);
  dwPublisherVariableSubscribeToGroup(&request, group);
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
TestCallBacks_f
==============
*/

void __fastcall TestCallBacks_f()
{
  TryNotifyPublisherVariableCallbacks();
}

/*
==============
TryNotifyPublisherVariableCallbacks
==============
*/
bool *TryNotifyPublisherVariableCallbacks()
{
  bool *result; 
  int v1; 
  int v2; 
  bool **v3; 

  result = &s_pubVarData[0].retrievedOnce;
  while ( *(_DWORD *)(result - 13) == 3 || *result )
  {
    result += 16;
    if ( (__int64)result >= (__int64)&s_pubVarNamespaces[1] + 5 )
    {
      v1 = s_numRetrievedCallbacks;
      v2 = 0;
      if ( s_numRetrievedCallbacks > 0 )
      {
        v3 = (bool **)s_variablesRetrievedCallbacks;
        do
        {
          result = *v3;
          if ( *v3 )
          {
            result = (bool *)((__int64 (*)(void))result)();
            v1 = s_numRetrievedCallbacks;
          }
          ++v2;
          ++v3;
        }
        while ( v2 < v1 );
      }
      return result;
    }
  }
  return result;
}

