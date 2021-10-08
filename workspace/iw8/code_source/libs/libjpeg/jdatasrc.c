/*
==============
init_source
==============
*/
void init_source(jpeg_decompress_struct *cinfo)
{
  LOBYTE(cinfo->src[1].next_input_byte) = 1;
}

/*
==============
jpeg_memory_src
==============
*/
void jpeg_memory_src(jpeg_decompress_struct *cinfo, const unsigned __int8 *pubData, int iBytes)
{
  jpeg_source_mgr *src; 
  unsigned __int64 v5; 

  src = cinfo->src;
  v5 = iBytes;
  if ( !src )
  {
    src = (jpeg_source_mgr *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 0i64, 64i64);
    cinfo->src = src;
  }
  src->init_source = init_source;
  src->skip_input_data = skip_input_data;
  src->resync_to_restart = j_jpeg_resync_to_restart;
  src->next_input_byte = pubData;
  src->term_source = term_source;
  src->fill_input_buffer = NULL;
  src->bytes_in_buffer = v5;
}

/*
==============
skip_input_data
==============
*/
void skip_input_data(jpeg_decompress_struct *cinfo, int num_bytes)
{
  jpeg_source_mgr *src; 

  src = cinfo->src;
  if ( num_bytes > 0 )
  {
    src->next_input_byte += num_bytes;
    src->bytes_in_buffer -= num_bytes;
  }
}

/*
==============
term_source
==============
*/
void term_source(jpeg_decompress_struct *cinfo)
{
  ;
}

