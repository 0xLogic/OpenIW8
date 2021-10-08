/*
==============
db_inflate_flush
==============
*/

int __fastcall db_inflate_flush(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  return ?db_inflate_flush@@YAHPEAUdb_inflate_blocks_state@@PEAUdb_z_stream_s@@H@Z(s, z, r);
}

/*
==============
db_inflate_flush
==============
*/
__int64 db_inflate_flush(db_inflate_blocks_state *s, db_z_stream_s *z, int r)
{
  unsigned __int8 *read; 
  unsigned int v4; 
  unsigned __int8 *write; 
  unsigned __int8 *next_out; 
  unsigned int avail_out; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int8 *end; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *window; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 result; 

  read = s->read;
  v4 = r;
  write = s->write;
  next_out = z->next_out;
  if ( read > write )
    write = s->end;
  avail_out = z->avail_out;
  v10 = (_DWORD)write - (_DWORD)read;
  v11 = avail_out;
  if ( v10 <= avail_out )
    v11 = v10;
  if ( v11 && r == -5 )
    v4 = 0;
  z->total_out += v11;
  z->avail_out = avail_out - v11;
  v12 = v11;
  if ( next_out )
  {
    memcpy_0(next_out, read, v11);
    next_out += v12;
  }
  end = s->end;
  v14 = &read[v12];
  if ( v14 == end )
  {
    v15 = s->write;
    window = s->window;
    if ( v15 == end )
    {
      s->write = window;
      LODWORD(v15) = (_DWORD)window;
    }
    v17 = z->avail_out;
    v18 = (_DWORD)v15 - (_DWORD)window;
    v19 = v17;
    if ( v18 <= v17 )
      v19 = v18;
    if ( v19 && v4 == -5 )
      v4 = 0;
    z->total_out += v19;
    z->avail_out = v17 - v19;
    v20 = v19;
    if ( next_out )
    {
      memcpy_0(next_out, window, v19);
      next_out += v20;
    }
    v14 = &window[v20];
  }
  z->next_out = next_out;
  result = v4;
  s->read = v14;
  return result;
}

