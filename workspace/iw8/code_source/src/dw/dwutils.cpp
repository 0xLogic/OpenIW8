/*
==============
dwGetPlayerBannedType
==============
*/

BanType __fastcall dwGetPlayerBannedType(const int controllerIndex)
{
  return ?dwGetPlayerBannedType@@YA?AW4BanType@@H@Z(controllerIndex);
}

/*
==============
dwGetOnlineUserID
==============
*/

bool __fastcall dwGetOnlineUserID(const int controllerIndex, unsigned __int64 *userID)
{
  return ?dwGetOnlineUserID@@YA_NHAEA_K@Z(controllerIndex, userID);
}

/*
==============
dwHasMultiLoginError
==============
*/

bool __fastcall dwHasMultiLoginError()
{
  return ?dwHasMultiLoginError@@YA_NXZ();
}

/*
==============
dwStopAllDemonWareReconnects
==============
*/

void dwStopAllDemonWareReconnects(void)
{
  ?dwStopAllDemonWareReconnects@@YAXXZ();
}

/*
==============
dwSetPlayerBannedType
==============
*/

void __fastcall dwSetPlayerBannedType(const int controllerIndex, const BanType banType)
{
  ?dwSetPlayerBannedType@@YAXHW4BanType@@@Z(controllerIndex, banType);
}

/*
==============
dwLobbyServiceCleanup
==============
*/

void __fastcall dwLobbyServiceCleanup(const int controllerIndex)
{
  ?dwLobbyServiceCleanup@@YAXH@Z(controllerIndex);
}

/*
==============
SetupDWLogging
==============
*/

void SetupDWLogging(void)
{
  ?SetupDWLogging@@YAXXZ();
}

/*
==============
dwAllDemonWareReconnectsDisabled
==============
*/

bool __fastcall dwAllDemonWareReconnectsDisabled()
{
  return ?dwAllDemonWareReconnectsDisabled@@YA_NXZ();
}

/*
==============
dwAssertHandler
==============
*/

void __fastcall dwAssertHandler(const bool expr, const char *const exprString, const char *const file, const char *const function, const unsigned int line, const char *const format, char *args)
{
  ?dwAssertHandler@@YAX_NQEBD11I1PEAD@Z(expr, exprString, file, function, line, format, args);
}

/*
==============
dwGetLobbyEventHandlerForControllerIndex
==============
*/

bdLobbyEventHandler *__fastcall dwGetLobbyEventHandlerForControllerIndex(const int controllerIndex)
{
  return ?dwGetLobbyEventHandlerForControllerIndex@@YAPEAVbdLobbyEventHandler@@H@Z(controllerIndex);
}

/*
==============
dwStopAllReconnectsMultipleLogons
==============
*/

void __fastcall dwStopAllReconnectsMultipleLogons(MultipleLoginType type)
{
  ?dwStopAllReconnectsMultipleLogons@@YAXW4MultipleLoginType@@@Z(type);
}

/*
==============
dwGetHostByNamePump
==============
*/

HostNameTaskStatus __fastcall dwGetHostByNamePump(const char *const domainNameStr, bdGetHostByName **getHostByName, bdSockAddr *resolvedAddr)
{
  return ?dwGetHostByNamePump@@YA?AW4HostNameTaskStatus@@QEBDPEAPEAVbdGetHostByName@@PEAVbdSockAddr@@@Z(domainNameStr, getHostByName, resolvedAddr);
}

/*
==============
dwHasEstablishedConnectionToDemonware
==============
*/

bool __fastcall dwHasEstablishedConnectionToDemonware(const int controllerIndex)
{
  return ?dwHasEstablishedConnectionToDemonware@@YA_NH@Z(controllerIndex);
}

/*
==============
dwDisconnectFromCrossplatformUnlinkEvent
==============
*/

void dwDisconnectFromCrossplatformUnlinkEvent(void)
{
  ?dwDisconnectFromCrossplatformUnlinkEvent@@YAXXZ();
}

/*
==============
dwLobbyErrorCodeToString
==============
*/

void __fastcall dwLobbyErrorCodeToString(const bdLobbyErrorCode code, char *const buffer, const unsigned int bufferSize)
{
  ?dwLobbyErrorCodeToString@@YAXW4bdLobbyErrorCode@@QEADI@Z(code, buffer, bufferSize);
}

/*
==============
dwConnectionErrorHandler
==============
*/

void __fastcall dwConnectionErrorHandler(int error_context)
{
  ?dwConnectionErrorHandler@@YAXH@Z(error_context);
}

/*
==============
dwDisconnectFromCrossPlatformAccountEvent
==============
*/

void dwDisconnectFromCrossPlatformAccountEvent(void)
{
  ?dwDisconnectFromCrossPlatformAccountEvent@@YAXXZ();
}

/*
==============
dwTaskStatusConvert
==============
*/

taskCompleteResults __fastcall dwTaskStatusConvert(const bdTask::bdStatus taskStatus, const bdLobbyErrorCode lobbyError)
{
  return ?dwTaskStatusConvert@@YA?AW4taskCompleteResults@@W4bdStatus@bdTask@@W4bdLobbyErrorCode@@@Z(taskStatus, lobbyError);
}

/*
==============
DWLogging::publish
==============
*/

void __fastcall DWLogging::publish(DWLogging *this, const bdLogMessageType type, const char *const channelName, const char *const file, const char *const function, const unsigned int line, const char *const msg)
{
  ?publish@DWLogging@@UEBAXW4bdLogMessageType@@QEBD11I1@Z(this, type, channelName, file, function, line, msg);
}

/*
==============
dwDisconnectFromCrossPlatformRenameEvent
==============
*/

void __fastcall dwDisconnectFromCrossPlatformRenameEvent(const char *newName)
{
  ?dwDisconnectFromCrossPlatformRenameEvent@@YAXPEBD@Z(newName);
}

/*
==============
DWLogging::publish
==============
*/
void DWLogging::publish(DWLogging *this, const bdLogMessageType type, const char *const channelName, const char *const file, const char *const function, const unsigned int line, const char *const msg)
{
  int Int_Internal_DebugName; 
  __int32 v10; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_demonware_logging, "online_demonware_logging");
  if ( Int_Internal_DebugName > 0 )
  {
    if ( type )
    {
      v10 = type - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          Com_PrintError(1, "[DW] (%s) %s\n", channelName, msg);
      }
      else if ( Int_Internal_DebugName > 1 )
      {
        Com_PrintWarning(25, "[DW] (%s) %s\n", channelName, msg);
      }
    }
    else if ( Int_Internal_DebugName > 2 )
    {
      Com_Printf(25, "[DW] (%s) %s\n", channelName, msg);
    }
  }
}

/*
==============
SetupDWLogging
==============
*/
void SetupDWLogging(void)
{
  bdLogSubscriber::addChannel(&g_logSubscriber, "err");
  bdLogSubscriber::addChannel(&g_logSubscriber, "warn");
  bdLogSubscriber::addChannel(&g_logSubscriber, "info");
}

/*
==============
dwAllDemonWareReconnectsDisabled
==============
*/
bool dwAllDemonWareReconnectsDisabled()
{
  return g_disableLSGReconnect || g_disableReconnectMultipleLogons;
}

/*
==============
dwAssertHandler
==============
*/
void dwAssertHandler(const bool expr, const char *const exprString, const char *const file, const char *const function, const unsigned int line, const char *const format, char *args)
{
  unsigned __int64 *v10; 
  int v11; 
  bool v12; 
  char Buffer[256]; 

  if ( !expr )
  {
    memset_0(Buffer, 0, sizeof(Buffer));
    v10 = j___local_stdio_printf_options();
    v11 = __stdio_common_vsprintf(*v10 | 2, NULL, 0i64, format, NULL, args);
    __stdio_common_vsnprintf_s(*v10, Buffer, 0x100ui64, 0xFFFFFFFFFFFFFFFFui64, format, NULL, args);
    if ( v11 < 0 )
      v11 = -1;
    if ( (unsigned int)v11 >= 0x100 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "dwUtils", "c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", "dwAssertHandler", 0x273u, "Assert Message truncated", 0i64);
    if ( exprString )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, NULL, file, function, line, "BD_ASSERT(%s) failed. \"%s\"\n", exprString, Buffer);
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 633, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BD_ASSERT(%s) failed. \"%s\"\nIn: %s\n%s [%d]\n", exprString, Buffer, function, file, line);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, NULL, file, function, line, "BD_ASSERT failed. \"%s\"\n", Buffer);
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 638, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BD_ASSERT failed. \"%s\"\nIn: %s\n%s [%d]\n", Buffer, function, file, line);
    }
    if ( v12 )
      __debugbreak();
  }
}

/*
==============
dwConnectionErrorHandler
==============
*/
void dwConnectionErrorHandler(int error_context)
{
  const char *v2; 
  const char *v3; 

  v2 = UI_SafeTranslateString("XBOXLIVE/LOBBY_CONNECTION_ERR");
  v3 = UI_ReplaceConversionInt(v2, error_context);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, v3);
}

/*
==============
dwDisconnectFromCrossPlatformAccountEvent
==============
*/
void dwDisconnectFromCrossPlatformAccountEvent(void)
{
  Sys_Restart("ONLINE/EXTERNAL_ACCOUNT_CHANGE");
}

/*
==============
dwDisconnectFromCrossPlatformRenameEvent
==============
*/
void dwDisconnectFromCrossPlatformRenameEvent(const char *newName)
{
  Sys_Restart("ONLINE/EXTERNAL_ACCOUNT_CHANGE");
}

/*
==============
dwDisconnectFromCrossplatformUnlinkEvent
==============
*/
void dwDisconnectFromCrossplatformUnlinkEvent(void)
{
  Sys_Restart("ONLINE/EXTERNAL_UNLINK");
}

/*
==============
dwGetHostByNamePump
==============
*/
__int64 dwGetHostByNamePump(const char *const domainNameStr, bdGetHostByName **getHostByName, bdSockAddr *resolvedAddr)
{
  bdGetHostByName *v6; 
  unsigned int v7; 
  int v8; 
  bdSockAddr *v9; 
  bdGetHostByName *v10; 
  bdGetHostByName *v11; 
  bdGetHostByName::bdStatus Status; 
  unsigned int NumAddresses; 
  bool v15; 
  bdGetHostByNameConfig v16[2]; 
  __int64 v17; 
  bdSockAddr result; 

  v17 = -2i64;
  if ( !getHostByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 376, ASSERT_TYPE_ASSERT, "(getHostByName)", (const char *)&queryFormat, "getHostByName") )
    __debugbreak();
  if ( !resolvedAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 377, ASSERT_TYPE_ASSERT, "(resolvedAddr)", (const char *)&queryFormat, "resolvedAddr") )
    __debugbreak();
  v6 = *getHostByName;
  v7 = 2;
  if ( !*getHostByName )
  {
    bdSockAddr::bdSockAddr(&result, resolvedAddr);
    v8 = 2;
    if ( bdSockAddr::isValid(v9) )
    {
      v8 = 1;
    }
    else
    {
      v6 = *getHostByName;
      if ( *getHostByName )
        goto LABEL_20;
      v10 = (bdGetHostByName *)bdMemory::allocate(0x240ui64);
      *(_QWORD *)&v16[0].m_timeout = v10;
      if ( v10 )
        bdGetHostByName::bdGetHostByName(v10, 0);
      *getHostByName = v10;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 280, ASSERT_TYPE_ASSERT, "(*getHostByName)", (const char *)&queryFormat, "*getHostByName", *(_QWORD *)&v16[0].m_timeout, v17) )
        __debugbreak();
      v11 = *getHostByName;
      if ( *getHostByName )
      {
        bdGetHostByNameConfig::bdGetHostByNameConfig(v16);
        v16[0].m_timeout = FLOAT_3_0;
        if ( bdGetHostByName::start(v11, domainNameStr, LODWORD(FLOAT_3_0)) )
          v8 = 0;
      }
    }
    v6 = *getHostByName;
    if ( !*getHostByName )
      return v7;
LABEL_20:
    if ( v8 == 2 || !v6 )
      return v7;
  }
  Status = bdGetHostByName::getStatus(v6);
  if ( Status )
  {
    if ( Status == BD_LOOKUP_PENDING )
    {
      bdGetHostByName::pump(v6);
      return 0;
    }
    if ( Status == BD_LOOKUP_SUCCEEDED )
    {
      NumAddresses = bdGetHostByName::getNumAddresses(v6);
      v15 = NumAddresses != 0;
      if ( NumAddresses )
      {
        bdGetHostByName::getAddressAt(v6, &result, 0);
        bdSockAddr::set(resolvedAddr, &result);
      }
      if ( v15 && bdSockAddr::isValid(resolvedAddr) )
        v7 = 1;
    }
  }
  bdGetHostByName::quit(v6);
  ((void (__fastcall *)(bdGetHostByName *, __int64))v6->~bdRunnable)(v6, 1i64);
  *getHostByName = NULL;
  return v7;
}

/*
==============
dwGetLobbyEventHandlerForControllerIndex
==============
*/
dwLobbyEventHandler<0> *dwGetLobbyEventHandlerForControllerIndex(const int controllerIndex)
{
  dwLobbyEventHandler<0> *result; 

  switch ( controllerIndex )
  {
    case 0:
      result = &g_dwLobbyEventHandler0;
      break;
    case 1:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler1;
      break;
    case 2:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler2;
      break;
    case 3:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler3;
      break;
    case 4:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler4;
      break;
    case 5:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler5;
      break;
    case 6:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler6;
      break;
    case 7:
      result = (dwLobbyEventHandler<0> *)&g_dwLobbyEventHandler7;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 180, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "non-supported controller index encountered!") )
        __debugbreak();
      result = NULL;
      break;
  }
  return result;
}

/*
==============
dwGetOnlineUserID
==============
*/
char dwGetOnlineUserID(const int controllerIndex, unsigned __int64 *userID)
{
  XUID *Xuid; 
  XUID result; 

  if ( !Live_IsConnectedToDemonware(controllerIndex) )
    return 0;
  Xuid = Live_GetXuid(&result, controllerIndex);
  *userID = XUID::GetUniversalId(Xuid);
  return 1;
}

/*
==============
dwGetPlayerBannedType
==============
*/
__int64 dwGetPlayerBannedType(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 598, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( g_playerBanned ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( g_playerBanned )\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)g_playerBanned[v1];
}

/*
==============
dwHasEstablishedConnectionToDemonware
==============
*/
bool dwHasEstablishedConnectionToDemonware(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 

  Instance = DWServicesAccess::GetInstance();
  DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, controllerIndex);
  return (unsigned int)(DWLobbyService::getStatus(DWLobbyService) - 3) <= 1;
}

/*
==============
dwHasMultiLoginError
==============
*/
_BOOL8 dwHasMultiLoginError()
{
  return g_disableReconnectMultipleLogons;
}

/*
==============
dwLobbyErrorCodeToString
==============
*/
void dwLobbyErrorCodeToString(const bdLobbyErrorCode code, char *const buffer, const unsigned int bufferSize)
{
  __int64 v3; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  size_t v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const char *v57; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  const char *v63; 
  const char *v64; 
  const char *v65; 
  const char *v66; 
  const char *v67; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *v71; 
  const char *v72; 
  const char *v73; 
  const char *v74; 
  const char *v75; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  const char *v79; 
  const char *v80; 
  const char *v81; 
  const char *v82; 
  const char *v83; 
  const char *v84; 
  const char *v85; 
  const char *v86; 
  const char *v87; 
  const char *v88; 
  const char *v89; 
  const char *v90; 
  const char *v91; 
  const char *v92; 
  const char *v93; 
  const char *v94; 
  const char *v95; 
  const char *v96; 
  const char *v97; 
  const char *v98; 
  const char *v99; 
  const char *v100; 
  const char *v101; 
  const char *v102; 
  const char *v103; 
  const char *v104; 
  const char *v105; 
  const char *v106; 
  const char *v107; 
  const char *v108; 
  const char *v109; 
  const char *v110; 
  const char *v111; 
  const char *v112; 
  const char *v113; 
  const char *v114; 
  const char *v115; 
  const char *v116; 
  const char *v117; 
  const char *v118; 
  const char *v119; 
  const char *v120; 
  const char *v121; 
  const char *v122; 
  const char *v123; 
  const char *v124; 
  const char *v125; 
  const char *v126; 
  const char *v127; 
  const char *v128; 
  const char *v129; 
  const char *v130; 
  const char *v131; 
  const char *v132; 
  const char *v133; 
  const char *v134; 
  const char *v135; 
  const char *v136; 
  const char *v137; 
  const char *v138; 
  const char *v139; 
  const char *v140; 
  const char *v141; 
  const char *v142; 
  const char *v143; 
  const char *v144; 
  const char *v145; 
  const char *v146; 
  const char *v147; 
  const char *v148; 
  const char *v149; 
  const char *v150; 
  const char *v151; 
  const char *v152; 
  const char *v153; 
  const char *v154; 
  const char *v155; 
  const char *v156; 
  const char *v157; 
  const char *v158; 
  const char *v159; 
  const char *v160; 
  const char *v161; 
  const char *v162; 
  const char *v163; 
  const char *v164; 
  const char *v165; 
  const char *v166; 
  const char *v167; 
  const char *v168; 
  const char *v169; 
  const char *v170; 
  const char *v171; 
  const char *v172; 
  const char *v173; 
  const char *v174; 
  const char *v175; 
  const char *v176; 
  const char *v177; 
  const char *v178; 
  const char *v179; 
  const char *v180; 
  const char *v181; 
  const char *v182; 
  const char *v183; 
  const char *v184; 
  const char *v185; 
  const char *v186; 
  const char *v187; 
  const char *v188; 
  const char *v189; 
  const char *v190; 
  const char *v191; 
  const char *v192; 
  const char *v193; 
  const char *v194; 
  const char *v195; 
  const char *v196; 
  const char *v197; 
  const char *v198; 
  const char *v199; 
  const char *v200; 
  const char *v201; 
  const char *v202; 
  const char *v203; 
  const char *v204; 
  const char *v205; 
  const char *v206; 
  const char *v207; 
  const char *v208; 
  const char *v209; 
  const char *v210; 
  const char *v211; 
  const char *v212; 
  const char *v213; 
  const char *v214; 
  const char *v215; 
  const char *v216; 
  const char *v217; 
  const char *v218; 
  const char *v219; 
  const char *v220; 
  const char *v221; 
  const char *v222; 
  const char *v223; 
  const char *v224; 
  const char *v225; 
  const char *v226; 
  const char *v227; 
  const char *v228; 
  const char *v229; 
  const char *v230; 
  const char *v231; 
  const char *v232; 
  const char *v233; 
  const char *v234; 
  const char *v235; 
  const char *v236; 
  const char *v237; 
  const char *v238; 
  const char *v239; 
  const char *v240; 
  const char *v241; 
  const char *v242; 
  const char *v243; 
  const char *v244; 
  const char *v245; 
  const char *v246; 
  const char *v247; 
  const char *v248; 
  const char *v249; 
  const char *v250; 
  const char *v251; 
  const char *v252; 
  const char *v253; 
  const char *v254; 
  const char *v255; 
  const char *v256; 
  const char *v257; 
  const char *v258; 
  const char *v259; 
  const char *v260; 
  const char *v261; 
  const char *v262; 
  const char *v263; 
  const char *v264; 
  const char *v265; 
  const char *v266; 
  const char *v267; 
  const char *v268; 
  const char *v269; 
  const char *v270; 
  const char *v271; 
  const char *v272; 
  const char *v273; 
  const char *v274; 
  const char *v275; 
  const char *v276; 
  const char *v277; 
  const char *v278; 
  const char *v279; 
  const char *v280; 
  const char *v281; 
  const char *v282; 
  const char *v283; 
  const char *v284; 
  const char *v285; 
  const char *v286; 
  const char *v287; 
  const char *v288; 
  const char *v289; 
  const char *v290; 
  const char *v291; 
  const char *v292; 
  const char *v293; 
  const char *v294; 
  const char *v295; 
  const char *v296; 
  const char *v297; 
  const char *v298; 
  const char *v299; 
  const char *v300; 
  const char *v301; 
  const char *v302; 
  const char *v303; 
  const char *v304; 
  const char *v305; 
  const char *v306; 
  const char *v307; 
  const char *v308; 
  const char *v309; 
  const char *v310; 
  const char *v311; 
  const char *v312; 
  const char *v313; 
  const char *v314; 
  const char *v315; 
  const char *v316; 
  const char *v317; 
  const char *v318; 
  const char *v319; 
  const char *v320; 
  const char *v321; 
  const char *v322; 
  const char *v323; 
  const char *v324; 
  const char *v325; 
  const char *v326; 
  const char *v327; 
  const char *v328; 
  const char *v329; 
  const char *v330; 
  const char *v331; 
  const char *v332; 
  const char *v333; 
  const char *v334; 
  const char *v335; 
  const char *v336; 
  const char *v337; 
  const char *v338; 
  const char *v339; 
  const char *v340; 
  const char *v341; 
  const char *v342; 
  const char *v343; 
  const char *v344; 
  const char *v345; 
  const char *v346; 
  const char *v347; 
  const char *v348; 
  const char *v349; 
  const char *v350; 
  const char *v351; 
  const char *v352; 
  const char *v353; 
  const char *v354; 
  const char *v355; 
  const char *v356; 
  const char *v357; 
  const char *v358; 
  const char *v359; 
  const char *v360; 
  const char *v361; 
  const char *v362; 
  const char *v363; 
  const char *v364; 
  const char *v365; 
  const char *v366; 
  const char *v367; 
  const char *v368; 
  const char *v369; 
  const char *v370; 
  const char *v371; 
  const char *v372; 
  const char *v373; 
  const char *v374; 
  const char *v375; 
  const char *v376; 
  const char *v377; 
  const char *v378; 
  const char *v379; 
  const char *v380; 
  const char *v381; 
  const char *v382; 
  const char *v383; 
  const char *v384; 
  const char *v385; 
  const char *v386; 
  const char *v387; 
  const char *v388; 
  const char *v389; 
  const char *v390; 
  const char *v391; 
  const char *v392; 
  const char *v393; 
  const char *v394; 
  const char *v395; 
  const char *v396; 
  const char *v397; 
  const char *v398; 
  const char *v399; 
  const char *v400; 
  const char *v401; 
  const char *v402; 
  const char *v403; 
  const char *v404; 
  const char *v405; 
  const char *v406; 
  const char *v407; 
  const char *v408; 
  const char *v409; 
  const char *v410; 
  const char *v411; 
  const char *v412; 
  const char *v413; 
  const char *v414; 
  const char *v415; 
  const char *v416; 
  const char *v417; 
  const char *v418; 
  const char *v419; 
  const char *v420; 
  const char *v421; 
  const char *v422; 
  const char *v423; 
  const char *v424; 
  const char *v425; 
  const char *v426; 
  const char *v427; 
  const char *v428; 
  const char *v429; 
  const char *v430; 
  const char *v431; 
  const char *v432; 
  const char *v433; 
  const char *v434; 
  const char *v435; 
  const char *v436; 
  const char *v437; 
  const char *v438; 
  const char *v439; 
  const char *v440; 
  const char *v441; 
  const char *v442; 
  const char *v443; 
  const char *v444; 
  const char *v445; 
  const char *v446; 
  const char *v447; 
  const char *v448; 
  const char *v449; 
  const char *v450; 
  const char *v451; 
  const char *v452; 
  const char *v453; 
  const char *v454; 
  const char *v455; 
  const char *v456; 
  const char *v457; 
  const char *v458; 
  const char *v459; 
  const char *v460; 
  const char *v461; 
  const char *v462; 
  const char *v463; 
  const char *v464; 
  const char *v465; 
  const char *v466; 
  const char *v467; 
  const char *v468; 
  const char *v469; 
  const char *v470; 
  const char *v471; 
  const char *v472; 
  const char *v473; 
  const char *v474; 
  const char *v475; 
  const char *v476; 
  const char *v477; 
  const char *v478; 
  const char *v479; 
  const char *v480; 
  const char *v481; 
  const char *v482; 
  const char *v483; 
  const char *v484; 
  const char *v485; 
  const char *v486; 
  const char *v487; 
  const char *v488; 
  const char *v489; 
  const char *v490; 
  const char *v491; 
  const char *v492; 
  const char *v493; 
  const char *v494; 
  const char *v495; 
  const char *v496; 
  const char *v497; 
  const char *v498; 
  const char *v499; 
  const char *v500; 
  const char *v501; 
  const char *v502; 
  const char *v503; 
  const char *v504; 
  const char *v505; 
  const char *v506; 
  const char *v507; 
  const char *v508; 
  const char *v509; 
  const char *v510; 
  const char *v511; 
  const char *v512; 
  const char *v513; 
  const char *v514; 
  const char *v515; 
  const char *v516; 
  const char *v517; 
  const char *v518; 
  const char *v519; 
  const char *v520; 
  const char *v521; 
  const char *v522; 
  const char *v523; 
  const char *v524; 
  const char *v525; 
  const char *v526; 
  const char *v527; 
  const char *v528; 
  const char *v529; 
  const char *v530; 
  const char *v531; 
  const char *v532; 
  const char *v533; 
  const char *v534; 
  const char *v535; 
  const char *v536; 
  const char *v537; 
  const char *v538; 
  const char *v539; 
  const char *v540; 
  const char *v541; 
  const char *v542; 
  const char *v543; 
  const char *v544; 
  const char *v545; 
  const char *v546; 
  const char *v547; 
  const char *v548; 
  const char *v549; 
  const char *v550; 
  const char *v551; 
  const char *v552; 
  const char *v553; 
  const char *v554; 
  const char *v555; 
  const char *v556; 
  const char *v557; 
  const char *v558; 
  const char *v559; 
  const char *v560; 
  const char *v561; 
  const char *v562; 
  const char *v563; 
  const char *v564; 
  const char *v565; 
  const char *v566; 
  const char *v567; 
  const char *v568; 
  const char *v569; 
  const char *v570; 
  const char *v571; 
  const char *v572; 
  const char *v573; 
  const char *v574; 
  const char *v575; 
  const char *v576; 
  const char *v577; 
  const char *v578; 
  const char *v579; 
  const char *v580; 
  const char *v581; 
  const char *v582; 
  const char *v583; 
  const char *v584; 
  const char *v585; 
  const char *v586; 
  const char *v587; 
  const char *v588; 
  const char *v589; 
  const char *v590; 
  const char *v591; 
  const char *v592; 
  const char *v593; 
  const char *v594; 
  const char *v595; 
  const char *v596; 
  const char *v597; 
  const char *v598; 
  const char *v599; 
  const char *v600; 
  const char *v601; 
  const char *v602; 
  const char *v603; 
  const char *v604; 
  const char *v605; 
  const char *v606; 
  const char *v607; 
  const char *v608; 
  const char *v609; 
  const char *v610; 
  const char *v611; 
  const char *v612; 
  const char *v613; 
  const char *v614; 
  const char *v615; 
  const char *v616; 
  const char *v617; 
  const char *v618; 
  const char *v619; 
  const char *v620; 
  const char *v621; 
  const char *v622; 
  const char *v623; 
  const char *v624; 
  const char *v625; 
  const char *v626; 
  const char *v627; 
  const char *v628; 
  const char *v629; 
  const char *v630; 
  const char *v631; 
  const char *v632; 
  const char *v633; 
  const char *v634; 
  const char *v635; 
  const char *v636; 
  const char *v637; 
  const char *v638; 
  const char *v639; 
  const char *v640; 
  const char *v641; 
  const char *v642; 
  const char *v643; 
  const char *v644; 
  const char *v645; 
  const char *v646; 
  const char *v647; 
  const char *v648; 
  const char *v649; 
  const char *v650; 
  const char *v651; 
  const char *v652; 
  const char *v653; 
  const char *v654; 
  const char *v655; 
  const char *v656; 
  const char *v657; 
  const char *v658; 
  const char *v659; 
  const char *v660; 
  const char *v661; 
  const char *v662; 
  const char *v663; 
  const char *v664; 
  const char *v665; 
  const char *v666; 
  const char *v667; 
  const char *v668; 
  const char *v669; 
  const char *v670; 
  const char *v671; 
  const char *v672; 
  const char *v673; 
  const char *v674; 
  const char *v675; 
  const char *v676; 
  const char *v677; 
  const char *v678; 
  const char *v679; 
  const char *v680; 
  const char *v681; 
  const char *v682; 
  const char *v683; 
  const char *v684; 
  const char *v685; 
  const char *v686; 
  const char *v687; 
  const char *v688; 
  const char *v689; 
  const char *v690; 
  const char *v691; 
  const char *v692; 
  const char *v693; 
  const char *v694; 
  const char *v695; 
  const char *v696; 
  const char *v697; 
  const char *v698; 
  const char *v699; 
  const char *v700; 
  const char *v701; 
  const char *v702; 
  const char *v703; 
  const char *v704; 
  const char *v705; 
  const char *v706; 
  const char *v707; 
  const char *v708; 
  const char *v709; 
  const char *v710; 
  const char *v711; 
  const char *v712; 
  const char *v713; 
  const char *v714; 
  const char *v715; 
  const char *v716; 
  const char *v717; 
  const char *v718; 
  const char *v719; 
  const char *v720; 
  const char *v721; 
  const char *v722; 
  const char *v723; 
  const char *v724; 
  const char *v725; 
  const char *v726; 
  const char *v727; 
  const char *v728; 
  const char *v729; 
  const char *v730; 
  const char *v731; 
  const char *v732; 
  const char *v733; 
  const char *v734; 
  const char *v735; 
  const char *v736; 
  const char *v737; 
  const char *v738; 
  const char *v739; 
  const char *v740; 
  const char *v741; 
  const char *v742; 
  const char *v743; 
  const char *v744; 
  const char *v745; 
  const char *v746; 
  const char *v747; 
  const char *v748; 
  const char *v749; 
  const char *v750; 
  const char *v751; 
  const char *v752; 
  const char *v753; 
  const char *v754; 
  int v755[748]; 

  v3 = bufferSize;
  memcpy_0(v755, &_static, 0xBA4ui64);
  v10 = "BD_NO_ERROR";
  v11 = "BD_TOO_MANY_TASKS";
  v12 = "BD_NOT_CONNECTED";
  v13 = "BD_SEND_FAILED";
  v14 = "BD_HANDLE_TASK_FAILED";
  v15 = "BD_START_TASK_FAILED";
  v16 = "BD_RESULT_EXCEEDS_BUFFER_SIZE";
  v17 = "BD_ACCESS_DENIED";
  v18 = "BD_EXCEPTION_IN_DB";
  v19 = "BD_MALFORMED_TASK_HEADER";
  v20 = "BD_INVALID_ROW";
  v21 = "BD_EMPTY_ARG_LIST";
  v22 = "BD_PARAM_PARSE_ERROR";
  v23 = "BD_PARAM_MISMATCHED_TYPE";
  v24 = "BD_SERVICE_NOT_AVAILABLE";
  v25 = "BD_CONNECTION_RESET";
  v26 = "BD_INVALID_USER_ID";
  v27 = "BD_LOBBY_PROTOCOL_VERSION_FAILURE";
  v28 = "BD_LOBBY_INTERNAL_FAILURE";
  v29 = "BD_LOBBY_PROTOCOL_ERROR";
  v30 = "BD_LOBBY_FAILED_TO_DECODE_UTF8";
  v31 = "BD_LOBBY_ASCII_EXPECTED";
  v32 = "BD_INVALID_CONTEXT";
  v33 = "BD_LOBBY_METHOD_DISABLED";
  v34 = "BD_LOBBY_MIGRATION_FAILURE";
  v35 = "BD_ASYNCHRONOUS_ERROR";
  v36 = "BD_STREAMING_COMPLETE";
  v37 = "BD_MEMBER_NO_PROPOSAL";
  v38 = "BD_TEAMNAME_ALREADY_EXISTS";
  v39 = "BD_MAX_TEAM_MEMBERSHIPS_LIMITED";
  v40 = "BD_MAX_TEAM_OWNERSHIPS_LIMITED";
  v41 = "BD_NOT_A_TEAM_MEMBER";
  v42 = "BD_INVALID_TEAM_ID";
  v43 = "BD_INVALID_TEAM_NAME";
  v44 = "BD_NOT_A_TEAM_OWNER";
  v45 = "BD_NOT_AN_ADMIN_OR_OWNER";
  v46 = "BD_MEMBER_PROPOSAL_EXISTS";
  v47 = "BD_MEMBER_EXISTS";
  v48 = "BD_TEAM_FULL";
  v49 = "BD_VULGAR_TEAM_NAME";
  v50 = "BD_TEAM_USERID_BANNED";
  v51 = "BD_TEAM_EMPTY";
  v52 = "BD_INVALID_TEAM_PROFILE_QUERY_ID";
  v53 = "BD_TEAMNAME_TOO_SHORT";
  v54 = "BD_UNIQUE_PROFILE_DATA_EXISTS_ALREADY";
  v55 = "BD_APPLICATION_EXISTS";
  v56 = "BD_APPLICATIONS_MAX_EXCEEDED";
  v57 = "BD_PAGE_SIZE_LIMIT_EXCEEDED";
  v58 = "BD_APPLICATION_REJECTED_EXISTS";
  v59 = "BD_APPLICATION_WITHDRAWN_EXISTS";
  v60 = "BD_APPLICATION_DOES_NOT_EXIST";
  v61 = "BD_APPLICATION_INVALID_STATE";
  v62 = "BD_MEMBER_BAN_EXISTS";
  v63 = "BD_MEMBER_BAN_DOES_NOT_EXIST";
  v64 = "BD_OWNER_BAN_FORBIDDEN";
  v65 = "BD_INVALID_ACCOUNT_TYPE";
  v66 = "BD_CONFIGURED_ACCOUNT_TYPE_NOT_FOUND";
  v67 = "BD_OWNER_OF_NON_EMPTY_TEAM";
  v68 = "BD_CANNOT_APPLY_TO_PIRIVATE_TEAM";
  v69 = "BD_MEMBER_IS_OWNER";
  v70 = "BD_AUTO_JOINING_DISABLED";
  v71 = "BD_TEAM_SHOWCASE_DISABLED";
  v72 = "BD_INVALID_FILTER";
  v73 = "BD_INVALID_TEAM_LEADERBOARD";
  v74 = "BD_TEAM_LEADERBOARD_LOADING";
  v75 = "BD_TEAM_SHOWCASE_COUNT_EXCEEDED";
  v76 = "BD_USER_ALREADY_TEAM_OWNER";
  v77 = "BD_UPPER_TEAM_MEMBER_LIMIT_EXCEEDED";
  v78 = "BD_TEAM_MEMBER_LIMIT_NOT_SUPPORTED";
  v79 = "BD_MISMATCHED_TEAM_PROFILE_COLLISION_FIELD";
  v80 = "BD_INVALID_LEADERBOARD_ID";
  v81 = "BD_INVALID_STATS_SET";
  v82 = "BD_EMPTY_STATS_SET_IGNORED";
  v83 = "BD_NO_DIRECT_ACCESS_TO_ARBITRATED_LBS";
  v84 = "BD_STATS_WRITE_PERMISSION_DENIED";
  v85 = "BD_STATS_WRITE_TYPE_DATA_TYPE_MISMATCH";
  v86 = "BD_NO_STATS_FOR_USER";
  v87 = "BD_INVALID_ACCESS_TO_UNRANKED_LB";
  v88 = "BD_INVALID_EXTERNAL_TITLE_ID";
  v89 = "BD_DIFFERENT_LEADERBOARD_SCHEMAS";
  v90 = "BD_TOO_MANY_LEADERBOARDS_REQUESTED";
  v91 = "BD_ENTITLEMENTS_ERROR";
  v92 = "BD_ENTITLEMENTS_INVALID_TITLEID";
  v93 = "BD_ENTITLEMENTS_INVALID_LEADERBOARDID";
  v94 = "BD_ENTITLEMENTS_INVALID_GET_MODE_FOR_TITLE";
  v95 = "BD_ENTITLEMENTS_URL_CONNECTION_ERROR";
  v96 = "BD_ENTITLEMENTS_CONFIG_ERROR";
  v97 = "BD_ENTITLEMENTS_NAMED_PARENT_ERROR";
  v98 = "BD_ENTITLEMENTS_NAMED_KEY_ERROR";
  v99 = "BD_TOO_MANY_ENTITY_IDS_REQUESTED";
  v100 = "BD_STATS_READ_FAILED";
  v101 = "BD_STATS_INVALID_WRITE_TO_VIRTUAL_LEADERBOARD";
  v102 = "BD_STATS_INVALID_WRITE_TYPE_TO_MULTIRANK_LB";
  v103 = "BD_STATS_INVALID_EXCLUDED_COLUMN";
  v104 = "BD_STATS_INVALID_INCLUDED_COLUMN";
  v105 = "BD_STATS_WRITE_NO_SCRIPT_MODULE";
  v106 = "BD_STATS_WRITE_SCRIPT_MODULE_ERROR";
  v107 = "BD_NON_READ_ON_READ_ONLY_LEADERBOARD";
  v108 = "BD_INVALID_TITLE_ID";
  v109 = "BD_DOWN_FOR_MAINTENANCE";
  v110 = "BD_MESSAGING_INVALID_MAIL_ID";
  v111 = "BD_SELF_BLOCK_NOT_ALLOWED";
  v112 = "BD_GLOBAL_MESSAGE_ACCESS_DENIED";
  v113 = "BD_GLOBAL_MESSAGES_USER_LIMIT_EXCEEDED";
  v114 = "BD_MESSAGING_SENDER_DOES_NOT_EXIST";
  v115 = "BD_AUTH_NO_ERROR";
  v116 = "BD_AUTH_BAD_REQUEST";
  v117 = "BD_AUTH_SERVER_CONFIG_ERROR";
  v118 = "BD_AUTH_BAD_TITLE_ID";
  v119 = "BD_AUTH_BAD_ACCOUNT";
  v120 = "BD_AUTH_ILLEGAL_OPERATION";
  v121 = "BD_AUTH_INCORRECT_LICENSE_CODE";
  v122 = "BD_AUTH_CREATE_USERNAME_EXISTS";
  v123 = "BD_AUTH_CREATE_USERNAME_ILLEGAL";
  v124 = "BD_AUTH_CREATE_USERNAME_VULGAR";
  v125 = "BD_AUTH_CREATE_MAX_ACC_EXCEEDED";
  v126 = "BD_AUTH_MIGRATE_NOT_SUPPORTED";
  v127 = "BD_AUTH_TITLE_DISABLED";
  v128 = "BD_AUTH_ACCOUNT_EXPIRED";
  v129 = "BD_AUTH_ACCOUNT_LOCKED";
  v130 = "BD_AUTH_UNKNOWN_ERROR";
  v131 = "BD_AUTH_INCORRECT_PASSWORD";
  v132 = "BD_AUTH_IP_NOT_IN_ALLOWED_RANGE";
  v133 = "BD_AUTH_WII_TOKEN_VERIFICATION_FAILED";
  v134 = "BD_AUTH_WII_AUTHENTICATION_FAILED";
  v135 = "BD_AUTH_IP_KEY_LIMIT_REACHED";
  v136 = "BD_AUTH_INVALID_GSPID";
  v137 = "BD_AUTH_INVALID_IP_RANGE_ID";
  v138 = "BD_AUTH_3DS_TOKEN_VERIFICATION_FAILED";
  v139 = "BD_AUTH_3DS_AUTHENTICATION_FAILED";
  v140 = "BD_AUTH_STEAM_APP_ID_MISMATCH";
  v141 = "BD_AUTH_ABACCOUNTS_APP_ID_MISMATCH";
  v142 = "BD_AUTH_CODO_USERNAME_NOT_SET";
  v143 = "BD_AUTH_WIIU_TOKEN_VERIFICATION_FAILED";
  v144 = "BD_AUTH_WIIU_AUTHENTICATION_FAILED";
  v145 = "BD_AUTH_CODO_USERNAME_NOT_BASE64";
  v146 = "BD_AUTH_CODO_USERNAME_NOT_UTF8";
  v147 = "BD_AUTH_TENCENT_TICKET_EXPIRED";
  v148 = "BD_AUTH_PS3_SERVICE_ID_MISMATCH";
  v149 = "BD_AUTH_CODOID_NOT_WHITELISTED";
  v150 = "BD_AUTH_PLATFORM_TOKEN_RETRIEVAL_ERROR";
  v151 = "BD_AUTH_JSON_FORMAT_ERROR";
  v152 = "BD_AUTH_REPLY_CONTENT_ERROR";
  v153 = "BD_AUTH_PLATFORM_TOKEN_EXPIRED";
  v154 = "BD_AUTH_CONTINUING";
  v155 = "BD_AUTH_PLATFORM_TOKEN_DECRYPTION_ERROR";
  v156 = "BD_AUTH_PLATFORM_TOKEN_SIGNATURE_ERROR";
  v157 = "BD_AUTH_DNS_RESOLUTION_ERROR";
  v158 = "BD_AUTH_SSL_CERTIFICATE_ERROR";
  v159 = "BD_AUTH_SERVER_UNAVAILABLE_ERROR";
  v160 = "BD_AUTH_ENVIRONMENT_ERROR";
  v161 = "BD_AUTH_PLATFORM_DEVICE_ID_ERROR";
  v162 = "BD_AUTH_UNO_APP_ID_MISMATCH";
  v163 = "BD_AUTH_UNICODE_DECODE_ERROR";
  v164 = "BD_AUTH_STEAM_PUBLISHER_BAN";
  v165 = "BD_AUTH_TICKET_DECRYPTION_ERROR";
  v166 = "BD_AUTH_SIGNATURE_ERROR";
  v167 = "BD_AUTH_REQUEST_TIMEOUT_ERROR";
  v168 = "BD_AUTH_REQUEST_ABORTED_ERROR";
  v169 = "BD_AUTH_SINGLE_IDENTITY_FLOW_DISABLED_ERROR";
  v170 = "BD_AUTH_SINGLE_IDENTITY_TOKEN_MISSING_ERROR";
  v171 = "BD_AUTH_SINGLE_IDENTITY_TOKEN_EXPIRED_ERROR";
  v172 = "BD_AUTH_SINGLE_IDENTITY_TOKEN_INVALID_ERROR";
  v173 = "BD_AUTH_SWITCH_TOKEN_VERIFICATION_FAILED";
  v174 = "BD_AUTH_SWITCH_AUTHENTICATION_FAILED";
  v175 = "BD_AUTH_BAD_DEVICE_KEY";
  v176 = "BD_AUTH_BAD_DEVICE_TITLE_KEY";
  v177 = "BD_AUTH_TSIG_EXPIRED";
  v178 = "BD_AUTH_TOO_MANY_REQUESTS";
  v179 = "BD_AUTH_COUNTRY_BLOCKED_ERROR";
  v180 = "BD_NO_PROFILE_INFO_EXISTS";
  v181 = "BD_PROFILE_COLLISION_FIELD_MISMATCH";
  v182 = "BD_FRIENDSHIP_NOT_REQUSTED";
  v183 = "BD_NOT_A_FRIEND";
  v184 = "BD_SELF_FRIENDSHIP_NOT_ALLOWED";
  v185 = "BD_FRIENDSHIP_EXISTS";
  v186 = "BD_PENDING_FRIENDSHIP_EXISTS";
  v187 = "BD_USERID_BANNED";
  v188 = "BD_FRIENDS_FULL";
  v189 = "BD_FRIENDS_NO_RICH_PRESENCE";
  v190 = "BD_RICH_PRESENCE_TOO_LARGE";
  v191 = "BD_FRIENDS_REMOTE_FULL";
  v192 = "BD_NO_FILE";
  v193 = "BD_PERMISSION_DENIED";
  v194 = "BD_FILESIZE_LIMIT_EXCEEDED";
  v195 = "BD_FILENAME_MAX_LENGTH_EXCEEDED";
  v196 = "BD_EXTERNAL_STORAGE_SERVICE_ERROR";
  v197 = "BD_VALIDATION_ERROR";
  v198 = "BD_VALIDATION_TOKEN_ERROR";
  v199 = "BD_VALIDATION_TOKEN_GENERATION_ERROR";
  v200 = "BD_VALIDATION_TOKEN_VERIFICATION_ERROR";
  v201 = "BD_STORAGE_SERVER_UNREACHABLE";
  v202 = "BD_CHANNEL_DOES_NOT_EXIST";
  v203 = "BD_CHANNEL_ALREADY_SUBSCRIBED";
  v204 = "BD_CHANNEL_NOT_SUBSCRIBED";
  v205 = "BD_CHANNEL_FULL";
  v206 = "BD_CHANNEL_SUBSCRIPTIONS_FULL";
  v207 = "BD_CHANNEL_NO_SELF_WHISPERING";
  v208 = "BD_CHANNEL_ADMIN_REQUIRED";
  v209 = "BD_CHANNEL_TARGET_NOT_SUBSCRIBED";
  v210 = "BD_CHANNEL_REQUIRES_PASSWORD";
  v211 = "BD_CHANNEL_TARGET_IS_SELF";
  v212 = "BD_CHANNEL_PUBLIC_BAN_NOT_ALLOWED";
  v213 = "BD_CHANNEL_USER_BANNED";
  v214 = "BD_CHANNEL_PUBLIC_PASSWORD_NOT_ALLOWED";
  v215 = "BD_CHANNEL_PUBLIC_KICK_NOT_ALLOWED";
  v216 = "BD_CHANNEL_MUTED";
  v217 = "BD_CONTENT_UNLOCK_UNKNOWN_ERROR";
  v218 = "BD_UNLOCK_KEY_INVALID";
  v219 = "BD_UNLOCK_KEY_ALREADY_USED_UP";
  v220 = "BD_CONTENT_UNLOCK_LIMIT_REACHED";
  v221 = "BD_DIFFERENT_HARDWARE_ID";
  v222 = "BD_INVALID_CONTENT_OWNER";
  v223 = "BD_CONTENT_UNLOCK_INVALID_USER";
  v224 = "BD_CONTENT_UNLOCK_INVALID_CATEGORY";
  v225 = "BD_KEY_ARCHIVE_INVALID_WRITE_TYPE";
  v226 = "BD_KEY_ARCHIVE_EXCEEDED_MAX_IDS_PER_REQUEST";
  v227 = "BD_BANDWIDTH_TEST_TRY_AGAIN";
  v228 = "BD_BANDWIDTH_TEST_STILL_IN_PROGRESS";
  v229 = "BD_BANDWIDTH_TEST_NOT_PROGRESS";
  v230 = "BD_BANDWIDTH_TEST_SOCKET_ERROR";
  v231 = "BD_INVALID_SESSION_NONCE";
  v232 = "BD_ARBITRATION_FAILURE";
  v233 = "BD_ARBITRATION_USER_NOT_REGISTERED";
  v234 = "BD_ARBITRATION_NOT_CONFIGURED";
  v235 = "BD_CONTENTSTREAMING_FILE_NOT_AVAILABLE";
  v236 = "BD_CONTENTSTREAMING_STORAGE_SPACE_EXCEEDED";
  v237 = "BD_CONTENTSTREAMING_NUM_FILES_EXCEEDED";
  v238 = "BD_CONTENTSTREAMING_UPLOAD_BANDWIDTH_EXCEEDED";
  v239 = "BD_CONTENTSTREAMING_FILENAME_MAX_LENGTH_EXCEEDED";
  v240 = "BD_CONTENTSTREAMING_MAX_THUMB_DATA_SIZE_EXCEEDED";
  v241 = "BD_CONTENTSTREAMING_DOWNLOAD_BANDWIDTH_EXCEEDED";
  v242 = "BD_CONTENTSTREAMING_NOT_ENOUGH_DOWNLOAD_BUFFER_SPACE";
  v243 = "BD_CONTENTSTREAMING_SERVER_NOT_CONFIGURED";
  v244 = "BD_CONTENTSTREAMING_INVALID_APPLE_RECEIPT";
  v245 = "BD_CONTENTSTREAMING_APPLE_STORE_NOT_AVAILABLE";
  v246 = "BD_CONTENTSTREAMING_APPLE_RECEIPT_FILENAME_MISMATCH";
  v247 = "BD_CONTENTSTREAMING_BATCH_DOWNLOAD_PARTIAL_FAILURE";
  v248 = "BD_CONTENTSTREAMING_HTTP_ERROR";
  v249 = "BD_CONTENTSTREAMING_FAILED_TO_START_HTTP";
  v250 = "BD_CONTENTSTREAMING_LOCALE_INVALID";
  v251 = "BD_CONTENTSTREAMING_LOCALE_MISSING";
  v252 = "BD_VOTERANK_ERROR_EMPTY_RATING_SUBMISSION";
  v253 = "BD_VOTERANK_ERROR_MAX_VOTES_EXCEEDED";
  v254 = "BD_VOTERANK_ERROR_INVALID_RATING";
  v255 = "BD_MAX_NUM_TAGS_EXCEEDED";
  v256 = "BD_TAGGED_COLLECTION_DOES_NOT_EXIST";
  v257 = "BD_EMPTY_TAG_ARRAY";
  v258 = "BD_SEARCH_SERVER_UNREACHABLE";
  v259 = "BD_ENTITY_ID_NOT_SPECIFIED";
  v260 = "BD_INVALID_QUERY_ID";
  v261 = "BD_NO_ENTRY_TO_UPDATE";
  v262 = "BD_SESSION_INVITE_EXISTS";
  v263 = "BD_INVALID_SESSION_ID";
  v264 = "BD_ATTACHMENT_TOO_LARGE";
  v265 = "BD_INVALID_FIELD_VALUE";
  v266 = "BD_REQUEST_SESSION_NOT_SUPPORTED";
  v267 = "BD_INVALID_GROUP_ID";
  v268 = "BD_MAIL_INVALID_MAIL_ID_ERROR";
  v269 = "BD_MAIL_PERMISSION_DENIED_ERROR";
  v270 = "BD_TWITCH_SERVICE_ERROR";
  v271 = "BD_TWITCH_ACCOUNT_ALREADY_LINKED";
  v272 = "BD_TWITCH_NO_LINKED_ACCOUNT";
  v273 = "BD_TWITTER_AUTH_ATTEMPT_FAILED";
  v274 = "BD_TWITTER_AUTH_TOKEN_INVALID";
  v275 = "BD_TWITTER_UPDATE_LIMIT_REACHED";
  v276 = "BD_TWITTER_UNAVAILABLE";
  v277 = "BD_TWITTER_ERROR";
  v278 = "BD_TWITTER_TIMED_OUT";
  v279 = "BD_TWITTER_ACCOUNT_AMBIGUOUS";
  v280 = "BD_TWITTER_MAXIMUM_ACCOUNTS_REACHED";
  v281 = "BD_TWITTER_ACCOUNT_NOT_REGISTERED";
  v282 = "BD_TWITTER_DUPLICATE_STATUS";
  v283 = "BD_TWITTER_ACCOUNT_ALREADY_REGISTERED";
  v284 = "BD_FACEBOOK_AUTH_ATTEMPT_FAILED";
  v285 = "BD_FACEBOOK_AUTH_TOKEN_INVALID";
  v286 = "BD_FACEBOOK_PHOTO_DOES_NOT_EXIST";
  v287 = "BD_FACEBOOK_PHOTO_INVALID";
  v288 = "BD_FACEBOOK_PHOTO_ALBUM_FULL";
  v289 = "BD_FACEBOOK_UNAVAILABLE";
  v290 = "BD_FACEBOOK_ERROR";
  v291 = "BD_FACEBOOK_TIMED_OUT";
  v292 = "BD_FACEBOOK_DISABLED_FOR_USER";
  v293 = "BD_FACEBOOK_ACCOUNT_AMBIGUOUS";
  v294 = "BD_FACEBOOK_MAXIMUM_ACCOUNTS_REACHED";
  v295 = "BD_FACEBOOK_INVALID_NUM_PICTURES_REQUESTED";
  v296 = "BD_FACEBOOK_VIDEO_DOES_NOT_EXIST";
  v297 = "BD_FACEBOOK_ACCOUNT_ALREADY_REGISTERED";
  v298 = "BD_FACEBOOK_TARGET_OBJECT_ID_INVALID";
  v299 = "BD_FACEBOOK_NO_SUCH_ACCOUNT";
  v300 = "BD_APNS_INVALID_PAYLOAD";
  v301 = "BD_APNS_INVALID_TOKEN_LENGTH_ERROR";
  v302 = "BD_MAX_CONSOLEID_LENGTH_EXCEEDED";
  v303 = "BD_MAX_WHITELIST_LENGTH_EXCEEDED";
  v304 = "BD_TOTP_CHALLENGE_FAILED";
  v305 = "BD_NO_TOTP_ACCOUNT";
  v306 = "BD_EXTENDED_AUTH_INFO_ERROR";
  v307 = "BD_EXTENDED_AUTH_INFO_LENGTH_EXCEEDED";
  v308 = "BD_EXTENDED_AUTH_INFO_EXPIRED";
  v309 = "BD_WHITELIST_TRAILING_WHITE_SPACE";
  v310 = "BD_WHITELIST_MESSAGE_LENGTH_LIMIT_EXCEEDED";
  v311 = "BD_BNET_SESSION_TOKEN_ERROR";
  v312 = "BD_BNET_SESSION_CLAIMS_ERROR";
  v313 = "BD_TRIAL_STATUS_ERROR";
  v314 = "BD_TRIAL_STATUS_INVALID_DATA_ERROR";
  v315 = "BD_TRIAL_STATUS_UNAVAILABLE_ERROR";
  v316 = "BD_LOGON_SCHEDULE_ERROR";
  v317 = "BD_LOGON_SCHEDULE_INVALID_TIME_RANGE_ERROR";
  v318 = "BD_LOGON_SCHEDULE_INVALID_DAY_ERROR";
  v319 = "BD_LOGON_SCHEDULE_INVALID_UPDATE_TYPE_ERROR";
  v320 = "BD_LOGON_SCHEDULE_UPDATE_FAILED_ERROR";
  v321 = "BD_USERGROUP_NAME_ALREADY_EXISTS";
  v322 = "BD_INVALID_USERGROUP_ID";
  v323 = "BD_USER_ALREADY_IN_USERGROUP";
  v324 = "BD_USER_NOT_IN_USERGROUP";
  v325 = "BD_INVALID_USERGROUP_MEMBER_TYPE";
  v326 = "BD_TOO_MANY_MEMBERS_REQUESTED";
  v327 = "BD_USERGROUP_NAME_TOO_SHORT";
  v328 = "BD_RICH_PRESENCE_DATA_TOO_LARGE";
  v329 = "BD_RICH_PRESENCE_TOO_MANY_USERS";
  v330 = "BD_RICH_PRESENCE_ERROR";
  v331 = "BD_RICH_PRESENCE_FEATURE_DISABLED_ERROR";
  v332 = "BD_RICH_PRESENCE_TOO_MANY_UPDATES";
  v333 = "BD_RICH_PRESENCE_SUBSCRIPTIONS_ERROR";
  v334 = "BD_RICH_PRESENCE_TOO_MANY_SUBSCRIPTIONS_ERROR";
  v335 = "BD_PRESENCE_DATA_TOO_LARGE";
  v336 = "BD_PRESENCE_TOO_MANY_USERS";
  v337 = "BD_USER_LOGGED_IN_OTHER_TITLE";
  v338 = "BD_USER_NOT_LOGGED_IN";
  v339 = "BD_PRESENCE_INVALID_PLATFORM";
  v340 = "BD_SUBSCRIPTION_TOO_MANY_USERS";
  v341 = "BD_SUBSCRIPTION_TICKET_PARSE_ERROR";
  v342 = "BD_CODO_ID_INVALID_DATA";
  v343 = "BD_INVALID_MESSAGE_FORMAT";
  v344 = "BD_TLOG_TOO_MANY_MESSAGES";
  v345 = "BD_CODO_ID_NOT_IN_WHITELIST";
  v346 = "BD_TLOG_MESSAGE_TRANSFORMATION_ERROR";
  v347 = "BD_REWARDS_NOT_ENABLED";
  v348 = "BD_REWARDS_INVALID_RULE";
  v349 = "BD_REDEEM_NAME_CHANGE_INTERNAL_ERROR";
  v350 = "BD_REDEEM_NAME_CHANGE_INVALID_ITEM";
  v351 = "BD_REDEEM_NAME_CHANGE_UNAVAILABLE_ITEM";
  v352 = "BD_REDEEM_NAME_CHANGE_IN_PROGRESS";
  v353 = "BD_REDEEM_NAME_CHANGE_INACTIVE_REQUEST";
  v354 = "BD_REDEEM_NAME_CHANGE_INVALID_NAME";
  v355 = "BD_REDEEM_NAME_CHANGE_SAME_NAME";
  v356 = "BD_REDEEM_NAME_CHANGE_DUPLICATE_NAME";
  v357 = "BD_TENCENT_NO_APPLICABLE_REWARDS";
  v358 = "BD_TLOG_MESSAGE_DECOMPRESSION_ERROR";
  v359 = "BD_REDEEM_TEAM_NAME_CHANGE_INTERNAL_ERROR";
  v360 = "BD_REDEEM_TEAM_NAME_CHANGE_INVALID_ITEM";
  v361 = "BD_REDEEM_TEAM_NAME_CHANGE_UNAVAILABLE_ITEM";
  v362 = "BD_TENCENT_REWARD_NOT_FOUND";
  v363 = "BD_MARKETPLACE_ERROR";
  v364 = "BD_MARKETPLACE_RESOURCE_NOT_FOUND";
  v365 = "BD_MARKETPLACE_INVALID_CURRENCY";
  v366 = "BD_MARKETPLACE_INVALID_PARAMETER";
  v367 = "BD_MARKETPLACE_RESOURCE_CONFLICT";
  v368 = "BD_MARKETPLACE_STORAGE_ERROR";
  v369 = "BD_MARKETPLACE_INTEGRITY_ERROR";
  v370 = "BD_MARKETPLACE_INSUFFICIENT_FUNDS_ERROR";
  v371 = "BD_MARKETPLACE_MMP_SERVICE_ERROR";
  v372 = "BD_MARKETPLACE_PRECONDITION_REQUIRED";
  v373 = "BD_MARKETPLACE_ITEM_MULTIPLE_PURCHASE_ERROR";
  v374 = "BD_MARKETPLACE_MISSING_REQUIRED_ENTITLEMENT";
  v375 = "BD_MARKETPLACE_VALIDATION_ERROR";
  v376 = "BD_MARKETPLACE_TENCENT_PAYMENT_ERROR";
  v377 = "BD_MARKETPLACE_SKU_NOT_COUPON_ENABLED_ERROR";
  v378 = "BD_MARKETPLACE_TRANSACTION_ERROR";
  v379 = "BD_MARKETPLACE_RECEIPT_USED";
  v380 = "BD_MARKETPLACE_INVALID_RECEIPT";
  v381 = "BD_MARKETPLACE_STEAM_REQUEST_FAILED";
  v382 = "BD_MARKETPLACE_STEAM_NOT_APPROVED";
  v383 = "BD_MARKETPLACE_PRODUCT_NOT_FOUND_IN_FP";
  v384 = "BD_MARKETPLACE_STEAM_ALREADY_FINALIZED";
  v385 = "BD_MARKETPLACE_STEAM_BAD_ORDER_ID";
  v386 = "BD_MARKETPLACE_STEAM_CURRENCY_ERROR";
  v387 = "BD_MARKETPLACE_PSN_INVALID_NP_TITLE_ID";
  v388 = "BD_MARKETPLACE_PSN_INVALID_NP_AUTH_CODE";
  v389 = "BD_MARKETPLACE_PSN_INVALID_ENTITLEMENT_ID";
  v390 = "BD_MARKETPLACE_PSN_ENTITLEMENT_NOT_PRESENT";
  v391 = "BD_MARKETPLACE_PSN_INTERNAL_ERROR";
  v392 = "BD_MARKETPLACE_XB1_UNAUTHORISED_ERROR";
  v393 = "BD_MARKETPLACE_XB1_REQUEST_REJECTED_ERROR";
  v394 = "BD_MARKETPLACE_XB1_INSUFFICIENT_QUANTITY_ERROR";
  v395 = "BD_MARKETPLACE_XB1_BAD_DELEGATION_TOKEN_ERROR";
  v396 = "BD_MARKETPLACE_XB1_REQUEST_FAILED_ERROR";
  v397 = "BD_MARKETPLACE_X360_REQUEST_FAILED";
  v398 = "BD_MARKETPLACE_X360_ITEM_NOT_PRESENT";
  v399 = "BD_MARKETPLACE_X360_CONNECTION_ERROR";
  v400 = "BD_MARKETPLACE_USAGE_TIME_ERROR";
  v401 = "BD_MARKETPLACE_DURABLE_ALREADY_GRANTED";
  v402 = "BD_MARKETPLACE_FIRST_PARTY_DURABLE_EXISTS";
  v403 = "BD_MARKETPLACE_ITEM_LIMIT_REACHED";
  v404 = "BD_MARKETPLACE_OVER_ITEM_MAX_QUANTITY_ERROR";
  v405 = "BD_MARKETPLACE_INSUFFICIENT_ITEM_QUANTITY";
  v406 = "BD_MARKETPLACE_ENTITY_NOT_ENABLED";
  v407 = "BD_MARKETPLACE_MISCONFIGURED";
  v408 = "BD_MARKETPLACE_COUPON_NOT_CLAIMED_OR_FOUND";
  v409 = "BD_MARKETPLACE_INVALID_DISCOUNT";
  v410 = "BD_MARKETPLACE_INVALID_STORE_VERSION";
  v411 = "BD_MARKETPLACE_SKU_SOLD_OUT";
  v412 = "BD_MARKETPLACE_WIIU_AUTH_FAILED";
  v413 = "BD_MARKETPLACE_WIIU_INVALID_PARAMETER";
  v414 = "BD_MARKETPLACE_WIIU_TAX_LOCATION_NOT_SPECIFIED";
  v415 = "BD_MARKETPLACE_WIIU_ACCOUNT_ERROR";
  v416 = "BD_MARKETPLACE_WIIU_PURCHASING_ERROR";
  v417 = "BD_MARKETPLACE_WIIU_BALANCE_ERROR";
  v418 = "BD_MARKETPLACE_WIIU_SERVER_ERROR";
  v419 = "BD_MARKETPLACE_WIIU_REQUEST_FAILED";
  v420 = "BD_MARKETPLACE_WIIU_SERVER_MAINTENANCE";
  v421 = "BD_MARKETPLACE_WIIU_SERVICE_TERMINATED";
  v422 = "BD_MARKETPLACE_WIIU_ITEM_NOT_PRESENT";
  v423 = "BD_MARKETPLACE_WIIU_TAX_LOCATION_INVALID";
  v424 = "BD_MARKETPLACE_XB1_DURABLE_NOT_PRESENT";
  v425 = "BD_MARKETPLACE_EXPECTED_PRICE_MISMATCH";
  v426 = "BD_MARKETPLACE_ITEM_NOT_CONSUMABLE";
  v427 = "BD_MARKETPLACE_IDEMPOTENT_REQUEST_COLLISION";
  v428 = "BD_MARKETPLACE_COUPON_NOT_STARTED";
  v429 = "BD_MARKETPLACE_MULTIPLE_OPERATIONS_ERROR";
  v430 = "BD_MARKETPLACE_MISSING_PAYMENT_PROVIDER_CURRENCY_ERROR";
  v431 = "BD_MARKETPLACE_WIIU_LANGUAGE_NOT_SUPPORTED";
  v432 = "BD_MARKETPLACE_PAWN_CHOICE_EXPECTED";
  v433 = "BD_MARKETPLACE_PAWN_CHOICE_UNSUPPORTED";
  v434 = "BD_MARKETPLACE_INVALID_REWARD_ERROR";
  v435 = "BD_MARKETPLACE_MISSING_REQUIRED_ITEMS_ERROR";
  v436 = "BD_MARKETPLACE_MISSING_REQUIRED_CURRENCY_BALANCES_ERROR";
  v437 = "BD_MARKETPLACE_MISSING_REQUIRED_ENTITLEMENTS_ERROR";
  v438 = "BD_MARKETPLACE_UNREACHABLE_ERROR";
  v439 = "BD_MARKETPLACE_ITEM_ALREADY_PERMANENTLY_OWNED";
  v440 = "BD_MARKETPLACE_EXCEEDED_ITEM_MAX_USAGE_TIME";
  v441 = "BD_MARKETPLACE_BNET_REQUEST_FAILED";
  v442 = "BD_MARKETPLACE_WEGAME_SERVICE_ERROR";
  v443 = "BD_MARKETPLACE_WEGAME_REQUEST_FAILED";
  v444 = "BD_MARKETPLACE_SWITCH_SERVICE_ERROR";
  v445 = "BD_MARKETPLACE_SWITCH_REQUEST_FAILED";
  v446 = "BD_COMMS_SERVICE_NOT_AVAILABLE_ERROR";
  v447 = "BD_COMMS_CLIENT_ERROR";
  v448 = "BD_LEAGUE_INVALID_TEAM_SIZE";
  v449 = "BD_LEAGUE_INVALID_TEAM";
  v450 = "BD_LEAGUE_INVALID_SUBDIVISION";
  v451 = "BD_LEAGUE_INVALID_LEAGUE";
  v452 = "BD_LEAGUE_TOO_MANY_RESULTS_REQUESTED";
  v453 = "BD_LEAGUE_METADATA_TOO_LARGE";
  v454 = "BD_LEAGUE_TEAM_ICON_TOO_LARGE";
  v455 = "BD_LEAGUE_TEAM_NAME_TOO_LONG";
  v456 = "BD_LEAGUE_ARRAY_SIZE_MISMATCH";
  v457 = "BD_LEAGUE_SUBDIVISION_MISMATCH";
  v458 = "BD_LEAGUE_INVALID_WRITE_TYPE";
  v459 = "BD_LEAGUE_INVALID_STATS_DATA";
  v460 = "BD_LEAGUE_SUBDIVISION_UNRANKED";
  v461 = "BD_LEAGUE_CROSS_TEAM_STATS_WRITE_PREVENTED";
  v462 = "BD_LEAGUE_INVALID_STATS_SEASON";
  v463 = "BD_CONNECTION_COUNTER_ERROR";
  v464 = "BD_LINKED_ACCOUNTS_INVALID_CONTEXT";
  v465 = "BD_LINKED_ACCOUNTS_INVALID_PLATFORM";
  v466 = "BD_LINKED_ACCOUNTS_LINKED_ACCOUNTS_FETCH_ERROR";
  v467 = "BD_LINKED_ACCOUNTS_INVALID_ACCOUNT";
  v468 = "BD_LINKED_ACCOUNTS_INVALID_TOKEN";
  v469 = "BD_QUEUED_MATCHING_ERROR";
  v470 = "BD_QUEUED_MATCHING_NOT_FOUND";
  v471 = "BD_QUEUED_MATCHING_WRONG_QUEUE_TYPE";
  v472 = "BD_QUEUED_MATCHING_INVALID_QUEUE_ID";
  v473 = "BD_LOGIN_QUEUE_NO_ERROR";
  v474 = "BD_LOGIN_QUEUE_ENVIRONMENT_ERROR";
  v475 = "BD_LOGIN_QUEUE_UNKNOWN_ERROR";
  v476 = "BD_LOGIN_QUEUE_BAD_REQUEST";
  v477 = "BD_LOGIN_QUEUE_SERVER_UNAVAILABLE_ERROR";
  v478 = "BD_LOGIN_QUEUE_SSL_CERTIFICATE_ERROR";
  v479 = "BD_LOGIN_QUEUE_DNS_RESOLUTION_ERROR";
  v480 = "BD_LOGIN_QUEUE_JSON_FORMAT_ERROR";
  v481 = "BD_LOGIN_QUEUE_TICKET_PARSE_ERROR";
  v482 = "BD_LOGIN_QUEUE_INVALID_TITLE_ID";
  v483 = "BD_LOGIN_QUEUE_INTERNAL_ERROR";
  v484 = "BD_LOGIN_QUEUE_CLOSED_QUEUE";
  v485 = "BD_LOGIN_QUEUE_INVALID_QUEUE_ID";
  v486 = "BD_LOGIN_QUEUE_NOT_FOUND";
  v487 = "BD_LOGIN_QUEUE_REPLY_CONTENT_ERROR";
  v488 = "BD_LOGIN_QUEUE_TOO_MANY_REQUESTS";
  v489 = "BD_VOTING_MAX_VALUE_EXCEEDED";
  v490 = "BD_VOTING_INVALID_GROUP_NAME";
  v491 = "BD_VOTING_IN_PROGRESS";
  v492 = "BD_VOTING_NON_EXISTENT_GROUP";
  v493 = "BD_USER_GENERATED_STATS_ERROR";
  v494 = "BD_INVALID_ACCESS_TO_USER_GENERATED_LB_ERROR";
  v495 = "BD_INVALID_ACCESS_TO_NON_USER_GENERATED_LB_ERROR";
  v496 = "BD_SUB_LEADERBOARD_ID_MISMATCH_ERROR";
  v497 = "BD_PUBLISHER_VARIABLES_SERVICE_ERROR";
  v498 = "BD_PUBLISHER_VARIABLES_NOT_FOUND";
  v499 = "BD_PUBLISHER_VARIABLES_INVALID_NAMESPACE";
  v500 = "BD_PUBLISHER_VARIABLES_INVALID_GROUP_ID";
  v501 = "BD_GMSG_INVALID_CATEGORY_ID";
  v502 = "BD_GMSG_CATEGORY_MEMBERSHIPS_LIMIT";
  v503 = "BD_GMSG_NONMEMBER_POST_DISALLOWED";
  v504 = "BD_GMSG_CATEGORY_DISALLOWS_CLIENT_TYPE";
  v505 = "BD_GMSG_PAYLOAD_TOO_BIG";
  v506 = "BD_GMSG_MEMBER_POST_DISALLOWED";
  v507 = "BD_GMSG_OVERLOADED";
  v508 = "BD_GMSG_USER_PERCATEGORY_POST_RATE_EXCEEDED";
  v509 = "BD_GMSG_USER_GLOBAL_POST_RATE_EXCEEDED";
  v510 = "BD_GMSG_GROUP_POST_RATE_EXCEEDED";
  v511 = "BD_GMSG_GROUP_LIMIT_REACHED";
  v512 = "BD_GMSG_GROUP_MEMBERSHIP_LIMIT_REACHED";
  v513 = "BD_SERVER_INVENTORY_SERVER_ERROR";
  v514 = "BD_SERVER_INVENTORY_SERVER_ALLOCATED";
  v515 = "BD_SERVER_INVENTORY_ENTRY_DOES_NOT_EXIST";
  v516 = "BD_SERVER_INVENTORY_DATA_LAYER_ERROR";
  v517 = "BD_SERVER_INVENTORY_NOT_ENABLED";
  v518 = "BD_SERVER_INVENTORY_NO_SERVER_ALLOCATED";
  v519 = "BD_SERVER_INVENTORY_MAX_REGISTRATION_LENGTH_EXCEEDED";
  v520 = "BD_SERVER_INVENTORY_REGISTRATION_INVALID_CHARACTERS";
  v521 = "BD_SERVER_INVENTORY_INVALID_PARAMETER";
  v522 = "BD_CODO_CLAN_NO_TEMP_RESERVATION";
  v523 = "BD_CODO_CLAN_TOO_MANY_MEMBERSHIPS";
  v524 = "BD_CODO_CLAN_UNEXPECTED_FOUNDATION_STATE";
  v525 = "BD_CODO_CLAN_UNABLE_TO_FIND_NAME";
  v526 = "BD_CODO_CLAN_INTERNAL_MARKETPLACE_ERROR";
  v527 = "BD_CODO_CLAN_INSUFFICIENT_FUNDS";
  v528 = "BD_CODO_CLAN_UNSATISFIED_PRECONDITION";
  v529 = "BD_CODO_CLAN_NO_CLAN";
  v530 = "BD_CODO_CLAN_NO_CHANNEL";
  v531 = "BD_CODO_CLAN_NOT_A_CLAN_MEMBER";
  v532 = "BD_CODO_CLAN_DISBAND_TOO_MANY_MEMBERS";
  v533 = "BD_CODO_CLAN_DISBAND_TOO_SOON";
  v534 = "BD_NO_SUCH_ROLE";
  v535 = "BD_NO_SUCH_PERMISSION";
  v536 = "BD_BAD_ROLE_SPECIFICATION";
  v537 = "BD_BAD_PERMISSION_SPECIFICATION";
  v538 = "BD_REDEEMABLE_CODE_REGISTRY_SERVICE_GENERIC_ERROR";
  v539 = "BD_REDEEMABLE_CODE_MARKETPLACE_SERVICE_GENERIC_ERROR";
  v540 = "BAD_PAYLOAD_ERROR";
  v541 = "INVALID_PAYLOAD_SIGNATURE_ERROR";
  v542 = "GENERATE_PAYLOAD_SIGNATURE_ERROR";
  v543 = "BD_REDEEMABLE_CODE_EXPIRED_CLIENT_TRANSACTION_ID";
  v544 = "BD_REDEEMABLE_CODE_NOT_FOUND";
  v545 = "BD_REDEEMABLE_CODE_USE_LIMIT_EXCEEDED";
  v546 = "BD_REDEEMABLE_CODE_ALREADY_USED_BY_USER";
  v547 = "BD_REDEEMABLE_CODE_EXPIRED";
  v548 = "INVALID_CLIENT_TRANSACTION_ID";
  v549 = "BD_ACHIEVEMENTS_ENGINE_CLIENT_ERROR";
  v550 = "BD_ACHIEVEMENTS_ENGINE_SERVER_ERROR";
  v551 = "BD_ACHIEVEMENTS_ENGINE_INSUFFICIENT_BALANCE_ERROR";
  v552 = "BD_ACHIEVEMENTS_ENGINE_ACTIVATION_NOT_SCHEDULED_ERROR";
  v553 = "BD_ACHIEVEMENTS_ENGINE_ACTIVE_LIMIT_EXCEEDED";
  v554 = "BD_ACHIEVEMENTS_ENGINE_DUPLICATE_REQUEST_ID";
  v555 = "BD_ACHIEVEMENTS_ENGINE_MULTI_STATUS";
  v556 = "BD_MW4_BACKEND_SERVICE_NOT_AVAILABLE";
  v557 = "BD_MW4_BACKEND_RESOURCE_NOT_FOUND";
  v558 = "BD_MW4_BACKEND_BAD_REQUEST";
  v559 = "BD_CLANS_PROPOSAL_DOES_NOT_EXIST";
  v560 = "BD_CLANS_GROUP_NAME_NOT_UNIQUE";
  v561 = "BD_CLANS_MAX_GROUP_MEMBERSHIPS_REACHED";
  v562 = "BD_CLANS_MAX_GROUP_OWNERSHIPS_REACHED";
  v563 = "BD_CLANS_GROUP_DOES_NOT_EXIST";
  v564 = "BD_CLANS_GROUP_PERMISSION_DENIED";
  v565 = "BD_CLANS_VULGAR_GROUP_NAME";
  v566 = "BD_CLANS_GROUP_NAME_TOO_SHORT";
  v567 = "BD_CLANS_GROUP_ATTACHMENT_LIMIT_EXCEEDED";
  v568 = "BD_CLANS_GROUP_FULL";
  v569 = "BD_CLANS_MAX_OUTGOING_PROPOSALS_REACHED";
  v570 = "BD_CLANS_MEMBER_BAN_EXISTS";
  v571 = "BD_CLANS_GROUP_KIND_NOT_CONFIGURED";
  v572 = "BD_CLANS_INVALID_ROOT_KIND";
  v573 = "BD_CLANS_GROUP_FILE_DOES_NOT_EXIST";
  v574 = "BD_CLANS_GROUP_FILE_COLLISION_FIELD_MISMATCH";
  v575 = "BD_CLANS_BATCH_REQUEST_LIMIT_EXCEEDED";
  v576 = "BD_CLANS_INVALID_PAGE_TOKEN";
  v577 = "BD_CLANS_INVALID_GROUP_FILTER";
  v578 = "BD_CLANS_GROUP_TAG_NOT_UNIQUE";
  v579 = "BD_CLANS_GROUP_TAG_TOO_SHORT";
  v580 = "BD_CLANS_VULGAR_GROUP_TAG";
  v581 = "BD_REWARD_NO_REWARD_TOKEN_FOUND";
  v582 = "BD_REWARD_INVALID_ACHIEVEMENT_IDS_SPECIFIED";
  v583 = "BD_REWARD_CLIENT_ACHIEVEMENTS_NOT_ENABLED";
  v584 = "BD_REWARD_EVENTS_ERROR";
  v585 = "BD_REWARD_EVENTS_NOT_ENABLED";
  v586 = "BD_REWARD_EVENTS_RULES_ERROR";
  v587 = "BD_REWARD_EVENTS_DATA_ERROR";
  v588 = "BD_REWARD_EVENTS_TRANSACTION_ERROR";
  v589 = "BD_REWARD_CONFIGURATION_ERROR";
  v590 = "BD_REWARD_TOO_MANY_ACTIVE_CHALLENGES";
  v591 = "BD_REWARD_EVENTS_TRANSACTION_EXPIRED";
  v592 = "BD_REWARD_CHALLENGE_NOT_SCHEDULED";
  v593 = "BD_REWARD_CHALLENGE_ALREADY_COMPLETED";
  v594 = "BD_REWARD_CODO_TOO_MANY_REROLLS";
  v595 = "BD_REWARD_CODO_BAD_REROLL_PARAMS";
  v596 = "BD_UMBRELLA_PROVIDER_SERVER_ERROR";
  v597 = "BD_UMBRELLA_PROVIDER_UNSUPPORTED_OPERATION";
  v598 = "BD_UMBRELLA_ERROR";
  v599 = "BD_UMBRELLA_INVALID_TITLE_ID";
  v600 = "BD_UMBRELLA_INVALID_QUERY_STRING";
  v601 = "BD_UMBRELLA_INVALID_DATA";
  v602 = "BD_UMBRELLA_INVALID_CLIENT";
  v603 = "BD_UMBRELLA_PROVIDER_NOT_SUPPORTED";
  v604 = "BD_UMBRELLA_UNAUTHORIZED_ACCESS";
  v605 = "BD_UMBRELLA_INVALID_TOKEN";
  v606 = "BD_UMBRELLA_EXPIRED_PROVIDER_REFRESH_TOKEN";
  v607 = "BD_UMBRELLA_NO_VALID_PROVIDER_TOKENS";
  v608 = "BD_UMBRELLA_INVALID_LSG_TICKET";
  v609 = "BD_UMBRELLA_TOKEN_NOT_FOUND";
  v610 = "BD_UMBRELLA_USER_NOT_FOUND";
  v611 = "BD_UMBRELLA_ACCOUNT_NOT_FOUND";
  v612 = "BD_UMBRELLA_MERGE_CONFLICT";
  v613 = "BD_UMBRELLA_PROVIDER_INACCESSIBLE";
  v614 = "BD_UMBRELLA_MISSING_FIELD";
  v615 = "BD_UMBRELLA_FIELD_INVALID";
  v616 = "BD_UMBRELLA_PLAYER_BAN";
  v617 = "BD_UMBRELLA_EXPIRED_TOKEN";
  v618 = "BD_UNO_ERROR";
  v619 = "BD_UNO_INVALID_DATA";
  v620 = "BD_UNO_INVALID_DATE_OF_BIRTH";
  v621 = "BD_UNO_UNAUTHORIZED_ACCESS";
  v622 = "BD_UNO_INVALID_TOKEN";
  v623 = "BD_UNO_EXPIRED_TOKEN";
  v624 = "BD_UNO_EMAIL_NOT_VERIFIED";
  v625 = "BD_UNO_TOS_VERSION_NOT_FOUND";
  v626 = "BD_UNO_TOS_CONTENT_NOT_FOUND";
  v627 = "BD_UNO_TOS_ALREADY_ACCEPTED";
  v628 = "BD_UNO_MISSING_FIELD";
  v629 = "BD_UNO_DNS_RESOLUTION_FAILED";
  v630 = "BD_UNO_FIELD_INVALID";
  v631 = "BD_UNO_INVALID_USERNAME";
  v632 = "BD_UNO_INVALID_PASSWORD";
  v633 = "BD_UNO_EMAIL_ALREADY_EXISTS";
  v634 = "BD_UNO_DESERIALIZATION_FAILURE";
  v635 = "BD_UMBRELLA_DESERIALIZATION_FAILURE";
  v636 = "BD_UNO_NO_RENAME_TOKENS";
  v637 = "BD_UNO_MARKETPLACE_ERROR";
  v638 = "BD_SI_ERROR";
  v639 = "BD_MATCH_SCHEDULER_ERROR";
  v640 = "BD_MATCH_SCHEDULER_SCHEDULED_MATCH_DOES_NOT_EXIST";
  v641 = "BD_MATCH_SCHEDULER_MAXIMUM_EVENTS_PER_MATCH_REACHED";
  v642 = "BD_MLG_ERROR";
  v643 = "BD_MLG_REMOTE_ERROR";
  v644 = "BD_CODO_AUTO_JOIN_LEVEL_NOT_MET";
  v645 = "BD_CODO_NOT_PERMITTED_TO_UPDATE_PROFILE_FIELD";
  v646 = "BD_CODO_INVALID_PROFILE_VALUE";
  v647 = "BD_CODO_PROFILE_COLUMN_DOES_NOT_EXIST";
  v648 = "BD_CODO_LOUDSPEAKER_INVALID_TOKEN";
  v649 = "BD_CODO_LOUDSPEAKER_INVALID_CATEGORY";
  v650 = "BD_CODO_RESETTABLE_STATS_NOT_CONFIGURED";
  v651 = "BD_CODO_REDEEM_INCREASE_TEAM_MEMBER_LIMIT_INVALID_ITEM";
  v652 = "BD_CODO_REDEEM_INCREASE_TEAM_MEMBER_LIMIT_INTERNAL_ERROR";
  v653 = "BD_CODO_REDEEM_INCREASE_TEAM_MEMBER_LIMIT_UNAVAILABLE_ITEM";
  v654 = "BD_PLAYER_VOTE_REJECTED";
  v655 = "BD_AMM_NOT_LOBBY_HOST";
  v656 = "BD_AMM_NOT_PARTY_HOST";
  v657 = "BD_AMM_NOT_LOBBY_MEMBER";
  v658 = "BD_AMM_INVALID_MATCHMAKING_ID";
  v659 = "BD_AMM_INVALID_LOBBY_ID";
  v660 = "BD_AMM_SEARCH_IN_PROGRESS";
  v661 = "BD_AMM_USER_ALREADY_MATCHMAKING";
  v662 = "BD_AMM_INVALID_TOKEN";
  v663 = "BD_AMM_INVALID_DOCUMENT_FORMAT";
  v664 = "BD_AMM_PLAYER_INFO_UNAVAILABLE";
  v665 = "BD_AMM_REQUEST_DESERIALIZATION_FAILED";
  v666 = "BD_AMM_INVALID_QOS_TRANSACTION_ID";
  v667 = "BD_AMM_INVALID_USER_ID_IN_GUEST_SLOTS";
  v668 = "BD_AMM_NO_BUILD_NAME_SET";
  v669 = "BD_AMM_LOBBY_MERGED";
  v670 = "BD_AMM_BACKOFF_REQUESTED";
  v671 = "BD_AMM_PLAYER_INFO_INCOMPATIBLE_BUILDS";
  v672 = "BD_AMM_INVALID_DC_QOS_ADDRESS";
  v673 = "BD_AMM_INVALID_PLAYER_INFO_DC_QOS_SETTINGS";
  v674 = "BD_AMM_INVALID_PLAYER_INFO_LISTEN_SERVER_SETTINGS";
  v675 = "BD_AMM_MIGRATION_NOT_PERMITTED";
  v676 = "BD_AMM_INVALID_LOBBY_MEMBER_STATUS_TRANSITION";
  v677 = "BD_AMM_LOBBY_MEMBER_STATUS_REPORTED_FOR_UNKNOWN_PLAYER";
  v678 = "BD_AMM_DEDI_SHUTDOWN_NOT_PERMITTED";
  v679 = "BD_AMM_INVALID_USER_ID_IN_PLAYER_RULESET_PAYLOADS";
  v680 = "BD_AMM_INVALID_MAP_PACK";
  v681 = "BD_AMM_TOURNAMENT_PLAYER_NOT_IN_TOURNAMENT";
  v682 = "BD_AMM_TOURNAMENT_DUPLICATE_ACK_JOIN";
  v683 = "BD_AMM_TOURNAMENT_INVALID_TOURNAMENT_STATUS";
  v684 = "BD_AMM_TOURNAMENT_INVALID_TOURNAMENT_ID";
  v685 = "BD_AMM_TOURNAMENT_LOBBY_NOT_IN_ROUND";
  v686 = "BD_AMM_TOURNAMENT_TEAM_NOT_IN_MATCH";
  v687 = "BD_AMM_TOURNAMENT_PLAYER_NOT_IN_ROUND";
  v688 = "BD_AMM_TOURNAMENT_INVALID_LOBBY_DOC";
  v689 = "BD_AMM_TOURNAMENT_ELIMINATED_PLAYER";
  v690 = "BD_AMM_TOURNAMENT_LOBBY_ID_NOT_IN_TOURNAMENT";
  v691 = "BD_AMM_TOURNAMENT_MATCH_ALREADY_HAS_RESULT";
  v692 = "BD_AMM_TOURNAMENT_MATCH_IN_PROGRESS";
  v693 = "BD_AMM_TOURNAMENT_FULL";
  v694 = "BD_CROSS_PLATFORM_FRIENDS_UNKNOWN_ERROR";
  v695 = "BD_CROSS_PLATFORM_FRIENDS_SELF_FRIENDSHIP_NOT_ALLOWED";
  v696 = "BD_CROSS_PLATFORM_FRIENDS_CALLER_FRIENDS_LIST_FULL";
  v697 = "BD_CROSS_PLATFORM_FRIENDS_OTHER_PLAYER_FRIENDS_LIST_FULL";
  v698 = "BD_CROSS_PLATFORM_FRIENDS_CALLER_OUTGOING_FRIEND_REQUESTS_FULL";
  v699 = "BD_CROSS_PLATFORM_FRIENDS_OTHER_PLAYER_INCOMING_FRIEND_REQUESTS_FULL";
  v700 = "BD_CROSS_PLATFORM_FRIENDS_INVALID_PAGE_TOKEN";
  v701 = "BD_CROSS_PLATFORM_FRIENDS_FRIENDSHIP_ALREADY_EXISTS";
  v702 = "BD_CROSS_PLATFORM_FRIENDS_INVITE_ALREADY_EXISTS";
  v703 = "BD_CROSS_PLATFORM_FRIENDS_BACKEND_UNAVAILABLE_ERROR";
  v704 = "BD_CROSS_PLATFORM_FRIENDS_INVITED_USER_IS_BLOCKED";
  v705 = "BD_CROSS_PLATFORM_FRIENDS_CALLER_IS_BLOCKED";
  v706 = "BD_CROSS_PLATFORM_FRIENDS_BLOCKED_USER_LIST_FULL";
  v707 = "BD_CROSS_PLATFORM_FRIENDS_USER_IS_ALREADY_BLOCKED";
  v708 = "BD_CROSS_PLATFORM_USERLISTS_UNKNOWN_ERROR";
  v709 = "BD_CROSS_PLATFORM_USERLISTS_LIST_DOES_NOT_EXIST";
  v710 = "BD_CROSS_PLATFORM_USERLISTS_LIST_ALREADY_EXISTS";
  v711 = "BD_CROSS_PLATFORM_USERLISTS_INVALID_PAGE_TOKEN";
  v712 = "BD_CROSS_PLATFORM_PRESENCE_UNKNOWN_ERROR";
  v713 = "BD_CROSS_PLATFORM_PRESENCE_INVALID_PAGE_TOKEN";
  v714 = "BD_CROSS_PLATFORM_PRESENCE_SUBSCRIPTIONS_LIST_FULL";
  v715 = "BD_CROSS_PLATFORM_PRESENCE_SUBSCRIBERS_LIST_FULL";
  v716 = "BD_CROSS_PLATFORM_PRESENCE_INVALID_MAXIMUM_PAGE_SIZE";
  v717 = "BD_CROSS_PLATFORM_PRESENCE_EXCEEDED_MAX_USERS_IN_REQUEST";
  v718 = "BD_CROSS_TITLE_LOCALIZED_STRINGS_UNKNOWN_ERROR";
  v719 = "BD_CROSS_TITLE_LOCALIZED_STRINGS_STRING_SET_DOES_NOT_EXIST_ERROR";
  v720 = "BD_CROSS_TITLE_LOCALIZED_STRINGS_INVALID_FORMAT_STRING_ERROR";
  v721 = "BD_CROSS_TITLE_LOCALIZED_STRINGS_INVALID_STRING_REF_ERROR";
  v722 = "BD_CROSS_TITLE_LOCALIZED_STRINGS_NOT_ENOUGH_STRING_REFS_ERROR";
  v723 = "BD_OBJECTSTORE_PROXY_OBJECT_NOT_FOUND";
  v724 = "BD_OBJECTSTORE_PROXY_INVALID_ACCESS";
  v725 = "BD_OBJECTSTORE_PROXY_SERVICE_UNAVAILABLE";
  v726 = "BD_OBJECTSTORE_PROXY_OBJECT_TOO_BIG_FOR_REMAINING_SIZE_WINDOW_SPACE_ERROR";
  v727 = "BD_OBJECTSTORE_PROXY_OBJECT_TOO_BIG_FOR_SIZE_WINDOW_ERROR";
  v728 = "BD_OBJECTSTORE_HTTP_ERROR";
  v729 = "BD_OBJECTSTORE_FAILED_TO_START_HTTP";
  v730 = "BD_AB_TESTING_OBJECT_NOT_FOUND";
  v731 = "BD_AB_TESTING_INVALID_ACCESS";
  v732 = "BD_AB_TESTING_SERVICE_UNAVAILABLE";
  v733 = "BD_REST_ERROR_TEMPORARY_REDIRECT";
  v734 = "BD_REST_ERROR_PERMANENT_REDIRECT";
  v735 = "BD_REST_ERROR_NOT_MODIFIED";
  v6 = "Unknown bdLobbyErrorCode";
  v7 = 0;
  v736 = "BD_REST_ERROR_BAD_REQUEST";
  v737 = "BD_REST_ERROR_UNAUTHORIZED";
  v738 = "BD_REST_ERROR_FORBIDDEN";
  v739 = "BD_REST_ERROR_NOT_FOUND";
  v740 = "BD_REST_ERROR_METHOD_NOT_ALLOWED";
  v741 = "BD_REST_ERROR_NOT_ACCEPTABLE";
  v742 = "BD_REST_ERROR_REQUEST_TIMEOUT";
  v743 = "BD_REST_ERROR_CONFLICT";
  v744 = "BD_REST_ERROR_PRECONDITION_FAILED";
  v745 = "BD_REST_ERROR_PAYLOAD_TOO_LARGE";
  v746 = "BD_REST_ERROR_REQUEST_URI_TOO_LONG";
  v747 = "BD_REST_ERROR_REQUESTED_RANGE_NOT_SATISFIABLE";
  v748 = "BD_REST_ERROR_INTERNAL_SERVER_ERROR";
  v749 = "BD_REST_ERROR_BAD_GATEWAY";
  v750 = "BD_REST_ERROR_SERVICE_UNAVAILABLE";
  v751 = "BD_REST_ERROR_GATEWAY_TIMEOUT";
  v752 = "BD_REST_ERROR_REQUEST_CANCELLED";
  v753 = "BD_LOGIN_UNKOWN_ERROR";
  v754 = "BD_MAX_ERROR_CODE";
  v8 = 0i64;
  do
  {
    if ( (unsigned int)v8 >= 0x2E9 )
      break;
    if ( v755[v8] == code )
    {
      v6 = (&v10)[v8];
      v7 = 1;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  while ( !v7 );
  bdHandleAssert(v6 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66);
  v9 = -1i64;
  do
    ++v9;
  while ( v6[v9] );
  if ( v3 && buffer )
  {
    if ( v9 >= v3 - 1 )
      v9 = v3 - 1;
    memcpy_0(buffer, v6, v9);
    buffer[v9] = 0;
  }
}

/*
==============
dwLobbyServiceCleanup
==============
*/
void dwLobbyServiceCleanup(const int controllerIndex)
{
  __int64 v1; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v4; 
  DWLobbyService *DWLobbyService; 

  v1 = controllerIndex;
  if ( !Live_UserIsGuest(controllerIndex) )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, v1);
    DWLogin::cleanup(Login);
    v4 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v4, v1);
    DWLobbyService::cleanup(DWLobbyService);
    dwLogonHSM_xb3::LobbyServiceCleanup(&g_dwLogonHSMs[v1]);
  }
}

/*
==============
dwSetPlayerBannedType
==============
*/
void dwSetPlayerBannedType(const int controllerIndex, const BanType banType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils.cpp", 605, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( g_playerBanned ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( g_playerBanned )\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  g_playerBanned[v2] = banType;
}

/*
==============
dwStopAllDemonWareReconnects
==============
*/
void dwStopAllDemonWareReconnects(void)
{
  int i; 

  g_disableLSGReconnect = 1;
  for ( i = 0; i < 8; ++i )
    Live_DemonwareDisconnectCleanup(i);
}

/*
==============
dwStopAllReconnectsMultipleLogons
==============
*/
void dwStopAllReconnectsMultipleLogons(MultipleLoginType type)
{
  g_disableReconnectMultipleLogons = 1;
}

/*
==============
dwTaskStatusConvert
==============
*/
__int64 dwTaskStatusConvert(const bdTask::bdStatus taskStatus, const bdLobbyErrorCode lobbyError)
{
  __int64 result; 

  result = 2i64;
  if ( taskStatus == BD_DONE )
  {
    if ( lobbyError == BD_NO_ERROR )
      return 1i64;
  }
  else if ( taskStatus == BD_PENDING )
  {
    return 0i64;
  }
  return result;
}

