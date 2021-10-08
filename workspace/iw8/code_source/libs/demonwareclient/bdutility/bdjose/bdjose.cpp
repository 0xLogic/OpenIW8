/*
==============
bdJOSERestrictedHeaders::reset
==============
*/

void __fastcall bdJOSERestrictedHeaders::reset(bdJOSERestrictedHeaders *this)
{
  ?reset@bdJOSERestrictedHeaders@@QEAAXXZ(this);
}

/*
==============
bdJOSERestrictedHeaders::bdJOSERestrictedHeaders
==============
*/

void __fastcall bdJOSERestrictedHeaders::bdJOSERestrictedHeaders(bdJOSERestrictedHeaders *this)
{
  ??0bdJOSERestrictedHeaders@@QEAA@XZ(this);
}

/*
==============
bdJOSERestrictedHeaders::bdJOSERestrictedHeaders
==============
*/
void bdJOSERestrictedHeaders::bdJOSERestrictedHeaders(bdJOSERestrictedHeaders *this)
{
  this->m_compression = NULL;
  this->m_type = NULL;
  this->m_contentType = NULL;
  this->m_jwkSetURL = NULL;
  this->m_jsonWebKey = NULL;
  this->m_keyId = NULL;
  this->m_x509URL = NULL;
  this->m_x509CertificateChain = NULL;
  this->m_x509Sha1Thumbprint = NULL;
  this->m_x509Sha256Thumbprint = NULL;
  this->m_crit = NULL;
}

/*
==============
bdJOSERestrictedHeaders::reset
==============
*/
void bdJOSERestrictedHeaders::reset(bdJOSERestrictedHeaders *this)
{
  this->m_compression = NULL;
  this->m_type = NULL;
  this->m_contentType = NULL;
  this->m_jwkSetURL = NULL;
  this->m_jsonWebKey = NULL;
  this->m_keyId = NULL;
  this->m_x509URL = NULL;
  this->m_x509CertificateChain = NULL;
  this->m_x509Sha1Thumbprint = NULL;
  this->m_x509Sha256Thumbprint = NULL;
  this->m_crit = NULL;
}

