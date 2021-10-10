/*
==============
start_input_pass
==============
*/
void start_input_pass(jpeg_decompress_struct *cinfo)
{
  int v2; 
  jpeg_component_info **cur_comp_info; 
  jpeg_component_info *v4; 
  __int64 quant_tbl_no; 
  __int64 v6; 
  __m256i *v7; 
  __m256i *v8; 

  per_scan_setup(cinfo);
  v2 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    cur_comp_info = cinfo->cur_comp_info;
    do
    {
      v4 = *cur_comp_info;
      if ( !(*cur_comp_info)->quant_table )
      {
        quant_tbl_no = v4->quant_tbl_no;
        v6 = quant_tbl_no;
        if ( (unsigned int)quant_tbl_no > 3 || !cinfo->quant_tbl_ptrs[quant_tbl_no] )
        {
          cinfo->err->msg_code = 52;
          cinfo->err->msg_parm.i[0] = quant_tbl_no;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        v7 = (__m256i *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 130i64);
        v8 = (__m256i *)cinfo->quant_tbl_ptrs[v6];
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4].m256i_i16[0] = v8[4].m256i_i16[0];
        v4->quant_table = (JQUANT_TBL *)v7;
      }
      ++v2;
      ++cur_comp_info;
    }
    while ( v2 < cinfo->comps_in_scan );
  }
  cinfo->entropy->start_pass(cinfo);
  cinfo->coef->start_input_pass(cinfo);
  cinfo->inputctl->consume_input = cinfo->coef->consume_data;
}

/*
==============
consume_data
==============
*/
__int64 consume_data(jpeg_decompress_struct *cinfo, __int64 a2, __int64 a3)
{
  jpeg_d_coef_controller *coef; 
  int v4; 
  char *v6; 
  __int64 start_input_pass_high; 
  unsigned int start_input_pass; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  char *v12; 
  __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  _QWORD *v16; 
  int v17; 
  unsigned __int64 v18; 
  void (__fastcall **v19)(jpeg_decompress_struct *); 
  unsigned int total_iMCU_rows; 
  unsigned int v21; 
  jpeg_d_coef_controller *v22; 
  int last_row_height; 
  __int64 result; 
  jpeg_component_info *v25; 
  int v26; 
  __int64 v27; 
  char v28[32]; 

  coef = cinfo->coef;
  v4 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    v6 = v28;
    do
    {
      ++v4;
      *(_QWORD *)v6 = ((__int64 (__fastcall *)(jpeg_decompress_struct *, _QWORD, _QWORD))cinfo->mem->access_virt_barray)(cinfo, *((_QWORD *)&coef[3].start_output_pass + *(int *)(*(_QWORD *)&v6[(char *)cinfo - v28 + 424] + 4i64)), *(_DWORD *)(*(_QWORD *)&v6[(char *)cinfo - v28 + 424] + 12i64) * cinfo->input_iMCU_row);
      v6 += 8;
    }
    while ( v4 < cinfo->comps_in_scan );
  }
  start_input_pass_high = SHIDWORD(coef[1].start_input_pass);
  v26 = start_input_pass_high;
  if ( (int)start_input_pass_high >= SLODWORD(coef[1].consume_data) )
  {
LABEL_21:
    total_iMCU_rows = cinfo->total_iMCU_rows;
    v21 = cinfo->input_iMCU_row + 1;
    cinfo->input_iMCU_row = v21;
    if ( v21 >= total_iMCU_rows )
    {
      cinfo->inputctl->finish_input_pass(cinfo);
      return 4i64;
    }
    else
    {
      v22 = cinfo->coef;
      if ( cinfo->comps_in_scan <= 1 )
      {
        v25 = cinfo->cur_comp_info[0];
        if ( v21 >= total_iMCU_rows - 1 )
          last_row_height = v25->last_row_height;
        else
          last_row_height = v25->v_samp_factor;
      }
      else
      {
        last_row_height = 1;
      }
      LODWORD(v22[1].consume_data) = last_row_height;
      result = 3i64;
      v22[1].start_input_pass = NULL;
    }
  }
  else
  {
    start_input_pass = (unsigned int)coef[1].start_input_pass;
    v9 = 8 * start_input_pass_high;
    v27 = 8 * start_input_pass_high;
    while ( start_input_pass >= cinfo->MCUs_per_row )
    {
LABEL_20:
      LODWORD(start_input_pass_high) = start_input_pass_high + 1;
      LODWORD(coef[1].start_input_pass) = 0;
      v9 += 8i64;
      v26 = start_input_pass_high;
      start_input_pass = 0;
      v27 = v9;
      if ( (int)start_input_pass_high >= SLODWORD(coef[1].consume_data) )
        goto LABEL_21;
    }
    while ( 1 )
    {
      v10 = 0i64;
      v11 = 0;
      if ( cinfo->comps_in_scan > 0 )
      {
        v12 = v28;
        do
        {
          v13 = *(_QWORD *)&v12[(char *)cinfo - v28 + 424];
          v14 = 0;
          a3 = *(unsigned int *)(v13 + 52);
          if ( *(int *)(v13 + 56) > 0 )
          {
            v15 = (unsigned __int64)(start_input_pass * *(_DWORD *)(v13 + 52)) << 7;
            v16 = (_QWORD *)(v9 + *(_QWORD *)v12);
            do
            {
              v17 = 0;
              v18 = v15 + *v16;
              if ( (int)a3 > 0 )
              {
                v19 = &coef[1].start_output_pass + v10;
                do
                {
                  *v19++ = (void (__fastcall *)(jpeg_decompress_struct *))v18;
                  a3 = *(unsigned int *)(v13 + 52);
                  v18 += 128i64;
                  ++v10;
                  ++v17;
                }
                while ( v17 < (int)a3 );
              }
              ++v14;
              ++v16;
            }
            while ( v14 < *(_DWORD *)(v13 + 56) );
            v9 = v27;
          }
          ++v11;
          v12 += 8;
        }
        while ( v11 < cinfo->comps_in_scan );
      }
      if ( !((unsigned __int8 (__fastcall *)(jpeg_decompress_struct *, void (__fastcall **)(jpeg_decompress_struct *), __int64, __int64))cinfo->entropy->decode_mcu)(cinfo, &coef[1].start_output_pass, a3, v10) )
        break;
      v9 = v27;
      if ( ++start_input_pass >= cinfo->MCUs_per_row )
      {
        LODWORD(start_input_pass_high) = v26;
        goto LABEL_20;
      }
    }
    HIDWORD(coef[1].start_input_pass) = v26;
    result = 0i64;
    LODWORD(coef[1].start_input_pass) = start_input_pass;
  }
  return result;
}

/*
==============
decompress_data
==============
*/
__int64 decompress_data(jpeg_decompress_struct *cinfo, unsigned __int8 ***output_buf)
{
  unsigned __int8 ***v2; 
  jpeg_d_coef_controller *coef; 
  unsigned int v4; 
  int input_scan_number; 
  __int64 result; 
  jpeg_component_info *comp_info; 
  int v9; 
  unsigned __int8 ***v10; 
  __int64 v11; 
  __int64 v12; 
  int v_samp_factor; 
  __int64 v14; 
  char *v15; 
  unsigned __int8 **v16; 
  void (__fastcall *v17)(jpeg_decompress_struct *, jpeg_component_info *, __int64, unsigned __int8 **, int); 
  int DCT_scaled_size; 
  unsigned int width_in_blocks; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  unsigned __int8 ***v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  int v28; 
  __int64 v29; 

  v2 = output_buf;
  coef = cinfo->coef;
  v4 = cinfo->total_iMCU_rows - 1;
  v26 = v4;
  while ( 1 )
  {
    input_scan_number = cinfo->input_scan_number;
    if ( input_scan_number >= cinfo->output_scan_number && (input_scan_number != cinfo->output_scan_number || cinfo->input_iMCU_row > cinfo->output_iMCU_row) )
      break;
    result = cinfo->inputctl->consume_input(cinfo);
    if ( !(_DWORD)result )
      return result;
  }
  comp_info = cinfo->comp_info;
  v9 = 0;
  v28 = 0;
  if ( cinfo->num_components > 0 )
  {
    v10 = v2;
    v23 = v2;
    v11 = (char *)coef - (char *)v2 + 136;
    v29 = v11;
    do
    {
      if ( comp_info->component_needed )
      {
        v12 = ((__int64 (__fastcall *)(jpeg_decompress_struct *, _QWORD, _QWORD))cinfo->mem->access_virt_barray)(cinfo, *(unsigned __int8 ***)((char *)v10 + v11), comp_info->v_samp_factor * cinfo->output_iMCU_row);
        v24 = v12;
        if ( cinfo->output_iMCU_row >= v4 )
        {
          v_samp_factor = comp_info->height_in_blocks % comp_info->v_samp_factor;
          if ( !v_samp_factor )
            v_samp_factor = comp_info->v_samp_factor;
        }
        else
        {
          v_samp_factor = comp_info->v_samp_factor;
        }
        v14 = 0i64;
        v15 = (char *)((char *)cinfo->idct - (char *)v2);
        v16 = *v10;
        v17 = *(void (__fastcall **)(jpeg_decompress_struct *, jpeg_component_info *, __int64, unsigned __int8 **, int))((char *)v10 + (_QWORD)v15 + 8);
        v25 = v_samp_factor;
        if ( v_samp_factor > 0 )
        {
          DCT_scaled_size = comp_info->DCT_scaled_size;
          width_in_blocks = comp_info->width_in_blocks;
          do
          {
            v20 = *(_QWORD *)(v12 + 8 * v14);
            v21 = 0;
            v22 = 0;
            if ( width_in_blocks )
            {
              do
              {
                v17(cinfo, comp_info, v20, v16, v21);
                DCT_scaled_size = comp_info->DCT_scaled_size;
                v20 += 128i64;
                width_in_blocks = comp_info->width_in_blocks;
                v21 += DCT_scaled_size;
                ++v22;
              }
              while ( v22 < width_in_blocks );
              v12 = v24;
            }
            ++v14;
            v16 += DCT_scaled_size;
          }
          while ( v14 < v25 );
          v10 = v23;
          v9 = v28;
        }
        v11 = v29;
        v4 = v26;
        v2 = output_buf;
      }
      ++v9;
      ++v10;
      ++comp_info;
      v28 = v9;
      v23 = v10;
    }
    while ( v9 < cinfo->num_components );
  }
  return 4 - (unsigned int)(++cinfo->output_iMCU_row < cinfo->total_iMCU_rows);
}

/*
==============
decompress_onepass
==============
*/
__int64 decompress_onepass(jpeg_decompress_struct *cinfo, unsigned __int8 ***output_buf)
{
  jpeg_d_coef_controller *coef; 
  unsigned int MCUs_per_row; 
  unsigned __int8 ***v5; 
  unsigned int total_iMCU_rows; 
  unsigned int v7; 
  int start_input_pass_high; 
  unsigned int v9; 
  unsigned int start_input_pass; 
  void **p_start_output_pass; 
  int v12; 
  int v13; 
  jpeg_component_info **cur_comp_info; 
  int *v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  unsigned __int8 **v19; 
  int v20; 
  unsigned __int8 **v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  __int16 **v25; 
  unsigned int input_iMCU_row; 
  unsigned int v27; 
  jpeg_d_coef_controller *v28; 
  int last_row_height; 
  __int64 result; 
  jpeg_component_info *v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  int v35; 
  int v36; 
  jpeg_d_coef_controller *v37; 
  jpeg_component_info **v38; 
  void (__fastcall *v39)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, unsigned __int8 **, unsigned int); 
  void **v40; 
  unsigned int v41; 
  unsigned int v43; 
  int v44; 

  coef = cinfo->coef;
  MCUs_per_row = cinfo->MCUs_per_row;
  v5 = output_buf;
  total_iMCU_rows = cinfo->total_iMCU_rows;
  v7 = MCUs_per_row - 1;
  v37 = coef;
  start_input_pass_high = HIDWORD(coef[1].start_input_pass);
  v33 = v7;
  v9 = total_iMCU_rows - 1;
  v35 = start_input_pass_high;
  v43 = total_iMCU_rows - 1;
  if ( start_input_pass_high >= SLODWORD(coef[1].consume_data) )
  {
LABEL_30:
    input_iMCU_row = cinfo->input_iMCU_row;
    ++cinfo->output_iMCU_row;
    v27 = input_iMCU_row + 1;
    cinfo->input_iMCU_row = v27;
    if ( v27 >= total_iMCU_rows )
    {
      cinfo->inputctl->finish_input_pass(cinfo);
      return 4i64;
    }
    else
    {
      v28 = cinfo->coef;
      if ( cinfo->comps_in_scan <= 1 )
      {
        v31 = cinfo->cur_comp_info[0];
        if ( v27 >= total_iMCU_rows - 1 )
          last_row_height = v31->last_row_height;
        else
          last_row_height = v31->v_samp_factor;
      }
      else
      {
        last_row_height = 1;
      }
      LODWORD(v28[1].consume_data) = last_row_height;
      result = 3i64;
      v28[1].start_input_pass = NULL;
    }
  }
  else
  {
    start_input_pass = (unsigned int)coef[1].start_input_pass;
    v41 = start_input_pass;
    while ( start_input_pass > v7 )
    {
LABEL_28:
      ++start_input_pass_high;
      LODWORD(coef[1].start_input_pass) = 0;
      start_input_pass = 0;
      v35 = start_input_pass_high;
      v41 = 0;
      if ( start_input_pass_high >= SLODWORD(coef[1].consume_data) )
      {
        total_iMCU_rows = cinfo->total_iMCU_rows;
        goto LABEL_30;
      }
    }
    p_start_output_pass = (void **)&coef[1].start_output_pass;
    v40 = p_start_output_pass;
    while ( 1 )
    {
      j_jzero_far(*p_start_output_pass, (__int64)cinfo->blocks_in_MCU << 7);
      if ( !cinfo->entropy->decode_mcu(cinfo, (__int16 (**)[64])p_start_output_pass) )
        break;
      v12 = 0;
      v13 = 0;
      v34 = 0;
      if ( cinfo->comps_in_scan > 0 )
      {
        cur_comp_info = cinfo->cur_comp_info;
        v38 = cinfo->cur_comp_info;
        do
        {
          v15 = (int *)*cur_comp_info;
          if ( (*cur_comp_info)->component_needed )
          {
            v16 = v15[1];
            v39 = cinfo->idct->inverse_DCT[v16];
            if ( start_input_pass >= v7 )
              v17 = v15[17];
            else
              v17 = v15[13];
            v18 = v15[9];
            v32 = v17;
            v19 = v5[v16];
            v20 = 0;
            v44 = 0;
            v21 = &v19[start_input_pass_high * v18];
            v22 = start_input_pass * v15[16];
            v36 = v22;
            if ( v15[14] > 0 )
            {
              do
              {
                if ( cinfo->input_iMCU_row < v9 || v20 + start_input_pass_high < v15[18] )
                {
                  v23 = v17;
                  v24 = v22;
                  if ( v17 > 0 )
                  {
                    v25 = (__int16 **)(&v37[1].start_output_pass + v13);
                    do
                    {
                      v39(cinfo, (jpeg_component_info *)v15, *v25, v21, v24);
                      v18 = v15[9];
                      ++v25;
                      v24 += v18;
                      --v23;
                    }
                    while ( v23 );
                    v20 = v44;
                    v22 = v36;
                    start_input_pass_high = v35;
                  }
                  v9 = v43;
                }
                v13 += v15[13];
                ++v20;
                v17 = v32;
                v44 = v20;
                v21 += v18;
              }
              while ( v20 < v15[14] );
              cur_comp_info = v38;
              v12 = v34;
              start_input_pass = v41;
            }
            v5 = output_buf;
            v7 = v33;
          }
          else
          {
            v13 += v15[15];
          }
          ++v12;
          ++cur_comp_info;
          v34 = v12;
          v38 = cur_comp_info;
        }
        while ( v12 < cinfo->comps_in_scan );
        p_start_output_pass = v40;
      }
      v41 = ++start_input_pass;
      if ( start_input_pass > v7 )
      {
        coef = v37;
        goto LABEL_28;
      }
    }
    HIDWORD(v37[1].start_input_pass) = start_input_pass_high;
    LODWORD(v37[1].start_input_pass) = start_input_pass;
    return 0i64;
  }
  return result;
}

/*
==============
decompress_smooth_data
==============
*/
__int64 decompress_smooth_data(jpeg_decompress_struct *cinfo, unsigned __int8 ***output_buf)
{
  jpeg_d_coef_controller *coef; 
  jpeg_decompress_struct *v3; 
  unsigned int v5; 
  int input_scan_number; 
  int output_scan_number; 
  jpeg_input_controller *inputctl; 
  jpeg_component_info *comp_info; 
  int v10; 
  void (__fastcall **p_start_output_pass)(jpeg_decompress_struct *); 
  __int64 v12; 
  __int64 v13; 
  unsigned int output_iMCU_row; 
  int v15; 
  char v16; 
  unsigned int v_samp_factor; 
  __int64 v18; 
  jpeg_memory_mgr *mem; 
  void (__fastcall *v21)(jpeg_decompress_struct *); 
  __int64 v22; 
  char v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int16 *quantval; 
  int v27; 
  _DWORD *v28; 
  __int64 v29; 
  __int16 (*v30)[64]; 
  __int16 *v31; 
  __int16 *v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  __int64 DCT_scaled_size; 
  int v70; 
  char v71; 
  char v72; 
  int v73; 
  int v74; 
  int v75; 
  unsigned int v76; 
  int v77; 
  int v78; 
  unsigned int v79; 
  unsigned int v80; 
  int v81; 
  int v82; 
  int v83; 
  jpeg_component_info *v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  __int16 *v90; 
  __int16 *v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  jpeg_d_coef_controller *v96; 
  __int64 v97; 
  void (__fastcall **v98)(jpeg_decompress_struct *); 
  char *v99; 
  void (__fastcall *v100)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, __int64, int); 
  __int64 v101; 
  __int64 v102; 
  __int16 output_row[64]; 

  coef = cinfo->coef;
  v3 = cinfo;
  v5 = cinfo->total_iMCU_rows - 1;
  v96 = coef;
  input_scan_number = v3->input_scan_number;
  output_scan_number = v3->output_scan_number;
  v76 = v5;
  if ( input_scan_number > output_scan_number )
  {
LABEL_8:
    comp_info = v3->comp_info;
    v10 = 0;
    v83 = 0;
    v84 = comp_info;
    if ( v3->num_components > 0 )
    {
      p_start_output_pass = &coef[3].start_output_pass;
      v12 = 0i64;
      v97 = 0i64;
      v13 = -136i64 - (_QWORD)coef;
      v99 = (char *)((char *)output_buf - (char *)coef - 136);
      v102 = -136i64 - (_QWORD)coef;
      v98 = &coef[3].start_output_pass;
      do
      {
        if ( comp_info->component_needed )
        {
          output_iMCU_row = v3->output_iMCU_row;
          if ( output_iMCU_row >= v5 )
          {
            v_samp_factor = comp_info->v_samp_factor;
            v16 = 1;
            v15 = comp_info->height_in_blocks % v_samp_factor;
            if ( !v15 )
              v15 = comp_info->v_samp_factor;
            v18 = (unsigned int)v15;
          }
          else
          {
            v15 = comp_info->v_samp_factor;
            v16 = 0;
            v_samp_factor = v15;
            v18 = (unsigned int)(2 * v15);
          }
          mem = v3->mem;
          v21 = *p_start_output_pass;
          v72 = v16;
          v82 = v15;
          LOBYTE(v70) = 0;
          if ( output_iMCU_row )
          {
            v22 = (__int64)mem->access_virt_barray((jpeg_common_struct *)v3, (jvirt_barray_control *)v21, v_samp_factor * (output_iMCU_row - 1), v_samp_factor + (unsigned int)v18, v70);
            comp_info = v84;
            v23 = 0;
            v24 = v22 + 8i64 * v84->v_samp_factor;
            v94 = v24;
          }
          else
          {
            v25 = (__int64)mem->access_virt_barray((jpeg_common_struct *)v3, (jvirt_barray_control *)v21, 0, v18, v70);
            comp_info = v84;
            v23 = 1;
            v24 = v25;
            v94 = v25;
          }
          quantval = comp_info->quant_table->quantval;
          v27 = 0;
          v28 = (_DWORD *)((char *)coef[5].start_output_pass + v12);
          v71 = v23;
          v81 = 0;
          v89 = quantval[1];
          v77 = *quantval;
          v86 = quantval[16];
          v85 = quantval[8];
          v88 = quantval[2];
          v87 = quantval[9];
          v29 = 0i64;
          v100 = *(void (__fastcall **)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, __int64, int))((char *)v3->idct->inverse_DCT + v13 + (unsigned __int64)p_start_output_pass);
          v93 = 0i64;
          v92 = *(__int64 *)((char *)p_start_output_pass + (_QWORD)v99);
          v101 = v15;
          if ( v15 > 0 )
          {
            do
            {
              v30 = *(__int16 (**)[64])(v24 + 8 * v29);
              if ( !v23 || (v31 = *(__int16 **)(v24 + 8 * v29), v29) )
                v31 = *(__int16 **)(v24 + 8 * v29 - 8);
              if ( !v16 || (v32 = *(__int16 **)(v24 + 8 * v29), v27 != v15 - 1) )
                v32 = *(__int16 **)(v24 + 8 * v29 + 8);
              v33 = *v31;
              v34 = *v32;
              v35 = *(_WORD *)v30;
              v36 = v33;
              v37 = v35;
              v73 = v33;
              v74 = v35;
              v91 = v32 + 64;
              v38 = v34;
              v75 = v34;
              v78 = 0;
              v80 = comp_info->width_in_blocks - 1;
              v79 = 0;
              v90 = v31 + 64;
              do
              {
                j_jcopy_block_row(v30, (__int16 (*)[64])output_row, 1u);
                if ( v79 < v80 )
                {
                  v35 = (*v30)[64];
                  v33 = *v90;
                  v34 = *v91;
                }
                v39 = v28[1];
                if ( v39 && !output_row[1] )
                {
                  v40 = v89 << 7;
                  v41 = v89 << 8;
                  v42 = 36 * v77 * (v37 - v35);
                  if ( v42 < 0 )
                  {
                    v44 = (v40 - v42) / v41;
                    if ( v39 > 0 && v44 >= 1 << v39 )
                      v44 = (1 << v39) - 1;
                    v43 = -v44;
                  }
                  else
                  {
                    v43 = (v42 + v40) / v41;
                    if ( v39 > 0 && v43 >= 1 << v39 )
                      LOWORD(v43) = (1 << v39) - 1;
                  }
                  output_row[1] = v43;
                }
                v45 = v28[2];
                if ( v45 && !output_row[8] )
                {
                  v46 = v85 << 7;
                  v47 = v85 << 8;
                  v48 = 36 * v77 * (v73 - v75);
                  if ( v48 < 0 )
                  {
                    v50 = (v46 - v48) / v47;
                    if ( v45 > 0 && v50 >= 1 << v45 )
                      v50 = (1 << v45) - 1;
                    v49 = -v50;
                  }
                  else
                  {
                    v49 = (v48 + v46) / v47;
                    if ( v45 > 0 && v49 >= 1 << v45 )
                      LOWORD(v49) = (1 << v45) - 1;
                  }
                  output_row[8] = v49;
                }
                v51 = v28[3];
                if ( v51 && !output_row[16] )
                {
                  v52 = 9 * v77 * (v73 + v75 - 2 * v74);
                  v53 = v86 << 8;
                  v54 = v86 << 7;
                  if ( v52 < 0 )
                  {
                    v56 = (v54 - v52) / v53;
                    if ( v51 > 0 && v56 >= 1 << v51 )
                      v56 = (1 << v51) - 1;
                    v55 = -v56;
                  }
                  else
                  {
                    v55 = (v52 + v54) / v53;
                    if ( v51 > 0 && v55 >= 1 << v51 )
                      LOWORD(v55) = (1 << v51) - 1;
                  }
                  output_row[16] = v55;
                }
                v57 = v28[4];
                if ( v57 && !output_row[9] )
                {
                  v58 = 5 * v77 * (v36 + v34 - v38 - v33);
                  v59 = v87 << 7;
                  v60 = v87 << 8;
                  if ( v58 < 0 )
                  {
                    v62 = (v59 - v58) / v60;
                    if ( v57 > 0 && v62 >= 1 << v57 )
                      v62 = (1 << v57) - 1;
                    v61 = -v62;
                  }
                  else
                  {
                    v61 = (v58 + v59) / v60;
                    if ( v57 > 0 && v61 >= 1 << v57 )
                      LOWORD(v61) = (1 << v57) - 1;
                  }
                  output_row[9] = v61;
                }
                v63 = v28[5];
                if ( v63 && !output_row[2] )
                {
                  v64 = 9 * v77 * (v37 + v35 - 2 * v74);
                  v65 = v88 << 8;
                  v66 = v88 << 7;
                  if ( v64 < 0 )
                  {
                    v68 = (v66 - v64) / v65;
                    if ( v63 > 0 && v68 >= 1 << v63 )
                      v68 = (1 << v63) - 1;
                    v67 = -v68;
                  }
                  else
                  {
                    v67 = (v64 + v66) / v65;
                    if ( v63 > 0 && v67 >= 1 << v63 )
                      LOWORD(v67) = (1 << v63) - 1;
                  }
                  output_row[2] = v67;
                }
                v100(cinfo, v84, output_row, v92, v78);
                ++v30;
                comp_info = v84;
                v90 += 64;
                v91 += 64;
                v36 = v73;
                DCT_scaled_size = v84->DCT_scaled_size;
                v78 += DCT_scaled_size;
                v37 = v74;
                v38 = v75;
                v73 = v33;
                v74 = v35;
                v75 = v34;
                ++v79;
              }
              while ( v79 <= v80 );
              v27 = v81 + 1;
              v15 = v82;
              v29 = v93 + 1;
              v24 = v94;
              v23 = v71;
              v16 = v72;
              v92 += 8 * DCT_scaled_size;
              ++v81;
              v93 = v29;
            }
            while ( v29 < v101 );
            v3 = cinfo;
            p_start_output_pass = v98;
            v10 = v83;
            v12 = v97;
            v13 = v102;
          }
          coef = v96;
        }
        v5 = v76;
        ++v10;
        v12 += 24i64;
        v83 = v10;
        ++p_start_output_pass;
        v97 = v12;
        ++comp_info;
        v98 = p_start_output_pass;
        v84 = comp_info;
      }
      while ( v10 < v3->num_components );
    }
    return 4 - (unsigned int)(++v3->output_iMCU_row < v3->total_iMCU_rows);
  }
  else
  {
    while ( 1 )
    {
      inputctl = v3->inputctl;
      if ( inputctl->eoi_reached || input_scan_number == output_scan_number && __PAIR64__(v3->input_iMCU_row, v3->Ss) >= __PAIR64__(v3->output_iMCU_row, 1) && v3->input_iMCU_row != v3->output_iMCU_row + (v3->Ss == 0) )
      {
LABEL_7:
        v5 = v76;
        goto LABEL_8;
      }
      if ( !inputctl->consume_input(v3) )
        return 0i64;
      input_scan_number = v3->input_scan_number;
      output_scan_number = v3->output_scan_number;
      if ( input_scan_number > output_scan_number )
        goto LABEL_7;
    }
  }
}

/*
==============
dummy_consume_data
==============
*/
__int64 dummy_consume_data(jpeg_decompress_struct *cinfo)
{
  return 0i64;
}

/*
==============
jinit_d_coef_controller
==============
*/
void jinit_d_coef_controller(jpeg_decompress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  jpeg_d_coef_controller *v4; 
  jvirt_barray_control **v5; 
  int *p_height_in_blocks; 
  void (__fastcall **p_start_output_pass)(jpeg_decompress_struct *); 
  unsigned int v8; 
  jpeg_memory_mgr *mem; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 (__fastcall *v13)(jpeg_decompress_struct *, unsigned __int8 ***); 
  int (__fastcall *v14)(jpeg_decompress_struct *); 
  char *v15; 

  v4 = (jpeg_d_coef_controller *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 224i64);
  cinfo->coef = v4;
  v5 = NULL;
  v4->start_input_pass = start_input_pass_0;
  v4->start_output_pass = start_output_pass;
  v4[5].start_output_pass = NULL;
  if ( need_full_buffer )
  {
    if ( cinfo->num_components > 0 )
    {
      p_height_in_blocks = (int *)&cinfo->comp_info->height_in_blocks;
      p_start_output_pass = &v4[3].start_output_pass;
      do
      {
        v8 = *(p_height_in_blocks - 5);
        if ( cinfo->progressive_mode )
          v8 *= 3;
        mem = cinfo->mem;
        v10 = j_jround_up(*p_height_in_blocks, *(p_height_in_blocks - 5));
        v11 = j_jround_up(*(p_height_in_blocks - 1), *(p_height_in_blocks - 6));
        LOBYTE(v12) = 1;
        *p_start_output_pass = (void (__fastcall *)(jpeg_decompress_struct *))mem->request_virt_barray((jpeg_common_struct *)cinfo, 1i64, v12, v11, v10, v8);
        LODWORD(v5) = (_DWORD)v5 + 1;
        ++p_start_output_pass;
        p_height_in_blocks += 24;
      }
      while ( (int)v5 < cinfo->num_components );
    }
    v5 = (jvirt_barray_control **)&v4[3].start_output_pass;
    v13 = decompress_data;
    v14 = (int (__fastcall *)(jpeg_decompress_struct *))consume_data;
  }
  else
  {
    v15 = (char *)cinfo->mem->alloc_large(cinfo, 1i64, 1280i64);
    v4[1].start_output_pass = (void (__fastcall *)(jpeg_decompress_struct *))v15;
    v4[1].decompress_data = (int (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***))(v15 + 128);
    v4[1].coef_arrays = (jvirt_barray_control **)(v15 + 256);
    v4[2].start_input_pass = (void (__fastcall *)(jpeg_decompress_struct *))(v15 + 384);
    v4[2].consume_data = (int (__fastcall *)(jpeg_decompress_struct *))(v15 + 512);
    v4[2].start_output_pass = (void (__fastcall *)(jpeg_decompress_struct *))(v15 + 640);
    v4[2].decompress_data = (int (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***))(v15 + 768);
    v4[2].coef_arrays = (jvirt_barray_control **)(v15 + 896);
    v4[3].start_input_pass = (void (__fastcall *)(jpeg_decompress_struct *))(v15 + 1024);
    v14 = (int (__fastcall *)(jpeg_decompress_struct *))dummy_consume_data;
    v4[3].consume_data = (int (__fastcall *)(jpeg_decompress_struct *))(v15 + 1152);
    v13 = decompress_onepass;
  }
  v4->consume_data = v14;
  v4->decompress_data = (int (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***))v13;
  v4->coef_arrays = v5;
}

/*
==============
start_output_pass
==============
*/
void start_output_pass(jpeg_decompress_struct *cinfo)
{
  jpeg_d_coef_controller *coef; 
  char v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  _DWORD *v7; 
  JQUANT_TBL **p_quant_table; 
  JQUANT_TBL *v9; 
  int *v10; 
  bool v11; 
  char v12; 
  char v13; 
  char v14; 
  char v15; 
  __int64 (__fastcall *v16)(jpeg_decompress_struct *, unsigned __int8 ***); 

  coef = cinfo->coef;
  if ( coef->coef_arrays )
  {
    if ( cinfo->do_block_smoothing )
    {
      v3 = 0;
      if ( cinfo->progressive_mode )
      {
        if ( cinfo->coef_bits )
        {
          v4 = (__int64)coef[5].start_output_pass;
          if ( !v4 )
          {
            v4 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 24i64 * cinfo->num_components);
            coef[5].start_output_pass = (void (__fastcall *)(jpeg_decompress_struct *))v4;
          }
          v5 = 0;
          if ( cinfo->num_components > 0 )
          {
            v6 = 0i64;
            v7 = (_DWORD *)(v4 + 8);
            p_quant_table = &cinfo->comp_info->quant_table;
            while ( 1 )
            {
              v9 = *p_quant_table;
              if ( !*p_quant_table )
                break;
              if ( !v9->quantval[0] )
                break;
              if ( !v9->quantval[1] )
                break;
              if ( !v9->quantval[8] )
                break;
              if ( !v9->quantval[16] )
                break;
              if ( !v9->quantval[9] )
                break;
              if ( !v9->quantval[2] )
                break;
              v10 = cinfo->coef_bits[v6];
              if ( *v10 < 0 )
                break;
              *(v7 - 1) = v10[1];
              v11 = v10[1] == 0;
              *v7 = v10[2];
              v12 = v3;
              if ( !v11 )
                v12 = 1;
              v11 = v10[2] == 0;
              v7[1] = v10[3];
              v13 = v12;
              if ( !v11 )
                v13 = 1;
              v11 = v10[3] == 0;
              v7[2] = v10[4];
              v14 = v13;
              if ( !v11 )
                v14 = 1;
              v11 = v10[4] == 0;
              v7[3] = v10[5];
              v15 = v14;
              if ( !v11 )
                v15 = 1;
              v3 = v15;
              if ( v10[5] )
                v3 = 1;
              v7 += 6;
              ++v5;
              ++v6;
              p_quant_table += 12;
              if ( v5 >= cinfo->num_components )
              {
                if ( !v3 )
                  break;
                v16 = decompress_smooth_data;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
    v16 = decompress_data;
LABEL_30:
    coef->decompress_data = (int (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***))v16;
    cinfo->output_iMCU_row = 0;
  }
  else
  {
    cinfo->output_iMCU_row = 0;
  }
}

