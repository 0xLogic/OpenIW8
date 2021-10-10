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
  unsigned int *v8; 
  LightGridVolumePackingParams *v9; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  const LightGridVolumeSrcParams *v22; 
  float *v; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int m_height; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  bool v32; 
  __int64 m_width; 
  signed int v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float m_depth; 
  float v41; 
  float v42; 
  float v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  float v47; 
  float v48; 
  float v49; 
  float *v50; 
  unsigned int v51; 
  __int64 v52; 
  __int64 v53; 
  float *v54; 
  signed int v55; 
  __int64 v56; 
  unsigned int *v57; 
  unsigned int v58; 
  __int64 v59; 
  float v60; 
  LightGridVolumePackingParams *v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  LightGridVolumePackingParams *v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  LightGridVolumePackingParams *v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  LightGridVolumePackingParams *v76; 
  float v77; 
  float v78; 
  float v79; 
  unsigned int *v80; 
  __int64 v81; 
  __int64 v82; 
  float v83; 
  LightGridVolumePackingParams *v84; 
  float v85; 
  float v86; 
  float v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  signed int v92; 
  __int64 v93; 
  unsigned int numVolumesToPacka; 

  v8 = volumesToPack;
  v9 = volumePackingParams;
  if ( !numVolumesToPack )
    return 0i64;
  v13 = 0;
  this->m_packedDepth = 0;
  Sys_ProfBeginNamedEvent(0xFF008008, "Sort Volumes");
  j_____Sort_unchecked_PEAIUSortVolumesPred__1____SortVolumes_ULightGridVolumeSrcParams___LightGridVolumePacker3D__CAXPEAIIPEBULightGridVolumeSrcParams___Z__std__YAXPEAI0_JUSortVolumesPred__1____SortVolumes_ULightGridVolumeSrcParams___LightGridVolumePacker3D__CAX0IPEBULightGridVolumeSrcParams___Z__Z(v8, &v8[numVolumesToPack], numVolumesToPack, (LightGridVolumePacker3D::SortVolumes::__l2::SortVolumesPred)volumes);
  Sys_ProfEndNamedEvent();
  v88 = 0;
  v14 = 0;
  v89 = 0;
  v15 = 0;
  numVolumesToPacka = 0;
  v16 = 0;
  v92 = 0;
  v17 = 0;
  v18 = 0;
  v19 = numVolumesToPack;
  if ( (int)numVolumesToPack > 0 )
  {
    v20 = 0i64;
    v93 = 0i64;
    while ( 1 )
    {
      v21 = v8[v20];
      v22 = &volumes[v21];
      v = v9[v21].m_uvScale.v;
      if ( v22->m_volumeSize[0] > this->m_width )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 57, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[0] <= m_width)", (const char *)&queryFormat, "currVolume.m_volumeSize[0] <= m_width") )
          __debugbreak();
        v14 = v88;
        v16 = v89;
        v18 = numVolumesToPacka;
      }
      v24 = v15;
      v25 = v16 + v22->m_volumeSize[0];
      v26 = 0;
      if ( v25 <= this->m_width )
        v26 = v16;
      if ( v25 <= this->m_width )
        v24 = v17;
      v90 = v26;
      if ( v22->m_volumeSize[1] > this->m_height )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 66, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[1] <= m_height)", (const char *)&queryFormat, "currVolume.m_volumeSize[1] <= m_height") )
          __debugbreak();
        v14 = v88;
        v18 = numVolumesToPacka;
      }
      v27 = v14;
      m_height = this->m_height;
      v29 = v24 + v22->m_volumeSize[1];
      v17 = 0;
      v30 = 0;
      if ( v29 <= m_height )
        v27 = v18;
      if ( v29 <= m_height )
      {
        v17 = v24;
        if ( v29 <= m_height )
          v30 = v15;
      }
      numVolumesToPacka = v27;
      v18 = v27;
      v31 = 0;
      if ( v29 <= m_height )
        v31 = v90;
      v91 = v30;
      if ( v22->m_volumeSize[2] > this->m_depth )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes_packer.h", 77, ASSERT_TYPE_ASSERT, "(currVolume.m_volumeSize[2] <= m_depth)", (const char *)&queryFormat, "currVolume.m_volumeSize[2] <= m_depth") )
          __debugbreak();
        v14 = v88;
        v30 = v91;
        v18 = numVolumesToPacka;
      }
      v32 = 0;
      m_width = this->m_width;
      if ( v31 + v22->m_volumeSize[0] >= (unsigned int)m_width && v17 + v22->m_volumeSize[1] >= this->m_height )
        v32 = v18 + v22->m_volumeSize[2] >= this->m_depth;
      if ( v18 + v22->m_volumeSize[2] > this->m_depth || this->m_reserveLastTexel && v32 )
        break;
      v34 = v92;
      v35 = (float)m_width;
      v36 = (float)v31;
      v[4] = (float)(v36 + 0.5) / v35;
      v37 = (float)v17;
      v38 = (float)this->m_height;
      v[5] = (float)(v37 + 0.5) / v38;
      v39 = (float)v18;
      m_depth = (float)this->m_depth;
      v[6] = (float)(v39 + 0.5) / m_depth;
      v41 = (float)this->m_width;
      *v = (float)((float)v22->m_volumeSize[0] - 1.0) / v41;
      v42 = (float)this->m_height;
      v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v42;
      v43 = (float)this->m_depth;
      v[2] = (float)((float)v22->m_volumeSize[2] - 1.0) / v43;
      v44 = v22->m_volumeSize[2];
      v16 = v31 + v22->m_volumeSize[0];
      v9 = volumePackingParams;
      v15 = v17 + v22->m_volumeSize[1];
      v8 = volumesToPack;
      v89 = v16;
      if ( v30 > v15 )
        v15 = v30;
      v45 = v18 + v44;
      if ( v14 > v45 )
        v45 = v14;
      v14 = v45;
      v88 = v45;
      v20 = v93 + 1;
      ++v92;
      ++v93;
      if ( v34 + 1 >= (int)numVolumesToPack )
      {
        v19 = numVolumesToPack;
LABEL_40:
        v9 = volumePackingParams;
        goto LABEL_41;
      }
    }
    v55 = v92;
    v19 = v92;
    if ( v92 >= (int)numVolumesToPack )
      goto LABEL_40;
    v56 = v93;
    v9 = volumePackingParams;
    if ( (int)(numVolumesToPack - v92) >= 4 )
    {
      v57 = &volumesToPack[v93 + 2];
      v58 = ((numVolumesToPack - v92 - 4) >> 2) + 1;
      v59 = v58;
      v55 = v92 + 4 * v58;
      v56 = v93 + 4i64 * v58;
      do
      {
        v60 = (float)this->m_width;
        v61 = &volumePackingParams[*(v57 - 2)];
        v61->m_uvBias.v[0] = 0.5 / v60;
        v62 = (float)this->m_height;
        v61->m_uvBias.v[1] = 0.5 / v62;
        v61->m_uvBias.v[2] = 0.5;
        v63 = (float)this->m_width;
        v61->m_uvScale.v[0] = (float)((float)v22->m_volumeSize[0] - 1.0) / v63;
        v64 = (float)this->m_height;
        v61->m_uvScale.v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v64;
        v61->m_uvScale.v[2] = (float)v22->m_volumeSize[2] - 1.0;
        v65 = (float)this->m_width;
        v66 = &volumePackingParams[*(v57 - 1)];
        v66->m_uvBias.v[0] = 0.5 / v65;
        v67 = (float)this->m_height;
        v66->m_uvBias.v[1] = 0.5 / v67;
        v66->m_uvBias.v[2] = 0.5;
        v68 = (float)this->m_width;
        v66->m_uvScale.v[0] = (float)((float)v22->m_volumeSize[0] - 1.0) / v68;
        v69 = (float)this->m_height;
        v66->m_uvScale.v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v69;
        v66->m_uvScale.v[2] = (float)v22->m_volumeSize[2] - 1.0;
        v70 = (float)this->m_width;
        v71 = &volumePackingParams[*v57];
        v71->m_uvBias.v[0] = 0.5 / v70;
        v57 += 4;
        v72 = (float)this->m_height;
        v71->m_uvBias.v[1] = 0.5 / v72;
        v71->m_uvBias.v[2] = 0.5;
        v73 = (float)this->m_width;
        v71->m_uvScale.v[0] = (float)((float)v22->m_volumeSize[0] - 1.0) / v73;
        v74 = (float)this->m_height;
        v71->m_uvScale.v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v74;
        v71->m_uvScale.v[2] = (float)v22->m_volumeSize[2] - 1.0;
        v75 = (float)this->m_width;
        v76 = &volumePackingParams[*(v57 - 3)];
        v76->m_uvBias.v[0] = 0.5 / v75;
        v77 = (float)this->m_height;
        v76->m_uvBias.v[1] = 0.5 / v77;
        v76->m_uvBias.v[2] = 0.5;
        v78 = (float)this->m_width;
        v76->m_uvScale.v[0] = (float)((float)v22->m_volumeSize[0] - 1.0) / v78;
        v79 = (float)this->m_height;
        v76->m_uvScale.v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v79;
        v76->m_uvScale.v[2] = (float)v22->m_volumeSize[2] - 1.0;
        --v59;
      }
      while ( v59 );
      v19 = v92;
    }
    if ( v55 < (int)numVolumesToPack )
    {
      v80 = &volumesToPack[v56];
      v81 = (int)(numVolumesToPack - v55);
      do
      {
        v82 = *v80++;
        v83 = (float)this->m_width;
        v84 = &volumePackingParams[v82];
        v84->m_uvBias.v[0] = 0.5 / v83;
        v85 = (float)this->m_height;
        v84->m_uvBias.v[1] = 0.5 / v85;
        v84->m_uvBias.v[2] = 0.5;
        v86 = (float)this->m_width;
        v84->m_uvScale.v[0] = (float)((float)v22->m_volumeSize[0] - 1.0) / v86;
        v87 = (float)this->m_height;
        v84->m_uvScale.v[1] = (float)((float)v22->m_volumeSize[1] - 1.0) / v87;
        v84->m_uvScale.v[2] = (float)v22->m_volumeSize[2] - 1.0;
        --v81;
      }
      while ( v81 );
    }
  }
LABEL_41:
  v46 = AlignUp<unsigned int>(v14, depthAlignment);
  this->m_packedDepth = v46;
  if ( squeezePacked )
  {
    v47 = (float)this->m_depth;
    v48 = (float)v46;
    v49 = v47 / v48;
    if ( (int)numVolumesToPack >= 4 )
    {
      v50 = &v9[2].m_uvScale.v[2];
      v51 = ((numVolumesToPack - 4) >> 2) + 1;
      v52 = v51;
      v13 = 4 * v51;
      do
      {
        *(v50 - 12) = v49 * *(v50 - 12);
        *(v50 - 16) = v49 * *(v50 - 16);
        *(v50 - 4) = v49 * *(v50 - 4);
        *(v50 - 8) = v49 * *(v50 - 8);
        v50[4] = v49 * v50[4];
        *v50 = v49 * *v50;
        v50[12] = v49 * v50[12];
        v50[8] = v49 * v50[8];
        v50 += 32;
        --v52;
      }
      while ( v52 );
    }
    if ( v13 < (int)numVolumesToPack )
    {
      v53 = numVolumesToPack - v13;
      v54 = &v9[v13].m_uvScale.v[2];
      do
      {
        v54[4] = v49 * v54[4];
        *v54 = v49 * *v54;
        v54 += 8;
        --v53;
      }
      while ( v53 );
    }
  }
  return v19;
}

