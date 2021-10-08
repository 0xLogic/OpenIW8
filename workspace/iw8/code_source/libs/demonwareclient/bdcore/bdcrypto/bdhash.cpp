/*
==============
bdHash::~bdHash
==============
*/

void __fastcall bdHash::~bdHash(bdHash *this)
{
  ??1bdHash@@UEAA@XZ(this);
}

/*
==============
bdHash::bdHash
==============
*/

void __fastcall bdHash::bdHash(bdHash *this)
{
  ??0bdHash@@QEAA@XZ(this);
}

/*
==============
bdHash::bdHash
==============
*/

void __fastcall bdHash::bdHash(bdHash *this, bdHashAlgorithms type, unsigned int digestSize)
{
  ??0bdHash@@IEAA@W4bdHashAlgorithms@@I@Z(this, type, digestSize);
}

/*
==============
bdHash::bdHash
==============
*/
void bdHash::bdHash(bdHash *this, bdHashAlgorithms type, unsigned int digestSize)
{
  this->m_type = type;
  this->__vftable = (bdHash_vtbl *)&bdHash::`vftable';
  this->m_digestSize = digestSize;
  bdHandleAssert(digestSize <= 0x40, "(digestSize <= BD_HASH_DIGEST_SIZE_MAX)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhash.cpp", "bdHash::bdHash", 0x18u, "BD_HASH_DIGEST_SIZE_MAX too small for hash of size[%d]", digestSize);
}

/*
==============
bdHash::bdHash
==============
*/
void bdHash::bdHash(bdHash *this)
{
  this->__vftable = (bdHash_vtbl *)&bdHash::`vftable';
  *(_QWORD *)&this->m_type = 0i64;
}

/*
==============
bdHash::~bdHash
==============
*/
void bdHash::~bdHash(bdHash *this)
{
  this->__vftable = (bdHash_vtbl *)&bdHash::`vftable';
}

