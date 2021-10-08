/*
==============
RBT_Fidelity_FX_Sharpening
==============
*/

void __fastcall RBT_Fidelity_FX_Sharpening(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Fidelity_FX_Sharpening@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Fidelity_FX_Sharpening
==============
*/
void RBT_Fidelity_FX_Sharpening(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle *attachments; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v15; 
  const R_RT_Surface *v18; 
  unsigned int flags; 
  GfxConstantBufferDesc cbDesc; 
  GfxConstantBufferDesc result; 
  __m256i v64; 
  char v65; 
  void *retaddr; 
  GfxTexture *textures; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  attachments = taskInfo->attachments;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  Surface = R_RT_Handle::GetSurface(attachments);
  v15 = R_RT_Handle::GetSurface(taskInfo->attachments + 1);
  _RSI = DVARFLT_r_casStrength;
  v18 = v15;
  if ( !DVARFLT_r_casStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_casStrength") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = _RSI->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", _RSI->name) )
      __debugbreak();
  }
  __asm { vmovss  xmm9, dword ptr [rsi+28h] }
  if ( (Surface->m_image.m_base.width != v18->m_image.m_base.width || Surface->m_image.m_base.height != v18->m_image.m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_fidelity_fx_sharpening.cpp", 47, ASSERT_TYPE_ASSERT, "(srcImage->width == dstImage->width && srcImage->height == dstImage->height)", (const char *)&queryFormat, "srcImage->width == dstImage->width && srcImage->height == dstImage->height") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, eax
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vcvtsi2ss xmm0, xmm0, eax
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm4, xmm6, xmm1
    vdivss  xmm7, xmm6, xmm0
    vmulss  xmm1, xmm8, xmm3
    vmulss  xmm0, xmm7, xmm8
    vmovss  dword ptr [rsp+0C8h+var_68], xmm0
    vmulss  xmm0, xmm4, xmm5
    vmovss  dword ptr [rsp+0C8h+var_68+4], xmm0
    vmulss  xmm0, xmm1, xmm7
    vsubss  xmm2, xmm0, xmm3
    vmulss  xmm1, xmm5, xmm3
    vmovss  xmm5, cs:__real@41000000
    vmulss  xmm0, xmm1, xmm4
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+0C8h+var_68+8], xmm2
    vsubss  xmm2, xmm0, xmm3
    vmaxss  xmm0, xmm9, xmm1
    vminss  xmm3, xmm0, xmm6
    vmulss  xmm0, xmm3, cs:__real@40a00000
    vmulss  xmm1, xmm3, xmm5
    vmovss  dword ptr [rsp+0C8h+var_68+0Ch], xmm2
    vsubss  xmm2, xmm5, xmm1
    vmovss  xmm1, cs:__real@bf800000
    vaddss  xmm3, xmm2, xmm0
    vdivss  xmm4, xmm1, xmm3
    vmovss  dword ptr [rsp+0C8h+textures], xmm4
  }
  v64.m256i_i32[7] = 0;
  __asm
  {
    vmulss  xmm0, xmm8, xmm5
    vmulss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsp+0C8h+var_68+10h], xmm4
  }
  v64.m256i_i32[5] = (word_145087DE0[0] << 16) + word_145087DE0[(unsigned __int64)(unsigned int)textures >> 23] + (((unsigned int)textures & 0x7FFFFF) >> byte_1450882B0[(unsigned __int64)(unsigned int)textures >> 23]);
  __asm { vmovss  dword ptr [rsp+0C8h+var_68+18h], xmm1 }
  _RAX = R_BeginComputeConstants(&result, computeState, 0, 0x20u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rax, xmm0
    vmovups xmmword ptr [rsp+0C8h+cbDesc.bufferData], xmm0
    vmovups ymm0, ymmword ptr [rsp+0C8h+var_68]
    vmovups ymmword ptr [rax], ymm0
  }
  R_EndComputeConstants(computeState, &cbDesc);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  R_SetComputeShader(computeState, rgp.fidelityFXSharpening);
  R_Dispatch(computeState, ((unsigned int)Surface->m_image.m_base.width + 15) >> 4, ((unsigned int)Surface->m_image.m_base.height + 15) >> 4, 1u);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

