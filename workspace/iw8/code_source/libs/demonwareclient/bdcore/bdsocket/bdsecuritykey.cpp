/*
==============
bdSecurityKey::bdSecurityKey
==============
*/

void __fastcall bdSecurityKey::bdSecurityKey(bdSecurityKey *this)
{
  ??0bdSecurityKey@@QEAA@XZ(this);
}

/*
==============
bdSecurityKey::operator==
==============
*/

bool __fastcall bdSecurityKey::operator==(bdSecurityKey *this, const bdSecurityKey *other)
{
  return ??8bdSecurityKey@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSecurityKey::bdSecurityKey
==============
*/

void __fastcall bdSecurityKey::bdSecurityKey(bdSecurityKey *this, const bdSecurityKey *other)
{
  ??0bdSecurityKey@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdSecurityKey::~bdSecurityKey
==============
*/

void __fastcall bdSecurityKey::~bdSecurityKey(bdSecurityKey *this)
{
  ??1bdSecurityKey@@QEAA@XZ(this);
}

/*
==============
bdSecurityKey::bdSecurityKey
==============
*/
void bdSecurityKey::bdSecurityKey(bdSecurityKey *this, const bdSecurityKey *other)
{
  *this = *other;
}

/*
==============
bdSecurityKey::bdSecurityKey
==============
*/
void bdSecurityKey::bdSecurityKey(bdSecurityKey *this)
{
  *(_QWORD *)this->ab = 0x101010101010101i64;
  *(_QWORD *)&this->ab[8] = 0x101010101010101i64;
}

/*
==============
bdSecurityKey::~bdSecurityKey
==============
*/
void bdSecurityKey::~bdSecurityKey(bdSecurityKey *this)
{
  bdCryptoUtils::zeroBuffer(this, 0x10ui64);
}

/*
==============
bdSecurityKey::operator==
==============
*/
bool bdSecurityKey::operator==(bdSecurityKey *this, const bdSecurityKey *other)
{
  return bdCryptoUtils::constTimeCompare(this->ab, other->ab, 0x10ui64);
}

