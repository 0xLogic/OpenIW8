/*
==============
IndyFsScopedEvent::~IndyFsScopedEvent
==============
*/

void __fastcall IndyFsScopedEvent::~IndyFsScopedEvent(IndyFsScopedEvent *this)
{
  ??1IndyFsScopedEvent@@QEAA@XZ(this);
}

/*
==============
indyfs_profiler_internal_instant_event
==============
*/

void __fastcall indyfs_profiler_internal_instant_event(const char *category, const char *name)
{
  ?indyfs_profiler_internal_instant_event@@YAXPEBD0@Z(category, name);
}

/*
==============
IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold
==============
*/

void __fastcall IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this)
{
  ??1IndyFsScopedEventWithThreshold@@QEAA@XZ(this);
}

/*
==============
IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs
==============
*/

void __fastcall IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this, const char *category_, const char *name_, const char *args_)
{
  ??0IndyFsScopedEventWithArgs@@QEAA@PEBD00@Z(this, category_, name_, args_);
}

/*
==============
indyfs_profiler_init
==============
*/

int __fastcall indyfs_profiler_init(bool enabled, const char *jsonFile, void *memoryBlock, unsigned __int64 memoryBlockSize)
{
  return ?indyfs_profiler_init@@YAH_NPEBDPEAX_K@Z(enabled, jsonFile, memoryBlock, memoryBlockSize);
}

/*
==============
indyfs_profiler_internal_begin_event
==============
*/

void __fastcall indyfs_profiler_internal_begin_event(const char *category, const char *name, long double time, const char *args)
{
  ?indyfs_profiler_internal_begin_event@@YAXPEBD0N0@Z(category, name, time, args);
}

/*
==============
IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs
==============
*/

void __fastcall IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this)
{
  ??1IndyFsScopedEventWithArgs@@QEAA@XZ(this);
}

/*
==============
indyfs_profiler_set_current_thread_name
==============
*/

void __fastcall indyfs_profiler_set_current_thread_name(const char *threadName)
{
  ?indyfs_profiler_set_current_thread_name@@YAXPEBD@Z(threadName);
}

/*
==============
indyfs_profiler_internal_end_event
==============
*/

void __fastcall indyfs_profiler_internal_end_event(const char *category, const char *name, long double time)
{
  ?indyfs_profiler_internal_end_event@@YAXPEBD0N@Z(category, name, time);
}

/*
==============
indyfs_profiler_term
==============
*/

void indyfs_profiler_term(void)
{
  ?indyfs_profiler_term@@YAXXZ();
}

/*
==============
profiler_flush
==============
*/

void profiler_flush(void)
{
  ?profiler_flush@@YAXXZ();
}

/*
==============
IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold
==============
*/

void __fastcall IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this, const char *category_, const char *name_)
{
  ??0IndyFsScopedEventWithThreshold@@QEAA@PEBD0@Z(this, category_, name_);
}

/*
==============
indyfs_profiler_size
==============
*/

unsigned __int64 __fastcall indyfs_profiler_size(bool enabled, unsigned __int64 bufferSize)
{
  return ?indyfs_profiler_size@@YA_K_N_K@Z(enabled, bufferSize);
}

/*
==============
indyfs_profiler_internal_duration_event
==============
*/

void __fastcall indyfs_profiler_internal_duration_event(const char *category, const char *name, long double start, long double duration)
{
  ?indyfs_profiler_internal_duration_event@@YAXPEBD0NN@Z(category, name, start, duration);
}

/*
==============
IndyFsScopedEvent::IndyFsScopedEvent
==============
*/

void __fastcall IndyFsScopedEvent::IndyFsScopedEvent(IndyFsScopedEvent *this, const char *category_, const char *name_)
{
  ??0IndyFsScopedEvent@@QEAA@PEBD0@Z(this, category_, name_);
}

/*
==============
indyfs_profiler_file_close
==============
*/

void indyfs_profiler_file_close(void)
{
  ?indyfs_profiler_file_close@@YAXXZ();
}

/*
==============
IndyFsScopedEvent::IndyFsScopedEvent
==============
*/
void IndyFsScopedEvent::IndyFsScopedEvent(IndyFsScopedEvent *this, const char *category_, const char *name_)
{
  _RDI = this;
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(_RDI->name, name_, 0x104ui64);
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovsd  qword ptr [rdi+208h], xmm0 }
}

/*
==============
IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs
==============
*/
void IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this, const char *category_, const char *name_, const char *args_)
{
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  double v14; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(this->name, name_, 0x104ui64);
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovaps xmm6, xmm0 }
  if ( s_profilerEnabled )
  {
    v11 = indyfs_process_pid();
    v12 = indyfs_process_tid();
    __asm { vmovsd  [rsp+58h+var_38], xmm6 }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"B\",\"name\":\"%s\",\"args\":{%s}},\n", category_, v11, v12, v14, name_, args_);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold
==============
*/
void IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this, const char *category_, const char *name_)
{
  _RDI = this;
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(_RDI->name, name_, 0x104ui64);
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovsd  qword ptr [rdi+208h], xmm0 }
}

/*
==============
IndyFsScopedEvent::~IndyFsScopedEvent
==============
*/
void IndyFsScopedEvent::~IndyFsScopedEvent(IndyFsScopedEvent *this)
{
  IndyFsScopedEvent *v3; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v3 = this;
  __asm { vmovsd  xmm6, qword ptr [rcx+208h] }
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm
  {
    vsubsd  xmm3, xmm0, xmm6; duration
    vmovaps xmm2, xmm6; start
  }
  indyfs_profiler_internal_duration_event(v3->category, v3->name, *(long double *)&_XMM2, *(long double *)&_XMM3);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs
==============
*/
void IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this)
{
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  double v8; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovaps xmm6, xmm0 }
  if ( s_profilerEnabled )
  {
    v5 = indyfs_process_pid();
    v6 = indyfs_process_tid();
    __asm { vmovsd  [rsp+58h+var_38], xmm6 }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"E\",\"name\":\"%s\"},\n", this->category, v5, v6, v8, this->name);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold
==============
*/
void IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this)
{
  IndyFsScopedEventWithThreshold *v3; 
  char v6; 
  char v7; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v3 = this;
  __asm { vmovsd  xmm6, qword ptr [rcx+208h] }
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm
  {
    vsubsd  xmm3, xmm0, xmm6; duration
    vcomisd xmm3, cs:__real@408f400000000000
  }
  if ( !(v6 | v7) )
  {
    __asm { vmovaps xmm2, xmm6; start }
    indyfs_profiler_internal_duration_event(v3->category, v3->name, *(long double *)&_XMM2, *(long double *)&_XMM3);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
close_file_and_write_footer
==============
*/
IndyFsProfiler *close_file_and_write_footer()
{
  IndyFsProfiler *result; 

  result = s_profiler;
  if ( !s_profiler->fileClosed )
  {
    profiler_flush();
    indyfs_fseek(s_profiler->file, -2i64, Japan);
    indyfs_fwrite(s_profiler->file, "\n]\n", 3i64);
    indyfs_fclose(s_profiler->file);
    result = s_profiler;
    s_profiler->fileClosed = 1;
  }
  return result;
}

/*
==============
indyfs_profiler_file_close
==============
*/
void indyfs_profiler_file_close(void)
{
  _RTL_CRITICAL_SECTION *p_lock; 

  if ( s_profilerEnabled )
  {
    p_lock = (_RTL_CRITICAL_SECTION *)&s_profiler->lock;
    indyfs_mutex_lock((LPCRITICAL_SECTION)&s_profiler->lock);
    close_file_and_write_footer();
    indyfs_mutex_unlock(p_lock);
  }
}

/*
==============
indyfs_profiler_init
==============
*/
__int64 indyfs_profiler_init(bool enabled, const char *jsonFile, void *memoryBlock, unsigned __int64 memoryBlockSize)
{
  IndyFsProfiler *v6; 

  s_profilerEnabled = enabled;
  if ( enabled )
  {
    if ( memoryBlockSize >= 0x4B0 )
    {
      s_profiler = (IndyFsProfiler *)memoryBlock;
      *(_QWORD *)memoryBlock = (char *)memoryBlock + 176;
      *((_QWORD *)memoryBlock + 1) = memoryBlockSize - 176;
      indyfs_mutex_init((LPCRITICAL_SECTION)((char *)memoryBlock + 32));
      if ( indyfs_fopen(&s_profiler->file, jsonFile, View|Menu|0x2) == -1 )
      {
        indyfs_log_message(Error, "Failed to init Profiler - Profile file cannot be opened.");
        return 0xFFFFFFFFi64;
      }
      else
      {
        v6 = s_profiler;
        s_profiler->offset = 0i64;
        v6->fileClosed = 0;
        indyfs_fwrite(v6->file, "[\n", 2i64);
        return 0i64;
      }
    }
    else
    {
      indyfs_log_message(Error, "Failed to init Profiler - Memory block too small. Required: >%zu  Given: %zu", 0x4B0ui64, memoryBlockSize);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    s_profiler = NULL;
    return 0i64;
  }
}

/*
==============
indyfs_profiler_internal_begin_event
==============
*/

void __fastcall indyfs_profiler_internal_begin_event(const char *category, const char *name, double time, const char *args)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  double v12; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( s_profilerEnabled )
  {
    v9 = indyfs_process_pid();
    v10 = indyfs_process_tid();
    __asm { vmovsd  [rsp+58h+var_38], xmm6 }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"B\",\"name\":\"%s\",\"args\":{%s}},\n", category, v9, v10, v12, name, args);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
indyfs_profiler_internal_duration_event
==============
*/

void __fastcall indyfs_profiler_internal_duration_event(const char *category, const char *name, double start, double duration)
{
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  double v14; 
  double v15; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( s_profilerEnabled )
  {
    v10 = indyfs_process_pid();
    v11 = indyfs_process_tid();
    __asm
    {
      vmovsd  [rsp+68h+var_40], xmm6
      vmovsd  [rsp+68h+var_48], xmm7
    }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"dur\":\"%f\",\"ph\":\"X\",\"name\":\"%s\"},\n", category, v10, v11, v14, v15, name);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
indyfs_profiler_internal_end_event
==============
*/

void __fastcall indyfs_profiler_internal_end_event(const char *category, const char *name, double time)
{
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  double v10; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( s_profilerEnabled )
  {
    v7 = indyfs_process_pid();
    v8 = indyfs_process_tid();
    __asm { vmovsd  [rsp+48h+var_28], xmm6 }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"E\",\"name\":\"%s\"},\n", category, v7, v8, v10, name);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
indyfs_profiler_internal_instant_event
==============
*/
void indyfs_profiler_internal_instant_event(const char *category, const char *name)
{
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  double v10; 

  if ( s_profilerEnabled )
  {
    __asm { vmovaps [rsp+48h+var_18], xmm6 }
    *(double *)&_XMM0 = indyfs_time_now_us();
    __asm { vmovaps xmm6, xmm0 }
    v7 = indyfs_process_pid();
    v8 = indyfs_process_tid();
    __asm { vmovsd  [rsp+48h+var_28], xmm6 }
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"i\",\"name\":\"%s\"},\n", category, v7, v8, v10, name);
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

/*
==============
indyfs_profiler_set_current_thread_name
==============
*/
void indyfs_profiler_set_current_thread_name(const char *threadName)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  if ( s_profilerEnabled )
  {
    v2 = indyfs_process_pid();
    v3 = indyfs_process_tid();
    profiler_write_message("{\"name\":\"thread_name\",\"ph\":\"M\",\"pid\":%llu,\"tid\":%llu,\"args\":{\"name\":\"%s\"}},\n", v2, v3, threadName);
  }
}

/*
==============
indyfs_profiler_size
==============
*/
unsigned __int64 indyfs_profiler_size(bool enabled, unsigned __int64 bufferSize)
{
  if ( !enabled )
    return 0i64;
  if ( bufferSize < 0x400 )
    bufferSize = 1024i64;
  return bufferSize + 176;
}

/*
==============
indyfs_profiler_term
==============
*/
void indyfs_profiler_term(void)
{
  if ( s_profilerEnabled )
  {
    close_file_and_write_footer();
    indyfs_mutex_term((LPCRITICAL_SECTION)&s_profiler->lock);
    s_profilerEnabled = 0;
  }
}

/*
==============
profiler_flush
==============
*/

void __fastcall profiler_flush(long double _XMM0_8)
{
  signed __int64 v1; 
  void *v4; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  int v9; 
  double v12; 
  double v13; 
  char _Buffer[4096]; 

  v4 = alloca(v1);
  __asm
  {
    vmovaps [rsp+1078h+var_18], xmm6
    vmovaps [rsp+1078h+var_28], xmm7
  }
  _XMM0_8 = indyfs_time_now_us();
  __asm { vmovaps xmm7, xmm0 }
  indyfs_fwrite(s_profiler->file, s_profiler->buffer, s_profiler->offset);
  s_profiler->offset = 0i64;
  _XMM0_8 = indyfs_time_now_us();
  __asm { vsubsd  xmm6, xmm0, xmm7 }
  v7 = indyfs_process_pid();
  v8 = indyfs_process_tid();
  __asm
  {
    vmovsd  [rsp+1078h+var_1048], xmm6
    vmovsd  [rsp+1078h+var_1050], xmm7
  }
  v9 = j_snprintf(_Buffer, 0x1000ui64, "{\"cat\":\"Profiler\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"dur\":\"%f\",\"ph\":\"X\",\"name\":\"Flush\"},\n", v7, v8, v12, v13);
  if ( (unsigned __int64)v9 <= 0xFFF )
    indyfs_fwrite(s_profiler->file, _Buffer, v9);
  else
    indyfs_log_message(Error, "snprintf encoding error - Internal buffer is too small. Buffer size: %zu  Required size: %d", 0x1000ui64, (unsigned int)v9);
  __asm
  {
    vmovaps xmm6, [rsp+1078h+var_18]
    vmovaps xmm7, [rsp+1078h+var_28]
  }
}

/*
==============
profiler_write_message
==============
*/
unsigned __int64 profiler_write_message(const char *message, ...)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  __int64 v2; 
  unsigned __int64 v3; 
  IndyFsProfiler *v4; 
  unsigned __int64 bufferSize; 
  unsigned __int64 offset; 
  va_list _ArgList; 

  va_start(_ArgList, message);
  p_lock = (_RTL_CRITICAL_SECTION *)&s_profiler->lock;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&s_profiler->lock);
  if ( s_profiler->fileClosed )
  {
    v2 = 0i64;
LABEL_7:
    v3 = v2;
    goto LABEL_8;
  }
  v3 = j_vsnprintf(&s_profiler->buffer[s_profiler->offset], s_profiler->bufferSize - s_profiler->offset, message, _ArgList);
  v4 = s_profiler;
  bufferSize = s_profiler->bufferSize;
  if ( v3 >= bufferSize )
  {
LABEL_6:
    indyfs_log_message(Error, "Profiler encoding error - Internal buffer is too small. Buffer size: %zu  Required size: %d", v4->bufferSize, v3);
    v2 = -1i64;
    goto LABEL_7;
  }
  while ( 1 )
  {
    offset = v4->offset;
    if ( v3 <= bufferSize - offset - 1 )
      break;
    profiler_flush();
    v3 = j_vsnprintf(&s_profiler->buffer[s_profiler->offset], s_profiler->bufferSize - s_profiler->offset, message, _ArgList);
    v4 = s_profiler;
    bufferSize = s_profiler->bufferSize;
    if ( v3 >= bufferSize )
      goto LABEL_6;
  }
  v4->offset = offset + v3;
LABEL_8:
  indyfs_mutex_unlock(p_lock);
  return v3;
}

