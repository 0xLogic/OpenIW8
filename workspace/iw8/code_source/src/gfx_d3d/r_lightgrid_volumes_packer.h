/*
==============
LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>
==============
*/

int __fastcall LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>(LightGridVolumePacker3D *this, const LightGridVolumeSrcParams *volumes, LightGridVolumePackingParams *volumePackingParams, unsigned int *volumesToPack, unsigned int numVolumesToPack, bool squeezePacked, int depthAlignment)
{
  return ??$Pack@ULightGridVolumeSrcParams@@@LightGridVolumePacker3D@@QEAAHPEBULightGridVolumeSrcParams@@PEAULightGridVolumePackingParams@@PEAII_NH@Z(this, volumes, volumePackingParams, volumesToPack, numVolumesToPack, squeezePacked, depthAlignment);
}

/*
==============
LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>
==============
*/
__int64 LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>(LightGridVolumePacker3D *this, const LightGridVolumeSrcParams *volumes, LightGridVolumePackingParams *volumePackingParams, unsigned int *volumesToPack, unsigned int numVolumesToPack, bool squeezePacked, int depthAlignment)
{
  unsigned int *v12; 
  LightGridVolumePackingParams *v13; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v25; 
  __int64 v27; 
  const LightGridVolumeSrcParams *v28; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  unsigned int m_height; 
  unsigned int v35; 
  unsigned int v36; 
  int v37; 
  bool v38; 
  signed int v39; 
  int v74; 
  unsigned int v75; 
  unsigned int v84; 
  __int64 v85; 
  __int64 v94; 
  signed int v98; 
  __int64 v99; 
  unsigned int *v100; 
  unsigned int v101; 
  __int64 v102; 
  unsigned int *v189; 
  __int64 v190; 
  __int64 v191; 
  unsigned int v212; 
  int v213; 
  int v214; 
  unsigned int v215; 
  signed int v216; 
  __int64 v217; 
  unsigned int numVolumesToPacka; 

  v12 = volumesToPack;
  v13 = volumePackingParams;
  if ( !numVolumesToPack )
    return 0i64;
  v17 = 0;
  this->m_packedDepth = 0;
  Sys_ProfBeginNamedEvent(0xFF008008, "Sort Volumes");
  j_____Sort_unchecked_PEAIUSortVolumesPred__1____SortVolumes_ULightGridVolumeSrcParams___LightGridVolumePacker3D__CAXPEAIIPEBULightGridVolumeSrcParams___Z__std__YAXPEAI0_JUSortVolumesPred__1____SortVolumes_ULightGridVolumeSrcParams___LightGridVolumePacker3D__CAX0IPEBULightGridVolumeSrcParams___Z__Z(v12, &v12[numVolumesToPack], numVolumesToPack, (LightGridVolumePacker3D::SortVolumes::__l2::SortVolumesPred)volumes);
  Sys_ProfEndNamedEvent();
  v212 = 0;
  v18 = 0;
  v213 = 0;
  v19 = 0;
  numVolumesToPacka = 0;
  v20 = 0;
  v216 = 0;
  v21 = 0;
  v22 = 0;
  v23 = numVolumesToPack;
  if ( (int)numVolumesToPack > 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    v25 = 0i64;
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f000000
    }
    v217 = 0i64;
    while ( 1 )
    {
      v27 = v12[v25];
      v28 = &volumes[v27];
      _RSI = &v13[v27];
      if ( v28->m_volumeSize[0] > this->m_width )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 57, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[0] <= m_width)", (const char *)&queryFormat, "currVolume.m_volumeSize[0] <= m_width") )
          __debugbreak();
        v18 = v212;
        v20 = v213;
        v22 = numVolumesToPacka;
      }
      v30 = v19;
      v31 = v20 + v28->m_volumeSize[0];
      v32 = 0;
      if ( v31 <= this->m_width )
        v32 = v20;
      if ( v31 <= this->m_width )
        v30 = v21;
      v214 = v32;
      if ( v28->m_volumeSize[1] > this->m_height )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 66, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[1] <= m_height)", (const char *)&queryFormat, "currVolume.m_volumeSize[1] <= m_height") )
          __debugbreak();
        v18 = v212;
        v22 = numVolumesToPacka;
      }
      v33 = v18;
      m_height = this->m_height;
      v35 = v30 + v28->m_volumeSize[1];
      v21 = 0;
      v36 = 0;
      if ( v35 <= m_height )
        v33 = v22;
      if ( v35 <= m_height )
      {
        v21 = v30;
        if ( v35 <= m_height )
          v36 = v19;
      }
      numVolumesToPacka = v33;
      v22 = v33;
      v37 = 0;
      if ( v35 <= m_height )
        v37 = v214;
      v215 = v36;
      if ( v28->m_volumeSize[2] > this->m_depth )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 77, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[2] <= m_depth)", (const char *)&queryFormat, "currVolume.m_volumeSize[2] <= m_depth") )
          __debugbreak();
        v18 = v212;
        v36 = v215;
        v22 = numVolumesToPacka;
      }
      v38 = 0;
      if ( v37 + (unsigned int)v28->m_volumeSize[0] >= this->m_width && v21 + v28->m_volumeSize[1] >= this->m_height )
        v38 = v22 + v28->m_volumeSize[2] >= this->m_depth;
      if ( v22 + v28->m_volumeSize[2] > this->m_depth || this->m_reserveLastTexel && v38 )
        break;
      v39 = v216;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rdx
        vcvtsi2ss xmm0, xmm0, rax
        vaddss  xmm2, xmm0, xmm7
        vdivss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rsi+10h], xmm0
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, rax
        vcvtsi2ss xmm0, xmm0, rax
        vaddss  xmm2, xmm1, xmm7
        vdivss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rsi+14h], xmm1
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, rax
        vcvtsi2ss xmm1, xmm1, rax
        vaddss  xmm2, xmm0, xmm7
        vdivss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rsi+18h], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm2, xmm1, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rsi], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vsubss  xmm2, xmm0, xmm6
        vdivss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rsi+4], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vsubss  xmm2, xmm1, xmm6
        vdivss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rsi+8], xmm1
      }
      v74 = v28->m_volumeSize[2];
      v20 = v37 + v28->m_volumeSize[0];
      v13 = volumePackingParams;
      v19 = v21 + v28->m_volumeSize[1];
      v12 = volumesToPack;
      v213 = v20;
      if ( v36 > v19 )
        v19 = v36;
      v75 = v22 + v74;
      if ( v18 > v75 )
        v75 = v18;
      v18 = v75;
      v212 = v75;
      v25 = v217 + 1;
      ++v216;
      ++v217;
      if ( v39 + 1 >= (int)numVolumesToPack )
      {
        v23 = numVolumesToPack;
LABEL_40:
        v13 = volumePackingParams;
        goto LABEL_41;
      }
    }
    v98 = v216;
    v23 = v216;
    if ( v216 >= (int)numVolumesToPack )
      goto LABEL_40;
    v99 = v217;
    v13 = volumePackingParams;
    if ( (int)(numVolumesToPack - v216) >= 4 )
    {
      v100 = &volumesToPack[v217 + 2];
      v101 = ((numVolumesToPack - v216 - 4) >> 2) + 1;
      v102 = v101;
      v98 = v216 + 4 * v101;
      v99 = v217 + 4i64 * v101;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm0, xmm7, xmm0
          vxorps  xmm1, xmm1, xmm1
        }
        _RCX = &volumePackingParams[*(v100 - 2)];
        __asm
        {
          vmovss  dword ptr [rcx+10h], xmm0
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm7, xmm1
          vmovss  dword ptr [rcx+14h], xmm0
        }
        _RCX->m_uvBias.v[2] = 0.5;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm2, xmm0, xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm2, xmm1
          vmovss  dword ptr [rcx], xmm0
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, rax
          vsubss  xmm2, xmm1, xmm6
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rcx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rcx+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm0, xmm7, xmm0
          vxorps  xmm1, xmm1, xmm1
        }
        _RCX = &volumePackingParams[*(v100 - 1)];
        __asm
        {
          vmovss  dword ptr [rcx+10h], xmm0
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm7, xmm1
          vmovss  dword ptr [rcx+14h], xmm0
        }
        _RCX->m_uvBias.v[2] = 0.5;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm2, xmm0, xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm2, xmm1
          vmovss  dword ptr [rcx], xmm0
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, rax
          vsubss  xmm2, xmm1, xmm6
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rcx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rcx+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        _RCX = &volumePackingParams[*v100];
        __asm
        {
          vdivss  xmm0, xmm7, xmm0
          vmovss  dword ptr [rcx+10h], xmm0
        }
        v100 += 4;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm7, xmm1
          vmovss  dword ptr [rcx+14h], xmm0
        }
        _RCX->m_uvBias.v[2] = 0.5;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm2, xmm0, xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm2, xmm1
          vmovss  dword ptr [rcx], xmm0
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, rax
          vsubss  xmm2, xmm1, xmm6
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rcx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rcx+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm0, xmm7, xmm0
          vxorps  xmm1, xmm1, xmm1
        }
        _RCX = &volumePackingParams[*(v100 - 3)];
        __asm
        {
          vmovss  dword ptr [rcx+10h], xmm0
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm7, xmm1
          vmovss  dword ptr [rcx+14h], xmm0
        }
        _RCX->m_uvBias.v[2] = 0.5;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm2, xmm0, xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm2, xmm1
          vmovss  dword ptr [rcx], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vsubss  xmm2, xmm1, xmm6
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rcx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rcx+8], xmm1
        }
        --v102;
      }
      while ( v102 );
      v23 = v216;
    }
    if ( v98 < (int)numVolumesToPack )
    {
      v189 = &volumesToPack[v99];
      v190 = (int)(numVolumesToPack - v98);
      do
      {
        v191 = *v189++;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm0, xmm7, xmm0
          vxorps  xmm1, xmm1, xmm1
        }
        _RDX = &volumePackingParams[v191];
        __asm
        {
          vmovss  dword ptr [rdx+10h], xmm0
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm7, xmm1
          vmovss  dword ptr [rdx+14h], xmm0
        }
        _RDX->m_uvBias.v[2] = 0.5;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm2, xmm0, xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vdivss  xmm0, xmm2, xmm1
          vmovss  dword ptr [rdx], xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vsubss  xmm2, xmm1, xmm6
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rdx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rdx+8], xmm1
        }
        --v190;
      }
      while ( v190 );
    }
LABEL_41:
    __asm
    {
      vmovaps xmm6, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_58]
    }
  }
  this->m_packedDepth = AlignUp<unsigned int>(v18, depthAlignment);
  if ( squeezePacked )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rcx
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm2, xmm1, xmm0
    }
    if ( (int)numVolumesToPack >= 4 )
    {
      _RCX = (char *)&v13[2].m_uvScale.z;
      v84 = ((numVolumesToPack - 4) >> 2) + 1;
      v85 = v84;
      v17 = 4 * v84;
      do
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rcx-30h]
          vmovss  dword ptr [rcx-30h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx-40h]
          vmovss  dword ptr [rcx-40h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx-10h]
          vmovss  dword ptr [rcx-10h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx-20h]
          vmovss  dword ptr [rcx-20h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx+10h]
          vmovss  dword ptr [rcx+10h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx]
          vmovss  dword ptr [rcx], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx+30h]
          vmovss  dword ptr [rcx+30h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx+20h]
          vmovss  dword ptr [rcx+20h], xmm0
        }
        _RCX += 128;
        --v85;
      }
      while ( v85 );
    }
    if ( v17 < (int)numVolumesToPack )
    {
      v94 = numVolumesToPack - v17;
      _RCX = (__int64)&v13[v17].m_uvScale.z;
      do
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rcx+10h]
          vmovss  dword ptr [rcx+10h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx]
          vmovss  dword ptr [rcx], xmm1
        }
        _RCX += 32i64;
        --v94;
      }
      while ( v94 );
    }
  }
  return v23;
}

