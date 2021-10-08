/*
==============
jpeg_finish_output
==============
*/
unsigned __int8 jpeg_finish_output(jpeg_decompress_struct *cinfo)
{
  int global_state; 
  jpeg_input_controller *inputctl; 

  global_state = cinfo->global_state;
  if ( (unsigned int)(global_state - 205) <= 1 && cinfo->buffered_image )
  {
    cinfo->master->finish_output_pass(cinfo);
    cinfo->global_state = 208;
  }
  else if ( global_state != 208 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  while ( cinfo->input_scan_number <= cinfo->output_scan_number )
  {
    inputctl = cinfo->inputctl;
    if ( inputctl->eoi_reached )
      break;
    if ( !inputctl->consume_input(cinfo) )
      return 0;
  }
  cinfo->global_state = 207;
  return 1;
}

/*
==============
jpeg_read_raw_data
==============
*/
__int64 jpeg_read_raw_data(jpeg_decompress_struct *cinfo, unsigned __int8 ***data, unsigned int max_lines)
{
  unsigned int output_scanline; 
  __int64 result; 
  jpeg_progress_mgr *progress; 
  unsigned int v9; 

  if ( cinfo->global_state != 206 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  output_scanline = cinfo->output_scanline;
  if ( output_scanline < cinfo->output_height )
  {
    progress = cinfo->progress;
    if ( progress )
    {
      progress->pass_counter = output_scanline;
      cinfo->progress->pass_limit = cinfo->output_height;
      cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
    }
    v9 = cinfo->max_v_samp_factor * cinfo->min_DCT_scaled_size;
    if ( max_lines < v9 )
    {
      cinfo->err->msg_code = 23;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    result = ((__int64 (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***))cinfo->coef->decompress_data)(cinfo, data);
    if ( (_DWORD)result )
    {
      cinfo->output_scanline += v9;
      return v9;
    }
  }
  else
  {
    cinfo->err->msg_code = 123;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
    return 0i64;
  }
  return result;
}

/*
==============
jpeg_read_scanlines
==============
*/
__int64 jpeg_read_scanlines(jpeg_decompress_struct *cinfo, unsigned __int8 **scanlines, unsigned int max_lines)
{
  unsigned int output_scanline; 
  __int64 result; 
  jpeg_progress_mgr *progress; 
  jpeg_d_main_controller *main; 
  unsigned int v10; 

  if ( cinfo->global_state != 205 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  output_scanline = cinfo->output_scanline;
  if ( output_scanline < cinfo->output_height )
  {
    progress = cinfo->progress;
    if ( progress )
    {
      progress->pass_counter = output_scanline;
      cinfo->progress->pass_limit = cinfo->output_height;
      cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
    }
    main = cinfo->main;
    v10 = 0;
    main->process_data(cinfo, scanlines, &v10, max_lines);
    result = v10;
    cinfo->output_scanline += v10;
  }
  else
  {
    cinfo->err->msg_code = 123;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
    return 0i64;
  }
  return result;
}

/*
==============
jpeg_start_decompress
==============
*/
unsigned __int8 jpeg_start_decompress(jpeg_decompress_struct *cinfo)
{
  int global_state; 
  jpeg_progress_mgr *progress; 
  int v5; 
  jpeg_progress_mgr *v6; 
  jpeg_progress_mgr *v7; 
  int pass_limit; 

  global_state = cinfo->global_state;
  if ( global_state == 202 )
  {
    j_jinit_master_decompress(cinfo);
    if ( cinfo->buffered_image )
    {
      cinfo->global_state = 207;
      return 1;
    }
    cinfo->global_state = 203;
  }
  else if ( global_state != 203 )
  {
    if ( global_state != 204 )
    {
      cinfo->err->msg_code = 20;
      cinfo->err->msg_parm.i[0] = cinfo->global_state;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    return output_pass_setup(cinfo);
  }
  if ( cinfo->inputctl->has_multiple_scans )
  {
    while ( 1 )
    {
      progress = cinfo->progress;
      if ( progress )
        progress->progress_monitor((jpeg_common_struct *)cinfo);
      v5 = cinfo->inputctl->consume_input(cinfo);
      if ( !v5 )
        return 0;
      if ( v5 == 2 )
        goto LABEL_17;
      v6 = cinfo->progress;
      if ( v6 && (v5 == 3 || v5 == 1) )
      {
        ++v6->pass_counter;
        v7 = cinfo->progress;
        pass_limit = v7->pass_limit;
        if ( v6->pass_counter >= pass_limit )
          v7->pass_limit = pass_limit + cinfo->total_iMCU_rows;
      }
    }
  }
  else
  {
LABEL_17:
    cinfo->output_scan_number = cinfo->input_scan_number;
    return output_pass_setup(cinfo);
  }
}

/*
==============
jpeg_start_output
==============
*/
unsigned __int8 jpeg_start_output(jpeg_decompress_struct *cinfo, int scan_number)
{
  int global_state; 
  int input_scan_number; 

  global_state = cinfo->global_state;
  if ( global_state != 207 && global_state != 204 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  input_scan_number = 1;
  if ( scan_number > 0 )
    input_scan_number = scan_number;
  if ( cinfo->inputctl->eoi_reached && input_scan_number > cinfo->input_scan_number )
    input_scan_number = cinfo->input_scan_number;
  cinfo->output_scan_number = input_scan_number;
  return output_pass_setup(cinfo);
}

/*
==============
output_pass_setup
==============
*/
unsigned __int8 output_pass_setup(jpeg_decompress_struct *cinfo)
{
  int v1; 
  unsigned int output_scanline; 
  jpeg_progress_mgr *progress; 
  unsigned int v5; 
  unsigned __int8 result; 

  v1 = 0;
  if ( cinfo->global_state != 204 )
  {
    ((void (*)(void))cinfo->master->prepare_for_output_pass)();
    cinfo->output_scanline = 0;
    cinfo->global_state = 204;
  }
  if ( cinfo->master->is_dummy_pass )
  {
    output_scanline = cinfo->output_scanline;
    while ( output_scanline >= cinfo->output_height )
    {
LABEL_10:
      cinfo->master->finish_output_pass(cinfo);
      cinfo->master->prepare_for_output_pass(cinfo);
      cinfo->output_scanline = 0;
      output_scanline = 0;
      if ( !cinfo->master->is_dummy_pass )
        goto LABEL_11;
    }
    while ( 1 )
    {
      progress = cinfo->progress;
      v5 = output_scanline;
      if ( progress )
      {
        progress->pass_counter = output_scanline;
        cinfo->progress->pass_limit = cinfo->output_height;
        cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
        v5 = cinfo->output_scanline;
      }
      cinfo->main->process_data(cinfo, NULL, &cinfo->output_scanline, 0);
      output_scanline = cinfo->output_scanline;
      if ( output_scanline == v5 )
        return 0;
      if ( output_scanline >= cinfo->output_height )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_11:
    result = 1;
    LOBYTE(v1) = cinfo->raw_data_out != 0;
    cinfo->global_state = v1 + 205;
  }
  return result;
}

