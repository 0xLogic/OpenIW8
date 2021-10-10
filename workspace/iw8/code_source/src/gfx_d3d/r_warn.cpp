/*
==============
R_WarnOncePerFrameUnique
==============
*/

void R_WarnOncePerFrameUnique(GfxWarningType warnTypeBegin, unsigned int messageLimit, unsigned int *messageHashes, unsigned int messageHash, ...)
{
  ?R_WarnOncePerFrameUnique@@YAXW4GfxWarningType@@IPEAIIZZ(warnTypeBegin, messageLimit, messageHashes, messageHash);
}

/*
==============
R_WarnInit
==============
*/

void R_WarnInit(void)
{
  ?R_WarnInit@@YAXXZ();
}

/*
==============
R_MessageStringHash
==============
*/

unsigned int __fastcall R_MessageStringHash(const char *text)
{
  return ?R_MessageStringHash@@YAIPEBD@Z(text);
}

/*
==============
R_WarnInitDvars
==============
*/

void R_WarnInitDvars(void)
{
  ?R_WarnInitDvars@@YAXXZ();
}

/*
==============
R_WarnOncePerFrame
==============
*/

void R_WarnOncePerFrame(GfxWarningType warnType, ...)
{
  ?R_WarnOncePerFrame@@YAXW4GfxWarningType@@ZZ(warnType);
}

/*
==============
R_PerformanceWarning
==============
*/

void __fastcall R_PerformanceWarning(const char *text, float ypos)
{
  ?R_PerformanceWarning@@YAXPEBDM@Z(text, ypos);
}

/*
==============
R_MessageStringHash
==============
*/
__int64 R_MessageStringHash(const char *text)
{
  int v1; 
  __int64 result; 

  v1 = *text;
  for ( result = 0i64; *text; v1 = *text )
  {
    ++text;
    result = (unsigned int)(v1 + 33 * result);
  }
  return result;
}

/*
==============
R_PerformanceWarning
==============
*/
void R_PerformanceWarning(const char *text, float ypos)
{
  GfxFont *v3; 

  if ( com_statmon->current.enabled )
  {
    v3 = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
    R_AddCmdDrawText(text, 0x7FFFFFFF, v3, 28, 100.0, ypos, 1.0, 1.0, 0.0, &colorRedFaded);
  }
}

/*
==============
R_UpdateFrameRate
==============
*/
float R_UpdateFrameRate()
{
  int v0; 
  float result; 
  int v2; 
  bool v3; 
  int v4; 

  if ( frameCount_0 != rg.frontEndFrameCount )
  {
    if ( !frameCount_0 )
    {
      v0 = Sys_Milliseconds();
      result = frameRate;
      previous_0 = v0;
      frameCount_0 = rg.frontEndFrameCount;
      return result;
    }
    if ( frameCount_0 + 1 == rg.frontEndFrameCount )
    {
      v2 = Sys_Milliseconds();
      v3 = v2 == previous_0;
      v4 = v2 - previous_0;
      previous_0 = v2;
      if ( v3 )
      {
        v4 = 1;
LABEL_8:
        result = 1000.0 / (float)v4;
LABEL_10:
        frameCount_0 = rg.frontEndFrameCount;
        frameRate = result;
        return result;
      }
      if ( v4 >= 0 )
        goto LABEL_8;
    }
    result = 0.0;
    goto LABEL_10;
  }
  return frameRate;
}

/*
==============
R_WarnInit
==============
*/
void R_WarnInit(void)
{
  memset_0(s_warnCount, 0, sizeof(s_warnCount));
}

/*
==============
R_WarnInitDvars
==============
*/
void R_WarnInitDvars(void)
{
  r_warningRepeatDelay = Dvar_RegisterFloat("MSNTLLOLOK", 5.0, 0.0, 30.0, 0, "Number of seconds after displaying a \"per-frame\" warning before it will display again");
}

/*
==============
R_WarnOncePerFrame
==============
*/
void R_WarnOncePerFrame(GfxWarningType warnType, ...)
{
  float updated; 
  char dest[1024]; 
  va_list ap; 

  va_start(ap, warnType);
  if ( !r_warningRepeatDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 540, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
    __debugbreak();
  updated = R_UpdateFrameRate();
  if ( s_warnCount[warnType] < rg.frontEndFrameCount )
  {
    Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[warnType], ap);
    R_WarnOncePerFrameInternal(warnType, dest, updated);
  }
}

/*
==============
R_WarnOncePerFrameInternal
==============
*/
void R_WarnOncePerFrameInternal(GfxWarningType warnType, const char *message, float frameRate)
{
  __int64 v4; 

  v4 = warnType;
  if ( !r_warningRepeatDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 519, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
    __debugbreak();
  s_warnCount[v4] = rg.frontEndFrameCount + (int)(float)(frameRate * r_warningRepeatDelay->current.value);
  Com_PrintWarning(8, "WARNING: %s", message);
}

/*
==============
R_WarnOncePerFrameUnique
==============
*/
void R_WarnOncePerFrameUnique(GfxWarningType warnTypeBegin, unsigned int messageLimit, unsigned int *messageHashes, unsigned int messageHash, ...)
{
  __int64 v4; 
  float updated; 
  unsigned int v8; 
  unsigned int i; 
  int v10; 
  char *v11; 
  int v12; 
  unsigned int frontEndFrameCount; 
  int v14; 
  char dest[1024]; 
  va_list ap; 

  va_start(ap, messageHash);
  v4 = warnTypeBegin;
  if ( !messageHashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 599, ASSERT_TYPE_ASSERT, "(messageHashes)", (const char *)&queryFormat, "messageHashes") )
    __debugbreak();
  if ( !messageLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 600, ASSERT_TYPE_ASSERT, "(messageLimit > 0)", (const char *)&queryFormat, "messageLimit > 0") )
    __debugbreak();
  updated = R_UpdateFrameRate();
  v8 = messageHash;
  if ( messageHash )
  {
    i = messageHash;
  }
  else
  {
    Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[v4], ap);
    v10 = dest[0];
    v11 = dest;
    for ( i = 0; *v11; v10 = *v11 )
    {
      ++v11;
      i = v10 + 33 * i;
    }
    v8 = 0;
  }
  v12 = 227;
  if ( messageLimit )
  {
    frontEndFrameCount = rg.frontEndFrameCount;
    v14 = v4;
    while ( i != messageHashes[(unsigned int)(v14 - v4)] )
    {
      if ( v12 == 227 && s_warnCount[v14] < rg.frontEndFrameCount )
        v12 = v14;
      if ( ++v14 - (_DWORD)v4 == messageLimit )
        goto LABEL_21;
    }
    v12 = v14;
LABEL_21:
    if ( v12 != 227 && s_warnCount[v12] < rg.frontEndFrameCount )
    {
      if ( v8 )
      {
        Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[v4], ap);
        frontEndFrameCount = rg.frontEndFrameCount;
      }
      if ( !r_warningRepeatDelay )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 519, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
          __debugbreak();
        frontEndFrameCount = rg.frontEndFrameCount;
      }
      s_warnCount[v12] = frontEndFrameCount + (int)(float)(updated * r_warningRepeatDelay->current.value);
      Com_PrintWarning(8, "WARNING: %s", dest);
      messageHashes[v12 - (int)v4] = i;
    }
  }
}

