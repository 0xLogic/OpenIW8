/*
==============
Co_Self
==============
*/

unsigned __int64 __fastcall Co_Self()
{
  return ?Co_Self@@YA_KXZ();
}

/*
==============
Co_Yield
==============
*/

unsigned __int64 __fastcall Co_Yield(unsigned __int64 value)
{
  return ?Co_Yield@@YA_K_K@Z(value);
}

/*
==============
Co_Await
==============
*/

unsigned __int64 __fastcall Co_Await(unsigned __int64 handle)
{
  return ?Co_Await@@YA_K_K@Z(handle);
}

/*
==============
Co_IsStarted
==============
*/

bool __fastcall Co_IsStarted(unsigned __int64 handle)
{
  return ?Co_IsStarted@@YA_N_K@Z(handle);
}

/*
==============
Co_Init
==============
*/

void Co_Init(void)
{
  ?Co_Init@@YAXXZ();
}

/*
==============
Co_Resume
==============
*/

unsigned __int64 __fastcall Co_Resume(unsigned __int64 handle, unsigned __int64 value)
{
  return ?Co_Resume@@YA_K_K0@Z(handle, value);
}

/*
==============
Co_RunInternal
==============
*/

unsigned __int64 __fastcall Co_RunInternal(unsigned __int64 *const handle, const int contextSize, std::function<unsigned __int64 __cdecl(void)> *f)
{
  return ?Co_RunInternal@@YA_KQEA_KHV?$function@$$A6A_KXZ@std@@@Z(handle, contextSize, f);
}

/*
==============
Co_Frame
==============
*/

void Co_Frame(void)
{
  ?Co_Frame@@YAXXZ();
}

/*
==============
Co_Schedule
==============
*/

void __fastcall Co_Schedule(unsigned __int64 handle, unsigned __int64 value)
{
  ?Co_Schedule@@YAX_K0@Z(handle, value);
}

/*
==============
Co_Shutdown
==============
*/

void Co_Shutdown(void)
{
  ?Co_Shutdown@@YAXXZ();
}

/*
==============
Co_Await
==============
*/
unsigned __int64 Co_Await(unsigned __int64 handle)
{
  Coroutine *v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 *v8; 

  if ( handle == -1i64 )
  {
    v2 = &co_main;
  }
  else if ( (unsigned int)handle >= 0x20 || (v3 = (unsigned int)handle, co_coroutines[v3].generation != HIDWORD(handle)) || (v2 = &co_coroutines[v3]) == NULL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 552, ASSERT_TYPE_SANITY, "( co != nullptr )", (const char *)&queryFormat, "co != nullptr") )
      __debugbreak();
    return 0i64;
  }
  v4 = Co_Self();
  v5 = co_awaitCount;
  co_awaits[co_awaitCount] = v4;
  v6 = v5 + 1;
  co_awaitCount = v6;
  if ( Co_IsStarted(handle) )
  {
    do
      Co_Yield(1ui64);
    while ( !co_shutdown && Co_IsStarted(handle) );
    v6 = co_awaitCount;
  }
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = co_awaits;
    while ( 1 )
    {
      if ( co_self == -1i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 509, ASSERT_TYPE_SANITY, "( co_self != (CoHandle)( -1 ) )", (const char *)&queryFormat, "co_self != CO_INVALID") )
          __debugbreak();
        v6 = co_awaitCount;
      }
      if ( *v8 == co_self )
        break;
      ++v7;
      ++v8;
      if ( v7 >= v6 )
        goto LABEL_20;
    }
    co_awaitCount = v6 - 1;
    co_awaits[v7] = co_awaits[v6 - 1];
  }
LABEL_20:
  if ( !co_shutdown )
    return v2->returnValue;
  return 0i64;
}

/*
==============
Co_Entry
==============
*/
void Co_Entry(void *const functor)
{
  __int64 v1; 
  unsigned __int64 v2; 

  v1 = *((_QWORD *)functor + 7);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x143841C97i64);
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
  co_done = 1;
  Co_Yield(v2);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 75, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Co_Entry - Co_Yield should never return") )
    __debugbreak();
}

/*
==============
Co_Frame
==============
*/
void Co_Frame(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  unsigned __int64 *v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  Coroutine *v6; 
  __int64 v7; 
  void *fiber; 
  __int64 v9; 
  unsigned __int64 handle[64]; 

  v0 = co_scheduledCount;
  memcpy_0(handle, co_scheduled, 16i64 * co_scheduledCount);
  v1 = 0i64;
  v2 = v0;
  co_scheduledCount = 0;
  if ( (int)v0 > 0 )
  {
    v3 = handle;
    while ( 1 )
    {
      v4 = *v3;
      v5 = v3[1];
      if ( *v3 == -1i64 )
        break;
      if ( (unsigned int)v4 < 0x20 )
      {
        v7 = (unsigned int)v4;
        if ( co_coroutines[v7].generation == HIDWORD(v4) )
        {
          v6 = &co_coroutines[v7];
          if ( &co_coroutines[v7] )
            goto LABEL_8;
        }
      }
LABEL_11:
      v3 += 2;
      if ( !--v2 )
        goto LABEL_12;
    }
    v6 = &co_main;
LABEL_8:
    if ( v6->state )
    {
      fiber = v6->fiber;
      v6->parent = co_self;
      v6->state = CO_STATE_EXECUTING;
      co_self = v4;
      co_resumeValue = v5;
      SwitchToFiber(fiber);
      co_self = v6->parent;
      if ( v6->state == CO_STATE_NONE )
      {
        DeleteFiber(v6->fiber);
        Co_Free(v4);
      }
    }
    goto LABEL_11;
  }
LABEL_12:
  v9 = co_awaitCount;
  memcpy_0(handle, co_awaits, 8i64 * co_awaitCount);
  if ( v9 > 0 )
  {
    do
      Co_Resume(handle[v1++], 1ui64);
    while ( v1 < v9 );
  }
}

/*
==============
Co_Free
==============
*/
void Co_Free(const unsigned __int64 handle)
{
  int v1; 
  int v2; 

  if ( (unsigned int)handle < 0x20 )
  {
    v1 = handle;
    if ( co_coroutines[(unsigned int)handle].generation == HIDWORD(handle) )
    {
      v2 = co_freeCount;
      if ( (unsigned __int64)co_freeCount >= 0x20 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 358, ASSERT_TYPE_SANITY, "( co_freeCount < ( sizeof( *array_counter( co_free ) ) + 0 ) )", (const char *)&queryFormat, "co_freeCount < ARRAY_COUNT( co_free )") )
          __debugbreak();
        v2 = co_freeCount;
      }
      co_freeCount = v2 + 1;
      co_free[v2] = v1;
    }
  }
}

/*
==============
Co_Init
==============
*/
void Co_Init(void)
{
  unsigned int v0; 
  unsigned int *p_generation; 
  unsigned int v2; 
  unsigned int v3; 
  int *v4; 
  unsigned int v14; 

  co_shutdown = 0;
  if ( !co_main.fiber )
    co_main.fiber = ConvertThreadToFiber(NULL);
  co_self = -1i64;
  memset_0(co_coroutines, 0, sizeof(co_coroutines));
  v0 = 0;
  co_awaitCount = 0;
  memset_0(co_awaits, 0, sizeof(co_awaits));
  co_scheduledCount = 0;
  memset_0(co_scheduled, 0, sizeof(co_scheduled));
  p_generation = &co_coroutines[1].generation;
  v2 = co_generation + 1;
  v3 = 0;
  do
  {
    v3 += 32;
    *(p_generation - 8) = v2;
    *p_generation = v2;
    p_generation[8] = v2;
    p_generation[16] = v2;
    p_generation[24] = v2;
    p_generation[32] = v2;
    p_generation[40] = v2;
    p_generation[48] = v2;
    p_generation[56] = v2;
    p_generation[64] = v2;
    p_generation[72] = v2;
    p_generation[80] = v2;
    p_generation[88] = v2;
    p_generation[96] = v2;
    p_generation[104] = v2;
    p_generation[112] = v2;
    p_generation[120] = v2;
    p_generation[128] = v2;
    p_generation[136] = v2;
    p_generation[144] = v2;
    p_generation[152] = v2;
    p_generation[160] = v2;
    p_generation[168] = v2;
    p_generation[176] = v2;
    p_generation[184] = v2;
    p_generation[192] = v2;
    p_generation[200] = v2;
    p_generation[208] = v2;
    p_generation[216] = v2;
    p_generation[224] = v2;
    p_generation[232] = v2;
    p_generation[240] = v2;
    p_generation += 256;
  }
  while ( v3 < 0x20 );
  v4 = &co_free[4];
  do
  {
    _XMM0 = v0;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v4 - 1) = _XMM1;
    _XMM0 = v0 + 4;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *(_OWORD *)v4 = _XMM1;
    _XMM0 = v0 + 8;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v4 + 1) = _XMM1;
    v14 = v0 + 12;
    v0 += 16;
    v4 += 16;
    _XMM0 = v14;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v4 - 2) = _XMM1;
  }
  while ( v0 < 0x20 );
  co_freeCount = 32;
}

/*
==============
Co_IsStarted
==============
*/
bool Co_IsStarted(unsigned __int64 handle)
{
  Coroutine *v1; 
  __int64 v2; 

  if ( handle == -1i64 )
  {
    v1 = &co_main;
  }
  else
  {
    if ( (unsigned int)handle >= 0x20 )
      return 0;
    v2 = (unsigned int)handle;
    if ( co_coroutines[v2].generation != HIDWORD(handle) )
      return 0;
    v1 = &co_coroutines[v2];
    if ( !v1 )
      return 0;
  }
  return v1->state != CO_STATE_NONE;
}

/*
==============
Co_Resume
==============
*/
unsigned __int64 Co_Resume(unsigned __int64 handle, unsigned __int64 value)
{
  Coroutine *v3; 
  __int64 v4; 
  void *fiber; 
  bool v6; 

  if ( handle == -1i64 )
  {
    v3 = &co_main;
  }
  else
  {
    if ( (unsigned int)handle >= 0x20 )
      return 0i64;
    v4 = (unsigned int)handle;
    if ( co_coroutines[v4].generation != HIDWORD(handle) )
      return 0i64;
    v3 = &co_coroutines[v4];
    if ( !&co_coroutines[v4] )
      return 0i64;
  }
  if ( v3->state == CO_STATE_NONE )
    return 0i64;
  fiber = v3->fiber;
  v3->parent = co_self;
  v3->state = CO_STATE_EXECUTING;
  co_self = handle;
  co_resumeValue = value;
  SwitchToFiber(fiber);
  v6 = v3->state == CO_STATE_NONE;
  co_self = v3->parent;
  if ( v6 )
  {
    DeleteFiber(v3->fiber);
    Co_Free(handle);
  }
  return v3->returnValue;
}

/*
==============
Co_RunInternal
==============
*/
unsigned __int64 Co_RunInternal(unsigned __int64 *const handle, __int64 contextSize, std::function<unsigned __int64 __cdecl(void)> *f)
{
  SIZE_T v4; 
  std::function<unsigned __int64 __cdecl(void)> *v6; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  Coroutine *v14; 
  __int64 v15; 
  LPVOID Fiber; 
  __int64 v17; 
  unsigned __int64 v18; 
  std::function<unsigned __int64 __cdecl(void)> *v19; 

  v4 = (int)contextSize;
  if ( !handle )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 472, ASSERT_TYPE_SANITY, "( handle != nullptr )", (const char *)&queryFormat, "handle != nullptr", -2i64, f) )
      __debugbreak();
    goto LABEL_28;
  }
  *handle = -1i64;
  if ( co_shutdown )
  {
    v6 = (std::function<unsigned __int64 __cdecl(void)> *)f->_Mystorage._Ptrs[7];
LABEL_29:
    if ( v6 )
    {
      LOBYTE(contextSize) = v6 != f;
      ((void (__fastcall *)(std::function<unsigned __int64 __cdecl(void)> *, __int64))v6->_Mystorage._Ptrs[0][4].__vftable)(v6, contextSize);
      f->_Mystorage._Ptrs[7] = NULL;
    }
    return 0i64;
  }
  v7 = co_freeCount;
  if ( co_freeCount <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 336, ASSERT_TYPE_SANITY, "( co_freeCount > 0 )", (const char *)&queryFormat, "co_freeCount > 0", -2i64, f) )
      __debugbreak();
    v7 = co_freeCount;
  }
  v8 = co_free[0];
  co_freeCount = v7 - 1;
  memmove_0(co_free, &co_free[1], 4i64 * (v7 - 1));
  v9 = v8;
  v10 = v8;
  if ( co_coroutines[v10].state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 341, ASSERT_TYPE_SANITY, "( co_coroutines[index].state == CO_STATE_NONE )", (const char *)&queryFormat, "co_coroutines[index].state == CO_STATE_NONE") )
    __debugbreak();
  v11 = co_coroutines[v10].generation + 1;
  co_coroutines[v10].generation = v11;
  v12 = co_generation;
  if ( (unsigned int)v11 > co_generation )
    v12 = v11;
  co_generation = v12;
  v13 = v9 | (v11 << 32);
  if ( v13 == -1i64 )
  {
    v14 = &co_main;
  }
  else if ( (unsigned int)v13 >= 0x20 || (v15 = (unsigned int)v13, co_coroutines[v15].generation != HIDWORD(v13)) || (v14 = &co_coroutines[v15]) == NULL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 487, ASSERT_TYPE_SANITY, "( co )", (const char *)&queryFormat, "co") )
      __debugbreak();
    Co_Free(v13);
    goto LABEL_28;
  }
  Fiber = CreateFiber(v4, (LPFIBER_START_ROUTINE)Co_Entry, f);
  v14->fiber = Fiber;
  if ( !Fiber )
  {
    Co_Free(v13);
    DeleteFiber(v14->fiber);
LABEL_28:
    v6 = (std::function<unsigned __int64 __cdecl(void)> *)f->_Mystorage._Ptrs[7];
    goto LABEL_29;
  }
  *handle = v13;
  v14->state = CO_STATE_EXECUTING;
  v18 = Co_Resume(v13, 0xFFFFFFFFFFFFFFFFui64);
  v19 = (std::function<unsigned __int64 __cdecl(void)> *)f->_Mystorage._Ptrs[7];
  if ( v19 )
  {
    LOBYTE(v17) = v19 != f;
    ((void (__fastcall *)(std::function<unsigned __int64 __cdecl(void)> *, __int64))v19->_Mystorage._Ptrs[0][4].__vftable)(v19, v17);
    f->_Mystorage._Ptrs[7] = NULL;
  }
  return v18;
}

/*
==============
Co_Schedule
==============
*/
void Co_Schedule(unsigned __int64 handle, unsigned __int64 value)
{
  __int64 v3; 
  __int64 v4; 

  if ( !co_shutdown )
  {
    if ( handle == -1i64 || (unsigned int)handle < 0x20 && (v3 = (unsigned int)handle, co_coroutines[v3].generation == HIDWORD(handle)) && v3 != 0x7FFFFFFF54C3F03i64 )
    {
      v4 = co_scheduledCount++;
      co_scheduled[v4].handle = handle;
      co_scheduled[v4].value = value;
    }
  }
}

/*
==============
Co_Self
==============
*/
unsigned __int64 Co_Self()
{
  unsigned __int64 result; 

  result = co_self;
  if ( co_self == -1i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 509, ASSERT_TYPE_SANITY, "( co_self != (CoHandle)( -1 ) )", (const char *)&queryFormat, "co_self != CO_INVALID") )
      __debugbreak();
    return co_self;
  }
  return result;
}

/*
==============
Co_Shutdown
==============
*/
void Co_Shutdown(void)
{
  unsigned int *p_generation; 
  unsigned int v1; 
  unsigned __int64 v2; 
  Coroutine *v3; 
  __int64 v4; 
  void *fiber; 

  p_generation = &co_coroutines[0].generation;
  v1 = 0;
  co_shutdown = 1;
  do
  {
    if ( *(p_generation - 1) != 2 )
      goto LABEL_10;
    v2 = (int)v1 | ((unsigned __int64)*p_generation << 32);
    if ( v2 == -1i64 )
    {
      v3 = &co_main;
    }
    else
    {
      v4 = v1;
      if ( co_coroutines[v4].generation != HIDWORD(v2) )
        goto LABEL_10;
      v3 = &co_coroutines[v4];
      if ( !&co_coroutines[v4] )
        goto LABEL_10;
    }
    if ( v3->state )
    {
      fiber = v3->fiber;
      v3->parent = co_self;
      v3->state = CO_STATE_EXECUTING;
      co_self = v2;
      co_resumeValue = 0i64;
      SwitchToFiber(fiber);
      co_self = v3->parent;
      if ( v3->state == CO_STATE_NONE )
      {
        DeleteFiber(v3->fiber);
        Co_Free(v2);
      }
    }
LABEL_10:
    ++v1;
    p_generation += 8;
  }
  while ( v1 < 0x20 );
  memset_0(co_coroutines, 0, sizeof(co_coroutines));
  if ( co_freeCount != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 433, ASSERT_TYPE_ASSERT, "( co_freeCount ) == ( 32 )", "%s == %s\n\t%i, %i", "co_freeCount", "CO_MAX_COUNT", co_freeCount, 32) )
    __debugbreak();
  ++co_generation;
}

/*
==============
Co_Yield
==============
*/
unsigned __int64 Co_Yield(unsigned __int64 value)
{
  unsigned __int64 v1; 
  Coroutine *v2; 
  Coroutine *v4; 
  __int64 v5; 
  bool v6; 
  unsigned __int64 parent; 
  __int64 v8; 
  int v9; 
  const char *v11; 
  int v12; 
  const char *v13; 

  v1 = co_self;
  v2 = &co_main;
  if ( co_self != -1i64 )
    goto LABEL_27;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", 509, ASSERT_TYPE_SANITY, "( co_self != (CoHandle)( -1 ) )", (const char *)&queryFormat, "co_self != CO_INVALID") )
    __debugbreak();
  v1 = co_self;
  if ( co_self == -1i64 )
  {
    v4 = &co_main;
  }
  else
  {
LABEL_27:
    if ( (unsigned int)v1 >= 0x20 || (v5 = (unsigned int)v1, co_coroutines[v5].generation != HIDWORD(v1)) || (v4 = &co_coroutines[v5]) == NULL )
    {
      v11 = "co";
      v12 = 517;
      v13 = "( co )";
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\coroutine.cpp", v12, ASSERT_TYPE_SANITY, v13, (const char *)&queryFormat, v11) )
        __debugbreak();
      return 0i64;
    }
  }
  if ( v4->state == CO_STATE_NONE )
    return 0i64;
  v6 = co_done;
  if ( co_shutdown && !co_done )
    return 0i64;
  parent = v4->parent;
  if ( parent != -1i64 )
  {
    if ( (unsigned int)parent >= 0x20 || (v8 = (unsigned int)parent, co_coroutines[v8].generation != HIDWORD(parent)) || (v2 = &co_coroutines[v8]) == NULL )
    {
      v11 = "co_parent";
      v12 = 529;
      v13 = "( co_parent )";
      goto LABEL_22;
    }
  }
  v4->returnValue = value;
  co_done = 0;
  v9 = 2;
  if ( v6 )
    v9 = 0;
  v4->state = v9;
  SwitchToFiber(v2->fiber);
  if ( !co_shutdown )
    return co_resumeValue;
  return 0i64;
}

