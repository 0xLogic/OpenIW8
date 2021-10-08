/*
==============
flatbuffers::WriteScalar<int>
==============
*/

void __fastcall flatbuffers::WriteScalar<int>(void *p, int t)
{
  ??$WriteScalar@H@flatbuffers@@YAXPEAXH@Z(p, t);
}

/*
==============
flatbuffers::GetRoot<flatbuffers::CrossTitleData>
==============
*/

const flatbuffers::CrossTitleData *__fastcall flatbuffers::GetRoot<flatbuffers::CrossTitleData>(const void *buf)
{
  return ??$GetRoot@UCrossTitleData@flatbuffers@@@flatbuffers@@YAPEBUCrossTitleData@0@PEBX@Z(buf);
}

/*
==============
flatbuffers::ReadScalar<int>
==============
*/

int __fastcall flatbuffers::ReadScalar<int>(const void *p)
{
  return ??$ReadScalar@H@flatbuffers@@YAHPEBX@Z(p);
}

/*
==============
flatbuffers::FlatBufferBuilder::Align
==============
*/

void __fastcall flatbuffers::FlatBufferBuilder::Align(flatbuffers::FlatBufferBuilder *this, unsigned __int64 elem_size)
{
  ?Align@FlatBufferBuilder@flatbuffers@@QEAAX_K@Z(this, elem_size);
}

/*
==============
flatbuffers::FlatBufferBuilder::FlatBufferBuilder
==============
*/

void __fastcall flatbuffers::FlatBufferBuilder::FlatBufferBuilder(flatbuffers::FlatBufferBuilder *this, unsigned int initial_size, const flatbuffers::simple_allocator *allocator)
{
  ??0FlatBufferBuilder@flatbuffers@@QEAA@IPEBVsimple_allocator@1@@Z(this, initial_size, allocator);
}

/*
==============
flatbuffers::Table::VerifyTableStart
==============
*/

bool __fastcall flatbuffers::Table::VerifyTableStart(flatbuffers::Table *this, flatbuffers::Verifier *verifier)
{
  return ?VerifyTableStart@Table@flatbuffers@@QEBA_NAEAVVerifier@2@@Z(this, verifier);
}

/*
==============
flatbuffers::FlatBufferBuilder::ReferTo
==============
*/

unsigned int __fastcall flatbuffers::FlatBufferBuilder::ReferTo(flatbuffers::FlatBufferBuilder *this, unsigned int off)
{
  return ?ReferTo@FlatBufferBuilder@flatbuffers@@QEAAII@Z(this, off);
}

/*
==============
flatbuffers::vector_downward::size
==============
*/

unsigned int __fastcall flatbuffers::vector_downward::size(flatbuffers::vector_downward *this)
{
  return ?size@vector_downward@flatbuffers@@QEBAIXZ(this);
}

/*
==============
flatbuffers::FlatBufferBuilder::PreAlign
==============
*/

void __fastcall flatbuffers::FlatBufferBuilder::PreAlign(flatbuffers::FlatBufferBuilder *this, unsigned __int64 len, unsigned __int64 alignment)
{
  ?PreAlign@FlatBufferBuilder@flatbuffers@@QEAAX_K0@Z(this, len, alignment);
}

/*
==============
flatbuffers::FlatBufferBuilder::StartTable
==============
*/

unsigned int __fastcall flatbuffers::FlatBufferBuilder::StartTable(flatbuffers::FlatBufferBuilder *this)
{
  return ?StartTable@FlatBufferBuilder@flatbuffers@@QEAAIXZ(this);
}

/*
==============
flatbuffers::FlatBufferBuilder::EndTable
==============
*/

unsigned int __fastcall flatbuffers::FlatBufferBuilder::EndTable(flatbuffers::FlatBufferBuilder *this, unsigned int start, unsigned __int16 numfields)
{
  return ?EndTable@FlatBufferBuilder@flatbuffers@@QEAAIIG@Z(this, start, numfields);
}

/*
==============
flatbuffers::EndianScalar<int>
==============
*/

int __fastcall flatbuffers::EndianScalar<int>(int t)
{
  return ??$EndianScalar@H@flatbuffers@@YAHH@Z(t);
}

/*
==============
flatbuffers::simple_allocator::deallocate
==============
*/

void __fastcall flatbuffers::simple_allocator::deallocate(flatbuffers::simple_allocator *this, unsigned __int8 *p)
{
  ?deallocate@simple_allocator@flatbuffers@@UEBAXPEAE@Z(this, p);
}

/*
==============
flatbuffers::vector_downward::make_space
==============
*/

unsigned __int8 *__fastcall flatbuffers::vector_downward::make_space(flatbuffers::vector_downward *this, unsigned __int64 len)
{
  return ?make_space@vector_downward@flatbuffers@@QEAAPEAE_K@Z(this, len);
}

/*
==============
flatbuffers::GetMutableRoot<flatbuffers::CrossTitleData>
==============
*/

flatbuffers::CrossTitleData *__fastcall flatbuffers::GetMutableRoot<flatbuffers::CrossTitleData>(void *buf)
{
  return ??$GetMutableRoot@UCrossTitleData@flatbuffers@@@flatbuffers@@YAPEAUCrossTitleData@0@PEAX@Z(buf);
}

/*
==============
flatbuffers::simple_allocator::allocate
==============
*/

unsigned __int8 *__fastcall flatbuffers::simple_allocator::allocate(flatbuffers::simple_allocator *this, unsigned __int64 size)
{
  return ?allocate@simple_allocator@flatbuffers@@UEBAPEAE_K@Z(this, size);
}

/*
==============
flatbuffers::FlatBufferBuilder::PushElement<int>
==============
*/

unsigned int __fastcall flatbuffers::FlatBufferBuilder::PushElement<int>(flatbuffers::FlatBufferBuilder *this, int element)
{
  return ??$PushElement@H@FlatBufferBuilder@flatbuffers@@QEAAIH@Z(this, element);
}

/*
==============
flatbuffers::simple_allocator::~simple_allocator
==============
*/

void __fastcall flatbuffers::simple_allocator::~simple_allocator(flatbuffers::simple_allocator *this)
{
  ??1simple_allocator@flatbuffers@@UEAA@XZ(this);
}

/*
==============
flatbuffers::AlignOf<unsigned __int64>
==============
*/

unsigned __int64 __fastcall flatbuffers::AlignOf<unsigned __int64>()
{
  return ??$AlignOf@_K@flatbuffers@@YA_KXZ();
}

/*
==============
flatbuffers::vector_downward::~vector_downward
==============
*/

void __fastcall flatbuffers::vector_downward::~vector_downward(flatbuffers::vector_downward *this)
{
  ??1vector_downward@flatbuffers@@QEAA@XZ(this);
}

/*
==============
flatbuffers::AlignOf<unsigned __int64>
==============
*/
unsigned __int64 flatbuffers::AlignOf<unsigned __int64>()
{
  return 8i64;
}

/*
==============
flatbuffers::EndianScalar<int>
==============
*/
__int64 flatbuffers::EndianScalar<int>(int t)
{
  return (unsigned int)t;
}

/*
==============
flatbuffers::GetMutableRoot<flatbuffers::CrossTitleData>
==============
*/
flatbuffers::CrossTitleData *flatbuffers::GetMutableRoot<flatbuffers::CrossTitleData>(void *buf)
{
  return (flatbuffers::CrossTitleData *)buf + *(unsigned int *)buf;
}

/*
==============
flatbuffers::GetRoot<flatbuffers::CrossTitleData>
==============
*/
const flatbuffers::CrossTitleData *flatbuffers::GetRoot<flatbuffers::CrossTitleData>(const void *buf)
{
  return (const flatbuffers::CrossTitleData *)buf + *(unsigned int *)buf;
}

/*
==============
flatbuffers::FlatBufferBuilder::PushElement<int>
==============
*/
__int64 flatbuffers::FlatBufferBuilder::PushElement<int>(flatbuffers::FlatBufferBuilder *this, int element)
{
  unsigned __int8 v2; 
  unsigned __int8 *space; 

  v2 = element;
  flatbuffers::FlatBufferBuilder::Align(this, 4ui64);
  space = flatbuffers::vector_downward::make_space(&this->buf_, 4ui64);
  *((_WORD *)space + 1) = HIWORD(element);
  *(_WORD *)space = __PAIR16__(BYTE1(element), v2);
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  return (unsigned int)(LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_));
}

/*
==============
flatbuffers::ReadScalar<int>
==============
*/
__int64 flatbuffers::ReadScalar<int>(const void *p)
{
  return *(unsigned int *)p;
}

/*
==============
flatbuffers::WriteScalar<int>
==============
*/
void flatbuffers::WriteScalar<int>(void *p, int t)
{
  *(_DWORD *)p = t;
}

/*
==============
flatbuffers::FlatBufferBuilder::FlatBufferBuilder
==============
*/
void flatbuffers::FlatBufferBuilder::FlatBufferBuilder(flatbuffers::FlatBufferBuilder *this, unsigned int initial_size, const flatbuffers::simple_allocator *allocator)
{
  flatbuffers::FlatBufferBuilder *v4; 
  char v5; 
  unsigned __int8 *v6; 
  flatbuffers::FlatBufferBuilder::FieldLoc *Myfirst; 
  __int64 v8; 
  flatbuffers::FlatBufferBuilder::FieldLoc *v9; 
  flatbuffers::FlatBufferBuilder::FieldLoc *Mylast; 
  unsigned int *v11; 
  __int64 v12; 
  void *v13; 
  unsigned int *v14; 
  unsigned int *v15; 
  flatbuffers::FlatBufferBuilder::FieldLoc *__formal; 
  flatbuffers::FlatBufferBuilder::FieldLoc *v17; 

  v15 = (unsigned int *)this;
  this->default_allocator.__vftable = (flatbuffers::simple_allocator_vtbl *)&flatbuffers::simple_allocator::`vftable';
  v4 = this;
  if ( allocator )
    v4 = (flatbuffers::FlatBufferBuilder *)allocator;
  v5 = initial_size;
  this->buf_.reserved_ = initial_size;
  v6 = v4->default_allocator.allocate(&v4->default_allocator, initial_size);
  this->buf_.buf_ = v6;
  this->buf_.cur_ = &v6[this->buf_.reserved_];
  this->buf_.allocator_ = &v4->default_allocator;
  if ( (v5 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 436, ASSERT_TYPE_ASSERT, "((initial_size & (sizeof(largest_scalar_t) - 1)) == 0)", (const char *)&queryFormat, "(initial_size & (sizeof(largest_scalar_t) - 1)) == 0", -2i64) )
    __debugbreak();
  this->offsetbuf_._Mypair._Myval2._Myfirst = NULL;
  this->offsetbuf_._Mypair._Myval2._Mylast = NULL;
  this->offsetbuf_._Mypair._Myval2._Myend = NULL;
  *(_WORD *)&this->nested = 0;
  this->vtables_._Mypair._Myval2._Myfirst = NULL;
  this->vtables_._Mypair._Myval2._Mylast = NULL;
  this->vtables_._Mypair._Myval2._Myend = NULL;
  this->minalign_ = 1i64;
  this->force_defaults_ = 0;
  Myfirst = this->offsetbuf_._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(this->offsetbuf_._Mypair._Myval2._Myend - Myfirst) < 0x10 )
  {
    v8 = this->offsetbuf_._Mypair._Myval2._Mylast - Myfirst;
    v9 = (flatbuffers::FlatBufferBuilder::FieldLoc *)operator new(0x80ui64);
    Mylast = this->offsetbuf_._Mypair._Myval2._Mylast;
    std::_Ptr_move_cat<flatbuffers::FlatBufferBuilder::FieldLoc,flatbuffers::FlatBufferBuilder::FieldLoc>(&__formal, &v17);
    memmove_0(v9, this->offsetbuf_._Mypair._Myval2._Myfirst, (char *)Mylast - (char *)this->offsetbuf_._Mypair._Myval2._Myfirst);
    std::vector<flatbuffers::FlatBufferBuilder::FieldLoc>::_Change_array(&this->offsetbuf_, v9, v8, 0x10ui64);
  }
  v11 = this->vtables_._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(this->vtables_._Mypair._Myval2._Myend - v11) < 0x10 )
  {
    v12 = this->vtables_._Mypair._Myval2._Mylast - v11;
    v13 = operator new(0x40ui64);
    v14 = this->vtables_._Mypair._Myval2._Mylast;
    std::_Ptr_move_cat<unsigned int,unsigned int>((unsigned int *const *)&__formal, &v15);
    memmove_0(v13, this->vtables_._Mypair._Myval2._Myfirst, (char *)v14 - (char *)this->vtables_._Mypair._Myval2._Myfirst);
    std::vector<unsigned int>::_Change_array(&this->vtables_, (unsigned int *const)v13, v12, 0x10ui64);
  }
}

/*
==============
flatbuffers::simple_allocator::~simple_allocator
==============
*/
void flatbuffers::simple_allocator::~simple_allocator(flatbuffers::simple_allocator *this)
{
  this->__vftable = (flatbuffers::simple_allocator_vtbl *)&flatbuffers::simple_allocator::`vftable';
}

/*
==============
flatbuffers::vector_downward::~vector_downward
==============
*/
void flatbuffers::vector_downward::~vector_downward(flatbuffers::vector_downward *this)
{
  if ( this->buf_ )
    ((void (__fastcall *)(const flatbuffers::simple_allocator *))this->allocator_->deallocate)(this->allocator_);
}

/*
==============
flatbuffers::FlatBufferBuilder::Align
==============
*/
void flatbuffers::FlatBufferBuilder::Align(flatbuffers::FlatBufferBuilder *this, unsigned __int64 elem_size)
{
  unsigned __int64 v4; 
  unsigned __int8 *space; 

  if ( elem_size > this->minalign_ )
    this->minalign_ = elem_size;
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  v4 = (elem_size - 1) & -(__int64)(unsigned int)(LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_));
  space = flatbuffers::vector_downward::make_space(&this->buf_, v4);
  if ( v4 )
    memset(space, 0, v4);
}

/*
==============
flatbuffers::FlatBufferBuilder::EndTable
==============
*/
__int64 flatbuffers::FlatBufferBuilder::EndTable(flatbuffers::FlatBufferBuilder *this, unsigned int start, unsigned __int16 numfields)
{
  flatbuffers::vector_downward *p_buf; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned __int8 *space; 
  flatbuffers::FlatBufferBuilder::FieldLoc *i; 
  __int16 v11; 
  __int64 id; 
  unsigned __int8 *cur; 
  unsigned __int16 v14; 
  std::vector<unsigned int> *p_vtables; 
  int v16; 
  unsigned int *Myfirst; 
  unsigned int *Mylast; 
  unsigned __int8 *buf; 
  __int64 v20; 
  unsigned __int8 *v21; 
  unsigned int v22; 
  __int64 result; 
  bool v24; 
  unsigned int v25; 
  unsigned int v26; 

  if ( !this->nested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 736, ASSERT_TYPE_ASSERT, "(nested)", (const char *)&queryFormat, "nested") )
    __debugbreak();
  p_buf = &this->buf_;
  v7 = 2i64 * numfields;
  v26 = flatbuffers::FlatBufferBuilder::PushElement<int>(this, 0);
  v8 = v26;
  space = flatbuffers::vector_downward::make_space(&this->buf_, v7);
  if ( v7 )
    memset(space, 0, v7);
  if ( v8 - start >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 745, ASSERT_TYPE_ASSERT, "(table_object_size < 0x10000)", (const char *)&queryFormat, "table_object_size < 0x10000") )
    __debugbreak();
  flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(this, v8 - start);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(this, 2 * (numfields + 2));
  for ( i = this->offsetbuf_._Mypair._Myval2._Myfirst; i != this->offsetbuf_._Mypair._Myval2._Mylast; *(_WORD *)&this->buf_.cur_[id] = v11 )
  {
    v11 = v8 - LOWORD(i->off);
    if ( !this->buf_.cur_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 498, ASSERT_TYPE_ASSERT, "(cur_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr") )
      __debugbreak();
    if ( *(_WORD *)&this->buf_.cur_[i->id] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 754, ASSERT_TYPE_ASSERT, "(!ReadScalar<voffset_t>(buf_.data() + field_location->id))", (const char *)&queryFormat, "!ReadScalar<voffset_t>(buf_.data() + field_location->id)") )
      __debugbreak();
    if ( !this->buf_.cur_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 498, ASSERT_TYPE_ASSERT, "(cur_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr") )
      __debugbreak();
    id = i->id;
    ++i;
  }
  this->offsetbuf_._Mypair._Myval2._Mylast = this->offsetbuf_._Mypair._Myval2._Myfirst;
  if ( !this->buf_.cur_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 498, ASSERT_TYPE_ASSERT, "(cur_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr") )
    __debugbreak();
  cur = this->buf_.cur_;
  v14 = *(_WORD *)cur;
  if ( (!cur || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  p_vtables = &this->vtables_;
  v16 = LODWORD(p_buf->reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_);
  Myfirst = this->vtables_._Mypair._Myval2._Myfirst;
  Mylast = this->vtables_._Mypair._Myval2._Mylast;
  v25 = v16;
  if ( Myfirst == Mylast )
  {
LABEL_33:
    v22 = v26;
  }
  else
  {
    buf = this->buf_.buf_;
    while ( 1 )
    {
      v20 = *Myfirst;
      v21 = &buf[this->buf_.reserved_ - v20];
      if ( v14 == *(_WORD *)v21 && !memcmp_0(v21, cur, v14) )
        break;
      if ( ++Myfirst == Mylast )
      {
        p_buf = &this->buf_;
        p_vtables = &this->vtables_;
        goto LABEL_33;
      }
    }
    v24 = this->buf_.cur_ == NULL;
    v16 = v20;
    v25 = v20;
    if ( (v24 || !buf) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
      __debugbreak();
    p_buf = &this->buf_;
    p_vtables = &this->vtables_;
    v22 = v26;
    this->buf_.cur_ += LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_) - v26;
  }
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  if ( v16 == LODWORD(p_buf->reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_) )
  {
    std::vector<unsigned int>::emplace_back<unsigned int const &>(p_vtables, &v25);
    v16 = v25;
  }
  *(_DWORD *)&p_buf->buf_[p_buf->reserved_ - v22] = v16 - v22;
  result = v22;
  this->nested = 0;
  return result;
}

/*
==============
flatbuffers::FlatBufferBuilder::PreAlign
==============
*/
void flatbuffers::FlatBufferBuilder::PreAlign(flatbuffers::FlatBufferBuilder *this, unsigned __int64 len, unsigned __int64 alignment)
{
  unsigned __int64 v6; 
  unsigned __int8 *space; 

  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  v6 = (alignment - 1) & -(__int64)(len + (unsigned int)(LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_)));
  space = flatbuffers::vector_downward::make_space(&this->buf_, v6);
  if ( v6 )
    memset(space, 0, v6);
}

/*
==============
flatbuffers::FlatBufferBuilder::ReferTo
==============
*/
__int64 flatbuffers::FlatBufferBuilder::ReferTo(flatbuffers::FlatBufferBuilder *this, unsigned int off)
{
  flatbuffers::FlatBufferBuilder::Align(this, 4ui64);
  if ( !off )
    goto LABEL_16;
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  if ( off > LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_) )
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 707, ASSERT_TYPE_ASSERT, "(off && off <= GetSize())", (const char *)&queryFormat, "off && off <= GetSize()") )
      __debugbreak();
  }
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  return LODWORD(this->buf_.buf_) - off - LODWORD(this->buf_.cur_) + LODWORD(this->buf_.reserved_) + 4;
}

/*
==============
flatbuffers::FlatBufferBuilder::StartTable
==============
*/
__int64 flatbuffers::FlatBufferBuilder::StartTable(flatbuffers::FlatBufferBuilder *this)
{
  if ( this->nested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 720, ASSERT_TYPE_ASSERT, "(!nested)", (const char *)&queryFormat, "!nested") )
    __debugbreak();
  this->nested = 1;
  if ( (!this->buf_.cur_ || !this->buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  return (unsigned int)(LODWORD(this->buf_.reserved_) + LODWORD(this->buf_.buf_) - LODWORD(this->buf_.cur_));
}

/*
==============
flatbuffers::Table::VerifyTableStart
==============
*/
bool flatbuffers::Table::VerifyTableStart(flatbuffers::Table *this, flatbuffers::Verifier *verifier)
{
  const unsigned __int8 *end; 
  const unsigned __int8 *buf; 
  unsigned __int64 v4; 
  __int64 v5; 
  flatbuffers::Table *v6; 
  unsigned __int64 depth; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  bool result; 

  end = verifier->end_;
  buf = verifier->buf_;
  v4 = end - verifier->buf_;
  result = 0;
  if ( v4 >= 4 && this >= (flatbuffers::Table *)buf && this <= (flatbuffers::Table *)end - 4 )
  {
    v5 = *(int *)this->data_;
    ++verifier->depth_;
    v6 = &this[-v5];
    depth = verifier->depth_;
    v8 = verifier->num_tables_ + 1;
    verifier->num_tables_ = v8;
    if ( depth <= verifier->max_depth_ && v8 <= verifier->max_tables_ && v6 >= (flatbuffers::Table *)buf && v6 <= (flatbuffers::Table *)end - 2 )
    {
      v9 = *(unsigned __int16 *)v6->data_;
      if ( v9 <= v4 && v6 <= (flatbuffers::Table *)&end[-v9] )
        return 1;
    }
  }
  return result;
}

/*
==============
flatbuffers::simple_allocator::allocate
==============
*/
unsigned __int8 *flatbuffers::simple_allocator::allocate(flatbuffers::simple_allocator *this, unsigned __int64 size)
{
  return (unsigned __int8 *)operator new[](size);
}

/*
==============
flatbuffers::simple_allocator::deallocate
==============
*/
void flatbuffers::simple_allocator::deallocate(flatbuffers::simple_allocator *this, unsigned __int8 *p)
{
  operator delete[](p);
}

/*
==============
flatbuffers::vector_downward::make_space
==============
*/
unsigned __int8 *flatbuffers::vector_downward::make_space(flatbuffers::vector_downward *this, unsigned __int64 len)
{
  unsigned __int8 *cur; 
  unsigned __int8 *buf; 
  unsigned int v6; 
  unsigned __int64 v7; 
  const flatbuffers::simple_allocator *allocator; 
  __int64 v9; 
  size_t v10; 
  void *v11; 
  const flatbuffers::simple_allocator *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 

  cur = this->cur_;
  buf = this->buf_;
  if ( len > cur - buf )
  {
    v6 = flatbuffers::vector_downward::size(this);
    v7 = len;
    if ( len < ((this->reserved_ >> 1) & 0x7FFFFFFFFFFFFFF8i64) )
      v7 = (this->reserved_ >> 1) & 0x7FFFFFFFFFFFFFF8i64;
    allocator = this->allocator_;
    this->reserved_ = (this->reserved_ + v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    v9 = ((__int64 (__fastcall *)(const flatbuffers::simple_allocator *))allocator->allocate)(allocator);
    v10 = v6;
    buf = (unsigned __int8 *)v9;
    v11 = (void *)(v9 + this->reserved_ - v6);
    memcpy_0(v11, this->cur_, v10);
    v12 = this->allocator_;
    v13 = this->buf_;
    this->cur_ = (unsigned __int8 *)v11;
    v12->deallocate((flatbuffers::simple_allocator *)v12, v13);
    cur = this->cur_;
    this->buf_ = buf;
  }
  v14 = &cur[-len];
  this->cur_ = v14;
  if ( (!v14 || !buf) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  if ( (unsigned int)(LODWORD(this->reserved_) + LODWORD(this->buf_) - LODWORD(this->cur_)) >= 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 488, ASSERT_TYPE_ASSERT, "(size() < (1UL << (sizeof(soffset_t) * 8 - 1)) - 1)", (const char *)&queryFormat, "size() < (1UL << (sizeof(soffset_t) * 8 - 1)) - 1") )
    __debugbreak();
  return this->cur_;
}

/*
==============
flatbuffers::vector_downward::size
==============
*/
__int64 flatbuffers::vector_downward::size(flatbuffers::vector_downward *this)
{
  if ( (!this->cur_ || !this->buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
    __debugbreak();
  return (unsigned int)(LODWORD(this->reserved_) + LODWORD(this->buf_) - LODWORD(this->cur_));
}

