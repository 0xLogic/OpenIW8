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
  R_RT_ColorHandle *v5; 

  _RBX = unionHandle;
  _RSI = result;
  if ( unionHandle->m_surfaceID )
  {
    R_RT_Handle::GetSurface(unionHandle);
  }
  else if ( unionHandle->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( _RBX->m_surfaceID && (R_RT_Handle::GetSurface(_RBX)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v5 = _RSI;
  __asm { vmovups ymmword ptr [rsi], ymm0 }
  return v5;
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
  __m256i v11; 
  R_RT_Handle v12; 

  _RBX = this;
  _RDI = colorRt;
  if ( !R_RT_Handle::IsValid(colorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
    __debugbreak();
  _RBX->m_colorRtCount = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v11.m256i_i16[0] = 0;
  v11.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+88h+var_58+10h], xmm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+88h+var_38.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v12);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+8], ymm0
    vmovups ymm0, [rsp+88h+var_58]
    vmovups ymmword ptr [rbx+88h], ymm0
  }
}

/*
==============
R_RT_Group::ConstructColorDepth
==============
*/
R_RT_Group *R_RT_Group::ConstructColorDepth(R_RT_Group *result, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  R_RT_Group *v14; 
  R_RT_Handle v16; 
  __m256i v18; 

  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymm1, ymmword ptr [rdx]
    vmovd   eax, xmm0
  }
  _RBX = colorRt;
  _RDI = result;
  __asm
  {
    vmovups [rsp+98h+var_48], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
    vmovups [rsp+98h+var_28], ymm1
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v16);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID]
      vmovups [rsp+98h+var_48], ymm0
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovd   eax, xmm0
  }
  _RDI->m_colorRtCount = 1;
  __asm { vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0 }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v16);
  }
  else
  {
    if ( v18.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v16.m_surfaceID, *(_QWORD *)&v16.m_tracking.m_allocCounter, v16.m_tracking.m_name, v16.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v14 = _RDI;
  __asm
  {
    vmovups ymmword ptr [rdi+8], ymm0
    vmovups ymm0, [rsp+98h+var_48]
    vmovups ymmword ptr [rdi+88h], ymm0
  }
  return v14;
}

/*
==============
R_RT_Group::GetAnyRt
==============
*/
R_RT_Handle *R_RT_Group::GetAnyRt(R_RT_Group *this, R_RT_Handle *result)
{
  R_RT_Handle v11; 
  __m256i v12; 

  _RBX = result;
  if ( this->m_colorRtCount )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+8]
      vmovd   eax, xmm0
      vmovups [rsp+78h+var_28], ymm0
      vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v11);
      if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 396, ASSERT_TYPE_ASSERT, "(!colorRt.IsValid() || colorRt.IsColor())", (const char *)&queryFormat, "!colorRt.IsValid() || colorRt.IsColor()") )
      {
LABEL_5:
        __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
        goto LABEL_6;
      }
LABEL_13:
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
      __debugbreak();
      goto LABEL_6;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+88h]
      vmovd   eax, xmm0
      vmovups [rsp+78h+var_28], ymm0
      vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v11);
      if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 403, ASSERT_TYPE_ASSERT, "(!depthRt.IsValid() || depthRt.IsDepth())", (const char *)&queryFormat, "!depthRt.IsValid() || depthRt.IsDepth()") )
        goto LABEL_5;
      goto LABEL_13;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    __asm { vmovups ymm0, [rsp+78h+var_28] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_6:
  _RAX = &v12;
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
  }
  return _RBX;
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
  __int16 v9; 
  __int16 v10; 
  bool v14; 
  __int16 v16; 
  __int16 v17; 
  const char *v21; 
  int v22; 
  const char *v23; 
  __m256i v26; 
  R_RT_Handle v27; 

  _RBP = this;
  v4 = 0;
  m_colorRtCount = this->m_colorRtCount;
  _R14 = result;
  result->m_colorRtCount = m_colorRtCount;
  if ( m_colorRtCount )
  {
    do
    {
      _RBX = v4;
      if ( (readOnlyFlag & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 121, ASSERT_TYPE_ASSERT, "(readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag)", (const char *)&queryFormat, "readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag") )
        __debugbreak();
      v9 = _RBP->m_colorRts[_RBX].m_surfaceID & 0x7FFF;
      if ( v9 )
        v10 = readOnlyFlag | v9;
      else
        v10 = 0;
      v26.m256i_i16[0] = v10;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+rbp+10h]
        vmovsd  xmm1, qword ptr [rbx+rbp+20h]
        vmovups xmmword ptr [rsp+98h+var_68+8], xmm0
        vmovsd  qword ptr [rsp+98h+var_68+18h], xmm1
        vmovups ymm0, [rsp+98h+var_68]
        vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
      }
      if ( v10 )
      {
        R_RT_Handle::GetSurface(&v27);
        if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_13:
          if ( v14 )
            __debugbreak();
        }
      }
      else if ( v26.m256i_i32[2] )
      {
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        goto LABEL_13;
      }
      __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID] }
      ++v4;
      __asm { vmovups ymmword ptr [rbx+r14+8], ymm0 }
    }
    while ( v4 != m_colorRtCount );
  }
  if ( (readOnlyFlag & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 121, ASSERT_TYPE_ASSERT, "(readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag)", (const char *)&queryFormat, "readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag") )
    __debugbreak();
  v16 = _RBP->m_depthRt.m_surfaceID & 0x7FFF;
  if ( v16 )
    v17 = readOnlyFlag | v16;
  else
    v17 = 0;
  v26.m256i_i16[0] = v17;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+90h]
    vmovsd  xmm1, qword ptr [rbp+0A0h]
    vmovups xmmword ptr [rsp+98h+var_68+8], xmm0
    vmovsd  qword ptr [rsp+98h+var_68+18h], xmm1
    vmovups ymm0, [rsp+98h+var_68]
    vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
  }
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v27);
    if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x10) != 0 )
      goto LABEL_29;
    v21 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
    v22 = 277;
    v23 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
  }
  else
  {
    if ( !v26.m256i_i32[2] )
      goto LABEL_29;
    v21 = "!this->m_tracking.m_allocCounter";
    v22 = 100;
    v23 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v22, ASSERT_TYPE_ASSERT, v23, (const char *)&queryFormat, v21) )
    __debugbreak();
LABEL_29:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID]
    vmovups ymmword ptr [r14+88h], ymm0
  }
  return _R14;
}

/*
==============
R_RT_Group::Assign
==============
*/
void R_RT_Group::Assign(R_RT_Group *this, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  unsigned int v9; 
  R_RT_Handle v16; 

  _R15 = depthRt;
  _RBP = colorRts;
  _R14 = this;
  if ( colorRtCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 437, ASSERT_TYPE_ASSERT, "(colorRtCount <= ( sizeof( *array_counter( this->m_colorRts ) ) + 0 ))", (const char *)&queryFormat, "colorRtCount <= ARRAY_COUNT( this->m_colorRts )") )
    __debugbreak();
  v9 = 0;
  _R14->m_colorRtCount = colorRtCount;
  if ( colorRtCount )
  {
    do
    {
      _RDI = 32i64 * v9;
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+rbp]
        vmovd   eax, xmm0
        vmovups [rsp+98h+var_48], ymm0
        vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v16);
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v16.m_surfaceID, *(_QWORD *)&v16.m_tracking.m_allocCounter, v16.m_tracking.m_name, v16.m_tracking.m_location) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm { vmovups ymm0, [rsp+98h+var_48] }
      ++v9;
      __asm { vmovups ymmword ptr [rdi+r14+8], ymm0 }
    }
    while ( v9 != colorRtCount );
    _R15 = depthRt;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [r14+88h], ymm0
  }
}

/*
==============
R_RT_Group::AssignColorDepth
==============
*/
void R_RT_Group::AssignColorDepth(R_RT_Group *this, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt)
{
  R_RT_Handle v12; 

  _RBX = this;
  _RDI = depthRt;
  _RSI = colorRt;
  if ( !R_RT_Handle::IsValid(depthRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovd   eax, xmm0
  }
  _RBX->m_colorRtCount = 1;
  __asm { vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0 }
  if ( (_WORD)_EAX )
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbx+8], ymm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+88h], ymm0
  }
}

/*
==============
R_RT_DepthHandle::Cast
==============
*/
R_RT_DepthHandle *R_RT_DepthHandle::Cast(R_RT_DepthHandle *result, R_RT_Handle *unionHandle)
{
  R_RT_DepthHandle *v5; 

  _RBX = unionHandle;
  _RSI = result;
  if ( unionHandle->m_surfaceID )
  {
    R_RT_Handle::GetSurface(unionHandle);
  }
  else if ( unionHandle->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( _RBX->m_surfaceID && (R_RT_Handle::GetSurface(_RBX)->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v5 = _RSI;
  __asm { vmovups ymmword ptr [rsi], ymm0 }
  return v5;
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
  R_RT_Group *v13; 
  R_RT_Handle v14; 
  R_RT_Handle v16; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovd   esi, xmm0
  }
  _RBX = result;
  __asm
  {
    vmovups ymmword ptr [rax-58h], ymm0
    vmovups ymmword ptr [rax-78h], ymm0
  }
  if ( (_WORD)_ESI )
  {
    R_RT_Handle::GetSurface(&v14);
    __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    LODWORD(_RDI) = v14.m_tracking.m_allocCounter;
    LOWORD(_ESI) = v14.m_surfaceID;
    __asm { vmovups [rsp+0A8h+var_58], ymm0 }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  _RBX->m_colorRtCount = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v14.m_surfaceID = 0;
  v14.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+0A8h+var_78.m_tracking.m_name], xmm0
    vmovups ymm0, [rsp+0A8h+var_58]
    vmovups ymmword ptr [rsp+0A8h+var_38.m_surfaceID], ymm0
  }
  if ( (_WORD)_ESI )
  {
    R_RT_Handle::GetSurface(&v16);
  }
  else
  {
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, [rsp+0A8h+var_58]
    vmovups ymmword ptr [rbx+8], ymm0
    vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
  }
  v13 = _RBX;
  __asm { vmovups ymmword ptr [rbx+88h], ymm0 }
  return v13;
}

