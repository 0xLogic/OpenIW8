/*
==============
bdTokenBucket::setMinFragment
==============
*/

void __fastcall bdTokenBucket::setMinFragment(bdTokenBucket *this, unsigned int minFragmentTokens)
{
  ?setMinFragment@bdTokenBucket@@QEAAXI@Z(this, minFragmentTokens);
}

/*
==============
bdTokenBucket::removeTokens
==============
*/

void __fastcall bdTokenBucket::removeTokens(bdTokenBucket *this, unsigned int numTokens)
{
  ?removeTokens@bdTokenBucket@@QEAAXI@Z(this, numTokens);
}

/*
==============
bdTokenBucket::setTokensRestricted
==============
*/

void __fastcall bdTokenBucket::setTokensRestricted(bdTokenBucket *this, bool isRestricted)
{
  ?setTokensRestricted@bdTokenBucket@@QEAAX_N@Z(this, isRestricted);
}

/*
==============
bdTokenBucket::setRates
==============
*/

void __fastcall bdTokenBucket::setRates(bdTokenBucket *this, unsigned int tokensPerMs, unsigned int bucketSize)
{
  ?setRates@bdTokenBucket@@QEAAXII@Z(this, tokensPerMs, bucketSize);
}

/*
==============
bdTokenBucket::fillBucket
==============
*/

void __fastcall bdTokenBucket::fillBucket(bdTokenBucket *this)
{
  ?fillBucket@bdTokenBucket@@QEAAXXZ(this);
}

/*
==============
bdTokenBucket::getAvailTokens
==============
*/

unsigned int __fastcall bdTokenBucket::getAvailTokens(bdTokenBucket *this, unsigned int maxTokens)
{
  return ?getAvailTokens@bdTokenBucket@@QEBAII@Z(this, maxTokens);
}

/*
==============
bdTokenBucket::bdTokenBucket
==============
*/

void __fastcall bdTokenBucket::bdTokenBucket(bdTokenBucket *this, unsigned int minFragmentTokens)
{
  ??0bdTokenBucket@@QEAA@I@Z(this, minFragmentTokens);
}

/*
==============
bdTokenBucket::bdTokenBucket
==============
*/
void bdTokenBucket::bdTokenBucket(bdTokenBucket *this, unsigned int minFragmentTokens)
{
  this->m_minFragment = minFragmentTokens;
  *(_QWORD *)&this->m_tokensPerMs = 0i64;
  this->m_tokens = 0;
  this->m_lastUpdateTime = 0i64;
  this->m_isInfinite = 1;
}

/*
==============
bdTokenBucket::fillBucket
==============
*/
void bdTokenBucket::fillBucket(bdTokenBucket *this)
{
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  float v4; 
  int v5; 
  unsigned int v6; 
  unsigned int m_capacity; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_lastUpdateTime, HiResTimeStamp);
  v4 = *(float *)&ElapsedTime * 1000.0;
  if ( (float)(*(float *)&ElapsedTime * 1000.0) >= 65000.0 || v4 < 0.0 )
    v5 = 0;
  else
    v5 = (int)v4;
  v6 = this->m_tokensPerMs * v5;
  this->m_lastUpdateTime = HiResTimeStamp;
  m_capacity = this->m_tokens + v6;
  if ( m_capacity >= this->m_capacity )
    m_capacity = this->m_capacity;
  this->m_tokens = m_capacity;
}

/*
==============
bdTokenBucket::getAvailTokens
==============
*/
__int64 bdTokenBucket::getAvailTokens(bdTokenBucket *this, unsigned int maxTokens)
{
  unsigned int m_tokens; 
  __int64 result; 

  if ( this->m_isInfinite )
    return maxTokens;
  m_tokens = this->m_tokens;
  if ( maxTokens <= m_tokens )
    return maxTokens;
  result = 0i64;
  if ( m_tokens >= this->m_minFragment )
    return m_tokens;
  return result;
}

/*
==============
bdTokenBucket::removeTokens
==============
*/
void bdTokenBucket::removeTokens(bdTokenBucket *this, unsigned int numTokens)
{
  unsigned int v2; 

  v2 = 0;
  if ( numTokens <= this->m_tokens )
    v2 = this->m_tokens - numTokens;
  this->m_tokens = v2;
}

/*
==============
bdTokenBucket::setMinFragment
==============
*/
void bdTokenBucket::setMinFragment(bdTokenBucket *this, unsigned int minFragmentTokens)
{
  bdHandleAssert(minFragmentTokens <= this->m_capacity, "minFragmentTokens <= m_capacity", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdtokenbucket.cpp", "bdTokenBucket::setMinFragment", 0x75u, "MinFragmentTokens must be smaller than bucket size.");
  this->m_minFragment = minFragmentTokens;
}

/*
==============
bdTokenBucket::setRates
==============
*/
void bdTokenBucket::setRates(bdTokenBucket *this, unsigned int tokensPerMs, unsigned int bucketSize)
{
  unsigned int v4; 
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  float v8; 
  int v9; 
  unsigned int v10; 
  unsigned int m_capacity; 

  v4 = bucketSize;
  bdHandleAssert(this->m_minFragment <= bucketSize, "m_minFragment <= bucketSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdtokenbucket.cpp", "bdTokenBucket::setRates", 0x67u, "Bucket size must be bigger than minFragmentTokens");
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_lastUpdateTime, HiResTimeStamp);
  v8 = *(float *)&ElapsedTime * 1000.0;
  if ( (float)(*(float *)&ElapsedTime * 1000.0) >= 65000.0 || v8 < 0.0 )
    v9 = 0;
  else
    v9 = (int)v8;
  v10 = this->m_tokensPerMs * v9;
  this->m_lastUpdateTime = HiResTimeStamp;
  this->m_tokensPerMs = tokensPerMs;
  m_capacity = this->m_tokens + v10;
  if ( m_capacity >= this->m_capacity )
    m_capacity = this->m_capacity;
  this->m_capacity = v4;
  if ( m_capacity < v4 )
    v4 = m_capacity;
  this->m_tokens = v4;
}

/*
==============
bdTokenBucket::setTokensRestricted
==============
*/
void bdTokenBucket::setTokensRestricted(bdTokenBucket *this, bool isRestricted)
{
  this->m_isInfinite = !isRestricted;
}

