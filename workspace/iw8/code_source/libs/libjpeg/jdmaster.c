/*
==============
finish_output_pass
==============
*/
void finish_output_pass(jpeg_decompress_struct *cinfo)
{
  jpeg_decomp_master *master; 

  master = cinfo->master;
  if ( cinfo->quantize_colors )
    ((void (*)(void))cinfo->cquantize->finish_pass)();
  ++LODWORD(master[1].prepare_for_output_pass);
}

/*
==============
jinit_master_decompress
==============
*/
void jinit_master_decompress(jpeg_decompress_struct *cinfo)
{
  jpeg_decomp_master *v2; 

  v2 = (jpeg_decomp_master *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 48i64);
  cinfo->master = v2;
  v2->prepare_for_output_pass = prepare_for_output_pass;
  v2->finish_output_pass = finish_output_pass;
  v2->is_dummy_pass = 0;
  master_selection(cinfo);
}

/*
==============
jpeg_calc_output_dimensions
==============
*/
void jpeg_calc_output_dimensions(jpeg_decompress_struct *cinfo)
{
  unsigned int scale_num; 
  int v3; 
  unsigned int scale_denom; 
  unsigned int v5; 
  int v6; 
  int image_height; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int num_components; 
  int v14; 
  int *p_v_samp_factor; 
  int min_DCT_scaled_size; 
  int v17; 
  int *p_DCT_scaled_size; 
  int v19; 
  int v20; 
  J_COLOR_SPACE out_color_space; 
  bool v22; 
  jpeg_component_info *comp_info; 
  int v24; 
  char v25; 

  if ( cinfo->global_state != 202 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  scale_num = cinfo->scale_num;
  v3 = 4;
  scale_denom = cinfo->scale_denom;
  if ( 8 * scale_num > scale_denom )
  {
    if ( 4 * scale_num > scale_denom )
    {
      if ( 2 * scale_num > scale_denom )
      {
        cinfo->output_width = cinfo->image_width;
        image_height = cinfo->image_height;
        cinfo->min_DCT_scaled_size = 8;
      }
      else
      {
        v10 = j_jdiv_round_up(cinfo->image_width, 2);
        v11 = cinfo->image_height;
        cinfo->output_width = v10;
        image_height = j_jdiv_round_up(v11, 2);
        cinfo->min_DCT_scaled_size = 4;
      }
    }
    else
    {
      v8 = j_jdiv_round_up(cinfo->image_width, 4);
      v9 = cinfo->image_height;
      cinfo->output_width = v8;
      image_height = j_jdiv_round_up(v9, 4);
      cinfo->min_DCT_scaled_size = 2;
    }
  }
  else
  {
    v5 = j_jdiv_round_up(cinfo->image_width, 8);
    v6 = cinfo->image_height;
    cinfo->output_width = v5;
    image_height = j_jdiv_round_up(v6, 8);
    cinfo->min_DCT_scaled_size = 1;
  }
  cinfo->output_height = image_height;
  v12 = 0;
  num_components = cinfo->num_components;
  v14 = 0;
  if ( num_components > 0 )
  {
    p_v_samp_factor = &cinfo->comp_info->v_samp_factor;
    do
    {
      min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
      if ( min_DCT_scaled_size < 8 )
      {
        v17 = min_DCT_scaled_size * cinfo->max_h_samp_factor;
        do
        {
          if ( 2 * min_DCT_scaled_size * *(p_v_samp_factor - 1) > v17 )
            break;
          if ( 2 * *p_v_samp_factor * min_DCT_scaled_size > cinfo->max_v_samp_factor * cinfo->min_DCT_scaled_size )
            break;
          min_DCT_scaled_size *= 2;
        }
        while ( min_DCT_scaled_size < 8 );
      }
      p_v_samp_factor[6] = min_DCT_scaled_size;
      ++v14;
      num_components = cinfo->num_components;
      p_v_samp_factor += 24;
    }
    while ( v14 < num_components );
    if ( num_components > 0 )
    {
      p_DCT_scaled_size = &cinfo->comp_info->DCT_scaled_size;
      do
      {
        v19 = j_jdiv_round_up(*p_DCT_scaled_size * cinfo->image_width * *(p_DCT_scaled_size - 7), 8 * cinfo->max_h_samp_factor);
        v20 = *p_DCT_scaled_size * *(p_DCT_scaled_size - 6);
        p_DCT_scaled_size[1] = v19;
        p_DCT_scaled_size[2] = j_jdiv_round_up(cinfo->image_height * v20, 8 * cinfo->max_v_samp_factor);
        p_DCT_scaled_size += 24;
        num_components = cinfo->num_components;
        ++v12;
      }
      while ( v12 < num_components );
    }
  }
  out_color_space = cinfo->out_color_space;
  if ( out_color_space == JCS_GRAYSCALE )
  {
    v3 = 1;
  }
  else
  {
    if ( out_color_space <= JCS_GRAYSCALE )
    {
LABEL_25:
      v3 = num_components;
      goto LABEL_28;
    }
    if ( out_color_space > JCS_YCbCr )
    {
      if ( out_color_space <= JCS_YCCK )
        goto LABEL_28;
      goto LABEL_25;
    }
    v3 = 3;
  }
LABEL_28:
  cinfo->out_color_components = v3;
  if ( cinfo->quantize_colors )
    v3 = 1;
  v22 = cinfo->do_fancy_upsampling == 0;
  cinfo->output_components = v3;
  if ( !v22 || cinfo->CCIR601_sampling )
  {
    v25 = 0;
  }
  else
  {
    if ( cinfo->jpeg_color_space != JCS_YCbCr )
      goto LABEL_49;
    if ( cinfo->num_components != 3 )
      goto LABEL_49;
    if ( out_color_space != JCS_RGB )
      goto LABEL_49;
    if ( cinfo->out_color_components != 3 )
      goto LABEL_49;
    comp_info = cinfo->comp_info;
    if ( comp_info->h_samp_factor != 2 )
      goto LABEL_49;
    if ( comp_info[1].h_samp_factor != 1 )
      goto LABEL_49;
    if ( comp_info[2].h_samp_factor != 1 )
      goto LABEL_49;
    if ( comp_info->v_samp_factor > 2 )
      goto LABEL_49;
    if ( comp_info[1].v_samp_factor != 1 )
      goto LABEL_49;
    if ( comp_info[2].v_samp_factor != 1 )
      goto LABEL_49;
    v24 = cinfo->min_DCT_scaled_size;
    if ( comp_info->DCT_scaled_size != v24 || comp_info[1].DCT_scaled_size != v24 || comp_info[2].DCT_scaled_size != v24 )
      goto LABEL_49;
    v25 = 1;
  }
  if ( v25 )
  {
    cinfo->rec_outbuf_height = cinfo->max_v_samp_factor;
    return;
  }
LABEL_49:
  cinfo->rec_outbuf_height = 1;
}

/*
==============
jpeg_new_colormap
==============
*/
void jpeg_new_colormap(jpeg_decompress_struct *cinfo)
{
  jpeg_decomp_master *master; 
  jpeg_color_quantizer *v3; 

  master = cinfo->master;
  if ( cinfo->global_state != 207 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( cinfo->quantize_colors && cinfo->enable_external_quant && cinfo->colormap )
  {
    v3 = *(jpeg_color_quantizer **)&master[1].is_dummy_pass;
    cinfo->cquantize = v3;
    v3->new_color_map(cinfo);
    master->is_dummy_pass = 0;
  }
  else
  {
    cinfo->err->msg_code = 46;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
}

/*
==============
master_selection
==============
*/
void master_selection(jpeg_decompress_struct *cinfo)
{
  jpeg_decomp_master *master; 
  unsigned __int8 *v3; 
  __m256i *v4; 
  int v5; 
  __m256i *v6; 
  int i; 
  __m256i *v8; 
  __int64 v9; 
  __m256i *sample_range_limit; 
  unsigned __int8 quantize_colors; 
  bool v12; 
  jpeg_progress_mgr *progress; 
  int num_components; 

  master = cinfo->master;
  j_jpeg_calc_output_dimensions(cinfo);
  v3 = (unsigned __int8 *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1408i64);
  v4 = (__m256i *)(v3 + 256);
  cinfo->sample_range_limit = v3 + 256;
  memset_0(v3, 0, 0x100ui64);
  v5 = 0;
  v6 = v4;
  for ( i = 0; i <= 255; ++i )
  {
    v6->m256i_i8[0] = i;
    v6 = (__m256i *)((char *)v6 + 1);
  }
  v8 = v4 + 8;
  v9 = 6i64;
  do
  {
    v8->m256i_i64[0] = -1i64;
    v8->m256i_i64[1] = -1i64;
    v8->m256i_i64[2] = -1i64;
    v8 += 2;
    v8[-2].m256i_i64[3] = -1i64;
    v8[-1].m256i_i64[0] = -1i64;
    v8[-1].m256i_i64[1] = -1i64;
    v8[-1].m256i_i64[2] = -1i64;
    v8[-1].m256i_i64[3] = -1i64;
    --v9;
  }
  while ( v9 );
  memset_0(&v4[20], 0, 0x180ui64);
  sample_range_limit = (__m256i *)cinfo->sample_range_limit;
  v4[32] = *sample_range_limit;
  v4[33] = sample_range_limit[1];
  v4[34] = sample_range_limit[2];
  v4[35] = sample_range_limit[3];
  LODWORD(master[1].prepare_for_output_pass) = 0;
  BYTE4(master[1].prepare_for_output_pass) = use_merged_upsample(cinfo);
  master[1].finish_output_pass = NULL;
  *(_QWORD *)&master[1].is_dummy_pass = 0i64;
  quantize_colors = cinfo->quantize_colors;
  if ( !quantize_colors || !cinfo->buffered_image )
  {
    *(_WORD *)&cinfo->enable_1pass_quant = 0;
    cinfo->enable_2pass_quant = 0;
  }
  if ( quantize_colors )
  {
    if ( cinfo->raw_data_out )
    {
      cinfo->err->msg_code = 47;
      ((void (*)(void))cinfo->err->error_exit)();
    }
    if ( cinfo->out_color_components == 3 )
    {
      if ( cinfo->colormap )
      {
        cinfo->enable_external_quant = 1;
      }
      else if ( cinfo->two_pass_quantize )
      {
        cinfo->enable_2pass_quant = 1;
      }
      else
      {
        cinfo->enable_1pass_quant = 1;
      }
    }
    else
    {
      *(_WORD *)&cinfo->enable_1pass_quant = 1;
      cinfo->enable_2pass_quant = 0;
      cinfo->colormap = NULL;
    }
    if ( cinfo->enable_1pass_quant )
    {
      j_jinit_1pass_quantizer(cinfo);
      master[1].finish_output_pass = (void (__fastcall *)(jpeg_decompress_struct *))cinfo->cquantize;
    }
    if ( cinfo->enable_2pass_quant || cinfo->enable_external_quant )
    {
      j_jinit_2pass_quantizer(cinfo);
      *(_QWORD *)&master[1].is_dummy_pass = cinfo->cquantize;
    }
  }
  if ( !cinfo->raw_data_out )
  {
    if ( BYTE4(master[1].prepare_for_output_pass) )
    {
      j_jinit_merged_upsampler(cinfo);
    }
    else
    {
      j_jinit_color_deconverter(cinfo);
      j_jinit_upsampler(cinfo);
    }
    j_jinit_d_post_controller(cinfo, cinfo->enable_2pass_quant);
  }
  j_jinit_inverse_dct(cinfo);
  if ( cinfo->arith_code )
  {
    cinfo->err->msg_code = 1;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  else if ( cinfo->progressive_mode )
  {
    j_jinit_phuff_decoder(cinfo);
  }
  else
  {
    j_jinit_huff_decoder(cinfo);
  }
  v12 = cinfo->inputctl->has_multiple_scans || cinfo->buffered_image;
  j_jinit_d_coef_controller(cinfo, v12);
  if ( !cinfo->raw_data_out )
    j_jinit_d_main_controller(cinfo, 0);
  cinfo->mem->realize_virt_arrays((jpeg_common_struct *)cinfo);
  cinfo->inputctl->start_input_pass(cinfo);
  progress = cinfo->progress;
  if ( progress && !cinfo->buffered_image && cinfo->inputctl->has_multiple_scans )
  {
    num_components = cinfo->num_components;
    if ( cinfo->progressive_mode )
      num_components = 3 * num_components + 2;
    progress->pass_counter = 0;
    *(_QWORD *)&cinfo->progress->pass_limit = num_components * cinfo->total_iMCU_rows;
    LOBYTE(v5) = cinfo->enable_2pass_quant != 0;
    cinfo->progress->total_passes = v5 + 2;
    ++LODWORD(master[1].prepare_for_output_pass);
  }
}

/*
==============
prepare_for_output_pass
==============
*/
void prepare_for_output_pass(jpeg_decompress_struct *cinfo)
{
  jpeg_decomp_master *master; 
  __int64 v3; 
  jpeg_progress_mgr *progress; 
  int v5; 

  master = cinfo->master;
  if ( master->is_dummy_pass )
  {
    master->is_dummy_pass = 0;
    cinfo->cquantize->start_pass(cinfo, 0i64);
    cinfo->post->start_pass(cinfo, JBUF_CRANK_DEST);
    v3 = 2i64;
LABEL_17:
    cinfo->main->start_pass(cinfo, v3);
    goto LABEL_18;
  }
  if ( cinfo->quantize_colors && !cinfo->colormap )
  {
    if ( cinfo->two_pass_quantize && cinfo->enable_2pass_quant )
    {
      cinfo->cquantize = *(jpeg_color_quantizer **)&master[1].is_dummy_pass;
      master->is_dummy_pass = 1;
    }
    else if ( cinfo->enable_1pass_quant )
    {
      cinfo->cquantize = (jpeg_color_quantizer *)master[1].finish_output_pass;
    }
    else
    {
      cinfo->err->msg_code = 46;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
  }
  cinfo->idct->start_pass(cinfo);
  cinfo->coef->start_output_pass(cinfo);
  if ( !cinfo->raw_data_out )
  {
    if ( !BYTE4(master[1].prepare_for_output_pass) )
      cinfo->cconvert->start_pass(cinfo);
    cinfo->upsample->start_pass(cinfo);
    if ( cinfo->quantize_colors )
      cinfo->cquantize->start_pass(cinfo, master->is_dummy_pass);
    cinfo->post->start_pass(cinfo, master->is_dummy_pass != 0 ? 3 : 0);
    v3 = 0i64;
    goto LABEL_17;
  }
LABEL_18:
  progress = cinfo->progress;
  if ( progress )
  {
    v5 = 0;
    progress->completed_passes = (int)master[1].prepare_for_output_pass;
    cinfo->progress->total_passes = LODWORD(master[1].prepare_for_output_pass) + (master->is_dummy_pass != 0) + 1;
    if ( cinfo->buffered_image )
    {
      if ( !cinfo->inputctl->eoi_reached )
      {
        LOBYTE(v5) = cinfo->enable_2pass_quant != 0;
        cinfo->progress->total_passes += v5 + 1;
      }
    }
  }
}

/*
==============
use_merged_upsample
==============
*/
bool use_merged_upsample(jpeg_decompress_struct *cinfo)
{
  jpeg_component_info *comp_info; 
  int min_DCT_scaled_size; 
  bool result; 

  result = 0;
  if ( !cinfo->do_fancy_upsampling && !cinfo->CCIR601_sampling && cinfo->jpeg_color_space == JCS_YCbCr && cinfo->num_components == 3 && cinfo->out_color_space == JCS_RGB && cinfo->out_color_components == 3 )
  {
    comp_info = cinfo->comp_info;
    if ( comp_info->h_samp_factor == 2 && comp_info[1].h_samp_factor == 1 && comp_info[2].h_samp_factor == 1 && comp_info->v_samp_factor <= 2 && comp_info[1].v_samp_factor == 1 && comp_info[2].v_samp_factor == 1 )
    {
      min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
      if ( comp_info->DCT_scaled_size == min_DCT_scaled_size && comp_info[1].DCT_scaled_size == min_DCT_scaled_size && comp_info[2].DCT_scaled_size == min_DCT_scaled_size )
        return 1;
    }
  }
  return result;
}

