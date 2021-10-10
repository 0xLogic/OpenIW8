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
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v7; 
  const dvar_t *v8; 
  const R_RT_Surface *v9; 
  unsigned int flags; 
  float height; 
  float width; 
  float v14; 
  float v15; 
  GfxConstantBufferDesc *v18; 
  GfxConstantBufferDesc v19; 
  __m256i *bufferData; 
  GfxConstantBufferDesc cbDesc; 
  GfxConstantBufferDesc result; 
  __m256i v23; 
  GfxTexture *textures; 

  Surface = R_RT_Handle::GetSurface(taskInfo->attachments);
  v7 = R_RT_Handle::GetSurface(taskInfo->attachments + 1);
  v8 = DVARFLT_r_casStrength;
  v9 = v7;
  if ( !DVARFLT_r_casStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_casStrength") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v8->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
      __debugbreak();
  }
  _XMM9 = v8->current.unsignedInt;
  if ( (Surface->m_image.m_base.width != v9->m_image.m_base.width || Surface->m_image.m_base.height != v9->m_image.m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_fidelity_fx_sharpening.cpp", 47, ASSERT_TYPE_ASSERT, "(srcImage->width == dstImage->width && srcImage->height == dstImage->height)", (const char *)&queryFormat, "srcImage->width == dstImage->width && srcImage->height == dstImage->height") )
    __debugbreak();
  height = (float)Surface->m_image.m_base.height;
  width = (float)Surface->m_image.m_base.width;
  v14 = 1.0 / (float)v9->m_image.m_base.height;
  v15 = 1.0 / (float)v9->m_image.m_base.width;
  *(float *)v23.m256i_i32 = v15 * width;
  *(float *)&v23.m256i_i32[1] = v14 * height;
  *(float *)&v23.m256i_i32[2] = (float)((float)(width * 0.5) * v15) - 0.5;
  __asm
  {
    vmaxss  xmm0, xmm9, xmm1
    vminss  xmm3, xmm0, xmm6
  }
  *(float *)&v23.m256i_i32[3] = (float)((float)(height * 0.5) * v14) - 0.5;
  *(float *)&textures = -1.0 / (float)((float)(8.0 - (float)(*(float *)&_XMM3 * 8.0)) + (float)(*(float *)&_XMM3 * 5.0));
  v23.m256i_i32[7] = 0;
  v23.m256i_i32[4] = (int)textures;
  v23.m256i_i32[5] = (word_145087DE0[0] << 16) + word_145087DE0[(unsigned __int64)(unsigned int)textures >> 23] + (((unsigned int)textures & 0x7FFFFF) >> byte_1450882B0[(unsigned __int64)(unsigned int)textures >> 23]);
  *(float *)&v23.m256i_i32[6] = (float)(width * 8.0) * v15;
  v18 = R_BeginComputeConstants(&result, computeState, 0, 0x20u);
  v19 = *v18;
  bufferData = (__m256i *)v18->bufferData;
  cbDesc = v19;
  *bufferData = v23;
  R_EndComputeConstants(computeState, &cbDesc);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(v9->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  R_SetComputeShader(computeState, rgp.fidelityFXSharpening);
  R_Dispatch(computeState, ((unsigned int)Surface->m_image.m_base.width + 15) >> 4, ((unsigned int)Surface->m_image.m_base.height + 15) >> 4, 1u);
}

