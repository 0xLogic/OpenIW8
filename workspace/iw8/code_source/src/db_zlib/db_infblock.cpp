/*
==============
db_inflate_blocks_free
==============
*/

int __fastcall db_inflate_blocks_free(db_inflate_blocks_state *s, db_z_stream_s *z)
{
  return ?db_inflate_blocks_free@@YAHPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@@Z(s, z);
}

/*
==============
db_inflate_blocks
==============
*/

int __fastcall db_inflate_blocks(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  return ?db_inflate_blocks@@YAHPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@H@Z(s, z, r);
}

/*
==============
db_inflate_blocks_reset
==============
*/

void __fastcall db_inflate_blocks_reset(db_inflate_blocks_state *s, db_z_stream_s *z, unsigned int *c)
{
  ?db_inflate_blocks_reset@@YAXPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@PEAK@Z(s, z, c);
}

/*
==============
db_inflate_blocks_new
==============
*/

db_inflate_blocks_state *__fastcall db_inflate_blocks_new(db_z_stream_s *z, unsigned int (__fastcall *c)(unsigned int, const unsigned __int8 *, unsigned int), unsigned int w)
{
  return ?db_inflate_blocks_new@@YAPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@P6AKKPEBEI@ZI@Z(z, c, w);
}

/*
==============
db_inflate_blocks
==============
*/
int db_inflate_blocks(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  unsigned __int8 *write; 
  unsigned __int8 *read; 
  unsigned __int8 *next_in; 
  unsigned int avail_in; 
  unsigned int bitb; 
  unsigned int bitk; 
  __int64 v12; 
  db_inflate_block_mode mode; 
  int v14; 
  db_inflate_codes_state *v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  unsigned __int8 *end; 
  unsigned __int8 *v20; 
  unsigned __int8 *window; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  unsigned __int8 *v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  unsigned int left; 
  __int64 v33; 
  db_z_stream_s *v34; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int *v39; 
  unsigned int index; 
  int v41; 
  db_inflate_huft_s *hufts; 
  unsigned int *blens; 
  int v44; 
  __int64 bb; 
  __int64 v46; 
  db_inflate_huft_s *tb; 
  unsigned int base; 
  int Bits; 
  unsigned int v50; 
  int v51; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  __int64 v58; 
  unsigned int v59; 
  unsigned int *v60; 
  db_inflate_codes_state *v61; 
  int v62; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  bool v65; 
  unsigned __int8 *v66; 
  unsigned __int8 *v67; 
  unsigned __int8 *v68; 
  int v69; 
  db_inflate_huft_s *hp; 
  unsigned int v71; 
  unsigned __int8 *v72; 
  db_inflate_huft_s *td; 
  db_inflate_huft_s *tl; 
  db_inflate_huft_s *v75; 
  db_inflate_huft_s *v76; 
  __int64 v77; 
  unsigned int v78; 
  unsigned int bd; 

  write = s->write;
  read = s->read;
  next_in = z->next_in;
  avail_in = z->avail_in;
  bitb = s->bitb;
  bitk = s->bitk;
  v72 = write;
  if ( write >= read )
    v12 = (unsigned int)(LODWORD(s->end) - (_DWORD)write);
  else
    v12 = (unsigned int)((_DWORD)read - (_DWORD)write - 1);
  mode = s->mode;
  v77 = v12;
  while ( 2 )
  {
    switch ( mode )
    {
      case ALGORITHM:
        for ( ; bitk < 3; r = 0 )
        {
          if ( !avail_in )
            goto LABEL_101;
          --avail_in;
          bitb |= *next_in++ << bitk;
          bitk += 8;
        }
        s->last = bitb & 1;
        if ( !((unsigned __int8)(bitb & 7) >> 1) )
        {
          v16 = bitk - 3;
          s->mode = ENCRYPTION_ALGORITHM;
          v17 = v16 & 7;
          bitb = bitb >> 3 >> v17;
          bitk = v16 - v17;
          goto LABEL_48;
        }
        if ( (unsigned __int8)(bitb & 7) >> 1 != 1 )
        {
          if ( (unsigned __int8)(bitb & 7) >> 1 == 2 )
          {
            bitb >>= 3;
            bitk -= 3;
            s->mode = JWK_SET_URL;
            goto LABEL_48;
          }
          if ( (unsigned __int8)(bitb & 7) >> 1 != 3 )
            goto LABEL_48;
          bitb >>= 3;
          s->mode = X509_CERT_SHA256_THUMBPRINT;
          bitk -= 3;
          z->msg = "invalid block type";
          goto $LN80_25;
        }
        db_inflate_trees_fixed(&v71, &bd, &tl, &td, z);
        v15 = db_inflate_codes_new(v71, bd, tl, td, z);
        s->sub.decode.codes = v15;
        if ( !v15 )
          goto LABEL_102;
        LODWORD(v12) = v77;
        write = v72;
        bitb >>= 3;
        bitk -= 3;
        s->mode = X509_URL;
        goto LABEL_48;
      case ENCRYPTION_ALGORITHM:
        if ( bitk >= 0x20 )
          goto LABEL_22;
        do
        {
          if ( !avail_in )
            goto LABEL_101;
          --avail_in;
          bitb |= *next_in++ << bitk;
          bitk += 8;
          r = 0;
        }
        while ( bitk < 0x20 );
LABEL_22:
        v18 = (unsigned __int16)bitb;
        if ( ~bitb >> 16 != (unsigned __int16)bitb )
        {
          s->mode = X509_CERT_SHA256_THUMBPRINT;
          z->msg = "invalid stored block lengths";
          v14 = -3;
          goto LABEL_50;
        }
        s->sub.left = (unsigned __int16)bitb;
        bitk = 0;
        bitb = 0;
        if ( v18 )
          s->mode = COMPRESSION_ALGORITHM;
        else
          s->mode = s->last != 0 ? X509_CERT_CHAIN : ALGORITHM;
        goto LABEL_48;
      case COMPRESSION_ALGORITHM:
        if ( !avail_in )
          goto LABEL_101;
        if ( !(_DWORD)v12 )
        {
          end = s->end;
          if ( write != end )
            goto LABEL_33;
          v20 = s->read;
          window = s->window;
          if ( v20 == window )
            goto LABEL_33;
          v72 = s->window;
          write = v72;
          v22 = (_DWORD)end - (_DWORD)window;
          v23 = (_DWORD)v20 - (_DWORD)window - 1;
          if ( v72 < v20 )
            v22 = v23;
          LODWORD(v12) = v22;
          v77 = v22;
          if ( !v22 )
          {
LABEL_33:
            s->write = write;
            v24 = db_inflate_flush(s, z, r);
            write = s->write;
            v25 = v24;
            v26 = s->read;
            v72 = write;
            if ( write >= v26 )
              v12 = (unsigned int)(LODWORD(s->end) - (_DWORD)write);
            else
              v12 = (unsigned int)((_DWORD)v26 - (_DWORD)write - 1);
            v27 = s->end;
            v77 = v12;
            if ( write == v27 )
            {
              v28 = s->window;
              if ( v26 != v28 )
              {
                v72 = s->window;
                write = v72;
                v29 = (_DWORD)v27 - (_DWORD)v28;
                v30 = (_DWORD)v26 - (_DWORD)v28 - 1;
                if ( v72 < v26 )
                  v29 = v30;
                LODWORD(v12) = v29;
                v77 = v29;
              }
            }
            if ( !(_DWORD)v12 )
            {
              v14 = v25;
              goto LABEL_50;
            }
          }
        }
        v31 = v12;
        left = avail_in;
        r = 0;
        if ( s->sub.left <= avail_in )
          left = s->sub.left;
        if ( left <= (unsigned int)v12 )
          v31 = left;
        v33 = v31;
        memcpy_0(write, next_in, v31);
        next_in += v33;
        write = &v72[v33];
        LODWORD(v12) = v77 - v33;
        v72 += v33;
        avail_in -= v33;
        v77 = (unsigned int)(v77 - v33);
        v65 = s->sub.left == (_DWORD)v33;
        s->sub.left -= v33;
        if ( v65 )
          s->mode = s->last != 0 ? X509_CERT_CHAIN : ALGORITHM;
        goto LABEL_48;
      case JWK_SET_URL:
        if ( bitk >= 0xE )
          goto LABEL_58;
        do
        {
          if ( !avail_in )
            goto LABEL_101;
          --avail_in;
          bitb |= *next_in++ << bitk;
          bitk += 8;
          r = 0;
        }
        while ( bitk < 0xE );
LABEL_58:
        v36 = bitb & 0x3FFF;
        s->sub.left = v36;
        v37 = bitb & 0x1F;
        if ( v37 > 0x1D || (v38 = (v36 >> 5) & 0x1F, v38 > 0x1D) )
        {
          s->mode = X509_CERT_SHA256_THUMBPRINT;
          z->msg = "too many length or distance symbols";
          v14 = -3;
          goto LABEL_50;
        }
        v39 = (unsigned int *)((__int64 (__fastcall *)(void *, _QWORD, __int64, unsigned __int64))z->zalloc)(z->opaque, v38 + v37 + 258, 4i64, 0x140000000ui64);
        s->sub.trees.blens = v39;
        if ( !v39 )
          goto LABEL_102;
        write = v72;
        bitb >>= 14;
        bitk -= 14;
        s->sub.trees.index = 0;
        s->mode = JSON_WEB_KEY;
$LN105_17:
        index = s->sub.trees.index;
        if ( index < (s->sub.left >> 10) + 4 )
        {
          while ( bitk >= 3 )
          {
LABEL_66:
            v41 = bitb & 7;
            bitb >>= 3;
            bitk -= 3;
            s->sub.trees.blens[db_border[s->sub.trees.index++]] = v41;
            index = s->sub.trees.index;
            if ( index >= (s->sub.left >> 10) + 4 )
              goto LABEL_67;
          }
          while ( avail_in )
          {
            --avail_in;
            bitb |= *next_in++ << bitk;
            bitk += 8;
            r = 0;
            if ( bitk >= 3 )
              goto LABEL_66;
          }
LABEL_101:
          s->bitb = bitb;
          v14 = r;
          s->bitk = bitk;
          z->avail_in = 0;
          goto LABEL_51;
        }
LABEL_67:
        if ( index < 0x13 )
        {
          do
            s->sub.trees.blens[db_border[s->sub.trees.index++]] = 0;
          while ( s->sub.trees.index < 0x13 );
        }
        hufts = s->hufts;
        blens = s->sub.trees.blens;
        s->sub.trees.bb = 7;
        v44 = db_inflate_trees_bits(blens, &s->sub.trees.bb, &s->sub.trees.tb, hufts, z);
        if ( v44 )
        {
          v65 = v44 == -3;
          goto LABEL_107;
        }
        s->mode = KEY_ID;
        s->sub.trees.index = 0;
$LN108_18:
        if ( s->sub.trees.index < ((s->sub.left >> 5) & 0x1F) + (s->sub.left & 0x1F) + 258 )
        {
          do
          {
            bb = s->sub.trees.bb;
            if ( bitk < (unsigned int)bb )
            {
              while ( avail_in )
              {
                --avail_in;
                bitb |= *next_in++ << bitk;
                bitk += 8;
                r = 0;
                if ( bitk >= (unsigned int)bb )
                  goto LABEL_75;
              }
              goto LABEL_110;
            }
LABEL_75:
            v46 = bitb & db_inflate_mask[bb];
            tb = s->sub.trees.tb;
            base = tb[v46].base;
            Bits = tb[v46].word.what.Bits;
            if ( base >= 0x10 )
            {
              v51 = 7;
              if ( base != 18 )
                v51 = base - 14;
              v52 = v51 + Bits;
              v53 = 3;
              if ( base == 18 )
                v53 = 11;
              if ( bitk < v52 )
              {
                while ( avail_in )
                {
                  --avail_in;
                  bitb |= *next_in++ << bitk;
                  bitk += 8;
                  r = 0;
                  if ( bitk >= v52 )
                    goto LABEL_84;
                }
LABEL_110:
                s->bitb = bitb;
                s->bitk = bitk;
                v14 = r;
                z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
                v67 = v72;
                z->avail_in = 0;
                z->next_in = next_in;
                s->write = v67;
                goto LABEL_53;
              }
LABEL_84:
              v50 = s->sub.trees.index;
              v54 = bitb >> Bits;
              v55 = v54 & db_inflate_mask[v51];
              bitb = v54 >> v51;
              v56 = v55 + v53;
              bitk -= v51 + Bits;
              if ( v56 + v50 > ((s->sub.left >> 5) & 0x1F) + (s->sub.left & 0x1F) + 258 )
                goto LABEL_111;
              if ( base == 16 )
              {
                if ( !v50 )
                {
LABEL_111:
                  z->zfree(z->opaque, s->sub.trees.blens);
                  s->mode = X509_CERT_SHA256_THUMBPRINT;
                  z->msg = "invalid bit length repeat";
                  v14 = -3;
                  s->bitb = bitb;
                  s->bitk = bitk;
                  z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
                  v68 = v72;
                  z->avail_in = avail_in;
                  z->next_in = next_in;
                  s->write = v68;
                  goto LABEL_53;
                }
                v57 = s->sub.trees.blens[v50 - 1];
              }
              else
              {
                v57 = 0;
              }
              do
              {
                v58 = v50++;
                s->sub.trees.blens[v58] = v57;
                --v56;
              }
              while ( v56 );
              s->sub.trees.index = v50;
            }
            else
            {
              bitb >>= Bits;
              bitk -= Bits;
              s->sub.trees.blens[s->sub.trees.index++] = base;
              v50 = s->sub.trees.index;
            }
          }
          while ( v50 < ((s->sub.left >> 5) & 0x1F) + (s->sub.left & 0x1F) + 258 );
        }
        v59 = s->sub.left;
        v60 = s->sub.trees.blens;
        hp = s->hufts;
        s->sub.trees.tb = NULL;
        v78 = 9;
        LODWORD(v77) = 6;
        v44 = db_inflate_trees_dynamic((v59 & 0x1F) + 257, ((v59 >> 5) & 0x1F) + 1, v60, &v78, (unsigned int *)&v77, &v76, &v75, hp, z);
        if ( !v44 )
        {
          z->zfree(z->opaque, s->sub.trees.blens);
          v61 = db_inflate_codes_new(v78, v77, v76, v75, z);
          if ( !v61 )
          {
LABEL_102:
            s->bitb = bitb;
            s->bitk = bitk;
            v14 = -4;
            z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
            v64 = v72;
            z->avail_in = avail_in;
            z->next_in = next_in;
            s->write = v64;
            goto LABEL_53;
          }
          write = v72;
          s->sub.decode.codes = v61;
          s->mode = X509_URL;
$LN74_33:
          s->bitb = bitb;
          s->bitk = bitk;
          z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
          z->avail_in = avail_in;
          z->next_in = next_in;
          s->write = write;
          v62 = db_inflate_codes(s, z, r);
          v34 = z;
          if ( v62 != 1 )
          {
            v14 = v62;
            return db_inflate_flush(s, v34, v14);
          }
          r = 0;
          db_inflate_codes_free(s->sub.decode.codes, z);
          write = s->write;
          v63 = s->read;
          next_in = z->next_in;
          avail_in = z->avail_in;
          bitb = s->bitb;
          bitk = s->bitk;
          v72 = write;
          if ( write >= v63 )
            v12 = (unsigned int)(LODWORD(s->end) - (_DWORD)write);
          else
            v12 = (unsigned int)((_DWORD)v63 - (_DWORD)write - 1);
          v65 = s->last == 0;
          v77 = v12;
          if ( !v65 )
          {
            s->mode = X509_CERT_CHAIN;
$LN77_31:
            s->write = write;
            v69 = db_inflate_flush(s, z, r);
            write = s->write;
            if ( s->read != write )
            {
              s->bitb = bitb;
              s->bitk = bitk;
              v14 = v69;
              z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
              z->avail_in = avail_in;
              goto LABEL_52;
            }
            s->mode = X509_CERT_SHA1_THUMBPRINT;
$LN79_24:
            v14 = 1;
LABEL_50:
            s->bitb = bitb;
            s->bitk = bitk;
            z->avail_in = avail_in;
LABEL_51:
            z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
LABEL_52:
            z->next_in = next_in;
            s->write = write;
            goto LABEL_53;
          }
          s->mode = ALGORITHM;
LABEL_48:
          mode = s->mode;
          if ( s->mode > (unsigned int)X509_CERT_SHA256_THUMBPRINT )
          {
LABEL_49:
            v14 = -2;
            goto LABEL_50;
          }
          continue;
        }
        v65 = v44 == -3;
LABEL_107:
        if ( v65 )
        {
          z->zfree(z->opaque, s->sub.trees.blens);
          s->mode = X509_CERT_SHA256_THUMBPRINT;
        }
        s->bitb = bitb;
        s->bitk = bitk;
        v14 = v44;
        z->total_in += (_DWORD)next_in - LODWORD(z->next_in);
        v66 = v72;
        z->avail_in = avail_in;
        z->next_in = next_in;
        s->write = v66;
LABEL_53:
        v34 = z;
        return db_inflate_flush(s, v34, v14);
      case JSON_WEB_KEY:
        goto $LN105_17;
      case KEY_ID:
        goto $LN108_18;
      case X509_URL:
        goto $LN74_33;
      case X509_CERT_CHAIN:
        goto $LN77_31;
      case X509_CERT_SHA1_THUMBPRINT:
        goto $LN79_24;
      case X509_CERT_SHA256_THUMBPRINT:
$LN80_25:
        v14 = -3;
        goto LABEL_50;
      default:
        goto LABEL_49;
    }
  }
}

/*
==============
db_inflate_blocks_free
==============
*/
__int64 db_inflate_blocks_free(db_inflate_blocks_state *s, db_z_stream_s *z)
{
  db_inflate_block_mode mode; 
  unsigned __int8 *window; 

  mode = s->mode;
  if ( s->mode == JSON_WEB_KEY || mode == KEY_ID )
  {
    z->zfree(z->opaque, s->sub.trees.blens);
    mode = s->mode;
  }
  if ( mode == X509_URL )
    db_inflate_codes_free(s->sub.decode.codes, z);
  window = s->window;
  s->mode = ALGORITHM;
  *(_QWORD *)&s->bitk = 0i64;
  s->write = window;
  s->read = window;
  ((void (__fastcall *)(void *))z->zfree)(z->opaque);
  z->zfree(z->opaque, s->hufts);
  z->zfree(z->opaque, s);
  return 0i64;
}

/*
==============
db_inflate_blocks_new
==============
*/
db_inflate_blocks_state *db_inflate_blocks_new(db_z_stream_s *z, unsigned int (*c)(unsigned int, const unsigned __int8 *, unsigned int), unsigned int w)
{
  __int64 v3; 
  _DWORD *v5; 
  void *v6; 
  void *opaque; 
  db_inflate_blocks_state *result; 
  char *v9; 
  char *v10; 

  v3 = w;
  v5 = z->zalloc(z->opaque, 1i64, 96i64);
  if ( !v5 )
    return 0i64;
  v6 = z->zalloc(z->opaque, 8i64, 1440i64);
  *((_QWORD *)v5 + 7) = v6;
  opaque = z->opaque;
  if ( !v6 )
  {
    z->zfree(opaque, v5);
    return 0i64;
  }
  v9 = (char *)z->zalloc(opaque, 1i64, (unsigned int)v3);
  *((_QWORD *)v5 + 8) = v9;
  v10 = v9;
  if ( v9 )
  {
    *((_QWORD *)v5 + 11) = v9;
    *((_QWORD *)v5 + 9) = &v9[v3];
    *v5 = 0;
    *(_QWORD *)(v5 + 11) = 0i64;
    result = (db_inflate_blocks_state *)v5;
    *((_QWORD *)v5 + 10) = v10;
  }
  else
  {
    z->zfree(z->opaque, (void *)*((_QWORD *)v5 + 7));
    z->zfree(z->opaque, v5);
    return 0i64;
  }
  return result;
}

/*
==============
db_inflate_blocks_reset
==============
*/
void db_inflate_blocks_reset(db_inflate_blocks_state *s, db_z_stream_s *z, unsigned int *c)
{
  db_inflate_block_mode mode; 
  unsigned __int8 *window; 

  if ( c )
    *c = 0;
  mode = s->mode;
  if ( s->mode == JSON_WEB_KEY || mode == KEY_ID )
  {
    z->zfree(z->opaque, s->sub.trees.blens);
    mode = s->mode;
  }
  if ( mode == X509_URL )
    db_inflate_codes_free(s->sub.decode.codes, z);
  window = s->window;
  s->mode = ALGORITHM;
  *(_QWORD *)&s->bitk = 0i64;
  s->write = window;
  s->read = window;
}

