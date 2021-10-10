/*
==============
decode_mcu
==============
*/
unsigned __int8 decode_mcu(jpeg_decompress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_decoder *entropy; 
  int v3; 
  int v6; 
  unsigned __int8 (__fastcall **p_decode_mcu)(jpeg_decompress_struct *, __int16 (**)[64]); 
  jpeg_source_mgr *src; 
  __int128 v9; 
  int start_pass; 
  int start_pass_high; 
  const unsigned __int8 *next_input_byte; 
  unsigned __int64 bytes_in_buffer; 
  d_derived_tbl **v14; 
  __int64 v15; 
  char *v16; 
  _WORD *v17; 
  d_derived_tbl *v18; 
  d_derived_tbl *v19; 
  int min_bits; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int i; 
  int v36; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  bitread_working_state state; 
  int *MCU_membership; 
  __int64 v45; 
  unsigned __int8 (__fastcall **v46)(jpeg_decompress_struct *, __int16 (**)[64]); 
  char *v47; 
  __int128 v48; 

  entropy = cinfo->entropy;
  v3 = 0;
  if ( cinfo->restart_interval && !LODWORD(entropy[2].start_pass) )
  {
    cinfo->marker->discarded_bytes += SHIDWORD(entropy[1].start_pass) / 8;
    HIDWORD(entropy[1].start_pass) = 0;
    if ( !cinfo->marker->read_restart_marker(cinfo) )
      return 0;
    v6 = 0;
    if ( cinfo->comps_in_scan > 0 )
    {
      p_decode_mcu = &entropy[1].decode_mcu;
      do
      {
        *(_DWORD *)p_decode_mcu = 0;
        p_decode_mcu = (unsigned __int8 (__fastcall **)(jpeg_decompress_struct *, __int16 (**)[64]))((char *)p_decode_mcu + 4);
        ++v6;
      }
      while ( v6 < cinfo->comps_in_scan );
    }
    LODWORD(entropy[2].start_pass) = cinfo->restart_interval;
    if ( !cinfo->unread_marker )
      entropy->insufficient_data = 0;
  }
  if ( entropy->insufficient_data )
    goto LABEL_72;
  src = cinfo->src;
  v9 = *(_OWORD *)&entropy[1].decode_mcu;
  start_pass = (int)entropy[1].start_pass;
  start_pass_high = HIDWORD(entropy[1].start_pass);
  next_input_byte = src->next_input_byte;
  bytes_in_buffer = src->bytes_in_buffer;
  state.next_input_byte = src->next_input_byte;
  state.bytes_in_buffer = bytes_in_buffer;
  state.cinfo = cinfo;
  v48 = v9;
  if ( cinfo->blocks_in_MCU <= 0 )
    goto LABEL_71;
  v45 = 0i64;
  MCU_membership = cinfo->MCU_membership;
  v14 = (d_derived_tbl **)&entropy[8].decode_mcu;
  v15 = 0i64;
  v46 = &entropy[8].decode_mcu;
  v16 = (char *)((char *)MCU_data - (char *)entropy - 200);
  v47 = v16;
  do
  {
    v17 = *(d_derived_tbl **)((char *)v14 + (_QWORD)v16);
    v18 = *(v14 - 10);
    v19 = *v14;
    if ( start_pass_high < 8 )
    {
      if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 0) )
        return 0;
      start_pass_high = state.bits_left;
      start_pass = state.get_buffer;
      if ( state.bits_left < 8 )
      {
        min_bits = 1;
$label1:
        v23 = j_jpeg_huff_decode(&state, start_pass, start_pass_high, v18, min_bits);
        if ( v23 < 0 )
          return 0;
        start_pass = state.get_buffer;
        start_pass_high = state.bits_left;
        goto LABEL_21;
      }
    }
    v21 = (unsigned __int8)(start_pass >> (start_pass_high - 8));
    v22 = v18->look_nbits[v21];
    if ( !v22 )
    {
      min_bits = 9;
      goto $label1;
    }
    v23 = v18->look_sym[v21];
    start_pass_high -= v22;
LABEL_21:
    if ( v23 )
    {
      if ( start_pass_high < v23 )
      {
        if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v23) )
          return 0;
        start_pass = state.get_buffer;
        start_pass_high = state.bits_left;
      }
      start_pass_high -= v23;
      v24 = (start_pass >> start_pass_high) & ((1 << v23) - 1);
      if ( v24 >= extend_test[v23] )
        v23 = (start_pass >> start_pass_high) & ((1 << v23) - 1);
      else
        v23 = v24 + extend_offset[v23];
    }
    if ( *(&entropy[11].insufficient_data + v15) )
    {
      v25 = *MCU_membership;
      *((_DWORD *)&v48 + v25) += v23;
      *v17 = *((_DWORD *)&v48 + v25);
    }
    if ( *((_BYTE *)&entropy[12].start_pass + v15 + 2) )
    {
      v26 = 1;
      while ( 1 )
      {
        if ( start_pass_high < 8 )
        {
          if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 0) )
            return 0;
          start_pass_high = state.bits_left;
          start_pass = state.get_buffer;
          if ( state.bits_left < 8 )
            break;
        }
        v28 = (unsigned __int8)(start_pass >> (start_pass_high - 8));
        v29 = v19->look_nbits[v28];
        if ( !v29 )
        {
          v27 = 9;
          goto $label2;
        }
        v30 = v19->look_sym[v28];
        start_pass_high -= v29;
LABEL_41:
        v31 = v30 >> 4;
        v32 = v30 & 0xF;
        if ( v32 )
        {
          v33 = v31 + v26;
          if ( start_pass_high < v32 )
          {
            if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v32) )
              return 0;
            start_pass = state.get_buffer;
            start_pass_high = state.bits_left;
          }
          start_pass_high -= v32;
          v34 = (start_pass >> start_pass_high) & ((1 << v32) - 1);
          if ( v34 < extend_test[v32] )
            v34 += extend_offset[v32];
          v17[jpeg_natural_order[v33]] = v34;
        }
        else
        {
          if ( v31 != 15 )
            goto LABEL_69;
          v33 = v26 + 15;
        }
        v26 = v33 + 1;
        if ( v26 >= 64 )
          goto LABEL_69;
      }
      v27 = 1;
$label2:
      v30 = j_jpeg_huff_decode(&state, start_pass, start_pass_high, v19, v27);
      if ( v30 < 0 )
        return 0;
      start_pass = state.get_buffer;
      start_pass_high = state.bits_left;
      goto LABEL_41;
    }
    for ( i = 1; i < 64; i += v40 + 1 )
    {
      if ( start_pass_high >= 8 )
        goto LABEL_57;
      if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 0) )
        return 0;
      start_pass_high = state.bits_left;
      start_pass = state.get_buffer;
      if ( state.bits_left >= 8 )
      {
LABEL_57:
        v37 = (unsigned __int8)(start_pass >> (start_pass_high - 8));
        v38 = v19->look_nbits[v37];
        if ( v38 )
        {
          v39 = v19->look_sym[v37];
          start_pass_high -= v38;
          goto LABEL_62;
        }
        v36 = 9;
      }
      else
      {
        v36 = 1;
      }
      v39 = j_jpeg_huff_decode(&state, start_pass, start_pass_high, v19, v36);
      if ( v39 < 0 )
        return 0;
      start_pass = state.get_buffer;
      start_pass_high = state.bits_left;
LABEL_62:
      v40 = v39 >> 4;
      v41 = v39 & 0xF;
      if ( v41 )
      {
        if ( start_pass_high < v41 )
        {
          if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v41) )
            return 0;
          start_pass = state.get_buffer;
          start_pass_high = state.bits_left;
        }
        start_pass_high -= v41;
      }
      else if ( v40 != 15 )
      {
        break;
      }
    }
LABEL_69:
    ++v3;
    v15 = v45 + 1;
    ++MCU_membership;
    v14 = (d_derived_tbl **)(v46 + 1);
    v16 = v47;
    ++v45;
    ++v46;
  }
  while ( v3 < cinfo->blocks_in_MCU );
  src = cinfo->src;
  bytes_in_buffer = state.bytes_in_buffer;
  next_input_byte = state.next_input_byte;
  v9 = v48;
LABEL_71:
  src->next_input_byte = next_input_byte;
  cinfo->src->bytes_in_buffer = bytes_in_buffer;
  LODWORD(entropy[1].start_pass) = start_pass;
  HIDWORD(entropy[1].start_pass) = start_pass_high;
  *(_OWORD *)&entropy[1].decode_mcu = v9;
LABEL_72:
  --LODWORD(entropy[2].start_pass);
  return 1;
}

/*
==============
jinit_huff_decoder
==============
*/
void jinit_huff_decoder(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 304i64);
  cinfo->entropy = (jpeg_entropy_decoder *)v2;
  *(_QWORD *)v2 = start_pass_huff_decoder;
  *(_QWORD *)(v2 + 8) = decode_mcu;
  *(_QWORD *)(v2 + 88) = 0i64;
  *(_QWORD *)(v2 + 56) = 0i64;
  *(_QWORD *)(v2 + 96) = 0i64;
  *(_QWORD *)(v2 + 64) = 0i64;
  *(_QWORD *)(v2 + 104) = 0i64;
  *(_QWORD *)(v2 + 72) = 0i64;
  *(_QWORD *)(v2 + 112) = 0i64;
  *(_QWORD *)(v2 + 80) = 0i64;
}

/*
==============
jpeg_fill_bit_buffer
==============
*/
unsigned __int8 jpeg_fill_bit_buffer(bitread_working_state *state, int get_buffer, int bits_left, int nbits)
{
  jpeg_decompress_struct *cinfo; 
  const unsigned __int8 *next_input_byte; 
  int v7; 
  unsigned __int64 bytes_in_buffer; 
  jpeg_source_mgr *src; 
  int v12; 
  jpeg_source_mgr *v13; 
  int v14; 
  unsigned __int8 result; 
  char v16; 

  cinfo = state->cinfo;
  next_input_byte = state->next_input_byte;
  v7 = bits_left;
  bytes_in_buffer = state->bytes_in_buffer;
  if ( cinfo->unread_marker )
    goto $no_more_bytes;
  if ( bits_left < 25 )
  {
    do
    {
      if ( !bytes_in_buffer )
      {
        if ( !cinfo->src->fill_input_buffer(cinfo) )
          return 0;
        src = cinfo->src;
        next_input_byte = src->next_input_byte;
        bytes_in_buffer = src->bytes_in_buffer;
      }
      v12 = *next_input_byte;
      --bytes_in_buffer;
      ++next_input_byte;
      if ( v12 == 255 )
      {
        do
        {
          if ( !bytes_in_buffer )
          {
            if ( !cinfo->src->fill_input_buffer(cinfo) )
              return 0;
            v13 = cinfo->src;
            next_input_byte = v13->next_input_byte;
            bytes_in_buffer = v13->bytes_in_buffer;
          }
          v14 = *next_input_byte;
          --bytes_in_buffer;
          ++next_input_byte;
        }
        while ( v14 == 255 );
        if ( v14 )
        {
          cinfo->unread_marker = v14;
$no_more_bytes:
          if ( nbits > v7 )
          {
            if ( !cinfo->entropy->insufficient_data )
            {
              cinfo->err->msg_code = 117;
              cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
              cinfo->entropy->insufficient_data = 1;
            }
            v16 = 25 - v7;
            v7 = 25;
            get_buffer <<= v16;
          }
          break;
        }
        v12 = 255;
      }
      v7 += 8;
      get_buffer = v12 | (get_buffer << 8);
    }
    while ( v7 < 25 );
  }
  state->next_input_byte = next_input_byte;
  result = 1;
  state->bytes_in_buffer = bytes_in_buffer;
  state->get_buffer = get_buffer;
  state->bits_left = v7;
  return result;
}

/*
==============
jpeg_huff_decode
==============
*/
__int64 jpeg_huff_decode(bitread_working_state *state, int get_buffer, int bits_left, d_derived_tbl *htbl, int min_bits)
{
  int v5; 
  int v8; 
  int *v9; 
  int i; 
  int v11; 

  v5 = min_bits;
  if ( bits_left < min_bits )
  {
    if ( !j_jpeg_fill_bit_buffer(state, get_buffer, bits_left, min_bits) )
      return 0xFFFFFFFFi64;
    get_buffer = state->get_buffer;
    bits_left = state->bits_left;
  }
  v8 = bits_left - min_bits;
  v9 = &htbl->maxcode[min_bits];
  for ( i = ((1 << min_bits) - 1) & (get_buffer >> v8); i > *v9; i = (get_buffer >> v8) & 1 | v11 )
  {
    v11 = 2 * i;
    if ( v8 < 1 )
    {
      if ( !j_jpeg_fill_bit_buffer(state, get_buffer, v8, 1) )
        return 0xFFFFFFFFi64;
      get_buffer = state->get_buffer;
      v8 = state->bits_left;
    }
    --v8;
    ++v9;
    ++v5;
  }
  state->get_buffer = get_buffer;
  state->bits_left = v8;
  if ( v5 <= 16 )
    return htbl->pub->huffval[i + htbl->valoffset[v5]];
  state->cinfo->err->msg_code = 118;
  state->cinfo->err->emit_message((jpeg_common_struct *)state->cinfo, -1);
  return 0i64;
}

/*
==============
jpeg_make_d_derived_tbl
==============
*/
void jpeg_make_d_derived_tbl(jpeg_decompress_struct *cinfo, unsigned __int8 isDC, int tblno, d_derived_tbl **pdtbl)
{
  __int64 v4; 
  jpeg_decompress_struct *v7; 
  JHUFF_TBL *v8; 
  d_derived_tbl *v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  int i; 
  unsigned __int64 v15; 
  int v16; 
  char v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  int *v26; 
  int v27; 
  __int64 v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  __int64 v31; 
  int j; 
  int v33; 
  int v34; 
  __int64 v35; 
  int *v36; 
  __int64 v37; 
  JHUFF_TBL *v39; 
  d_derived_tbl *v40; 
  __int64 v41[131]; 
  char v42[272]; 

  v4 = tblno;
  v7 = cinfo;
  if ( (unsigned int)tblno > 3 )
  {
    cinfo->err->msg_code = 50;
    cinfo->err->msg_parm.i[0] = tblno;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( isDC )
    v8 = v7->dc_huff_tbl_ptrs[v4];
  else
    v8 = v7->ac_huff_tbl_ptrs[v4];
  v39 = v8;
  if ( !v8 )
  {
    v7->err->msg_code = 50;
    v7->err->msg_parm.i[0] = v4;
    v7->err->error_exit((jpeg_common_struct *)v7);
  }
  v9 = *pdtbl;
  v40 = *pdtbl;
  if ( !*pdtbl )
  {
    v9 = (d_derived_tbl *)v7->mem->alloc_small((jpeg_common_struct *)v7, 1i64, 1432ui64);
    *pdtbl = v9;
    v40 = v9;
  }
  v10 = 0i64;
  v9->pub = v8;
  v11 = 0;
  v12 = 0i64;
  v13 = &v8->bits[1];
  for ( i = 1; i <= 16; ++i )
  {
    v15 = *v13;
    if ( (int)v15 + v11 > 256 )
    {
      v7->err->msg_code = 8;
      v7->err->error_exit((jpeg_common_struct *)v7);
    }
    if ( (_DWORD)v15 )
    {
      v11 += v15;
      memset(&v42[v12], i, v15);
      cinfo = NULL;
      v12 += v15;
    }
    ++v13;
  }
  v41[0] = v11;
  if ( (unsigned __int64)v11 >= 0x101 )
  {
    j___report_rangecheckfailure(cinfo);
    JUMPOUT(0x1438703FDi64);
  }
  v42[v11] = 0;
  v16 = 0;
  v17 = v42[0];
  v18 = v42[0];
  if ( v42[0] )
  {
    v19 = __ROL4__(1, v42[0]);
    v20 = 0i64;
    do
    {
      if ( v17 == v18 )
      {
        do
        {
          v21 = v42[v20 + 1];
          *((_DWORD *)&v41[1] + v20++) = v16++;
        }
        while ( v21 == v18 );
      }
      if ( v16 >= v19 )
      {
        v7->err->msg_code = 8;
        v7->err->error_exit((jpeg_common_struct *)v7);
      }
      v17 = v42[v20];
      v16 *= 2;
      ++v18;
      v19 = __ROL4__(v19, 1);
    }
    while ( v17 );
  }
  v22 = 0;
  v23 = 16i64;
  v24 = &v39->bits[1];
  v25 = &v39->bits[1];
  v26 = &v40->maxcode[1];
  do
  {
    if ( *v25 )
    {
      v26[18] = v22 - *((_DWORD *)&v41[1] + v22);
      v22 += *v25;
      v27 = *((_DWORD *)v41 + v22 + 1);
    }
    else
    {
      v27 = -1;
    }
    *v26 = v27;
    ++v25;
    ++v26;
    --v23;
  }
  while ( v23 );
  v40->maxcode[17] = 0xFFFFF;
  memset_0(v40->look_nbits, 0, sizeof(v40->look_nbits));
  LODWORD(v30) = 1;
  v31 = 0i64;
  for ( j = 7; j >= 0; --j )
  {
    v33 = 1;
    if ( *v24 )
    {
      v29 = &v39->huffval[v31];
      do
      {
        v34 = 1 << j;
        if ( 1 << j > 0 )
        {
          v35 = (int)(*((_DWORD *)&v41[1] + v31) << j);
          v28 = (__int64)&v40->look_sym[v35];
          v36 = &v40->look_nbits[v35];
          do
          {
            *v36 = v30;
            ++v28;
            ++v36;
            --v34;
            *(_BYTE *)(v28 - 1) = *v29;
          }
          while ( v34 > 0 );
        }
        ++v33;
        ++v31;
        ++v29;
      }
      while ( v33 <= *v24 );
    }
    v30 = (unsigned int)(v30 + 1);
    ++v24;
  }
  v37 = v41[0];
  if ( isDC && v41[0] > 0 )
  {
    do
    {
      if ( v39->huffval[v10] > 0xFu )
      {
        v7->err->msg_code = 8;
        ((void (__fastcall *)(jpeg_decompress_struct *, __int64, unsigned __int8 *, __int64))v7->err->error_exit)(v7, v28, v29, v30);
      }
      ++v10;
    }
    while ( v10 < v37 );
  }
}

/*
==============
start_pass_huff_decoder
==============
*/
void start_pass_huff_decoder(jpeg_decompress_struct *cinfo)
{
  jpeg_entropy_decoder *entropy; 
  int v3; 
  unsigned __int8 (__fastcall **p_decode_mcu)(jpeg_decompress_struct *, __int16 (**)[64]); 
  jpeg_component_info **cur_comp_info; 
  __int64 ac_tbl_no; 
  int v7; 
  unsigned __int8 *p_insufficient_data; 
  unsigned __int8 (__fastcall **v9)(jpeg_decompress_struct *, __int16 (**)[64]); 
  int *MCU_membership; 
  jpeg_component_info *v11; 
  bool v12; 

  entropy = cinfo->entropy;
  if ( cinfo->Ss || cinfo->Se != 63 || cinfo->Ah || cinfo->Al )
  {
    cinfo->err->msg_code = 122;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
  }
  v3 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    p_decode_mcu = &entropy[1].decode_mcu;
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      ac_tbl_no = (*cur_comp_info)->ac_tbl_no;
      j_jpeg_make_d_derived_tbl(cinfo, 1u, (*cur_comp_info)->dc_tbl_no, (d_derived_tbl **)&entropy[2].decode_mcu + (*cur_comp_info)->dc_tbl_no);
      j_jpeg_make_d_derived_tbl(cinfo, 0, ac_tbl_no, (d_derived_tbl **)&entropy[3].insufficient_data + ac_tbl_no);
      *(_DWORD *)p_decode_mcu = 0;
      ++cur_comp_info;
      ++v3;
      p_decode_mcu = (unsigned __int8 (__fastcall **)(jpeg_decompress_struct *, __int16 (**)[64]))((char *)p_decode_mcu + 4);
    }
    while ( v3 < cinfo->comps_in_scan );
  }
  v7 = 0;
  if ( cinfo->blocks_in_MCU > 0 )
  {
    p_insufficient_data = &entropy[11].insufficient_data;
    v9 = &entropy[8].decode_mcu;
    MCU_membership = cinfo->MCU_membership;
    do
    {
      v11 = cinfo->cur_comp_info[*MCU_membership];
      *(v9 - 10) = (unsigned __int8 (__fastcall *)(jpeg_decompress_struct *, __int16 (**)[64]))*((_QWORD *)&entropy[2].decode_mcu + v11->dc_tbl_no);
      *v9 = (unsigned __int8 (__fastcall *)(jpeg_decompress_struct *, __int16 (**)[64]))*((_QWORD *)&entropy[3].insufficient_data + v11->ac_tbl_no);
      if ( v11->component_needed )
      {
        *p_insufficient_data = 1;
        v12 = v11->DCT_scaled_size > 1;
      }
      else
      {
        *p_insufficient_data = 0;
        v12 = 0;
      }
      p_insufficient_data[10] = v12;
      ++v7;
      ++p_insufficient_data;
      ++MCU_membership;
      ++v9;
    }
    while ( v7 < cinfo->blocks_in_MCU );
  }
  entropy[1].start_pass = NULL;
  entropy->insufficient_data = 0;
  LODWORD(entropy[2].start_pass) = cinfo->restart_interval;
}

