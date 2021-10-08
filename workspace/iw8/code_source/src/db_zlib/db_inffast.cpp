/*
==============
db_inflate_fast
==============
*/

int __fastcall db_inflate_fast(unsigned int bl, unsigned int bd, db_inflate_huft_s *tl, db_inflate_huft_s *td, db_inflate_blocks_state *s, db_z_stream_s *z)
{
  return ?db_inflate_fast@@YAHIIPEAUdb_inflate_huft_s@@0PEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@@Z(bl, bd, tl, td, s, z);
}

/*
==============
db_inflate_fast
==============
*/
__int64 db_inflate_fast(unsigned int bl, unsigned int bd, db_inflate_huft_s *tl, db_inflate_huft_s *td, db_inflate_blocks_state *s, db_z_stream_s *z)
{
  db_inflate_huft_s *v6; 
  db_inflate_huft_s *v7; 
  unsigned __int8 *write; 
  unsigned __int8 *read; 
  unsigned __int8 *next_in; 
  unsigned int avail_in; 
  unsigned int bitb; 
  unsigned int bitk; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  int Bits; 
  db_inflate_huft_s *v19; 
  int Exop; 
  unsigned __int64 v21; 
  int v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int i; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  db_inflate_huft_s *v31; 
  unsigned __int64 v32; 
  int v33; 
  __int64 j; 
  unsigned int v35; 
  __int64 v36; 
  unsigned __int8 *window; 
  unsigned __int8 *v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned __int8 v41; 
  unsigned __int8 *v42; 
  unsigned __int8 v43; 
  unsigned __int8 *v44; 
  unsigned int v45; 
  unsigned __int8 v46; 
  unsigned __int8 *v47; 
  unsigned int v48; 
  unsigned __int8 v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned __int8 *v52; 
  __int64 result; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 

  v6 = td;
  v7 = tl;
  write = s->write;
  read = s->read;
  next_in = z->next_in;
  avail_in = z->avail_in;
  bitb = s->bitb;
  bitk = s->bitk;
  if ( write >= read )
    v14 = LODWORD(s->end) - (_DWORD)write;
  else
    v14 = (_DWORD)read - (_DWORD)write - 1;
  v15 = db_inflate_mask[bl];
  v16 = db_inflate_mask[bd];
  while ( 1 )
  {
    for ( ; bitk < 0x14; bitk += 8 )
    {
      --avail_in;
      bitb |= *next_in++ << bitk;
    }
    v17 = bitb & v15;
    Bits = v7[v17].word.what.Bits;
    bitb >>= Bits;
    bitk -= Bits;
    v19 = &v7[v17];
    Exop = v19->word.what.Exop;
    if ( v19->word.what.Exop )
      break;
LABEL_8:
    *write++ = v19->base;
    --v14;
LABEL_34:
    if ( v14 < 0x102 || avail_in < 0xA )
    {
      v50 = z->avail_in - avail_in;
      v51 = bitk >> 3;
      s->bitb = bitb;
      if ( bitk >> 3 >= v50 )
        v51 = v50;
      v52 = &next_in[-v51];
      s->bitk = bitk - 8 * v51;
      z->avail_in = v51 + avail_in;
      z->total_in += (_DWORD)v52 - LODWORD(z->next_in);
      result = 0i64;
      goto LABEL_39;
    }
  }
  if ( (Exop & 0x10) != 0 )
  {
LABEL_13:
    v23 = Exop & 0xF;
    v24 = bitk - v23;
    v25 = bitb & db_inflate_mask[v23];
    v26 = bitb >> v23;
    for ( i = v19->base + v25; v24 < 0xF; v24 += 8 )
    {
      --avail_in;
      v26 |= *next_in++ << v24;
    }
    v28 = v26 & v16;
    v29 = v6[v28].word.what.Bits;
    v30 = v6[v28].word.what.Exop;
    v31 = &v6[v28];
    bitb = v26 >> v29;
    bitk = v24 - v29;
    if ( (v30 & 0x10) == 0 )
    {
      while ( (v30 & 0x40) == 0 )
      {
        v32 = v31->base + (unsigned __int64)(bitb & db_inflate_mask[v30]);
        v33 = v31[v32].word.what.Bits;
        v30 = v31[v32].word.what.Exop;
        v31 += v32;
        bitb >>= v33;
        bitk -= v33;
        if ( (v30 & 0x10) != 0 )
          goto LABEL_18;
      }
      v56 = z->avail_in;
      z->msg = "invalid distance code";
      v57 = v56 - avail_in;
      v54 = bitk >> 3;
      if ( bitk >> 3 >= v57 )
        v54 = v57;
      goto LABEL_46;
    }
LABEL_18:
    for ( j = v30 & 0xF; bitk < (unsigned int)j; bitk += 8 )
    {
      --avail_in;
      bitb |= *next_in++ << bitk;
    }
    bitk -= j;
    v35 = bitb & db_inflate_mask[j];
    v14 -= i;
    bitb >>= j;
    v36 = v31->base + v35;
    window = s->window;
    v38 = &write[-v36];
    if ( &write[-v36] >= window )
    {
      v47 = v38 + 2;
      *write = *v38;
      write[1] = v38[1];
      write += 2;
      v48 = i - 2;
      do
      {
        v49 = *v47++;
        *write++ = v49;
        --v48;
      }
      while ( v48 );
    }
    else
    {
      do
        v38 += s->end - window;
      while ( v38 < window );
      v39 = LODWORD(s->end) - (_DWORD)v38;
      if ( i <= v39 )
      {
        v44 = v38 + 2;
        *write = *v38;
        write[1] = v38[1];
        write += 2;
        v45 = i - 2;
        do
        {
          v46 = *v44++;
          *write++ = v46;
          --v45;
        }
        while ( v45 );
      }
      else
      {
        v40 = i - v39;
        do
        {
          v41 = *v38++;
          *write++ = v41;
          --v39;
        }
        while ( v39 );
        v42 = s->window;
        do
        {
          v43 = *v42++;
          *write++ = v43;
          --v40;
        }
        while ( v40 );
      }
    }
    v6 = td;
    v7 = tl;
    goto LABEL_34;
  }
  while ( (Exop & 0x40) == 0 )
  {
    v21 = v19->base + (unsigned __int64)(bitb & db_inflate_mask[Exop]);
    v22 = v19[v21].word.what.Bits;
    bitb >>= v22;
    bitk -= v22;
    v19 += v21;
    Exop = v19->word.what.Exop;
    if ( !v19->word.what.Exop )
      goto LABEL_8;
    if ( (Exop & 0x10) != 0 )
      goto LABEL_13;
  }
  v54 = bitk >> 3;
  v55 = z->avail_in - avail_in;
  if ( (Exop & 0x20) == 0 )
  {
    z->msg = "invalid literal/length code";
    if ( v54 >= v55 )
      v54 = v55;
LABEL_46:
    s->bitb = bitb;
    s->bitk = bitk - 8 * v54;
    v52 = &next_in[-v54];
    z->avail_in = v54 + avail_in;
    z->total_in += (_DWORD)v52 - LODWORD(z->next_in);
    result = 4294967293i64;
    goto LABEL_39;
  }
  s->bitb = bitb;
  if ( v54 >= v55 )
    v54 = v55;
  v52 = &next_in[-v54];
  s->bitk = bitk - 8 * v54;
  z->avail_in = v54 + avail_in;
  z->total_in += (_DWORD)v52 - LODWORD(z->next_in);
  result = 1i64;
LABEL_39:
  z->next_in = v52;
  s->write = write;
  return result;
}

