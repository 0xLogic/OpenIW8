/*
==============
Create_textures
==============
*/
BINKTEXTURES *Create_textures(BINKSHADERS *pshaders, BINK *bink, void *user_ptr)
{
  char *v6; 
  char *v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int slice_count; 
  unsigned int v13; 
  unsigned int OpenFlags; 
  BINKTEXTURES *(__fastcall *v15)(BINKSHADERS *, BINK *, void *); 
  unsigned int v16; 
  bool v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned __int64 v27; 
  int v28; 
  __int64 v29; 
  __m256i *v30; 
  __int64 v31; 
  __int16 v32; 
  __int64 v33; 
  _BYTE *v34; 
  __int64 v35; 
  unsigned int frameSet; 
  unsigned int v49; 
  unsigned int v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  __int64 v58; 
  __int64 v59; 
  int v60; 
  unsigned int v61; 
  unsigned int v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  int v66; 
  __int64 v67; 
  unsigned int v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  D3D12_GPU_DESCRIPTOR_HANDLE v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  __int64 v80; 
  unsigned int i; 
  __int64 v82; 
  __m256i *v83; 
  __m256i v84; 
  __m256i v85; 
  __m256i v86; 
  unsigned __int64 v87; 
  __int64 v88; 
  int v89; 
  int v90; 
  int v91; 
  unsigned __int8 v92; 
  int v93; 
  BINK *v94; 
  float Width; 
  float v96; 
  float Height; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  int desc_index; 
  int v105; 
  unsigned int v106; 
  unsigned int dc_size; 
  BINK *binka; 
  D3D12_RESOURCE_DESC desc; 
  __m256i v110; 
  _BYTE v111[64]; 
  __m256i v112; 

  binka = bink;
  v105 = 0;
  if ( !pshaders )
    return 0i64;
  v6 = (char *)j_BinkUtilMalloc(0x8E8ui64);
  v7 = v6;
  if ( !v6 )
    return 0i64;
  memset_0(v6, 0, 0x2C8ui64);
  memset_0(v7 + 716, 0, 0x61Cui64);
  *((_DWORD *)v7 + 178) = -1;
  if ( !j_BinkGetGPUDataBuffersInfo(bink, (BINKGPUDATABUFFERS *)(v7 + 168)) )
    return 0i64;
  v8 = *((_DWORD *)v7 + 138);
  *((_QWORD *)v7 + 11) = user_ptr;
  *((_QWORD *)v7 + 51) = pshaders;
  *((_QWORD *)v7 + 52) = bink;
  v9 = (bink->Width + 31) >> 5;
  *((_DWORD *)v7 + 106) = v9;
  v10 = (bink->Height + 31) >> 5;
  *((_DWORD *)v7 + 107) = v10;
  v11 = v9 * v10;
  *((_DWORD *)v7 + 108) = v11;
  slice_count = bink->slices.slice_count;
  if ( !slice_count )
    slice_count = 1;
  v13 = 8 * v11;
  *((_DWORD *)v7 + 109) = slice_count;
  *((_DWORD *)v7 + 110) = (bink->OpenFlags >> 20) & 1;
  OpenFlags = bink->OpenFlags;
  *((_QWORD *)v7 + 84) = 2i64;
  dc_size = 32 * v11;
  *((_DWORD *)v7 + 111) = (OpenFlags >> 2) & 1;
  v15 = pshaders[1].Create_textures;
  *((_DWORD *)v7 + 134) = v8;
  *((_DWORD *)v7 + 138) = (v8 + 1407) & 0xFFFFFF00;
  *((_DWORD *)v7 + 124) = 40 * v11;
  v16 = (48 * v11 + 31) & 0xFFFFFFE0;
  *((_DWORD *)v7 + 122) = 0;
  *((_DWORD *)v7 + 125) = v16;
  *((_DWORD *)v7 + 123) = 32 * v11;
  v17 = *((_DWORD *)v7 + 110) == 0;
  v106 = 8 * v11;
  if ( !v17 )
    v16 += 32 * v11;
  *((_DWORD *)v7 + 126) = v16;
  if ( *((_DWORD *)v7 + 111) )
    v16 += 32 * v11;
  *((_DWORD *)v7 + 127) = v16;
  v18 = *((_DWORD *)v7 + 138);
  *((_DWORD *)v7 + 135) = v18;
  *((_DWORD *)v7 + 138) = (v18 + v16 + 255) & 0xFFFFFF00;
  v19 = *((_DWORD *)v7 + 82);
  v20 = *((_DWORD *)v7 + 84);
  *((_DWORD *)v7 + 129) = v19;
  v21 = *((_DWORD *)v7 + 83) + v19;
  v22 = v21 + v20;
  *((_DWORD *)v7 + 128) = 0;
  *((_DWORD *)v7 + 131) = v22;
  *((_DWORD *)v7 + 130) = v21;
  if ( *((_DWORD *)v7 + 110) )
    v22 += *((_DWORD *)v7 + 85);
  *((_DWORD *)v7 + 132) = v22;
  v23 = v22;
  if ( *((_DWORD *)v7 + 111) )
    v23 = *((_DWORD *)v7 + 86) + v22;
  *((_DWORD *)v7 + 133) = v23;
  v24 = *((_DWORD *)v7 + 138);
  *((_DWORD *)v7 + 120) = v13 >> 1;
  *((_DWORD *)v7 + 121) = *((_DWORD *)v7 + 83) >> 2;
  v25 = *((_DWORD *)v7 + 133);
  *((_DWORD *)v7 + 136) = v24;
  v26 = v24 + v25 + 255;
  v27 = *((_QWORD *)v7 + 21);
  v26 &= 0xFFFFFF00;
  v28 = 16 * *((_DWORD *)v7 + 108);
  *((_DWORD *)v7 + 139) = v28;
  *((_DWORD *)v7 + 137) = v26;
  *((_DWORD *)v7 + 138) = (v26 + v28 + 255) & 0xFFFFFF00;
  if ( (unsigned __int64)&v110 > v27 + 63 || (unsigned __int64)&v112.m256i_u64[3] + 6 < v27 )
  {
    v33 = 2i64;
    v34 = v111;
    v35 = 16i64;
    do
    {
      v34 += 64;
      _XMM0 = *(unsigned __int64 *)(v35 + v27 - 16);
      v35 += 32i64;
      __asm { vpmovzxbw xmm1, xmm0 }
      _XMM0 = *(unsigned __int64 *)(v35 + v27 - 40);
      __asm { vpsllw  xmm2, xmm1, xmm3 }
      *((_OWORD *)v34 - 6) = _XMM2;
      __asm { vpmovzxbw xmm1, xmm0 }
      _XMM0 = *(unsigned __int64 *)(v27 + v35 - 32);
      __asm { vpsllw  xmm2, xmm1, xmm3 }
      *((_OWORD *)v34 - 5) = _XMM2;
      __asm { vpmovzxbw xmm1, xmm0 }
      _XMM0 = *(unsigned __int64 *)(v35 + v27 - 24);
      __asm { vpsllw  xmm2, xmm1, xmm3 }
      *((_OWORD *)v34 - 4) = _XMM2;
      __asm
      {
        vpmovzxbw xmm1, xmm0
        vpsllw  xmm2, xmm1, xmm3
      }
      *((_OWORD *)v34 - 3) = _XMM2;
      --v33;
    }
    while ( v33 );
  }
  else
  {
    v29 = 0i64;
    v30 = &v110;
    v31 = 64i64;
    do
    {
      v30 = (__m256i *)((char *)v30 + 2);
      v32 = 8 * *(unsigned __int8 *)(v29 + v27);
      ++v29;
      v30[-1].m256i_i16[15] = v32;
      --v31;
    }
    while ( v31 );
  }
  frameSet = 0;
  do
  {
    v49 = *((_DWORD *)v7 + 88);
    v50 = *((_DWORD *)v7 + 87);
    v51 = *((_DWORD *)v7 + 110);
    desc_index = *((_DWORD *)v7 + 111);
    v52 = 32i64 * frameSet;
    *(_QWORD *)&v7[v52 + 968] = j_BinkGPU_CreateTexture((ID3D12Device *)v15, D3D12_HEAP_TYPE_DEFAULT, v50, v49, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 0);
    *(_QWORD *)&v7[v52 + 976] = j_BinkGPU_CreateTexture((ID3D12Device *)v15, D3D12_HEAP_TYPE_DEFAULT, v50 >> 1, v49 >> 1, 1u, DXGI_FORMAT_R8G8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 1u);
    if ( v51 )
      *(_QWORD *)&v7[v52 + 984] = j_BinkGPU_CreateTexture((ID3D12Device *)v15, D3D12_HEAP_TYPE_DEFAULT, v50, v49, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 2u);
    if ( desc_index )
      *(_QWORD *)&v7[v52 + 992] = j_BinkGPU_CreateTexture((ID3D12Device *)v15, D3D12_HEAP_TYPE_DEFAULT, v50, v49, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 3u);
    ++frameSet;
  }
  while ( frameSet < *((_DWORD *)v7 + 168) );
  v53 = v105;
  v54 = 0;
  v55 = dc_size;
  v56 = binka->OpenFlags & 8;
  *((_DWORD *)v7 + 149) = 0;
  *((_DWORD *)v7 + 148) = (v56 | 0x10) >> 3;
  do
  {
    if ( v53 >= 0 )
      v53 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD, GUID *, char *))(*(_QWORD *)v15 + 72i64))(v15, 0i64, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, &v7[8 * v54 + 608]);
    v57 = *((_DWORD *)v7 + 148);
    ++v54;
  }
  while ( v54 < v57 );
  v105 = v53;
  if ( v53 >= 0 )
  {
    v58 = *(_QWORD *)v15;
    v59 = *((_QWORD *)v7 + 76);
    *(_QWORD *)&desc.Dimension = 0i64;
    desc.Alignment = 0i64;
    v60 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), D3D12_RESOURCE_DESC *, __int64, _QWORD, GUID *, char *))(v58 + 584))(v15, &desc, v59, 0i64, &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455, v7 + 600);
    v57 = *((_DWORD *)v7 + 148);
    v53 = v60;
    v105 = v60;
  }
  v61 = *((_DWORD *)v7 + 138) * v57;
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.Width = v61;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&desc.Layout = 1i64;
  *((_QWORD *)v7 + 133) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
  desc.Width = *((unsigned int *)v7 + 127);
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
  desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
  *((_QWORD *)v7 + 134) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Width = 128i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&desc.Layout = 1i64;
  *((_QWORD *)v7 + 135) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST);
  if ( v53 >= 0 )
  {
    v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)v7 + 133) + 64i64))(*((_QWORD *)v7 + 133), 0i64, 0i64, v7 + 1088);
    v105 = v53;
  }
  v62 = 4 * (*((_DWORD *)v7 + 168) + *((_DWORD *)v7 + 148) + 1) * (*((_DWORD *)v7 + 111) + *((_DWORD *)v7 + 110) + 2);
  *((_DWORD *)v7 + 179) = v62;
  if ( v53 >= 0 )
  {
    if ( v62 <= 0x60 )
    {
      *((_DWORD *)v7 + 178) = j_BinkGPU_AllocateBinkSRVDescriptors(*((void **)v7 + 11), v62, (ID3D12DescriptorHeap **)v7 + 88);
    }
    else
    {
      v53 = -2147467259;
      v105 = -2147467259;
    }
  }
  if ( *((int *)v7 + 178) < 0 )
    goto LABEL_67;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 88) + 8i64))(*((_QWORD *)v7 + 88));
  v63 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD))(*(_QWORD *)v15 + 120i64))(v15, 0i64);
  v64 = *((_QWORD *)v7 + 88);
  v65 = v63;
  v66 = *((_DWORD *)v7 + 178);
  *((_DWORD *)v7 + 180) = v63;
  v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 72i64))(v64);
  v68 = v65 * v66;
  v69 = *((_DWORD *)v7 + 180);
  v70 = v68;
  v71 = *((_DWORD *)v7 + 178);
  v72 = v70 + v67;
  v73 = *((_QWORD *)v7 + 88);
  *((_QWORD *)v7 + 91) = v72;
  v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 80i64))(v73);
  desc_index = 0;
  *((_QWORD *)v7 + 92) = (unsigned int)(v71 * v69) + v74;
  v75.ptr = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *((_DWORD *)v7 + 122), v55).ptr;
  v76 = *((_DWORD *)v7 + 123);
  *((D3D12_GPU_DESCRIPTOR_HANDLE *)v7 + 93) = v75;
  v106 *= 2;
  *((D3D12_GPU_DESCRIPTOR_HANDLE *)v7 + 94) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, v76, v106);
  if ( *((_DWORD *)v7 + 110) )
    *((D3D12_GPU_DESCRIPTOR_HANDLE *)v7 + 95) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *((_DWORD *)v7 + 125), v55);
  if ( *((_DWORD *)v7 + 111) )
    *((D3D12_GPU_DESCRIPTOR_HANDLE *)v7 + 96) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *((_DWORD *)v7 + 126), v55);
  v77 = 0;
  if ( *((_DWORD *)v7 + 148) )
  {
    v78 = v106;
    do
    {
      v79 = *((_DWORD *)v7 + 138) * v77;
      v80 = 32i64 * v77;
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v80 + 776] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, v79, *((_DWORD *)v7 + 128), *((_DWORD *)v7 + 82), *((_DWORD *)v7 + 122), v55);
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v80 + 784] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, v79, *((_DWORD *)v7 + 129), *((_DWORD *)v7 + 83) + *((_DWORD *)v7 + 84), *((_DWORD *)v7 + 123), v78);
      if ( *((_DWORD *)v7 + 110) )
        *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v80 + 792] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, v79, *((_DWORD *)v7 + 131), *((_DWORD *)v7 + 85), *((_DWORD *)v7 + 125), v55);
      if ( *((_DWORD *)v7 + 111) )
        *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[32 * v77 + 800] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, v79, *((_DWORD *)v7 + 132), *((_DWORD *)v7 + 86), *((_DWORD *)v7 + 126), v55);
      ++v77;
    }
    while ( v77 < *((_DWORD *)v7 + 148) );
    v53 = v105;
  }
  for ( i = 0; i < *((_DWORD *)v7 + 168); ++i )
  {
    v82 = 32i64 * i;
    *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v82 + 872] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *(ID3D12Resource **)&v7[v82 + 968], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
    *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v82 + 880] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *(ID3D12Resource **)&v7[v82 + 976], DXGI_FORMAT_R8G8_UINT, DXGI_FORMAT_R8G8_UNORM, DXGI_FORMAT_R8G8_UINT);
    if ( *((_DWORD *)v7 + 110) )
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[v82 + 888] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *(ID3D12Resource **)&v7[v82 + 984], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
    if ( *((_DWORD *)v7 + 111) )
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&v7[32 * i + 896] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)v7, &desc_index, *(ID3D12Resource **)&v7[32 * i + 992], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
  }
  if ( desc_index != *((_DWORD *)v7 + 179) )
    DebugBreak();
  if ( v53 < 0 )
    goto LABEL_67;
  if ( *((_DWORD *)v7 + 138) < 0x80u )
    goto LABEL_67;
  v83 = (__m256i *)*((_QWORD *)v7 + 136);
  v84 = *(__m256i *)v111;
  *v83 = v110;
  v85 = *(__m256i *)&v111[32];
  v83[1] = v84;
  v86 = v112;
  v83[2] = v85;
  v83[3] = v86;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 75) + 120i64))(*((_QWORD *)v7 + 75), *((_QWORD *)v7 + 135), 0i64, *((_QWORD *)v7 + 133), 0i64, 128i64);
  v87 = *((_QWORD *)v7 + 135);
  v88 = *((_QWORD *)v7 + 75);
  *(_QWORD *)&desc.Dimension = 0i64;
  desc.Alignment = v87;
  desc.Width = 0x400FFFFFFFFi64;
  desc.Height = 64;
  (*(void (__fastcall **)(__int64, __int64, D3D12_RESOURCE_DESC *))(*(_QWORD *)v88 + 208i64))(v88, 1i64, &desc);
  if ( submit_command_list((BINKTEXTURESD3D12GPU *)v7) < 0 )
  {
LABEL_67:
    Free_textures((BINKTEXTURES *)v7);
    return 0i64;
  }
  else
  {
    v89 = *((_DWORD *)v7 + 106);
    *((_DWORD *)v7 + 112) = 16 * v89 - 11;
    *((_DWORD *)v7 + 114) = 4 * v89 - 3;
    v90 = v89 * (16 * *((_DWORD *)v7 + 107) - 16);
    v91 = v89 * (4 * *((_DWORD *)v7 + 107) - 4);
    v92 = (v7[352] - 1) & 0x1F;
    *((_DWORD *)v7 + 113) = v90;
    *((_DWORD *)v7 + 115) = v91;
    if ( v92 >= 0x10u )
    {
      v93 = 10;
      *((_DWORD *)v7 + 115) = v91 | 2;
    }
    else
    {
      v93 = 2;
    }
    v94 = binka;
    *((_DWORD *)v7 + 113) = v90 | v93;
    Width = (float)v94->Width;
    v96 = (float)*((unsigned int *)v7 + 87);
    *((float *)v7 + 116) = Width / v96;
    Height = (float)v94->Height;
    v98 = (float)*((unsigned int *)v7 + 88);
    *((float *)v7 + 117) = Height / v98;
    v99 = (float)(v94->Width >> 1);
    v100 = (float)(*((_DWORD *)v7 + 87) >> 1);
    *((float *)v7 + 118) = v99 / v100;
    v101 = (float)(v94->Height >> 1);
    v102 = (float)(*((_DWORD *)v7 + 88) >> 1);
    *((float *)v7 + 119) = v101 / v102;
    *((_DWORD *)v7 + 140) = -1;
    *(_QWORD *)(v7 + 564) = 0i64;
    *(_QWORD *)(v7 + 572) = 0i64;
    *((_DWORD *)v7 + 145) = -1;
    *((_DWORD *)v7 + 146) = 16 * *((_DWORD *)v7 + 106) - 16;
    *((_DWORD *)v7 + 147) = 4 * *((_DWORD *)v7 + 106) - 4;
    *((_QWORD *)v7 + 32) = v7 + 1120;
    *((_QWORD *)v7 + 33) = v7 + 1224;
    *((_QWORD *)v7 + 34) = v7 + 1328;
    *((_QWORD *)v7 + 35) = v7 + 1432;
    *((_QWORD *)v7 + 36) = v7 + 1536;
    *((_QWORD *)v7 + 38) = v7 + 1640;
    *((_QWORD *)v7 + 39) = v7 + 1704;
    *((_QWORD *)v7 + 40) = v7 + 1960;
    j_BinkRegisterGPUDataBuffers(v94, (BINKGPUDATABUFFERS *)(v7 + 168));
    *((_QWORD *)v7 + 277) = 0i64;
    *((_QWORD *)v7 + 278) = 1065353216i64;
    *((_DWORD *)v7 + 558) = 0;
    *((_DWORD *)v7 + 559) = 1065353216;
    *((_QWORD *)v7 + 281) = 0i64;
    *((_DWORD *)v7 + 564) = 1065353216;
    *(_QWORD *)(v7 + 2260) = 1065353216i64;
    *((_QWORD *)v7 + 280) = 1065353216i64;
    *((_DWORD *)v7 + 567) = 1065353216;
    *((_DWORD *)v7 + 568) = 1065353216;
    *((_QWORD *)v7 + 10) = Free_textures;
    *(_QWORD *)v7 = Start_texture_update;
    *((_QWORD *)v7 + 1) = Finish_texture_update;
    *((_QWORD *)v7 + 2) = Draw_textures;
    *((_QWORD *)v7 + 3) = Set_draw_position;
    *((_QWORD *)v7 + 4) = Set_draw_corners;
    *((_QWORD *)v7 + 5) = Set_source_rect;
    *((_QWORD *)v7 + 6) = Set_alpha_settings;
    *((_QWORD *)v7 + 7) = Set_hdr_settings;
    return (BINKTEXTURES *)v7;
  }
}

/*
==============
Draw_textures
==============
*/
void Draw_textures(BINKTEXTURES *ptextures, BINKSHADERS *pshaders, void *graphics_context)
{
  ;
}

/*
==============
Finish_texture_update
==============
*/
void Finish_texture_update(BINKTEXTURES *ptextures)
{
  int (__fastcall *After_Reset_textures)(BINKTEXTURES *); 
  __int64 v3; 
  int Set_draw_position; 
  char *v5; 
  int Draw_textures_high; 
  unsigned int v7; 
  float Finish_texture_update_high; 
  __int64 Draw_textures_low; 
  float v10; 
  float v11; 
  int user_ptr_high; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int Start_texture_update_high; 
  int cRtexture; 
  int v20; 
  void (__fastcall *v21)(BINKTEXTURES *, void *, _QWORD, _QWORD); 
  void (__fastcall *Before_Reset_textures)(BINKTEXTURES *); 
  void *Ytexture; 
  void (__fastcall *v24)(BINKTEXTURES *); 
  void *v25; 
  _QWORD *v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  _DWORD *v29; 
  int (__fastcall *v30)(BINKTEXTURES *); 
  _DWORD *v31; 
  __int64 v32; 
  _DWORD *v33; 
  unsigned int v34; 
  void (__fastcall *v35)(BINKTEXTURES *); 
  void *v36; 
  _QWORD *v37; 
  __int64 v38; 
  unsigned __int64 v39; 
  _DWORD *v40; 
  __int64 v41; 
  _DWORD *v42; 
  __int64 v43; 
  _DWORD *v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  void (__fastcall *v48)(BINKTEXTURES *, void *, __int64, _QWORD); 
  __int64 v49[2]; 
  int v50; 
  int v51; 
  int v52; 
  __int64 v53[2]; 
  int v54; 
  int v55; 
  int v56; 
  __int64 v57[4]; 

  After_Reset_textures = ptextures[2].After_Reset_textures;
  ptextures[1].Finish_texture_update = NULL;
  ptextures[1].Set_alpha_settings = NULL;
  ptextures[1].Draw_textures = NULL;
  ptextures[1].Set_hdr_settings = NULL;
  ptextures[1].Set_draw_position = NULL;
  ptextures[1].Before_Reset_textures = NULL;
  ptextures[1].Set_draw_corners = NULL;
  ptextures[1].After_Reset_textures = NULL;
  ptextures[1].Set_source_rect = NULL;
  ptextures[1].Free_textures = NULL;
  ptextures[1].Htexture = NULL;
  if ( LODWORD(ptextures[2].Before_Reset_textures) )
  {
    v3 = (unsigned int)(HIDWORD(ptextures[3].user_ptr) * LODWORD(ptextures[3].Set_alpha_settings));
    Set_draw_position = (int)ptextures[2].Set_draw_position;
    LODWORD(ptextures[2].Before_Reset_textures) = 0;
    v5 = (char *)ptextures[6].Free_textures + v3;
    *(_DWORD *)v5 = Set_draw_position;
    *((_DWORD *)v5 + 1) = HIDWORD(ptextures[2].Set_draw_position);
    *((_QWORD *)v5 + 1) = ptextures[2].user_ptr;
    *((_DWORD *)v5 + 4) = LODWORD(ptextures[2].user_data[2]) >> 5;
    *((_DWORD *)v5 + 5) = HIDWORD(ptextures[2].user_data[2]) >> 3;
    *((_DWORD *)v5 + 6) = LODWORD(ptextures[2].user_data[3]) >> 3;
    *((_DWORD *)v5 + 7) = HIDWORD(ptextures[2].user_data[3]) >> 5;
    *((_DWORD *)v5 + 8) = LODWORD(ptextures[3].Start_texture_update) >> 5;
    *((_QWORD *)v5 + 6) = 0i64;
    Draw_textures_high = HIDWORD(ptextures[2].Draw_textures);
    if ( Draw_textures_high )
    {
      *((_DWORD *)v5 + 12) = Draw_textures_high - 1;
      *((_DWORD *)v5 + 13) = 2 * HIDWORD(ptextures[2].Draw_textures) - 1;
    }
    v7 = 0;
    *((_DWORD *)v5 + 14) = HIDWORD(ptextures[2].user_data[1]);
    *((_DWORD *)v5 + 15) = ptextures[2].user_data[1];
    *((_QWORD *)v5 + 8) = ptextures[2].cBtexture;
    *((_QWORD *)v5 + 9) = ptextures[2].Atexture;
    Finish_texture_update_high = (float)HIDWORD(ptextures[2].Finish_texture_update);
    Draw_textures_low = LODWORD(ptextures[2].Draw_textures);
    v10 = 1.0 / Finish_texture_update_high;
    *((float *)v5 + 20) = 1.0 / Finish_texture_update_high;
    v11 = (float)Draw_textures_low;
    *((float *)v5 + 23) = (float)(1.0 / v11) * 0.75;
    *((float *)v5 + 21) = 1.0 / v11;
    *((float *)v5 + 22) = v10 * 0.75;
    *((_DWORD *)v5 + 24) = ptextures[2].Set_draw_corners;
    *((_DWORD *)v5 + 28) = ptextures[2].Set_alpha_settings;
    *((_DWORD *)v5 + 25) = HIDWORD(ptextures[2].Set_draw_corners);
    *((_DWORD *)v5 + 29) = HIDWORD(ptextures[2].Set_alpha_settings);
    *((_DWORD *)v5 + 26) = ptextures[2].Set_source_rect;
    *((_DWORD *)v5 + 30) = ptextures[2].Set_hdr_settings;
    *((_DWORD *)v5 + 27) = HIDWORD(ptextures[2].Set_source_rect);
    *((_DWORD *)v5 + 31) = HIDWORD(ptextures[2].Set_hdr_settings);
    user_ptr_high = HIDWORD(ptextures[2].user_ptr);
    if ( ((user_ptr_high + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v13 = 4 * v7++;
        *(_DWORD *)&v5[4 * (unsigned int)v13 + 128] = *(_DWORD *)((char *)&ptextures[9].Htexture + v13);
        user_ptr_high = HIDWORD(ptextures[2].user_ptr);
      }
      while ( v7 < (unsigned int)(user_ptr_high + 31) >> 5 );
    }
    v14 = 0;
    if ( ((4 * LODWORD(ptextures[2].user_ptr) + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v15 = 4 * v14++;
        *(_DWORD *)&v5[4 * (unsigned int)(v15 + 1) + 128] = *(_DWORD *)((char *)&ptextures[10].Set_draw_position + v15);
      }
      while ( v14 < (unsigned int)(4 * LODWORD(ptextures[2].user_ptr) + 31) >> 5 );
      user_ptr_high = HIDWORD(ptextures[2].user_ptr);
    }
    v16 = 0i64;
    if ( ((4 * user_ptr_high + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v17 = (unsigned int)(4 * v16);
        v16 = (unsigned int)(v16 + 1);
        *(_DWORD *)&v5[4 * (unsigned int)(v17 + 2) + 128] = *(_DWORD *)((char *)&ptextures[11].cBtexture + v17);
      }
      while ( (unsigned int)v16 < (unsigned int)(4 * HIDWORD(ptextures[2].user_ptr) + 31) >> 5 );
    }
    Start_texture_update_high = HIDWORD(ptextures[4].Start_texture_update);
    cRtexture = (int)ptextures[2].cRtexture;
    v20 = (int)ptextures[2].Set_draw_position;
    HIDWORD(ptextures[4].Start_texture_update) = (Start_texture_update_high + 1) % LODWORD(ptextures[4].Start_texture_update);
    if ( (v20 & 0x10) != 0 )
    {
      if ( !cRtexture )
        LODWORD(ptextures[2].Set_draw_position) = v20 & 0xFFFFFFEF;
      cRtexture = 0;
    }
    v21 = (void (__fastcall *)(BINKTEXTURES *, void *, _QWORD, _QWORD))*((_QWORD *)After_Reset_textures + 22);
    if ( v21 )
      v21(ptextures, ptextures[3].Ytexture, 0i64, *((_QWORD *)After_Reset_textures + 23));
    (*(void (__fastcall **)(void *, __int64, void (__fastcall **)(BINKTEXTURES *, float, float, float, float, float, float), __int64))(*(_QWORD *)ptextures[3].Ytexture + 256i64))(ptextures[3].Ytexture, 1i64, &ptextures[4].Set_draw_corners, v16);
    Before_Reset_textures = ptextures[6].Before_Reset_textures;
    Ytexture = ptextures[3].Ytexture;
    v49[0] = 0i64;
    v49[1] = (__int64)Before_Reset_textures;
    v50 = -1;
    v51 = 64;
    v52 = 8;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)Ytexture + 208i64))(Ytexture, 1i64, v49);
    plane_set_transition((BINKTEXTURESD3D12GPU *)ptextures, (BINKGPU_D3D12_PLANESET *)&ptextures[5].Htexture + HIDWORD(ptextures[4].Start_texture_update), D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 9));
    mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 0, Start_texture_update_high, ptextures[2].user_data[2]);
    mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 17), 1u, Start_texture_update_high, HIDWORD(ptextures[2].user_data[2]));
    if ( cRtexture )
      mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 2u, Start_texture_update_high, HIDWORD(ptextures[2].user_data[3]));
    if ( HIDWORD(ptextures[2].cRtexture) )
      mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 3u, Start_texture_update_high, (unsigned int)ptextures[3].Start_texture_update);
    v24 = ptextures[6].Before_Reset_textures;
    v25 = ptextures[3].Ytexture;
    v57[0] = 2i64;
    v57[1] = (__int64)v24;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v25 + 208i64))(v25, 1i64, v57);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 10));
    v26 = ptextures[3].Ytexture;
    v27 = *((_QWORD *)After_Reset_textures + 18);
    v28 = v26[7];
    if ( v28 >= v26[10] )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*v26 + 200i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 18));
      v29 = (_DWORD *)v26[7];
    }
    else
    {
      *(_OWORD *)v28 = *(_OWORD *)(v27 + 16);
      *(_QWORD *)(v28 + 16) = *(_QWORD *)(v27 + 32);
      v29 = (_DWORD *)(v28 + 24);
      v26[7] = v29;
    }
    v30 = ptextures[4].After_Reset_textures;
    if ( (unsigned __int64)v29 >= v26[10] )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, int (__fastcall *)(BINKTEXTURES *)))(*v26 + 280i64))(v26, 0i64, v30);
      v31 = (_DWORD *)v26[7];
    }
    else
    {
      *v29 = *((_DWORD *)v26 + 152);
      v29[1] = (_DWORD)v30;
      v31 = v29 + 2;
      v26[7] = v31;
    }
    v32 = *((_QWORD *)&ptextures[4].cRtexture + 4 * HIDWORD(ptextures[3].user_ptr));
    if ( (unsigned __int64)v31 >= v26[10] )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v26 + 280i64))(v26, 1i64, v32);
      v33 = (_DWORD *)v26[7];
    }
    else
    {
      *v31 = *((_DWORD *)v26 + 153);
      v31[1] = v32;
      v33 = v31 + 2;
      v26[7] = v33;
    }
    v34 = LODWORD(ptextures[2].cRtexture) + HIDWORD(ptextures[2].cRtexture) + 3;
    if ( (unsigned __int64)v33 >= v26[9] )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v26 + 112i64))(v26, v34, 1i64);
    }
    else
    {
      *v33 = 1073923072;
      v33[1] = v34;
      v33[2] = 1;
      v33[3] = 1;
      v26[7] = v33 + 4;
    }
    v35 = ptextures[6].Before_Reset_textures;
    v36 = ptextures[3].Ytexture;
    v53[0] = 0i64;
    v53[1] = (__int64)v35;
    v54 = -1;
    v55 = 8;
    v56 = 64;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v36 + 208i64))(v36, 1i64, v53);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 8));
    dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 0);
    dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 16), 1u);
    if ( cRtexture )
      dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 2u);
    if ( HIDWORD(ptextures[2].cRtexture) )
      dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 3u);
    if ( ((__int64)ptextures[2].Set_draw_position & 0x10) != 0 )
    {
      v37 = ptextures[3].Ytexture;
      v38 = *((_QWORD *)After_Reset_textures + 21);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v37 + 264i64))(v37, *((_QWORD *)ptextures[2].After_Reset_textures + 12));
      v39 = v37[7];
      if ( v39 >= v37[10] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v37 + 200i64))(v37, v38);
        v40 = (_DWORD *)v37[7];
      }
      else
      {
        *(_OWORD *)v39 = *(_OWORD *)(v38 + 16);
        *(_QWORD *)(v39 + 16) = *(_QWORD *)(v38 + 32);
        v40 = (_DWORD *)(v39 + 24);
        v37[7] = v40;
      }
      v41 = *((_QWORD *)&ptextures[4].Atexture + 4 * HIDWORD(ptextures[3].user_ptr));
      if ( (unsigned __int64)v40 >= v37[10] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v37 + 280i64))(v37, 0i64, v41);
        v42 = (_DWORD *)v37[7];
      }
      else
      {
        *v40 = *((_DWORD *)v37 + 152);
        v40[1] = v41;
        v42 = v40 + 2;
        v37[7] = v42;
      }
      v43 = *((_QWORD *)&ptextures[5].Set_alpha_settings + 4 * HIDWORD(ptextures[4].Start_texture_update));
      if ( (unsigned __int64)v42 >= v37[10] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v37 + 280i64))(v37, 1i64, v43);
        v44 = (_DWORD *)v37[7];
      }
      else
      {
        *v42 = *((_DWORD *)v37 + 153);
        v44 = v42 + 2;
        v42[1] = v43;
        v37[7] = v42 + 2;
      }
      v45 = (unsigned int)(4 * HIDWORD(ptextures[2].user_ptr));
      v46 = (unsigned int)(4 * LODWORD(ptextures[2].user_ptr));
      if ( (unsigned __int64)v44 >= v37[9] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*v37 + 112i64))(v37, v46, v45, 1i64);
      }
      else
      {
        *v44 = 1073923072;
        v44[1] = v46;
        v44[2] = v45;
        v44[3] = 1;
        v37[7] = v44 + 4;
      }
    }
    v47 = (int)ptextures[2].Set_draw_position;
    if ( (v47 & 1) != 0 )
    {
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 19), *((ID3D12Resource **)&ptextures[5].Htexture + 4 * HIDWORD(ptextures[4].Start_texture_update)), 0, DEBLOCK_DIR_UD);
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 20), (ID3D12Resource *)ptextures[5].user_data[4 * HIDWORD(ptextures[4].Start_texture_update)], 1u, DEBLOCK_DIR_UD);
      v47 = (int)ptextures[2].Set_draw_position;
    }
    if ( (v47 & 2) != 0 )
    {
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 19), *((ID3D12Resource **)&ptextures[5].Htexture + 4 * HIDWORD(ptextures[4].Start_texture_update)), 0, DEBLOCK_DIR_LR);
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 20), (ID3D12Resource *)ptextures[5].user_data[4 * HIDWORD(ptextures[4].Start_texture_update)], 1u, DEBLOCK_DIR_LR);
    }
    plane_set_transition((BINKTEXTURESD3D12GPU *)ptextures, (BINKGPU_D3D12_PLANESET *)&ptextures[5].Htexture + HIDWORD(ptextures[4].Start_texture_update), D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ);
    v48 = (void (__fastcall *)(BINKTEXTURES *, void *, __int64, _QWORD))*((_QWORD *)After_Reset_textures + 22);
    if ( v48 )
      v48(ptextures, ptextures[3].Ytexture, 1i64, *((_QWORD *)After_Reset_textures + 23));
    submit_command_list((BINKTEXTURESD3D12GPU *)ptextures);
  }
}

/*
==============
Free_shaders
==============
*/
void Free_shaders(BINKSHADERS *pshaders)
{
  void (__fastcall *v2)(BINKSHADERS *); 
  ID3D12Fence *v3; 
  BINKTEXTURES *(__fastcall *Create_textures)(BINKSHADERS *, BINK *, void *); 
  unsigned __int64 *user_data; 
  __int64 v6; 
  unsigned __int64 *v7; 
  __int64 v8; 
  BINKTEXTURES *(__fastcall *v9)(BINKSHADERS *, BINK *, void *); 
  unsigned __int64 v10; 
  void (__fastcall *v11)(BINKSHADERS *); 
  BINKTEXTURES *(__fastcall *v12)(BINKSHADERS *, BINK *, void *); 

  if ( pshaders )
  {
    v2 = pshaders[47].Free_shaders;
    if ( v2 )
    {
      v3 = (ID3D12Fence *)pshaders[47].user_data[0];
      if ( v3 )
      {
        wait_for_fence((BINKSHADERSD3D12GPU *)pshaders, v3, pshaders[47].user_data[1]);
        v2 = pshaders[47].Free_shaders;
      }
      CloseHandle(v2);
    }
    Create_textures = pshaders[4].Create_textures;
    if ( Create_textures && pshaders[46].user_data[3] )
      (*(void (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD, _QWORD))(*(_QWORD *)Create_textures + 72i64))(Create_textures, 0i64, 0i64);
    user_data = pshaders[1].user_data;
    v6 = 6i64;
    do
    {
      if ( *user_data )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*user_data + 16i64))(*user_data);
        *user_data = 0i64;
      }
      ++user_data;
      --v6;
    }
    while ( v6 );
    v7 = pshaders[2].user_data;
    v8 = 8i64;
    do
    {
      if ( *v7 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*v7 + 16i64))(*v7);
        *v7 = 0i64;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    v9 = pshaders[4].Create_textures;
    if ( v9 )
    {
      (*(void (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *)))(*(_QWORD *)v9 + 16i64))(v9);
      pshaders[4].Create_textures = NULL;
    }
    v10 = pshaders[47].user_data[0];
    if ( v10 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16i64))(v10);
      pshaders[47].user_data[0] = 0i64;
    }
    v11 = pshaders[1].Free_shaders;
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16i64))(v11);
      pshaders[1].Free_shaders = NULL;
    }
    v12 = pshaders[1].Create_textures;
    if ( v12 )
    {
      (*(void (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *)))(*(_QWORD *)v12 + 16i64))(v12);
      pshaders[1].Create_textures = NULL;
    }
    j_BinkUtilFree(pshaders);
  }
}

/*
==============
Free_textures
==============
*/
void Free_textures(BINKTEXTURES *ptextures)
{
  int (__fastcall *After_Reset_textures)(BINKTEXTURES *); 
  unsigned __int64 v3; 
  __int64 v4; 
  int Set_source_rect; 
  void *Ytexture; 
  unsigned int i; 
  void **v8; 
  unsigned __int64 *user_data; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  void (__fastcall *Set_hdr_settings)(BINKTEXTURES *, int, float, int); 
  void (__fastcall *Before_Reset_textures)(BINKTEXTURES *); 
  int (__fastcall *v16)(BINKTEXTURES *); 
  void (__fastcall *Set_draw_corners)(BINKTEXTURES *, float, float, float, float, float, float); 

  After_Reset_textures = ptextures[2].After_Reset_textures;
  v3 = ptextures[3].user_data[2];
  v4 = *((_QWORD *)After_Reset_textures + 284);
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64i64))(v4) < v3 && (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v4 + 72i64))(v4, v3, *((_QWORD *)After_Reset_textures + 283)) >= 0 )
    WaitForSingleObject(*((HANDLE *)After_Reset_textures + 283), 0x2710u);
  j_BinkRegisterGPUDataBuffers((BINK *)ptextures[2].Free_textures, NULL);
  Set_source_rect = (int)ptextures[4].Set_source_rect;
  if ( Set_source_rect >= 0 )
    j_BinkGPU_FreeBinkSRVDescriptors(ptextures->user_ptr, Set_source_rect, HIDWORD(ptextures[4].Set_source_rect));
  Ytexture = ptextures[3].Ytexture;
  if ( Ytexture )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)Ytexture + 16i64))(Ytexture);
    ptextures[3].Ytexture = NULL;
  }
  for ( i = 0; i < LODWORD(ptextures[3].user_ptr); ++i )
  {
    v8 = &ptextures[3].cRtexture + i;
    if ( *v8 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 16i64))(*v8);
      *v8 = NULL;
    }
  }
  user_data = ptextures[5].user_data;
  v10 = 3i64;
  do
  {
    v11 = *(user_data - 1);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      *(user_data - 1) = 0i64;
    }
    if ( *user_data )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*user_data + 16i64))(*user_data);
      *user_data = 0i64;
    }
    v12 = user_data[1];
    if ( v12 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16i64))(v12);
      user_data[1] = 0i64;
    }
    v13 = user_data[2];
    if ( v13 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16i64))(v13);
      user_data[2] = 0i64;
    }
    user_data += 4;
    --v10;
  }
  while ( v10 );
  if ( ptextures[6].Free_textures )
    (*(void (__fastcall **)(void (__fastcall *)(BINKTEXTURES *, int, float, int), _QWORD, _QWORD))(*(_QWORD *)ptextures[6].Set_hdr_settings + 72i64))(ptextures[6].Set_hdr_settings, 0i64, 0i64);
  Set_hdr_settings = ptextures[6].Set_hdr_settings;
  if ( Set_hdr_settings )
  {
    (*(void (__fastcall **)(void (__fastcall *)(BINKTEXTURES *, int, float, int)))(*(_QWORD *)Set_hdr_settings + 16i64))(Set_hdr_settings);
    ptextures[6].Set_hdr_settings = NULL;
  }
  Before_Reset_textures = ptextures[6].Before_Reset_textures;
  if ( Before_Reset_textures )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)Before_Reset_textures + 16i64))(Before_Reset_textures);
    ptextures[6].Before_Reset_textures = NULL;
  }
  v16 = ptextures[6].After_Reset_textures;
  if ( v16 )
  {
    (*(void (__fastcall **)(int (__fastcall *)(BINKTEXTURES *)))(*(_QWORD *)v16 + 16i64))(v16);
    ptextures[6].After_Reset_textures = NULL;
  }
  Set_draw_corners = ptextures[4].Set_draw_corners;
  if ( Set_draw_corners )
  {
    (*(void (__fastcall **)(void (__fastcall *)(BINKTEXTURES *, float, float, float, float, float, float)))(*(_QWORD *)Set_draw_corners + 16i64))(Set_draw_corners);
    ptextures[4].Set_draw_corners = NULL;
  }
  j_BinkUtilFree(ptextures);
}

/*
==============
Set_alpha_settings
==============
*/
void Set_alpha_settings(BINKTEXTURES *ptextures, float alpha_value, int draw_type)
{
  *(float *)&ptextures[13].Set_hdr_settings = alpha_value;
  HIDWORD(ptextures[13].Set_hdr_settings) = draw_type;
}

/*
==============
Set_draw_corners
==============
*/
void Set_draw_corners(BINKTEXTURES *ptextures, float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
  *((float *)&ptextures[13].Set_source_rect + 1) = By;
  *(float *)&ptextures[13].Set_draw_corners = Ax;
  *((float *)&ptextures[13].Set_alpha_settings + 1) = Cy;
  *((float *)&ptextures[13].Set_draw_corners + 1) = Ay;
  *(float *)&ptextures[13].Set_source_rect = Bx;
  *(float *)&ptextures[13].Set_alpha_settings = Cx;
}

/*
==============
Set_draw_position
==============
*/
void Set_draw_position(BINKTEXTURES *ptextures, float x0, float y0, float x1, float y1)
{
  *((float *)&ptextures[13].Set_alpha_settings + 1) = y1;
  *(float *)&ptextures[13].Set_draw_corners = x0;
  *((float *)&ptextures[13].Set_draw_corners + 1) = y0;
  *(float *)&ptextures[13].Set_source_rect = x1;
  *((float *)&ptextures[13].Set_source_rect + 1) = y0;
  *(float *)&ptextures[13].Set_alpha_settings = x0;
}

/*
==============
Set_hdr_settings
==============
*/
void Set_hdr_settings(BINKTEXTURES *ptextures, int tonemap, float exposure, int out_nits)
{
  *(float *)&ptextures[13].user_ptr = (float)out_nits * 0.0125;
  *((float *)&ptextures[13].Free_textures + 1) = exposure;
  LODWORD(ptextures[13].Free_textures) = tonemap;
}

/*
==============
Set_source_rect
==============
*/
void Set_source_rect(BINKTEXTURES *ptextures, float u0, float v0, float u1, float v1)
{
  *((float *)&ptextures[13].After_Reset_textures + 1) = v1;
  *(float *)&ptextures[13].Before_Reset_textures = u0;
  *((float *)&ptextures[13].Before_Reset_textures + 1) = v0;
  *(float *)&ptextures[13].After_Reset_textures = u1;
}

/*
==============
Start_texture_update
==============
*/
void Start_texture_update(BINKTEXTURES *ptextures)
{
  int (__fastcall *After_Reset_textures)(BINKTEXTURES *); 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  char *v6; 
  __int64 Draw_textures_high; 
  __int64 Set_draw_position_low; 

  After_Reset_textures = ptextures[2].After_Reset_textures;
  v3 = *((_QWORD *)&ptextures[3].Htexture + HIDWORD(ptextures[3].user_ptr));
  v4 = *((_QWORD *)After_Reset_textures + 284);
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64i64))(v4) < v3 && (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v4 + 72i64))(v4, v3, *((_QWORD *)After_Reset_textures + 283)) >= 0 )
    WaitForSingleObject(*((HANDLE *)After_Reset_textures + 283), 0x2710u);
  v5 = *((_QWORD *)&ptextures[3].cRtexture + HIDWORD(ptextures[3].user_ptr));
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v5 + 64i64))(v5) >= 0 )
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 80i64))(ptextures[3].Ytexture, *((_QWORD *)&ptextures[3].cRtexture + HIDWORD(ptextures[3].user_ptr)), 0i64);
  v6 = (char *)ptextures[6].Free_textures + (unsigned int)(HIDWORD(ptextures[3].user_ptr) * LODWORD(ptextures[3].Set_alpha_settings));
  ptextures[1].Finish_texture_update = (void (__fastcall *)(BINKTEXTURES *))&v6[LODWORD(ptextures[2].user_data[2]) + HIDWORD(ptextures[3].Set_draw_corners)];
  ptextures[1].Set_alpha_settings = (void (__fastcall *)(BINKTEXTURES *, float, int))&v6[LODWORD(ptextures[3].Finish_texture_update) + LODWORD(ptextures[3].Set_source_rect)];
  ptextures[1].Draw_textures = (void (__fastcall *)(BINKTEXTURES *, BINKSHADERS *, void *))&v6[HIDWORD(ptextures[2].user_data[2]) + HIDWORD(ptextures[3].Set_draw_corners)];
  ptextures[1].Set_hdr_settings = (void (__fastcall *)(BINKTEXTURES *, int, float, int))&v6[HIDWORD(ptextures[3].Finish_texture_update) + LODWORD(ptextures[3].Set_source_rect)];
  ptextures[1].Set_draw_position = (void (__fastcall *)(BINKTEXTURES *, float, float, float, float))&v6[LODWORD(ptextures[2].user_data[3]) + HIDWORD(ptextures[3].Set_draw_corners)];
  ptextures[1].Before_Reset_textures = (void (__fastcall *)(BINKTEXTURES *))&v6[LODWORD(ptextures[3].Draw_textures) + LODWORD(ptextures[3].Set_source_rect)];
  if ( LODWORD(ptextures[2].cRtexture) )
  {
    Draw_textures_high = HIDWORD(ptextures[3].Draw_textures);
    ptextures[1].Set_draw_corners = (void (__fastcall *)(BINKTEXTURES *, float, float, float, float, float, float))&v6[HIDWORD(ptextures[2].user_data[3]) + HIDWORD(ptextures[3].Set_draw_corners)];
    ptextures[1].After_Reset_textures = (int (__fastcall *)(BINKTEXTURES *))&v6[Draw_textures_high + LODWORD(ptextures[3].Set_source_rect)];
  }
  if ( HIDWORD(ptextures[2].cRtexture) )
  {
    Set_draw_position_low = LODWORD(ptextures[3].Set_draw_position);
    ptextures[1].Set_source_rect = (void (__fastcall *)(BINKTEXTURES *, float, float, float, float))&v6[LODWORD(ptextures[3].Start_texture_update) + HIDWORD(ptextures[3].Set_draw_corners)];
    ptextures[1].Free_textures = (void (__fastcall *)(BINKTEXTURES *))&v6[Set_draw_position_low + LODWORD(ptextures[3].Set_source_rect)];
  }
  ptextures[1].Htexture = &v6[HIDWORD(ptextures[3].Set_source_rect)];
  LODWORD(ptextures[2].Before_Reset_textures) = 0;
}

/*
==============
create_root_sig
==============
*/
ID3D12RootSignature *create_root_sig(ID3D12Device *dev, unsigned int num_para, const D3D12_ROOT_PARAMETER *para, unsigned int num_static_smp, const D3D12_STATIC_SAMPLER_DESC *static_smp, D3D12_ROOT_SIGNATURE_FLAGS flags, HRESULT *hr)
{
  HRESULT *v8; 
  bool v9; 
  int v11; 
  HRESULT *v12; 
  __int64 v13; 
  __int64 v14; 
  HRESULT v15; 
  D3D12_ROOT_SIGNATURE_DESC v16; 

  v8 = hr;
  v16.pStaticSamplers = static_smp;
  v16.NumParameters = num_para;
  v9 = *hr < 0;
  v16.pParameters = para;
  v16.NumStaticSamplers = num_static_smp;
  v16.Flags = flags;
  if ( v9 )
    return 0i64;
  v11 = serialize_root(&v16, D3D_ROOT_SIGNATURE_VERSION_1, (ID3D10Blob **)&static_smp, NULL);
  v12 = NULL;
  *v8 = v11;
  hr = NULL;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (**)(void))(*(_QWORD *)&static_smp->Filter + 32i64))();
    v14 = (*(__int64 (__fastcall **)(const D3D12_STATIC_SAMPLER_DESC *))(*(_QWORD *)&static_smp->Filter + 24i64))(static_smp);
    v15 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, __int64, __int64, GUID *, HRESULT **, unsigned int, const D3D12_ROOT_PARAMETER *, unsigned int, const D3D12_STATIC_SAMPLER_DESC *, D3D12_ROOT_SIGNATURE_FLAGS))dev->m_pFunction[5].AddRef)(dev, 0i64, v14, v13, &GUID_c54a6b66_72df_4ee8_8be5_a946a1429214, &hr, v16.NumParameters, v16.pParameters, v16.NumStaticSamplers, v16.pStaticSamplers, v16.Flags);
    v12 = hr;
    *v8 = v15;
  }
  if ( static_smp )
  {
    (*(void (__fastcall **)(const D3D12_STATIC_SAMPLER_DESC *))(*(_QWORD *)&static_smp->Filter + 16i64))(static_smp);
    v12 = hr;
    static_smp = NULL;
  }
  if ( *v8 < 0 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(HRESULT *))(*(_QWORD *)v12 + 16i64))(v12);
      return 0i64;
    }
  }
  return (ID3D12RootSignature *)v12;
}

/*
==============
dct_pass
==============
*/
void dct_pass(BINKTEXTURESD3D12GPU *ctx, ID3D12PipelineState *state, unsigned int plane_grp)
{
  ID3D12GraphicsCommandList *decode_cl; 
  __int64 v5; 
  unsigned int *m_pCurrent; 
  unsigned int *v7; 
  unsigned __int64 ptr; 
  unsigned int *v9; 
  unsigned __int64 v10; 
  unsigned int *v11; 
  unsigned __int64 v12; 
  unsigned int *v13; 
  __int64 h_blocks; 
  __int64 w_blocks; 

  decode_cl = ctx->decode_cl;
  v5 = plane_grp;
  m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, state);
    v7 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *(_OWORD *)m_pCurrent = *(_OWORD *)state->m_Packet.Descriptor.Data;
    *((_QWORD *)m_pCurrent + 2) = state->m_Packet.Oword[1].m128i_i64[0];
    v7 = m_pCurrent + 6;
    decode_cl->m_Putter.m_pCurrent = v7;
  }
  ptr = ctx->desc_ppgc[v5].ptr;
  if ( v7 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v9 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v7 = decode_cl->m_ComputeRootPacketHeader[0];
    v7[1] = ptr;
    v9 = v7 + 2;
    decode_cl->m_Putter.m_pCurrent = v9;
  }
  v10 = ctx->desc_ppaus[ctx->cur_decode_buf][v5].ptr;
  if ( v9 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v10);
    v11 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v9 = decode_cl->m_ComputeRootPacketHeader[1];
    v9[1] = v10;
    v11 = v9 + 2;
    decode_cl->m_Putter.m_pCurrent = v11;
  }
  v12 = ctx->desc_ppaps[ctx->cur_frame][v5].ptr;
  if ( v11 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v12);
    v13 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v11 = decode_cl->m_ComputeRootPacketHeader[2];
    v13 = v11 + 2;
    v11[1] = v12;
    decode_cl->m_Putter.m_pCurrent = v11 + 2;
  }
  h_blocks = ctx->h_blocks;
  w_blocks = ctx->w_blocks;
  if ( v13 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, w_blocks, h_blocks, 1i64);
  }
  else
  {
    *v13 = 1073923072;
    v13[1] = w_blocks;
    v13[2] = h_blocks;
    v13[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v13 + 4;
  }
}

/*
==============
deblock_inplace_pass
==============
*/
void deblock_inplace_pass(BINKTEXTURESD3D12GPU *ctx, ID3D12PipelineState *state_deblock, ID3D12Resource *res, unsigned int plane_grp, DEBLOCK_DIR dir)
{
  ID3D12GraphicsCommandList *decode_cl; 
  __int64 v8; 
  unsigned int *m_pCurrent; 
  unsigned int *v10; 
  unsigned __int64 ptr; 
  unsigned int *v12; 
  unsigned __int64 v13; 
  unsigned int *v14; 
  unsigned __int64 v15; 
  unsigned int *v16; 
  int v17; 
  DEBLOCK_CONSTS_BUF *v18; 
  unsigned int *v19; 
  signed __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23[5]; 

  decode_cl = ctx->decode_cl;
  v23[1] = (__int64)res;
  v23[0] = 2i64;
  v8 = plane_grp;
  ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64 *))decode_cl->m_pFunction[8].Release)(decode_cl, 1i64, v23);
  ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12RootSignature *))decode_cl->m_pFunction[11].QueryInterface)(decode_cl, ctx->shaders->root_sig[3]);
  m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, state_deblock);
    v10 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *(_OWORD *)m_pCurrent = *(_OWORD *)state_deblock->m_Packet.Descriptor.Data;
    *((_QWORD *)m_pCurrent + 2) = state_deblock->m_Packet.Oword[1].m128i_i64[0];
    v10 = m_pCurrent + 6;
    decode_cl->m_Putter.m_pCurrent = v10;
  }
  ptr = ctx->desc_ppgc[v8].ptr;
  if ( v10 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v12 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v10 = decode_cl->m_ComputeRootPacketHeader[0];
    v10[1] = ptr;
    v12 = v10 + 2;
    decode_cl->m_Putter.m_pCurrent = v12;
  }
  v13 = ctx->desc_ppaus[ctx->cur_decode_buf][v8].ptr;
  if ( v12 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v13);
    v14 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v12 = decode_cl->m_ComputeRootPacketHeader[1];
    v12[1] = v13;
    v14 = v12 + 2;
    decode_cl->m_Putter.m_pCurrent = v14;
  }
  v15 = ctx->desc_ppaps[ctx->cur_frame][v8].ptr;
  if ( v14 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v15);
    v16 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v14 = decode_cl->m_ComputeRootPacketHeader[2];
    v14[1] = v15;
    v16 = v14 + 2;
    decode_cl->m_Putter.m_pCurrent = v16;
  }
  v17 = 4;
  v18 = &ctx->deblock_consts[dir];
  if ( v16 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, DEBLOCK_CONSTS_BUF *, _DWORD))decode_cl->m_pFunction[13].QueryInterface)(decode_cl, 3i64, 4i64, v18, 0);
    v19 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v16 = decode_cl->m_ComputeRootPacketHeader[3] + 196608;
    v19 = v16 + 1;
    v20 = (char *)v18 - (char *)v19;
    do
    {
      *v19 = *(unsigned int *)((char *)v19 + v20);
      ++v19;
      --v17;
    }
    while ( v17 );
    decode_cl->m_Putter.m_pCurrent = v19;
  }
  v21 = (ctx->h_blocks + 1) >> 1;
  v22 = (ctx->w_blocks + 1) >> 1;
  if ( v19 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, v22, v21, 1i64);
  }
  else
  {
    *v19 = 1073923072;
    v19[1] = v22;
    v19[2] = v21;
    v19[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v19 + 4;
  }
}

/*
==============
init_ppaps_desc_table
==============
*/
D3D12_GPU_DESCRIPTOR_HANDLE init_ppaps_desc_table(BINKTEXTURESD3D12GPU *ctx, int *desc_index, ID3D12Resource *plane_tex, DXGI_FORMAT uint_fmt, DXGI_FORMAT unorm_fmt, DXGI_FORMAT mdct_fmt)
{
  __m256i v7; 
  unsigned int desc_increment; 
  int v10; 
  __int64 v15; 
  BINKSHADERSD3D12GPU *shaders; 
  __int64 v17; 
  __int64 v19; 
  BINKSHADERSD3D12GPU *v20; 
  __int64 v21; 
  BINKSHADERSD3D12GPU *v23; 
  __int64 v24; 
  __int64 v25; 
  DXGI_FORMAT v28; 
  int v29; 
  __m256i v30; 

  desc_increment = ctx->desc_increment;
  v10 = *desc_index;
  v28 = uint_fmt;
  v29 = 4;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v30 = v7;
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, DXGI_FORMAT *, unsigned __int64))ctx->shaders->device->m_pFunction[6].AddRef)(ctx->shaders->device, plane_tex, 0i64, &v28, ctx->srv_cpu_base.ptr + v10 * desc_increment);
  v15 = ctx->desc_increment * (v10 + 1);
  v28 = mdct_fmt;
  shaders = ctx->shaders;
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v17 = ctx->srv_cpu_base.ptr + v15;
  v29 = 4;
  v30.m256i_i32[3] = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v30.m256i_u64[2] = _XMM0;
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, __int64))shaders->device->m_pFunction[6].QueryInterface)(shaders->device, plane_tex, &v28, v17);
  v19 = ctx->desc_increment * (v10 + 2);
  v28 = unorm_fmt;
  v20 = ctx->shaders;
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v21 = ctx->srv_cpu_base.ptr + v19;
  v29 = 4;
  v30.m256i_i32[3] = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v30.m256i_u64[2] = _XMM0;
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, __int64))v20->device->m_pFunction[6].QueryInterface)(v20->device, plane_tex, &v28, v21);
  v23 = ctx->shaders;
  v24 = ctx->desc_increment * (v10 + 3);
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v28 = uint_fmt;
  v29 = 4;
  v25 = ctx->srv_cpu_base.ptr + v24;
  v30.m256i_i32[3] = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v30.m256i_u64[2] = _XMM0;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, __int64))v23->device->m_pFunction[6].QueryInterface)(v23->device, plane_tex, &v28, v25);
  *desc_index += 4;
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ctx->srv_gpu_base.ptr + v10 * ctx->desc_increment);
}

/*
==============
init_ppaus_desc_table
==============
*/
D3D12_GPU_DESCRIPTOR_HANDLE init_ppaus_desc_table(BINKTEXTURESD3D12GPU *ctx, int *desc_index, unsigned int frame_base_offs, unsigned int ac_offs, unsigned int ac_size, unsigned int dc_offs, unsigned int dc_size)
{
  unsigned int upload_frame_const_offs; 
  unsigned int v9; 
  unsigned int upload_dc_offs; 
  unsigned int upload_ac_offs; 
  ID3D12Resource *upload_buf; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  BINKSHADERSD3D12GPU *shaders; 
  __int64 v23; 
  ID3D12Device *device; 
  __int64 v25; 
  ID3D12Resource *v26; 
  BINKSHADERSD3D12GPU *v27; 
  __int64 v28; 
  __int64 v29; 
  ID3D12Resource *v30; 
  __int64 v31; 
  BINKSHADERSD3D12GPU *v32; 
  __int64 v33; 
  ID3D12Resource *v34; 
  __int64 v35; 
  BINKSHADERSD3D12GPU *v36; 
  int v38; 
  int v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  int v44; 
  unsigned int v45; 
  __int64 v46; 
  unsigned int v47; 
  int v48; 

  upload_frame_const_offs = ctx->upload_frame_const_offs;
  v9 = frame_base_offs + ctx->upload_motion_offs;
  upload_dc_offs = ctx->upload_dc_offs;
  upload_ac_offs = ctx->upload_ac_offs;
  upload_buf = ctx->upload_buf;
  v15 = frame_base_offs + upload_frame_const_offs;
  v16 = *desc_index;
  v17 = frame_base_offs + upload_dc_offs;
  v45 = v9;
  v18 = frame_base_offs + upload_ac_offs;
  v48 = 0;
  v19 = ((__int64 (__fastcall *)(ID3D12Resource *))upload_buf->m_pFunction[3].Release)(upload_buf);
  v20 = v16 * ctx->desc_increment;
  v47 = 1280;
  v21 = v19 + v15;
  shaders = ctx->shaders;
  v46 = v21;
  v23 = ctx->srv_cpu_base.ptr + v20;
  device = shaders->device;
  if ( device->m_OutOfLineFlags )
  {
    ((void (__fastcall *)(ID3D12Device *, __int64 *, __int64))device->m_pFunction[5].Release)(device, &v46, v23);
  }
  else
  {
    *(_QWORD *)(unsigned int)v23 = v21 + 0x10000000000000i64;
    *(_QWORD *)((unsigned int)v23 + 8i64) = ((unsigned __int64)v47 >> 4) + 0x2403C00000000i64;
  }
  v25 = ctx->desc_increment * (v16 + 1);
  v26 = ctx->upload_buf;
  v42 = ac_size >> 2;
  v27 = ctx->shaders;
  v28 = ctx->srv_cpu_base.ptr + v25;
  v40 = 5768i64;
  v43 = 0i64;
  v44 = 0;
  v38 = 43;
  v39 = 1;
  v41 = (unsigned __int64)(ac_offs + v18) >> 2;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, __int64))v27->device->m_pFunction[6].QueryInterface)(v27->device, v26, &v38, v28);
  v29 = ctx->desc_increment * (v16 + 2);
  v30 = ctx->upload_buf;
  v41 = (unsigned __int64)(v17 + dc_offs) >> 1;
  v31 = ctx->srv_cpu_base.ptr + v29;
  v42 = dc_size >> 1;
  v32 = ctx->shaders;
  v40 = 5768i64;
  v43 = 0i64;
  v44 = 0;
  v38 = 59;
  v39 = 1;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, __int64))v32->device->m_pFunction[6].QueryInterface)(v32->device, v30, &v38, v31);
  v33 = ctx->desc_increment * (v16 + 3);
  v34 = ctx->upload_buf;
  v41 = (unsigned __int64)v45 >> 2;
  v35 = ctx->srv_cpu_base.ptr + v33;
  v42 = ctx->motion_size >> 2;
  v36 = ctx->shaders;
  v40 = 5768i64;
  v43 = 0i64;
  v44 = 0;
  v38 = 38;
  v39 = 1;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, __int64))v36->device->m_pFunction[6].QueryInterface)(v36->device, v34, &v38, v35);
  *desc_index += 4;
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ctx->srv_gpu_base.ptr + v16 * ctx->desc_increment);
}

/*
==============
init_ppgc_desc_table
==============
*/
D3D12_GPU_DESCRIPTOR_HANDLE init_ppgc_desc_table(BINKTEXTURESD3D12GPU *ctx, int *desc_index, unsigned int dc_offs, unsigned int dc_size)
{
  int v4; 
  unsigned int desc_increment; 
  BINKSHADERSD3D12GPU *shaders; 
  ID3D12Resource *scan_order_buf; 
  BINKSHADERSD3D12GPU *v12; 
  ID3D12Resource *dc_work_buf; 
  __int64 v14; 
  __int64 v15; 
  BINKSHADERSD3D12GPU *v16; 
  ID3D12Resource *v17; 
  __int64 v18; 
  __int64 v19; 
  ID3D12Resource *v20; 
  __int64 v21; 
  BINKSHADERSD3D12GPU *v22; 
  __int64 v23; 
  int v25; 
  int v26; 
  __int64 v27; 
  _QWORD v28[4]; 

  v4 = *desc_index;
  desc_increment = ctx->desc_increment;
  shaders = ctx->shaders;
  v27 = 5768i64;
  *(_QWORD *)((char *)&v28[1] + 4) = 0i64;
  HIDWORD(v28[2]) = 0;
  scan_order_buf = ctx->scan_order_buf;
  v25 = 59;
  v26 = 1;
  v28[0] = 0i64;
  LODWORD(v28[1]) = 64;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, unsigned __int64))shaders->device->m_pFunction[6].QueryInterface)(shaders->device, scan_order_buf, &v25, ctx->srv_cpu_base.ptr + v4 * desc_increment);
  v12 = ctx->shaders;
  dc_work_buf = ctx->dc_work_buf;
  LODWORD(v28[0]) = ctx->dc_offs[5] >> 1;
  v14 = ctx->desc_increment * (v4 + 1);
  memset((char *)v28 + 4, 0, 20);
  v25 = 59;
  v15 = ctx->srv_cpu_base.ptr + v14;
  v26 = 1;
  v27 = 0i64;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, __int64))v12->device->m_pFunction[6].AddRef)(v12->device, dc_work_buf, 0i64, &v25, v15);
  v16 = ctx->shaders;
  v17 = ctx->dc_work_buf;
  LODWORD(v28[0]) = ctx->dc_offs[5] >> 2;
  v18 = ctx->desc_increment * (v4 + 2);
  *(_QWORD *)((char *)v28 + 4) = 0i64;
  HIDWORD(v28[1]) = 0;
  v28[2] = 1i64;
  v25 = 39;
  v19 = ctx->srv_cpu_base.ptr + v18;
  v26 = 1;
  v27 = 0i64;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, __int64))v16->device->m_pFunction[6].AddRef)(v16->device, v17, 0i64, &v25, v19);
  v20 = ctx->dc_work_buf;
  v21 = ctx->desc_increment * (v4 + 3);
  v27 = 5768i64;
  v28[0] = (unsigned __int64)dc_offs >> 1;
  v22 = ctx->shaders;
  v23 = ctx->srv_cpu_base.ptr + v21;
  v28[2] = 0i64;
  v25 = 59;
  v26 = 1;
  v28[1] = dc_size >> 1;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, __int64))v22->device->m_pFunction[6].QueryInterface)(v22->device, v20, &v25, v23);
  *desc_index += 4;
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ctx->srv_gpu_base.ptr + v4 * ctx->desc_increment);
}

/*
==============
mdct_pass
==============
*/
void mdct_pass(BINKTEXTURESD3D12GPU *ctx, ID3D12PipelineState *state, unsigned int plane_grp, unsigned int prev_frame, unsigned int plane_offs)
{
  ID3D12GraphicsCommandList *decode_cl; 
  __int64 v7; 
  __int64 v8; 
  unsigned int *m_pCurrent; 
  unsigned int *v10; 
  unsigned __int64 ptr; 
  unsigned int *v12; 
  unsigned __int64 v13; 
  unsigned int *v14; 
  unsigned __int64 v15; 
  unsigned int *v16; 
  unsigned __int64 v17; 
  unsigned int *v18; 
  __int64 v19; 
  unsigned int *v20; 
  __int64 h_blocks; 
  __int64 w_blocks; 

  decode_cl = ctx->decode_cl;
  v7 = prev_frame;
  v8 = plane_grp;
  m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, state);
    v10 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *(_OWORD *)m_pCurrent = *(_OWORD *)state->m_Packet.Descriptor.Data;
    *((_QWORD *)m_pCurrent + 2) = state->m_Packet.Oword[1].m128i_i64[0];
    v10 = m_pCurrent + 6;
    decode_cl->m_Putter.m_pCurrent = v10;
  }
  ptr = ctx->desc_ppgc[v8].ptr;
  if ( v10 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v12 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v10 = decode_cl->m_ComputeRootPacketHeader[0];
    v10[1] = ptr;
    v12 = v10 + 2;
    decode_cl->m_Putter.m_pCurrent = v12;
  }
  v13 = ctx->desc_ppaus[ctx->cur_decode_buf][v8].ptr;
  if ( v12 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v13);
    v14 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v12 = decode_cl->m_ComputeRootPacketHeader[1];
    v12[1] = v13;
    v14 = v12 + 2;
    decode_cl->m_Putter.m_pCurrent = v14;
  }
  v15 = ctx->desc_ppaps[ctx->cur_frame][v8].ptr;
  if ( v14 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v15);
    v16 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v14 = decode_cl->m_ComputeRootPacketHeader[2];
    v14[1] = v15;
    v16 = v14 + 2;
    decode_cl->m_Putter.m_pCurrent = v16;
  }
  v17 = ctx->desc_ppaps[v7][v8].ptr;
  if ( v16 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 3i64, v17);
    v18 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v16 = decode_cl->m_ComputeRootPacketHeader[3];
    v16[1] = v17;
    v18 = v16 + 2;
    decode_cl->m_Putter.m_pCurrent = v18;
  }
  v19 = plane_offs >> 1;
  if ( v18 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64))decode_cl->m_pFunction[12].AddRef)(decode_cl, 4i64, v19);
    v20 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v18 = decode_cl->m_ComputeRootPacketHeader[4];
    v20 = v18 + 2;
    v18[1] = v19;
    decode_cl->m_Putter.m_pCurrent = v18 + 2;
  }
  h_blocks = ctx->h_blocks;
  w_blocks = ctx->w_blocks;
  if ( v20 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, w_blocks, h_blocks, 1i64);
  }
  else
  {
    *v20 = 1073923072;
    v20[1] = w_blocks;
    v20[2] = h_blocks;
    v20[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v20 + 4;
  }
}

/*
==============
plane_set_transition
==============
*/
void plane_set_transition(BINKTEXTURESD3D12GPU *ctx, BINKGPU_D3D12_PLANESET *set, D3D12_RESOURCE_STATES state_before, D3D12_RESOURCE_STATES state_after)
{
  bool v4; 
  __int64 v9; 
  __int64 v10; 
  __int64 *v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15[4]; 
  char v16[4]; 
  char v17; 

  v4 = ctx->has_alpha == 0;
  v9 = 2i64;
  v15[0] = (__int64)set->Y;
  v15[1] = (__int64)set->CrCb;
  if ( !v4 )
  {
    v9 = 3i64;
    v15[2] = (__int64)set->A;
  }
  if ( ctx->has_hdr )
  {
    v10 = (unsigned int)v9;
    v9 = (unsigned int)(v9 + 1);
    v15[v10] = (__int64)set->H;
  }
  if ( (_DWORD)v9 )
  {
    v11 = v15;
    v12 = (unsigned int)v9;
    v13 = &v17;
    do
    {
      v14 = *v11++;
      *(_QWORD *)(v13 + 4) = v14;
      *(_QWORD *)(v13 - 4) = 0i64;
      *((_DWORD *)v13 + 3) = -1;
      *((_DWORD *)v13 + 4) = state_before;
      *((_DWORD *)v13 + 5) = state_after;
      v13 += 32;
      --v12;
    }
    while ( v12 );
  }
  ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, char *))ctx->decode_cl->m_pFunction[8].Release)(ctx->decode_cl, v9, v16);
}

/*
==============
submit_command_list
==============
*/
__int64 submit_command_list(BINKTEXTURESD3D12GPU *ctx)
{
  __int64 result; 
  BINKSHADERSD3D12GPU *shaders; 
  unsigned __int64 v4; 
  __int64 cur_decode_buf; 
  ID3D12GraphicsCommandList *decode_cl; 

  result = ((__int64 (__fastcall *)(ID3D12GraphicsCommandList *))ctx->decode_cl->m_pFunction[3].QueryInterface)(ctx->decode_cl);
  if ( (int)result >= 0 )
  {
    decode_cl = ctx->decode_cl;
    shaders = ctx->shaders;
    ((void (__fastcall *)(ID3D12CommandQueue *, __int64, ID3D12GraphicsCommandList **))shaders->command_queue->m_pFunction[3].AddRef)(shaders->command_queue, 1i64, &decode_cl);
    v4 = ++shaders->largest_decode_fence_val;
    LODWORD(result) = ((__int64 (__fastcall *)(ID3D12CommandQueue *, ID3D12Fence *, unsigned __int64))shaders->command_queue->m_pFunction[4].Release)(shaders->command_queue, shaders->decode_fence, v4);
    cur_decode_buf = ctx->cur_decode_buf;
    if ( (int)result < 0 )
      v4 = 0i64;
    ctx->last_decode_fence = v4;
    ctx->decode_cmd_submit_fence[cur_decode_buf] = v4;
    result = (unsigned int)result;
    ctx->cur_decode_buf = (ctx->cur_decode_buf + 1) % ctx->num_decode_bufs;
  }
  return result;
}

/*
==============
wait_for_fence
==============
*/
void wait_for_fence(BINKSHADERSD3D12GPU *shaders, ID3D12Fence *fence, unsigned __int64 target_val)
{
  if ( ((__int64 (__fastcall *)(ID3D12Fence *))fence->m_pFunction[2].Release)(fence) < target_val && fence->m_pFunction[3].QueryInterface(fence, (const _GUID *)target_val, (void **)shaders->fence_event) >= 0 )
    WaitForSingleObject(shaders->fence_event, 0x2710u);
}

/*
==============
After_Draw_Bink_textures
==============
*/
void After_Draw_Bink_textures(BINKTEXTURES *ptextures, BINKSHADERS *pshaders, void *graphics_context)
{
  ;
}

/*
==============
Before_Draw_Bink_textures
==============
*/
void Before_Draw_Bink_textures(BINKTEXTURES *ptextures, BINKSHADERS *pshaders, void *graphics_context, unsigned int *output_planeindex)
{
  __int64 Start_texture_update_high; 
  bool v5; 

  Start_texture_update_high = HIDWORD(ptextures[4].Start_texture_update);
  v5 = HIDWORD(ptextures[2].cRtexture) == 0;
  ptextures->Ytexture = (void *)*((_QWORD *)&ptextures[5].Htexture + 4 * Start_texture_update_high);
  ptextures->cRtexture = (void *)ptextures[5].user_data[4 * Start_texture_update_high];
  if ( !v5 )
    ptextures->Htexture = (void *)ptextures[5].user_data[4 * Start_texture_update_high + 2];
  if ( LODWORD(ptextures[2].cRtexture) )
    ptextures->Atexture = (void *)ptextures[5].user_data[4 * Start_texture_update_high + 1];
  *((_QWORD *)graphics_context + 2) = pshaders[47].user_data[0];
  *((_QWORD *)graphics_context + 3) = ptextures[3].user_data[2];
  *((_QWORD *)&ptextures[4].Finish_texture_update + HIDWORD(ptextures[4].Start_texture_update)) = *((_QWORD *)graphics_context + 1);
  *output_planeindex = HIDWORD(ptextures[4].Start_texture_update);
}

/*
==============
Create_Bink_shaders
==============
*/
BINKSHADERS *Create_Bink_shaders(void *pcreate)
{
  HMODULE ModuleHandleA; 
  ID3D12Device *v3; 
  BINKSHADERS *v4; 
  BINKSHADERS *v5; 
  void (__fastcall *v6)(BINKSHADERS *); 
  void (__fastcall *Event)(BINKSHADERS *); 
  HRESULT v8; 
  __m256i v9; 
  __m256i v10; 
  ID3D12RootSignature *v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  ID3D12RootSignature *v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  ID3D12RootSignature *v21; 
  HRESULT v22; 
  const Create_Bink_shaders::__l28::CreateInfo *v23; 
  unsigned int i; 
  const CompiledShader *shader; 
  HRESULT hr; 
  __m256i v28; 
  _BYTE para[64]; 
  __m256i v30; 
  __m256i v31; 
  __m256i v32; 

  if ( !pcreate || !*(_QWORD *)pcreate || !*((_QWORD *)pcreate + 1) )
    return 0i64;
  if ( !serialize_root )
  {
    ModuleHandleA = d3d12lib;
    if ( !d3d12lib )
    {
      ModuleHandleA = GetModuleHandleA("D3D12_x.dll");
      d3d12lib = ModuleHandleA;
      if ( !ModuleHandleA )
        return 0i64;
    }
    serialize_root = (HRESULT (__fastcall *)(const D3D12_ROOT_SIGNATURE_DESC *, D3D_ROOT_SIGNATURE_VERSION, ID3D10Blob **, ID3D10Blob **))GetProcAddress(ModuleHandleA, "D3D12SerializeRootSignature");
    if ( !serialize_root )
      return 0i64;
  }
  v3 = *(ID3D12Device **)pcreate;
  v4 = (BINKSHADERS *)j_BinkUtilMalloc(0x8F0ui64);
  v5 = v4;
  if ( !v4 )
    return 0i64;
  memset_0(v4, 0, 0x8F0ui64);
  v5[1].Create_textures = (BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *))v3;
  v3->m_pFunction->AddRef(v3);
  v6 = (void (__fastcall *)(BINKSHADERS *))*((_QWORD *)pcreate + 1);
  v5[1].Free_shaders = v6;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8i64))(v6);
  v5[3].user_data[2] = *((_QWORD *)pcreate + 85);
  v5[3].user_data[3] = *((_QWORD *)pcreate + 86);
  Event = (void (__fastcall *)(BINKSHADERS *))CreateEventExW(NULL, NULL, 0, 0x1F0003u);
  v5[47].Free_shaders = Event;
  if ( Event )
    v8 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, _QWORD, GUID *, unsigned __int64 *))v3->m_pFunction[12].QueryInterface)(v3, 0i64, 0i64, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, v5[47].user_data);
  else
    v8 = -2147467259;
  hr = v8;
  v28.m256i_i32[0] = 0;
  v28.m256i_i64[2] = (__int64)range_dct_tab_ppgc;
  v28.m256i_i32[2] = 2;
  v28.m256i_i32[6] = 0;
  v9 = v28;
  v28.m256i_i64[2] = (__int64)range_dct_tab_ppaus;
  *(__m256i *)para = v9;
  v28.m256i_i32[2] = 2;
  v28.m256i_i32[6] = 0;
  v10 = v28;
  v28.m256i_i64[2] = (__int64)range_dct_tab_ppaps_out;
  v28.m256i_i32[0] = 0;
  *(__m256i *)&para[32] = v10;
  v28.m256i_i32[2] = 1;
  v30 = v28;
  v11 = create_root_sig(v3, 3u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v28.m256i_i32[2] = 2;
  v5[1].user_data[0] = (unsigned __int64)v11;
  v28.m256i_i32[0] = 0;
  v28.m256i_i64[2] = (__int64)range_mdct_tab_ppgc;
  v28.m256i_i32[6] = 0;
  v12 = v28;
  v28.m256i_i64[2] = (__int64)range_mdct_tab_ppaus;
  v28.m256i_i32[2] = 4;
  *(__m256i *)para = v12;
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[6] = 0;
  v13 = v28;
  v28.m256i_i64[2] = (__int64)range_mdct_tab_ppaps_out;
  v28.m256i_i32[2] = 1;
  *(__m256i *)&para[32] = v13;
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[6] = 0;
  v14 = v28;
  v28.m256i_i64[2] = (__int64)range_mdct_tab_ppaps_in;
  v30 = v14;
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  v31 = v28;
  v28.m256i_i32[0] = 1;
  v28.m256i_i64[1] = 1i64;
  v28.m256i_i32[4] = 1;
  v28.m256i_i32[6] = 0;
  v32 = v28;
  v5[1].user_data[1] = (unsigned __int64)create_root_sig(v3, 5u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  v28.m256i_i64[2] = (__int64)range_dc_predict_tab_ppgc;
  v15 = v28;
  v28.m256i_i32[0] = 0;
  v28.m256i_i64[2] = (__int64)range_dc_predict_tab_ppaus;
  v28.m256i_i32[2] = 1;
  *(__m256i *)para = v15;
  v28.m256i_i32[6] = 0;
  *(__m256i *)&para[32] = v28;
  v16 = create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v28.m256i_i32[2] = 1;
  v5[1].user_data[2] = (unsigned __int64)v16;
  v28.m256i_i32[0] = 0;
  v28.m256i_i64[2] = (__int64)range_deblock_tab_ppgc;
  v28.m256i_i32[6] = 0;
  v17 = v28;
  v28.m256i_i64[2] = (__int64)range_deblock_tab_ppaus;
  v28.m256i_i32[2] = 2;
  *(__m256i *)para = v17;
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[6] = 0;
  v18 = v28;
  v28.m256i_i64[2] = (__int64)range_deblock_tab_ppaps_out;
  *(__m256i *)&para[32] = v18;
  v28.m256i_i32[0] = 0;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  v30 = v28;
  v28.m256i_i32[0] = 1;
  v28.m256i_i64[1] = 1i64;
  v28.m256i_i32[4] = 4;
  v28.m256i_i32[6] = 0;
  v31 = v28;
  v5[1].user_data[3] = (unsigned __int64)create_root_sig(v3, 4u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v28.m256i_i32[0] = 0;
  v28.m256i_i64[2] = (__int64)range_fill_alpha_tab_ppaus;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  v19 = v28;
  v28.m256i_i64[2] = (__int64)range_fill_alpha_tab_ppaps_out;
  v28.m256i_i32[0] = 0;
  *(__m256i *)para = v19;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  *(__m256i *)&para[32] = v28;
  v5[2].Create_textures = (BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *))create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v28.m256i_i32[0] = 2;
  v28.m256i_i64[1] = 0i64;
  v28.m256i_i32[6] = 0;
  v20 = v28;
  v28.m256i_i64[2] = (__int64)range_draw_pps;
  v28.m256i_i32[0] = 0;
  *(__m256i *)para = v20;
  v28.m256i_i32[2] = 1;
  v28.m256i_i32[6] = 0;
  *(__m256i *)&para[32] = v28;
  v21 = create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v22 = hr;
  v23 = prog_info;
  v5[2].Free_shaders = (void (__fastcall *)(BINKSHADERS *))v21;
  for ( i = 0; i < 8; ++i )
  {
    memset(para, 0, 56);
    *(_QWORD *)para = v5[1].user_data[v23->root_sig_id];
    shader = v23->shader;
    *(_OWORD *)v28.m256i_i8 = 0ui64;
    if ( shader )
    {
      v28.m256i_i64[0] = (__int64)shader->bytecode;
      v28.m256i_i64[1] = shader->size;
    }
    *(_OWORD *)&para[8] = *(_OWORD *)v28.m256i_i8;
    if ( v22 >= 0 )
      v22 = ((__int64 (__fastcall *)(ID3D12Device *, _BYTE *, _QWORD, _QWORD, GUID *, unsigned __int64 *))v3->m_pFunction[20].Release)(v3, para, 0i64, 0i64, &GUID_765a30f3_f624_4c6f_a828_ace948622445, &v5[2].user_data[i]);
    ++v23;
  }
  *(_DWORD *)para = 1;
  *(_DWORD *)&para[24] = 1;
  *(_QWORD *)&para[36] = 1i64;
  *(_QWORD *)&para[44] = 1i64;
  v28.m256i_i32[0] = 2;
  *(__int64 *)((char *)v28.m256i_i64 + 4) = 0i64;
  *(__int64 *)((char *)&v28.m256i_i64[1] + 4) = 0i64;
  *(_QWORD *)&para[8] = 0i64;
  *(_QWORD *)&para[16] = 0x10000i64;
  *(_QWORD *)&para[28] = 65537i64;
  if ( v22 < 0 || ((int (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, _BYTE *, int, _QWORD, GUID *, BINKSHADERS *))v3->m_pFunction[9].QueryInterface)(v3, &v28, 0i64, para, 2243, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v5[4]) < 0 || (*(int (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)v5[4].Create_textures + 64i64))(v5[4].Create_textures, 0i64, 0i64, &v5[46].user_data[3]) < 0 )
  {
    Free_shaders(v5);
    return 0i64;
  }
  else
  {
    v5->Free_shaders = Free_shaders;
    v5->Create_textures = Create_textures;
    return v5;
  }
}

