/*
==============
bdDeflate::deflate
==============
*/

int __fastcall bdDeflate::deflate(bdDeflate *this, const unsigned __int8 *src, int *srcLen, bdCompression::bdFlush __formal)
{
  return ?deflate@bdDeflate@@QEAAHPEBEPEAHW4bdFlush@bdCompression@@@Z(this, src, srcLen, __formal);
}

/*
==============
bdDeflate::flush
==============
*/

int __fastcall bdDeflate::flush(bdDeflate *this, bdCompression::bdFlush mode)
{
  return ?flush@bdDeflate@@QEAAHW4bdFlush@bdCompression@@@Z(this, mode);
}

/*
==============
bdDeflate::bdDeflate
==============
*/

void __fastcall bdDeflate::bdDeflate(bdDeflate *this, unsigned __int8 *destination, int capacity, int windowBits)
{
  ??0bdDeflate@@QEAA@PEAEHH@Z(this, destination, capacity, windowBits);
}

/*
==============
bdDeflate::~bdDeflate
==============
*/

void __fastcall bdDeflate::~bdDeflate(bdDeflate *this)
{
  ??1bdDeflate@@UEAA@XZ(this);
}

/*
==============
bdDeflate::clear
==============
*/

int __fastcall bdDeflate::clear(bdDeflate *this, unsigned __int8 *destination, int capacity)
{
  return ?clear@bdDeflate@@QEAAHPEAEH@Z(this, destination, capacity);
}

/*
==============
bdDeflate::copy
==============
*/

bdDeflate *__fastcall bdDeflate::copy(bdDeflate *this, bdDeflate *result, unsigned __int8 *destination, int capacity)
{
  return ?copy@bdDeflate@@QEAA?AV1@PEAEH@Z(this, result, destination, capacity);
}

/*
==============
bdDeflate::reset
==============
*/

int __fastcall bdDeflate::reset(bdDeflate *this)
{
  return ?reset@bdDeflate@@QEAAHXZ(this);
}

/*
==============
bdDeflate::reserve
==============
*/

int __fastcall bdDeflate::reserve(bdDeflate *this, int size)
{
  return ?reserve@bdDeflate@@QEAAHH@Z(this, size);
}

/*
==============
bdDeflate::bound
==============
*/

bool __fastcall bdDeflate::bound(bdDeflate *this, int srcLen)
{
  return ?bound@bdDeflate@@QEAA_NH@Z(this, srcLen);
}

/*
==============
bdDeflate::getBound
==============
*/

unsigned int __fastcall bdDeflate::getBound(bdDeflate *this, const unsigned int srcLen)
{
  return ?getBound@bdDeflate@@QEAAKK@Z(this, srcLen);
}

/*
==============
bdDeflate::get
==============
*/

const unsigned __int8 *__fastcall bdDeflate::get(bdDeflate *this)
{
  return ?get@bdDeflate@@QEBAPEBEXZ(this);
}

/*
==============
bdDeflate::size
==============
*/

int __fastcall bdDeflate::size(bdDeflate *this)
{
  return ?size@bdDeflate@@QEBAHXZ(this);
}

/*
==============
bdDeflate::capacity
==============
*/

int __fastcall bdDeflate::capacity(bdDeflate *this)
{
  return ?capacity@bdDeflate@@QEBAHXZ(this);
}

/*
==============
bdDeflate::consumed
==============
*/

int __fastcall bdDeflate::consumed(bdDeflate *this)
{
  return ?consumed@bdDeflate@@QEBAHXZ(this);
}

/*
==============
copy
==============
*/
__int64 copy(void *a, void *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_copy((mp_int *)a, (mp_int *)b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
deflate
==============
*/
__int64 deflate(z_stream_s *strm, int flush)
{
  internal_state *state; 
  int dummy; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  char v12; 
  int v13; 
  __int64 v14; 
  char v15; 
  __int64 v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int16 adler_high; 
  __int16 adler; 
  int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int i; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  block_state v45; 
  int v46; 
  __int16 v47; 
  __int16 v48; 
  int v49; 

  if ( !strm )
    return 4294967294i64;
  state = strm->state;
  if ( !state || (unsigned int)flush > 5 )
    return 4294967294i64;
  if ( !strm->next_out || !strm->next_in && strm->avail_in || (dummy = state[2].dummy, dummy == 666) && flush != 4 )
  {
    strm->msg = z_errmsg_zlib[4];
    return 4294967294i64;
  }
  if ( !strm->avail_out )
    goto LABEL_147;
  v6 = state[16].dummy;
  v7 = 0;
  *(_QWORD *)&state->dummy = strm;
  state[16].dummy = flush;
  if ( dummy == 42 )
  {
    if ( state[11].dummy == 2 )
    {
      strm->adler = j_crc32(0, NULL, 0);
      *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = 31;
      *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = -117;
      *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = 8;
      v8 = *(_QWORD *)&state[12].dummy;
      v9 = (unsigned int)state[10].dummy;
      if ( v8 )
      {
        *(_BYTE *)(v9 + *(_QWORD *)&state[4].dummy) = (*(_DWORD *)v8 != 0) + (*(_QWORD *)(v8 + 16) != 0i64 ? 4 : 0) + (*(_QWORD *)(v8 + 32) != 0i64 ? 8 : 0) + (*(_DWORD *)(v8 + 60) != 0 ? 2 : 0) + (*(_QWORD *)(v8 + 48) != 0i64 ? 0x10 : 0);
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 4i64);
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 5i64);
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 6i64);
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 7i64);
        v13 = state[43].dummy;
        v14 = (unsigned int)(state[10].dummy + 1);
        state[10].dummy = v14;
        if ( v13 == 9 )
        {
          v15 = 2;
        }
        else if ( state[44].dummy >= 2 || v13 < 2 )
        {
          v15 = 4;
        }
        else
        {
          v15 = 0;
        }
        *(_BYTE *)(v14 + *(_QWORD *)&state[4].dummy) = v15;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 12i64);
        v16 = *(_QWORD *)&state[12].dummy;
        v17 = state[10].dummy + 1;
        state[10].dummy = v17;
        if ( *(_QWORD *)(v16 + 16) )
        {
          *(_BYTE *)(v17 + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(v16 + 24);
          *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = *(_BYTE *)(*(_QWORD *)&state[12].dummy + 25i64);
          v17 = ++state[10].dummy;
          v16 = *(_QWORD *)&state[12].dummy;
        }
        if ( *(_DWORD *)(v16 + 60) )
          strm->adler = j_crc32(strm->adler, *(const unsigned __int8 **)&state[4].dummy, v17);
        state[14].dummy = 0;
        state[2].dummy = 69;
      }
      else
      {
        *(_BYTE *)(v9 + *(_QWORD *)&state[4].dummy) = 0;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = 0;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = 0;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = 0;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = 0;
        v10 = state[43].dummy;
        v11 = (unsigned int)(state[10].dummy + 1);
        state[10].dummy = v11;
        if ( v10 == 9 )
        {
          v12 = 2;
        }
        else if ( state[44].dummy >= 2 || v10 < 2 )
        {
          v12 = 4;
        }
        else
        {
          v12 = 0;
        }
        *(_BYTE *)(v11 + *(_QWORD *)&state[4].dummy) = v12;
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = 11;
        ++state[10].dummy;
        state[2].dummy = 113;
      }
    }
    else
    {
      if ( state[44].dummy >= 2 || (v18 = state[43].dummy, v18 < 2) )
      {
        v19 = 0;
        v20 = 32;
      }
      else if ( v18 >= 6 )
      {
        if ( v18 == 6 )
        {
          v19 = 128;
          v20 = 160;
        }
        else
        {
          v19 = 192;
          v20 = 224;
        }
      }
      else
      {
        v19 = 64;
        v20 = 96;
      }
      v21 = v19 | ((state[18].dummy << 12) - 30720);
      if ( state[37].dummy )
        v21 = v20 | ((state[18].dummy << 12) - 30720);
      state[2].dummy = 113;
      *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = (unsigned __int16)(31 * (v21 / 0x1F + 1)) >> 8;
      *(_BYTE *)((unsigned int)state[10].dummy + *(_QWORD *)&state[4].dummy) = 31 * (v21 / 0x1F + 1);
      v22 = (unsigned int)(state[10].dummy + 1);
      state[10].dummy = v22;
      if ( state[37].dummy )
      {
        adler_high = HIWORD(strm->adler);
        *(_BYTE *)(v22 + *(_QWORD *)&state[4].dummy) = HIBYTE(adler_high);
        *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = adler_high;
        ++state[10].dummy;
        adler = strm->adler;
        *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = HIBYTE(adler);
        *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = adler;
      }
      strm->adler = j_adler32_0(0, NULL, 0);
    }
  }
  v25 = state[2].dummy;
  if ( v25 == 69 )
  {
    v26 = *(_QWORD *)&state[12].dummy;
    if ( !*(_QWORD *)(v26 + 16) )
    {
LABEL_58:
      v25 = 73;
      state[2].dummy = 73;
      goto LABEL_59;
    }
    v27 = state[10].dummy;
    for ( i = v27; state[14].dummy < (unsigned int)*(unsigned __int16 *)(v26 + 24); v26 = *(_QWORD *)&state[12].dummy )
    {
      if ( i == state[6].dummy )
      {
        if ( *(_DWORD *)(v26 + 60) && i > v27 )
          strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v27), i - v27);
        flush_pending(strm);
        v27 = state[10].dummy;
        i = v27;
        if ( v27 == state[6].dummy )
          break;
      }
      *(_BYTE *)(i + *(_QWORD *)&state[4].dummy) = *(_BYTE *)((unsigned int)state[14].dummy++ + *(_QWORD *)(*(_QWORD *)&state[12].dummy + 16i64));
      i = state[10].dummy + 1;
      state[10].dummy = i;
    }
    v29 = *(_QWORD *)&state[12].dummy;
    if ( *(_DWORD *)(v29 + 60) && i > v27 )
    {
      strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v27), i - v27);
      v29 = *(_QWORD *)&state[12].dummy;
    }
    if ( state[14].dummy == *(_DWORD *)(v29 + 24) )
    {
      state[14].dummy = 0;
      goto LABEL_58;
    }
    v25 = state[2].dummy;
  }
LABEL_59:
  if ( v25 != 73 )
    goto LABEL_77;
  if ( !*(_QWORD *)(*(_QWORD *)&state[12].dummy + 32i64) )
    goto LABEL_76;
  v30 = (unsigned int)state[10].dummy;
  v31 = state[10].dummy;
  while ( 1 )
  {
    if ( v31 == state[6].dummy )
    {
      if ( *(_DWORD *)(*(_QWORD *)&state[12].dummy + 60i64) && v31 > (unsigned int)v30 )
        strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v30), v31 - v30);
      flush_pending(strm);
      v30 = (unsigned int)state[10].dummy;
      v31 = v30;
      if ( (_DWORD)v30 == state[6].dummy )
        break;
    }
    v32 = (unsigned int)state[14].dummy;
    v33 = *(unsigned __int8 *)(v32 + *(_QWORD *)(*(_QWORD *)&state[12].dummy + 32i64));
    state[14].dummy = v32 + 1;
    *(_BYTE *)(v31 + *(_QWORD *)&state[4].dummy) = v33;
    v31 = state[10].dummy + 1;
    state[10].dummy = v31;
    if ( !v33 )
      goto LABEL_71;
  }
  v33 = 1;
LABEL_71:
  if ( *(_DWORD *)(*(_QWORD *)&state[12].dummy + 60i64) && v31 > (unsigned int)v30 )
    strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v30), v31 - v30);
  if ( !v33 )
  {
    state[14].dummy = 0;
LABEL_76:
    v25 = 91;
    state[2].dummy = 91;
    goto LABEL_77;
  }
  v25 = state[2].dummy;
LABEL_77:
  if ( v25 == 91 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&state[12].dummy + 48i64) )
    {
      state[2].dummy = 103;
      goto LABEL_95;
    }
    v34 = (unsigned int)state[10].dummy;
    v35 = state[10].dummy;
    while ( 1 )
    {
      if ( v35 == state[6].dummy )
      {
        if ( *(_DWORD *)(*(_QWORD *)&state[12].dummy + 60i64) && v35 > (unsigned int)v34 )
          strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v34), v35 - v34);
        flush_pending(strm);
        v34 = (unsigned int)state[10].dummy;
        v35 = v34;
        if ( (_DWORD)v34 == state[6].dummy )
          break;
      }
      v36 = (unsigned int)state[14].dummy;
      v37 = *(unsigned __int8 *)(v36 + *(_QWORD *)(*(_QWORD *)&state[12].dummy + 48i64));
      state[14].dummy = v36 + 1;
      *(_BYTE *)(v35 + *(_QWORD *)&state[4].dummy) = v37;
      v35 = state[10].dummy + 1;
      state[10].dummy = v35;
      if ( !v37 )
        goto LABEL_89;
    }
    v37 = 1;
LABEL_89:
    if ( *(_DWORD *)(*(_QWORD *)&state[12].dummy + 60i64) && v35 > (unsigned int)v34 )
      strm->adler = j_crc32(strm->adler, (const unsigned __int8 *)(*(_QWORD *)&state[4].dummy + v34), v35 - v34);
    if ( v37 )
    {
      v25 = state[2].dummy;
    }
    else
    {
      v25 = 103;
      state[2].dummy = 103;
    }
  }
  if ( v25 != 103 )
    goto LABEL_101;
LABEL_95:
  if ( !*(_DWORD *)(*(_QWORD *)&state[12].dummy + 60i64) )
  {
LABEL_100:
    state[2].dummy = 113;
    goto LABEL_101;
  }
  v38 = state[10].dummy;
  v39 = state[6].dummy;
  if ( v38 + 2 > v39 )
  {
    flush_pending(strm);
    v38 = state[10].dummy;
    v39 = state[6].dummy;
  }
  if ( v38 + 2 <= v39 )
  {
    *(_BYTE *)(v38 + *(_QWORD *)&state[4].dummy) = strm->adler;
    *(_BYTE *)((unsigned int)++state[10].dummy + *(_QWORD *)&state[4].dummy) = BYTE1(strm->adler);
    ++state[10].dummy;
    strm->adler = j_crc32(0, NULL, 0);
    goto LABEL_100;
  }
LABEL_101:
  if ( state[10].dummy )
  {
    flush_pending(strm);
    if ( !strm->avail_out )
    {
      state[16].dummy = -1;
      return 0i64;
    }
  }
  else if ( !strm->avail_in )
  {
    v41 = 0;
    if ( v6 > 4 )
      v41 = 9;
    v42 = 0;
    if ( flush > 4 )
      v42 = 9;
    if ( 2 * flush - v42 <= 2 * v6 - v41 && flush != 4 )
      goto LABEL_147;
  }
  v43 = state[2].dummy;
  if ( v43 == 666 && strm->avail_in )
  {
LABEL_147:
    strm->msg = z_errmsg_zlib[7];
    return 4294967291i64;
  }
  if ( !strm->avail_in && !state[39].dummy && (!flush || v43 == 666) )
    goto LABEL_135;
  v44 = state[44].dummy;
  if ( v44 == 2 )
  {
    v45 = (unsigned int)deflate_huff(state, flush);
  }
  else if ( v44 == 3 )
  {
    v45 = (unsigned int)deflate_rle(state, flush);
  }
  else
  {
    v45 = configuration_table[state[43].dummy].func(state, flush);
  }
  if ( (unsigned int)(v45 - 2) <= 1 )
    state[2].dummy = 666;
  if ( (v45 & 0xFFFFFFFD) == 0 )
  {
    if ( strm->avail_out )
      return 0i64;
LABEL_145:
    state[16].dummy = -1;
    return 0i64;
  }
  if ( v45 == block_done )
  {
    if ( flush == 1 )
    {
      _tr_align(state);
    }
    else if ( flush != 5 )
    {
      _tr_stored_block(state, NULL, 0, 0);
      if ( flush == 3 )
      {
        *(_WORD *)(*(_QWORD *)&state[26].dummy + 2i64 * (unsigned int)(state[29].dummy - 1)) = 0;
        memset_0(*(void **)&state[26].dummy, 0, 2i64 * (unsigned int)(state[29].dummy - 1));
        if ( !state[39].dummy )
        {
          state[37].dummy = 0;
          state[33].dummy = 0;
          state[1475].dummy = 0;
        }
      }
    }
    flush_pending(strm);
    if ( !strm->avail_out )
      goto LABEL_145;
  }
LABEL_135:
  if ( flush != 4 )
    return 0i64;
  v46 = state[11].dummy;
  if ( v46 <= 0 )
    return 1i64;
  if ( v46 == 2 )
  {
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = strm->adler;
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = BYTE1(strm->adler);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = BYTE2(strm->adler);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = HIBYTE(strm->adler);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = strm->total_in;
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = BYTE1(strm->total_in);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = BYTE2(strm->total_in);
    *(_BYTE *)((unsigned int)state[10].dummy + *(_QWORD *)&state[4].dummy) = HIBYTE(strm->total_in);
  }
  else
  {
    v47 = HIWORD(strm->adler);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = HIBYTE(v47);
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = v47;
    v48 = strm->adler;
    *(_BYTE *)((unsigned int)state[10].dummy++ + *(_QWORD *)&state[4].dummy) = HIBYTE(v48);
    *(_BYTE *)((unsigned int)state[10].dummy + *(_QWORD *)&state[4].dummy) = v48;
  }
  ++state[10].dummy;
  flush_pending(strm);
  v49 = state[11].dummy;
  if ( v49 > 0 )
    state[11].dummy = -v49;
  LOBYTE(v7) = state[10].dummy == 0;
  return v7;
}

/*
==============
bdDeflate::bdDeflate
==============
*/
void bdDeflate::bdDeflate(bdDeflate *this, unsigned __int8 *destination, int capacity, int windowBits)
{
  bdDeflate::bdInternalState *v7; 
  bdDeflate::bdInternalState *v8; 
  bdDeflate::bdInternalState *m_ptr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdDeflate_vtbl *)&bdDeflate::`vftable';
  v7 = (bdDeflate::bdInternalState *)bdMemory::allocate(0x18ui64);
  v8 = v7;
  if ( v7 )
  {
    v7->m_refCount.m_value._My_val = 0;
    v7->__vftable = (bdDeflate::bdInternalState_vtbl *)&bdDeflate::bdInternalState::`vftable';
  }
  else
  {
    v8 = NULL;
  }
  this->m_state.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  this->m_compressed = destination;
  this->m_capacity = capacity;
  this->m_state.m_ptr->size = 0;
  this->m_state.m_ptr->consumed = 0;
  if ( destination )
  {
    this->m_compressed = destination;
    this->m_capacity = capacity;
  }
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
    m_ptr->size = 0;
}

/*
==============
bdDeflate::~bdDeflate
==============
*/
void bdDeflate::~bdDeflate(bdDeflate *this)
{
  bdDeflate::bdInternalState *m_ptr; 
  bdDeflate::bdInternalState *v3; 

  this->__vftable = (bdDeflate_vtbl *)&bdDeflate::`vftable';
  this->m_state.m_ptr->size = 0;
  this->m_state.m_ptr->consumed = 0;
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_state.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdDeflate::bdInternalState *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_state.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdDeflate::bound
==============
*/
bool bdDeflate::bound(bdDeflate *this, int srcLen)
{
  return this->m_capacity - this->m_state.m_ptr->size > (unsigned int)srcLen;
}

/*
==============
bdDeflate::capacity
==============
*/
__int64 bdDeflate::capacity(bdDeflate *this)
{
  return (unsigned int)this->m_capacity;
}

/*
==============
bdDeflate::clear
==============
*/
__int64 bdDeflate::clear(bdDeflate *this, unsigned __int8 *destination, int capacity)
{
  bdDeflate::bdInternalState *m_ptr; 

  if ( destination )
  {
    this->m_compressed = destination;
    this->m_capacity = capacity;
  }
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
    m_ptr->size = 0;
  return 0i64;
}

/*
==============
bdDeflate::consumed
==============
*/
bdDeflate::bdInternalState *bdDeflate::consumed(bdDeflate *this)
{
  bdDeflate::bdInternalState *result; 

  result = this->m_state.m_ptr;
  if ( result )
    return (bdDeflate::bdInternalState *)(unsigned int)result->consumed;
  return result;
}

/*
==============
bdDeflate::copy
==============
*/
bdDeflate *bdDeflate::copy(bdDeflate *this, bdDeflate *result, unsigned __int8 *destination, int capacity)
{
  bdDeflate::bdInternalState *v7; 
  bdDeflate::bdInternalState *v8; 
  bdDeflate::bdInternalState *m_ptr; 

  result->m_refCount.m_value._My_val = 0;
  result->__vftable = (bdDeflate_vtbl *)&bdDeflate::`vftable';
  v7 = (bdDeflate::bdInternalState *)bdMemory::allocate(0x18ui64);
  v8 = v7;
  if ( v7 )
  {
    v7->m_refCount.m_value._My_val = 0;
    v7->__vftable = (bdDeflate::bdInternalState_vtbl *)&bdDeflate::bdInternalState::`vftable';
  }
  else
  {
    v8 = NULL;
  }
  result->m_state.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  result->m_compressed = destination;
  result->m_capacity = capacity;
  result->m_state.m_ptr->size = 0;
  result->m_state.m_ptr->consumed = 0;
  if ( destination )
  {
    result->m_compressed = destination;
    result->m_capacity = capacity;
  }
  m_ptr = result->m_state.m_ptr;
  if ( m_ptr )
    m_ptr->size = 0;
  return result;
}

/*
==============
bdDeflate::deflate
==============
*/
__int64 bdDeflate::deflate(bdDeflate *this, const unsigned __int8 *src, int *srcLen, bdCompression::bdFlush __formal)
{
  bdDeflate::bdInternalState *m_ptr; 
  __int64 size; 
  int v8; 
  int v9; 

  m_ptr = this->m_state.m_ptr;
  if ( !m_ptr || !srcLen )
    return 4294967291i64;
  size = m_ptr->size;
  v8 = *srcLen;
  v9 = *srcLen;
  if ( this->m_capacity - (int)size < *srcLen )
    v9 = this->m_capacity - size;
  if ( src )
  {
    if ( v9 )
    {
      memcpy_0(&this->m_compressed[size], src, v9);
      this->m_state.m_ptr->size += v9;
      this->m_state.m_ptr->consumed += v9;
      *srcLen -= v9;
      v8 = *srcLen;
    }
  }
  return v8 == 0;
}

/*
==============
bdDeflate::flush
==============
*/
__int64 bdDeflate::flush(bdDeflate *this, bdCompression::bdFlush mode)
{
  __int64 result; 

  result = 1i64;
  if ( !this->m_state.m_ptr )
    return 4294967291i64;
  return result;
}

/*
==============
bdDeflate::get
==============
*/
unsigned __int8 *bdDeflate::get(bdDeflate *this)
{
  return this->m_compressed;
}

/*
==============
bdDeflate::getBound
==============
*/
__int64 bdDeflate::getBound(bdDeflate *this, const unsigned int srcLen)
{
  return srcLen;
}

/*
==============
bdDeflate::reserve
==============
*/
__int64 bdDeflate::reserve(bdDeflate *this, int size)
{
  bdDeflate::bdInternalState *m_ptr; 
  int m_capacity; 

  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
  {
    m_capacity = m_ptr->size + size;
    if ( m_capacity >= this->m_capacity )
      m_capacity = this->m_capacity;
    m_ptr->size = m_capacity;
  }
  return 0i64;
}

/*
==============
bdDeflate::reset
==============
*/
__int64 bdDeflate::reset(bdDeflate *this)
{
  this->m_state.m_ptr->size = 0;
  this->m_state.m_ptr->consumed = 0;
  return 1i64;
}

/*
==============
bdDeflate::size
==============
*/
bdDeflate::bdInternalState *bdDeflate::size(bdDeflate *this)
{
  bdDeflate::bdInternalState *result; 

  result = this->m_state.m_ptr;
  if ( result )
    return (bdDeflate::bdInternalState *)(unsigned int)result->size;
  return result;
}

