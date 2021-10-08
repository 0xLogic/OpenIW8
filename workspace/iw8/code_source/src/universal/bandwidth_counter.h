/*
==============
BandwidthCounter<60>::Init
==============
*/

void __fastcall BandwidthCounter<60>::Init(BandwidthCounter<60> *this, int binCount)
{
  ?Init@?$BandwidthCounter@$0DM@@@QEAAXH@Z(this, binCount);
}

/*
==============
BandwidthCounter<60>::GetTotalUsage
==============
*/

unsigned int __fastcall BandwidthCounter<60>::GetTotalUsage(BandwidthCounter<60> *this)
{
  return ?GetTotalUsage@?$BandwidthCounter@$0DM@@@QEBAIXZ(this);
}

/*
==============
BandwidthCounter<60>::Accumulate
==============
*/

void __fastcall BandwidthCounter<60>::Accumulate(BandwidthCounter<60> *this, const unsigned int size)
{
  ?Accumulate@?$BandwidthCounter@$0DM@@@QEAAXI@Z(this, size);
}

/*
==============
BandwidthCounter<60>::Frame
==============
*/

void __fastcall BandwidthCounter<60>::Frame(BandwidthCounter<60> *this, int timeMillis)
{
  ?Frame@?$BandwidthCounter@$0DM@@@QEAAXH@Z(this, timeMillis);
}

/*
==============
BandwidthCounter<60>::Accumulate
==============
*/
void BandwidthCounter<60>::Accumulate(BandwidthCounter<60> *this, const unsigned int size)
{
  this->m_bins[this->m_binIndex].value += size;
}

/*
==============
BandwidthCounter<60>::Frame
==============
*/
void BandwidthCounter<60>::Frame(BandwidthCounter<60> *this, int timeMillis)
{
  int v3; 

  v3 = (this->m_binIndex + 1) % this->m_binCount;
  this->m_bins[v3] = (BandwidthCounter<60>::Bin)(unsigned int)timeMillis;
  this->m_binIndex = v3;
}

/*
==============
BandwidthCounter<60>::GetTotalUsage
==============
*/
__int64 BandwidthCounter<60>::GetTotalUsage(BandwidthCounter<60> *this)
{
  unsigned int v2; 
  int v3; 
  int m_binCount; 
  int v5; 
  int v6; 
  __int64 v7; 

  v2 = 0;
  v3 = Sys_Milliseconds();
  m_binCount = this->m_binCount;
  v5 = 0;
  if ( m_binCount > 0 )
  {
    v6 = m_binCount + this->m_binIndex;
    do
    {
      v7 = v6 % m_binCount;
      if ( this->m_bins[v7].timestamp < v3 - 1000 )
        break;
      v2 += this->m_bins[v7].value;
      ++v5;
      --v6;
    }
    while ( v5 < m_binCount );
  }
  return v2;
}

/*
==============
BandwidthCounter<60>::Init
==============
*/
void BandwidthCounter<60>::Init(BandwidthCounter<60> *this, int binCount)
{
  this->m_binIndex = 0;
  if ( binCount > 60 )
    binCount = 60;
  this->m_binCount = binCount;
  memset_0(this->m_bins, 0, sizeof(this->m_bins));
}

