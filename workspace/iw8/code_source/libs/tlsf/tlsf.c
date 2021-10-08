/*
==============
block_insert
==============
*/
void block_insert(control_t *control, block_header_t *block)
{
  unsigned __int64 v3; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 v8; 
  bool v9; 
  int v10; 
  __int64 v11; 
  block_header_t *v12; 

  v3 = block->size & 0xFFFFFFFFFFFFFFFCui64;
  if ( v3 >= 0x100 )
  {
    v7 = -1;
    v8 = HIDWORD(v3);
    if ( HIDWORD(v3) )
    {
      v9 = !_BitScanReverse((unsigned int *)&v8, v8);
      if ( !v9 )
        v7 = v8;
      v7 += 32;
    }
    else
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v3);
      if ( !v9 )
        v7 = v10;
    }
    v5 = v7 - 7;
    v6 = (v3 >> ((unsigned __int8)v7 - 5)) ^ 0x20;
  }
  else
  {
    v5 = 0;
    v6 = (int)v3 / 8;
  }
  v11 = v6 + 32i64 * v5;
  v12 = control->blocks[0][v11];
  block->next_free = v12;
  block->prev_free = &control->block_null;
  v12->prev_free = block;
  control->blocks[0][v11] = block;
  control->fl_bitmap |= 1 << v5;
  control->sl_bitmap[v5] |= 1 << v6;
}

/*
==============
block_locate_free
==============
*/
block_header_t *block_locate_free(control_t *control, unsigned __int64 size)
{
  int v3; 
  char v4; 
  unsigned __int64 v5; 
  bool v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  block_header_t *result; 
  int v18; 
  int v19; 
  block_header_t **v20; 
  block_header_t *v21; 
  control_t *next_free; 
  block_header_t *prev_free; 
  int v24; 

  if ( !size )
    return 0i64;
  v3 = -1;
  if ( size < 0x100 )
    goto LABEL_17;
  v4 = -1;
  v5 = HIDWORD(size);
  if ( HIDWORD(size) )
  {
    v6 = !_BitScanReverse((unsigned int *)&v5, v5);
    if ( !v6 )
      v4 = v5;
    v4 += 32;
  }
  else
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, size);
    if ( !v6 )
      v4 = v7;
  }
  v8 = size + (1 << (v4 - 5)) - 1;
  size = v8;
  if ( v8 < 0x100 )
  {
LABEL_17:
    v12 = 0;
    LODWORD(size) = (int)size / 8;
  }
  else
  {
    v9 = HIDWORD(v8);
    v10 = -1;
    if ( v9 )
    {
      v6 = !_BitScanReverse((unsigned int *)&v9, v9);
      if ( !v6 )
        v10 = v9;
      v11 = v10 + 32;
      v12 = v11 - 7;
      LOBYTE(size) = (size >> ((unsigned __int8)v11 - 5)) ^ 0x20;
    }
    else
    {
      v6 = !_BitScanReverse((unsigned int *)&v13, size);
      if ( !v6 )
        v10 = v13;
      v12 = v10 - 7;
      LOBYTE(size) = (size >> ((unsigned __int8)v10 - 5)) ^ 0x20;
    }
  }
  v14 = v12;
  v15 = (-1 << size) & control->sl_bitmap[v12];
  if ( !v15 )
  {
    v16 = control->fl_bitmap & (-1 << (v12 + 1));
    if ( !v16 )
      return 0i64;
    v6 = !_BitScanForward((unsigned int *)&v18, v16);
    v12 = -1;
    if ( !v6 )
      v12 = v18;
    v14 = v12;
    v15 = control->sl_bitmap[v12];
  }
  v6 = !_BitScanForward((unsigned int *)&v19, v15);
  if ( !v6 )
    v3 = v19;
  v20 = &control->blocks[v14][v3];
  v21 = *v20;
  if ( !*v20 )
    return v21;
  next_free = (control_t *)v21->next_free;
  prev_free = v21->prev_free;
  next_free->block_null.prev_free = prev_free;
  prev_free->next_free = &next_free->block_null;
  if ( *v20 != v21 )
    return v21;
  *v20 = &next_free->block_null;
  if ( next_free != control )
    return v21;
  result = v21;
  v24 = ~(1 << v3);
  v6 = (v24 & control->sl_bitmap[v14]) == 0;
  control->sl_bitmap[v14] &= v24;
  if ( v6 )
    control->fl_bitmap &= ~(1 << v12);
  return result;
}

/*
==============
block_prepare_used
==============
*/
block_header_t **block_prepare_used(control_t *control, block_header_t *block, unsigned __int64 size)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  block_header_t *v6; 
  unsigned __int64 v7; 
  block_header_t **result; 

  if ( !block )
    return 0i64;
  v4 = block->size;
  v5 = v4 & 0xFFFFFFFFFFFFFFFCui64;
  if ( (v4 & 0xFFFFFFFFFFFFFFFCui64) >= size + 32 )
  {
    *(block_header_t **)((char *)&block->next_free + size) = (block_header_t *)(*(unsigned __int64 *)((char *)&block->next_free + size) & 3);
    v6 = (block_header_t *)((char *)&block->size + size);
    v6->size |= v5 - size - 8;
    block->size &= 3ui64;
    block->size |= size;
    v7 = *(unsigned __int64 *)((_BYTE *)&block->next_free + size) & 0xFFFFFFFFFFFFFFFCui64;
    *(block_header_t **)((char *)&v6->next_free + v7) = (block_header_t *)(*(unsigned __int64 *)((char *)&v6->next_free + v7) | 2);
    *(unsigned __int64 *)((char *)&v6->size + v7) = (unsigned __int64)v6;
    v6->size |= 1ui64;
    *(unsigned __int64 *)((char *)&block->size + (block->size & 0xFFFFFFFFFFFFFFFCui64)) = (unsigned __int64)block;
    v6->size |= 2ui64;
    block_insert(control, v6);
    v4 = block->size;
  }
  result = &block->next_free;
  *(block_header_t **)((char *)&block->next_free + (v4 & 0xFFFFFFFFFFFFFFFCui64)) = (block_header_t *)(*(unsigned __int64 *)((char *)&block->next_free + (v4 & 0xFFFFFFFFFFFFFFFCui64)) & ~2ui64);
  block->size &= ~1ui64;
  return result;
}

/*
==============
block_remove
==============
*/
void block_remove(control_t *control, block_header_t *block)
{
  unsigned __int64 v3; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 v8; 
  bool v9; 
  int v10; 
  block_header_t *prev_free; 
  control_t *next_free; 
  __int64 v13; 
  int v14; 

  v3 = block->size & 0xFFFFFFFFFFFFFFFCui64;
  if ( v3 >= 0x100 )
  {
    v7 = -1;
    v8 = HIDWORD(v3);
    if ( HIDWORD(v3) )
    {
      v9 = !_BitScanReverse((unsigned int *)&v8, v8);
      if ( !v9 )
        v7 = v8;
      v7 += 32;
    }
    else
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v3);
      if ( !v9 )
        v7 = v10;
    }
    v5 = v7 - 7;
    v6 = (v3 >> ((unsigned __int8)v7 - 5)) ^ 0x20;
  }
  else
  {
    v5 = 0;
    v6 = (int)v3 / 8;
  }
  prev_free = block->prev_free;
  next_free = (control_t *)block->next_free;
  next_free->block_null.prev_free = prev_free;
  prev_free->next_free = &next_free->block_null;
  v13 = v6 + 32i64 * v5;
  if ( control->blocks[0][v13] == block )
  {
    control->blocks[0][v13] = &next_free->block_null;
    if ( next_free == control )
    {
      v14 = ~(1 << v6);
      v9 = (v14 & control->sl_bitmap[v5]) == 0;
      control->sl_bitmap[v5] &= v14;
      if ( v9 )
        control->fl_bitmap &= ~(1 << v5);
    }
  }
}

/*
==============
default_walker
==============
*/
void default_walker(void *ptr, unsigned __int64 size, int used, void *user)
{
  bool v4; 
  const char *v5; 

  v4 = used == 0;
  v5 = "free";
  if ( !v4 )
    v5 = "used";
  j_printf("\t%p %s size: %x (%p)\n", ptr, v5, (unsigned int)size, (char *)ptr - 16);
}

/*
==============
integrity_walker
==============
*/
void integrity_walker(void *ptr, unsigned __int64 size, int used, void *user)
{
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 

  v4 = *((_QWORD *)ptr - 1);
  v5 = *(_DWORD *)user;
  *(_DWORD *)user = *((_DWORD *)ptr - 2) & 1;
  v6 = -((((unsigned int)v4 >> 1) & 1) != v5);
  v7 = v6 - 1;
  if ( size == (v4 & 0xFFFFFFFFFFFFFFFCui64) )
    v7 = v6;
  *((_DWORD *)user + 1) += v7;
}

/*
==============
tlsf_add_pool
==============
*/
void *tlsf_add_pool(void *tlsf, void *mem, unsigned __int64 bytes)
{
  unsigned __int64 v4; 
  unsigned __int64 v6; 

  v4 = (bytes - 16) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( (((((__int64)mem >> 63) & 7) + (_BYTE)mem) & 7) == (((__int64)mem >> 63) & 7) )
  {
    if ( v4 - 24 > 0xFFFFFFE8 )
    {
      j_printf("tlsf_add_pool: Memory size must be between 0x%x and 0x%x00 bytes.\n", 40i64, 0x1000000i64);
      return 0i64;
    }
    else
    {
      *(_QWORD *)mem = v4 & 0xFFFFFFFFFFFFFFFCui64 | 1;
      block_insert((control_t *)tlsf, (block_header_t *)((char *)mem - 8));
      v6 = *(_QWORD *)mem & 0xFFFFFFFFFFFFFFFCui64;
      *(_QWORD *)((char *)mem + v6) = (char *)mem - 8;
      *(_QWORD *)((char *)mem + v6 + 8) = 2i64;
      return mem;
    }
  }
  else
  {
    j_printf("tlsf_add_pool: Memory must be aligned by %u bytes.\n", 8i64);
    return 0i64;
  }
}

/*
==============
tlsf_align_size
==============
*/
unsigned __int64 tlsf_align_size()
{
  return 8i64;
}

/*
==============
tlsf_alloc_overhead
==============
*/
unsigned __int64 tlsf_alloc_overhead()
{
  return 8i64;
}

/*
==============
tlsf_block_size
==============
*/
unsigned __int64 tlsf_block_size(void *ptr)
{
  if ( ptr )
    return *((_QWORD *)ptr - 1) & 0xFFFFFFFFFFFFFFFCui64;
  else
    return 0i64;
}

/*
==============
tlsf_block_size_max
==============
*/
unsigned __int64 tlsf_block_size_max()
{
  return 0x100000000i64;
}

/*
==============
tlsf_block_size_min
==============
*/
unsigned __int64 tlsf_block_size_min()
{
  return 24i64;
}

/*
==============
tlsf_check
==============
*/
__int64 tlsf_check(void *tlsf)
{
  int v1; 
  int *v2; 
  unsigned int v3; 
  __int64 *v4; 
  int i; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  int v18; 
  unsigned int v19; 
  bool v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  int v33; 
  unsigned int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v38; 
  unsigned __int64 v39; 
  int v40; 

  v1 = *((_DWORD *)tlsf + 8);
  v2 = (int *)((char *)tlsf + 36);
  v3 = 0;
  v4 = (__int64 *)((char *)tlsf + 144);
  for ( i = 0; i < 25; ++i )
  {
    v7 = *v2;
    v8 = 0;
    v9 = 1;
    v10 = v1 & __ROL4__(1, i);
    do
    {
      v11 = *(v4 - 1);
      v12 = v7 & v9;
      if ( !v10 )
      {
        if ( !v12 )
          goto LABEL_7;
        --v3;
      }
      if ( !v12 )
      {
LABEL_7:
        v13 = v3 - 1;
        if ( (void *)v11 == tlsf )
          v13 = v3;
        goto LABEL_37;
      }
      v13 = v3 - 1;
      if ( v7 )
        v13 = v3;
      if ( (void *)v11 == tlsf )
      {
        --v13;
      }
      else
      {
        do
        {
          v14 = *(_DWORD *)(v11 + 8);
          v15 = v13 - 1;
          if ( (v14 & 1) != 0 )
            v15 = v13;
          v16 = v15 - 1;
          if ( (v14 & 2) == 0 )
            v16 = v15;
          v17 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFFCui64;
          v18 = *(_DWORD *)(v17 + v11 + 16);
          v19 = v16 - 1;
          if ( (v18 & 1) == 0 )
            v19 = v16;
          v20 = (v18 & 2) == 0;
          v21 = v19 - 1;
          if ( !v20 )
            v21 = v19;
          v13 = v21 - 1;
          if ( v17 >= 0x18 )
            v13 = v21;
          if ( v17 >= 0x100 )
          {
            v24 = -1;
            v25 = HIDWORD(v17);
            if ( HIDWORD(v17) )
            {
              v20 = !_BitScanReverse((unsigned int *)&v25, v25);
              if ( !v20 )
                v24 = v25;
              v24 += 32;
            }
            else
            {
              v20 = !_BitScanReverse((unsigned int *)&v26, v17);
              if ( !v20 )
                v24 = v26;
            }
            v22 = v24 - 7;
            v23 = (v17 >> ((unsigned __int8)v24 - 5)) ^ 0x20;
          }
          else
          {
            v22 = 0;
            v23 = (int)v17 / 8;
          }
          if ( v22 != i || v23 != v8 )
            --v13;
          v11 = *(_QWORD *)(v11 + 16);
        }
        while ( (void *)v11 != tlsf );
      }
LABEL_37:
      v27 = *v4;
      v28 = v7 & __ROL4__(v9, 1);
      if ( !v10 )
      {
        if ( !v28 )
          goto LABEL_41;
        --v13;
      }
      if ( !v28 )
      {
LABEL_41:
        v3 = v13 - 1;
        if ( (void *)v27 == tlsf )
          v3 = v13;
        goto LABEL_71;
      }
      v3 = v13 - 1;
      if ( v7 )
        v3 = v13;
      if ( (void *)v27 == tlsf )
      {
        --v3;
      }
      else
      {
        do
        {
          v29 = *(_DWORD *)(v27 + 8);
          v30 = v3 - 1;
          if ( (v29 & 1) != 0 )
            v30 = v3;
          v31 = v30 - 1;
          if ( (v29 & 2) == 0 )
            v31 = v30;
          v32 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFFCui64;
          v33 = *(_DWORD *)(v32 + v27 + 16);
          v34 = v31 - 1;
          if ( (v33 & 1) == 0 )
            v34 = v31;
          v35 = v34 - 1;
          if ( (v33 & 2) != 0 )
            v35 = v34;
          v3 = v35 - 1;
          if ( v32 >= 0x18 )
            v3 = v35;
          if ( v32 >= 0x100 )
          {
            v38 = -1;
            v39 = HIDWORD(v32);
            if ( HIDWORD(v32) )
            {
              v20 = !_BitScanReverse((unsigned int *)&v39, v39);
              if ( !v20 )
                v38 = v39;
              v38 += 32;
            }
            else
            {
              v20 = !_BitScanReverse((unsigned int *)&v40, v32);
              if ( !v20 )
                v38 = v40;
            }
            v36 = v38 - 7;
            v37 = (v32 >> ((unsigned __int8)v38 - 5)) ^ 0x20;
          }
          else
          {
            v36 = 0;
            v37 = (int)v32 / 8;
          }
          if ( v36 != i || v37 != v8 + 1 )
            --v3;
          v27 = *(_QWORD *)(v27 + 16);
        }
        while ( (void *)v27 != tlsf );
      }
LABEL_71:
      v8 += 2;
      v9 = __ROL4__(v9, 2);
      v4 += 2;
    }
    while ( v8 < 32 );
    ++v2;
  }
  return v3;
}

/*
==============
tlsf_check_pool
==============
*/
__int64 tlsf_check_pool(void *pool)
{
  __int64 result; 
  char *v2; 
  __int64 v3; 
  __int64 v4; 

  result = 0i64;
  v2 = (char *)pool - 8;
  v4 = 0i64;
  if ( pool != (void *)8 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 1);
      if ( (v3 & 0xFFFFFFFFFFFFFFFCui64) == 0 )
        break;
      integrity_walker(v2 + 16, *((_QWORD *)v2 + 1) & 0xFFFFFFFFFFFFFFFCui64, (v3 & 1) == 0, &v4);
      v2 += (*((_QWORD *)v2 + 1) & 0xFFFFFFFFFFFFFFFCui64) + 8;
    }
    while ( v2 );
    return HIDWORD(v4);
  }
  return result;
}

/*
==============
tlsf_create
==============
*/
void *tlsf_create(void *mem)
{
  _DWORD *v2; 
  void **v3; 
  __int64 v4; 

  if ( (((((__int64)mem >> 63) & 7) + (_BYTE)mem) & 7) == (((__int64)mem >> 63) & 7) )
  {
    *((_QWORD *)mem + 2) = mem;
    *((_QWORD *)mem + 3) = mem;
    v2 = (char *)mem + 36;
    *((_DWORD *)mem + 8) = 0;
    v3 = (void **)((char *)mem + 144);
    v4 = 25i64;
    do
    {
      *v2++ = 0;
      *(v3 - 1) = mem;
      *v3 = mem;
      v3[1] = mem;
      v3[2] = mem;
      v3[3] = mem;
      v3[4] = mem;
      v3[5] = mem;
      v3[6] = mem;
      v3[7] = mem;
      v3[8] = mem;
      v3[9] = mem;
      v3[10] = mem;
      v3[11] = mem;
      v3[12] = mem;
      v3[13] = mem;
      v3[14] = mem;
      v3[15] = mem;
      v3[16] = mem;
      v3[17] = mem;
      v3[18] = mem;
      v3[19] = mem;
      v3[20] = mem;
      v3[21] = mem;
      v3[22] = mem;
      v3[23] = mem;
      v3[24] = mem;
      v3[25] = mem;
      v3[26] = mem;
      v3[27] = mem;
      v3[28] = mem;
      v3[29] = mem;
      v3[30] = mem;
      v3 += 32;
      --v4;
    }
    while ( v4 );
    return mem;
  }
  else
  {
    j_printf("tlsf_create: Memory must be aligned to %u bytes.\n", 8i64);
    return 0i64;
  }
}

/*
==============
tlsf_create_with_pool
==============
*/
control_t *tlsf_create_with_pool(void *mem, unsigned __int64 bytes)
{
  control_t *v4; 
  void **v5; 
  _DWORD *v6; 
  __int64 v7; 
  unsigned __int64 *v8; 
  unsigned __int64 v10; 

  if ( (((((__int64)mem >> 63) & 7) + (_BYTE)mem) & 7) == (((__int64)mem >> 63) & 7) )
  {
    *((_QWORD *)mem + 2) = mem;
    *((_QWORD *)mem + 3) = mem;
    v5 = (void **)((char *)mem + 144);
    *((_DWORD *)mem + 8) = 0;
    v6 = (char *)mem + 36;
    v7 = 25i64;
    do
    {
      *v6++ = 0;
      *(v5 - 1) = mem;
      *v5 = mem;
      v5[1] = mem;
      v5[2] = mem;
      v5[3] = mem;
      v5[4] = mem;
      v5[5] = mem;
      v5[6] = mem;
      v5[7] = mem;
      v5[8] = mem;
      v5[9] = mem;
      v5[10] = mem;
      v5[11] = mem;
      v5[12] = mem;
      v5[13] = mem;
      v5[14] = mem;
      v5[15] = mem;
      v5[16] = mem;
      v5[17] = mem;
      v5[18] = mem;
      v5[19] = mem;
      v5[20] = mem;
      v5[21] = mem;
      v5[22] = mem;
      v5[23] = mem;
      v5[24] = mem;
      v5[25] = mem;
      v5[26] = mem;
      v5[27] = mem;
      v5[28] = mem;
      v5[29] = mem;
      v5[30] = mem;
      v5 += 32;
      --v7;
    }
    while ( v7 );
    v4 = (control_t *)mem;
  }
  else
  {
    j_printf("tlsf_create: Memory must be aligned to %u bytes.\n", 8i64);
    v4 = NULL;
  }
  v8 = (unsigned __int64 *)((char *)mem + 6536);
  if ( ((((((__int64)mem + 6536) >> 63) & 7) + (unsigned __int8)mem - 120) & 7) == ((((__int64)mem + 6536) >> 63) & 7) )
  {
    if ( ((bytes - 6552) & 0xFFFFFFFFFFFFFFF8ui64) - 24 > 0xFFFFFFE8 )
    {
      j_printf("tlsf_add_pool: Memory size must be between 0x%x and 0x%x00 bytes.\n", 40i64, 0x1000000i64);
    }
    else
    {
      *v8 = (bytes - 6552) & 0xFFFFFFFFFFFFFFF8ui64 | 1;
      block_insert(v4, (block_header_t *)mem + 204);
      v10 = *v8 & 0xFFFFFFFFFFFFFFFCui64;
      *(unsigned __int64 *)((char *)v8 + v10) = (unsigned __int64)mem + 6528;
      *(unsigned __int64 *)((char *)v8 + v10 + 8) = 2i64;
    }
    return v4;
  }
  else
  {
    j_printf("tlsf_add_pool: Memory must be aligned by %u bytes.\n", 8i64);
    return v4;
  }
}

/*
==============
tlsf_destroy
==============
*/
void tlsf_destroy(void *tlsf)
{
  ;
}

/*
==============
tlsf_free
==============
*/
void tlsf_free(void *tlsf, void *ptr)
{
  block_header_t *v3; 
  _QWORD *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 

  if ( ptr )
  {
    v3 = (block_header_t *)((char *)ptr - 16);
    v4 = (char *)ptr - 8;
    v5 = *v4 & 0xFFFFFFFFFFFFFFFCui64;
    *(block_header_t **)((char *)&v3->next_free + v5) = (block_header_t *)(*(unsigned __int64 *)((char *)&v3->next_free + v5) | 2);
    *(unsigned __int64 *)((char *)&v3->size + v5) = (unsigned __int64)v3;
    *v4 |= 1ui64;
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
      v3 = v3->prev_phys_block;
      block_remove((control_t *)tlsf, v3);
      v3->size += (*v4 & 0xFFFFFFFFFFFFFFFCui64) + 8;
      *(unsigned __int64 *)((char *)&v3->size + (v3->size & 0xFFFFFFFFFFFFFFFCui64)) = (unsigned __int64)v3;
    }
    v6 = v3->size & 0xFFFFFFFFFFFFFFFCui64;
    v7 = (__int64)&v3->size + v6;
    if ( (*((_BYTE *)&v3->next_free + v6) & 1) != 0 )
    {
      block_remove((control_t *)tlsf, (block_header_t *)((char *)&v3->size + v6));
      v3->size += (*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFFCui64) + 8;
      *(unsigned __int64 *)((char *)&v3->size + (v3->size & 0xFFFFFFFFFFFFFFFCui64)) = (unsigned __int64)v3;
    }
    block_insert((control_t *)tlsf, v3);
  }
}

/*
==============
tlsf_get_pool
==============
*/
char *tlsf_get_pool(void *tlsf)
{
  return (char *)tlsf + 6536;
}

/*
==============
tlsf_malloc
==============
*/
block_header_t **tlsf_malloc(void *tlsf, unsigned __int64 size)
{
  unsigned __int64 v3; 
  block_header_t *free; 

  v3 = 0i64;
  if ( size - 1 <= 0xFFFFFFFE )
  {
    v3 = 24i64;
    if ( ((size + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18 )
      v3 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  }
  free = block_locate_free((control_t *)tlsf, v3);
  return block_prepare_used((control_t *)tlsf, free, v3);
}

/*
==============
tlsf_memalign
==============
*/
block_header_t **tlsf_memalign(void *tlsf, unsigned __int64 align, unsigned __int64 size)
{
  unsigned __int64 v4; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  block_header_t *free; 
  block_header_t *v9; 
  block_header_t **p_next_free; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  block_header_t *v16; 
  unsigned __int64 v17; 

  v4 = 0i64;
  v6 = 0i64;
  if ( size - 1 <= 0xFFFFFFFE )
  {
    v6 = 24i64;
    if ( ((size + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18 )
      v6 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  }
  if ( v6 + align + 31 <= 0xFFFFFFFE )
  {
    v4 = 24i64;
    v7 = ~(align - 1);
    if ( (v7 & (v6 + align + 32 + align - 1)) > 0x18 )
      v4 = v7 & (v6 + align + 32 + align - 1);
  }
  if ( !v6 || align <= 8 )
    v4 = v6;
  free = block_locate_free((control_t *)tlsf, v4);
  v9 = free;
  if ( free )
  {
    p_next_free = &free->next_free;
    v11 = -(__int64)align & ((unsigned __int64)&free->size + align + 7);
    v12 = v11 - (_QWORD)&free->next_free;
    if ( v12 )
    {
      if ( v12 < 0x20 )
      {
        v13 = 32 - v12;
        v14 = align;
        if ( v13 > align )
          v14 = v13;
        v12 = (~(align - 1) & (v11 + v14 + align - 1)) - (_QWORD)p_next_free;
      }
      if ( v12 )
      {
        v15 = v9->size & 0xFFFFFFFFFFFFFFFCui64;
        v16 = v9;
        if ( v15 >= v12 + 32 )
        {
          *(unsigned __int64 *)((char *)&v9->size + v12) &= 3ui64;
          v16 = (block_header_t *)((char *)v9 + v12);
          v16->size |= v15 - v12;
          v9->size &= 3ui64;
          v9->size |= v12 - 8;
          v17 = *(unsigned __int64 *)((_BYTE *)&v9->size + v12) & 0xFFFFFFFFFFFFFFFCui64;
          *(block_header_t **)((char *)&v16->next_free + v17) = (block_header_t *)(*(unsigned __int64 *)((char *)&v16->next_free + v17) | 2);
          *(unsigned __int64 *)((char *)&v16->size + v17) = (unsigned __int64)v16;
          v16->size |= 3ui64;
          *(unsigned __int64 *)((char *)&v9->size + (v9->size & 0xFFFFFFFFFFFFFFFCui64)) = (unsigned __int64)v9;
          block_insert((control_t *)tlsf, v9);
        }
        v9 = v16;
      }
    }
  }
  return block_prepare_used((control_t *)tlsf, v9, v6);
}

/*
==============
tlsf_pool_overhead
==============
*/
unsigned __int64 tlsf_pool_overhead()
{
  return 16i64;
}

/*
==============
tlsf_realloc
==============
*/
block_header_t **tlsf_realloc(void *tlsf, void *ptr, unsigned __int64 size)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  block_header_t **result; 
  __int64 v8; 
  char *v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  block_header_t **v12; 
  unsigned __int64 v13; 
  block_header_t *v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  block_header_t *free; 

  v3 = 0i64;
  v4 = size;
  if ( ptr )
  {
    if ( !size )
    {
      j_tlsf_free(tlsf, ptr);
      return 0i64;
    }
    v8 = *((_QWORD *)ptr - 1);
    v9 = (char *)ptr - 16;
    v10 = v8 & 0xFFFFFFFFFFFFFFFCui64;
    v11 = *(_QWORD *)((char *)ptr + (v8 & 0xFFFFFFFFFFFFFFFCui64));
    if ( size < 0x100000000i64 )
    {
      v3 = 24i64;
      if ( ((size + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18 )
        v3 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    }
    if ( v3 > v10 )
    {
      if ( (v11 & 1) == 0 || v3 > (v11 & 0xFFFFFFFFFFFFFFFCui64) + (v8 & 0xFFFFFFFFFFFFFFFCui64) + 8 )
      {
        result = (block_header_t **)j_tlsf_malloc(tlsf, size);
        v12 = result;
        if ( result )
        {
          if ( v10 < v4 )
            v4 = v10;
          memcpy_0(result, ptr, v4);
          j_tlsf_free(tlsf, ptr);
          return v12;
        }
        return result;
      }
      if ( v3 > v10 )
      {
        if ( (v11 & 1) != 0 )
        {
          block_remove((control_t *)tlsf, (block_header_t *)&v9[v10 + 8]);
          *((_QWORD *)v9 + 1) += (*(_QWORD *)&v9[v10 + 16] & 0xFFFFFFFFFFFFFFFCui64) + 8;
          *(_QWORD *)&v9[(*((_QWORD *)v9 + 1) & 0xFFFFFFFFFFFFFFFCui64) + 8] = v9;
          v8 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)&v9[(v8 & 0xFFFFFFFFFFFFFFFCui64) + 16] &= ~2ui64;
        *((_QWORD *)v9 + 1) &= ~1ui64;
        v8 = *((_QWORD *)v9 + 1);
      }
    }
    v13 = v8 & 0xFFFFFFFFFFFFFFFCui64;
    if ( v13 >= v3 + 32 )
    {
      *(_QWORD *)&v9[v3 + 16] &= 3ui64;
      v14 = (block_header_t *)&v9[v3 + 8];
      v14->size |= v13 - v3 - 8;
      *((_QWORD *)v9 + 1) &= 3ui64;
      *((_QWORD *)v9 + 1) |= v3;
      v15 = *(_QWORD *)&v9[v3 + 16] & 0xFFFFFFFFFFFFFFFCui64;
      *(block_header_t **)((char *)&v14->next_free + v15) = (block_header_t *)(*(unsigned __int64 *)((char *)&v14->next_free + v15) | 2);
      *(unsigned __int64 *)((char *)&v14->size + v15) = (unsigned __int64)v14;
      v16 = *(_QWORD *)&v9[v3 + 16] & 0xFFFFFFFFFFFFFFFCui64 | 1;
      v14->size = v16;
      v17 = v16 & 0xFFFFFFFFFFFFFFFCui64;
      v18 = (__int64)&v14->size + v17;
      if ( (*((_BYTE *)&v14->next_free + v17) & 1) != 0 )
      {
        block_remove((control_t *)tlsf, (block_header_t *)((char *)&v14->size + v17));
        v14->size += (*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFFCui64) + 8;
        *(unsigned __int64 *)((char *)&v14->size + (v14->size & 0xFFFFFFFFFFFFFFFCui64)) = (unsigned __int64)v14;
      }
      block_insert((control_t *)tlsf, v14);
    }
    return (block_header_t **)ptr;
  }
  else
  {
    if ( size - 1 <= 0xFFFFFFFE )
    {
      v3 = 24i64;
      if ( ((size + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18 )
        v3 = (size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    }
    free = block_locate_free((control_t *)tlsf, v3);
    return block_prepare_used((control_t *)tlsf, free, v3);
  }
}

/*
==============
tlsf_remove_pool
==============
*/
void tlsf_remove_pool(void *tlsf, void *pool)
{
  char *v2; 
  unsigned __int64 v3; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 v8; 
  bool v9; 
  int v10; 
  __int64 v11; 
  _QWORD *v12; 
  __int64 v13; 
  int v14; 

  v2 = (char *)pool - 8;
  v3 = *(_QWORD *)pool & 0xFFFFFFFFFFFFFFFCui64;
  if ( v3 >= 0x100 )
  {
    v7 = -1;
    v8 = HIDWORD(v3);
    if ( HIDWORD(v3) )
    {
      v9 = !_BitScanReverse((unsigned int *)&v8, v8);
      if ( !v9 )
        v7 = v8;
      v7 += 32;
    }
    else
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v3);
      if ( !v9 )
        v7 = v10;
    }
    v5 = v7 - 7;
    v6 = (v3 >> ((unsigned __int8)v7 - 5)) ^ 0x20;
  }
  else
  {
    v5 = 0;
    v6 = (int)v3 / 8;
  }
  v11 = *((_QWORD *)v2 + 3);
  v12 = (_QWORD *)*((_QWORD *)v2 + 2);
  v12[3] = v11;
  *(_QWORD *)(v11 + 16) = v12;
  v13 = v6 + 32i64 * v5;
  if ( *((char **)tlsf + v13 + 17) == v2 )
  {
    *((_QWORD *)tlsf + v13 + 17) = v12;
    if ( v12 == tlsf )
    {
      v14 = ~(1 << v6);
      v9 = (v14 & *((_DWORD *)tlsf + v5 + 9)) == 0;
      *((_DWORD *)tlsf + v5 + 9) &= v14;
      if ( v9 )
        *((_DWORD *)tlsf + 8) &= ~(1 << v5);
    }
  }
}

/*
==============
tlsf_size
==============
*/
unsigned __int64 tlsf_size()
{
  return 6536i64;
}

/*
==============
tlsf_walk_pool
==============
*/
void tlsf_walk_pool(void *pool, void (*walker)(void *, unsigned __int64, int, void *), void *user)
{
  void (__fastcall *v3)(void *, unsigned __int64, int, void *); 
  char *v4; 
  __int64 v6; 

  v3 = default_walker;
  v4 = (char *)pool - 8;
  if ( walker )
    v3 = walker;
  if ( pool != (void *)8 )
  {
    do
    {
      v6 = *((_QWORD *)v4 + 1);
      if ( (v6 & 0xFFFFFFFFFFFFFFFCui64) == 0 )
        break;
      v3(v4 + 16, *((_QWORD *)v4 + 1) & 0xFFFFFFFFFFFFFFFCui64, (v6 & 1) == 0, user);
      v4 += (*((_QWORD *)v4 + 1) & 0xFFFFFFFFFFFFFFFCui64) + 8;
    }
    while ( v4 );
  }
}

