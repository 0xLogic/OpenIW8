/*
==============
bdHMac::bdHMac
==============
*/

void __fastcall bdHMac::bdHMac(bdHMac *this, bdHashAlgorithms type, unsigned int digestSize)
{
  ??0bdHMac@@IEAA@W4bdHashAlgorithms@@I@Z(this, type, digestSize);
}

/*
==============
bdHMac::~bdHMac
==============
*/

void __fastcall bdHMac::~bdHMac(bdHMac *this)
{
  ??1bdHMac@@UEAA@XZ(this);
}

/*
==============
bdHMac::bdHMac
==============
*/
void bdHMac::bdHMac(bdHMac *this, bdHashAlgorithms type, unsigned int digestSize)
{
  this->m_type = type;
  this->__vftable = (bdHMac_vtbl *)&bdHMac::`vftable';
  this->m_digestSize = digestSize;
}

/*
==============
bdHMac::~bdHMac
==============
*/
void bdHMac::~bdHMac(bdHMac *this)
{
  this->__vftable = (bdHMac_vtbl *)&bdHMac::`vftable';
}

