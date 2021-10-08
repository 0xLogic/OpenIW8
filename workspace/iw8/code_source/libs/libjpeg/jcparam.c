/*
==============
fill_dc_scans
==============
*/
jpeg_scan_info *fill_dc_scans(jpeg_scan_info *scanptr, int ncomps, int Ah, int Al)
{
  int v4; 
  int *component_index; 
  jpeg_scan_info *result; 

  v4 = 0;
  if ( ncomps > 4 )
  {
    do
    {
      scanptr->comps_in_scan = 1;
      scanptr->component_index[0] = v4++;
      *(_QWORD *)&scanptr->Ss = 0i64;
      scanptr->Ah = Ah;
      scanptr->Al = Al;
      ++scanptr;
    }
    while ( v4 < ncomps );
    return scanptr;
  }
  else
  {
    scanptr->comps_in_scan = ncomps;
    if ( ncomps > 0 )
    {
      component_index = scanptr->component_index;
      do
        *component_index++ = v4++;
      while ( v4 < ncomps );
    }
    *(_QWORD *)&scanptr->Ss = 0i64;
    result = scanptr + 1;
    scanptr->Ah = Ah;
    scanptr->Al = Al;
  }
  return result;
}

/*
==============
jpeg_add_quant_table
==============
*/
void jpeg_add_quant_table(jpeg_compress_struct *cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, unsigned __int8 force_baseline)
{
  __int64 v7; 
  bool v9; 
  JQUANT_TBL **v10; 
  __int64 i; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  v7 = which_tbl;
  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( (unsigned int)v7 > 3 )
  {
    cinfo->err->msg_code = 31;
    cinfo->err->msg_parm.i[0] = v7;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v9 = cinfo->quant_tbl_ptrs[v7] == NULL;
  v10 = &cinfo->quant_tbl_ptrs[v7];
  if ( v9 )
    *v10 = j_jpeg_alloc_quant_table((jpeg_common_struct *)cinfo);
  for ( i = 0i64; i < 64; i += 16i64 )
  {
    v12 = (signed int)(scale_factor * basic_table[i] + 50) / 100;
    if ( v12 > 0 )
    {
      if ( v12 > 0x7FFF )
        v12 = 0x7FFF;
    }
    else
    {
      v12 = 1;
    }
    if ( force_baseline && v12 > 255 )
      LOWORD(v12) = 255;
    (*v10)->quantval[i] = v12;
    v13 = (signed int)(scale_factor * basic_table[i + 1] + 50) / 100;
    if ( v13 > 0 )
    {
      if ( v13 > 0x7FFF )
        v13 = 0x7FFF;
    }
    else
    {
      v13 = 1;
    }
    if ( force_baseline && v13 > 255 )
      LOWORD(v13) = 255;
    (*v10)->quantval[i + 1] = v13;
    v14 = (signed int)(scale_factor * basic_table[i + 2] + 50) / 100;
    if ( v14 > 0 )
    {
      if ( v14 > 0x7FFF )
        v14 = 0x7FFF;
    }
    else
    {
      v14 = 1;
    }
    if ( force_baseline && v14 > 255 )
      LOWORD(v14) = 255;
    (*v10)->quantval[i + 2] = v14;
    v15 = (signed int)(scale_factor * basic_table[i + 3] + 50) / 100;
    if ( v15 > 0 )
    {
      if ( v15 > 0x7FFF )
        v15 = 0x7FFF;
    }
    else
    {
      v15 = 1;
    }
    if ( force_baseline && v15 > 255 )
      LOWORD(v15) = 255;
    (*v10)->quantval[i + 3] = v15;
    v16 = (signed int)(scale_factor * basic_table[i + 4] + 50) / 100;
    if ( v16 > 0 )
    {
      if ( v16 > 0x7FFF )
        v16 = 0x7FFF;
    }
    else
    {
      v16 = 1;
    }
    if ( force_baseline && v16 > 255 )
      LOWORD(v16) = 255;
    (*v10)->quantval[i + 4] = v16;
    v17 = (signed int)(scale_factor * basic_table[i + 5] + 50) / 100;
    if ( v17 > 0 )
    {
      if ( v17 > 0x7FFF )
        v17 = 0x7FFF;
    }
    else
    {
      v17 = 1;
    }
    if ( force_baseline && v17 > 255 )
      LOWORD(v17) = 255;
    (*v10)->quantval[i + 5] = v17;
    v18 = (signed int)(scale_factor * basic_table[i + 6] + 50) / 100;
    if ( v18 > 0 )
    {
      if ( v18 > 0x7FFF )
        v18 = 0x7FFF;
    }
    else
    {
      v18 = 1;
    }
    if ( force_baseline && v18 > 255 )
      LOWORD(v18) = 255;
    (*v10)->quantval[i + 6] = v18;
    v19 = (signed int)(scale_factor * basic_table[i + 7] + 50) / 100;
    if ( v19 > 0 )
    {
      if ( v19 > 0x7FFF )
        v19 = 0x7FFF;
    }
    else
    {
      v19 = 1;
    }
    if ( force_baseline && v19 > 255 )
      LOWORD(v19) = 255;
    (*v10)->quantval[i + 7] = v19;
    v20 = (signed int)(scale_factor * basic_table[i + 8] + 50) / 100;
    if ( v20 > 0 )
    {
      if ( v20 > 0x7FFF )
        v20 = 0x7FFF;
    }
    else
    {
      v20 = 1;
    }
    if ( force_baseline && v20 > 255 )
      LOWORD(v20) = 255;
    (*v10)->quantval[i + 8] = v20;
    v21 = (signed int)(scale_factor * basic_table[i + 9] + 50) / 100;
    if ( v21 > 0 )
    {
      if ( v21 > 0x7FFF )
        v21 = 0x7FFF;
    }
    else
    {
      v21 = 1;
    }
    if ( force_baseline && v21 > 255 )
      LOWORD(v21) = 255;
    (*v10)->quantval[i + 9] = v21;
    v22 = (signed int)(scale_factor * basic_table[i + 10] + 50) / 100;
    if ( v22 > 0 )
    {
      if ( v22 > 0x7FFF )
        v22 = 0x7FFF;
    }
    else
    {
      v22 = 1;
    }
    if ( force_baseline && v22 > 255 )
      LOWORD(v22) = 255;
    (*v10)->quantval[i + 10] = v22;
    v23 = (signed int)(scale_factor * basic_table[i + 11] + 50) / 100;
    if ( v23 > 0 )
    {
      if ( v23 > 0x7FFF )
        v23 = 0x7FFF;
    }
    else
    {
      v23 = 1;
    }
    if ( force_baseline && v23 > 255 )
      LOWORD(v23) = 255;
    (*v10)->quantval[i + 11] = v23;
    v24 = (signed int)(scale_factor * basic_table[i + 12] + 50) / 100;
    if ( v24 > 0 )
    {
      if ( v24 > 0x7FFF )
        v24 = 0x7FFF;
    }
    else
    {
      v24 = 1;
    }
    if ( force_baseline && v24 > 255 )
      LOWORD(v24) = 255;
    (*v10)->quantval[i + 12] = v24;
    v25 = (signed int)(scale_factor * basic_table[i + 13] + 50) / 100;
    if ( v25 > 0 )
    {
      if ( v25 > 0x7FFF )
        v25 = 0x7FFF;
    }
    else
    {
      v25 = 1;
    }
    if ( force_baseline && v25 > 255 )
      LOWORD(v25) = 255;
    (*v10)->quantval[i + 13] = v25;
    v26 = (signed int)(scale_factor * basic_table[i + 14] + 50) / 100;
    if ( v26 > 0 )
    {
      if ( v26 > 0x7FFF )
        v26 = 0x7FFF;
    }
    else
    {
      v26 = 1;
    }
    if ( force_baseline && v26 > 255 )
      LOWORD(v26) = 255;
    (*v10)->quantval[i + 14] = v26;
    v27 = (signed int)(scale_factor * basic_table[i + 15] + 50) / 100;
    if ( v27 > 0 )
    {
      if ( v27 > 0x7FFF )
        v27 = 0x7FFF;
    }
    else
    {
      v27 = 1;
    }
    if ( force_baseline && v27 > 255 )
      LOWORD(v27) = 255;
    (*v10)->quantval[i + 15] = v27;
  }
  (*v10)->sent_table = 0;
}

/*
==============
jpeg_default_colorspace
==============
*/
void jpeg_default_colorspace(jpeg_compress_struct *cinfo)
{
  jpeg_component_info *comp_info; 
  jpeg_component_info *v3; 
  jpeg_component_info *v4; 
  jpeg_component_info *v5; 
  jpeg_component_info *v6; 
  jpeg_component_info *v7; 
  jpeg_component_info *v8; 
  jpeg_component_info *v9; 
  jpeg_component_info *v10; 
  jpeg_component_info *v11; 
  jpeg_component_info *v12; 
  jpeg_component_info *v13; 

  switch ( cinfo->in_color_space )
  {
    case JCS_UNKNOWN:
      j_jpeg_set_colorspace(cinfo, JCS_UNKNOWN);
      break;
    case JCS_GRAYSCALE:
      if ( cinfo->global_state != 100 )
      {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      comp_info = cinfo->comp_info;
      cinfo->jpeg_color_space = JCS_GRAYSCALE;
      cinfo->write_Adobe_marker = 0;
      cinfo->write_JFIF_header = 1;
      cinfo->num_components = 1;
      comp_info->component_id = 1;
      comp_info->h_samp_factor = 1;
      *(_QWORD *)&comp_info->v_samp_factor = 1i64;
      *(_QWORD *)&comp_info->dc_tbl_no = 0i64;
      break;
    case JCS_RGB:
    case JCS_YCbCr:
      if ( cinfo->global_state != 100 )
      {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      v3 = cinfo->comp_info;
      cinfo->jpeg_color_space = JCS_YCbCr;
      cinfo->write_Adobe_marker = 0;
      cinfo->write_JFIF_header = 1;
      cinfo->num_components = 3;
      v3->component_id = 1;
      v3->h_samp_factor = 2;
      *(_QWORD *)&v3->v_samp_factor = 2i64;
      *(_QWORD *)&v3->dc_tbl_no = 0i64;
      v4 = cinfo->comp_info;
      v4[1].component_id = 2;
      v4[1].h_samp_factor = 1;
      v4[1].v_samp_factor = 1;
      v4[1].quant_tbl_no = 1;
      v4[1].dc_tbl_no = 1;
      v4[1].ac_tbl_no = 1;
      v5 = cinfo->comp_info;
      v5[2].component_id = 3;
      v5[2].h_samp_factor = 1;
      v5[2].v_samp_factor = 1;
      v5[2].quant_tbl_no = 1;
      v5[2].dc_tbl_no = 1;
      v5[2].ac_tbl_no = 1;
      break;
    case JCS_CMYK:
      if ( cinfo->global_state != 100 )
      {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      v6 = cinfo->comp_info;
      cinfo->jpeg_color_space = JCS_CMYK;
      cinfo->write_JFIF_header = 0;
      cinfo->write_Adobe_marker = 1;
      cinfo->num_components = 4;
      v6->component_id = 67;
      v6->h_samp_factor = 1;
      *(_QWORD *)&v6->v_samp_factor = 1i64;
      *(_QWORD *)&v6->dc_tbl_no = 0i64;
      v7 = cinfo->comp_info;
      v7[1].component_id = 77;
      v7[1].h_samp_factor = 1;
      *(_QWORD *)&v7[1].v_samp_factor = 1i64;
      *(_QWORD *)&v7[1].dc_tbl_no = 0i64;
      v8 = cinfo->comp_info;
      v8[2].component_id = 89;
      v8[2].h_samp_factor = 1;
      *(_QWORD *)&v8[2].v_samp_factor = 1i64;
      *(_QWORD *)&v8[2].dc_tbl_no = 0i64;
      v9 = cinfo->comp_info;
      v9[3].component_id = 75;
      v9[3].h_samp_factor = 1;
      *(_QWORD *)&v9[3].v_samp_factor = 1i64;
      *(_QWORD *)&v9[3].dc_tbl_no = 0i64;
      break;
    case JCS_YCCK:
      if ( cinfo->global_state != 100 )
      {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      v10 = cinfo->comp_info;
      cinfo->jpeg_color_space = JCS_YCCK;
      cinfo->write_JFIF_header = 0;
      cinfo->write_Adobe_marker = 1;
      cinfo->num_components = 4;
      v10->component_id = 1;
      v10->h_samp_factor = 2;
      *(_QWORD *)&v10->v_samp_factor = 2i64;
      *(_QWORD *)&v10->dc_tbl_no = 0i64;
      v11 = cinfo->comp_info;
      v11[1].component_id = 2;
      v11[1].h_samp_factor = 1;
      v11[1].v_samp_factor = 1;
      v11[1].quant_tbl_no = 1;
      v11[1].dc_tbl_no = 1;
      v11[1].ac_tbl_no = 1;
      v12 = cinfo->comp_info;
      v12[2].component_id = 3;
      v12[2].h_samp_factor = 1;
      v12[2].v_samp_factor = 1;
      v12[2].quant_tbl_no = 1;
      v12[2].dc_tbl_no = 1;
      v12[2].ac_tbl_no = 1;
      v13 = cinfo->comp_info;
      v13[3].component_id = 4;
      v13[3].h_samp_factor = 2;
      *(_QWORD *)&v13[3].v_samp_factor = 2i64;
      *(_QWORD *)&v13[3].dc_tbl_no = 0i64;
      break;
    default:
      cinfo->err->msg_code = 9;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      break;
  }
}

/*
==============
jpeg_quality_scaling
==============
*/
__int64 jpeg_quality_scaling(int quality)
{
  int v1; 

  v1 = 1;
  if ( quality > 0 )
    v1 = quality;
  if ( v1 > 100 )
  {
    v1 = 100;
    return (unsigned int)(2 * (100 - v1));
  }
  if ( v1 >= 50 )
    return (unsigned int)(2 * (100 - v1));
  return (unsigned int)(5000 / v1);
}

/*
==============
jpeg_set_colorspace
==============
*/
void jpeg_set_colorspace(jpeg_compress_struct *cinfo, J_COLOR_SPACE colorspace)
{
  jpeg_component_info *v4; 
  jpeg_component_info *v5; 
  jpeg_component_info *v6; 
  jpeg_component_info *v7; 
  jpeg_component_info *v8; 
  jpeg_component_info *v9; 
  jpeg_component_info *v10; 
  jpeg_component_info *v11; 
  jpeg_component_info *v12; 
  jpeg_component_info *v13; 
  jpeg_component_info *v14; 
  jpeg_component_info *v15; 
  jpeg_component_info *v16; 
  jpeg_component_info *v17; 
  jpeg_component_info *v18; 
  int input_components; 
  int v20; 
  __int64 v21; 
  jpeg_component_info *comp_info; 

  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  cinfo->jpeg_color_space = colorspace;
  cinfo->write_JFIF_header = 0;
  cinfo->write_Adobe_marker = 0;
  switch ( colorspace )
  {
    case JCS_UNKNOWN:
      input_components = cinfo->input_components;
      cinfo->num_components = input_components;
      if ( input_components < 1 || input_components > 10 )
      {
        cinfo->err->msg_code = 26;
        cinfo->err->msg_parm.i[0] = cinfo->num_components;
        cinfo->err->msg_parm.i[1] = 10;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        input_components = cinfo->num_components;
      }
      v20 = 0;
      if ( input_components > 0 )
      {
        v21 = 0i64;
        do
        {
          comp_info = cinfo->comp_info;
          comp_info[v21++].component_id = v20++;
          comp_info[v21 - 1].h_samp_factor = 1;
          *(_QWORD *)&comp_info[v21 - 1].v_samp_factor = 1i64;
          *(_QWORD *)&comp_info[v21 - 1].dc_tbl_no = 0i64;
        }
        while ( v20 < cinfo->num_components );
      }
      break;
    case JCS_GRAYSCALE:
      v4 = cinfo->comp_info;
      cinfo->write_JFIF_header = 1;
      cinfo->num_components = 1;
      v4->component_id = 1;
      v4->h_samp_factor = 1;
      *(_QWORD *)&v4->v_samp_factor = 1i64;
      *(_QWORD *)&v4->dc_tbl_no = 0i64;
      break;
    case JCS_RGB:
      v5 = cinfo->comp_info;
      cinfo->write_Adobe_marker = 1;
      cinfo->num_components = 3;
      v5->component_id = 82;
      v5->h_samp_factor = 1;
      *(_QWORD *)&v5->v_samp_factor = 1i64;
      *(_QWORD *)&v5->dc_tbl_no = 0i64;
      v6 = cinfo->comp_info;
      v6[1].component_id = 71;
      v6[1].h_samp_factor = 1;
      *(_QWORD *)&v6[1].v_samp_factor = 1i64;
      *(_QWORD *)&v6[1].dc_tbl_no = 0i64;
      v7 = cinfo->comp_info;
      v7[2].component_id = 66;
      v7[2].h_samp_factor = 1;
      *(_QWORD *)&v7[2].v_samp_factor = 1i64;
      *(_QWORD *)&v7[2].dc_tbl_no = 0i64;
      break;
    case JCS_YCbCr:
      v8 = cinfo->comp_info;
      cinfo->write_JFIF_header = 1;
      cinfo->num_components = 3;
      v8->component_id = 1;
      v8->h_samp_factor = 2;
      *(_QWORD *)&v8->v_samp_factor = 2i64;
      *(_QWORD *)&v8->dc_tbl_no = 0i64;
      v9 = cinfo->comp_info;
      v9[1].component_id = 2;
      v9[1].h_samp_factor = 1;
      v9[1].v_samp_factor = 1;
      v9[1].quant_tbl_no = 1;
      v9[1].dc_tbl_no = 1;
      v9[1].ac_tbl_no = 1;
      v10 = cinfo->comp_info;
      v10[2].component_id = 3;
      v10[2].h_samp_factor = 1;
      v10[2].v_samp_factor = 1;
      v10[2].quant_tbl_no = 1;
      v10[2].dc_tbl_no = 1;
      v10[2].ac_tbl_no = 1;
      break;
    case JCS_CMYK:
      v11 = cinfo->comp_info;
      cinfo->write_Adobe_marker = 1;
      cinfo->num_components = 4;
      v11->component_id = 67;
      v11->h_samp_factor = 1;
      *(_QWORD *)&v11->v_samp_factor = 1i64;
      *(_QWORD *)&v11->dc_tbl_no = 0i64;
      v12 = cinfo->comp_info;
      v12[1].component_id = 77;
      v12[1].h_samp_factor = 1;
      *(_QWORD *)&v12[1].v_samp_factor = 1i64;
      *(_QWORD *)&v12[1].dc_tbl_no = 0i64;
      v13 = cinfo->comp_info;
      v13[2].component_id = 89;
      v13[2].h_samp_factor = 1;
      *(_QWORD *)&v13[2].v_samp_factor = 1i64;
      *(_QWORD *)&v13[2].dc_tbl_no = 0i64;
      v14 = cinfo->comp_info;
      v14[3].component_id = 75;
      v14[3].h_samp_factor = 1;
      *(_QWORD *)&v14[3].v_samp_factor = 1i64;
      *(_QWORD *)&v14[3].dc_tbl_no = 0i64;
      break;
    case JCS_YCCK:
      v15 = cinfo->comp_info;
      cinfo->write_Adobe_marker = 1;
      cinfo->num_components = 4;
      v15->component_id = 1;
      v15->h_samp_factor = 2;
      *(_QWORD *)&v15->v_samp_factor = 2i64;
      *(_QWORD *)&v15->dc_tbl_no = 0i64;
      v16 = cinfo->comp_info;
      v16[1].component_id = 2;
      v16[1].h_samp_factor = 1;
      v16[1].v_samp_factor = 1;
      v16[1].quant_tbl_no = 1;
      v16[1].dc_tbl_no = 1;
      v16[1].ac_tbl_no = 1;
      v17 = cinfo->comp_info;
      v17[2].component_id = 3;
      v17[2].h_samp_factor = 1;
      v17[2].v_samp_factor = 1;
      v17[2].quant_tbl_no = 1;
      v17[2].dc_tbl_no = 1;
      v17[2].ac_tbl_no = 1;
      v18 = cinfo->comp_info;
      v18[3].component_id = 4;
      v18[3].h_samp_factor = 2;
      *(_QWORD *)&v18[3].v_samp_factor = 2i64;
      *(_QWORD *)&v18[3].dc_tbl_no = 0i64;
      break;
    default:
      cinfo->err->msg_code = 10;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      break;
  }
}

/*
==============
jpeg_set_defaults
==============
*/
void jpeg_set_defaults(jpeg_compress_struct *cinfo)
{
  bool v2; 

  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( !cinfo->comp_info )
    cinfo->comp_info = (jpeg_component_info *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 0i64, 960i64);
  cinfo->data_precision = 8;
  j_jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl, 50, 1u);
  j_jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl, 50, 1u);
  std_huff_tables(cinfo);
  *(_QWORD *)cinfo->arith_dc_L = 0i64;
  *(_DWORD *)cinfo->arith_dc_U = 16843009;
  *(_DWORD *)cinfo->arith_ac_K = 84215045;
  *(_DWORD *)&cinfo->arith_dc_U[4] = 16843009;
  *(_DWORD *)&cinfo->arith_ac_K[4] = 84215045;
  *(_QWORD *)&cinfo->arith_dc_L[8] = 0i64;
  *(_DWORD *)&cinfo->arith_dc_U[8] = 16843009;
  *(_DWORD *)&cinfo->arith_ac_K[8] = 84215045;
  *(_DWORD *)&cinfo->arith_dc_U[12] = 16843009;
  *(_QWORD *)&cinfo->arith_ac_K[12] = 84215045i64;
  v2 = cinfo->data_precision <= 8;
  cinfo->scan_info = NULL;
  *(_WORD *)&cinfo->raw_data_in = 0;
  cinfo->optimize_coding = 0;
  if ( !v2 )
    cinfo->optimize_coding = 1;
  cinfo->CCIR601_sampling = 0;
  *(_QWORD *)&cinfo->smoothing_factor = 0i64;
  *(_QWORD *)&cinfo->restart_interval = 0i64;
  *(_WORD *)&cinfo->JFIF_major_version = 257;
  cinfo->density_unit = 0;
  *(_DWORD *)&cinfo->X_density = 65537;
  j_jpeg_default_colorspace(cinfo);
}

/*
==============
jpeg_set_linear_quality
==============
*/
void jpeg_set_linear_quality(jpeg_compress_struct *cinfo, int scale_factor, unsigned __int8 force_baseline)
{
  j_jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl, scale_factor, force_baseline);
  j_jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl, scale_factor, force_baseline);
}

/*
==============
jpeg_set_quality
==============
*/
void jpeg_set_quality(jpeg_compress_struct *cinfo, int quality, unsigned __int8 force_baseline)
{
  int v3; 
  int v6; 

  v3 = 1;
  if ( quality > 0 )
    v3 = quality;
  if ( v3 <= 100 )
  {
    if ( v3 < 50 )
    {
      v6 = 5000 / v3;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = 100;
  }
  v6 = 2 * (100 - v3);
LABEL_6:
  j_jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl, v6, force_baseline);
  j_jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl, v6, force_baseline);
}

/*
==============
jpeg_simple_progression
==============
*/
void jpeg_simple_progression(jpeg_compress_struct *cinfo)
{
  int num_components; 
  int v3; 
  int v4; 
  jpeg_scan_info *script_space; 
  jpeg_memory_mgr *mem; 
  jpeg_scan_info *v7; 
  __int64 v8; 
  int v9; 
  jpeg_scan_info *v10; 
  __int64 v11; 
  jpeg_scan_info *v12; 
  int v13; 
  int v14; 
  int i; 
  int j; 
  int k; 
  jpeg_scan_info *v18; 
  __int64 v19; 
  int v20; 
  int *p_Ss; 

  num_components = cinfo->num_components;
  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v3 = 10;
  if ( num_components != 3 )
  {
    if ( num_components > 4 )
    {
      v4 = 6 * num_components;
      goto LABEL_9;
    }
LABEL_8:
    v4 = 4 * num_components + 2;
    goto LABEL_9;
  }
  if ( cinfo->jpeg_color_space != JCS_YCbCr )
    goto LABEL_8;
  v4 = 10;
LABEL_9:
  script_space = cinfo->script_space;
  if ( !script_space || cinfo->script_space_size < v4 )
  {
    mem = cinfo->mem;
    if ( v4 > 10 )
      v3 = v4;
    cinfo->script_space_size = v3;
    script_space = (jpeg_scan_info *)mem->alloc_small((jpeg_common_struct *)cinfo, 0, 36i64 * v3);
    cinfo->script_space = script_space;
  }
  cinfo->scan_info = script_space;
  cinfo->num_scans = v4;
  if ( num_components == 3 && cinfo->jpeg_color_space == JCS_YCbCr )
  {
    v7 = fill_dc_scans(script_space, 3, 0, 1);
    *(_QWORD *)&v7->comps_in_scan = v8;
    v7->Ss = v8;
    *(_QWORD *)&v7->Se = 5i64;
    v7->Al = 2;
    v7[1].comps_in_scan = v8;
    v7[1].component_index[0] = 2;
    v7[1].Ss = v8;
    v7[1].Al = v8;
    *(_QWORD *)&v7[1].Se = 63i64;
    v7[2].comps_in_scan = v8;
    v7[2].component_index[0] = v8;
    v7[2].Ss = v8;
    v7[2].Al = v8;
    *(_QWORD *)&v7[2].Se = 63i64;
    *(_QWORD *)&v7[3].comps_in_scan = v8;
    v7[3].Ss = 6;
    *(_QWORD *)&v7[3].Se = 63i64;
    v7[3].Al = 2;
    *(_QWORD *)&v7[4].comps_in_scan = v8;
    v7[4].Ss = v8;
    v7[4].Al = v8;
    v7[4].Se = 63;
    v7[4].Ah = 2;
    v10 = fill_dc_scans(v7 + 5, v9, 1, 0);
    v10->comps_in_scan = v11;
    v10->component_index[0] = 2;
    v10->Ss = v11;
    v10->Se = 63;
    *(_QWORD *)&v10->Ah = v11;
    v10[1].comps_in_scan = v11;
    v10[1].component_index[0] = v11;
    v10[1].Ss = v11;
    v10[1].Se = 63;
    *(_QWORD *)&v10[1].Ah = v11;
    *(_QWORD *)&v10[2].comps_in_scan = v11;
    v10[2].Ss = v11;
    v10[2].Se = 63;
    *(_QWORD *)&v10[2].Ah = v11;
  }
  else
  {
    v12 = fill_dc_scans(script_space, num_components, 0, 1);
    for ( i = 0; i < num_components; ++v12 )
    {
      v12->comps_in_scan = v14;
      v12->component_index[0] = i++;
      v12->Ss = v14;
      *(_QWORD *)&v12->Se = 5i64;
      v12->Al = 2;
    }
    for ( j = 0; j < num_components; ++v12 )
    {
      v12->comps_in_scan = v14;
      v12->component_index[0] = j++;
      v12->Ss = 6;
      *(_QWORD *)&v12->Se = 63i64;
      v12->Al = 2;
    }
    for ( k = 0; k < num_components; ++v12 )
    {
      v12->comps_in_scan = v14;
      v12->component_index[0] = k++;
      v12->Ss = v14;
      v12->Se = 63;
      v12->Ah = 2;
      v12->Al = v14;
    }
    v18 = fill_dc_scans(v12, v13, 1, 0);
    v20 = 0;
    if ( num_components > 0 )
    {
      p_Ss = &v18->Ss;
      do
      {
        *(p_Ss - 5) = v19;
        *(p_Ss - 4) = v20++;
        *p_Ss = v19;
        p_Ss[1] = 63;
        *((_QWORD *)p_Ss + 1) = v19;
        p_Ss += 9;
      }
      while ( v20 < num_components );
    }
  }
}

/*
==============
std_huff_tables
==============
*/

void __fastcall std_huff_tables(jpeg_compress_struct *cinfo, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  _RAX = cinfo->dc_huff_tbl_ptrs[0];
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( !_RAX )
  {
    _RAX = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
    cinfo->dc_huff_tbl_ptrs[0] = _RAX;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:bits_dc_luminance
    vmovups xmmword ptr [rax], xmm0
  }
  _RBP = 0x140000000ui64;
  _RDI = 1i64;
  _RAX->bits[16] = bits_dc_luminance[16];
  _RAX = 1i64;
  __asm
  {
    vpxor   xmm6, xmm6, xmm6
    vpxor   xmm2, xmm2, xmm2
    vpxor   xmm3, xmm3, xmm3
  }
  do
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rax+rbp+47503A0h]
      vpmovzxbd xmm1, xmm0
      vmovd   xmm0, dword ptr [rax+rbp+47503A4h]
      vpaddd  xmm2, xmm1, xmm2
    }
    _RAX += 8i64;
    __asm
    {
      vpmovzxbd xmm1, xmm0
      vpaddd  xmm3, xmm1, xmm3
    }
  }
  while ( _RAX <= 16 );
  __asm
  {
    vpaddd  xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   esi, xmm0
  }
  if ( (unsigned int)(_ESI - 1) > 0xFF )
  {
    cinfo->err->msg_code = 8;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  memcpy_0(cinfo->dc_huff_tbl_ptrs[0]->huffval, val_dc_luminance, _ESI);
  cinfo->dc_huff_tbl_ptrs[0]->sent_table = 0;
  _RAX = cinfo->ac_huff_tbl_ptrs[0];
  if ( !_RAX )
  {
    _RAX = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
    cinfo->ac_huff_tbl_ptrs[0] = _RAX;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:bits_ac_luminance
    vmovups xmmword ptr [rax], xmm0
  }
  _RAX->bits[16] = bits_ac_luminance[16];
  _RAX = 1i64;
  __asm
  {
    vmovdqu xmm2, xmm6
    vmovdqu xmm3, xmm6
  }
  do
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rax+rbp+47503F0h]
      vpmovzxbd xmm1, xmm0
      vmovd   xmm0, dword ptr [rax+rbp+47503F4h]
      vpaddd  xmm2, xmm1, xmm2
    }
    _RAX += 8i64;
    __asm
    {
      vpmovzxbd xmm1, xmm0
      vpaddd  xmm3, xmm1, xmm3
    }
  }
  while ( _RAX <= 16 );
  __asm
  {
    vpaddd  xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   esi, xmm0
  }
  if ( (unsigned int)(_ESI - 1) > 0xFF )
  {
    cinfo->err->msg_code = 8;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  memcpy_0(cinfo->ac_huff_tbl_ptrs[0]->huffval, val_ac_luminance, _ESI);
  cinfo->ac_huff_tbl_ptrs[0]->sent_table = 0;
  _RAX = cinfo->dc_huff_tbl_ptrs[1];
  if ( !_RAX )
  {
    _RAX = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
    cinfo->dc_huff_tbl_ptrs[1] = _RAX;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:bits_dc_chrominance
    vmovups xmmword ptr [rax], xmm0
  }
  _RAX->bits[16] = bits_dc_chrominance[16];
  _RAX = 1i64;
  __asm
  {
    vmovdqu xmm2, xmm6
    vmovdqu xmm3, xmm6
  }
  do
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rax+rbp+47503C8h]
      vpmovzxbd xmm1, xmm0
      vmovd   xmm0, dword ptr [rax+rbp+47503CCh]
      vpaddd  xmm2, xmm1, xmm2
    }
    _RAX += 8i64;
    __asm
    {
      vpmovzxbd xmm1, xmm0
      vpaddd  xmm3, xmm1, xmm3
    }
  }
  while ( _RAX <= 16 );
  __asm
  {
    vpaddd  xmm1, xmm3, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   esi, xmm0
  }
  if ( (unsigned int)(_ESI - 1) > 0xFF )
  {
    cinfo->err->msg_code = 8;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  memcpy_0(cinfo->dc_huff_tbl_ptrs[1]->huffval, val_dc_chrominance, _ESI);
  cinfo->dc_huff_tbl_ptrs[1]->sent_table = 0;
  _RAX = cinfo->ac_huff_tbl_ptrs[1];
  if ( !_RAX )
  {
    _RAX = j_jpeg_alloc_huff_table((jpeg_common_struct *)cinfo);
    cinfo->ac_huff_tbl_ptrs[1] = _RAX;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:bits_ac_chrominance
    vmovups xmmword ptr [rax], xmm0
  }
  _RAX->bits[16] = bits_ac_chrominance[16];
  __asm { vmovdqu xmm2, xmm6 }
  do
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rdi+rbp+4750408h]
      vpmovzxbd xmm1, xmm0
      vmovd   xmm0, dword ptr [rdi+rbp+475040Ch]
      vpaddd  xmm6, xmm1, xmm6
    }
    _RDI += 8i64;
    __asm
    {
      vpmovzxbd xmm1, xmm0
      vpaddd  xmm2, xmm1, xmm2
    }
  }
  while ( _RDI <= 16 );
  __asm
  {
    vpaddd  xmm1, xmm2, xmm6
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   edi, xmm0
  }
  if ( (unsigned int)(_EDI - 1) > 0xFF )
  {
    cinfo->err->msg_code = 8;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  memcpy_0(cinfo->ac_huff_tbl_ptrs[1]->huffval, val_ac_chrominance, _EDI);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  cinfo->ac_huff_tbl_ptrs[1]->sent_table = 0;
}

