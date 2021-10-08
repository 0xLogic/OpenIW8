/*
==============
access_virt_barray
==============
*/
__int16 (**access_virt_barray(jpeg_common_struct *cinfo, jvirt_barray_control *ptr, unsigned int start_row, unsigned int num_rows, unsigned __int8 writable))[64]
{
  unsigned int v5; 
  unsigned int cur_start_row; 
  signed int v10; 
  signed int v11; 
  int v12; 
  signed int rows_in_mem; 
  signed int rowsperchunk; 
  unsigned int v15; 
  signed int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  signed int v21; 
  unsigned int v22; 
  int v23; 
  signed int v24; 
  signed int v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  unsigned int first_undef_row; 
  unsigned int v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v36; 

  v5 = start_row + num_rows;
  v36 = start_row + num_rows;
  if ( start_row + num_rows > ptr->rows_in_array || num_rows > ptr->maxaccess || !ptr->mem_buffer )
  {
    cinfo->err->msg_code = 22;
    cinfo->err->error_exit(cinfo);
  }
  cur_start_row = ptr->cur_start_row;
  if ( start_row < cur_start_row || v5 > cur_start_row + ptr->rows_in_mem )
  {
    if ( !ptr->b_s_open )
    {
      cinfo->err->msg_code = 69;
      cinfo->err->error_exit(cinfo);
      cur_start_row = ptr->cur_start_row;
    }
    v10 = 0;
    if ( ptr->dirty )
    {
      v11 = 0;
      v12 = (ptr->blocksperrow << 7) * cur_start_row;
      rows_in_mem = ptr->rows_in_mem;
      if ( rows_in_mem > 0 )
      {
        rowsperchunk = ptr->rowsperchunk;
        v15 = ptr->blocksperrow << 7;
        do
        {
          v16 = rows_in_mem - v11;
          if ( rowsperchunk >= v16 )
            rowsperchunk = v16;
          v17 = v11 + ptr->cur_start_row;
          if ( rowsperchunk >= (int)(ptr->first_undef_row - v17) )
            rowsperchunk = ptr->first_undef_row - v17;
          v18 = ptr->rows_in_array - v17;
          if ( rowsperchunk < v18 )
            v18 = rowsperchunk;
          if ( v18 <= 0 )
            break;
          v19 = v15 * v18;
          ptr->b_s_info.write_backing_store(cinfo, &ptr->b_s_info, ptr->mem_buffer[v11], v12, v19);
          rowsperchunk = ptr->rowsperchunk;
          v12 += v19;
          rows_in_mem = ptr->rows_in_mem;
          v11 += rowsperchunk;
        }
        while ( v11 < rows_in_mem );
        v5 = v36;
      }
      cur_start_row = ptr->cur_start_row;
      ptr->dirty = 0;
    }
    if ( start_row <= cur_start_row )
    {
      v20 = 0;
      if ( (int)(v5 - ptr->rows_in_mem) >= 0 )
        v20 = v5 - ptr->rows_in_mem;
    }
    else
    {
      v20 = start_row;
    }
    v21 = ptr->rows_in_mem;
    v22 = ptr->blocksperrow << 7;
    ptr->cur_start_row = v20;
    v23 = v22 * v20;
    if ( v21 > 0 )
    {
      v24 = ptr->rowsperchunk;
      do
      {
        v25 = v21 - v10;
        if ( v24 >= v25 )
          v24 = v25;
        v26 = v10 + ptr->cur_start_row;
        if ( v24 >= (int)(ptr->first_undef_row - v26) )
          v24 = ptr->first_undef_row - v26;
        v27 = ptr->rows_in_array - v26;
        if ( v24 < v27 )
          v27 = v24;
        if ( v27 <= 0 )
          break;
        v28 = v22 * v27;
        ptr->b_s_info.read_backing_store(cinfo, &ptr->b_s_info, ptr->mem_buffer[v10], v23, v28);
        v24 = ptr->rowsperchunk;
        v23 += v28;
        v21 = ptr->rows_in_mem;
        v10 += v24;
      }
      while ( v10 < v21 );
    }
  }
  first_undef_row = ptr->first_undef_row;
  if ( first_undef_row < v5 )
  {
    if ( first_undef_row < start_row )
    {
      if ( writable )
      {
        cinfo->err->msg_code = 22;
        cinfo->err->error_exit(cinfo);
      }
      first_undef_row = start_row;
    }
    if ( writable )
      ptr->first_undef_row = v5;
    if ( !ptr->pre_zero )
    {
      if ( !writable )
      {
        cinfo->err->msg_code = 22;
        cinfo->err->error_exit(cinfo);
        return &ptr->mem_buffer[start_row - ptr->cur_start_row];
      }
      goto LABEL_48;
    }
    v30 = v5 - ptr->cur_start_row;
    v31 = first_undef_row - ptr->cur_start_row;
    v32 = (unsigned __int64)ptr->blocksperrow << 7;
    if ( (unsigned int)v31 < v30 )
    {
      v33 = v31;
      v34 = v30 - (unsigned int)v31;
      do
      {
        j_jzero_far(ptr->mem_buffer[v33++], v32);
        --v34;
      }
      while ( v34 );
    }
  }
  if ( writable )
LABEL_48:
    ptr->dirty = 1;
  return &ptr->mem_buffer[start_row - ptr->cur_start_row];
}

/*
==============
access_virt_sarray
==============
*/
unsigned __int8 **access_virt_sarray(jpeg_common_struct *cinfo, jvirt_sarray_control *ptr, unsigned int start_row, unsigned int num_rows, unsigned __int8 writable)
{
  unsigned int v5; 
  unsigned int cur_start_row; 
  signed int v10; 
  signed int v11; 
  int v12; 
  signed int rows_in_mem; 
  signed int rowsperchunk; 
  unsigned int samplesperrow; 
  signed int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  signed int v22; 
  int v23; 
  signed int v24; 
  signed int v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  unsigned int first_undef_row; 
  unsigned int v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v36; 

  v5 = start_row + num_rows;
  v36 = start_row + num_rows;
  if ( start_row + num_rows > ptr->rows_in_array || num_rows > ptr->maxaccess || !ptr->mem_buffer )
  {
    cinfo->err->msg_code = 22;
    cinfo->err->error_exit(cinfo);
  }
  cur_start_row = ptr->cur_start_row;
  if ( start_row < cur_start_row || v5 > cur_start_row + ptr->rows_in_mem )
  {
    if ( !ptr->b_s_open )
    {
      cinfo->err->msg_code = 69;
      cinfo->err->error_exit(cinfo);
      cur_start_row = ptr->cur_start_row;
    }
    v10 = 0;
    if ( ptr->dirty )
    {
      v11 = 0;
      v12 = ptr->samplesperrow * cur_start_row;
      rows_in_mem = ptr->rows_in_mem;
      if ( rows_in_mem > 0 )
      {
        rowsperchunk = ptr->rowsperchunk;
        samplesperrow = ptr->samplesperrow;
        do
        {
          v16 = rows_in_mem - v11;
          if ( rowsperchunk >= v16 )
            rowsperchunk = v16;
          v17 = v11 + ptr->cur_start_row;
          if ( rowsperchunk >= (int)(ptr->first_undef_row - v17) )
            rowsperchunk = ptr->first_undef_row - v17;
          v18 = ptr->rows_in_array - v17;
          if ( rowsperchunk < v18 )
            v18 = rowsperchunk;
          if ( v18 <= 0 )
            break;
          v19 = samplesperrow * v18;
          ptr->b_s_info.write_backing_store(cinfo, &ptr->b_s_info, ptr->mem_buffer[v11], v12, v19);
          rowsperchunk = ptr->rowsperchunk;
          v12 += v19;
          rows_in_mem = ptr->rows_in_mem;
          v11 += rowsperchunk;
        }
        while ( v11 < rows_in_mem );
        v5 = v36;
      }
      cur_start_row = ptr->cur_start_row;
      ptr->dirty = 0;
    }
    if ( start_row <= cur_start_row )
    {
      v20 = 0;
      if ( (int)(v5 - ptr->rows_in_mem) >= 0 )
        v20 = v5 - ptr->rows_in_mem;
    }
    else
    {
      v20 = start_row;
    }
    v21 = ptr->samplesperrow;
    v22 = ptr->rows_in_mem;
    ptr->cur_start_row = v20;
    v23 = v21 * v20;
    if ( v22 > 0 )
    {
      v24 = ptr->rowsperchunk;
      do
      {
        v25 = v22 - v10;
        if ( v24 >= v25 )
          v24 = v25;
        v26 = v10 + ptr->cur_start_row;
        if ( v24 >= (int)(ptr->first_undef_row - v26) )
          v24 = ptr->first_undef_row - v26;
        v27 = ptr->rows_in_array - v26;
        if ( v24 < v27 )
          v27 = v24;
        if ( v27 <= 0 )
          break;
        v28 = v21 * v27;
        ptr->b_s_info.read_backing_store(cinfo, &ptr->b_s_info, ptr->mem_buffer[v10], v23, v28);
        v24 = ptr->rowsperchunk;
        v23 += v28;
        v22 = ptr->rows_in_mem;
        v10 += v24;
      }
      while ( v10 < v22 );
    }
  }
  first_undef_row = ptr->first_undef_row;
  if ( first_undef_row < v5 )
  {
    if ( first_undef_row < start_row )
    {
      if ( writable )
      {
        cinfo->err->msg_code = 22;
        cinfo->err->error_exit(cinfo);
      }
      first_undef_row = start_row;
    }
    if ( writable )
      ptr->first_undef_row = v5;
    if ( !ptr->pre_zero )
    {
      if ( !writable )
      {
        cinfo->err->msg_code = 22;
        cinfo->err->error_exit(cinfo);
        return &ptr->mem_buffer[start_row - ptr->cur_start_row];
      }
      goto LABEL_48;
    }
    v30 = v5 - ptr->cur_start_row;
    v31 = first_undef_row - ptr->cur_start_row;
    v32 = ptr->samplesperrow;
    if ( (unsigned int)v31 < v30 )
    {
      v33 = v31;
      v34 = v30 - (unsigned int)v31;
      do
      {
        j_jzero_far(ptr->mem_buffer[v33++], v32);
        --v34;
      }
      while ( v34 );
    }
  }
  if ( writable )
LABEL_48:
    ptr->dirty = 1;
  return &ptr->mem_buffer[start_row - ptr->cur_start_row];
}

/*
==============
alloc_barray
==============
*/
__int16 (**alloc_barray(jpeg_common_struct *cinfo, int pool_id, unsigned int blocksperrow, unsigned int numrows))[64]
{
  jpeg_memory_mgr *mem; 
  __int64 v6; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  __int16 (**result)[64]; 
  __int64 v12; 
  __int16 (**v13)[64]; 
  unsigned int v14; 
  __int16 (*v15)[64]; 
  unsigned int i; 

  mem = cinfo->mem;
  v6 = numrows;
  v8 = blocksperrow;
  v9 = 0x3B9AC9E8ui64 / ((__int64)(int)blocksperrow << 7);
  if ( (int)v9 <= 0 )
  {
    cinfo->err->msg_code = 70;
    cinfo->err->error_exit(cinfo);
  }
  v10 = v6;
  if ( (int)v9 < (int)v6 )
    v10 = v9;
  HIDWORD(mem[1].realize_virt_arrays) = v10;
  result = (__int16 (**)[64])alloc_small(cinfo, pool_id, 8 * v6);
  v12 = 0i64;
  v13 = result;
  if ( (_DWORD)v6 )
  {
    do
    {
      v14 = v6 - v12;
      if ( v10 < (int)v6 - (int)v12 )
        v14 = v10;
      v10 = v14;
      v15 = (__int16 (*)[64])alloc_large(cinfo, pool_id, (v8 * v14) << 7);
      for ( i = v10; i; --i )
      {
        v13[v12] = v15;
        v12 = (unsigned int)(v12 + 1);
        v15 += v8;
      }
    }
    while ( (unsigned int)v12 < (unsigned int)v6 );
    return v13;
  }
  return result;
}

/*
==============
alloc_large
==============
*/
void *alloc_large(jpeg_common_struct *cinfo, int pool_id, unsigned __int64 sizeofobject)
{
  jpeg_memory_mgr *mem; 
  unsigned __int64 v4; 
  __int64 v5; 
  _QWORD *large; 
  void *result; 

  mem = cinfo->mem;
  v4 = sizeofobject;
  v5 = pool_id;
  if ( sizeofobject > 0x3B9AC9E8 )
  {
    cinfo->err->msg_code = 54;
    cinfo->err->msg_parm.i[0] = 3;
    cinfo->err->error_exit(cinfo);
  }
  if ( (v4 & 7) != 0 )
    v4 += 8 - (v4 & 7);
  if ( (unsigned int)v5 > 1 )
  {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = v5;
    cinfo->err->error_exit(cinfo);
  }
  large = j_jpeg_get_large(cinfo, v4 + 24);
  if ( !large )
  {
    cinfo->err->msg_code = 54;
    cinfo->err->msg_parm.i[0] = 4;
    cinfo->err->error_exit(cinfo);
  }
  LODWORD(mem[1].realize_virt_arrays) += v4 + 24;
  *large = *((_QWORD *)&mem[1].alloc_sarray + v5);
  result = large + 3;
  large[1] = v4;
  large[2] = 0i64;
  *((_QWORD *)&mem[1].alloc_sarray + v5) = large;
  return result;
}

/*
==============
alloc_sarray
==============
*/
unsigned __int8 **alloc_sarray(jpeg_common_struct *cinfo, int pool_id, unsigned int samplesperrow, unsigned int numrows)
{
  jpeg_memory_mgr *mem; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int8 **result; 
  __int64 v12; 
  unsigned __int8 **v13; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  unsigned int i; 

  mem = cinfo->mem;
  v6 = numrows;
  v7 = samplesperrow;
  v9 = 0x3B9AC9E8ui64 / (int)samplesperrow;
  if ( (int)v9 <= 0 )
  {
    cinfo->err->msg_code = 70;
    cinfo->err->error_exit(cinfo);
  }
  v10 = v6;
  if ( (int)v9 < (int)v6 )
    v10 = v9;
  HIDWORD(mem[1].realize_virt_arrays) = v10;
  result = (unsigned __int8 **)alloc_small(cinfo, pool_id, 8 * v6);
  v12 = 0i64;
  v13 = result;
  if ( (_DWORD)v6 )
  {
    do
    {
      v14 = v6 - v12;
      if ( v10 < (int)v6 - (int)v12 )
        v14 = v10;
      v10 = v14;
      v15 = (unsigned __int8 *)alloc_large(cinfo, pool_id, v7 * v14);
      for ( i = v10; i; --i )
      {
        v13[v12] = v15;
        v12 = (unsigned int)(v12 + 1);
        v15 += v7;
      }
    }
    while ( (unsigned int)v12 < (unsigned int)v6 );
    return v13;
  }
  return result;
}

/*
==============
alloc_small
==============
*/
__int64 alloc_small(jpeg_common_struct *cinfo, int pool_id, unsigned __int64 sizeofobject)
{
  jpeg_memory_mgr *mem; 
  unsigned __int64 v4; 
  __int64 v5; 
  _QWORD *i; 
  void *(__fastcall **v8)(jpeg_common_struct *, int, unsigned __int64); 
  _QWORD *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 

  mem = cinfo->mem;
  v4 = sizeofobject;
  v5 = pool_id;
  if ( sizeofobject > 0x3B9AC9E8 )
  {
    cinfo->err->msg_code = 54;
    cinfo->err->msg_parm.i[0] = 1;
    cinfo->err->error_exit(cinfo);
  }
  if ( (v4 & 7) != 0 )
    v4 += 8 - (v4 & 7);
  if ( (unsigned int)v5 > 1 )
  {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = v5;
    cinfo->err->error_exit(cinfo);
  }
  i = (_QWORD *)*((_QWORD *)&mem[1].alloc_small + v5);
  v8 = &mem[1].alloc_small + v5;
  v9 = NULL;
  if ( i )
  {
    while ( i[2] < v4 )
    {
      v9 = i;
      i = (_QWORD *)*i;
      if ( !i )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v10 = v4 + 24;
    if ( v9 )
      v11 = extra_pool_slop[v5];
    else
      v11 = first_pool_slop[v5];
    v12 = 1000000000 - v10;
    if ( v11 <= 1000000000 - v10 )
      v12 = v11;
    for ( i = j_jpeg_get_small(cinfo, v12 + v10); !i; i = j_jpeg_get_small(cinfo, v12 + v10) )
    {
      v12 >>= 1;
      if ( v12 < 0x32 )
      {
        cinfo->err->msg_code = 54;
        cinfo->err->msg_parm.i[0] = 2;
        cinfo->err->error_exit(cinfo);
      }
    }
    LODWORD(mem[1].realize_virt_arrays) += v10 + v12;
    i[2] = v12 + v4;
    *i = 0i64;
    i[1] = 0i64;
    if ( v9 )
      *v9 = i;
    else
      *v8 = (void *(__fastcall *)(jpeg_common_struct *, int, unsigned __int64))i;
  }
  v13 = i[1];
  i[2] -= v4;
  i[1] = v13 + v4;
  return (__int64)i + v13 + 24;
}

/*
==============
free_pool
==============
*/
void free_pool(jpeg_common_struct *cinfo, int pool_id)
{
  jpeg_memory_mgr *mem; 
  __int64 v4; 
  jvirt_sarray_control *(__fastcall *i)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  jvirt_barray_control *(__fastcall *request_virt_barray)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  _QWORD *v7; 
  __int64 v8; 
  _QWORD *v9; 
  unsigned __int64 v10; 
  _QWORD *v11; 
  _QWORD *v12; 
  unsigned __int64 v13; 

  mem = cinfo->mem;
  v4 = pool_id;
  if ( (unsigned int)pool_id > 1 )
  {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = pool_id;
    cinfo->err->error_exit(cinfo);
  }
  if ( (_DWORD)v4 == 1 )
  {
    for ( i = mem[1].request_virt_sarray; i; i = (jvirt_sarray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)i + 5) )
    {
      if ( *((_BYTE *)i + 38) )
      {
        *((_BYTE *)i + 38) = 0;
        (*((void (__fastcall **)(jpeg_common_struct *, __int64))i + 8))(cinfo, (__int64)i + 48);
      }
    }
    request_virt_barray = mem[1].request_virt_barray;
    for ( mem[1].request_virt_sarray = NULL; request_virt_barray; request_virt_barray = (jvirt_barray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)request_virt_barray + 5) )
    {
      if ( *((_BYTE *)request_virt_barray + 38) )
      {
        *((_BYTE *)request_virt_barray + 38) = 0;
        (*((void (__fastcall **)(jpeg_common_struct *, __int64))request_virt_barray + 8))(cinfo, (__int64)request_virt_barray + 48);
      }
    }
    mem[1].request_virt_barray = NULL;
  }
  v7 = (_QWORD *)*((_QWORD *)&mem[1].alloc_sarray + v4);
  v8 = v4;
  *((_QWORD *)&mem[1].alloc_sarray + v4) = 0i64;
  if ( v7 )
  {
    do
    {
      v9 = (_QWORD *)*v7;
      v10 = v7[2] + v7[1] + 24i64;
      j_jpeg_free_large(cinfo, v7, v10);
      LODWORD(mem[1].realize_virt_arrays) -= v10;
      v7 = v9;
    }
    while ( v9 );
  }
  v11 = (_QWORD *)*((_QWORD *)&mem[1].alloc_small + v8);
  *((_QWORD *)&mem[1].alloc_small + v8) = 0i64;
  if ( v11 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      v13 = v11[2] + v11[1] + 24i64;
      j_jpeg_free_small(cinfo, v11, v13);
      LODWORD(mem[1].realize_virt_arrays) -= v13;
      v11 = v12;
    }
    while ( v12 );
  }
}

/*
==============
jinit_memory_mgr
==============
*/
void jinit_memory_mgr(jpeg_common_struct *cinfo)
{
  int v2; 
  jpeg_memory_mgr *small; 

  cinfo->mem = NULL;
  v2 = j_jpeg_mem_init(cinfo);
  small = (jpeg_memory_mgr *)j_jpeg_get_small(cinfo, 0x98ui64);
  if ( !small )
  {
    j_jpeg_mem_term(cinfo);
    cinfo->err->msg_code = 54;
    cinfo->err->msg_parm.i[0] = 0;
    cinfo->err->error_exit(cinfo);
  }
  small->max_memory_to_use = v2;
  small->alloc_small = (void *(__fastcall *)(jpeg_common_struct *, int, unsigned __int64))alloc_small;
  small->alloc_large = alloc_large;
  small->alloc_sarray = alloc_sarray;
  small->alloc_barray = alloc_barray;
  small->request_virt_sarray = request_virt_sarray;
  small->request_virt_barray = request_virt_barray;
  small->realize_virt_arrays = realize_virt_arrays;
  small->access_virt_sarray = access_virt_sarray;
  small->access_virt_barray = access_virt_barray;
  small->free_pool = free_pool;
  small->self_destruct = self_destruct;
  small->max_alloc_chunk = 1000000000;
  small[1].alloc_large = NULL;
  small[1].alloc_barray = NULL;
  small[1].alloc_small = NULL;
  small[1].alloc_sarray = NULL;
  small[1].request_virt_sarray = NULL;
  small[1].request_virt_barray = NULL;
  LODWORD(small[1].realize_virt_arrays) = 152;
  cinfo->mem = small;
}

/*
==============
realize_virt_arrays
==============
*/
void realize_virt_arrays(jpeg_common_struct *cinfo)
{
  jpeg_memory_mgr *mem; 
  int v3; 
  int v4; 
  jvirt_sarray_control *(__fastcall *i)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  jvirt_barray_control *(__fastcall *j)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  int v7; 
  int v8; 
  jvirt_sarray_control *(__fastcall *k)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  jvirt_barray_control *(__fastcall *m)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 

  mem = cinfo->mem;
  v3 = 0;
  v4 = 0;
  for ( i = mem[1].request_virt_sarray; i; i = (jvirt_sarray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)i + 5) )
  {
    if ( !*(_QWORD *)i )
    {
      v3 += *((_DWORD *)i + 3) * *((_DWORD *)i + 4);
      v4 += *((_DWORD *)i + 3) * *((_DWORD *)i + 2);
    }
  }
  for ( j = mem[1].request_virt_barray; j; j = (jvirt_barray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)j + 5) )
  {
    if ( !*(_QWORD *)j )
    {
      v3 += (*((_DWORD *)j + 3) * *((_DWORD *)j + 4)) << 7;
      v4 += (*((_DWORD *)j + 3) * *((_DWORD *)j + 2)) << 7;
    }
  }
  if ( v3 > 0 )
  {
    v7 = j_jpeg_mem_available(cinfo, v3, v4, (int)mem[1].realize_virt_arrays);
    if ( v7 < v4 )
    {
      v8 = v7 / v3;
      if ( v7 / v3 <= 0 )
        v8 = 1;
    }
    else
    {
      v8 = 1000000000;
    }
    for ( k = mem[1].request_virt_sarray; k; k = (jvirt_sarray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)k + 5) )
    {
      if ( !*(_QWORD *)k )
      {
        v10 = *((_DWORD *)k + 2);
        v11 = *((_DWORD *)k + 4);
        if ( (int)((v10 - 1) / v11) >= v8 )
        {
          v12 = v10 * *((_DWORD *)k + 3);
          *((_DWORD *)k + 5) = v8 * v11;
          j_jpeg_open_backing_store(cinfo, (backing_store_struct *)((char *)k + 48), v12);
          v10 = *((_DWORD *)k + 5);
          *((_BYTE *)k + 38) = 1;
        }
        else
        {
          *((_DWORD *)k + 5) = v10;
        }
        *(_QWORD *)k = alloc_sarray(cinfo, 1, *((_DWORD *)k + 3), v10);
        *((_DWORD *)k + 6) = HIDWORD(mem[1].realize_virt_arrays);
        *(_QWORD *)((char *)k + 28) = 0i64;
        *((_BYTE *)k + 37) = 0;
      }
    }
    for ( m = mem[1].request_virt_barray; m; m = (jvirt_barray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)m + 5) )
    {
      if ( !*(_QWORD *)m )
      {
        v14 = *((_DWORD *)m + 2);
        v15 = *((_DWORD *)m + 4);
        if ( (int)((v14 - 1) / v15) >= v8 )
        {
          v16 = v14 * *((_DWORD *)m + 3);
          *((_DWORD *)m + 5) = v8 * v15;
          j_jpeg_open_backing_store(cinfo, (backing_store_struct *)((char *)m + 48), v16 << 7);
          v14 = *((_DWORD *)m + 5);
          *((_BYTE *)m + 38) = 1;
        }
        else
        {
          *((_DWORD *)m + 5) = v14;
        }
        *(_QWORD *)m = alloc_barray(cinfo, 1, *((_DWORD *)m + 3), v14);
        *((_DWORD *)m + 6) = HIDWORD(mem[1].realize_virt_arrays);
        *(_QWORD *)((char *)m + 28) = 0i64;
        *((_BYTE *)m + 37) = 0;
      }
    }
  }
}

/*
==============
request_virt_barray
==============
*/
jvirt_barray_control *request_virt_barray(jpeg_common_struct *cinfo, int pool_id, unsigned __int8 pre_zero, unsigned int blocksperrow, unsigned int numrows, unsigned int maxaccess)
{
  jpeg_memory_mgr *mem; 
  jvirt_barray_control *result; 

  mem = cinfo->mem;
  if ( pool_id != 1 )
  {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = pool_id;
    cinfo->err->error_exit(cinfo);
  }
  result = (jvirt_barray_control *)alloc_small(cinfo, pool_id, 0x90ui64);
  result->rows_in_array = numrows;
  result->blocksperrow = blocksperrow;
  result->maxaccess = maxaccess;
  result->mem_buffer = NULL;
  result->pre_zero = pre_zero;
  result->b_s_open = 0;
  result->next = (jvirt_barray_control *)mem[1].request_virt_barray;
  mem[1].request_virt_barray = (jvirt_barray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))result;
  return result;
}

/*
==============
request_virt_sarray
==============
*/
jvirt_sarray_control *request_virt_sarray(jpeg_common_struct *cinfo, int pool_id, unsigned __int8 pre_zero, unsigned int samplesperrow, unsigned int numrows, unsigned int maxaccess)
{
  jpeg_memory_mgr *mem; 
  jvirt_sarray_control *result; 

  mem = cinfo->mem;
  if ( pool_id != 1 )
  {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = pool_id;
    cinfo->err->error_exit(cinfo);
  }
  result = (jvirt_sarray_control *)alloc_small(cinfo, pool_id, 0x90ui64);
  result->rows_in_array = numrows;
  result->samplesperrow = samplesperrow;
  result->maxaccess = maxaccess;
  result->mem_buffer = NULL;
  result->pre_zero = pre_zero;
  result->b_s_open = 0;
  result->next = (jvirt_sarray_control *)mem[1].request_virt_sarray;
  mem[1].request_virt_sarray = (jvirt_sarray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))result;
  return result;
}

/*
==============
self_destruct
==============
*/
void self_destruct(jpeg_common_struct *cinfo)
{
  int v1; 
  __int64 v3; 
  jpeg_memory_mgr *mem; 
  bool v5; 
  jvirt_sarray_control *(__fastcall *i)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  jvirt_barray_control *(__fastcall *request_virt_barray)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int); 
  _QWORD *v8; 
  _QWORD *v9; 
  unsigned __int64 v10; 
  _QWORD *v11; 
  _QWORD *v12; 
  unsigned __int64 v13; 

  v1 = 1;
  v3 = 104i64;
  do
  {
    mem = cinfo->mem;
    v5 = v1 == 1;
    if ( (unsigned int)v1 > 1 )
    {
      cinfo->err->msg_code = 14;
      cinfo->err->msg_parm.i[0] = v1;
      cinfo->err->error_exit(cinfo);
      v5 = v1 == 1;
    }
    if ( v5 )
    {
      for ( i = mem[1].request_virt_sarray; i; i = (jvirt_sarray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)i + 5) )
      {
        if ( *((_BYTE *)i + 38) )
        {
          *((_BYTE *)i + 38) = 0;
          (*((void (__fastcall **)(jpeg_common_struct *, __int64))i + 8))(cinfo, (__int64)i + 48);
        }
      }
      request_virt_barray = mem[1].request_virt_barray;
      for ( mem[1].request_virt_sarray = NULL; request_virt_barray; request_virt_barray = (jvirt_barray_control *(__fastcall *)(jpeg_common_struct *, int, unsigned __int8, unsigned int, unsigned int, unsigned int))*((_QWORD *)request_virt_barray + 5) )
      {
        if ( *((_BYTE *)request_virt_barray + 38) )
        {
          *((_BYTE *)request_virt_barray + 38) = 0;
          (*((void (__fastcall **)(jpeg_common_struct *, __int64))request_virt_barray + 8))(cinfo, (__int64)request_virt_barray + 48);
        }
      }
      mem[1].request_virt_barray = NULL;
    }
    v8 = *(unsigned __int8 **(__fastcall **)(jpeg_common_struct *, int, unsigned int, unsigned int))((char *)&mem->alloc_sarray + v3);
    *(unsigned __int8 **(__fastcall **)(jpeg_common_struct *, int, unsigned int, unsigned int))((char *)&mem->alloc_sarray + v3) = NULL;
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        v10 = v8[2] + v8[1] + 24i64;
        j_jpeg_free_large(cinfo, v8, v10);
        LODWORD(mem[1].realize_virt_arrays) -= v10;
        v8 = v9;
      }
      while ( v9 );
    }
    v11 = *(void *(__fastcall **)(jpeg_common_struct *, int, unsigned __int64))((char *)&mem->alloc_small + v3);
    *(void *(__fastcall **)(jpeg_common_struct *, int, unsigned __int64))((char *)&mem->alloc_small + v3) = NULL;
    if ( v11 )
    {
      do
      {
        v12 = (_QWORD *)*v11;
        v13 = v11[2] + v11[1] + 24i64;
        j_jpeg_free_small(cinfo, v11, v13);
        LODWORD(mem[1].realize_virt_arrays) -= v13;
        v11 = v12;
      }
      while ( v12 );
    }
    v3 -= 8i64;
    --v1;
  }
  while ( v1 >= 0 );
  j_jpeg_free_small(cinfo, cinfo->mem, 0x98ui64);
  cinfo->mem = NULL;
  j_jpeg_mem_term(cinfo);
}

