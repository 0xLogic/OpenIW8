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
  int v4; 
  int v5; 
  int m_lastSample; 
  float v7; 
  float v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = parms->systemMsec / this->m_sampleRateMsec;
  if ( v4 < this->m_lastSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 304, ASSERT_TYPE_ASSERT, "( sampleBucket ) >= ( m_lastSample )", "sampleBucket >= m_lastSample\n\t%i, %i", parms->systemMsec / this->m_sampleRateMsec, this->m_lastSample) )
    __debugbreak();
  v5 = I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  m_lastSample = this->m_lastSample;
  v8 = (float)v5;
  v7 = v8;
  v9 = m_lastSample + 1;
  if ( v4 - 256 > m_lastSample + 1 )
    v9 = v4 - 256;
  if ( v9 < v4 )
  {
    v10 = v9;
    v11 = (unsigned int)(v4 - v9);
    do
    {
      v12 = (unsigned __int8)v10++;
      this->m_samples[v12] = 0.0;
      --v11;
    }
    while ( v11 );
    m_lastSample = this->m_lastSample;
  }
  if ( v4 == m_lastSample )
    v7 = v8 + this->m_samples[(unsigned __int8)v4];
  this->m_samples[(unsigned __int8)v4] = v7;
  this->m_lastSample = v4;
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
  int v4; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  __int128 v13; 
  const float *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float *v19; 
  float v20; 
  unsigned int v22; 
  unsigned int v23; 
  float v24; 
  __int128 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v31[2]; 

  v4 = size;
  if ( !correlogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 381, ASSERT_TYPE_ASSERT, "( correlogram != nullptr )", (const char *)&queryFormat, "correlogram != nullptr") )
    __debugbreak();
  if ( !outPeriod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 382, ASSERT_TYPE_ASSERT, "( outPeriod != nullptr )", (const char *)&queryFormat, "outPeriod != nullptr") )
    __debugbreak();
  LODWORD(v8) = 0;
  v9 = v4 - 1;
  v28 = 0;
  v10 = 1;
  v31[0] = 0i64;
  v31[1] = 0i64;
  v11 = 0x7FFFFFFF;
  v12 = 0;
  v13 = 0i64;
  if ( v4 - 1 <= 1 )
    goto LABEL_56;
  if ( v9 > 4 )
  {
    v14 = correlogram + 2;
    do
    {
      v15 = *(v14 - 1);
      if ( v15 >= 0.25 && v15 > *(v14 - 2) && v15 > *v14 )
      {
        *((_DWORD *)v31 + ((__int64)v10 >> 5)) |= 0x80000000 >> (v10 & 0x1F);
        ++v12;
      }
      v16 = *v14;
      if ( *v14 >= 0.25 && v15 < v16 && v16 > v14[1] )
      {
        *((_DWORD *)v31 + ((v10 + 1i64) >> 5)) |= 0x80000000 >> ((v10 + 1) & 0x1F);
        ++v12;
      }
      v17 = v14[1];
      if ( v17 >= 0.25 && v16 < v17 && v17 > v14[2] )
      {
        *((_DWORD *)v31 + ((v10 + 2i64) >> 5)) |= 0x80000000 >> ((v10 + 2) & 0x1F);
        ++v12;
      }
      v18 = v14[2];
      if ( v18 >= 0.25 && v17 < v18 && v18 > v14[3] )
      {
        *((_DWORD *)v31 + ((v10 + 3i64) >> 5)) |= 0x80000000 >> ((v10 + 3) & 0x1F);
        ++v12;
      }
      v14 += 4;
      v10 += 4;
    }
    while ( v10 < v4 - 4 );
    v4 = size;
    v28 = v12;
  }
  if ( v10 < v9 )
  {
    v19 = (float *)&correlogram[v10 + 1];
    do
    {
      v20 = *(v19 - 1);
      if ( v20 >= 0.25 && v20 > *(v19 - 2) && v20 > *v19 )
      {
        *((_DWORD *)v31 + ((__int64)v10 >> 5)) |= 0x80000000 >> (v10 & 0x1F);
        ++v12;
      }
      ++v19;
      ++v10;
    }
    while ( v10 < v9 );
    v28 = v12;
  }
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      *outPeriod = (float)this->m_sampleRateMsec * (float)v4;
      return 1;
    }
    else
    {
      v22 = v31[0];
      while ( v22 )
      {
LABEL_43:
        v23 = __lzcnt(v22);
        if ( v23 >= 0x20 )
        {
          LODWORD(v27) = 32;
          LODWORD(v26) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( (v22 & (0x80000000 >> v23)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v22 &= ~(0x80000000 >> v23);
        if ( v11 < size )
        {
          v24 = (float)(this->m_sampleRateMsec * (v23 + 32 * v8 - v11));
          v25 = v13;
          *(float *)&v25 = *(float *)&v13 + v24;
          v13 = v25;
        }
        v11 = v23 + 32 * v8;
      }
      while ( 1 )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= 4 )
          break;
        v22 = *((_DWORD *)v31 + v8);
        if ( v22 )
          goto LABEL_43;
      }
      if ( v28 <= 1 )
      {
        LODWORD(v27) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 431, ASSERT_TYPE_ASSERT, "( ( peakCount > 1 ) )", "%s\n\t( peakCount ) = %i", "( peakCount > 1 )", v27) )
          __debugbreak();
      }
      *outPeriod = *(float *)&v13 / (float)(v28 - 1);
      return 1;
    }
  }
  else
  {
LABEL_56:
    *outPeriod = 0.0;
    return 0;
  }
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
  float *v5; 
  __int64 v7; 
  int m_lastSample; 
  int v10; 
  __int128 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  __int128 v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int128 v20; 
  float v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  __int128 v26; 
  __int128 v27; 
  int v28; 
  __int64 v29; 
  float v30; 
  __int64 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v38; 
  __int64 v39; 
  __int128 v40; 
  __int128 v41; 
  float v42; 
  __int128 v43; 
  __int128 v44; 
  float v45; 
  __int128 v46; 
  __int128 v47; 
  __int64 v48; 
  float v49; 
  __int128 v50; 
  __int128 v51; 
  float v52; 

  v5 = outCorrelogram;
  v7 = startSample;
  if ( !outCorrelogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 345, ASSERT_TYPE_ASSERT, "( outCorrelogram != nullptr )", (const char *)&queryFormat, "outCorrelogram != nullptr") )
    __debugbreak();
  if ( !outSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 346, ASSERT_TYPE_ASSERT, "( outSize != nullptr )", (const char *)&queryFormat, "outSize != nullptr") )
    __debugbreak();
  m_lastSample = this->m_lastSample;
  v10 = v7;
  v11 = 0i64;
  if ( (int)v7 <= m_lastSample )
  {
    if ( m_lastSample - (int)v7 + 1 >= 4 )
    {
      v12 = v7 + 2;
      v13 = ((unsigned int)(m_lastSample - v7 - 3) >> 2) + 1;
      v14 = v13;
      v10 = v7 + 4 * v13;
      do
      {
        v15 = v11;
        *(float *)&v15 = (float)((float)(*(float *)&v11 + this->m_samples[(unsigned __int8)(v12 - 2)]) + this->m_samples[(unsigned __int8)(v12 - 1)]) + this->m_samples[(unsigned __int8)v12];
        v16 = v12 + 1;
        v12 += 4i64;
        *(float *)&v15 = *(float *)&v15 + this->m_samples[v16];
        v11 = v15;
        --v14;
      }
      while ( v14 );
    }
    if ( v10 <= m_lastSample )
    {
      v17 = v10;
      v18 = m_lastSample - v10 + 1;
      do
      {
        v19 = (unsigned __int8)v17++;
        v20 = v11;
        *(float *)&v20 = *(float *)&v11 + this->m_samples[v19];
        v11 = v20;
        --v18;
      }
      while ( v18 );
    }
  }
  v21 = *(float *)&v11 * 0.00390625;
  v22 = 0;
  v23 = (endSample - (int)v7 + 1) / 2;
  *outSize = v23;
  if ( v23 > 0 )
  {
    do
    {
      v24 = this->m_lastSample;
      v25 = v7;
      v26 = 0i64;
      v27 = 0i64;
      if ( (int)v7 > v24 )
        goto LABEL_23;
      if ( v24 - (int)v7 + 1 >= 4 )
      {
        v28 = v7 + 2;
        do
        {
          v29 = (unsigned __int8)v25;
          v25 += 4;
          v30 = this->m_samples[v29] - v21;
          v31 = (unsigned __int8)(v28 - 1);
          v33 = v26;
          *(float *)&v33 = *(float *)&v26 + (float)((float)(this->m_samples[(unsigned __int8)(v22 + v29)] - v21) * v30);
          v32 = v33;
          v34 = v27;
          *(float *)&v34 = *(float *)&v27 + (float)(v30 * v30);
          v35 = this->m_samples[v31] - v21;
          v36 = (float)(this->m_samples[(unsigned __int8)(v31 + v22)] - v21) * v35;
          *(float *)&v34 = *(float *)&v34 + (float)(v35 * v35);
          v37 = v34;
          v38 = this->m_samples[(unsigned __int8)v28] - v21;
          v39 = (unsigned __int8)(v22 + v28);
          LOBYTE(v29) = v28 + 1;
          v41 = v32;
          *(float *)&v41 = *(float *)&v32 + v36;
          v40 = v41;
          v28 += 4;
          v42 = (float)(this->m_samples[v39] - v21) * v38;
          v44 = v37;
          *(float *)&v44 = *(float *)&v37 + (float)(v38 * v38);
          v43 = v44;
          v45 = this->m_samples[(unsigned __int8)v29] - v21;
          v46 = v40;
          *(float *)&v46 = (float)(*(float *)&v40 + v42) + (float)((float)(this->m_samples[(unsigned __int8)(v29 + v22)] - v21) * v45);
          v26 = v46;
          v47 = v43;
          *(float *)&v47 = *(float *)&v43 + (float)(v45 * v45);
          v27 = v47;
        }
        while ( v25 <= v24 - 3 );
      }
      for ( ; v25 <= v24; v27 = v51 )
      {
        v48 = (unsigned __int8)v25++;
        v49 = this->m_samples[v48] - v21;
        v50 = v26;
        *(float *)&v50 = *(float *)&v26 + (float)((float)(this->m_samples[(unsigned __int8)(v22 + v48)] - v21) * v49);
        v26 = v50;
        v51 = v27;
        *(float *)&v51 = *(float *)&v27 + (float)(v49 * v49);
      }
      if ( *(float *)&v27 == 0.0 )
LABEL_23:
        v52 = 0.0;
      else
        v52 = *(float *)&v26 / *(float *)&v27;
      *v5++ = v52;
      ++v22;
    }
    while ( v22 < *outSize );
  }
}

/*
==============
NetBurstAutoCorrelate::SampleMean
==============
*/
float NetBurstAutoCorrelate::SampleMean(NetBurstAutoCorrelate *this, const int startSample, const int endSample)
{
  int v3; 
  __int128 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int128 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int128 v14; 

  v3 = startSample;
  v5 = 0i64;
  if ( startSample <= endSample )
  {
    if ( endSample - startSample + 1 >= 4 )
    {
      v6 = startSample + 2i64;
      v7 = ((unsigned int)(endSample - v3 - 3) >> 2) + 1;
      v8 = v7;
      v3 += 4 * v7;
      do
      {
        v9 = v5;
        *(float *)&v9 = (float)((float)(*(float *)&v5 + this->m_samples[(unsigned __int8)(v6 - 2)]) + this->m_samples[(unsigned __int8)(v6 - 1)]) + this->m_samples[(unsigned __int8)v6];
        v10 = v6 + 1;
        v6 += 4i64;
        *(float *)&v9 = *(float *)&v9 + this->m_samples[v10];
        v5 = v9;
        --v8;
      }
      while ( v8 );
    }
    if ( v3 <= endSample )
    {
      v11 = v3;
      v12 = endSample - v3 + 1;
      do
      {
        v13 = (unsigned __int8)v11++;
        v14 = v5;
        *(float *)&v14 = *(float *)&v5 + this->m_samples[v13];
        v5 = v14;
        --v12;
      }
      while ( v12 );
    }
  }
  return *(float *)&v5 * 0.00390625;
}

/*
==============
NetBurstAutoCorrelate::Update
==============
*/
char NetBurstAutoCorrelate::Update(NetBurstAutoCorrelate *this, const NetBurst::UpdateParams *parms)
{
  int v4; 
  int v5; 
  int m_lastSample; 
  float v7; 
  float v8; 
  int v9; 
  int burstDurationClamp; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  int m_currentMinimum; 
  int m_currentMaximum; 
  bool v17; 
  int systemMsec; 
  int v19; 
  int v20; 
  int v21; 
  int outSize; 
  float outPeriod[3]; 
  float outCorrelogram[128]; 

  v4 = parms->systemMsec / this->m_sampleRateMsec;
  if ( v4 < this->m_lastSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.cpp", 304, ASSERT_TYPE_ASSERT, "( sampleBucket ) >= ( m_lastSample )", "sampleBucket >= m_lastSample\n\t%i, %i", parms->systemMsec / this->m_sampleRateMsec, this->m_lastSample) )
    __debugbreak();
  v5 = I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  m_lastSample = this->m_lastSample;
  v8 = (float)v5;
  v7 = v8;
  v9 = m_lastSample + 1;
  if ( v4 - 256 > m_lastSample + 1 )
    v9 = v4 - 256;
  burstDurationClamp = 0;
  if ( v9 < v4 )
  {
    v11 = v9;
    v12 = (unsigned int)(v4 - v9);
    do
    {
      v13 = (unsigned __int8)v11++;
      this->m_samples[v13] = 0.0;
      --v12;
    }
    while ( v12 );
    m_lastSample = this->m_lastSample;
  }
  if ( v4 == m_lastSample )
    v7 = v8 + this->m_samples[(unsigned __int8)v4];
  this->m_samples[(unsigned __int8)v4] = v7;
  this->m_lastSample = v4;
  v14 = I_clamp(parms->currBuffer, -parms->maxBuffer, parms->maxBuffer);
  NetBurst::UpdateTimers(this, parms);
  m_currentMinimum = v14;
  m_currentMaximum = v14;
  if ( this->m_currentMinimum < v14 )
    m_currentMinimum = this->m_currentMinimum;
  v17 = this->m_currentMaximum <= v14;
  this->m_currentMinimum = m_currentMinimum;
  if ( !v17 )
    m_currentMaximum = this->m_currentMaximum;
  this->m_currentMaximum = m_currentMaximum;
  systemMsec = parms->systemMsec;
  if ( parms->systemMsec - this->m_windowStartTime <= this->m_windowDuration )
    return 0;
  this->m_windowMinimum = m_currentMinimum;
  this->m_windowStartTime = systemMsec;
  v19 = 256;
  this->m_windowMaximum = m_currentMaximum;
  v20 = this->m_lastSample;
  this->m_currentMaximum = v14;
  this->m_currentMinimum = v14;
  v21 = 0;
  if ( parms->burstDurationClamp / this->m_sampleRateMsec < 256 )
    v19 = parms->burstDurationClamp / this->m_sampleRateMsec;
  if ( v20 - v19 >= 0 )
    v21 = v20 - v19 + 1;
  NetBurstAutoCorrelate::SampleCorrelogram(this, v21, v20, outCorrelogram, &outSize);
  if ( NetBurstAutoCorrelate::CorrelogramPeriod(this, outCorrelogram, outSize, outPeriod) )
  {
    burstDurationClamp = parms->burstDurationClamp;
    if ( (int)outPeriod[0] < burstDurationClamp )
      burstDurationClamp = (int)outPeriod[0];
  }
  this->m_windowDuration = burstDurationClamp;
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
    burstDurationClamp = parms->burstDurationClamp;
    if ( (int)outPeriod[0] < burstDurationClamp )
      burstDurationClamp = (int)outPeriod[0];
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

