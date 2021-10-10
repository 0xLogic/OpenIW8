/*
==============
add_segment
==============
*/
void add_segment(malloc_state *m, char *tbase, unsigned __int64 tsize, unsigned int mmapped)
{
  malloc_chunk *top; 
  malloc_segment *p_seg; 
  char *v10; 
  __int64 v11; 
  malloc_chunk *v12; 
  malloc_segment *p_fd; 
  __int64 v14; 
  malloc_chunk *v15; 
  unsigned __int64 v16; 
  malloc_chunk **v17; 
  char *p_bk; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned int smallmap; 
  malloc_chunk **v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  malloc_tree_chunk **v28; 
  unsigned int treemap; 
  malloc_chunk *v30; 
  char v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  __int64 v34; 
  malloc_chunk *fd; 

  top = m->top;
  p_seg = &m->seg;
  do
  {
    if ( (char *)top >= p_seg->base && (char *)top < &p_seg->base[p_seg->size] )
      break;
    p_seg = p_seg->next;
  }
  while ( p_seg );
  v10 = &p_seg->base[p_seg->size];
  if ( (((_BYTE)v10 - 79) & 7) != 0 )
    v11 = -(((_BYTE)v10 - 79) & 7) & 7;
  else
    v11 = 0i64;
  v12 = (malloc_chunk *)&v10[v11 - 79];
  if ( v12 < &top[1] )
    v12 = top;
  p_fd = (malloc_segment *)&v12->fd;
  if ( ((unsigned __int8)tbase & 7) != 0 )
    v14 = -((unsigned __int8)tbase & 7) & 7;
  else
    v14 = 0i64;
  v15 = (malloc_chunk *)&tbase[v14];
  v16 = tsize - 72 - v14;
  m->top = v15;
  m->topsize = v16;
  v15->head = v16 | 1;
  *(unsigned __int64 *)((char *)&v15->head + v16) = 72i64;
  m->trim_check = m->m_params.trim_threshold;
  v17 = &v12[1].fd;
  v12->head = 43i64;
  p_bk = (char *)&v12[1].bk;
  *(__m256i *)&p_fd->base = *(__m256i *)&m->seg.base;
  m->seg.base = tbase;
  m->seg.size = tsize;
  *(_DWORD *)m->gap380 = mmapped;
  m->seg.next = p_fd;
  v12[1].fd = (malloc_chunk *)11;
  if ( &v12[1].bk < (malloc_chunk **)v10 )
  {
    do
    {
      p_bk += 8;
      v17[1] = (malloc_chunk *)11;
      ++v17;
    }
    while ( p_bk < v10 );
  }
  if ( v12 != top )
  {
    v12->head &= ~1ui64;
    v19 = (char *)v12 - (char *)top;
    top->head = ((char *)v12 - (char *)top) | 1;
    v12->prev_foot = (char *)v12 - (char *)top;
    v20 = (unsigned __int64)((char *)v12 - (char *)top) >> 3;
    if ( v20 >= 0x20 )
    {
      v23 = v19 >> 8;
      if ( v19 >> 8 )
      {
        if ( v23 <= 0xFFFF )
        {
          v25 = ((unsigned int)(v23 - 256) >> 16) & 8;
          v26 = (_DWORD)v23 << (((unsigned int)(v23 - 256) >> 16) & 8);
          v27 = ((unsigned int)(v26 << (((unsigned int)(v26 - 4096) >> 16) & 4) << (((unsigned int)((v26 << (((unsigned int)(v26 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2)) >> 15) - (((unsigned int)((v26 << (((unsigned int)(v26 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) - ((((unsigned int)(v26 - 4096) >> 16) & 4) + v25);
          v24 = ((v19 >> ((unsigned __int8)v27 + 21)) & 1) + 2 * v27 + 28;
        }
        else
        {
          v24 = 31;
        }
      }
      else
      {
        v24 = 0;
      }
      LODWORD(top[1].bk) = v24;
      top[1].head = 0i64;
      top[1].prev_foot = 0i64;
      v28 = &m->treebins[v24];
      treemap = m->treemap;
      if ( _bittest((const int *)&treemap, v24) )
      {
        v30 = (malloc_chunk *)*v28;
        if ( v24 == 31 )
          v31 = 0;
        else
          v31 = 63 - ((v24 >> 1) + 6);
        v32 = v19 << v31;
        if ( (v30->head & 0xFFFFFFFFFFFFFFFCui64) == v19 )
        {
LABEL_34:
          fd = v30->fd;
          fd->bk = top;
          v30->fd = top;
          top->fd = fd;
          top->bk = v30;
          top[1].fd = NULL;
        }
        else
        {
          while ( 1 )
          {
            v33 = v32;
            v32 *= 2i64;
            v34 = (__int64)&v30[1] + 8 * (v33 >> 63);
            if ( !*(_QWORD *)v34 )
              break;
            v30 = *(malloc_chunk **)v34;
            if ( (*(_QWORD *)(*(_QWORD *)v34 + 8i64) & 0xFFFFFFFFFFFFFFFCui64) == v19 )
              goto LABEL_34;
          }
          *(_QWORD *)v34 = top;
          top[1].fd = v30;
          top->bk = top;
          top->fd = top;
        }
      }
      else
      {
        m->treemap = treemap | (1 << v24);
        *v28 = (malloc_tree_chunk *)top;
        top[1].fd = (malloc_chunk *)v28;
        top->bk = top;
        top->fd = top;
      }
    }
    else
    {
      smallmap = m->smallmap;
      v22 = &m->smallbins[(unsigned int)(2 * v20)];
      if ( _bittest((const int *)&smallmap, v20) )
        v22 = (malloc_chunk **)m->smallbins[(unsigned int)(2 * v20) + 2];
      else
        m->smallmap = smallmap | (1 << v20);
      m->smallbins[(unsigned int)(2 * v20) + 2] = top;
      v22[3] = top;
      top->fd = (malloc_chunk *)v22;
      top->bk = (malloc_chunk *)&m->smallbins[(unsigned int)(2 * v20)];
    }
  }
}

/*
==============
init_bins
==============
*/
void init_bins(malloc_state *m)
{
  m->smallbins[3] = (malloc_chunk *)m->smallbins;
  m->smallbins[2] = (malloc_chunk *)m->smallbins;
  m->smallbins[5] = (malloc_chunk *)&m->smallbins[2];
  m->smallbins[4] = (malloc_chunk *)&m->smallbins[2];
  m->smallbins[7] = (malloc_chunk *)&m->smallbins[4];
  m->smallbins[6] = (malloc_chunk *)&m->smallbins[4];
  m->smallbins[9] = (malloc_chunk *)&m->smallbins[6];
  m->smallbins[8] = (malloc_chunk *)&m->smallbins[6];
  m->smallbins[11] = (malloc_chunk *)&m->smallbins[8];
  m->smallbins[10] = (malloc_chunk *)&m->smallbins[8];
  m->smallbins[13] = (malloc_chunk *)&m->smallbins[10];
  m->smallbins[12] = (malloc_chunk *)&m->smallbins[10];
  m->smallbins[15] = (malloc_chunk *)&m->smallbins[12];
  m->smallbins[14] = (malloc_chunk *)&m->smallbins[12];
  m->smallbins[17] = (malloc_chunk *)&m->smallbins[14];
  m->smallbins[16] = (malloc_chunk *)&m->smallbins[14];
  m->smallbins[19] = (malloc_chunk *)&m->smallbins[16];
  m->smallbins[18] = (malloc_chunk *)&m->smallbins[16];
  m->smallbins[21] = (malloc_chunk *)&m->smallbins[18];
  m->smallbins[20] = (malloc_chunk *)&m->smallbins[18];
  m->smallbins[23] = (malloc_chunk *)&m->smallbins[20];
  m->smallbins[22] = (malloc_chunk *)&m->smallbins[20];
  m->smallbins[25] = (malloc_chunk *)&m->smallbins[22];
  m->smallbins[24] = (malloc_chunk *)&m->smallbins[22];
  m->smallbins[27] = (malloc_chunk *)&m->smallbins[24];
  m->smallbins[26] = (malloc_chunk *)&m->smallbins[24];
  m->smallbins[29] = (malloc_chunk *)&m->smallbins[26];
  m->smallbins[28] = (malloc_chunk *)&m->smallbins[26];
  m->smallbins[31] = (malloc_chunk *)&m->smallbins[28];
  m->smallbins[30] = (malloc_chunk *)&m->smallbins[28];
  m->smallbins[33] = (malloc_chunk *)&m->smallbins[30];
  m->smallbins[32] = (malloc_chunk *)&m->smallbins[30];
  m->smallbins[35] = (malloc_chunk *)&m->smallbins[32];
  m->smallbins[34] = (malloc_chunk *)&m->smallbins[32];
  m->smallbins[37] = (malloc_chunk *)&m->smallbins[34];
  m->smallbins[36] = (malloc_chunk *)&m->smallbins[34];
  m->smallbins[39] = (malloc_chunk *)&m->smallbins[36];
  m->smallbins[38] = (malloc_chunk *)&m->smallbins[36];
  m->smallbins[41] = (malloc_chunk *)&m->smallbins[38];
  m->smallbins[40] = (malloc_chunk *)&m->smallbins[38];
  m->smallbins[43] = (malloc_chunk *)&m->smallbins[40];
  m->smallbins[42] = (malloc_chunk *)&m->smallbins[40];
  m->smallbins[45] = (malloc_chunk *)&m->smallbins[42];
  m->smallbins[44] = (malloc_chunk *)&m->smallbins[42];
  m->smallbins[47] = (malloc_chunk *)&m->smallbins[44];
  m->smallbins[46] = (malloc_chunk *)&m->smallbins[44];
  m->smallbins[49] = (malloc_chunk *)&m->smallbins[46];
  m->smallbins[48] = (malloc_chunk *)&m->smallbins[46];
  m->smallbins[51] = (malloc_chunk *)&m->smallbins[48];
  m->smallbins[50] = (malloc_chunk *)&m->smallbins[48];
  m->smallbins[53] = (malloc_chunk *)&m->smallbins[50];
  m->smallbins[52] = (malloc_chunk *)&m->smallbins[50];
  m->smallbins[55] = (malloc_chunk *)&m->smallbins[52];
  m->smallbins[54] = (malloc_chunk *)&m->smallbins[52];
  m->smallbins[57] = (malloc_chunk *)&m->smallbins[54];
  m->smallbins[56] = (malloc_chunk *)&m->smallbins[54];
  m->smallbins[59] = (malloc_chunk *)&m->smallbins[56];
  m->smallbins[58] = (malloc_chunk *)&m->smallbins[56];
  m->smallbins[61] = (malloc_chunk *)&m->smallbins[58];
  m->smallbins[60] = (malloc_chunk *)&m->smallbins[58];
  m->smallbins[63] = (malloc_chunk *)&m->smallbins[60];
  m->smallbins[62] = (malloc_chunk *)&m->smallbins[60];
  m->smallbins[65] = (malloc_chunk *)&m->smallbins[62];
  m->smallbins[64] = (malloc_chunk *)&m->smallbins[62];
}

/*
==============
init_top
==============
*/
void init_top(malloc_state *m, malloc_chunk *p, unsigned __int64 psize)
{
  __int64 v3; 
  malloc_chunk *v4; 
  unsigned __int64 v5; 

  if ( ((unsigned __int8)p & 7) != 0 )
    v3 = -((unsigned __int8)p & 7) & 7;
  else
    v3 = 0i64;
  v4 = (malloc_chunk *)((char *)p + v3);
  v5 = psize - v3;
  m->top = v4;
  m->topsize = v5;
  v4->head = v5 | 1;
  *(unsigned __int64 *)((char *)&v4->head + v5) = 72i64;
  m->trim_check = m->m_params.trim_threshold;
}

/*
==============
prepend_alloc
==============
*/
char *prepend_alloc(malloc_state *m, char *newbase, char *oldbase, unsigned __int64 nb)
{
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  char *v8; 
  char *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  char *result; 
  unsigned __int64 dvsize; 
  __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  malloc_tree_chunk *v18; 
  malloc_tree_chunk *v19; 
  malloc_tree_chunk *v20; 
  malloc_tree_chunk **v21; 
  malloc_tree_chunk *v22; 
  malloc_tree_chunk **child; 
  __int64 v24; 
  malloc_tree_chunk *v25; 
  malloc_tree_chunk *v26; 
  unsigned __int64 v27; 
  unsigned int smallmap; 
  malloc_chunk **v29; 
  unsigned __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  unsigned int v34; 
  malloc_tree_chunk **v35; 
  unsigned int treemap; 
  malloc_tree_chunk *v37; 
  char v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  malloc_tree_chunk *fd; 

  if ( ((unsigned __int8)newbase & 7) != 0 )
    v5 = -((unsigned __int8)newbase & 7) & 7;
  else
    v5 = 0i64;
  v6 = &newbase[v5];
  if ( ((unsigned __int8)oldbase & 7) != 0 )
    v7 = -((unsigned __int8)oldbase & 7) & 7;
  else
    v7 = 0i64;
  v8 = &oldbase[v7];
  v9 = &v6[nb];
  v10 = v8 - v6 - nb;
  *((_QWORD *)v6 + 1) = nb | 3;
  if ( v8 == (char *)m->top )
  {
    m->topsize += v10;
    v11 = m->topsize | 1;
    m->top = (malloc_chunk *)v9;
    *((_QWORD *)v9 + 1) = v11;
    return v6 + 16;
  }
  if ( v8 == (char *)m->dv )
  {
    m->dvsize += v10;
    dvsize = m->dvsize;
    m->dv = (malloc_chunk *)v9;
    *((_QWORD *)v9 + 1) = dvsize | 1;
    result = v6 + 16;
    *(_QWORD *)&v9[dvsize] = dvsize;
    return result;
  }
  v14 = *((_QWORD *)v8 + 1);
  if ( (v14 & 2) == 0 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFFCui64;
    if ( v15 >> 3 < 0x20 )
    {
      v16 = *((_QWORD *)v8 + 2);
      v17 = *((_QWORD *)v8 + 3);
      if ( v16 == v17 )
      {
        m->smallmap &= ~(1 << (v15 >> 3));
      }
      else
      {
        *(_QWORD *)(v16 + 24) = v17;
        *(_QWORD *)(v17 + 16) = v16;
      }
      goto LABEL_36;
    }
    v18 = (malloc_tree_chunk *)*((_QWORD *)v8 + 3);
    v19 = (malloc_tree_chunk *)*((_QWORD *)v8 + 6);
    if ( v18 == (malloc_tree_chunk *)v8 )
    {
      v18 = (malloc_tree_chunk *)*((_QWORD *)v8 + 5);
      v21 = (malloc_tree_chunk **)(v8 + 40);
      if ( v18 || (v18 = (malloc_tree_chunk *)*((_QWORD *)v8 + 4), v21 = (malloc_tree_chunk **)(v8 + 32), v18) )
      {
        while ( 1 )
        {
          v22 = v18->child[1];
          child = &v18->child[1];
          if ( !v22 )
          {
            v22 = v18->child[0];
            child = v18->child;
            if ( !v22 )
              break;
          }
          v21 = child;
          v18 = v22;
        }
        *v21 = NULL;
      }
    }
    else
    {
      v20 = (malloc_tree_chunk *)*((_QWORD *)v8 + 2);
      v20->bk = v18;
      v18->fd = v20;
    }
    if ( !v19 )
      goto LABEL_36;
    v24 = *((unsigned int *)v8 + 14);
    if ( v8 == (char *)m->treebins[v24] )
    {
      m->treebins[v24] = v18;
      if ( !v18 )
      {
        m->treemap &= ~(1 << v8[56]);
LABEL_36:
        v8 += v15;
        v10 += v15;
        goto LABEL_37;
      }
    }
    else
    {
      if ( (char *)v19->child[0] == v8 )
        v19->child[0] = v18;
      else
        v19->child[1] = v18;
      if ( !v18 )
        goto LABEL_36;
    }
    v18->parent = v19;
    v25 = (malloc_tree_chunk *)*((_QWORD *)v8 + 4);
    if ( v25 )
    {
      v18->child[0] = v25;
      v25->parent = v18;
    }
    v26 = (malloc_tree_chunk *)*((_QWORD *)v8 + 5);
    if ( v26 )
    {
      v18->child[1] = v26;
      v26->parent = v18;
    }
    goto LABEL_36;
  }
LABEL_37:
  *((_QWORD *)v8 + 1) &= ~1ui64;
  *((_QWORD *)v9 + 1) = v10 | 1;
  v27 = v10 >> 3;
  *(_QWORD *)&v9[v10] = v10;
  if ( v10 >> 3 >= 0x20 )
  {
    v30 = v10 >> 8;
    if ( v10 >> 8 )
    {
      if ( v30 <= 0xFFFF )
      {
        v32 = ((unsigned int)(v30 - 256) >> 16) & 8;
        v33 = (_DWORD)v30 << (((unsigned int)(v30 - 256) >> 16) & 8);
        v34 = ((unsigned int)(v33 << (((unsigned int)(v33 - 4096) >> 16) & 4) << (((unsigned int)((v33 << (((unsigned int)(v33 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2)) >> 15) - (((unsigned int)((v33 << (((unsigned int)(v33 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) - ((((unsigned int)(v33 - 4096) >> 16) & 4) + v32);
        v31 = ((v10 >> ((unsigned __int8)v34 + 21)) & 1) + 2 * v34 + 28;
      }
      else
      {
        v31 = 31;
      }
    }
    else
    {
      v31 = 0;
    }
    *((_DWORD *)v9 + 14) = v31;
    *((_QWORD *)v9 + 5) = 0i64;
    *((_QWORD *)v9 + 4) = 0i64;
    v35 = &m->treebins[v31];
    treemap = m->treemap;
    if ( _bittest((const int *)&treemap, v31) )
    {
      v37 = *v35;
      if ( v31 == 31 )
        v38 = 0;
      else
        v38 = 63 - ((v31 >> 1) + 6);
      v39 = v10 << v38;
      if ( (v37->head & 0xFFFFFFFFFFFFFFFCui64) == v10 )
      {
LABEL_55:
        fd = v37->fd;
        fd->bk = (malloc_tree_chunk *)v9;
        v37->fd = (malloc_tree_chunk *)v9;
        *((_QWORD *)v9 + 2) = fd;
        result = v6 + 16;
        *((_QWORD *)v9 + 3) = v37;
        *((_QWORD *)v9 + 6) = 0i64;
      }
      else
      {
        while ( 1 )
        {
          v40 = v39;
          v39 *= 2i64;
          v41 = (__int64)&v37->child[v40 >> 63];
          if ( !*(_QWORD *)v41 )
            break;
          v37 = *(malloc_tree_chunk **)v41;
          if ( (*(_QWORD *)(*(_QWORD *)v41 + 8i64) & 0xFFFFFFFFFFFFFFFCui64) == v10 )
            goto LABEL_55;
        }
        result = v6 + 16;
        *(_QWORD *)v41 = v9;
        *((_QWORD *)v9 + 6) = v37;
        *((_QWORD *)v9 + 3) = v9;
        *((_QWORD *)v9 + 2) = v9;
      }
    }
    else
    {
      m->treemap = treemap | (1 << v31);
      result = v6 + 16;
      *v35 = (malloc_tree_chunk *)v9;
      *((_QWORD *)v9 + 6) = v35;
      *((_QWORD *)v9 + 3) = v9;
      *((_QWORD *)v9 + 2) = v9;
    }
  }
  else
  {
    smallmap = m->smallmap;
    v29 = &m->smallbins[(unsigned int)(2 * v27)];
    if ( _bittest((const int *)&smallmap, v27) )
      v29 = (malloc_chunk **)m->smallbins[(unsigned int)(2 * v27) + 2];
    else
      m->smallmap = smallmap | (1 << v27);
    m->smallbins[(unsigned int)(2 * v27) + 2] = (malloc_chunk *)v9;
    v29[3] = (malloc_chunk *)v9;
    *((_QWORD *)v9 + 3) = &m->smallbins[(unsigned int)(2 * v27)];
    result = v6 + 16;
    *((_QWORD *)v9 + 2) = v29;
  }
  return result;
}

/*
==============
release_unused_segments
==============
*/
__int64 release_unused_segments(malloc_state *m)
{
  malloc_segment *p_seg; 
  malloc_segment *next; 
  __int64 v4; 
  char *base; 
  unsigned __int64 size; 
  malloc_segment *v7; 
  __int64 v8; 
  malloc_tree_chunk *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  malloc_tree_chunk *bk; 
  malloc_tree_chunk *parent; 
  malloc_tree_chunk *fd; 
  malloc_tree_chunk **v15; 
  malloc_tree_chunk *v16; 
  malloc_tree_chunk **child; 
  __int64 index_low; 
  malloc_tree_chunk *v19; 
  malloc_tree_chunk *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  malloc_tree_chunk **v26; 
  unsigned int treemap; 
  malloc_tree_chunk *v28; 
  char v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  malloc_tree_chunk *v33; 

  p_seg = &m->seg;
  next = m->seg.next;
  v4 = 0i64;
  if ( next )
  {
    while ( 1 )
    {
      base = next->base;
      size = next->size;
      v7 = next->next;
      if ( ((__int64)next[1].base & 9) == 1 )
      {
        v8 = ((unsigned __int8)base & 7) != 0 ? -((unsigned __int8)base & 7) & 7u : 0i64;
        v9 = (malloc_tree_chunk *)&base[v8];
        v10 = *(_QWORD *)&base[v8 + 8];
        v11 = v10 & 0xFFFFFFFFFFFFFFFCui64;
        if ( (v10 & 2) == 0 && (char *)v9 + v11 >= &base[size - 72] )
          break;
      }
LABEL_46:
      p_seg = next;
      next = v7;
      if ( !v7 )
        return v4;
    }
    if ( v9 == (malloc_tree_chunk *)m->dv )
    {
      m->dv = NULL;
      m->dvsize = 0i64;
      goto LABEL_30;
    }
    bk = v9->bk;
    parent = v9->parent;
    if ( bk == v9 )
    {
      bk = v9->child[1];
      v15 = &v9->child[1];
      if ( bk || (bk = v9->child[0], v15 = v9->child, bk) )
      {
        while ( 1 )
        {
          v16 = bk->child[1];
          child = &bk->child[1];
          if ( !v16 )
          {
            v16 = bk->child[0];
            child = bk->child;
            if ( !v16 )
              break;
          }
          v15 = child;
          bk = v16;
        }
        *v15 = NULL;
      }
    }
    else
    {
      fd = v9->fd;
      fd->bk = bk;
      bk->fd = fd;
    }
    if ( parent )
    {
      index_low = LODWORD(v9->index);
      if ( v9 == m->treebins[index_low] )
      {
        m->treebins[index_low] = bk;
        if ( !bk )
        {
          m->treemap &= ~(1 << LOBYTE(v9->index));
          goto LABEL_30;
        }
      }
      else
      {
        if ( parent->child[0] == v9 )
          parent->child[0] = bk;
        else
          parent->child[1] = bk;
        if ( !bk )
          goto LABEL_30;
      }
      bk->parent = parent;
      v19 = v9->child[0];
      if ( v19 )
      {
        bk->child[0] = v19;
        v19->parent = bk;
      }
      v20 = v9->child[1];
      if ( v20 )
      {
        bk->child[1] = v20;
        v20->parent = bk;
      }
    }
LABEL_30:
    if ( win32munmap(base, size) )
    {
      v21 = v11 >> 8;
      if ( v11 >> 8 )
      {
        if ( v21 <= 0xFFFF )
        {
          v23 = ((unsigned int)(v21 - 256) >> 16) & 8;
          v24 = (_DWORD)v21 << (((unsigned int)(v21 - 256) >> 16) & 8);
          v25 = ((unsigned int)(v24 << (((unsigned int)(v24 - 4096) >> 16) & 4) << (((unsigned int)((v24 << (((unsigned int)(v24 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2)) >> 15) - (((unsigned int)((v24 << (((unsigned int)(v24 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) - ((((unsigned int)(v24 - 4096) >> 16) & 4) + v23);
          v22 = ((v11 >> ((unsigned __int8)v25 + 21)) & 1) + 2 * v25 + 28;
        }
        else
        {
          v22 = 31;
        }
      }
      else
      {
        v22 = 0;
      }
      LODWORD(v9->index) = v22;
      v9->child[1] = NULL;
      v9->child[0] = NULL;
      v26 = &m->treebins[v22];
      treemap = m->treemap;
      if ( _bittest((const int *)&treemap, v22) )
      {
        v28 = *v26;
        if ( v22 == 31 )
          v29 = 0;
        else
          v29 = 63 - ((v22 >> 1) + 6);
        v30 = v11 << v29;
        if ( (v28->head & 0xFFFFFFFFFFFFFFFCui64) == v11 )
        {
LABEL_45:
          v33 = v28->fd;
          v33->bk = v9;
          v28->fd = v9;
          v9->fd = v33;
          v9->bk = v28;
          v9->parent = NULL;
        }
        else
        {
          while ( 1 )
          {
            v31 = v30;
            v30 *= 2i64;
            v32 = (__int64)&v28->child[v31 >> 63];
            if ( !*(_QWORD *)v32 )
              break;
            v28 = *(malloc_tree_chunk **)v32;
            if ( (*(_QWORD *)(*(_QWORD *)v32 + 8i64) & 0xFFFFFFFFFFFFFFFCui64) == v11 )
              goto LABEL_45;
          }
          *(_QWORD *)v32 = v9;
          v9->parent = v28;
          v9->bk = v9;
          v9->fd = v9;
        }
      }
      else
      {
        m->treemap = treemap | (1 << v22);
        *v26 = v9;
        v9->parent = (malloc_tree_chunk *)v26;
        v9->bk = v9;
        v9->fd = v9;
      }
    }
    else
    {
      m->footprint -= size;
      v4 += size;
      p_seg->next = v7;
      next = p_seg;
    }
    goto LABEL_46;
  }
  return v4;
}

/*
==============
tmalloc_large
==============
*/
malloc_tree_chunk **tmalloc_large(malloc_state *m, unsigned __int64 nb)
{
  unsigned __int64 v2; 
  unsigned __int64 v4; 
  malloc_tree_chunk *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  malloc_tree_chunk *v12; 
  char v13; 
  malloc_tree_chunk *v14; 
  unsigned __int64 i; 
  unsigned __int64 v16; 
  malloc_tree_chunk *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  malloc_tree_chunk *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  malloc_tree_chunk *v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  malloc_tree_chunk *bk; 
  malloc_tree_chunk *v31; 
  malloc_tree_chunk *parent; 
  malloc_tree_chunk *fd; 
  malloc_tree_chunk **v34; 
  malloc_tree_chunk *v35; 
  malloc_tree_chunk **child; 
  __int64 index_low; 
  malloc_tree_chunk *v38; 
  malloc_tree_chunk *v39; 
  malloc_tree_chunk **result; 
  unsigned __int64 v41; 
  unsigned int smallmap; 
  malloc_chunk **v43; 
  unsigned __int64 v44; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  malloc_tree_chunk **v48; 
  unsigned int treemap; 
  malloc_tree_chunk *v50; 
  int v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  malloc_tree_chunk *v55; 

  v2 = -(__int64)nb;
  v4 = nb >> 8;
  v6 = NULL;
  v7 = 31;
  if ( v4 )
  {
    if ( v4 <= 0xFFFF )
    {
      v9 = ((unsigned int)(v4 - 256) >> 16) & 8;
      v10 = (_DWORD)v4 << (((unsigned int)(v4 - 256) >> 16) & 8);
      v11 = ((unsigned int)(v10 << (((unsigned int)(v10 - 4096) >> 16) & 4) << (((unsigned int)((v10 << (((unsigned int)(v10 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2)) >> 15) - (((unsigned int)((v10 << (((unsigned int)(v10 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) - ((((unsigned int)(v10 - 4096) >> 16) & 4) + v9);
      v8 = ((nb >> ((unsigned __int8)v11 + 21)) & 1) + 2 * v11 + 28;
    }
    else
    {
      v8 = 31;
    }
  }
  else
  {
    v8 = 0;
  }
  v12 = m->treebins[v8];
  if ( v12 )
  {
    if ( v8 == 31 )
      v13 = 0;
    else
      v13 = 63 - ((v8 >> 1) + 6);
    v14 = NULL;
    for ( i = nb << v13; ; i *= 2i64 )
    {
      v16 = v2;
      v17 = v6;
      v18 = (v12->head & 0xFFFFFFFFFFFFFFFCui64) - nb;
      v19 = v2;
      if ( v18 < v2 )
      {
        v6 = v12;
        v2 = (v12->head & 0xFFFFFFFFFFFFFFFCui64) - nb;
        if ( !v18 )
          break;
      }
      v2 = (v12->head & 0xFFFFFFFFFFFFFFFCui64) - nb;
      v6 = v12;
      if ( v18 >= v16 )
        v2 = v16;
      v20 = v12->child[1];
      if ( v18 >= v19 )
        v6 = v17;
      v12 = v12->child[i >> 63];
      if ( v20 && v20 != v12 )
        v14 = v20;
      if ( !v12 )
      {
        v12 = v14;
        break;
      }
    }
    if ( v12 )
      goto LABEL_28;
    if ( v6 )
      goto LABEL_37;
  }
  v21 = m->treemap & (-2 << v8);
  if ( v21 )
  {
    v22 = (((v21 & -v21) - 1) >> ((((v21 & -v21) - 1) >> 12) & 0x10) >> 5) & 8;
    v23 = ((v21 & -v21) - 1) >> ((((v21 & -v21) - 1) >> 12) & 0x10) >> v22;
    v24 = v22 + ((((v21 & -v21) - 1) >> 12) & 0x10);
    v25 = (v23 >> 2) & 4;
    v26 = v23 >> v25;
    v12 = (malloc_tree_chunk *)*((_QWORD *)&m->treebins[(v26 >> ((v26 >> 1) & 2) >> 1) & 1] + ((v26 >> 1) & 2) + v25 + v24 + (v26 >> ((v26 >> 1) & 2) >> (((v26 >> ((v26 >> 1) & 2)) & 2) != 0)));
  }
  while ( v12 )
  {
LABEL_28:
    v27 = v12;
    v28 = (v12->head & 0xFFFFFFFFFFFFFFFCui64) - nb;
    v29 = v28;
    if ( v28 >= v2 )
      v27 = v6;
    if ( v28 >= v2 )
      v29 = v2;
    v6 = v27;
    if ( v12->child[0] )
      v12 = v12->child[0];
    else
      v12 = v12->child[1];
    v2 = v29;
  }
  if ( !v6 )
    return 0i64;
LABEL_37:
  if ( v2 >= m->dvsize - nb )
    return 0i64;
  bk = v6->bk;
  v31 = (malloc_tree_chunk *)((char *)v6 + nb);
  parent = v6->parent;
  if ( bk == v6 )
  {
    bk = v6->child[1];
    v34 = &v6->child[1];
    if ( bk || (bk = v6->child[0], v34 = v6->child, bk) )
    {
      while ( 1 )
      {
        v35 = bk->child[1];
        child = &bk->child[1];
        if ( !v35 )
        {
          v35 = bk->child[0];
          child = bk->child;
          if ( !v35 )
            break;
        }
        v34 = child;
        bk = v35;
      }
      *v34 = NULL;
    }
  }
  else
  {
    fd = v6->fd;
    fd->bk = bk;
    bk->fd = fd;
  }
  if ( parent )
  {
    index_low = LODWORD(v6->index);
    if ( v6 == m->treebins[index_low] )
    {
      m->treebins[index_low] = bk;
      if ( !bk )
      {
        m->treemap &= ~(1 << LOBYTE(v6->index));
        goto LABEL_58;
      }
    }
    else
    {
      if ( parent->child[0] == v6 )
        parent->child[0] = bk;
      else
        parent->child[1] = bk;
      if ( !bk )
        goto LABEL_58;
    }
    bk->parent = parent;
    v38 = v6->child[0];
    if ( v38 )
    {
      bk->child[0] = v38;
      v38->parent = bk;
    }
    v39 = v6->child[1];
    if ( v39 )
    {
      bk->child[1] = v39;
      v39->parent = bk;
    }
  }
LABEL_58:
  if ( v2 >= 0x20 )
  {
    v6->head = nb | 3;
    v31->head = v2 | 1;
    v41 = v2 >> 3;
    *(unsigned __int64 *)((char *)&v31->prev_foot + v2) = v2;
    if ( v2 >> 3 >= 0x20 )
    {
      v44 = v2 >> 8;
      if ( v2 >> 8 )
      {
        if ( v44 <= 0xFFFF )
        {
          v45 = ((unsigned int)(v44 - 256) >> 16) & 8;
          v46 = (_DWORD)v44 << (((unsigned int)(v44 - 256) >> 16) & 8);
          v47 = ((unsigned int)(v46 << (((unsigned int)(v46 - 4096) >> 16) & 4) << (((unsigned int)((v46 << (((unsigned int)(v46 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2)) >> 15) - (((unsigned int)((v46 << (((unsigned int)(v46 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) - ((((unsigned int)(v46 - 4096) >> 16) & 4) + v45);
          v7 = ((v2 >> ((unsigned __int8)v47 + 21)) & 1) + 2 * v47 + 28;
        }
      }
      else
      {
        v7 = 0;
      }
      LODWORD(v31->index) = v7;
      v31->child[1] = NULL;
      v31->child[0] = NULL;
      v48 = &m->treebins[v7];
      treemap = m->treemap;
      if ( _bittest((const int *)&treemap, v7) )
      {
        v50 = *v48;
        if ( v7 == 31 )
          LOBYTE(v51) = 0;
        else
          v51 = 63 - ((v7 >> 1) + 6);
        v52 = v2 << v51;
        if ( (v50->head & 0xFFFFFFFFFFFFFFFCui64) == v2 )
        {
LABEL_77:
          v55 = v50->fd;
          v55->bk = v31;
          v50->fd = v31;
          v31->fd = v55;
          result = &v6->fd;
          v31->bk = v50;
          v31->parent = NULL;
        }
        else
        {
          while ( 1 )
          {
            v53 = v52;
            v52 *= 2i64;
            v54 = (__int64)&v50->child[v53 >> 63];
            if ( !*(_QWORD *)v54 )
              break;
            v50 = *(malloc_tree_chunk **)v54;
            if ( (*(_QWORD *)(*(_QWORD *)v54 + 8i64) & 0xFFFFFFFFFFFFFFFCui64) == v2 )
              goto LABEL_77;
          }
          *(_QWORD *)v54 = v31;
          result = &v6->fd;
          v31->parent = v50;
          v31->bk = v31;
          v31->fd = v31;
        }
      }
      else
      {
        m->treemap = treemap | (1 << v7);
        result = &v6->fd;
        *v48 = v31;
        v31->parent = (malloc_tree_chunk *)v48;
        v31->bk = v31;
        v31->fd = v31;
      }
    }
    else
    {
      smallmap = m->smallmap;
      v43 = &m->smallbins[(unsigned int)(2 * v41)];
      if ( _bittest((const int *)&smallmap, v41) )
        v43 = (malloc_chunk **)m->smallbins[(unsigned int)(2 * v41) + 2];
      else
        m->smallmap = smallmap | (1 << v41);
      m->smallbins[(unsigned int)(2 * v41) + 2] = (malloc_chunk *)v31;
      v43[3] = (malloc_chunk *)v31;
      v31->bk = (malloc_tree_chunk *)&m->smallbins[(unsigned int)(2 * v41)];
      result = &v6->fd;
      v31->fd = (malloc_tree_chunk *)v43;
    }
  }
  else
  {
    v6->head = (v2 + nb) | 3;
    *(unsigned __int64 *)((char *)&v6->head + v2 + nb) |= 1ui64;
    return &v6->fd;
  }
  return result;
}

/*
==============
tmalloc_small
==============
*/
malloc_tree_chunk **tmalloc_small(malloc_state *m, unsigned __int64 nb)
{
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  malloc_tree_chunk *v11; 
  malloc_tree_chunk *v12; 
  unsigned __int64 i; 
  malloc_tree_chunk *v14; 
  unsigned __int64 v15; 
  malloc_tree_chunk *bk; 
  malloc_chunk *v17; 
  malloc_tree_chunk *parent; 
  malloc_tree_chunk *fd; 
  malloc_tree_chunk **v20; 
  malloc_tree_chunk *v21; 
  malloc_tree_chunk **child; 
  __int64 index_low; 
  malloc_tree_chunk *v24; 
  malloc_tree_chunk *v25; 
  malloc_tree_chunk **result; 
  unsigned __int64 dvsize; 
  unsigned int smallmap; 
  malloc_chunk *dv; 
  unsigned __int64 v30; 
  malloc_chunk **v31; 

  v4 = (((m->treemap & -m->treemap) - 1) >> 12) & 0x10;
  v5 = ((m->treemap & -m->treemap) - 1) >> ((((m->treemap & -m->treemap) - 1) >> 12) & 0x10);
  v6 = (v5 >> 5) & 8;
  v7 = v5 >> v6;
  v8 = v6 + v4;
  v9 = (v7 >> 2) & 4;
  v10 = v7 >> v9;
  v11 = (malloc_tree_chunk *)*((_QWORD *)&m->treebins[(v10 >> ((v10 >> 1) & 2) >> 1) & 1] + ((v10 >> 1) & 2) + v9 + v8 + (v10 >> ((v10 >> 1) & 2) >> (((v10 >> ((v10 >> 1) & 2)) & 2) != 0)));
  v12 = v11;
  for ( i = (v11->head & 0xFFFFFFFFFFFFFFFCui64) - nb; ; i = v15 )
  {
    v11 = v11->child[0] ? v11->child[0] : v11->child[1];
    if ( !v11 )
      break;
    v14 = v11;
    v15 = (v11->head & 0xFFFFFFFFFFFFFFFCui64) - nb;
    if ( v15 >= i )
      v14 = v12;
    if ( v15 >= i )
      v15 = i;
    v12 = v14;
  }
  bk = v12->bk;
  v17 = (malloc_chunk *)((char *)v12 + nb);
  parent = v12->parent;
  if ( bk == v12 )
  {
    bk = v12->child[1];
    v20 = &v12->child[1];
    if ( bk || (bk = v12->child[0], v20 = v12->child, bk) )
    {
      while ( 1 )
      {
        v21 = bk->child[1];
        child = &bk->child[1];
        if ( !v21 )
        {
          v21 = bk->child[0];
          child = bk->child;
          if ( !v21 )
            break;
        }
        v20 = child;
        bk = v21;
      }
      *v20 = NULL;
    }
  }
  else
  {
    fd = v12->fd;
    fd->bk = bk;
    bk->fd = fd;
  }
  if ( parent )
  {
    index_low = LODWORD(v12->index);
    if ( v12 == m->treebins[index_low] )
    {
      m->treebins[index_low] = bk;
      if ( !bk )
      {
        m->treemap &= ~(1 << LOBYTE(v12->index));
        goto LABEL_31;
      }
    }
    else
    {
      if ( parent->child[0] == v12 )
        parent->child[0] = bk;
      else
        parent->child[1] = bk;
      if ( !bk )
        goto LABEL_31;
    }
    bk->parent = parent;
    v24 = v12->child[0];
    if ( v24 )
    {
      bk->child[0] = v24;
      v24->parent = bk;
    }
    v25 = v12->child[1];
    if ( v25 )
    {
      bk->child[1] = v25;
      v25->parent = bk;
    }
  }
LABEL_31:
  if ( i >= 0x20 )
  {
    v12->head = nb | 3;
    v17->head = i | 1;
    *(unsigned __int64 *)((char *)&v17->prev_foot + i) = i;
    dvsize = m->dvsize;
    if ( dvsize )
    {
      smallmap = m->smallmap;
      dv = m->dv;
      v30 = dvsize >> 3;
      v31 = &m->smallbins[(unsigned int)(2 * v30)];
      if ( _bittest((const int *)&smallmap, v30) )
        v31 = (malloc_chunk **)m->smallbins[(unsigned int)(2 * v30) + 2];
      else
        m->smallmap = smallmap | (1 << v30);
      m->smallbins[(unsigned int)(2 * v30) + 2] = dv;
      v31[3] = dv;
      dv->fd = (malloc_chunk *)v31;
      dv->bk = (malloc_chunk *)&m->smallbins[(unsigned int)(2 * v30)];
    }
    result = &v12->fd;
    m->dv = v17;
    m->dvsize = i;
  }
  else
  {
    v12->head = (i + nb) | 3;
    *(unsigned __int64 *)((char *)&v12->head + i + nb) |= 1ui64;
    return &v12->fd;
  }
  return result;
}

/*
==============
lj_alloc_create
==============
*/
malloc_state *lj_alloc_create()
{
  DWORD LastError; 
  LPVOID v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  malloc_state *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  malloc_chunk *v9; 
  malloc_state *result; 

  LastError = GetLastError();
  v1 = VirtualAlloc(NULL, 0x20000ui64, 0x3000u, 4u);
  SetLastError(LastError);
  v2 = -1i64;
  if ( v1 )
    v2 = (__int64)v1;
  if ( v2 == -1 )
    return 0i64;
  v3 = 0i64;
  if ( (v2 & 7) != 0 )
    v4 = -(v2 & 7) & 7;
  else
    v4 = 0i64;
  v5 = (malloc_state *)(v4 + v2 + 16);
  memset_0(v5, 0, 0x368ui64);
  *(_QWORD *)(v4 + v2 + 8) = 875i64;
  *(_QWORD *)(v4 + v2 + 856) = v2;
  *(_QWORD *)(v4 + v2 + 864) = 0x20000i64;
  *(_QWORD *)(v4 + v2 + 64) = 255i64;
  init_bins_0(v5);
  v6 = *(_QWORD *)(v4 + v2 + 8) & 0xFFFFFFFFFFFFFFFCui64;
  v7 = v6 + v4 + v2;
  if ( (((_BYTE)v6 + (_BYTE)v4 + (_BYTE)v2) & 7) != 0 )
    v3 = -(((_BYTE)v6 + (_BYTE)v4 + (_BYTE)v2) & 7) & 7;
  v8 = 131008 - (v6 + v4) - v3;
  v9 = (malloc_chunk *)(v3 + v7);
  v5->dv = v9;
  v5->topsize = v8;
  result = v5;
  v9->head = v8 | 1;
  *(unsigned __int64 *)((char *)&v9->head + v8) = 64i64;
  v5->top = (malloc_chunk *)0x200000;
  return result;
}

/*
==============
lj_alloc_destroy
==============
*/
void lj_alloc_destroy(void *msp)
{
  char *v1; 
  char *v2; 
  unsigned __int64 v3; 
  DWORD LastError; 
  _MEMORY_BASIC_INFORMATION Buffer; 

  v1 = (char *)msp + 840;
  if ( msp != (void *)-840i64 )
  {
    do
    {
      v2 = *(char **)v1;
      v3 = *((_QWORD *)v1 + 1);
      v1 = (char *)*((_QWORD *)v1 + 2);
      LastError = GetLastError();
      if ( v3 )
      {
        while ( VirtualQuery(v2, &Buffer, 0x30ui64) && Buffer.BaseAddress == v2 && Buffer.AllocationBase == v2 && Buffer.State == 4096 && Buffer.RegionSize <= v3 && VirtualFree(v2, 0i64, 0x8000u) )
        {
          v2 += Buffer.RegionSize;
          v3 -= Buffer.RegionSize;
          if ( !v3 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        SetLastError(LastError);
      }
    }
    while ( v1 );
  }
}

/*
==============
lj_alloc_f
==============
*/
void *lj_alloc_f(void *msp, void *ptr, unsigned __int64 osize, unsigned __int64 nsize)
{
  if ( !nsize )
    return lj_alloc_free(msp, ptr);
  if ( ptr )
    return lj_alloc_realloc(msp, ptr, nsize);
  return lj_alloc_malloc(msp, nsize);
}

/*
==============
CALL_MUNMAP
==============
*/
__int64 CALL_MUNMAP(void *ptr, unsigned __int64 size)
{
  DWORD LastError; 
  _MEMORY_BASIC_INFORMATION Buffer; 

  LastError = GetLastError();
  if ( size )
  {
    while ( VirtualQuery(ptr, &Buffer, 0x30ui64) && Buffer.BaseAddress == ptr && Buffer.AllocationBase == ptr && Buffer.State == 4096 && Buffer.RegionSize <= size && VirtualFree(ptr, 0i64, 0x8000u) )
    {
      ptr = (char *)ptr + Buffer.RegionSize;
      size -= Buffer.RegionSize;
      if ( !size )
        goto LABEL_9;
    }
    return 0xFFFFFFFFi64;
  }
  else
  {
LABEL_9:
    SetLastError(LastError);
    return 0i64;
  }
}

/*
==============
alloc_sys
==============
*/
malloc_chunk **alloc_sys(malloc_state *m, unsigned __int64 nb)
{
  __int64 v4; 
  unsigned __int64 v5; 
  DWORD LastError; 
  LPVOID v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 *v10; 
  unsigned __int64 v11; 
  malloc_chunk **result; 
  unsigned __int64 v13; 
  DWORD v14; 
  LPVOID v15; 
  malloc_tree_chunk **v16; 
  malloc_tree_chunk **v17; 
  malloc_tree_chunk *v18; 
  malloc_chunk *v19; 
  char *v20; 
  unsigned __int64 topsize; 
  malloc_chunk *v22; 
  unsigned __int64 v23; 
  malloc_chunk *dv; 

  v4 = -1i64;
  if ( nb < 0x20000 )
    goto LABEL_10;
  v5 = (nb + 131126) & 0xFFFFFFFFFFFE0000ui64;
  if ( v5 <= nb )
    goto LABEL_10;
  LastError = GetLastError();
  v7 = VirtualAlloc(NULL, v5, 0x3000u, 4u);
  SetLastError(LastError);
  v8 = -1i64;
  if ( v7 )
    v8 = (__int64)v7;
  if ( v8 == -1 )
    goto LABEL_10;
  v9 = (v8 & 7) != 0 ? -(v8 & 7) & 7 : 0i64;
  v10 = (__int64 *)(v9 + v8);
  v11 = v5 - v9;
  *v10 = v9 | 1;
  v10[1] = (v11 - 32) | 2;
  result = (malloc_chunk **)(v10 + 2);
  *(__int64 *)((char *)v10 + v11 - 24) = 11i64;
  *(__int64 *)((char *)v10 + v11 - 16) = 0i64;
  if ( v10 == (__int64 *)-16i64 )
  {
LABEL_10:
    v13 = (nb + 131136) & 0xFFFFFFFFFFFE0000ui64;
    if ( v13 <= nb )
      return 0i64;
    v14 = GetLastError();
    v15 = VirtualAlloc(NULL, (nb + 131136) & 0xFFFFFFFFFFFE0000ui64, 0x3000u, 4u);
    SetLastError(v14);
    if ( v15 )
      v4 = (__int64)v15;
    if ( v4 == -1 )
      return 0i64;
    v16 = &m->treebins[31];
    v17 = &m->treebins[31];
    if ( m == (malloc_state *)-840i64 )
    {
LABEL_19:
      add_segment_0(m, (char *)v4, (nb + 131136) & 0xFFFFFFFFFFFE0000ui64);
      goto LABEL_20;
    }
    while ( 1 )
    {
      v18 = v17[1];
      v19 = (malloc_chunk *)((char *)v18 + (_QWORD)*v17);
      if ( (malloc_chunk *)v4 == v19 )
        break;
      v17 = (malloc_tree_chunk **)v17[2];
      if ( !v17 )
        goto LABEL_17;
    }
    dv = m->dv;
    if ( dv >= (malloc_chunk *)*v17 && dv < v19 )
    {
      v17[1] = (malloc_tree_chunk *)((char *)v18 + v13);
      init_top_0(m, m->dv, v13 + m->topsize);
LABEL_20:
      topsize = m->topsize;
      if ( nb < topsize )
      {
        v22 = m->dv;
        v23 = topsize - nb;
        m->topsize = v23;
        m->dv = (malloc_chunk *)((char *)v22 + nb);
        *(unsigned __int64 *)((char *)&v22->head + nb) = v23 | 1;
        result = &v22->fd;
        v22->head = nb | 3;
        return result;
      }
      return 0i64;
    }
LABEL_17:
    while ( 1 )
    {
      v20 = (char *)*v16;
      if ( *v16 == (malloc_tree_chunk *)(v4 + v13) )
        break;
      v16 = (malloc_tree_chunk **)v16[2];
      if ( !v16 )
        goto LABEL_19;
    }
    v16[1] = (malloc_tree_chunk *)((char *)v16[1] + v13);
    *v16 = (malloc_tree_chunk *)v4;
    return (malloc_chunk **)prepend_alloc_0(m, (char *)v4, v20, nb);
  }
  return result;
}

/*
==============
lj_alloc_free
==============
*/
void *lj_alloc_free(void *msp, void *ptr)
{
  unsigned __int64 *v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  _QWORD *v6; 
  unsigned __int64 v7; 
  void *result; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 *v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 *v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  _QWORD *v24; 
  unsigned __int64 *v25; 
  _QWORD *v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  _QWORD *v35; 
  __int64 v36; 
  __int64 v37; 
  _QWORD *v38; 
  _QWORD *v39; 
  _QWORD *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  char *v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  unsigned __int64 **v48; 
  int v49; 
  unsigned __int64 *v50; 
  unsigned __int64 *v51; 
  char v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int64 **v55; 

  if ( !ptr )
    return 0i64;
  v3 = (unsigned __int64 *)((char *)ptr - 16);
  v4 = 0i64;
  v5 = *((_QWORD *)ptr - 1) & 0xFFFFFFFFFFFFFFFCui64;
  v6 = (char *)ptr + v5 - 16;
  if ( (*((_QWORD *)ptr - 1) & 1) == 0 )
  {
    v7 = *v3;
    if ( (*v3 & 1) != 0 )
    {
      CALL_MUNMAP((char *)v3 - (v7 & 0xFFFFFFFFFFFFFFFEui64), (v7 & 0xFFFFFFFFFFFFFFFEui64) + v5 + 32);
      return 0i64;
    }
    v5 += v7;
    v3 = (unsigned __int64 *)((char *)v3 - v7);
    if ( v3 == *((unsigned __int64 **)msp + 3) )
    {
      if ( (v6[1] & 3) == 3 )
      {
        *((_QWORD *)msp + 1) = v5;
        v6[1] &= ~1ui64;
        v3[1] = v5 | 1;
        result = NULL;
        *(unsigned __int64 *)((char *)v3 + v5) = v5;
        return result;
      }
    }
    else
    {
      v9 = v7 >> 3;
      if ( v9 < 0x20 )
      {
        v10 = v3[2];
        v11 = v3[3];
        if ( v10 == v11 )
        {
          *(_DWORD *)msp &= ~(1 << v9);
        }
        else
        {
          *(_QWORD *)(v10 + 24) = v11;
          *(_QWORD *)(v11 + 16) = v10;
        }
        goto LABEL_9;
      }
      v21 = (unsigned __int64 *)v3[3];
      v22 = v3[6];
      if ( v21 == v3 )
      {
        v21 = (unsigned __int64 *)v3[5];
        v24 = v3 + 5;
        if ( v21 || (v21 = (unsigned __int64 *)v3[4], v24 = v3 + 4, v21) )
        {
          while ( 1 )
          {
            v25 = (unsigned __int64 *)v21[5];
            v26 = v21 + 5;
            if ( !v25 )
            {
              v25 = (unsigned __int64 *)v21[4];
              v26 = v21 + 4;
              if ( !v25 )
                break;
            }
            v24 = v26;
            v21 = v25;
          }
          *v24 = 0i64;
        }
      }
      else
      {
        v23 = v3[2];
        *(_QWORD *)(v23 + 24) = v21;
        v21[2] = v23;
      }
      if ( v22 )
      {
        v27 = v3[7];
        if ( v3 == *((unsigned __int64 **)msp + v27 + 73) )
        {
          *((_QWORD *)msp + v27 + 73) = v21;
          if ( !v21 )
          {
            *((_DWORD *)msp + 1) &= ~(1 << *((_BYTE *)v3 + 56));
            goto LABEL_9;
          }
        }
        else
        {
          if ( *(unsigned __int64 **)(v22 + 32) == v3 )
            *(_QWORD *)(v22 + 32) = v21;
          else
            *(_QWORD *)(v22 + 40) = v21;
          if ( !v21 )
            goto LABEL_9;
        }
        v21[6] = v22;
        v28 = v3[4];
        if ( v28 )
        {
          v21[4] = v28;
          *(_QWORD *)(v28 + 48) = v21;
        }
        v29 = v3[5];
        if ( v29 )
        {
          v21[5] = v29;
          *(_QWORD *)(v29 + 48) = v21;
        }
      }
    }
  }
LABEL_9:
  v12 = v6[1];
  if ( (v12 & 2) != 0 )
  {
    v6[1] = v12 & 0xFFFFFFFFFFFFFFFEui64;
    v3[1] = v5 | 1;
    *(unsigned __int64 *)((char *)v3 + v5) = v5;
    goto LABEL_84;
  }
  if ( v6 == *((_QWORD **)msp + 4) )
  {
    *((_QWORD *)msp + 2) += v5;
    v13 = *((_QWORD *)msp + 2);
    *((_QWORD *)msp + 4) = v3;
    v3[1] = v13 | 1;
    if ( v3 == *((unsigned __int64 **)msp + 3) )
    {
      *((_QWORD *)msp + 3) = 0i64;
      *((_QWORD *)msp + 1) = 0i64;
    }
    if ( v13 > *((_QWORD *)msp + 5) )
    {
      v14 = *((_QWORD *)msp + 4);
      if ( v14 )
      {
        v15 = *((_QWORD *)msp + 2);
        if ( v15 > 0x40 )
        {
          v16 = (char *)msp + 840;
          v17 = (unsigned __int64 *)((char *)msp + 840);
          v18 = ((v15 + 131007) & 0xFFFFFFFFFFFE0000ui64) - 0x20000;
          while ( v14 < *v17 || v14 >= v17[1] + *v17 )
          {
            v17 = (unsigned __int64 *)v17[2];
            if ( !v17 )
            {
              v17 = NULL;
              break;
            }
          }
          v19 = v17[1];
          if ( v19 >= v18 )
          {
            v20 = *v17;
            while ( (unsigned __int64)v16 < v20 || (unsigned __int64)v16 >= v19 + v20 )
            {
              v16 = (char *)*((_QWORD *)v16 + 2);
              if ( !v16 )
              {
                if ( !(unsigned int)CALL_MUNMAP((void *)(v19 + v20 - v18), v18) )
                {
                  v4 = v18;
                  if ( v18 )
                  {
                    v17[1] -= v18;
                    init_top_0((malloc_state *)msp, *((malloc_chunk **)msp + 4), *((_QWORD *)msp + 2) - v18);
                  }
                }
                break;
              }
            }
          }
        }
        if ( !(v4 + release_unused_segments_0((malloc_state *)msp)) && *((_QWORD *)msp + 2) > *((_QWORD *)msp + 5) )
        {
          *((_QWORD *)msp + 5) = -1i64;
          return 0i64;
        }
      }
    }
    return 0i64;
  }
  if ( v6 == *((_QWORD **)msp + 3) )
  {
    *((_QWORD *)msp + 1) += v5;
    v30 = *((_QWORD *)msp + 1);
    *((_QWORD *)msp + 3) = v3;
    v3[1] = v30 | 1;
    result = NULL;
    *(unsigned __int64 *)((char *)v3 + v30) = v30;
    return result;
  }
  v31 = v12 & 0xFFFFFFFFFFFFFFFCui64;
  v5 += v31;
  v32 = v31 >> 3;
  if ( v32 < 0x20 )
  {
    v33 = v6[2];
    v34 = v6[3];
    if ( v33 == v34 )
    {
      *(_DWORD *)msp &= ~(1 << v32);
    }
    else
    {
      *(_QWORD *)(v33 + 24) = v34;
      *(_QWORD *)(v34 + 16) = v33;
    }
    goto LABEL_81;
  }
  v35 = (_QWORD *)v6[3];
  v36 = v6[6];
  if ( v35 == v6 )
  {
    v35 = (_QWORD *)v6[5];
    v38 = v6 + 5;
    if ( v35 || (v35 = (_QWORD *)v6[4], v38 = v6 + 4, v35) )
    {
      while ( 1 )
      {
        v39 = (_QWORD *)v35[5];
        v40 = v35 + 5;
        if ( !v39 )
        {
          v39 = (_QWORD *)v35[4];
          v40 = v35 + 4;
          if ( !v39 )
            break;
        }
        v38 = v40;
        v35 = v39;
      }
      *v38 = 0i64;
    }
  }
  else
  {
    v37 = v6[2];
    *(_QWORD *)(v37 + 24) = v35;
    v35[2] = v37;
  }
  if ( v36 )
  {
    v41 = v6[7];
    if ( v6 == *((_QWORD **)msp + v41 + 73) )
    {
      *((_QWORD *)msp + v41 + 73) = v35;
      if ( !v35 )
      {
        *((_DWORD *)msp + 1) &= ~(1 << *((_BYTE *)v6 + 56));
        goto LABEL_81;
      }
    }
    else
    {
      if ( *(_QWORD **)(v36 + 32) == v6 )
        *(_QWORD *)(v36 + 32) = v35;
      else
        *(_QWORD *)(v36 + 40) = v35;
      if ( !v35 )
        goto LABEL_81;
    }
    v35[6] = v36;
    v42 = v6[4];
    if ( v42 )
    {
      v35[4] = v42;
      *(_QWORD *)(v42 + 48) = v35;
    }
    v43 = v6[5];
    if ( v43 )
    {
      v35[5] = v43;
      *(_QWORD *)(v43 + 48) = v35;
    }
  }
LABEL_81:
  v3[1] = v5 | 1;
  *(unsigned __int64 *)((char *)v3 + v5) = v5;
  if ( v3 == *((unsigned __int64 **)msp + 3) )
  {
    *((_QWORD *)msp + 1) = v5;
    return 0i64;
  }
LABEL_84:
  v44 = v5 >> 3;
  if ( v5 >> 3 >= 0x20 )
  {
    v46 = v5 >> 8;
    if ( (unsigned int)(v5 >> 8) )
    {
      if ( (unsigned int)v46 <= 0xFFFF )
      {
        _BitScanReverse((unsigned int *)&v46, v46);
        v47 = (unsigned int)(2 * v46) + ((v5 >> ((unsigned __int8)v46 + 7)) & 1);
      }
      else
      {
        v47 = 31i64;
      }
    }
    else
    {
      v47 = 0i64;
    }
    v3[7] = v47;
    v48 = (unsigned __int64 **)((char *)msp + 8 * v47 + 584);
    v3[5] = 0i64;
    v3[4] = 0i64;
    v49 = *((_DWORD *)msp + 1);
    if ( ((1 << v47) & v49) != 0 )
    {
      v50 = *v48;
      if ( v47 == 31 )
        v52 = 0;
      else
        v52 = 57 - (v47 >> 1);
      v53 = v5 << v52;
      if ( (v50[1] & 0xFFFFFFFFFFFFFFFCui64) == v5 )
      {
LABEL_102:
        v51 = (unsigned __int64 *)v50[2];
        v48 = NULL;
        v51[3] = (unsigned __int64)v3;
        v50[2] = (unsigned __int64)v3;
      }
      else
      {
        while ( 1 )
        {
          v48 = (unsigned __int64 **)v50;
          v54 = v53 >> 63;
          v53 *= 2i64;
          v55 = (unsigned __int64 **)&v50[v54 + 4];
          v50 = *v55;
          if ( !*v55 )
            break;
          if ( (v50[1] & 0xFFFFFFFFFFFFFFFCui64) == v5 )
            goto LABEL_102;
        }
        *v55 = v3;
        v51 = v3;
        v50 = v3;
      }
    }
    else
    {
      v50 = v3;
      *((_DWORD *)msp + 1) = v49 | (1 << v47);
      v51 = v3;
      *v48 = v3;
    }
    v3[6] = (unsigned __int64)v48;
    v3[3] = (unsigned __int64)v50;
    v3[2] = (unsigned __int64)v51;
    if ( (*((_QWORD *)msp + 6))-- == 1i64 )
      release_unused_segments_0((malloc_state *)msp);
    return 0i64;
  }
  v45 = (char *)msp + 16 * v44 + 56;
  if ( ((1 << v44) & *(_DWORD *)msp) != 0 )
    v45 = (char *)*((_QWORD *)msp + 2 * v44 + 9);
  else
    *(_DWORD *)msp |= 1 << v44;
  *((_QWORD *)msp + 2 * v44 + 9) = v3;
  *((_QWORD *)v45 + 3) = v3;
  v3[2] = (unsigned __int64)v45;
  result = NULL;
  v3[3] = (unsigned __int64)msp + 16 * v44 + 56;
  return result;
}

/*
==============
lj_alloc_malloc
==============
*/
malloc_chunk **lj_alloc_malloc(void *msp, unsigned __int64 nsize)
{
  unsigned __int64 v3; 
  int v4; 
  unsigned __int64 v5; 
  int v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  malloc_chunk **result; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  char *v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  char *v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  unsigned __int64 v31; 

  if ( nsize > 0xF0 )
  {
    if ( nsize < 0xFFFFFFFFFFFFFF80ui64 )
    {
      v3 = (nsize + 15) & 0xFFFFFFFFFFFFFFF8ui64;
      if ( *((_DWORD *)msp + 1) )
      {
        result = (malloc_chunk **)tmalloc_large_0((malloc_state *)msp, (nsize + 15) & 0xFFFFFFFFFFFFFFF8ui64);
        if ( result )
          return result;
      }
    }
    else
    {
      v3 = -1i64;
    }
    goto LABEL_30;
  }
  if ( nsize >= 0x17 )
    v3 = (nsize + 15) & 0xFFFFFFFFFFFFFFF8ui64;
  else
    v3 = 32i64;
  v4 = *(_DWORD *)msp;
  v5 = v3 >> 3;
  v6 = *(_DWORD *)msp >> (v3 >> 3);
  if ( (v6 & 3) != 0 )
  {
    v7 = ((v6 & 1) == 0) + v5;
    v8 = *((_QWORD *)msp + 2 * v7 + 9);
    v9 = (char *)msp + 16 * v7 + 56;
    v10 = *(_QWORD *)(v8 + 16);
    if ( v9 == (char *)v10 )
    {
      *(_DWORD *)msp = v4 & ~(1 << v7);
    }
    else
    {
      *((_QWORD *)msp + 2 * v7 + 9) = v10;
      *(_QWORD *)(v10 + 24) = v9;
    }
    result = (malloc_chunk **)(v8 + 16);
    *(_QWORD *)(v8 + 8) = (8 * v7) | 3;
    *(_QWORD *)(8 * v7 + v8 + 8) |= 1ui64;
    return result;
  }
  if ( v3 <= *((_QWORD *)msp + 1) )
  {
LABEL_30:
    v25 = *((_QWORD *)msp + 1);
    if ( v3 > v25 )
    {
      v29 = *((_QWORD *)msp + 2);
      if ( v3 >= v29 )
      {
        return alloc_sys((malloc_state *)msp, v3);
      }
      else
      {
        v30 = *((_QWORD *)msp + 4);
        v31 = v29 - v3;
        *((_QWORD *)msp + 2) = v31;
        *((_QWORD *)msp + 4) = v30 + v3;
        *(_QWORD *)(v30 + v3 + 8) = v31 | 1;
        result = (malloc_chunk **)(v30 + 16);
        *(_QWORD *)(v30 + 8) = v3 | 3;
      }
    }
    else
    {
      v26 = *((_QWORD *)msp + 3);
      v27 = v25 - v3;
      if ( v25 - v3 < 0x20 )
      {
        *((_QWORD *)msp + 1) = 0i64;
        *((_QWORD *)msp + 3) = 0i64;
        *(_QWORD *)(v26 + 8) = v25 | 3;
        result = (malloc_chunk **)(v26 + 16);
        *(_QWORD *)(v25 + v26 + 8) |= 1ui64;
      }
      else
      {
        v28 = v26 + v3;
        *((_QWORD *)msp + 1) = v27;
        *((_QWORD *)msp + 3) = v26 + v3;
        *(_QWORD *)(v28 + 8) = v27 | 1;
        *(_QWORD *)(v28 + v27) = v27;
        result = (malloc_chunk **)(v26 + 16);
        *(_QWORD *)(v26 + 8) = v3 | 3;
      }
    }
    return result;
  }
  if ( !v6 )
  {
    if ( *((_DWORD *)msp + 1) )
    {
      result = (malloc_chunk **)tmalloc_small_0((malloc_state *)msp, v3);
      if ( result )
        return result;
    }
    goto LABEL_30;
  }
  _BitScanForward((unsigned int *)&v12, (v6 << v5) & ((2 << v5) | -(2 << v5)));
  v13 = (unsigned int)v12;
  v12 *= 2i64;
  v14 = *((_QWORD *)msp + v12 + 9);
  v15 = (char *)msp + 8 * v12 + 56;
  v16 = *(_QWORD *)(v14 + 16);
  if ( v15 == (char *)v16 )
  {
    *(_DWORD *)msp = v4 & ~(1 << v13);
  }
  else
  {
    *((_QWORD *)v15 + 2) = v16;
    *(_QWORD *)(v16 + 24) = v15;
  }
  v17 = 8 * v13 - v3;
  if ( v17 >= 0x20 )
  {
    v19 = v3;
    v20 = v14 + v3;
    *(_QWORD *)(v14 + 8) = v19 | 3;
    *(_QWORD *)(v20 + 8) = v17 | 1;
    *(_QWORD *)(v20 + v17) = v17;
    v21 = *((_QWORD *)msp + 1);
    if ( v21 )
    {
      v22 = *((_QWORD *)msp + 3);
      v23 = v21 >> 3;
      v24 = (char *)msp + 16 * v23 + 56;
      if ( ((1 << v23) & *(_DWORD *)msp) != 0 )
        v24 = (char *)*((_QWORD *)msp + 2 * v23 + 9);
      else
        *(_DWORD *)msp |= 1 << v23;
      *((_QWORD *)msp + 2 * v23 + 9) = v22;
      *((_QWORD *)v24 + 3) = v22;
      *(_QWORD *)(v22 + 16) = v24;
      *(_QWORD *)(v22 + 24) = (char *)msp + 16 * v23 + 56;
    }
    result = (malloc_chunk **)(v14 + 16);
    *((_QWORD *)msp + 1) = v17;
    *((_QWORD *)msp + 3) = v20;
  }
  else
  {
    v18 = 8 * v13;
    *(_QWORD *)(v14 + 8) = v18 | 3;
    result = (malloc_chunk **)(v14 + 16);
    *(_QWORD *)(v18 + v14 + 8) |= 1ui64;
  }
  return result;
}

/*
==============
lj_alloc_realloc
==============
*/
malloc_chunk **lj_alloc_realloc(void *msp, void *ptr, unsigned __int64 nsize)
{
  unsigned __int64 v3; 
  __int64 v7; 
  unsigned __int64 v8; 
  char *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  malloc_chunk **v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  char *v16; 
  __int64 v17; 
  char *v18; 
  unsigned __int64 v19; 

  v3 = nsize;
  if ( nsize >= 0xFFFFFFFFFFFFFF80ui64 )
    return 0i64;
  v7 = *((_QWORD *)ptr - 1);
  v8 = v7 & 0xFFFFFFFFFFFFFFFCui64;
  v9 = (char *)ptr + (v7 & 0xFFFFFFFFFFFFFFFCui64) - 16;
  if ( nsize >= 0x17 )
    v10 = (nsize + 15) & 0xFFFFFFFFFFFFFFF8ui64;
  else
    v10 = 32i64;
  v11 = v7 & 1;
  if ( v11 || (*((char *)ptr - 16) & 1) == 0 )
  {
    if ( v8 < v10 )
    {
      if ( v9 != *((char **)msp + 4) )
        goto LABEL_11;
      v17 = *((_QWORD *)msp + 2);
      if ( v17 + v8 <= v10 )
        goto LABEL_11;
      v18 = (char *)ptr + v10 - 16;
      v19 = v8 + v17 - v10;
      *((_QWORD *)ptr - 1) = v10 | v11 | 2;
      *((_QWORD *)v18 + 1) = v19 | 1;
      *((_QWORD *)msp + 4) = v18;
      *((_QWORD *)msp + 2) = v19;
    }
    else
    {
      v15 = v8 - v10;
      if ( v15 >= 0x20 )
      {
        v16 = (char *)ptr + v10 - 16;
        *((_QWORD *)ptr - 1) = v10 | v11 | 2;
        *((_QWORD *)v16 + 1) = v15 | 3;
        *(_QWORD *)&v16[v15 + 8] |= 1ui64;
        lj_alloc_free(msp, v16 + 16);
        return (malloc_chunk **)ptr;
      }
    }
    return (malloc_chunk **)ptr;
  }
  if ( (v10 & 0xFFFFFFFFFFFFFFF8ui64) >= 0x100 && v8 >= v10 + 8 && v8 - v10 <= 0x10000 )
    return (malloc_chunk **)ptr;
LABEL_11:
  v12 = lj_alloc_malloc(msp, v3);
  if ( v12 )
  {
    if ( (*((char *)ptr - 8) & 1) != 0 || (v13 = 16i64, (*((char *)ptr - 16) & 1) == 0) )
      v13 = 8i64;
    v14 = v8 - v13;
    if ( v14 < v3 )
      v3 = v14;
    memcpy_0(v12, ptr, v3);
    lj_alloc_free(msp, ptr);
  }
  return v12;
}

