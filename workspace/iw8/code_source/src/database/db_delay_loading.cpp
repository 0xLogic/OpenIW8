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
  __int64 v6; 
  volatile __int64 readDelays; 
  volatile __int64 seekDelays; 
  __int64 v9; 
  volatile unsigned int seekCount; 
  char *fmt; 

  if ( !sum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_delay_loading.cpp", 66, ASSERT_TYPE_ASSERT, "(sum)", (const char *)&queryFormat, "sum") )
    __debugbreak();
  if ( msecs > 0 )
  {
    v6 = 1000i64;
    if ( msecs <= 1000 )
      v6 = msecs;
    if ( (unsigned __int64)(v6 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v6, "signed", v6) )
      __debugbreak();
    Sys_Sleep(v6);
    if ( ((unsigned __int8)sum & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", (const void *)sum) )
      __debugbreak();
    _InterlockedExchangeAdd64(sum, v6);
    if ( Sys_IsDatabaseThread() && (__int64)s_delay.readSize > 104857600 )
    {
      readDelays = s_delay.readDelays;
      seekDelays = s_delay.seekDelays;
      v9 = s_delay.readDelays + s_delay.readTime;
      seekCount = s_delay.seekCount;
      s_delay.readTime = 0i64;
      s_delay.readSize = 0i64;
      s_delay.readDelays = 0i64;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rcx
      }
      s_delay.seekDelays = 0i64;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@3f7a0000
        vcvtss2sd xmm3, xmm2, xmm2
      }
      s_delay.seekCount = 0;
      __asm { vmovsd  [rsp+58h+fmt], xmm3 }
      Com_PrintWarning(16, "DELAY_LOADING: Delayed %zdmsec over %zdmsec. Net speed was %2.fkb/s.\n", readDelays, v9, *(double *)&fmt);
      Com_PrintWarning(16, "DELAY_LOADING: %zdmsec of seek delays (%d discrete seeks) over that period.\n", seekDelays, seekCount);
    }
  }
}

/*
==============
DB_DelayLoading_OnWait
==============
*/

void __fastcall DB_DelayLoading_OnWait(const unsigned __int64 startTime, const unsigned __int64 size, double _XMM2_8)
{
  int Int_Internal_DebugName; 
  unsigned __int64 v7; 
  bool v8; 
  char v9; 
  __int64 v10; 
  char v16; 
  char v17; 
  unsigned __int64 v18; 
  int v19; 
  signed __int64 v20; 
  double v32; 

  if ( DVARINT_db_loadDelayReadSpeed )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_db_loadDelayReadSpeed, "db_loadDelayReadSpeed");
    if ( Int_Internal_DebugName )
    {
      if ( size )
      {
        v7 = __rdtsc();
        v8 = v7 < startTime;
        v10 = v7 - startTime;
        v9 = v8 || v10 == 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( v10 < 0 )
          __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
        __asm
        {
          vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
          vaddsd  xmm1, xmm0, cs:__real@3fe0000000000000
          vcomisd xmm1, cs:__real@c340000000000000
          vcvttsd2si rdi, xmm1
        }
        if ( v8 )
          goto LABEL_9;
        __asm { vcomisd xmm1, cs:__real@4340000000000000 }
        if ( !v8 && v10 != 0 )
        {
LABEL_9:
          v16 = 0;
          v9 = 1;
        }
        else
        {
          v16 = 1;
        }
        __asm
        {
          vcomisd xmm1, cs:__real@c3e0000000000000
          vcomisd xmm1, cs:__real@43e0000000000000
        }
        if ( v9 )
          v17 = 1;
        else
          v17 = 0;
        if ( !v16 || !v17 )
        {
          __asm { vmovsd  [rsp+58h+var_20], xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "__int64 __cdecl float_to_integral_cast<__int64,double>(double)", _RDI, v32) )
            __debugbreak();
        }
        if ( _RDI < 1 )
          _RDI = 1i64;
        if ( ((unsigned __int8)&s_delay.readSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_delay.readSize) )
          __debugbreak();
        _InterlockedExchangeAdd64(&s_delay.readSize, size);
        if ( ((unsigned __int8)&s_delay & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_delay) )
          __debugbreak();
        _InterlockedExchangeAdd64((volatile signed __int64 *)&s_delay, _RDI);
        v18 = size / _RDI;
        if ( v18 > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "__int64 __cdecl truncate_cast_impl<__int64,unsigned __int64>(unsigned __int64)", "signed", v18, "unsigned", v18) )
          __debugbreak();
        v19 = (Int_Internal_DebugName << 10) / 1000;
        v20 = v19;
        if ( v19 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_delay_loading.cpp", 108, ASSERT_TYPE_ASSERT, "(targetBytesPerMsec > 0)", (const char *)&queryFormat, "targetBytesPerMsec > 0") )
          __debugbreak();
        if ( (__int64)v18 > v20 )
        {
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2sd xmm2, xmm2, rbx
          }
          if ( (size & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddsd  xmm2, xmm2, cs:__real@43f0000000000000 }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, rsi
            vdivsd  xmm3, xmm2, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, rdi
            vdivsd  xmm2, xmm2, xmm1
            vsubsd  xmm0, xmm3, xmm2
            vaddsd  xmm3, xmm0, cs:__real@3fe0000000000000
            vcvttsd2si rcx, xmm3
          }
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

