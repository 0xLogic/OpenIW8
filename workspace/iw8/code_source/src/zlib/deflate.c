/*
==============
deflate_stored
==============
*/
__int64 deflate_stored(internal_state *s, int flush)
{
  unsigned int v2; 
  char *v4; 
  unsigned int dummy; 
  __int64 v7; 
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  char *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 
  char *v25; 
  z_stream_s *v26; 
  unsigned int v27; 
  z_stream_s *v28; 

  v2 = 0xFFFF;
  if ( (unsigned int)(s[6].dummy - 5) < 0xFFFF )
    v2 = s[6].dummy - 5;
  v4 = NULL;
  while ( 1 )
  {
    dummy = s[39].dummy;
    if ( dummy <= 1 )
    {
      fill_window(s);
      dummy = s[39].dummy;
      if ( !dummy )
        break;
    }
    v7 = (unsigned int)s[33].dummy;
    v8 = dummy + s[37].dummy == 0;
    s[37].dummy += dummy;
    v9 = s[37].dummy;
    s[39].dummy = 0;
    v10 = v7 + v2;
    if ( !v8 && v9 < v10 )
      goto LABEL_42;
    s[37].dummy = v10;
    s[39].dummy = v9 - v10;
    if ( (int)v7 < 0 )
      v11 = NULL;
    else
      v11 = (char *)(*(_QWORD *)&s[20].dummy + v7);
    _tr_flush_block(s, v11, v2, 0);
    v12 = *(_QWORD *)&s->dummy;
    s[33].dummy = s[37].dummy;
    v13 = *(_QWORD *)(v12 + 40);
    _tr_flush_bits((internal_state *)v13);
    v14 = *(_DWORD *)(v12 + 24);
    if ( *(_DWORD *)(v13 + 40) <= v14 )
      v14 = *(_DWORD *)(v13 + 40);
    if ( v14 )
    {
      memcpy_0(*(void **)(v12 + 16), *(const void **)(v13 + 32), v14);
      *(_QWORD *)(v12 + 16) += v14;
      *(_QWORD *)(v13 + 32) += v14;
      *(_DWORD *)(v12 + 28) += v14;
      *(_DWORD *)(v12 + 24) -= v14;
      v8 = *(_DWORD *)(v13 + 40) == v14;
      *(_DWORD *)(v13 + 40) -= v14;
      if ( v8 )
        *(_QWORD *)(v13 + 32) = *(_QWORD *)(v13 + 16);
    }
    if ( *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
    {
LABEL_42:
      v15 = s[33].dummy;
      v16 = s[37].dummy - v15;
      if ( v16 < s[17].dummy - 262 )
        continue;
      if ( v15 < 0 )
        v17 = NULL;
      else
        v17 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v15);
      _tr_flush_block(s, v17, v16, 0);
      v18 = *(_QWORD *)&s->dummy;
      s[33].dummy = s[37].dummy;
      v19 = *(_QWORD *)(v18 + 40);
      _tr_flush_bits((internal_state *)v19);
      v20 = *(_DWORD *)(v18 + 24);
      if ( *(_DWORD *)(v19 + 40) <= v20 )
        v20 = *(_DWORD *)(v19 + 40);
      if ( v20 )
      {
        memcpy_0(*(void **)(v18 + 16), *(const void **)(v19 + 32), v20);
        *(_QWORD *)(v18 + 16) += v20;
        *(_QWORD *)(v19 + 32) += v20;
        *(_DWORD *)(v18 + 28) += v20;
        *(_DWORD *)(v18 + 24) -= v20;
        v8 = *(_DWORD *)(v19 + 40) == v20;
        *(_DWORD *)(v19 + 40) -= v20;
        if ( v8 )
          *(_QWORD *)(v19 + 32) = *(_QWORD *)(v19 + 16);
      }
      if ( *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        continue;
    }
    return 0i64;
  }
  if ( !flush )
    return 0i64;
  v22 = (unsigned int)s[33].dummy;
  v23 = s[37].dummy;
  s[1475].dummy = 0;
  if ( flush != 4 )
  {
    if ( v23 <= (int)v22 )
      return 1i64;
    v27 = v23 - v22;
    if ( (int)v22 >= 0 )
      v4 = (char *)(*(_QWORD *)&s[20].dummy + v22);
    _tr_flush_block(s, v4, v27, 0);
    v28 = *(z_stream_s **)&s->dummy;
    s[33].dummy = s[37].dummy;
    flush_pending(v28);
    return *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  }
  v24 = v23 - v22;
  if ( (int)v22 < 0 )
    v25 = NULL;
  else
    v25 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v22);
  _tr_flush_block(s, v25, v24, 1);
  v26 = *(z_stream_s **)&s->dummy;
  s[33].dummy = s[37].dummy;
  flush_pending(v26);
  LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  return (unsigned int)((_DWORD)v4 + 2);
}

/*
==============
deflate_fast
==============
*/
__int64 deflate_fast(internal_state *s, int flush)
{
  char *v4; 
  unsigned int dummy; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int8 v13; 
  __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int8 v16; 
  unsigned int v17; 
  BOOL v18; 
  unsigned int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  bool v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  unsigned int v33; 
  char *v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v39; 
  int v40; 
  int v41; 
  unsigned int v42; 
  char *v43; 
  z_stream_s *v44; 
  int v45; 
  unsigned int v46; 
  z_stream_s *v47; 

  v4 = NULL;
  while ( 1 )
  {
    dummy = s[39].dummy;
    if ( dummy < 0x106 )
    {
      fill_window(s);
      dummy = s[39].dummy;
      if ( dummy < 0x106 && !flush )
        return 0i64;
      if ( !dummy )
        break;
    }
    if ( dummy >= 3 )
    {
      v6 = s[37].dummy;
      v7 = *(_QWORD *)&s[26].dummy;
      v8 = *(_QWORD *)&s[24].dummy;
      v9 = s[31].dummy & ((s[28].dummy << s[32].dummy) ^ (unsigned int)*(unsigned __int8 *)((unsigned int)(v6 + 2) + *(_QWORD *)&s[20].dummy));
      v10 = s[19].dummy & (unsigned int)v6;
      s[28].dummy = v9;
      *(_WORD *)(v8 + 2 * v10) = *(_WORD *)(v7 + 2 * v9);
      v11 = *(unsigned __int16 *)(*(_QWORD *)&s[24].dummy + 2i64 * (unsigned int)(s[19].dummy & s[37].dummy));
      *(_WORD *)(*(_QWORD *)&s[26].dummy + 2i64 * (unsigned int)s[28].dummy) = s[37].dummy;
      if ( v11 )
      {
        if ( s[37].dummy - v11 <= s[17].dummy - 262 )
          s[34].dummy = longest_match(s, v11);
      }
    }
    v12 = s[34].dummy;
    if ( v12 < 3 )
    {
      v31 = *(unsigned __int8 *)((unsigned int)s[37].dummy + *(_QWORD *)&s[20].dummy);
      *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 0;
      *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v31;
      ++LOWORD(s[v31 + 47].dummy);
      v18 = s[1469].dummy == s[1468].dummy - 1;
      --s[39].dummy;
    }
    else
    {
      v13 = v12 - 3;
      v14 = LOWORD(s[37].dummy) - LOWORD(s[38].dummy);
      *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = v14;
      v15 = v14 - 1;
      *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v13;
      ++LOWORD(s[_length_code[v13] + 304].dummy);
      if ( v15 >= 0x100u )
        v16 = _dist_code[((unsigned __int64)v15 >> 7) + 256];
      else
        v16 = _dist_code[v15];
      ++LOWORD(s[v16 + 620].dummy);
      v17 = s[34].dummy;
      v18 = s[1469].dummy == s[1468].dummy - 1;
      v19 = s[39].dummy - v17;
      s[39].dummy = v19;
      if ( v17 > s[42].dummy || v19 < 3 )
      {
        v26 = *(_QWORD *)&s[20].dummy;
        v27 = v17 + s[37].dummy;
        v28 = s[32].dummy;
        s[37].dummy = v27;
        s[34].dummy = 0;
        v29 = *(unsigned __int8 *)(v27 + v26);
        s[28].dummy = v29;
        v30 = v27;
        s[28].dummy = s[31].dummy & (*(unsigned __int8 *)((unsigned int)(v27 + 1) + v26) ^ (v29 << v28));
        goto LABEL_22;
      }
      s[34].dummy = v17 - 1;
      do
      {
        v20 = ++s[37].dummy;
        v21 = (unsigned int)v20 & s[19].dummy;
        v22 = *(_QWORD *)&s[24].dummy;
        v23 = s[31].dummy & ((s[28].dummy << s[32].dummy) ^ (unsigned int)*(unsigned __int8 *)((unsigned int)(v20 + 2) + *(_QWORD *)&s[20].dummy));
        v24 = *(_QWORD *)&s[26].dummy;
        s[28].dummy = v23;
        *(_WORD *)(v22 + 2 * v21) = *(_WORD *)(v24 + 2 * v23);
        *(_WORD *)(*(_QWORD *)&s[26].dummy + 2i64 * (unsigned int)s[28].dummy) = s[37].dummy;
        v25 = s[34].dummy-- == 1;
      }
      while ( !v25 );
    }
    v30 = ++s[37].dummy;
LABEL_22:
    if ( v18 )
    {
      v32 = s[33].dummy;
      v33 = v30 - v32;
      if ( v32 < 0 )
        v34 = NULL;
      else
        v34 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v32);
      _tr_flush_block(s, v34, v33, 0);
      v35 = *(_QWORD *)&s->dummy;
      s[33].dummy = s[37].dummy;
      v36 = *(_QWORD *)(v35 + 40);
      _tr_flush_bits((internal_state *)v36);
      v37 = *(_DWORD *)(v35 + 24);
      if ( *(_DWORD *)(v36 + 40) <= v37 )
        v37 = *(_DWORD *)(v36 + 40);
      if ( v37 )
      {
        memcpy_0(*(void **)(v35 + 16), *(const void **)(v36 + 32), v37);
        *(_QWORD *)(v35 + 16) += v37;
        *(_QWORD *)(v36 + 32) += v37;
        *(_DWORD *)(v35 + 28) += v37;
        *(_DWORD *)(v35 + 24) -= v37;
        v25 = *(_DWORD *)(v36 + 40) == v37;
        *(_DWORD *)(v36 + 40) -= v37;
        if ( v25 )
          *(_QWORD *)(v36 + 32) = *(_QWORD *)(v36 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        return 0i64;
    }
  }
  v39 = s[37].dummy;
  v40 = 2;
  if ( v39 < 2 )
    v40 = s[37].dummy;
  s[1475].dummy = v40;
  if ( flush == 4 )
  {
    v41 = s[33].dummy;
    v42 = v39 - v41;
    if ( v41 < 0 )
      v43 = NULL;
    else
      v43 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v41);
    _tr_flush_block(s, v43, v42, 1);
    v44 = *(z_stream_s **)&s->dummy;
    s[33].dummy = s[37].dummy;
    flush_pending(v44);
    LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
    return (unsigned int)((_DWORD)v4 + 2);
  }
  else
  {
    if ( s[1469].dummy )
    {
      v45 = s[33].dummy;
      v46 = v39 - v45;
      if ( v45 >= 0 )
        v4 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v45);
      _tr_flush_block(s, v4, v46, 0);
      v47 = *(z_stream_s **)&s->dummy;
      s[33].dummy = s[37].dummy;
      flush_pending(v47);
      if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        return 0i64;
    }
    return 1i64;
  }
}

/*
==============
deflate_slow
==============
*/
__int64 deflate_slow(internal_state *s, int flush)
{
  char *v2; 
  int v5; 
  unsigned int dummy; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  unsigned __int8 v19; 
  unsigned int v20; 
  unsigned __int16 v21; 
  unsigned __int8 v22; 
  int v23; 
  int v24; 
  int v25; 
  unsigned int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int v32; 
  char *v33; 
  z_stream_s *v34; 
  int v36; 
  __int64 v37; 
  int v38; 
  char *v39; 
  z_stream_s *v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  char *v46; 
  z_stream_s *v47; 
  int v48; 
  unsigned int v49; 
  z_stream_s *v50; 

  v2 = NULL;
  v5 = 2;
  while ( 1 )
  {
    dummy = s[39].dummy;
    if ( dummy < 0x106 )
    {
      fill_window(s);
      dummy = s[39].dummy;
      if ( dummy < 0x106 && !flush )
        return 0i64;
      if ( !dummy )
        break;
    }
    v7 = 0;
    if ( dummy >= 3 )
    {
      v8 = s[37].dummy;
      v9 = *(_QWORD *)&s[26].dummy;
      v10 = *(_QWORD *)&s[24].dummy;
      v11 = s[31].dummy & ((s[28].dummy << s[32].dummy) ^ (unsigned int)*(unsigned __int8 *)((unsigned int)(v8 + 2) + *(_QWORD *)&s[20].dummy));
      v12 = s[19].dummy & (unsigned int)v8;
      s[28].dummy = v11;
      *(_WORD *)(v10 + 2 * v12) = *(_WORD *)(v9 + 2 * v11);
      v7 = *(unsigned __int16 *)(*(_QWORD *)&s[24].dummy + 2i64 * (unsigned int)(s[19].dummy & s[37].dummy));
      *(_WORD *)(*(_QWORD *)&s[26].dummy + 2i64 * (unsigned int)s[28].dummy) = s[37].dummy;
    }
    v13 = s[34].dummy;
    v14 = 2;
    v15 = s[38].dummy;
    s[40].dummy = v13;
    s[35].dummy = v15;
    s[34].dummy = 2;
    if ( v7 )
    {
      if ( v13 < s[42].dummy && s[37].dummy - v7 <= s[17].dummy - 262 )
      {
        v16 = longest_match(s, v7);
        s[34].dummy = v16;
        v14 = v16;
        if ( v16 <= 5 && (s[44].dummy == 1 || v16 == 3 && (unsigned int)(s[37].dummy - s[38].dummy) > 0x1000) )
        {
          s[34].dummy = 2;
          v14 = 2;
        }
      }
    }
    v17 = s[40].dummy;
    if ( v17 < 3 || v14 > v17 )
    {
      v36 = s[37].dummy;
      if ( s[36].dummy )
      {
        v37 = *(unsigned __int8 *)((unsigned int)(v36 - 1) + *(_QWORD *)&s[20].dummy);
        *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 0;
        *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v37;
        ++LOWORD(s[v37 + 47].dummy);
        if ( s[1469].dummy == s[1468].dummy - 1 )
        {
          v38 = s[33].dummy;
          if ( v38 < 0 )
            v39 = NULL;
          else
            v39 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v38);
          _tr_flush_block(s, v39, s[37].dummy - v38, 0);
          v40 = *(z_stream_s **)&s->dummy;
          s[33].dummy = s[37].dummy;
          flush_pending(v40);
        }
        v41 = *(_QWORD *)&s->dummy;
        ++s[37].dummy;
        --s[39].dummy;
        if ( !*(_DWORD *)(v41 + 24) )
          return 0i64;
      }
      else
      {
        s[36].dummy = 1;
        --s[39].dummy;
        s[37].dummy = v36 + 1;
      }
    }
    else
    {
      v18 = s[37].dummy;
      v19 = v17 - 3;
      v20 = v18 + s[39].dummy - 3;
      LOWORD(v18) = v18 - LOWORD(s[35].dummy) - 1;
      *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = v18;
      v21 = v18 - 1;
      *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v19;
      ++LOWORD(s[_length_code[v19] + 304].dummy);
      if ( v21 >= 0x100u )
        v22 = _dist_code[((unsigned __int64)v21 >> 7) + 256];
      else
        v22 = _dist_code[v21];
      ++LOWORD(s[v22 + 620].dummy);
      v23 = s[40].dummy;
      v24 = s[1469].dummy;
      v25 = s[1468].dummy - 1;
      s[39].dummy += 1 - v23;
      s[40].dummy = v23 - 2;
      do
      {
        v26 = s[37].dummy + 1;
        s[37].dummy = v26;
        if ( v26 <= v20 )
        {
          v27 = *(_QWORD *)&s[26].dummy;
          v28 = s[19].dummy;
          v29 = *(_QWORD *)&s[24].dummy;
          v30 = s[31].dummy & ((s[28].dummy << s[32].dummy) ^ (unsigned int)*(unsigned __int8 *)(v26 + 2 + *(_QWORD *)&s[20].dummy));
          s[28].dummy = v30;
          *(_WORD *)(v29 + 2i64 * (v26 & v28)) = *(_WORD *)(v27 + 2 * v30);
          *(_WORD *)(*(_QWORD *)&s[26].dummy + 2i64 * (unsigned int)s[28].dummy) = s[37].dummy;
          v26 = s[37].dummy;
        }
      }
      while ( s[40].dummy-- != 1 );
      s[36].dummy = 0;
      s[37].dummy = v26 + 1;
      s[34].dummy = 2;
      if ( v24 == v25 )
      {
        v32 = s[33].dummy;
        v33 = v32 < 0 ? 0i64 : (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v32);
        _tr_flush_block(s, v33, v26 + 1 - v32, 0);
        v34 = *(z_stream_s **)&s->dummy;
        s[33].dummy = s[37].dummy;
        flush_pending(v34);
        if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
          return 0i64;
      }
    }
  }
  if ( s[36].dummy )
  {
    v42 = *(unsigned __int8 *)((unsigned int)(s[37].dummy - 1) + *(_QWORD *)&s[20].dummy);
    *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 0;
    *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v42;
    ++LOWORD(s[v42 + 47].dummy);
    s[36].dummy = 0;
  }
  v43 = s[37].dummy;
  if ( v43 < 2 )
    v5 = s[37].dummy;
  s[1475].dummy = v5;
  if ( flush == 4 )
  {
    v44 = s[33].dummy;
    v45 = v43 - v44;
    if ( v44 < 0 )
      v46 = NULL;
    else
      v46 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v44);
    _tr_flush_block(s, v46, v45, 1);
    v47 = *(z_stream_s **)&s->dummy;
    s[33].dummy = s[37].dummy;
    flush_pending(v47);
    LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
    return (unsigned int)((_DWORD)v2 + 2);
  }
  else
  {
    if ( s[1469].dummy )
    {
      v48 = s[33].dummy;
      v49 = v43 - v48;
      if ( v48 >= 0 )
        v2 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v48);
      _tr_flush_block(s, v2, v49, 0);
      v50 = *(z_stream_s **)&s->dummy;
      s[33].dummy = s[37].dummy;
      flush_pending(v50);
      if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        return 0i64;
    }
    return 1i64;
  }
}

/*
==============
deflate_huff
==============
*/
__int64 deflate_huff(internal_state *s, int flush)
{
  char *v4; 
  __int64 dummy; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  bool v15; 
  int v17; 
  char *v18; 
  z_stream_s *v19; 
  int v20; 
  z_stream_s *v21; 

  v4 = NULL;
  while ( 1 )
  {
    if ( !s[39].dummy )
    {
      fill_window(s);
      if ( !s[39].dummy )
        break;
    }
    dummy = (unsigned int)s[37].dummy;
    v6 = *(_QWORD *)&s[20].dummy;
    s[34].dummy = 0;
    v7 = *(unsigned __int8 *)(dummy + v6);
    *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 0;
    *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v7;
    ++LOWORD(s[v7 + 47].dummy);
    LODWORD(v6) = s[1468];
    v8 = s[37].dummy + 1;
    --s[39].dummy;
    s[37].dummy = v8;
    if ( s[1469].dummy == (_DWORD)v6 - 1 )
    {
      v9 = s[33].dummy;
      v10 = v8 - v9;
      if ( v9 < 0 )
        v11 = NULL;
      else
        v11 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v9);
      _tr_flush_block(s, v11, v10, 0);
      v12 = *(_QWORD *)&s->dummy;
      s[33].dummy = s[37].dummy;
      v13 = *(_QWORD *)(v12 + 40);
      _tr_flush_bits((internal_state *)v13);
      v14 = *(_DWORD *)(v12 + 24);
      if ( *(_DWORD *)(v13 + 40) <= v14 )
        v14 = *(_DWORD *)(v13 + 40);
      if ( v14 )
      {
        memcpy_0(*(void **)(v12 + 16), *(const void **)(v13 + 32), v14);
        *(_QWORD *)(v12 + 16) += v14;
        *(_QWORD *)(v13 + 32) += v14;
        *(_DWORD *)(v12 + 28) += v14;
        *(_DWORD *)(v12 + 24) -= v14;
        v15 = *(_DWORD *)(v13 + 40) == v14;
        *(_DWORD *)(v13 + 40) -= v14;
        if ( v15 )
          *(_QWORD *)(v13 + 32) = *(_QWORD *)(v13 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        return 0i64;
    }
  }
  if ( !flush )
    return 0i64;
  s[1475].dummy = 0;
  if ( flush != 4 )
  {
    if ( !s[1469].dummy )
      return 1i64;
    v20 = s[33].dummy;
    if ( v20 >= 0 )
      v4 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v20);
    _tr_flush_block(s, v4, s[37].dummy - v20, 0);
    v21 = *(z_stream_s **)&s->dummy;
    s[33].dummy = s[37].dummy;
    flush_pending(v21);
    return *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  }
  v17 = s[33].dummy;
  if ( v17 < 0 )
    v18 = NULL;
  else
    v18 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v17);
  _tr_flush_block(s, v18, s[37].dummy - v17, 1);
  v19 = *(z_stream_s **)&s->dummy;
  s[33].dummy = s[37].dummy;
  flush_pending(v19);
  LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  return (unsigned int)((_DWORD)v4 + 2);
}

/*
==============
deflate_rle
==============
*/
__int64 deflate_rle(internal_state *s, int flush)
{
  internal_state *v2; 
  char *v3; 
  unsigned int dummy; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  _BYTE *v10; 
  char v11; 
  _BYTE *v12; 
  _BYTE *v13; 
  unsigned __int8 v14; 
  int v15; 
  BOOL v16; 
  __int64 v17; 
  int v18; 
  char *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  bool v23; 
  int v24; 
  char *v25; 
  z_stream_s *v26; 
  int v28; 
  z_stream_s *v29; 

  v2 = s + 37;
  v3 = NULL;
  while ( 1 )
  {
    dummy = s[39].dummy;
    v7 = dummy;
    if ( dummy <= 0x102 )
    {
      fill_window(s);
      dummy = s[39].dummy;
      if ( dummy <= 0x102 && !flush )
        return 0i64;
      v7 = s[39].dummy;
      if ( !dummy )
        break;
    }
    s[34].dummy = 0;
    v8 = 0;
    if ( v7 >= 3 )
    {
      v9 = (unsigned int)s[37].dummy;
      if ( (_DWORD)v9 )
      {
        v10 = (_BYTE *)(v9 + *(_QWORD *)&s[20].dummy);
        v11 = *(v10 - 1);
        if ( v11 == *v10 && v11 == v10[1] )
        {
          v12 = v10 + 2;
          if ( v11 == v10[2] )
          {
            v13 = v10 + 258;
            do
            {
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
              if ( v11 != *++v12 )
                break;
            }
            while ( v12 < v13 );
            v8 = (_DWORD)v12 - (_DWORD)v13 + 258;
            s[34].dummy = v8;
            if ( v8 > dummy )
            {
              s[34].dummy = dummy;
              v8 = dummy;
            }
          }
        }
      }
    }
    if ( v8 < 3 )
    {
      v17 = *(unsigned __int8 *)((unsigned int)s[37].dummy + *(_QWORD *)&s[20].dummy);
      *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 0;
      *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v17;
      ++LOWORD(s[v17 + 47].dummy);
      v16 = s[1469].dummy == s[1468].dummy - 1;
      --s[39].dummy;
      ++s[37].dummy;
    }
    else
    {
      v14 = s[34].dummy - 3;
      *(_WORD *)(*(_QWORD *)&s[1470].dummy + 2i64 * (unsigned int)s[1469].dummy) = 1;
      *(_BYTE *)((unsigned int)s[1469].dummy++ + *(_QWORD *)&s[1466].dummy) = v14;
      ++LOWORD(s[_length_code[v14] + 304].dummy);
      ++LOWORD(s[_dist_code[0] + 620].dummy);
      v15 = s[34].dummy;
      v16 = s[1469].dummy == s[1468].dummy - 1;
      s[34].dummy = 0;
      s[39].dummy -= v15;
      s[37].dummy += v15;
    }
    if ( v16 )
    {
      v18 = s[33].dummy;
      if ( v18 < 0 )
        v19 = NULL;
      else
        v19 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v18);
      _tr_flush_block(s, v19, s[37].dummy - v18, 0);
      v20 = *(_QWORD *)&s->dummy;
      s[33].dummy = v2->dummy;
      v21 = *(_QWORD *)(v20 + 40);
      _tr_flush_bits((internal_state *)v21);
      v22 = *(_DWORD *)(v20 + 24);
      if ( *(_DWORD *)(v21 + 40) <= v22 )
        v22 = *(_DWORD *)(v21 + 40);
      if ( v22 )
      {
        memcpy_0(*(void **)(v20 + 16), *(const void **)(v21 + 32), v22);
        *(_QWORD *)(v20 + 16) += v22;
        *(_QWORD *)(v21 + 32) += v22;
        *(_DWORD *)(v20 + 28) += v22;
        *(_DWORD *)(v20 + 24) -= v22;
        v23 = *(_DWORD *)(v21 + 40) == v22;
        *(_DWORD *)(v21 + 40) -= v22;
        if ( v23 )
          *(_QWORD *)(v21 + 32) = *(_QWORD *)(v21 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) )
        return 0i64;
      v2 = s + 37;
    }
  }
  s[1475].dummy = 0;
  if ( flush != 4 )
  {
    if ( !s[1469].dummy )
      return 1i64;
    v28 = s[33].dummy;
    if ( v28 >= 0 )
      v3 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v28);
    _tr_flush_block(s, v3, s[37].dummy - v28, 0);
    v29 = *(z_stream_s **)&s->dummy;
    s[33].dummy = s[37].dummy;
    flush_pending(v29);
    return *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  }
  v24 = s[33].dummy;
  if ( v24 < 0 )
    v25 = NULL;
  else
    v25 = (char *)(*(_QWORD *)&s[20].dummy + (unsigned int)v24);
  _tr_flush_block(s, v25, s[37].dummy - v24, 1);
  v26 = *(z_stream_s **)&s->dummy;
  s[33].dummy = s[37].dummy;
  flush_pending(v26);
  LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)&s->dummy + 24i64) != 0;
  return (unsigned int)((_DWORD)v3 + 2);
}

/*
==============
fill_window
==============
*/
void fill_window(internal_state *s)
{
  size_t dummy; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  _WORD *v8; 
  unsigned int v9; 
  __int16 v10; 
  int v11; 
  _WORD *v12; 
  unsigned int v13; 
  __int16 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  void *v18; 
  const void *v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 

  dummy = (unsigned int)s[17].dummy;
  v3 = s[39].dummy;
  do
  {
    v4 = s[37].dummy;
    v5 = s[22].dummy - v4 - v3;
    if ( v4 >= (int)dummy + s[17].dummy - 262 )
    {
      memcpy_0(*(void **)&s[20].dummy, (const void *)(*(_QWORD *)&s[20].dummy + dummy), dummy);
      v6 = (unsigned int)s[29].dummy;
      v7 = *(_QWORD *)&s[26].dummy;
      s[38].dummy -= dummy;
      s[37].dummy -= dummy;
      s[33].dummy -= dummy;
      v8 = (_WORD *)(v7 + 2 * v6);
      do
      {
        v9 = (unsigned __int16)*--v8;
        v10 = v9 - dummy;
        if ( v9 < (unsigned int)dummy )
          v10 = 0;
        *v8 = v10;
        LODWORD(v6) = v6 - 1;
      }
      while ( (_DWORD)v6 );
      v11 = dummy;
      v12 = (_WORD *)(*(_QWORD *)&s[24].dummy + 2 * dummy);
      do
      {
        v13 = (unsigned __int16)*--v12;
        v14 = v13 - dummy;
        if ( v13 < (unsigned int)dummy )
          v14 = 0;
        *v12 = v14;
        --v11;
      }
      while ( v11 );
      v5 += dummy;
    }
    v15 = *(_QWORD *)&s->dummy;
    v16 = *(_DWORD *)(*(_QWORD *)&s->dummy + 8i64);
    if ( !v16 )
      break;
    v17 = (unsigned int)s[39].dummy;
    v18 = (void *)(*(_QWORD *)&s[20].dummy + v17 + (unsigned int)s[37].dummy);
    if ( v16 <= v5 )
      v5 = *(_DWORD *)(*(_QWORD *)&s->dummy + 8i64);
    if ( !v5 )
    {
      v5 = 0;
      goto LABEL_23;
    }
    v19 = *(const void **)v15;
    *(_DWORD *)(v15 + 8) = v16 - v5;
    memcpy_0(v18, v19, v5);
    v20 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 44i64);
    if ( v20 == 1 )
    {
      v21 = j_adler32_0(*(_DWORD *)(v15 + 76), (const unsigned __int8 *)v18, v5);
LABEL_21:
      *(_DWORD *)(v15 + 76) = v21;
      goto LABEL_22;
    }
    if ( v20 == 2 )
    {
      v21 = j_crc32(*(_DWORD *)(v15 + 76), (const unsigned __int8 *)v18, v5);
      goto LABEL_21;
    }
LABEL_22:
    *(_QWORD *)v15 += v5;
    *(_DWORD *)(v15 + 12) += v5;
    LODWORD(v17) = s[39];
LABEL_23:
    v22 = s[1475].dummy;
    v3 = v17 + v5;
    s[39].dummy = v17 + v5;
    if ( (unsigned int)v17 + v5 + v22 >= 3 )
    {
      v23 = *(_QWORD *)&s[20].dummy;
      v24 = (unsigned int)(s[37].dummy - v22);
      v25 = s[32].dummy;
      v26 = *(unsigned __int8 *)(v24 + v23);
      s[28].dummy = v26;
      s[28].dummy = s[31].dummy & ((v26 << v25) ^ *(unsigned __int8 *)((unsigned int)(v24 + 1) + v23));
      if ( v22 )
      {
        v27 = (unsigned int)(v24 + 2);
        do
        {
          v28 = *(_QWORD *)&s[26].dummy;
          v29 = s[19].dummy;
          v30 = *(unsigned __int8 *)(v27 + *(_QWORD *)&s[20].dummy);
          v27 = (unsigned int)(v27 + 1);
          v31 = *(_QWORD *)&s[24].dummy;
          v32 = s[31].dummy & ((s[28].dummy << s[32].dummy) ^ v30);
          s[28].dummy = v32;
          *(_WORD *)(v31 + 2i64 * ((unsigned int)v24 & v29)) = *(_WORD *)(v28 + 2 * v32);
          *(_WORD *)(*(_QWORD *)&s[26].dummy + 2i64 * (unsigned int)s[28].dummy) = v24;
          LODWORD(v24) = v24 + 1;
          v33 = --s[1475].dummy;
          v3 = s[39].dummy;
        }
        while ( v33 + v3 >= 3 && v33 );
      }
    }
  }
  while ( v3 < 0x106 && *(_DWORD *)(*(_QWORD *)&s->dummy + 8i64) );
  v34 = (unsigned int)s[1478].dummy;
  v35 = s[22].dummy;
  if ( (unsigned int)v34 < v35 )
  {
    v36 = s[37].dummy + s[39].dummy;
    if ( (unsigned int)v34 >= v36 )
    {
      if ( (unsigned int)v34 < v36 + 258 )
      {
        v38 = v35 - v34;
        if ( v36 - (unsigned int)v34 + 258 <= v38 )
          v38 = v36 - v34 + 258;
        memset_0((void *)(*(_QWORD *)&s[20].dummy + v34), 0, v38);
        s[1478].dummy += v38;
      }
    }
    else
    {
      v37 = v35 - v36;
      if ( v37 > 0x102 )
        v37 = 258;
      memset_0((void *)(*(_QWORD *)&s[20].dummy + v36), 0, v37);
      s[1478].dummy = v37 + v36;
    }
  }
}

/*
==============
flush_pending
==============
*/
void flush_pending(z_stream_s *strm)
{
  internal_state *state; 
  unsigned int avail_out; 
  bool v4; 

  state = strm->state;
  _tr_flush_bits(state);
  avail_out = strm->avail_out;
  if ( state[10].dummy <= avail_out )
    avail_out = state[10].dummy;
  if ( avail_out )
  {
    memcpy_0(strm->next_out, *(const void **)&state[8].dummy, avail_out);
    strm->next_out += avail_out;
    *(_QWORD *)&state[8].dummy += avail_out;
    strm->total_out += avail_out;
    strm->avail_out -= avail_out;
    v4 = state[10].dummy == avail_out;
    state[10].dummy -= avail_out;
    if ( v4 )
      *(_QWORD *)&state[8].dummy = *(_QWORD *)&state[4].dummy;
  }
}

/*
==============
longest_match
==============
*/
__int64 longest_match(internal_state *s, unsigned int cur_match)
{
  __int64 dummy; 
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  bool v11; 
  _BYTE *v12; 
  char v13; 
  char v14; 
  _BYTE *v15; 
  unsigned int v16; 
  unsigned int v17; 
  _BYTE *v18; 
  _BYTE *v19; 
  _BYTE *v20; 
  char v21; 
  int v22; 
  __int64 v23; 
  int v24; 

  dummy = (unsigned int)s[37].dummy;
  v4 = 0;
  v5 = s[40].dummy;
  v6 = s[17].dummy;
  v8 = s[46].dummy;
  v9 = *(_QWORD *)&s[20].dummy;
  v10 = *(_QWORD *)&s[24].dummy;
  v11 = (unsigned int)dummy <= v6 - 262;
  v12 = (_BYTE *)(dummy + v9);
  v13 = *(_BYTE *)(v5 + dummy + v9 - 1);
  if ( !v11 )
    v4 = s[37].dummy - v6 + 262;
  v14 = v12[v5];
  v15 = v12 + 258;
  v16 = (unsigned int)s[41].dummy >> 2;
  if ( (unsigned int)v5 < s[45].dummy )
    v16 = s[41].dummy;
  v17 = s[39].dummy;
  if ( v8 > v17 )
    v8 = s[39].dummy;
  do
  {
    v18 = (_BYTE *)(v9 + cur_match);
    if ( v18[(int)v5] == v14 && v18[(int)v5 - 1] == v13 && *v18 == *v12 && v18[1] == v12[1] )
    {
      v19 = v12 + 2;
      v20 = v18 + 2;
      do
      {
        if ( *++v19 != v20[1] )
          break;
        if ( *++v19 != v20[2] )
          break;
        if ( *++v19 != v20[3] )
          break;
        if ( *++v19 != v20[4] )
          break;
        if ( *++v19 != v20[5] )
          break;
        if ( *++v19 != v20[6] )
          break;
        if ( *++v19 != v20[7] )
          break;
        v21 = v20[8];
        v20 += 8;
        if ( *++v19 != v21 )
          break;
      }
      while ( v19 < v15 );
      v22 = (_DWORD)v19 - (_DWORD)v15;
      v23 = v22;
      v24 = v22 + 258;
      v12 = v15 - 258;
      if ( v24 > (int)v5 )
      {
        s[38].dummy = cur_match;
        LODWORD(v5) = v24;
        if ( v24 >= v8 )
          break;
        v13 = v15[v23 - 1];
        v14 = v15[v24 - 258];
      }
    }
    cur_match = *(unsigned __int16 *)(v10 + 2i64 * (cur_match & s[19].dummy));
    if ( cur_match <= v4 )
      break;
    --v16;
  }
  while ( v16 );
  if ( (unsigned int)v5 <= v17 )
    return (unsigned int)v5;
  return v17;
}

/*
==============
deflateBound
==============
*/
__int64 deflateBound(z_stream_s *strm, unsigned int sourceLen)
{
  unsigned int v3; 
  internal_state *state; 
  int dummy; 
  int v6; 
  int v7; 
  __int64 v8; 
  char *v9; 
  char v10; 
  char *v11; 
  char v12; 

  v3 = ((sourceLen + 7) >> 3) + sourceLen + ((sourceLen + 63) >> 6) + 5;
  if ( !strm )
    return v3 + 6;
  state = strm->state;
  if ( !state )
    return v3 + 6;
  dummy = state[11].dummy;
  if ( dummy )
  {
    v6 = dummy - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v8 = *(_QWORD *)&state[12].dummy;
        v7 = 18;
        if ( v8 )
        {
          if ( *(_QWORD *)(v8 + 16) )
            v7 = *(_DWORD *)(v8 + 24) + 20;
          v9 = *(char **)(v8 + 32);
          if ( v9 )
          {
            do
            {
              v10 = *v9++;
              ++v7;
            }
            while ( v10 );
            v8 = *(_QWORD *)&state[12].dummy;
          }
          v11 = *(char **)(v8 + 48);
          if ( v11 )
          {
            do
            {
              v12 = *v11++;
              ++v7;
            }
            while ( v12 );
            v8 = *(_QWORD *)&state[12].dummy;
          }
          if ( *(_DWORD *)(v8 + 60) )
            v7 += 2;
        }
      }
      else
      {
        v7 = 6;
      }
    }
    else
    {
      v7 = 6;
      if ( state[37].dummy )
        v7 = 10;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( state[18].dummy == 15 && state[30].dummy == 15 )
    return (sourceLen >> 25) + v7 + (sourceLen >> 14) + (sourceLen >> 12) + sourceLen + 7;
  else
    return v7 + v3;
}

/*
==============
deflateCopy
==============
*/
__int64 deflateCopy(z_stream_s *dest, z_stream_s *source)
{
  z_stream_s *v2; 
  internal_state *state; 
  internal_state *v8; 
  internal_state *v9; 
  __int64 result; 
  __int64 dummy; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  void *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v2 = dest;
  if ( !source )
    return 4294967294i64;
  if ( !dest )
    return 4294967294i64;
  state = source->state;
  if ( !state )
    return 4294967294i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovsd  xmm1, qword ptr [rdx+50h]
    vmovsd  qword ptr [rcx+50h], xmm1
  }
  v8 = (internal_state *)dest->zalloc(dest->opaque, 1i64, 5920i64);
  v9 = v8;
  if ( !v8 )
    return 4294967292i64;
  v2->state = v8;
  memcpy_0(v8, state, 0x1720ui64);
  dummy = (unsigned int)v9[17].dummy;
  *(_QWORD *)&v9->dummy = v2;
  v12 = (__int64)v2->zalloc(v2->opaque, dummy, 2u);
  v13 = (unsigned int)v9[17].dummy;
  *(_QWORD *)&v9[20].dummy = v12;
  v14 = (__int64)v2->zalloc(v2->opaque, v13, 2u);
  v15 = (unsigned int)v9[29].dummy;
  *(_QWORD *)&v9[24].dummy = v14;
  v16 = (__int64)v2->zalloc(v2->opaque, v15, 2u);
  v17 = (unsigned int)v9[1468].dummy;
  *(_QWORD *)&v9[26].dummy = v16;
  v18 = (__int64)v2->zalloc(v2->opaque, v17, 4u);
  v19 = *(void **)&v9[20].dummy;
  v20 = v18;
  *(_QWORD *)&v9[4].dummy = v18;
  if ( v19 && *(_QWORD *)&v9[24].dummy && *(_QWORD *)&v9[26].dummy && v18 )
  {
    memcpy_0(v19, *(const void **)&state[20].dummy, (unsigned int)(2 * v9[17].dummy));
    memcpy_0(*(void **)&v9[24].dummy, *(const void **)&state[24].dummy, 2i64 * (unsigned int)v9[17].dummy);
    memcpy_0(*(void **)&v9[26].dummy, *(const void **)&state[26].dummy, 2i64 * (unsigned int)v9[29].dummy);
    memcpy_0(*(void **)&v9[4].dummy, *(const void **)&state[4].dummy, (unsigned int)v9[6].dummy);
    v21 = (unsigned int)v9[1468].dummy;
    v22 = *(_QWORD *)&v9[4].dummy;
    *(_QWORD *)&v9[8].dummy = v22 + *(_QWORD *)&state[8].dummy - *(_QWORD *)&state[4].dummy;
    *(_QWORD *)&v9[1470].dummy = v20 + 2 * ((unsigned __int64)(unsigned int)v21 >> 1);
    *(_QWORD *)&v9[720].dummy = v9 + 47;
    *(_QWORD *)&v9[726].dummy = v9 + 620;
    *(_QWORD *)&v9[732].dummy = v9 + 681;
    result = 0i64;
    *(_QWORD *)&v9[1466].dummy = v22 + 2 * v21 + v21;
  }
  else
  {
    j_deflateEnd(v2);
    return 4294967292i64;
  }
  return result;
}

/*
==============
deflateEnd
==============
*/
__int64 deflateEnd(z_stream_s *strm)
{
  internal_state *state; 
  int dummy; 
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 result; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  dummy = state[2].dummy;
  v4 = (unsigned int)(dummy - 42);
  if ( (unsigned int)v4 > 0x3D || (v5 = 0x2002000088000001i64, !_bittest64(&v5, v4)) )
  {
    if ( dummy != 113 && dummy != 666 )
      return 4294967294i64;
  }
  if ( *(_QWORD *)&state[4].dummy )
  {
    strm->zfree(strm->opaque, *(void **)&state[4].dummy);
    state = strm->state;
  }
  if ( *(_QWORD *)&state[26].dummy )
  {
    strm->zfree(strm->opaque, *(void **)&state[26].dummy);
    state = strm->state;
  }
  if ( *(_QWORD *)&state[24].dummy )
  {
    strm->zfree(strm->opaque, *(void **)&state[24].dummy);
    state = strm->state;
  }
  if ( *(_QWORD *)&state[20].dummy )
  {
    strm->zfree(strm->opaque, *(void **)&state[20].dummy);
    state = strm->state;
  }
  strm->zfree(strm->opaque, state);
  result = 0i64;
  strm->state = NULL;
  if ( dummy == 113 )
    return 4294967293i64;
  return result;
}

/*
==============
deflateInit2_
==============
*/
__int64 deflateInit2_(z_stream_s *strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size)
{
  int v8; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  internal_state *v13; 
  internal_state *v14; 
  int v15; 
  void *v16; 
  __int64 dummy; 
  void *v18; 
  __int64 v19; 
  unsigned int v20; 
  char *v21; 
  __int64 v22; 
  internal_state *state; 
  int v24; 
  int v25; 
  unsigned int v26; 
  internal_state *v27; 
  int v28; 
  __int64 v29; 

  v8 = windowBits;
  v10 = 1;
  if ( !version || *version != 49 || stream_size != 88 )
    return 4294967290i64;
  if ( !strm )
    return 4294967294i64;
  v11 = 0;
  strm->msg = NULL;
  if ( !strm->zalloc )
  {
    strm->opaque = NULL;
    strm->zalloc = zcalloc;
  }
  if ( !strm->zfree )
    strm->zfree = zcfree;
  v12 = 6;
  if ( level != -1 )
    v12 = level;
  if ( windowBits >= 0 )
  {
    if ( windowBits > 15 )
    {
      v10 = 2;
      v8 = windowBits - 16;
    }
  }
  else
  {
    v10 = 0;
    v8 = -windowBits;
  }
  if ( (unsigned int)(memLevel - 1) > 8 || method != 8 || (unsigned int)(v8 - 8) > 7 || v12 > 9 || (unsigned int)strategy > 4 )
    return 4294967294i64;
  if ( v8 == 8 )
    v8 = 9;
  v13 = (internal_state *)strm->zalloc(strm->opaque, 1i64, 5920i64);
  v14 = v13;
  if ( !v13 )
    return 4294967292i64;
  strm->state = v13;
  v13[18].dummy = v8;
  *(_QWORD *)&v13->dummy = strm;
  v13[11].dummy = v10;
  *(_QWORD *)&v13[12].dummy = 0i64;
  v13[17].dummy = 1 << v8;
  v13[30].dummy = memLevel + 7;
  v13[19].dummy = (1 << v8) - 1;
  v15 = 1 << (memLevel + 7);
  v14[29].dummy = v15;
  v14[31].dummy = v15 - 1;
  v14[32].dummy = (memLevel + 9) / 3u;
  v16 = strm->zalloc(strm->opaque, (unsigned int)(1 << v8), 2i64);
  dummy = (unsigned int)v14[17].dummy;
  *(_QWORD *)&v14[20].dummy = v16;
  v18 = strm->zalloc(strm->opaque, dummy, 2i64);
  v19 = (unsigned int)v14[29].dummy;
  *(_QWORD *)&v14[24].dummy = v18;
  *(_QWORD *)&v14[26].dummy = strm->zalloc(strm->opaque, v19, 2i64);
  v20 = 1 << (memLevel + 6);
  v14[1468].dummy = v20;
  v14[1478].dummy = 0;
  v21 = (char *)strm->zalloc(strm->opaque, v20, 4i64);
  v22 = (unsigned int)v14[1468].dummy;
  *(_QWORD *)&v14[4].dummy = v21;
  v14[6].dummy = 4 * v22;
  if ( !*(_QWORD *)&v14[20].dummy || !*(_QWORD *)&v14[24].dummy || !*(_QWORD *)&v14[26].dummy || !v21 )
  {
    v14[2].dummy = 666;
    strm->msg = z_errmsg_zlib[6];
    j_deflateEnd(strm);
    return 4294967292i64;
  }
  v14[43].dummy = v12;
  v14[44].dummy = strategy;
  LOBYTE(v14[15].dummy) = 8;
  *(_QWORD *)&v14[1470].dummy = &v21[2 * ((unsigned __int64)(unsigned int)v22 >> 1)];
  *(_QWORD *)&v14[1466].dummy = &v21[2 * v22 + v22];
  state = strm->state;
  if ( state && strm->zalloc && strm->zfree )
  {
    strm->total_out = 0;
    strm->total_in = 0;
    strm->msg = NULL;
    strm->data_type = 2;
    v24 = state[11].dummy;
    *(_QWORD *)&state[8].dummy = *(_QWORD *)&state[4].dummy;
    state[10].dummy = 0;
    if ( v24 < 0 )
    {
      v24 = -v24;
      state[11].dummy = v24;
    }
    v25 = 113;
    if ( v24 )
      v25 = 42;
    state[2].dummy = v25;
    if ( v24 == 2 )
      v26 = j_crc32(0, NULL, 0);
    else
      v26 = j_adler32_0(0, NULL, 0);
    strm->adler = v26;
    state[16].dummy = 0;
    _tr_init(state);
    v27 = strm->state;
    v28 = v27[29].dummy;
    v27[22].dummy = 2 * v27[17].dummy;
    *(_WORD *)(*(_QWORD *)&v27[26].dummy + 2i64 * (unsigned int)(v28 - 1)) = 0;
    memset_0(*(void **)&v27[26].dummy, 0, 2i64 * (unsigned int)(v27[29].dummy - 1));
    v29 = v27[43].dummy;
    v27[42].dummy = configuration_table[v27[43].dummy].max_lazy;
    v27[45].dummy = configuration_table[v29].good_length;
    v27[46].dummy = configuration_table[v29].nice_length;
    v27[41].dummy = configuration_table[v29].max_chain;
    *(_QWORD *)&v27[36].dummy = 0i64;
    v27[33].dummy = 0;
    v27[39].dummy = 0;
    v27[1475].dummy = 0;
    v27[40].dummy = 2;
    v27[34].dummy = 2;
    v27[28].dummy = 0;
  }
  else
  {
    return (unsigned int)-2;
  }
  return v11;
}

/*
==============
deflateInit_
==============
*/
int deflateInit_(z_stream_s *strm, int level, const char *version, int stream_size)
{
  return j_deflateInit2_(strm, level, 8, 15, 8, 0, version, stream_size);
}

/*
==============
deflateParams
==============
*/
__int64 deflateParams(z_stream_s *strm, int level, int strategy)
{
  unsigned int v4; 
  internal_state *state; 
  unsigned int v6; 
  __int64 result; 

  v4 = 0;
  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  v6 = 6;
  if ( level != -1 )
    v6 = level;
  if ( v6 > 9 || (unsigned int)strategy > 4 )
    return 4294967294i64;
  if ( strategy != state[44].dummy || configuration_table[state[43].dummy].func != configuration_table[v6].func )
  {
    if ( strm->total_in )
    {
      v4 = j_deflate(strm, 5);
      if ( v4 == -5 && !state[10].dummy )
        v4 = 0;
    }
  }
  if ( state[43].dummy != v6 )
  {
    state[43].dummy = v6;
    state[42].dummy = configuration_table[v6].max_lazy;
    state[45].dummy = configuration_table[v6].good_length;
    state[46].dummy = configuration_table[v6].nice_length;
    state[41].dummy = configuration_table[v6].max_chain;
  }
  result = v4;
  state[44].dummy = strategy;
  return result;
}

/*
==============
deflatePending
==============
*/
__int64 deflatePending(unsigned int *pending, int *bits, z_stream_s *strm)
{
  internal_state *state; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  if ( pending )
    *pending = state[10].dummy;
  if ( bits )
    *bits = strm->state[1477].dummy;
  return 0i64;
}

/*
==============
deflatePrime
==============
*/
__int64 deflatePrime(z_stream_s *strm, int bits, int value)
{
  internal_state *state; 
  int dummy; 
  int v8; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  if ( *(_QWORD *)&state[1470].dummy < (unsigned __int64)(*(_QWORD *)&state[8].dummy + 2i64) )
    return 4294967291i64;
  do
  {
    dummy = state[1477].dummy;
    v8 = bits;
    if ( 16 - dummy <= bits )
      v8 = 16 - dummy;
    LOWORD(state[1476].dummy) |= ((unsigned __int16)value & (unsigned __int16)((1 << v8) - 1)) << dummy;
    state[1477].dummy = v8 + dummy;
    _tr_flush_bits(state);
    value >>= v8;
    bits -= v8;
  }
  while ( bits );
  return 0i64;
}

/*
==============
deflateReset
==============
*/
__int64 deflateReset(z_stream_s *strm)
{
  internal_state *state; 
  int dummy; 
  int v4; 
  unsigned int v5; 
  internal_state *v6; 
  int v7; 
  __int64 v8; 
  __int64 result; 
  int max_chain; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state || !strm->zalloc || !strm->zfree )
    return 4294967294i64;
  strm->data_type = 2;
  strm->total_out = 0;
  strm->total_in = 0;
  strm->msg = NULL;
  dummy = state[11].dummy;
  *(_QWORD *)&state[8].dummy = *(_QWORD *)&state[4].dummy;
  state[10].dummy = 0;
  if ( dummy < 0 )
  {
    dummy = -dummy;
    state[11].dummy = dummy;
  }
  v4 = 113;
  if ( dummy )
    v4 = 42;
  state[2].dummy = v4;
  if ( dummy == 2 )
    v5 = j_crc32(0, NULL, 0);
  else
    v5 = j_adler32_0(0, NULL, 0);
  strm->adler = v5;
  state[16].dummy = 0;
  _tr_init(state);
  v6 = strm->state;
  v7 = v6[29].dummy;
  v6[22].dummy = 2 * v6[17].dummy;
  *(_WORD *)(*(_QWORD *)&v6[26].dummy + 2i64 * (unsigned int)(v7 - 1)) = 0;
  memset_0(*(void **)&v6[26].dummy, 0, 2i64 * (unsigned int)(v6[29].dummy - 1));
  v8 = v6[43].dummy;
  v6[42].dummy = configuration_table[v6[43].dummy].max_lazy;
  v6[45].dummy = configuration_table[v8].good_length;
  result = 0i64;
  v6[46].dummy = configuration_table[v8].nice_length;
  max_chain = configuration_table[v8].max_chain;
  *(_QWORD *)&v6[36].dummy = 0i64;
  v6[33].dummy = 0;
  v6[39].dummy = 0;
  v6[1475].dummy = 0;
  v6[28].dummy = 0;
  v6[41].dummy = max_chain;
  v6[40].dummy = 2;
  v6[34].dummy = 2;
  return result;
}

/*
==============
deflateResetKeep
==============
*/
__int64 deflateResetKeep(z_stream_s *strm)
{
  internal_state *state; 
  int dummy; 
  int v4; 
  unsigned int v5; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state || !strm->zalloc || !strm->zfree )
    return 4294967294i64;
  strm->data_type = 2;
  strm->total_out = 0;
  strm->total_in = 0;
  strm->msg = NULL;
  dummy = state[11].dummy;
  *(_QWORD *)&state[8].dummy = *(_QWORD *)&state[4].dummy;
  state[10].dummy = 0;
  if ( dummy < 0 )
  {
    dummy = -dummy;
    state[11].dummy = dummy;
  }
  v4 = 113;
  if ( dummy )
    v4 = 42;
  state[2].dummy = v4;
  if ( dummy == 2 )
    v5 = j_crc32(0, NULL, 0);
  else
    v5 = j_adler32_0(0, NULL, 0);
  strm->adler = v5;
  state[16].dummy = 0;
  _tr_init(state);
  return 0i64;
}

/*
==============
deflateSetDictionary
==============
*/
__int64 deflateSetDictionary(z_stream_s *strm, const unsigned __int8 *dictionary, unsigned int dictLength)
{
  unsigned int v3; 
  unsigned __int8 *v4; 
  internal_state *state; 
  int dummy; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int avail_in; 
  unsigned __int8 *next_in; 
  unsigned int i; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 result; 

  v3 = dictLength;
  v4 = (unsigned __int8 *)dictionary;
  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  if ( !dictionary )
    return 4294967294i64;
  dummy = state[11].dummy;
  if ( dummy == 2 || dummy == 1 && state[2].dummy != 42 )
    return 4294967294i64;
  if ( state[39].dummy )
    return 4294967294i64;
  if ( dummy == 1 )
    strm->adler = j_adler32_0(strm->adler, dictionary, dictLength);
  v8 = state[17].dummy;
  state[11].dummy = 0;
  if ( v3 >= v8 )
  {
    if ( !dummy )
    {
      *(_WORD *)(*(_QWORD *)&state[26].dummy + 2i64 * (unsigned int)(state[29].dummy - 1)) = 0;
      memset_0(*(void **)&state[26].dummy, 0, 2i64 * (unsigned int)(state[29].dummy - 1));
      v8 = state[17].dummy;
      state[37].dummy = 0;
      state[33].dummy = 0;
      state[1475].dummy = 0;
    }
    v9 = v3 - v8;
    v3 = v8;
    v4 += v9;
  }
  avail_in = strm->avail_in;
  next_in = strm->next_in;
  strm->avail_in = v3;
  strm->next_in = v4;
  fill_window(state);
  for ( i = state[39].dummy; i >= 3; i = state[39].dummy )
  {
    v13 = state[37].dummy;
    v14 = i - 2;
    v15 = (unsigned int)(v13 + 2);
    do
    {
      v16 = *(_QWORD *)&state[26].dummy;
      v17 = *(unsigned __int8 *)(v15 + *(_QWORD *)&state[20].dummy);
      v15 = (unsigned int)(v15 + 1);
      v18 = *(_QWORD *)&state[24].dummy;
      v19 = state[31].dummy & ((state[28].dummy << state[32].dummy) ^ v17);
      v20 = (unsigned int)v13 & state[19].dummy;
      state[28].dummy = v19;
      *(_WORD *)(v18 + 2 * v20) = *(_WORD *)(v16 + 2 * v19);
      *(_WORD *)(*(_QWORD *)&state[26].dummy + 2i64 * (unsigned int)state[28].dummy) = v13++;
      --v14;
    }
    while ( v14 );
    state[37].dummy = v13;
    state[39].dummy = 2;
    fill_window(state);
  }
  state[37].dummy += i;
  state[33].dummy = state[37].dummy;
  result = 0i64;
  state[39].dummy = 0;
  state[36].dummy = 0;
  state[1475].dummy = i;
  state[40].dummy = 2;
  state[34].dummy = 2;
  strm->next_in = next_in;
  strm->avail_in = avail_in;
  state[11].dummy = dummy;
  return result;
}

/*
==============
deflateSetHeader
==============
*/
__int64 deflateSetHeader(z_stream_s *strm, gz_header_s *head)
{
  internal_state *state; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state || state[11].dummy != 2 )
    return 4294967294i64;
  *(_QWORD *)&state[12].dummy = head;
  return 0i64;
}

/*
==============
deflateTune
==============
*/
__int64 deflateTune(z_stream_s *strm, int good_length, int max_lazy, int nice_length, int max_chain)
{
  internal_state *state; 
  __int64 result; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  state[41].dummy = max_chain;
  result = 0i64;
  state[45].dummy = good_length;
  state[42].dummy = max_lazy;
  state[46].dummy = nice_length;
  return result;
}

