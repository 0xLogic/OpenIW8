/*
==============
emit_bits
==============
*/
unsigned __int8 emit_bits(working_state *state, unsigned int code, int size)
{
  int v3; 
  int v7; 
  unsigned int v8; 
  bool v9; 
  unsigned __int8 *next_output_byte; 
  jpeg_destination_mgr *dest; 
  jpeg_destination_mgr *v12; 
  unsigned __int8 result; 

  v3 = state->cur.last_dc_val[0];
  if ( !size )
  {
    state->cinfo->err->msg_code = 40;
    state->cinfo->err->error_exit((jpeg_common_struct *)state->cinfo);
  }
  v7 = size + v3;
  v8 = state->cur.EOBRUN | ((code & ((1 << size) - 1)) << (24 - v7));
  if ( v7 < 8 )
  {
LABEL_12:
    state->cur.EOBRUN = v8;
    result = 1;
    state->cur.last_dc_val[0] = v7;
    return result;
  }
  while ( 1 )
  {
    *state->next_output_byte = BYTE2(v8);
    v9 = state->free_in_buffer-- == 1;
    next_output_byte = state->next_output_byte + 1;
    state->next_output_byte = next_output_byte;
    if ( v9 )
    {
      dest = state->cinfo->dest;
      if ( !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
        return 0;
      next_output_byte = dest->next_output_byte;
      state->next_output_byte = dest->next_output_byte;
      state->free_in_buffer = dest->free_in_buffer;
    }
    if ( BYTE2(v8) == 255 )
    {
      *next_output_byte = 0;
      ++state->next_output_byte;
      v9 = state->free_in_buffer-- == 1;
      if ( v9 )
        break;
    }
LABEL_11:
    v8 <<= 8;
    v7 -= 8;
    if ( v7 < 8 )
      goto LABEL_12;
  }
  v12 = state->cinfo->dest;
  if ( ((unsigned __int8 (*)(void))v12->empty_output_buffer)() )
  {
    state->next_output_byte = v12->next_output_byte;
    state->free_in_buffer = v12->free_in_buffer;
    goto LABEL_11;
  }
  return 0;
}

/*
==============
dump_buffer
==============
*/
void dump_buffer(phuff_entropy_encoder *entropy)
{
  jpeg_destination_mgr *dest; 

  dest = entropy->cinfo->dest;
  if ( !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
  {
    entropy->cinfo->err->msg_code = 24;
    entropy->cinfo->err->error_exit((jpeg_common_struct *)entropy->cinfo);
  }
  entropy->next_output_byte = dest->next_output_byte;
  entropy->free_in_buffer = dest->free_in_buffer;
}

/*
==============
emit_buffered_bits
==============
*/
void emit_buffered_bits(phuff_entropy_encoder *entropy, char *bufstart, unsigned int nbits)
{
  unsigned int v3; 
  int v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int8 *next_output_byte; 
  bool v10; 
  jpeg_destination_mgr *dest; 
  jpeg_destination_mgr *v12; 

  v3 = nbits;
  if ( !entropy->gather_statistics && nbits )
  {
    do
    {
      if ( !entropy->gather_statistics )
      {
        v6 = entropy->put_bits + 1;
        v7 = entropy->put_buffer | ((*bufstart & 1) << (24 - (LOBYTE(entropy->put_bits) + 1)));
        if ( v6 >= 8 )
        {
          v8 = (unsigned __int64)(unsigned int)v6 >> 3;
          v6 -= 8 * ((unsigned int)v6 >> 3);
          do
          {
            *entropy->next_output_byte = BYTE2(v7);
            next_output_byte = entropy->next_output_byte + 1;
            v10 = entropy->free_in_buffer-- == 1;
            entropy->next_output_byte = next_output_byte;
            if ( v10 )
            {
              dest = entropy->cinfo->dest;
              if ( !((unsigned __int8 (*)(void))dest->empty_output_buffer)() )
              {
                entropy->cinfo->err->msg_code = 24;
                entropy->cinfo->err->error_exit((jpeg_common_struct *)entropy->cinfo);
              }
              next_output_byte = dest->next_output_byte;
              entropy->next_output_byte = dest->next_output_byte;
              entropy->free_in_buffer = dest->free_in_buffer;
            }
            if ( BYTE2(v7) == 255 )
            {
              *next_output_byte = 0;
              ++entropy->next_output_byte;
              v10 = entropy->free_in_buffer-- == 1;
              if ( v10 )
              {
                v12 = entropy->cinfo->dest;
                if ( !((unsigned __int8 (*)(void))v12->empty_output_buffer)() )
                {
                  entropy->cinfo->err->msg_code = 24;
                  entropy->cinfo->err->error_exit((jpeg_common_struct *)entropy->cinfo);
                }
                entropy->next_output_byte = v12->next_output_byte;
                entropy->free_in_buffer = v12->free_in_buffer;
              }
            }
            v7 <<= 8;
            --v8;
          }
          while ( v8 );
        }
        entropy->put_buffer = v7;
        entropy->put_bits = v6;
      }
      ++bufstart;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
emit_eobrun
==============
*/
void emit_eobrun(phuff_entropy_encoder *entropy)
{
  signed int EOBRUN; 
  int v3; 
  int v4; 
  __int64 ac_tbl_no; 
  __int64 v6; 
  unsigned int BE; 
  char *bit_buffer; 

  EOBRUN = entropy->EOBRUN;
  if ( EOBRUN )
  {
    v3 = 0;
    v4 = EOBRUN >> 1;
    if ( v4 )
    {
      do
      {
        ++v3;
        v4 >>= 1;
      }
      while ( v4 );
      if ( v3 > 14 )
      {
        entropy->cinfo->err->msg_code = 40;
        entropy->cinfo->err->error_exit((jpeg_common_struct *)entropy->cinfo);
      }
    }
    ac_tbl_no = entropy->ac_tbl_no;
    v6 = 16 * v3;
    if ( entropy->gather_statistics )
      ++entropy->count_ptrs[ac_tbl_no][v6];
    else
      emit_bits_0(entropy, entropy->derived_tbls[ac_tbl_no]->ehufco[v6], entropy->derived_tbls[ac_tbl_no]->ehufsi[v6]);
    if ( v3 )
      emit_bits_0(entropy, entropy->EOBRUN, v3);
    BE = entropy->BE;
    bit_buffer = entropy->bit_buffer;
    entropy->EOBRUN = 0;
    emit_buffered_bits(entropy, bit_buffer, BE);
    entropy->BE = 0;
  }
}

/*
==============
emit_restart
==============
*/
void emit_restart(phuff_entropy_encoder *entropy, int restart_num)
{
  char v2; 
  unsigned __int8 *next_output_byte; 
  bool v5; 
  unsigned __int8 *v6; 
  jpeg_compress_struct *cinfo; 
  int v8; 
  int *last_dc_val; 

  v2 = restart_num;
  emit_eobrun(entropy);
  if ( !entropy->gather_statistics )
  {
    emit_bits_0(entropy, 0x7Fu, 7);
    next_output_byte = entropy->next_output_byte;
    *(_QWORD *)&entropy->put_buffer = 0i64;
    *next_output_byte = -1;
    ++entropy->next_output_byte;
    v5 = entropy->free_in_buffer-- == 1;
    v6 = entropy->next_output_byte;
    if ( v5 )
    {
      dump_buffer(entropy);
      v6 = entropy->next_output_byte;
    }
    *v6 = v2 - 48;
    ++entropy->next_output_byte;
    v5 = entropy->free_in_buffer-- == 1;
    if ( v5 )
      dump_buffer(entropy);
  }
  cinfo = entropy->cinfo;
  if ( cinfo->Ss )
  {
    *(_QWORD *)&entropy->EOBRUN = 0i64;
  }
  else
  {
    v8 = 0;
    if ( cinfo->comps_in_scan > 0 )
    {
      last_dc_val = entropy->last_dc_val;
      do
      {
        *last_dc_val++ = 0;
        ++v8;
      }
      while ( v8 < entropy->cinfo->comps_in_scan );
    }
  }
}

/*
==============
encode_mcu_AC_first
==============
*/
unsigned __int8 encode_mcu_AC_first(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  phuff_entropy_encoder *entropy; 
  __int64 Se; 
  int Al; 
  __int64 Ss; 
  int v8; 
  __int16 (*v9)[64]; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 ac_tbl_no; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  unsigned int restart_interval; 
  unsigned int restarts_to_go; 
  __int16 (*v23)[64]; 
  __int64 v24; 

  entropy = (phuff_entropy_encoder *)cinfo->entropy;
  Se = cinfo->Se;
  Al = cinfo->Al;
  entropy->next_output_byte = cinfo->dest->next_output_byte;
  entropy->free_in_buffer = cinfo->dest->free_in_buffer;
  if ( cinfo->restart_interval && !entropy->restarts_to_go )
    emit_restart(entropy, entropy->next_restart_num);
  Ss = cinfo->Ss;
  v8 = 0;
  v9 = *MCU_data;
  v23 = *MCU_data;
  v24 = Se;
  if ( Ss <= Se )
  {
    do
    {
      v10 = jpeg_natural_order[Ss];
      v11 = (*v9)[v10];
      if ( (*v9)[v10] )
      {
        if ( v11 >= 0 )
        {
          v12 = v11 >> Al;
          v13 = v12;
        }
        else
        {
          v12 = -v11 >> Al;
          v13 = ~v12;
        }
        if ( v12 )
        {
          if ( entropy->EOBRUN )
            emit_eobrun(entropy);
          if ( v8 > 15 )
          {
            v14 = ((unsigned int)(v8 - 16) >> 4) + 1;
            v8 += -16 * v14;
            do
            {
              ac_tbl_no = entropy->ac_tbl_no;
              if ( entropy->gather_statistics )
                ++entropy->count_ptrs[ac_tbl_no][240];
              else
                emit_bits_0(entropy, entropy->derived_tbls[ac_tbl_no]->ehufco[240], entropy->derived_tbls[ac_tbl_no]->ehufsi[240]);
              --v14;
            }
            while ( v14 );
          }
          v16 = v12 >> 1;
          v17 = 1;
          if ( v16 )
          {
            do
            {
              ++v17;
              v16 >>= 1;
            }
            while ( v16 );
            if ( v17 > 10 )
            {
              cinfo->err->msg_code = 6;
              cinfo->err->error_exit((jpeg_common_struct *)cinfo);
            }
          }
          v18 = entropy->ac_tbl_no;
          v19 = v17 + 16 * v8;
          if ( entropy->gather_statistics )
            ++entropy->count_ptrs[v18][v19];
          else
            emit_bits_0(entropy, entropy->derived_tbls[v18]->ehufco[v19], entropy->derived_tbls[v18]->ehufsi[v19]);
          emit_bits_0(entropy, v13, v17);
          v8 = 0;
        }
        else
        {
          ++v8;
        }
        v9 = v23;
      }
      else
      {
        ++v8;
      }
      ++Ss;
    }
    while ( Ss <= v24 );
    if ( v8 > 0 && ++entropy->EOBRUN == 0x7FFF )
      emit_eobrun(entropy);
  }
  cinfo->dest->next_output_byte = entropy->next_output_byte;
  cinfo->dest->free_in_buffer = entropy->free_in_buffer;
  restart_interval = cinfo->restart_interval;
  if ( restart_interval )
  {
    restarts_to_go = entropy->restarts_to_go;
    if ( !restarts_to_go )
    {
      entropy->next_restart_num = ((unsigned __int8)entropy->next_restart_num + 1) & 7;
      restarts_to_go = restart_interval;
    }
    entropy->restarts_to_go = restarts_to_go - 1;
  }
  return 1;
}

/*
==============
encode_mcu_AC_refine
==============
*/
unsigned __int8 encode_mcu_AC_refine(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  phuff_entropy_encoder *entropy; 
  __int64 Se; 
  int Al; 
  __int64 Ss; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int16 (*v12)[64]; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  char *bit_buffer; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 ac_tbl_no; 
  __int64 v23; 
  __int64 v24; 
  unsigned int BE; 
  unsigned int v26; 
  bool v27; 
  unsigned int restart_interval; 
  unsigned int restarts_to_go; 
  __int16 (*v31)[64]; 
  __int64 v32; 
  phuff_entropy_encoder *v33; 
  __int64 v34; 
  int v36[64]; 

  entropy = (phuff_entropy_encoder *)cinfo->entropy;
  Se = cinfo->Se;
  Al = cinfo->Al;
  entropy->next_output_byte = cinfo->dest->next_output_byte;
  entropy->free_in_buffer = cinfo->dest->free_in_buffer;
  v33 = entropy;
  if ( cinfo->restart_interval && !entropy->restarts_to_go )
    emit_restart(entropy, entropy->next_restart_num);
  Ss = cinfo->Ss;
  v8 = 0;
  v9 = Ss;
  v31 = *MCU_data;
  v10 = Ss;
  v34 = Ss;
  v11 = Se;
  v32 = Se;
  if ( Ss <= Se )
  {
    v12 = *MCU_data;
    do
    {
      v13 = (*v12)[jpeg_natural_order[v9]];
      if ( v13 < 0 )
        v13 = -v13;
      v14 = Ss;
      v15 = v13 >> Al;
      v36[v9] = v15;
      if ( v15 != 1 )
        v14 = v8;
      LODWORD(Ss) = Ss + 1;
      ++v9;
      v8 = v14;
    }
    while ( v9 <= Se );
    entropy = v33;
    v10 = v34;
  }
  v16 = 0;
  bit_buffer = &entropy->bit_buffer[entropy->BE];
  v18 = 0i64;
  v19 = v8;
  if ( v10 <= v11 )
  {
    v20 = 0i64;
    do
    {
      v21 = v36[v10];
      if ( v21 )
      {
        if ( v20 > 15 )
        {
          do
          {
            if ( v10 > v19 )
              break;
            emit_eobrun(entropy);
            ac_tbl_no = entropy->ac_tbl_no;
            if ( entropy->gather_statistics )
              ++entropy->count_ptrs[ac_tbl_no][240];
            else
              emit_bits_0(entropy, entropy->derived_tbls[ac_tbl_no]->ehufco[240], entropy->derived_tbls[ac_tbl_no]->ehufsi[240]);
            v16 -= 16;
            v20 -= 16i64;
            emit_buffered_bits(entropy, bit_buffer, v18);
            bit_buffer = entropy->bit_buffer;
            v18 = 0i64;
          }
          while ( v20 > 15 );
          v11 = v32;
        }
        if ( v21 <= 1 )
        {
          emit_eobrun(entropy);
          v23 = entropy->ac_tbl_no;
          v24 = 16 * v20;
          if ( entropy->gather_statistics )
            ++entropy->count_ptrs[v23][v24 + 1];
          else
            emit_bits_0(entropy, entropy->derived_tbls[v23]->ehufco[v24 + 1], entropy->derived_tbls[v23]->ehufsi[v24 + 1]);
          emit_bits_0(entropy, (unsigned __int16)~(*v31)[jpeg_natural_order[v10]] >> 15, 1);
          emit_buffered_bits(entropy, bit_buffer, v18);
          bit_buffer = entropy->bit_buffer;
          v18 = 0i64;
          v11 = v32;
          v16 = 0;
          v20 = 0i64;
        }
        else
        {
          bit_buffer[v18] = v21 & 1;
          v18 = (unsigned int)(v18 + 1);
        }
      }
      else
      {
        ++v16;
        ++v20;
      }
      ++v10;
    }
    while ( v10 <= v11 );
    if ( v16 > 0 || (_DWORD)v18 )
    {
      BE = entropy->BE;
      ++entropy->EOBRUN;
      v26 = v18 + BE;
      v27 = entropy->EOBRUN == 0x7FFF;
      entropy->BE = v26;
      if ( v27 || v26 > 0x3A9 )
        emit_eobrun(entropy);
    }
  }
  cinfo->dest->next_output_byte = entropy->next_output_byte;
  cinfo->dest->free_in_buffer = entropy->free_in_buffer;
  restart_interval = cinfo->restart_interval;
  if ( restart_interval )
  {
    restarts_to_go = entropy->restarts_to_go;
    if ( !restarts_to_go )
    {
      entropy->next_restart_num = ((unsigned __int8)entropy->next_restart_num + 1) & 7;
      restarts_to_go = restart_interval;
    }
    entropy->restarts_to_go = restarts_to_go - 1;
  }
  return 1;
}

/*
==============
encode_mcu_DC_first
==============
*/
unsigned __int8 encode_mcu_DC_first(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  phuff_entropy_encoder *entropy; 
  int Al; 
  int v6; 
  char v7; 
  int *MCU_membership; 
  __int64 v9; 
  jpeg_component_info *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 dc_tbl_no; 
  unsigned int restart_interval; 
  unsigned int restarts_to_go; 
  unsigned int code; 
  char v23; 

  entropy = (phuff_entropy_encoder *)cinfo->entropy;
  Al = cinfo->Al;
  entropy->next_output_byte = cinfo->dest->next_output_byte;
  entropy->free_in_buffer = cinfo->dest->free_in_buffer;
  if ( cinfo->restart_interval && !entropy->restarts_to_go )
    emit_restart(entropy, entropy->next_restart_num);
  v6 = 0;
  if ( cinfo->blocks_in_MCU > 0 )
  {
    v7 = Al;
    MCU_membership = cinfo->MCU_membership;
    v23 = Al;
    do
    {
      v9 = *MCU_membership;
      v10 = cinfo->cur_comp_info[v9];
      v11 = *(_WORD *)*MCU_data >> v7;
      v12 = entropy->last_dc_val[v9];
      v13 = v11 - v12;
      entropy->last_dc_val[v9] = v11;
      v14 = v12 - v11;
      if ( v13 >= 0 )
        v14 = v13;
      v15 = v13 - 1;
      if ( v13 >= 0 )
        v15 = v13;
      v16 = 0;
      v17 = 0i64;
      code = v15;
      if ( v14 )
      {
        do
        {
          ++v16;
          ++v17;
          v14 >>= 1;
        }
        while ( v14 );
        if ( v16 > 11 )
        {
          cinfo->err->msg_code = 6;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
      }
      dc_tbl_no = v10->dc_tbl_no;
      if ( entropy->gather_statistics )
        ++entropy->count_ptrs[dc_tbl_no][v17];
      else
        emit_bits_0(entropy, entropy->derived_tbls[dc_tbl_no]->ehufco[v17], entropy->derived_tbls[dc_tbl_no]->ehufsi[v17]);
      if ( v16 )
        emit_bits_0(entropy, code, v16);
      v7 = v23;
      ++v6;
      ++MCU_membership;
      ++MCU_data;
    }
    while ( v6 < cinfo->blocks_in_MCU );
  }
  cinfo->dest->next_output_byte = entropy->next_output_byte;
  cinfo->dest->free_in_buffer = entropy->free_in_buffer;
  restart_interval = cinfo->restart_interval;
  if ( restart_interval )
  {
    restarts_to_go = entropy->restarts_to_go;
    if ( !restarts_to_go )
    {
      entropy->next_restart_num = ((unsigned __int8)entropy->next_restart_num + 1) & 7;
      restarts_to_go = restart_interval;
    }
    entropy->restarts_to_go = restarts_to_go - 1;
  }
  return 1;
}

/*
==============
encode_mcu_DC_refine
==============
*/
unsigned __int8 encode_mcu_DC_refine(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  phuff_entropy_encoder *entropy; 
  int Al; 
  int i; 
  unsigned int restart_interval; 
  unsigned int restarts_to_go; 

  entropy = (phuff_entropy_encoder *)cinfo->entropy;
  Al = cinfo->Al;
  entropy->next_output_byte = cinfo->dest->next_output_byte;
  entropy->free_in_buffer = cinfo->dest->free_in_buffer;
  if ( cinfo->restart_interval && !entropy->restarts_to_go )
    emit_restart(entropy, entropy->next_restart_num);
  for ( i = 0; i < cinfo->blocks_in_MCU; ++MCU_data )
  {
    emit_bits_0(entropy, *(_WORD *)*MCU_data >> Al, 1);
    ++i;
  }
  cinfo->dest->next_output_byte = entropy->next_output_byte;
  cinfo->dest->free_in_buffer = entropy->free_in_buffer;
  restart_interval = cinfo->restart_interval;
  if ( restart_interval )
  {
    restarts_to_go = entropy->restarts_to_go;
    if ( !restarts_to_go )
    {
      entropy->next_restart_num = ((unsigned __int8)entropy->next_restart_num + 1) & 7;
      restarts_to_go = restart_interval;
    }
    entropy->restarts_to_go = restarts_to_go - 1;
  }
  return 1;
}

/*
==============
finish_pass_gather_phuff
==============
*/
void finish_pass_gather_phuff(jpeg_compress_struct *cinfo)
{
  phuff_entropy_encoder *entropy; 
  int Ss; 
  int v4; 
  jpeg_component_info **i; 
  jpeg_component_info *v6; 
  int dc_tbl_no; 
  __int64 v8; 
  __int64 v9; 
  JHUFF_TBL **v10; 
  JHUFF_TBL *v11; 
  int v12; 

  entropy = (phuff_entropy_encoder *)cinfo->entropy;
  emit_eobrun(entropy);
  Ss = cinfo->Ss;
  v4 = 0;
  v12 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    for ( i = cinfo->cur_comp_info; ; ++i )
    {
      v6 = *i;
      if ( Ss )
        break;
      if ( !cinfo->Ah )
      {
        dc_tbl_no = v6->dc_tbl_no;
        goto LABEL_7;
      }
LABEL_13:
      if ( ++v4 >= cinfo->comps_in_scan )
        return;
    }
    dc_tbl_no = v6->ac_tbl_no;
LABEL_7:
    v8 = dc_tbl_no;
    if ( !*((_BYTE *)&v12 + dc_tbl_no) )
    {
      v9 = 144i64;
      if ( Ss )
        v9 = 176i64;
      v10 = (JHUFF_TBL **)((char *)&cinfo->err + 8 * dc_tbl_no + v9);
      v11 = *v10;
      if ( !*v10 )
      {
        v11 = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
        *v10 = v11;
      }
      j_jpeg_gen_optimal_table(cinfo, v11, entropy->count_ptrs[v8]);
      *((_BYTE *)&v12 + v8) = 1;
    }
    goto LABEL_13;
  }
}

/*
==============
finish_pass_phuff
==============
*/
void finish_pass_phuff(jpeg_compress_struct *cinfo)
{
  jpeg_entropy_encoder *entropy; 

  entropy = cinfo->entropy;
  entropy[1].encode_mcu = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, __int16 (**)[64]))cinfo->dest->next_output_byte;
  entropy[1].finish_pass = (void (__fastcall *)(jpeg_compress_struct *))cinfo->dest->free_in_buffer;
  emit_eobrun((phuff_entropy_encoder *)entropy);
  emit_bits_0((phuff_entropy_encoder *)entropy, 0x7Fu, 7);
  entropy[2].start_pass = NULL;
  cinfo->dest->next_output_byte = (unsigned __int8 *)entropy[1].encode_mcu;
  cinfo->dest->free_in_buffer = (unsigned __int64)entropy[1].finish_pass;
}

/*
==============
jinit_phuff_encoder
==============
*/
void jinit_phuff_encoder(jpeg_compress_struct *cinfo)
{
  jpeg_entropy_encoder *v2; 

  v2 = (jpeg_entropy_encoder *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 176i64);
  cinfo->entropy = v2;
  v2->start_pass = start_pass_phuff;
  v2[4].finish_pass = NULL;
  v2[6].start_pass = NULL;
  v2[5].start_pass = NULL;
  v2[6].encode_mcu = NULL;
  v2[5].encode_mcu = NULL;
  v2[6].finish_pass = NULL;
  v2[5].finish_pass = NULL;
  v2[7].start_pass = NULL;
  v2[4].start_pass = NULL;
}

/*
==============
start_pass_phuff
==============
*/
void start_pass_phuff(jpeg_compress_struct *cinfo, unsigned __int8 gather_statistics)
{
  jpeg_entropy_encoder *entropy; 
  int Ss; 
  bool v6; 
  unsigned __int8 (__fastcall *v7)(jpeg_compress_struct *, __int16 (**)[64]); 
  bool v8; 
  __int64 v9; 
  void (__fastcall *v10)(jpeg_compress_struct *); 
  int v11; 
  void (__fastcall **p_finish_pass)(jpeg_compress_struct *); 
  jpeg_component_info **cur_comp_info; 
  jpeg_component_info *v14; 
  int dc_tbl_no; 
  void **v16; 
  void *v17; 

  entropy = cinfo->entropy;
  entropy[2].encode_mcu = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, __int16 (**)[64]))cinfo;
  LOBYTE(entropy[1].start_pass) = gather_statistics;
  Ss = cinfo->Ss;
  v6 = Ss == 0;
  if ( cinfo->Ah )
  {
    if ( Ss )
    {
      v8 = entropy[4].start_pass == NULL;
      entropy->encode_mcu = encode_mcu_AC_refine;
      if ( v8 )
      {
        v9 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1000i64);
        v6 = Ss == 0;
        entropy[4].start_pass = (void (__fastcall *)(jpeg_compress_struct *, unsigned __int8))v9;
      }
    }
    else
    {
      entropy->encode_mcu = encode_mcu_DC_refine;
    }
  }
  else
  {
    v7 = encode_mcu_DC_first;
    if ( Ss )
      v7 = encode_mcu_AC_first;
    entropy->encode_mcu = v7;
  }
  v10 = finish_pass_gather_phuff;
  if ( !gather_statistics )
    v10 = finish_pass_phuff;
  v11 = 0;
  entropy->finish_pass = v10;
  if ( cinfo->comps_in_scan > 0 )
  {
    p_finish_pass = &entropy[2].finish_pass;
    cur_comp_info = cinfo->cur_comp_info;
    while ( 1 )
    {
      v14 = *cur_comp_info;
      *(_DWORD *)p_finish_pass = 0;
      if ( Ss )
        break;
      if ( !cinfo->Ah )
      {
        dc_tbl_no = v14->dc_tbl_no;
        goto LABEL_17;
      }
LABEL_24:
      v6 = Ss == 0;
      ++v11;
      ++cur_comp_info;
      p_finish_pass = (void (__fastcall **)(jpeg_compress_struct *))((char *)p_finish_pass + 4);
      if ( v11 >= cinfo->comps_in_scan )
        goto LABEL_25;
    }
    dc_tbl_no = v14->ac_tbl_no;
    LODWORD(entropy[3].encode_mcu) = dc_tbl_no;
LABEL_17:
    if ( gather_statistics )
    {
      if ( (unsigned int)dc_tbl_no > 3 )
      {
        cinfo->err->msg_code = 50;
        cinfo->err->msg_parm.i[0] = dc_tbl_no;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      v16 = (void **)(&entropy[6].start_pass + dc_tbl_no);
      v17 = *v16;
      if ( !*v16 )
      {
        v17 = (void *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1028i64);
        *v16 = v17;
      }
      memset_0(v17, 0, 0x404ui64);
    }
    else
    {
      j_jpeg_make_c_derived_tbl(cinfo, v6, dc_tbl_no, (c_derived_tbl **)&entropy[4].finish_pass + dc_tbl_no);
    }
    goto LABEL_24;
  }
LABEL_25:
  *(unsigned __int8 (__fastcall **)(jpeg_compress_struct *, __int16 (**)[64]))((char *)&entropy[3].encode_mcu + 4) = NULL;
  entropy[2].start_pass = NULL;
  entropy[4].encode_mcu = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, __int16 (**)[64]))cinfo->restart_interval;
}

