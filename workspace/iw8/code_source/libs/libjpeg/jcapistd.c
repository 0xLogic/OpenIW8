/*
==============
jpeg_start_compress
==============
*/
void jpeg_start_compress(jpeg_compress_struct *cinfo, unsigned __int8 write_all_tables)
{
  bool v4; 

  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( write_all_tables )
    j_jpeg_suppress_tables(cinfo, 0);
  cinfo->err->reset_error_mgr((jpeg_common_struct *)cinfo);
  cinfo->dest->init_destination(cinfo);
  j_jinit_compress_master(cinfo);
  cinfo->master->prepare_for_pass(cinfo);
  v4 = cinfo->raw_data_in == 0;
  cinfo->next_scanline = 0;
  cinfo->global_state = !v4 + 101;
}

/*
==============
jpeg_write_raw_data
==============
*/
__int64 jpeg_write_raw_data(jpeg_compress_struct *cinfo, unsigned __int8 ***data, unsigned int num_lines)
{
  unsigned int next_scanline; 
  jpeg_progress_mgr *progress; 
  jpeg_comp_master *master; 
  unsigned int v10; 

  if ( cinfo->global_state != 102 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  next_scanline = cinfo->next_scanline;
  if ( next_scanline < cinfo->image_height )
  {
    progress = cinfo->progress;
    if ( progress )
    {
      progress->pass_counter = next_scanline;
      cinfo->progress->pass_limit = cinfo->image_height;
      cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
    }
    master = cinfo->master;
    if ( master->call_pass_startup )
      master->pass_startup(cinfo);
    v10 = 8 * cinfo->max_v_samp_factor;
    if ( num_lines < v10 )
    {
      cinfo->err->msg_code = 23;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    if ( cinfo->coef->compress_data(cinfo, data) )
    {
      cinfo->next_scanline += v10;
      return v10;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    cinfo->err->msg_code = 123;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
    return 0i64;
  }
}

/*
==============
jpeg_write_scanlines
==============
*/
__int64 jpeg_write_scanlines(jpeg_compress_struct *cinfo, unsigned __int8 **scanlines, unsigned int num_lines)
{
  jpeg_progress_mgr *progress; 
  jpeg_comp_master *master; 
  unsigned int v8; 
  __int64 result; 
  unsigned int v10; 

  if ( cinfo->global_state != 101 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( cinfo->next_scanline >= cinfo->image_height )
  {
    cinfo->err->msg_code = 123;
    cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
  }
  progress = cinfo->progress;
  if ( progress )
  {
    progress->pass_counter = cinfo->next_scanline;
    cinfo->progress->pass_limit = cinfo->image_height;
    cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
  }
  master = cinfo->master;
  if ( master->call_pass_startup )
    master->pass_startup(cinfo);
  v8 = cinfo->image_height - cinfo->next_scanline;
  v10 = 0;
  if ( num_lines > v8 )
    num_lines = v8;
  cinfo->main->process_data(cinfo, scanlines, &v10, num_lines);
  result = v10;
  cinfo->next_scanline += v10;
  return result;
}

