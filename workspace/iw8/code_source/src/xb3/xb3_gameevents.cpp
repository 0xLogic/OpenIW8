/*
==============
XB3GameEvent_MultiplayerRoundStart
==============
*/

void __fastcall XB3GameEvent_MultiplayerRoundStart(const int controllerIndex)
{
  ?XB3GameEvent_MultiplayerRoundStart@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_PlayerSessionEnd
==============
*/

void __fastcall XB3GameEvent_PlayerSessionEnd(const int controllerIndex, bool allowPrints)
{
  ?XB3GameEvent_PlayerSessionEnd@@YAXH_N@Z(controllerIndex, allowPrints);
}

/*
==============
XB3GameEvent_PlayerSessionStart
==============
*/

void __fastcall XB3GameEvent_PlayerSessionStart(const int controllerIndex)
{
  ?XB3GameEvent_PlayerSessionStart@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_OnUserSignIn
==============
*/

void __fastcall XB3GameEvent_OnUserSignIn(const int controllerIndex)
{
  ?XB3GameEvent_OnUserSignIn@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_MpMapStarted
==============
*/

void __fastcall XB3GameEvent_MpMapStarted(const int controllerIndex, const wchar_t *mapname)
{
  ?XB3GameEvent_MpMapStarted@@YAXHPEB_W@Z(controllerIndex, mapname);
}

/*
==============
XB3GameEvent_PlayerSessionPause
==============
*/

void __fastcall XB3GameEvent_PlayerSessionPause(const int controllerIndex)
{
  ?XB3GameEvent_PlayerSessionPause@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_GameProgress
==============
*/

void __fastcall XB3GameEvent_GameProgress(const int controllerIndex, const float completionPercentage)
{
  ?XB3GameEvent_GameProgress@@YAXHM@Z(controllerIndex, completionPercentage);
}

/*
==============
XB3GameEvent_GameTypeStarted
==============
*/

void __fastcall XB3GameEvent_GameTypeStarted(const int controllerIndex, const wchar_t *gametypeName)
{
  ?XB3GameEvent_GameTypeStarted@@YAXHPEB_W@Z(controllerIndex, gametypeName);
}

/*
==============
XB3GameEvent_PlayerPrestigeLevel
==============
*/

void __fastcall XB3GameEvent_PlayerPrestigeLevel(const int controllerIndex, const int prestigeLevel)
{
  ?XB3GameEvent_PlayerPrestigeLevel@@YAXHH@Z(controllerIndex, prestigeLevel);
}

/*
==============
XB3GameEvent_HeroStats
==============
*/

void __fastcall XB3GameEvent_HeroStats(const int controllerIndex, const float percentageSP, const float percentageMP, const float percentageCP)
{
  ?XB3GameEvent_HeroStats@@YAXHMMM@Z(controllerIndex, percentageSP, percentageMP, percentageCP);
}

/*
==============
XB3GameEvent_MultiplayerRoundEnd
==============
*/

void __fastcall XB3GameEvent_MultiplayerRoundEnd(const int controllerIndex)
{
  ?XB3GameEvent_MultiplayerRoundEnd@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_PlayerSessionResume
==============
*/

void __fastcall XB3GameEvent_PlayerSessionResume(const int controllerIndex)
{
  ?XB3GameEvent_PlayerSessionResume@@YAXH@Z(controllerIndex);
}

/*
==============
XB3GameEvent_SpMapStarted
==============
*/

void __fastcall XB3GameEvent_SpMapStarted(const int controllerIndex, const wchar_t *mapname)
{
  ?XB3GameEvent_SpMapStarted@@YAXHPEB_W@Z(controllerIndex, mapname);
}

/*
==============
XB3GameEvent_Init
==============
*/

void XB3GameEvent_Init(void)
{
  ?XB3GameEvent_Init@@YAXXZ();
}

/*
==============
XB3GameEvent_Update
==============
*/

void __fastcall XB3GameEvent_Update(const int controllerIndex)
{
  ?XB3GameEvent_Update@@YAXH@Z(controllerIndex);
}

/*
==============
GetXboxUserIdFromController
==============
*/
Platform::String *GetXboxUserIdFromController(const int controllerIndex)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::User *v2; 
  int v3; 
  int v4; 
  HSTRING v5; 
  int v6; 
  HSTRING v7; 
  HSTRING string; 
  HSTRING newString; 
  Windows::Xbox::System::User *v11; 

  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v2 = UserFromControllerIndex;
  v11 = UserFromControllerIndex;
  string = NULL;
  if ( !UserFromControllerIndex )
    goto LABEL_10;
  v3 = UserFromControllerIndex->__abi_get_IsGuest(UserFromControllerIndex, (bool *)&string);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  if ( (_BYTE)string )
  {
LABEL_10:
    if ( v2 )
      v2->__abi_Release(v2);
    return 0i64;
  }
  else
  {
    string = NULL;
    v4 = v2->__abi_get_XboxUserId(v2, (Platform::String **)&string);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = string;
    if ( string )
    {
      v6 = WindowsDuplicateString_0(string, &newString);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = newString;
      v5 = string;
    }
    else
    {
      v7 = NULL;
    }
    WindowsDeleteString_0(v5);
    v11 = NULL;
    WindowsDeleteString_0(NULL);
    v2->__abi_Release(v2);
    return (Platform::String *)v7;
  }
}

/*
==============
XB3GameEvent_GameProgress
==============
*/

void __fastcall XB3GameEvent_GameProgress(const int controllerIndex, double completionPercentage)
{
  __int64 v5; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v8; 
  int v9; 
  const wchar_t *v10; 
  unsigned int v11; 
  const wchar_t *v12; 
  INT32 result[2]; 
  __int64 v16; 
  HSTRING v17; 
  char v18[16]; 
  const wchar_t *v19; 
  int v20; 
  int v21; 
  _GUID *p_m_sessionGUID; 
  __int64 v23; 
  INT32 *v24; 
  __int64 v25; 
  char v26[64]; 
  char v27; 
  void *retaddr; 

  _RAX = &retaddr;
  v16 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v17 = XboxUserIdFromController;
  result[1] = 0;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    __asm { vmovss  [rsp+0F8h+result], xmm6 }
    EtxFillCommonFields_v7_0(v18, v26, 64i64);
    if ( StringRawBuffer_0 )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( StringRawBuffer_0[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 2;
    }
    v10 = &LocaleName;
    if ( StringRawBuffer_0 )
      v10 = StringRawBuffer_0;
    v19 = v10;
    v20 = v9;
    v21 = 0;
    p_m_sessionGUID = &g_sessionEventData[v5].m_sessionGUID;
    v23 = 16i64;
    v24 = result;
    v25 = 4i64;
    v11 = EtxEventWrite_0(&ACNA_24574A4BEvents[74], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v18);
    if ( v11 )
    {
      v12 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteGameProgress failed for XUID(%ls), with(%i).\n", v12, v11);
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
  _R11 = &v27;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
XB3GameEvent_GameTypeStarted
==============
*/
void XB3GameEvent_GameTypeStarted(const int controllerIndex, const wchar_t *gametypeName)
{
  __int64 v3; 
  HSTRING XboxUserIdFromController; 
  HSTRING SessionCorrelationString; 
  const dvar_t *v6; 
  PCWSTR StringRawBuffer_0; 
  PCWSTR v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  const wchar_t *v13; 
  const wchar_t *v14; 
  __int64 v15; 
  int v16; 
  const wchar_t *v17; 
  bool v18; 
  unsigned int v19; 
  const wchar_t *v20; 
  INT32 result[2]; 
  __int64 v22; 
  __int64 v23[4]; 
  char v24[16]; 
  const wchar_t *v25; 
  int v26; 
  int v27; 
  INT32 *v28; 
  __int64 v29; 
  _GUID *p_m_sessionGUID; 
  __int64 v31; 
  const wchar_t *v32; 
  int v33; 
  int v34; 
  __int64 *v35; 
  __int64 v36; 
  __int64 *v37; 
  __int64 v38; 
  const wchar_t *v39; 
  int v40; 
  int v41; 
  char v42[64]; 

  v23[1] = -2i64;
  v3 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v23[2] = (__int64)XboxUserIdFromController;
  v22 = 0i64;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    SessionCorrelationString = (HSTRING)XB3GetSessionCorrelationString(v3);
    v23[3] = (__int64)SessionCorrelationString;
    v22 = 0i64;
    WindowsDeleteString_0(NULL);
    if ( !_Platform_WindowsGetStringLen(SessionCorrelationString) )
    {
      v6 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
        Com_Printf(25, "Calling XB3GameEvent_GameTypeStarted in systemlink without a valid mpCorrelationId\n");
      else
        Com_PrintWarning(25, "Calling XB3GameEvent_GameTypeStarted without a valid mpCorrelationId\n");
    }
    LODWORD(v23[0]) = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(SessionCorrelationString, NULL);
    v8 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    LODWORD(v22) = 0;
    result[0] = 0;
    EtxFillCommonFields_v7_0(v24, v42, 64i64);
    v9 = -1i64;
    v10 = 2;
    if ( v8 )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( v8[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 2;
    }
    v13 = &LocaleName;
    v14 = &LocaleName;
    if ( v8 )
      v14 = v8;
    v25 = v14;
    v26 = v12;
    v27 = 0;
    v28 = result;
    v29 = 4i64;
    p_m_sessionGUID = &g_sessionEventData[v3].m_sessionGUID;
    v31 = 16i64;
    if ( StringRawBuffer_0 )
    {
      v15 = -1i64;
      do
        ++v15;
      while ( StringRawBuffer_0[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 2;
    }
    v17 = &LocaleName;
    if ( StringRawBuffer_0 )
      v17 = StringRawBuffer_0;
    v32 = v17;
    v33 = v16;
    v34 = 0;
    v35 = v23;
    v36 = 4i64;
    v37 = &v22;
    v38 = 4i64;
    v18 = gametypeName == NULL;
    if ( gametypeName )
    {
      do
        ++v9;
      while ( gametypeName[v9] );
      v10 = 2 * v9 + 2;
      v18 = gametypeName == NULL;
    }
    if ( !v18 )
      v13 = gametypeName;
    v39 = v13;
    v40 = v10;
    v41 = 0;
    v19 = EtxEventWrite_0(&ACNA_24574A4BEvents[75], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 8i64, v24);
    if ( v19 )
    {
      v20 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteGameTypeStarted failed for XUID(%ls), with(%i).\n", v20, v19);
    }
    WindowsDeleteString_0(SessionCorrelationString);
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_HeroStats
==============
*/

void __fastcall XB3GameEvent_HeroStats(const int controllerIndex, double percentageSP, double percentageMP, double percentageCP)
{
  __int64 v11; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  const wchar_t *v18; 
  const wchar_t *v19; 
  _GUID *p_m_sessionGUID; 
  unsigned int v21; 
  const wchar_t *v22; 
  PCWSTR v23; 
  __int64 v24; 
  unsigned int v25; 
  const wchar_t *v26; 
  unsigned int v27; 
  const wchar_t *v28; 
  PCWSTR v29; 
  bool v30; 
  unsigned int v31; 
  const wchar_t *v32; 
  INT32 result[2]; 
  __int64 v38; 
  HSTRING v39; 
  char v40[16]; 
  const wchar_t *v41; 
  __int64 v42; 
  _GUID *v43; 
  __int64 v44; 
  INT32 *v45; 
  __int64 v46; 
  char v47[64]; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  v38 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  v11 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v39 = XboxUserIdFromController;
  result[1] = 0;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    __asm { vmovss  [rsp+130h+result], xmm6 }
    EtxFillCommonFields_v7_0(v40, v47, 64i64);
    v14 = -1i64;
    v15 = 2;
    if ( StringRawBuffer_0 )
    {
      v16 = -1i64;
      do
        ++v16;
      while ( StringRawBuffer_0[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 2;
    }
    v18 = &LocaleName;
    v19 = &LocaleName;
    if ( StringRawBuffer_0 )
      v19 = StringRawBuffer_0;
    v41 = v19;
    v42 = v17;
    p_m_sessionGUID = &g_sessionEventData[v11].m_sessionGUID;
    v43 = p_m_sessionGUID;
    v44 = 16i64;
    v45 = result;
    v46 = 4i64;
    v21 = EtxEventWrite_0(&ACNA_24574A4BEvents[52], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v40);
    if ( v21 )
    {
      v22 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteAchievementsSP failed for XUID(%ls), with(%i).\n", v22, v21);
    }
    v23 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    __asm { vmovss  [rsp+130h+result], xmm7 }
    EtxFillCommonFields_v7_0(v40, v47, 64i64);
    if ( v23 )
    {
      v24 = -1i64;
      do
        ++v24;
      while ( v23[v24] );
      v25 = 2 * v24 + 2;
    }
    else
    {
      v25 = 2;
    }
    v26 = &LocaleName;
    if ( v23 )
      v26 = v23;
    v41 = v26;
    v42 = v25;
    v43 = p_m_sessionGUID;
    v44 = 16i64;
    v45 = result;
    v46 = 4i64;
    v27 = EtxEventWrite_0(&ACNA_24574A4BEvents[51], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v40);
    if ( v27 )
    {
      v28 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteAchievementsMP failed for XUID(%ls), with(%i).\n", v28, v27);
    }
    v29 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    __asm { vmovss  [rsp+130h+result], xmm8 }
    EtxFillCommonFields_v7_0(v40, v47, 64i64);
    v30 = v29 == NULL;
    if ( v29 )
    {
      do
        ++v14;
      while ( v29[v14] );
      v15 = 2 * v14 + 2;
      v30 = v29 == NULL;
    }
    if ( !v30 )
      v18 = v29;
    v41 = v18;
    v42 = v15;
    v43 = p_m_sessionGUID;
    v44 = 16i64;
    v45 = result;
    v46 = 4i64;
    v31 = EtxEventWrite_0(&ACNA_24574A4BEvents[50], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v40);
    if ( v31 )
    {
      v32 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteAchievementsCP failed for XUID(%ls), with(%i).\n", v32, v31);
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
XB3GameEvent_Init
==============
*/
void XB3GameEvent_Init(void)
{
  _GUID *p_m_mpRoundGUID; 
  __int64 v1; 
  HSTRING *v2; 
  HSTRING v3; 
  unsigned int v4; 
  INT32 result; 

  p_m_mpRoundGUID = &g_sessionEventData[0].m_mpRoundGUID;
  v1 = 8i64;
  v2 = (HSTRING *)g_sessionEventData;
  do
  {
    if ( s_isSessionDataInitialized )
    {
      v3 = *v2;
      result = 0;
      WindowsCompareStringOrdinal_0(v3, NULL, &result);
      if ( result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 58, ASSERT_TYPE_ASSERT, "(g_sessionEventData[i].m_sessionCorrelationId == nullptr)", (const char *)&queryFormat, "g_sessionEventData[i].m_sessionCorrelationId == nullptr") )
        __debugbreak();
      if ( (*(_QWORD *)&p_m_mpRoundGUID->Data1 || *(_QWORD *)p_m_mpRoundGUID->Data4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 59, ASSERT_TYPE_ASSERT, "(I_memcmp( &g_sessionEventData[i].m_mpRoundGUID, &emptyGUID, sizeof( emptyGUID ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &g_sessionEventData[i].m_mpRoundGUID, &emptyGUID, sizeof( emptyGUID ) ) == 0") )
        __debugbreak();
      if ( (*(_QWORD *)&p_m_mpRoundGUID[-1].Data1 || *(_QWORD *)p_m_mpRoundGUID[-1].Data4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 60, ASSERT_TYPE_ASSERT, "(I_memcmp( &g_sessionEventData[i].m_sessionGUID, &emptyGUID, sizeof( emptyGUID ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &g_sessionEventData[i].m_sessionGUID, &emptyGUID, sizeof( emptyGUID ) ) == 0") )
        __debugbreak();
    }
    if ( *v2 )
    {
      WindowsDeleteString_0(*v2);
      *v2 = NULL;
    }
    v2 += 6;
    *(_QWORD *)&p_m_mpRoundGUID[-1].Data1 = 0i64;
    *(_QWORD *)p_m_mpRoundGUID[-1].Data4 = 0i64;
    *(_QWORD *)&p_m_mpRoundGUID->Data1 = 0i64;
    *(_QWORD *)p_m_mpRoundGUID->Data4 = 0i64;
    p_m_mpRoundGUID += 3;
    --v1;
  }
  while ( v1 );
  s_wasFocused = g_PLMGameHasFocus;
  s_paused = 0;
  v4 = EtxRegister_0(&ACNA_24574A4BProvider, &ACNA_24574A4BHandle);
  if ( v4 )
    Com_Printf(16, "Failed initializing data platform (0x%0.8X)\n.", v4);
  s_isSessionDataInitialized = 1;
}

/*
==============
XB3GameEvent_MpMapStarted
==============
*/
void XB3GameEvent_MpMapStarted(const int controllerIndex, const wchar_t *mapname)
{
  __int64 v3; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  const wchar_t *v10; 
  const wchar_t *v11; 
  bool v12; 
  unsigned int v13; 
  const wchar_t *v14; 
  INT32 result[2]; 
  __int64 v16; 
  HSTRING v17; 
  char v18[16]; 
  const wchar_t *v19; 
  int v20; 
  int v21; 
  _GUID *p_m_sessionGUID; 
  __int64 v23; 
  const wchar_t *v24; 
  int v25; 
  int v26; 
  char v27[64]; 

  v16 = -2i64;
  v3 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v17 = XboxUserIdFromController;
  result[1] = 0;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    EtxFillCommonFields_v7_0(v18, v27, 64i64);
    v6 = -1i64;
    v7 = 2;
    if ( StringRawBuffer_0 )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( StringRawBuffer_0[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 2;
    }
    v10 = &LocaleName;
    v11 = &LocaleName;
    if ( StringRawBuffer_0 )
      v11 = StringRawBuffer_0;
    v19 = v11;
    v20 = v9;
    v21 = 0;
    p_m_sessionGUID = &g_sessionEventData[v3].m_sessionGUID;
    v23 = 16i64;
    v12 = mapname == NULL;
    if ( mapname )
    {
      do
        ++v6;
      while ( mapname[v6] );
      v7 = 2 * v6 + 2;
      v12 = mapname == NULL;
    }
    if ( !v12 )
      v10 = mapname;
    v24 = v10;
    v25 = v7;
    v26 = 0;
    v13 = EtxEventWrite_0(&ACNA_24574A4BEvents[77], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v18);
    if ( v13 )
    {
      v14 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteMpMapStarted failed for XUID(%ls), with(%i).\n", v14, v13);
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_MultiplayerRoundEnd
==============
*/
void XB3GameEvent_MultiplayerRoundEnd(const int controllerIndex)
{
  __int64 v2; 
  const dvar_t *v3; 
  _GUID *p_m_mpRoundGUID; 
  Platform::String *m_userID; 
  int v6; 
  HSTRING v7; 
  Platform::String *m_sessionCorrelationId; 
  int v9; 
  HSTRING v10; 
  PCWSTR StringRawBuffer_0; 
  PCWSTR v12; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  const wchar_t *v18; 
  const wchar_t *v19; 
  bool v20; 
  unsigned int v21; 
  PCWSTR v22; 
  PCWSTR v23; 
  Platform::String *v24; 
  Platform::String *v25; 
  INT32 result; 
  int ActiveGameMode; 
  int v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  HSTRING newString; 
  HSTRING v33; 
  HSTRING string1; 
  HSTRING v35; 
  __int64 v36; 
  char v37[16]; 
  const wchar_t *v38; 
  int v39; 
  int v40; 
  _GUID *v41; 
  __int64 v42; 
  INT32 *p_result; 
  __int64 v44; 
  _GUID *p_m_sessionGUID; 
  __int64 v46; 
  const wchar_t *v47; 
  int v48; 
  int v49; 
  int *p_ActiveGameMode; 
  __int64 v51; 
  int *v52; 
  __int64 v53; 
  int *v54; 
  __int64 v55; 
  int *v56; 
  __int64 v57; 
  __int64 *v58; 
  __int64 v59; 
  char v60[64]; 

  v36 = -2i64;
  v2 = controllerIndex;
  v3 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    p_m_mpRoundGUID = &g_sessionEventData[v2].m_mpRoundGUID;
    if ( *(_QWORD *)&p_m_mpRoundGUID->Data1 || *(_QWORD *)g_sessionEventData[v2].m_mpRoundGUID.Data4 )
    {
      m_userID = g_sessionEventData[v2].m_userID;
      if ( m_userID )
      {
        v6 = WindowsDuplicateString_0((HSTRING)m_userID, &newString);
        if ( v6 < 0 )
          __abi_WinRTraiseException(v6);
        v7 = newString;
        v33 = newString;
      }
      else
      {
        v7 = NULL;
        v33 = NULL;
      }
      result = 0;
      WindowsCompareStringOrdinal_0(v7, NULL, &result);
      if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 374, ASSERT_TYPE_ASSERT, "(userId != nullptr)", (const char *)&queryFormat, "userId != nullptr") )
        __debugbreak();
      m_sessionCorrelationId = g_sessionEventData[v2].m_sessionCorrelationId;
      if ( m_sessionCorrelationId )
      {
        v9 = WindowsDuplicateString_0((HSTRING)m_sessionCorrelationId, &string1);
        if ( v9 < 0 )
          __abi_WinRTraiseException(v9);
        v10 = string1;
        v35 = string1;
      }
      else
      {
        v10 = NULL;
        v35 = NULL;
      }
      result = 0;
      WindowsCompareStringOrdinal_0(v10, NULL, &result);
      if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 378, ASSERT_TYPE_ASSERT, "(sessionCorrelationId != nullptr)", (const char *)&queryFormat, "sessionCorrelationId != nullptr") )
        __debugbreak();
      result = 0;
      WindowsCompareStringOrdinal_0(v10, NULL, &result);
      if ( result && _Platform_WindowsGetStringLen(v10) )
      {
        ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v10, NULL);
        v12 = WindowsGetStringRawBuffer_0(v7, NULL);
        LODWORD(v31) = 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+1C0h+var_160], xmm0
        }
        v29 = 0;
        v28 = 0;
        result = 0;
        EtxFillCommonFields_v7_0(v37, v60, 64i64);
        v14 = -1i64;
        v15 = 2;
        if ( v12 )
        {
          v16 = -1i64;
          do
            ++v16;
          while ( v12[v16] );
          v17 = 2 * v16 + 2;
        }
        else
        {
          v17 = 2;
        }
        v18 = &LocaleName;
        v19 = &LocaleName;
        if ( v12 )
          v19 = v12;
        v38 = v19;
        v39 = v17;
        v40 = 0;
        v41 = &g_sessionEventData[v2].m_mpRoundGUID;
        v42 = 16i64;
        p_result = &result;
        v44 = 4i64;
        p_m_sessionGUID = &g_sessionEventData[v2].m_sessionGUID;
        v46 = 16i64;
        v20 = StringRawBuffer_0 == NULL;
        if ( StringRawBuffer_0 )
        {
          do
            ++v14;
          while ( StringRawBuffer_0[v14] );
          v15 = 2 * v14 + 2;
          v20 = StringRawBuffer_0 == NULL;
        }
        if ( !v20 )
          v18 = StringRawBuffer_0;
        v47 = v18;
        v48 = v15;
        v49 = 0;
        p_ActiveGameMode = &ActiveGameMode;
        v51 = 4i64;
        v52 = &v28;
        v53 = 4i64;
        v54 = &v29;
        v55 = 4i64;
        v56 = &v30;
        v57 = 4i64;
        v58 = &v31;
        v59 = 4i64;
        v21 = EtxEventWrite_0(&ACNA_24574A4BEvents[78], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 11i64, v37);
        if ( v21 )
        {
          v22 = WindowsGetStringRawBuffer_0(v7, NULL);
          Com_Printf(16, "EventWriteMultiplayerRoundEnd failed for XUID(%ls), with(%i).\n", v22, v21);
        }
        else
        {
          v23 = WindowsGetStringRawBuffer_0(v7, NULL);
          Com_Printf(16, "EventWriteMultiplayerRoundEnd called for XUID [%ls], controller [%i].\n", v23, (unsigned int)v2);
        }
      }
      else
      {
        Com_Printf(16, "EventWriteMultiplayerRoundEnd has no sessionCorrelationId, not posting event!!\n");
      }
      *(_QWORD *)&p_m_mpRoundGUID->Data1 = 0i64;
      *(_QWORD *)g_sessionEventData[v2].m_mpRoundGUID.Data4 = 0i64;
      v24 = g_sessionEventData[v2].m_sessionCorrelationId;
      if ( v24 )
      {
        WindowsDeleteString_0((HSTRING)v24);
        g_sessionEventData[v2].m_sessionCorrelationId = NULL;
      }
      v25 = g_sessionEventData[v2].m_userID;
      if ( v25 )
      {
        WindowsDeleteString_0((HSTRING)v25);
        g_sessionEventData[v2].m_userID = NULL;
      }
      WindowsDeleteString_0(v10);
      WindowsDeleteString_0(v7);
    }
    else
    {
      Com_Printf(16, "Ignoring MultiplayerRoundEnd game event as we are not in a multiplayer round.\n");
    }
  }
}

/*
==============
XB3GameEvent_MultiplayerRoundStart
==============
*/
void XB3GameEvent_MultiplayerRoundStart(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  volatile Platform::String *XboxUserIdFromController; 
  __int64 v4; 
  _GUID *p_m_mpRoundGUID; 
  volatile Platform::String *SessionCorrelationString; 
  SessionEventDataCache *v7; 
  PCWSTR StringRawBuffer_0; 
  PCWSTR v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  const wchar_t *v14; 
  const wchar_t *v15; 
  bool v16; 
  unsigned int v17; 
  const wchar_t *v18; 
  Platform::String *m_sessionCorrelationId; 
  Platform::String *m_userID; 
  const wchar_t *v21; 
  INT32 result; 
  __int64 v23; 
  int ActiveGameMode; 
  int v25; 
  __int64 v26; 
  volatile Platform::String *v27; 
  volatile Platform::String *v28; 
  char v29[16]; 
  const wchar_t *v30; 
  int v31; 
  int v32; 
  _GUID *v33; 
  __int64 v34; 
  INT32 *p_result; 
  __int64 v36; 
  _GUID *p_m_sessionGUID; 
  __int64 v38; 
  const wchar_t *v39; 
  int v40; 
  int v41; 
  int *p_ActiveGameMode; 
  __int64 v43; 
  int *v44; 
  __int64 v45; 
  __int64 *v46; 
  __int64 v47; 
  char v48[64]; 

  v26 = -2i64;
  v1 = controllerIndex;
  v2 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    XboxUserIdFromController = GetXboxUserIdFromController(v1);
    v27 = XboxUserIdFromController;
    v23 = 0i64;
    WindowsDeleteString_0(NULL);
    result = 0;
    WindowsCompareStringOrdinal_0((HSTRING)XboxUserIdFromController, NULL, &result);
    if ( result )
    {
      v4 = v1;
      p_m_mpRoundGUID = &g_sessionEventData[v1].m_mpRoundGUID;
      if ( *(_QWORD *)&p_m_mpRoundGUID->Data1 || *(_QWORD *)g_sessionEventData[v1].m_mpRoundGUID.Data4 )
      {
        Com_Printf(16, "Ignoring MultiplayerRoundStart game event as we are already in a round.\n");
      }
      else
      {
        SessionCorrelationString = XB3GetSessionCorrelationString(v1);
        v28 = SessionCorrelationString;
        v23 = 0i64;
        WindowsDeleteString_0(NULL);
        if ( _Platform_WindowsGetStringLen((HSTRING)SessionCorrelationString) )
        {
          v7 = &g_sessionEventData[v4];
          result = 0;
          WindowsCompareStringOrdinal_0((HSTRING)g_sessionEventData[v4].m_sessionCorrelationId, NULL, &result);
          if ( result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gameevents.cpp", 340, ASSERT_TYPE_ASSERT, "(g_sessionEventData[controllerIndex].m_sessionCorrelationId == nullptr)", (const char *)&queryFormat, "g_sessionEventData[controllerIndex].m_sessionCorrelationId == nullptr") )
            __debugbreak();
          __abi_winrt_ptrto_string_assign((void **)&v7->m_sessionCorrelationId, SessionCorrelationString);
          __abi_winrt_ptrto_string_assign((void **)&g_sessionEventData[v4].m_userID, XboxUserIdFromController);
          CoCreateGuid(&g_sessionEventData[v1].m_mpRoundGUID);
          ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
          StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v7->m_sessionCorrelationId, NULL);
          v9 = WindowsGetStringRawBuffer_0((HSTRING)XboxUserIdFromController, NULL);
          LODWORD(v23) = 0;
          v25 = 0;
          result = 0;
          EtxFillCommonFields_v7_0(v29, v48, 64i64);
          v10 = -1i64;
          v11 = 2;
          if ( v9 )
          {
            v12 = -1i64;
            do
              ++v12;
            while ( v9[v12] );
            v13 = 2 * v12 + 2;
          }
          else
          {
            v13 = 2;
          }
          v14 = &LocaleName;
          v15 = &LocaleName;
          if ( v9 )
            v15 = v9;
          v30 = v15;
          v31 = v13;
          v32 = 0;
          v33 = &g_sessionEventData[v1].m_mpRoundGUID;
          v34 = 16i64;
          p_result = &result;
          v36 = 4i64;
          p_m_sessionGUID = &g_sessionEventData[v4].m_sessionGUID;
          v38 = 16i64;
          v16 = StringRawBuffer_0 == NULL;
          if ( StringRawBuffer_0 )
          {
            do
              ++v10;
            while ( StringRawBuffer_0[v10] );
            v11 = 2 * v10 + 2;
            v16 = StringRawBuffer_0 == NULL;
          }
          if ( !v16 )
            v14 = StringRawBuffer_0;
          v39 = v14;
          v40 = v11;
          v41 = 0;
          p_ActiveGameMode = &ActiveGameMode;
          v43 = 4i64;
          v44 = &v25;
          v45 = 4i64;
          v46 = &v23;
          v47 = 4i64;
          v17 = EtxEventWrite_0(&ACNA_24574A4BEvents[79], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 9i64, v29);
          if ( v17 )
          {
            v18 = WindowsGetStringRawBuffer_0((HSTRING)XboxUserIdFromController, NULL);
            Com_Printf(16, "EventWriteMultiplayerRoundStart failed for XUID(%ls), with(%i).\n", v18, v17);
            *(_QWORD *)&p_m_mpRoundGUID->Data1 = 0i64;
            *(_QWORD *)g_sessionEventData[v1].m_mpRoundGUID.Data4 = 0i64;
            m_sessionCorrelationId = g_sessionEventData[v4].m_sessionCorrelationId;
            if ( m_sessionCorrelationId )
            {
              WindowsDeleteString_0((HSTRING)m_sessionCorrelationId);
              g_sessionEventData[v4].m_sessionCorrelationId = NULL;
            }
            m_userID = g_sessionEventData[v4].m_userID;
            if ( m_userID )
            {
              WindowsDeleteString_0((HSTRING)m_userID);
              g_sessionEventData[v4].m_userID = NULL;
            }
          }
          v21 = WindowsGetStringRawBuffer_0((HSTRING)XboxUserIdFromController, NULL);
          Com_Printf(16, "EventWriteMultiplayerRoundStart called for XUID [%ls], controller [%i].\n", v21, (unsigned int)v1);
          WindowsDeleteString_0((HSTRING)SessionCorrelationString);
        }
        else
        {
          Com_Printf(16, "XB3GameEvent_MultiplayerRoundStart has no sessionCorrelationId, not posting event!!\n");
          WindowsDeleteString_0((HSTRING)SessionCorrelationString);
        }
      }
    }
    WindowsDeleteString_0((HSTRING)XboxUserIdFromController);
  }
}

/*
==============
XB3GameEvent_OnUserSignIn
==============
*/
void XB3GameEvent_OnUserSignIn(const int controllerIndex)
{
  __int64 v1; 
  Platform::String *m_sessionCorrelationId; 
  Platform::String *m_userID; 

  v1 = controllerIndex;
  *(_QWORD *)&g_sessionEventData[v1].m_mpRoundGUID.Data1 = 0i64;
  *(_QWORD *)g_sessionEventData[v1].m_mpRoundGUID.Data4 = 0i64;
  m_sessionCorrelationId = g_sessionEventData[controllerIndex].m_sessionCorrelationId;
  if ( m_sessionCorrelationId )
  {
    WindowsDeleteString_0((HSTRING)m_sessionCorrelationId);
    g_sessionEventData[v1].m_sessionCorrelationId = NULL;
  }
  m_userID = g_sessionEventData[v1].m_userID;
  if ( m_userID )
  {
    WindowsDeleteString_0((HSTRING)m_userID);
    g_sessionEventData[v1].m_userID = NULL;
  }
}

/*
==============
XB3GameEvent_PlayerPrestigeLevel
==============
*/
void XB3GameEvent_PlayerPrestigeLevel(const int controllerIndex, const int prestigeLevel)
{
  __int64 v3; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v6; 
  int v7; 
  const wchar_t *v8; 
  unsigned int v9; 
  const wchar_t *v10; 
  INT32 result[2]; 
  __int64 v12; 
  HSTRING v13; 
  char v14[16]; 
  const wchar_t *v15; 
  int v16; 
  int v17; 
  _GUID *p_m_sessionGUID; 
  __int64 v19; 
  INT32 *v20; 
  __int64 v21; 
  char v22[64]; 

  v12 = -2i64;
  v3 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v13 = XboxUserIdFromController;
  result[1] = 0;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    result[0] = prestigeLevel;
    EtxFillCommonFields_v7_0(v14, v22, 64i64);
    if ( StringRawBuffer_0 )
    {
      v6 = -1i64;
      do
        ++v6;
      while ( StringRawBuffer_0[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v7 = 2;
    }
    v8 = &LocaleName;
    if ( StringRawBuffer_0 )
      v8 = StringRawBuffer_0;
    v15 = v8;
    v16 = v7;
    v17 = 0;
    p_m_sessionGUID = &g_sessionEventData[v3].m_sessionGUID;
    v19 = 16i64;
    v20 = result;
    v21 = 4i64;
    v9 = EtxEventWrite_0(&ACNA_24574A4BEvents[85], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v14);
    if ( v9 )
    {
      v10 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWritePlayerPrestigeLevel failed for XUID(%ls), with(%i).\n", v10, v9);
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_PlayerSessionEnd
==============
*/
void XB3GameEvent_PlayerSessionEnd(const int controllerIndex, bool allowPrints)
{
  _GUID *p_m_sessionGUID; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v7; 
  int v8; 
  const wchar_t *v9; 
  unsigned int v10; 
  const wchar_t *v11; 
  INT32 result; 
  __int64 v13; 
  __int64 v14[4]; 
  char v15[16]; 
  const wchar_t *v16; 
  int v17; 
  int v18; 
  _GUID *v19; 
  __int64 v20; 
  const wchar_t *v21; 
  __int64 v22; 
  INT32 *p_result; 
  __int64 v24; 
  __int64 *v25; 
  __int64 v26; 
  __int64 *v27; 
  __int64 v28; 
  char v29[64]; 

  v14[1] = -2i64;
  p_m_sessionGUID = &g_sessionEventData[controllerIndex].m_sessionGUID;
  if ( *(_QWORD *)&p_m_sessionGUID->Data1 || *(_QWORD *)p_m_sessionGUID->Data4 )
  {
    XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
    v14[2] = (__int64)XboxUserIdFromController;
    v14[0] = 0i64;
    WindowsDeleteString_0(NULL);
    result = 0;
    WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, &result);
    if ( result )
    {
      if ( allowPrints )
        Com_Printf(16, "Calling EventWritePlayerSessionEnd for user at controllerIndex %d\n", (unsigned int)controllerIndex);
      result = (unsigned __int8)Com_GameMode_GetActiveGameMode();
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      LODWORD(v14[0]) = 0;
      LODWORD(v13) = 0;
      EtxFillCommonFields_v7_0(v15, v29, 64i64);
      if ( StringRawBuffer_0 )
      {
        v7 = -1i64;
        do
          ++v7;
        while ( StringRawBuffer_0[v7] );
        v8 = 2 * v7 + 2;
      }
      else
      {
        v8 = 2;
      }
      v9 = &LocaleName;
      if ( StringRawBuffer_0 )
        v9 = StringRawBuffer_0;
      v16 = v9;
      v17 = v8;
      v18 = 0;
      v19 = p_m_sessionGUID;
      v20 = 16i64;
      v21 = &LocaleName;
      v22 = 2i64;
      p_result = &result;
      v24 = 4i64;
      v25 = &v13;
      v26 = 4i64;
      v27 = v14;
      v28 = 4i64;
      v10 = EtxEventWrite_0(&ACNA_24574A4BEvents[86], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 7i64, v15);
      if ( v10 && allowPrints )
      {
        v11 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
        Com_Printf(16, "EventWritePlayerSessionEnd failed for XUID(%ls), with(%i).\n", v11, v10);
      }
      *(_QWORD *)&p_m_sessionGUID->Data1 = 0i64;
      *(_QWORD *)p_m_sessionGUID->Data4 = 0i64;
    }
    else if ( allowPrints )
    {
      Com_Printf(16, "Skipping call to EventWritePlayerSessionEnd due to userID == nullptr for controllerIndex %d\n", (unsigned int)controllerIndex);
    }
    WindowsDeleteString_0(XboxUserIdFromController);
  }
  else if ( allowPrints )
  {
    Com_Printf(16, "Ignoring PlayerSessionEnd game event for controllerIndex %d as we are not in a player session.\n", (unsigned int)controllerIndex);
  }
}

/*
==============
XB3GameEvent_PlayerSessionPause
==============
*/
void XB3GameEvent_PlayerSessionPause(const int controllerIndex)
{
  __int64 v1; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v4; 
  int v5; 
  const wchar_t *v6; 
  unsigned int v7; 
  const wchar_t *v8; 
  INT32 result[2]; 
  __int64 v10; 
  HSTRING v11; 
  char v12[16]; 
  const wchar_t *v13; 
  int v14; 
  int v15; 
  _GUID *p_m_sessionGUID; 
  __int64 v17; 
  const wchar_t *v18; 
  __int64 v19; 
  char v20[64]; 

  v10 = -2i64;
  v1 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v11 = XboxUserIdFromController;
  result[1] = 0;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    EtxFillCommonFields_v7_0(v12, v20, 64i64);
    if ( StringRawBuffer_0 )
    {
      v4 = -1i64;
      do
        ++v4;
      while ( StringRawBuffer_0[v4] );
      v5 = 2 * v4 + 2;
    }
    else
    {
      v5 = 2;
    }
    v6 = &LocaleName;
    if ( StringRawBuffer_0 )
      v6 = StringRawBuffer_0;
    v13 = v6;
    v14 = v5;
    v15 = 0;
    p_m_sessionGUID = &g_sessionEventData[v1].m_sessionGUID;
    v17 = 16i64;
    v18 = &LocaleName;
    v19 = 2i64;
    v7 = EtxEventWrite_0(&ACNA_24574A4BEvents[87], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v12);
    if ( v7 )
    {
      v8 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWritePlayerSessionPause failed for XUID(%ls), with(%i).\n", v8, v7);
    }
    s_paused = 1;
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_PlayerSessionResume
==============
*/
void XB3GameEvent_PlayerSessionResume(const int controllerIndex)
{
  __int64 v1; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v4; 
  int v5; 
  const wchar_t *v6; 
  unsigned int v7; 
  const wchar_t *v8; 
  INT32 result[2]; 
  __int64 v10[3]; 
  char v11[16]; 
  const wchar_t *v12; 
  int v13; 
  int v14; 
  _GUID *p_m_sessionGUID; 
  __int64 v16; 
  const wchar_t *v17; 
  __int64 v18; 
  INT32 *v19; 
  __int64 v20; 
  __int64 *v21; 
  __int64 v22; 
  char v23[64]; 

  v10[1] = -2i64;
  v1 = controllerIndex;
  if ( s_paused )
  {
    XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
    v10[2] = (__int64)XboxUserIdFromController;
    v10[0] = 0i64;
    WindowsDeleteString_0(NULL);
    result[0] = 0;
    WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
    if ( result[0] )
    {
      result[0] = (unsigned __int8)Com_GameMode_GetActiveGameMode();
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      LODWORD(v10[0]) = 0;
      EtxFillCommonFields_v7_0(v11, v23, 64i64);
      if ( StringRawBuffer_0 )
      {
        v4 = -1i64;
        do
          ++v4;
        while ( StringRawBuffer_0[v4] );
        v5 = 2 * v4 + 2;
      }
      else
      {
        v5 = 2;
      }
      v6 = &LocaleName;
      if ( StringRawBuffer_0 )
        v6 = StringRawBuffer_0;
      v12 = v6;
      v13 = v5;
      v14 = 0;
      p_m_sessionGUID = &g_sessionEventData[v1].m_sessionGUID;
      v16 = 16i64;
      v17 = &LocaleName;
      v18 = 2i64;
      v19 = result;
      v20 = 4i64;
      v21 = v10;
      v22 = 4i64;
      v7 = EtxEventWrite_0(&ACNA_24574A4BEvents[88], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 6i64, v11);
      if ( v7 )
      {
        v8 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
        Com_Printf(16, "EventWritePlayerSessionResume failed for XUID(%ls), with(%i).\n", v8, v7);
      }
      s_paused = 0;
    }
    WindowsDeleteString_0(XboxUserIdFromController);
  }
  else
  {
    Com_Printf(16, "Ignoring PlayerSessionResume game event as we are not currently paused.\n");
  }
}

/*
==============
XB3GameEvent_PlayerSessionStart
==============
*/
void XB3GameEvent_PlayerSessionStart(const int controllerIndex)
{
  __int64 v1; 
  HSTRING XboxUserIdFromController; 
  _GUID *p_m_sessionGUID; 
  unsigned int Guid; 
  PCWSTR StringRawBuffer_0; 
  __int64 v6; 
  int v7; 
  const wchar_t *v8; 
  unsigned int v9; 
  const wchar_t *v10; 
  INT32 result[2]; 
  __int64 v12[3]; 
  char v13[16]; 
  const wchar_t *v14; 
  int v15; 
  int v16; 
  _GUID *v17; 
  __int64 v18; 
  const wchar_t *v19; 
  __int64 v20; 
  INT32 *v21; 
  __int64 v22; 
  __int64 *v23; 
  __int64 v24; 
  char v25[64]; 

  v12[1] = -2i64;
  v1 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v12[2] = (__int64)XboxUserIdFromController;
  v12[0] = 0i64;
  WindowsDeleteString_0(NULL);
  result[0] = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
  if ( result[0] )
  {
    p_m_sessionGUID = &g_sessionEventData[v1].m_sessionGUID;
    if ( *(_QWORD *)&p_m_sessionGUID->Data1 || *(_QWORD *)p_m_sessionGUID->Data4 )
    {
      Com_Printf(16, "Ignoring PlayerSessionStart game event for controllerIndex %d as we are already in a player session.\n", (unsigned int)v1);
    }
    else
    {
      Guid = CoCreateGuid(&g_sessionEventData[v1].m_sessionGUID);
      Com_Printf(16, "Calling EventWritePlayerSessionStart for user at controllerIndex %d [CoCreateGuid returned %x]\n", (unsigned int)v1, Guid);
      result[0] = (unsigned __int8)Com_GameMode_GetActiveGameMode();
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      LODWORD(v12[0]) = 0;
      EtxFillCommonFields_v7_0(v13, v25, 64i64);
      if ( StringRawBuffer_0 )
      {
        v6 = -1i64;
        do
          ++v6;
        while ( StringRawBuffer_0[v6] );
        v7 = 2 * v6 + 2;
      }
      else
      {
        v7 = 2;
      }
      v8 = &LocaleName;
      if ( StringRawBuffer_0 )
        v8 = StringRawBuffer_0;
      v14 = v8;
      v15 = v7;
      v16 = 0;
      v17 = p_m_sessionGUID;
      v18 = 16i64;
      v19 = &LocaleName;
      v20 = 2i64;
      v21 = result;
      v22 = 4i64;
      v23 = v12;
      v24 = 4i64;
      v9 = EtxEventWrite_0(&ACNA_24574A4BEvents[89], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 6i64, v13);
      if ( v9 )
      {
        v10 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
        Com_Printf(16, "EventWritePlayerSessionStart failed for XUID(%ls), with(%i).\n", v10, v9);
      }
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_SpMapStarted
==============
*/
void XB3GameEvent_SpMapStarted(const int controllerIndex, const wchar_t *mapname)
{
  __int64 v3; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  const wchar_t *v10; 
  const wchar_t *v11; 
  bool v12; 
  unsigned int v13; 
  const wchar_t *v14; 
  INT32 result; 
  __int64 v16; 
  __int64 v17[4]; 
  char v18[16]; 
  const wchar_t *v19; 
  int v20; 
  int v21; 
  INT32 *p_result; 
  __int64 v23; 
  _GUID *p_m_sessionGUID; 
  __int64 v25; 
  const wchar_t *v26; 
  __int64 v27; 
  __int64 *v28; 
  __int64 v29; 
  __int64 *v30; 
  __int64 v31; 
  const wchar_t *v32; 
  int v33; 
  int v34; 
  char v35[64]; 

  v17[1] = -2i64;
  v3 = controllerIndex;
  XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
  v17[2] = (__int64)XboxUserIdFromController;
  v17[0] = 0i64;
  WindowsDeleteString_0(NULL);
  result = 0;
  WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, &result);
  if ( result )
  {
    LODWORD(v16) = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
    LODWORD(v17[0]) = 0;
    result = 0;
    EtxFillCommonFields_v7_0(v18, v35, 64i64);
    v6 = -1i64;
    v7 = 2;
    if ( StringRawBuffer_0 )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( StringRawBuffer_0[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 2;
    }
    v10 = &LocaleName;
    v11 = &LocaleName;
    if ( StringRawBuffer_0 )
      v11 = StringRawBuffer_0;
    v19 = v11;
    v20 = v9;
    v21 = 0;
    p_result = &result;
    v23 = 4i64;
    p_m_sessionGUID = &g_sessionEventData[v3].m_sessionGUID;
    v25 = 16i64;
    v26 = &LocaleName;
    v27 = 2i64;
    v28 = &v16;
    v29 = 4i64;
    v30 = v17;
    v31 = 4i64;
    v12 = mapname == NULL;
    if ( mapname )
    {
      do
        ++v6;
      while ( mapname[v6] );
      v7 = 2 * v6 + 2;
      v12 = mapname == NULL;
    }
    if ( !v12 )
      v10 = mapname;
    v32 = v10;
    v33 = v7;
    v34 = 0;
    v13 = EtxEventWrite_0(&ACNA_24574A4BEvents[93], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 8i64, v18);
    if ( v13 )
    {
      v14 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
      Com_Printf(16, "EventWriteSpMapStarted failed for XUID(%ls), with(%i).\n", v14, v13);
    }
  }
  WindowsDeleteString_0(XboxUserIdFromController);
}

/*
==============
XB3GameEvent_Update
==============
*/
void XB3GameEvent_Update(const int controllerIndex)
{
  __int64 v1; 
  HSTRING XboxUserIdFromController; 
  PCWSTR StringRawBuffer_0; 
  __int64 v4; 
  int v5; 
  const wchar_t *v6; 
  unsigned int v7; 
  const wchar_t *v8; 
  PCWSTR v9; 
  __int64 v10; 
  int v11; 
  const wchar_t *v12; 
  unsigned int v13; 
  const wchar_t *v14; 
  INT32 result[2]; 
  __int64 v16; 
  INT32 v17[2]; 
  __int64 v18[3]; 
  char v19[16]; 
  const wchar_t *v20; 
  int v21; 
  int v22; 
  _GUID *p_m_sessionGUID; 
  __int64 v24; 
  const wchar_t *v25; 
  __int64 v26; 
  __int64 *v27; 
  __int64 v28; 
  __int64 *v29; 
  __int64 v30; 
  char v31[16]; 
  const wchar_t *v32; 
  int v33; 
  int v34; 
  _GUID *v35; 
  __int64 v36; 
  const wchar_t *v37; 
  __int64 v38; 
  char v39[64]; 
  char v40[64]; 

  v18[1] = -2i64;
  v1 = controllerIndex;
  if ( s_wasFocused != g_PLMGameHasFocus )
  {
    if ( g_PLMGameHasFocus )
    {
      if ( !s_paused )
      {
        Com_Printf(16, "Ignoring PlayerSessionResume game event as we are not currently paused.\n");
LABEL_29:
        s_wasFocused = g_PLMGameHasFocus;
        return;
      }
      XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
      *(_QWORD *)v17 = XboxUserIdFromController;
      v16 = 0i64;
      WindowsDeleteString_0(NULL);
      result[0] = 0;
      WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, result);
      if ( result[0] )
      {
        LODWORD(v18[0]) = (unsigned __int8)Com_GameMode_GetActiveGameMode();
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
        LODWORD(v16) = 0;
        EtxFillCommonFields_v7_0(v19, v39, 64i64);
        if ( StringRawBuffer_0 )
        {
          v4 = -1i64;
          do
            ++v4;
          while ( StringRawBuffer_0[v4] );
          v5 = 2 * v4 + 2;
        }
        else
        {
          v5 = 2;
        }
        v6 = &LocaleName;
        if ( StringRawBuffer_0 )
          v6 = StringRawBuffer_0;
        v20 = v6;
        v21 = v5;
        v22 = 0;
        p_m_sessionGUID = &g_sessionEventData[v1].m_sessionGUID;
        v24 = 16i64;
        v25 = &LocaleName;
        v26 = 2i64;
        v27 = v18;
        v28 = 4i64;
        v29 = &v16;
        v30 = 4i64;
        v7 = EtxEventWrite_0(&ACNA_24574A4BEvents[88], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 6i64, v19);
        if ( v7 )
        {
          v8 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
          Com_Printf(16, "EventWritePlayerSessionResume failed for XUID(%ls), with(%i).\n", v8, v7);
        }
        s_paused = 0;
      }
    }
    else
    {
      XboxUserIdFromController = (HSTRING)GetXboxUserIdFromController(controllerIndex);
      v18[0] = (__int64)XboxUserIdFromController;
      v16 = 0i64;
      WindowsDeleteString_0(NULL);
      v17[0] = 0;
      WindowsCompareStringOrdinal_0(XboxUserIdFromController, NULL, v17);
      if ( v17[0] )
      {
        v9 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
        EtxFillCommonFields_v7_0(v31, v40, 64i64);
        if ( v9 )
        {
          v10 = -1i64;
          do
            ++v10;
          while ( v9[v10] );
          v11 = 2 * v10 + 2;
        }
        else
        {
          v11 = 2;
        }
        v12 = &LocaleName;
        if ( v9 )
          v12 = v9;
        v32 = v12;
        v33 = v11;
        v34 = 0;
        v35 = &g_sessionEventData[v1].m_sessionGUID;
        v36 = 16i64;
        v37 = &LocaleName;
        v38 = 2i64;
        v13 = EtxEventWrite_0(&ACNA_24574A4BEvents[87], &ACNA_24574A4BProvider, ACNA_24574A4BHandle, 4i64, v31);
        if ( v13 )
        {
          v14 = WindowsGetStringRawBuffer_0(XboxUserIdFromController, NULL);
          Com_Printf(16, "EventWritePlayerSessionPause failed for XUID(%ls), with(%i).\n", v14, v13);
        }
        s_paused = 1;
      }
    }
    WindowsDeleteString_0(XboxUserIdFromController);
    goto LABEL_29;
  }
}

/*
==============
XB3GetSessionCorrelationString
==============
*/
Platform::String *XB3GetSessionCorrelationString(const int controllerIndex)
{
  PartyData *CurrentParty; 
  HSTRING v3; 
  SessionType SessionType; 
  std::wstring *p_correlationId; 
  std::wstring *Ptr; 
  HSTRING v7; 
  HSTRING v8; 
  int v9; 
  HSTRING v10; 
  int v11; 
  unsigned __int64 v12; 
  wchar_t *v13; 
  HSTRING newString; 
  HSTRING v16; 
  __int64 v17; 
  std::wstring correlationId; 

  v17 = -2i64;
  CurrentParty = Live_GetCurrentParty();
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rsp+68h+correlationId.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v3 = NULL;
  correlationId._Mypair._Myval2._Bx._Buf[0] = 0;
  SessionType = Session_GetSessionType(CurrentParty->session);
  if ( Xb3MultiplayerManager::GetCorrelationId(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, SessionType, &correlationId) )
  {
    p_correlationId = &correlationId;
    if ( correlationId._Mypair._Myval2._Myres >= 8 )
      p_correlationId = (std::wstring *)correlationId._Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "XB3GetSessionCorrelationString - we have a correlation id for the %s session of %S\n", CurrentParty->partyName, p_correlationId->_Mypair._Myval2._Bx._Buf);
    newString = NULL;
    Ptr = &correlationId;
    if ( correlationId._Mypair._Myval2._Myres >= 8 )
      Ptr = (std::wstring *)correlationId._Mypair._Myval2._Bx._Ptr;
    Platform::String::String(NULL, Ptr->_Mypair._Myval2._Bx._Buf);
    v8 = v7;
    v16 = v7;
    if ( v7 )
    {
      v9 = WindowsDuplicateString_0(v7, &newString);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      v3 = newString;
    }
  }
  else
  {
    Platform::String::String(NULL, &LocaleName);
    v8 = v10;
    v16 = v10;
    if ( v10 )
    {
      v11 = WindowsDuplicateString_0(v10, &newString);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v3 = newString;
    }
  }
  WindowsDeleteString_0(v8);
  if ( correlationId._Mypair._Myval2._Myres >= 8 )
  {
    v12 = 2 * correlationId._Mypair._Myval2._Myres + 2;
    v13 = correlationId._Mypair._Myval2._Bx._Ptr;
    if ( v12 >= 0x1000 )
    {
      v12 = 2 * correlationId._Mypair._Myval2._Myres + 41;
      v13 = (wchar_t *)*((_QWORD *)correlationId._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)correlationId._Mypair._Myval2._Bx._Ptr - (char *)v13 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v13, v12);
  }
  return (Platform::String *)v3;
}

