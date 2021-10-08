/*
==============
jpeg_free_large
==============
*/
void jpeg_free_large(jpeg_common_struct *cinfo, void *object, unsigned __int64 sizeofobject)
{
  cinfo->alloc.free(object, sizeofobject);
}

/*
==============
jpeg_free_small
==============
*/
void jpeg_free_small(jpeg_common_struct *cinfo, void *object, unsigned __int64 sizeofobject)
{
  cinfo->alloc.free(object, sizeofobject);
}

/*
==============
jpeg_get_large
==============
*/
void *jpeg_get_large(jpeg_common_struct *cinfo, unsigned __int64 sizeofobject)
{
  return cinfo->alloc.malloc(sizeofobject);
}

/*
==============
jpeg_get_small
==============
*/
void *jpeg_get_small(jpeg_common_struct *cinfo, unsigned __int64 sizeofobject)
{
  return cinfo->alloc.malloc(sizeofobject);
}

/*
==============
jpeg_mem_available
==============
*/
__int64 jpeg_mem_available(jpeg_common_struct *cinfo, int min_bytes_needed, int max_bytes_needed, int already_allocated)
{
  return (unsigned int)max_bytes_needed;
}

/*
==============
jpeg_mem_init
==============
*/
__int64 jpeg_mem_init(jpeg_common_struct *cinfo)
{
  return 0i64;
}

/*
==============
jpeg_mem_term
==============
*/
void jpeg_mem_term(jpeg_common_struct *cinfo)
{
  ;
}

/*
==============
jpeg_open_backing_store
==============
*/
void jpeg_open_backing_store(jpeg_common_struct *cinfo, backing_store_struct *info, __int64 total_bytes_needed)
{
  cinfo->err->msg_code = 49;
  ((void (__fastcall *)(jpeg_common_struct *, backing_store_struct *, __int64))cinfo->err->error_exit)(cinfo, info, total_bytes_needed);
}

