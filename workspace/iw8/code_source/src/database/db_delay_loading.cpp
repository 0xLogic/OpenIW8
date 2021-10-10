/*
==============
DB_DelayLoading_Seek
==============
*/

void DB_DelayLoading_Seek(void)
{
  ?DB_DelayLoading_Seek@@YAXXZ();
}

/*
==============
DB_DelayLoading_OnWait
==============
*/

void __fastcall DB_DelayLoading_OnWait(const unsigned __int64 startTime, const unsigned __int64 size)
{
  ?DB_DelayLoading_OnWait@@YAX_K0@Z(startTime, size);
}

/*
==============
DB_DelayLoading_DoDelay
==============
*/
void DB_DelayLoading_DoDelay(__int64 msecs, volatile __int64 *sum)
{
  __int64 v4; 
  volatile __int64 readSize; 
  volatile __int64 readDelays; 
  volatile __int64 seekDelays; 
  __int64 v8; 
  volatile unsigned int seekCount; 
  float v10; 
  float v11; 

  if ( !sum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_delay_loading.cpp", 66, ASSERT_TYPE_ASSERT, "(sum)", (const char *)&queryFormat, "sum") )
    __debugbreak();
  if ( msecs > 0 )
  {
    v4 = 1000i64;
    if ( msecs <= 1000 )
      v4 = msecs;
    if ( (unsigned __int64)(v4 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v4, "signed", v4) )
      __debugbreak();
    Sys_Sleep(v4);
    if ( ((unsigned __int8)sum & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)sum) )
      __debugbreak();
    _InterlockedExchangeAdd64(sum, v4);
    if ( Sys_IsDatabaseThread() && (__int64)s_delay.readSize > 104857600 )
    {
      readSize = s_delay.readSize;
      readDelays = s_delay.readDelays;
      seekDelays = s_delay.seekDelays;
      v8 = s_delay.readDelays + s_delay.readTime;
      seekCount = s_delay.seekCount;
      s_delay.readTime = 0i64;
      s_delay.readSize = 0i64;
      s_delay.readDelays = 0i64;
      v10 = (float)readSize;
      s_delay.seekDelays = 0i64;
      v11 = (float)v8;
      s_delay.seekCount = 0;
      Com_PrintWarning(16, "DELAY_LOADING: Delayed %zdmsec over %zdmsec. Net speed was %2.fkb/s.\n", readDelays, v8, (float)((float)(v10 / v11) * 0.9765625));
      Com_PrintWarning(16, "DELAY_LOADING: %zdmsec of seek delays (%d discrete seeks) over that period.\n", seekDelays, seekCount);
    }
  }
}

/*
==============
DB_DelayLoading_OnWait
==============
*/
void DB_DelayLoading_OnWait(const unsigned __int64 startTime, const unsigned __int64 size)
{
  int Int_Internal_DebugName; 
  __int128 v7; 
  __int128 v9; 
  bool v11; 
  bool v12; 
  unsigned __int64 v13; 
  int v14; 
  signed __int64 v15; 
  __int128 v18; 
  __int128 v21; 

  if ( DVARINT_db_loadDelayReadSpeed )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_db_loadDelayReadSpeed, "db_loadDelayReadSpeed");
    if ( Int_Internal_DebugName )
    {
      if ( size )
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (__int64)(__rdtsc() - startTime) < 0 )
        {
          *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v7 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v7;
        }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v9 = *(double *)&_XMM0 * msecPerRawTimerTick + 0.5;
        _XMM1 = v9;
        __asm { vcvttsd2si rdi, xmm1 }
        v11 = *(double *)&v9 >= -9.007199254740992e15 && *(double *)&v9 <= 9.007199254740992e15;
        v12 = *(double *)&v9 >= -9.223372036854776e18 && *(double *)&v9 <= 9.223372036854776e18;
        if ( (!v11 || !v12) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "__int64 __cdecl float_to_integral_cast<__int64,double>(double)", _RDI, *(double *)&v9) )
          __debugbreak();
        if ( _RDI < 1 )
          _RDI = 1i64;
        if ( ((unsigned __int8)&s_delay.readSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_delay.readSize) )
          __debugbreak();
        _InterlockedExchangeAdd64(&s_delay.readSize, size);
        if ( ((unsigned __int8)&s_delay & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_delay) )
          __debugbreak();
        _InterlockedExchangeAdd64((volatile signed __int64 *)&s_delay, _RDI);
        v13 = size / _RDI;
        if ( v13 > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "__int64 __cdecl truncate_cast_impl<__int64,unsigned __int64>(unsigned __int64)", "signed", v13, "unsigned", v13) )
          __debugbreak();
        v14 = (Int_Internal_DebugName << 10) / 1000;
        v15 = v14;
        if ( v14 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_delay_loading.cpp", 108, ASSERT_TYPE_ASSERT, "(targetBytesPerMsec > 0)", (const char *)&queryFormat, "targetBytesPerMsec > 0") )
          __debugbreak();
        if ( (__int64)v13 > v15 )
        {
          _XMM2 = 0i64;
          __asm { vcvtsi2sd xmm2, xmm2, rbx }
          if ( (size & 0x8000000000000000ui64) != 0i64 )
          {
            *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v18 = *(double *)&_XMM2 + 1.844674407370955e19;
            _XMM2 = v18;
          }
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, rsi }
          *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM2 + 1);
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, rdi }
          *(double *)&v21 = *(double *)&_XMM2 / *(double *)&_XMM0 - *(double *)&_XMM2 / *(double *)&_XMM1 + 0.5;
          _XMM3 = v21;
          __asm { vcvttsd2si rcx, xmm3 }
          if ( _RCX < 1 )
            _RCX = 1i64;
          DB_DelayLoading_DoDelay(_RCX, &s_delay.readDelays);
        }
      }
    }
  }
}

/*
==============
DB_DelayLoading_Seek
==============
*/
void DB_DelayLoading_Seek(void)
{
  int Int_Internal_DebugName; 

  if ( DVARINT_db_loadDelaySeekTime )
  {
    if ( ((unsigned __int8)&s_delay.seekCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_delay.seekCount) )
      __debugbreak();
    _InterlockedIncrement(&s_delay.seekCount);
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_db_loadDelaySeekTime, "db_loadDelaySeekTime");
    if ( Int_Internal_DebugName > 10 )
      DB_DelayLoading_DoDelay(Int_Internal_DebugName - 10, &s_delay.seekDelays);
  }
}

