/*
==============
_tr_stored_block
==============
*/

void __fastcall _tr_stored_block(internal_state *s, char *buf, unsigned int stored_len, int last)
{
  ?_tr_stored_block@@YAXPEAUinternal_state@@PEADKH@Z(s, buf, stored_len, last);
}

/*
==============
_tr_init
==============
*/

void __fastcall _tr_init(internal_state *s)
{
  ?_tr_init@@YAXPEAUinternal_state@@@Z(s);
}

/*
==============
_tr_tally
==============
*/

int __fastcall _tr_tally(internal_state *s, unsigned int dist, unsigned int lc)
{
  return ?_tr_tally@@YAHPEAUinternal_state@@II@Z(s, dist, lc);
}

/*
==============
_tr_flush_bits
==============
*/

void __fastcall _tr_flush_bits(internal_state *s)
{
  ?_tr_flush_bits@@YAXPEAUinternal_state@@@Z(s);
}

/*
==============
_tr_flush_block
==============
*/

void __fastcall _tr_flush_block(internal_state *s, char *buf, unsigned int stored_len, int last)
{
  ?_tr_flush_block@@YAXPEAUinternal_state@@PEADKH@Z(s, buf, stored_len, last);
}

/*
==============
_tr_align
==============
*/

void __fastcall _tr_align(internal_state *s)
{
  ?_tr_align@@YAXPEAUinternal_state@@@Z(s);
}

/*
==============
_tr_align
==============
*/
void _tr_align(internal_state *s)
{
  int dummy; 
  __int16 v3; 
  __int64 v4; 
  __int64 v5; 
  __int16 v6; 
  int v7; 
  __int16 v8; 

  dummy = s[1477].dummy;
  v3 = LOWORD(s[1476].dummy) | (2 << dummy);
  if ( dummy <= 13 )
  {
    v6 = LOWORD(s[1476].dummy) | (2 << dummy);
    s[1477].dummy = dummy + 3;
  }
  else
  {
    v4 = (unsigned int)s[10].dummy;
    v5 = *(_QWORD *)&s[4].dummy;
    LOWORD(s[1476].dummy) = v3;
    *(_BYTE *)(v4 + v5) = v3;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    LOWORD(v5) = s[1477].dummy;
    ++s[10].dummy;
    s[1477].dummy -= 13;
    v6 = 2u >> (16 - v5);
  }
  LOWORD(s[1476].dummy) = v6;
  v7 = s[1477].dummy;
  if ( v7 <= 9 )
  {
    s[1477].dummy = v7 + 7;
    v8 = v6;
  }
  else
  {
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = v6;
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    s[1477].dummy -= 9;
    v8 = 0;
  }
  LOWORD(s[1476].dummy) = v8;
  bi_flush(s);
}

/*
==============
_tr_flush_bits
==============
*/

void __fastcall _tr_flush_bits(internal_state *s)
{
  bi_flush(s);
}

/*
==============
_tr_flush_block
==============
*/
void _tr_flush_block(internal_state *s, char *buf, unsigned int stored_len, int last)
{
  int v4; 
  __int64 v9; 
  unsigned int v10; 
  internal_state *v11; 
  __int64 v12; 
  __int64 v13; 
  internal_state *v14; 
  internal_state *v15; 
  internal_state *v16; 
  int v17; 
  __int64 v18; 
  int dummy; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  unsigned __int16 v23; 
  __int16 v24; 
  __int64 v25; 
  __int16 v26; 
  __int64 v27; 
  __int16 v28; 
  __int16 v29; 
  const ct_data_s *v30; 
  const ct_data_s *v31; 
  int v32; 
  unsigned __int16 v33; 
  __int16 v34; 
  __int64 v35; 
  __int16 v36; 
  __int64 v37; 
  __int16 v38; 
  __int16 v39; 
  internal_state *v40; 

  v4 = 0;
  if ( s[43].dummy <= 0 )
  {
    v20 = stored_len + 5;
    v21 = stored_len + 5;
  }
  else
  {
    v9 = *(_QWORD *)&s->dummy;
    if ( *(_DWORD *)(*(_QWORD *)&s->dummy + 72i64) == 2 )
    {
      v10 = -201342849;
      v11 = s + 47;
      v12 = 0i64;
      while ( (v10 & 1) == 0 || !LOWORD(v11->dummy) )
      {
        ++v12;
        v10 >>= 1;
        ++v11;
        if ( v12 > 31 )
        {
          if ( !LOWORD(s[56].dummy) && !LOWORD(s[57].dummy) && !LOWORD(s[60].dummy) )
          {
            v13 = 32i64;
            v14 = s + 79;
            while ( !LOWORD(v14->dummy) )
            {
              ++v13;
              ++v14;
              if ( v13 >= 256 )
                goto LABEL_15;
            }
          }
          v4 = 1;
          break;
        }
      }
LABEL_15:
      *(_DWORD *)(v9 + 72) = v4;
    }
    build_tree(s, (tree_desc_s *)&s[720]);
    build_tree(s, (tree_desc_s *)&s[726]);
    scan_tree(s, (ct_data_s *)&s[47], s[722].dummy);
    scan_tree(v15, (ct_data_s *)&s[620], s[728].dummy);
    build_tree(v16, (tree_desc_s *)&s[732]);
    v17 = 18;
    v18 = 18i64;
    while ( !HIWORD(s[bl_order[v18] + 681].dummy) )
    {
      if ( HIWORD(s[bl_order[v18 - 1] + 681].dummy) )
      {
        --v17;
        break;
      }
      if ( HIWORD(s[bl_order[v18 - 2] + 681].dummy) )
      {
        v17 -= 2;
        break;
      }
      if ( HIWORD(s[bl_order[v18 - 3] + 681].dummy) )
      {
        v17 -= 3;
        break;
      }
      v18 -= 4i64;
      v17 -= 4;
      if ( v18 < 3 )
        break;
    }
    dummy = s[1473].dummy;
    s[1472].dummy += 3 * v17 + 17;
    v4 = v17;
    v20 = (unsigned int)(dummy + 10) >> 3;
    v21 = v20;
    if ( v20 > (unsigned int)(s[1472].dummy + 10) >> 3 )
      v21 = (unsigned int)(s[1472].dummy + 10) >> 3;
  }
  if ( stored_len + 4 <= v21 && buf )
  {
    _tr_stored_block(s, buf, stored_len, last);
  }
  else
  {
    if ( s[44].dummy == 4 || v20 == v21 )
    {
      v32 = s[1477].dummy;
      v33 = last + 2;
      v34 = s[1476].dummy;
      if ( v32 <= 13 )
      {
        s[1477].dummy = v32 + 3;
        v39 = v34 | (v33 << v32);
      }
      else
      {
        v35 = *(_QWORD *)&s[4].dummy;
        v36 = v33 << v32;
        v37 = (unsigned int)s[10].dummy;
        v38 = v34 | v36;
        LOWORD(s[1476].dummy) = v38;
        *(_BYTE *)(v37 + v35) = v38;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOWORD(v35) = s[1477].dummy;
        ++s[10].dummy;
        s[1477].dummy -= 13;
        v39 = v33 >> (16 - v35);
      }
      LOWORD(s[1476].dummy) = v39;
      v31 = static_ltree;
      v30 = static_dtree;
    }
    else
    {
      v22 = s[1477].dummy;
      v23 = last + 4;
      v24 = s[1476].dummy;
      if ( v22 <= 13 )
      {
        s[1477].dummy = v22 + 3;
        v29 = v24 | (v23 << v22);
      }
      else
      {
        v25 = *(_QWORD *)&s[4].dummy;
        v26 = v23 << v22;
        v27 = (unsigned int)s[10].dummy;
        v28 = v24 | v26;
        LOWORD(s[1476].dummy) = v28;
        *(_BYTE *)(v27 + v25) = v28;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOWORD(v25) = s[1477].dummy;
        ++s[10].dummy;
        s[1477].dummy -= 13;
        v29 = v23 >> (16 - v25);
      }
      LOWORD(s[1476].dummy) = v29;
      send_all_trees(s, s[722].dummy + 1, s[728].dummy + 1, v4 + 1);
      v30 = (const ct_data_s *)&s[620];
      v31 = (const ct_data_s *)&s[47];
    }
    compress_block(s, v31, v30);
  }
  init_block(s);
  if ( last )
    bi_windup(v40);
}

/*
==============
_tr_init
==============
*/
void _tr_init(internal_state *s)
{
  *(_QWORD *)&s[720].dummy = s + 47;
  *(_QWORD *)&s[724].dummy = &static_l_desc;
  *(_QWORD *)&s[726].dummy = s + 620;
  *(_QWORD *)&s[730].dummy = &static_d_desc;
  *(_QWORD *)&s[732].dummy = s + 681;
  *(_QWORD *)&s[736].dummy = &static_bl_desc;
  LOWORD(s[1476].dummy) = 0;
  s[1477].dummy = 0;
  init_block(s);
}

/*
==============
_tr_stored_block
==============
*/
void _tr_stored_block(internal_state *s, char *buf, unsigned int stored_len, int last)
{
  int dummy; 
  __int16 v8; 
  __int64 v9; 
  __int16 v10; 
  __int64 v11; 
  __int16 v12; 
  __int16 v13; 
  int v14; 
  char v15; 
  __int64 v16; 
  unsigned int i; 
  char v18; 

  dummy = s[1477].dummy;
  v8 = s[1476].dummy;
  if ( dummy <= 13 )
  {
    s[1477].dummy = dummy + 3;
    v13 = v8 | ((_WORD)last << dummy);
  }
  else
  {
    v9 = (unsigned int)s[10].dummy;
    v10 = (_WORD)last << s[1477].dummy;
    v11 = *(_QWORD *)&s[4].dummy;
    v12 = v8 | v10;
    LOWORD(s[1476].dummy) = v12;
    *(_BYTE *)(v9 + v11) = v12;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    LOWORD(v9) = s[1477].dummy;
    ++s[10].dummy;
    s[1477].dummy -= 13;
    v13 = (unsigned __int16)last >> (16 - v9);
  }
  LOWORD(s[1476].dummy) = v13;
  v14 = s[1477].dummy;
  if ( v14 <= 8 )
  {
    if ( v14 <= 0 )
      goto LABEL_9;
    v15 = s[1476].dummy;
  }
  else
  {
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = v13;
    v15 = BYTE1(s[1476].dummy);
  }
  *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = v15;
LABEL_9:
  v16 = (unsigned int)s[10].dummy;
  LOWORD(s[1476].dummy) = 0;
  s[1477].dummy = 0;
  *(_BYTE *)(v16 + *(_QWORD *)&s[4].dummy) = stored_len;
  *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(stored_len);
  *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = ~(_BYTE)stored_len;
  *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = (unsigned __int16)~(_WORD)stored_len >> 8;
  for ( i = ++s[10].dummy; stored_len; --stored_len )
  {
    v18 = *buf++;
    *(_BYTE *)(i + *(_QWORD *)&s[4].dummy) = v18;
    i = ++s[10].dummy;
  }
}

/*
==============
_tr_tally
==============
*/
_BOOL8 _tr_tally(internal_state *s, unsigned int dist, unsigned int lc)
{
  __int64 v3; 

  *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = dist;
  *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = lc;
  if ( dist )
  {
    ++s[1474].dummy;
    v3 = dist - 1;
    ++LOWORD(s[_length_code[lc] + 304].dummy);
    if ( (unsigned int)v3 >= 0x100 )
      v3 = ((unsigned int)v3 >> 7) + 256;
    ++LOWORD(s[_dist_code[v3] + 620].dummy);
  }
  else
  {
    ++LOWORD(s[lc + 47].dummy);
  }
  return s[1469].dummy == s[1468].dummy - 1;
}

/*
==============
bi_flush
==============
*/
void bi_flush(internal_state *s)
{
  int dummy; 
  __int16 v2; 

  dummy = s[1477].dummy;
  if ( dummy == 16 )
  {
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = s[1476].dummy;
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    s[1477].dummy = 0;
    LOWORD(s[1476].dummy) = 0;
  }
  else if ( dummy >= 8 )
  {
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = s[1476].dummy;
    v2 = BYTE1(s[1476].dummy);
    s[1477].dummy -= 8;
    LOWORD(s[1476].dummy) = v2;
  }
}

/*
==============
bi_windup
==============
*/
void bi_windup(internal_state *s)
{
  int dummy; 
  char v2; 

  dummy = s[1477].dummy;
  if ( dummy > 8 )
  {
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = s[1476].dummy;
    v2 = BYTE1(s[1476].dummy);
LABEL_5:
    *(_BYTE *)((unsigned int)s[10].dummy++ + *(_QWORD *)&s[4].dummy) = v2;
    goto LABEL_6;
  }
  if ( dummy > 0 )
  {
    v2 = s[1476].dummy;
    goto LABEL_5;
  }
LABEL_6:
  LOWORD(s[1476].dummy) = 0;
  s[1477].dummy = 0;
}

/*
==============
build_tree
==============
*/
void build_tree(internal_state *s, tree_desc_s *desc)
{
  static_tree_desc_s *stat_desc; 
  ct_data_s *dyn_tree; 
  int v4; 
  int v7; 
  __int64 v8; 
  __int64 elems; 
  const ct_data_s *static_tree; 
  __int64 dummy; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 v21; 
  int v22; 
  internal_state *v23; 
  __int64 v24; 
  int v25; 

  stat_desc = desc->stat_desc;
  dyn_tree = desc->dyn_tree;
  v4 = -1;
  v7 = 0;
  v8 = 0i64;
  elems = stat_desc->elems;
  static_tree = stat_desc->static_tree;
  s[1319].dummy = 0;
  s[1320].dummy = 573;
  if ( (int)elems <= 0 )
    goto LABEL_23;
  do
  {
    if ( dyn_tree[v8].fc.freq )
    {
      dummy = s[1319].dummy;
      v4 = v7;
      s[1319].dummy = dummy + 1;
      s[dummy + 747].dummy = v7;
      *((_BYTE *)&s[1321].dummy + v8) = 0;
    }
    else
    {
      dyn_tree[v8].dl.dad = 0;
    }
    ++v7;
    ++v8;
  }
  while ( v8 < elems );
  LODWORD(v8) = s[1319];
  if ( (int)v8 < 2 )
  {
LABEL_23:
    do
    {
      v12 = v4 + 1;
      v13 = v4 + 1;
      if ( v4 >= 2 )
        v12 = v4;
      if ( v4 >= 2 )
        v13 = 0;
      v4 = v12;
      s[1319].dummy = v8 + 1;
      s[(int)v8 + 747].dummy = v13;
      dyn_tree[v13].fc.freq = 1;
      *((_BYTE *)&s[1321].dummy + v13) = 0;
      --s[1472].dummy;
      if ( static_tree )
        s[1473].dummy -= static_tree[v13].dl.dad;
      LODWORD(v8) = s[1319];
    }
    while ( (int)v8 < 2 );
  }
  desc->max_code = v4;
  v14 = s[1319].dummy;
  v15 = v14 / 2;
  if ( v14 / 2 >= 1 )
  {
    do
      pqdownheap(s, dyn_tree, v15--);
    while ( v15 >= 1 );
    v14 = s[1319].dummy;
  }
  do
  {
    v16 = s[747].dummy;
    v17 = s[v14 + 746].dummy;
    s[1319].dummy = v14 - 1;
    s[747].dummy = v17;
    pqdownheap(s, dyn_tree, 1);
    v18 = s[1320].dummy;
    v19 = s[747].dummy;
    s[1320].dummy = v18 - 1;
    s[v18 + 745].dummy = v16;
    v20 = s[1320].dummy;
    s[1320].dummy = v20 - 1;
    s[v20 + 745].dummy = v19;
    dyn_tree[(int)elems].fc.freq = dyn_tree[v16].fc.freq + dyn_tree[v19].fc.freq;
    v21 = *((_BYTE *)&s[1321].dummy + v16);
    if ( v21 < *((_BYTE *)&s[1321].dummy + v19) )
      v21 = *((_BYTE *)&s[1321].dummy + v19);
    v22 = elems;
    *((_BYTE *)&s[1321].dummy + (int)elems) = v21 + 1;
    dyn_tree[v19].dl.dad = elems;
    dyn_tree[v16].dl.dad = elems;
    LODWORD(elems) = elems + 1;
    s[747].dummy = v22;
    pqdownheap(s, dyn_tree, 1);
    v14 = s[1319].dummy;
  }
  while ( v14 >= 2 );
  v24 = s[1320].dummy;
  v25 = s[747].dummy;
  s[1320].dummy = v24 - 1;
  s[v24 + 745].dummy = v25;
  gen_bitlen(v23, desc);
  gen_codes(dyn_tree, v4, (unsigned __int16 *)&s[738]);
}

/*
==============
compress_block
==============
*/
void compress_block(internal_state *s, const ct_data_s *ltree, const ct_data_s *dtree)
{
  __int64 v5; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  ct_data_s::<unnamed_type_fc> v11; 
  __int16 v12; 
  __int64 v13; 
  __int16 v14; 
  __int64 v15; 
  __int16 v16; 
  int v17; 
  __int16 v18; 
  int dummy; 
  __int64 v20; 
  __int64 v21; 
  ct_data_s::<unnamed_type_fc> v22; 
  int dad; 
  __int16 v24; 
  __int64 v25; 
  __int64 v26; 
  __int16 v27; 
  int v28; 
  int v29; 
  int v30; 
  char v31; 
  __int16 v32; 
  __int64 v33; 
  __int16 v34; 
  __int64 v35; 
  __int16 v36; 
  __int16 v37; 
  __int64 v38; 
  unsigned __int8 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  ct_data_s::<unnamed_type_fc> v43; 
  int v44; 
  __int16 v45; 
  __int64 v46; 
  __int64 v47; 
  __int16 v48; 
  int v49; 
  int v50; 
  int v51; 
  char v52; 
  __int16 v53; 
  __int64 v54; 
  __int16 v55; 
  __int64 v56; 
  __int16 v57; 
  __int16 v58; 
  ct_data_s::<unnamed_type_fc> v59; 
  int v60; 
  int v61; 
  __int16 v62; 
  __int64 v63; 
  __int64 v64; 
  char v65; 

  v5 = 0i64;
  while ( (unsigned int)v5 < s[1469].dummy )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)&s[1470].dummy + 2 * v5);
    v8 = *(unsigned __int8 *)(v5 + *(_QWORD *)&s[1466].dummy);
    v5 = (unsigned int)(v5 + 1);
    if ( v7 )
    {
      dummy = s[1477].dummy;
      v20 = _length_code[v8];
      v21 = (unsigned int)(v20 + 257);
      v22.freq = (unsigned __int16)ltree[v21].fc;
      dad = ltree[v21].dl.dad;
      v24 = LOWORD(s[1476].dummy) | (v22.freq << dummy);
      if ( dummy <= 16 - dad )
      {
        v27 = LOWORD(s[1476].dummy) | (v22.freq << s[1477].dummy);
        v28 = dummy + dad;
      }
      else
      {
        v25 = (unsigned int)s[10].dummy;
        v26 = *(_QWORD *)&s[4].dummy;
        LOWORD(s[1476].dummy) = v24;
        *(_BYTE *)(v25 + v26) = v24;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOBYTE(v26) = 16 - LOBYTE(s[1477].dummy);
        ++s[10].dummy;
        v27 = v22.freq >> v26;
        v28 = dad + s[1477].dummy - 16;
      }
      s[1477].dummy = v28;
      LOWORD(s[1476].dummy) = v27;
      v29 = extra_lbits[v20];
      if ( v29 )
      {
        v30 = v8 - base_length[v20];
        v31 = v28;
        v32 = s[1476].dummy;
        if ( v28 <= 16 - v29 )
        {
          v37 = v32 | ((_WORD)v30 << v28);
          s[1477].dummy = v29 + v28;
        }
        else
        {
          v33 = (unsigned int)s[10].dummy;
          v34 = (_WORD)v30 << v31;
          v35 = *(_QWORD *)&s[4].dummy;
          v36 = v32 | v34;
          LOWORD(s[1476].dummy) = v36;
          *(_BYTE *)(v33 + v35) = v36;
          *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
          LOBYTE(v35) = 16 - LOBYTE(s[1477].dummy);
          ++s[10].dummy;
          v37 = (unsigned __int16)v30 >> v35;
          s[1477].dummy += v29 - 16;
        }
        LOWORD(s[1476].dummy) = v37;
      }
      v38 = (unsigned int)(v7 - 1);
      if ( (unsigned int)v38 >= 0x100 )
        v39 = _dist_code[((unsigned int)v38 >> 7) + 256];
      else
        v39 = _dist_code[v38];
      v40 = v39;
      v41 = s[1477].dummy;
      v42 = v40;
      v43.freq = (unsigned __int16)dtree[v40].fc;
      v44 = dtree[v40].dl.dad;
      v45 = LOWORD(s[1476].dummy) | (v43.freq << v41);
      if ( v41 <= 16 - v44 )
      {
        v48 = LOWORD(s[1476].dummy) | (v43.freq << s[1477].dummy);
        v49 = v44 + v41;
      }
      else
      {
        v46 = (unsigned int)s[10].dummy;
        v47 = *(_QWORD *)&s[4].dummy;
        LOWORD(s[1476].dummy) = v45;
        *(_BYTE *)(v46 + v47) = v45;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOBYTE(v47) = 16 - LOBYTE(s[1477].dummy);
        ++s[10].dummy;
        v48 = v43.freq >> v47;
        v49 = v44 + s[1477].dummy - 16;
      }
      s[1477].dummy = v49;
      LOWORD(s[1476].dummy) = v48;
      v50 = extra_dbits[v42];
      if ( v50 )
      {
        v51 = v38 - base_dist[v42];
        v52 = v49;
        v53 = s[1476].dummy;
        if ( v49 <= 16 - v50 )
        {
          v58 = v53 | ((_WORD)v51 << v49);
          s[1477].dummy = v50 + v49;
        }
        else
        {
          v54 = (unsigned int)s[10].dummy;
          v55 = (_WORD)v51 << v52;
          v56 = *(_QWORD *)&s[4].dummy;
          v57 = v53 | v55;
          LOWORD(s[1476].dummy) = v57;
          *(_BYTE *)(v54 + v56) = v57;
          *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
          LOBYTE(v56) = 16 - LOBYTE(s[1477].dummy);
          ++s[10].dummy;
          v58 = (unsigned __int16)v51 >> v56;
          s[1477].dummy += v50 - 16;
        }
        LOWORD(s[1476].dummy) = v58;
      }
    }
    else
    {
      v9 = ltree[v8].dl.dad;
      v10 = s[1477].dummy;
      v11.freq = (unsigned __int16)ltree[v8].fc;
      v12 = s[1476].dummy;
      if ( v10 <= 16 - v9 )
      {
        v17 = v10 + v9;
        v18 = v12 | (v11.freq << v10);
      }
      else
      {
        v13 = (unsigned int)s[10].dummy;
        v14 = v11.freq << v10;
        v15 = *(_QWORD *)&s[4].dummy;
        v16 = v12 | v14;
        LOWORD(s[1476].dummy) = v16;
        *(_BYTE *)(v13 + v15) = v16;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LODWORD(v15) = s[1477];
        ++s[10].dummy;
        v17 = v9 + v15 - 16;
        v18 = v11.freq >> (16 - LOBYTE(s[1477].dummy));
      }
      LOWORD(s[1476].dummy) = v18;
      s[1477].dummy = v17;
    }
  }
  v59.freq = (unsigned __int16)ltree[256].fc;
  v60 = s[1477].dummy;
  v61 = ltree[256].dl.dad;
  v62 = LOWORD(s[1476].dummy) | (v59.freq << v60);
  if ( v60 <= 16 - v61 )
  {
    s[1477].dummy = v60 + v61;
    LOWORD(s[1476].dummy) = v62;
  }
  else
  {
    v63 = (unsigned int)s[10].dummy;
    v64 = *(_QWORD *)&s[4].dummy;
    LOWORD(s[1476].dummy) = v62;
    *(_BYTE *)(v63 + v64) = v62;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    v65 = 16 - LOBYTE(s[1477].dummy);
    ++s[10].dummy;
    s[1477].dummy = v61 + s[1477].dummy - 16;
    LOWORD(s[1476].dummy) = v59.freq >> v65;
  }
}

/*
==============
gen_bitlen
==============
*/
void gen_bitlen(internal_state *s, tree_desc_s *desc)
{
  static_tree_desc_s *stat_desc; 
  internal_state *v3; 
  ct_data_s *dyn_tree; 
  int max_code; 
  __int64 v7; 
  const ct_data_s *static_tree; 
  int v9; 
  const int *extra_bits; 
  int extra_base; 
  __int64 max_length; 
  int v13; 
  __int64 v14; 
  internal_state *v15; 
  __int64 dummy; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int freq; 
  int i; 
  __int64 v24; 
  int v25; 
  internal_state *v26; 
  __int64 v27; 
  ct_data_s *v28; 
  int dad; 

  stat_desc = desc->stat_desc;
  v3 = s + 738;
  dyn_tree = desc->dyn_tree;
  max_code = desc->max_code;
  v7 = 16i64;
  static_tree = stat_desc->static_tree;
  v9 = 0;
  extra_bits = stat_desc->extra_bits;
  extra_base = stat_desc->extra_base;
  max_length = stat_desc->max_length;
  while ( v7 )
  {
    LOWORD(v3->dummy) = 0;
    v3 = (internal_state *)((char *)v3 + 2);
    --v7;
  }
  dyn_tree[s[s[1320].dummy + 746].dummy].dl.dad = 0;
  v13 = s[1320].dummy + 1;
  if ( v13 < 573i64 )
  {
    v14 = 573i64 - v13;
    v15 = &s[v13 + 746];
    do
    {
      dummy = v15->dummy;
      v17 = max_length;
      v18 = dummy;
      v19 = v9 + 1;
      v20 = dyn_tree[dyn_tree[dummy].dl.dad].dl.dad + 1;
      if ( v20 <= (int)max_length )
        v17 = dyn_tree[dyn_tree[dummy].dl.dad].dl.dad + 1;
      if ( v20 <= (int)max_length )
        v19 = v9;
      dyn_tree[v18].dl.dad = v17;
      v9 = v19;
      if ( (int)dummy <= max_code )
      {
        v21 = 0;
        ++*((_WORD *)&s[738].dummy + v17);
        if ( (int)dummy >= extra_base )
          v21 = extra_bits[(int)dummy - extra_base];
        freq = dyn_tree[v18].fc.freq;
        s[1472].dummy += freq * (v17 + v21);
        if ( static_tree )
          s[1473].dummy += freq * (v21 + static_tree[v18].dl.dad);
      }
      ++v15;
      --v14;
    }
    while ( v14 );
    if ( v19 )
    {
      do
      {
        for ( i = max_length - 1; !*((_WORD *)&s[738].dummy + i); --i )
          ;
        v9 -= 2;
        --*((_WORD *)&s[738].dummy + i);
        *((_WORD *)&s[738].dummy + i + 1) += 2;
        --*((_WORD *)&s[738].dummy + max_length);
      }
      while ( v9 > 0 );
      if ( (_DWORD)max_length )
      {
        v24 = 573i64;
        do
        {
          v25 = *((unsigned __int16 *)&s[738].dummy + (int)max_length);
          if ( *((_WORD *)&s[738].dummy + (int)max_length) )
          {
            v26 = &s[v24 + 746];
            do
            {
              v27 = v26[-1].dummy;
              --v26;
              --v24;
              if ( (int)v27 <= max_code )
              {
                v28 = &dyn_tree[v27];
                dad = v28->dl.dad;
                if ( dad != (_DWORD)max_length )
                {
                  s[1472].dummy += v28->fc.freq * (max_length - dad);
                  v28->dl.dad = max_length;
                }
                --v25;
              }
            }
            while ( v25 );
          }
          LODWORD(max_length) = max_length - 1;
        }
        while ( (_DWORD)max_length );
      }
    }
  }
}

/*
==============
gen_codes
==============
*/
void gen_codes(ct_data_s *tree, int max_code, unsigned __int16 *bl_count)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int16 v6; 
  __int16 v7; 
  __int64 v8; 
  __int16 v9; 
  __int16 v10; 
  __int16 v11; 
  __int16 v12; 
  __int16 v13; 
  __int16 v14; 
  __int16 v15; 
  __int16 v16; 
  __int16 v17; 
  __int16 v18; 
  __int16 v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  __int64 dad; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  __int16 v26; 
  __int16 v27; 
  __int16 v28; 
  __int16 v29; 
  __int16 v30; 
  __int16 v31; 
  __int16 v32; 
  __int16 v33; 
  __int16 v34; 
  __int16 v35; 
  __int16 v36; 
  __int16 v37; 
  __int16 v38; 
  __int16 v39; 
  __int16 v40; 
  __int16 v41; 

  v4 = bl_count[1];
  v5 = bl_count[3];
  v27 = 2 * *bl_count;
  v6 = 2 * (v27 + v4);
  v7 = v6 + bl_count[2];
  v28 = v6;
  v8 = max_code;
  v29 = 2 * v7;
  v9 = 2 * (2 * v7 + v5);
  v10 = v9 + bl_count[4];
  v30 = v9;
  v10 *= 2;
  v11 = v10 + bl_count[5];
  v31 = v10;
  v11 *= 2;
  v12 = v11 + bl_count[6];
  v32 = v11;
  v12 *= 2;
  v13 = v12 + bl_count[7];
  v33 = v12;
  v13 *= 2;
  v14 = v13 + bl_count[8];
  v34 = v13;
  v14 *= 2;
  v15 = v14 + bl_count[9];
  v35 = v14;
  v15 *= 2;
  v16 = v15 + bl_count[10];
  v36 = v15;
  v16 *= 2;
  v17 = v16 + bl_count[11];
  v37 = v16;
  v17 *= 2;
  v18 = v17 + bl_count[12];
  v38 = v17;
  v18 *= 2;
  v19 = v18 + bl_count[13];
  v39 = v18;
  v20 = bl_count[14];
  v40 = 2 * v19;
  v41 = 2 * (2 * v19 + v20);
  if ( max_code >= 0 )
  {
    v21 = 0i64;
    do
    {
      dad = tree[v21].dl.dad;
      if ( tree[v21].dl.dad )
      {
        v23 = (unsigned __int16)*(&v26 + dad);
        *(&v26 + dad) = v23 + 1;
        v24 = 0;
        do
        {
          LODWORD(dad) = dad - 1;
          v25 = v23 & 1;
          v23 >>= 1;
          v24 = 2 * (v25 | v24);
        }
        while ( (int)dad > 0 );
        tree[v21].fc.freq = v24 >> 1;
      }
      ++v21;
    }
    while ( v21 <= v8 );
  }
}

/*
==============
init_block
==============
*/
void init_block(internal_state *s)
{
  internal_state *v1; 
  __int64 v2; 

  v1 = s + 47;
  v2 = 286i64;
  do
  {
    LOWORD(v1->dummy) = 0;
    ++v1;
    --v2;
  }
  while ( v2 );
  LOWORD(s[620].dummy) = 0;
  LOWORD(s[621].dummy) = 0;
  LOWORD(s[622].dummy) = 0;
  LOWORD(s[623].dummy) = 0;
  LOWORD(s[624].dummy) = 0;
  LOWORD(s[625].dummy) = 0;
  LOWORD(s[626].dummy) = 0;
  LOWORD(s[627].dummy) = 0;
  LOWORD(s[628].dummy) = 0;
  LOWORD(s[629].dummy) = 0;
  LOWORD(s[630].dummy) = 0;
  LOWORD(s[631].dummy) = 0;
  LOWORD(s[632].dummy) = 0;
  LOWORD(s[633].dummy) = 0;
  LOWORD(s[634].dummy) = 0;
  LOWORD(s[635].dummy) = 0;
  LOWORD(s[636].dummy) = 0;
  LOWORD(s[637].dummy) = 0;
  LOWORD(s[638].dummy) = 0;
  LOWORD(s[639].dummy) = 0;
  LOWORD(s[640].dummy) = 0;
  LOWORD(s[641].dummy) = 0;
  LOWORD(s[642].dummy) = 0;
  LOWORD(s[643].dummy) = 0;
  LOWORD(s[644].dummy) = 0;
  LOWORD(s[645].dummy) = 0;
  LOWORD(s[646].dummy) = 0;
  LOWORD(s[647].dummy) = 0;
  LOWORD(s[648].dummy) = 0;
  LOWORD(s[649].dummy) = 0;
  LOWORD(s[681].dummy) = 0;
  LOWORD(s[682].dummy) = 0;
  LOWORD(s[683].dummy) = 0;
  LOWORD(s[684].dummy) = 0;
  LOWORD(s[685].dummy) = 0;
  LOWORD(s[686].dummy) = 0;
  LOWORD(s[687].dummy) = 0;
  LOWORD(s[688].dummy) = 0;
  LOWORD(s[689].dummy) = 0;
  LOWORD(s[690].dummy) = 0;
  LOWORD(s[691].dummy) = 0;
  LOWORD(s[692].dummy) = 0;
  LOWORD(s[693].dummy) = 0;
  LOWORD(s[694].dummy) = 0;
  LOWORD(s[695].dummy) = 0;
  LOWORD(s[696].dummy) = 0;
  LOWORD(s[697].dummy) = 0;
  LOWORD(s[698].dummy) = 0;
  LOWORD(s[699].dummy) = 0;
  LOWORD(s[303].dummy) = 1;
  *(_QWORD *)&s[1472].dummy = 0i64;
  s[1474].dummy = 0;
  s[1469].dummy = 0;
}

/*
==============
pqdownheap
==============
*/
void pqdownheap(internal_state *s, ct_data_s *tree, int k)
{
  int dummy; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  ct_data_s::<unnamed_type_fc> v11; 
  ct_data_s::<unnamed_type_fc> v12; 
  __int64 v13; 
  ct_data_s::<unnamed_type_fc> v14; 
  ct_data_s::<unnamed_type_fc> v15; 
  __int64 v16; 

  dummy = s[1319].dummy;
  LODWORD(v5) = k;
  v6 = s[k + 746].dummy;
  v7 = 2 * k;
  v8 = 2 * k < dummy;
  if ( 2 * k > dummy )
  {
    s[k + 746].dummy = v6;
  }
  else
  {
    while ( 1 )
    {
      if ( v8 )
      {
        v9 = s[v7 + 746].dummy;
        v10 = s[v7 + 747].dummy;
        v11.freq = (unsigned __int16)tree[v9].fc;
        v12.freq = (unsigned __int16)tree[v10].fc;
        if ( v12.freq < v11.freq || v12.freq == v11.freq && *((_BYTE *)&s[1321].dummy + v10) <= *((_BYTE *)&s[1321].dummy + v9) )
          ++v7;
      }
      v13 = s[v7 + 746].dummy;
      v14.freq = (unsigned __int16)tree[v6].fc;
      v15.freq = (unsigned __int16)tree[v13].fc;
      if ( v14.freq < v15.freq || v14.freq == v15.freq && *((_BYTE *)&s[1321].dummy + v6) <= *((_BYTE *)&s[1321].dummy + v13) )
        break;
      v16 = (int)v5;
      v5 = v7;
      v7 *= 2;
      s[v16 + 746].dummy = v13;
      LODWORD(v16) = s[1319];
      v8 = v7 < (int)v16;
      if ( v7 > (int)v16 )
      {
        s[v5 + 746].dummy = v6;
        return;
      }
    }
    s[(int)v5 + 746].dummy = v6;
  }
}

/*
==============
scan_tree
==============
*/
void scan_tree(internal_state *s, ct_data_s *tree, int max_code)
{
  unsigned int dad; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  ct_data_s::<unnamed_type_dl> *p_dl; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 

  dad = tree->dl.dad;
  v4 = 0;
  v5 = max_code;
  v6 = -1;
  tree[max_code + 1].dl.dad = -1;
  if ( max_code >= 0 )
  {
    v7 = 138;
    if ( (_WORD)dad )
      v7 = 7;
    p_dl = &tree[1].dl;
    v9 = v5 + 1;
    v10 = ((_WORD)dad != 0) + 3;
    do
    {
      ++v4;
      v11 = dad;
      v12 = dad;
      dad = p_dl->dad;
      if ( v4 >= v7 || (_DWORD)v11 != dad )
      {
        if ( v4 >= v10 )
        {
          if ( (_DWORD)v11 )
          {
            if ( v12 != v6 )
              ++LOWORD(s[v11 + 681].dummy);
            ++LOWORD(s[697].dummy);
          }
          else if ( v4 > 10 )
          {
            ++LOWORD(s[699].dummy);
          }
          else
          {
            ++LOWORD(s[698].dummy);
          }
        }
        else
        {
          LOWORD(s[v11 + 681].dummy) += v4;
        }
        v4 = 0;
        v6 = v12;
        if ( dad )
        {
          if ( (_DWORD)v11 == dad )
          {
            v10 = 3;
            v7 = 6;
          }
          else
          {
            v7 = 7;
            v10 = 4;
          }
        }
        else
        {
          v10 = 3;
          v7 = 138;
        }
      }
      p_dl += 2;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
send_all_trees
==============
*/
void send_all_trees(internal_state *s, int lcodes, int dcodes, int blcodes)
{
  __int64 v5; 
  int dummy; 
  __int16 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int16 v12; 
  __int64 v13; 
  __int16 v14; 
  __int16 v15; 
  __int16 v16; 
  int v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int16 v20; 
  __int64 v21; 
  __int16 v22; 
  __int16 v23; 
  __int16 v24; 
  int v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  __int16 v28; 
  __int64 v29; 
  __int16 v30; 
  __int16 v31; 
  int v32; 
  const unsigned __int8 *v33; 
  unsigned __int16 dummy_high; 
  __int16 v35; 
  __int16 v36; 
  __int64 v37; 
  __int16 v38; 
  __int64 v39; 
  int v40; 
  __int16 v41; 

  v5 = (unsigned int)blcodes;
  dummy = s[1477].dummy;
  v9 = s[1476].dummy;
  if ( dummy <= 11 )
  {
    s[1477].dummy = dummy + 5;
    v15 = v9 | (((_WORD)lcodes - 257) << dummy);
  }
  else
  {
    v10 = lcodes - 257;
    v11 = *(_QWORD *)&s[4].dummy;
    v12 = ((_WORD)lcodes - 257) << dummy;
    v13 = (unsigned int)s[10].dummy;
    v14 = v9 | v12;
    LOWORD(s[1476].dummy) = v14;
    *(_BYTE *)(v13 + v11) = v14;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    LOWORD(v11) = s[1477].dummy;
    ++s[10].dummy;
    s[1477].dummy -= 11;
    v15 = v10 >> (16 - v11);
  }
  LOWORD(s[1476].dummy) = v15;
  v16 = v15;
  v17 = s[1477].dummy;
  v18 = dcodes - 1;
  if ( v17 <= 11 )
  {
    s[1477].dummy = v17 + 5;
    v23 = v16 | (v18 << v17);
  }
  else
  {
    v19 = *(_QWORD *)&s[4].dummy;
    v20 = v18 << v17;
    v21 = (unsigned int)s[10].dummy;
    v22 = v16 | v20;
    LOWORD(s[1476].dummy) = v22;
    *(_BYTE *)(v21 + v19) = v22;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    LOWORD(v19) = s[1477].dummy;
    ++s[10].dummy;
    s[1477].dummy -= 11;
    v23 = v18 >> (16 - v19);
  }
  LOWORD(s[1476].dummy) = v23;
  v24 = v23;
  v25 = s[1477].dummy;
  v26 = v5 - 4;
  if ( v25 <= 12 )
  {
    s[1477].dummy = v25 + 4;
    v31 = v24 | (v26 << v25);
  }
  else
  {
    v27 = *(_QWORD *)&s[4].dummy;
    v28 = v26 << v25;
    v29 = (unsigned int)s[10].dummy;
    v30 = v24 | v28;
    LOWORD(s[1476].dummy) = v30;
    *(_BYTE *)(v29 + v27) = v30;
    *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
    LOWORD(v27) = s[1477].dummy;
    ++s[10].dummy;
    s[1477].dummy -= 12;
    v31 = v26 >> (16 - v27);
  }
  LOWORD(s[1476].dummy) = v31;
  if ( (int)v5 > 0 )
  {
    v32 = s[1477].dummy;
    v33 = bl_order;
    do
    {
      dummy_high = HIWORD(s[*v33 + 681].dummy);
      v35 = s[1476].dummy;
      if ( v32 <= 13 )
      {
        v40 = v32 + 3;
        s[1477].dummy = v32 + 3;
        v41 = v35 | (dummy_high << v32);
      }
      else
      {
        v36 = dummy_high << v32;
        v37 = (unsigned int)s[10].dummy;
        v38 = v35 | v36;
        v39 = *(_QWORD *)&s[4].dummy;
        LOWORD(s[1476].dummy) = v38;
        *(_BYTE *)(v37 + v39) = v38;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOWORD(v37) = s[1477].dummy;
        s[1477].dummy -= 13;
        ++s[10].dummy;
        v40 = s[1477].dummy;
        v41 = dummy_high >> (16 - v37);
      }
      ++v33;
      LOWORD(s[1476].dummy) = v41;
      v32 = v40;
      --v5;
    }
    while ( v5 );
  }
  send_tree(s, (ct_data_s *)&s[47], lcodes - 1);
  send_tree(s, (ct_data_s *)&s[620], dcodes - 1);
}

/*
==============
send_tree
==============
*/
void send_tree(internal_state *s, ct_data_s *tree, int max_code)
{
  unsigned int dad; 
  int v4; 
  int v6; 
  __int64 v7; 
  int v8; 
  ct_data_s::<unnamed_type_dl> *p_dl; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int dummy; 
  unsigned __int16 v15; 
  int dummy_high; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  __int16 v20; 
  int v21; 
  int v22; 
  unsigned __int16 v23; 
  int v24; 
  __int16 v25; 
  __int64 v26; 
  __int64 v27; 
  __int16 v28; 
  int v29; 
  int v30; 
  unsigned __int16 v31; 
  int v32; 
  __int16 v33; 
  __int64 v34; 
  __int64 v35; 
  __int16 v36; 
  int v37; 
  unsigned __int16 v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  __int16 v42; 
  __int16 v43; 
  int v44; 
  int v45; 
  unsigned __int16 v46; 
  int v47; 
  __int16 v48; 
  __int64 v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  __int64 v53; 
  __int16 v54; 
  unsigned __int16 v55; 
  int v56; 
  __int16 v57; 
  __int64 v58; 
  __int64 v59; 
  __int16 v60; 
  int v61; 
  unsigned __int16 v62; 
  int v63; 
  __int16 v64; 
  __int64 v65; 
  __int16 v66; 
  __int64 v67; 

  if ( max_code >= 0 )
  {
    dad = tree->dl.dad;
    v4 = 0;
    v6 = -1;
    v7 = max_code;
    v8 = 138;
    if ( tree->dl.dad )
      v8 = 7;
    p_dl = &tree[1].dl;
    v10 = v7 + 1;
    v11 = (dad != 0) + 3;
    while ( 1 )
    {
      ++v4;
      v12 = dad;
      v13 = dad;
      dad = p_dl->dad;
      if ( v4 < v8 && (_DWORD)v12 == dad )
        goto LABEL_45;
      if ( v4 < v11 )
      {
        do
        {
          dummy = s[1477].dummy;
          v15 = s[v12 + 681].dummy;
          dummy_high = HIWORD(s[v12 + 681].dummy);
          v17 = LOWORD(s[1476].dummy) | (v15 << dummy);
          if ( dummy <= 16 - dummy_high )
          {
            v20 = LOWORD(s[1476].dummy) | (v15 << s[1477].dummy);
            v21 = dummy_high + dummy;
          }
          else
          {
            v18 = (unsigned int)s[10].dummy;
            v19 = *(_QWORD *)&s[4].dummy;
            LOWORD(s[1476].dummy) = v17;
            *(_BYTE *)(v18 + v19) = v17;
            *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
            LOBYTE(v19) = 16 - LOBYTE(s[1477].dummy);
            ++s[10].dummy;
            v20 = v15 >> v19;
            v21 = s[1477].dummy + dummy_high - 16;
          }
          s[1477].dummy = v21;
          LOWORD(s[1476].dummy) = v20;
          --v4;
        }
        while ( v4 );
        goto LABEL_40;
      }
      if ( !(_DWORD)v12 )
        break;
      if ( v13 != v6 )
      {
        v22 = s[1477].dummy;
        v23 = s[v12 + 681].dummy;
        v24 = HIWORD(s[v12 + 681].dummy);
        v25 = LOWORD(s[1476].dummy) | (v23 << v22);
        if ( v22 <= 16 - v24 )
        {
          v28 = LOWORD(s[1476].dummy) | (v23 << s[1477].dummy);
          v29 = v24 + v22;
        }
        else
        {
          v26 = (unsigned int)s[10].dummy;
          v27 = *(_QWORD *)&s[4].dummy;
          LOWORD(s[1476].dummy) = v25;
          *(_BYTE *)(v26 + v27) = v25;
          *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
          LOBYTE(v27) = 16 - LOBYTE(s[1477].dummy);
          ++s[10].dummy;
          v28 = v23 >> v27;
          v29 = s[1477].dummy + v24 - 16;
        }
        s[1477].dummy = v29;
        LOWORD(v4) = v4 - 1;
        LOWORD(s[1476].dummy) = v28;
      }
      v30 = s[1477].dummy;
      v31 = s[697].dummy;
      v32 = HIWORD(s[697].dummy);
      v33 = LOWORD(s[1476].dummy) | (v31 << v30);
      if ( v30 <= 16 - v32 )
      {
        v36 = LOWORD(s[1476].dummy) | (v31 << s[1477].dummy);
        v37 = v32 + v30;
      }
      else
      {
        v34 = (unsigned int)s[10].dummy;
        v35 = *(_QWORD *)&s[4].dummy;
        LOWORD(s[1476].dummy) = v33;
        *(_BYTE *)(v34 + v35) = v33;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOBYTE(v35) = 16 - LOBYTE(s[1477].dummy);
        ++s[10].dummy;
        v36 = v31 >> v35;
        v37 = s[1477].dummy + v32 - 16;
      }
      s[1477].dummy = v37;
      v38 = v4 - 3;
      LOWORD(s[1476].dummy) = v36;
      v39 = s[1477].dummy;
      if ( v39 <= 14 )
      {
        v44 = v39 + 2;
LABEL_25:
        s[1477].dummy = v44;
        v43 = v36 | (v38 << v39);
        goto LABEL_39;
      }
      v40 = (unsigned int)s[10].dummy;
      v41 = *(_QWORD *)&s[4].dummy;
      v42 = v36 | (v38 << s[1477].dummy);
      LOWORD(s[1476].dummy) = v42;
      *(_BYTE *)(v40 + v41) = v42;
      *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
      LOWORD(v40) = s[1477].dummy;
      ++s[10].dummy;
      s[1477].dummy -= 14;
      v43 = v38 >> (16 - v40);
LABEL_39:
      LOWORD(s[1476].dummy) = v43;
LABEL_40:
      v4 = 0;
      v6 = v13;
      if ( dad )
      {
        if ( (_DWORD)v12 == dad )
        {
          v11 = 3;
          v8 = 6;
        }
        else
        {
          v8 = 7;
          v11 = 4;
        }
      }
      else
      {
        v11 = 3;
        v8 = 138;
      }
LABEL_45:
      p_dl += 2;
      if ( !--v10 )
        return;
    }
    v45 = s[1477].dummy;
    if ( v4 > 10 )
    {
      v55 = s[699].dummy;
      v56 = HIWORD(s[699].dummy);
      v57 = LOWORD(s[1476].dummy) | (v55 << v45);
      if ( v45 <= 16 - v56 )
      {
        v60 = LOWORD(s[1476].dummy) | (v55 << v45);
        v61 = v56 + v45;
      }
      else
      {
        v58 = (unsigned int)s[10].dummy;
        v59 = *(_QWORD *)&s[4].dummy;
        LOWORD(s[1476].dummy) = v57;
        *(_BYTE *)(v58 + v59) = v57;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOBYTE(v59) = 16 - LOBYTE(s[1477].dummy);
        ++s[10].dummy;
        v60 = v55 >> v59;
        v61 = s[1477].dummy + v56 - 16;
      }
      s[1477].dummy = v61;
      v62 = v4 - 11;
      LOWORD(s[1476].dummy) = v60;
      v63 = s[1477].dummy;
      if ( v63 <= 9 )
      {
        v43 = v60 | (v62 << v63);
        s[1477].dummy = v63 + 7;
      }
      else
      {
        v64 = v62 << v63;
        v65 = *(_QWORD *)&s[4].dummy;
        v66 = v60 | v64;
        v67 = (unsigned int)s[10].dummy;
        LOWORD(s[1476].dummy) = v66;
        *(_BYTE *)(v67 + v65) = v66;
        *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
        LOBYTE(v65) = 16 - LOBYTE(s[1477].dummy);
        ++s[10].dummy;
        v43 = v62 >> v65;
        s[1477].dummy -= 9;
      }
      goto LABEL_39;
    }
    v46 = s[698].dummy;
    v47 = HIWORD(s[698].dummy);
    v48 = LOWORD(s[1476].dummy) | (v46 << v45);
    if ( v45 <= 16 - v47 )
    {
      v36 = LOWORD(s[1476].dummy) | (v46 << v45);
      v51 = v47 + v45;
    }
    else
    {
      v49 = (unsigned int)s[10].dummy;
      v50 = *(_QWORD *)&s[4].dummy;
      LOWORD(s[1476].dummy) = v48;
      *(_BYTE *)(v49 + v50) = v48;
      *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
      LOBYTE(v50) = 16 - LOBYTE(s[1477].dummy);
      ++s[10].dummy;
      v36 = v46 >> v50;
      v51 = s[1477].dummy + v47 - 16;
    }
    s[1477].dummy = v51;
    v38 = v4 - 3;
    LOWORD(s[1476].dummy) = v36;
    v39 = s[1477].dummy;
    if ( v39 > 13 )
    {
      v52 = (unsigned int)s[10].dummy;
      v53 = *(_QWORD *)&s[4].dummy;
      v54 = v36 | (v38 << s[1477].dummy);
      LOWORD(s[1476].dummy) = v54;
      *(_BYTE *)(v52 + v53) = v54;
      *(_BYTE *)((unsigned int)++s[10].dummy + *(_QWORD *)&s[4].dummy) = BYTE1(s[1476].dummy);
      LOWORD(v52) = s[1477].dummy;
      ++s[10].dummy;
      s[1477].dummy -= 13;
      v43 = v38 >> (16 - v52);
      goto LABEL_39;
    }
    v44 = v39 + 3;
    goto LABEL_25;
  }
}

