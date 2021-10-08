/*
==============
R_GetSunShadowmapImage
==============
*/

const GfxImage *__fastcall R_GetSunShadowmapImage(const GfxViewInfo *viewInfo, unsigned int partitionIndex)
{
  return ?R_GetSunShadowmapImage@@YAPEBUGfxImage@@PEBUGfxViewInfo@@I@Z(viewInfo, partitionIndex);
}

/*
==============
R_GetSunShadowmapImage
==============
*/
R_RT_Image *R_GetSunShadowmapImage(const GfxViewInfo *viewInfo, unsigned int partitionIndex)
{
  __int64 v4; 
  R_RT_Handle v8; 

  _RDI = viewInfo;
  v4 = partitionIndex;
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) == 0 )
    return (R_RT_Image *)rgp.blackShadowImage;
  if ( partitionIndex >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.h", 1461, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( ( sizeof( *array_counter( viewInfo->sceneRtInput.m_sunShadowCascades ) ) + 0 ) )", "partitionIndex doesn't index ARRAY_COUNT( viewInfo->sceneRtInput.m_sunShadowCascades )\n\t%i not in [0, %i)", partitionIndex, 3) )
    __debugbreak();
  _RAX = 32 * (v4 + 404);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rdi]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+68h+var_28.m_surfaceID], ymm0
  }
  if ( !(_WORD)_RAX )
  {
    if ( v8.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    return (R_RT_Image *)rgp.blackShadowImage;
  }
  R_RT_Handle::GetSurface(&v8);
  return &R_RT_Handle::GetSurface(&v8)->m_image;
}

