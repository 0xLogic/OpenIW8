/*
==============
inflateEnd
==============
*/
__int64 inflateEnd(z_stream_s *z)
{
  internal_state *state; 
  inflate_blocks_state *v3; 
  __int64 result; 

  if ( !z )
    return 4294967294i64;
  state = z->state;
  if ( !state || !z->zfree )
    return 4294967294i64;
  v3 = *(inflate_blocks_state **)&state[6].dummy;
  if ( v3 )
    inflate_blocks_free(v3, z);
  z->zfree(z->opaque, z->state);
  result = 0i64;
  z->state = NULL;
  return result;
}

/*
==============
inflateInit2_
==============
*/
__int64 inflateInit2_(z_stream_s *z, int w, const char *version, int stream_size)
{
  internal_state *v7; 
  __int64 (__fastcall *v8)(unsigned int, const unsigned __int8 *, unsigned int); 
  inflate_blocks_state *v9; 

  if ( !version || *version != 49 || stream_size != 88 )
    return 4294967290i64;
  if ( !z )
    return 4294967294i64;
  z->msg = NULL;
  if ( !z->zalloc )
  {
    z->opaque = NULL;
    z->zalloc = zcalloc;
  }
  if ( !z->zfree )
    z->zfree = zcfree;
  v7 = (internal_state *)z->zalloc(z->opaque, 1i64, 32i64);
  z->state = v7;
  if ( v7 )
  {
    *(_QWORD *)&v7[6].dummy = 0i64;
    z->state[3].dummy = 0;
    if ( w < 0 )
    {
      w = -w;
      z->state[3].dummy = 1;
    }
    if ( (unsigned int)(w - 8) > 7 )
    {
      inflateEnd(z);
      return 4294967294i64;
    }
    v8 = adler32;
    z->state[4].dummy = w;
    if ( z->state[3].dummy )
      v8 = NULL;
    v9 = inflate_blocks_new(z, (unsigned int (__fastcall *)(unsigned int, const unsigned __int8 *, unsigned int))v8, 1 << w);
    *(_QWORD *)&z->state[6].dummy = v9;
    if ( v9 )
    {
      inflateReset(z);
      return 0i64;
    }
    inflateEnd(z);
  }
  return 4294967292i64;
}

/*
==============
inflateReset
==============
*/
__int64 inflateReset(z_stream_s *z)
{
  internal_state *state; 

  if ( !z )
    return 4294967294i64;
  state = z->state;
  if ( !state )
    return 4294967294i64;
  z->total_out = 0;
  z->total_in = 0;
  z->msg = NULL;
  state->dummy = state[3].dummy != 0 ? 7 : 0;
  inflate_blocks_reset(*(inflate_blocks_state **)&z->state[6].dummy, z, NULL);
  return 0i64;
}

/*
==============
syncsearch
==============
*/
__int64 syncsearch(unsigned int *have, const unsigned __int8 *buf, unsigned int len)
{
  unsigned int v3; 
  unsigned int v6; 
  int v7; 
  int v8; 

  v3 = *have;
  v6 = 0;
  if ( len )
  {
    do
    {
      if ( v3 >= 4 )
        break;
      v7 = *buf;
      v8 = 255;
      if ( v3 < 2 )
        v8 = 0;
      if ( v7 == v8 )
      {
        ++v3;
      }
      else
      {
        v3 = 4 - v3;
        if ( (_BYTE)v7 )
          v3 = 0;
      }
      ++v6;
      ++buf;
    }
    while ( v6 < len );
    *have = v3;
    return v6;
  }
  else
  {
    *have = v3;
    return 0i64;
  }
}

/*
==============
updatewindow
==============
*/
__int64 updatewindow(z_stream_s *strm, const unsigned __int8 *end, unsigned int copy)
{
  internal_state *state; 
  __int64 v5; 
  char *v6; 
  char *v7; 
  unsigned int dummy; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 

  state = strm->state;
  v5 = copy;
  v6 = *(char **)&state[14].dummy;
  if ( !v6 )
  {
    v7 = (char *)strm->zalloc(strm->opaque, (unsigned int)(1 << state[10].dummy), 1i64);
    *(_QWORD *)&state[14].dummy = v7;
    v6 = v7;
    if ( !v7 )
      return 1i64;
  }
  dummy = state[11].dummy;
  if ( !dummy )
  {
    dummy = 1 << state[10].dummy;
    state[11].dummy = dummy;
    *(_QWORD *)&state[12].dummy = 0i64;
  }
  if ( (unsigned int)v5 < dummy )
  {
    v11 = (unsigned int)state[13].dummy;
    v12 = dummy - v11;
    if ( v12 > (unsigned int)v5 )
      v12 = v5;
    memcpy_0(&v6[v11], &end[-v5], v12);
    v13 = v5 - v12;
    if ( v13 )
    {
      memcpy_0(*(void **)&state[14].dummy, &end[-v13], v13);
      v10 = state[11].dummy;
      state[13].dummy = v13;
    }
    else
    {
      state[13].dummy += v12;
      v14 = state[13].dummy;
      if ( v14 == state[11].dummy )
        v14 = 0;
      state[13].dummy = v14;
      v15 = state[12].dummy;
      if ( v15 >= state[11].dummy )
        return 0i64;
      v10 = v12 + v15;
    }
  }
  else
  {
    memcpy_0(v6, &end[-dummy], dummy);
    v10 = state[11].dummy;
    state[13].dummy = 0;
  }
  state[12].dummy = v10;
  return 0i64;
}

/*
==============
inflateCopy
==============
*/
__int64 inflateCopy(z_stream_s *dest, z_stream_s *source)
{
  internal_state *state; 
  void *(__fastcall *zalloc)(void *, unsigned int, unsigned int); 
  internal_state *v6; 
  __int64 result; 
  void *v8; 
  unsigned __int64 v13; 

  _RBX = source;
  _R14 = dest;
  if ( !dest )
    return 4294967294i64;
  if ( !source )
    return 4294967294i64;
  state = source->state;
  if ( !state )
    return 4294967294i64;
  zalloc = source->zalloc;
  if ( !zalloc || !source->zfree )
    return 4294967294i64;
  v6 = (internal_state *)zalloc(source->opaque, 1u, 7144u);
  if ( !v6 )
    return 4294967292i64;
  v8 = NULL;
  if ( !*(_QWORD *)&state[14].dummy || (v8 = _RBX->zalloc(_RBX->opaque, 1 << state[10].dummy, 1u)) != NULL )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [r14], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [r14+20h], ymm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [r14+40h], xmm0
      vmovsd  xmm1, qword ptr [rbx+50h]
      vmovsd  qword ptr [r14+50h], xmm1
    }
    memcpy_0(v6, state, 0x1BE8ui64);
    v13 = *(_QWORD *)&state[22].dummy;
    if ( v13 >= (unsigned __int64)&state[338] && v13 <= (unsigned __int64)&state[1781] )
    {
      *(_QWORD *)&v6[22].dummy = &v6[((__int64)(v13 - (_QWORD)state - 1352) >> 2) + 338];
      *(_QWORD *)&v6[24].dummy = &v6[((*(_QWORD *)&state[24].dummy - (_QWORD)state - 1352i64) >> 2) + 338];
    }
    *(_QWORD *)&v6[32].dummy = &v6[((*(_QWORD *)&state[32].dummy - (_QWORD)state - 1352i64) >> 2) + 338];
    if ( v8 )
      memcpy_0(v8, *(const void **)&state[14].dummy, (unsigned int)(1 << state[10].dummy));
    *(_QWORD *)&v6[14].dummy = v8;
    result = 0i64;
    _R14->state = v6;
  }
  else
  {
    _RBX->zfree(_RBX->opaque, v6);
    return 4294967292i64;
  }
  return result;
}

/*
==============
inflateGetDictionary
==============
*/
__int64 inflateGetDictionary(z_stream_s *strm, unsigned __int8 *dictionary, unsigned int *dictLength)
{
  internal_state *state; 
  int dummy; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  dummy = state[12].dummy;
  if ( dummy && dictionary )
  {
    memcpy_0(dictionary, (const void *)(*(_QWORD *)&state[14].dummy + (unsigned int)state[13].dummy), (unsigned int)(dummy - state[13].dummy));
    memcpy_0(&dictionary[(unsigned int)state[12].dummy - (unsigned __int64)(unsigned int)state[13].dummy], *(const void **)&state[14].dummy, (unsigned int)state[13].dummy);
  }
  if ( dictLength )
    *dictLength = state[12].dummy;
  return 0i64;
}

/*
==============
inflateGetHeader
==============
*/
__int64 inflateGetHeader(z_stream_s *strm, gz_header_s *head)
{
  internal_state *state; 
  __int64 result; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state || (state[2].dummy & 2) == 0 )
    return 4294967294i64;
  *(_QWORD *)&state[8].dummy = head;
  result = 0i64;
  head->done = 0;
  return result;
}

/*
==============
inflateInit_
==============
*/
__int64 inflateInit_(z_stream_s *strm, const char *version, int stream_size)
{
  void *(__fastcall *zalloc)(void *, unsigned int, unsigned int); 
  void *opaque; 
  internal_state *v7; 
  internal_state *v8; 
  internal_state *state; 
  unsigned int v10; 

  if ( !version || *version != 49 || stream_size != 88 )
    return 4294967290i64;
  if ( !strm )
    return 4294967294i64;
  zalloc = strm->zalloc;
  strm->msg = NULL;
  if ( zalloc )
  {
    opaque = strm->opaque;
  }
  else
  {
    zalloc = zcalloc;
    strm->opaque = NULL;
    strm->zalloc = zcalloc;
    opaque = NULL;
  }
  if ( !strm->zfree )
    strm->zfree = zcfree;
  v7 = (internal_state *)zalloc(opaque, 1u, 0x1BE8u);
  v8 = v7;
  if ( v7 )
  {
    strm->state = v7;
    *(_QWORD *)&v7[14].dummy = 0i64;
    state = strm->state;
    if ( state )
    {
      if ( *(_QWORD *)&state[14].dummy )
      {
        if ( state[10].dummy != 15 )
        {
          ((void (__fastcall *)(void *))strm->zfree)(strm->opaque);
          *(_QWORD *)&state[14].dummy = 0i64;
        }
      }
      state[2].dummy = 1;
      state[10].dummy = 15;
      v10 = j_inflateReset_0(strm);
      if ( !v10 )
        return v10;
    }
    else
    {
      v10 = -2;
    }
    strm->zfree(strm->opaque, v8);
    strm->state = NULL;
    return v10;
  }
  return 4294967292i64;
}

/*
==============
inflateMark
==============
*/
__int64 inflateMark(z_stream_s *strm)
{
  internal_state *state; 

  if ( !strm )
    return 4294901760i64;
  state = strm->state;
  if ( !state )
    return 4294901760i64;
  if ( state->dummy == 15 )
    return (unsigned int)(state[18].dummy + (state[1783].dummy << 16));
  if ( state->dummy == 24 )
    return (unsigned int)(state[1784].dummy - state[18].dummy + (state[1783].dummy << 16));
  return (unsigned int)(state[1783].dummy << 16);
}

/*
==============
inflatePrime
==============
*/
__int64 inflatePrime(z_stream_s *strm, int bits, int value)
{
  internal_state *state; 
  __int64 result; 
  int dummy; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  if ( bits < 0 )
  {
    result = 0i64;
    *(_QWORD *)&state[16].dummy = 0i64;
    return result;
  }
  if ( bits > 16 )
    return 4294967294i64;
  dummy = state[17].dummy;
  if ( (unsigned int)(dummy + bits) > 0x20 )
    return 4294967294i64;
  state[17].dummy = dummy + bits;
  state[16].dummy += (value & ((1 << bits) - 1)) << dummy;
  return 0i64;
}

/*
==============
inflateReset2
==============
*/
int inflateReset2(z_stream_s *strm, int windowBits)
{
  int v2; 
  internal_state *state; 
  int v5; 

  v2 = windowBits;
  if ( !strm )
    return -2;
  state = strm->state;
  if ( !state )
    return -2;
  if ( windowBits >= 0 )
  {
    v5 = (windowBits >> 4) + 1;
    if ( windowBits < 48 )
      v2 = windowBits & 0xF;
  }
  else
  {
    v5 = 0;
    v2 = -windowBits;
  }
  if ( v2 && (unsigned int)(v2 - 8) > 7 )
    return -2;
  if ( *(_QWORD *)&state[14].dummy )
  {
    if ( state[10].dummy != v2 )
    {
      ((void (__fastcall *)(void *))strm->zfree)(strm->opaque);
      *(_QWORD *)&state[14].dummy = 0i64;
    }
  }
  state[2].dummy = v5;
  state[10].dummy = v2;
  return j_inflateReset_0(strm);
}

/*
==============
inflateResetKeep
==============
*/
__int64 inflateResetKeep(z_stream_s *strm)
{
  internal_state *state; 
  __int64 result; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  state[7].dummy = 0;
  strm->total_out = 0;
  strm->total_in = 0;
  strm->msg = NULL;
  if ( state[2].dummy )
    strm->adler = state[2].dummy & 1;
  *(_QWORD *)&state->dummy = 0i64;
  *(_QWORD *)&state[32].dummy = state + 338;
  *(_QWORD *)&state[24].dummy = state + 338;
  *(_QWORD *)&state[22].dummy = state + 338;
  result = 0i64;
  state[3].dummy = 0;
  state[5].dummy = 0x8000;
  *(_QWORD *)&state[8].dummy = 0i64;
  *(_QWORD *)&state[16].dummy = 0i64;
  state[1782].dummy = 1;
  state[1783].dummy = -1;
  return result;
}

/*
==============
inflateSetDictionary
==============
*/
__int64 inflateSetDictionary(z_stream_s *strm, const unsigned __int8 *dictionary, unsigned int dictLength)
{
  __int64 v3; 
  internal_state *state; 
  int dummy; 
  unsigned int v9; 

  v3 = dictLength;
  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  dummy = state->dummy;
  if ( state[2].dummy )
  {
    if ( dummy != 10 )
      return 4294967294i64;
  }
  else if ( dummy != 10 )
  {
    goto LABEL_9;
  }
  v9 = j_adler32_0(0, NULL, 0);
  if ( j_adler32_0(v9, dictionary, v3) != state[6].dummy )
    return 4294967293i64;
LABEL_9:
  if ( (unsigned int)updatewindow(strm, &dictionary[v3], v3) )
  {
    state->dummy = 30;
    return 4294967292i64;
  }
  else
  {
    state[3].dummy = 1;
    return 0i64;
  }
}

/*
==============
inflateSync
==============
*/
__int64 inflateSync(z_stream_s *strm)
{
  internal_state *state; 
  unsigned int avail_in; 
  __int64 result; 
  int dummy; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  char v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  char *v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  unsigned int total_in; 
  unsigned int v19; 
  unsigned int total_out; 
  char v21[8]; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  avail_in = strm->avail_in;
  if ( !avail_in && state[17].dummy < 8u )
    return 4294967291i64;
  if ( state->dummy != 31 )
  {
    dummy = state[17].dummy;
    v6 = state[16].dummy;
    state->dummy = 31;
    v7 = v6 << (dummy & 7);
    v8 = dummy - (dummy & 7);
    state[16].dummy = v7;
    v9 = 0;
    state[17].dummy = v8;
    if ( v8 >= 8 )
    {
      do
      {
        v10 = state[16].dummy;
        v8 -= 8;
        v11 = v9++;
        v7 >>= 8;
        state[16].dummy = v7;
        v21[v11] = v10;
      }
      while ( v8 >= 8 );
      state[17].dummy = v8;
    }
    state[31].dummy = 0;
    v12 = 0;
    v13 = 0;
    if ( v9 )
    {
      v14 = v21;
      do
      {
        if ( v12 >= 4 )
          break;
        v15 = (unsigned __int8)*v14;
        v16 = 255;
        if ( v12 < 2 )
          v16 = 0;
        if ( v15 == v16 )
        {
          ++v12;
        }
        else
        {
          v12 = 4 - v12;
          if ( (_BYTE)v15 )
            v12 = 0;
        }
        ++v13;
        ++v14;
      }
      while ( v13 < v9 );
    }
    state[31].dummy = v12;
    avail_in = strm->avail_in;
  }
  v17 = syncsearch((unsigned int *)&state[31], strm->next_in, avail_in);
  total_in = strm->total_in;
  strm->avail_in -= v17;
  v19 = v17 + total_in;
  strm->next_in += v17;
  strm->total_in = v19;
  if ( state[31].dummy != 4 )
    return 4294967293i64;
  total_out = strm->total_out;
  j_inflateReset_0(strm);
  strm->total_in = v19;
  result = 0i64;
  strm->total_out = total_out;
  state->dummy = 11;
  return result;
}

/*
==============
inflateSyncPoint
==============
*/
__int64 inflateSyncPoint(z_stream_s *strm)
{
  internal_state *state; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  return state->dummy == 13 && !state[17].dummy;
}

/*
==============
inflateUndermine
==============
*/
__int64 inflateUndermine(z_stream_s *strm, int subvert)
{
  internal_state *state; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state )
    return 4294967294i64;
  state[1782].dummy = 1;
  return 4294967293i64;
}

