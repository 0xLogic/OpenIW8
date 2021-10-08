/*
==============
examine_app0
==============
*/
void examine_app0(jpeg_decompress_struct *cinfo, unsigned __int8 *data, unsigned int datalen, int remaining)
{
  unsigned int v4; 
  jpeg_decompress_struct *v6; 
  unsigned __int8 JFIF_major_version; 
  jpeg_error_mgr *v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  unsigned int v11; 
  jpeg_error_mgr *v12; 
  jpeg_error_mgr *err; 

  v4 = datalen + remaining;
  v6 = cinfo;
  if ( datalen < 0xE || *data != 74 || data[1] != 70 || data[2] != 73 || data[3] != 70 || data[4] )
  {
    if ( datalen >= 6 && *data == 74 && data[1] == 70 && data[2] == 88 && data[3] == 88 && !data[4] )
    {
      err = cinfo->err;
      if ( data[5] == 16 )
      {
        err->msg_code = 108;
        cinfo->err->msg_parm.i[0] = v4;
        v12 = cinfo->err;
      }
      else if ( data[5] == 17 )
      {
        err->msg_code = 109;
        cinfo->err->msg_parm.i[0] = v4;
        v12 = cinfo->err;
      }
      else
      {
        if ( data[5] == 19 )
        {
          err->msg_code = 110;
          cinfo->err->msg_parm.i[0] = v4;
        }
        else
        {
          err->msg_code = 89;
          cinfo->err->msg_parm.i[0] = data[5];
          cinfo->err->msg_parm.i[1] = v4;
        }
        v12 = cinfo->err;
      }
    }
    else
    {
      cinfo->err->msg_code = 77;
      cinfo->err->msg_parm.i[0] = v4;
      v12 = cinfo->err;
    }
    goto LABEL_28;
  }
  cinfo->saw_JFIF_marker = 1;
  JFIF_major_version = data[5];
  cinfo->JFIF_major_version = JFIF_major_version;
  cinfo->JFIF_minor_version = data[6];
  cinfo->density_unit = data[7];
  cinfo->X_density = data[9] + (data[8] << 8);
  cinfo->Y_density = data[11] + (data[10] << 8);
  if ( JFIF_major_version != 1 )
  {
    cinfo->err->msg_code = 119;
    cinfo->err->msg_parm.i[0] = cinfo->JFIF_major_version;
    cinfo->err->msg_parm.i[1] = cinfo->JFIF_minor_version;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
    JFIF_major_version = v6->JFIF_major_version;
  }
  v8 = v6->err;
  v8->msg_parm.i[0] = JFIF_major_version;
  v8->msg_parm.i[1] = v6->JFIF_minor_version;
  v8->msg_parm.i[2] = v6->X_density;
  v8->msg_parm.i[3] = v6->Y_density;
  v8->msg_parm.i[4] = v6->density_unit;
  v6->err->msg_code = 87;
  v6->err->emit_message((jpeg_common_struct *)v6, 1);
  v9 = data[12];
  v10 = data[13];
  if ( *((_WORD *)data + 6) )
  {
    v6->err->msg_code = 90;
    v6->err->msg_parm.i[0] = data[12];
    v6->err->msg_parm.i[1] = data[13];
    v6->err->emit_message((jpeg_common_struct *)v6, 1);
    v10 = data[13];
    v9 = data[12];
  }
  v11 = v4 - 14;
  if ( v11 != 3 * v10 * v9 )
  {
    cinfo = v6;
    v6->err->msg_code = 88;
    v6->err->msg_parm.i[0] = v11;
    v12 = v6->err;
LABEL_28:
    v12->emit_message((jpeg_common_struct *)cinfo, 1);
  }
}

/*
==============
examine_app14
==============
*/
void examine_app14(jpeg_decompress_struct *cinfo, unsigned __int8 *data, unsigned int datalen, int remaining)
{
  int v6; 
  int v7; 
  int v8; 
  jpeg_error_mgr *err; 
  int v10; 
  int v11; 

  if ( datalen >= 0xC && *data == 65 && data[1] == 100 && data[2] == 111 && data[3] == 98 && data[4] == 101 )
  {
    v6 = data[8] + (data[7] << 8);
    v7 = data[10] + (data[9] << 8);
    v8 = data[11];
    err = cinfo->err;
    v10 = data[6];
    v11 = data[5] << 8;
    err->msg_parm.i[1] = v6;
    err->msg_parm.i[0] = v10 + v11;
    err->msg_parm.i[2] = v7;
    err->msg_parm.i[3] = v8;
    cinfo->err->msg_code = 76;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
    cinfo->Adobe_transform = v8;
    cinfo->saw_Adobe_marker = 1;
  }
  else
  {
    cinfo->err->msg_code = 78;
    cinfo->err->msg_parm.i[0] = datalen + remaining;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  }
}

/*
==============
get_dht
==============
*/
unsigned __int8 get_dht(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v5; 
  const unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  char *v11; 
  int v12; 
  int v13; 
  __int64 i; 
  int v15; 
  jpeg_error_mgr *err; 
  int v17; 
  jpeg_error_mgr *v18; 
  __int64 j; 
  __int64 v20; 
  JHUFF_TBL **v21; 
  unsigned int v22; 
  unsigned __int8 v24; 
  __int64 v25; 
  unsigned __int8 result; 
  int v35; 
  __int128 v36; 
  unsigned __int8 v37; 
  char v38[256]; 

  src = cinfo->src;
  bytes_in_buffer = src->bytes_in_buffer;
  next_input_byte = src->next_input_byte;
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v5 = *next_input_byte;
  v6 = next_input_byte + 1;
  v7 = v5 << 8;
  v8 = bytes_in_buffer - 1;
  if ( !v8 )
  {
    if ( src->fill_input_buffer(cinfo) )
    {
      v6 = src->next_input_byte;
      v8 = src->bytes_in_buffer;
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v9 = *v6 + v7 - 2;
  v10 = v8 - 1;
  v11 = (char *)(v6 + 1);
  while ( v9 > 16 )
  {
    if ( !v10 )
    {
      if ( !src->fill_input_buffer(cinfo) )
        return 0;
      v11 = (char *)src->next_input_byte;
      v10 = src->bytes_in_buffer;
    }
    v12 = (unsigned __int8)*v11;
    --v10;
    v35 = v12;
    ++v11;
    cinfo->err->msg_code = 80;
    cinfo->err->msg_parm.i[0] = v12;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
    v13 = 0;
    LOBYTE(v36) = 0;
    for ( i = 1i64; i <= 16; ++i )
    {
      if ( !v10 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v11 = (char *)src->next_input_byte;
        v10 = src->bytes_in_buffer;
      }
      v15 = (unsigned __int8)*v11;
      --v10;
      *((_BYTE *)&v36 + i) = v15;
      ++v11;
      v13 += v15;
    }
    err = cinfo->err;
    v17 = v9 - 17;
    err->msg_parm.i[0] = BYTE1(v36);
    err->msg_parm.i[1] = BYTE2(v36);
    err->msg_parm.i[2] = BYTE3(v36);
    err->msg_parm.i[3] = BYTE4(v36);
    err->msg_parm.i[4] = BYTE5(v36);
    err->msg_parm.i[5] = BYTE6(v36);
    err->msg_parm.i[6] = BYTE7(v36);
    err->msg_parm.i[7] = BYTE8(v36);
    cinfo->err->msg_code = 86;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 2);
    v18 = cinfo->err;
    v18->msg_parm.i[0] = BYTE9(v36);
    v18->msg_parm.i[1] = BYTE10(v36);
    v18->msg_parm.i[2] = BYTE11(v36);
    v18->msg_parm.i[3] = BYTE12(v36);
    v18->msg_parm.i[4] = BYTE13(v36);
    v18->msg_parm.i[5] = BYTE14(v36);
    v18->msg_parm.i[6] = HIBYTE(v36);
    v18->msg_parm.i[7] = v37;
    cinfo->err->msg_code = 86;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 2);
    if ( v13 > 256 || v13 > v17 )
    {
      cinfo->err->msg_code = 8;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    for ( j = 0i64; j < v13; v38[j++] = *v11++ )
    {
      if ( !v10 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v11 = (char *)src->next_input_byte;
        v10 = src->bytes_in_buffer;
      }
      --v10;
    }
    v9 = v17 - v13;
    v20 = 136i64;
    if ( (v35 & 0x10) == 0 )
      v20 = 232i64;
    v21 = (JHUFF_TBL **)((char *)&cinfo->err + 8 * (unsigned __int8)v35 + v20);
    v22 = v35 - 16;
    if ( (v35 & 0x10) == 0 )
      v22 = v35;
    if ( v22 > 3 )
    {
      cinfo->err->msg_code = 30;
      cinfo->err->msg_parm.i[0] = v22;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    _RAX = *v21;
    if ( !*v21 )
    {
      _RAX = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
      *v21 = _RAX;
    }
    v24 = v37;
    v25 = 2i64;
    __asm
    {
      vmovups xmm0, [rsp+178h+var_150]
      vmovups xmmword ptr [rax], xmm0
    }
    _RAX->bits[16] = v24;
    _RCX = v38;
    _RAX = (__int64)(*v21)->huffval;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups xmm1, xmmword ptr [rcx+70h]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rcx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rcx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups xmm0, xmmword ptr [rcx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX += 128i64;
      _RCX += 128;
      __asm { vmovups xmmword ptr [rax-10h], xmm1 }
      --v25;
    }
    while ( v25 );
  }
  if ( v9 )
  {
    cinfo->err->msg_code = 11;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  src->next_input_byte = (const unsigned __int8 *)v11;
  result = 1;
  src->bytes_in_buffer = v10;
  return result;
}

/*
==============
get_dqt
==============
*/
unsigned __int8 get_dqt(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v5; 
  const unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  const unsigned __int8 *v11; 
  bool v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  JQUANT_TBL **v16; 
  JQUANT_TBL *v17; 
  const int *v18; 
  unsigned __int8 v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  unsigned __int16 *v22; 
  __int64 v23; 
  jpeg_error_mgr *err; 
  int v25; 
  unsigned __int8 result; 
  int v27; 

  src = cinfo->src;
  bytes_in_buffer = src->bytes_in_buffer;
  next_input_byte = src->next_input_byte;
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v5 = *next_input_byte;
  v6 = next_input_byte + 1;
  v7 = v5 << 8;
  v8 = bytes_in_buffer - 1;
  if ( !v8 )
  {
    if ( src->fill_input_buffer(cinfo) )
    {
      v6 = src->next_input_byte;
      v8 = src->bytes_in_buffer;
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v9 = *v6 + v7 - 2;
  v10 = v8 - 1;
  v11 = v6 + 1;
  v12 = v9 == 0;
  if ( v9 > 0 )
  {
    do
    {
      v27 = v9;
      if ( !v10 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v11 = src->next_input_byte;
        v10 = src->bytes_in_buffer;
      }
      v13 = *v11;
      v14 = v13 & 0xF;
      v15 = v13 >> 4;
      --v10;
      ++v11;
      cinfo->err->msg_code = 81;
      cinfo->err->msg_parm.i[0] = v14;
      cinfo->err->msg_parm.i[1] = v15;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
      if ( (unsigned int)v14 >= 4 )
      {
        cinfo->err->msg_code = 31;
        cinfo->err->msg_parm.i[0] = v14;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      v16 = &cinfo->quant_tbl_ptrs[v14];
      v17 = *v16;
      if ( !*v16 )
      {
        v17 = j_jpeg_alloc_quant_table((jpeg_common_struct *)cinfo);
        *v16 = v17;
      }
      v18 = jpeg_natural_order;
      do
      {
        if ( v15 )
        {
          if ( !v10 )
          {
            if ( !src->fill_input_buffer(cinfo) )
              return 0;
            v11 = src->next_input_byte;
            v10 = src->bytes_in_buffer;
          }
          v19 = *v11++;
          if ( !--v10 )
          {
            if ( !src->fill_input_buffer(cinfo) )
              return 0;
            v11 = src->next_input_byte;
            v10 = src->bytes_in_buffer;
          }
          v20 = *v11 + (v19 << 8);
        }
        else
        {
          if ( !v10 )
          {
            if ( !src->fill_input_buffer(cinfo) )
              return 0;
            v11 = src->next_input_byte;
            v10 = src->bytes_in_buffer;
          }
          v20 = *v11;
        }
        v21 = *v18;
        ++v11;
        ++v18;
        --v10;
        v17->quantval[v21] = v20;
      }
      while ( (__int64)v18 < (__int64)&jpeg_natural_order[64] );
      if ( cinfo->err->trace_level >= 2 )
      {
        v22 = &v17->quantval[2];
        v23 = 8i64;
        do
        {
          err = cinfo->err;
          err->msg_parm.i[0] = *(v22 - 2);
          err->msg_parm.i[1] = *(v22 - 1);
          err->msg_parm.i[2] = *v22;
          err->msg_parm.i[3] = v22[1];
          err->msg_parm.i[4] = v22[2];
          err->msg_parm.i[5] = v22[3];
          err->msg_parm.i[6] = v22[4];
          err->msg_parm.i[7] = v22[5];
          cinfo->err->msg_code = 93;
          cinfo->err->emit_message((jpeg_common_struct *)cinfo, 2);
          v22 += 8;
          --v23;
        }
        while ( v23 );
      }
      v25 = -129;
      if ( !v15 )
        v25 = -65;
      v9 = v27 + v25;
    }
    while ( v9 > 0 );
    v12 = v9 == 0;
  }
  if ( !v12 )
  {
    cinfo->err->msg_code = 11;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  src->next_input_byte = v11;
  result = 1;
  src->bytes_in_buffer = v10;
  return result;
}

/*
==============
get_interesting_appn
==============
*/
unsigned __int8 get_interesting_appn(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v5; 
  const unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  const unsigned __int8 *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  int v15; 
  unsigned __int8 data[16]; 

  src = cinfo->src;
  bytes_in_buffer = src->bytes_in_buffer;
  next_input_byte = src->next_input_byte;
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v5 = *next_input_byte;
  v6 = next_input_byte + 1;
  v7 = v5 << 8;
  v8 = bytes_in_buffer - 1;
  if ( v8 )
    goto LABEL_7;
  if ( !src->fill_input_buffer(cinfo) )
    return 0;
  v6 = src->next_input_byte;
  v8 = src->bytes_in_buffer;
LABEL_7:
  v9 = *v6 + v7 - 2;
  v10 = v8 - 1;
  v11 = v6 + 1;
  v12 = 0;
  if ( v9 >= 14 )
  {
    v13 = 14;
    goto LABEL_12;
  }
  v13 = 0;
  if ( v9 > 0 )
    v13 = v9;
  if ( v13 )
  {
LABEL_12:
    v14 = data;
    do
    {
      if ( !v10 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v11 = src->next_input_byte;
        v10 = src->bytes_in_buffer;
      }
      --v10;
      *v14++ = *v11++;
      ++v12;
    }
    while ( v12 < v13 );
  }
  v15 = v9 - v13;
  if ( cinfo->unread_marker == 224 )
  {
    examine_app0(cinfo, data, v13, v15);
  }
  else if ( cinfo->unread_marker == 238 )
  {
    examine_app14(cinfo, data, v13, v15);
  }
  else
  {
    cinfo->err->msg_code = 68;
    cinfo->err->msg_parm.i[0] = cinfo->unread_marker;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  src->next_input_byte = v11;
  src->bytes_in_buffer = v10;
  if ( v15 > 0 )
    cinfo->src->skip_input_data(cinfo, v15);
  return 1;
}

/*
==============
get_sof
==============
*/
unsigned __int8 get_sof(jpeg_decompress_struct *cinfo, unsigned __int8 is_prog, unsigned __int8 is_arith)
{
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v7; 
  const unsigned __int8 *v8; 
  int v9; 
  unsigned __int64 v10; 
  int v11; 
  const unsigned __int8 *v12; 
  int v13; 
  unsigned __int64 v14; 
  int v15; 
  const unsigned __int8 *v16; 
  unsigned __int64 v17; 
  int v18; 
  const unsigned __int8 *v19; 
  unsigned int image_height; 
  unsigned __int64 v21; 
  int v22; 
  const unsigned __int8 *v23; 
  unsigned __int64 v24; 
  int v25; 
  const unsigned __int8 *v26; 
  unsigned int image_width; 
  unsigned __int64 v28; 
  int v29; 
  const unsigned __int8 *v30; 
  unsigned __int64 v31; 
  jpeg_error_mgr *err; 
  unsigned __int64 v33; 
  const unsigned __int8 *v34; 
  int v35; 
  int num_components; 
  jpeg_component_info *comp_info; 
  int v38; 
  int *p_h_samp_factor; 
  int v40; 
  const unsigned __int8 *v41; 
  unsigned __int64 v42; 
  unsigned int v43; 
  const unsigned __int8 *v44; 
  unsigned __int64 v45; 
  jpeg_error_mgr *v46; 
  unsigned __int8 result; 

  src = cinfo->src;
  bytes_in_buffer = src->bytes_in_buffer;
  next_input_byte = src->next_input_byte;
  cinfo->progressive_mode = is_prog;
  cinfo->arith_code = is_arith;
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v7 = *next_input_byte;
  v8 = next_input_byte + 1;
  v9 = v7 << 8;
  v10 = bytes_in_buffer - 1;
  if ( !v10 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v8 = src->next_input_byte;
    v10 = src->bytes_in_buffer;
  }
  v11 = *v8;
  v12 = v8 + 1;
  v13 = v11 + v9;
  v14 = v10 - 1;
  if ( !v14 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v12 = src->next_input_byte;
    v14 = src->bytes_in_buffer;
  }
  v15 = *v12;
  v16 = v12 + 1;
  cinfo->data_precision = v15;
  v17 = v14 - 1;
  if ( !v17 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v16 = src->next_input_byte;
    v17 = src->bytes_in_buffer;
  }
  v18 = *v16;
  v19 = v16 + 1;
  image_height = v18 << 8;
  cinfo->image_height = image_height;
  v21 = v17 - 1;
  if ( !v21 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v19 = src->next_input_byte;
    v21 = src->bytes_in_buffer;
    image_height = cinfo->image_height;
  }
  v22 = *v19;
  v23 = v19 + 1;
  cinfo->image_height = image_height + v22;
  v24 = v21 - 1;
  if ( !v24 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v23 = src->next_input_byte;
    v24 = src->bytes_in_buffer;
  }
  v25 = *v23;
  v26 = v23 + 1;
  image_width = v25 << 8;
  cinfo->image_width = image_width;
  v28 = v24 - 1;
  if ( !v28 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v26 = src->next_input_byte;
    v28 = src->bytes_in_buffer;
    image_width = cinfo->image_width;
  }
  v29 = *v26;
  v30 = v26 + 1;
  cinfo->image_width = image_width + v29;
  v31 = v28 - 1;
  if ( !v31 )
  {
    if ( src->fill_input_buffer(cinfo) )
    {
      v30 = src->next_input_byte;
      v31 = src->bytes_in_buffer;
      goto LABEL_25;
    }
    return 0;
  }
LABEL_25:
  err = cinfo->err;
  v33 = v31 - 1;
  cinfo->num_components = *v30;
  v34 = v30 + 1;
  v35 = v13 - 8;
  err->msg_parm.i[0] = cinfo->unread_marker;
  err->msg_parm.i[1] = cinfo->image_width;
  err->msg_parm.i[2] = cinfo->image_height;
  err->msg_parm.i[3] = cinfo->num_components;
  cinfo->err->msg_code = 100;
  cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  if ( cinfo->marker->saw_SOF )
  {
    cinfo->err->msg_code = 58;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( !cinfo->image_height || !cinfo->image_width || (num_components = cinfo->num_components, num_components <= 0) )
  {
    cinfo->err->msg_code = 32;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    num_components = cinfo->num_components;
  }
  if ( v35 != 3 * num_components )
  {
    cinfo->err->msg_code = 11;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    num_components = cinfo->num_components;
  }
  comp_info = cinfo->comp_info;
  if ( !comp_info )
  {
    comp_info = (jpeg_component_info *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 96i64 * num_components);
    num_components = cinfo->num_components;
    cinfo->comp_info = comp_info;
  }
  v38 = 0;
  if ( num_components > 0 )
  {
    p_h_samp_factor = &comp_info->h_samp_factor;
    do
    {
      *(p_h_samp_factor - 1) = v38;
      if ( !v33 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v34 = src->next_input_byte;
        v33 = src->bytes_in_buffer;
      }
      v40 = *v34;
      v41 = v34 + 1;
      *(p_h_samp_factor - 2) = v40;
      v42 = v33 - 1;
      if ( !v42 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v41 = src->next_input_byte;
        v42 = src->bytes_in_buffer;
      }
      v43 = *v41;
      v44 = v41 + 1;
      *p_h_samp_factor = v43 >> 4;
      p_h_samp_factor[1] = v43 & 0xF;
      v45 = v42 - 1;
      if ( !v45 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v44 = src->next_input_byte;
        v45 = src->bytes_in_buffer;
      }
      p_h_samp_factor[2] = *v44;
      v33 = v45 - 1;
      v34 = v44 + 1;
      v46 = cinfo->err;
      v46->msg_parm.i[0] = *(p_h_samp_factor - 2);
      v46->msg_parm.i[1] = *p_h_samp_factor;
      v46->msg_parm.i[2] = p_h_samp_factor[1];
      v46->msg_parm.i[3] = p_h_samp_factor[2];
      cinfo->err->msg_code = 101;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
      ++v38;
      p_h_samp_factor += 24;
    }
    while ( v38 < cinfo->num_components );
  }
  cinfo->marker->saw_SOF = 1;
  result = 1;
  src->next_input_byte = v34;
  src->bytes_in_buffer = v33;
  return result;
}

/*
==============
get_sos
==============
*/
unsigned __int8 get_sos(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  const unsigned __int8 *next_input_byte; 
  unsigned __int64 bytes_in_buffer; 
  int v5; 
  const unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  int v9; 
  const unsigned __int8 *v10; 
  int v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  const unsigned __int8 *v15; 
  __int64 v16; 
  int v17; 
  const unsigned __int8 *v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  int num_components; 
  jpeg_component_info *comp_info; 
  int v23; 
  jpeg_error_mgr *err; 
  int v25; 
  const unsigned __int8 *v26; 
  unsigned __int64 v27; 
  int v28; 
  const unsigned __int8 *v29; 
  unsigned __int64 v30; 
  unsigned int v32; 
  jpeg_error_mgr *v33; 
  jpeg_component_info **cur_comp_info; 
  __int64 v35; 

  src = cinfo->src;
  next_input_byte = src->next_input_byte;
  bytes_in_buffer = src->bytes_in_buffer;
  if ( !cinfo->marker->saw_SOF )
  {
    cinfo->err->msg_code = 62;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( !bytes_in_buffer )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v5 = *next_input_byte;
  v6 = next_input_byte + 1;
  v7 = v5 << 8;
  v8 = bytes_in_buffer - 1;
  if ( !v8 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v6 = src->next_input_byte;
    v8 = src->bytes_in_buffer;
  }
  v9 = *v6;
  v10 = v6 + 1;
  v11 = v7 + v9;
  v12 = v8 - 1;
  if ( !v12 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v10 = src->next_input_byte;
    v12 = src->bytes_in_buffer;
  }
  v13 = *v10;
  v14 = v12 - 1;
  v15 = v10 + 1;
  cinfo->err->msg_code = 103;
  cinfo->err->msg_parm.i[0] = v13;
  cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  if ( v11 != 2 * (_DWORD)v13 + 6 || (unsigned __int8)(v13 - 1) > 3u )
  {
    cinfo->err->msg_code = 11;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  cinfo->comps_in_scan = v13;
  v35 = v13;
  if ( (_BYTE)v13 )
  {
    v16 = 0i64;
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      if ( !v14 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v15 = src->next_input_byte;
        v14 = src->bytes_in_buffer;
      }
      v17 = *v15;
      v18 = v15 + 1;
      v19 = v14 - 1;
      if ( !v19 )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        v18 = src->next_input_byte;
        v19 = src->bytes_in_buffer;
      }
      v20 = *v18;
      v14 = v19 - 1;
      num_components = cinfo->num_components;
      v15 = v18 + 1;
      comp_info = cinfo->comp_info;
      v23 = 0;
      if ( num_components <= 0 )
      {
LABEL_26:
        cinfo->err->msg_code = 5;
        cinfo->err->msg_parm.i[0] = v17;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      else
      {
        while ( v17 != comp_info->component_id )
        {
          ++v23;
          ++comp_info;
          if ( v23 >= num_components )
            goto LABEL_26;
        }
      }
      *cur_comp_info = comp_info;
      comp_info->dc_tbl_no = v20 >> 4;
      comp_info->ac_tbl_no = v20 & 0xF;
      err = cinfo->err;
      err->msg_parm.i[0] = v17;
      err->msg_parm.i[1] = comp_info->dc_tbl_no;
      err->msg_parm.i[2] = comp_info->ac_tbl_no;
      cinfo->err->msg_code = 104;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
      ++cur_comp_info;
      ++v16;
    }
    while ( v16 < v35 );
  }
  if ( !v14 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v15 = src->next_input_byte;
    v14 = src->bytes_in_buffer;
  }
  v25 = *v15;
  v26 = v15 + 1;
  cinfo->Ss = v25;
  v27 = v14 - 1;
  if ( v27 )
    goto LABEL_34;
  if ( !src->fill_input_buffer(cinfo) )
    return 0;
  v26 = src->next_input_byte;
  v27 = src->bytes_in_buffer;
LABEL_34:
  v28 = *v26;
  v29 = v26 + 1;
  cinfo->Se = v28;
  v30 = v27 - 1;
  if ( !v30 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v29 = src->next_input_byte;
    v30 = src->bytes_in_buffer;
  }
  v32 = *v29;
  cinfo->Al = v32 & 0xF;
  v33 = cinfo->err;
  cinfo->Ah = v32 >> 4;
  v33->msg_parm.i[0] = cinfo->Ss;
  v33->msg_parm.i[1] = cinfo->Se;
  v33->msg_parm.i[2] = cinfo->Ah;
  v33->msg_parm.i[3] = cinfo->Al;
  cinfo->err->msg_code = 105;
  cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  cinfo->marker->next_restart_num = 0;
  ++cinfo->input_scan_number;
  src->next_input_byte = v29 + 1;
  src->bytes_in_buffer = v30 - 1;
  return 1;
}

/*
==============
jinit_marker_reader
==============
*/
void jinit_marker_reader(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 
  jpeg_marker_reader *marker; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 0i64, 264i64);
  cinfo->marker = (jpeg_marker_reader *)v2;
  *(_QWORD *)v2 = reset_marker_reader;
  *(_QWORD *)(v2 + 8) = read_markers;
  *(_QWORD *)(v2 + 16) = read_restart_marker;
  *(_QWORD *)(v2 + 40) = skip_variable;
  *(_QWORD *)(v2 + 176) = 0i64;
  *(_QWORD *)(v2 + 56) = skip_variable;
  *(_QWORD *)(v2 + 184) = 0i64;
  *(_QWORD *)(v2 + 64) = skip_variable;
  *(_QWORD *)(v2 + 72) = skip_variable;
  *(_QWORD *)(v2 + 192) = 0i64;
  *(_QWORD *)(v2 + 80) = skip_variable;
  *(_QWORD *)(v2 + 88) = skip_variable;
  *(_QWORD *)(v2 + 200) = 0i64;
  *(_QWORD *)(v2 + 96) = skip_variable;
  *(_QWORD *)(v2 + 104) = skip_variable;
  *(_QWORD *)(v2 + 208) = 0i64;
  *(_QWORD *)(v2 + 112) = skip_variable;
  *(_QWORD *)(v2 + 120) = skip_variable;
  *(_QWORD *)(v2 + 216) = 0i64;
  *(_QWORD *)(v2 + 128) = skip_variable;
  *(_QWORD *)(v2 + 136) = skip_variable;
  *(_QWORD *)(v2 + 224) = 0i64;
  *(_QWORD *)(v2 + 144) = skip_variable;
  *(_QWORD *)(v2 + 152) = skip_variable;
  *(_QWORD *)(v2 + 232) = 0i64;
  *(_QWORD *)(v2 + 168) = skip_variable;
  *(_DWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 48) = get_interesting_appn;
  *(_QWORD *)(v2 + 160) = get_interesting_appn;
  marker = cinfo->marker;
  cinfo->comp_info = NULL;
  cinfo->input_scan_number = 0;
  cinfo->unread_marker = 0;
  *(_WORD *)&marker->saw_SOI = 0;
  marker->discarded_bytes = 0;
  marker[6].read_markers = NULL;
}

/*
==============
jpeg_resync_to_restart
==============
*/
unsigned __int8 jpeg_resync_to_restart(jpeg_decompress_struct *cinfo, int desired)
{
  char v2; 
  int unread_marker; 
  int v5; 
  int v6; 
  int v7; 

  v2 = desired;
  unread_marker = cinfo->unread_marker;
  cinfo->err->msg_code = 121;
  cinfo->err->msg_parm.i[0] = unread_marker;
  cinfo->err->msg_parm.i[1] = desired;
  cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
  while ( 1 )
  {
    if ( unread_marker < 192 )
    {
LABEL_3:
      v5 = 2;
      goto LABEL_11;
    }
    if ( (unsigned int)(unread_marker - 208) > 7 || unread_marker == ((v2 + 1) & 7) + 208 || unread_marker == ((v2 + 2) & 7) + 208 )
    {
      v5 = 3;
    }
    else
    {
      if ( unread_marker == ((v2 - 1) & 7) + 208 || unread_marker == ((v2 - 2) & 7) + 208 )
        goto LABEL_3;
      v5 = 1;
    }
LABEL_11:
    cinfo->err->msg_code = 97;
    cinfo->err->msg_parm.i[0] = unread_marker;
    cinfo->err->msg_parm.i[1] = v5;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 4);
    v6 = v5 - 1;
    if ( !v6 )
      break;
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        return 1;
    }
    else
    {
      if ( !next_marker(cinfo) )
        return 0;
      unread_marker = cinfo->unread_marker;
    }
  }
  cinfo->unread_marker = 0;
  return 1;
}

/*
==============
jpeg_save_markers
==============
*/
void jpeg_save_markers(jpeg_decompress_struct *cinfo, int marker_code, unsigned int length_limit)
{
  jpeg_marker_reader *marker; 
  unsigned __int8 (__fastcall *v5)(jpeg_decompress_struct *); 

  marker = cinfo->marker;
  if ( (int)length_limit > cinfo->mem->max_alloc_chunk - 32 )
    length_limit = cinfo->mem->max_alloc_chunk - 32;
  if ( length_limit )
  {
    v5 = save_marker;
    if ( marker_code == 224 )
    {
      if ( length_limit < 0xE )
        length_limit = 14;
LABEL_16:
      *((_QWORD *)&marker[-43] + marker_code - 3) = v5;
      *((_DWORD *)&marker[-17] + marker_code - 9) = length_limit;
      return;
    }
    if ( marker_code == 238 )
    {
      if ( length_limit < 0xC )
        length_limit = 12;
      goto LABEL_16;
    }
  }
  else
  {
    v5 = skip_variable;
    if ( marker_code == 224 || marker_code == 238 )
      v5 = get_interesting_appn;
  }
  if ( marker_code == 254 )
  {
    marker[1].reset_marker_reader = (void (__fastcall *)(jpeg_decompress_struct *))v5;
    LODWORD(marker[4].read_restart_marker) = length_limit;
    return;
  }
  if ( (unsigned int)(marker_code - 224) <= 0xF )
    goto LABEL_16;
  cinfo->err->msg_code = 68;
  cinfo->err->msg_parm.i[0] = marker_code;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_set_marker_processor
==============
*/
void jpeg_set_marker_processor(jpeg_decompress_struct *cinfo, __int64 marker_code, unsigned __int8 (*routine)(jpeg_decompress_struct *))
{
  jpeg_marker_reader *marker; 

  marker = cinfo->marker;
  if ( (_DWORD)marker_code == 254 )
  {
    marker[1].reset_marker_reader = (void (__fastcall *)(jpeg_decompress_struct *))routine;
  }
  else if ( (unsigned int)(marker_code - 224) > 0xF )
  {
    cinfo->err->msg_code = 68;
    cinfo->err->msg_parm.i[0] = marker_code;
    ((void (__fastcall *)(jpeg_decompress_struct *, __int64, unsigned __int8 (__fastcall *)(jpeg_decompress_struct *), jpeg_marker_reader *))cinfo->err->error_exit)(cinfo, marker_code, routine, marker);
  }
  else
  {
    *((_QWORD *)&marker[-43] + (int)marker_code - 3) = routine;
  }
}

/*
==============
next_marker
==============
*/
unsigned __int8 next_marker(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  const unsigned __int8 *next_input_byte; 
  unsigned __int64 i; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  int v7; 
  jpeg_marker_reader *marker; 
  unsigned int discarded_bytes; 
  unsigned __int8 result; 

  src = cinfo->src;
  next_input_byte = src->next_input_byte;
  for ( i = src->bytes_in_buffer; ; src->bytes_in_buffer = i )
  {
    if ( !i )
    {
      if ( !src->fill_input_buffer(cinfo) )
        return 0;
      next_input_byte = src->next_input_byte;
      i = src->bytes_in_buffer;
    }
    v5 = *next_input_byte;
    --i;
    ++next_input_byte;
    if ( v5 == 0xFF )
      goto LABEL_10;
    do
    {
      ++cinfo->marker->discarded_bytes;
      src->next_input_byte = next_input_byte;
      src->bytes_in_buffer = i;
      if ( !i )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        next_input_byte = src->next_input_byte;
        i = src->bytes_in_buffer;
      }
      v6 = *next_input_byte;
      --i;
      ++next_input_byte;
    }
    while ( v6 != 0xFF );
    do
    {
LABEL_10:
      if ( !i )
      {
        if ( !src->fill_input_buffer(cinfo) )
          return 0;
        next_input_byte = src->next_input_byte;
        i = src->bytes_in_buffer;
      }
      v7 = *next_input_byte;
      --i;
      ++next_input_byte;
    }
    while ( v7 == 255 );
    marker = cinfo->marker;
    discarded_bytes = marker->discarded_bytes;
    if ( v7 )
      break;
    marker->discarded_bytes = discarded_bytes + 2;
    src->next_input_byte = next_input_byte;
  }
  if ( discarded_bytes )
  {
    cinfo->err->msg_code = 116;
    cinfo->err->msg_parm.i[0] = cinfo->marker->discarded_bytes;
    cinfo->err->msg_parm.i[1] = v7;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
    cinfo->marker->discarded_bytes = 0;
  }
  cinfo->unread_marker = v7;
  result = 1;
  src->next_input_byte = next_input_byte;
  src->bytes_in_buffer = i;
  return result;
}

/*
==============
read_markers
==============
*/
__int64 read_markers(jpeg_decompress_struct *cinfo)
{
  int unread_marker; 
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v6; 
  const unsigned __int8 *v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  const unsigned __int8 *v11; 
  __int64 v12; 
  jpeg_marker_reader *marker; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  unsigned __int8 dht; 
  __int64 result; 
  jpeg_source_mgr *v18; 
  unsigned __int64 v19; 
  const unsigned __int8 *v20; 
  int v21; 
  const unsigned __int8 *v22; 
  int v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  int v26; 
  const unsigned __int8 *v27; 
  int v28; 
  const unsigned __int8 *v29; 
  int v30; 
  unsigned __int64 v31; 
  unsigned int v32; 

  unread_marker = cinfo->unread_marker;
  while ( 1 )
  {
    if ( unread_marker )
      goto LABEL_15;
    if ( cinfo->marker->saw_SOI )
      break;
    src = cinfo->src;
    bytes_in_buffer = src->bytes_in_buffer;
    next_input_byte = src->next_input_byte;
    if ( !bytes_in_buffer )
    {
      if ( !src->fill_input_buffer(cinfo) )
        return 0i64;
      next_input_byte = src->next_input_byte;
      bytes_in_buffer = src->bytes_in_buffer;
    }
    v6 = *next_input_byte;
    v7 = next_input_byte + 1;
    v8 = bytes_in_buffer - 1;
    if ( !v8 )
    {
      if ( !src->fill_input_buffer(cinfo) )
        return 0i64;
      v7 = src->next_input_byte;
      v8 = src->bytes_in_buffer;
    }
    v9 = *v7;
    v10 = v8 - 1;
    v11 = v7 + 1;
    if ( v6 != 255 || v9 != 216 )
    {
      cinfo->err->msg_code = 53;
      cinfo->err->msg_parm.i[0] = v6;
      cinfo->err->msg_parm.i[1] = v9;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    cinfo->unread_marker = v9;
    src->next_input_byte = v11;
    src->bytes_in_buffer = v10;
LABEL_15:
    v12 = cinfo->unread_marker;
    switch ( (int)v12 )
    {
      case 1:
      case 208:
      case 209:
      case 210:
      case 211:
      case 212:
      case 213:
      case 214:
      case 215:
        cinfo->err->msg_code = 92;
        cinfo->err->msg_parm.i[0] = cinfo->unread_marker;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
        unread_marker = 0;
        cinfo->unread_marker = 0;
        continue;
      case 192:
      case 193:
        v14 = 0;
        goto LABEL_20;
      case 194:
        v14 = 0;
        v15 = 1;
        goto LABEL_21;
      case 195:
      case 197:
      case 198:
      case 199:
      case 200:
      case 203:
      case 205:
      case 206:
      case 207:
        cinfo->err->msg_code = 60;
        goto LABEL_50;
      case 196:
        dht = get_dht(cinfo);
        goto LABEL_22;
      case 201:
        v14 = 1;
LABEL_20:
        v15 = 0;
        goto LABEL_21;
      case 202:
        v14 = 1;
        v15 = 1;
LABEL_21:
        dht = get_sof(cinfo, v15, v14);
        goto LABEL_22;
      case 204:
      case 220:
        dht = skip_variable(cinfo);
        goto LABEL_22;
      case 216:
        cinfo->err->msg_code = 102;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
        if ( cinfo->marker->saw_SOI )
        {
          cinfo->err->msg_code = 61;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        *(_QWORD *)cinfo->arith_dc_L = 0i64;
        *(_DWORD *)cinfo->arith_dc_U = 16843009;
        *(_DWORD *)cinfo->arith_ac_K = 84215045;
        *(_DWORD *)&cinfo->arith_dc_U[4] = 16843009;
        *(_DWORD *)&cinfo->arith_ac_K[4] = 84215045;
        *(_QWORD *)&cinfo->arith_dc_L[8] = 0i64;
        *(_DWORD *)&cinfo->arith_dc_U[8] = 16843009;
        *(_DWORD *)&cinfo->arith_ac_K[8] = 84215045;
        *(_DWORD *)&cinfo->arith_dc_U[12] = 16843009;
        *(_DWORD *)&cinfo->arith_ac_K[12] = 84215045;
        marker = cinfo->marker;
        cinfo->restart_interval = 0;
        cinfo->jpeg_color_space = JCS_UNKNOWN;
        *(_WORD *)&cinfo->Adobe_transform = 0;
        *(_WORD *)&cinfo->saw_JFIF_marker = 256;
        *(_DWORD *)&cinfo->JFIF_minor_version = 65537;
        cinfo->Y_density = 1;
        cinfo->saw_Adobe_marker = 0;
        marker->saw_SOI = 1;
        unread_marker = 0;
        cinfo->unread_marker = 0;
        continue;
      case 217:
        cinfo->err->msg_code = 85;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
        result = 2i64;
        goto LABEL_55;
      case 218:
        if ( !get_sos(cinfo) )
          return 0i64;
        result = 1i64;
LABEL_55:
        cinfo->unread_marker = 0;
        return result;
      case 219:
        dht = get_dqt(cinfo);
        goto LABEL_22;
      case 221:
        v18 = cinfo->src;
        v19 = v18->bytes_in_buffer;
        v20 = v18->next_input_byte;
        if ( v19 )
          goto LABEL_34;
        if ( !v18->fill_input_buffer(cinfo) )
          return 0i64;
        v20 = v18->next_input_byte;
        v19 = v18->bytes_in_buffer;
LABEL_34:
        v21 = *v20;
        v22 = v20 + 1;
        v23 = v21 << 8;
        v24 = v19 - 1;
        if ( v24 )
          goto LABEL_37;
        if ( !v18->fill_input_buffer(cinfo) )
          return 0i64;
        v22 = v18->next_input_byte;
        v24 = v18->bytes_in_buffer;
LABEL_37:
        v25 = v24 - 1;
        v26 = v23 + *v22;
        v27 = v22 + 1;
        if ( v26 != 4 )
        {
          cinfo->err->msg_code = 11;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        if ( v25 )
          goto LABEL_42;
        if ( !v18->fill_input_buffer(cinfo) )
          return 0i64;
        v27 = v18->next_input_byte;
        v25 = v18->bytes_in_buffer;
LABEL_42:
        v28 = *v27;
        v29 = v27 + 1;
        v30 = v28 << 8;
        v31 = v25 - 1;
        if ( v31 )
          goto LABEL_45;
        if ( !v18->fill_input_buffer(cinfo) )
          return 0i64;
        v29 = v18->next_input_byte;
        v31 = v18->bytes_in_buffer;
LABEL_45:
        v32 = *v29 + v30;
        cinfo->err->msg_code = 82;
        cinfo->err->msg_parm.i[0] = v32;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
        cinfo->restart_interval = v32;
        v18->next_input_byte = v29 + 1;
        v18->bytes_in_buffer = v31 - 1;
        unread_marker = 0;
        cinfo->unread_marker = 0;
        break;
      case 224:
      case 225:
      case 226:
      case 227:
      case 228:
      case 229:
      case 230:
      case 231:
      case 232:
      case 233:
      case 234:
      case 235:
      case 236:
      case 237:
      case 238:
      case 239:
        dht = (*((__int64 (__fastcall **)(jpeg_decompress_struct *))&cinfo->marker[-43] + v12 - 3))(cinfo);
        goto LABEL_22;
      case 254:
        dht = ((__int64 (__fastcall *)(jpeg_decompress_struct *))cinfo->marker[1].reset_marker_reader)(cinfo);
LABEL_22:
        if ( !dht )
          return 0i64;
        goto LABEL_51;
      default:
        cinfo->err->msg_code = 68;
LABEL_50:
        cinfo->err->msg_parm.i[0] = cinfo->unread_marker;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
LABEL_51:
        cinfo->unread_marker = 0;
        unread_marker = 0;
        continue;
    }
  }
  if ( next_marker(cinfo) )
    goto LABEL_15;
  return 0i64;
}

/*
==============
read_restart_marker
==============
*/
unsigned __int8 read_restart_marker(jpeg_decompress_struct *cinfo)
{
  if ( cinfo->unread_marker || next_marker(cinfo) )
  {
    if ( cinfo->unread_marker == cinfo->marker->next_restart_num + 208 )
    {
      cinfo->err->msg_code = 98;
      cinfo->err->msg_parm.i[0] = cinfo->marker->next_restart_num;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 3);
      cinfo->unread_marker = 0;
LABEL_5:
      cinfo->marker->next_restart_num = ((unsigned __int8)cinfo->marker->next_restart_num + 1) & 7;
      return 1;
    }
    if ( ((unsigned __int8 (__fastcall *)(jpeg_decompress_struct *))cinfo->src->resync_to_restart)(cinfo) )
      goto LABEL_5;
  }
  return 0;
}

/*
==============
reset_marker_reader
==============
*/
void reset_marker_reader(jpeg_decompress_struct *cinfo)
{
  jpeg_marker_reader *marker; 

  marker = cinfo->marker;
  cinfo->comp_info = NULL;
  cinfo->input_scan_number = 0;
  cinfo->unread_marker = 0;
  *(_WORD *)&marker->saw_SOI = 0;
  marker->discarded_bytes = 0;
  marker[6].read_markers = NULL;
}

/*
==============
save_marker
==============
*/
unsigned __int8 save_marker(jpeg_decompress_struct *cinfo)
{
  jpeg_marker_reader *marker; 
  unsigned int read_restart_marker; 
  jpeg_source_mgr *src; 
  int v5; 
  jpeg_marker_struct *read_markers; 
  const unsigned __int8 *next_input_byte; 
  unsigned __int64 bytes_in_buffer; 
  int v9; 
  const unsigned __int8 *v10; 
  int v11; 
  unsigned __int64 v12; 
  int v13; 
  __int64 unread_marker; 
  unsigned int data_length; 
  char *v16; 
  unsigned __int8 *data; 
  jpeg_marker_struct *marker_list; 
  jpeg_marker_struct *i; 
  jpeg_marker_reader *v21; 
  jpeg_marker_struct *v22; 

  marker = cinfo->marker;
  read_restart_marker = 0;
  src = cinfo->src;
  v21 = marker;
  v5 = 0;
  read_markers = (jpeg_marker_struct *)marker[6].read_markers;
  next_input_byte = src->next_input_byte;
  bytes_in_buffer = src->bytes_in_buffer;
  v22 = read_markers;
  if ( read_markers )
  {
    read_restart_marker = (unsigned int)marker[6].read_restart_marker;
    data_length = read_markers->data_length;
    data = &read_markers->data[read_restart_marker];
    goto LABEL_17;
  }
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v9 = *next_input_byte;
  v10 = next_input_byte + 1;
  v11 = v9 << 8;
  v12 = bytes_in_buffer - 1;
  if ( v12 )
    goto LABEL_8;
  if ( !src->fill_input_buffer(cinfo) )
    return 0;
  v10 = src->next_input_byte;
  v12 = src->bytes_in_buffer;
LABEL_8:
  bytes_in_buffer = v12 - 1;
  v13 = *v10 + v11;
  next_input_byte = v10 + 1;
  v5 = v13 - 2;
  if ( v5 < 0 )
  {
    marker = v21;
    data_length = 0;
    data = NULL;
  }
  else
  {
    unread_marker = cinfo->unread_marker;
    if ( (_DWORD)unread_marker == 254 )
      data_length = (unsigned int)v21[4].read_restart_marker;
    else
      data_length = *((_DWORD *)&v21[-17] + unread_marker - 9);
    if ( v5 < data_length )
      data_length = v5;
    v16 = (char *)cinfo->mem->alloc_large(cinfo, 1i64, data_length + 32i64);
    marker = v21;
    v22 = (jpeg_marker_struct *)v16;
    *(_QWORD *)v16 = 0i64;
    data = (unsigned __int8 *)(v16 + 32);
    v16[8] = cinfo->unread_marker;
    *((_DWORD *)v16 + 3) = v5;
    *((_DWORD *)v16 + 4) = data_length;
    *((_QWORD *)v16 + 3) = v16 + 32;
    v21[6].read_markers = (int (__fastcall *)(jpeg_decompress_struct *))v16;
    LODWORD(v21[6].read_restart_marker) = 0;
  }
LABEL_17:
  if ( read_restart_marker < data_length )
  {
LABEL_18:
    src->next_input_byte = next_input_byte;
    src->bytes_in_buffer = bytes_in_buffer;
    LODWORD(marker[6].read_restart_marker) = read_restart_marker;
    if ( !bytes_in_buffer )
    {
      if ( src->fill_input_buffer(cinfo) )
      {
        next_input_byte = src->next_input_byte;
        bytes_in_buffer = src->bytes_in_buffer;
        marker = v21;
        goto LABEL_21;
      }
      return 0;
    }
    while ( 1 )
    {
      --bytes_in_buffer;
      *data++ = *next_input_byte++;
      if ( ++read_restart_marker >= data_length )
        break;
LABEL_21:
      if ( !bytes_in_buffer )
        goto LABEL_18;
    }
  }
  if ( v22 )
  {
    marker_list = cinfo->marker_list;
    if ( marker_list )
    {
      for ( i = marker_list->next; i; i = i->next )
        marker_list = i;
      marker_list->next = v22;
    }
    else
    {
      cinfo->marker_list = v22;
    }
    data = v22->data;
    v5 = v22->original_length - data_length;
  }
  marker[6].read_markers = NULL;
  if ( cinfo->unread_marker == 224 )
  {
    examine_app0(cinfo, data, data_length, v5);
  }
  else if ( cinfo->unread_marker == 238 )
  {
    examine_app14(cinfo, data, data_length, v5);
  }
  else
  {
    cinfo->err->msg_code = 91;
    cinfo->err->msg_parm.i[0] = cinfo->unread_marker;
    cinfo->err->msg_parm.i[1] = data_length + v5;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  }
  src->next_input_byte = next_input_byte;
  src->bytes_in_buffer = bytes_in_buffer;
  if ( v5 > 0 )
    cinfo->src->skip_input_data(cinfo, v5);
  return 1;
}

/*
==============
skip_variable
==============
*/
unsigned __int8 skip_variable(jpeg_decompress_struct *cinfo)
{
  jpeg_source_mgr *src; 
  unsigned __int64 bytes_in_buffer; 
  const unsigned __int8 *next_input_byte; 
  int v5; 
  const unsigned __int8 *v6; 
  int v7; 
  unsigned __int64 v8; 
  int v10; 

  src = cinfo->src;
  bytes_in_buffer = src->bytes_in_buffer;
  next_input_byte = src->next_input_byte;
  if ( !bytes_in_buffer )
  {
    if ( !((unsigned __int8 (*)(void))src->fill_input_buffer)() )
      return 0;
    next_input_byte = src->next_input_byte;
    bytes_in_buffer = src->bytes_in_buffer;
  }
  v5 = *next_input_byte;
  v6 = next_input_byte + 1;
  v7 = v5 << 8;
  v8 = bytes_in_buffer - 1;
  if ( !v8 )
  {
    if ( !src->fill_input_buffer(cinfo) )
      return 0;
    v6 = src->next_input_byte;
    v8 = src->bytes_in_buffer;
  }
  v10 = v7 + *v6 - 2;
  cinfo->err->msg_code = 91;
  cinfo->err->msg_parm.i[0] = cinfo->unread_marker;
  cinfo->err->msg_parm.i[1] = v10;
  cinfo->err->emit_message((jpeg_common_struct *)cinfo, 1);
  src->next_input_byte = v6 + 1;
  src->bytes_in_buffer = v8 - 1;
  if ( v10 > 0 )
    cinfo->src->skip_input_data(cinfo, v10);
  return 1;
}

