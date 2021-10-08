/*
==============
db_inflate
==============
*/

int __fastcall db_inflate(db_z_stream_s *z, int f)
{
  return ?db_inflate@@YAHPEAUdb_z_stream_s@@H@Z(z, f);
}

/*
==============
db_inflateReset
==============
*/

int __fastcall db_inflateReset(db_z_stream_s *z)
{
  return ?db_inflateReset@@YAHPEAUdb_z_stream_s@@@Z(z);
}

/*
==============
db_inflateInit_
==============
*/

int __fastcall db_inflateInit_(db_z_stream_s *z, const char *version, int stream_size)
{
  return ?db_inflateInit_@@YAHPEAUdb_z_stream_s@@PEBDH@Z(z, version, stream_size);
}

/*
==============
db_inflateInit2_
==============
*/

int __fastcall db_inflateInit2_(db_z_stream_s *z, int w, const char *version, int stream_size)
{
  return ?db_inflateInit2_@@YAHPEAUdb_z_stream_s@@HPEBDH@Z(z, w, version, stream_size);
}

/*
==============
db_inflateEnd
==============
*/

int __fastcall db_inflateEnd(db_z_stream_s *z)
{
  return ?db_inflateEnd@@YAHPEAUdb_z_stream_s@@@Z(z);
}

/*
==============
db_inflate
==============
*/
__int64 db_inflate(db_z_stream_s *z, int f)
{
  db_internal_state *state; 
  int dummy; 
  int v5; 
  unsigned int v6; 
  unsigned int avail_in; 
  int v8; 
  db_internal_state *v9; 
  db_internal_state *v10; 
  db_internal_state *v11; 
  unsigned int v12; 
  db_internal_state *v13; 
  int v14; 
  db_internal_state *v15; 
  db_internal_state *v16; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  int v33; 

  if ( !z )
    return 4294967294i64;
  state = z->state;
  if ( !state || !z->next_in )
    return 4294967294i64;
  dummy = state->dummy;
  v5 = 0;
  v6 = -5;
  if ( f == 4 )
    v5 = -5;
  while ( 1 )
  {
    switch ( dummy )
    {
      case 0:
        avail_in = z->avail_in;
        if ( !avail_in )
          return v6;
        ++z->total_in;
        z->avail_in = avail_in - 1;
        v6 = v5;
        v8 = *z->next_in++;
        z->state[1].dummy = v8;
        if ( (v8 & 0xF) == 8 )
        {
          v10 = z->state;
          if ( ((unsigned int)v10[1].dummy >> 4) + 8 <= v10[3].dummy )
          {
            v10->dummy = 1;
$LN12_443:
            v12 = z->avail_in;
            if ( !v12 )
              return v6;
            ++z->total_in;
            v13 = z->state;
            v6 = v5;
            z->avail_in = v12 - 1;
            v14 = *z->next_in++;
            if ( v14 + (v13[1].dummy << 8) == 31 * ((v14 + (v13[1].dummy << 8)) / 0x1Fu) )
            {
              if ( (v14 & 0x20) != 0 )
              {
                v13->dummy = 2;
$LN16_247:
                v18 = z->avail_in;
                if ( v18 )
                {
                  ++z->total_in;
                  z->avail_in = v18 - 1;
                  v6 = v5;
                  v19 = *z->next_in++;
                  z->state[1].dummy = v19 << 24;
                  z->state->dummy = 3;
$LN18_429:
                  v20 = z->avail_in;
                  if ( v20 )
                  {
                    ++z->total_in;
                    z->avail_in = v20 - 1;
                    v6 = v5;
                    v21 = *z->next_in++;
                    z->state[1].dummy += v21 << 16;
                    z->state->dummy = 4;
$LN20_225:
                    v22 = z->avail_in;
                    if ( v22 )
                    {
                      ++z->total_in;
                      z->avail_in = v22 - 1;
                      v6 = v5;
                      v23 = *z->next_in++;
                      z->state[1].dummy += v23 << 8;
                      z->state->dummy = 5;
$LN22_253:
                      v24 = z->avail_in;
                      if ( v24 )
                      {
                        ++z->total_in;
                        z->avail_in = v24 - 1;
                        v25 = *z->next_in++;
                        z->state[1].dummy += v25;
                        z->state->dummy = 6;
                        return 2i64;
                      }
                    }
                  }
                }
                return v6;
              }
              v13->dummy = 7;
            }
            else
            {
              v13->dummy = 13;
              v15 = z->state;
              z->msg = "incorrect header check";
              v15[1].dummy = 5;
            }
          }
          else
          {
            v10->dummy = 13;
            v11 = z->state;
            z->msg = "invalid window size";
            v11[1].dummy = 5;
          }
        }
        else
        {
          z->state->dummy = 13;
          v9 = z->state;
          z->msg = "unknown compression method";
          v9[1].dummy = 5;
        }
LABEL_25:
        state = z->state;
        dummy = state->dummy;
        if ( state->dummy > 0xDu )
          return 4294967294i64;
        break;
      case 1:
        goto $LN12_443;
      case 2:
        goto $LN16_247;
      case 3:
        goto $LN18_429;
      case 4:
        goto $LN20_225;
      case 5:
        goto $LN22_253;
      case 6:
        state->dummy = 13;
        z->msg = "need dictionary";
        z->state[1].dummy = 0;
        return 4294967294i64;
      case 7:
        v6 = db_inflate_blocks(*(db_inflate_blocks_state **)&state[4].dummy, z, v6);
        if ( v6 == -3 )
        {
          z->state->dummy = 13;
          z->state[1].dummy = 0;
          goto LABEL_25;
        }
        if ( !v6 )
          v6 = v5;
        if ( v6 != 1 )
          return v6;
        v6 = v5;
        db_inflate_blocks_reset(*(db_inflate_blocks_state **)&z->state[4].dummy, z, NULL);
        v16 = z->state;
        if ( v16[2].dummy )
        {
          v16->dummy = 12;
          goto LABEL_25;
        }
        v16->dummy = 8;
$LN30_132:
        v26 = z->avail_in;
        if ( !v26 )
          return v6;
        ++z->total_in;
        z->avail_in = v26 - 1;
        v6 = v5;
        v27 = *z->next_in++;
        z->state[1].dummy = v27 << 24;
        z->state->dummy = 9;
$LN32_120:
        v28 = z->avail_in;
        if ( !v28 )
          return v6;
        ++z->total_in;
        z->avail_in = v28 - 1;
        v6 = v5;
        v29 = *z->next_in++;
        z->state[1].dummy += v29 << 16;
        z->state->dummy = 10;
$LN34_143:
        v30 = z->avail_in;
        if ( !v30 )
          return v6;
        ++z->total_in;
        z->avail_in = v30 - 1;
        v6 = v5;
        v31 = *z->next_in++;
        z->state[1].dummy += v31 << 8;
        z->state->dummy = 11;
$LN36_99:
        v32 = z->avail_in;
        if ( !v32 )
          return v6;
        ++z->total_in;
        z->avail_in = v32 - 1;
        v33 = *z->next_in++;
        z->state[1].dummy += v33;
        z->state->dummy = 12;
        return 1i64;
      case 8:
        goto $LN30_132;
      case 9:
        goto $LN32_120;
      case 10:
        goto $LN34_143;
      case 11:
        goto $LN36_99;
      case 12:
        return 1i64;
      case 13:
        return 4294967293i64;
      default:
        return 4294967294i64;
    }
  }
}

/*
==============
db_inflateEnd
==============
*/
__int64 db_inflateEnd(db_z_stream_s *z)
{
  db_internal_state *state; 
  void (__fastcall *zfree)(void *, void *); 
  db_inflate_blocks_state *v4; 
  __int64 result; 

  if ( !z )
    return 4294967294i64;
  state = z->state;
  if ( !state )
    return 4294967294i64;
  zfree = z->zfree;
  if ( !zfree )
    return 4294967294i64;
  v4 = *(db_inflate_blocks_state **)&state[4].dummy;
  if ( v4 )
  {
    db_inflate_blocks_free(v4, z);
    state = z->state;
    zfree = z->zfree;
  }
  zfree(z->opaque, state);
  result = 0i64;
  z->state = NULL;
  return result;
}

/*
==============
db_inflateInit2_
==============
*/
__int64 db_inflateInit2_(db_z_stream_s *z, int w, const char *version, int stream_size)
{
  void *(__fastcall *zalloc)(void *, unsigned int, unsigned int); 
  void *opaque; 
  db_internal_state *v9; 
  db_inflate_blocks_state *v10; 
  db_internal_state *state; 

  if ( !version || *version != 49 || stream_size != 80 )
    return 4294967290i64;
  if ( !z )
    return 4294967294i64;
  zalloc = z->zalloc;
  z->msg = NULL;
  if ( zalloc )
  {
    opaque = z->opaque;
  }
  else
  {
    zalloc = db_zcalloc;
    z->opaque = NULL;
    z->zalloc = db_zcalloc;
    opaque = NULL;
  }
  if ( !z->zfree )
    z->zfree = db_zcfree;
  v9 = (db_internal_state *)zalloc(opaque, 1u, 0x18u);
  z->state = v9;
  if ( !v9 )
    return 4294967292i64;
  *(_QWORD *)&v9[4].dummy = 0i64;
  z->state[2].dummy = 0;
  if ( w < 0 )
  {
    w = -w;
    z->state[2].dummy = 1;
  }
  if ( (unsigned int)(w - 8) > 7 )
  {
    db_inflateEnd(z);
    return 4294967294i64;
  }
  z->state[3].dummy = w;
  v10 = db_inflate_blocks_new(z, NULL, 1 << w);
  *(_QWORD *)&z->state[4].dummy = v10;
  if ( !v10 )
  {
    db_inflateEnd(z);
    return 4294967292i64;
  }
  state = z->state;
  if ( state )
  {
    z->total_out = 0;
    z->total_in = 0;
    z->msg = NULL;
    state->dummy = state[2].dummy != 0 ? 7 : 0;
    db_inflate_blocks_reset(*(db_inflate_blocks_state **)&z->state[4].dummy, z, NULL);
  }
  return 0i64;
}

/*
==============
db_inflateInit_
==============
*/
__int64 db_inflateInit_(db_z_stream_s *z, const char *version, int stream_size)
{
  void *(__fastcall *zalloc)(void *, unsigned int, unsigned int); 
  void *opaque; 
  db_internal_state *v7; 
  db_inflate_blocks_state *v8; 
  db_internal_state *state; 

  if ( !version || *version != 49 || stream_size != 80 )
    return 4294967290i64;
  if ( !z )
    return 4294967294i64;
  zalloc = z->zalloc;
  z->msg = NULL;
  if ( zalloc )
  {
    opaque = z->opaque;
  }
  else
  {
    zalloc = db_zcalloc;
    z->opaque = NULL;
    z->zalloc = db_zcalloc;
    opaque = NULL;
  }
  if ( !z->zfree )
    z->zfree = db_zcfree;
  v7 = (db_internal_state *)zalloc(opaque, 1u, 0x18u);
  z->state = v7;
  if ( !v7 )
    return 4294967292i64;
  *(_QWORD *)&v7[4].dummy = 0i64;
  z->state[2].dummy = 0;
  z->state[3].dummy = 15;
  v8 = db_inflate_blocks_new(z, NULL, 0x8000u);
  *(_QWORD *)&z->state[4].dummy = v8;
  if ( !v8 )
  {
    db_inflateEnd(z);
    return 4294967292i64;
  }
  state = z->state;
  if ( state )
  {
    z->total_out = 0;
    z->total_in = 0;
    z->msg = NULL;
    state->dummy = state[2].dummy != 0 ? 7 : 0;
    db_inflate_blocks_reset(*(db_inflate_blocks_state **)&z->state[4].dummy, z, NULL);
  }
  return 0i64;
}

/*
==============
db_inflateReset
==============
*/
__int64 db_inflateReset(db_z_stream_s *z)
{
  db_internal_state *state; 

  if ( !z )
    return 4294967294i64;
  state = z->state;
  if ( !state )
    return 4294967294i64;
  z->total_out = 0;
  z->total_in = 0;
  z->msg = NULL;
  state->dummy = state[2].dummy != 0 ? 7 : 0;
  db_inflate_blocks_reset(*(db_inflate_blocks_state **)&z->state[4].dummy, z, NULL);
  return 0i64;
}

