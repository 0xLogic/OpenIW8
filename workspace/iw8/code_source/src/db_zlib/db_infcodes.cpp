/*
==============
db_inflate_codes
==============
*/

int __fastcall db_inflate_codes(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  return ?db_inflate_codes@@YAHPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@H@Z(s, z, r);
}

/*
==============
db_inflate_codes_free
==============
*/

void __fastcall db_inflate_codes_free(db_inflate_codes_state *c, db_z_stream_s *z)
{
  ?db_inflate_codes_free@@YAXPEAUdb_inflate_codes_state@@PEAUdb_z_stream_s@@@Z(c, z);
}

/*
==============
db_inflate_codes_new
==============
*/

db_inflate_codes_state *__fastcall db_inflate_codes_new(unsigned int bl, unsigned int bd, db_inflate_huft_s *tl, db_inflate_huft_s *td, db_z_stream_s *z)
{
  return ?db_inflate_codes_new@@YAPEAUdb_inflate_codes_state@@IIPEAUdb_inflate_huft_s@@0PEAUdb_z_stream_s@@@Z(bl, bd, tl, td, z);
}

/*
==============
db_inflate_codes
==============
*/
int db_inflate_codes(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  unsigned __int8 *next_in; 
  unsigned int avail_in; 
  unsigned __int8 *read; 
  unsigned __int8 *write; 
  db_inflate_codes_state *codes; 
  unsigned int bitb; 
  unsigned int bitk; 
  unsigned int v13; 
  inflate_codes_mode mode; 
  int v15; 
  unsigned __int8 *v16; 
  int v17; 
  __int64 need; 
  db_inflate_huft_s *v19; 
  int Bits; 
  unsigned int Exop; 
  __int64 lit; 
  unsigned int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned __int8 *v29; 
  unsigned __int8 *i; 
  unsigned __int8 *end; 
  unsigned __int8 *v32; 
  unsigned __int8 *window; 
  int v34; 
  unsigned __int8 *v35; 
  unsigned __int8 *v36; 
  unsigned __int8 *v37; 
  unsigned int v38; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  int v43; 
  int v44; 
  unsigned __int8 *v45; 
  unsigned __int8 *v46; 
  unsigned __int8 *v47; 
  int v49; 

  next_in = z->next_in;
  avail_in = z->avail_in;
  read = s->read;
  write = s->write;
  codes = s->sub.decode.codes;
  bitb = s->bitb;
  bitk = s->bitk;
  if ( write >= read )
    v13 = LODWORD(s->end) - (_DWORD)write;
  else
    v13 = (_DWORD)read - (_DWORD)write - 1;
  mode = codes->mode;
  while ( 2 )
  {
    switch ( mode )
    {
      case 0:
        if ( v13 < 0x102 || avail_in < 0xA )
          goto LABEL_15;
        s->bitb = bitb;
        s->bitk = bitk;
        z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
        z->avail_in = avail_in;
        z->next_in = next_in;
        s->write = write;
        v15 = db_inflate_fast(codes->lbits, codes->dbits, codes->ltree, codes->dtree, s, z);
        write = s->write;
        r = v15;
        v16 = s->read;
        next_in = z->next_in;
        avail_in = z->avail_in;
        bitb = s->bitb;
        bitk = s->bitk;
        v13 = write >= v16 ? LODWORD(s->end) - (_DWORD)write : (_DWORD)v16 - (_DWORD)write - 1;
        if ( !v15 )
        {
LABEL_15:
          codes->sub.code.need = codes->lbits;
          codes->sub.code.tree = codes->ltree;
          codes->mode = END;
          goto $LN21_249;
        }
        v17 = 9;
        if ( r == 1 )
          v17 = 7;
        codes->mode = v17;
        goto LABEL_81;
      case 1:
$LN21_249:
        need = codes->sub.code.need;
        if ( bitk >= (unsigned int)need )
          goto LABEL_19;
        do
        {
          if ( !avail_in )
            goto LABEL_86;
          r = 0;
          bitb |= *next_in << bitk;
          --avail_in;
          ++next_in;
          bitk += 8;
        }
        while ( bitk < (unsigned int)need );
LABEL_19:
        v19 = &codes->sub.code.tree[bitb & db_inflate_mask[need]];
        Bits = v19->word.what.Bits;
        Exop = v19->word.what.Exop;
        bitk -= Bits;
        bitb >>= Bits;
        if ( !v19->word.what.Exop )
        {
          codes->sub.lit = v19->base;
          codes->mode = 6;
          goto LABEL_81;
        }
        if ( (Exop & 0x10) != 0 )
        {
          codes->sub.lit = Exop & 0xF;
          codes->len = v19->base;
          codes->mode = UPDATE_FOR_FRONTEND;
          goto LABEL_81;
        }
        if ( (Exop & 0x40) == 0 )
          goto LABEL_24;
        if ( (Exop & 0x20) == 0 )
        {
          codes->mode = 9;
          z->msg = "invalid literal/length code";
$LN56_59:
          v26 = -3;
          goto LABEL_83;
        }
        codes->mode = UPDATE_FOR_CLIENT|0x4;
        goto LABEL_81;
      case 2:
        lit = codes->sub.lit;
        if ( bitk >= (unsigned int)lit )
          goto LABEL_30;
        do
        {
          if ( !avail_in )
            goto LABEL_86;
          r = 0;
          bitb |= *next_in << bitk;
          --avail_in;
          ++next_in;
          bitk += 8;
        }
        while ( bitk < (unsigned int)lit );
LABEL_30:
        v23 = bitb & db_inflate_mask[lit];
        codes->mode = UPDATE_FOR_CLIENT;
        codes->len += v23;
        codes->sub.code.need = codes->dbits;
        bitb >>= lit;
        codes->sub.code.tree = codes->dtree;
        bitk -= lit;
$LN31_123:
        v24 = codes->sub.code.need;
        if ( bitk < (unsigned int)v24 )
        {
          while ( avail_in )
          {
            r = 0;
            bitb |= *next_in << bitk;
            --avail_in;
            ++next_in;
            bitk += 8;
            if ( bitk >= (unsigned int)v24 )
              goto LABEL_34;
          }
LABEL_86:
          s->bitb = bitb;
          v26 = r;
          s->bitk = bitk;
          z->avail_in = 0;
          goto LABEL_84;
        }
LABEL_34:
        v19 = &codes->sub.code.tree[bitb & db_inflate_mask[v24]];
        v25 = v19->word.what.Bits;
        Exop = v19->word.what.Exop;
        bitk -= v25;
        bitb >>= v25;
        if ( (Exop & 0x10) != 0 )
        {
          codes->sub.lit = Exop & 0xF;
          codes->sub.copy.dist = v19->base;
          codes->mode = 4;
        }
        else
        {
          if ( (Exop & 0x40) != 0 )
          {
            codes->mode = 9;
            z->msg = "invalid distance code";
            v26 = -3;
            goto LABEL_83;
          }
LABEL_24:
          codes->sub.code.need = Exop;
          codes->sub.code.tree = &v19[v19->base];
        }
        goto LABEL_81;
      case 3:
        goto $LN31_123;
      case 4:
        v27 = codes->sub.lit;
        if ( bitk >= (unsigned int)v27 )
          goto LABEL_41;
        do
        {
          if ( !avail_in )
            goto LABEL_86;
          r = 0;
          bitb |= *next_in << bitk;
          --avail_in;
          ++next_in;
          bitk += 8;
        }
        while ( bitk < (unsigned int)v27 );
LABEL_41:
        v28 = bitb & db_inflate_mask[v27];
        codes->mode = 5;
        codes->sub.copy.dist += v28;
        bitb >>= v27;
        bitk -= v27;
$LN39_91:
        v29 = &write[-codes->sub.copy.dist];
        for ( i = s->window; v29 < i; v29 += s->end - i )
          ;
        if ( !codes->len )
        {
LABEL_63:
          codes->mode = BEGIN;
LABEL_81:
          mode = codes->mode;
          if ( codes->mode > 9u )
          {
LABEL_82:
            v26 = -2;
            goto LABEL_83;
          }
          continue;
        }
        while ( 1 )
        {
          if ( !v13 )
          {
            end = s->end;
            if ( write != end )
              goto LABEL_51;
            v32 = s->read;
            window = s->window;
            if ( v32 == window )
              goto LABEL_51;
            v13 = (_DWORD)end - (_DWORD)window;
            write = s->window;
            if ( window < v32 )
              v13 = (_DWORD)v32 - (_DWORD)window - 1;
            if ( !v13 )
            {
LABEL_51:
              s->write = write;
              v34 = db_inflate_flush(s, z, r);
              write = s->write;
              v35 = s->read;
              if ( write >= v35 )
                v13 = LODWORD(s->end) - (_DWORD)write;
              else
                v13 = (_DWORD)v35 - (_DWORD)write - 1;
              v36 = s->end;
              if ( write == v36 )
              {
                v37 = s->window;
                if ( v35 != v37 )
                {
                  v38 = (_DWORD)v36 - (_DWORD)v37;
                  write = s->window;
                  if ( v37 < v35 )
                    v38 = (_DWORD)v35 - (_DWORD)v37 - 1;
                  v13 = v38;
                }
              }
              if ( !v13 )
                break;
            }
          }
          r = 0;
          *write++ = *v29++;
          --v13;
          if ( v29 == s->end )
            v29 = s->window;
          if ( codes->len-- == 1 )
            goto LABEL_63;
        }
        v26 = v34;
LABEL_83:
        s->bitb = bitb;
        s->bitk = bitk;
        z->avail_in = avail_in;
LABEL_84:
        z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
LABEL_85:
        z->next_in = next_in;
        s->write = write;
        return db_inflate_flush(s, z, v26);
      case 5:
        goto $LN39_91;
      case 6:
        if ( !v13 )
        {
          if ( (v40 = s->end, write != v40) || (v41 = s->read, v42 = s->window, v41 == v42) || ((write = s->window, v41 <= v42) ? (v13 = (_DWORD)v40 - (_DWORD)v42) : (v13 = (_DWORD)v41 - (_DWORD)v42 - 1), !v13) )
          {
            s->write = write;
            v43 = db_inflate_flush(s, z, r);
            write = s->write;
            v44 = v43;
            v45 = s->read;
            if ( write >= v45 )
              v13 = LODWORD(s->end) - (_DWORD)write;
            else
              v13 = (_DWORD)v45 - (_DWORD)write - 1;
            v46 = s->end;
            if ( write == v46 )
            {
              v47 = s->window;
              if ( v45 != v47 )
              {
                write = s->window;
                if ( v45 <= v47 )
                  v13 = (_DWORD)v46 - (_DWORD)v47;
                else
                  v13 = (_DWORD)v45 - (_DWORD)v47 - 1;
              }
            }
            if ( !v13 )
            {
              v26 = v44;
              goto LABEL_83;
            }
          }
        }
        r = 0;
        *write++ = codes->sub.lit;
        --v13;
        codes->mode = BEGIN;
        goto LABEL_81;
      case 7:
        if ( bitk > 7 )
        {
          bitk -= 8;
          ++avail_in;
          --next_in;
        }
        s->write = write;
        v49 = db_inflate_flush(s, z, r);
        write = s->write;
        if ( s->read != write )
        {
          s->bitb = bitb;
          s->bitk = bitk;
          v26 = v49;
          z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
          z->avail_in = avail_in;
          goto LABEL_85;
        }
        codes->mode = 8;
$LN55_57:
        v26 = 1;
        goto LABEL_83;
      case 8:
        goto $LN55_57;
      case 9:
        goto $LN56_59;
      default:
        goto LABEL_82;
    }
  }
}

/*
==============
db_inflate_codes_free
==============
*/
void db_inflate_codes_free(db_inflate_codes_state *c, db_z_stream_s *z)
{
  z->zfree(z->opaque, c);
}

/*
==============
db_inflate_codes_new
==============
*/
db_inflate_codes_state *db_inflate_codes_new(unsigned int bl, unsigned int bd, db_inflate_huft_s *tl, db_inflate_huft_s *td, db_z_stream_s *z)
{
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  db_inflate_codes_state *result; 

  v5 = bl;
  v6 = bd;
  result = (db_inflate_codes_state *)z->zalloc(z->opaque, 1i64, 48i64);
  if ( result )
  {
    result->mode = BEGIN;
    result->lbits = v5;
    result->dbits = v6;
    result->ltree = tl;
    result->dtree = td;
  }
  return result;
}

