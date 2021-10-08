/*
==============
R_LoadJpg
==============
*/

void __fastcall R_LoadJpg(const char *filepath, unsigned __int8 **file, unsigned __int8 **pic, int *width, int *height, GfxPixelFormat *imageFormat)
{
  ?R_LoadJpg@@YAXPEBDPEAPEAE1PEAH2PEAW4GfxPixelFormat@@@Z(filepath, file, pic, width, height, imageFormat);
}

/*
==============
R_SaveJpg
==============
*/

void __fastcall R_SaveJpg(const char *filename, int quality, int useFS, int image_width, int image_height, unsigned __int8 *image_buffer, unsigned __int8 *out_buffer, int *out_bytes, const char *comments)
{
  ?R_SaveJpg@@YAXPEBDHHHHPEAE1PEAH0@Z(filename, quality, useFS, image_width, image_height, image_buffer, out_buffer, out_bytes, comments);
}

/*
==============
empty_output_buffer
==============
*/

unsigned __int8 __fastcall empty_output_buffer(jpeg_compress_struct *cinfo)
{
  return ?empty_output_buffer@@YAEPEAUjpeg_compress_struct@@@Z(cinfo);
}

/*
==============
ExitJpeg
==============
*/
void ExitJpeg()
{
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144405D28, 654i64);
}

/*
==============
PrintfJpeg
==============
*/
void PrintfJpeg(char *message)
{
  Com_Printf(8, "%s\n", message);
}

/*
==============
R_InitJpeg
==============
*/
void R_InitJpeg(const unsigned __int64 imageSize)
{
  unsigned __int64 v3; 
  void *heapMem; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 

  if ( ((unsigned __int8)&s_jpegGlob & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_jpegGlob) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_jpegGlob, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 46, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_jpegGlob.inUse, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_jpegGlob.inUse, 1, 0 ) == 0") )
    __debugbreak();
  v3 = imageSize + 0x100000;
  if ( s_jpegGlob.heapMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 50, ASSERT_TYPE_ASSERT, "(s_jpegGlob.heapMem == nullptr)", (const char *)&queryFormat, "s_jpegGlob.heapMem == nullptr") )
    __debugbreak();
  s_jpegGlob.heapMem = Mem_Virtual_Alloc(v3, "JpegGlobHeap", TRACK_MISC);
  heapMem = s_jpegGlob.heapMem;
  if ( !s_jpegGlob.heapMem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 52, ASSERT_TYPE_ASSERT, "(s_jpegGlob.heapMem)", (const char *)&queryFormat, "s_jpegGlob.heapMem") )
      __debugbreak();
    heapMem = s_jpegGlob.heapMem;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+48h+var_18], xmm0
  }
  if ( !heapMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v8) )
    __debugbreak();
  *(_QWORD *)&v9 = heapMem;
  *((_QWORD *)&v9 + 1) = v3;
  ntl::nxheap::shutdown(&s_jpegGlob.jpegHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_jpegGlob.jpegHeap.m_region);
  if ( s_jpegGlob.jpegHeap.m_data.m_buffer )
  {
    if ( s_jpegGlob.jpegHeap.m_data.m_buffer != s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_jpegGlob.jpegHeap.m_data.m_buffer = NULL;
    s_jpegGlob.jpegHeap.m_data.m_size = 0i64;
  }
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer, xmm0
  }
  ntl::nxheap::shutdown(&s_jpegGlob.jpegHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_jpegGlob.jpegHeap.m_region);
  if ( s_jpegGlob.jpegHeap.m_data.m_buffer )
  {
    if ( s_jpegGlob.jpegHeap.m_data.m_buffer != s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_jpegGlob.jpegHeap.m_data.m_buffer = NULL;
    s_jpegGlob.jpegHeap.m_data.m_size = 0i64;
  }
  if ( v3 > s_jpegGlob.jpegHeap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  *(_QWORD *)&v10 = s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer;
  *((_QWORD *)&v10 + 1) = v3;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_jpegGlob.jpegHeap.baseclass_0.m_data.m_buffer, xmm0
  }
  if ( s_jpegGlob.jpegHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&s_jpegGlob.jpegHeap.m_region, s_jpegGlob.jpegHeap.m_data.m_buffer, s_jpegGlob.jpegHeap.m_data.m_size);
  if ( s_jpegGlob.jpegHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&s_jpegGlob.jpegHeap.m_heap, &s_jpegGlob.jpegHeap.m_region, DIR_BOTTOM_UP);
}

/*
==============
R_LoadJpg
==============
*/
void R_LoadJpg(const char *filepath, unsigned __int8 **file, unsigned __int8 **pic, int *width, int *height, GfxPixelFormat *imageFormat)
{
  __int64 v10; 
  unsigned int output_width; 
  int output_height; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  __int64 v16; 
  signed int v17; 
  unsigned __int8 *v18; 
  int v19; 
  void *buffer; 
  unsigned __int8 *scanlines; 
  jpeg_decompress_struct cinfo; 
  jpeg_error_mgr err; 

  R_InitJpeg(0i64);
  v10 = FS_ReadFile(filepath, &buffer);
  if ( (unsigned __int64)(v10 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v10, "signed", v10) )
    __debugbreak();
  if ( buffer )
  {
    if ( (int)v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 382, ASSERT_TYPE_ASSERT, "(filesize >= 0)", (const char *)&queryFormat, "filesize >= 0") )
      __debugbreak();
    cinfo.err = j_jpeg_std_error(&err, (void (*)(...))ExitJpeg, PrintfJpeg);
    cinfo.alloc.malloc = Z_MallocJpeg;
    cinfo.alloc.free = Z_FreeJpeg;
    j_jpeg_CreateDecompress(&cinfo, 62, 0x268ui64);
    j_jpeg_memory_src(&cinfo, (const unsigned __int8 *)buffer, v10);
    j_jpeg_read_header(&cinfo, 1u);
    j_jpeg_start_decompress(&cinfo);
    output_width = cinfo.output_width;
    if ( cinfo.output_width > 0x4000 || (output_height = cinfo.output_height, cinfo.output_height > 0x4000) )
    {
      Com_PrintWarning(8, "WARNING: image '%s' is larger than %i on at least one side\n", filepath, 0x4000i64);
      goto LABEL_20;
    }
    if ( cinfo.output_components != 3 )
    {
      Com_PrintWarning(8, "WARNING: jpeg image '%s' is not RGB\n", filepath);
LABEL_20:
      j_jpeg_destroy_decompress(&cinfo);
      FS_FreeFile(buffer);
      return;
    }
    *width = cinfo.output_width;
    *height = output_height;
    *imageFormat = GFX_PF_R8G8B8A8;
    v13 = (unsigned __int8 *)Mem_Virtual_Alloc(4 * output_height * output_width, "Image_LoadJpg", TRACK_RENDERER_MISC);
    v14 = cinfo.output_width;
    v15 = v13;
    *pic = v13;
    *file = (unsigned __int8 *)buffer;
    if ( cinfo.output_scanline < cinfo.output_height )
    {
      v16 = (int)(4 * v14);
      do
      {
        scanlines = v15;
        j_jpeg_read_scanlines(&cinfo, &scanlines, 1u);
        v17 = cinfo.output_width - 1;
        if ( (signed int)(cinfo.output_width - 1) >= 0 )
        {
          v18 = &v15[4 * v17 + 1];
          do
          {
            v18 -= 4;
            v18[5] = v15[cinfo.output_components * v17];
            v18[4] = v15[cinfo.output_components * v17 + 1];
            v19 = cinfo.output_components * v17--;
            v18[3] = v15[v19 + 2];
            v18[6] = -1;
          }
          while ( v17 >= 0 );
        }
        v15 += v16;
      }
      while ( cinfo.output_scanline < cinfo.output_height );
    }
    j_jpeg_finish_decompress(&cinfo);
    j_jpeg_destroy_decompress(&cinfo);
    R_ShutdownJpeg();
  }
}

/*
==============
R_SaveJpg
==============
*/
void R_SaveJpg(const char *filename, int quality, int useFS, int image_width, int image_height, unsigned __int8 *image_buffer, unsigned __int8 *out_buffer, int *out_bytes, const char *comments)
{
  unsigned __int64 v11; 
  unsigned __int8 *v12; 
  jpeg_destination_mgr *dest; 
  __int64 v14; 
  __int64 v15; 
  unsigned int next_scanline; 
  int i; 
  int v19; 
  unsigned __int8 *scanlines; 
  jpeg_compress_struct cinfo; 
  jpeg_error_mgr err; 

  v11 = 3 * image_width * image_height;
  v19 = 3 * image_width * image_height;
  R_InitJpeg(v11);
  cinfo.err = j_jpeg_std_error(&err, (void (*)(...))ExitJpeg, PrintfJpeg);
  cinfo.alloc.malloc = Z_MallocJpeg;
  cinfo.alloc.free = Z_FreeJpeg;
  j_jpeg_CreateCompress(&cinfo, 62, 0x208ui64);
  if ( out_buffer )
    v12 = out_buffer;
  else
    v12 = (unsigned __int8 *)Z_MallocJpeg(v11);
  dest = cinfo.dest;
  if ( !cinfo.dest )
  {
    dest = (jpeg_destination_mgr *)cinfo.mem->alloc_small((jpeg_common_struct *)&cinfo, 0i64, 56i64);
    cinfo.dest = dest;
  }
  dest[1].next_output_byte = v12;
  dest->init_destination = init_destination;
  dest->empty_output_buffer = empty_output_buffer;
  dest->term_destination = term_destination;
  LODWORD(dest[1].free_in_buffer) = v19;
  cinfo.image_width = image_width;
  cinfo.image_height = image_height;
  cinfo.input_components = 3;
  cinfo.in_color_space = JCS_RGB;
  j_jpeg_set_defaults(&cinfo);
  j_jpeg_set_quality(&cinfo, quality, 1u);
  j_jpeg_start_compress(&cinfo, 1u);
  if ( comments )
  {
    v14 = -1i64;
    v15 = -1i64;
    do
      ++v15;
    while ( comments[v15] );
    if ( v15 )
    {
      while ( comments[++v14] != 0 )
        ;
      j_jpeg_write_marker(&cinfo, 254, (const unsigned __int8 *)comments, v14 + 1);
    }
  }
  next_scanline = cinfo.next_scanline;
  for ( i = 3 * image_width; cinfo.next_scanline < cinfo.image_height; next_scanline = cinfo.next_scanline )
  {
    scanlines = &image_buffer[i * next_scanline];
    j_jpeg_write_scanlines(&cinfo, &scanlines, 1u);
  }
  j_jpeg_finish_compress(&cinfo);
  if ( out_bytes )
    *out_bytes = s_jpegGlob.terminateSize;
  if ( filename )
    R_Screenshot_WriteFile(filename, useFS, v12, s_jpegGlob.terminateSize);
  if ( !out_buffer )
  {
    if ( !s_jpegGlob.inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 176, ASSERT_TYPE_ASSERT, "(s_jpegGlob.inUse)", (const char *)&queryFormat, "s_jpegGlob.inUse") )
      __debugbreak();
    ntl::nxheap::free(&s_jpegGlob.jpegHeap.m_heap, v12);
  }
  j_jpeg_destroy_compress(&cinfo);
  R_ShutdownJpeg();
}

/*
==============
R_ShutdownJpeg
==============
*/

char __fastcall R_ShutdownJpeg(double _XMM0_8)
{
  signed __int32 v2; 
  __int128 v4; 

  if ( !s_jpegGlob.inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 61, ASSERT_TYPE_ASSERT, "(s_jpegGlob.inUse)", (const char *)&queryFormat, "s_jpegGlob.inUse") )
    __debugbreak();
  ntl::nxheap::clear(&s_jpegGlob.jpegHeap.m_heap);
  ntl::nxheap::shutdown(&s_jpegGlob.jpegHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_jpegGlob.jpegHeap.m_region);
  if ( s_jpegGlob.jpegHeap.m_data.m_buffer )
  {
    if ( s_jpegGlob.jpegHeap.m_data.m_buffer != s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_jpegGlob.jpegHeap.m_data.m_buffer = NULL;
    s_jpegGlob.jpegHeap.m_data.m_size = 0i64;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+48h+var_18], xmm0
    vmovups xmmword ptr cs:s_jpegGlob.jpegHeap.m_allocator.m_data.m_buffer, xmm0
  }
  Mem_Virtual_Free(s_jpegGlob.heapMem);
  s_jpegGlob.heapMem = NULL;
  if ( ((unsigned __int8)&s_jpegGlob & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_jpegGlob) )
    __debugbreak();
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)&s_jpegGlob, 0, 1);
  if ( v2 != 1 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 69, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_jpegGlob.inUse, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_jpegGlob.inUse, 0, 1 ) == 1", v4);
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return v2;
}

/*
==============
Z_FreeJpeg
==============
*/
void Z_FreeJpeg(void *ptr, unsigned __int64 size)
{
  if ( !s_jpegGlob.inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 176, ASSERT_TYPE_ASSERT, "(s_jpegGlob.inUse)", (const char *)&queryFormat, "s_jpegGlob.inUse") )
    __debugbreak();
  ntl::nxheap::free(&s_jpegGlob.jpegHeap.m_heap, ptr);
}

/*
==============
Z_MallocJpeg
==============
*/
void *Z_MallocJpeg(unsigned __int64 size)
{
  void *result; 

  if ( !s_jpegGlob.inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 167, ASSERT_TYPE_ASSERT, "(s_jpegGlob.inUse)", (const char *)&queryFormat, "s_jpegGlob.inUse") )
    __debugbreak();
  result = ntl::nxheap::allocate(&s_jpegGlob.jpegHeap.m_heap, size, 4ui64, 1);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 169, ASSERT_TYPE_ASSERT, "(ret)", (const char *)&queryFormat, "ret") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
empty_output_buffer
==============
*/
unsigned __int8 empty_output_buffer(jpeg_compress_struct *cinfo)
{
  return 1;
}

/*
==============
init_destination
==============
*/
void init_destination(jpeg_compress_struct *cinfo)
{
  jpeg_destination_mgr *dest; 

  dest = cinfo->dest;
  dest->next_output_byte = dest[1].next_output_byte;
  dest->free_in_buffer = SLODWORD(dest[1].free_in_buffer);
}

/*
==============
term_destination
==============
*/
void term_destination(jpeg_compress_struct *cinfo)
{
  unsigned __int64 v1; 

  v1 = SLODWORD(cinfo->dest[1].free_in_buffer) - cinfo->dest->free_in_buffer;
  if ( !s_jpegGlob.inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_jpeg.cpp", 130, ASSERT_TYPE_ASSERT, "(s_jpegGlob.inUse)", (const char *)&queryFormat, "s_jpegGlob.inUse") )
    __debugbreak();
  if ( (v1 > 0x7FFFFFFFFFFFFFFFi64 || v1 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v1, "unsigned", v1) )
    __debugbreak();
  s_jpegGlob.terminateSize = v1;
}

