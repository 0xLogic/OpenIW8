/*
==============
R_RT_DepthHandle::Cast
==============
*/

R_RT_DepthHandle *__fastcall R_RT_DepthHandle::Cast(R_RT_DepthHandle *result, R_RT_Handle *unionHandle)
{
  return ?Cast@R_RT_DepthHandle@@SA?AV1@VR_RT_Handle@@@Z(result, unionHandle);
}

/*
==============
R_RT_Handle::IsValid
==============
*/

bool __fastcall R_RT_Handle::IsValid(R_RT_Handle *this)
{
  return ?IsValid@R_RT_Handle@@QEBA_NXZ(this);
}

/*
==============
R_RT_ColorHandle::Cast
==============
*/

R_RT_ColorHandle *__fastcall R_RT_ColorHandle::Cast(R_RT_ColorHandle *result, R_RT_Handle *unionHandle)
{
  return ?Cast@R_RT_ColorHandle@@SA?AV1@VR_RT_Handle@@@Z(result, unionHandle);
}

/*
==============
R_RT_Group::GetAnyRt
==============
*/

R_RT_Handle *__fastcall R_RT_Group::GetAnyRt(R_RT_Group *this, R_RT_Handle *result)
{
  return ?GetAnyRt@R_RT_Group@@QEBA?AVR_RT_Handle@@XZ(this, result);
}

/*
==============
R_RT_Group::Assign
==============
*/

void __fastcall R_RT_Group::Assign(R_RT_Group *this, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  ?Assign@R_RT_Group@@QEAAXIPEBVR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(this, colorRtCount, colorRts, depthRt);
}

/*
==============
R_RT_Group::AssignColorDepth
==============
*/

void __fastcall R_RT_Group::AssignColorDepth(R_RT_Group *this, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  ?AssignColorDepth@R_RT_Group@@QEAAXVR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(this, colorRt, depthRt);
}

/*
==============
R_RT_Group::ConstructColorDepth
==============
*/

R_RT_Group *__fastcall R_RT_Group::ConstructColorDepth(R_RT_Group *result, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  return ?ConstructColorDepth@R_RT_Group@@SA?AU1@VR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(result, colorRt, depthRt);
}

/*
==============
R_RT_Group::ConstructColor
==============
*/

R_RT_Group *__fastcall R_RT_Group::ConstructColor(R_RT_Group *result, R_RT_ColorHandle *colorRt)
{
  return ?ConstructColor@R_RT_Group@@SA?AU1@VR_RT_ColorHandle@@@Z(result, colorRt);
}

/*
==============
R_RT_Handle::IsReadOnly
==============
*/

bool __fastcall R_RT_Handle::IsReadOnly(R_RT_Handle *this)
{
  return ?IsReadOnly@R_RT_Handle@@QEBA_NXZ(this);
}

/*
==============
R_RT_Group::AssignColor
==============
*/

void __fastcall R_RT_Group::AssignColor(R_RT_Group *this, R_RT_ColorHandle *colorRt)
{
  ?AssignColor@R_RT_Group@@QEAAXVR_RT_ColorHandle@@@Z(this, colorRt);
}

/*
==============
R_RT_Handle::GetAuxDirty
==============
*/

bool __fastcall R_RT_Handle::GetAuxDirty(R_RT_Handle *this)
{
  return ?GetAuxDirty@R_RT_Handle@@QEBA_NXZ(this);
}

/*
==============
R_RT_Group::IsEmpty
==============
*/

bool __fastcall R_RT_Group::IsEmpty(R_RT_Group *this)
{
  return ?IsEmpty@R_RT_Group@@QEBA_NXZ(this);
}

/*
==============
R_RT_Group::As
==============
*/

R_RT_Group *__fastcall R_RT_Group::As(R_RT_Group *this, R_RT_Group *result, unsigned __int16 readOnlyFlag)
{
  return ?As@R_RT_Group@@QEBA?AU1@G@Z(this, result, readOnlyFlag);
}

/*
==============
R_RT_ColorHandle::Cast
==============
*/
R_RT_ColorHandle *R_RT_ColorHandle::Cast(R_RT_ColorHandle *result, R_RT_Handle *unionHandle)
{
  R_RT_ColorHandle *v4; 

  if ( unionHandle->m_surfaceID )
  {
    R_RT_Handle::GetSurface(unionHandle);
  }
  else if ( unionHandle->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( unionHandle->m_surfaceID && (R_RT_Handle::GetSurface(unionHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    __debugbreak();
  v4 = result;
  *result = (R_RT_ColorHandle)*unionHandle;
  return v4;
}

/*
==============
R_RT_Handle::IsValid
==============
*/
bool R_RT_Handle::IsValid(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 

  m_surfaceID = this->m_surfaceID;
  if ( this->m_surfaceID )
  {
    R_RT_Handle::GetSurface(this);
  }
  else if ( this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
    return 0;
  }
  return m_surfaceID != 0;
}

/*
==============
R_RT_Group::AssignColor
==============
*/
void R_RT_Group::AssignColor(R_RT_Group *this, R_RT_ColorHandle *colorRt)
{
  R_RT_DepthHandle v7; 
  R_RT_Handle v8; 

  if ( !R_RT_Handle::IsValid(colorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
    __debugbreak();
  this->m_colorRtCount = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v7.m_surfaceID = 0;
  v7.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v7.m_tracking.m_name = _XMM0;
  v8 = colorRt->R_RT_Handle;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v8);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  this->m_colorRts[0] = *colorRt;
  this->m_depthRt = v7;
}

/*
==============
R_RT_Group::ConstructColorDepth
==============
*/
R_RT_Group *R_RT_Group::ConstructColorDepth(R_RT_Group *result, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  __m256i v4; 
  R_RT_Handle v8; 
  R_RT_Group *v9; 
  R_RT_Handle v10; 
  __m256i v11; 
  __m256i v12; 

  v4 = *(__m256i *)colorRt;
  v11 = *(__m256i *)depthRt;
  v10 = (R_RT_Handle)v11;
  v12 = v4;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
    v11 = (__m256i)v10;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  v8 = colorRt->R_RT_Handle;
  result->m_colorRtCount = 1;
  v10 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
  }
  else
  {
    if ( v12.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v10.m_surfaceID, *(_QWORD *)&v10.m_tracking.m_allocCounter, v10.m_tracking.m_name, v10.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v9 = result;
  result->m_colorRts[0] = *colorRt;
  result->m_depthRt = (R_RT_DepthHandle)v11;
  return v9;
}

/*
==============
R_RT_Group::GetAnyRt
==============
*/
R_RT_Handle *R_RT_Group::GetAnyRt(R_RT_Group *this, R_RT_Handle *result)
{
  R_RT_Handle m_depthRt; 
  R_RT_Handle v7; 
  R_RT_Handle v8; 

  if ( this->m_colorRtCount )
  {
    m_depthRt = (R_RT_Handle)this->m_colorRts[0];
    v8 = m_depthRt;
    v7 = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v7);
      if ( (R_RT_Handle::GetSurface(&v7)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 396, ASSERT_TYPE_ASSERT, "(!colorRt.IsValid() || colorRt.IsColor())", (const char *)&queryFormat, "!colorRt.IsValid() || colorRt.IsColor()") )
      {
LABEL_5:
        m_depthRt = v7;
        goto LABEL_6;
      }
LABEL_13:
      m_depthRt = v7;
      __debugbreak();
      goto LABEL_6;
    }
  }
  else
  {
    m_depthRt = (R_RT_Handle)this->m_depthRt;
    v8 = m_depthRt;
    v7 = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v7);
      if ( (R_RT_Handle::GetSurface(&v7)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 403, ASSERT_TYPE_ASSERT, "(!depthRt.IsValid() || depthRt.IsDepth())", (const char *)&queryFormat, "!depthRt.IsValid() || depthRt.IsDepth()") )
        goto LABEL_5;
      goto LABEL_13;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    m_depthRt = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_6:
  v8 = m_depthRt;
  *result = m_depthRt;
  return result;
}

/*
==============
R_RT_Group::As
==============
*/
R_RT_Group *R_RT_Group::As(R_RT_Group *this, R_RT_Group *result, unsigned __int16 readOnlyFlag)
{
  unsigned int v4; 
  int m_colorRtCount; 
  __int64 v8; 
  __int16 v9; 
  __int16 v10; 
  bool v11; 
  __int16 v12; 
  __int16 v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 

  v4 = 0;
  m_colorRtCount = this->m_colorRtCount;
  result->m_colorRtCount = m_colorRtCount;
  if ( m_colorRtCount )
  {
    do
    {
      v8 = v4;
      if ( (readOnlyFlag & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 121, ASSERT_TYPE_ASSERT, "(readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag)", (const char *)&queryFormat, "readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag") )
        __debugbreak();
      v9 = this->m_colorRts[v8].m_surfaceID & 0x7FFF;
      if ( v9 )
        v10 = readOnlyFlag | v9;
      else
        v10 = 0;
      v18.m_surfaceID = v10;
      *(_OWORD *)&v18.m_tracking.m_allocCounter = *(_OWORD *)&this->m_colorRts[v8].m_tracking.m_allocCounter;
      v18.m_tracking.m_location = this->m_colorRts[v8].m_tracking.m_location;
      v19 = v18;
      if ( v10 )
      {
        R_RT_Handle::GetSurface(&v19);
        if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_13:
          if ( v11 )
            __debugbreak();
        }
      }
      else if ( v18.m_tracking.m_allocCounter )
      {
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        goto LABEL_13;
      }
      ++v4;
      result->m_colorRts[v8] = (R_RT_ColorHandle)v19;
    }
    while ( v4 != m_colorRtCount );
  }
  if ( (readOnlyFlag & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 121, ASSERT_TYPE_ASSERT, "(readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag)", (const char *)&queryFormat, "readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag") )
    __debugbreak();
  v12 = this->m_depthRt.m_surfaceID & 0x7FFF;
  if ( v12 )
    v13 = readOnlyFlag | v12;
  else
    v13 = 0;
  v18.m_surfaceID = v13;
  *(_OWORD *)&v18.m_tracking.m_allocCounter = *(_OWORD *)&this->m_depthRt.m_tracking.m_allocCounter;
  v18.m_tracking.m_location = this->m_depthRt.m_tracking.m_location;
  v19 = v18;
  if ( v13 )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x10) != 0 )
      goto LABEL_29;
    v14 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
    v15 = 277;
    v16 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
  }
  else
  {
    if ( !v18.m_tracking.m_allocCounter )
      goto LABEL_29;
    v14 = "!this->m_tracking.m_allocCounter";
    v15 = 100;
    v16 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v15, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v14) )
    __debugbreak();
LABEL_29:
  result->m_depthRt = (R_RT_DepthHandle)v19;
  return result;
}

/*
==============
R_RT_Group::Assign
==============
*/
void R_RT_Group::Assign(R_RT_Group *this, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  R_RT_DepthHandle *v5; 
  unsigned int v9; 
  __int64 v10; 
  R_RT_Handle v12; 
  R_RT_Handle v13; 

  v5 = depthRt;
  if ( colorRtCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 437, ASSERT_TYPE_ASSERT, "(colorRtCount <= ( sizeof( *array_counter( this->m_colorRts ) ) + 0 ))", (const char *)&queryFormat, "colorRtCount <= ARRAY_COUNT( this->m_colorRts )") )
    __debugbreak();
  v9 = 0;
  this->m_colorRtCount = colorRtCount;
  if ( colorRtCount )
  {
    do
    {
      v10 = v9;
      v13 = colorRts[v10].R_RT_Handle;
      v12 = v13;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v12);
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v12.m_surfaceID, *(_QWORD *)&v12.m_tracking.m_allocCounter, v12.m_tracking.m_name, v12.m_tracking.m_location) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      ++v9;
      this->m_colorRts[v10] = (R_RT_ColorHandle)v13;
    }
    while ( v9 != colorRtCount );
    v5 = depthRt;
  }
  this->m_depthRt = *v5;
}

/*
==============
R_RT_Group::AssignColorDepth
==============
*/
void R_RT_Group::AssignColorDepth(R_RT_Group *this, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  R_RT_Handle v7; 
  R_RT_Handle v9; 

  if ( !R_RT_Handle::IsValid(depthRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
    __debugbreak();
  v7 = colorRt->R_RT_Handle;
  this->m_colorRtCount = 1;
  v9 = v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v9);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v9.m_surfaceID, *(_QWORD *)&v9.m_tracking.m_allocCounter, v9.m_tracking.m_name, v9.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  this->m_colorRts[0] = *colorRt;
  this->m_depthRt = *depthRt;
}

/*
==============
R_RT_DepthHandle::Cast
==============
*/
R_RT_DepthHandle *R_RT_DepthHandle::Cast(R_RT_DepthHandle *result, R_RT_Handle *unionHandle)
{
  R_RT_DepthHandle *v4; 

  if ( unionHandle->m_surfaceID )
  {
    R_RT_Handle::GetSurface(unionHandle);
  }
  else if ( unionHandle->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( unionHandle->m_surfaceID && (R_RT_Handle::GetSurface(unionHandle)->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    __debugbreak();
  v4 = result;
  *result = (R_RT_DepthHandle)*unionHandle;
  return v4;
}

/*
==============
R_RT_Group::IsEmpty
==============
*/
bool R_RT_Group::IsEmpty(R_RT_Group *this)
{
  return !this->m_colorRtCount && !R_RT_Handle::IsValid(&this->m_depthRt);
}

/*
==============
R_RT_Handle::GetAuxDirty
==============
*/
char R_RT_Handle::GetAuxDirty(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 
  R_RT_FlagsInternal m_rtFlagsInternal; 

  m_surfaceID = this->m_surfaceID;
  if ( this->m_surfaceID )
  {
    R_RT_Handle::GetSurface(this);
  }
  else if ( this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
    __debugbreak();
  if ( (this->m_surfaceID & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 176, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", (const char *)&queryFormat, "!this->IsReadOnly()") )
    __debugbreak();
  m_rtFlagsInternal = R_RT_Handle::GetSurface(this)->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x800) == 0 )
    return 0;
  if ( (m_rtFlagsInternal & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
    __debugbreak();
  return 1;
}

/*
==============
R_RT_Handle::IsReadOnly
==============
*/
__int64 R_RT_Handle::IsReadOnly(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 

  m_surfaceID = this->m_surfaceID;
  if ( this->m_surfaceID )
  {
    R_RT_Handle::GetSurface(this);
  }
  else if ( this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
    __debugbreak();
  return this->m_surfaceID >> 15;
}

/*
==============
R_RT_Group::ConstructColor
==============
*/
R_RT_Group *R_RT_Group::ConstructColor(R_RT_Group *result, R_RT_ColorHandle *colorRt)
{
  unsigned __int16 m_surfaceID; 
  R_RT_Group *v7; 
  R_RT_Handle v8; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 

  m_surfaceID = _XMM0;
  v9 = colorRt->R_RT_Handle;
  v8 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v8);
    LODWORD(_RDI) = v8.m_tracking.m_allocCounter;
    m_surfaceID = v8.m_surfaceID;
    v9 = v8;
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  result->m_colorRtCount = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v8.m_surfaceID = 0;
  v8.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v8.m_tracking.m_name = _XMM0;
  v10 = v9;
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v10);
  }
  else
  {
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  result->m_colorRts[0] = (R_RT_ColorHandle)v9;
  v7 = result;
  result->m_depthRt = (R_RT_DepthHandle)v8;
  return v7;
}

