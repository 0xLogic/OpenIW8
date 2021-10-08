/*
==============
jinit_compress_master
==============
*/
void jinit_compress_master(jpeg_compress_struct *cinfo)
{
  bool v2; 

  j_jinit_c_master_control(cinfo, 0);
  if ( !cinfo->raw_data_in )
  {
    j_jinit_color_converter(cinfo);
    j_jinit_downsampler(cinfo);
    j_jinit_c_prep_controller(cinfo, 0);
  }
  j_jinit_forward_dct(cinfo);
  if ( cinfo->arith_code )
  {
    cinfo->err->msg_code = 1;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  else if ( cinfo->progressive_mode )
  {
    j_jinit_phuff_encoder(cinfo);
  }
  else
  {
    j_jinit_huff_encoder(cinfo);
  }
  v2 = cinfo->num_scans > 1 || cinfo->optimize_coding;
  j_jinit_c_coef_controller(cinfo, v2);
  j_jinit_c_main_controller(cinfo, 0);
  j_jinit_marker_writer(cinfo);
  cinfo->mem->realize_virt_arrays((jpeg_common_struct *)cinfo);
  cinfo->marker->write_file_header(cinfo);
}

