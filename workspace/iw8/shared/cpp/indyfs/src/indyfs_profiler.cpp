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
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(this->name, name_, 0x104ui64);
  this->start = indyfs_time_now_us();
}

/*
==============
IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs
==============
*/
void IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this, const char *category_, const char *name_, const char *args_)
{
  double v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 

  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(this->name, name_, 0x104ui64);
  v8 = indyfs_time_now_us();
  if ( s_profilerEnabled )
  {
    v9 = indyfs_process_pid();
    v10 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"B\",\"name\":\"%s\",\"args\":{%s}},\n", category_, v9, v10, v8, name_, args_);
  }
}

/*
==============
IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold
==============
*/
void IndyFsScopedEventWithThreshold::IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this, const char *category_, const char *name_)
{
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(this->name, name_, 0x104ui64);
  this->start = indyfs_time_now_us();
}

/*
==============
IndyFsScopedEvent::~IndyFsScopedEvent
==============
*/
void IndyFsScopedEvent::~IndyFsScopedEvent(IndyFsScopedEvent *this)
{
  long double start; 
  long double v3; 

  start = this->start;
  v3 = indyfs_time_now_us();
  indyfs_profiler_internal_duration_event(this->category, this->name, start, v3 - start);
}

/*
==============
IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs
==============
*/
void IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs(IndyFsScopedEventWithArgs *this)
{
  double v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  v2 = indyfs_time_now_us();
  if ( s_profilerEnabled )
  {
    v3 = indyfs_process_pid();
    v4 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"E\",\"name\":\"%s\"},\n", this->category, v3, v4, v2, this->name);
  }
}

/*
==============
IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold
==============
*/
void IndyFsScopedEventWithThreshold::~IndyFsScopedEventWithThreshold(IndyFsScopedEventWithThreshold *this)
{
  long double start; 
  long double v3; 

  start = this->start;
  v3 = indyfs_time_now_us() - start;
  if ( v3 > 1000.0 )
    indyfs_profiler_internal_duration_event(this->category, this->name, start, v3);
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
void indyfs_profiler_internal_begin_event(const char *category, const char *name, long double time, const char *args)
{
  unsigned __int64 v7; 
  unsigned __int64 v8; 

  if ( s_profilerEnabled )
  {
    v7 = indyfs_process_pid();
    v8 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"B\",\"name\":\"%s\",\"args\":{%s}},\n", category, v7, v8, (double)time, name, args);
  }
}

/*
==============
indyfs_profiler_internal_duration_event
==============
*/
void indyfs_profiler_internal_duration_event(const char *category, const char *name, long double start, long double duration)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 

  if ( s_profilerEnabled )
  {
    v6 = indyfs_process_pid();
    v7 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"dur\":\"%f\",\"ph\":\"X\",\"name\":\"%s\"},\n", category, v6, v7, (double)start, (double)duration, name);
  }
}

/*
==============
indyfs_profiler_internal_end_event
==============
*/
void indyfs_profiler_internal_end_event(const char *category, const char *name, long double time)
{
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  if ( s_profilerEnabled )
  {
    v5 = indyfs_process_pid();
    v6 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"E\",\"name\":\"%s\"},\n", category, v5, v6, (double)time, name);
  }
}

/*
==============
indyfs_profiler_internal_instant_event
==============
*/
void indyfs_profiler_internal_instant_event(const char *category, const char *name)
{
  long double v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  if ( s_profilerEnabled )
  {
    v4 = indyfs_time_now_us();
    v5 = indyfs_process_pid();
    v6 = indyfs_process_tid();
    profiler_write_message("{\"cat\":\"%s\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"ph\":\"i\",\"name\":\"%s\"},\n", category, v5, v6, (double)v4, name);
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
void profiler_flush()
{
  signed __int64 v0; 
  void *v1; 
  double v2; 
  long double v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  int v6; 
  char _Buffer[4096]; 

  v1 = alloca(v0);
  v2 = indyfs_time_now_us();
  indyfs_fwrite(s_profiler->file, s_profiler->buffer, s_profiler->offset);
  s_profiler->offset = 0i64;
  v3 = indyfs_time_now_us() - v2;
  v4 = indyfs_process_pid();
  v5 = indyfs_process_tid();
  v6 = j_snprintf(_Buffer, 0x1000ui64, "{\"cat\":\"Profiler\",\"pid\":\"%llu\",\"tid\":\"%llu\",\"ts\":\"%f\",\"dur\":\"%f\",\"ph\":\"X\",\"name\":\"Flush\"},\n", v4, v5, v2, (double)v3);
  if ( (unsigned __int64)v6 <= 0xFFF )
    indyfs_fwrite(s_profiler->file, _Buffer, v6);
  else
    indyfs_log_message(Error, "snprintf encoding error - Internal buffer is too small. Buffer size: %zu  Required size: %d", 0x1000ui64, (unsigned int)v6);
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

