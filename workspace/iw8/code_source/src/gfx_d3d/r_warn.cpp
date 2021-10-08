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

void __fastcall R_PerformanceWarning(const char *text, double ypos)
{
  GfxFont *v6; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( com_statmon->current.enabled )
  {
    v6 = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+68h+var_28], xmm0
      vmovss  xmm0, cs:__real@42c80000
      vmovss  [rsp+68h+var_30], xmm1
      vmovss  [rsp+68h+var_38], xmm1
      vmovss  [rsp+68h+var_40], xmm6
      vmovss  [rsp+68h+var_48], xmm0
    }
    R_AddCmdDrawText(text, 0x7FFFFFFF, v6, 28, v11, v12, v13, v14, v15, &colorRedFaded);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
R_UpdateFrameRate
==============
*/

float __fastcall R_UpdateFrameRate(double _XMM0_8, double _XMM1_8)
{
  int v2; 
  int v4; 
  bool v5; 
  int v6; 

  if ( frameCount_0 == rg.frontEndFrameCount )
  {
    __asm { vmovss  xmm0, cs:frameRate }
  }
  else if ( frameCount_0 )
  {
    if ( frameCount_0 + 1 == rg.frontEndFrameCount && ((v4 = Sys_Milliseconds(), v5 = v4 == previous_0, v6 = v4 - previous_0, previous_0 = v4, v5) || v6 >= 0) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@447a0000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vdivss  xmm0, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    frameCount_0 = rg.frontEndFrameCount;
    __asm { vmovss  cs:frameRate, xmm0 }
  }
  else
  {
    v2 = Sys_Milliseconds();
    __asm { vmovss  xmm0, cs:frameRate }
    previous_0 = v2;
    frameCount_0 = rg.frontEndFrameCount;
  }
  return *(float *)&_XMM0;
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

void __fastcall R_WarnInitDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  __asm
  {
    vmovss  xmm3, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@40a00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_warningRepeatDelay = Dvar_RegisterFloat("MSNTLLOLOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Number of seconds after displaying a \"per-frame\" warning before it will display again");
}

/*
==============
R_WarnOncePerFrame
==============
*/
void R_WarnOncePerFrame(GfxWarningType warnType, ...)
{
  double v2; 
  char dest[1024]; 
  void *retaddr; 
  va_list ap; 

  va_start(ap, warnType);
  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( !r_warningRepeatDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 540, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
    __debugbreak();
  *(float *)&_XMM0 = R_UpdateFrameRate(*(double *)&_XMM0, v2);
  __asm { vmovaps xmm6, xmm0 }
  if ( s_warnCount[warnType] < rg.frontEndFrameCount )
  {
    Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[warnType], ap);
    __asm { vmovaps xmm2, xmm6; frameRate }
    R_WarnOncePerFrameInternal(warnType, dest, *(float *)&_XMM2);
  }
  __asm { vmovaps xmm6, [rsp+458h+var_18] }
}

/*
==============
R_WarnOncePerFrameInternal
==============
*/

void __fastcall R_WarnOncePerFrameInternal(GfxWarningType warnType, const char *message, double frameRate)
{
  __int64 v6; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  v6 = warnType;
  if ( !r_warningRepeatDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 519, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rax+28h]
    vcvttss2si ecx, xmm0
  }
  s_warnCount[v6] = rg.frontEndFrameCount + _ECX;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  Com_PrintWarning(8, "WARNING: %s", message);
}

/*
==============
R_WarnOncePerFrameUnique
==============
*/
void R_WarnOncePerFrameUnique(GfxWarningType warnTypeBegin, unsigned int messageLimit, unsigned int *messageHashes, unsigned int messageHash, ...)
{
  double v5; 
  __int64 v7; 
  unsigned int v10; 
  unsigned int i; 
  int v13; 
  char *v14; 
  int v15; 
  unsigned int frontEndFrameCount; 
  int v17; 
  char dest[1024]; 
  va_list ap; 

  va_start(ap, messageHash);
  __asm { vmovaps [rsp+498h+var_48], xmm6 }
  v7 = warnTypeBegin;
  if ( !messageHashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 599, ASSERT_TYPE_ASSERT, "(messageHashes)", (const char *)&queryFormat, "messageHashes") )
    __debugbreak();
  if ( !messageLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 600, ASSERT_TYPE_ASSERT, "(messageLimit > 0)", (const char *)&queryFormat, "messageLimit > 0") )
    __debugbreak();
  *(float *)&_XMM0 = R_UpdateFrameRate(*(double *)&_XMM0, v5);
  v10 = messageHash;
  __asm { vmovaps xmm6, xmm0 }
  if ( messageHash )
  {
    i = messageHash;
  }
  else
  {
    Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[v7], ap);
    v13 = dest[0];
    v14 = dest;
    for ( i = 0; *v14; v13 = *v14 )
    {
      ++v14;
      i = v13 + 33 * i;
    }
    v10 = 0;
  }
  v15 = 227;
  if ( messageLimit )
  {
    frontEndFrameCount = rg.frontEndFrameCount;
    v17 = v7;
    while ( i != messageHashes[(unsigned int)(v17 - v7)] )
    {
      if ( v15 == 227 && s_warnCount[v17] < rg.frontEndFrameCount )
        v15 = v17;
      if ( ++v17 - (_DWORD)v7 == messageLimit )
        goto LABEL_21;
    }
    v15 = v17;
LABEL_21:
    if ( v15 != 227 && s_warnCount[v15] < rg.frontEndFrameCount )
    {
      if ( v10 )
      {
        Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, s_warnFormat[v7], ap);
        frontEndFrameCount = rg.frontEndFrameCount;
      }
      if ( !r_warningRepeatDelay )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_warn.cpp", 519, ASSERT_TYPE_ASSERT, "(r_warningRepeatDelay)", (const char *)&queryFormat, "r_warningRepeatDelay") )
          __debugbreak();
        frontEndFrameCount = rg.frontEndFrameCount;
      }
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rax+28h]
        vcvttss2si eax, xmm0
      }
      s_warnCount[v15] = frontEndFrameCount + _EAX;
      Com_PrintWarning(8, "WARNING: %s", dest);
      messageHashes[v15 - (int)v7] = i;
    }
  }
  __asm { vmovaps xmm6, [rsp+498h+var_48] }
}

