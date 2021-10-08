/*
==============
bdHTTPUtility::newHTTP
==============
*/

bdHTTP *__fastcall bdHTTPUtility::newHTTP(int coreAffinity, int threadPriority)
{
  return ?newHTTP@bdHTTPUtility@@SAPEAVbdHTTP@@HH@Z(coreAffinity, threadPriority);
}

/*
==============
bdHTTPUtility::parseURL
==============
*/

bool __fastcall bdHTTPUtility::parseURL(const char *const url, char *serverName, char **startRequestPath, unsigned int *port)
{
  return ?parseURL@bdHTTPUtility@@SA_NQEBDPEADPEAPEADPEAI@Z(url, serverName, startRequestPath, port);
}

/*
==============
bdHTTPUtility::newHTTP
==============
*/
void bdHTTPUtility::newHTTP(int coreAffinity, int threadPriority)
{
  bdHTTPXboxOne *v4; 

  v4 = (bdHTTPXboxOne *)bdMemory::allocate(0x9408ui64);
  if ( v4 )
    bdHTTPXboxOne::bdHTTPXboxOne(v4, coreAffinity, threadPriority);
}

/*
==============
bdHTTPUtility::parseURL
==============
*/
char bdHTTPUtility::parseURL(const char *const url, char *serverName, char **startRequestPath, unsigned int *port)
{
  __int64 v8; 
  char *v10; 
  const char *v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  int v15; 
  unsigned int v16; 
  char *v17; 
  unsigned int v18; 
  unsigned int v19; 

  bdHandleAssert(url != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  while ( url[++v8] != 0 )
    ;
  v10 = strchr_0(url, 58);
  if ( v10 )
  {
    if ( v10 - url > (unsigned __int64)(v8 - 3) || strncmp(v10, ":
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x44u, "Did not find a valid ':
      return 0;
    }
    v11 = v10 + 3;
    v12 = strchr_0(v11, 47);
    *startRequestPath = v12;
    if ( v12 )
    {
      if ( v12 == v11 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x53u, "Could not find serverName in url. expected: proto:
      }
      else
      {
        v13 = strchr_0(v11, 58);
        v14 = v13;
        if ( v13 )
        {
          v19 = strtoul(v13 + 1, NULL, 10);
          v17 = v14 - 1;
          *port = v19;
          if ( v11 > v17 || v17 > *startRequestPath )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x69u, "Incorrect server name. expected: proto:
            return 0;
          }
          if ( !v19 )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x6Eu, "Incorrect port. expected: proto:
            return 0;
          }
        }
        else
        {
          v15 = strncmp(url, "https:
          v16 = 80;
          if ( !v15 )
            v16 = 443;
          *port = v16;
          v17 = *startRequestPath - 1;
        }
        v18 = (_DWORD)v17 - (_DWORD)v11 + 2;
        if ( v18 <= 0x400 )
        {
          bdStrlcpy(serverName, v11, (int)v18);
          return 1;
        }
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x79u, "URL host greater than BD_MAX_SERVER_HOST_SIZE. ('%s')", url);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x4Eu, "Could not find resource in url. expected: proto:
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttputility.cpp", "bdHTTPUtility::parseURL", 0x3Du, "Could not find protocol in url. expected: proto:
  }
  return 0;
}

