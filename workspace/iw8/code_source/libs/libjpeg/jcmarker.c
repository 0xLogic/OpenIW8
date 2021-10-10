/*
==============
emit_2bytes
==============
*/
void emit_2bytes(jpeg_compress_struct *cinfo, int value)
{
  jpeg_destination_mgr *dest; 
  unsigned __int8 v3; 
  bool v5; 
  jpeg_destination_mgr *v6; 

  dest = cinfo->dest;
  v3 = value;
  *dest->next_output_byte++ = BYTE1(value);
  v5 = dest->free_in_buffer-- == 1;
  if ( v5 && !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v6 = cinfo->dest;
  *v6->next_output_byte++ = v3;
  v5 = v6->free_in_buffer-- == 1;
  if ( v5 && !v6->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
emit_adobe_app14
==============
*/
void emit_adobe_app14(jpeg_compress_struct *cinfo)
{
  jpeg_destination_mgr *dest; 
  bool v3; 
  jpeg_destination_mgr *v4; 
  jpeg_destination_mgr *v5; 
  jpeg_destination_mgr *v6; 
  jpeg_destination_mgr *v7; 
  J_COLOR_SPACE jpeg_color_space; 
  jpeg_destination_mgr *v9; 
  unsigned __int8 *next_output_byte; 

  emit_marker(cinfo, M_APP14);
  emit_2bytes(cinfo, 14);
  dest = cinfo->dest;
  *dest->next_output_byte++ = 65;
  v3 = dest->free_in_buffer-- == 1;
  if ( v3 && !dest->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v4 = cinfo->dest;
  *v4->next_output_byte++ = 100;
  v3 = v4->free_in_buffer-- == 1;
  if ( v3 && !v4->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v5 = cinfo->dest;
  *v5->next_output_byte++ = 111;
  v3 = v5->free_in_buffer-- == 1;
  if ( v3 && !v5->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v6 = cinfo->dest;
  *v6->next_output_byte++ = 98;
  v3 = v6->free_in_buffer-- == 1;
  if ( v3 && !v6->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v7 = cinfo->dest;
  *v7->next_output_byte++ = 101;
  v3 = v7->free_in_buffer-- == 1;
  if ( v3 && !v7->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  emit_2bytes(cinfo, 100);
  emit_2bytes(cinfo, 0);
  emit_2bytes(cinfo, 0);
  jpeg_color_space = cinfo->jpeg_color_space;
  v9 = cinfo->dest;
  if ( jpeg_color_space == JCS_YCbCr )
  {
    *v9->next_output_byte = 1;
  }
  else
  {
    v3 = jpeg_color_space == JCS_YCCK;
    next_output_byte = v9->next_output_byte;
    if ( v3 )
      *next_output_byte = 2;
    else
      *next_output_byte = 0;
  }
  ++v9->next_output_byte;
  v3 = v9->free_in_buffer-- == 1;
  if ( v3 && !v9->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
emit_dht
==============
*/

void __fastcall emit_dht(jpeg_compress_struct *cinfo, int index, unsigned __int8 is_ac, double _XMM3_8)
{
  int v5; 
  JHUFF_TBL *v7; 
  unsigned __int8 *v10; 
  __int64 v11; 
  jpeg_destination_mgr *dest; 
  bool v24; 
  jpeg_destination_mgr *v25; 
  jpeg_destination_mgr *v26; 
  __int64 i; 
  jpeg_destination_mgr *v28; 
  __int64 v29; 
  jpeg_destination_mgr *v30; 

  v5 = index;
  if ( is_ac )
  {
    v7 = cinfo->ac_huff_tbl_ptrs[index];
    v5 = index + 16;
  }
  else
  {
    v7 = cinfo->dc_huff_tbl_ptrs[index];
  }
  if ( !v7 )
  {
    cinfo->err->msg_code = 50;
    cinfo->err->msg_parm.i[0] = v5;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( !v7->sent_table )
  {
    emit_marker(cinfo, M_DHT);
    __asm
    {
      vpxor   xmm2, xmm2, xmm2
      vpxor   xmm3, xmm3, xmm3
    }
    v10 = &v7->bits[5];
    v11 = 2i64;
    do
    {
      _XMM0 = *((unsigned int *)v10 - 1);
      v10 += 8;
      __asm { vpmovzxbd xmm1, xmm0 }
      _XMM0 = *((unsigned int *)v10 - 2);
      __asm
      {
        vpaddd  xmm2, xmm1, xmm2
        vpmovzxbd xmm1, xmm0
        vpaddd  xmm3, xmm1, xmm3
      }
      --v11;
    }
    while ( v11 );
    dest = cinfo->dest;
    __asm
    {
      vpaddd  xmm1, xmm3, xmm2
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    *dest->next_output_byte++ = (unsigned __int16)(_XMM0 + 19) >> 8;
    v24 = dest->free_in_buffer-- == 1;
    if ( v24 && !dest->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v25 = cinfo->dest;
    *v25->next_output_byte++ = _XMM0 + 19;
    v24 = v25->free_in_buffer-- == 1;
    if ( v24 && !v25->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v26 = cinfo->dest;
    *v26->next_output_byte++ = v5;
    v24 = v26->free_in_buffer-- == 1;
    if ( v24 && !v26->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    for ( i = 1i64; i <= 16; ++i )
    {
      v28 = cinfo->dest;
      *v28->next_output_byte++ = v7->bits[i];
      v24 = v28->free_in_buffer-- == 1;
      if ( v24 && !v28->empty_output_buffer(cinfo) )
      {
        cinfo->err->msg_code = 24;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
    }
    if ( (int)_XMM0 > 0i64 )
    {
      v29 = 0i64;
      do
      {
        v30 = cinfo->dest;
        *v30->next_output_byte++ = v7->huffval[v29];
        v24 = v30->free_in_buffer-- == 1;
        if ( v24 && !v30->empty_output_buffer(cinfo) )
        {
          cinfo->err->msg_code = 24;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        ++v29;
      }
      while ( v29 < (int)_XMM0 );
    }
    v7->sent_table = 1;
  }
}

/*
==============
emit_dqt
==============
*/
__int64 emit_dqt(jpeg_compress_struct *cinfo, int index)
{
  char v2; 
  JQUANT_TBL *v4; 
  unsigned int v5; 
  __int64 i; 
  jpeg_destination_mgr *dest; 
  bool v8; 
  jpeg_destination_mgr *v9; 
  jpeg_destination_mgr *v10; 
  jpeg_destination_mgr *v11; 
  char v12; 
  jpeg_destination_mgr *v13; 
  const int *v14; 
  unsigned __int16 v15; 
  jpeg_destination_mgr *v16; 
  jpeg_destination_mgr *v17; 

  v2 = index;
  v4 = cinfo->quant_tbl_ptrs[index];
  if ( !v4 )
  {
    cinfo->err->msg_code = 52;
    cinfo->err->msg_parm.i[0] = index;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v5 = 0;
  for ( i = 0i64; i < 64; i += 64i64 )
  {
    if ( v4->quantval[i] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 1] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 2] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 3] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 4] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 5] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 6] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 7] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 8] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 9] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 10] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 11] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 12] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 13] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 14] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 15] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 16] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 17] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 18] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 19] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 20] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 21] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 22] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 23] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 24] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 25] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 26] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 27] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 28] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 29] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 30] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 31] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 32] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 33] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 34] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 35] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 36] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 37] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 38] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 39] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 40] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 41] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 42] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 43] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 44] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 45] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 46] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 47] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 48] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 49] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 50] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 51] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 52] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 53] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 54] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 55] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 56] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 57] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 58] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 59] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 60] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 61] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 62] > 0xFFu )
      v5 = 1;
    if ( v4->quantval[i + 63] > 0xFFu )
      v5 = 1;
  }
  if ( !v4->sent_table )
  {
    dest = cinfo->dest;
    *dest->next_output_byte++ = -1;
    v8 = dest->free_in_buffer-- == 1;
    if ( v8 && !dest->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v9 = cinfo->dest;
    *v9->next_output_byte++ = -37;
    v8 = v9->free_in_buffer-- == 1;
    if ( v8 && !v9->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v10 = cinfo->dest;
    *v10->next_output_byte++ = 0;
    v8 = v10->free_in_buffer-- == 1;
    if ( v8 && !v10->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v11 = cinfo->dest;
    v12 = 67;
    if ( v5 )
      v12 = -125;
    *v11->next_output_byte++ = v12;
    v8 = v11->free_in_buffer-- == 1;
    if ( v8 && !v11->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v13 = cinfo->dest;
    *v13->next_output_byte++ = v2 + 16 * v5;
    v8 = v13->free_in_buffer-- == 1;
    if ( v8 && !v13->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v14 = jpeg_natural_order;
    do
    {
      v15 = v4->quantval[*v14];
      if ( v5 )
      {
        v16 = cinfo->dest;
        *v16->next_output_byte++ = HIBYTE(v15);
        v8 = v16->free_in_buffer-- == 1;
        if ( v8 && !v16->empty_output_buffer(cinfo) )
        {
          cinfo->err->msg_code = 24;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
      }
      v17 = cinfo->dest;
      *v17->next_output_byte++ = v15;
      v8 = v17->free_in_buffer-- == 1;
      if ( v8 && !v17->empty_output_buffer(cinfo) )
      {
        cinfo->err->msg_code = 24;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      ++v14;
    }
    while ( (__int64)v14 < (__int64)&jpeg_natural_order[64] );
    v4->sent_table = 1;
  }
  return v5;
}

/*
==============
emit_jfif_app0
==============
*/
void emit_jfif_app0(jpeg_compress_struct *cinfo)
{
  jpeg_destination_mgr *dest; 
  bool v3; 
  jpeg_destination_mgr *v4; 
  jpeg_destination_mgr *v5; 
  jpeg_destination_mgr *v6; 
  jpeg_destination_mgr *v7; 
  jpeg_destination_mgr *v8; 
  jpeg_destination_mgr *v9; 
  jpeg_destination_mgr *v10; 
  jpeg_destination_mgr *v11; 
  jpeg_destination_mgr *v12; 

  emit_marker(cinfo, M_APP0);
  emit_2bytes(cinfo, 16);
  dest = cinfo->dest;
  *dest->next_output_byte++ = 74;
  v3 = dest->free_in_buffer-- == 1;
  if ( v3 && !dest->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v4 = cinfo->dest;
  *v4->next_output_byte++ = 70;
  v3 = v4->free_in_buffer-- == 1;
  if ( v3 && !v4->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v5 = cinfo->dest;
  *v5->next_output_byte++ = 73;
  v3 = v5->free_in_buffer-- == 1;
  if ( v3 && !v5->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v6 = cinfo->dest;
  *v6->next_output_byte++ = 70;
  v3 = v6->free_in_buffer-- == 1;
  if ( v3 && !v6->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v7 = cinfo->dest;
  *v7->next_output_byte++ = 0;
  v3 = v7->free_in_buffer-- == 1;
  if ( v3 && !v7->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v8 = cinfo->dest;
  *v8->next_output_byte++ = cinfo->JFIF_major_version;
  v3 = v8->free_in_buffer-- == 1;
  if ( v3 && !v8->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v9 = cinfo->dest;
  *v9->next_output_byte++ = cinfo->JFIF_minor_version;
  v3 = v9->free_in_buffer-- == 1;
  if ( v3 && !v9->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v10 = cinfo->dest;
  *v10->next_output_byte++ = cinfo->density_unit;
  v3 = v10->free_in_buffer-- == 1;
  if ( v3 && !v10->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  emit_2bytes(cinfo, cinfo->X_density);
  emit_2bytes(cinfo, cinfo->Y_density);
  v11 = cinfo->dest;
  *v11->next_output_byte++ = 0;
  v3 = v11->free_in_buffer-- == 1;
  if ( v3 && !v11->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v12 = cinfo->dest;
  *v12->next_output_byte++ = 0;
  v3 = v12->free_in_buffer-- == 1;
  if ( v3 && !v12->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
emit_marker
==============
*/
void emit_marker(jpeg_compress_struct *cinfo, JPEG_MARKER mark)
{
  jpeg_destination_mgr *dest; 
  unsigned __int8 v3; 
  bool v5; 
  jpeg_destination_mgr *v6; 

  dest = cinfo->dest;
  v3 = mark;
  *dest->next_output_byte++ = -1;
  v5 = dest->free_in_buffer-- == 1;
  if ( v5 && !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v6 = cinfo->dest;
  *v6->next_output_byte++ = v3;
  v5 = v6->free_in_buffer-- == 1;
  if ( v5 && !v6->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
emit_sof
==============
*/
void emit_sof(jpeg_compress_struct *cinfo, JPEG_MARKER code)
{
  jpeg_destination_mgr *dest; 
  bool v4; 
  jpeg_destination_mgr *v5; 
  jpeg_component_info *comp_info; 
  int i; 
  jpeg_destination_mgr *v8; 
  jpeg_destination_mgr *v9; 
  jpeg_destination_mgr *v10; 

  emit_marker(cinfo, code);
  emit_2bytes(cinfo, 3 * cinfo->num_components + 8);
  if ( (int)cinfo->image_height > 0xFFFF || (int)cinfo->image_width > 0xFFFF )
  {
    cinfo->err->msg_code = 41;
    cinfo->err->msg_parm.i[0] = 0xFFFF;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  dest = cinfo->dest;
  *dest->next_output_byte++ = cinfo->data_precision;
  v4 = dest->free_in_buffer-- == 1;
  if ( v4 && !dest->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  emit_2bytes(cinfo, cinfo->image_height);
  emit_2bytes(cinfo, cinfo->image_width);
  v5 = cinfo->dest;
  *v5->next_output_byte++ = cinfo->num_components;
  v4 = v5->free_in_buffer-- == 1;
  if ( v4 && !v5->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  comp_info = cinfo->comp_info;
  for ( i = 0; i < cinfo->num_components; ++comp_info )
  {
    v8 = cinfo->dest;
    *v8->next_output_byte++ = comp_info->component_id;
    v4 = v8->free_in_buffer-- == 1;
    if ( v4 && !v8->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v9 = cinfo->dest;
    *v9->next_output_byte++ = LOBYTE(comp_info->v_samp_factor) + 16 * LOBYTE(comp_info->h_samp_factor);
    v4 = v9->free_in_buffer-- == 1;
    if ( v4 && !v9->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v10 = cinfo->dest;
    *v10->next_output_byte++ = comp_info->quant_tbl_no;
    v4 = v10->free_in_buffer-- == 1;
    if ( v4 && !v10->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    ++i;
  }
}

/*
==============
emit_sos
==============
*/
void emit_sos(jpeg_compress_struct *cinfo)
{
  jpeg_destination_mgr *dest; 
  bool v3; 
  int v4; 
  jpeg_component_info **cur_comp_info; 
  jpeg_destination_mgr *v6; 
  jpeg_component_info *v7; 
  int dc_tbl_no; 
  int ac_tbl_no; 
  jpeg_destination_mgr *v10; 
  jpeg_destination_mgr *v11; 
  jpeg_destination_mgr *v12; 
  jpeg_destination_mgr *v13; 

  emit_marker(cinfo, M_SOS);
  emit_2bytes(cinfo, 2 * cinfo->comps_in_scan + 6);
  dest = cinfo->dest;
  *dest->next_output_byte++ = cinfo->comps_in_scan;
  v3 = dest->free_in_buffer-- == 1;
  if ( v3 && !dest->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v4 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      v6 = cinfo->dest;
      v7 = *cur_comp_info;
      *v6->next_output_byte++ = (*cur_comp_info)->component_id;
      v3 = v6->free_in_buffer-- == 1;
      if ( v3 && !v6->empty_output_buffer(cinfo) )
      {
        cinfo->err->msg_code = 24;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      dc_tbl_no = v7->dc_tbl_no;
      ac_tbl_no = v7->ac_tbl_no;
      if ( cinfo->progressive_mode )
      {
        if ( cinfo->Ss || (LOBYTE(ac_tbl_no) = 0, cinfo->Ah) && !cinfo->arith_code )
          LOBYTE(dc_tbl_no) = 0;
      }
      v10 = cinfo->dest;
      *v10->next_output_byte++ = ac_tbl_no + 16 * dc_tbl_no;
      v3 = v10->free_in_buffer-- == 1;
      if ( v3 && !v10->empty_output_buffer(cinfo) )
      {
        cinfo->err->msg_code = 24;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      ++v4;
      ++cur_comp_info;
    }
    while ( v4 < cinfo->comps_in_scan );
  }
  v11 = cinfo->dest;
  *v11->next_output_byte++ = cinfo->Ss;
  v3 = v11->free_in_buffer-- == 1;
  if ( v3 && !v11->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v12 = cinfo->dest;
  *v12->next_output_byte++ = cinfo->Se;
  v3 = v12->free_in_buffer-- == 1;
  if ( v3 && !v12->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v13 = cinfo->dest;
  *v13->next_output_byte++ = LOBYTE(cinfo->Al) + 16 * LOBYTE(cinfo->Ah);
  v3 = v13->free_in_buffer-- == 1;
  if ( v3 && !v13->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
jinit_marker_writer
==============
*/
void jinit_marker_writer(jpeg_compress_struct *cinfo)
{
  __int64 v2; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 64i64);
  cinfo->marker = (jpeg_marker_writer *)v2;
  *(_QWORD *)v2 = write_file_header;
  *(_QWORD *)(v2 + 8) = write_frame_header;
  *(_QWORD *)(v2 + 16) = write_scan_header;
  *(_QWORD *)(v2 + 24) = write_file_trailer;
  *(_QWORD *)(v2 + 32) = write_tables_only;
  *(_QWORD *)(v2 + 40) = write_marker_header;
  *(_QWORD *)(v2 + 48) = write_marker_byte;
  *(_DWORD *)(v2 + 56) = 0;
}

/*
==============
write_file_header
==============
*/
void write_file_header(jpeg_compress_struct *cinfo)
{
  jpeg_marker_writer *marker; 

  marker = cinfo->marker;
  emit_marker(cinfo, M_SOI);
  LODWORD(marker[1].write_file_header) = 0;
  if ( cinfo->write_JFIF_header )
    emit_jfif_app0(cinfo);
  if ( cinfo->write_Adobe_marker )
    emit_adobe_app14(cinfo);
}

/*
==============
write_file_trailer
==============
*/
void write_file_trailer(jpeg_compress_struct *cinfo)
{
  emit_marker(cinfo, M_EOI);
}

/*
==============
write_frame_header
==============
*/
void write_frame_header(jpeg_compress_struct *cinfo)
{
  jpeg_component_info *comp_info; 
  int v2; 
  int v4; 
  __int64 num_components; 
  int *p_quant_tbl_no; 
  int v7; 
  char v8; 
  int *p_ac_tbl_no; 
  int v10; 

  comp_info = cinfo->comp_info;
  v2 = 0;
  v4 = 0;
  num_components = (unsigned int)cinfo->num_components;
  if ( (int)num_components > 0 )
  {
    p_quant_tbl_no = &comp_info->quant_tbl_no;
    do
    {
      v7 = emit_dqt(cinfo, *p_quant_tbl_no);
      num_components = (unsigned int)cinfo->num_components;
      v2 += v7;
      ++v4;
      p_quant_tbl_no += 24;
    }
    while ( v4 < (int)num_components );
  }
  if ( cinfo->arith_code || cinfo->progressive_mode || cinfo->data_precision != 8 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (int)num_components > 0 )
    {
      p_ac_tbl_no = &cinfo->comp_info->ac_tbl_no;
      do
      {
        if ( *(p_ac_tbl_no - 1) > 1 || *p_ac_tbl_no > 1 )
          v8 = 0;
        p_ac_tbl_no += 24;
        --num_components;
      }
      while ( num_components );
    }
    if ( v2 && v8 )
    {
      v8 = 0;
      cinfo->err->msg_code = 75;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 0);
    }
  }
  if ( cinfo->arith_code )
  {
    v10 = 201;
  }
  else if ( cinfo->progressive_mode )
  {
    v10 = 194;
  }
  else
  {
    v10 = 193 - (v8 != 0);
  }
  emit_sof(cinfo, (JPEG_MARKER)v10);
}

/*
==============
write_marker_byte
==============
*/
void write_marker_byte(jpeg_compress_struct *cinfo, int val)
{
  jpeg_destination_mgr *dest; 

  dest = cinfo->dest;
  *dest->next_output_byte++ = val;
  if ( dest->free_in_buffer-- == 1 && !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
write_marker_header
==============
*/
void write_marker_header(jpeg_compress_struct *cinfo, int marker, unsigned int datalen)
{
  if ( datalen > 0xFFFD )
  {
    cinfo->err->msg_code = 11;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  emit_marker(cinfo, (JPEG_MARKER)marker);
  emit_2bytes(cinfo, datalen + 2);
}

/*
==============
write_scan_header
==============
*/
void write_scan_header(jpeg_compress_struct *cinfo, __int64 a2, __int64 a3, double a4)
{
  jpeg_marker_writer *marker; 
  int v6; 
  jpeg_component_info **cur_comp_info; 
  jpeg_component_info *v8; 
  int dc_tbl_no; 
  unsigned __int8 v10; 
  jpeg_destination_mgr *dest; 
  bool v12; 
  jpeg_destination_mgr *v13; 

  marker = cinfo->marker;
  if ( !cinfo->arith_code )
  {
    v6 = 0;
    if ( cinfo->comps_in_scan > 0 )
    {
      cur_comp_info = cinfo->cur_comp_info;
      while ( 1 )
      {
        v8 = *cur_comp_info;
        if ( !cinfo->progressive_mode )
          break;
        if ( cinfo->Ss )
          goto LABEL_9;
        if ( !cinfo->Ah )
        {
          dc_tbl_no = v8->dc_tbl_no;
          v10 = 0;
          goto LABEL_10;
        }
LABEL_11:
        ++v6;
        ++cur_comp_info;
        if ( v6 >= cinfo->comps_in_scan )
          goto LABEL_12;
      }
      emit_dht(cinfo, v8->dc_tbl_no, 0, a4);
LABEL_9:
      dc_tbl_no = v8->ac_tbl_no;
      v10 = 1;
LABEL_10:
      emit_dht(cinfo, dc_tbl_no, v10, a4);
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( cinfo->restart_interval != LODWORD(marker[1].write_file_header) )
  {
    dest = cinfo->dest;
    *dest->next_output_byte++ = -1;
    v12 = dest->free_in_buffer-- == 1;
    if ( v12 && !dest->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v13 = cinfo->dest;
    *v13->next_output_byte++ = -35;
    v12 = v13->free_in_buffer-- == 1;
    if ( v12 && !v13->empty_output_buffer(cinfo) )
    {
      cinfo->err->msg_code = 24;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    emit_2bytes(cinfo, 4);
    emit_2bytes(cinfo, cinfo->restart_interval);
    LODWORD(marker[1].write_file_header) = cinfo->restart_interval;
  }
  emit_sos(cinfo);
}

/*
==============
write_tables_only
==============
*/
void write_tables_only(jpeg_compress_struct *cinfo, __int64 a2, __int64 a3, double a4)
{
  int v5; 
  JQUANT_TBL **quant_tbl_ptrs; 
  int i; 
  JHUFF_TBL **ac_huff_tbl_ptrs; 
  jpeg_destination_mgr *dest; 
  bool v10; 
  jpeg_destination_mgr *v11; 

  emit_marker(cinfo, M_SOI);
  v5 = 0;
  quant_tbl_ptrs = cinfo->quant_tbl_ptrs;
  for ( i = 0; i < 4; ++i )
  {
    if ( *quant_tbl_ptrs )
      emit_dqt(cinfo, i);
    ++quant_tbl_ptrs;
  }
  if ( !cinfo->arith_code )
  {
    ac_huff_tbl_ptrs = cinfo->ac_huff_tbl_ptrs;
    do
    {
      if ( *(ac_huff_tbl_ptrs - 4) )
        emit_dht(cinfo, v5, 0, a4);
      if ( *ac_huff_tbl_ptrs )
        emit_dht(cinfo, v5, 1u, a4);
      ++v5;
      ++ac_huff_tbl_ptrs;
    }
    while ( v5 < 4 );
  }
  dest = cinfo->dest;
  *dest->next_output_byte++ = -1;
  v10 = dest->free_in_buffer-- == 1;
  if ( v10 && !dest->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v11 = cinfo->dest;
  *v11->next_output_byte++ = -39;
  v10 = v11->free_in_buffer-- == 1;
  if ( v10 && !v11->empty_output_buffer(cinfo) )
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

