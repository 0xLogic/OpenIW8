/*
==============
default_decompress_parms
==============
*/
void default_decompress_parms(jpeg_decompress_struct *cinfo)
{
  int v2; 
  int v3; 
  unsigned __int8 Adobe_transform; 
  __int64 v5; 
  jpeg_component_info *comp_info; 
  int component_id; 
  int v8; 
  int v9; 
  jpeg_error_mgr *err; 

  v2 = cinfo->num_components - 1;
  if ( !v2 )
  {
    cinfo->jpeg_color_space = JCS_GRAYSCALE;
    cinfo->out_color_space = JCS_GRAYSCALE;
    goto LABEL_27;
  }
  v3 = v2 - 2;
  if ( !v3 )
  {
    if ( cinfo->saw_JFIF_marker )
      goto LABEL_21;
    if ( cinfo->saw_Adobe_marker )
    {
      if ( cinfo->Adobe_transform )
      {
        if ( cinfo->Adobe_transform != 1 )
        {
          v5 = 0xFFFFFFFFi64;
          cinfo->err->msg_code = 114;
          cinfo->err->msg_parm.i[0] = cinfo->Adobe_transform;
LABEL_20:
          cinfo->err->emit_message((jpeg_common_struct *)cinfo, v5);
        }
LABEL_21:
        cinfo->jpeg_color_space = JCS_YCbCr;
        cinfo->out_color_space = JCS_RGB;
        goto LABEL_27;
      }
LABEL_25:
      cinfo->jpeg_color_space = JCS_RGB;
      cinfo->out_color_space = JCS_RGB;
      goto LABEL_27;
    }
    comp_info = cinfo->comp_info;
    component_id = comp_info->component_id;
    v8 = comp_info[1].component_id;
    v9 = comp_info[2].component_id;
    if ( comp_info->component_id == 1 )
    {
      if ( v8 == 2 && v9 == 3 )
        goto LABEL_21;
    }
    else if ( component_id == 82 && v8 == 71 && v9 == 66 )
    {
      goto LABEL_25;
    }
    err = cinfo->err;
    err->msg_parm.i[2] = v9;
    v5 = 1i64;
    err->msg_parm.i[0] = component_id;
    err->msg_parm.i[1] = v8;
    cinfo->err->msg_code = 111;
    goto LABEL_20;
  }
  if ( v3 == 1 )
  {
    if ( cinfo->saw_Adobe_marker && (Adobe_transform = cinfo->Adobe_transform) != 0 )
    {
      if ( Adobe_transform != 2 )
      {
        cinfo->err->msg_code = 114;
        cinfo->err->msg_parm.i[0] = cinfo->Adobe_transform;
        cinfo->err->emit_message((jpeg_common_struct *)cinfo, -1);
      }
      cinfo->jpeg_color_space = JCS_YCCK;
      cinfo->out_color_space = JCS_CMYK;
    }
    else
    {
      cinfo->jpeg_color_space = JCS_CMYK;
      cinfo->out_color_space = JCS_CMYK;
    }
  }
  else
  {
    *(_QWORD *)&cinfo->jpeg_color_space = 0i64;
  }
LABEL_27:
  cinfo->scale_num = 1;
  cinfo->output_gamma = 1.0;
  cinfo->scale_denom = 1;
  *(_WORD *)&cinfo->buffered_image = 0;
  cinfo->dct_method = JDCT_ISLOW;
  *(_WORD *)&cinfo->do_fancy_upsampling = 257;
  cinfo->quantize_colors = 0;
  cinfo->dither_mode = JDITHER_FS;
  cinfo->two_pass_quantize = 1;
  cinfo->desired_number_of_colors = 256;
  cinfo->colormap = NULL;
  *(_WORD *)&cinfo->enable_1pass_quant = 0;
  cinfo->enable_2pass_quant = 0;
}

/*
==============
jpeg_CreateDecompress
==============
*/
void jpeg_CreateDecompress(jpeg_decompress_struct *cinfo, int version, unsigned __int64 structsize)
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
  if ( structsize != 616 )
  {
    cinfo->err->msg_code = 21;
    cinfo->err->msg_parm.i[0] = 616;
    cinfo->err->msg_parm.i[1] = structsize;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  err = cinfo->err;
  client_data = cinfo->client_data;
  alloc = cinfo->alloc;
  memset_0(cinfo, 0, sizeof(jpeg_decompress_struct));
  cinfo->err = err;
  cinfo->alloc = alloc;
  cinfo->client_data = client_data;
  cinfo->is_decompressor = 1;
  j_jinit_memory_mgr((jpeg_common_struct *)cinfo);
  cinfo->progress = NULL;
  cinfo->src = NULL;
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
  cinfo->marker_list = NULL;
  j_jinit_marker_reader(cinfo);
  j_jinit_input_controller(cinfo);
  cinfo->global_state = 200;
}

/*
==============
jpeg_abort_decompress
==============
*/

void __fastcall jpeg_abort_decompress(jpeg_decompress_struct *cinfo)
{
  j_jpeg_abort((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_consume_input
==============
*/
__int64 jpeg_consume_input(jpeg_decompress_struct *cinfo)
{
  __int64 result; 

  switch ( cinfo->global_state )
  {
    case 0xC8:
      cinfo->inputctl->reset_input_controller(cinfo);
      cinfo->src->init_source(cinfo);
      cinfo->global_state = 201;
      goto $LN5_292;
    case 0xC9:
$LN5_292:
      result = cinfo->inputctl->consume_input(cinfo);
      if ( (_DWORD)result == 1 )
      {
        default_decompress_parms(cinfo);
        result = 1i64;
        cinfo->global_state = 202;
      }
      break;
    case 0xCA:
      result = 1i64;
      break;
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
    case 0xD0:
    case 0xD2:
      result = cinfo->inputctl->consume_input(cinfo);
      break;
    default:
      cinfo->err->msg_code = 20;
      cinfo->err->msg_parm.i[0] = cinfo->global_state;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
jpeg_destroy_decompress
==============
*/

void __fastcall jpeg_destroy_decompress(jpeg_decompress_struct *cinfo)
{
  j_jpeg_destroy((jpeg_common_struct *)cinfo);
}

/*
==============
jpeg_finish_decompress
==============
*/
unsigned __int8 jpeg_finish_decompress(jpeg_decompress_struct *cinfo)
{
  int global_state; 
  jpeg_input_controller *inputctl; 

  global_state = cinfo->global_state;
  if ( (unsigned int)(global_state - 205) > 1 || cinfo->buffered_image )
  {
    if ( global_state == 207 )
    {
      cinfo->global_state = 210;
    }
    else if ( global_state != 210 )
    {
      cinfo->err->msg_code = 20;
      cinfo->err->msg_parm.i[0] = cinfo->global_state;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
  }
  else
  {
    if ( cinfo->output_scanline < cinfo->output_height )
    {
      cinfo->err->msg_code = 67;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    cinfo->master->finish_output_pass(cinfo);
    cinfo->global_state = 210;
  }
  inputctl = cinfo->inputctl;
  if ( inputctl->eoi_reached )
  {
LABEL_13:
    cinfo->src->term_source(cinfo);
    j_jpeg_abort((jpeg_common_struct *)cinfo);
    return 1;
  }
  else
  {
    while ( inputctl->consume_input(cinfo) )
    {
      inputctl = cinfo->inputctl;
      if ( inputctl->eoi_reached )
        goto LABEL_13;
    }
    return 0;
  }
}

/*
==============
jpeg_has_multiple_scans
==============
*/
__int64 jpeg_has_multiple_scans(jpeg_decompress_struct *cinfo)
{
  if ( (unsigned int)(cinfo->global_state - 202) <= 8 )
    return cinfo->inputctl->has_multiple_scans;
  cinfo->err->msg_code = 20;
  cinfo->err->msg_parm.i[0] = cinfo->global_state;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  return cinfo->inputctl->has_multiple_scans;
}

/*
==============
jpeg_input_complete
==============
*/
__int64 jpeg_input_complete(jpeg_decompress_struct *cinfo)
{
  if ( (unsigned int)(cinfo->global_state - 200) <= 0xA )
    return cinfo->inputctl->eoi_reached;
  cinfo->err->msg_code = 20;
  cinfo->err->msg_parm.i[0] = cinfo->global_state;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  return cinfo->inputctl->eoi_reached;
}

/*
==============
jpeg_read_header
==============
*/
__int64 jpeg_read_header(jpeg_decompress_struct *cinfo, unsigned __int8 require_image)
{
  int global_state; 
  int v5; 
  unsigned int v6; 

  global_state = cinfo->global_state;
  v5 = global_state;
  if ( global_state != 200 && global_state != 201 )
  {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    v5 = cinfo->global_state;
  }
  v6 = 0;
  switch ( v5 )
  {
    case 200:
      cinfo->inputctl->reset_input_controller(cinfo);
      cinfo->src->init_source(cinfo);
      cinfo->global_state = 201;
      goto LABEL_6;
    case 201:
LABEL_6:
      v6 = cinfo->inputctl->consume_input(cinfo);
      if ( v6 == 1 )
      {
        default_decompress_parms(cinfo);
        cinfo->global_state = 202;
      }
      break;
    case 202:
      v6 = 1;
      break;
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 210:
      v6 = cinfo->inputctl->consume_input(cinfo);
      break;
    default:
      cinfo->err->msg_code = 20;
      cinfo->err->msg_parm.i[0] = cinfo->global_state;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      break;
  }
  if ( v6 == 1 )
    return 1i64;
  if ( v6 != 2 )
    return v6;
  if ( require_image )
  {
    cinfo->err->msg_code = 51;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  j_jpeg_abort((jpeg_common_struct *)cinfo);
  return 2i64;
}

