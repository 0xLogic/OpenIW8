/*
==============
consume_markers
==============
*/
__int64 consume_markers(jpeg_decompress_struct *cinfo)
{
  jpeg_input_controller *inputctl; 
  __int64 result; 
  unsigned int v4; 
  bool v5; 
  int input_scan_number; 

  inputctl = cinfo->inputctl;
  if ( inputctl->eoi_reached )
    return 2i64;
  v4 = ((__int64 (*)(void))cinfo->marker->read_markers)();
  if ( v4 == 1 )
  {
    if ( LOBYTE(inputctl[1].consume_input) )
    {
      initial_setup(cinfo);
      result = v4;
      LOBYTE(inputctl[1].consume_input) = 0;
      return result;
    }
    if ( !inputctl->has_multiple_scans )
    {
      cinfo->err->msg_code = 35;
      ((void (__fastcall *)(jpeg_decompress_struct *, _QWORD))cinfo->err->error_exit)(cinfo, v4 - 1);
    }
    start_input_pass(cinfo);
  }
  else if ( v4 == 2 )
  {
    v5 = LOBYTE(inputctl[1].consume_input) == 0;
    inputctl->eoi_reached = 1;
    if ( v5 )
    {
      input_scan_number = cinfo->input_scan_number;
      if ( cinfo->output_scan_number > input_scan_number )
      {
        cinfo->output_scan_number = input_scan_number;
        return v4;
      }
    }
    else if ( cinfo->marker->saw_SOF )
    {
      cinfo->err->msg_code = 59;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      return v4;
    }
  }
  return v4;
}

/*
==============
finish_input_pass
==============
*/
void finish_input_pass(jpeg_decompress_struct *cinfo)
{
  cinfo->inputctl->consume_input = (int (__fastcall *)(jpeg_decompress_struct *))consume_markers;
}

/*
==============
jinit_input_controller
==============
*/
void jinit_input_controller(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 0i64, 48i64);
  cinfo->inputctl = (jpeg_input_controller *)v2;
  *(_QWORD *)v2 = consume_markers;
  *(_QWORD *)(v2 + 8) = reset_input_controller;
  *(_QWORD *)(v2 + 16) = start_input_pass;
  *(_QWORD *)(v2 + 24) = finish_input_pass;
  *(_WORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 40) = 1;
}

/*
==============
reset_input_controller
==============
*/
void reset_input_controller(jpeg_decompress_struct *cinfo)
{
  jpeg_input_controller *inputctl; 

  inputctl = cinfo->inputctl;
  inputctl->consume_input = (int (__fastcall *)(jpeg_decompress_struct *))consume_markers;
  *(_WORD *)&inputctl->has_multiple_scans = 0;
  LOBYTE(inputctl[1].consume_input) = 1;
  cinfo->err->reset_error_mgr((jpeg_common_struct *)cinfo);
  cinfo->marker->reset_marker_reader(cinfo);
  cinfo->coef_bits = NULL;
}

