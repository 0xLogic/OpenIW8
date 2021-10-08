/*
==============
bdREST::isStatusClientError
==============
*/

bool __fastcall bdREST::isStatusClientError(bdREST::bdHTTPStatus status)
{
  return ?isStatusClientError@bdREST@@SA_NW4bdHTTPStatus@1@@Z(status);
}

/*
==============
bdRESTInternal::mimeTypeFromInteger
==============
*/

bdREST::bdMimeType __fastcall bdRESTInternal::mimeTypeFromInteger(unsigned int mimeTypeInteger)
{
  return ?mimeTypeFromInteger@bdRESTInternal@@SA?AW4bdMimeType@bdREST@@I@Z(mimeTypeInteger);
}

/*
==============
bdRESTInternal::isFieldContentString
==============
*/

bool __fastcall bdRESTInternal::isFieldContentString(const char *str, unsigned __int64 *invalidIdx)
{
  return ?isFieldContentString@bdRESTInternal@@SA_NPEBDPEA_K@Z(str, invalidIdx);
}

/*
==============
bdRESTInternal::mimeTypeEnumToString
==============
*/

const char *__fastcall bdRESTInternal::mimeTypeEnumToString(bdREST::bdMimeType method)
{
  return ?mimeTypeEnumToString@bdRESTInternal@@SAPEBDW4bdMimeType@bdREST@@@Z(method);
}

/*
==============
bdRESTInternal::isTcharString
==============
*/

bool __fastcall bdRESTInternal::isTcharString(const char *str, unsigned __int64 *invalidIdx)
{
  return ?isTcharString@bdRESTInternal@@SA_NPEBDPEA_K@Z(str, invalidIdx);
}

/*
==============
bdRESTInternal::mimeTypeIsValid
==============
*/

bool __fastcall bdRESTInternal::mimeTypeIsValid(bdREST::bdMimeType accept)
{
  return ?mimeTypeIsValid@bdRESTInternal@@SA_NW4bdMimeType@bdREST@@@Z(accept);
}

/*
==============
bdREST::getRNG
==============
*/

bdRandom *__fastcall bdREST::getRNG()
{
  return ?getRNG@bdREST@@SAAEAVbdRandom@@XZ();
}

/*
==============
bdREST::isStatusInformational
==============
*/

bool __fastcall bdREST::isStatusInformational(bdREST::bdHTTPStatus status)
{
  return ?isStatusInformational@bdREST@@SA_NW4bdHTTPStatus@1@@Z(status);
}

/*
==============
bdRESTInternal::methodEnumToString
==============
*/

const char *__fastcall bdRESTInternal::methodEnumToString(bdREST::bdMethod method)
{
  return ?methodEnumToString@bdRESTInternal@@SAPEBDW4bdMethod@bdREST@@@Z(method);
}

/*
==============
bdRESTInternal::isVcharString
==============
*/

bool __fastcall bdRESTInternal::isVcharString(const char *str, unsigned __int64 *invalidIdx)
{
  return ?isVcharString@bdRESTInternal@@SA_NPEBDPEA_K@Z(str, invalidIdx);
}

/*
==============
bdRESTInternal::methodIsValid
==============
*/

bool __fastcall bdRESTInternal::methodIsValid(bdREST::bdMethod method)
{
  return ?methodIsValid@bdRESTInternal@@SA_NW4bdMethod@bdREST@@@Z(method);
}

/*
==============
bdREST::isStatusServerError
==============
*/

bool __fastcall bdREST::isStatusServerError(bdREST::bdHTTPStatus status)
{
  return ?isStatusServerError@bdREST@@SA_NW4bdHTTPStatus@1@@Z(status);
}

/*
==============
bdREST::isStatusRedirection
==============
*/

bool __fastcall bdREST::isStatusRedirection(bdREST::bdHTTPStatus status)
{
  return ?isStatusRedirection@bdREST@@SA_NW4bdHTTPStatus@1@@Z(status);
}

/*
==============
bdREST::isStatusSuccess
==============
*/

bool __fastcall bdREST::isStatusSuccess(bdREST::bdHTTPStatus status)
{
  return ?isStatusSuccess@bdREST@@SA_NW4bdHTTPStatus@1@@Z(status);
}

/*
==============
bdREST::debugSetFlags
==============
*/

void __fastcall bdREST::debugSetFlags(unsigned int flags)
{
  ?debugSetFlags@bdREST@@SAXI@Z(flags);
}

/*
==============
bdRESTInternal::HTTPStatusFromInteger
==============
*/

bdREST::bdHTTPStatus __fastcall bdRESTInternal::HTTPStatusFromInteger(unsigned int intHTTPStatus)
{
  return ?HTTPStatusFromInteger@bdRESTInternal@@SA?AW4bdHTTPStatus@bdREST@@I@Z(intHTTPStatus);
}

/*
==============
bdRESTInternal::HTTPStatusFromInteger
==============
*/
__int64 bdRESTInternal::HTTPStatusFromInteger(unsigned int intHTTPStatus)
{
  __int64 result; 

  if ( intHTTPStatus > 0x1F4 )
  {
    switch ( intHTTPStatus )
    {
      case 0x1F5u:
        return 501i64;
      case 0x1F6u:
        return 502i64;
      case 0x1F7u:
        return 503i64;
      case 0x1F8u:
        return 504i64;
      default:
LABEL_40:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrest.cpp", "bdRESTInternal::HTTPStatusFromInteger", 0xA9u, "unknown or unhandled status code received: %u", intHTTPStatus);
        bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrest.cpp", "bdRESTInternal::HTTPStatusFromInteger", 0xAAu, (const char *const)&queryFormat.fmt + 3);
        return 500i64;
    }
  }
  else if ( intHTTPStatus == 500 )
  {
    return 500i64;
  }
  else
  {
    switch ( intHTTPStatus )
    {
      case 0xC8u:
        result = 200i64;
        break;
      case 0xC9u:
        result = 201i64;
        break;
      case 0xCAu:
        result = 202i64;
        break;
      case 0xCBu:
        result = 203i64;
        break;
      case 0xCCu:
        result = 204i64;
        break;
      case 0xCDu:
        result = 205i64;
        break;
      case 0xCEu:
        result = 206i64;
        break;
      case 0xCFu:
        result = 207i64;
        break;
      case 0x12Cu:
        result = 300i64;
        break;
      case 0x12Du:
        result = 301i64;
        break;
      case 0x12Eu:
        result = 302i64;
        break;
      case 0x12Fu:
        result = 303i64;
        break;
      case 0x130u:
        result = 304i64;
        break;
      case 0x133u:
        result = 307i64;
        break;
      case 0x190u:
        result = 400i64;
        break;
      case 0x191u:
        result = 401i64;
        break;
      case 0x193u:
        result = 403i64;
        break;
      case 0x194u:
        result = 404i64;
        break;
      case 0x195u:
        result = 405i64;
        break;
      case 0x196u:
        result = 406i64;
        break;
      case 0x198u:
        result = 408i64;
        break;
      case 0x199u:
        result = 409i64;
        break;
      case 0x19Au:
        result = 410i64;
        break;
      case 0x19Bu:
        result = 411i64;
        break;
      case 0x19Cu:
        result = 412i64;
        break;
      case 0x19Du:
        result = 413i64;
        break;
      case 0x19Eu:
        result = 414i64;
        break;
      case 0x19Fu:
        result = 415i64;
        break;
      case 0x1A0u:
        result = 416i64;
        break;
      case 0x1A1u:
        result = 417i64;
        break;
      case 0x1A2u:
        result = 418i64;
        break;
      default:
        goto LABEL_40;
    }
  }
  return result;
}

/*
==============
bdREST::debugSetFlags
==============
*/
void bdREST::debugSetFlags(unsigned int flags)
{
  bdRESTInternal::g_debug_flags = flags;
}

/*
==============
bdREST::getRNG
==============
*/
bdRandom *bdREST::getRNG()
{
  return &s_random;
}

/*
==============
bdRESTInternal::isFieldContentString
==============
*/
bool bdRESTInternal::isFieldContentString(const char *str, unsigned __int64 *invalidIdx)
{
  unsigned __int64 v2; 
  bool result; 
  char v5; 
  unsigned __int8 v6; 

  v2 = 0i64;
  result = 1;
  if ( str && ((v5 = *str, v5 == 32) || v5 == 9) )
  {
    *invalidIdx = 0i64;
    return 0;
  }
  else
  {
    do
    {
      if ( !str )
        break;
      v6 = str[v2];
      if ( !v6 )
        break;
      if ( (unsigned int)v6 - 32 <= 0x5E || v6 == 9 )
      {
        result = 1;
      }
      else
      {
        result = 0;
        if ( invalidIdx )
          *invalidIdx = v2;
      }
      ++v2;
    }
    while ( result );
  }
  return result;
}

/*
==============
bdREST::isStatusClientError
==============
*/
bool bdREST::isStatusClientError(bdREST::bdHTTPStatus status)
{
  return (unsigned int)(status - 400) <= 0x63;
}

/*
==============
bdREST::isStatusInformational
==============
*/
bool bdREST::isStatusInformational(bdREST::bdHTTPStatus status)
{
  return (unsigned int)(status - 100) <= 0x63;
}

/*
==============
bdREST::isStatusRedirection
==============
*/
bool bdREST::isStatusRedirection(bdREST::bdHTTPStatus status)
{
  return (unsigned int)(status - 300) <= 0x63;
}

/*
==============
bdREST::isStatusServerError
==============
*/
bool bdREST::isStatusServerError(bdREST::bdHTTPStatus status)
{
  return (unsigned int)(status - 500) <= 0x63;
}

/*
==============
bdREST::isStatusSuccess
==============
*/
bool bdREST::isStatusSuccess(bdREST::bdHTTPStatus status)
{
  return (unsigned int)(status - 200) <= 0x63;
}

/*
==============
bdRESTInternal::isTcharString
==============
*/
_BOOL8 bdRESTInternal::isTcharString(const char *str, unsigned __int64 *invalidIdx)
{
  bool v5; 
  unsigned __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  __int128 v11; 

  __asm
  {
    vmovups xmm0, xmmword ptr cs:asc_1446E8C70; "!#$%&'*+-.^_`|~"
    vmovups [rsp+28h+var_28], xmm0
  }
  v5 = 1;
  v6 = 0i64;
  do
  {
    if ( !str )
      break;
    v7 = str[v6];
    if ( !v7 )
      break;
    v5 = (unsigned __int8)(v7 - 48) <= 9u || (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 97) <= 0x19u;
    v8 = 0i64;
    if ( !v5 )
    {
      do
      {
        if ( v8 >= 16 )
          break;
        v9 = *((_BYTE *)&v11 + v8);
        v5 = v7 == v9;
        ++v8;
      }
      while ( v7 != v9 );
      if ( !v5 && invalidIdx )
        *invalidIdx = v6;
    }
    ++v6;
  }
  while ( v5 );
  return v5;
}

/*
==============
bdRESTInternal::isVcharString
==============
*/
bool bdRESTInternal::isVcharString(const char *str, unsigned __int64 *invalidIdx)
{
  unsigned __int64 i; 
  char v3; 
  bool result; 

  for ( i = 0i64; ; ++i )
  {
    if ( !str )
      return 1;
    v3 = str[i];
    if ( !v3 )
      return 1;
    if ( (unsigned __int8)(v3 - 33) > 0x5Du )
      break;
  }
  result = 0;
  if ( invalidIdx )
    *invalidIdx = i;
  return result;
}

/*
==============
bdRESTInternal::methodEnumToString
==============
*/
const char *bdRESTInternal::methodEnumToString(bdREST::bdMethod method)
{
  if ( method <= 1145392197 )
  {
    switch ( method )
    {
      case 1145392197:
        return "DELETE";
      case 0:
        return "INVALID";
      case 4670804:
        return "GET";
      case 5264724:
        return "PUT";
    }
    return "unknown";
  }
  if ( method == 1346458691 )
    return "PATCH";
  if ( method != 1347375956 )
    return "unknown";
  return "POST";
}

/*
==============
bdRESTInternal::methodIsValid
==============
*/
bool bdRESTInternal::methodIsValid(bdREST::bdMethod method)
{
  return method == 4670804 || method == 1347375956 || method == 5264724 || method == 1145392197 || method == 1346458691;
}

/*
==============
bdRESTInternal::mimeTypeEnumToString
==============
*/
const char *bdRESTInternal::mimeTypeEnumToString(bdREST::bdMimeType method)
{
  __int32 v1; 
  __int32 v2; 

  if ( method == BD_MIME_INVALID )
    return "invalid";
  v1 = method - 1;
  if ( !v1 )
    return "json";
  v2 = v1 - 1;
  if ( !v2 )
    return "raw";
  if ( v2 == 1 )
    return "protobuf";
  return "unknown";
}

/*
==============
bdRESTInternal::mimeTypeFromInteger
==============
*/
__int64 bdRESTInternal::mimeTypeFromInteger(unsigned int mimeTypeInteger)
{
  unsigned int v1; 
  unsigned int v2; 

  v1 = mimeTypeInteger - 1;
  if ( !v1 )
    return 1i64;
  v2 = v1 - 1;
  if ( !v2 )
    return 2i64;
  if ( v2 == 1 )
    return 3i64;
  return 0i64;
}

/*
==============
bdRESTInternal::mimeTypeIsValid
==============
*/
bool bdRESTInternal::mimeTypeIsValid(bdREST::bdMimeType accept)
{
  return (unsigned int)(accept - 1) <= 2;
}

