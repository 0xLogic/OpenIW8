/*
==============
encode_mcu_gather
==============
*/
unsigned __int8 encode_mcu_gather(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_entropy_encoder *entropy; 
  unsigned int restart_interval; 
  unsigned int start_pass; 
  int v7; 
  unsigned __int8 (__fastcall **p_encode_mcu)(jpeg_compress_struct *, __int16 (**)[64]); 
  int *MCU_membership; 
  __int64 v10; 
  __int16 (*v11)[64]; 
  jpeg_component_info *v12; 
  _DWORD *v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  const int *v19; 
  int v20; 
  __int16 v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  __int16 (*v27)[64]; 
  __int64 v29; 
  int v30; 
  int *v31; 
  jpeg_entropy_encoder *v32; 

  entropy = cinfo->entropy;
  restart_interval = cinfo->restart_interval;
  v32 = entropy;
  if ( restart_interval )
  {
    start_pass = (unsigned int)entropy[2].start_pass;
    if ( !start_pass )
    {
      v7 = 0;
      start_pass = restart_interval;
      if ( cinfo->comps_in_scan > 0 )
      {
        p_encode_mcu = &entropy[1].encode_mcu;
        do
        {
          *(_DWORD *)p_encode_mcu = 0;
          p_encode_mcu = (unsigned __int8 (__fastcall **)(jpeg_compress_struct *, __int16 (**)[64]))((char *)p_encode_mcu + 4);
          ++v7;
        }
        while ( v7 < cinfo->comps_in_scan );
        start_pass = cinfo->restart_interval;
      }
    }
    LODWORD(entropy[2].start_pass) = start_pass - 1;
  }
  v30 = 0;
  if ( cinfo->blocks_in_MCU > 0 )
  {
    MCU_membership = cinfo->MCU_membership;
    v31 = cinfo->MCU_membership;
    do
    {
      v10 = *MCU_membership;
      v11 = *MCU_data;
      v12 = cinfo->cur_comp_info[v10];
      v13 = (_DWORD *)*((_QWORD *)&entropy[6].encode_mcu + v12->ac_tbl_no);
      v14 = *((_QWORD *)&entropy[5].start_pass + v12->dc_tbl_no);
      v15 = v10 + 8;
      LODWORD(v10) = *((_DWORD *)&entropy[1].encode_mcu + v10);
      v29 = v15;
      v16 = *(_WORD *)*MCU_data - (_DWORD)v10;
      v17 = v10 - *(_WORD *)*MCU_data;
      if ( v16 >= 0 )
        v17 = v16;
      v18 = 0i64;
      if ( v17 )
      {
        do
        {
          ++v18;
          v17 >>= 1;
        }
        while ( v17 );
        if ( v18 > 11 )
        {
          cinfo->err->msg_code = 6;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
      }
      ++*(_DWORD *)(v14 + 4 * v18);
      v19 = &jpeg_natural_order[1];
      v20 = 0;
      do
      {
        v21 = (*v11)[*v19];
        if ( v21 )
        {
          if ( v20 > 15 )
          {
            v22 = ((unsigned int)(v20 - 16) >> 4) + 1;
            v20 += -16 * v22;
            v13[240] += v22;
          }
          v23 = 1;
          v24 = -v21;
          if ( v21 >= 0 )
            v24 = v21;
          v25 = v24 >> 1;
          if ( v25 )
          {
            do
            {
              ++v23;
              v25 >>= 1;
            }
            while ( v25 );
            if ( v23 > 10 )
            {
              cinfo->err->msg_code = 6;
              cinfo->err->error_exit((jpeg_common_struct *)cinfo);
            }
          }
          ++v13[16 * v20 + v23];
          v20 = 0;
        }
        else
        {
          ++v20;
        }
        ++v19;
      }
      while ( (__int64)v19 < (__int64)&jpeg_natural_order[64] );
      v26 = v30;
      if ( v20 > 0 )
        ++*v13;
      v27 = *MCU_data;
      entropy = v32;
      ++MCU_data;
      ++v30;
      *((_DWORD *)&v32->start_pass + v29) = *(_WORD *)v27;
      MCU_membership = ++v31;
    }
    while ( v26 + 1 < cinfo->blocks_in_MCU );
  }
  return 1;
}

/*
==============
encode_mcu_huff
==============
*/
unsigned __int8 encode_mcu_huff(jpeg_compress_struct *cinfo, __int16 (**MCU_data)[64])
{
  jpeg_destination_mgr *dest; 
  int v3; 
  int start_pass_high; 
  unsigned __int8 *next_output_byte; 
  unsigned __int64 free_in_buffer; 
  jpeg_compress_struct *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int64 v15; 
  jpeg_destination_mgr *v16; 
  jpeg_destination_mgr *v17; 
  int v18; 
  int *v19; 
  int *MCU_membership; 
  __int64 v21; 
  __int64 v22; 
  __int16 (*v23)[64]; 
  unsigned int restart_interval; 
  unsigned int start_pass; 
  working_state state; 

  dest = cinfo->dest;
  v3 = 0;
  _RDI = cinfo->entropy;
  state.cinfo = cinfo;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+18h]
    vmovsd  xmm1, qword ptr [rdi+28h]
  }
  state.next_output_byte = dest->next_output_byte;
  state.free_in_buffer = dest->free_in_buffer;
  __asm
  {
    vmovups xmmword ptr [rbp+state.cur.EOBRUN], xmm0
    vmovsd  qword ptr [rbp+state.cur.last_dc_val+0Ch], xmm1
  }
  if ( !cinfo->restart_interval || LODWORD(_RDI[2].start_pass) )
    goto LABEL_13;
  start_pass_high = HIDWORD(_RDI[2].start_pass);
  if ( !emit_bits(&state, 0x7Fu, 7) )
    return 0;
  next_output_byte = state.next_output_byte;
  free_in_buffer = state.free_in_buffer;
  v12 = state.cinfo;
  *(_QWORD *)&state.cur.EOBRUN = 0i64;
  *state.next_output_byte = -1;
  v13 = next_output_byte + 1;
  v14 = v13;
  v15 = free_in_buffer - 1;
  if ( !v15 )
  {
    v16 = v12->dest;
    if ( !v16->empty_output_buffer(v12) )
      return 0;
    v13 = v16->next_output_byte;
    v15 = v16->free_in_buffer;
    v14 = v16->next_output_byte;
  }
  *v13 = start_pass_high - 48;
  state.next_output_byte = v14 + 1;
  state.free_in_buffer = v15 - 1;
  if ( v15 != 1 )
    goto LABEL_10;
  v17 = v12->dest;
  if ( !v17->empty_output_buffer(v12) )
    return 0;
  state.next_output_byte = v17->next_output_byte;
  state.free_in_buffer = v17->free_in_buffer;
LABEL_10:
  v18 = 0;
  if ( v12->comps_in_scan > 0 )
  {
    v19 = &state.cur.last_dc_val[1];
    do
    {
      *v19++ = 0;
      ++v18;
    }
    while ( v18 < state.cinfo->comps_in_scan );
  }
LABEL_13:
  if ( cinfo->blocks_in_MCU > 0 )
  {
    MCU_membership = cinfo->MCU_membership;
    do
    {
      v21 = *MCU_membership;
      v22 = v21;
      if ( !encode_one_block(&state, (__int16 *)*MCU_data, state.cur.last_dc_val[v21 + 1], *((c_derived_tbl **)&_RDI[2].encode_mcu + cinfo->cur_comp_info[v21]->dc_tbl_no), *((c_derived_tbl **)&_RDI[3].finish_pass + cinfo->cur_comp_info[v21]->ac_tbl_no)) )
        return 0;
      v23 = *MCU_data;
      ++v3;
      ++MCU_membership;
      ++MCU_data;
      state.cur.last_dc_val[v22 + 1] = *(_WORD *)v23;
    }
    while ( v3 < cinfo->blocks_in_MCU );
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+state.cur.EOBRUN]
    vmovsd  xmm1, qword ptr [rbp+state.cur.last_dc_val+0Ch]
  }
  cinfo->dest->next_output_byte = state.next_output_byte;
  cinfo->dest->free_in_buffer = state.free_in_buffer;
  __asm
  {
    vmovups xmmword ptr [rdi+18h], xmm0
    vmovsd  qword ptr [rdi+28h], xmm1
  }
  restart_interval = cinfo->restart_interval;
  if ( restart_interval )
  {
    start_pass = (unsigned int)_RDI[2].start_pass;
    if ( !start_pass )
    {
      HIDWORD(_RDI[2].start_pass) = ((unsigned __int8)HIDWORD(_RDI[2].start_pass) + 1) & 7;
      start_pass = restart_interval;
    }
    LODWORD(_RDI[2].start_pass) = start_pass - 1;
  }
  return 1;
}

/*
==============
encode_one_block
==============
*/
unsigned __int8 encode_one_block(working_state *state, __int16 *block, int last_dc_val, c_derived_tbl *dctbl, c_derived_tbl *actbl)
{
  int v7; 
  __int16 *v8; 
  unsigned int v10; 
  int v11; 
  int v12; 
  const int *v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 

  v7 = *block - last_dc_val;
  v8 = block;
  v10 = v7 - 1;
  if ( v7 >= 0 )
    v10 = v7;
  v11 = last_dc_val - *block;
  if ( v7 >= 0 )
    v11 = v7;
  v12 = 0;
  if ( v11 )
  {
    do
    {
      ++v12;
      v11 >>= 1;
    }
    while ( v11 );
    if ( v12 > 11 )
    {
      state->cinfo->err->msg_code = 6;
      state->cinfo->err->error_exit((jpeg_common_struct *)state->cinfo);
    }
  }
  if ( emit_bits(state, dctbl->ehufco[v12], dctbl->ehufsi[v12]) && (!v12 || emit_bits(state, v10, v12)) )
  {
    v13 = &jpeg_natural_order[1];
    v14 = 0;
    do
    {
      v15 = v8[*v13];
      if ( (_WORD)v15 )
      {
        if ( v14 > 15 )
        {
          while ( emit_bits(state, actbl->ehufco[240], actbl->ehufsi[240]) )
          {
            v14 -= 16;
            if ( v14 <= 15 )
              goto LABEL_18;
          }
          return 0;
        }
LABEL_18:
        v16 = v15 - 1;
        v17 = 1;
        if ( (v15 & 0x8000u) == 0 )
          v16 = v15;
        v18 = -v15;
        if ( (v15 & 0x8000u) == 0 )
          v18 = v15;
        v19 = v18 >> 1;
        if ( v19 )
        {
          do
          {
            ++v17;
            v19 >>= 1;
          }
          while ( v19 );
          if ( v17 > 10 )
          {
            state->cinfo->err->msg_code = 6;
            state->cinfo->err->error_exit((jpeg_common_struct *)state->cinfo);
          }
        }
        if ( !emit_bits(state, actbl->ehufco[16 * v14 + v17], actbl->ehufsi[16 * v14 + v17]) || !emit_bits(state, v16, v17) )
          return 0;
        v14 = 0;
      }
      else
      {
        ++v14;
      }
      v8 = block;
      ++v13;
    }
    while ( (__int64)v13 < (__int64)&jpeg_natural_order[64] );
    if ( v14 <= 0 || emit_bits(state, actbl->ehufco[0], actbl->ehufsi[0]) )
      return 1;
  }
  return 0;
}

/*
==============
finish_pass_gather
==============
*/
void finish_pass_gather(jpeg_compress_struct *cinfo)
{
  jpeg_entropy_encoder *entropy; 
  int v2; 
  jpeg_component_info **cur_comp_info; 
  __int64 dc_tbl_no; 
  __int64 ac_tbl_no; 
  JHUFF_TBL *v7; 
  JHUFF_TBL *v8; 
  int v9; 
  int v10; 

  entropy = cinfo->entropy;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      dc_tbl_no = (*cur_comp_info)->dc_tbl_no;
      ac_tbl_no = (*cur_comp_info)->ac_tbl_no;
      if ( !*((_BYTE *)&v9 + dc_tbl_no) )
      {
        v7 = cinfo->dc_huff_tbl_ptrs[dc_tbl_no];
        if ( !v7 )
        {
          v7 = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
          cinfo->dc_huff_tbl_ptrs[dc_tbl_no] = v7;
        }
        j_jpeg_gen_optimal_table(cinfo, v7, *((int **)&entropy[5].start_pass + dc_tbl_no));
        *((_BYTE *)&v9 + dc_tbl_no) = 1;
      }
      if ( !*((_BYTE *)&v10 + ac_tbl_no) )
      {
        v8 = cinfo->ac_huff_tbl_ptrs[ac_tbl_no];
        if ( !v8 )
        {
          v8 = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
          cinfo->ac_huff_tbl_ptrs[ac_tbl_no] = v8;
        }
        j_jpeg_gen_optimal_table(cinfo, v8, *((int **)&entropy[6].encode_mcu + ac_tbl_no));
        *((_BYTE *)&v10 + ac_tbl_no) = 1;
      }
      ++v2;
      ++cur_comp_info;
    }
    while ( v2 < cinfo->comps_in_scan );
  }
}

/*
==============
finish_pass_huff
==============
*/
void finish_pass_huff(jpeg_compress_struct *cinfo)
{
  jpeg_destination_mgr *dest; 
  working_state state; 

  dest = cinfo->dest;
  _RDI = cinfo->entropy;
  state.cinfo = cinfo;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+18h]
    vmovsd  xmm1, qword ptr [rdi+28h]
  }
  state.next_output_byte = dest->next_output_byte;
  state.free_in_buffer = dest->free_in_buffer;
  __asm
  {
    vmovups xmmword ptr [rsp+58h+state.cur.EOBRUN], xmm0
    vmovsd  qword ptr [rsp+58h+state.cur.last_dc_val+0Ch], xmm1
  }
  if ( emit_bits(&state, 0x7Fu, 7) )
  {
    *(_QWORD *)&state.cur.EOBRUN = 0i64;
  }
  else
  {
    cinfo->err->msg_code = 24;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+58h+state.cur.EOBRUN]
    vmovsd  xmm1, qword ptr [rsp+58h+state.cur.last_dc_val+0Ch]
  }
  cinfo->dest->next_output_byte = state.next_output_byte;
  cinfo->dest->free_in_buffer = state.free_in_buffer;
  __asm
  {
    vmovups xmmword ptr [rdi+18h], xmm0
    vmovsd  qword ptr [rdi+28h], xmm1
  }
}

/*
==============
jinit_huff_encoder
==============
*/
void jinit_huff_encoder(jpeg_compress_struct *cinfo)
{
  jpeg_entropy_encoder *v2; 

  v2 = (jpeg_entropy_encoder *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 184i64);
  cinfo->entropy = v2;
  v2->start_pass = start_pass_huff;
  v2[3].finish_pass = NULL;
  v2[2].encode_mcu = NULL;
  v2[6].encode_mcu = NULL;
  v2[5].start_pass = NULL;
  v2[4].start_pass = NULL;
  v2[2].finish_pass = NULL;
  v2[6].finish_pass = NULL;
  v2[5].encode_mcu = NULL;
  v2[4].encode_mcu = NULL;
  v2[3].start_pass = NULL;
  v2[7].start_pass = NULL;
  v2[5].finish_pass = NULL;
  v2[4].finish_pass = NULL;
  v2[3].encode_mcu = NULL;
  v2[7].encode_mcu = NULL;
  v2[6].start_pass = NULL;
}

/*
==============
jpeg_gen_optimal_table
==============
*/
void jpeg_gen_optimal_table(jpeg_compress_struct *cinfo, JHUFF_TBL *htbl, int *freq)
{
  int *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  char *v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  char i; 
  int v31; 
  __int64 v32; 
  char j; 
  int v34; 
  __int64 v35; 
  char k; 
  int v37; 
  __int64 v38; 
  char m; 
  int v40; 
  __int64 v41; 
  char n; 
  int v43; 
  __int64 v44; 
  char ii; 
  int v46; 
  __int64 v47; 
  char jj; 
  int v49; 
  __int64 v50; 
  _BYTE *kk; 
  int v52; 
  unsigned __int8 v53; 
  int v55; 
  __int64 v56; 
  int *v57; 
  int mm; 
  __int64 v59; 
  int *v60; 
  int nn; 
  __int64 v62; 
  int *v63; 
  int i1; 
  __int64 v65; 
  int *v66; 
  int i2; 
  __int64 v68; 
  int *v69; 
  int i3; 
  __int64 v71; 
  int *v72; 
  int i4; 
  __int64 v74; 
  int *v75; 
  int i5; 
  __int64 v77; 
  int *v78; 
  int i6; 
  __int64 v80; 
  int *v81; 
  int i7; 
  __int64 v83; 
  int *v84; 
  int i8; 
  __int64 v86; 
  int *v87; 
  int i9; 
  __int64 v89; 
  int *v90; 
  int i10; 
  __int64 v92; 
  int *v93; 
  int i11; 
  __int64 v95; 
  int *v96; 
  int i12; 
  __int64 v98; 
  int *v99; 
  int i13; 
  int v101; 
  __int64 v102; 
  int *v103; 
  int v104[260]; 
  int v105[260]; 
  __int128 v106; 
  __int64 v107; 
  __int64 v108; 
  char v109; 

  _R14 = htbl;
  v106 = 0ui64;
  v107 = 0i64;
  v108 = 0i64;
  v109 = 0;
  memset_0(v104, 0, 0x404ui64);
  v6 = v105;
  v7 = 16i64;
  do
  {
    *(_QWORD *)v6 = -1i64;
    *((_QWORD *)v6 + 1) = -1i64;
    *((_QWORD *)v6 + 2) = -1i64;
    v6 += 16;
    *((_QWORD *)v6 - 5) = -1i64;
    *((_QWORD *)v6 - 4) = -1i64;
    *((_QWORD *)v6 - 3) = -1i64;
    *((_QWORD *)v6 - 2) = -1i64;
    *((_QWORD *)v6 - 1) = -1i64;
    --v7;
  }
  while ( v7 );
  *v6 = -1;
  freq[256] = 1;
  while ( 1 )
  {
    v8 = 0xFFFFFFFFi64;
    v9 = -1i64;
    v10 = 1000000000;
    v11 = 0;
    v12 = 0i64;
    do
    {
      v13 = freq[v12];
      if ( v13 && v13 <= v10 )
      {
        v10 = freq[v12];
        v8 = (unsigned int)v11;
        v9 = v12;
      }
      ++v11;
      ++v12;
    }
    while ( v11 <= 256 );
    v14 = -1i64;
    v15 = 1000000000i64;
    v16 = -1;
    v17 = 0;
    v18 = 0i64;
    do
    {
      v19 = (unsigned int)freq[v18];
      if ( (_DWORD)v19 && (int)v19 <= (int)v15 && v18 != v9 )
      {
        v15 = (unsigned int)v19;
        v16 = v17;
        v14 = v18;
      }
      ++v17;
      ++v18;
    }
    while ( v17 <= 256 );
    if ( v16 < 0 )
      break;
    freq[v9] += freq[v14];
    ++v104[v9];
    freq[v14] = 0;
    if ( v105[v9] >= 0 )
    {
      v20 = v105[(int)v8];
      do
      {
        LODWORD(v8) = v20;
        ++v104[v20];
        v20 = v105[v20];
      }
      while ( v20 >= 0 );
    }
    ++v104[v14];
    v105[(int)v8] = v16;
    if ( v105[v14] >= 0 )
    {
      v21 = v105[v16];
      do
      {
        ++v104[v21];
        v21 = v105[v21];
      }
      while ( v21 >= 0 );
    }
  }
  v22 = v104;
  v23 = 257i64;
  do
  {
    v24 = *v22;
    if ( (_DWORD)v24 )
    {
      if ( (int)v24 > 32 )
      {
        cinfo->err->msg_code = 39;
        ((void (__fastcall *)(jpeg_compress_struct *, __int64, __int64, __int64))cinfo->err->error_exit)(cinfo, v19, v15, v8);
      }
      ++*((_BYTE *)&v106 + v24);
    }
    ++v22;
    --v23;
  }
  while ( v23 );
  v25 = 32;
  v26 = (char *)&v108 + 6;
  v27 = 2i64;
  do
  {
    for ( ; v26[2]; --*((_BYTE *)&v106 + v28) )
    {
      v28 = v25 - 2;
      if ( !*((_BYTE *)&v105[259] + v25 + 2) )
      {
        do
          v29 = v28--;
        while ( !*((_BYTE *)&v105[259] + v29 + 3) );
      }
      v26[2] -= 2;
      ++v26[1];
      *((_BYTE *)&v106 + v28 + 1) += 2;
    }
    for ( i = v26[1]; i; i = v26[1] )
    {
      v31 = v25 - 3;
      if ( !*((_BYTE *)&v105[259] + v25 + 1) )
      {
        do
          v32 = v31--;
        while ( !*((_BYTE *)&v105[259] + v32 + 3) );
      }
      v26[1] = i - 2;
      ++*v26;
      *((_BYTE *)&v106 + v31 + 1) += 2;
      --*((_BYTE *)&v106 + v31);
    }
    for ( j = *v26; *v26; j = *v26 )
    {
      v34 = v25 - 4;
      if ( !*((_BYTE *)&v105[259] + v25) )
      {
        do
          v35 = v34--;
        while ( !*((_BYTE *)&v105[259] + v35 + 3) );
      }
      *v26 = j - 2;
      ++*(v26 - 1);
      *((_BYTE *)&v106 + v34 + 1) += 2;
      --*((_BYTE *)&v106 + v34);
    }
    for ( k = *(v26 - 1); k; k = *(v26 - 1) )
    {
      v37 = v25 - 5;
      if ( !*((_BYTE *)&v105[258] + v25 + 3) )
      {
        do
          v38 = v37--;
        while ( !*((_BYTE *)&v105[259] + v38 + 3) );
      }
      *(v26 - 1) = k - 2;
      ++*(v26 - 2);
      *((_BYTE *)&v106 + v37 + 1) += 2;
      --*((_BYTE *)&v106 + v37);
    }
    for ( m = *(v26 - 2); m; m = *(v26 - 2) )
    {
      v40 = v25 - 6;
      if ( !*((_BYTE *)&v105[258] + v25 + 2) )
      {
        do
          v41 = v40--;
        while ( !*((_BYTE *)&v105[259] + v41 + 3) );
      }
      *(v26 - 2) = m - 2;
      ++*(v26 - 3);
      *((_BYTE *)&v106 + v40 + 1) += 2;
      --*((_BYTE *)&v106 + v40);
    }
    for ( n = *(v26 - 3); n; n = *(v26 - 3) )
    {
      v43 = v25 - 7;
      if ( !*((_BYTE *)&v105[258] + v25 + 1) )
      {
        do
          v44 = v43--;
        while ( !*((_BYTE *)&v105[259] + v44 + 3) );
      }
      *(v26 - 3) = n - 2;
      ++*(v26 - 4);
      *((_BYTE *)&v106 + v43 + 1) += 2;
      --*((_BYTE *)&v106 + v43);
    }
    for ( ii = *(v26 - 4); ii; ii = *(v26 - 4) )
    {
      v46 = v25 - 8;
      if ( !*((_BYTE *)&v105[258] + v25) )
      {
        do
          v47 = v46--;
        while ( !*((_BYTE *)&v105[259] + v47 + 3) );
      }
      *(v26 - 4) = ii - 2;
      ++*(v26 - 5);
      *((_BYTE *)&v106 + v46 + 1) += 2;
      --*((_BYTE *)&v106 + v46);
    }
    for ( jj = *(v26 - 5); jj; jj = *(v26 - 5) )
    {
      v49 = v25 - 9;
      if ( !*((_BYTE *)&v105[257] + v25 + 3) )
      {
        do
          v50 = v49--;
        while ( !*((_BYTE *)&v105[259] + v50 + 3) );
      }
      *(v26 - 5) = jj - 2;
      ++*(v26 - 6);
      *((_BYTE *)&v106 + v49 + 1) += 2;
      --*((_BYTE *)&v106 + v49);
    }
    v25 -= 8;
    v26 -= 8;
    --v27;
  }
  while ( v27 );
  for ( kk = (char *)&v106 + v25; !*kk; --kk )
    --v25;
  v52 = 3;
  --*((_BYTE *)&v106 + v25);
  v53 = v107;
  __asm
  {
    vmovups xmm0, [rbp+7A0h+var_60]
    vmovups xmmword ptr [r14], xmm0
  }
  _R14->bits[16] = v53;
  v55 = 0;
  do
  {
    v56 = v55;
    v57 = v104;
    for ( mm = 0; mm <= 255; ++mm )
    {
      if ( *v57 == v52 - 2 )
      {
        ++v55;
        _R14->huffval[v56++] = mm;
      }
      ++v57;
    }
    v59 = v55;
    v60 = v104;
    for ( nn = 0; nn <= 255; ++nn )
    {
      if ( *v60 == v52 - 1 )
      {
        ++v55;
        _R14->huffval[v59++] = nn;
      }
      ++v60;
    }
    v62 = v55;
    v63 = v104;
    for ( i1 = 0; i1 <= 255; ++i1 )
    {
      if ( *v63 == v52 )
      {
        ++v55;
        _R14->huffval[v62++] = i1;
      }
      ++v63;
    }
    v65 = v55;
    v66 = v104;
    for ( i2 = 0; i2 <= 255; ++i2 )
    {
      if ( *v66 == v52 + 1 )
      {
        ++v55;
        _R14->huffval[v65++] = i2;
      }
      ++v66;
    }
    v68 = v55;
    v69 = v104;
    for ( i3 = 0; i3 <= 255; ++i3 )
    {
      if ( *v69 == v52 + 2 )
      {
        ++v55;
        _R14->huffval[v68++] = i3;
      }
      ++v69;
    }
    v71 = v55;
    v72 = v104;
    for ( i4 = 0; i4 <= 255; ++i4 )
    {
      if ( *v72 == v52 + 3 )
      {
        ++v55;
        _R14->huffval[v71++] = i4;
      }
      ++v72;
    }
    v74 = v55;
    v75 = v104;
    for ( i5 = 0; i5 <= 255; ++i5 )
    {
      if ( *v75 == v52 + 4 )
      {
        ++v55;
        _R14->huffval[v74++] = i5;
      }
      ++v75;
    }
    v77 = v55;
    v78 = v104;
    for ( i6 = 0; i6 <= 255; ++i6 )
    {
      if ( *v78 == v52 + 5 )
      {
        ++v55;
        _R14->huffval[v77++] = i6;
      }
      ++v78;
    }
    v80 = v55;
    v81 = v104;
    for ( i7 = 0; i7 <= 255; ++i7 )
    {
      if ( *v81 == v52 + 6 )
      {
        ++v55;
        _R14->huffval[v80++] = i7;
      }
      ++v81;
    }
    v83 = v55;
    v84 = v104;
    for ( i8 = 0; i8 <= 255; ++i8 )
    {
      if ( *v84 == v52 + 7 )
      {
        ++v55;
        _R14->huffval[v83++] = i8;
      }
      ++v84;
    }
    v86 = v55;
    v87 = v104;
    for ( i9 = 0; i9 <= 255; ++i9 )
    {
      if ( *v87 == v52 + 8 )
      {
        ++v55;
        _R14->huffval[v86++] = i9;
      }
      ++v87;
    }
    v89 = v55;
    v90 = v104;
    for ( i10 = 0; i10 <= 255; ++i10 )
    {
      if ( *v90 == v52 + 9 )
      {
        ++v55;
        _R14->huffval[v89++] = i10;
      }
      ++v90;
    }
    v92 = v55;
    v93 = v104;
    for ( i11 = 0; i11 <= 255; ++i11 )
    {
      if ( *v93 == v52 + 10 )
      {
        ++v55;
        _R14->huffval[v92++] = i11;
      }
      ++v93;
    }
    v95 = v55;
    v96 = v104;
    for ( i12 = 0; i12 <= 255; ++i12 )
    {
      if ( *v96 == v52 + 11 )
      {
        ++v55;
        _R14->huffval[v95++] = i12;
      }
      ++v96;
    }
    v98 = v55;
    v99 = v104;
    for ( i13 = 0; i13 <= 255; ++i13 )
    {
      if ( *v99 == v52 + 12 )
      {
        ++v55;
        _R14->huffval[v98++] = i13;
      }
      ++v99;
    }
    v101 = 0;
    v102 = v55;
    v103 = v104;
    do
    {
      if ( *v103 == v52 + 13 )
      {
        ++v55;
        _R14->huffval[v102++] = v101;
      }
      ++v101;
      ++v103;
    }
    while ( v101 <= 255 );
    v52 += 16;
  }
  while ( v52 - 2 <= 32 );
  _R14->sent_table = 0;
}

/*
==============
jpeg_make_c_derived_tbl
==============
*/
void jpeg_make_c_derived_tbl(jpeg_compress_struct *cinfo, __int64 isDC, int tblno, c_derived_tbl **pdtbl)
{
  __int64 v4; 
  char v6; 
  jpeg_compress_struct *v7; 
  JHUFF_TBL *v8; 
  c_derived_tbl *v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  unsigned __int64 v15; 
  char *v16; 
  int v17; 
  char v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  signed __int64 v24; 
  char *v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  char v29; 
  JHUFF_TBL *v30; 
  signed __int64 v31; 
  __int64 v32; 
  c_derived_tbl *v33; 
  int v34[260]; 
  char v35[272]; 

  v4 = tblno;
  v29 = isDC;
  v6 = isDC;
  v7 = cinfo;
  if ( (unsigned int)tblno > 3 )
  {
    cinfo->err->msg_code = 50;
    cinfo->err->msg_parm.i[0] = tblno;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( v6 )
    v8 = v7->dc_huff_tbl_ptrs[v4];
  else
    v8 = v7->ac_huff_tbl_ptrs[v4];
  v30 = v8;
  if ( !v8 )
  {
    v7->err->msg_code = 50;
    v7->err->msg_parm.i[0] = v4;
    v7->err->error_exit((jpeg_common_struct *)v7);
  }
  v33 = *pdtbl;
  if ( !*pdtbl )
  {
    v9 = (c_derived_tbl *)v7->mem->alloc_small((jpeg_common_struct *)v7, 1i64, 1280ui64);
    *pdtbl = v9;
    v33 = v9;
  }
  v10 = 0i64;
  v11 = 1;
  v12 = 0;
  v32 = 0i64;
  v13 = 0i64;
  v14 = &v8->bits[1];
  do
  {
    v15 = *v14;
    if ( (int)v15 + v12 > 256 )
    {
      v7->err->msg_code = 8;
      ((void (__fastcall *)(jpeg_compress_struct *, __int64, __int64))v7->err->error_exit)(v7, isDC, v13);
      v13 = v32;
    }
    if ( (_DWORD)v15 )
    {
      v16 = &v35[v13];
      v12 += v15;
      v13 += v15;
      v32 = v13;
      memset(v16, v11, v15);
      cinfo = NULL;
    }
    ++v11;
    ++v14;
  }
  while ( v11 <= 16 );
  if ( (unsigned __int64)v12 >= 0x101 )
  {
    j___report_rangecheckfailure(cinfo);
    JUMPOUT(0x14386BAA6i64);
  }
  v35[v12] = 0;
  v17 = 0;
  v18 = v35[0];
  v19 = v35[0];
  if ( v35[0] )
  {
    v20 = 0i64;
    v21 = __ROL4__(1, v35[0]);
    do
    {
      if ( v18 == v19 )
      {
        do
        {
          v22 = v35[v20 + 1];
          v34[v20++] = v17++;
        }
        while ( v22 == v19 );
      }
      if ( v17 >= v21 )
      {
        v7->err->msg_code = 8;
        ((void (__fastcall *)(jpeg_compress_struct *, __int64, __int64))v7->err->error_exit)(v7, isDC, v13);
      }
      v18 = v35[v20];
      v17 *= 2;
      ++v19;
      v21 = __ROL4__(v21, 1);
    }
    while ( v18 );
  }
  memset_0(v33->ehufsi, 0, sizeof(v33->ehufsi));
  v23 = 255;
  if ( v29 )
    v23 = 15;
  if ( v12 > 0i64 )
  {
    v24 = (char *)v30 - v35;
    v31 = (char *)v30 - v35;
    do
    {
      v25 = &v35[v10];
      v26 = (unsigned __int8)v35[v10 + 17 + v24];
      v27 = (unsigned int)v26;
      if ( (unsigned int)v26 > v23 || v33->ehufsi[v26] )
      {
        v7->err->msg_code = 8;
        v7->err->error_exit((jpeg_common_struct *)v7);
      }
      v28 = v34[v10++];
      v33->ehufco[v27] = v28;
      v33->ehufsi[v27] = *v25;
      v24 = v31;
    }
    while ( v10 < v12 );
  }
}

/*
==============
start_pass_huff
==============
*/
void start_pass_huff(jpeg_compress_struct *cinfo, unsigned __int8 gather_statistics)
{
  jpeg_entropy_encoder *entropy; 
  void (__fastcall *v5)(jpeg_compress_struct *); 
  unsigned __int8 (__fastcall *v6)(jpeg_compress_struct *, __int16 (**)[64]); 
  int v7; 
  unsigned __int8 (__fastcall **p_encode_mcu)(jpeg_compress_struct *, __int16 (**)[64]); 
  jpeg_component_info **cur_comp_info; 
  __int64 dc_tbl_no; 
  __int64 ac_tbl_no; 
  void *v12; 
  void *v13; 

  entropy = cinfo->entropy;
  v5 = finish_pass_gather;
  if ( !gather_statistics )
    v5 = finish_pass_huff;
  v6 = encode_mcu_gather;
  if ( !gather_statistics )
    v6 = encode_mcu_huff;
  entropy->encode_mcu = v6;
  entropy->finish_pass = v5;
  v7 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    p_encode_mcu = &entropy[1].encode_mcu;
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      dc_tbl_no = (*cur_comp_info)->dc_tbl_no;
      ac_tbl_no = (*cur_comp_info)->ac_tbl_no;
      if ( gather_statistics )
      {
        if ( (unsigned int)dc_tbl_no > 3 )
        {
          cinfo->err->msg_code = 50;
          cinfo->err->msg_parm.i[0] = dc_tbl_no;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        if ( (unsigned int)ac_tbl_no > 3 )
        {
          cinfo->err->msg_code = 50;
          cinfo->err->msg_parm.i[0] = ac_tbl_no;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        v12 = (void *)*((_QWORD *)&entropy[5].start_pass + dc_tbl_no);
        if ( !v12 )
        {
          v12 = (void *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1028i64);
          *((_QWORD *)&entropy[5].start_pass + dc_tbl_no) = v12;
        }
        memset_0(v12, 0, 0x404ui64);
        v13 = (void *)*((_QWORD *)&entropy[6].encode_mcu + ac_tbl_no);
        if ( !v13 )
        {
          v13 = (void *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1028i64);
          *((_QWORD *)&entropy[6].encode_mcu + ac_tbl_no) = v13;
        }
        memset_0(v13, 0, 0x404ui64);
      }
      else
      {
        j_jpeg_make_c_derived_tbl(cinfo, 1u, dc_tbl_no, (c_derived_tbl **)&entropy[2].encode_mcu + dc_tbl_no);
        j_jpeg_make_c_derived_tbl(cinfo, 0, ac_tbl_no, (c_derived_tbl **)&entropy[3].finish_pass + ac_tbl_no);
      }
      ++v7;
      *(_DWORD *)p_encode_mcu = 0;
      ++cur_comp_info;
      p_encode_mcu = (unsigned __int8 (__fastcall **)(jpeg_compress_struct *, __int16 (**)[64]))((char *)p_encode_mcu + 4);
    }
    while ( v7 < cinfo->comps_in_scan );
  }
  entropy[1].start_pass = NULL;
  entropy[2].start_pass = (void (__fastcall *)(jpeg_compress_struct *, unsigned __int8))cinfo->restart_interval;
}

