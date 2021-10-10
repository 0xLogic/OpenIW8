/*
==============
SerializeCrossTitleLaunchData
==============
*/

void *__fastcall SerializeCrossTitleLaunchData(const LaunchData *launchData, void *workBuffer, unsigned __int64 workBufferSize, unsigned __int64 *outSerializedSize)
{
  return ?SerializeCrossTitleLaunchData@@YAPEAXAEBULaunchData@@PEAX_KPEA_K@Z(launchData, workBuffer, workBufferSize, outSerializedSize);
}

/*
==============
fixedsize_allocator::deallocate
==============
*/

void __fastcall fixedsize_allocator::deallocate(fixedsize_allocator *this, unsigned __int8 *__formal)
{
  ?deallocate@fixedsize_allocator@@UEBAXPEAE@Z(this, __formal);
}

/*
==============
fixedsize_allocator::~fixedsize_allocator
==============
*/

void __fastcall fixedsize_allocator::~fixedsize_allocator(fixedsize_allocator *this)
{
  ??1fixedsize_allocator@@UEAA@XZ(this);
}

/*
==============
fixedsize_allocator::allocate
==============
*/

unsigned __int8 *__fastcall fixedsize_allocator::allocate(fixedsize_allocator *this, unsigned __int64 size)
{
  return ?allocate@fixedsize_allocator@@UEBAPEAE_K@Z(this, size);
}

/*
==============
DeserializeCrossTitleLaunchData
==============
*/

bool __fastcall DeserializeCrossTitleLaunchData(const void *dataBuffer, unsigned __int64 dataLength, LaunchData *launchData)
{
  return ?DeserializeCrossTitleLaunchData@@YA_NPEBX_KAEAULaunchData@@@Z(dataBuffer, dataLength, launchData);
}

/*
==============
fixedsize_allocator::~fixedsize_allocator
==============
*/
void fixedsize_allocator::~fixedsize_allocator(fixedsize_allocator *this)
{
  this->__vftable = (fixedsize_allocator_vtbl *)&flatbuffers::simple_allocator::`vftable';
}

/*
==============
DeserializeCrossTitleLaunchData
==============
*/
bool DeserializeCrossTitleLaunchData(const void *dataBuffer, unsigned __int64 dataLength, LaunchData *launchData)
{
  unsigned __int16 *v6; 
  char *v7; 
  int *v8; 
  unsigned __int16 *v9; 
  unsigned __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int64 v12; 
  int *v13; 
  unsigned __int16 v14; 
  flatbuffers::CommonTitleData *v15; 
  int *v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  char v21; 
  _WORD *v22; 
  unsigned __int16 v23; 
  int v24; 
  bool result; 
  flatbuffers::Verifier verifier; 

  memset_0(launchData->startupText, 0, 0x994ui64);
  v6 = (unsigned __int16 *)((char *)dataBuffer + dataLength);
  launchData->version = 12;
  verifier.buf_ = (const unsigned __int8 *)dataBuffer;
  verifier.end_ = (const unsigned __int8 *)dataBuffer + dataLength;
  verifier.max_depth_ = 64i64;
  verifier.max_tables_ = 1000000i64;
  if ( dataLength < 4 )
    goto LABEL_35;
  v7 = (char *)(v6 - 2);
  if ( dataBuffer > v6 - 2 )
    goto LABEL_35;
  v8 = (int *)((char *)dataBuffer + *(unsigned int *)dataBuffer);
  if ( v8 < dataBuffer )
    goto LABEL_35;
  if ( v8 > (int *)v7 )
    goto LABEL_35;
  v9 = (unsigned __int16 *)((char *)v8 - *v8);
  verifier.depth_ = 1i64;
  verifier.num_tables_ = 1i64;
  if ( v9 < dataBuffer )
    goto LABEL_35;
  if ( v9 > v6 - 1 )
    goto LABEL_35;
  v10 = *v9;
  if ( v10 > dataLength )
    goto LABEL_35;
  if ( v9 > (unsigned __int16 *)((char *)v6 - v10) )
    goto LABEL_35;
  if ( (unsigned __int16)v10 > 4u )
  {
    v11 = v9[2];
    if ( v11 )
    {
      v12 = (unsigned __int64)v8 + v11;
      if ( v12 < (unsigned __int64)dataBuffer || v12 > (unsigned __int64)v7 )
        goto LABEL_35;
    }
  }
  v13 = NULL;
  v14 = (unsigned __int16)v10 <= 4u ? 0 : v9[2];
  if ( v14 && (v15 = (flatbuffers::CommonTitleData *)v8 + v14 + *(unsigned int *)((char *)v8 + v14)) != NULL && !flatbuffers::CommonTitleData::Verify(v15, &verifier) )
  {
LABEL_35:
    Com_Printf(1, "DeserializeCrossTitleLaunchData failed to validate launch data");
    return 0;
  }
  else
  {
    v16 = (int *)((char *)dataBuffer + *(unsigned int *)dataBuffer);
    v17 = *v16;
    if ( *(_WORD *)((char *)v16 - v17) <= 4u )
      v18 = 0;
    else
      v18 = *(_WORD *)((char *)v16 - v17 + 4);
    if ( v18 )
      v13 = (int *)((char *)v16 + v18 + *(unsigned int *)((char *)v16 + v18));
    v19 = *v13;
    if ( *(_WORD *)((char *)v13 - v19) > 4u && (v20 = *(_WORD *)((char *)v13 - v19 + 4)) != 0 )
      v21 = *((_BYTE *)v13 + v20);
    else
      v21 = 0;
    launchData->skipMovies = v21 != 0;
    v22 = (_WORD *)((char *)v13 - *v13);
    if ( *v22 > 6u && (v23 = v22[3]) != 0 )
    {
      v24 = *(int *)((char *)v13 + v23);
      result = 1;
      launchData->activeController = v24;
      launchData->version = 12;
    }
    else
    {
      launchData->version = 12;
      launchData->activeController = -1;
      return 1;
    }
  }
  return result;
}

/*
==============
SerializeCrossTitleLaunchData
==============
*/
unsigned __int8 *SerializeCrossTitleLaunchData(const LaunchData *launchData, void *workBuffer, unsigned __int64 workBufferSize, unsigned __int64 *outSerializedSize)
{
  unsigned int started; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  bool finished; 
  unsigned __int64 *v12; 
  unsigned __int8 *cur; 
  unsigned int *Myfirst; 
  unsigned __int64 v15; 
  flatbuffers::FlatBufferBuilder::FieldLoc *v16; 
  unsigned __int64 v17; 
  flatbuffers::FlatBufferBuilder::FieldLoc v20; 
  flatbuffers::FlatBufferBuilder::FieldLoc v21; 
  flatbuffers::FlatBufferBuilder v22; 
  unsigned __int64 *v23; 
  flatbuffers::simple_allocator allocator; 
  void *v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  _SETJMP_FLOAT128 *v28; 
  __int64 v29; 
  jmp_buf Buf; 

  v29 = -2i64;
  v23 = outSerializedSize;
  if ( setjmp(Buf) )
    return 0i64;
  allocator.__vftable = (flatbuffers::simple_allocator_vtbl *)&fixedsize_allocator::`vftable';
  v25 = workBuffer;
  v26 = workBufferSize;
  v27 = 0i64;
  v28 = Buf;
  flatbuffers::FlatBufferBuilder::FlatBufferBuilder(&v22, 0, &allocator);
  started = flatbuffers::FlatBufferBuilder::StartTable(&v22);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned char>(&v22, 4u, launchData->skipMovies, 0);
  v20.off = flatbuffers::FlatBufferBuilder::PushElement<int>(&v22, launchData->activeController);
  v20.id = 6;
  std::vector<flatbuffers::FlatBufferBuilder::FieldLoc>::emplace_back<flatbuffers::FlatBufferBuilder::FieldLoc const &>(&v22.offsetbuf_, &v20);
  v6 = flatbuffers::FlatBufferBuilder::EndTable(&v22, started, 4u);
  v7 = flatbuffers::FlatBufferBuilder::StartTable(&v22);
  if ( v6 )
  {
    v8 = flatbuffers::FlatBufferBuilder::ReferTo(&v22, v6);
    if ( v8 || v22.force_defaults_ )
    {
      v21.off = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(&v22, v8);
      v21.id = 4;
      std::vector<flatbuffers::FlatBufferBuilder::FieldLoc>::emplace_back<flatbuffers::FlatBufferBuilder::FieldLoc const &>(&v22.offsetbuf_, &v21);
    }
  }
  v9 = flatbuffers::FlatBufferBuilder::EndTable(&v22, v7, 1u);
  if ( v22.nested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 720, ASSERT_TYPE_ASSERT, "(!nested)", (const char *)&queryFormat, "!nested") )
    __debugbreak();
  flatbuffers::FlatBufferBuilder::PreAlign(&v22, 4ui64, v22.minalign_);
  v10 = flatbuffers::FlatBufferBuilder::ReferTo(&v22, v9);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(&v22, v10);
  finished = 1;
  v22.finished = 1;
  v12 = v23;
  if ( v23 )
  {
    if ( (!v22.buf_.cur_ || !v22.buf_.buf_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 493, ASSERT_TYPE_ASSERT, "(cur_ != nullptr && buf_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr && buf_ != nullptr") )
      __debugbreak();
    *v12 = (unsigned int)(LODWORD(v22.buf_.buf_) + LODWORD(v22.buf_.reserved_) - LODWORD(v22.buf_.cur_));
    finished = v22.finished;
  }
  if ( !finished && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 619, ASSERT_TYPE_ASSERT, "(finished)", (const char *)&queryFormat, "finished") )
    __debugbreak();
  if ( !v22.buf_.cur_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\flatbuffers\\include\\flatbuffers\\flatbuffers.h", 498, ASSERT_TYPE_ASSERT, "(cur_ != nullptr)", (const char *)&queryFormat, "cur_ != nullptr") )
    __debugbreak();
  cur = v22.buf_.cur_;
  Myfirst = v22.vtables_._Mypair._Myval2._Myfirst;
  if ( v22.vtables_._Mypair._Myval2._Myfirst )
  {
    v15 = 4 * (v22.vtables_._Mypair._Myval2._Myend - v22.vtables_._Mypair._Myval2._Myfirst);
    if ( v15 >= 0x1000 )
    {
      v15 += 39i64;
      Myfirst = (unsigned int *)*((_QWORD *)v22.vtables_._Mypair._Myval2._Myfirst - 1);
      if ( (unsigned __int64)((char *)v22.vtables_._Mypair._Myval2._Myfirst - (char *)Myfirst - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myfirst, v15);
    v22.vtables_._Mypair._Myval2._Myfirst = NULL;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v22.vtables_._Mypair._Myval2._Mylast = _XMM0;
  }
  v16 = v22.offsetbuf_._Mypair._Myval2._Myfirst;
  if ( v22.offsetbuf_._Mypair._Myval2._Myfirst )
  {
    v17 = 8 * (v22.offsetbuf_._Mypair._Myval2._Myend - v22.offsetbuf_._Mypair._Myval2._Myfirst);
    if ( v17 >= 0x1000 )
    {
      v17 += 39i64;
      v16 = (flatbuffers::FlatBufferBuilder::FieldLoc *)v22.offsetbuf_._Mypair._Myval2._Myfirst[-1];
      if ( (unsigned __int64)((char *)v22.offsetbuf_._Mypair._Myval2._Myfirst - (char *)v16 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v16, v17);
    v22.offsetbuf_._Mypair._Myval2._Myfirst = NULL;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v22.offsetbuf_._Mypair._Myval2._Mylast = _XMM0;
  }
  if ( v22.buf_.buf_ )
    ((void (__fastcall *)(const flatbuffers::simple_allocator *))v22.buf_.allocator_->deallocate)(v22.buf_.allocator_);
  return cur;
}

/*
==============
fixedsize_allocator::allocate
==============
*/
unsigned __int8 *fixedsize_allocator::allocate(fixedsize_allocator *this, unsigned __int64 size)
{
  unsigned __int64 offset; 

  if ( size + this->offset > this->bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\launchdata.cpp", 40, ASSERT_TYPE_ASSERT, "(offset + size <= bufferSize)", (const char *)&queryFormat, "offset + size <= bufferSize") )
    __debugbreak();
  offset = this->offset;
  if ( offset + size > this->bufferSize )
  {
    BootPrintf("Launch data work buffer memory exhausted\n");
    longjmp_0((_JBTYPE *)this->jmpenv, 1);
  }
  this->offset = offset + size;
  return &this->pool[offset];
}

/*
==============
fixedsize_allocator::deallocate
==============
*/
void fixedsize_allocator::deallocate(fixedsize_allocator *this, unsigned __int8 *__formal)
{
  ;
}

