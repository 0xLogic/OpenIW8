/*
==============
NetBurst::UpdateTimers
==============
*/

void __fastcall NetBurst::UpdateTimers(NetBurst *this, const NetBurst::UpdateParams *params)
{
  ?UpdateTimers@NetBurst@@IEAAXAEBUUpdateParams@1@@Z(this, params);
}

/*
==============
NetBurst::NetBurst
==============
*/

void __fastcall NetBurst::NetBurst(NetBurst *this)
{
  ??0NetBurst@@QEAA@XZ(this);
}

/*
==============
NetBurstDynamicWindow::NetBurstDynamicWindow
==============
*/

void __fastcall NetBurstDynamicWindow::NetBurstDynamicWindow(NetBurstDynamicWindow *this)
{
  ??0NetBurstDynamicWindow@@QEAA@XZ(this);
}

/*
==============
NetBurstAutoCorrelate::NetBurstAutoCorrelate
==============
*/

void __fastcall NetBurstAutoCorrelate::NetBurstAutoCorrelate(NetBurstAutoCorrelate *this, const int sampleRateMsec)
{
  ??0NetBurstAutoCorrelate@@QEAA@H@Z(this, sampleRateMsec);
}

/*
==============
NetBurstDynamicWindow::AddSample
==============
*/

void __fastcall NetBurstDynamicWindow::AddSample(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  ?AddSample@NetBurstDynamicWindow@@AEAAXAEBUUpdateParams@NetBurst@@@Z(this, params);
}

/*
==============
NetBurstDynamicWindow::CalcWindow
==============
*/

bool __fastcall NetBurstDynamicWindow::CalcWindow(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params, int *outWindow)
{
  return ?CalcWindow@NetBurstDynamicWindow@@AEAA_NAEBUUpdateParams@NetBurst@@AEAH@Z(this, params, outWindow);
}

/*
==============
NetBurstAutoCorrelate::UpdateWindow
==============
*/

void __fastcall NetBurstAutoCorrelate::UpdateWindow(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  ?UpdateWindow@NetBurstAutoCorrelate@@AEAAXAEBUUpdateParams@NetBurst@@@Z(this, parms);
}

/*
==============
NetBurst::ResetWindow
==============
*/

void __fastcall NetBurst::ResetWindow(NetBurst *this)
{
  ?ResetWindow@NetBurst@@IEAAXXZ(this);
}

/*
==============
NetBurstAutoCorrelate::Update
==============
*/

bool __fastcall NetBurstAutoCorrelate::Update(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  return ?Update@NetBurstAutoCorrelate@@UEAA_NAEBUUpdateParams@NetBurst@@@Z(this, parms);
}

/*
==============
NetBurstFixedWindow::~NetBurstFixedWindow
==============
*/

void __fastcall NetBurstFixedWindow::~NetBurstFixedWindow(NetBurstFixedWindow *this)
{
  ??1NetBurstFixedWindow@@UEAA@XZ(this);
}

/*
==============
NetBurstFixedWindow::Update
==============
*/

bool __fastcall NetBurstFixedWindow::Update(NetBurstFixedWindow *this, const NetBurst::UpdateParams *params)
{
  return ?Update@NetBurstFixedWindow@@UEAA_NAEBUUpdateParams@NetBurst@@@Z(this, params);
}

/*
==============
NetBurstDynamicWindow::UpdateWindow
==============
*/

void __fastcall NetBurstDynamicWindow::UpdateWindow(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  ?UpdateWindow@NetBurstDynamicWindow@@AEAAXAEBUUpdateParams@NetBurst@@@Z(this, params);
}

/*
==============
NetBurst::~NetBurst
==============
*/

void __fastcall NetBurst::~NetBurst(NetBurst *this)
{
  ??1NetBurst@@UEAA@XZ(this);
}

/*
==============
NetBurstAutoCorrelate::SampleCorrelogram
==============
*/

void __fastcall NetBurstAutoCorrelate::SampleCorrelogram(NetBurstAutoCorrelate *this, const int startSample, const int endSample, float *outCorrelogram, int *outSize)
{
  ?SampleCorrelogram@NetBurstAutoCorrelate@@AEAAXHHQEAMPEAH@Z(this, startSample, endSample, outCorrelogram, outSize);
}

/*
==============
NetBurstAutoCorrelate::AddSample
==============
*/

void __fastcall NetBurstAutoCorrelate::AddSample(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  ?AddSample@NetBurstAutoCorrelate@@AEAAXAEBUUpdateParams@NetBurst@@@Z(this, parms);
}

/*
==============
NetBurstAutoCorrelate::SampleMean
==============
*/

double __fastcall NetBurstAutoCorrelate::SampleMean(NetBurstAutoCorrelate *this, const int startSample, const int endSample)
{
  double result; 

  *(float *)&result = ?SampleMean@NetBurstAutoCorrelate@@AEAAMHH@Z(this, startSample, endSample);
  return result;
}

/*
==============
NetBurstAutoCorrelate::Reset
==============
*/

void __fastcall NetBurstAutoCorrelate::Reset(NetBurstAutoCorrelate *this)
{
  ?Reset@NetBurstAutoCorrelate@@UEAAXXZ(this);
}

/*
==============
NetBurstFixedWindow::Reset
==============
*/

void __fastcall NetBurstFixedWindow::Reset(NetBurstFixedWindow *this)
{
  ?Reset@NetBurstFixedWindow@@UEAAXXZ(this);
}

/*
==============
NetBurstDynamicWindow::Reset
==============
*/

void __fastcall NetBurstDynamicWindow::Reset(NetBurstDynamicWindow *this)
{
  ?Reset@NetBurstDynamicWindow@@UEAAXXZ(this);
}

/*
==============
NetBurstAutoCorrelate::CorrelogramPeriod
==============
*/

bool __fastcall NetBurstAutoCorrelate::CorrelogramPeriod(NetBurstAutoCorrelate *this, const float *correlogram, const int size, float *outPeriod)
{
  return ?CorrelogramPeriod@NetBurstAutoCorrelate@@AEAA_NPEBMHPEAM@Z(this, correlogram, size, outPeriod);
}

/*
==============
NetBurstFixedWindow::NetBurstFixedWindow
==============
*/

void __fastcall NetBurstFixedWindow::NetBurstFixedWindow(NetBurstFixedWindow *this, const int windowSizeMsec)
{
  ??0NetBurstFixedWindow@@QEAA@H@Z(this, windowSizeMsec);
}

/*
==============
NetBurstDynamicWindow::Update
==============
*/

bool __fastcall NetBurstDynamicWindow::Update(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  return ?Update@NetBurstDynamicWindow@@UEAA_NAEBUUpdateParams@NetBurst@@@Z(this, params);
}

/*
==============
NetBurst::NetBurst
==============
*/
void NetBurst::NetBurst(NetBurst *this)
{
  this->m_state = BUFF_STATE_IDEAL;
  this->__vftable = (NetBurst_vtbl *)&NetBurst::`vftable';
  *(_QWORD *)&this->m_windowStartTime = 0i64;
  this->m_stateStartTime = 0;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
}

/*
==============
NetBurstAutoCorrelate::NetBurstAutoCorrelate
==============
*/
void NetBurstAutoCorrelate::NetBurstAutoCorrelate(NetBurstAutoCorrelate *this, const int sampleRateMsec)
{
  this->m_state = BUFF_STATE_IDEAL;
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
  this->m_windowDuration = 0;
  this->__vftable = (NetBurstAutoCorrelate_vtbl *)&NetBurstAutoCorrelate::`vftable';
  this->m_sampleRateMsec = sampleRateMsec;
  this->m_lastSample = 0;
  if ( sampleRateMsec <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 283, ASSERT_TYPE_ASSERT, "( sampleRateMsec ) > ( 0 )", "sampleRateMsec > 0\n\t%i, %i", sampleRateMsec, 0i64) )
    __debugbreak();
  memset_0(this->m_samples, 0, sizeof(this->m_samples));
}

/*
==============
NetBurstDynamicWindow::NetBurstDynamicWindow
==============
*/
void NetBurstDynamicWindow::NetBurstDynamicWindow(NetBurstDynamicWindow *this)
{
  this->m_state = BUFF_STATE_IDEAL;
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  this->__vftable = (NetBurstDynamicWindow_vtbl *)&NetBurstDynamicWindow::`vftable';
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
  this->m_windowDuration = 0;
  this->m_zeroCrossBuff = 0;
  *(_DWORD *)this->m_zeroCrossState = 0;
  *(_WORD *)&this->m_zeroCrossState[4] = 0;
  *(_QWORD *)this->m_zeroCrossTime = 0i64;
  *(_QWORD *)&this->m_zeroCrossTime[2] = 0i64;
  *(_QWORD *)&this->m_zeroCrossTime[4] = 0i64;
}

/*
==============
NetBurstFixedWindow::NetBurstFixedWindow
==============
*/
void NetBurstFixedWindow::NetBurstFixedWindow(NetBurstFixedWindow *this, const int windowSizeMsec)
{
  this->m_state = BUFF_STATE_IDEAL;
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
  this->__vftable = (NetBurstFixedWindow_vtbl *)&NetBurstFixedWindow::`vftable';
  this->m_windowDuration = windowSizeMsec;
}

/*
==============
NetBurst::~NetBurst
==============
*/
void NetBurst::~NetBurst(NetBurst *this)
{
  this->__vftable = (NetBurst_vtbl *)&NetBurst::`vftable';
}

/*
==============
NetBurstFixedWindow::~NetBurstFixedWindow
==============
*/
void NetBurstFixedWindow::~NetBurstFixedWindow(NetBurstFixedWindow *this)
{
  this->__vftable = (NetBurstFixedWindow_vtbl *)&NetBurst::`vftable';
}

/*
==============
NetBurstAutoCorrelate::AddSample
==============
*/
void NetBurstAutoCorrelate::AddSample(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  int v5; 
  int m_lastSample; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  _RBX = this;
  v5 = parms->systemMsec / this->m_sampleRateMsec;
  if ( v5 < this->m_lastSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 304, ASSERT_TYPE_ASSERT, "( sampleBucket ) >= ( m_lastSample )", "sampleBucket >= m_lastSample\n\t%i, %i", parms->systemMsec / this->m_sampleRateMsec, this->m_lastSample) )
    __debugbreak();
  I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  m_lastSample = _RBX->m_lastSample;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v9 = m_lastSample + 1;
  if ( v5 - 256 > m_lastSample + 1 )
    v9 = v5 - 256;
  if ( v9 < v5 )
  {
    v10 = v9;
    v11 = (unsigned int)(v5 - v9);
    do
    {
      v12 = (unsigned __int8)v10++;
      _RBX->m_samples[v12] = 0.0;
      --v11;
    }
    while ( v11 );
    m_lastSample = _RBX->m_lastSample;
  }
  _RCX = (unsigned __int8)v5;
  if ( v5 == m_lastSample )
    __asm { vaddss  xmm0, xmm0, dword ptr [rbx+rcx*4+30h] }
  __asm { vmovss  dword ptr [rbx+rcx*4+30h], xmm0 }
  _RBX->m_lastSample = v5;
}

/*
==============
NetBurstDynamicWindow::AddSample
==============
*/
void NetBurstDynamicWindow::AddSample(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  int currBuffer; 
  __int64 v4; 
  NetBurst::BufferState m_state; 
  __int64 v6; 
  int v7; 
  int outWindow; 

  currBuffer = params->currBuffer;
  if ( currBuffer <= params->startSurplus )
  {
    m_state = this->m_state;
    if ( currBuffer >= params->startDeficit )
    {
      if ( m_state == BUFF_STATE_IDEAL )
      {
        v7 = params->systemMsec - this->m_stateStartTime;
        if ( !NetBurstDynamicWindow::CalcWindow(this, params, &outWindow) || v7 >= outWindow )
        {
          *(_DWORD *)this->m_zeroCrossState = 0;
          *(_WORD *)&this->m_zeroCrossState[4] = 0;
          *(_QWORD *)this->m_zeroCrossTime = 0i64;
          *(_QWORD *)&this->m_zeroCrossTime[2] = 0i64;
          *(_QWORD *)&this->m_zeroCrossTime[4] = 0i64;
        }
      }
    }
    else if ( m_state != BUFF_STATE_DEFICIT )
    {
      v6 = this->m_zeroCrossBuff % 6u;
      this->m_zeroCrossTime[v6] = params->systemMsec;
      this->m_zeroCrossState[v6] = BUFF_STATE_DEFICIT;
      ++this->m_zeroCrossBuff;
    }
  }
  else if ( this->m_state != BUFF_STATE_SURPLUS )
  {
    v4 = this->m_zeroCrossBuff % 6u;
    this->m_zeroCrossTime[v4] = params->systemMsec;
    this->m_zeroCrossState[v4] = BUFF_STATE_SURPLUS;
    ++this->m_zeroCrossBuff;
  }
}

/*
==============
NetBurstDynamicWindow::CalcWindow
==============
*/
bool NetBurstDynamicWindow::CalcWindow(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params, int *outWindow)
{
  int m_zeroCrossBuff; 
  int v4; 
  unsigned int v5; 
  int v7; 
  NetBurst::BufferState v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  NetBurst::BufferState v12; 
  int v13; 
  int burstDurationClamp; 
  int burstDurationIncrement; 
  int v16; 
  bool result; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  m_zeroCrossBuff = this->m_zeroCrossBuff;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  if ( m_zeroCrossBuff - 6 > 0 )
    v5 = m_zeroCrossBuff - 6;
  if ( (int)v5 >= m_zeroCrossBuff - 1 )
    return 0;
  do
  {
    v8 = this->m_zeroCrossState[v5 % 6];
    v9 = this->m_zeroCrossTime[v5 % 6];
    if ( v8 )
    {
      v10 = v5 + 1;
      if ( (int)(v5 + 1) < m_zeroCrossBuff )
      {
        while ( 1 )
        {
          v11 = v10 % 6;
          v12 = this->m_zeroCrossState[v11];
          v13 = this->m_zeroCrossTime[v11];
          if ( v12 )
          {
            if ( v8 == v12 )
              break;
          }
          if ( (int)++v10 >= m_zeroCrossBuff )
            goto LABEL_14;
        }
        if ( v13 < v9 )
        {
          LODWORD(v21) = this->m_zeroCrossTime[v5 % 6];
          LODWORD(v20) = this->m_zeroCrossTime[v11];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 181, ASSERT_TYPE_ASSERT, "( secondTime ) >= ( firstTime )", "%s >= %s\n\t%i, %i", "secondTime", "firstTime", v20, v21) )
            __debugbreak();
        }
        v5 = v10;
        v7 += v13 - v9;
        ++v4;
      }
    }
LABEL_14:
    m_zeroCrossBuff = this->m_zeroCrossBuff;
    ++v5;
  }
  while ( (int)v5 < m_zeroCrossBuff - 1 );
  if ( !v4 )
    return 0;
  burstDurationClamp = params->burstDurationClamp;
  burstDurationIncrement = params->burstDurationIncrement;
  v16 = v7 / v4;
  if ( burstDurationIncrement > burstDurationClamp )
  {
    LODWORD(v19) = params->burstDurationClamp;
    LODWORD(v18) = params->burstDurationIncrement;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v18, v19) )
      __debugbreak();
  }
  result = 1;
  if ( burstDurationClamp < v16 )
    v16 = burstDurationClamp;
  if ( burstDurationIncrement > v16 )
    v16 = burstDurationIncrement;
  *outWindow = v16;
  return result;
}

/*
==============
NetBurstAutoCorrelate::CorrelogramPeriod
==============
*/
char NetBurstAutoCorrelate::CorrelogramPeriod(NetBurstAutoCorrelate *this, const float *correlogram, const int size, float *outPeriod)
{
  __int64 v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  int v14; 
  bool v17; 
  bool v18; 
  unsigned int v19; 
  bool v23; 
  bool v24; 
  char result; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  __int64 v45[2]; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R13 = outPeriod;
  if ( !correlogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 381, ASSERT_TYPE_ASSERT, "( correlogram != nullptr )", (const char *)&queryFormat, "correlogram != nullptr") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 382, ASSERT_TYPE_ASSERT, "( outPeriod != nullptr )", (const char *)&queryFormat, "outPeriod != nullptr") )
    __debugbreak();
  LODWORD(v10) = 0;
  v11 = size - 1;
  v42 = 0;
  v12 = 1;
  v45[0] = 0i64;
  v45[1] = 0i64;
  v13 = 0x7FFFFFFF;
  v14 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( size - 1 <= 1 )
    goto LABEL_56;
  __asm { vmovss  xmm2, cs:__real@3e800000 }
  v17 = v11 < 4;
  v18 = v11 <= 4;
  if ( (int)v11 > 4 )
  {
    v19 = size - 4;
    _R10 = correlogram + 2;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r10-4]
        vcomiss xmm0, xmm2
      }
      if ( !v17 )
      {
        __asm { vcomiss xmm0, dword ptr [r10-8] }
        if ( !v18 )
        {
          __asm { vcomiss xmm0, dword ptr [r10] }
          v17 = 0;
          *((_DWORD *)v45 + ((__int64)v12 >> 5)) |= 0x80000000 >> (v12 & 0x1F);
          v18 = ++v14 == 0;
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r10]
        vcomiss xmm1, xmm2
      }
      if ( !v17 )
      {
        __asm { vcomiss xmm0, xmm1 }
        if ( v17 )
        {
          __asm { vcomiss xmm1, dword ptr [r10+4] }
          if ( !v18 )
          {
            v17 = 0;
            *((_DWORD *)v45 + ((v12 + 1i64) >> 5)) |= 0x80000000 >> ((v12 + 1) & 0x1F);
            v18 = ++v14 == 0;
          }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r10+4]
        vcomiss xmm0, xmm2
      }
      if ( !v17 )
      {
        __asm { vcomiss xmm1, xmm0 }
        if ( v17 )
        {
          __asm { vcomiss xmm0, dword ptr [r10+8] }
          if ( !v18 )
          {
            v17 = 0;
            *((_DWORD *)v45 + ((v12 + 2i64) >> 5)) |= 0x80000000 >> ((v12 + 2) & 0x1F);
            v18 = ++v14 == 0;
          }
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r10+8]
        vcomiss xmm1, xmm2
      }
      if ( !v17 )
      {
        __asm { vcomiss xmm0, xmm1 }
        if ( v17 )
        {
          __asm { vcomiss xmm1, dword ptr [r10+0Ch] }
          if ( !v18 )
          {
            *((_DWORD *)v45 + ((v12 + 3i64) >> 5)) |= 0x80000000 >> ((v12 + 3) & 0x1F);
            ++v14;
          }
        }
      }
      _R10 += 4;
      v12 += 4;
      v17 = v12 < v19;
      v18 = v12 <= v19;
    }
    while ( v12 < (int)v19 );
    v42 = v14;
  }
  v23 = v12 < v11;
  v24 = v12 <= v11;
  if ( v12 < (int)v11 )
  {
    _R10 = &correlogram[v12 + 1];
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r10-4]
        vcomiss xmm0, xmm2
      }
      if ( !v23 )
      {
        __asm { vcomiss xmm0, dword ptr [r10-8] }
        if ( !v24 )
        {
          __asm { vcomiss xmm0, dword ptr [r10] }
          *((_DWORD *)v45 + ((__int64)v12 >> 5)) |= 0x80000000 >> (v12 & 0x1F);
          ++v14;
        }
      }
      ++_R10;
      v23 = ++v12 < v11;
      v24 = v12 <= v11;
    }
    while ( v12 < (int)v11 );
    v42 = v14;
  }
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbp+28h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm1, xmm0
        vmovss  dword ptr [r13+0], xmm1
      }
      result = v14;
    }
    else
    {
      v32 = v45[0];
      while ( v32 )
      {
LABEL_43:
        v33 = __lzcnt(v32);
        if ( v33 >= 0x20 )
        {
          LODWORD(v41) = 32;
          LODWORD(v40) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( (v32 & (0x80000000 >> v33)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v32 &= ~(0x80000000 >> v33);
        if ( v13 < size )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vaddss  xmm6, xmm6, xmm0
          }
        }
        v13 = v33 + 32 * v10;
      }
      while ( 1 )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= 4 )
          break;
        v32 = *((_DWORD *)v45 + v10);
        if ( v32 )
          goto LABEL_43;
      }
      _R13 = outPeriod;
      if ( v42 <= 1 )
      {
        LODWORD(v41) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 431, ASSERT_TYPE_ASSERT, "( ( peakCount > 1 ) )", "%s\n\t( peakCount ) = %i", "( peakCount > 1 )", v41) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm6, xmm0
        vmovss  dword ptr [r13+0], xmm1
      }
      result = 1;
    }
  }
  else
  {
LABEL_56:
    *_R13 = 0.0;
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
NetBurstAutoCorrelate::Reset
==============
*/
void NetBurstAutoCorrelate::Reset(NetBurstAutoCorrelate *this)
{
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
  this->m_windowDuration = 0;
  this->m_lastSample = 0;
  memset_0(this->m_samples, 0, sizeof(this->m_samples));
}

/*
==============
NetBurstDynamicWindow::Reset
==============
*/
void NetBurstDynamicWindow::Reset(NetBurstDynamicWindow *this)
{
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
  this->m_windowDuration = 0;
  this->m_zeroCrossBuff = 0;
  *(_DWORD *)this->m_zeroCrossState = 0;
  *(_WORD *)&this->m_zeroCrossState[4] = 0;
  *(_QWORD *)this->m_zeroCrossTime = 0i64;
  *(_QWORD *)&this->m_zeroCrossTime[2] = 0i64;
  *(_QWORD *)&this->m_zeroCrossTime[4] = 0i64;
}

/*
==============
NetBurstFixedWindow::Reset
==============
*/
void NetBurstFixedWindow::Reset(NetBurstFixedWindow *this)
{
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
}

/*
==============
NetBurst::ResetWindow
==============
*/
void NetBurst::ResetWindow(NetBurst *this)
{
  *(_QWORD *)&this->m_stateStartTime = 0i64;
  *(_QWORD *)&this->m_windowMaximum = 0i64;
  *(_QWORD *)&this->m_currentMaximum = 0i64;
}

/*
==============
NetBurstAutoCorrelate::SampleCorrelogram
==============
*/
void NetBurstAutoCorrelate::SampleCorrelogram(NetBurstAutoCorrelate *this, const int startSample, const int endSample, float *outCorrelogram, int *outSize)
{
  __int64 v10; 
  int m_lastSample; 
  int v13; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v22; 
  __int64 v23; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v31; 
  bool i; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = outCorrelogram;
  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  v10 = startSample;
  _RBX = this;
  if ( !outCorrelogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 345, ASSERT_TYPE_ASSERT, "( outCorrelogram != nullptr )", (const char *)&queryFormat, "outCorrelogram != nullptr") )
    __debugbreak();
  if ( !outSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 346, ASSERT_TYPE_ASSERT, "( outSize != nullptr )", (const char *)&queryFormat, "outSize != nullptr") )
    __debugbreak();
  m_lastSample = _RBX->m_lastSample;
  v13 = v10;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm0, xmm0, xmm0
  }
  if ( (int)v10 <= m_lastSample )
  {
    if ( m_lastSample - (int)v10 + 1 >= 4 )
    {
      v16 = v10 + 2;
      v17 = ((unsigned int)(m_lastSample - v10 - 3) >> 2) + 1;
      v18 = v17;
      v13 = v10 + 4 * v17;
      do
      {
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rbx+rcx*4+30h]
          vaddss  xmm1, xmm0, dword ptr [rbx+rcx*4+30h]
          vaddss  xmm0, xmm1, dword ptr [rbx+rax*4+30h]
        }
        v16 += 4i64;
        __asm { vaddss  xmm0, xmm0, dword ptr [rbx+rcx*4+30h] }
        --v18;
      }
      while ( v18 );
    }
    if ( v13 <= m_lastSample )
    {
      v22 = v13;
      v23 = m_lastSample - v13 + 1;
      do
      {
        ++v22;
        __asm { vaddss  xmm0, xmm0, dword ptr [rbx+rax*4+30h] }
        --v23;
      }
      while ( v23 );
    }
  }
  __asm { vmulss  xmm6, xmm0, cs:__real@3b800000 }
  v25 = 0;
  v26 = (endSample - (int)v10 + 1) / 2;
  *outSize = v26;
  if ( v26 > 0 )
  {
    do
    {
      v27 = _RBX->m_lastSample;
      v28 = v10;
      __asm
      {
        vmovaps xmm4, xmm7
        vmovaps xmm5, xmm7
      }
      if ( (int)v10 > v27 )
        goto LABEL_23;
      if ( v27 - (int)v10 + 1 >= 4 )
      {
        v31 = v10 + 2;
        do
        {
          _RAX = (unsigned __int8)v28;
          v28 += 4;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rax*4+30h]
            vsubss  xmm3, xmm0, xmm6
          }
          _RCX = (unsigned __int8)(v25 + _RAX);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm3
          }
          _RCX = (unsigned __int8)(v31 - 1);
          __asm
          {
            vaddss  xmm4, xmm4, xmm2
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
            vsubss  xmm3, xmm0, xmm6
          }
          _RCX = (unsigned __int8)(_RCX + v25);
          _RAX = (unsigned __int8)v31;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm3
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [rbx+rax*4+30h]
            vsubss  xmm3, xmm0, xmm6
          }
          _RCX = (unsigned __int8)(v25 + v31);
          LOBYTE(_RAX) = v31 + 1;
          __asm { vaddss  xmm4, xmm4, xmm2 }
          v31 += 4;
          __asm { vmovss  xmm0, dword ptr [rbx+rcx*4+30h] }
          _RCX = (unsigned __int8)_RAX;
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm3
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
          }
          _RCX = (unsigned __int8)(_RAX + v25);
          __asm
          {
            vsubss  xmm3, xmm0, xmm6
            vaddss  xmm4, xmm4, xmm2
            vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm3
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm4, xmm4, xmm2
            vaddss  xmm5, xmm5, xmm0
          }
        }
        while ( v28 <= v27 - 3 );
      }
      for ( i = v28 == v27; v28 <= v27; i = v28 == v27 )
      {
        _RAX = (unsigned __int8)v28++;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rax*4+30h]
          vsubss  xmm3, xmm0, xmm6
        }
        _RCX = (unsigned __int8)(v25 + _RAX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx*4+30h]
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, xmm3
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm4, xmm4, xmm2
          vaddss  xmm5, xmm5, xmm0
        }
      }
      __asm { vucomiss xmm5, xmm7 }
      if ( i )
LABEL_23:
        __asm { vmovaps xmm0, xmm7 }
      else
        __asm { vdivss  xmm0, xmm4, xmm5 }
      __asm { vmovss  dword ptr [rsi], xmm0 }
      ++_RSI;
      ++v25;
    }
    while ( v25 < *outSize );
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
}

/*
==============
NetBurstAutoCorrelate::SampleMean
==============
*/
float NetBurstAutoCorrelate::SampleMean(NetBurstAutoCorrelate *this, const int startSample, const int endSample)
{
  int v4; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v12; 
  __int64 v13; 

  v4 = startSample;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( startSample <= endSample )
  {
    if ( endSample - startSample + 1 >= 4 )
    {
      v6 = startSample + 2i64;
      v7 = ((unsigned int)(endSample - v4 - 3) >> 2) + 1;
      v8 = v7;
      v4 += 4 * v7;
      do
      {
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [r9+rcx*4+30h]
          vaddss  xmm1, xmm0, dword ptr [r9+rcx*4+30h]
          vaddss  xmm0, xmm1, dword ptr [r9+rax*4+30h]
        }
        v6 += 4i64;
        __asm { vaddss  xmm0, xmm0, dword ptr [r9+rcx*4+30h] }
        --v8;
      }
      while ( v8 );
    }
    if ( v4 <= endSample )
    {
      v12 = v4;
      v13 = endSample - v4 + 1;
      do
      {
        ++v12;
        __asm { vaddss  xmm0, xmm0, dword ptr [r9+rax*4+30h] }
        --v13;
      }
      while ( v13 );
    }
  }
  __asm { vmulss  xmm0, xmm0, cs:__real@3b800000 }
  return *(float *)&_XMM0;
}

/*
==============
NetBurstAutoCorrelate::Update
==============
*/
char NetBurstAutoCorrelate::Update(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  int v5; 
  int m_lastSample; 
  int v9; 
  int burstDurationClamp; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int v15; 
  int m_currentMinimum; 
  int m_currentMaximum; 
  bool v18; 
  int systemMsec; 
  int v20; 
  int v21; 
  int v22; 
  int outSize; 
  float outPeriod[3]; 
  float outCorrelogram[128]; 

  _RBX = this;
  v5 = parms->systemMsec / this->m_sampleRateMsec;
  if ( v5 < this->m_lastSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 304, ASSERT_TYPE_ASSERT, "( sampleBucket ) >= ( m_lastSample )", "sampleBucket >= m_lastSample\n\t%i, %i", parms->systemMsec / this->m_sampleRateMsec, this->m_lastSample) )
    __debugbreak();
  I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  m_lastSample = _RBX->m_lastSample;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v9 = m_lastSample + 1;
  if ( v5 - 256 > m_lastSample + 1 )
    v9 = v5 - 256;
  burstDurationClamp = 0;
  if ( v9 < v5 )
  {
    v11 = v9;
    v12 = (unsigned int)(v5 - v9);
    do
    {
      v13 = (unsigned __int8)v11++;
      _RBX->m_samples[v13] = 0.0;
      --v12;
    }
    while ( v12 );
    m_lastSample = _RBX->m_lastSample;
  }
  _RDX = (unsigned __int8)v5;
  if ( v5 == m_lastSample )
    __asm { vaddss  xmm0, xmm0, dword ptr [rbx+rdx*4+30h] }
  __asm { vmovss  dword ptr [rbx+rdx*4+30h], xmm0 }
  _RBX->m_lastSample = v5;
  v15 = I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  NetBurst::UpdateTimers(_RBX, parms);
  m_currentMinimum = v15;
  m_currentMaximum = v15;
  if ( _RBX->m_currentMinimum < v15 )
    m_currentMinimum = _RBX->m_currentMinimum;
  v18 = _RBX->m_currentMaximum <= v15;
  _RBX->m_currentMinimum = m_currentMinimum;
  if ( !v18 )
    m_currentMaximum = _RBX->m_currentMaximum;
  _RBX->m_currentMaximum = m_currentMaximum;
  systemMsec = parms->systemMsec;
  if ( parms->systemMsec - _RBX->m_windowStartTime <= _RBX->m_windowDuration )
    return 0;
  _RBX->m_windowMinimum = m_currentMinimum;
  _RBX->m_windowStartTime = systemMsec;
  v20 = 256;
  _RBX->m_windowMaximum = m_currentMaximum;
  v21 = _RBX->m_lastSample;
  _RBX->m_currentMaximum = v15;
  _RBX->m_currentMinimum = v15;
  v22 = 0;
  if ( parms->burstDurationClamp / _RBX->m_sampleRateMsec < 256 )
    v20 = parms->burstDurationClamp / _RBX->m_sampleRateMsec;
  if ( v21 - v20 >= 0 )
    v22 = v21 - v20 + 1;
  NetBurstAutoCorrelate::SampleCorrelogram(_RBX, v22, v21, outCorrelogram, &outSize);
  if ( NetBurstAutoCorrelate::CorrelogramPeriod(_RBX, outCorrelogram, outSize, outPeriod) )
  {
    __asm { vcvttss2si eax, [rsp+278h+outPeriod] }
    burstDurationClamp = parms->burstDurationClamp;
    if ( _EAX < burstDurationClamp )
      burstDurationClamp = _EAX;
  }
  _RBX->m_windowDuration = burstDurationClamp;
  return 1;
}

/*
==============
NetBurstDynamicWindow::Update
==============
*/
bool NetBurstDynamicWindow::Update(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  int currBuffer; 
  __int64 v5; 
  NetBurst::BufferState m_state; 
  __int64 v7; 
  int v8; 
  int m_windowDuration; 
  int v10; 
  int v11; 
  bool result; 
  int v13; 
  int outWindow; 

  currBuffer = params->currBuffer;
  if ( currBuffer <= params->startSurplus )
  {
    m_state = this->m_state;
    if ( currBuffer >= params->startDeficit )
    {
      if ( m_state == BUFF_STATE_IDEAL )
      {
        v8 = params->systemMsec - this->m_stateStartTime;
        if ( !NetBurstDynamicWindow::CalcWindow(this, params, &outWindow) || v8 >= outWindow )
        {
          *(_DWORD *)this->m_zeroCrossState = 0;
          *(_WORD *)&this->m_zeroCrossState[4] = 0;
          *(_QWORD *)this->m_zeroCrossTime = 0i64;
          *(_QWORD *)&this->m_zeroCrossTime[2] = 0i64;
          *(_QWORD *)&this->m_zeroCrossTime[4] = 0i64;
        }
      }
    }
    else if ( m_state != BUFF_STATE_DEFICIT )
    {
      v7 = this->m_zeroCrossBuff % 6u;
      this->m_zeroCrossTime[v7] = params->systemMsec;
      this->m_zeroCrossState[v7] = BUFF_STATE_DEFICIT;
      ++this->m_zeroCrossBuff;
    }
  }
  else if ( this->m_state != BUFF_STATE_SURPLUS )
  {
    v5 = this->m_zeroCrossBuff % 6u;
    this->m_zeroCrossTime[v5] = params->systemMsec;
    this->m_zeroCrossState[v5] = BUFF_STATE_SURPLUS;
    ++this->m_zeroCrossBuff;
  }
  if ( !NetBurstFixedWindow::Update(this, params) )
    return 0;
  if ( !NetBurstDynamicWindow::CalcWindow(this, params, &outWindow) )
    return 1;
  m_windowDuration = this->m_windowDuration;
  v10 = outWindow;
  if ( outWindow <= m_windowDuration )
  {
    if ( outWindow < m_windowDuration )
    {
      v13 = m_windowDuration - params->burstDurationIncrement;
      if ( v13 > outWindow )
        v10 = v13;
      this->m_windowDuration = v10;
    }
    return 1;
  }
  v11 = params->burstDurationIncrement + m_windowDuration;
  result = 1;
  if ( v11 < outWindow )
    v10 = v11;
  this->m_windowDuration = v10;
  return result;
}

/*
==============
NetBurstFixedWindow::Update
==============
*/
bool NetBurstFixedWindow::Update(NetBurstFixedWindow *this, const NetBurst::UpdateParams *params)
{
  int v4; 
  int m_currentMinimum; 
  int m_currentMaximum; 
  bool v7; 
  bool result; 

  v4 = I_clamp(params->currBuffer, -params->maxBuffer, params->maxBuffer);
  NetBurst::UpdateTimers(this, params);
  m_currentMinimum = v4;
  m_currentMaximum = v4;
  if ( this->m_currentMinimum < v4 )
    m_currentMinimum = this->m_currentMinimum;
  v7 = this->m_currentMaximum <= v4;
  this->m_currentMinimum = m_currentMinimum;
  if ( !v7 )
    m_currentMaximum = this->m_currentMaximum;
  this->m_currentMaximum = m_currentMaximum;
  if ( params->systemMsec - this->m_windowStartTime <= this->m_windowDuration )
    return 0;
  this->m_windowStartTime = params->systemMsec;
  result = 1;
  this->m_windowMaximum = m_currentMaximum;
  this->m_windowMinimum = m_currentMinimum;
  this->m_currentMaximum = v4;
  this->m_currentMinimum = v4;
  return result;
}

/*
==============
NetBurst::UpdateTimers
==============
*/
void NetBurst::UpdateTimers(NetBurst *this, const NetBurst::UpdateParams *params)
{
  int currBuffer; 
  int systemMsec; 
  NetBurst::BufferState m_state; 
  __int64 v7; 
  int startSurplus; 
  __int64 v9; 

  if ( params->startSurplus < 0 )
  {
    startSurplus = params->startSurplus;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 39, ASSERT_TYPE_ASSERT, "( params.startSurplus ) >= ( 0 )", "%s >= %s\n\t%i, %i", "params.startSurplus", "0", startSurplus, 0i64) )
      __debugbreak();
  }
  if ( params->maxBuffer < params->startSurplus )
  {
    LODWORD(v9) = params->startSurplus;
    LODWORD(v7) = params->maxBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 40, ASSERT_TYPE_ASSERT, "( params.maxBuffer ) >= ( params.startSurplus )", "%s >= %s\n\t%i, %i", "params.maxBuffer", "params.startSurplus", v7, v9) )
      __debugbreak();
  }
  if ( params->startDeficit > 0 )
  {
    LODWORD(v7) = params->startDeficit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 42, ASSERT_TYPE_ASSERT, "( params.startDeficit ) <= ( 0 )", "%s <= %s\n\t%i, %i", "params.startDeficit", "0", v7, 0i64) )
      __debugbreak();
  }
  if ( -params->maxBuffer > params->startDeficit )
  {
    LODWORD(v9) = params->startDeficit;
    LODWORD(v7) = -params->maxBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 43, ASSERT_TYPE_ASSERT, "( -params.maxBuffer ) <= ( params.startDeficit )", "%s <= %s\n\t%i, %i", "-params.maxBuffer", "params.startDeficit", v7, v9) )
      __debugbreak();
  }
  if ( params->burstDurationClamp < params->burstDurationIncrement )
  {
    LODWORD(v9) = params->burstDurationIncrement;
    LODWORD(v7) = params->burstDurationClamp;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 45, ASSERT_TYPE_ASSERT, "( params.burstDurationClamp ) >= ( params.burstDurationIncrement )", "%s >= %s\n\t%i, %i", "params.burstDurationClamp", "params.burstDurationIncrement", v7, v9) )
      __debugbreak();
  }
  currBuffer = params->currBuffer;
  if ( currBuffer <= params->startSurplus )
  {
    m_state = this->m_state;
    if ( currBuffer >= params->startDeficit )
    {
      if ( m_state == BUFF_STATE_IDEAL )
        return;
      systemMsec = params->systemMsec;
      this->m_state = BUFF_STATE_IDEAL;
    }
    else
    {
      if ( m_state == BUFF_STATE_DEFICIT )
        return;
      systemMsec = params->systemMsec;
      this->m_state = BUFF_STATE_DEFICIT;
    }
  }
  else
  {
    if ( this->m_state == BUFF_STATE_SURPLUS )
      return;
    systemMsec = params->systemMsec;
    this->m_state = BUFF_STATE_SURPLUS;
  }
  this->m_stateStartTime = systemMsec;
}

/*
==============
NetBurstAutoCorrelate::UpdateWindow
==============
*/
void NetBurstAutoCorrelate::UpdateWindow(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  int m_lastSample; 
  int v5; 
  int v6; 
  int v7; 
  int burstDurationClamp; 
  int size; 
  float outPeriod[3]; 
  float outCorrelogram[128]; 

  m_lastSample = this->m_lastSample;
  v5 = parms->burstDurationClamp / this->m_sampleRateMsec;
  v6 = 256;
  v7 = 0;
  if ( v5 < 256 )
    v6 = v5;
  if ( m_lastSample - v6 >= 0 )
    v7 = m_lastSample - v6 + 1;
  NetBurstAutoCorrelate::SampleCorrelogram(this, v7, m_lastSample, outCorrelogram, &size);
  if ( NetBurstAutoCorrelate::CorrelogramPeriod(this, outCorrelogram, size, outPeriod) )
  {
    __asm { vcvttss2si eax, [rsp+258h+outPeriod] }
    burstDurationClamp = parms->burstDurationClamp;
    if ( _EAX < burstDurationClamp )
      burstDurationClamp = _EAX;
    this->m_windowDuration = burstDurationClamp;
  }
  else
  {
    this->m_windowDuration = 0;
  }
}

/*
==============
NetBurstDynamicWindow::UpdateWindow
==============
*/
void NetBurstDynamicWindow::UpdateWindow(NetBurstDynamicWindow *this, const NetBurst::UpdateParams *params)
{
  int m_windowDuration; 
  int v5; 
  int v6; 
  int outWindow; 

  if ( NetBurstDynamicWindow::CalcWindow(this, params, &outWindow) )
  {
    m_windowDuration = this->m_windowDuration;
    v5 = outWindow;
    if ( outWindow <= m_windowDuration )
    {
      if ( outWindow < m_windowDuration )
      {
        v6 = m_windowDuration - params->burstDurationIncrement;
        if ( v6 > outWindow )
          v5 = v6;
        this->m_windowDuration = v5;
      }
    }
    else
    {
      if ( m_windowDuration + params->burstDurationIncrement < outWindow )
        v5 = m_windowDuration + params->burstDurationIncrement;
      this->m_windowDuration = v5;
    }
  }
}

