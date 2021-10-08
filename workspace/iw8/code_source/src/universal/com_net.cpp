/*
==============
NET_InAddrIsValid
==============
*/

int __fastcall NET_InAddrIsValid(const unsigned int *addr)
{
  return ?NET_InAddrIsValid@@YAHPEBI@Z(addr);
}

/*
==============
ComNetListener::IsLocalAddressUpdating
==============
*/

bool __fastcall ComNetListener::IsLocalAddressUpdating(ComNetListener *this)
{
  return ?IsLocalAddressUpdating@ComNetListener@@UEBA_NXZ(this);
}

/*
==============
ComNetListener::NetworkStarted
==============
*/

void __fastcall ComNetListener::NetworkStarted(ComNetListener *this, bool success, NetMode mode)
{
  ?NetworkStarted@ComNetListener@@UEAAX_NW4NetMode@@@Z(this, success, mode);
}

/*
==============
NET_OpenIP
==============
*/

void NET_OpenIP(void)
{
  ?NET_OpenIP@@YAXXZ();
}

/*
==============
NET_InAddrIsBroadcast
==============
*/

int __fastcall NET_InAddrIsBroadcast(const unsigned int *addr)
{
  return ?NET_InAddrIsBroadcast@@YAHPEBI@Z(addr);
}

/*
==============
Sys_StringToSockaddr
==============
*/

int __fastcall Sys_StringToSockaddr(const char *s, sockaddr *sadr)
{
  return ?Sys_StringToSockaddr@@YAHPEBDPEAUsockaddr@@@Z(s, sadr);
}

/*
==============
Sys_GetPacket
==============
*/

int __fastcall Sys_GetPacket(netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return ?Sys_GetPacket@@YAHPEAUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(net_from, net_message, net_info);
}

/*
==============
Sys_GetLoopbackPacket
==============
*/

int __fastcall Sys_GetLoopbackPacket(const netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  return ?Sys_GetLoopbackPacket@@YAHW4netsrc_t@@PEAUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(sock, net_from, net_message, net_info);
}

/*
==============
NET_Init
==============
*/

void NET_Init(void)
{
  ?NET_Init@@YAXXZ();
}

/*
==============
NET_IpAddrToInAddr
==============
*/

void __fastcall NET_IpAddrToInAddr(const unsigned __int8 *ipaddr, unsigned int *inaddr)
{
  ?NET_IpAddrToInAddr@@YAXQEBEPEAI@Z(ipaddr, inaddr);
}

/*
==============
NET_IsBotAddr
==============
*/

bool __fastcall NET_IsBotAddr(const netadr_t *addr)
{
  return ?NET_IsBotAddr@@YA_NAEBUnetadr_t@@@Z(addr);
}

/*
==============
Sys_StringToAdr
==============
*/

int __fastcall Sys_StringToAdr(const char *s, netadr_t *a)
{
  return ?Sys_StringToAdr@@YAHPEBDPEAUnetadr_t@@@Z(s, a);
}

/*
==============
Sys_AddCheckSum
==============
*/

void __fastcall Sys_AddCheckSum(unsigned __int8 *buffer, int *length, unsigned __int16 sum)
{
  ?Sys_AddCheckSum@@YAXPEAEAEAHG@Z(buffer, length, sum);
}

/*
==============
Sys_AddSplitscreenNetID
==============
*/

void __fastcall Sys_AddSplitscreenNetID(netsrc_t sock, netadr_t *to, unsigned __int8 *buffer, int *length)
{
  ?Sys_AddSplitscreenNetID@@YAXW4netsrc_t@@Unetadr_t@@PEAEAEAH@Z(sock, to, buffer, length);
}

/*
==============
NET_CompareInAddrs
==============
*/

int __fastcall NET_CompareInAddrs(const unsigned int *addr1, const unsigned int *addr2)
{
  return ?NET_CompareInAddrs@@YAHPEBI0@Z(addr1, addr2);
}

/*
==============
ComNetListener::IsPartyXnaddrUpdating
==============
*/

bool __fastcall ComNetListener::IsPartyXnaddrUpdating(ComNetListener *this, const PartyData *party)
{
  return ?IsPartyXnaddrUpdating@ComNetListener@@AEBA_NPEBUPartyData@@@Z(this, party);
}

/*
==============
NET_InAddrPrint
==============
*/

void __fastcall NET_InAddrPrint(const unsigned int *addr)
{
  ?NET_InAddrPrint@@YAXPEBI@Z(addr);
}

/*
==============
NET_InAddrSetLoopback
==============
*/

void __fastcall NET_InAddrSetLoopback(unsigned int *addr)
{
  ?NET_InAddrSetLoopback@@YAXPEAI@Z(addr);
}

/*
==============
NetadrToSockadrIn
==============
*/

void __fastcall NetadrToSockadrIn(const netadr_t *a, sockaddr_in *s)
{
  ?NetadrToSockadrIn@@YAXPEBUnetadr_t@@PEAUsockaddr_in@@@Z(a, s);
}

/*
==============
NET_InAddrSetBroadcast
==============
*/

void __fastcall NET_InAddrSetBroadcast(unsigned int *addr)
{
  ?NET_InAddrSetBroadcast@@YAXPEAI@Z(addr);
}

/*
==============
Int64ToString
==============
*/

void __fastcall Int64ToString(__int64 int64, char *str)
{
  ?Int64ToString@@YAX_JPEAD@Z(int64, str);
}

/*
==============
NetadrToSockadr
==============
*/

void __fastcall NetadrToSockadr(const netadr_t *a, sockaddr *s)
{
  ?NetadrToSockadr@@YAXPEBUnetadr_t@@PEAUsockaddr@@@Z(a, s);
}

/*
==============
StringToInt64
==============
*/

__int64 __fastcall StringToInt64(const char *str)
{
  return ?StringToInt64@@YA_JPEBD@Z(str);
}

/*
==============
Sys_SendPacket
==============
*/

int __fastcall Sys_SendPacket(netsrc_t sock, int length, const void *data, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  return ?Sys_SendPacket@@YAHW4netsrc_t@@HPEBXAEBUnetadr_t@@IPEAUNetPingInfo@@@Z(sock, length, data, to, flags, info);
}

/*
==============
NET_CloseIP
==============
*/

void NET_CloseIP(void)
{
  ?NET_CloseIP@@YAXXZ();
}

/*
==============
SockadrToNetadr
==============
*/

void __fastcall SockadrToNetadr(const sockaddr *s, netadr_t *a)
{
  ?SockadrToNetadr@@YAXPEBUsockaddr@@PEAUnetadr_t@@@Z(s, a);
}

/*
==============
NET_RegisterDvars
==============
*/

void NET_RegisterDvars(void)
{
  ?NET_RegisterDvars@@YAXXZ();
}

/*
==============
NET_CompareIpAddrs
==============
*/

int __fastcall NET_CompareIpAddrs(const unsigned __int8 *addr1, const unsigned __int8 *addr2)
{
  return ?NET_CompareIpAddrs@@YAHQEBE0@Z(addr1, addr2);
}

/*
==============
NET_ErrorString
==============
*/

char *__fastcall NET_ErrorString()
{
  return ?NET_ErrorString@@YAPEADXZ();
}

/*
==============
Sys_VerifyCheckSum
==============
*/

bool __fastcall Sys_VerifyCheckSum(unsigned __int8 *data, int *dataLength)
{
  return ?Sys_VerifyCheckSum@@YA_NPEAEAEAH@Z(data, dataLength);
}

/*
==============
NET_InAddrToString
==============
*/

void __fastcall NET_InAddrToString(const unsigned int *addr, char *buf)
{
  ?NET_InAddrToString@@YAXPEBIQEAD@Z(addr, buf);
}

/*
==============
NET_InAddrIsLoopback
==============
*/

int __fastcall NET_InAddrIsLoopback(const unsigned int *addr)
{
  return ?NET_InAddrIsLoopback@@YAHPEBI@Z(addr);
}

/*
==============
StringToInt128
==============
*/

void __fastcall StringToInt128(const char *str, unsigned __int8 *data)
{
  ?StringToInt128@@YAXPEBDPEAE@Z(str, data);
}

/*
==============
Sys_ParseSplitscreenPacketForNetID
==============
*/

bool __fastcall Sys_ParseSplitscreenPacketForNetID(netadr_t *net_from, msg_t *net_message, int net_msg_length)
{
  return ?Sys_ParseSplitscreenPacketForNetID@@YA_NPEAUnetadr_t@@PEAUmsg_t@@H@Z(net_from, net_message, net_msg_length);
}

/*
==============
Sys_ChecksumCopy
==============
*/

unsigned __int16 __fastcall Sys_ChecksumCopy(unsigned __int8 *dest, unsigned __int8 *src, int len)
{
  return ?Sys_ChecksumCopy@@YAGPEAE0H@Z(dest, src, len);
}

/*
==============
Int128ToString
==============
*/

void __fastcall Int128ToString(const unsigned __int8 *data, char *str)
{
  ?Int128ToString@@YAXPEBEPEAD@Z(data, str);
}

/*
==============
Sys_Checksum
==============
*/

unsigned __int16 __fastcall Sys_Checksum(unsigned __int8 *src, int len)
{
  return ?Sys_Checksum@@YAGPEAEH@Z(src, len);
}

/*
==============
ComNetListener::LocalAddressUpdated
==============
*/

bool __fastcall ComNetListener::LocalAddressUpdated(ComNetListener *this, const XNADDR *oldXnaddr, const XNADDR *newXnaddr)
{
  return ?LocalAddressUpdated@ComNetListener@@UEAA_NAEBUXNADDR@@0@Z(this, oldXnaddr, newXnaddr);
}

/*
==============
NET_NetworkOrderAddr
==============
*/

unsigned int __fastcall NET_NetworkOrderAddr(const netadr_t *a)
{
  return ?NET_NetworkOrderAddr@@YAIPEBUnetadr_t@@@Z(a);
}

/*
==============
Sys_ResolveHostname
==============
*/

int __fastcall Sys_ResolveHostname(const char *s, addrinfo **results)
{
  return ?Sys_ResolveHostname@@YAHPEBDPEAPEAUaddrinfo@@@Z(s, results);
}

/*
==============
NET_InAddrToIpAddr
==============
*/

void __fastcall NET_InAddrToIpAddr(const unsigned int *inaddr, unsigned __int8 *ipaddr)
{
  ?NET_InAddrToIpAddr@@YAXPEBIQEAE@Z(inaddr, ipaddr);
}

/*
==============
ComNetListener::UpdatePartyXnaddr
==============
*/

bool __fastcall ComNetListener::UpdatePartyXnaddr(ComNetListener *this, PartyData *party, const XNADDR *xnaddr)
{
  return ?UpdatePartyXnaddr@ComNetListener@@AEAA_NPEAUPartyData@@AEBUXNADDR@@@Z(this, party, xnaddr);
}

/*
==============
ComNetListener::NetworkStarted
==============
*/
void ComNetListener::NetworkStarted(ComNetListener *this, bool success, NetMode mode)
{
  ;
}

/*
==============
ComNetListener::LocalAddressUpdated
==============
*/
_BOOL8 ComNetListener::LocalAddressUpdated(ComNetListener *this, const XNADDR *oldXnaddr, const XNADDR *newXnaddr)
{
  bool updated; 
  XNADDR *Address; 
  PartyData *PartyData; 

  if ( !g_partyData.inParty || !Party_AreWeHost(&g_partyData) )
    goto LABEL_6;
  if ( !net_local_addr_update_enabled->current.enabled )
  {
    Address = XSESSION_INFO::GetAddress(&g_partyData.session->dyn.sessionInfo);
    XNADDR::operator=(Address, newXnaddr);
LABEL_6:
    updated = 0;
    goto LABEL_7;
  }
  updated = PartyHost_UpdateXnaddr(&g_partyData, newXnaddr);
LABEL_7:
  PartyData = Lobby_GetPartyData();
  if ( ComNetListener::UpdatePartyXnaddr(this, PartyData, newXnaddr) || updated )
    updated = 1;
  if ( OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) )
    OnlineMatchmakerOmniscient::UpdateLocalPlayerXnaddr(&OnlineMatchmakerOmniscient::ms_instance, newXnaddr);
  return updated;
}

/*
==============
ComNetListener::IsLocalAddressUpdating
==============
*/
bool ComNetListener::IsLocalAddressUpdating(ComNetListener *this)
{
  PartyData *PartyData; 
  const PartyData *v2; 
  bool result; 

  result = 1;
  if ( !g_partyData.inParty || !Party_AreWeHost(&g_partyData) || !PartyHost_IsXnaddrUpdating(&g_partyData) )
  {
    PartyData = Lobby_GetPartyData();
    v2 = PartyData;
    if ( !PartyData->inParty || !Party_AreWeHost(PartyData) || !PartyHost_IsXnaddrUpdating(v2) )
      return 0;
  }
  return result;
}

/*
==============
Int128ToString
==============
*/
void Int128ToString(const unsigned __int8 *data, char *str)
{
  char *fmt; 
  __int64 v5; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 216, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 217, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  LODWORD(v5) = *((_DWORD *)data + 2);
  LODWORD(fmt) = *((_DWORD *)data + 1);
  Com_sprintf(str, 0x21ui64, "%08x%08x%08x%08x", *(unsigned int *)data, fmt, v5, *((_DWORD *)data + 3));
}

/*
==============
Int64ToString
==============
*/
void Int64ToString(__int64 int64, char *str)
{
  unsigned int v3; 
  char *fmt; 
  int v5; 

  v5 = HIDWORD(int64);
  v3 = int64;
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 206, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  LODWORD(fmt) = v5;
  Com_sprintf(str, 0x11ui64, "%08x%08x", v3, fmt);
}

/*
==============
ComNetListener::IsPartyXnaddrUpdating
==============
*/
bool ComNetListener::IsPartyXnaddrUpdating(ComNetListener *this, const PartyData *party)
{
  return party->inParty && Party_AreWeHost(party) && PartyHost_IsXnaddrUpdating(party);
}

/*
==============
NET_CloseIP
==============
*/
void NET_CloseIP(void)
{
  if ( s_lan_socket != -1i64 )
  {
    Sys_CloseSocket(s_lan_socket);
    s_lan_socket = -1i64;
  }
}

/*
==============
NET_CompareInAddrs
==============
*/
_BOOL8 NET_CompareInAddrs(const unsigned int *addr1, const unsigned int *addr2)
{
  if ( !addr1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 340, ASSERT_TYPE_ASSERT, "(addr1 != 0)", (const char *)&queryFormat, "addr1 != NULL") )
    __debugbreak();
  if ( !addr2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 341, ASSERT_TYPE_ASSERT, "(addr2 != 0)", (const char *)&queryFormat, "addr2 != NULL") )
    __debugbreak();
  return *addr1 == *addr2;
}

/*
==============
NET_CompareIpAddrs
==============
*/

int __fastcall NET_CompareIpAddrs(const unsigned __int8 *addr1, const unsigned __int8 *addr2)
{
  return NET_CompareInAddrs((const unsigned int *)addr1, (const unsigned int *)addr2);
}

/*
==============
NET_ErrorString
==============
*/
char *NET_ErrorString()
{
  int Error; 
  char *result; 

  Error = WSAGetLastError();
  if ( Error > 11001 )
  {
    switch ( Error )
    {
      case 11002:
        return "WSATRY_AGAIN";
      case 11003:
        return "WSANO_RECOVERY";
      case 11004:
        return "WSANO_DATA";
      default:
        return "UNKNOWN ERROR";
    }
  }
  else if ( Error == 11001 )
  {
    return "WSAHOST_NOT_FOUND";
  }
  else
  {
    switch ( Error )
    {
      case 10004:
        result = "WSAEINTR";
        break;
      case 10009:
        result = "WSAEBADF";
        break;
      case 10013:
        result = "WSAEACCES";
        break;
      case 10014:
        result = "WSAEFAULT";
        break;
      case 10022:
        result = "WSAEINVAL";
        break;
      case 10024:
        result = "WSAEMFILE";
        break;
      case 10035:
        result = "WSAEWOULDBLOCK";
        break;
      case 10036:
        result = "WSAEINPROGRESS";
        break;
      case 10037:
        result = "WSAEALREADY";
        break;
      case 10038:
        result = "WSAENOTSOCK";
        break;
      case 10039:
        result = "WSAEDESTADDRREQ";
        break;
      case 10040:
        result = "WSAEMSGSIZE";
        break;
      case 10041:
        result = "WSAEPROTOTYPE";
        break;
      case 10042:
        result = "WSAENOPROTOOPT";
        break;
      case 10043:
        result = "WSAEPROTONOSUPPORT";
        break;
      case 10044:
        result = "WSAESOCKTNOSUPPORT";
        break;
      case 10045:
        result = "WSAEOPNOTSUPP";
        break;
      case 10046:
        result = "WSAEPFNOSUPPORT";
        break;
      case 10047:
        result = "WSAEAFNOSUPPORT";
        break;
      case 10048:
        result = "WSAEADDRINUSE";
        break;
      case 10049:
        result = "WSAEADDRNOTAVAIL";
        break;
      case 10050:
        result = "WSAENETDOWN";
        break;
      case 10051:
        result = "WSAENETUNREACH";
        break;
      case 10052:
        result = "WSAENETRESET";
        break;
      case 10053:
        result = "WSWSAECONNABORTEDAEINTR";
        break;
      case 10054:
        result = "WSAECONNRESET";
        break;
      case 10055:
        result = "WSAENOBUFS";
        break;
      case 10056:
        result = "WSAEISCONN";
        break;
      case 10057:
        result = "WSAENOTCONN";
        break;
      case 10058:
        result = "WSAESHUTDOWN";
        break;
      case 10059:
        result = "WSAETOOMANYREFS";
        break;
      case 10060:
        result = "WSAETIMEDOUT";
        break;
      case 10061:
        result = "WSAECONNREFUSED";
        break;
      case 10062:
        result = "WSAELOOP";
        break;
      case 10063:
        result = "WSAENAMETOOLONG";
        break;
      case 10064:
        result = "WSAEHOSTDOWN";
        break;
      case 10065:
        result = "WSAEHOSTUNREACHABLE";
        break;
      case 10091:
        result = "WSASYSNOTREADY";
        break;
      case 10092:
        result = "WSAVERNOTSUPPORTED";
        break;
      case 10093:
        result = "WSANOTINITIALISED";
        break;
      case 10101:
        result = "WSAEDISCON";
        break;
      default:
        return "UNKNOWN ERROR";
    }
  }
  return result;
}

/*
==============
NET_FenceDependenciesUpdated
==============
*/
void NET_FenceDependenciesUpdated(const int controllerIndex, const bool value)
{
  NetConfig config; 

  if ( !Live_IsDevmapping() && FenceManager_AreDependenciesMetForAllControllers(FENCE_NETWORKING) && !NET_IsStarted() && !NET_IsStarting() )
  {
    config = (NetConfig)2i64;
    config.sendSignalForced = net_thread_send_signal_force->current.enabled;
    NET_Start(&config, &s_netListener);
  }
}

/*
==============
NET_InAddrIsBroadcast
==============
*/
_BOOL8 NET_InAddrIsBroadcast(const unsigned int *addr)
{
  if ( !addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 297, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 340, ASSERT_TYPE_ASSERT, "(addr1 != 0)", (const char *)&queryFormat, "addr1 != NULL") )
      __debugbreak();
  }
  return *addr == *(_DWORD *)g_ipadrBroadcast;
}

/*
==============
NET_InAddrIsLoopback
==============
*/
_BOOL8 NET_InAddrIsLoopback(const unsigned int *addr)
{
  if ( !addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 289, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 340, ASSERT_TYPE_ASSERT, "(addr1 != 0)", (const char *)&queryFormat, "addr1 != NULL") )
      __debugbreak();
  }
  return *addr == *(_DWORD *)g_ipadrLoopback;
}

/*
==============
NET_InAddrIsValid
==============
*/
_BOOL8 NET_InAddrIsValid(const unsigned int *addr)
{
  return addr && *addr != *(_DWORD *)g_ipadrNone;
}

/*
==============
NET_InAddrPrint
==============
*/
void NET_InAddrPrint(const unsigned int *addr)
{
  char *fmt; 
  __int64 v3; 
  char dest[16]; 

  if ( !addr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 275, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 258, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
      __debugbreak();
  }
  LODWORD(v3) = *((unsigned __int8 *)addr + 2);
  LODWORD(fmt) = *((unsigned __int8 *)addr + 1);
  Com_sprintf(dest, 0x10ui64, "%u.%u.%u.%u", *(unsigned __int8 *)addr, fmt, v3, *((unsigned __int8 *)addr + 3));
  Com_Printf(16, "IP Address: %s\n", dest);
}

/*
==============
NET_InAddrSetBroadcast
==============
*/
void NET_InAddrSetBroadcast(unsigned int *addr)
{
  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 319, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
    __debugbreak();
  *addr = *(_DWORD *)g_ipadrBroadcast;
}

/*
==============
NET_InAddrSetLoopback
==============
*/
void NET_InAddrSetLoopback(unsigned int *addr)
{
  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 312, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
    __debugbreak();
  *addr = *(_DWORD *)g_ipadrLoopback;
}

/*
==============
NET_InAddrToIpAddr
==============
*/
void NET_InAddrToIpAddr(const unsigned int *inaddr, unsigned __int8 *ipaddr)
{
  if ( !inaddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 326, ASSERT_TYPE_ASSERT, "(inaddr != 0)", (const char *)&queryFormat, "inaddr != NULL") )
    __debugbreak();
  *(_DWORD *)ipaddr = *inaddr;
}

/*
==============
NET_InAddrToString
==============
*/
void NET_InAddrToString(const unsigned int *addr, char *buf)
{
  char *fmt; 
  __int64 v5; 

  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 258, ASSERT_TYPE_ASSERT, "(addr != 0)", (const char *)&queryFormat, "addr != NULL") )
    __debugbreak();
  LODWORD(v5) = *((unsigned __int8 *)addr + 2);
  LODWORD(fmt) = *((unsigned __int8 *)addr + 1);
  Com_sprintf(buf, 0x10ui64, "%u.%u.%u.%u", *(unsigned __int8 *)addr, fmt, v5, *((unsigned __int8 *)addr + 3));
}

/*
==============
NET_Init
==============
*/
void NET_Init(void)
{
  PublisherVariableManager *Instance; 
  int v1; 

  NET_RegisterDvars();
  if ( net_logging_verbose->current.enabled )
  {
    Con_FilterChannel(CON_DEST_CONSOLE, 25, CON_FILTER_VERBOSE);
    Con_FilterChannel(CON_DEST_FILE, 25, CON_FILTER_VERBOSE);
  }
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, NET_PublisherVariablesFetched);
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_NETWORKING, (void (__fastcall *)(int, bool))NET_FenceDependenciesUpdated);
  NET_Reset();
  NET_InitPlatform();
  if ( s_lan_socket != -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 928, ASSERT_TYPE_ASSERT, "(s_lan_socket == (SOCKET)(~0))", (const char *)&queryFormat, "s_lan_socket == INVALID_SOCKET") )
    __debugbreak();
  v1 = 0;
  while ( 1 )
  {
    s_lan_socket = NET_IPSocket(net_ip->current.string, v1 + 26016);
    if ( s_lan_socket != -1i64 )
      break;
    if ( ++v1 >= 10 )
    {
      Com_PrintError(25, "WARNING: Couldn't allocate IP/UDP port, LAN discovery will not work!\n");
      break;
    }
  }
  NET_GetLocalAddress();
  NET_RemoteDbgHostInitSockets();
}

/*
==============
NET_IpAddrToInAddr
==============
*/
void NET_IpAddrToInAddr(const unsigned __int8 *ipaddr, unsigned int *inaddr)
{
  if ( !inaddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 333, ASSERT_TYPE_ASSERT, "(inaddr != 0)", (const char *)&queryFormat, "inaddr != NULL") )
    __debugbreak();
  *inaddr = *(_DWORD *)ipaddr;
}

/*
==============
NET_IsBotAddr
==============
*/
bool NET_IsBotAddr(const netadr_t *addr)
{
  return addr->type == NA_LOOPBACK && (unsigned int)(addr->localNetID - 4) <= 0x270F;
}

/*
==============
NET_NetworkOrderAddr
==============
*/
__int64 NET_NetworkOrderAddr(const netadr_t *a)
{
  return a->ip[3] | ((a->ip[2] | ((a->ip[1] | (a->ip[0] << 8)) << 8)) << 8);
}

/*
==============
NET_OpenIP
==============
*/
void NET_OpenIP(void)
{
  int v0; 

  if ( s_lan_socket != -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 928, ASSERT_TYPE_ASSERT, "(s_lan_socket == (SOCKET)(~0))", (const char *)&queryFormat, "s_lan_socket == INVALID_SOCKET") )
    __debugbreak();
  v0 = 0;
  while ( 1 )
  {
    s_lan_socket = NET_IPSocket(net_ip->current.string, v0 + 26016);
    if ( s_lan_socket != -1i64 )
      break;
    if ( ++v0 >= 10 )
    {
      Com_PrintError(25, "WARNING: Couldn't allocate IP/UDP port, LAN discovery will not work!\n");
      return;
    }
  }
}

/*
==============
NET_PublisherVariablesFetched
==============
*/
void NET_PublisherVariablesFetched()
{
  NetConfig config; 

  config = (NetConfig)2i64;
  config.sendSignalForced = net_thread_send_signal_force->current.enabled;
  NET_Configure(&config);
}

/*
==============
NET_RegisterDvars
==============
*/
void NET_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  net_ip = Dvar_RegisterString("LSSSQNLLMK", "localhost", 2u, "Network IP Address");
  net_require_demonware = Dvar_RegisterBool("LMMRKMKSOR", 1, 0, "Fail if demonware networking cannot be started in the required mode");
  net_reconnect = Dvar_RegisterBool("MTRKKTLQRQ", 1, 0, "Reconnect if connection is detected lost on send");
  net_upnp_enabled = Dvar_RegisterBool("PRSLOMMRM", 1, 0, "Whether UPnP is enabled; disabled by default on headless; enabled on client");
  net_relay_enabled = Dvar_RegisterBool("NKTMRPRKKK", 1, 0, "Whether relay is enabled; ");
  net_relay_direct_fallback_enabled = Dvar_RegisterBool("NKRLQSQRLN", 0, 0, "Whether we fall back to direct connections when relay is not available.");
  net_relay_nat_fallback_enabled = Dvar_RegisterBool("OKMQKQSMLL", 1, 0, "Whether to use relay when nat trav fails");
  net_local_addr_update_enabled = Dvar_RegisterBool("MRTSTMRQPM", 1, 0, "Whether to convey local address updates to clients.");
  net_local_addr_update_expiry = Dvar_RegisterInt("SNSTQNNPO", 10000, 0, 0x7FFFFFFF, 0, "How long to wait for clients to ack local common addr update.");
  net_graveyard_expiry = Dvar_RegisterInt("MQTKKRORQS", 3000, 0, 0x7FFFFFFF, 0, "How long until inactive addresses are removed from graveyard.");
  net_throttle_threshold = Dvar_RegisterInt("MKPTMSMPMP", 3000, 0, 0x7FFFFFFF, 0, "How long without packets until a connection is considered throttled.");
  net_thread_send_signal_force = Dvar_RegisterBool("LTLRLORTQR", 0, 0, "Force net thread be signaled on every send, not just in-order ones");
  net_logging_verbose = Dvar_RegisterBool("NOMSTLQKQR", 0, 0, "Enable verbose logging, i.e. any network channel log flagged as verbose.");
  net_simulate_port_remapping = Dvar_RegisterBool("MPLTKMQQLR", 0, 0, "Remap public port on network init");
  net_relay_simulate_disconnect = Dvar_RegisterInt("LMNMQKQSLM", -1, -1, 0x7FFFFFFF, 0, "Time in millis after which relay is disconnected; -1 for none");
  NET_RegisterDvarsPlatform();
  Dvar_EndPermanentRegistration();
}

/*
==============
NetadrToSockadr
==============
*/
void NetadrToSockadr(const netadr_t *a, sockaddr *s)
{
  if ( (unsigned int)(a->type - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 161, ASSERT_TYPE_ASSERT, "((a->type == NA_BROADCAST) || (a->type == NA_IP) || (a->type == NA_RAW))", (const char *)&queryFormat, "(a->type == NA_BROADCAST) || (a->type == NA_IP) || (a->type == NA_RAW)") )
    __debugbreak();
  *(_QWORD *)&s->sa_family = 0i64;
  *(_QWORD *)&s->sa_data[6] = 0i64;
  if ( a->type == NA_BROADCAST )
  {
    s->sa_family = 2;
    *(_WORD *)s->sa_data = htons(a->port);
    *(_DWORD *)&s->sa_data[2] = -1;
  }
  else if ( (unsigned int)(a->type - 3) <= 1 )
  {
    s->sa_family = 2;
    *(_DWORD *)&s->sa_data[2] = *(_DWORD *)a->ip;
    *(_WORD *)s->sa_data = htons(a->port);
  }
}

/*
==============
NetadrToSockadrIn
==============
*/
void NetadrToSockadrIn(const netadr_t *a, sockaddr_in *s)
{
  *(_QWORD *)&s->sin_family = 0i64;
  *(_QWORD *)s->sin_zero = 0i64;
  if ( a->type == NA_BROADCAST )
  {
    s->sin_family = 2;
    s->sin_port = htons(a->port);
    s->sin_addr.S_un.S_addr = -1;
  }
  else if ( (unsigned int)(a->type - 3) <= 1 )
  {
    s->sin_family = 2;
    s->sin_addr.S_un.S_addr = *(_DWORD *)a->ip;
    s->sin_port = htons(a->port);
  }
}

/*
==============
SockadrToNetadr
==============
*/
void SockadrToNetadr(const sockaddr *s, netadr_t *a)
{
  if ( s->sa_family == 2 )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 175, ASSERT_TYPE_ASSERT, "(s->sa_family == 2)", (const char *)&queryFormat, "s->sa_family == AF_INET") )
    __debugbreak();
  if ( s->sa_family == 2 )
  {
LABEL_5:
    a->type = NA_IP;
    *(_DWORD *)a->ip = *(_DWORD *)&s->sa_data[2];
    a->port = ntohs(*(_WORD *)s->sa_data);
  }
}

/*
==============
StringToInt128
==============
*/
void StringToInt128(const char *str, unsigned __int8 *data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 247, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 248, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  j_sscanf(str, "%8x%8x%8x%8x", data, data + 4, data + 8, data + 12);
}

/*
==============
StringToInt64
==============
*/
__int64 StringToInt64(const char *str)
{
  __int64 v3; 
  __int64 v4; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 229, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( !*str )
    return 0i64;
  v3 = -1i64;
  do
    ++v3;
  while ( str[v3] );
  if ( (_DWORD)v3 != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 235, ASSERT_TYPE_ASSERT, "(I_strlen( str ) == 16)", (const char *)&queryFormat, "I_strlen( str ) == 16") )
    __debugbreak();
  j_sscanf(str, "%8x%8x", &v4, (char *)&v4 + 4);
  return v4;
}

/*
==============
Sys_AddCheckSum
==============
*/
void Sys_AddCheckSum(unsigned __int8 *buffer, int *length, unsigned __int16 sum)
{
  buffer[*length] = HIBYTE(sum);
  buffer[*length + 1] = sum;
  *length += 2;
}

/*
==============
Sys_AddSplitscreenNetID
==============
*/
void Sys_AddSplitscreenNetID(netsrc_t sock, netadr_t *to, unsigned __int8 *buffer, int *length)
{
  buffer[(*length)++] = sock | (16 * LOBYTE(to->localNetID));
}

/*
==============
Sys_Checksum
==============
*/
unsigned __int16 Sys_Checksum(unsigned __int8 *src, int len)
{
  int v2; 
  int v3; 
  int v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int i; 

  v2 = 0;
  v3 = len;
  v5 = 0;
  v6 = 0;
  if ( len >= 4 )
  {
    v7 = ((unsigned int)(len - 4) >> 2) + 1;
    v3 = len - 4 * (((unsigned int)(len - 4) >> 2) + 1);
    do
    {
      v8 = src[3];
      v2 += src[1] | (*src << 8);
      v9 = src[2] << 8;
      src += 4;
      v5 += v8 | v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 > 1 )
  {
    v10 = *src;
    v11 = src[1];
    src += 2;
    v6 = v11 | (v10 << 8);
    v3 -= 2;
  }
  v12 = v5 + v2 + v6;
  if ( v3 > 0 )
    v12 += *src;
  for ( i = HIWORD(v12); HIWORD(v12); i = HIWORD(v12) )
    v12 = i + (unsigned __int16)v12;
  return ~(_WORD)v12;
}

/*
==============
Sys_ChecksumCopy
==============
*/
unsigned __int16 Sys_ChecksumCopy(unsigned __int8 *dest, unsigned __int8 *src, int len)
{
  unsigned int v3; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int i; 

  v3 = 0;
  if ( len > 1 )
  {
    v6 = ((unsigned int)(len - 2) >> 1) + 1;
    len -= 2 * v6;
    do
    {
      v7 = *src;
      *dest = v7;
      v8 = src[1];
      src += 2;
      dest[1] = v8;
      v3 += v8 | (v7 << 8);
      dest += 2;
      --v6;
    }
    while ( v6 );
  }
  if ( len > 0 )
  {
    v9 = *src;
    *dest = v9;
    v3 += v9;
  }
  for ( i = HIWORD(v3); HIWORD(v3); i = HIWORD(v3) )
    v3 = i + (unsigned __int16)v3;
  return ~(_WORD)v3;
}

/*
==============
Sys_GetLoopbackPacket
==============
*/
__int64 Sys_GetLoopbackPacket(const netsrc_t sock, netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  int v6; 
  int v7; 
  __int64 result; 
  int dataLength; 

  dataLength = NET_RecvLoopback(sock, net_message->data, net_message->maxsize, net_from, net_info);
  if ( dataLength <= 0 || !Sys_VerifyCheckSum(net_message->data, &dataLength) )
    return 0i64;
  v6 = dataLength;
  v7 = net_message->data[dataLength + 2] & 0xF;
  net_message->targetLocalNetID = net_message->data[dataLength + 2] >> 4;
  net_from->localNetID = v7;
  result = 1i64;
  net_message->cursize = v6;
  return result;
}

/*
==============
Sys_GetPacket
==============
*/
__int64 Sys_GetPacket(netadr_t *net_from, msg_t *net_message, NetPingInfo *net_info)
{
  unsigned int v6; 
  int addrHandleIndex; 
  const char *v9; 
  __int64 result; 
  int v11; 
  const char *v12; 
  int v13; 
  int v14; 
  netadr_t v15; 
  int dataLength; 

  _RBX = net_from;
  *(_QWORD *)&net_from->type = 0i64;
  *(_QWORD *)&net_from->port = 0i64;
  net_from->addrHandleIndex = 0;
  if ( s_lan_socket && (dataLength = Sys_RecvFrom(s_lan_socket, net_from, net_message), v6 = dataLength, dataLength > 0) )
  {
    _RBX->flags |= 1u;
    _RBX->type = NA_BROADCAST;
    _RBX->addrHandleIndex = -1;
  }
  else
  {
    v11 = NET_RecvFrom(net_message->data, net_message->maxsize, _RBX, net_info);
    dataLength = v11;
    v6 = v11;
    if ( v11 == -2 || v11 == -9 )
      return 0i64;
    if ( v11 < 0 )
    {
      v12 = NET_ErrorString();
      Com_Printf(25, "Sys_GetPacket: NET_RecvFrom failed with %s (ret was %d)\n", v12, v6);
      return 0i64;
    }
  }
  net_message->readcount = 0;
  if ( v6 == net_message->maxsize )
    return 0i64;
  if ( !v6 )
  {
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    addrHandleIndex = _RBX->addrHandleIndex;
    __asm { vmovups [rsp+48h+var_28], xmm0 }
    v15.addrHandleIndex = addrHandleIndex;
    v9 = NET_AdrToString(&v15);
    Com_Printf((unsigned __int8)v6 + 25, "Empty or discarded packet from %s\n", v9);
    return 0i64;
  }
  if ( !Sys_VerifyCheckSum(net_message->data, &dataLength) )
    return 0i64;
  v13 = dataLength;
  v14 = net_message->data[dataLength + 2] & 0xF;
  net_message->targetLocalNetID = net_message->data[dataLength + 2] >> 4;
  _RBX->localNetID = v14;
  result = 1i64;
  net_message->cursize = v13;
  return result;
}

/*
==============
Sys_ParseSplitscreenPacketForNetID
==============
*/
char Sys_ParseSplitscreenPacketForNetID(netadr_t *net_from, msg_t *net_message, int net_msg_length)
{
  int v3; 

  v3 = net_message->data[net_msg_length + 2] & 0xF;
  net_message->targetLocalNetID = net_message->data[net_msg_length + 2] >> 4;
  net_from->localNetID = v3;
  return 1;
}

/*
==============
Sys_ResolveHostname
==============
*/
__int64 Sys_ResolveHostname(const char *s, addrinfo **results)
{
  INT v8; 
  const char *v10; 
  ADDRINFOA v11; 
  void *retaddr; 

  _RAX = &retaddr;
  HIDWORD(v11.ai_next) = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v11.ai_family = 2;
  v11.ai_socktype = 2;
  v11.ai_flags = 3;
  __asm { vmovdqu ymmword ptr [rax-2Ch], ymm0 }
  v8 = getaddrinfo(s, NULL, &v11, results);
  if ( v8 )
  {
    v10 = NET_ErrorString();
    Com_PrintError(25, "Failed to resolve host name '%s': %s (%d)\n", s, v10, v8);
    return 0i64;
  }
  else
  {
    if ( !results )
      Com_Printf(25, "No translation for hostname '%s'\n", s);
    return 1i64;
  }
}

/*
==============
Sys_SendPacket
==============
*/
__int64 Sys_SendPacket(netsrc_t sock, int length, const void *data, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  __int64 v7; 
  char v9; 
  unsigned int v10; 
  char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int i; 
  netadrtype_t type; 
  __int16 v20; 
  char v21; 
  int addrHandleIndex; 
  int v23; 
  __int64 v24; 
  int v25; 
  unsigned int v27; 
  int v28; 
  int v30; 
  netadrtype_t v31; 
  const char *v32; 
  char *fmt; 
  __int64 v35; 
  int v37; 
  netadr_t v38; 
  char dataa[1264]; 

  _R14 = to;
  v7 = length;
  v9 = sock;
  if ( (unsigned int)length > 0x4E7 )
  {
    v37 = 1255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 1082, ASSERT_TYPE_ASSERT, "( length ) <= ( sizeof( buffer ) )", "length not in [0, sizeof( buffer )]\n\t%u not in [0, %u]", length, v37) )
      __debugbreak();
  }
  v10 = 0;
  v11 = dataa;
  v12 = v7;
  if ( (int)v7 > 1 )
  {
    v13 = ((unsigned int)(v7 - 2) >> 1) + 1;
    v12 = v7 - 2 * v13;
    do
    {
      v14 = *(unsigned __int8 *)data;
      v15 = *((unsigned __int8 *)data + 1);
      data = (char *)data + 2;
      *v11 = v14;
      v11[1] = v15;
      v10 += v15 | (v14 << 8);
      v11 += 2;
      --v13;
    }
    while ( v13 );
  }
  if ( v12 > 0 )
  {
    v16 = *(unsigned __int8 *)data;
    *v11 = v16;
    v10 += v16;
  }
  for ( i = HIWORD(v10); HIWORD(v10); i = HIWORD(v10) )
    v10 = i + (unsigned __int16)v10;
  __asm { vmovups xmm0, xmmword ptr [r14] }
  type = _R14->type;
  v20 = ~(_WORD)v10;
  dataa[v7 + 1] = v20;
  v21 = HIBYTE(v20);
  addrHandleIndex = _R14->addrHandleIndex;
  dataa[v7] = v21;
  v23 = v7 + 2;
  v38.addrHandleIndex = addrHandleIndex;
  v24 = v23;
  v25 = v23 + 1;
  __asm { vpextrq rcx, xmm0, 1 }
  dataa[v24] = v9 | (16 * BYTE4(_RCX));
  if ( ((type - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( ((type - 2) & 0xFFFFFFFD) != 0 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144168878, 1083i64);
      v27 = -7;
LABEL_19:
      __asm { vmovups xmm0, xmmword ptr [r14] }
      v30 = _R14->addrHandleIndex;
      v31 = _R14->type;
      __asm { vmovups [rsp+588h+var_548], xmm0 }
      v38.addrHandleIndex = v30;
      v32 = NET_AdrToString(&v38);
      LODWORD(v35) = v31;
      LODWORD(fmt) = v25;
      Com_PrintError(25, "[NET] Sys_SendPacket failed to %s: error=%d, length=%d, type=%d\n", v32, v27, fmt, v35);
      return v27;
    }
    if ( !s_lan_socket )
    {
      v27 = -9;
      goto LABEL_19;
    }
    v38.addrHandleIndex = _R14->addrHandleIndex;
    __asm { vmovups [rsp+588h+var_548], xmm0 }
    v28 = Sys_SendTo(s_lan_socket, dataa, v25, &v38);
  }
  else
  {
    v28 = NET_SendTo(dataa, v25, _R14, flags, info);
  }
  v27 = v28;
  if ( v28 < 0 )
    goto LABEL_19;
  return v27;
}

/*
==============
Sys_StringToAdr
==============
*/
struct hostent *Sys_StringToAdr(const char *s, netadr_t *a)
{
  unsigned int v3; 
  struct hostent *result; 
  int v5; 
  char **h_addr_list; 
  char **v7; 

  if ( (unsigned __int8)(*s - 48) > 9u )
  {
    result = gethostbyname(s);
    if ( !result )
      return result;
    v5 = 0;
    h_addr_list = result->h_addr_list;
    if ( *h_addr_list )
    {
      v7 = result->h_addr_list;
      do
      {
        ++v5;
        ++v7;
      }
      while ( *v7 );
    }
    v3 = *(_DWORD *)h_addr_list[I_irand(0, v5)];
  }
  else
  {
    v3 = inet_addr(s);
  }
  a->type = NA_IP;
  *(_DWORD *)a->ip = v3;
  a->port = ntohs(0);
  return (struct hostent *)1;
}

/*
==============
Sys_StringToSockaddr
==============
*/
__int64 Sys_StringToSockaddr(const char *s, sockaddr *sadr)
{
  __int64 result; 
  int v4; 
  _QWORD *v5; 
  _QWORD *v6; 

  *(_QWORD *)&sadr->sa_family = 0i64;
  *(_QWORD *)&sadr->sa_data[6] = 0i64;
  sadr->sa_family = 2;
  if ( (unsigned __int8)(*s - 48) > 9u )
  {
    result = (__int64)gethostbyname(s);
    if ( result )
    {
      v4 = 0;
      v5 = *(_QWORD **)(result + 24);
      if ( *v5 )
      {
        v6 = *(_QWORD **)(result + 24);
        do
        {
          ++v4;
          ++v6;
        }
        while ( *v6 );
      }
      *(_DWORD *)&sadr->sa_data[2] = *(_DWORD *)v5[I_irand(0, v4)];
      return 1i64;
    }
  }
  else
  {
    *(_DWORD *)&sadr->sa_data[2] = inet_addr(s);
    return 1i64;
  }
  return result;
}

/*
==============
Sys_VerifyCheckSum
==============
*/
char Sys_VerifyCheckSum(unsigned __int8 *data, int *dataLength)
{
  int v4; 
  __int64 v5; 
  unsigned __int8 *v6; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  unsigned int i; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  char *fmt; 

  if ( *dataLength < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_net.cpp", 638, ASSERT_TYPE_ASSERT, "(dataLength >= 3)", (const char *)&queryFormat, "dataLength >= 3") )
    __debugbreak();
  *dataLength -= 3;
  v4 = 0;
  v5 = *dataLength;
  v6 = data;
  v7 = v5;
  v8 = 0;
  if ( (int)v5 > 1 )
  {
    v9 = ((unsigned int)(v5 - 2) >> 1) + 1;
    v7 = v5 - 2 * v9;
    do
    {
      v10 = *v6;
      v11 = v6[1];
      v6 += 2;
      v8 += v11 | (v10 << 8);
      --v9;
    }
    while ( v9 );
  }
  if ( v7 > 0 )
    v8 += *v6;
  for ( i = HIWORD(v8); HIWORD(v8); i = HIWORD(v8) )
    v8 = i + (unsigned __int16)v8;
  v13 = ~(_WORD)v8;
  v14 = _byteswap_ushort(*(_WORD *)&data[v5]);
  if ( v14 == v13 )
    return 1;
  LODWORD(fmt) = v14;
  Com_Printf(25, "Packet checksum failure, packet len (including sum) = %d  sum: 0x%x check: 0x%x\n", (unsigned int)v5, v13, fmt);
  if ( *dataLength > 0 )
  {
    do
    {
      Com_Printf(25, "%02x ", *data);
      if ( !(++v4 % 16) )
        Com_Printf(25, "\n");
      ++data;
    }
    while ( v4 < *dataLength );
  }
  if ( v4 % 16 )
    Com_Printf(25, "\n");
  return 0;
}

/*
==============
ComNetListener::UpdatePartyXnaddr
==============
*/
bool ComNetListener::UpdatePartyXnaddr(ComNetListener *this, PartyData *party, const XNADDR *xnaddr)
{
  XNADDR *Address; 

  if ( party->inParty && Party_AreWeHost(party) )
  {
    if ( net_local_addr_update_enabled->current.enabled )
      return PartyHost_UpdateXnaddr(party, xnaddr);
    Address = XSESSION_INFO::GetAddress(&party->session->dyn.sessionInfo);
    XNADDR::operator=(Address, xnaddr);
  }
  return 0;
}

