/*
==============
Com_LocalTimeFromUTC
==============
*/

tm *__fastcall Com_LocalTimeFromUTC(int utcTime)
{
  return ?Com_LocalTimeFromUTC@@YAPEAUtm@@H@Z(utcTime);
}

/*
==============
Com_RealTime
==============
*/

int __fastcall Com_RealTime(int baseTime, qtime_s *qtime)
{
  return ?Com_RealTime@@YAHHPEAUqtime_s@@@Z(baseTime, qtime);
}

/*
==============
Com_FilterPath
==============
*/

bool __fastcall Com_FilterPath(const char *filter, const char *name, int casesensitive)
{
  return ?Com_FilterPath@@YA_NPEBD0H@Z(filter, name, casesensitive);
}

/*
==============
Com_Filter
==============
*/

bool __fastcall Com_Filter(const char *filter, const char *name, int casesensitive)
{
  return ?Com_Filter@@YA_NPEBD0H@Z(filter, name, casesensitive);
}

/*
==============
Com_RealTimeGMT
==============
*/

int __fastcall Com_RealTimeGMT(int baseTime, qtime_s *qtime)
{
  return ?Com_RealTimeGMT@@YAHHPEAUqtime_s@@@Z(baseTime, qtime);
}

/*
==============
Com_Filter
==============
*/
char Com_Filter(const char *filter, const char *name, int casesensitive)
{
  char v3; 
  const char *v6; 
  char v7; 
  char v8; 
  unsigned __int64 v9; 
  char *v10; 
  __int64 v11; 
  char v12; 
  int v13; 
  char v14; 
  char v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  unsigned int v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23; 
  char v24; 
  char v25; 
  char i; 
  bool v27; 
  char v28; 
  char v29; 
  char v30; 
  char SubStr[1024]; 

  v3 = *filter;
  v6 = filter;
  if ( !*filter )
    return 1;
  v7 = *filter;
  while ( 1 )
  {
    if ( v7 == 42 )
    {
      v8 = *++v6;
      v9 = 0i64;
      if ( v8 )
      {
        do
        {
          if ( v8 == 42 )
            break;
          if ( v8 == 63 )
            break;
          ++v6;
          SubStr[v9++] = v8;
          v8 = *v6;
        }
        while ( *v6 );
        if ( v9 >= 0x400 )
        {
          j___report_rangecheckfailure(v9);
          JUMPOUT(0x141830C45i64);
        }
      }
      SubStr[v9] = 0;
      if ( SubStr[0] )
      {
        if ( casesensitive )
          v10 = strstr_0(name, SubStr);
        else
          v10 = (char *)I_stristr(name, SubStr);
        if ( !v10 )
          return 0;
        v11 = -1i64;
        do
          ++v11;
        while ( SubStr[v11] );
        name = &v10[v11];
      }
      goto LABEL_72;
    }
    if ( v7 == 63 )
      goto LABEL_71;
    if ( v7 == 91 )
    {
      v12 = v6[1];
      v7 = v3;
      if ( v12 == 91 )
      {
        ++v6;
        goto LABEL_72;
      }
      if ( v3 == 91 )
        break;
    }
    if ( casesensitive )
    {
      v27 = v7 == *name;
    }
    else
    {
      v28 = *name;
      v29 = v7 & 0xDF;
      if ( (unsigned int)(v7 - 97) >= 0x1A )
        v29 = v7;
      v30 = v28 & 0xDF;
      if ( (unsigned int)(v28 - 97) >= 0x1A )
        v30 = *name;
      v27 = v29 == v30;
    }
    if ( !v27 )
      return 0;
LABEL_71:
    ++v6;
    ++name;
LABEL_72:
    v3 = *v6;
    v7 = *v6;
    if ( !*v6 )
      return 1;
  }
  ++v6;
  v13 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
LABEL_58:
        for ( i = *v6; i; i = *++v6 )
        {
          if ( i == 93 && v6[1] != 93 )
            break;
        }
        goto LABEL_71;
      }
      v14 = *v6;
      if ( *v6 == 93 && v6[1] != 93 )
        return 0;
      if ( v6[1] != 45 || (v15 = v6[2]) == 0 || v15 == 93 && v6[3] != 93 )
      {
        if ( casesensitive )
        {
          if ( v14 == *name )
            v13 = 1;
        }
        else
        {
          v23 = *name;
          v24 = v14 & 0xDF;
          if ( (unsigned int)(v14 - 97) >= 0x1A )
            v24 = *v6;
          v25 = v23 & 0xDF;
          if ( (unsigned int)(v23 - 97) >= 0x1A )
            v25 = *name;
          if ( v24 == v25 )
            v13 = 1;
        }
        v17 = 1i64;
        goto LABEL_56;
      }
      v16 = *name;
      if ( !casesensitive )
        break;
      if ( v16 < v14 || v16 > v15 )
        goto LABEL_45;
      v13 = 1;
      v17 = 3i64;
LABEL_56:
      v6 += v17;
      if ( !*v6 )
      {
        if ( !v13 )
          return 0;
        goto LABEL_58;
      }
    }
    v18 = v14 & 0xDF;
    v19 = v16 - 97;
    if ( (unsigned int)(v14 - 97) >= 0x1A )
      v18 = *v6;
    v20 = v16 & 0xDF;
    if ( v19 >= 0x1A )
      v20 = *name;
    if ( v20 >= v18 )
    {
      v21 = v15 & 0xDF;
      if ( (unsigned int)(v15 - 97) >= 0x1A )
        v21 = v6[2];
      v22 = v16 & 0xDF;
      if ( v19 >= 0x1A )
        v22 = *name;
      if ( v22 <= v21 )
        v13 = 1;
    }
LABEL_45:
    v17 = 3i64;
    goto LABEL_56;
  }
  return 0;
}

/*
==============
Com_FilterPath
==============
*/
char Com_FilterPath(const char *filter, const char *name, int casesensitive)
{
  int v3; 
  int v4; 
  __int64 v5; 
  char *i; 
  char v8; 
  int v9; 
  char v10; 
  unsigned __int64 j; 
  char v12; 
  char filtera[64]; 
  char namea[64]; 

  v3 = 0;
  v4 = 0;
  v5 = 0i64;
  i = (char *)(filter - filtera);
  do
  {
    v8 = filtera[v5 + (_QWORD)i];
    if ( !v8 )
      break;
    if ( v8 == 92 || v8 == 58 )
      v8 = 47;
    ++v4;
    filtera[v5++] = v8;
  }
  while ( v5 < 63 );
  if ( (unsigned __int64)v4 >= 0x40 )
    goto LABEL_24;
  filtera[v4] = 0;
  v9 = 0;
  for ( i = NULL; (__int64)i < 63; ++i )
  {
    v10 = namea[(_QWORD)i + name - namea];
    if ( !v10 )
      break;
    if ( v10 == 92 || v10 == 58 )
      v10 = 47;
    ++v9;
    namea[(_QWORD)i] = v10;
  }
  if ( (unsigned __int64)v9 >= 0x40 )
  {
LABEL_24:
    j___report_rangecheckfailure(i);
    JUMPOUT(0x141830E42i64);
  }
  namea[v9] = 0;
  i = filtera;
  for ( j = 0i64; ; ++j )
  {
    v12 = filtera[j];
    if ( !v12 )
      return Com_Filter(i, namea, casesensitive);
    if ( v12 == 59 )
      break;
LABEL_21:
    if ( ++v3 >= 63 )
      return Com_Filter(i, namea, casesensitive);
  }
  if ( j >= 0x40 )
    goto LABEL_24;
  filtera[j] = 0;
  if ( !Com_Filter(i, namea, casesensitive) )
  {
    i = &filtera[v3 + 1];
    goto LABEL_21;
  }
  return 1;
}

/*
==============
Com_LocalTimeFromUTC
==============
*/
tm *Com_LocalTimeFromUTC(int utcTime)
{
  __time64_t v3; 
  struct tm *v4; 
  __time64_t v5; 
  struct tm *v7; 
  struct tm *v9; 
  __time64_t Time; 
  __time64_t v14; 

  v3 = utcTime;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  Time = _time64(NULL);
  v4 = _gmtime64(&Time);
  v5 = _mktime64(v4);
  *(double *)&_XMM0 = _difftime64(v5, Time);
  v14 = v3;
  __asm { vmovaps xmm6, xmm0 }
  v7 = _gmtime64(&v14);
  __asm { vcvttsd2si ecx, xmm6 }
  v9 = v7;
  v7->tm_sec -= _ECX;
  _mktime64(v7);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return v9;
}

/*
==============
Com_RealTime
==============
*/
__time64_t Com_RealTime(int baseTime, qtime_s *qtime)
{
  __time64_t result; 
  struct tm *v4; 
  __time64_t Time; 

  if ( baseTime )
    result = baseTime;
  else
    result = _time64(NULL);
  Time = result;
  if ( qtime )
  {
    v4 = _localtime64(&Time);
    if ( v4 )
    {
      qtime->tm_sec = v4->tm_sec;
      qtime->tm_min = v4->tm_min;
      qtime->tm_hour = v4->tm_hour;
      qtime->tm_mday = v4->tm_mday;
      qtime->tm_mon = v4->tm_mon;
      qtime->tm_year = v4->tm_year;
      qtime->tm_wday = v4->tm_wday;
      qtime->tm_yday = v4->tm_yday;
      qtime->tm_isdst = v4->tm_isdst;
    }
    return (unsigned int)Time;
  }
  return result;
}

/*
==============
Com_RealTimeGMT
==============
*/
__time64_t Com_RealTimeGMT(int baseTime, qtime_s *qtime)
{
  __time64_t result; 
  struct tm *v4; 
  __time64_t Time; 

  if ( baseTime )
    result = baseTime;
  else
    result = _time64(NULL);
  Time = result;
  if ( qtime )
  {
    v4 = _gmtime64(&Time);
    if ( v4 )
    {
      qtime->tm_sec = v4->tm_sec;
      qtime->tm_min = v4->tm_min;
      qtime->tm_hour = v4->tm_hour;
      qtime->tm_mday = v4->tm_mday;
      qtime->tm_mon = v4->tm_mon;
      qtime->tm_year = v4->tm_year;
      qtime->tm_wday = v4->tm_wday;
      qtime->tm_yday = v4->tm_yday;
      qtime->tm_isdst = v4->tm_isdst;
    }
    return (unsigned int)Time;
  }
  return result;
}

