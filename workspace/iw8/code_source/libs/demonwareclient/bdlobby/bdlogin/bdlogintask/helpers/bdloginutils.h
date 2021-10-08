/*
==============
bdLoginUtils::getUmbrellaUrl
==============
*/

void __fastcall bdLoginUtils::getUmbrellaUrl(char (*url)[512], const bdEnvironment *env, const char *region)
{
  ?getUmbrellaUrl@bdLoginUtils@@SAXAEAY0CAA@DAEBW4bdEnvironment@@PEBD@Z(url, env, region);
}

/*
==============
bdLoginUtils::getAuthAddress
==============
*/

bool __fastcall bdLoginUtils::getAuthAddress(char (*url)[1024], const bdEnvironment *env, const char *region, const char *gameID)
{
  return ?getAuthAddress@bdLoginUtils@@SA_NAEAY0EAA@DAEBW4bdEnvironment@@PEBD2@Z(url, env, region, gameID);
}

/*
==============
bdLoginUtils::getLoginQueueUrl
==============
*/

void __fastcall bdLoginUtils::getLoginQueueUrl(char (*url)[512], const bdEnvironment *env, const char *region, const char *gameID)
{
  ?getLoginQueueUrl@bdLoginUtils@@SAXAEAY0CAA@DAEBW4bdEnvironment@@PEBD2@Z(url, env, region, gameID);
}

/*
==============
bdLoginUtils::convertUnoErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdLoginUtils::convertUnoErrorCode(const unsigned int errorCode)
{
  return ?convertUnoErrorCode@bdLoginUtils@@SA?AW4bdLobbyErrorCode@@I@Z(errorCode);
}

/*
==============
bdLoginUtils::parseSingleError
==============
*/

unsigned int __fastcall bdLoginUtils::parseSingleError(bdJSONDeserializer *const json)
{
  return ?parseSingleError@bdLoginUtils@@SAIQEAVbdJSONDeserializer@@@Z(json);
}

/*
==============
bdLoginUtils::parseSingleError
==============
*/
__int64 bdLoginUtils::parseSingleError(bdJSONDeserializer *const json)
{
  unsigned int value[4]; 
  char v4[128]; 
  char v5[256]; 

  value[0] = 0;
  if ( !json )
    return 0i64;
  bdJSONDeserializer::getUInt32(json, "code", value);
  bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, v4, 0x80u);
  bdJSONDeserializer::getString(json, "msg", v5, 0x100u);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::parseSingleError", 0x212u, "Error: %s; Error code: %u; Message: %s", v4, value[0], v5);
  return value[0];
}

/*
==============
bdLoginUtils::getAuthAddress
==============
*/
char bdLoginUtils::getAuthAddress(char (*url)[1024], const bdEnvironment *env, const char *region, const char *gameID)
{
  int v8; 
  bool v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  const char *v12; 
  size_t v13; 
  bdEnvironment v14; 
  bool v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  int v19; 
  const char *v20; 
  const char *v21; 
  char v22[1024]; 

  v8 = *(unsigned __int8 *)region - (unsigned __int8)aCn[0];
  if ( !v8 )
  {
    v8 = *((unsigned __int8 *)region + 1) - (unsigned __int8)aCn[1];
    if ( !v8 )
      v8 = *((unsigned __int8 *)region + 2) - (unsigned __int8)aCn[2];
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = v8 == 0;
  v10 = -1i64;
  v11 = -1i64;
  if ( v9 )
  {
    v12 = "auth3.%s.cod.qq.com";
    do
      ++v11;
    while ( aAuth3SCodQqCom[v11] );
  }
  else
  {
    v12 = "auth3.%s.demonware.net";
    do
      ++v11;
    while ( aAuth3SDemonwar[v11] );
  }
  v13 = 1023i64;
  if ( v11 < 0x3FF )
    v13 = v11;
  memcpy_0(v22, v12, v13);
  v14 = *env;
  v22[v13] = 0;
  if ( v14 )
  {
    if ( v14 == BD_ENVIRONMENT_CERT )
    {
      v21 = "cert";
    }
    else
    {
      if ( v14 != BD_ENVIRONMENT_PROD )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getAuthAddress", 0x63u, "Unknown environment (%u): Returning False", v14);
        return 0;
      }
      if ( gameID )
      {
        if ( bdStrlen(gameID) )
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          do
            ++v10;
          while ( aXb1_0[v10] );
          if ( v10 )
          {
            v16 = *region < (unsigned int)aCn[0];
            if ( *region == aCn[0] && (v17 = region[1], v16 = v17 < (unsigned int)aCn[1], v17 == aCn[1]) && (v18 = region[2], v16 = v18 < (unsigned int)aCn[2], v18 == aCn[2]) )
              v19 = 0;
            else
              v19 = v16 ? -1 : 1;
            v20 = "%s-%s-auth3.%s.cod.qq.com";
            if ( v19 )
              v20 = "%s-%s-auth3.%s.demonware.net";
            bdSnprintf((char *)url, 0x400ui64, v20, gameID, "xb1", "prod");
            return 1;
          }
        }
      }
      v21 = "prod";
    }
  }
  else
  {
    v21 = "dev";
  }
  bdSnprintf((char *)url, 0x400ui64, v22, v21);
  return 1;
}

/*
==============
bdLoginUtils::getUmbrellaUrl
==============
*/
void bdLoginUtils::getUmbrellaUrl(char (*url)[512], const bdEnvironment *env, const char *region)
{
  int v5; 
  unsigned __int64 v6; 
  const char *v7; 
  size_t v8; 
  bdEnvironment v9; 
  const char *v10; 
  char v11[512]; 

  v5 = *(unsigned __int8 *)region - (unsigned __int8)aCn[0];
  if ( !v5 )
  {
    v5 = *((unsigned __int8 *)region + 1) - (unsigned __int8)aCn[1];
    if ( !v5 )
      v5 = *((unsigned __int8 *)region + 2) - (unsigned __int8)aCn[2];
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  if ( v5 )
  {
    v7 = "https:
    do
      ++v6;
    while ( aHttpsSUmbrella[v6] );
  }
  else
  {
    v7 = "https:
    do
      ++v6;
    while ( aHttpsUmbrellaS[v6] );
  }
  v8 = 511i64;
  if ( v6 < 0x1FF )
    v8 = v6;
  memcpy_0(v11, v7, v8);
  v9 = *env;
  v11[v8] = 0;
  if ( v9 )
  {
    if ( v9 == BD_ENVIRONMENT_CERT )
    {
      v10 = "cert";
      goto LABEL_17;
    }
    if ( v9 == BD_ENVIRONMENT_PROD )
    {
      v10 = "prod";
      goto LABEL_17;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUmbrellaUrl", 0xC8u, "Unknown environment (%u): Defaulting to DEV Umbrella URL", v9);
  }
  v10 = "dev";
LABEL_17:
  bdSnprintf((char *)url, 0x200ui64, v11, v10);
}

/*
==============
bdLoginUtils::getLoginQueueUrl
==============
*/
void bdLoginUtils::getLoginQueueUrl(char (*url)[512], const bdEnvironment *env, const char *region, const char *gameID)
{
  int v8; 
  bool v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  const char *v12; 
  size_t v13; 
  bdEnvironment v14; 
  const char *v15; 
  bool v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  int v19; 
  const char *v20; 
  char v21[512]; 

  v8 = *(unsigned __int8 *)region - (unsigned __int8)aCn[0];
  if ( !v8 )
  {
    v8 = *((unsigned __int8 *)region + 1) - (unsigned __int8)aCn[1];
    if ( !v8 )
      v8 = *((unsigned __int8 *)region + 2) - (unsigned __int8)aCn[2];
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = v8 == 0;
  v10 = -1i64;
  v11 = -1i64;
  if ( v9 )
  {
    v12 = "loginqueue.%s.cod.qq.com";
    do
      ++v11;
    while ( aLoginqueueSCod[v11] );
  }
  else
  {
    v12 = "loginqueue.%s.demonware.net";
    do
      ++v11;
    while ( aLoginqueueSDem[v11] );
  }
  v13 = 511i64;
  if ( v11 < 0x1FF )
    v13 = v11;
  memcpy_0(v21, v12, v13);
  v14 = *env;
  v21[v13] = 0;
  if ( v14 == BD_ENVIRONMENT_DEV )
    goto LABEL_16;
  if ( v14 == BD_ENVIRONMENT_CERT )
  {
    v15 = "cert";
    goto LABEL_17;
  }
  if ( v14 != BD_ENVIRONMENT_PROD )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getLoginQueueUrl", 0xFDu, "Unknown environment (%u): Defaulting to DEV Login Queue URL", v14);
LABEL_16:
    v15 = "dev";
LABEL_17:
    bdSnprintf((char *)url, 0x200ui64, v21, v15);
    return;
  }
  if ( !gameID )
    goto LABEL_31;
  if ( !bdStrlen(gameID) )
    goto LABEL_31;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v10;
  while ( aXb1_0[v10] );
  if ( !v10 )
  {
LABEL_31:
    v15 = "prod";
    goto LABEL_17;
  }
  v16 = *region < (unsigned int)aCn[0];
  if ( *region == aCn[0] && (v17 = region[1], v16 = v17 < (unsigned int)aCn[1], v17 == aCn[1]) && (v18 = region[2], v16 = v18 < (unsigned int)aCn[2], v18 == aCn[2]) )
    v19 = 0;
  else
    v19 = v16 ? -1 : 1;
  v20 = "%s-%s-loginqueue.%s.cod.qq.com";
  if ( v19 )
    v20 = "%s-%s-loginqueue.%s.demonware.net";
  bdSnprintf((char *)url, 0x200ui64, v20, gameID, "xb1", "prod");
}

/*
==============
bdLoginUtils::convertUnoErrorCode
==============
*/
__int64 bdLoginUtils::convertUnoErrorCode(const unsigned int errorCode)
{
  if ( errorCode <= 0x346AC )
  {
    if ( errorCode == 214700 )
      return 14102i64;
    if ( errorCode > 0x34008 )
    {
      switch ( errorCode )
      {
        case 0x343F0u:
          return 14112i64;
        case 0x34454u:
          return 14110i64;
        case 0x345E4u:
          return 14113i64;
        case 0x34648u:
          return 14114i64;
      }
    }
    else
    {
      switch ( errorCode )
      {
        case 0x34008u:
          return 14101i64;
        case 0u:
          return 0i64;
        case 1u:
          return 30500i64;
        case 0x21340u:
          return 14119i64;
        case 0x30D40u:
          return 14100i64;
      }
    }
LABEL_36:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::convertUnoErrorCode", 0x1BAu, "Got unexpected code: [%u] during mapping of login error code to lobbyErrorCode in bdLoginUtils.", errorCode);
    return 30500i64;
  }
  if ( errorCode <= 0x38E8C )
  {
    switch ( errorCode )
    {
      case 0x38E8Cu:
        return 14108i64;
      case 0x35B60u:
        return 14103i64;
      case 0x36330u:
        return 14104i64;
      case 0x36394u:
        return 14105i64;
      case 0x38E28u:
        return 14107i64;
    }
    goto LABEL_36;
  }
  if ( errorCode == 241000 )
    return 14109i64;
  if ( errorCode == 244000 )
    return 14115i64;
  if ( errorCode != 252000 )
    goto LABEL_36;
  return 14118i64;
}

