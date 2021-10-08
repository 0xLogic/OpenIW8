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
  char v4; 
  int v8; 
  unsigned int m_capacity; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_lastUpdateTime, HiResTimeStamp);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcomiss xmm1, cs:__real@477de800
  }
  if ( !v4 )
    goto LABEL_4;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v4 )
LABEL_4:
    LODWORD(_RDX) = 0;
  else
    __asm { vcvttss2si rdx, xmm1 }
  v8 = this->m_tokensPerMs * _RDX;
  this->m_lastUpdateTime = HiResTimeStamp;
  m_capacity = this->m_tokens + v8;
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
  unsigned int v5; 
  unsigned __int64 HiResTimeStamp; 
  char v8; 
  int v12; 
  unsigned int m_capacity; 

  v5 = bucketSize;
  bdHandleAssert(this->m_minFragment <= bucketSize, "m_minFragment <= bucketSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdtokenbucket.cpp", "bdTokenBucket::setRates", 0x67u, "Bucket size must be bigger than minFragmentTokens");
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_lastUpdateTime, HiResTimeStamp);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcomiss xmm1, cs:__real@477de800
  }
  if ( !v8 )
    goto LABEL_4;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v8 )
LABEL_4:
    LODWORD(_RDX) = 0;
  else
    __asm { vcvttss2si rdx, xmm1 }
  v12 = this->m_tokensPerMs * _RDX;
  this->m_lastUpdateTime = HiResTimeStamp;
  this->m_tokensPerMs = tokensPerMs;
  m_capacity = this->m_tokens + v12;
  if ( m_capacity >= this->m_capacity )
    m_capacity = this->m_capacity;
  this->m_capacity = v5;
  if ( m_capacity < v5 )
    v5 = m_capacity;
  this->m_tokens = v5;
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

