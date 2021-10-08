/*
==============
bdSequenceNumberStore::check
==============
*/

bdSequenceNumberStore::bdSequenceStatus __fastcall bdSequenceNumberStore::check(bdSequenceNumberStore *this, const bdSequenceNumber *thisSeq)
{
  return ?check@bdSequenceNumberStore@@QEAA?AW4bdSequenceStatus@1@AEBVbdSequenceNumber@@@Z(this, thisSeq);
}

/*
==============
bdSequenceNumberStore::bdSequenceNumberStore
==============
*/

void __fastcall bdSequenceNumberStore::bdSequenceNumberStore(bdSequenceNumberStore *this, const bdSequenceNumber *inital)
{
  ??0bdSequenceNumberStore@@QEAA@AEBVbdSequenceNumber@@@Z(this, inital);
}

/*
==============
bdSequenceNumberStore::getLastSequenceNumber
==============
*/

const bdSequenceNumber *__fastcall bdSequenceNumberStore::getLastSequenceNumber(bdSequenceNumberStore *this)
{
  return ?getLastSequenceNumber@bdSequenceNumberStore@@QEBAAEBVbdSequenceNumber@@XZ(this);
}

/*
==============
bdSequenceNumberStore::reset
==============
*/

void __fastcall bdSequenceNumberStore::reset(bdSequenceNumberStore *this, const bdSequenceNumber *inital)
{
  ?reset@bdSequenceNumberStore@@QEAAXAEBVbdSequenceNumber@@@Z(this, inital);
}

/*
==============
bdSequenceNumberStore::bdSequenceNumberStore
==============
*/
void bdSequenceNumberStore::bdSequenceNumberStore(bdSequenceNumberStore *this, const bdSequenceNumber *inital)
{
  this->m_bitmap = 0;
  this->m_lastSeq = (bdSequenceNumber)inital->m_seqNum;
}

/*
==============
bdSequenceNumberStore::check
==============
*/
__int64 bdSequenceNumberStore::check(bdSequenceNumberStore *this, const bdSequenceNumber *thisSeq)
{
  unsigned int Value; 
  unsigned int v6; 
  int v7; 
  bdSequenceNumber result; 

  if ( bdSequenceNumber::operator>((bdSequenceNumber *)thisSeq, &this->m_lastSeq) )
  {
    bdSequenceNumber::operator-((bdSequenceNumber *)thisSeq, &result, &this->m_lastSeq);
    Value = bdSequenceNumber::getValue(&result);
    if ( Value >= 0x20 )
    {
      this->m_lastSeq = (bdSequenceNumber)thisSeq->m_seqNum;
      this->m_bitmap = 1;
      return 2i64;
    }
    else
    {
      this->m_bitmap = (this->m_bitmap << Value) | 1;
      this->m_lastSeq = (bdSequenceNumber)thisSeq->m_seqNum;
      return 1i64;
    }
  }
  else
  {
    bdSequenceNumber::operator-(&this->m_lastSeq, &result, thisSeq);
    v6 = bdSequenceNumber::getValue(&result);
    if ( v6 < 0x20 )
    {
      v7 = 1 << v6;
      if ( (v7 & this->m_bitmap) != 0 )
      {
        return 0i64;
      }
      else
      {
        this->m_bitmap |= v7;
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      return 4294967294i64;
    }
  }
}

/*
==============
bdSequenceNumberStore::getLastSequenceNumber
==============
*/
bdSequenceNumber *bdSequenceNumberStore::getLastSequenceNumber(bdSequenceNumberStore *this)
{
  return &this->m_lastSeq;
}

/*
==============
bdSequenceNumberStore::reset
==============
*/
void bdSequenceNumberStore::reset(bdSequenceNumberStore *this, const bdSequenceNumber *inital)
{
  this->m_bitmap = 0;
  this->m_lastSeq = (bdSequenceNumber)inital->m_seqNum;
}

