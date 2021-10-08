/*
==============
bdInflate::inflate
==============
*/

int __fastcall bdInflate::inflate(bdInflate *this, const unsigned __int8 *src, int *srcLen, bdCompression::bdFlush __formal)
{
  return ?inflate@bdInflate@@QEAAHPEBEPEAHW4bdFlush@bdCompression@@@Z(this, src, srcLen, __formal);
}

/*
==============
reset
==============
*/

void reset(void)
{
  ?reset@@YAXXZ();
}

/*
==============
bdInflate::reserve
==============
*/

int __fastcall bdInflate::reserve(bdInflate *this, int size)
{
  return ?reserve@bdInflate@@QEAAHH@Z(this, size);
}

/*
==============
bdInflate::size
==============
*/

int __fastcall bdInflate::size(bdInflate *this)
{
  return ?size@bdInflate@@QEBAHXZ(this);
}

/*
==============
bdInflate::~bdInflate
==============
*/

void __fastcall bdInflate::~bdInflate(bdInflate *this)
{
  ??1bdInflate@@UEAA@XZ(this);
}

/*
==============
bdInflate::clear
==============
*/

int __fastcall bdInflate::clear(bdInflate *this, unsigned __int8 *destination, int capacity)
{
  return ?clear@bdInflate@@QEAAHPEAEH@Z(this, destination, capacity);
}

/*
==============
bdInflate::capacity
==============
*/

int __fastcall bdInflate::capacity(bdInflate *this)
{
  return ?capacity@bdInflate@@QEBAHXZ(this);
}

/*
==============
bdInflate::reset
==============
*/

int __fastcall bdInflate::reset(bdInflate *this)
{
  return ?reset@bdInflate@@QEAAHXZ(this);
}

/*
==============
bdInflate::bdInflate
==============
*/

void __fastcall bdInflate::bdInflate(bdInflate *this, unsigned __int8 *destination, int capacity)
{
  ??0bdInflate@@QEAA@PEAEH@Z(this, destination, capacity);
}

/*
==============
bdInflate::get
==============
*/

const unsigned __int8 *__fastcall bdInflate::get(bdInflate *this)
{
  return ?get@bdInflate@@QEBAPEBEXZ(this);
}

/*
==============
bdInflate::consumed
==============
*/

int __fastcall bdInflate::consumed(bdInflate *this)
{
  return ?consumed@bdInflate@@QEBAHXZ(this);
}

/*
==============
bdInflate::flush
==============
*/

int __fastcall bdInflate::flush(bdInflate *this, bdCompression::bdFlush mode)
{
  return ?flush@bdInflate@@QEAAHW4bdFlush@bdCompression@@@Z(this, mode);
}

/*
==============
get
==============
*/

void __fastcall get(const hkMpRational *rat, hkMpUint *valueOut)
{
  ?get@@YAXAEBUhkMpRational@@AEAUhkMpUint@@@Z(rat, valueOut);
}

/*
==============
get
==============
*/
void get(const hkMpRational *rat, hkMpUint *valueOut)
{
  div(&rat->m_num, &rat->m_den, valueOut);
}

/*
==============
inflate
==============
*/
__int64 inflate(z_stream_s *z, int f)
{
  internal_state *state; 
  unsigned int dummy; 
  int v5; 
  unsigned int v6; 
  unsigned int avail_in; 
  int v8; 
  internal_state *v9; 
  unsigned int v10; 
  internal_state *v11; 
  int v12; 
  int v13; 
  internal_state *v14; 
  unsigned int v15; 
  internal_state *v16; 
  unsigned int v17; 
  internal_state *v18; 
  internal_state *v19; 
  unsigned int v20; 
  internal_state *v21; 
  internal_state *v22; 
  unsigned int v23; 
  internal_state *v24; 
  internal_state *v25; 
  __int64 result; 
  unsigned int v27; 
  internal_state *v28; 
  unsigned int v29; 
  internal_state *v30; 
  internal_state *v31; 
  unsigned int v32; 
  internal_state *v33; 
  internal_state *v34; 
  unsigned int v35; 
  internal_state *v36; 
  internal_state *v37; 

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
  while ( 2 )
  {
    switch ( dummy )
    {
      case 0u:
        avail_in = z->avail_in;
        if ( !avail_in )
          return v6;
        ++z->total_in;
        z->avail_in = avail_in - 1;
        v6 = v5;
        v8 = *z->next_in;
        z->state[1].dummy = v8;
        ++z->next_in;
        if ( (v8 & 0xF) != 8 )
        {
          z->state->dummy = 13;
          z->msg = "unknown compression method";
          goto LABEL_35;
        }
        v9 = z->state;
        if ( ((unsigned int)v9[1].dummy >> 4) + 8 > v9[4].dummy )
        {
          v9->dummy = 13;
          z->msg = "invalid window size";
          goto LABEL_35;
        }
        v9->dummy = 1;
        goto $LN12_390;
      case 1u:
$LN12_390:
        v10 = z->avail_in;
        if ( !v10 )
          return v6;
        ++z->total_in;
        v11 = z->state;
        v6 = v5;
        z->avail_in = v10 - 1;
        v12 = *z->next_in++;
        if ( v12 + (v11[1].dummy << 8) != 31 * ((v12 + (v11[1].dummy << 8)) / 0x1Fu) )
        {
          v11->dummy = 13;
          z->msg = "incorrect header check";
LABEL_35:
          z->state[1].dummy = 5;
LABEL_36:
          dummy = z->state->dummy;
          if ( dummy > 0xD )
            return 4294967294i64;
          continue;
        }
        if ( (v12 & 0x20) == 0 )
        {
          v11->dummy = 7;
          goto LABEL_36;
        }
        z->state->dummy = 2;
$LN16_208:
        v27 = z->avail_in;
        if ( !v27 )
          return v6;
        ++z->total_in;
        z->avail_in = v27 - 1;
        v6 = v5;
        z->state[2].dummy = *z->next_in << 24;
        v28 = z->state;
        ++z->next_in;
        v28->dummy = 3;
$LN18_209:
        v29 = z->avail_in;
        if ( !v29 )
          return v6;
        ++z->total_in;
        v30 = z->state;
        v6 = v5;
        z->avail_in = v29 - 1;
        v30[2].dummy += *z->next_in << 16;
        v31 = z->state;
        ++z->next_in;
        v31->dummy = 4;
$LN20_191:
        v32 = z->avail_in;
        if ( !v32 )
          return v6;
        ++z->total_in;
        v33 = z->state;
        v6 = v5;
        z->avail_in = v32 - 1;
        v33[2].dummy += *z->next_in << 8;
        v34 = z->state;
        ++z->next_in;
        v34->dummy = 5;
$LN22_215:
        v35 = z->avail_in;
        if ( !v35 )
          return v6;
        ++z->total_in;
        v36 = z->state;
        z->avail_in = v35 - 1;
        v36[2].dummy += *z->next_in;
        v37 = z->state;
        ++z->next_in;
        z->adler = v37[2].dummy;
        result = 2i64;
        v37->dummy = 6;
        return result;
      case 2u:
        goto $LN16_208;
      case 3u:
        goto $LN18_209;
      case 4u:
        goto $LN20_191;
      case 5u:
        goto $LN22_215;
      case 6u:
        z->state->dummy = 13;
        z->msg = "need dictionary";
        z->state[1].dummy = 0;
        return 4294967294i64;
      case 7u:
        v13 = inflate_blocks(*(inflate_blocks_state **)&z->state[6].dummy, z, v6);
        v6 = v13;
        if ( v13 == -3 )
        {
          z->state->dummy = 13;
          z->state[1].dummy = 0;
          goto LABEL_36;
        }
        if ( !v13 )
          v6 = v5;
        if ( v6 != 1 )
          return v6;
        v6 = v5;
        inflate_blocks_reset(*(inflate_blocks_state **)&z->state[6].dummy, z, (unsigned int *)&z->state[1]);
        v14 = z->state;
        if ( v14[3].dummy )
        {
          v14->dummy = 12;
          goto LABEL_36;
        }
        v14->dummy = 8;
$LN30_104:
        v15 = z->avail_in;
        if ( !v15 )
          return v6;
        ++z->total_in;
        z->avail_in = v15 - 1;
        v6 = v5;
        z->state[2].dummy = *z->next_in << 24;
        v16 = z->state;
        ++z->next_in;
        v16->dummy = 9;
$LN32_95:
        v17 = z->avail_in;
        if ( !v17 )
          return v6;
        ++z->total_in;
        v18 = z->state;
        v6 = v5;
        z->avail_in = v17 - 1;
        v18[2].dummy += *z->next_in << 16;
        v19 = z->state;
        ++z->next_in;
        v19->dummy = 10;
$LN34_104:
        v20 = z->avail_in;
        if ( !v20 )
          return v6;
        ++z->total_in;
        v21 = z->state;
        v6 = v5;
        z->avail_in = v20 - 1;
        v21[2].dummy += *z->next_in << 8;
        v22 = z->state;
        ++z->next_in;
        v22->dummy = 11;
$LN36_77:
        v23 = z->avail_in;
        if ( !v23 )
          return v6;
        ++z->total_in;
        v24 = z->state;
        v6 = v5;
        z->avail_in = v23 - 1;
        v24[2].dummy += *z->next_in;
        v25 = z->state;
        ++z->next_in;
        if ( v25[1].dummy == v25[2].dummy )
        {
          z->state->dummy = 12;
          return 1i64;
        }
        v25->dummy = 13;
        z->msg = "incorrect data check";
        goto LABEL_35;
      case 8u:
        goto $LN30_104;
      case 9u:
        goto $LN32_95;
      case 0xAu:
        goto $LN34_104;
      case 0xBu:
        goto $LN36_77;
      case 0xCu:
        return 1i64;
      case 0xDu:
        return 4294967293i64;
      default:
        return 4294967294i64;
    }
  }
}

/*
==============
reset
==============
*/
void reset(void)
{
  ;
}

/*
==============
bdInflate::bdInflate
==============
*/
void bdInflate::bdInflate(bdInflate *this, unsigned __int8 *destination, int capacity)
{
  bdInflate::bdInternalState *v6; 
  bdInflate::bdInternalState *v7; 
  bdInflate::bdInternalState *m_ptr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdInflate_vtbl *)&bdInflate::`vftable';
  v6 = (bdInflate::bdInternalState *)bdMemory::allocate(0x18ui64);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v6->m_refCount.m_value._My_val = 0i64;
    *(_QWORD *)&v6->size = 0i64;
    v6->m_refCount.m_value._My_val = 0;
    v6->__vftable = (bdInflate::bdInternalState_vtbl *)&bdInflate::bdInternalState::`vftable';
  }
  else
  {
    v7 = NULL;
  }
  this->m_state.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  this->m_uncompressed = destination;
  this->m_capacity = capacity;
  if ( destination )
  {
    this->m_uncompressed = destination;
    this->m_capacity = capacity;
  }
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
    m_ptr->size = 0;
}

/*
==============
bdInflate::~bdInflate
==============
*/
void bdInflate::~bdInflate(bdInflate *this)
{
  bdInflate::bdInternalState *m_ptr; 
  bdInflate::bdInternalState *v3; 

  this->__vftable = (bdInflate_vtbl *)&bdInflate::`vftable';
  this->m_state.m_ptr->size = 0;
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_state.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdInflate::bdInternalState *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_state.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdInflate::capacity
==============
*/
__int64 bdInflate::capacity(bdInflate *this)
{
  return (unsigned int)this->m_capacity;
}

/*
==============
bdInflate::clear
==============
*/
__int64 bdInflate::clear(bdInflate *this, unsigned __int8 *destination, int capacity)
{
  bdInflate::bdInternalState *m_ptr; 

  if ( destination )
  {
    this->m_uncompressed = destination;
    this->m_capacity = capacity;
  }
  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
    m_ptr->size = 0;
  return 0i64;
}

/*
==============
bdInflate::consumed
==============
*/
bdInflate::bdInternalState *bdInflate::consumed(bdInflate *this)
{
  bdInflate::bdInternalState *result; 

  result = this->m_state.m_ptr;
  if ( result )
    return (bdInflate::bdInternalState *)(unsigned int)result->size;
  return result;
}

/*
==============
bdInflate::flush
==============
*/
__int64 bdInflate::flush(bdInflate *this, bdCompression::bdFlush mode)
{
  return 4294967291i64;
}

/*
==============
bdInflate::get
==============
*/
unsigned __int8 *bdInflate::get(bdInflate *this)
{
  return this->m_uncompressed;
}

/*
==============
bdInflate::inflate
==============
*/
__int64 bdInflate::inflate(bdInflate *this, const unsigned __int8 *src, int *srcLen, bdCompression::bdFlush __formal)
{
  bdInflate::bdInternalState *m_ptr; 
  __int64 size; 
  int v8; 
  __int64 result; 
  bool v10; 

  m_ptr = this->m_state.m_ptr;
  if ( !m_ptr || !src || !srcLen )
    return 4294967291i64;
  size = m_ptr->size;
  v8 = this->m_capacity - size;
  if ( v8 >= *srcLen )
    v8 = *srcLen;
  memcpy_0(&this->m_uncompressed[size], src, v8);
  this->m_state.m_ptr->size += v8;
  result = 0i64;
  v10 = *srcLen == v8;
  *srcLen -= v8;
  if ( v10 )
    return 1i64;
  return result;
}

/*
==============
bdInflate::reserve
==============
*/
__int64 bdInflate::reserve(bdInflate *this, int size)
{
  bdInflate::bdInternalState *m_ptr; 
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
bdInflate::reset
==============
*/
__int64 bdInflate::reset(bdInflate *this)
{
  this->m_state.m_ptr->size = 0;
  return 1i64;
}

/*
==============
bdInflate::size
==============
*/
bdInflate::bdInternalState *bdInflate::size(bdInflate *this)
{
  bdInflate::bdInternalState *result; 

  result = this->m_state.m_ptr;
  if ( result )
    return (bdInflate::bdInternalState *)(unsigned int)result->size;
  return result;
}

