/*
==============
bdRandom::bdRandom
==============
*/

void __fastcall bdRandom::bdRandom(bdRandom *this, const unsigned int seed)
{
  ??0bdRandom@@QEAA@I@Z(this, seed);
}

/*
==============
bdRandom::~bdRandom
==============
*/

void __fastcall bdRandom::~bdRandom(bdRandom *this)
{
  ??1bdRandom@@QEAA@XZ(this);
}

/*
==============
bdRandom::nextUInt
==============
*/

unsigned int __fastcall bdRandom::nextUInt(bdRandom *this)
{
  return ?nextUInt@bdRandom@@QEAAIXZ(this);
}

/*
==============
bdRandom::nextUBytes
==============
*/

void __fastcall bdRandom::nextUBytes(bdRandom *this, unsigned __int8 *in, const int length)
{
  ?nextUBytes@bdRandom@@QEAAXQEAEH@Z(this, in, length);
}

/*
==============
bdRandom::getSeed
==============
*/

unsigned int __fastcall bdRandom::getSeed(bdRandom *this)
{
  return ?getSeed@bdRandom@@QEBAIXZ(this);
}

/*
==============
bdRandom::setSeed
==============
*/

void __fastcall bdRandom::setSeed(bdRandom *this, const unsigned int seed)
{
  ?setSeed@bdRandom@@QEAAXI@Z(this, seed);
}

/*
==============
bdRandom::bdRandom
==============
*/

void __fastcall bdRandom::bdRandom(bdRandom *this)
{
  ??0bdRandom@@QEAA@XZ(this);
}

/*
==============
bdRandom::bdRandom
==============
*/
void bdRandom::bdRandom(bdRandom *this, const unsigned int seed)
{
  this->m_val = seed;
  if ( !seed )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "random", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdrandom.cpp", "bdRandom::setSeed", 0x44u, "Shouldn't use 0 for seed. 12,195,257 used instead.");
    this->m_val = 12195257;
  }
}

/*
==============
bdRandom::bdRandom
==============
*/
void bdRandom::bdRandom(bdRandom *this)
{
  unsigned int HiResTimeStamp; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  this->m_val = HiResTimeStamp;
  if ( !HiResTimeStamp )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "random", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdrandom.cpp", "bdRandom::setSeed", 0x44u, "Shouldn't use 0 for seed. 12,195,257 used instead.");
    this->m_val = 12195257;
  }
}

/*
==============
bdRandom::~bdRandom
==============
*/
void bdRandom::~bdRandom(bdRandom *this)
{
  ;
}

/*
==============
bdRandom::getSeed
==============
*/
__int64 bdRandom::getSeed(bdRandom *this)
{
  return this->m_val;
}

/*
==============
bdRandom::nextUBytes
==============
*/
void bdRandom::nextUBytes(bdRandom *this, unsigned __int8 *in, const int length)
{
  __int64 i; 
  signed int v5; 
  unsigned int v6; 

  if ( length > 0 )
  {
    for ( i = 0i64; i < length; ++i )
    {
      v5 = 16807 * (this->m_val % 0x1F31D) - 2836 * (this->m_val / 0x1F31D);
      v6 = v5 + 0x7FFFFFFF;
      if ( v5 > 0 )
        v6 = 16807 * (this->m_val % 0x1F31D) - 2836 * (this->m_val / 0x1F31D);
      this->m_val = v6;
      in[i] = v6;
    }
  }
}

/*
==============
bdRandom::nextUInt
==============
*/
__int64 bdRandom::nextUInt(bdRandom *this)
{
  signed int v2; 
  __int64 result; 

  v2 = 16807 * (this->m_val % 0x1F31D) - 2836 * (this->m_val / 0x1F31D);
  result = (unsigned int)(v2 + 0x7FFFFFFF);
  if ( v2 > 0 )
    result = (unsigned int)v2;
  this->m_val = result;
  return result;
}

/*
==============
bdRandom::setSeed
==============
*/
void bdRandom::setSeed(bdRandom *this, const unsigned int seed)
{
  this->m_val = seed;
  if ( !seed )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "random", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdrandom.cpp", "bdRandom::setSeed", 0x44u, "Shouldn't use 0 for seed. 12,195,257 used instead.");
    this->m_val = 12195257;
  }
}

