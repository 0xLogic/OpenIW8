/*
==============
jpeg_CreateCompress
==============
*/
void jpeg_CreateCompress(jpeg_compress_struct *cinfo, int version, unsigned __int64 structsize)
{
  jpeg_error_mgr *err; 
  void *client_data; 
  jpeg_alloc alloc; 

  cinfo->mem = NULL;
  if ( version != 62 )
  {
    cinfo->err->msg_code = 12;
    cinfo->err->msg_parm.i[0] = 62;
    cinfo->err->msg_parm.i[1] = version;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( structsize != 520 )
  {
    cinfo->err->msg_code = 21;
    cinfo->err->msg_parm.i[0] = 520;
    cinfo->err->msg_parm.i[1] = structsize;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  err = cinfo->err;
  client_data = cinfo->client_data;
  alloc = cinfo->alloc;
  memset_0(cinfo, 0, sizeof(jpeg_compress_struct));
  cinfo->err = err;
  cinfo->alloc = alloc;
  cinfo->client_data = client_data;
  j_jinit_memory_mgr((jpeg_common_struct *)cinfo);
  cinfo->progress = NULL;
  cinfo->dest = NULL;
  cinfo->comp_info = NULL;
  cinfo->quant_tbl_ptrs[0] = NULL;
  cinfo->quant_tbl_ptrs[1] = NULL;
  cinfo->quant_tbl_ptrs[2] = NULL;
  cinfo->quant_tbl_ptrs[3] = NULL;
  cinfo->dc_huff_tbl_ptrs[0] = NULL;
  cinfo->ac_huff_tbl_ptrs[0] = NULL;
  cinfo->dc_huff_tbl_ptrs[1] = NULL;
  cinfo->ac_huff_tbl_ptrs[1] = NULL;
  cinfo->dc_huff_tbl_ptrs[2] = NULL;
  cinfo->ac_huff_tbl_ptrs[2] = NULL;
  cinfo->dc_huff_tbl_ptrs[3] = NULL;
  cinfo->ac_huff_tbl_ptrs[3] = NULL;
  cinfo->script_space = NULL;
  cinfo->input_gamma = 1.0;
  cinfo->global_state = 100;
}

/*
==============
jpeg_abort_compress
==============
*/

void __fastcall jpeg_abort_compress(jpeg_compress_struct *cinfo)
{
  j_jpeg_abort((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_destroy_compress
==============
*/

void __fastcall jpeg_destroy_compress(jpeg_compress_struct *cinfo)
{
  j_jpeg_destroy((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_finish_compress
==============
*/
void jpeg_finish_compress(jpeg_compress_struct *cinfo)
{
  int global_state; 
  jpeg_comp_master *i; 
  unsigned int j; 
  jpeg_progress_mgr *progress; 

  global_state = cinfo->global_state;
  if ( (unsigned int)(global_state - 101) <= 1 )
  {
    if ( cinfo->next_scanline < cinfo->image_height )
    {
      cinfo->err->msg_code = 67;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    cinfo->master->finish_pass(cinfo);
  }
  else if ( global_state != 103 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  for ( i = cinfo->master; !i->is_last_pass; i = cinfo->master )
  {
    i->prepare_for_pass(cinfo);
    for ( j = 0; j < cinfo->total_iMCU_rows; ++j )
    {
      progress = cinfo->progress;
      if ( progress )
      {
        progress->pass_counter = j;
        cinfo->progress->pass_limit = cinfo->total_iMCU_rows;
        cinfo->progress->progress_monitor((jpeg_common_struct *)cinfo);
      }
      if ( !cinfo->coef->compress_data(cinfo, NULL) )
      {
        cinfo->err->msg_code = 24;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
    }
    cinfo->master->finish_pass(cinfo);
  }
  cinfo->marker->write_file_trailer(cinfo);
  cinfo->dest->term_destination(cinfo);
  j_jpeg_abort((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_suppress_tables
==============
*/
void jpeg_suppress_tables(jpeg_compress_struct *cinfo, unsigned __int8 suppress)
{
  JQUANT_TBL *v2; 
  JQUANT_TBL *v3; 
  JQUANT_TBL *v4; 
  JQUANT_TBL *v5; 
  JHUFF_TBL *v6; 
  JHUFF_TBL *v7; 
  JHUFF_TBL *v8; 
  JHUFF_TBL *v9; 
  JHUFF_TBL *v10; 
  JHUFF_TBL *v11; 
  JHUFF_TBL *v12; 
  JHUFF_TBL *v13; 

  v2 = cinfo->quant_tbl_ptrs[0];
  if ( v2 )
    v2->sent_table = suppress;
  v3 = cinfo->quant_tbl_ptrs[1];
  if ( v3 )
    v3->sent_table = suppress;
  v4 = cinfo->quant_tbl_ptrs[2];
  if ( v4 )
    v4->sent_table = suppress;
  v5 = cinfo->quant_tbl_ptrs[3];
  if ( v5 )
    v5->sent_table = suppress;
  v6 = cinfo->dc_huff_tbl_ptrs[0];
  if ( v6 )
    v6->sent_table = suppress;
  v7 = cinfo->ac_huff_tbl_ptrs[0];
  if ( v7 )
    v7->sent_table = suppress;
  v8 = cinfo->dc_huff_tbl_ptrs[1];
  if ( v8 )
    v8->sent_table = suppress;
  v9 = cinfo->ac_huff_tbl_ptrs[1];
  if ( v9 )
    v9->sent_table = suppress;
  v10 = cinfo->dc_huff_tbl_ptrs[2];
  if ( v10 )
    v10->sent_table = suppress;
  v11 = cinfo->ac_huff_tbl_ptrs[2];
  if ( v11 )
    v11->sent_table = suppress;
  v12 = cinfo->dc_huff_tbl_ptrs[3];
  if ( v12 )
    v12->sent_table = suppress;
  v13 = cinfo->ac_huff_tbl_ptrs[3];
  if ( v13 )
    v13->sent_table = suppress;
}

/*
==============
jpeg_write_m_byte
==============
*/
void jpeg_write_m_byte(jpeg_compress_struct *cinfo, __int64 val)
{
  cinfo->marker->write_marker_byte(cinfo, val);
}

/*
==============
jpeg_write_m_header
==============
*/
void jpeg_write_m_header(jpeg_compress_struct *cinfo, int marker, unsigned int datalen)
{
  if ( cinfo->next_scanline || (unsigned int)(cinfo->global_state - 101) > 2 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  cinfo->marker->write_marker_header(cinfo, marker, datalen);
}

/*
==============
jpeg_write_marker
==============
*/
void jpeg_write_marker(jpeg_compress_struct *cinfo, int marker, const unsigned __int8 *dataptr, unsigned int datalen)
{
  void (__fastcall *i)(jpeg_compress_struct *, int); 

  if ( cinfo->next_scanline || (unsigned int)(cinfo->global_state - 101) > 2 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  cinfo->marker->write_marker_header(cinfo, marker, datalen);
  for ( i = cinfo->marker->write_marker_byte; datalen; --datalen )
    i(cinfo, *dataptr++);
}

/*
==============
jpeg_write_tables
==============
*/
void jpeg_write_tables(jpeg_compress_struct *cinfo)
{
  if ( cinfo->global_state != 100 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  cinfo->err->reset_error_mgr((jpeg_common_struct *)cinfo);
  cinfo->dest->init_destination(cinfo);
  j_jinit_marker_writer(cinfo);
  cinfo->marker->write_tables_only(cinfo);
  cinfo->dest->term_destination(cinfo);
}

