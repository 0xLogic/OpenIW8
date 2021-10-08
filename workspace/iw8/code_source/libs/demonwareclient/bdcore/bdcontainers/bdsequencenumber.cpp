/*
==============
bdSequenceNumber::operator>
==============
*/

bool __fastcall bdSequenceNumber::operator>(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??ObdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator++
==============
*/

bdSequenceNumber *__fastcall bdSequenceNumber::operator++(bdSequenceNumber *this)
{
  return ??EbdSequenceNumber@@QEAAAEAV0@XZ(this);
}

/*
==============
bdSequenceNumber::operator+=
==============
*/

bdSequenceNumber *__fastcall bdSequenceNumber::operator+=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??YbdSequenceNumber@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator<
==============
*/

bool __fastcall bdSequenceNumber::operator<(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??MbdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator+
==============
*/

bdSequenceNumber *__fastcall bdSequenceNumber::operator+(bdSequenceNumber *this, bdSequenceNumber *result, const bdSequenceNumber *other)
{
  return ??HbdSequenceNumber@@QEBA?AV0@AEBV0@@Z(this, result, other);
}

/*
==============
bdSequenceNumber::bdSequenceNumber
==============
*/

void __fastcall bdSequenceNumber::bdSequenceNumber(bdSequenceNumber *this, const bdSequenceNumber *last, const unsigned int seqNumber, const unsigned int bits)
{
  ??0bdSequenceNumber@@QEAA@AEBV0@II@Z(this, last, seqNumber, bits);
}

/*
==============
bdSequenceNumber::set
==============
*/

void __fastcall bdSequenceNumber::set(bdSequenceNumber *this, const bdSequenceNumber *last, const unsigned int seqNumber, const unsigned int bits)
{
  ?set@bdSequenceNumber@@QEAAXAEBV1@II@Z(this, last, seqNumber, bits);
}

/*
==============
bdSequenceNumber::operator<=
==============
*/

bool __fastcall bdSequenceNumber::operator<=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??NbdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator!=
==============
*/

bool __fastcall bdSequenceNumber::operator!=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??9bdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator==
==============
*/

bool __fastcall bdSequenceNumber::operator==(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??8bdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator++
==============
*/

bdSequenceNumber *__fastcall bdSequenceNumber::operator++(bdSequenceNumber *this, bdSequenceNumber *result, int __formal)
{
  return ??EbdSequenceNumber@@QEAA?AV0@H@Z(this, result, __formal);
}

/*
==============
bdSequenceNumber::bdSequenceNumber
==============
*/

void __fastcall bdSequenceNumber::bdSequenceNumber(bdSequenceNumber *this, const int seqNum)
{
  ??0bdSequenceNumber@@QEAA@H@Z(this, seqNum);
}

/*
==============
bdSequenceNumber::operator>=
==============
*/

bool __fastcall bdSequenceNumber::operator>=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return ??PbdSequenceNumber@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSequenceNumber::operator-
==============
*/

bdSequenceNumber *__fastcall bdSequenceNumber::operator-(bdSequenceNumber *this, bdSequenceNumber *result, const bdSequenceNumber *other)
{
  return ??GbdSequenceNumber@@QEBA?AV0@AEBV0@@Z(this, result, other);
}

/*
==============
bdSequenceNumber::getValue
==============
*/

int __fastcall bdSequenceNumber::getValue(bdSequenceNumber *this)
{
  return ?getValue@bdSequenceNumber@@QEBAHXZ(this);
}

/*
==============
bdSequenceNumber::bdSequenceNumber
==============
*/
void bdSequenceNumber::bdSequenceNumber(bdSequenceNumber *this, const bdSequenceNumber *last, const unsigned int seqNumber, const unsigned int bits)
{
  int m_seqNum; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; 
  bool v14; 
  char v15; 
  int v16; 

  this->m_seqNum = -1;
  m_seqNum = last->m_seqNum;
  v7 = seqNumber;
  v8 = 1 << bits;
  v9 = last->m_seqNum % (1 << bits);
  v10 = m_seqNum - v9;
  v11 = v9;
  v12 = (int)seqNumber % (1 << bits);
  bdHandleAssert((int)seqNumber < 1 << bits, "static_cast<bdInt>(seqNumber) < range", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsequencenumber.cpp", "bdSequenceNumber::set", 0x29u, "Sequence number given outside the range.");
  if ( v11 < 0 )
    goto LABEL_27;
  if ( v11 == v12 )
  {
    this->m_seqNum = last->m_seqNum;
    return;
  }
  v13 = v11 < v12 && v12 - v11 < v8 / 2 || v11 > v12 && v11 - v12 > v8 / 2;
  v14 = v11 <= v12;
  if ( v11 < v12 )
  {
    if ( v12 - v11 > v8 / 2 )
    {
LABEL_15:
      v15 = 1;
      goto LABEL_17;
    }
    v14 = v11 <= v12;
  }
  if ( !v14 && v11 - v12 < v8 / 2 )
    goto LABEL_15;
  v15 = 0;
LABEL_17:
  v16 = 0;
  if ( v15 )
  {
    if ( v11 > v12 )
      goto LABEL_26;
    if ( v11 < v12 )
    {
      v16 = -1;
      goto LABEL_26;
    }
    if ( !v13 )
      goto LABEL_26;
LABEL_24:
    if ( v11 > v12 )
      v16 = 1;
    goto LABEL_26;
  }
  if ( v13 )
    goto LABEL_24;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdContainers/sequenceNumber", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsequencenumber.cpp", "bdSequenceNumber::set", 0x43u, "Sequence numbers are too far away and cannot be compared.");
LABEL_26:
  v7 = v10 + v12 + v8 * v16;
LABEL_27:
  this->m_seqNum = v7;
}

/*
==============
bdSequenceNumber::bdSequenceNumber
==============
*/
void bdSequenceNumber::bdSequenceNumber(bdSequenceNumber *this, const int seqNum)
{
  this->m_seqNum = seqNum;
}

/*
==============
bdSequenceNumber::operator==
==============
*/
bool bdSequenceNumber::operator==(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum == other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator!=
==============
*/
bool bdSequenceNumber::operator!=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum != other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator++
==============
*/
bdSequenceNumber *bdSequenceNumber::operator++(bdSequenceNumber *this, bdSequenceNumber *result, int __formal)
{
  int m_seqNum; 

  m_seqNum = this->m_seqNum;
  result->m_seqNum = this->m_seqNum;
  this->m_seqNum = m_seqNum + 1;
  return result;
}

/*
==============
bdSequenceNumber::operator++
==============
*/
bdSequenceNumber *bdSequenceNumber::operator++(bdSequenceNumber *this)
{
  ++this->m_seqNum;
  return this;
}

/*
==============
bdSequenceNumber::operator-
==============
*/
bdSequenceNumber *bdSequenceNumber::operator-(bdSequenceNumber *this, bdSequenceNumber *result, const bdSequenceNumber *other)
{
  result->m_seqNum = this->m_seqNum - other->m_seqNum;
  return result;
}

/*
==============
bdSequenceNumber::operator+
==============
*/
bdSequenceNumber *bdSequenceNumber::operator+(bdSequenceNumber *this, bdSequenceNumber *result, const bdSequenceNumber *other)
{
  result->m_seqNum = this->m_seqNum + other->m_seqNum;
  return result;
}

/*
==============
bdSequenceNumber::operator<
==============
*/
bool bdSequenceNumber::operator<(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum < other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator<=
==============
*/
bool bdSequenceNumber::operator<=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum <= other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator>
==============
*/
bool bdSequenceNumber::operator>(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum > other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator>=
==============
*/
bool bdSequenceNumber::operator>=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  return this->m_seqNum >= other->m_seqNum;
}

/*
==============
bdSequenceNumber::operator+=
==============
*/
bdSequenceNumber *bdSequenceNumber::operator+=(bdSequenceNumber *this, const bdSequenceNumber *other)
{
  this->m_seqNum += other->m_seqNum;
  return this;
}

/*
==============
bdSequenceNumber::getValue
==============
*/
__int64 bdSequenceNumber::getValue(bdSequenceNumber *this)
{
  return (unsigned int)this->m_seqNum;
}

/*
==============
bdSequenceNumber::set
==============
*/
void bdSequenceNumber::set(bdSequenceNumber *this, const bdSequenceNumber *last, const unsigned int seqNumber, const unsigned int bits)
{
  int m_seqNum; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; 
  bool v14; 
  char v15; 
  int v16; 

  m_seqNum = last->m_seqNum;
  v7 = seqNumber;
  v8 = 1 << bits;
  v9 = last->m_seqNum % (1 << bits);
  v10 = m_seqNum - v9;
  v11 = v9;
  v12 = (int)seqNumber % (1 << bits);
  bdHandleAssert((int)seqNumber < 1 << bits, "static_cast<bdInt>(seqNumber) < range", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsequencenumber.cpp", "bdSequenceNumber::set", 0x29u, "Sequence number given outside the range.");
  if ( v11 < 0 )
    goto LABEL_27;
  if ( v11 == v12 )
  {
    this->m_seqNum = last->m_seqNum;
    return;
  }
  v13 = v11 < v12 && v12 - v11 < v8 / 2 || v11 > v12 && v11 - v12 > v8 / 2;
  v14 = v11 <= v12;
  if ( v11 < v12 )
  {
    if ( v12 - v11 > v8 / 2 )
    {
LABEL_15:
      v15 = 1;
      goto LABEL_17;
    }
    v14 = v11 <= v12;
  }
  if ( !v14 && v11 - v12 < v8 / 2 )
    goto LABEL_15;
  v15 = 0;
LABEL_17:
  v16 = 0;
  if ( v15 )
  {
    if ( v11 > v12 )
      goto LABEL_26;
    if ( v11 < v12 )
    {
      v16 = -1;
      goto LABEL_26;
    }
    if ( !v13 )
      goto LABEL_26;
LABEL_24:
    if ( v11 > v12 )
      v16 = 1;
    goto LABEL_26;
  }
  if ( v13 )
    goto LABEL_24;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdContainers/sequenceNumber", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsequencenumber.cpp", "bdSequenceNumber::set", 0x43u, "Sequence numbers are too far away and cannot be compared.");
LABEL_26:
  v7 = v10 + v12 + v8 * v16;
LABEL_27:
  this->m_seqNum = v7;
}

