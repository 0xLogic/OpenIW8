/*
==============
R_HW_SetScissorTestEnable
==============
*/

void __fastcall R_HW_SetScissorTestEnable(GfxCmdBufState *state, unsigned int enable)
{
  ?R_HW_SetScissorTestEnable@@YAXPEAUGfxCmdBufState@@I@Z(state, enable);
}

/*
==============
R_HW_SetViewport
==============
*/

void __fastcall R_HW_SetViewport(GfxDevice *device, const GfxViewport *viewport, float nearValue, float farValue)
{
  ?R_HW_SetViewport@@YAXPEAUGfxDevice@@PEBUGfxViewport@@MM@Z(device, viewport, nearValue, farValue);
}

/*
==============
R_HW_CreateBlendStateDesc
==============
*/

D3D12_BLEND_DESC *__fastcall R_HW_CreateBlendStateDesc(D3D12_BLEND_DESC *result, GfxBlendStateBits stateBits)
{
  return ?R_HW_CreateBlendStateDesc@@YA?AUD3D12_BLEND_DESC@@W4GfxBlendStateBits@@@Z(result, stateBits);
}

/*
==============
R_HW_EnableMultiSample
==============
*/

void __fastcall R_HW_EnableMultiSample(GfxCmdBufContext *context, const unsigned int frameCount)
{
  ?R_HW_EnableMultiSample@@YAXUGfxCmdBufContext@@I@Z(context, frameCount);
}

/*
==============
R_HW_SetComputeConstantBuffer
==============
*/

void __fastcall R_HW_SetComputeConstantBuffer(ComputeCmdBufState *state, unsigned int index, const GfxConstantBufferDesc *cbDesc)
{
  ?R_HW_SetComputeConstantBuffer@@YAXPEAUComputeCmdBufState@@IAEBUGfxConstantBufferDesc@@@Z(state, index, cbDesc);
}

/*
==============
R_HW_EnableMultiSample
==============
*/
void R_HW_EnableMultiSample(GfxCmdBufContext *context, const unsigned int frameCount)
{
  GfxCmdBufState *state; 
  char v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 unsignedInt; 
  char v7; 
  __int64 v8; 
  char v9; 
  int integer; 
  __int64 v11; 
  __int64 v12; 
  int v13[4]; 
  char v14[128]; 
  int v15[2]; 

  state = context->state;
  v3 = frameCount;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  memset_0(v14, 0, sizeof(v14));
  v4 = 0;
  v15[0] = -66781956;
  v5 = 0i64;
  v15[1] = 67372284;
  do
  {
    unsignedInt = v3 & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v12) = 4;
      LODWORD(v11) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    ++v4;
    v7 = *((_BYTE *)v15 + 2 * v5);
    v8 = 2i64 * (unsigned int)s_VRSPixelToSampleOrdered_4[unsignedInt][v5];
    v9 = *((_BYTE *)v15 + 2 * v5 + 1);
    v14[v8 + 1] = v9;
    ++v5;
    v14[v8] = v7;
    v14[v8 + 33] = v9;
    v14[v8 + 32] = v7;
    v14[v8 + 65] = v9;
    v14[v8 + 64] = v7;
    v14[v8 + 97] = v9;
    v14[v8 + 96] = v7;
  }
  while ( v4 < 4 );
  integer = r_vrsDebugForceSamplingRate->current.integer;
  if ( integer > -1 )
    `R_HW_EnableMultiSample'::`2'::s_eqaa4xMS.Dword1 ^= (*((_BYTE *)&`R_HW_EnableMultiSample'::`2'::s_eqaa4xMS.2 + 4) ^ (unsigned __int8)(8 * integer)) & 0x38;
  ((void (__fastcall *)(GfxDevice *, char *, D3D12XBOX_MSAA_CENTROID_PRIORITIES *, D3D12XBOX_MSAA_PARAMETERS *))state->device->m_pFunction[26].Release)(state->device, v14, &`R_HW_EnableMultiSample'::`2'::s_samplePriorities4xMS, &`R_HW_EnableMultiSample'::`2'::s_eqaa4xMS);
  v13[0] = v13[0] & 1 | 0x11000122;
  ((void (__fastcall *)(GfxDevice *, int *))state->device->m_pFunction[21].AddRef)(state->device, v13);
}

/*
==============
R_HW_SetComputeConstantBuffer
==============
*/
void R_HW_SetComputeConstantBuffer(ComputeCmdBufState *state, unsigned int index, const GfxConstantBufferDesc *cbDesc)
{
  GfxDescriptorState *descState; 
  __int64 v4; 
  __int64 *descriptorSet; 
  unsigned int v7; 
  __int64 v8; 

  descState = state->descState;
  v4 = index;
  if ( !descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1094, ASSERT_TYPE_ASSERT, "(descState)", (const char *)&queryFormat, "descState") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1095, ASSERT_TYPE_ASSERT, "(index < 14)", (const char *)&queryFormat, "index < R_MAX_COMPUTE_CONSTANT_BUFFERS") )
    __debugbreak();
  if ( descState->ranges[9].type != DESCRIPTOR_RANGE_BUFFER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1098, ASSERT_TYPE_ASSERT, "(range->type == DESCRIPTOR_RANGE_BUFFER)", (const char *)&queryFormat, "range->type == DESCRIPTOR_RANGE_BUFFER") )
    __debugbreak();
  descriptorSet = (__int64 *)descState->ranges[9].descriptorSet;
  v7 = (cbDesc->bufferSize + 63) & 0xFFFFFFC0;
  if ( (void *)descriptorSet[2 * v4 + 1] != cbDesc->bufferData || LODWORD(descriptorSet[2 * v4 + 2]) != v7 )
  {
    descriptorSet[2 * v4 + 1] = (__int64)cbDesc->bufferData;
    LODWORD(descriptorSet[2 * v4 + 2]) = v7;
    descState->dirtyDescriptorRangeMask |= 0x200u;
  }
  v8 = *descriptorSet;
  if ( (*descriptorSet & (1i64 << v4)) == 0 )
  {
    descState->dirtyDescriptorRangeMask |= 0x200u;
    v8 = *descriptorSet;
  }
  *descriptorSet = v8 | (1i64 << v4);
}

/*
==============
R_HW_CreateBlendStateDesc
==============
*/
D3D12_BLEND_DESC *R_HW_CreateBlendStateDesc(D3D12_BLEND_DESC *result, GfxBlendStateBits stateBits)
{
  D3D12_BLEND v4; 
  D3D12_BLEND v5; 
  D3D12_BLEND_OP v6; 
  D3D12_BLEND v7; 
  D3D12_BLEND v8; 
  D3D12_BLEND_OP v9; 
  _BYTE v29[40]; 

  _RBX = result;
  memset_0(&result->RenderTarget[1], 0, 0x118ui64);
  _RBX->AlphaToCoverageEnable = 0;
  *(_DWORD *)&v29[36] = 0;
  v4 = s_srcBlendTable[stateBits & 0xF];
  *(_DWORD *)&v29[8] = v4;
  *(_DWORD *)&v29[4] = 0;
  v5 = s_dstBlendTable[(unsigned __int8)stateBits >> 4];
  *(_DWORD *)&v29[12] = v5;
  v6 = s_blendOpTable[((unsigned __int64)stateBits >> 8) & 7];
  *(_DWORD *)&v29[16] = v6;
  v7 = s_srcBlendTableAlpha[((unsigned __int64)stateBits >> 11) & 0xF];
  *(_DWORD *)&v29[20] = v7;
  v8 = s_dstBlendTableAlpha[((unsigned __int64)stateBits >> 15) & 0xF];
  *(_DWORD *)&v29[24] = v8;
  v9 = s_blendOpTable[((unsigned __int64)stateBits >> 19) & 7];
  *(_QWORD *)&v29[28] = (unsigned int)v9;
  if ( (stateBits & 0xFFFFFFFF00000000ui64) != 0 )
  {
    _RBX->IndependentBlendEnable = 1;
    v29[36] = ~BYTE4(stateBits) & 0xF;
    __asm { vmovsd  xmm1, [rbp+var_10] }
    *(_DWORD *)v29 = (stateBits & 0x3FFFFF) != 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovups ymmword ptr [rbx+8], ymm0
    }
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovsd  qword ptr [rbx+28h], xmm1
      vmovups ymmword ptr [rbx+30h], ymm0
    }
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm { vmovups ymm0, [rbp+var_30] }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~(unsigned __int8)((unsigned __int64)stateBits >> 36) & 0xF;
    __asm { vmovsd  xmm1, [rbp+var_10] }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~BYTE5(stateBits) & 0xF;
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    __asm
    {
      vmovsd  qword ptr [rbx+50h], xmm1
      vmovsd  xmm1, [rbp+var_10]
    }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~(unsigned __int8)((unsigned __int64)stateBits >> 44) & 0xF;
    __asm { vmovups ymmword ptr [rbx+58h], ymm0 }
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovsd  qword ptr [rbx+78h], xmm1
      vmovsd  xmm1, [rbp+var_10]
      vmovups ymmword ptr [rbx+80h], ymm0
    }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~BYTE6(stateBits) & 0xF;
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovsd  qword ptr [rbx+0A0h], xmm1
      vmovsd  xmm1, [rbp+var_10]
      vmovups ymmword ptr [rbx+0A8h], ymm0
    }
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm { vmovups ymm0, [rbp+var_30] }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~(unsigned __int8)((unsigned __int64)stateBits >> 52) & 0xF;
    __asm
    {
      vmovsd  qword ptr [rbx+0C8h], xmm1
      vmovsd  xmm1, [rbp+var_10]
      vmovups ymmword ptr [rbx+0D0h], ymm0
    }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~HIBYTE(stateBits) & 0xF;
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovsd  qword ptr [rbx+0F0h], xmm1
      vmovsd  xmm1, [rbp+var_10]
    }
    *(_DWORD *)&v29[32] = 0;
    *(_DWORD *)&v29[36] = ~((unsigned __int64)stateBits >> 60) & 0xF;
    __asm { vmovups ymmword ptr [rbx+0F8h], ymm0 }
    *(_DWORD *)&v29[8] = v4;
    *(_DWORD *)&v29[12] = v5;
    *(_DWORD *)&v29[16] = v6;
    *(_DWORD *)&v29[20] = v7;
    *(_DWORD *)&v29[24] = v8;
    *(_DWORD *)&v29[28] = v9;
    *(_DWORD *)&v29[4] = 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovsd  qword ptr [rbx+118h], xmm1
      vmovsd  xmm1, [rbp+var_10]
      vmovups ymmword ptr [rbx+120h], ymm0
      vmovsd  qword ptr [rbx+140h], xmm1
    }
  }
  else
  {
    _RBX->IndependentBlendEnable = 0;
    v29[36] = ~BYTE4(stateBits) & 0xF;
    __asm { vmovsd  xmm1, [rbp+var_10] }
    *(_DWORD *)v29 = (stateBits & 0x3FFFFF) != 0;
    __asm
    {
      vmovups ymm0, [rbp+var_30]
      vmovups ymmword ptr [rbx+8], ymm0
      vmovsd  qword ptr [rbx+28h], xmm1
    }
  }
  return _RBX;
}

/*
==============
R_HW_SetScissorTestEnable
==============
*/
void R_HW_SetScissorTestEnable(GfxCmdBufState *state, unsigned int enable)
{
  GfxDevice *device; 
  __int128 v5; 

  if ( !enable && (state->scissor.x || state->scissor.y || state->scissor.width != 4096 || state->scissor.height != 4096) )
  {
    __asm { vmovdqu xmm0, cs:__xmm@00001000000010000000000000000000 }
    device = state->device;
    __asm { vmovdqu [rsp+58h+var_28], xmm0 }
    if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )", v5) )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, __int64, __int128 *))device->m_pFunction[7].AddRef)(device, 1i64, &v5);
    *(_QWORD *)&state->scissor.x = 0i64;
    state->scissor.width = 4096;
    state->scissor.height = 4096;
  }
}

/*
==============
R_HW_SetViewport
==============
*/

void __fastcall R_HW_SetViewport(GfxDevice *device, const GfxViewport *viewport, double nearValue, double farValue)
{
  bool IsLockedIfGfxImmediateContext; 
  bool v12; 
  bool v13; 
  double v26; 
  double v27; 
  int v28[6]; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  IsLockedIfGfxImmediateContext = R_IsLockedIfGfxImmediateContext(device);
  v12 = !IsLockedIfGfxImmediateContext;
  if ( !IsLockedIfGfxImmediateContext )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  [rsp+0A8h+var_54], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+0A8h+var_4C], xmm1
    vmovss  [rsp+0A8h+var_50], xmm0
    vmovss  [rsp+0A8h+var_48], xmm7
    vmovss  [rsp+0A8h+var_44], xmm6
  }
  if ( !v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_68], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0A8h+var_70], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 651, ASSERT_TYPE_ASSERT, "( d3dViewport.MinDepth ) <= ( d3dViewport.MaxDepth )", "%s <= %s\n\t%g, %g", "d3dViewport.MinDepth", "d3dViewport.MaxDepth", v26, v27) )
      __debugbreak();
  }
  device->m_pFunction[7].QueryInterface(device, (const _GUID *)1, (void **)v28);
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
}

