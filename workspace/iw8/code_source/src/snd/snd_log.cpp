/*
==============
SND_LogSkip
==============
*/

bool __fastcall SND_LogSkip(unsigned int hash, unsigned int skipCount, unsigned int *skipHash, unsigned int *skipTime)
{
  return ?SND_LogSkip@@YA_NIIPEAI0@Z(hash, skipCount, skipHash, skipTime);
}

/*
==============
SND_LogRegisterString
==============
*/

void __fastcall SND_LogRegisterString(const char *name, unsigned int hash)
{
  ?SND_LogRegisterString@@YAXPEBDI@Z(name, hash);
}

/*
==============
SND_LogMissingAliasId
==============
*/

void __fastcall SND_LogMissingAliasId(unsigned int hash)
{
  ?SND_LogMissingAliasId@@YAXI@Z(hash);
}

/*
==============
SND_InitLog
==============
*/

void SND_InitLog(void)
{
  ?SND_InitLog@@YAXXZ();
}

/*
==============
SND_InitLog
==============
*/
void SND_InitLog(void)
{
  memset_0(g_snd.logSkipMissingHash, 0, sizeof(g_snd.logSkipMissingHash));
  memset_0(g_snd.logSkipMissingTimestamp, 0, sizeof(g_snd.logSkipMissingTimestamp));
  memset_0(g_snd.logReverseHash, 0, sizeof(g_snd.logReverseHash));
  g_snd.logTimestamp = 1;
}

/*
==============
SND_LogMissingAliasId
==============
*/
void SND_LogMissingAliasId(unsigned int hash)
{
  unsigned int v2; 
  unsigned int *logSkipMissingTimestamp; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int i; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int *p_hash; 
  unsigned int v11; 
  __int64 v12; 
  bool v13; 
  unsigned int v14; 
  DLogContext context; 
  char dest[128]; 
  char buffer[4096]; 

  if ( !hash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_log.cpp", 121, ASSERT_TYPE_ASSERT, "(hash != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "hash != SND_INVALID_HASH") )
    __debugbreak();
  SND_DevhostMissingAlias(hash);
  Sys_EnterCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
  v2 = g_snd.logSkipMissingTimestamp[0];
  logSkipMissingTimestamp = g_snd.logSkipMissingTimestamp;
  v4 = 0;
  v5 = 0;
  for ( i = 0; i < 0x80; ++i )
  {
    v7 = *(logSkipMissingTimestamp - 128);
    if ( v7 == hash )
    {
      v14 = g_snd.logTimestamp++;
      g_snd.logSkipMissingTimestamp[v5] = v14;
      goto LABEL_25;
    }
    if ( v7 )
    {
      if ( v2 <= *logSkipMissingTimestamp )
        goto LABEL_11;
      v2 = *logSkipMissingTimestamp;
    }
    else
    {
      v2 = 0;
    }
    v5 = i;
LABEL_11:
    ++logSkipMissingTimestamp;
  }
  dest[0] = 0;
  v8 = v5;
  g_snd.logSkipMissingHash[v8] = hash;
  v9 = g_snd.logTimestamp++;
  g_snd.logSkipMissingTimestamp[v8] = v9;
  Sys_EnterCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
  p_hash = &g_snd.logReverseHash[0].hash;
  while ( *p_hash != hash )
  {
    ++v4;
    p_hash += 34;
    if ( v4 >= 0x80 )
      goto LABEL_17;
  }
  v11 = g_snd.logTimestamp++;
  v12 = v4;
  g_snd.logReverseHash[v12].timestamp = v11;
  Core_strcpy(dest, 0x80ui64, g_snd.logReverseHash[v12].name);
LABEL_17:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
  if ( dest[0] )
  {
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v13 = DLog_BeginEvent(&context, "sound_string");
      context.autoEndEvent = 1;
      if ( v13 && DLog_String(&context, "string", dest, 0) )
        DLog_RecordContext(&context);
    }
  }
LABEL_25:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
}

/*
==============
SND_LogRegisterString
==============
*/
void SND_LogRegisterString(const char *name, unsigned int hash)
{
  unsigned int timestamp; 
  unsigned int *p_timestamp; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 

  SND_DevhostString(name);
  Sys_EnterCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
  timestamp = g_snd.logReverseHash[0].timestamp;
  p_timestamp = &g_snd.logReverseHash[0].timestamp;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(p_timestamp - 1);
    if ( v8 == hash )
      break;
    if ( !v8 )
    {
      v6 = v7;
LABEL_11:
      v11 = v6;
      g_snd.logReverseHash[v11].hash = hash;
      v12 = g_snd.logTimestamp++;
      g_snd.logReverseHash[v11].timestamp = v12;
      Core_strcpy(g_snd.logReverseHash[v11].name, 0x80ui64, name);
      goto LABEL_13;
    }
    v9 = *p_timestamp;
    v10 = v7;
    if ( timestamp <= *p_timestamp )
      v10 = v6;
    ++v7;
    p_timestamp += 34;
    v6 = v10;
    if ( timestamp <= v9 )
      v9 = timestamp;
    timestamp = v9;
    if ( v7 >= 0x80 )
      goto LABEL_11;
  }
  v13 = g_snd.logTimestamp++;
  g_snd.logReverseHash[v6].timestamp = v13;
LABEL_13:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_LOOKUP_CACHE);
}

/*
==============
SND_LogSkip
==============
*/
char SND_LogSkip(unsigned int hash, unsigned int skipCount, unsigned int *skipHash, unsigned int *skipTime)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  char result; 
  unsigned int v13; 

  v4 = *skipTime;
  v5 = 0;
  v6 = 0;
  if ( !skipCount )
  {
LABEL_10:
    v10 = v5;
    skipHash[v10] = hash;
    v11 = g_snd.logTimestamp++;
    result = 0;
    skipTime[v10] = v11;
    return result;
  }
  v8 = skipTime;
  while ( 1 )
  {
    v9 = *(unsigned int *)((char *)v8 + (char *)skipHash - (char *)skipTime);
    if ( v9 == hash )
      break;
    if ( !v9 )
    {
      v4 = 0;
LABEL_8:
      v5 = v6;
      goto LABEL_9;
    }
    if ( v4 > *v8 )
    {
      v4 = *v8;
      goto LABEL_8;
    }
LABEL_9:
    ++v6;
    ++v8;
    if ( v6 >= skipCount )
      goto LABEL_10;
  }
  v13 = g_snd.logTimestamp++;
  skipTime[v5] = v13;
  return 1;
}

