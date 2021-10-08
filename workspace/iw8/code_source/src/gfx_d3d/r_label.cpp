/*
==============
R_GPULabel_Clear
==============
*/

void __fastcall R_GPULabel_Clear(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int labelCount)
{
  ?R_GPULabel_Clear@@YAXPEAUCmdBufState@@PEA_KI@Z(state, labelAddress, labelCount);
}

/*
==============
R_GPULabel_SetCPU
==============
*/

void __fastcall R_GPULabel_SetCPU(unsigned __int64 *labelAddress, const unsigned int value)
{
  ?R_GPULabel_SetCPU@@YAXPEA_KI@Z(labelAddress, value);
}

/*
==============
R_GPULabel_Wait
==============
*/

void __fastcall R_GPULabel_Wait(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int refValue, GfxLabelCompareFunc func)
{
  ?R_GPULabel_Wait@@YAXPEAUCmdBufState@@PEA_KIW4GfxLabelCompareFunc@@@Z(state, labelAddress, refValue, func);
}

/*
==============
R_GPULabel_Set
==============
*/

void __fastcall R_GPULabel_Set(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int value, bool waitForWrite)
{
  ?R_GPULabel_Set@@YAXPEAUCmdBufState@@PEA_KI_N@Z(state, labelAddress, value, waitForWrite);
}

/*
==============
R_GPULabel_Signal
==============
*/

void __fastcall R_GPULabel_Signal(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int value)
{
  ?R_GPULabel_Signal@@YAXPEAUCmdBufState@@PEA_KI@Z(state, labelAddress, value);
}

/*
==============
R_GPULabel_Clear
==============
*/
void R_GPULabel_Clear(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int labelCount)
{
  __int64 v3; 
  __int64 v6; 

  v3 = labelCount;
  if ( !labelAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 115, ASSERT_TYPE_ASSERT, "(labelAddress != nullptr)", (const char *)&queryFormat, "labelAddress != nullptr") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 116, ASSERT_TYPE_ASSERT, "(labelCount)", (const char *)&queryFormat, "labelCount") )
    __debugbreak();
  v6 = 8 * v3;
  ((void (__fastcall *)(GfxDevice *, unsigned __int64 *, __int64, _QWORD, _DWORD))state->device->m_pFunction[20].AddRef)(state->device, labelAddress, v6, 0i64, 0);
  ((void (__fastcall *)(GfxDevice *, __int64, unsigned __int64 *, unsigned __int64))state->device->m_pFunction[22].AddRef)(state->device, 145408i64, labelAddress, (v6 + 255) & 0xFFFFFFFFFFFFFF00ui64);
}

/*
==============
R_GPULabel_Set
==============
*/
void R_GPULabel_Set(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int value, bool waitForWrite)
{
  if ( !labelAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 107, ASSERT_TYPE_ASSERT, "(labelAddress != nullptr)", (const char *)&queryFormat, "labelAddress != nullptr") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, unsigned __int64 *, _QWORD, bool))state->device->m_pFunction[29].AddRef)(state->device, labelAddress, value, waitForWrite);
}

/*
==============
R_GPULabel_SetCPU
==============
*/
void R_GPULabel_SetCPU(unsigned __int64 *labelAddress, const unsigned int value)
{
  __int64 v2; 

  v2 = value;
  if ( labelAddress )
  {
    *labelAddress = value;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 10, ASSERT_TYPE_ASSERT, "(labelAddress != nullptr)", (const char *)&queryFormat, "labelAddress != nullptr") )
      __debugbreak();
    MEMORY[0] = v2;
  }
}

/*
==============
R_GPULabel_Signal
==============
*/
void R_GPULabel_Signal(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int value)
{
  if ( !labelAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 127, ASSERT_TYPE_ASSERT, "(labelAddress != nullptr)", (const char *)&queryFormat, "labelAddress != nullptr") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, unsigned __int64 *, _QWORD, _QWORD, _DWORD))state->device->m_pFunction[23].QueryInterface)(state->device, labelAddress, value, 0i64, 0);
}

/*
==============
R_GPULabel_Wait
==============
*/
void R_GPULabel_Wait(CmdBufState *state, unsigned __int64 *labelAddress, const unsigned int refValue, GfxLabelCompareFunc func)
{
  __int64 v4; 

  v4 = func;
  if ( !labelAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_label.cpp", 135, ASSERT_TYPE_ASSERT, "(labelAddress != nullptr)", (const char *)&queryFormat, "labelAddress != nullptr") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, unsigned __int64 *, _QWORD, _QWORD, int, _DWORD))state->device->m_pFunction[23].Release)(state->device, labelAddress, (unsigned int)s_waitCompareFunc[v4], refValue, -1, 0);
}

