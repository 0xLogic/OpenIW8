/*
==============
bdString::removeReference
==============
*/

void __fastcall bdString::removeReference(bdString *this, bdStringData *stringData)
{
  ?removeReference@bdString@@IEBAXPEAVbdStringData@@@Z(this, stringData);
}

/*
==============
bdString::findFirst
==============
*/

bool __fastcall bdString::findFirst(bdString *this, const char c, unsigned __int64 *i)
{
  return ?findFirst@bdString@@QEBA_NDAEA_K@Z(this, c, i);
}

/*
==============
bdString::operator+
==============
*/

bdString *__fastcall bdString::operator+(bdString *this, bdString *result, const bdString *s)
{
  return ??HbdString@@QEBA?AV0@AEBV0@@Z(this, result, s);
}

/*
==============
getEmptyStringData
==============
*/

bdStringData *__fastcall getEmptyStringData()
{
  return ?getEmptyStringData@@YAPEAVbdStringData@@XZ();
}

/*
==============
bdString::operator!=
==============
*/

bool __fastcall bdString::operator!=(bdString *this, const bdString *s)
{
  return ??9bdString@@QEBA_NAEBV0@@Z(this, s);
}

/*
==============
bdString::getLength
==============
*/

unsigned __int64 __fastcall bdString::getLength(bdString *this)
{
  return ?getLength@bdString@@QEBA_KXZ(this);
}

/*
==============
bdString::getBuffer
==============
*/

const char *__fastcall bdString::getBuffer(bdString *this)
{
  return ?getBuffer@bdString@@QEBAPEBDXZ(this);
}

/*
==============
bdString::operator==
==============
*/

bool __fastcall bdString::operator==(bdString *this, const bdString *s)
{
  return ??8bdString@@QEBA_NAEBV0@@Z(this, s);
}

/*
==============
bdString::bdString
==============
*/

void __fastcall bdString::bdString(bdString *this)
{
  ??0bdString@@QEAA@XZ(this);
}

/*
==============
bdString::bdString
==============
*/

void __fastcall bdString::bdString(bdString *this, const char *const str)
{
  ??0bdString@@QEAA@QEBD@Z(this, str);
}

/*
==============
bdString::allocateBuffer
==============
*/

void __fastcall bdString::allocateBuffer(bdString *this, const unsigned __int64 length)
{
  ?allocateBuffer@bdString@@IEAAX_K@Z(this, length);
}

/*
==============
bdString::getStringData
==============
*/

bdStringData *__fastcall bdString::getStringData(bdString *this)
{
  return ?getStringData@bdString@@IEBAPEAVbdStringData@@XZ(this);
}

/*
==============
bdString::bdString
==============
*/

void __fastcall bdString::bdString(bdString *this, const bdString *str)
{
  ??0bdString@@QEAA@AEBV0@@Z(this, str);
}

/*
==============
bdString::operator+=
==============
*/

bdString *__fastcall bdString::operator+=(bdString *this, const bdString *s)
{
  return ??YbdString@@QEAAAEAV0@AEBV0@@Z(this, s);
}

/*
==============
bdString::operator!=
==============
*/

bool __fastcall bdString::operator!=(bdString *this, const char *const s)
{
  return ??9bdString@@QEBA_NQEBD@Z(this, s);
}

/*
==============
bdString::operator+
==============
*/

bdString *__fastcall bdString::operator+(bdString *this, bdString *result, const char *const s)
{
  return ??HbdString@@QEBA?AV0@QEBD@Z(this, result, s);
}

/*
==============
bdString::bdString
==============
*/

void __fastcall bdString::bdString(bdString *this, const char *const str, const unsigned __int64 length)
{
  ??0bdString@@QEAA@QEBD_K@Z(this, str, length);
}

/*
==============
bdString::operator=
==============
*/

bdString *__fastcall bdString::operator=(bdString *this, const bdString *s)
{
  return ??4bdString@@QEAAAEAV0@AEBV0@@Z(this, s);
}

/*
==============
bdString::getSection
==============
*/

bdString *__fastcall bdString::getSection(bdString *this, bdString *result, const unsigned __int64 begin, unsigned __int64 end)
{
  return ?getSection@bdString@@QEBA?AV1@_K_K@Z(this, result, begin, end);
}

/*
==============
bdString::operator==
==============
*/

bool __fastcall bdString::operator==(bdString *this, const char *const s)
{
  return ??8bdString@@QEBA_NQEBD@Z(this, s);
}

/*
==============
bdString::~bdString
==============
*/

void __fastcall bdString::~bdString(bdString *this)
{
  ??1bdString@@QEAA@XZ(this);
}

/*
==============
bdString::enoughCapacity
==============
*/

bool __fastcall bdString::enoughCapacity(bdString *this, const unsigned __int64 length)
{
  return ?enoughCapacity@bdString@@IEBA_N_K@Z(this, length);
}

/*
==============
bdString::operator+=
==============
*/

bdString *__fastcall bdString::operator+=(bdString *this, const char *const s)
{
  return ??YbdString@@QEAAAEAV0@QEBD@Z(this, s);
}

/*
==============
bdString::freeBuffer
==============
*/

void __fastcall bdString::freeBuffer(bdString *this, bdStringData *stringData)
{
  ?freeBuffer@bdString@@IEBAXPEAVbdStringData@@@Z(this, stringData);
}

/*
==============
bdString::addReference
==============
*/

void __fastcall bdString::addReference(bdString *this, bdStringData *stringData)
{
  ?addReference@bdString@@IEBAXPEAVbdStringData@@@Z(this, stringData);
}

/*
==============
bdString::initialize
==============
*/

void __fastcall bdString::initialize(bdString *this)
{
  ?initialize@bdString@@IEAAXXZ(this);
}

/*
==============
bdString::operator+=
==============
*/

bdString *__fastcall bdString::operator+=(bdString *this, const char c)
{
  return ??YbdString@@QEAAAEAV0@D@Z(this, c);
}

/*
==============
bdString::operator=
==============
*/

bdString *__fastcall bdString::operator=(bdString *this, const char *const s)
{
  return ??4bdString@@QEAAAEAV0@QEBD@Z(this, s);
}

/*
==============
bdString::bdString
==============
*/
void bdString::bdString(bdString *this, const bdString *str)
{
  char *m_string; 
  std::atomic<int> *v3; 

  m_string = str->m_string;
  this->m_string = str->m_string;
  v3 = (std::atomic<int> *)(m_string - 24);
  bdHandleAssert((((_BYTE)m_string - 24) & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicIncrement", 0x12u, "atomic 32bit variable not 32bit aligned");
  bdPlatformAtomic::increment(v3);
}

/*
==============
bdString::bdString
==============
*/
void bdString::bdString(bdString *this, const char *const str)
{
  unsigned __int64 v4; 

  if ( !str )
    goto LABEL_6;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( str[v4] );
  if ( v4 )
  {
    bdString::allocateBuffer(this, v4);
    memcpy_0(this->m_string, str, v4);
    this->m_string[v4] = 0;
  }
  else
  {
LABEL_6:
    bdString::initialize(this);
  }
}

/*
==============
bdString::bdString
==============
*/
void bdString::bdString(bdString *this, const char *const str, const unsigned __int64 length)
{
  char *m_string; 

  if ( length )
  {
    bdString::allocateBuffer(this, length);
    m_string = this->m_string;
    if ( str )
    {
      memcpy_0(m_string, str, length);
      this->m_string[length] = 0;
    }
    else
    {
      memset_0(m_string, 0, length);
    }
  }
  else
  {
    bdString::initialize(this);
  }
}

/*
==============
bdString::bdString
==============
*/
void bdString::bdString(bdString *this)
{
  bdString::initialize(this);
}

/*
==============
bdString::~bdString
==============
*/
void bdString::~bdString(bdString *this)
{
  bdString::removeReference(this, (bdStringData *)this->m_string - 1);
}

/*
==============
bdString::operator=
==============
*/
bdString *bdString::operator=(bdString *this, const bdString *s)
{
  char *m_string; 
  std::atomic<int> *v5; 

  if ( this->m_string != s->m_string )
  {
    bdString::removeReference(this, (bdStringData *)this->m_string - 1);
    m_string = s->m_string;
    this->m_string = s->m_string;
    v5 = (std::atomic<int> *)(m_string - 24);
    bdHandleAssert((((_BYTE)m_string - 24) & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicIncrement", 0x12u, "atomic 32bit variable not 32bit aligned");
    bdPlatformAtomic::increment(v5);
  }
  return this;
}

/*
==============
bdString::operator=
==============
*/
bdString *bdString::operator=(bdString *this, const char *const s)
{
  unsigned __int64 v4; 
  std::atomic<int> *v5; 
  size_t v6; 

  bdHandleAssert(s != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( s[v4] );
  v5 = (std::atomic<int> *)(this->m_string - 24);
  bdHandleAssert(((unsigned __int8)v5 & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicLoad", 0x27u, "atomic 32bit variable not 32bit aligned");
  if ( bdPlatformAtomic::load(v5) > 1 || (v6 = v4 + 1, *((_QWORD *)this->m_string - 1) < v4 + 1) )
  {
    bdString::removeReference(this, (bdStringData *)this->m_string - 1);
    bdString::allocateBuffer(this, v4);
    v6 = v4 + 1;
  }
  else
  {
    *((_QWORD *)this->m_string - 2) = v4;
  }
  memcpy_0(this->m_string, s, v6);
  return this;
}

/*
==============
bdString::operator==
==============
*/
bool bdString::operator==(bdString *this, const bdString *s)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = this->m_string;
  v3 = s->m_string - this->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 == 0;
}

/*
==============
bdString::operator==
==============
*/
bool bdString::operator==(bdString *this, const char *const s)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = this->m_string;
  v3 = s - this->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 == 0;
}

/*
==============
bdString::operator!=
==============
*/
bool bdString::operator!=(bdString *this, const bdString *s)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = this->m_string;
  v3 = s->m_string - this->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 != 0;
}

/*
==============
bdString::operator!=
==============
*/
bool bdString::operator!=(bdString *this, const char *const s)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = this->m_string;
  v3 = s - this->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 != 0;
}

/*
==============
bdString::operator+
==============
*/
bdString *bdString::operator+(bdString *this, bdString *result, const bdString *s)
{
  size_t v6; 
  __int64 v7; 

  v6 = *((_QWORD *)this->m_string - 2);
  v7 = *((_QWORD *)s->m_string - 2);
  bdString::initialize(result);
  if ( v7 + v6 )
  {
    bdString::allocateBuffer(result, v7 + v6);
    memcpy_0(result->m_string, this->m_string, v6);
    memcpy_0(&result->m_string[v6], s->m_string, v7 + 1);
  }
  return result;
}

/*
==============
bdString::operator+
==============
*/
bdString *bdString::operator+(bdString *this, bdString *result, const char *const s)
{
  size_t v6; 
  __int64 v7; 
  int v9; 

  v9 = 0;
  v6 = *((_QWORD *)this->m_string - 2);
  bdHandleAssert(s != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", v9, -2i64);
  v7 = -1i64;
  do
    ++v7;
  while ( s[v7] );
  bdString::initialize(result);
  if ( v7 + v6 )
  {
    bdString::allocateBuffer(result, v7 + v6);
    memcpy_0(result->m_string, this->m_string, v6);
    memcpy_0(&result->m_string[v6], s, v7 + 1);
  }
  return result;
}

/*
==============
bdString::operator+=
==============
*/
bdString *bdString::operator+=(bdString *this, const bdString *s)
{
  __int64 v4; 
  std::atomic<int> *v5; 
  unsigned __int64 v6; 
  char *m_string; 
  size_t v9; 

  v4 = *((_QWORD *)s->m_string - 2);
  if ( !v4 )
    return this;
  v5 = (std::atomic<int> *)(this->m_string - 24);
  v6 = v4 + *((_QWORD *)this->m_string - 2);
  bdHandleAssert((((unsigned __int8)this->m_string - 24) & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicLoad", 0x27u, "atomic 32bit variable not 32bit aligned");
  if ( bdPlatformAtomic::load(v5) > 1 || *((_QWORD *)this->m_string - 1) < v6 + 1 )
  {
    m_string = this->m_string;
    v9 = *((_QWORD *)this->m_string - 2);
    bdString::allocateBuffer(this, v6);
    memcpy_0(this->m_string, m_string, v9);
    memcpy_0(&this->m_string[v9], s->m_string, v4 + 1);
    bdString::removeReference(this, (bdStringData *)m_string - 1);
    return this;
  }
  else
  {
    memcpy_0(&this->m_string[*((_QWORD *)this->m_string - 2)], s->m_string, v4 + 1);
    *((_QWORD *)this->m_string - 2) += v4;
    return this;
  }
}

/*
==============
bdString::operator+=
==============
*/
bdString *bdString::operator+=(bdString *this, const char c)
{
  __int64 v3; 
  std::atomic<int> *v4; 
  unsigned __int64 v5; 
  char *m_string; 
  size_t v8; 
  char Src; 
  char v10; 

  Src = c;
  v10 = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( *(&Src + v3) );
  if ( !v3 )
    return this;
  v4 = (std::atomic<int> *)(this->m_string - 24);
  v5 = v3 + *((_QWORD *)this->m_string - 2);
  bdHandleAssert((((unsigned __int8)this->m_string - 24) & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicLoad", 0x27u, "atomic 32bit variable not 32bit aligned");
  if ( bdPlatformAtomic::load(v4) > 1 || *((_QWORD *)this->m_string - 1) < v5 + 1 )
  {
    m_string = this->m_string;
    v8 = *((_QWORD *)this->m_string - 2);
    bdString::allocateBuffer(this, v5);
    memcpy_0(this->m_string, m_string, v8);
    memcpy_0(&this->m_string[v8], &Src, v3 + 1);
    bdString::removeReference(this, (bdStringData *)m_string - 1);
    return this;
  }
  else
  {
    memcpy_0(&this->m_string[*((_QWORD *)this->m_string - 2)], &Src, v3 + 1);
    *((_QWORD *)this->m_string - 2) += v3;
    return this;
  }
}

/*
==============
bdString::operator+=
==============
*/
bdString *bdString::operator+=(bdString *this, const char *const s)
{
  __int64 v4; 
  std::atomic<int> *v5; 
  unsigned __int64 v6; 
  char *m_string; 
  size_t v9; 

  bdHandleAssert(s != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( s[v4] );
  if ( !v4 )
    return this;
  v5 = (std::atomic<int> *)(this->m_string - 24);
  v6 = v4 + *((_QWORD *)this->m_string - 2);
  bdHandleAssert((((unsigned __int8)this->m_string - 24) & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicLoad", 0x27u, "atomic 32bit variable not 32bit aligned");
  if ( bdPlatformAtomic::load(v5) > 1 || *((_QWORD *)this->m_string - 1) < v6 + 1 )
  {
    m_string = this->m_string;
    v9 = *((_QWORD *)this->m_string - 2);
    bdString::allocateBuffer(this, v6);
    memcpy_0(this->m_string, m_string, v9);
    memcpy_0(&this->m_string[v9], s, v4 + 1);
    bdString::removeReference(this, (bdStringData *)m_string - 1);
    return this;
  }
  else
  {
    memcpy_0(&this->m_string[*((_QWORD *)this->m_string - 2)], s, v4 + 1);
    *((_QWORD *)this->m_string - 2) += v4;
    return this;
  }
}

/*
==============
bdString::addReference
==============
*/
void bdString::addReference(bdString *this, bdStringData *stringData)
{
  bdHandleAssert(((unsigned __int8)stringData & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicIncrement", 0x12u, "atomic 32bit variable not 32bit aligned");
  bdPlatformAtomic::increment(&stringData->m_referenceCount);
}

/*
==============
bdString::allocateBuffer
==============
*/
void bdString::allocateBuffer(bdString *this, const unsigned __int64 length)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  char *v6; 

  v4 = ((length + 1) >> 6) + 1;
  if ( (((_BYTE)length + 1) & 0x3F) == 0 )
    v4 = (length + 1) >> 6;
  v5 = v4 << 6;
  v6 = (char *)bdMemory::allocate(v5 + 24);
  bdHandleAssert(((unsigned __int8)v6 & 3) == 0, "(reinterpret_cast<uintptr_t>(&target) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicStore", 0x20u, "atomic 32bit variable not 32bit aligned");
  bdPlatformAtomic::store((std::atomic<int> *)v6, 1);
  *((_QWORD *)v6 + 2) = v5;
  *((_QWORD *)v6 + 1) = length;
  this->m_string = v6 + 24;
}

/*
==============
bdString::enoughCapacity
==============
*/
bool bdString::enoughCapacity(bdString *this, const unsigned __int64 length)
{
  return *((_QWORD *)this->m_string - 1) >= length + 1;
}

/*
==============
bdString::findFirst
==============
*/
char bdString::findFirst(bdString *this, const char c, unsigned __int64 *i)
{
  char *m_string; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  m_string = this->m_string;
  v4 = 0i64;
  v5 = *((_QWORD *)this->m_string - 2);
  if ( !v5 )
    return 0;
  while ( m_string[v4] != c )
  {
    if ( ++v4 >= v5 )
      return 0;
  }
  *i = v4;
  return 1;
}

/*
==============
bdString::freeBuffer
==============
*/
void bdString::freeBuffer(bdString *this, bdStringData *stringData)
{
  if ( stringData != (bdStringData *)&g_emptyStringData )
    bdMemory::deallocate(stringData);
}

/*
==============
bdString::getBuffer
==============
*/
char *bdString::getBuffer(bdString *this)
{
  return this->m_string;
}

/*
==============
getEmptyStringData
==============
*/
bdEmptyStringStatic *getEmptyStringData()
{
  *g_emptyString = 0;
  return &g_emptyStringData;
}

/*
==============
bdString::getLength
==============
*/
unsigned __int64 bdString::getLength(bdString *this)
{
  return *((_QWORD *)this->m_string - 2);
}

/*
==============
bdString::getSection
==============
*/
bdString *bdString::getSection(bdString *this, bdString *result, const unsigned __int64 begin, unsigned __int64 end)
{
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  v8 = *((_QWORD *)this->m_string - 2);
  bdString::initialize(result);
  if ( end > v8 )
    end = v8;
  if ( begin < end )
  {
    v9 = end - begin;
    bdString::allocateBuffer(result, v9);
    memcpy_0(result->m_string, &this->m_string[begin], v9);
    result->m_string[v9] = 0;
  }
  return result;
}

/*
==============
bdString::getStringData
==============
*/
bdStringData *bdString::getStringData(bdString *this)
{
  return (bdStringData *)(this->m_string - 24);
}

/*
==============
bdString::initialize
==============
*/
void bdString::initialize(bdString *this)
{
  *g_emptyString = 0;
  this->m_string = &g_emptyStringData.m_stringByte;
  bdHandleAssert(((unsigned __int8)&g_emptyStringData & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicIncrement", 0x12u, "atomic 32bit variable not 32bit aligned");
  bdPlatformAtomic::increment(&g_emptyStringData.m_stringData.m_referenceCount);
}

/*
==============
bdString::removeReference
==============
*/
void bdString::removeReference(bdString *this, bdStringData *stringData)
{
  bdHandleAssert(((unsigned __int8)stringData & 3) == 0, "(reinterpret_cast<uintptr_t>(&value) & 0x3) == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdthread\\bdatomic.h", "bdAtomicDecrement", 0x19u, "atomic 32bit variable not 32bit aligned");
  if ( !bdPlatformAtomic::decrement(&stringData->m_referenceCount) && stringData != (bdStringData *)&g_emptyStringData )
    bdMemory::deallocate(stringData);
}

