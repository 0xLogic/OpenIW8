/*
==============
decode_mcu_AC_first
==============
*/
unsigned __int8 decode_mcu_AC_first(jpeg_decompress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_decoder *entropy; 
  int Se; 
  int decode_mcu; 
  jpeg_source_mgr *src; 
  int Ss; 
  unsigned __int64 bytes_in_buffer; 
  __int16 (*v10)[64]; 
  int start_pass; 
  int start_pass_high; 
  d_derived_tbl *v13; 
  int min_bits; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v23; 
  bitread_working_state state; 
  int Al; 
  __int16 (*v26)[64]; 

  entropy = cinfo->entropy;
  Se = cinfo->Se;
  Al = cinfo->Al;
  if ( cinfo->restart_interval && !HIDWORD(entropy[2].start_pass) && !process_restart(cinfo) )
    return 0;
  if ( entropy->insufficient_data )
    goto LABEL_29;
  decode_mcu = (int)entropy[1].decode_mcu;
  if ( decode_mcu )
  {
    --decode_mcu;
    goto LABEL_28;
  }
  src = cinfo->src;
  Ss = cinfo->Ss;
  state.cinfo = cinfo;
  state.next_input_byte = src->next_input_byte;
  bytes_in_buffer = src->bytes_in_buffer;
  v10 = *MCU_data;
  state.bytes_in_buffer = bytes_in_buffer;
  start_pass = (int)entropy[1].start_pass;
  start_pass_high = HIDWORD(entropy[1].start_pass);
  v13 = *(d_derived_tbl **)&entropy[3].insufficient_data;
  v26 = v10;
  if ( Ss > Se )
    goto LABEL_27;
  while ( 1 )
  {
    if ( start_pass_high >= 8 )
      goto LABEL_12;
    if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 0) )
      return 0;
    start_pass_high = state.bits_left;
    start_pass = state.get_buffer;
    if ( state.bits_left >= 8 )
    {
LABEL_12:
      v15 = (unsigned __int8)(start_pass >> (start_pass_high - 8));
      v16 = v13->look_nbits[v15];
      if ( v16 )
      {
        v17 = v13->look_sym[v15];
        start_pass_high -= v16;
        goto LABEL_17;
      }
      min_bits = 9;
    }
    else
    {
      min_bits = 1;
    }
    v17 = j_jpeg_huff_decode(&state, start_pass, start_pass_high, v13, min_bits);
    if ( v17 < 0 )
      return 0;
    start_pass = state.get_buffer;
    start_pass_high = state.bits_left;
LABEL_17:
    v18 = v17 >> 4;
    v19 = v17 & 0xF;
    if ( v19 )
    {
      v20 = v18 + Ss;
      if ( start_pass_high < v19 )
      {
        if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v19) )
          return 0;
        start_pass = state.get_buffer;
        start_pass_high = state.bits_left;
      }
      start_pass_high -= v19;
      v21 = (start_pass >> start_pass_high) & ((1 << v19) - 1);
      if ( v21 < extend_test_0[v19] )
        v21 += extend_offset_0[v19];
      (*v26)[jpeg_natural_order[v20]] = (_WORD)v21 << Al;
      goto LABEL_26;
    }
    if ( v18 != 15 )
      break;
    v20 = Ss + 15;
LABEL_26:
    Ss = v20 + 1;
    if ( Ss > Se )
      goto LABEL_27;
  }
  v23 = 1 << v18;
  if ( !v18 )
    goto LABEL_35;
  if ( start_pass_high >= v18 )
    goto LABEL_34;
  if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v18) )
    return 0;
  start_pass = state.get_buffer;
  start_pass_high = state.bits_left;
LABEL_34:
  start_pass_high -= v18;
  v23 += (v23 - 1) & (start_pass >> start_pass_high);
LABEL_35:
  decode_mcu = v23 - 1;
LABEL_27:
  cinfo->src->next_input_byte = state.next_input_byte;
  cinfo->src->bytes_in_buffer = state.bytes_in_buffer;
  LODWORD(entropy[1].start_pass) = start_pass;
  HIDWORD(entropy[1].start_pass) = start_pass_high;
LABEL_28:
  LODWORD(entropy[1].decode_mcu) = decode_mcu;
LABEL_29:
  --HIDWORD(entropy[2].start_pass);
  return 1;
}

/*
==============
decode_mcu_AC_refine
==============
*/
unsigned __int8 decode_mcu_AC_refine(jpeg_decompress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_decoder *entropy; 
  __int64 Se; 
  jpeg_decompress_struct *v5; 
  int Al; 
  int v7; 
  int v8; 
  bool v9; 
  unsigned __int8 result; 
  jpeg_source_mgr *src; 
  __int16 (*v12)[64]; 
  int decode_mcu; 
  d_derived_tbl *v14; 
  int start_pass; 
  int start_pass_high; 
  __int64 Ss; 
  __int64 v18; 
  __int64 v19; 
  int min_bits; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int16 *v29; 
  int v30; 
  __int16 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int16 *v36; 
  int v37; 
  __int16 v38; 
  __int64 i; 
  __int64 v40; 
  jpeg_decompress_struct *v41; 
  int v42; 
  int v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  __int16 (*v47)[64]; 
  bitread_working_state state; 
  d_derived_tbl *htbl; 
  jpeg_decompress_struct *v50; 
  char *v51; 
  jpeg_entropy_decoder *v52; 
  int v53; 
  char v54; 

  entropy = cinfo->entropy;
  Se = cinfo->Se;
  v5 = cinfo;
  v50 = cinfo;
  Al = cinfo->Al;
  v7 = 1 << Al;
  v8 = -1 << Al;
  v9 = v5->restart_interval == 0;
  v52 = entropy;
  v43 = 1 << Al;
  v44 = -1 << Al;
  if ( !v9 && !HIDWORD(entropy[2].start_pass) )
  {
    result = process_restart(v5);
    if ( !result )
      return result;
    v5 = v50;
  }
  if ( !entropy->insufficient_data )
  {
    src = v5->src;
    v12 = *MCU_data;
    state.cinfo = v5;
    v47 = v12;
    state.next_input_byte = src->next_input_byte;
    state.bytes_in_buffer = src->bytes_in_buffer;
    decode_mcu = (int)entropy[1].decode_mcu;
    v14 = *(d_derived_tbl **)&entropy[3].insufficient_data;
    start_pass = (int)entropy[1].start_pass;
    start_pass_high = HIDWORD(entropy[1].start_pass);
    Ss = v5->Ss;
    v18 = Se;
    v45 = Se;
    v42 = decode_mcu;
    htbl = v14;
    v46 = 0;
    if ( decode_mcu )
    {
LABEL_53:
      v34 = (int)Ss;
      if ( (int)Ss <= v18 )
      {
        while ( 1 )
        {
          v35 = jpeg_natural_order[v34];
          v9 = (*v12)[v35] == 0;
          v36 = &(*v12)[v35];
          if ( !v9 )
          {
            if ( start_pass_high < 1 )
            {
              if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 1) )
              {
LABEL_66:
                v12 = v47;
                goto $undoit;
              }
              start_pass = state.get_buffer;
              start_pass_high = state.bits_left;
              v18 = v45;
            }
            if ( ((start_pass >> --start_pass_high) & 1) != 0 )
            {
              v37 = *v36;
              if ( (v37 & v7) == 0 )
              {
                if ( (v37 & 0x8000u) != 0 )
                  v38 = v8 + v37;
                else
                  v38 = v7 + v37;
                *v36 = v38;
              }
            }
          }
          if ( ++v34 > v18 )
            break;
          v12 = v47;
        }
        decode_mcu = v42;
      }
      --decode_mcu;
LABEL_72:
      entropy = v52;
      v41 = v50;
      v50->src->next_input_byte = state.next_input_byte;
      v41->src->bytes_in_buffer = state.bytes_in_buffer;
      LODWORD(entropy[1].start_pass) = start_pass;
      HIDWORD(entropy[1].start_pass) = start_pass_high;
      LODWORD(entropy[1].decode_mcu) = decode_mcu;
      goto LABEL_73;
    }
    v19 = Ss;
    if ( Ss > v18 )
      goto LABEL_72;
    v51 = &v54;
LABEL_9:
    if ( start_pass_high >= 8 )
      goto LABEL_13;
    if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 0) )
      goto $undoit;
    start_pass_high = state.bits_left;
    start_pass = state.get_buffer;
    v14 = htbl;
    if ( state.bits_left >= 8 )
    {
LABEL_13:
      v21 = (unsigned __int8)(start_pass >> (start_pass_high - 8));
      v22 = v14->look_nbits[v21];
      if ( v22 )
      {
        v23 = v14->look_sym[v21];
        start_pass_high -= v22;
LABEL_18:
        v24 = v23 >> 4;
        v25 = v23 & 0xF;
        if ( v25 )
        {
          if ( v25 != 1 )
          {
            v26 = (__int64)v50;
            v50->err->msg_code = 118;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 8i64))(v26, 0xFFFFFFFFi64);
          }
          if ( start_pass_high >= 1 )
            goto LABEL_24;
          if ( j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 1) )
          {
            start_pass = state.get_buffer;
            start_pass_high = state.bits_left;
LABEL_24:
            v25 = v43;
            if ( ((start_pass >> --start_pass_high) & 1) == 0 )
              v25 = v44;
            goto LABEL_28;
          }
$undoit:
          for ( i = v46; i > 0; (*v12)[v40] = 0 )
            v40 = *(&v53 + i--);
          return 0;
        }
        if ( v24 == 15 )
        {
LABEL_28:
          v27 = v45;
          while ( 1 )
          {
            v28 = jpeg_natural_order[v19];
            v9 = (*v12)[v28] == 0;
            v29 = &(*v12)[v28];
            if ( v9 )
            {
              if ( --v24 < 0 )
              {
LABEL_40:
                v12 = v47;
                if ( v25 )
                {
                  v32 = (__int64)v51;
                  v33 = jpeg_natural_order[v19];
                  ++v46;
                  *(_DWORD *)v51 = v33;
                  v51 = (char *)(v32 + 4);
                  (*v47)[v33] = v25;
                }
                v14 = htbl;
                LODWORD(Ss) = Ss + 1;
                if ( ++v19 > v27 )
                {
                  decode_mcu = 0;
                  goto LABEL_72;
                }
                goto LABEL_9;
              }
            }
            else
            {
              if ( start_pass_high < 1 )
              {
                if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 1) )
                  goto LABEL_66;
                start_pass = state.get_buffer;
                start_pass_high = state.bits_left;
              }
              if ( ((start_pass >> --start_pass_high) & 1) != 0 )
              {
                v30 = *v29;
                if ( (v30 & v43) == 0 )
                {
                  if ( (v30 & 0x8000u) != 0 )
                    v31 = v44 + v30;
                  else
                    v31 = v43 + v30;
                  *v29 = v31;
                }
              }
              v27 = v45;
            }
            v12 = v47;
            LODWORD(Ss) = Ss + 1;
            if ( ++v19 > v27 )
              goto LABEL_40;
          }
        }
        decode_mcu = 1 << v24;
        v42 = 1 << v24;
        if ( v24 )
        {
          if ( start_pass_high < v24 )
          {
            if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, v24) )
              goto $undoit;
            start_pass = state.get_buffer;
            start_pass_high = state.bits_left;
            decode_mcu = 1 << v24;
          }
          start_pass_high -= v24;
          decode_mcu += (decode_mcu - 1) & (start_pass >> start_pass_high);
          v42 = decode_mcu;
        }
        LOWORD(v8) = v44;
        v18 = v45;
        v7 = v43;
        if ( !decode_mcu )
          goto LABEL_72;
        goto LABEL_53;
      }
      min_bits = 9;
    }
    else
    {
      min_bits = 1;
    }
    v23 = j_jpeg_huff_decode(&state, start_pass, start_pass_high, v14, min_bits);
    if ( v23 < 0 )
      goto $undoit;
    start_pass = state.get_buffer;
    start_pass_high = state.bits_left;
    goto LABEL_18;
  }
LABEL_73:
  --HIDWORD(entropy[2].start_pass);
  return 1;
}

/*
==============
decode_mcu_DC_first
==============
*/
unsigned __int8 decode_mcu_DC_first(jpeg_decompress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_decoder *entropy; 
  jpeg_source_mgr *src; 
  int v6; 
  const unsigned __int8 *next_input_byte; 
  __int128 v8; 
  int start_pass; 
  int get_buffer; 
  int start_pass_high; 
  int *MCU_membership; 
  __int64 v13; 
  __int16 (*v14)[64]; 
  d_derived_tbl *v15; 
  int min_bits; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int Al; 
  bitread_working_state state; 
  __int128 v25; 
  int v26; 

  entropy = cinfo->entropy;
  Al = cinfo->Al;
  if ( cinfo->restart_interval && !HIDWORD(entropy[2].start_pass) && !process_restart(cinfo) )
    return 0;
  if ( entropy->insufficient_data )
    goto LABEL_26;
  src = cinfo->src;
  v6 = 0;
  state.cinfo = cinfo;
  next_input_byte = src->next_input_byte;
  state.next_input_byte = src->next_input_byte;
  state.bytes_in_buffer = src->bytes_in_buffer;
  v8 = *(_OWORD *)&entropy[1].decode_mcu;
  start_pass = (int)entropy[2].start_pass;
  get_buffer = (int)entropy[1].start_pass;
  start_pass_high = HIDWORD(entropy[1].start_pass);
  v25 = v8;
  v26 = start_pass;
  if ( cinfo->blocks_in_MCU <= 0 )
    goto LABEL_25;
  MCU_membership = cinfo->MCU_membership;
  do
  {
    v13 = *MCU_membership;
    v14 = *MCU_data;
    v15 = (d_derived_tbl *)*((_QWORD *)&entropy[2].decode_mcu + cinfo->cur_comp_info[v13]->dc_tbl_no);
    if ( start_pass_high >= 8 )
      goto LABEL_11;
    if ( !j_jpeg_fill_bit_buffer(&state, get_buffer, start_pass_high, 0) )
      return 0;
    start_pass_high = state.bits_left;
    get_buffer = state.get_buffer;
    if ( state.bits_left >= 8 )
    {
LABEL_11:
      v17 = (unsigned __int8)(get_buffer >> (start_pass_high - 8));
      v18 = v15->look_nbits[v17];
      if ( v18 )
      {
        v19 = v15->look_sym[v17];
        start_pass_high -= v18;
        goto LABEL_16;
      }
      min_bits = 9;
    }
    else
    {
      min_bits = 1;
    }
    v19 = j_jpeg_huff_decode(&state, get_buffer, start_pass_high, v15, min_bits);
    if ( v19 < 0 )
      return 0;
    get_buffer = state.get_buffer;
    start_pass_high = state.bits_left;
LABEL_16:
    if ( v19 )
    {
      if ( start_pass_high < v19 )
      {
        if ( !j_jpeg_fill_bit_buffer(&state, get_buffer, start_pass_high, v19) )
          return 0;
        get_buffer = state.get_buffer;
        start_pass_high = state.bits_left;
      }
      start_pass_high -= v19;
      v20 = (get_buffer >> start_pass_high) & ((1 << v19) - 1);
      if ( v20 >= extend_test_0[v19] )
        v19 = (get_buffer >> start_pass_high) & ((1 << v19) - 1);
      else
        v19 = v20 + extend_offset_0[v19];
    }
    v21 = *((_DWORD *)&v25 + v13 + 1) + v19;
    ++v6;
    ++MCU_membership;
    *((_DWORD *)&v25 + v13 + 1) = v21;
    ++MCU_data;
    *(_WORD *)v14 = (_WORD)v21 << Al;
  }
  while ( v6 < cinfo->blocks_in_MCU );
  src = cinfo->src;
  next_input_byte = state.next_input_byte;
  start_pass = v26;
  v8 = v25;
LABEL_25:
  src->next_input_byte = next_input_byte;
  cinfo->src->bytes_in_buffer = state.bytes_in_buffer;
  *(_OWORD *)&entropy[1].decode_mcu = v8;
  LODWORD(entropy[2].start_pass) = start_pass;
  LODWORD(entropy[1].start_pass) = get_buffer;
  HIDWORD(entropy[1].start_pass) = start_pass_high;
LABEL_26:
  --HIDWORD(entropy[2].start_pass);
  return 1;
}

/*
==============
decode_mcu_DC_refine
==============
*/
unsigned __int8 decode_mcu_DC_refine(jpeg_decompress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_decoder *entropy; 
  int v4; 
  jpeg_source_mgr *src; 
  int v7; 
  const unsigned __int8 *next_input_byte; 
  int start_pass; 
  int start_pass_high; 
  __int16 (*v11)[64]; 
  unsigned __int8 result; 
  bitread_working_state state; 

  entropy = cinfo->entropy;
  v4 = 1 << cinfo->Al;
  if ( cinfo->restart_interval && !HIDWORD(entropy[2].start_pass) && !process_restart(cinfo) )
    return 0;
  src = cinfo->src;
  v7 = 0;
  state.cinfo = cinfo;
  next_input_byte = src->next_input_byte;
  state.next_input_byte = src->next_input_byte;
  state.bytes_in_buffer = src->bytes_in_buffer;
  start_pass = (int)entropy[1].start_pass;
  start_pass_high = HIDWORD(entropy[1].start_pass);
  if ( cinfo->blocks_in_MCU > 0 )
  {
    do
    {
      v11 = *MCU_data;
      if ( start_pass_high < 1 )
      {
        if ( !j_jpeg_fill_bit_buffer(&state, start_pass, start_pass_high, 1) )
          return 0;
        start_pass = state.get_buffer;
        start_pass_high = state.bits_left;
      }
      if ( ((start_pass >> --start_pass_high) & 1) != 0 )
        *(_WORD *)v11 |= v4;
      ++v7;
      ++MCU_data;
    }
    while ( v7 < cinfo->blocks_in_MCU );
    src = cinfo->src;
    next_input_byte = state.next_input_byte;
  }
  src->next_input_byte = next_input_byte;
  cinfo->src->bytes_in_buffer = state.bytes_in_buffer;
  result = 1;
  --HIDWORD(entropy[2].start_pass);
  LODWORD(entropy[1].start_pass) = start_pass;
  HIDWORD(entropy[1].start_pass) = start_pass_high;
  return result;
}

/*
==============
jinit_phuff_decoder
==============
*/
void jinit_phuff_decoder(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 
  int v3; 
  int (*v4)[64]; 
  int (*v5)[64]; 
  __int64 v6; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 96i64);
  cinfo->entropy = (jpeg_entropy_decoder *)v2;
  v3 = 0;
  *(_QWORD *)v2 = start_pass_phuff_decoder;
  *(_QWORD *)(v2 + 56) = 0i64;
  *(_QWORD *)(v2 + 64) = 0i64;
  *(_QWORD *)(v2 + 72) = 0i64;
  *(_QWORD *)(v2 + 80) = 0i64;
  v4 = (int (*)[64])cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 4i64 * (cinfo->num_components << 6));
  for ( cinfo->coef_bits = v4; v3 < cinfo->num_components; ++v3 )
  {
    v5 = v4;
    v6 = 4i64;
    do
    {
      *(_QWORD *)v5 = -1i64;
      *(_QWORD *)&(*v5)[2] = -1i64;
      *(_QWORD *)&(*v5)[4] = -1i64;
      v5 = (int (*)[64])((char *)v5 + 64);
      *(_QWORD *)&(*v5)[-10] = -1i64;
      *(_QWORD *)&(*v5)[-8] = -1i64;
      *(_QWORD *)&(*v5)[-6] = -1i64;
      *(_QWORD *)&(*v5)[-4] = -1i64;
      *(_QWORD *)&(*v5)[-2] = -1i64;
      --v6;
    }
    while ( v6 );
    ++v4;
  }
}

/*
==============
process_restart
==============
*/
unsigned __int8 process_restart(jpeg_decompress_struct *cinfo)
{
  jpeg_entropy_decoder *entropy; 
  unsigned __int8 result; 
  int v4; 
  _DWORD *v5; 

  entropy = cinfo->entropy;
  cinfo->marker->discarded_bytes += SHIDWORD(entropy[1].start_pass) / 8;
  HIDWORD(entropy[1].start_pass) = 0;
  result = ((__int64 (*)(void))cinfo->marker->read_restart_marker)();
  if ( result )
  {
    v4 = 0;
    if ( cinfo->comps_in_scan > 0 )
    {
      v5 = (_DWORD *)&entropy[1].decode_mcu + 1;
      do
      {
        *v5++ = 0;
        ++v4;
      }
      while ( v4 < cinfo->comps_in_scan );
    }
    LODWORD(entropy[1].decode_mcu) = 0;
    HIDWORD(entropy[2].start_pass) = cinfo->restart_interval;
    if ( !cinfo->unread_marker )
      entropy->insufficient_data = 0;
    return 1;
  }
  return result;
}

/*
==============
start_pass_phuff_decoder
==============
*/
void start_pass_phuff_decoder(jpeg_decompress_struct *cinfo)
{
  int Ss; 
  jpeg_entropy_decoder *entropy; 
  bool v4; 
  int Se; 
  int Ah; 
  int v7; 
  jpeg_component_info **cur_comp_info; 
  int component_index; 
  int *v10; 
  __int64 v11; 
  int *v12; 
  int v13; 
  unsigned __int8 (__fastcall *v14)(jpeg_decompress_struct *, __int16 (**)[64]); 
  int v15; 
  _DWORD *v16; 
  jpeg_component_info **v17; 
  jpeg_component_info *v18; 
  __int64 ac_tbl_no; 

  Ss = cinfo->Ss;
  entropy = cinfo->entropy;
  v4 = 0;
  Se = cinfo->Se;
  if ( Ss )
  {
    if ( Ss > Se || Se >= 64 )
      v4 = 1;
    if ( cinfo->comps_in_scan != 1 )
      v4 = 1;
  }
  else
  {
    v4 = Se != 0;
  }
  Ah = cinfo->Ah;
  if ( Ah && cinfo->Al != Ah - 1 )
    v4 = 1;
  if ( cinfo->Al > 13 || v4 )
  {
    cinfo->err->msg_code = 16;
    cinfo->err->msg_parm.i[0] = cinfo->Ss;
    cinfo->err->msg_parm.i[1] = cinfo->Se;
    cinfo->err->msg_parm.i[2] = cinfo->Ah;
    cinfo->err->msg_parm.i[3] = cinfo->Al;
    ((void (__fastcall *)(jpeg_decompress_struct *, __int64))cinfo->err->error_exit)(cinfo, 1i64);
  }
  v7 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      component_index = (*cur_comp_info)->component_index;
      v10 = cinfo->coef_bits[(__int64)component_index];
      if ( Ss && *v10 < 0 )
      {
        cinfo->err->msg_code = 115;
        cinfo->err->msg_parm.i[0] = component_index;
        cinfo->err->msg_parm.i[1] = 0;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
      }
      v11 = cinfo->Ss;
      if ( (int)v11 <= cinfo->Se )
      {
        v12 = &v10[v11];
        do
        {
          v13 = 0;
          if ( *v12 >= 0 )
            v13 = *v12;
          if ( cinfo->Ah != v13 )
          {
            cinfo->err->msg_code = 115;
            cinfo->err->msg_parm.i[0] = component_index;
            cinfo->err->msg_parm.i[1] = v11;
            cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
          }
          LODWORD(v11) = v11 + 1;
          *v12++ = cinfo->Al;
        }
        while ( (int)v11 <= cinfo->Se );
      }
      ++v7;
      ++cur_comp_info;
    }
    while ( v7 < cinfo->comps_in_scan );
  }
  if ( cinfo->Ah )
  {
    v14 = decode_mcu_AC_refine;
    if ( !Ss )
      v14 = decode_mcu_DC_refine;
  }
  else
  {
    v14 = decode_mcu_DC_first;
    if ( Ss )
      v14 = decode_mcu_AC_first;
  }
  v15 = 0;
  entropy->decode_mcu = v14;
  if ( cinfo->comps_in_scan > 0 )
  {
    v16 = (_DWORD *)&entropy[1].decode_mcu + 1;
    v17 = cinfo->cur_comp_info;
    do
    {
      v18 = *v17;
      if ( Ss )
      {
        ac_tbl_no = v18->ac_tbl_no;
        j_jpeg_make_d_derived_tbl(cinfo, 0, ac_tbl_no, (d_derived_tbl **)&entropy[2].decode_mcu + ac_tbl_no);
        *(_QWORD *)&entropy[3].insufficient_data = *((_QWORD *)&entropy[2].decode_mcu + ac_tbl_no);
      }
      else if ( !cinfo->Ah )
      {
        j_jpeg_make_d_derived_tbl(cinfo, 1u, v18->dc_tbl_no, (d_derived_tbl **)&entropy[2].decode_mcu + v18->dc_tbl_no);
      }
      *v16 = 0;
      ++v15;
      ++v16;
      ++v17;
    }
    while ( v15 < cinfo->comps_in_scan );
  }
  entropy[1].start_pass = NULL;
  entropy->insufficient_data = 0;
  LODWORD(entropy[1].decode_mcu) = 0;
  HIDWORD(entropy[2].start_pass) = cinfo->restart_interval;
}

