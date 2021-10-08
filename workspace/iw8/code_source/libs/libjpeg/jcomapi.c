/*
==============
jpeg_abort
==============
*/
void jpeg_abort(jpeg_common_struct *cinfo)
{
  jpeg_memory_mgr *mem; 

  mem = cinfo->mem;
  if ( mem )
  {
    mem->free_pool(cinfo, 1);
    if ( cinfo->is_decompressor )
    {
      cinfo->global_state = 200;
      cinfo[6].alloc.free = NULL;
    }
    else
    {
      cinfo->global_state = 100;
    }
  }
}

/*
==============
jpeg_alloc_huff_table
==============
*/
JHUFF_TBL *jpeg_alloc_huff_table(jpeg_common_struct *cinfo)
{
  JHUFF_TBL *result; 

  result = (JHUFF_TBL *)cinfo->mem->alloc_small(cinfo, 0i64, 274i64);
  result->sent_table = 0;
  return result;
}

/*
==============
jpeg_alloc_quant_table
==============
*/
JQUANT_TBL *jpeg_alloc_quant_table(jpeg_common_struct *cinfo)
{
  JQUANT_TBL *result; 

  result = (JQUANT_TBL *)cinfo->mem->alloc_small(cinfo, 0i64, 130i64);
  result->sent_table = 0;
  return result;
}

/*
==============
jpeg_destroy
==============
*/
void jpeg_destroy(jpeg_common_struct *cinfo)
{
  jpeg_memory_mgr *mem; 

  mem = cinfo->mem;
  if ( mem )
  {
    ((void (*)(void))mem->self_destruct)();
    cinfo->mem = NULL;
    cinfo->global_state = 0;
  }
  else
  {
    cinfo->mem = NULL;
    cinfo->global_state = 0;
  }
}

