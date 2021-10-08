/*
==============
tdefl_calculate_minimum_redundancy
==============
*/
void tdefl_calculate_minimum_redundancy(tdefl_sym_freq *A, int n)
{
  __int64 v2; 
  int v3; 
  tdefl_sym_freq *v4; 
  tdefl_sym_freq *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  tdefl_sym_freq *v10; 
  unsigned __int16 m_key; 
  unsigned __int16 v12; 
  int v13; 
  __int64 v14; 
  tdefl_sym_freq *v15; 
  __int64 v16; 
  int v17; 
  int i; 
  __int64 v19; 
  __int64 v20; 

  if ( n )
  {
    v2 = n;
    v3 = 1;
    v4 = A;
    if ( n == 1 )
    {
      A->m_key = 1;
      return;
    }
    v5 = A + 1;
    A->m_key += A[1].m_key;
    v6 = v2 - 1;
    v7 = 1;
    v8 = 0;
    v9 = 2;
    if ( (int)v2 - 1 > 1 )
    {
      v10 = A + 2;
      while ( 1 )
      {
        if ( v9 >= (int)v2 || A->m_key < v10->m_key )
        {
          ++v8;
          v5->m_key = A->m_key;
          A->m_key = v7;
          ++A;
        }
        else
        {
          ++v9;
          v5->m_key = v10->m_key;
          ++v10;
        }
        if ( v9 >= (int)v2 )
          break;
        if ( v8 < v7 )
        {
          m_key = A->m_key;
          if ( A->m_key < v10->m_key )
            goto LABEL_15;
        }
        ++v9;
        v12 = v10->m_key + v5->m_key;
        ++v10;
        v5->m_key = v12;
LABEL_16:
        ++v7;
        ++v5;
        if ( v7 >= v6 )
          goto LABEL_17;
      }
      m_key = A->m_key;
LABEL_15:
      v5->m_key += m_key;
      ++v8;
      A->m_key = v7;
      ++A;
      goto LABEL_16;
    }
LABEL_17:
    v13 = v2 - 3;
    v14 = v2 - 2;
    v4[v2 - 2].m_key = 0;
    if ( (int)v2 - 3 >= 0 )
    {
      v15 = &v4[v2 - 3];
      do
      {
        v16 = v15->m_key;
        --v15;
        --v13;
        v15[1].m_key = v4[v16].m_key + 1;
      }
      while ( v13 >= 0 );
    }
    v17 = 0;
    do
    {
      for ( i = 0; v14 >= 0; --v14 )
      {
        if ( v4[v14].m_key != v17 )
          break;
        ++i;
      }
      if ( v3 > i )
      {
        v19 = (unsigned int)(v3 - i);
        do
        {
          v20 = v6--;
          v4[v20].m_key = v17;
          --v19;
        }
        while ( v19 );
      }
      v3 = 2 * i;
      ++v17;
    }
    while ( 2 * i > 0 );
  }
}

/*
==============
tdefl_compress_lz_codes
==============
*/
_BOOL8 tdefl_compress_lz_codes(tdefl_compressor *d)
{
  unsigned int m_bits_in; 
  unsigned int v3; 
  unsigned __int8 *m_lz_code_buf; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int8 *m_pOutput_buf; 
  unsigned int m_bit_buffer; 
  unsigned __int8 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  int v25; 
  unsigned int v26; 
  unsigned __int8 *v27; 
  unsigned int v28; 
  int v29; 
  char v30; 
  unsigned __int8 *v31; 
  int v32; 
  int v33; 
  char v34; 
  int v35; 
  unsigned __int8 *v36; 
  unsigned int v37; 
  int v38; 
  unsigned __int8 *v39; 

  m_bits_in = d->m_bits_in;
  v3 = 1;
  m_lz_code_buf = d->m_lz_code_buf;
  if ( d->m_lz_code_buf >= d->m_pLZ_code_buf )
  {
    m_bit_buffer = d->m_bit_buffer;
  }
  else
  {
    v5 = d->m_bit_buffer;
    v6 = d->m_bits_in;
    m_pOutput_buf = d->m_pOutput_buf;
    m_bit_buffer = v5;
    do
    {
      if ( v3 == 1 )
        v3 = *m_lz_code_buf++ | 0x100;
      v9 = *m_lz_code_buf;
      if ( (v3 & 1) != 0 )
      {
        v10 = m_lz_code_buf[2];
        v11 = v9;
        v12 = m_lz_code_buf[1];
        m_lz_code_buf += 3;
        v13 = v12 | (unsigned int)(v10 << 8);
        v14 = s_tdefl_len_sym[v11];
        v15 = d->m_huff_code_sizes[0][v14];
        v16 = m_bit_buffer | (d->m_huff_codes[0][v14] << v6);
        d->m_bit_buffer = v16;
        v17 = v6 + v15;
        for ( d->m_bits_in = v6 + v15; v17 >= 8; d->m_bits_in = v17 )
        {
          m_pOutput_buf = d->m_pOutput_buf;
          if ( m_pOutput_buf < d->m_pOutput_buf_end )
          {
            *m_pOutput_buf = v16;
            m_pOutput_buf = ++d->m_pOutput_buf;
          }
          v16 = d->m_bit_buffer >> 8;
          v17 = d->m_bits_in - 8;
          d->m_bit_buffer = v16;
        }
        v18 = s_tdefl_len_extra[v11];
        v19 = v16 | (((unsigned int)v11 & mz_bitmasks[v18]) << v17);
        v20 = v18 + v17;
        d->m_bit_buffer = v19;
        for ( d->m_bits_in = v18 + v17; v20 >= 8; d->m_bits_in = v20 )
        {
          m_pOutput_buf = d->m_pOutput_buf;
          if ( m_pOutput_buf < d->m_pOutput_buf_end )
          {
            *m_pOutput_buf = v19;
            m_pOutput_buf = ++d->m_pOutput_buf;
          }
          v19 = d->m_bit_buffer >> 8;
          v20 = d->m_bits_in - 8;
          d->m_bit_buffer = v19;
        }
        if ( (unsigned int)v13 >= 0x200 )
        {
          v23 = (unsigned __int64)(unsigned int)v13 >> 8;
          v21 = s_tdefl_large_dist_sym[v23];
          v22 = s_tdefl_large_dist_extra[v23];
        }
        else
        {
          v21 = s_tdefl_small_dist_sym[v13];
          v22 = s_tdefl_small_dist_extra[v13];
        }
        v24 = v22;
        v25 = v19 | (d->m_huff_codes[1][v21] << v20);
        v26 = v20 + d->m_huff_code_sizes[1][v21];
        d->m_bit_buffer = v25;
        d->m_bits_in = v26;
        if ( v26 < 8 )
        {
          m_pOutput_buf = d->m_pOutput_buf;
          v28 = v25;
        }
        else
        {
          v27 = m_pOutput_buf;
          do
          {
            m_pOutput_buf = v27;
            if ( v27 < d->m_pOutput_buf_end )
            {
              *v27 = v25;
              m_pOutput_buf = ++d->m_pOutput_buf;
            }
            v27 = m_pOutput_buf;
            v28 = d->m_bit_buffer >> 8;
            v26 = d->m_bits_in - 8;
            d->m_bit_buffer = v28;
            LOBYTE(v25) = v28;
            d->m_bits_in = v26;
          }
          while ( v26 >= 8 );
        }
        v29 = v13 & mz_bitmasks[v24];
        d->m_bits_in = v24 + v26;
        v30 = v26;
        v6 = v24 + v26;
        m_bits_in = v6;
        v5 = v28 | (v29 << v30);
        d->m_bit_buffer = v5;
        m_bit_buffer = v5;
        if ( v6 >= 8 )
        {
          v31 = m_pOutput_buf;
          do
          {
            m_pOutput_buf = v31;
            if ( v31 < d->m_pOutput_buf_end )
            {
              *v31 = v5;
              m_pOutput_buf = ++d->m_pOutput_buf;
            }
            v31 = m_pOutput_buf;
            v5 = d->m_bit_buffer >> 8;
            m_bits_in = d->m_bits_in - 8;
            d->m_bit_buffer = v5;
            m_bit_buffer = v5;
            d->m_bits_in = m_bits_in;
            v6 = m_bits_in;
          }
          while ( m_bits_in >= 8 );
        }
      }
      else
      {
        ++m_lz_code_buf;
        v32 = d->m_huff_code_sizes[0][v9];
        v33 = d->m_huff_codes[0][v9];
        v34 = m_bits_in;
        m_bits_in += v32;
        v35 = v5 | (v33 << v34);
        d->m_bits_in = m_bits_in;
        d->m_bit_buffer = v35;
        v5 = v35;
        m_bit_buffer = v35;
        v6 = m_bits_in;
        if ( m_bits_in < 8 )
        {
          m_pOutput_buf = d->m_pOutput_buf;
        }
        else
        {
          v36 = m_pOutput_buf;
          do
          {
            m_pOutput_buf = v36;
            if ( v36 < d->m_pOutput_buf_end )
            {
              *v36 = v5;
              m_pOutput_buf = ++d->m_pOutput_buf;
            }
            v36 = m_pOutput_buf;
            v5 = d->m_bit_buffer >> 8;
            m_bits_in = d->m_bits_in - 8;
            d->m_bit_buffer = v5;
            m_bit_buffer = v5;
            d->m_bits_in = m_bits_in;
            v6 = m_bits_in;
          }
          while ( m_bits_in >= 8 );
        }
      }
      v3 >>= 1;
    }
    while ( m_lz_code_buf < d->m_pLZ_code_buf );
  }
  v37 = m_bits_in + d->m_huff_code_sizes[0][256];
  v38 = m_bit_buffer | (d->m_huff_codes[0][256] << m_bits_in);
  d->m_bits_in = v37;
  d->m_bit_buffer = v38;
  if ( v37 < 8 )
    return d->m_pOutput_buf < d->m_pOutput_buf_end;
  do
  {
    v39 = d->m_pOutput_buf;
    if ( v39 < d->m_pOutput_buf_end )
    {
      *v39 = v38;
      v39 = ++d->m_pOutput_buf;
    }
    d->m_bit_buffer >>= 8;
    d->m_bits_in -= 8;
    LOBYTE(v38) = d->m_bit_buffer;
  }
  while ( d->m_bits_in >= 8 );
  return v39 < d->m_pOutput_buf_end;
}

/*
==============
tdefl_compress_normal
==============
*/
_BOOL8 tdefl_compress_normal(tdefl_compressor *d)
{
  const unsigned __int8 *m_pSrc; 
  unsigned __int64 m_src_buf_left; 
  tdefl_flush m_flush; 
  unsigned int m_lookahead_size; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  const unsigned __int8 *v11; 
  unsigned __int8 v12; 
  unsigned __int16 *v13; 
  unsigned int v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int16 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  unsigned int m_dict_size; 
  unsigned int m_saved_match_len; 
  unsigned int *p_m_saved_match_len; 
  unsigned int m_flags; 
  unsigned int v26; 
  unsigned int m_lookahead_pos; 
  unsigned int v28; 
  unsigned __int8 *v29; 
  int v30; 
  unsigned __int8 *v31; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  int v35; 
  __int16 v36; 
  int v37; 
  int v38; 
  int v39; 
  unsigned __int8 *v40; 
  int v41; 
  __int16 v42; 
  __int16 v43; 
  __int16 v44; 
  __int16 v45; 
  __int64 v46; 
  bool v47; 
  unsigned int v48; 
  unsigned __int8 *m_pLZ_code_buf; 
  unsigned __int8 m_saved_lit; 
  unsigned __int8 *v51; 
  unsigned __int8 *v52; 
  unsigned int v53; 
  unsigned __int8 *v54; 
  __int64 v55; 
  __int64 v56; 
  unsigned int m_saved_match_dist; 
  unsigned int v58; 
  unsigned __int8 *v59; 
  __int64 v60; 
  __int64 v61; 
  unsigned __int8 v62; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned int v66; 
  unsigned __int8 *v67; 
  __int64 v68; 
  __int64 v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned __int8 *v73; 
  unsigned int m_total_lz_bytes; 
  int v75; 
  _BOOL8 result; 
  tdefl_flush i; 
  const unsigned __int8 *v78; 
  unsigned __int64 v79; 
  unsigned __int8 *v80; 
  unsigned int v81; 

  m_pSrc = d->m_pSrc;
  m_src_buf_left = d->m_src_buf_left;
  m_flush = d->m_flush;
  v78 = m_pSrc;
  v79 = m_src_buf_left;
  for ( i = m_flush; ; m_flush = i )
  {
    do
    {
      if ( !m_src_buf_left && (m_flush == TDEFL_NO_FLUSH || !d->m_lookahead_size) )
      {
LABEL_121:
        d->m_pSrc = m_pSrc;
        result = 1i64;
        d->m_src_buf_left = m_src_buf_left;
        return result;
      }
      m_lookahead_size = d->m_lookahead_size;
      if ( m_lookahead_size + d->m_dict_size < 2 )
      {
        if ( !m_src_buf_left )
          goto LABEL_24;
        v14 = d->m_lookahead_size;
        do
        {
          if ( v14 >= 0x102 )
            break;
          --m_src_buf_left;
          v15 = *m_pSrc;
          v16 = ((_WORD)v14 + (unsigned __int16)d->m_lookahead_pos) & 0x7FFF;
          ++m_pSrc;
          d->m_dict[v16] = v15;
          if ( (unsigned int)v16 < 0x101 )
            d->m_dict[(unsigned int)(v16 + 0x8000)] = v15;
          v14 = d->m_lookahead_size + 1;
          v17 = v14 + d->m_dict_size;
          d->m_lookahead_size = v14;
          if ( v17 < 3 )
          {
            m_lookahead_size = v14;
          }
          else
          {
            v18 = v14 + d->m_lookahead_pos - 3;
            v19 = v14 + LOWORD(d->m_lookahead_pos) - 3 + 1;
            v20 = ((_WORD)v14 + LOWORD(d->m_lookahead_pos) - 3) & 0x7FFF;
            v21 = ((unsigned __int64)(d->m_dict[v20] & 0x1F) << 10) ^ (v15 ^ (unsigned __int16)(32 * d->m_dict[v19 & 0x7FFF])) & 0x7FFF;
            d->m_next[v20] = d->m_hash[v21];
            d->m_hash[v21] = v18;
            m_lookahead_size = d->m_lookahead_size;
            v14 = m_lookahead_size;
          }
        }
        while ( m_src_buf_left );
        v79 = m_src_buf_left;
        goto LABEL_23;
      }
      v6 = ((_WORD)m_lookahead_size + LOWORD(d->m_lookahead_pos)) & 0x7FFF;
      v7 = m_lookahead_size + d->m_lookahead_pos - 2;
      v8 = (unsigned int)m_src_buf_left;
      LOWORD(v9) = d->m_dict[((_WORD)m_lookahead_size + LOWORD(d->m_lookahead_pos) - 2 + 1) & 0x7FFF] ^ (unsigned __int16)(32 * d->m_dict[((_WORD)m_lookahead_size + LOWORD(d->m_lookahead_pos) - 2) & 0x7FFF]);
      v10 = 258 - m_lookahead_size;
      if ( m_src_buf_left >= v10 )
        v8 = (unsigned int)v10;
      m_lookahead_size += v8;
      m_src_buf_left -= (unsigned int)v8;
      d->m_lookahead_size = m_lookahead_size;
      v79 = m_src_buf_left;
      v11 = &m_pSrc[v8];
      if ( m_pSrc != &m_pSrc[v8] )
      {
        do
        {
          v12 = *m_pSrc++;
          d->m_dict[v6] = v12;
          if ( (unsigned int)v6 < 0x101 )
            d->m_dict[(unsigned int)(v6 + 0x8000)] = v12;
          v9 = (v12 ^ (unsigned __int16)(32 * v9)) & 0x7FFF;
          v6 = ((_WORD)v6 + 1) & 0x7FFF;
          v13 = &d->m_hash[v9];
          d->m_next[v7 & 0x7FFF] = *v13;
          *v13 = v7++;
        }
        while ( m_pSrc != v11 );
        m_lookahead_size = d->m_lookahead_size;
LABEL_23:
        v78 = m_pSrc;
      }
LABEL_24:
      m_dict_size = 0x8000 - m_lookahead_size;
      if ( 0x8000 - m_lookahead_size >= d->m_dict_size )
        m_dict_size = d->m_dict_size;
      d->m_dict_size = m_dict_size;
      if ( m_flush == TDEFL_NO_FLUSH && m_lookahead_size < 0x102 )
        goto LABEL_121;
      m_saved_match_len = d->m_saved_match_len;
      p_m_saved_match_len = &d->m_saved_match_len;
      m_flags = d->m_flags;
      v26 = 0;
      v81 = 0;
      m_lookahead_pos = d->m_lookahead_pos;
      v28 = 2;
      if ( m_saved_match_len )
        v28 = d->m_saved_match_len;
      v29 = (unsigned __int8 *)(m_lookahead_pos & 0x7FFF);
      v30 = 1;
      if ( (m_flags & 0x90000) != 0 )
      {
        if ( m_dict_size && (m_flags & 0x80000) == 0 )
        {
          v28 = 0;
          if ( !m_lookahead_size )
            goto LABEL_38;
          do
          {
            if ( d->m_dict[(unsigned int)v29 + v28] != d->m_dict[((_WORD)v29 - 1) & 0x7FFF] )
              break;
            ++v28;
          }
          while ( v28 < m_lookahead_size );
          m_flags = d->m_flags;
          if ( v28 < 3 )
          {
LABEL_38:
            v28 = 0;
            goto LABEL_74;
          }
          v26 = 1;
        }
      }
      else
      {
        v31 = &d->m_dict[(_QWORD)v29];
        v32 = 20i64;
        v80 = v31;
        v33 = v28;
        if ( v28 >= 0x20 )
          v32 = 24i64;
        LODWORD(v34) = d->m_lookahead_pos & 0x7FFF;
        v35 = *(_DWORD *)((char *)&d->m_pPut_buf_func + v32);
        v36 = *(_WORD *)&d->m_dict[(unsigned int)v29 - 1 + v28];
        if ( m_lookahead_size > v28 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( !--v35 || (v37 = d->m_next[(unsigned int)v34]) == 0 || (v26 = (unsigned __int16)(m_lookahead_pos - v37), v26 > m_dict_size) )
              {
LABEL_69:
                v26 = v81;
                goto LABEL_70;
              }
              v34 = v37 & 0x7FFF;
              if ( *(_WORD *)&d->m_dict[(unsigned int)v34 - 1 + v33] == v36 )
                goto LABEL_125;
              v38 = d->m_next[v34];
              if ( !v38 )
                goto LABEL_69;
              v26 = (unsigned __int16)(m_lookahead_pos - v38);
              if ( v26 > m_dict_size )
                goto LABEL_69;
              v34 = v38 & 0x7FFF;
              if ( *(_WORD *)&d->m_dict[(unsigned int)v34 - 1 + v33] == v36 )
                goto LABEL_125;
              v39 = d->m_next[v34];
              if ( !v39 )
                goto LABEL_69;
              v26 = (unsigned __int16)(m_lookahead_pos - v39);
              if ( v26 > m_dict_size )
                goto LABEL_69;
              v34 = v39 & 0x7FFF;
              if ( *(_WORD *)&d->m_dict[(unsigned int)v34 - 1 + v33] == v36 )
              {
LABEL_125:
                if ( !v26 )
                  goto LABEL_69;
                v40 = &d->m_dict[v34];
                if ( *(_WORD *)v40 == *(_WORD *)v31 )
                  break;
              }
            }
            v29 = v31;
            v41 = 32;
            do
            {
              v42 = *((_WORD *)v40 + 1);
              v40 += 2;
              v29 += 2;
              if ( *(_WORD *)v29 != v42 )
                break;
              v43 = *((_WORD *)v40 + 1);
              v40 += 2;
              v29 += 2;
              if ( *(_WORD *)v29 != v43 )
                break;
              v44 = *((_WORD *)v40 + 1);
              v40 += 2;
              v29 += 2;
              if ( *(_WORD *)v29 != v44 )
                break;
              v45 = *((_WORD *)v40 + 1);
              v40 += 2;
              v29 += 2;
              if ( *(_WORD *)v29 != v45 )
                break;
              --v41;
            }
            while ( v41 );
            if ( !v41 )
              break;
            v46 = (v29 - v80) >> 1;
            v47 = *v29 == *v40;
            LODWORD(v29) = d->m_lookahead_pos & 0x7FFF;
            v48 = v47 + 2 * v46;
            v31 = v80;
            if ( v48 > v33 )
            {
              v81 = v26;
              v33 = v48;
              if ( m_lookahead_size < v48 )
                v33 = m_lookahead_size;
              v28 = v33;
              if ( v33 == m_lookahead_size )
                goto LABEL_70;
              v36 = *(_WORD *)&d->m_dict[v33 - 1 + (d->m_lookahead_pos & 0x7FFF)];
            }
          }
          LODWORD(v29) = d->m_lookahead_pos & 0x7FFF;
          v28 = 258;
          if ( m_lookahead_size < 0x102 )
            v28 = m_lookahead_size;
LABEL_70:
          m_saved_match_len = d->m_saved_match_len;
        }
        m_pSrc = v78;
        m_src_buf_left = v79;
        p_m_saved_match_len = &d->m_saved_match_len;
        m_flags = d->m_flags;
        v30 = 1;
      }
      if ( v28 == 3 && v26 >= 0x2000 )
      {
LABEL_77:
        v28 = 0;
        v26 = 0;
        goto LABEL_78;
      }
LABEL_74:
      if ( (_DWORD)v29 == v26 || (m_flags & 0x20000) != 0 && v28 <= 5 )
        goto LABEL_77;
LABEL_78:
      if ( m_saved_match_len )
      {
        m_pLZ_code_buf = d->m_pLZ_code_buf;
        if ( v28 <= m_saved_match_len )
        {
          d->m_total_lz_bytes += m_saved_match_len;
          m_saved_match_dist = d->m_saved_match_dist;
          *m_pLZ_code_buf = m_saved_match_len - 3;
          v58 = m_saved_match_dist - 1;
          *(_WORD *)(d->m_pLZ_code_buf + 1) = v58;
          d->m_pLZ_code_buf += 3;
          *d->m_pLZ_flags = (*d->m_pLZ_flags >> 1) | 0x80;
          v47 = d->m_num_flags_left-- == 1;
          if ( v47 )
          {
            v59 = d->m_pLZ_code_buf;
            d->m_num_flags_left = 8;
            d->m_pLZ_flags = v59;
            d->m_pLZ_code_buf = v59 + 1;
          }
          v60 = s_tdefl_large_dist_sym[(v58 >> 8) & 0x7F];
          if ( v58 < 0x200 )
            v60 = s_tdefl_small_dist_sym[v58 & 0x1FF];
          ++d->m_huff_count[1][v60];
          if ( m_saved_match_len >= 3 )
          {
            v61 = s_tdefl_len_sym[m_saved_match_len - 3];
            ++d->m_huff_count[0][v61];
          }
          v30 = *p_m_saved_match_len - 1;
          *p_m_saved_match_len = 0;
        }
        else
        {
          ++d->m_total_lz_bytes;
          m_saved_lit = d->m_saved_lit;
          *m_pLZ_code_buf = m_saved_lit;
          ++d->m_pLZ_code_buf;
          *d->m_pLZ_flags >>= 1;
          v47 = d->m_num_flags_left-- == 1;
          if ( v47 )
          {
            v51 = d->m_pLZ_code_buf;
            d->m_num_flags_left = 8;
            d->m_pLZ_flags = v51;
            d->m_pLZ_code_buf = v51 + 1;
          }
          ++d->m_huff_count[0][m_saved_lit];
          if ( v28 < 0x80 )
          {
            d->m_saved_lit = d->m_dict[(unsigned int)v29];
            d->m_saved_match_dist = v26;
            *p_m_saved_match_len = v28;
          }
          else
          {
            v52 = d->m_pLZ_code_buf;
            d->m_total_lz_bytes += v28;
            v53 = v26 - 1;
            *v52 = v28 - 3;
            *(_WORD *)(d->m_pLZ_code_buf + 1) = v26 - 1;
            d->m_pLZ_code_buf += 3;
            *d->m_pLZ_flags = (*d->m_pLZ_flags >> 1) | 0x80;
            v47 = d->m_num_flags_left-- == 1;
            if ( v47 )
            {
              v54 = d->m_pLZ_code_buf;
              d->m_num_flags_left = 8;
              d->m_pLZ_flags = v54;
              d->m_pLZ_code_buf = v54 + 1;
            }
            v55 = s_tdefl_large_dist_sym[(v53 >> 8) & 0x7F];
            if ( v53 < 0x200 )
              v55 = s_tdefl_small_dist_sym[v53 & 0x1FF];
            ++d->m_huff_count[1][v55];
            v56 = s_tdefl_len_sym[v28 - 3];
            ++d->m_huff_count[0][v56];
            v30 = v28;
            *p_m_saved_match_len = 0;
          }
        }
      }
      else if ( v26 )
      {
        if ( d->m_greedy_parsing || (m_flags & 0x10000) != 0 || v28 >= 0x80 )
        {
          v65 = d->m_pLZ_code_buf;
          d->m_total_lz_bytes += v28;
          v66 = v26 - 1;
          *v65 = v28 - 3;
          *(_WORD *)(d->m_pLZ_code_buf + 1) = v26 - 1;
          d->m_pLZ_code_buf += 3;
          *d->m_pLZ_flags = (*d->m_pLZ_flags >> 1) | 0x80;
          v47 = d->m_num_flags_left-- == 1;
          if ( v47 )
          {
            v67 = d->m_pLZ_code_buf;
            d->m_num_flags_left = 8;
            d->m_pLZ_flags = v67;
            d->m_pLZ_code_buf = v67 + 1;
          }
          v68 = s_tdefl_large_dist_sym[(v66 >> 8) & 0x7F];
          if ( v66 < 0x200 )
            v68 = s_tdefl_small_dist_sym[v66 & 0x1FF];
          ++d->m_huff_count[1][v68];
          if ( v28 >= 3 )
          {
            v69 = s_tdefl_len_sym[v28 - 3];
            ++d->m_huff_count[0][v69];
          }
          v30 = v28;
        }
        else
        {
          d->m_saved_lit = d->m_dict[(unsigned int)v29];
          d->m_saved_match_dist = v26;
          *p_m_saved_match_len = v28;
        }
      }
      else
      {
        v62 = d->m_dict[(unsigned int)v29];
        v63 = d->m_pLZ_code_buf;
        ++d->m_total_lz_bytes;
        *v63 = v62;
        ++d->m_pLZ_code_buf;
        *d->m_pLZ_flags >>= 1;
        v47 = d->m_num_flags_left-- == 1;
        if ( v47 )
        {
          v64 = d->m_pLZ_code_buf;
          d->m_num_flags_left = 8;
          d->m_pLZ_flags = v64;
          d->m_pLZ_code_buf = v64 + 1;
        }
        ++d->m_huff_count[0][v62];
      }
      v70 = d->m_dict_size;
      v71 = 0x8000;
      d->m_lookahead_pos += v30;
      v72 = v30 + v70;
      d->m_lookahead_size -= v30;
      if ( v72 < 0x8000 )
        v71 = v72;
      v73 = d->m_pLZ_code_buf;
      d->m_dict_size = v71;
      if ( v73 > &d->m_lz_code_buf[65528] )
        break;
      m_total_lz_bytes = d->m_total_lz_bytes;
      m_flush = i;
    }
    while ( m_total_lz_bytes <= 0x7C00 || (unsigned int)(115 * ((_DWORD)v73 - (_DWORD)d) - 4317790) >> 7 < m_total_lz_bytes && (d->m_flags & 0x80000) == 0 );
    d->m_pSrc = m_pSrc;
    d->m_src_buf_left = m_src_buf_left;
    v75 = tdefl_flush_block(d, 0);
    if ( v75 )
      break;
  }
  return v75 >= 0;
}

/*
==============
tdefl_flush_block
==============
*/
__int64 tdefl_flush_block(tdefl_compressor *d, int flush)
{
  BOOL v2; 
  BOOL v5; 
  unsigned __int64 m_out_buf_ofs; 
  unsigned __int8 *m_output_buf; 
  char m_num_flags_left; 
  unsigned __int8 *m_pLZ_flags; 
  unsigned int m_bits_in; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int8 *m_pOutput_buf; 
  int v14; 
  unsigned int v15; 
  unsigned __int8 *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int8 *v20; 
  unsigned int v21; 
  BOOL v22; 
  __int64 m_total_lz_bytes; 
  unsigned int v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned int m_bit_buffer; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned __int8 *v33; 
  unsigned int v34; 
  int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned __int8 *v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned __int8 *v41; 
  unsigned int v42; 
  unsigned int m_adler32; 
  unsigned int v44; 
  unsigned __int8 *v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned __int8 *v51; 
  unsigned int v52; 
  unsigned int i; 
  unsigned __int8 *v54; 
  unsigned __int8 *v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int j; 
  unsigned __int8 *v59; 
  unsigned __int8 *v60; 
  unsigned int v61; 
  unsigned __int8 *v62; 
  unsigned __int8 *v63; 
  int v64; 
  signed int v65; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  signed int v69; 
  unsigned int v70; 

  v2 = 0;
  v5 = (d->m_flags & 0x80000) != 0 && d->m_lookahead_pos - d->m_lz_code_buf_dict_pos <= d->m_dict_size;
  if ( d->m_pPut_buf_func || (m_out_buf_ofs = d->m_out_buf_ofs, *d->m_pOut_buf_size - m_out_buf_ofs < 0x14CCC) )
    m_output_buf = d->m_output_buf;
  else
    m_output_buf = (unsigned __int8 *)d->m_pOut_buf + m_out_buf_ofs;
  m_num_flags_left = d->m_num_flags_left;
  d->m_pOutput_buf_end = m_output_buf + 85180;
  m_pLZ_flags = d->m_pLZ_flags;
  d->m_pOutput_buf = m_output_buf;
  *(_QWORD *)&d->m_output_flush_ofs = 0i64;
  *m_pLZ_flags >>= m_num_flags_left;
  d->m_pLZ_code_buf -= d->m_num_flags_left == 8;
  if ( (d->m_flags & 0x1000) != 0 && !d->m_block_index )
  {
    m_bits_in = d->m_bits_in;
    v11 = d->m_bit_buffer | (120 << m_bits_in);
    d->m_bit_buffer = v11;
    v12 = m_bits_in + 8;
    d->m_bits_in = m_bits_in + 8;
    if ( m_bits_in < 0xFFFFFFF8 )
    {
      do
      {
        m_pOutput_buf = d->m_pOutput_buf;
        if ( m_pOutput_buf < d->m_pOutput_buf_end )
        {
          *m_pOutput_buf = v11;
          ++d->m_pOutput_buf;
        }
        v11 = d->m_bit_buffer >> 8;
        v12 = d->m_bits_in - 8;
        d->m_bit_buffer = v11;
        d->m_bits_in = v12;
      }
      while ( v12 >= 8 );
    }
    v14 = v11 | (1 << v12);
    v15 = v12 + 8;
    d->m_bit_buffer = v14;
    for ( d->m_bits_in = v15; d->m_bits_in >= 8; LOBYTE(v14) = d->m_bit_buffer )
    {
      v16 = d->m_pOutput_buf;
      if ( v16 < d->m_pOutput_buf_end )
      {
        *v16 = v14;
        ++d->m_pOutput_buf;
      }
      d->m_bit_buffer >>= 8;
      d->m_bits_in -= 8;
    }
  }
  v17 = d->m_bits_in;
  v18 = v17 + 1;
  v19 = d->m_bit_buffer | ((flush == 4) << v17);
  d->m_bit_buffer = v19;
  d->m_bits_in = v17 + 1;
  if ( v17 + 1 < 8 )
  {
    v20 = d->m_pOutput_buf;
    v21 = v19;
  }
  else
  {
    do
    {
      v20 = d->m_pOutput_buf;
      if ( v20 < d->m_pOutput_buf_end )
      {
        *v20 = v19;
        v20 = ++d->m_pOutput_buf;
      }
      v19 = d->m_bits_in;
      v21 = d->m_bit_buffer >> 8;
      d->m_bit_buffer = v21;
      v18 = v19 - 8;
      LOBYTE(v19) = v21;
      d->m_bits_in = v18;
    }
    while ( v18 >= 8 );
  }
  if ( !v5 )
  {
    if ( (d->m_flags & 0x40000) != 0 || d->m_total_lz_bytes < 0x30 )
      tdefl_start_static_block(d);
    else
      tdefl_start_dynamic_block(d);
    v22 = tdefl_compress_lz_codes(d);
    m_total_lz_bytes = d->m_total_lz_bytes;
    v2 = v22;
    if ( !(_DWORD)m_total_lz_bytes || d->m_pOutput_buf - v20 + 1 < m_total_lz_bytes )
      goto LABEL_63;
  }
  if ( d->m_lookahead_pos - d->m_lz_code_buf_dict_pos <= d->m_dict_size )
  {
    v24 = v18 + 2;
    d->m_pOutput_buf = v20;
    d->m_bit_buffer = v21;
    v25 = v20;
    d->m_bits_in = v18 + 2;
    if ( v18 + 2 < 8 )
    {
      m_bit_buffer = d->m_bit_buffer;
    }
    else
    {
      v26 = v20;
      do
      {
        v20 = v25;
        if ( v26 < d->m_pOutput_buf_end )
        {
          *v26 = v21;
          v20 = ++d->m_pOutput_buf;
          v25 = v20;
        }
        v26 = v20;
        v21 = d->m_bit_buffer >> 8;
        v24 = d->m_bits_in - 8;
        d->m_bit_buffer = v21;
        d->m_bits_in = v24;
      }
      while ( v24 >= 8 );
      m_bit_buffer = v21;
    }
    if ( v24 )
    {
      d->m_bit_buffer = v21;
      d->m_bits_in = 8;
      do
      {
        if ( v20 >= d->m_pOutput_buf_end )
        {
          v20 = v25;
        }
        else
        {
          *v20 = v21;
          v20 = ++d->m_pOutput_buf;
          v25 = v20;
        }
        m_bit_buffer = d->m_bit_buffer >> 8;
        v24 = d->m_bits_in - 8;
        d->m_bit_buffer = m_bit_buffer;
        LOBYTE(v21) = m_bit_buffer;
        d->m_bits_in = v24;
      }
      while ( v24 >= 8 );
    }
    v28 = d->m_total_lz_bytes;
    v29 = (unsigned __int16)v28 << v24;
    v30 = v24 + 16;
    v31 = m_bit_buffer | v29;
    d->m_bits_in = v30;
    d->m_bit_buffer = v31;
    if ( v30 >= 8 )
    {
      do
      {
        if ( v25 < d->m_pOutput_buf_end )
        {
          *v25 = v31;
          ++d->m_pOutput_buf;
        }
        v25 = d->m_pOutput_buf;
        v30 = d->m_bits_in - 8;
        v31 = d->m_bit_buffer >> 8;
        d->m_bit_buffer = v31;
        d->m_bits_in = v30;
      }
      while ( v30 >= 8 );
      v28 = d->m_total_lz_bytes;
    }
    v32 = v28 ^ 0xFFFF;
    d->m_total_lz_bytes = v32;
    d->m_bit_buffer = v31 | ((unsigned __int16)v32 << v30);
    d->m_bits_in = v30 + 16;
    if ( v30 + 16 >= 8 )
    {
      do
      {
        v33 = d->m_pOutput_buf;
        if ( v33 < d->m_pOutput_buf_end )
        {
          *v33 = d->m_bit_buffer;
          ++d->m_pOutput_buf;
        }
        d->m_bit_buffer >>= 8;
        d->m_bits_in -= 8;
      }
      while ( d->m_bits_in >= 8 );
      v32 = d->m_total_lz_bytes;
    }
    v34 = 0;
    v35 = v32 ^ 0xFFFF;
    d->m_total_lz_bytes = v35;
    if ( v35 )
    {
      do
      {
        v36 = d->m_bits_in;
        v37 = d->m_bit_buffer | (d->m_dict[((_WORD)v34 + (unsigned __int16)d->m_lz_code_buf_dict_pos) & 0x7FFF] << v36);
        d->m_bit_buffer = v37;
        d->m_bits_in = v36 + 8;
        if ( v36 < 0xFFFFFFF8 )
        {
          do
          {
            v38 = d->m_pOutput_buf;
            if ( v38 < d->m_pOutput_buf_end )
            {
              *v38 = v37;
              ++d->m_pOutput_buf;
            }
            d->m_bit_buffer >>= 8;
            d->m_bits_in -= 8;
            LOBYTE(v37) = d->m_bit_buffer;
          }
          while ( d->m_bits_in >= 8 );
        }
        ++v34;
      }
      while ( v34 < d->m_total_lz_bytes );
    }
  }
  else
  {
LABEL_63:
    if ( !v2 )
    {
      d->m_pOutput_buf = v20;
      d->m_bit_buffer = v21;
      d->m_bits_in = v18;
      tdefl_start_static_block(d);
      tdefl_compress_lz_codes(d);
    }
  }
  if ( flush )
  {
    v39 = d->m_bits_in;
    if ( flush == 4 )
    {
      if ( v39 )
      {
        LOBYTE(v40) = d->m_bit_buffer;
        d->m_bits_in = 8;
        do
        {
          v41 = d->m_pOutput_buf;
          if ( v41 < d->m_pOutput_buf_end )
          {
            *v41 = v40;
            ++d->m_pOutput_buf;
          }
          v42 = d->m_bits_in;
          d->m_bit_buffer >>= 8;
          v39 = v42 - 8;
          v40 = d->m_bit_buffer;
          d->m_bits_in = v39;
        }
        while ( v39 >= 8 );
      }
      if ( (d->m_flags & 0x1000) != 0 )
      {
        m_adler32 = d->m_adler32;
        v44 = d->m_bit_buffer | (HIBYTE(m_adler32) << v39);
        d->m_bit_buffer = v44;
        d->m_bits_in = v39 + 8;
        do
        {
          v45 = d->m_pOutput_buf;
          if ( v45 < d->m_pOutput_buf_end )
          {
            *v45 = v44;
            ++d->m_pOutput_buf;
          }
          v44 = d->m_bit_buffer >> 8;
          v46 = d->m_bits_in - 8;
          d->m_bit_buffer = v44;
          d->m_bits_in = v46;
        }
        while ( v46 >= 8 );
        v47 = m_adler32 << 8;
        v48 = HIBYTE(v47) << v46;
        v49 = v46 + 8;
        v50 = v44 | v48;
        d->m_bits_in = v49;
        d->m_bit_buffer = v50;
        if ( v49 >= 8 )
        {
          do
          {
            v51 = d->m_pOutput_buf;
            if ( v51 < d->m_pOutput_buf_end )
            {
              *v51 = d->m_bit_buffer;
              ++d->m_pOutput_buf;
            }
            d->m_bit_buffer >>= 8;
            v49 = d->m_bits_in - 8;
            d->m_bits_in = v49;
          }
          while ( v49 >= 8 );
          v50 = d->m_bit_buffer;
        }
        v52 = v47 << 8;
        d->m_bit_buffer = v50 | (HIBYTE(v52) << v49);
        d->m_bits_in += 8;
        for ( i = d->m_bits_in; i >= 8; d->m_bits_in = i )
        {
          v54 = d->m_pOutput_buf;
          if ( v54 < d->m_pOutput_buf_end )
          {
            *v54 = d->m_bit_buffer;
            ++d->m_pOutput_buf;
          }
          d->m_bit_buffer >>= 8;
          i = d->m_bits_in - 8;
        }
        d->m_bit_buffer |= v52 << 8 >> 24 << i;
        for ( d->m_bits_in += 8; d->m_bits_in >= 8; d->m_bits_in -= 8 )
        {
          v55 = d->m_pOutput_buf;
          if ( v55 < d->m_pOutput_buf_end )
          {
            *v55 = d->m_bit_buffer;
            ++d->m_pOutput_buf;
          }
          d->m_bit_buffer >>= 8;
        }
      }
    }
    else
    {
      v56 = d->m_bit_buffer;
      v57 = v39 + 3;
      d->m_bits_in = v57;
      for ( j = v56; v57 >= 8; d->m_bits_in = v57 )
      {
        v59 = d->m_pOutput_buf;
        if ( v59 < d->m_pOutput_buf_end )
        {
          *v59 = v56;
          ++d->m_pOutput_buf;
        }
        v56 = d->m_bit_buffer >> 8;
        v57 = d->m_bits_in - 8;
        d->m_bit_buffer = v56;
        j = v56;
      }
      if ( v57 )
      {
        d->m_bit_buffer = v56;
        d->m_bits_in = 8;
        do
        {
          v60 = d->m_pOutput_buf;
          if ( v60 < d->m_pOutput_buf_end )
          {
            *v60 = v56;
            ++d->m_pOutput_buf;
          }
          j = d->m_bit_buffer >> 8;
          v57 = d->m_bits_in - 8;
          d->m_bit_buffer = j;
          LOBYTE(v56) = j;
          d->m_bits_in = v57;
        }
        while ( v57 >= 8 );
      }
      v61 = v57 + 16;
      d->m_bit_buffer = j;
      for ( d->m_bits_in = v57 + 16; v61 >= 8; d->m_bits_in = v61 )
      {
        v62 = d->m_pOutput_buf;
        if ( v62 < d->m_pOutput_buf_end )
        {
          *v62 = j;
          ++d->m_pOutput_buf;
        }
        j = d->m_bit_buffer >> 8;
        v61 = d->m_bits_in - 8;
        d->m_bit_buffer = j;
      }
      d->m_bits_in = v61 + 16;
      for ( d->m_bit_buffer = j | (0xFFFF << v61); d->m_bits_in >= 8; d->m_bits_in -= 8 )
      {
        v63 = d->m_pOutput_buf;
        if ( v63 < d->m_pOutput_buf_end )
        {
          *v63 = d->m_bit_buffer;
          ++d->m_pOutput_buf;
        }
        d->m_bit_buffer >>= 8;
      }
    }
  }
  memset_0(d->m_huff_count, 0, 0x280ui64);
  ++d->m_block_index;
  v64 = (int)d->m_pOutput_buf;
  d->m_pLZ_code_buf = &d->m_lz_code_buf[1];
  d->m_pLZ_flags = d->m_lz_code_buf;
  d->m_lz_code_buf_dict_pos += d->m_total_lz_bytes;
  d->m_num_flags_left = 8;
  d->m_total_lz_bytes = 0;
  v65 = v64 - (_DWORD)m_output_buf;
  if ( v65 )
  {
    if ( d->m_pPut_buf_func )
    {
      *d->m_pIn_buf_size = d->m_pSrc - (const unsigned __int8 *)d->m_pIn_buf;
      if ( !d->m_pPut_buf_func(d->m_output_buf, (unsigned int)v65, d->m_pPut_buf_user) )
      {
        d->m_prev_return_status = TDEFL_STATUS_PUT_BUF_FAILED;
        return 0xFFFFFFFFi64;
      }
    }
    else if ( m_output_buf == d->m_output_buf )
    {
      v67 = d->m_out_buf_ofs;
      v68 = *d->m_pOut_buf_size;
      v69 = v68 - v67;
      if ( v65 < v68 - v67 )
        v69 = v65;
      memcpy_0((char *)d->m_pOut_buf + v67, d->m_output_buf, v69);
      d->m_out_buf_ofs += v69;
      v70 = v65 - v69;
      if ( v70 )
      {
        d->m_output_flush_ofs = v69;
        d->m_output_flush_remaining = v70;
      }
    }
    else
    {
      d->m_out_buf_ofs += v65;
    }
  }
  return d->m_output_flush_remaining;
}

/*
==============
tdefl_flush_output_buffer
==============
*/
_BOOL8 tdefl_flush_output_buffer(tdefl_compressor *d)
{
  unsigned __int64 *m_pIn_buf_size; 
  unsigned __int64 *m_pOut_buf_size; 
  unsigned __int64 m_out_buf_ofs; 
  size_t m_output_flush_remaining; 

  m_pIn_buf_size = d->m_pIn_buf_size;
  if ( m_pIn_buf_size )
    *m_pIn_buf_size = d->m_pSrc - (const unsigned __int8 *)d->m_pIn_buf;
  m_pOut_buf_size = d->m_pOut_buf_size;
  if ( m_pOut_buf_size )
  {
    m_out_buf_ofs = d->m_out_buf_ofs;
    m_output_flush_remaining = *m_pOut_buf_size - m_out_buf_ofs;
    if ( m_output_flush_remaining >= d->m_output_flush_remaining )
      m_output_flush_remaining = d->m_output_flush_remaining;
    memcpy_0((char *)d->m_pOut_buf + m_out_buf_ofs, &d->m_output_buf[d->m_output_flush_ofs], m_output_flush_remaining);
    d->m_output_flush_ofs += m_output_flush_remaining;
    d->m_output_flush_remaining -= m_output_flush_remaining;
    d->m_out_buf_ofs += m_output_flush_remaining;
    *d->m_pOut_buf_size = d->m_out_buf_ofs;
  }
  return d->m_finished && !d->m_output_flush_remaining;
}

/*
==============
tdefl_optimize_huffman_table
==============
*/
void tdefl_optimize_huffman_table(tdefl_compressor *d, int table_num, int table_len, int code_size_limit, int static_table)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  int v13; 
  unsigned __int16 *v14; 
  int v15; 
  unsigned __int16 *p_m_sym_index; 
  tdefl_sym_freq *v17; 
  tdefl_sym_freq *v18; 
  __int64 v19; 
  __int64 m_key; 
  int v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  char v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int *v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned __int8 *v47; 
  __int64 v48; 
  unsigned __int16 v49; 
  unsigned int v50; 
  __int16 v51; 
  tdefl_sym_freq *v52; 
  __int64 v53; 
  int v54; 
  int v55[35]; 
  tdefl_sym_freq pSyms0; 
  int v57[287]; 
  tdefl_sym_freq pSyms1; 

  v5 = (unsigned int)table_len;
  v7 = table_num;
  v8 = code_size_limit;
  memset_0(&v54, 0, 0x84ui64);
  v9 = v7;
  if ( static_table )
  {
    if ( (int)v5 > 0 )
    {
      v10 = (unsigned int)v5;
      v11 = d->m_huff_code_sizes[v7];
      do
      {
        v12 = *v11++;
        ++v55[v12 - 1];
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    v13 = 0;
    v53 = (__int64)d + 576 * v7;
    v14 = (unsigned __int16 *)(v53 + 33226);
    v15 = 0;
    if ( (int)v5 > 0 )
    {
      p_m_sym_index = &pSyms0.m_sym_index;
      do
      {
        if ( *v14 )
        {
          ++v13;
          *(p_m_sym_index - 1) = *v14;
          *p_m_sym_index = v15;
          p_m_sym_index += 2;
        }
        ++v15;
        ++v14;
      }
      while ( v15 < (int)v5 );
    }
    v52 = tdefl_radix_sort_syms(v13, &pSyms0, &pSyms1);
    v17 = v52;
    tdefl_calculate_minimum_redundancy(v52, v13);
    if ( v13 > 0 )
    {
      v18 = v52;
      v19 = (unsigned int)v13;
      do
      {
        m_key = v18->m_key;
        ++v18;
        ++v55[m_key - 1];
        --v19;
      }
      while ( v19 );
    }
    v21 = 0;
    v22 = 1;
    if ( v13 > 1 )
    {
      v23 = (int)v8 + 1;
      if ( v23 <= 32 )
      {
        v24 = v55[v8 - 1];
        do
        {
          v24 += v55[v23++ - 1];
          v55[v8 - 1] = v24;
        }
        while ( v23 <= 32 );
      }
      v25 = 0;
      v26 = 0;
      LOBYTE(v27) = v8;
      v28 = v8;
      if ( v8 >= 2 )
      {
        v29 = 0;
        v27 = v8 - (2 * ((unsigned __int64)(v8 - 2) >> 1) + 2);
        do
        {
          v30 = v29 + 1;
          v25 += v55[v28 - 1] << v29;
          v29 += 2;
          v31 = *((_DWORD *)&v53 + v28 + 1);
          v28 -= 2i64;
          v26 += v31 << v30;
        }
        while ( v28 > 1 );
      }
      if ( v28 > 0 )
        v21 = v55[v28 - 1] << (v8 - v27);
      v32 = v26 + v25 + v21;
      if ( v32 != 1 << v8 )
      {
        v33 = (unsigned int)(v32 - (1 << v8));
        do
        {
          --v55[v8 - 1];
          v34 = v8 - 1;
          if ( v8 - 1 > 0 )
          {
            while ( 1 )
            {
              v35 = v55[v34 - 1];
              if ( v35 )
                break;
              if ( --v34 <= 0 )
                goto LABEL_30;
            }
            v55[v34] += 2;
            v55[v34 - 1] = v35 - 1;
          }
LABEL_30:
          --v33;
        }
        while ( v33 );
      }
      v17 = v52;
    }
    memset_0(d->m_huff_code_sizes[v9], 0, sizeof(d->m_huff_code_sizes[v9]));
    memset_0((void *)(v53 + 34954), 0, 0x240ui64);
    if ( (int)v8 >= 1 )
    {
      v36 = v13;
      v37 = v55;
      do
      {
        v38 = (unsigned int)*v37;
        if ( (int)v38 > 0 )
        {
          v39 = (__int64)&v17[v36].m_sym_index;
          v36 -= v38;
          do
          {
            v40 = *(unsigned __int16 *)(v39 - 4);
            v39 -= 4i64;
            LODWORD(v38) = v38 - 1;
            d->m_huff_code_sizes[v9][v40] = v22;
          }
          while ( (int)v38 > 0 );
        }
        ++v22;
        ++v37;
      }
      while ( v22 <= (int)v8 );
    }
  }
  v41 = 0;
  v57[0] = 0;
  if ( (int)v8 >= 2 )
  {
    v42 = 0i64;
    v43 = (unsigned int)(v8 - 1);
    do
    {
      v44 = v55[v42++] + v41;
      v41 = 2 * v44;
      v57[v42] = v41;
      --v43;
    }
    while ( v43 );
  }
  if ( (int)v5 > 0 )
  {
    v45 = v5;
    v46 = 0i64;
    v47 = d->m_huff_code_sizes[v9];
    do
    {
      v48 = v47[v46];
      v49 = 0;
      if ( v47[v46] )
      {
        v50 = *((_DWORD *)&pSyms0 + v48);
        *((_DWORD *)&pSyms0 + v48) = v50 + 1;
        do
        {
          v51 = v50 & 1;
          v50 >>= 1;
          LODWORD(v48) = v48 - 1;
          v49 = (2 * v49) | v51;
        }
        while ( (int)v48 > 0 );
        d->m_huff_codes[v9][v46] = v49;
      }
      ++v46;
      --v45;
    }
    while ( v45 );
  }
}

/*
==============
tdefl_radix_sort_syms
==============
*/
tdefl_sym_freq *tdefl_radix_sort_syms(unsigned int num_syms, tdefl_sym_freq *pSyms0, tdefl_sym_freq *pSyms1)
{
  __int64 v4; 
  unsigned int v6; 
  tdefl_sym_freq *v7; 
  __int64 v8; 
  unsigned int m_key; 
  unsigned int v10; 
  int v11; 
  bool v12; 
  char v13; 
  unsigned int i; 
  int v15; 
  signed __int64 v16; 
  int *v17; 
  __int64 v18; 
  int v19; 
  tdefl_sym_freq *v20; 
  __int64 v21; 
  tdefl_sym_freq v22; 
  __int64 v23; 
  tdefl_sym_freq *v24; 
  int v26[256]; 
  int v27[512]; 

  v4 = num_syms;
  v6 = 2;
  memset_0(v27, 0, sizeof(v27));
  if ( (_DWORD)v4 )
  {
    v7 = pSyms0;
    v8 = (unsigned int)v4;
    do
    {
      m_key = v7->m_key;
      ++v7;
      ++v27[(unsigned __int8)m_key];
      ++v27[(m_key >> 8) + 256];
      --v8;
    }
    while ( v8 );
  }
  while ( 1 )
  {
    v10 = v6--;
    v11 = v27[256 * v6];
    v12 = (_DWORD)v4 == v11;
    if ( (_DWORD)v4 != v11 )
      break;
    if ( v6 <= 1 )
    {
      v12 = (_DWORD)v4 == v11;
      break;
    }
  }
  if ( !v12 )
    v6 = v10;
  v13 = 0;
  for ( i = 0; i < v6; pSyms1 = v24 )
  {
    v15 = 0;
    v16 = (char *)&v27[256 * i] - (char *)v26;
    v17 = v26;
    v18 = 128i64;
    do
    {
      *v17 = v15;
      v19 = *(int *)((char *)v17 + v16) + v15;
      v17[1] = v19;
      v15 = *(int *)((char *)v17 + v16 + 4) + v19;
      v17 += 2;
      --v18;
    }
    while ( v18 );
    if ( (_DWORD)v4 )
    {
      v20 = pSyms0;
      v21 = v4;
      do
      {
        v22 = *v20++;
        pSyms1[v26[(unsigned __int8)((unsigned __int64)v22.m_key >> v13)]] = v22;
        v23 = (unsigned __int8)((unsigned __int64)v20[-1].m_key >> v13);
        ++v26[v23];
        --v21;
      }
      while ( v21 );
    }
    v24 = pSyms0;
    ++i;
    v13 += 8;
    pSyms0 = pSyms1;
  }
  return pSyms0;
}

/*
==============
tdefl_start_dynamic_block
==============
*/
void tdefl_start_dynamic_block(tdefl_compressor *d)
{
  __int64 v1; 
  unsigned __int8 v3; 
  int v4; 
  __int64 i; 
  int v6; 
  __int64 j; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  char v31; 
  unsigned int m_bits_in; 
  int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned __int8 *m_pOutput_buf; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned __int8 *v40; 
  int v41; 
  unsigned __int8 *v42; 
  int v43; 
  __int64 k; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  unsigned __int8 *v48; 
  int m; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned __int8 *v52; 
  __int64 v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned __int8 *v57; 
  unsigned int v58; 
  unsigned int v59; 
  int v60; 
  unsigned __int8 *v61; 
  char v62[320]; 
  char v63[320]; 

  v1 = 0i64;
  d->m_huff_count[0][256] = 1;
  v3 = -1;
  tdefl_optimize_huffman_table(d, 0, 288, 15, 0);
  tdefl_optimize_huffman_table(d, 1, 32, 15, 0);
  v4 = 286;
  for ( i = 286i64; i > 257; --i )
  {
    if ( *((_BYTE *)&d->m_huff_codes[2][287] + i + 1) )
      break;
    --v4;
  }
  v6 = 30;
  for ( j = 30i64; j > 1; --j )
  {
    if ( d->m_huff_code_sizes[0][j + 287] )
      break;
    --v6;
  }
  memcpy_0(v63, d->m_huff_code_sizes, v4);
  memcpy_0(&v63[v4], d->m_huff_code_sizes[1], v6);
  *(_QWORD *)&d->m_huff_count[2][0] = 0i64;
  v8 = 0;
  *(_QWORD *)&d->m_huff_count[2][4] = 0i64;
  v9 = 0;
  *(_QWORD *)&d->m_huff_count[2][8] = 0i64;
  v10 = 0i64;
  *(_QWORD *)&d->m_huff_count[2][12] = 0i64;
  v11 = 0;
  *(_DWORD *)&d->m_huff_count[2][16] = 0;
  d->m_huff_count[2][18] = 0;
  if ( v6 + v4 )
  {
    v12 = (unsigned __int8 *)v63;
    while ( 1 )
    {
      v13 = *v12;
      if ( !*v12 )
      {
        if ( (_DWORD)v10 )
        {
          if ( (unsigned int)v10 >= 3 )
          {
            ++d->m_huff_count[2][16];
            v15 = v8;
            v16 = v8 + 1;
            v62[v15] = 16;
            v62[v16] = v10 - 3;
            v8 = v16 + 1;
          }
          else
          {
            d->m_huff_count[2][v3] += v10;
            do
            {
              v14 = v8++;
              v62[v14] = v3;
              LODWORD(v10) = v10 - 1;
            }
            while ( (_DWORD)v10 );
          }
          v10 = 0i64;
        }
        if ( ++v9 != 138 )
          goto LABEL_42;
        ++d->m_huff_count[2][18];
        v9 = 0;
        v17 = v8++;
        v62[v17] = 18;
        v62[v8] = 127;
        goto LABEL_41;
      }
      if ( v9 )
      {
        if ( v9 < 3 )
        {
          d->m_huff_count[2][0] += v9;
          while ( 1 )
          {
            v18 = v8;
            --v9;
            ++v8;
            if ( v18 >= 0x140 )
              goto LABEL_102;
            v62[v18] = 0;
            if ( !v9 )
              goto LABEL_29;
          }
        }
        v19 = v8;
        v20 = v8 + 1;
        if ( v9 > 0xA )
        {
          ++d->m_huff_count[2][18];
          v21 = v9 - 11;
          v62[v19] = 18;
        }
        else
        {
          ++d->m_huff_count[2][17];
          v21 = v9 - 3;
          v62[v19] = 17;
        }
        v62[v20] = v21;
        v8 = v20 + 1;
LABEL_29:
        v9 = 0;
      }
      if ( v13 != v3 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (_DWORD)v10 == 6 )
      {
        ++d->m_huff_count[2][16];
        v10 = 0i64;
        v25 = v8++;
        v62[v25] = 16;
        v62[v8] = 3;
LABEL_41:
        ++v8;
      }
LABEL_42:
      ++v11;
      ++v12;
      v3 = v13;
      if ( v11 >= v6 + v4 )
      {
        if ( (_DWORD)v10 )
        {
          if ( (unsigned int)v10 < 3 )
          {
            d->m_huff_count[2][v13] += v10;
            do
            {
              v26 = v8++;
              v62[v26] = v13;
              LODWORD(v10) = v10 - 1;
            }
            while ( (_DWORD)v10 );
            goto LABEL_60;
          }
          ++d->m_huff_count[2][16];
          v27 = v8;
          v28 = v8 + 1;
          v62[v27] = 16;
          v62[v28] = v10 - 3;
LABEL_59:
          v8 = v28 + 1;
          goto LABEL_60;
        }
        if ( !v9 )
          goto LABEL_60;
        if ( v9 >= 3 )
        {
          v30 = v8;
          v28 = v8 + 1;
          if ( v9 > 0xA )
          {
            ++d->m_huff_count[2][18];
            v31 = v9 - 11;
            v62[v30] = 18;
          }
          else
          {
            ++d->m_huff_count[2][17];
            v31 = v9 - 3;
            v62[v30] = 17;
          }
          v62[v28] = v31;
          goto LABEL_59;
        }
        d->m_huff_count[2][0] += v9;
        while ( 1 )
        {
          v29 = v8;
          --v9;
          ++v8;
          if ( v29 >= 0x140 )
            break;
          v62[v29] = 0;
          if ( !v9 )
            goto LABEL_60;
        }
LABEL_102:
        j___report_rangecheckfailure(v10);
        JUMPOUT(0x143781530i64);
      }
    }
    if ( (_DWORD)v10 )
    {
      if ( (unsigned int)v10 >= 3 )
      {
        ++d->m_huff_count[2][16];
        v23 = v8;
        v24 = v8 + 1;
        v62[v23] = 16;
        v62[v24] = v10 - 3;
        v8 = v24 + 1;
      }
      else
      {
        d->m_huff_count[2][v3] += v10;
        do
        {
          v22 = v8++;
          v62[v22] = v3;
          LODWORD(v10) = v10 - 1;
        }
        while ( (_DWORD)v10 );
      }
      v10 = 0i64;
    }
    ++d->m_huff_count[2][v13];
    v62[v8] = v13;
    goto LABEL_41;
  }
LABEL_60:
  tdefl_optimize_huffman_table(d, 2, 19, 7, 0);
  m_bits_in = d->m_bits_in;
  v33 = 2 << m_bits_in;
  v34 = m_bits_in + 2;
  v35 = d->m_bit_buffer | v33;
  d->m_bit_buffer = v35;
  for ( d->m_bits_in = v34; v34 >= 8; d->m_bits_in = v34 )
  {
    m_pOutput_buf = d->m_pOutput_buf;
    if ( m_pOutput_buf < d->m_pOutput_buf_end )
    {
      *m_pOutput_buf = v35;
      ++d->m_pOutput_buf;
    }
    v35 = d->m_bit_buffer >> 8;
    v34 = d->m_bits_in - 8;
    d->m_bit_buffer = v35;
  }
  v37 = (v4 - 257) << v34;
  v38 = v34 + 5;
  v39 = v35 | v37;
  d->m_bits_in = v38;
  for ( d->m_bit_buffer = v39; v38 >= 8; d->m_bits_in = v38 )
  {
    v40 = d->m_pOutput_buf;
    if ( v40 < d->m_pOutput_buf_end )
    {
      *v40 = v39;
      ++d->m_pOutput_buf;
    }
    v39 = d->m_bit_buffer >> 8;
    v38 = d->m_bits_in - 8;
    d->m_bit_buffer = v39;
  }
  d->m_bits_in = v38 + 5;
  v41 = v39 | ((v6 - 1) << v38);
  for ( d->m_bit_buffer = v41; d->m_bits_in >= 8; LOBYTE(v41) = d->m_bit_buffer )
  {
    v42 = d->m_pOutput_buf;
    if ( v42 < d->m_pOutput_buf_end )
    {
      *v42 = v41;
      ++d->m_pOutput_buf;
    }
    d->m_bit_buffer >>= 8;
    d->m_bits_in -= 8;
  }
  v43 = 18;
  for ( k = 18i64; k >= 0; --k )
  {
    if ( d->m_huff_code_sizes[2][s_tdefl_packed_code_size_syms_swizzle[k]] )
      break;
    --v43;
  }
  v45 = d->m_bits_in;
  v46 = v43 + 1;
  if ( v43 + 1 < 4 )
    v46 = 4;
  d->m_bits_in = v45 + 4;
  v47 = d->m_bit_buffer | ((v46 - 4) << v45);
  for ( d->m_bit_buffer = v47; d->m_bits_in >= 8; LOBYTE(v47) = d->m_bit_buffer )
  {
    v48 = d->m_pOutput_buf;
    if ( v48 < d->m_pOutput_buf_end )
    {
      *v48 = v47;
      ++d->m_pOutput_buf;
    }
    d->m_bit_buffer >>= 8;
    d->m_bits_in -= 8;
  }
  for ( m = 0; m < v46; ++m )
  {
    v50 = d->m_bits_in;
    v51 = d->m_bit_buffer | (d->m_huff_code_sizes[2][s_tdefl_packed_code_size_syms_swizzle[m]] << v50);
    d->m_bit_buffer = v51;
    for ( d->m_bits_in = v50 + 3; d->m_bits_in >= 8; LOBYTE(v51) = d->m_bit_buffer )
    {
      v52 = d->m_pOutput_buf;
      if ( v52 < d->m_pOutput_buf_end )
      {
        *v52 = v51;
        ++d->m_pOutput_buf;
      }
      d->m_bit_buffer >>= 8;
      d->m_bits_in -= 8;
    }
  }
  if ( v8 )
  {
    do
    {
      v53 = (unsigned __int8)v62[v1];
      v1 = (unsigned int)(v1 + 1);
      v54 = d->m_bits_in;
      v55 = v54 + d->m_huff_code_sizes[2][v53];
      v56 = d->m_bit_buffer | (d->m_huff_codes[2][v53] << v54);
      d->m_bit_buffer = v56;
      d->m_bits_in = v55;
      if ( v55 < 8 )
      {
        v58 = v56;
      }
      else
      {
        do
        {
          v57 = d->m_pOutput_buf;
          if ( v57 < d->m_pOutput_buf_end )
          {
            *v57 = v56;
            ++d->m_pOutput_buf;
          }
          v58 = d->m_bit_buffer >> 8;
          v55 = d->m_bits_in - 8;
          d->m_bit_buffer = v58;
          LOBYTE(v56) = v58;
          d->m_bits_in = v55;
        }
        while ( v55 >= 8 );
      }
      if ( (unsigned int)v53 >= 0x10 )
      {
        v59 = v55 + byte_14471D8FC[(unsigned int)(v53 - 16)];
        v60 = v58 | ((unsigned __int8)v62[v1] << v55);
        d->m_bits_in = v59;
        v1 = (unsigned int)(v1 + 1);
        d->m_bit_buffer = v60;
        if ( v59 >= 8 )
        {
          v61 = d->m_pOutput_buf;
          do
          {
            if ( v61 < d->m_pOutput_buf_end )
            {
              *v61 = v60;
              v61 = ++d->m_pOutput_buf;
            }
            d->m_bit_buffer >>= 8;
            d->m_bits_in -= 8;
            LOBYTE(v60) = d->m_bit_buffer;
          }
          while ( d->m_bits_in >= 8 );
        }
      }
    }
    while ( (unsigned int)v1 < v8 );
  }
}

/*
==============
tdefl_start_static_block
==============
*/
void tdefl_start_static_block(tdefl_compressor *d)
{
  unsigned __int8 (*m_huff_code_sizes)[288]; 
  unsigned __int8 (*v3)[288]; 
  __int64 v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  unsigned __int8 (*v7)[288]; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  unsigned __int16 (*m_huff_codes)[288]; 
  __int64 v15; 
  __int16 v16; 
  unsigned int v17; 
  __int16 v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  unsigned __int16 *v25; 
  __int64 v26; 
  unsigned __int16 v27; 
  unsigned int v28; 
  __int16 v29; 
  unsigned int m_bits_in; 
  unsigned int v31; 
  unsigned __int8 *m_pOutput_buf; 
  int v33[37]; 
  int v34[35]; 

  m_huff_code_sizes = d->m_huff_code_sizes;
  v3 = d->m_huff_code_sizes;
  v4 = 2i64;
  do
  {
    memset(v3, 8, 24);
    v3 = (unsigned __int8 (*)[288])((char *)v3 + 64);
    memset(&(*v3)[-40], 8, 40);
    --v4;
  }
  while ( v4 );
  *(_QWORD *)v3 = 0x808080808080808i64;
  v5 = d->m_huff_code_sizes[1];
  *(_QWORD *)&(*v3)[8] = 0x808080808080808i64;
  memset(&(*m_huff_code_sizes)[144], 9, 0x70ui64);
  *(_QWORD *)&(*m_huff_code_sizes)[256] = 0x707070707070707i64;
  *(_QWORD *)&(*m_huff_code_sizes)[264] = 0x707070707070707i64;
  *(_QWORD *)&(*m_huff_code_sizes)[272] = 0x707070707070707i64;
  *(_DWORD *)&(*m_huff_code_sizes)[280] = 134744072;
  *(_DWORD *)&(*m_huff_code_sizes)[284] = 134744072;
  *(_QWORD *)&d->m_huff_code_sizes[1][0] = 0x505050505050505i64;
  *(_QWORD *)&d->m_huff_code_sizes[1][8] = 0x505050505050505i64;
  *(_QWORD *)&d->m_huff_code_sizes[1][16] = 0x505050505050505i64;
  *(_QWORD *)&d->m_huff_code_sizes[1][24] = 0x505050505050505i64;
  memset_0(v33, 0, 0x84ui64);
  v6 = 288i64;
  v7 = m_huff_code_sizes;
  v8 = 288i64;
  do
  {
    v9 = *(_BYTE *)v7;
    v7 = (unsigned __int8 (*)[288])((char *)v7 + 1);
    ++v33[v9];
    --v8;
  }
  while ( v8 );
  v10 = 14i64;
  v34[0] = 0;
  v11 = 14i64;
  v12 = 0;
  do
  {
    v13 = *(int *)((char *)&v33[1] + v8) + v12;
    v8 += 4i64;
    v12 = 2 * v13;
    *(int *)((char *)v34 + v8) = v12;
    --v11;
  }
  while ( v11 );
  m_huff_codes = d->m_huff_codes;
  do
  {
    v15 = *(_BYTE *)m_huff_code_sizes;
    v16 = 0;
    if ( *(_BYTE *)m_huff_code_sizes )
    {
      v17 = v33[v15 + 36];
      v33[v15 + 36] = v17 + 1;
      do
      {
        v18 = v17 & 1;
        v17 >>= 1;
        LODWORD(v15) = v15 - 1;
        v16 = (2 * v16) | v18;
      }
      while ( (int)v15 > 0 );
      *(_WORD *)m_huff_codes = v16;
    }
    m_huff_codes = (unsigned __int16 (*)[288])((char *)m_huff_codes + 2);
    m_huff_code_sizes = (unsigned __int8 (*)[288])((char *)m_huff_code_sizes + 1);
    --v6;
  }
  while ( v6 );
  memset_0(v33, 0, 0x84ui64);
  v19 = 32i64;
  v20 = d->m_huff_code_sizes[1];
  v21 = 32i64;
  do
  {
    v22 = *v20++;
    ++v33[v22];
    --v21;
  }
  while ( v21 );
  v34[0] = 0;
  v23 = 0;
  do
  {
    v24 = *(int *)((char *)&v33[1] + v21) + v23;
    v21 += 4i64;
    v23 = 2 * v24;
    *(int *)((char *)v34 + v21) = v23;
    --v10;
  }
  while ( v10 );
  v25 = d->m_huff_codes[1];
  do
  {
    v26 = *v5;
    v27 = 0;
    if ( *v5 )
    {
      v28 = v33[v26 + 36];
      v33[v26 + 36] = v28 + 1;
      do
      {
        v29 = v28 & 1;
        v28 >>= 1;
        LODWORD(v26) = v26 - 1;
        v27 = (2 * v27) | v29;
      }
      while ( (int)v26 > 0 );
      *v25 = v27;
    }
    ++v25;
    ++v5;
    --v19;
  }
  while ( v19 );
  m_bits_in = d->m_bits_in;
  v31 = d->m_bit_buffer | (1 << m_bits_in);
  m_bits_in += 2;
  d->m_bit_buffer = v31;
  for ( d->m_bits_in = m_bits_in; d->m_bits_in >= 8; LOBYTE(v31) = d->m_bit_buffer )
  {
    m_pOutput_buf = d->m_pOutput_buf;
    if ( m_pOutput_buf < d->m_pOutput_buf_end )
    {
      *m_pOutput_buf = v31;
      ++d->m_pOutput_buf;
    }
    d->m_bit_buffer >>= 8;
    d->m_bits_in -= 8;
  }
}

