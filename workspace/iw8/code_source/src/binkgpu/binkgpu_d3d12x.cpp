/*
==============
Create_textures
==============
*/
BINKTEXTURES *Create_textures(BINKSHADERS *pshaders, BINK *bink, void *user_ptr)
{
  char *v9; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int slice_count; 
  int v16; 
  unsigned int OpenFlags; 
  BINKTEXTURES *(__fastcall *v18)(BINKSHADERS *, BINK *, void *); 
  unsigned int v19; 
  bool v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  int v30; 
  int v31; 
  int v33; 
  __int64 v34; 
  __m256i *v35; 
  __int64 v36; 
  __int16 v37; 
  __int64 v39; 
  unsigned int frameSet; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  unsigned int v64; 
  unsigned int v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  int v69; 
  __int64 v70; 
  unsigned int v71; 
  int v72; 
  __int64 v73; 
  int v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  D3D12_GPU_DESCRIPTOR_HANDLE v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  __int64 v83; 
  unsigned int i; 
  __int64 v85; 
  unsigned __int64 v91; 
  __int64 v92; 
  int v93; 
  int v94; 
  int v95; 
  unsigned __int8 v96; 
  int v97; 
  BINK *v98; 
  int desc_index; 
  int v121; 
  unsigned int v122; 
  unsigned int dc_size; 
  BINK *binka; 
  D3D12_RESOURCE_DESC desc; 
  __m256i v126; 
  _BYTE v127[64]; 
  __m256i v128; 

  binka = bink;
  v121 = 0;
  if ( !pshaders )
    return 0i64;
  v9 = (char *)j_BinkUtilMalloc(0x8E8ui64);
  _RSI = v9;
  if ( !v9 )
    return 0i64;
  memset_0(v9, 0, 0x2C8ui64);
  memset_0(_RSI + 716, 0, 0x61Cui64);
  *((_DWORD *)_RSI + 178) = -1;
  if ( !j_BinkGetGPUDataBuffersInfo(bink, (BINKGPUDATABUFFERS *)(_RSI + 168)) )
    return 0i64;
  v11 = *((_DWORD *)_RSI + 138);
  *((_QWORD *)_RSI + 11) = user_ptr;
  *((_QWORD *)_RSI + 51) = pshaders;
  *((_QWORD *)_RSI + 52) = bink;
  v12 = (bink->Width + 31) >> 5;
  *((_DWORD *)_RSI + 106) = v12;
  v13 = (bink->Height + 31) >> 5;
  *((_DWORD *)_RSI + 107) = v13;
  v14 = v12 * v13;
  *((_DWORD *)_RSI + 108) = v14;
  slice_count = bink->slices.slice_count;
  if ( !slice_count )
    slice_count = 1;
  v16 = 8 * v14;
  *((_DWORD *)_RSI + 109) = slice_count;
  *((_DWORD *)_RSI + 110) = (bink->OpenFlags >> 20) & 1;
  OpenFlags = bink->OpenFlags;
  *((_QWORD *)_RSI + 84) = 2i64;
  dc_size = 32 * v14;
  *((_DWORD *)_RSI + 111) = (OpenFlags >> 2) & 1;
  v18 = pshaders[1].Create_textures;
  *((_DWORD *)_RSI + 134) = v11;
  *((_DWORD *)_RSI + 138) = (v11 + 1407) & 0xFFFFFF00;
  *((_DWORD *)_RSI + 124) = 40 * v14;
  v19 = (48 * v14 + 31) & 0xFFFFFFE0;
  *((_DWORD *)_RSI + 122) = 0;
  *((_DWORD *)_RSI + 125) = v19;
  *((_DWORD *)_RSI + 123) = 32 * v14;
  v20 = *((_DWORD *)_RSI + 110) == 0;
  v122 = 8 * v14;
  if ( !v20 )
    v19 += 32 * v14;
  *((_DWORD *)_RSI + 126) = v19;
  if ( *((_DWORD *)_RSI + 111) )
    v19 += 32 * v14;
  *((_DWORD *)_RSI + 127) = v19;
  v21 = *((_DWORD *)_RSI + 138);
  *((_DWORD *)_RSI + 135) = v21;
  *((_DWORD *)_RSI + 138) = (v21 + v19 + 255) & 0xFFFFFF00;
  v22 = *((_DWORD *)_RSI + 82);
  v23 = *((_DWORD *)_RSI + 84);
  *((_DWORD *)_RSI + 129) = v22;
  v24 = *((_DWORD *)_RSI + 83) + v22;
  v25 = v24 + v23;
  *((_DWORD *)_RSI + 128) = 0;
  *((_DWORD *)_RSI + 131) = v25;
  *((_DWORD *)_RSI + 130) = v24;
  if ( *((_DWORD *)_RSI + 110) )
    v25 += *((_DWORD *)_RSI + 85);
  *((_DWORD *)_RSI + 132) = v25;
  v26 = v25;
  if ( *((_DWORD *)_RSI + 111) )
    v26 = *((_DWORD *)_RSI + 86) + v25;
  *((_DWORD *)_RSI + 133) = v26;
  v27 = v16;
  v28 = *((_DWORD *)_RSI + 138);
  _ER8 = 3;
  *((_DWORD *)_RSI + 120) = v27 >> 1;
  *((_DWORD *)_RSI + 121) = *((_DWORD *)_RSI + 83) >> 2;
  v30 = *((_DWORD *)_RSI + 133);
  *((_DWORD *)_RSI + 136) = v28;
  v31 = v28 + v30 + 255;
  _RCX = *((_QWORD *)_RSI + 21);
  v31 &= 0xFFFFFF00;
  v33 = 16 * *((_DWORD *)_RSI + 108);
  *((_DWORD *)_RSI + 139) = v33;
  *((_DWORD *)_RSI + 137) = v31;
  *((_DWORD *)_RSI + 138) = (v31 + v33 + 255) & 0xFFFFFF00;
  if ( (unsigned __int64)&v126 > _RCX + 63 || (unsigned __int64)&v128.m256i_u64[3] + 6 < _RCX )
  {
    __asm { vmovd   xmm3, r8d }
    v39 = 2i64;
    _RAX = v127;
    _RDX = 16i64;
    do
    {
      _RAX += 64;
      __asm { vmovq   xmm0, qword ptr [rdx+rcx-10h] }
      _RDX += 32i64;
      __asm
      {
        vpmovzxbw xmm1, xmm0
        vmovq   xmm0, qword ptr [rdx+rcx-28h]
        vpsllw  xmm2, xmm1, xmm3
        vmovdqu xmmword ptr [rax-60h], xmm2
        vpmovzxbw xmm1, xmm0
        vmovq   xmm0, qword ptr [rcx+rdx-20h]
        vpsllw  xmm2, xmm1, xmm3
        vmovdqu xmmword ptr [rax-50h], xmm2
        vpmovzxbw xmm1, xmm0
        vmovq   xmm0, qword ptr [rdx+rcx-18h]
        vpsllw  xmm2, xmm1, xmm3
        vmovdqu xmmword ptr [rax-40h], xmm2
        vpmovzxbw xmm1, xmm0
        vpsllw  xmm2, xmm1, xmm3
        vmovdqu xmmword ptr [rax-30h], xmm2
      }
      --v39;
    }
    while ( v39 );
  }
  else
  {
    v34 = 0i64;
    v35 = &v126;
    v36 = 64i64;
    do
    {
      v35 = (__m256i *)((char *)v35 + 2);
      v37 = 8 * *(unsigned __int8 *)(v34 + _RCX);
      ++v34;
      v35[-1].m256i_i16[15] = v37;
      --v36;
    }
    while ( v36 );
  }
  frameSet = 0;
  do
  {
    v52 = *((_DWORD *)_RSI + 88);
    v53 = *((_DWORD *)_RSI + 87);
    v54 = *((_DWORD *)_RSI + 110);
    desc_index = *((_DWORD *)_RSI + 111);
    v55 = 32i64 * frameSet;
    *(_QWORD *)&_RSI[v55 + 968] = j_BinkGPU_CreateTexture((ID3D12Device *)v18, D3D12_HEAP_TYPE_DEFAULT, v53, v52, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 0);
    *(_QWORD *)&_RSI[v55 + 976] = j_BinkGPU_CreateTexture((ID3D12Device *)v18, D3D12_HEAP_TYPE_DEFAULT, v53 >> 1, v52 >> 1, 1u, DXGI_FORMAT_R8G8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 1u);
    if ( v54 )
      *(_QWORD *)&_RSI[v55 + 984] = j_BinkGPU_CreateTexture((ID3D12Device *)v18, D3D12_HEAP_TYPE_DEFAULT, v53, v52, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 2u);
    if ( desc_index )
      *(_QWORD *)&_RSI[v55 + 992] = j_BinkGPU_CreateTexture((ID3D12Device *)v18, D3D12_HEAP_TYPE_DEFAULT, v53, v52, 1u, DXGI_FORMAT_R8_TYPELESS, D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, frameSet, 3u);
    ++frameSet;
  }
  while ( frameSet < *((_DWORD *)_RSI + 168) );
  v56 = v121;
  v57 = 0;
  v58 = dc_size;
  v59 = binka->OpenFlags & 8;
  *((_DWORD *)_RSI + 149) = 0;
  *((_DWORD *)_RSI + 148) = (v59 | 0x10) >> 3;
  do
  {
    if ( v56 >= 0 )
      v56 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD, GUID *, char *))(*(_QWORD *)v18 + 72i64))(v18, 0i64, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, &_RSI[8 * v57 + 608]);
    v60 = *((_DWORD *)_RSI + 148);
    ++v57;
  }
  while ( v57 < v60 );
  v121 = v56;
  if ( v56 >= 0 )
  {
    v61 = *(_QWORD *)v18;
    v62 = *((_QWORD *)_RSI + 76);
    *(_QWORD *)&desc.Dimension = 0i64;
    desc.Alignment = 0i64;
    v63 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), D3D12_RESOURCE_DESC *, __int64, _QWORD, GUID *, char *))(v61 + 584))(v18, &desc, v62, 0i64, &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455, _RSI + 600);
    v60 = *((_DWORD *)_RSI + 148);
    v56 = v63;
    v121 = v63;
  }
  v64 = *((_DWORD *)_RSI + 138) * v60;
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.Width = v64;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&desc.Layout = 1i64;
  *((_QWORD *)_RSI + 133) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATE_GENERIC_READ);
  desc.Width = *((unsigned int *)_RSI + 127);
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
  desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
  *((_QWORD *)_RSI + 134) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
  desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  desc.Alignment = 0i64;
  desc.Width = 128i64;
  desc.Height = 1;
  *(_QWORD *)&desc.DepthOrArraySize = 65537i64;
  desc.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&desc.Layout = 1i64;
  *((_QWORD *)_RSI + 135) = j_BinkGPU_CreateBuffer(&desc, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COPY_DEST);
  if ( v56 >= 0 )
  {
    v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)_RSI + 133) + 64i64))(*((_QWORD *)_RSI + 133), 0i64, 0i64, _RSI + 1088);
    v121 = v56;
  }
  v65 = 4 * (*((_DWORD *)_RSI + 168) + *((_DWORD *)_RSI + 148) + 1) * (*((_DWORD *)_RSI + 111) + *((_DWORD *)_RSI + 110) + 2);
  *((_DWORD *)_RSI + 179) = v65;
  if ( v56 >= 0 )
  {
    if ( v65 <= 0x60 )
    {
      *((_DWORD *)_RSI + 178) = j_BinkGPU_AllocateBinkSRVDescriptors(*((void **)_RSI + 11), v65, (ID3D12DescriptorHeap **)_RSI + 88);
    }
    else
    {
      v56 = -2147467259;
      v121 = -2147467259;
    }
  }
  if ( *((int *)_RSI + 178) < 0 )
    goto LABEL_67;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)_RSI + 88) + 8i64))(*((_QWORD *)_RSI + 88));
  v66 = (*(__int64 (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD))(*(_QWORD *)v18 + 120i64))(v18, 0i64);
  v67 = *((_QWORD *)_RSI + 88);
  v68 = v66;
  v69 = *((_DWORD *)_RSI + 178);
  *((_DWORD *)_RSI + 180) = v66;
  v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 72i64))(v67);
  v71 = v68 * v69;
  v72 = *((_DWORD *)_RSI + 180);
  v73 = v71;
  v74 = *((_DWORD *)_RSI + 178);
  v75 = v73 + v70;
  v76 = *((_QWORD *)_RSI + 88);
  *((_QWORD *)_RSI + 91) = v75;
  v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 80i64))(v76);
  desc_index = 0;
  *((_QWORD *)_RSI + 92) = (unsigned int)(v74 * v72) + v77;
  v78.ptr = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *((_DWORD *)_RSI + 122), v58).ptr;
  v79 = *((_DWORD *)_RSI + 123);
  *((D3D12_GPU_DESCRIPTOR_HANDLE *)_RSI + 93) = v78;
  v122 *= 2;
  *((D3D12_GPU_DESCRIPTOR_HANDLE *)_RSI + 94) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, v79, v122);
  if ( *((_DWORD *)_RSI + 110) )
    *((D3D12_GPU_DESCRIPTOR_HANDLE *)_RSI + 95) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *((_DWORD *)_RSI + 125), v58);
  if ( *((_DWORD *)_RSI + 111) )
    *((D3D12_GPU_DESCRIPTOR_HANDLE *)_RSI + 96) = init_ppgc_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *((_DWORD *)_RSI + 126), v58);
  v80 = 0;
  if ( *((_DWORD *)_RSI + 148) )
  {
    v81 = v122;
    do
    {
      v82 = *((_DWORD *)_RSI + 138) * v80;
      v83 = 32i64 * v80;
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v83 + 776] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, v82, *((_DWORD *)_RSI + 128), *((_DWORD *)_RSI + 82), *((_DWORD *)_RSI + 122), v58);
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v83 + 784] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, v82, *((_DWORD *)_RSI + 129), *((_DWORD *)_RSI + 83) + *((_DWORD *)_RSI + 84), *((_DWORD *)_RSI + 123), v81);
      if ( *((_DWORD *)_RSI + 110) )
        *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v83 + 792] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, v82, *((_DWORD *)_RSI + 131), *((_DWORD *)_RSI + 85), *((_DWORD *)_RSI + 125), v58);
      if ( *((_DWORD *)_RSI + 111) )
        *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[32 * v80 + 800] = init_ppaus_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, v82, *((_DWORD *)_RSI + 132), *((_DWORD *)_RSI + 86), *((_DWORD *)_RSI + 126), v58);
      ++v80;
    }
    while ( v80 < *((_DWORD *)_RSI + 148) );
    v56 = v121;
  }
  for ( i = 0; i < *((_DWORD *)_RSI + 168); ++i )
  {
    v85 = 32i64 * i;
    *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v85 + 872] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *(ID3D12Resource **)&_RSI[v85 + 968], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
    *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v85 + 880] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *(ID3D12Resource **)&_RSI[v85 + 976], DXGI_FORMAT_R8G8_UINT, DXGI_FORMAT_R8G8_UNORM, DXGI_FORMAT_R8G8_UINT);
    if ( *((_DWORD *)_RSI + 110) )
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[v85 + 888] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *(ID3D12Resource **)&_RSI[v85 + 984], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
    if ( *((_DWORD *)_RSI + 111) )
      *(D3D12_GPU_DESCRIPTOR_HANDLE *)&_RSI[32 * i + 896] = init_ppaps_desc_table((BINKTEXTURESD3D12GPU *)_RSI, &desc_index, *(ID3D12Resource **)&_RSI[32 * i + 992], DXGI_FORMAT_R8_UINT, DXGI_FORMAT_R8_UNORM, DXGI_FORMAT_R8_UINT);
  }
  if ( desc_index != *((_DWORD *)_RSI + 179) )
    DebugBreak();
  if ( v56 < 0 )
    goto LABEL_67;
  if ( *((_DWORD *)_RSI + 138) < 0x80u )
    goto LABEL_67;
  _RAX = *((_QWORD *)_RSI + 136);
  __asm
  {
    vmovups ymm0, [rsp+158h+var_B8]
    vmovups ymm1, [rsp+158h+var_98]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, [rsp+158h+var_78]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups ymm1, ymmword ptr [rsp+100h]
    vmovups ymmword ptr [rax+40h], ymm0
    vmovups ymmword ptr [rax+60h], ymm1
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)_RSI + 75) + 120i64))(*((_QWORD *)_RSI + 75), *((_QWORD *)_RSI + 135), 0i64, *((_QWORD *)_RSI + 133), 0i64, 128i64);
  v91 = *((_QWORD *)_RSI + 135);
  v92 = *((_QWORD *)_RSI + 75);
  *(_QWORD *)&desc.Dimension = 0i64;
  desc.Alignment = v91;
  desc.Width = 0x400FFFFFFFFi64;
  desc.Height = 64;
  (*(void (__fastcall **)(__int64, __int64, D3D12_RESOURCE_DESC *))(*(_QWORD *)v92 + 208i64))(v92, 1i64, &desc);
  if ( submit_command_list((BINKTEXTURESD3D12GPU *)_RSI) < 0 )
  {
LABEL_67:
    Free_textures((BINKTEXTURES *)_RSI);
    return 0i64;
  }
  else
  {
    v93 = *((_DWORD *)_RSI + 106);
    *((_DWORD *)_RSI + 112) = 16 * v93 - 11;
    *((_DWORD *)_RSI + 114) = 4 * v93 - 3;
    v94 = v93 * (16 * *((_DWORD *)_RSI + 107) - 16);
    v95 = v93 * (4 * *((_DWORD *)_RSI + 107) - 4);
    v96 = (_RSI[352] - 1) & 0x1F;
    *((_DWORD *)_RSI + 113) = v94;
    *((_DWORD *)_RSI + 115) = v95;
    if ( v96 >= 0x10u )
    {
      v97 = 10;
      *((_DWORD *)_RSI + 115) = v95 | 2;
    }
    else
    {
      v97 = 2;
    }
    v98 = binka;
    *((_DWORD *)_RSI + 113) = v94 | v97;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsi+1D0h], xmm1
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rsi+1D4h], xmm1
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsi+1D8h], xmm1
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsi+1DCh], xmm1
    }
    *((_DWORD *)_RSI + 140) = -1;
    *(_QWORD *)(_RSI + 564) = 0i64;
    *(_QWORD *)(_RSI + 572) = 0i64;
    *((_DWORD *)_RSI + 145) = -1;
    *((_DWORD *)_RSI + 146) = 16 * *((_DWORD *)_RSI + 106) - 16;
    *((_DWORD *)_RSI + 147) = 4 * *((_DWORD *)_RSI + 106) - 4;
    *((_QWORD *)_RSI + 32) = _RSI + 1120;
    *((_QWORD *)_RSI + 33) = _RSI + 1224;
    *((_QWORD *)_RSI + 34) = _RSI + 1328;
    *((_QWORD *)_RSI + 35) = _RSI + 1432;
    *((_QWORD *)_RSI + 36) = _RSI + 1536;
    *((_QWORD *)_RSI + 38) = _RSI + 1640;
    *((_QWORD *)_RSI + 39) = _RSI + 1704;
    *((_QWORD *)_RSI + 40) = _RSI + 1960;
    j_BinkRegisterGPUDataBuffers(v98, (BINKGPUDATABUFFERS *)(_RSI + 168));
    *((_QWORD *)_RSI + 277) = 0i64;
    *((_QWORD *)_RSI + 278) = 1065353216i64;
    *((_DWORD *)_RSI + 558) = 0;
    *((_DWORD *)_RSI + 559) = 1065353216;
    *((_QWORD *)_RSI + 281) = 0i64;
    *((_DWORD *)_RSI + 564) = 1065353216;
    *(_QWORD *)(_RSI + 2260) = 1065353216i64;
    *((_QWORD *)_RSI + 280) = 1065353216i64;
    *((_DWORD *)_RSI + 567) = 1065353216;
    *((_DWORD *)_RSI + 568) = 1065353216;
    *((_QWORD *)_RSI + 10) = Free_textures;
    *(_QWORD *)_RSI = Start_texture_update;
    *((_QWORD *)_RSI + 1) = Finish_texture_update;
    *((_QWORD *)_RSI + 2) = Draw_textures;
    *((_QWORD *)_RSI + 3) = Set_draw_position;
    *((_QWORD *)_RSI + 4) = Set_draw_corners;
    *((_QWORD *)_RSI + 5) = Set_source_rect;
    *((_QWORD *)_RSI + 6) = Set_alpha_settings;
    *((_QWORD *)_RSI + 7) = Set_hdr_settings;
    return (BINKTEXTURES *)_RSI;
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
  __int64 v4; 
  int Set_draw_position; 
  int Draw_textures_high; 
  unsigned int v8; 
  int user_ptr_high; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int Start_texture_update_high; 
  int cRtexture; 
  int v26; 
  void (__fastcall *v27)(BINKTEXTURES *, void *, _QWORD, _QWORD); 
  void (__fastcall *Before_Reset_textures)(BINKTEXTURES *); 
  void *Ytexture; 
  void (__fastcall *v30)(BINKTEXTURES *); 
  void *v31; 
  _QWORD *v32; 
  _DWORD *v36; 
  int (__fastcall *v37)(BINKTEXTURES *); 
  _DWORD *v38; 
  __int64 v39; 
  _DWORD *v40; 
  unsigned int v41; 
  void (__fastcall *v42)(BINKTEXTURES *); 
  void *v43; 
  _QWORD *v44; 
  _DWORD *v48; 
  __int64 v49; 
  _DWORD *v50; 
  __int64 v51; 
  _DWORD *v52; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  void (__fastcall *v56)(BINKTEXTURES *, void *, __int64, _QWORD); 
  __int64 v57[2]; 
  int v58; 
  int v59; 
  int v60; 
  __int64 v61[2]; 
  int v62; 
  int v63; 
  int v64; 
  __int64 v65[4]; 

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
    v4 = (unsigned int)(HIDWORD(ptextures[3].user_ptr) * LODWORD(ptextures[3].Set_alpha_settings));
    Set_draw_position = (int)ptextures[2].Set_draw_position;
    LODWORD(ptextures[2].Before_Reset_textures) = 0;
    _R8 = (char *)ptextures[6].Free_textures + v4;
    *(_DWORD *)_R8 = Set_draw_position;
    *((_DWORD *)_R8 + 1) = HIDWORD(ptextures[2].Set_draw_position);
    *((_QWORD *)_R8 + 1) = ptextures[2].user_ptr;
    *((_DWORD *)_R8 + 4) = LODWORD(ptextures[2].user_data[2]) >> 5;
    *((_DWORD *)_R8 + 5) = HIDWORD(ptextures[2].user_data[2]) >> 3;
    *((_DWORD *)_R8 + 6) = LODWORD(ptextures[2].user_data[3]) >> 3;
    *((_DWORD *)_R8 + 7) = HIDWORD(ptextures[2].user_data[3]) >> 5;
    *((_DWORD *)_R8 + 8) = LODWORD(ptextures[3].Start_texture_update) >> 5;
    *((_QWORD *)_R8 + 6) = 0i64;
    Draw_textures_high = HIDWORD(ptextures[2].Draw_textures);
    if ( Draw_textures_high )
    {
      *((_DWORD *)_R8 + 12) = Draw_textures_high - 1;
      *((_DWORD *)_R8 + 13) = 2 * HIDWORD(ptextures[2].Draw_textures) - 1;
    }
    v8 = 0;
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    *((_DWORD *)_R8 + 14) = HIDWORD(ptextures[2].user_data[1]);
    *((_DWORD *)_R8 + 15) = ptextures[2].user_data[1];
    *((_QWORD *)_R8 + 8) = ptextures[2].cBtexture;
    *((_QWORD *)_R8 + 9) = ptextures[2].Atexture;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm3, xmm1, xmm0
      vmovss  dword ptr [r8+50h], xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm2, cs:__real@3f400000
      vmulss  xmm0, xmm3, cs:__real@3f400000
      vmovss  dword ptr [r8+5Ch], xmm1
      vmovss  dword ptr [r8+54h], xmm2
      vmovss  dword ptr [r8+58h], xmm0
    }
    *((_DWORD *)_R8 + 24) = ptextures[2].Set_draw_corners;
    *((_DWORD *)_R8 + 28) = ptextures[2].Set_alpha_settings;
    *((_DWORD *)_R8 + 25) = HIDWORD(ptextures[2].Set_draw_corners);
    *((_DWORD *)_R8 + 29) = HIDWORD(ptextures[2].Set_alpha_settings);
    *((_DWORD *)_R8 + 26) = ptextures[2].Set_source_rect;
    *((_DWORD *)_R8 + 30) = ptextures[2].Set_hdr_settings;
    *((_DWORD *)_R8 + 27) = HIDWORD(ptextures[2].Set_source_rect);
    *((_DWORD *)_R8 + 31) = HIDWORD(ptextures[2].Set_hdr_settings);
    user_ptr_high = HIDWORD(ptextures[2].user_ptr);
    if ( ((user_ptr_high + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v19 = 4 * v8++;
        *(_DWORD *)&_R8[4 * (unsigned int)v19 + 128] = *(_DWORD *)((char *)&ptextures[9].Htexture + v19);
        user_ptr_high = HIDWORD(ptextures[2].user_ptr);
      }
      while ( v8 < (unsigned int)(user_ptr_high + 31) >> 5 );
    }
    v20 = 0;
    if ( ((4 * LODWORD(ptextures[2].user_ptr) + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v21 = 4 * v20++;
        *(_DWORD *)&_R8[4 * (unsigned int)(v21 + 1) + 128] = *(_DWORD *)((char *)&ptextures[10].Set_draw_position + v21);
      }
      while ( v20 < (unsigned int)(4 * LODWORD(ptextures[2].user_ptr) + 31) >> 5 );
      user_ptr_high = HIDWORD(ptextures[2].user_ptr);
    }
    v22 = 0i64;
    if ( ((4 * user_ptr_high + 31) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v23 = (unsigned int)(4 * v22);
        v22 = (unsigned int)(v22 + 1);
        *(_DWORD *)&_R8[4 * (unsigned int)(v23 + 2) + 128] = *(_DWORD *)((char *)&ptextures[11].cBtexture + v23);
      }
      while ( (unsigned int)v22 < (unsigned int)(4 * HIDWORD(ptextures[2].user_ptr) + 31) >> 5 );
    }
    Start_texture_update_high = HIDWORD(ptextures[4].Start_texture_update);
    cRtexture = (int)ptextures[2].cRtexture;
    v26 = (int)ptextures[2].Set_draw_position;
    HIDWORD(ptextures[4].Start_texture_update) = (Start_texture_update_high + 1) % LODWORD(ptextures[4].Start_texture_update);
    if ( (v26 & 0x10) != 0 )
    {
      if ( !cRtexture )
        LODWORD(ptextures[2].Set_draw_position) = v26 & 0xFFFFFFEF;
      cRtexture = 0;
    }
    v27 = (void (__fastcall *)(BINKTEXTURES *, void *, _QWORD, _QWORD))*((_QWORD *)After_Reset_textures + 22);
    if ( v27 )
      v27(ptextures, ptextures[3].Ytexture, 0i64, *((_QWORD *)After_Reset_textures + 23));
    (*(void (__fastcall **)(void *, __int64, void (__fastcall **)(BINKTEXTURES *, float, float, float, float, float, float), __int64))(*(_QWORD *)ptextures[3].Ytexture + 256i64))(ptextures[3].Ytexture, 1i64, &ptextures[4].Set_draw_corners, v22);
    Before_Reset_textures = ptextures[6].Before_Reset_textures;
    Ytexture = ptextures[3].Ytexture;
    v57[0] = 0i64;
    v57[1] = (__int64)Before_Reset_textures;
    v58 = -1;
    v59 = 64;
    v60 = 8;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)Ytexture + 208i64))(Ytexture, 1i64, v57);
    plane_set_transition((BINKTEXTURESD3D12GPU *)ptextures, (BINKGPU_D3D12_PLANESET *)&ptextures[5].Htexture + HIDWORD(ptextures[4].Start_texture_update), D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 9));
    mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 0, Start_texture_update_high, ptextures[2].user_data[2]);
    mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 17), 1u, Start_texture_update_high, HIDWORD(ptextures[2].user_data[2]));
    if ( cRtexture )
      mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 2u, Start_texture_update_high, HIDWORD(ptextures[2].user_data[3]));
    if ( HIDWORD(ptextures[2].cRtexture) )
      mdct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 15), 3u, Start_texture_update_high, (unsigned int)ptextures[3].Start_texture_update);
    v30 = ptextures[6].Before_Reset_textures;
    v31 = ptextures[3].Ytexture;
    v65[0] = 2i64;
    v65[1] = (__int64)v30;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v31 + 208i64))(v31, 1i64, v65);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 10));
    v32 = ptextures[3].Ytexture;
    _RCX = *((_QWORD *)After_Reset_textures + 18);
    _RDX = v32[7];
    if ( _RDX >= v32[10] )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*v32 + 200i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 18));
      v36 = (_DWORD *)v32[7];
    }
    else
    {
      __asm
      {
        vmovdqu xmm0, xmmword ptr [rcx+10h]
        vmovdqu xmmword ptr [rdx], xmm0
      }
      *(_QWORD *)(_RDX + 16) = *(_QWORD *)(_RCX + 32);
      v36 = (_DWORD *)(_RDX + 24);
      v32[7] = v36;
    }
    v37 = ptextures[4].After_Reset_textures;
    if ( (unsigned __int64)v36 >= v32[10] )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, int (__fastcall *)(BINKTEXTURES *)))(*v32 + 280i64))(v32, 0i64, v37);
      v38 = (_DWORD *)v32[7];
    }
    else
    {
      *v36 = *((_DWORD *)v32 + 152);
      v36[1] = (_DWORD)v37;
      v38 = v36 + 2;
      v32[7] = v38;
    }
    v39 = *((_QWORD *)&ptextures[4].cRtexture + 4 * HIDWORD(ptextures[3].user_ptr));
    if ( (unsigned __int64)v38 >= v32[10] )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v32 + 280i64))(v32, 1i64, v39);
      v40 = (_DWORD *)v32[7];
    }
    else
    {
      *v38 = *((_DWORD *)v32 + 153);
      v38[1] = v39;
      v40 = v38 + 2;
      v32[7] = v40;
    }
    v41 = LODWORD(ptextures[2].cRtexture) + HIDWORD(ptextures[2].cRtexture) + 3;
    if ( (unsigned __int64)v40 >= v32[9] )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v32 + 112i64))(v32, v41, 1i64);
    }
    else
    {
      *v40 = 1073923072;
      v40[1] = v41;
      v40[2] = 1;
      v40[3] = 1;
      v32[7] = v40 + 4;
    }
    v42 = ptextures[6].Before_Reset_textures;
    v43 = ptextures[3].Ytexture;
    v61[0] = 0i64;
    v61[1] = (__int64)v42;
    v62 = -1;
    v63 = 8;
    v64 = 64;
    (*(void (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v43 + 208i64))(v43, 1i64, v61);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptextures[3].Ytexture + 264i64))(ptextures[3].Ytexture, *((_QWORD *)After_Reset_textures + 8));
    dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 0);
    dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 16), 1u);
    if ( cRtexture )
      dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 2u);
    if ( HIDWORD(ptextures[2].cRtexture) )
      dct_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 14), 3u);
    if ( ((__int64)ptextures[2].Set_draw_position & 0x10) != 0 )
    {
      v44 = ptextures[3].Ytexture;
      _RBP = *((_QWORD *)After_Reset_textures + 21);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v44 + 264i64))(v44, *((_QWORD *)ptextures[2].After_Reset_textures + 12));
      _RCX = v44[7];
      if ( _RCX >= v44[10] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v44 + 200i64))(v44, _RBP);
        v48 = (_DWORD *)v44[7];
      }
      else
      {
        __asm
        {
          vmovdqu xmm0, xmmword ptr [rbp+10h]
          vmovdqu xmmword ptr [rcx], xmm0
        }
        *(_QWORD *)(_RCX + 16) = *(_QWORD *)(_RBP + 32);
        v48 = (_DWORD *)(_RCX + 24);
        v44[7] = v48;
      }
      v49 = *((_QWORD *)&ptextures[4].Atexture + 4 * HIDWORD(ptextures[3].user_ptr));
      if ( (unsigned __int64)v48 >= v44[10] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v44 + 280i64))(v44, 0i64, v49);
        v50 = (_DWORD *)v44[7];
      }
      else
      {
        *v48 = *((_DWORD *)v44 + 152);
        v48[1] = v49;
        v50 = v48 + 2;
        v44[7] = v50;
      }
      v51 = *((_QWORD *)&ptextures[5].Set_alpha_settings + 4 * HIDWORD(ptextures[4].Start_texture_update));
      if ( (unsigned __int64)v50 >= v44[10] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v44 + 280i64))(v44, 1i64, v51);
        v52 = (_DWORD *)v44[7];
      }
      else
      {
        *v50 = *((_DWORD *)v44 + 153);
        v52 = v50 + 2;
        v50[1] = v51;
        v44[7] = v50 + 2;
      }
      v53 = (unsigned int)(4 * HIDWORD(ptextures[2].user_ptr));
      v54 = (unsigned int)(4 * LODWORD(ptextures[2].user_ptr));
      if ( (unsigned __int64)v52 >= v44[9] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*v44 + 112i64))(v44, v54, v53, 1i64);
      }
      else
      {
        *v52 = 1073923072;
        v52[1] = v54;
        v52[2] = v53;
        v52[3] = 1;
        v44[7] = v52 + 4;
      }
    }
    v55 = (int)ptextures[2].Set_draw_position;
    if ( (v55 & 1) != 0 )
    {
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 19), *((ID3D12Resource **)&ptextures[5].Htexture + 4 * HIDWORD(ptextures[4].Start_texture_update)), 0, DEBLOCK_DIR_UD);
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 20), (ID3D12Resource *)ptextures[5].user_data[4 * HIDWORD(ptextures[4].Start_texture_update)], 1u, DEBLOCK_DIR_UD);
      v55 = (int)ptextures[2].Set_draw_position;
    }
    if ( (v55 & 2) != 0 )
    {
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 19), *((ID3D12Resource **)&ptextures[5].Htexture + 4 * HIDWORD(ptextures[4].Start_texture_update)), 0, DEBLOCK_DIR_LR);
      deblock_inplace_pass((BINKTEXTURESD3D12GPU *)ptextures, *((ID3D12PipelineState **)After_Reset_textures + 20), (ID3D12Resource *)ptextures[5].user_data[4 * HIDWORD(ptextures[4].Start_texture_update)], 1u, DEBLOCK_DIR_LR);
    }
    plane_set_transition((BINKTEXTURESD3D12GPU *)ptextures, (BINKGPU_D3D12_PLANESET *)&ptextures[5].Htexture + HIDWORD(ptextures[4].Start_texture_update), D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ);
    v56 = (void (__fastcall *)(BINKTEXTURES *, void *, __int64, _QWORD))*((_QWORD *)After_Reset_textures + 22);
    if ( v56 )
      v56(ptextures, ptextures[3].Ytexture, 1i64, *((_QWORD *)After_Reset_textures + 23));
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

void __fastcall Set_alpha_settings(BINKTEXTURES *ptextures, double alpha_value, int draw_type)
{
  __asm { vmovss  dword ptr [rcx+8C0h], xmm1 }
  HIDWORD(ptextures[13].Set_hdr_settings) = draw_type;
}

/*
==============
Set_draw_corners
==============
*/

void __fastcall Set_draw_corners(BINKTEXTURES *ptextures, double Ax, double Ay, double Bx, float By, float Cx, float Cy)
{
  __asm
  {
    vmovss  xmm0, [rsp+By]
    vmovss  dword ptr [rcx+8B4h], xmm0
    vmovss  xmm0, [rsp+Cy]
    vmovss  dword ptr [rcx+8A8h], xmm1
    vmovss  xmm1, [rsp+arg_28]
    vmovss  dword ptr [rcx+8BCh], xmm0
    vmovss  dword ptr [rcx+8ACh], xmm2
    vmovss  dword ptr [rcx+8B0h], xmm3
    vmovss  dword ptr [rcx+8B8h], xmm1
  }
}

/*
==============
Set_draw_position
==============
*/

void __fastcall Set_draw_position(BINKTEXTURES *ptextures, double x0, double y0, double x1, float y1)
{
  __asm
  {
    vmovss  xmm0, [rsp+y1]
    vmovss  dword ptr [rcx+8BCh], xmm0
    vmovss  dword ptr [rcx+8A8h], xmm1
    vmovss  dword ptr [rcx+8ACh], xmm2
    vmovss  dword ptr [rcx+8B0h], xmm3
    vmovss  dword ptr [rcx+8B4h], xmm2
    vmovss  dword ptr [rcx+8B8h], xmm1
  }
}

/*
==============
Set_hdr_settings
==============
*/

void __fastcall Set_hdr_settings(BINKTEXTURES *ptextures, int tonemap, double exposure, int out_nits)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vmulss  xmm1, xmm0, cs:__real@3c4ccccd
    vmovss  dword ptr [rcx+8E0h], xmm1
    vmovss  dword ptr [rcx+8DCh], xmm2
  }
  LODWORD(ptextures[13].Free_textures) = tonemap;
}

/*
==============
Set_source_rect
==============
*/

void __fastcall Set_source_rect(BINKTEXTURES *ptextures, double u0, double v0, double u1, float v1)
{
  __asm
  {
    vmovss  xmm0, [rsp+v1]
    vmovss  dword ptr [rcx+8D4h], xmm0
    vmovss  dword ptr [rcx+8C8h], xmm1
    vmovss  dword ptr [rcx+8CCh], xmm2
    vmovss  dword ptr [rcx+8D0h], xmm3
  }
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
  unsigned __int64 ptr; 
  unsigned int *v10; 
  unsigned __int64 v11; 
  unsigned int *v12; 
  unsigned __int64 v13; 
  unsigned int *v14; 
  __int64 h_blocks; 
  __int64 w_blocks; 

  decode_cl = ctx->decode_cl;
  v5 = plane_grp;
  _RCX = decode_cl->m_Putter.m_pCurrent;
  if ( _RCX >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, state);
    m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rdx+10h]
      vmovdqu xmmword ptr [rcx], xmm0
    }
    *((_QWORD *)_RCX + 2) = state->m_Packet.Oword[1].m128i_i64[0];
    m_pCurrent = _RCX + 6;
    decode_cl->m_Putter.m_pCurrent = m_pCurrent;
  }
  ptr = ctx->desc_ppgc[v5].ptr;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v10 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *m_pCurrent = decode_cl->m_ComputeRootPacketHeader[0];
    m_pCurrent[1] = ptr;
    v10 = m_pCurrent + 2;
    decode_cl->m_Putter.m_pCurrent = v10;
  }
  v11 = ctx->desc_ppaus[ctx->cur_decode_buf][v5].ptr;
  if ( v10 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v11);
    v12 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v10 = decode_cl->m_ComputeRootPacketHeader[1];
    v10[1] = v11;
    v12 = v10 + 2;
    decode_cl->m_Putter.m_pCurrent = v12;
  }
  v13 = ctx->desc_ppaps[ctx->cur_frame][v5].ptr;
  if ( v12 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v13);
    v14 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v12 = decode_cl->m_ComputeRootPacketHeader[2];
    v14 = v12 + 2;
    v12[1] = v13;
    decode_cl->m_Putter.m_pCurrent = v12 + 2;
  }
  h_blocks = ctx->h_blocks;
  w_blocks = ctx->w_blocks;
  if ( v14 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, w_blocks, h_blocks, 1i64);
  }
  else
  {
    *v14 = 1073923072;
    v14[1] = w_blocks;
    v14[2] = h_blocks;
    v14[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v14 + 4;
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
  unsigned __int64 ptr; 
  unsigned int *v13; 
  unsigned __int64 v14; 
  unsigned int *v15; 
  unsigned __int64 v16; 
  unsigned int *v17; 
  int v18; 
  DEBLOCK_CONSTS_BUF *v19; 
  unsigned int *v20; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24[5]; 

  decode_cl = ctx->decode_cl;
  _RSI = state_deblock;
  v24[1] = (__int64)res;
  v24[0] = 2i64;
  v8 = plane_grp;
  ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64 *))decode_cl->m_pFunction[8].Release)(decode_cl, 1i64, v24);
  ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12RootSignature *))decode_cl->m_pFunction[11].QueryInterface)(decode_cl, ctx->shaders->root_sig[3]);
  _RCX = decode_cl->m_Putter.m_pCurrent;
  if ( _RCX >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, _RSI);
    m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rsi+10h]
      vmovdqu xmmword ptr [rcx], xmm0
    }
    *((_QWORD *)_RCX + 2) = _RSI->m_Packet.Oword[1].m128i_i64[0];
    m_pCurrent = _RCX + 6;
    decode_cl->m_Putter.m_pCurrent = m_pCurrent;
  }
  ptr = ctx->desc_ppgc[v8].ptr;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v13 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *m_pCurrent = decode_cl->m_ComputeRootPacketHeader[0];
    m_pCurrent[1] = ptr;
    v13 = m_pCurrent + 2;
    decode_cl->m_Putter.m_pCurrent = v13;
  }
  v14 = ctx->desc_ppaus[ctx->cur_decode_buf][v8].ptr;
  if ( v13 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v14);
    v15 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v13 = decode_cl->m_ComputeRootPacketHeader[1];
    v13[1] = v14;
    v15 = v13 + 2;
    decode_cl->m_Putter.m_pCurrent = v15;
  }
  v16 = ctx->desc_ppaps[ctx->cur_frame][v8].ptr;
  if ( v15 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v16);
    v17 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v15 = decode_cl->m_ComputeRootPacketHeader[2];
    v15[1] = v16;
    v17 = v15 + 2;
    decode_cl->m_Putter.m_pCurrent = v17;
  }
  v18 = 4;
  v19 = &ctx->deblock_consts[dir];
  if ( v17 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, DEBLOCK_CONSTS_BUF *, _DWORD))decode_cl->m_pFunction[13].QueryInterface)(decode_cl, 3i64, 4i64, v19, 0);
    v20 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v17 = decode_cl->m_ComputeRootPacketHeader[3] + 196608;
    v20 = v17 + 1;
    v21 = (char *)v19 - (char *)v20;
    do
    {
      *v20 = *(unsigned int *)((char *)v20 + v21);
      ++v20;
      --v18;
    }
    while ( v18 );
    decode_cl->m_Putter.m_pCurrent = v20;
  }
  v22 = (ctx->h_blocks + 1) >> 1;
  v23 = (ctx->w_blocks + 1) >> 1;
  if ( v20 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, v23, v22, 1i64);
  }
  else
  {
    *v20 = 1073923072;
    v20[1] = v23;
    v20[2] = v22;
    v20[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v20 + 4;
  }
}

/*
==============
init_ppaps_desc_table
==============
*/
D3D12_GPU_DESCRIPTOR_HANDLE init_ppaps_desc_table(BINKTEXTURESD3D12GPU *ctx, int *desc_index, ID3D12Resource *plane_tex, DXGI_FORMAT uint_fmt, DXGI_FORMAT unorm_fmt, DXGI_FORMAT mdct_fmt)
{
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu ymmword ptr [rbp+var_28], ymm0
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, DXGI_FORMAT *, unsigned __int64))ctx->shaders->device->m_pFunction[6].AddRef)(ctx->shaders->device, plane_tex, 0i64, &v28, ctx->srv_cpu_base.ptr + v10 * desc_increment);
  v15 = ctx->desc_increment * (v10 + 1);
  v28 = mdct_fmt;
  shaders = ctx->shaders;
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v17 = ctx->srv_cpu_base.ptr + v15;
  v29 = 4;
  v30.m256i_i32[3] = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+var_28+10h], xmm0
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, __int64))shaders->device->m_pFunction[6].QueryInterface)(shaders->device, plane_tex, &v28, v17);
  v19 = ctx->desc_increment * (v10 + 2);
  v28 = unorm_fmt;
  v20 = ctx->shaders;
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v21 = ctx->srv_cpu_base.ptr + v19;
  v29 = 4;
  v30.m256i_i32[3] = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+var_28+10h], xmm0
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, __int64))v20->device->m_pFunction[6].QueryInterface)(v20->device, plane_tex, &v28, v21);
  v23 = ctx->shaders;
  v24 = ctx->desc_increment * (v10 + 3);
  *(__int64 *)((char *)v30.m256i_i64 + 4) = 0i64;
  v30.m256i_i32[0] = 5768;
  v28 = uint_fmt;
  v29 = 4;
  v25 = ctx->srv_cpu_base.ptr + v24;
  v30.m256i_i32[3] = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+var_28+10h], xmm0
  }
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
  unsigned __int64 ptr; 
  unsigned int *v13; 
  unsigned __int64 v14; 
  unsigned int *v15; 
  unsigned __int64 v16; 
  unsigned int *v17; 
  unsigned __int64 v18; 
  unsigned int *v19; 
  __int64 v20; 
  unsigned int *v21; 
  __int64 h_blocks; 
  __int64 w_blocks; 

  decode_cl = ctx->decode_cl;
  v7 = prev_frame;
  v8 = plane_grp;
  _RCX = decode_cl->m_Putter.m_pCurrent;
  if ( _RCX >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12PipelineState *))decode_cl->m_pFunction[8].AddRef)(decode_cl, state);
    m_pCurrent = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rdx+10h]
      vmovdqu xmmword ptr [rcx], xmm0
    }
    *((_QWORD *)_RCX + 2) = state->m_Packet.Oword[1].m128i_i64[0];
    m_pCurrent = _RCX + 6;
    decode_cl->m_Putter.m_pCurrent = m_pCurrent;
  }
  ptr = ctx->desc_ppgc[v8].ptr;
  if ( m_pCurrent >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 0i64, ptr);
    v13 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *m_pCurrent = decode_cl->m_ComputeRootPacketHeader[0];
    m_pCurrent[1] = ptr;
    v13 = m_pCurrent + 2;
    decode_cl->m_Putter.m_pCurrent = v13;
  }
  v14 = ctx->desc_ppaus[ctx->cur_decode_buf][v8].ptr;
  if ( v13 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 1i64, v14);
    v15 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v13 = decode_cl->m_ComputeRootPacketHeader[1];
    v13[1] = v14;
    v15 = v13 + 2;
    decode_cl->m_Putter.m_pCurrent = v15;
  }
  v16 = ctx->desc_ppaps[ctx->cur_frame][v8].ptr;
  if ( v15 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 2i64, v16);
    v17 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v15 = decode_cl->m_ComputeRootPacketHeader[2];
    v15[1] = v16;
    v17 = v15 + 2;
    decode_cl->m_Putter.m_pCurrent = v17;
  }
  v18 = ctx->desc_ppaps[v7][v8].ptr;
  if ( v17 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))decode_cl->m_pFunction[11].Release)(decode_cl, 3i64, v18);
    v19 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v17 = decode_cl->m_ComputeRootPacketHeader[3];
    v17[1] = v18;
    v19 = v17 + 2;
    decode_cl->m_Putter.m_pCurrent = v19;
  }
  v20 = plane_offs >> 1;
  if ( v19 >= decode_cl->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64))decode_cl->m_pFunction[12].AddRef)(decode_cl, 4i64, v20);
    v21 = decode_cl->m_Putter.m_pCurrent;
  }
  else
  {
    *v19 = decode_cl->m_ComputeRootPacketHeader[4];
    v21 = v19 + 2;
    v19[1] = v20;
    decode_cl->m_Putter.m_pCurrent = v19 + 2;
  }
  h_blocks = ctx->h_blocks;
  w_blocks = ctx->w_blocks;
  if ( v21 >= decode_cl->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64, __int64))decode_cl->m_pFunction[4].Release)(decode_cl, w_blocks, h_blocks, 1i64);
  }
  else
  {
    *v21 = 1073923072;
    v21[1] = w_blocks;
    v21[2] = h_blocks;
    v21[3] = 1;
    decode_cl->m_Putter.m_pCurrent = v21 + 4;
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
  ID3D12RootSignature *v12; 
  ID3D12RootSignature *v20; 
  ID3D12RootSignature *v29; 
  HRESULT v30; 
  const Create_Bink_shaders::__l28::CreateInfo *v31; 
  unsigned int i; 
  const CompiledShader *shader; 
  HRESULT hr; 
  __m256i v37; 
  _BYTE para[64]; 

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
  v37.m256i_i32[0] = 0;
  v37.m256i_i64[2] = (__int64)range_dct_tab_ppgc;
  v37.m256i_i32[2] = 2;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_dct_tab_ppaus;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[2] = 2;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_dct_tab_ppaps_out;
  v37.m256i_i32[0] = 0;
  __asm { vmovups [rbp+40h+var_B0], ymm0 }
  v37.m256i_i32[2] = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_90], ymm0
  }
  v12 = create_root_sig(v3, 3u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v37.m256i_i32[2] = 2;
  v5[1].user_data[0] = (unsigned __int64)v12;
  v37.m256i_i32[0] = 0;
  v37.m256i_i64[2] = (__int64)range_mdct_tab_ppgc;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_mdct_tab_ppaus;
  v37.m256i_i32[2] = 4;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_mdct_tab_ppaps_out;
  v37.m256i_i32[2] = 1;
  __asm { vmovups [rbp+40h+var_B0], ymm0 }
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_mdct_tab_ppaps_in;
  __asm { vmovups [rbp+40h+var_90], ymm0 }
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_70], ymm0
  }
  v37.m256i_i32[0] = 1;
  v37.m256i_i64[1] = 1i64;
  v37.m256i_i32[4] = 1;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_50], ymm0
  }
  v5[1].user_data[1] = (unsigned __int64)create_root_sig(v3, 5u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  v37.m256i_i64[2] = (__int64)range_dc_predict_tab_ppgc;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i32[0] = 0;
  v37.m256i_i64[2] = (__int64)range_dc_predict_tab_ppaus;
  v37.m256i_i32[2] = 1;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_B0], ymm0
  }
  v20 = create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v37.m256i_i32[2] = 1;
  v5[1].user_data[2] = (unsigned __int64)v20;
  v37.m256i_i32[0] = 0;
  v37.m256i_i64[2] = (__int64)range_deblock_tab_ppgc;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_deblock_tab_ppaus;
  v37.m256i_i32[2] = 2;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_deblock_tab_ppaps_out;
  __asm { vmovups [rbp+40h+var_B0], ymm0 }
  v37.m256i_i32[0] = 0;
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_90], ymm0
  }
  v37.m256i_i32[0] = 1;
  v37.m256i_i64[1] = 1i64;
  v37.m256i_i32[4] = 4;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_70], ymm0
  }
  v5[1].user_data[3] = (unsigned __int64)create_root_sig(v3, 4u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v37.m256i_i32[0] = 0;
  v37.m256i_i64[2] = (__int64)range_fill_alpha_tab_ppaus;
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_fill_alpha_tab_ppaps_out;
  v37.m256i_i32[0] = 0;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_B0], ymm0
  }
  v5[2].Create_textures = (BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *))create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v37.m256i_i32[0] = 2;
  v37.m256i_i64[1] = 0i64;
  v37.m256i_i32[6] = 0;
  __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_F8] }
  v37.m256i_i64[2] = (__int64)range_draw_pps;
  v37.m256i_i32[0] = 0;
  __asm { vmovups ymmword ptr [rsp+140h+para.ParameterType], ymm0 }
  v37.m256i_i32[2] = 1;
  v37.m256i_i32[6] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F8]
    vmovups [rbp+40h+var_B0], ymm0
  }
  v29 = create_root_sig(v3, 2u, (const D3D12_ROOT_PARAMETER *)para, 1u, static_smps, D3D12_ROOT_SIGNATURE_FLAG_NONE, &hr);
  v30 = hr;
  v31 = prog_info;
  v5[2].Free_shaders = (void (__fastcall *)(BINKSHADERS *))v29;
  for ( i = 0; i < 8; ++i )
  {
    memset(para, 0, 56);
    *(_QWORD *)para = v5[1].user_data[v31->root_sig_id];
    shader = v31->shader;
    *(_OWORD *)v37.m256i_i8 = 0ui64;
    if ( shader )
    {
      v37.m256i_i64[0] = (__int64)shader->bytecode;
      v37.m256i_i64[1] = shader->size;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+140h+var_F8]
      vmovups xmmword ptr [rsp+140h+para.___u1], xmm0
    }
    if ( v30 >= 0 )
      v30 = ((__int64 (__fastcall *)(ID3D12Device *, _BYTE *, _QWORD, _QWORD, GUID *, unsigned __int64 *))v3->m_pFunction[20].Release)(v3, para, 0i64, 0i64, &GUID_765a30f3_f624_4c6f_a828_ace948622445, &v5[2].user_data[i]);
    ++v31;
  }
  *(_DWORD *)para = 1;
  *(_DWORD *)&para[24] = 1;
  *(_QWORD *)&para[36] = 1i64;
  *(_QWORD *)&para[44] = 1i64;
  v37.m256i_i32[0] = 2;
  *(__int64 *)((char *)v37.m256i_i64 + 4) = 0i64;
  *(__int64 *)((char *)&v37.m256i_i64[1] + 4) = 0i64;
  *(_QWORD *)&para[8] = 0i64;
  *(_QWORD *)&para[16] = 0x10000i64;
  *(_QWORD *)&para[28] = 65537i64;
  if ( v30 < 0 || ((int (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, _BYTE *, int, _QWORD, GUID *, BINKSHADERS *))v3->m_pFunction[9].QueryInterface)(v3, &v37, 0i64, para, 2243, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v5[4]) < 0 || (*(int (__fastcall **)(BINKTEXTURES *(__fastcall *)(BINKSHADERS *, BINK *, void *), _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)v5[4].Create_textures + 64i64))(v5[4].Create_textures, 0i64, 0i64, &v5[46].user_data[3]) < 0 )
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

