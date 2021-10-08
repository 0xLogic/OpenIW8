/*
==============
jinit_d_post_controller
==============
*/
void jinit_d_post_controller(jpeg_decompress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  __int64 v4; 
  unsigned int max_v_samp_factor; 
  jpeg_memory_mgr *mem; 
  int v7; 

  v4 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 48i64);
  cinfo->post = (jpeg_d_post_controller *)v4;
  *(_QWORD *)v4 = start_pass_dpost;
  *(_QWORD *)(v4 + 16) = 0i64;
  *(_QWORD *)(v4 + 24) = 0i64;
  if ( cinfo->quantize_colors )
  {
    max_v_samp_factor = cinfo->max_v_samp_factor;
    *(_DWORD *)(v4 + 32) = max_v_samp_factor;
    mem = cinfo->mem;
    if ( need_full_buffer )
    {
      v7 = j_jround_up(cinfo->output_height, max_v_samp_factor);
      *(_QWORD *)(v4 + 16) = mem->request_virt_sarray((jpeg_common_struct *)cinfo, 1i64, 0, cinfo->output_width * cinfo->out_color_components, v7, max_v_samp_factor);
    }
    else
    {
      *(_QWORD *)(v4 + 24) = mem->alloc_sarray((jpeg_common_struct *)cinfo, 1i64, cinfo->output_width * cinfo->out_color_components, max_v_samp_factor);
    }
  }
}

/*
==============
post_process_1pass
==============
*/
void post_process_1pass(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, __int64 in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  jpeg_d_post_controller *post; 
  unsigned int v9; 
  jpeg_upsampler *upsample; 
  unsigned int start_pass; 
  unsigned int v12; 

  post = cinfo->post;
  v9 = out_rows_avail;
  upsample = cinfo->upsample;
  start_pass = (unsigned int)post[2].start_pass;
  out_rows_avail = 0;
  v12 = v9 - *out_row_ctr;
  if ( v12 <= start_pass )
    start_pass = v12;
  upsample->upsample(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, (unsigned __int8 **)post[1].post_process_data, &out_rows_avail, start_pass);
  cinfo->cquantize->color_quantize(cinfo, (unsigned __int8 **)post[1].post_process_data, &output_buf[*out_row_ctr], out_rows_avail);
  *out_row_ctr += out_rows_avail;
}

/*
==============
post_process_2pass
==============
*/
void post_process_2pass(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, unsigned int in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  jpeg_d_post_controller *post; 
  unsigned int post_process_data; 
  unsigned __int8 **v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int start_pass; 
  unsigned __int8 v15; 

  post = cinfo->post;
  post_process_data = (unsigned int)post[2].post_process_data;
  if ( !post_process_data )
  {
    v15 = 0;
    v10 = cinfo->mem->access_virt_sarray(cinfo, post[1].start_pass, HIDWORD(post[2].start_pass), LODWORD(post[2].start_pass), v15);
    post_process_data = (unsigned int)post[2].post_process_data;
    post[1].post_process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))v10;
  }
  v11 = *out_row_ctr;
  v12 = out_rows_avail - v11;
  if ( LODWORD(post[2].start_pass) - post_process_data <= out_rows_avail - (unsigned int)v11 )
    v12 = LODWORD(post[2].start_pass) - post_process_data;
  v13 = cinfo->output_height - HIDWORD(post[2].start_pass);
  if ( v12 <= v13 )
    v13 = v12;
  cinfo->cquantize->color_quantize(cinfo, (unsigned __int8 **)((char *)post[1].post_process_data + 8 * post_process_data), &output_buf[v11], v13);
  *out_row_ctr += v13;
  LODWORD(post[2].post_process_data) += v13;
  start_pass = (unsigned int)post[2].start_pass;
  if ( LODWORD(post[2].post_process_data) >= start_pass )
  {
    HIDWORD(post[2].start_pass) += start_pass;
    LODWORD(post[2].post_process_data) = 0;
  }
}

/*
==============
post_process_prepass
==============
*/
void post_process_prepass(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, unsigned int in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr)
{
  jpeg_d_post_controller *post; 
  unsigned int post_process_data; 
  void (__fastcall **p_post_process_data)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int); 
  unsigned __int8 **v13; 
  unsigned int v14; 
  int v15; 
  unsigned int start_pass; 
  unsigned __int8 v17; 

  post = cinfo->post;
  post_process_data = (unsigned int)post[2].post_process_data;
  p_post_process_data = &post[2].post_process_data;
  if ( !post_process_data )
  {
    v17 = 1;
    v13 = cinfo->mem->access_virt_sarray(cinfo, post[1].start_pass, HIDWORD(post[2].start_pass), LODWORD(post[2].start_pass), v17);
    post_process_data = (unsigned int)post[2].post_process_data;
    post[1].post_process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))v13;
  }
  cinfo->upsample->upsample(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, (unsigned __int8 **)post[1].post_process_data, (unsigned int *)&post[2].post_process_data, (unsigned int)post[2].start_pass);
  v14 = *(_DWORD *)p_post_process_data;
  if ( *(_DWORD *)p_post_process_data > post_process_data )
  {
    v15 = v14 - post_process_data;
    cinfo->cquantize->color_quantize(cinfo, (unsigned __int8 **)((char *)post[1].post_process_data + 8 * post_process_data), NULL, v15);
    *out_row_ctr += v15;
    v14 = (unsigned int)post[2].post_process_data;
  }
  start_pass = (unsigned int)post[2].start_pass;
  if ( v14 >= start_pass )
  {
    HIDWORD(post[2].start_pass) += start_pass;
    *(_DWORD *)p_post_process_data = 0;
  }
}

/*
==============
start_pass_dpost
==============
*/
void start_pass_dpost(jpeg_decompress_struct *cinfo, J_BUF_MODE pass_mode)
{
  jpeg_d_post_controller *post; 
  __int32 v3; 
  bool v4; 

  post = cinfo->post;
  if ( pass_mode )
  {
    v3 = pass_mode - 2;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( !post[1].start_pass )
        {
          cinfo->err->msg_code = 4;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        post->post_process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))post_process_prepass;
        *(void (__fastcall **)(jpeg_decompress_struct *, J_BUF_MODE))((char *)&post[2].start_pass + 4) = NULL;
      }
      else
      {
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        *(void (__fastcall **)(jpeg_decompress_struct *, J_BUF_MODE))((char *)&post[2].start_pass + 4) = NULL;
      }
    }
    else
    {
      if ( !post[1].start_pass )
      {
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      post->post_process_data = post_process_2pass;
      *(void (__fastcall **)(jpeg_decompress_struct *, J_BUF_MODE))((char *)&post[2].start_pass + 4) = NULL;
    }
  }
  else
  {
    if ( cinfo->quantize_colors )
    {
      v4 = post[1].post_process_data == NULL;
      post->post_process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))post_process_1pass;
      if ( v4 )
      {
        post[1].post_process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))cinfo->mem->access_virt_sarray(cinfo, post[1].start_pass, 0i64, LODWORD(post[2].start_pass), 1);
        *(void (__fastcall **)(jpeg_decompress_struct *, J_BUF_MODE))((char *)&post[2].start_pass + 4) = NULL;
        return;
      }
    }
    else
    {
      post->post_process_data = cinfo->upsample->upsample;
    }
    *(void (__fastcall **)(jpeg_decompress_struct *, J_BUF_MODE))((char *)&post[2].start_pass + 4) = NULL;
  }
}

