/*
==============
bdDTLSRandom::getData
==============
*/

const unsigned __int8 (*__fastcall bdDTLSRandom::getData(bdDTLSRandom *this))[32]
{
  return ?getData@bdDTLSRandom@@QEBAAEAY0CA@$$CBEXZ(this);
}

/*
==============
bdDTLSRandom::~bdDTLSRandom
==============
*/

void __fastcall bdDTLSRandom::~bdDTLSRandom(bdDTLSRandom *this)
{
  ??1bdDTLSRandom@@QEAA@XZ(this);
}

/*
==============
bdDTLSRandom::~bdDTLSRandom
==============
*/
void bdDTLSRandom::~bdDTLSRandom(bdDTLSRandom *this)
{
  bdCryptoUtils::zeroBuffer(this, 0x20ui64);
}

/*
==============
bdDTLSRandom::getData
==============
*/
bdDTLSRandom *bdDTLSRandom::getData(bdDTLSRandom *this)
{
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
  return this;
}

