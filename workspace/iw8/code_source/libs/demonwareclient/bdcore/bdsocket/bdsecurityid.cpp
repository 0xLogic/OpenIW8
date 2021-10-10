/*
==============
bdSecurityID::bdSecurityID
==============
*/

void __fastcall bdSecurityID::bdSecurityID(bdSecurityID *this)
{
  ??0bdSecurityID@@QEAA@XZ(this);
}

/*
==============
bdSecurityID::bdSecurityID
==============
*/

void __fastcall bdSecurityID::bdSecurityID(bdSecurityID *this, const bdSecurityID *other)
{
  ??0bdSecurityID@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdSecurityID::operator!=
==============
*/

bool __fastcall bdSecurityID::operator!=(bdSecurityID *this, const bdSecurityID *other)
{
  return ??9bdSecurityID@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSecurityID::~bdSecurityID
==============
*/

void __fastcall bdSecurityID::~bdSecurityID(bdSecurityID *this)
{
  ??1bdSecurityID@@QEAA@XZ(this);
}

/*
==============
bdSecurityID::operator==
==============
*/

bool __fastcall bdSecurityID::operator==(bdSecurityID *this, const bdSecurityID *other)
{
  return ??8bdSecurityID@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdSecurityID::IsValid
==============
*/

bool __fastcall bdSecurityID::IsValid(bdSecurityID *this)
{
  return ?IsValid@bdSecurityID@@QEBA_NXZ(this);
}

/*
==============
bdSecurityID::bdSecurityID
==============
*/
void bdSecurityID::bdSecurityID(bdSecurityID *this, const bdSecurityID *other)
{
  *this = *other;
}

/*
==============
bdSecurityID::bdSecurityID
==============
*/
void bdSecurityID::bdSecurityID(bdSecurityID *this)
{
  *this = 0i64;
}

/*
==============
bdSecurityID::~bdSecurityID
==============
*/
void bdSecurityID::~bdSecurityID(bdSecurityID *this)
{
  *this = 0i64;
}

/*
==============
bdSecurityID::operator==
==============
*/
bool bdSecurityID::operator==(bdSecurityID *this, const bdSecurityID *other)
{
  return *this == *other;
}

/*
==============
bdSecurityID::operator!=
==============
*/
bool bdSecurityID::operator!=(bdSecurityID *this, const bdSecurityID *other)
{
  return *this != *other;
}

/*
==============
bdSecurityID::IsValid
==============
*/
bool bdSecurityID::IsValid(bdSecurityID *this)
{
  return *this != 0i64;
}

