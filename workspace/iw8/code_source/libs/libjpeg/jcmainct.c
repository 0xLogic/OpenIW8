/*
==============
jinit_c_main_controller
==============
*/
void jinit_c_main_controller(jpeg_compress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  jpeg_c_main_controller *v4; 
  int v5; 
  unsigned int *p_width_in_blocks; 
  jpeg_c_main_controller *v7; 

  v4 = (jpeg_c_main_controller *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 112i64);
  cinfo->main = v4;
  v4->start_pass = start_pass_main;
  if ( !cinfo->raw_data_in )
  {
    if ( need_full_buffer )
    {
      cinfo->err->msg_code = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    else
    {
      v5 = 0;
      if ( cinfo->num_components > 0 )
      {
        p_width_in_blocks = &cinfo->comp_info->width_in_blocks;
        v7 = v4 + 2;
        do
        {
          v7->start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))cinfo->mem->alloc_sarray(cinfo, 1i64, 8 * *p_width_in_blocks, 8 * *(p_width_in_blocks - 4));
          ++v5;
          v7 = (jpeg_c_main_controller *)((char *)v7 + 8);
          p_width_in_blocks += 24;
        }
        while ( v5 < cinfo->num_components );
      }
    }
  }
}

