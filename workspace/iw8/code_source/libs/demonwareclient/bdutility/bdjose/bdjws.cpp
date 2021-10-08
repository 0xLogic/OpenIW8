/*
==============
bdJWS::getHashAlgorithm
==============
*/

bdHashAlgorithms __fastcall bdJWS::getHashAlgorithm(const bdJOSE::bdJWSSigAlgorithm sigAlgorithm)
{
  return ?getHashAlgorithm@bdJWS@@KA?AW4bdHashAlgorithms@@W4bdJWSSigAlgorithm@bdJOSE@@@Z(sigAlgorithm);
}

/*
==============
bdJWS::setRegisteredHeader
==============
*/

bool __fastcall bdJWS::setRegisteredHeader(bdJWS *this, bdJOSE::bdJWTRegisteredHeader claim, const char *value)
{
  return ?setRegisteredHeader@bdJWS@@QEAA_NW4bdJWTRegisteredHeader@bdJOSE@@PEBD@Z(this, claim, value);
}

/*
==============
bdJWS::encode
==============
*/

bool __fastcall bdJWS::encode(bdJWS *this, char *const dest, const unsigned int destLen, bdJOSE::bdJWSSigAlgorithm sigAlgorithm, const unsigned __int8 *const key, const unsigned int keyLen)
{
  return ?encode@bdJWS@@QEAA_NQEADIW4bdJWSSigAlgorithm@bdJOSE@@QEBEI@Z(this, dest, destLen, sigAlgorithm, key, keyLen);
}

/*
==============
bdJWS::bdJWS
==============
*/

void __fastcall bdJWS::bdJWS(bdJWS *this, bdJWT *jwt)
{
  ??0bdJWS@@QEAA@AEAVbdJWT@@@Z(this, jwt);
}

/*
==============
bdJWS::verify
==============
*/

bool __fastcall bdJWS::verify(const char *jwsData, const unsigned int jwsDataLen, unsigned __int8 *payload, unsigned int *payloadLen, const bdJOSE::bdJWSSigAlgorithm *allowedSigAlgorithms, const unsigned int allowedSigAlgorithmsLen, const unsigned __int8 *const key, const unsigned int keyLen)
{
  return ?verify@bdJWS@@SA_NPEBDIPEAEAEAIQEBW4bdJWSSigAlgorithm@bdJOSE@@IQEBEI@Z(jwsData, jwsDataLen, payload, payloadLen, allowedSigAlgorithms, allowedSigAlgorithmsLen, key, keyLen);
}

/*
==============
bdJWS::bdJWS
==============
*/

void __fastcall bdJWS::bdJWS(bdJWS *this, const unsigned __int8 *payload, unsigned int payloadLength)
{
  ??0bdJWS@@QEAA@PEBEI@Z(this, payload, payloadLength);
}

/*
==============
bdJWS::encodePayload
==============
*/

bool __fastcall bdJWS::encodePayload(bdJWS *this, char *jwsPayloadB64, unsigned int *jwsPayloadB64Len)
{
  return ?encodePayload@bdJWS@@IEAA_NPEADAEAI@Z(this, jwsPayloadB64, jwsPayloadB64Len);
}

/*
==============
bdJWS::~bdJWS
==============
*/

void __fastcall bdJWS::~bdJWS(bdJWS *this)
{
  ??1bdJWS@@QEAA@XZ(this);
}

/*
==============
bdJWS::encodeHeader
==============
*/

bool __fastcall bdJWS::encodeHeader(bdJWS *this, char *const jwsHeaderB64, unsigned int *jwsHeaderB64Len, bdJOSE::bdJWSSigAlgorithm sigAlgorithm)
{
  return ?encodeHeader@bdJWS@@IEAA_NQEADAEAIW4bdJWSSigAlgorithm@bdJOSE@@@Z(this, jwsHeaderB64, jwsHeaderB64Len, sigAlgorithm);
}

/*
==============
bdJWS::verifyJWSFormat
==============
*/

bool __fastcall bdJWS::verifyJWSFormat(const char *const jwsData, const char **jwsHeaderB64, unsigned int *jwsHeaderB64Len, const char **jwsPayloadB64, unsigned int *jwsPayloadB64Len, const char **jwsSignatureB64, unsigned int *jwsSignatureB64Len)
{
  return ?verifyJWSFormat@bdJWS@@KA_NQEBDAEAPEBDAEAI1212@Z(jwsData, jwsHeaderB64, jwsHeaderB64Len, jwsPayloadB64, jwsPayloadB64Len, jwsSignatureB64, jwsSignatureB64Len);
}

/*
==============
bdJWS::bdJWS
==============
*/
void bdJWS::bdJWS(bdJWS *this, bdJWT *jwt)
{
  this->m_jwtPayload = jwt;
  this->m_payload = NULL;
  this->m_payloadLength = 0;
  bdJOSERestrictedHeaders::bdJOSERestrictedHeaders(&this->m_jwsHeaders);
  this->m_jwsHeaders.m_type = "JWT";
}

/*
==============
bdJWS::bdJWS
==============
*/
void bdJWS::bdJWS(bdJWS *this, const unsigned __int8 *payload, unsigned int payloadLength)
{
  this->m_jwtPayload = NULL;
  this->m_payload = payload;
  this->m_payloadLength = payloadLength;
  bdJOSERestrictedHeaders::bdJOSERestrictedHeaders(&this->m_jwsHeaders);
}

/*
==============
bdJWS::~bdJWS
==============
*/
void bdJWS::~bdJWS(bdJWS *this)
{
  ;
}

/*
==============
bdJWS::encode
==============
*/
_BOOL8 bdJWS::encode(bdJWS *this, char *const dest, const unsigned int destLen, bdJOSE::bdJWSSigAlgorithm sigAlgorithm, const unsigned __int8 *const key, const unsigned int keyLen)
{
  unsigned __int64 v7; 
  char *v8; 
  bdHashAlgorithms v10; 
  const unsigned __int8 *m_payload; 
  unsigned int m_payloadLength; 
  bool v13; 
  bdJOSE::bdJWSSigAlgorithm m_digestSize; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *v18; 
  __int64 v19; 
  char *v20; 
  bdRSAKey::bdRSAPKCS padding; 
  const char *v22; 
  const char *v23; 
  __int64 v25; 
  unsigned int outLen; 
  bool v27; 
  bool v28; 
  bdJOSE::bdJWSSigAlgorithm value; 
  unsigned int jwsHeaderB64Len; 
  unsigned int destLena; 
  unsigned int v32; 
  __int16 v33; 
  bdDynamicHMAC v34; 
  char *v35; 
  char *v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  bdRSAKey v40; 
  char v41[352]; 
  char jwsHeaderB64[688]; 
  char desta[4096]; 
  char v44[5472]; 

  v39 = -2i64;
  v7 = destLen;
  v8 = dest;
  v35 = dest;
  value = sigAlgorithm;
  bdHandleAssert(dest != NULL, "(dest != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0x38u, "bdJWS: Cannot encode to a NULL dest buffer");
  bdHandleAssert((_DWORD)v7 != 0, "(destLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0x39u, "bdJWS: Cannot encode to a zero size dest buffer");
  bdHandleAssert((unsigned int)sigAlgorithm <= 0xC, "bdJOSE::isValid(sigAlgorithm)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0x3Au, "bdJWS: Invalid sigAlgorithm [%d]", sigAlgorithm);
  v10 = BD_HASH_SHA256;
  if ( !v8 || !(_DWORD)v7 || (unsigned int)sigAlgorithm > 0xC )
  {
    jwsHeaderB64Len = 685;
    goto LABEL_59;
  }
  jwsHeaderB64Len = 685;
  if ( !bdJWS::encodeHeader(this, jwsHeaderB64, &jwsHeaderB64Len, sigAlgorithm) )
  {
LABEL_59:
    destLena = 5465;
    goto LABEL_60;
  }
  destLena = 5465;
  m_payload = (const unsigned __int8 *)&queryFormat.fmt + 3;
  m_payloadLength = 0;
  outLen = 0;
  if ( !this->m_jwtPayload )
  {
    if ( this->m_payload && this->m_payloadLength )
    {
      m_payload = this->m_payload;
      m_payloadLength = this->m_payloadLength;
      outLen = m_payloadLength;
    }
LABEL_11:
    if ( !bdBase64::base64URLEncodeAndStrip(m_payload, m_payloadLength, v44, &destLena) )
      goto LABEL_12;
    v13 = 1;
    v32 = 0;
    v33 = 46;
    outLen = 0;
    switch ( sigAlgorithm )
    {
      case 0:
      case 1:
      case 2:
        if ( sigAlgorithm )
        {
          if ( sigAlgorithm == arbitration )
          {
            v10 = BD_HASH_SHA384;
          }
          else
          {
            LOBYTE(v10) = sigAlgorithm != server;
            v10 += 5;
          }
        }
        bdDynamicHMAC::bdDynamicHMAC(&v34, v10, key, keyLen);
        bdHandleAssert(v34.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
        m_digestSize = v34.m_hmac->m_digestSize;
        value = m_digestSize;
        v13 = 1;
        bdHandleAssert(1, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
        if ( v34.m_hmac->process(v34.m_hmac, (const unsigned __int8 *const)jwsHeaderB64, jwsHeaderB64Len) && (bdHandleAssert(v34.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL"), v34.m_hmac->process(v34.m_hmac, (const unsigned __int8 *const)&v33, 1u)) && (bdHandleAssert(v34.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL"), v34.m_hmac->process(v34.m_hmac, (const unsigned __int8 *const)v44, destLena)) && (bdHandleAssert(v34.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL"), v34.m_hmac->getData(v34.m_hmac, (unsigned __int8 *)desta, (unsigned int *)&value)) )
        {
          v15 = value;
          if ( value == m_digestSize )
            goto LABEL_26;
        }
        else
        {
          v15 = value;
        }
        v13 = 0;
LABEL_26:
        outLen = v15;
        bdDynamicHMAC::~bdDynamicHMAC(&v34);
        goto LABEL_49;
      case 3:
      case 4:
      case 5:
      case 9:
      case 10:
      case 11:
        outLen = 256;
        bdRSAKey::bdRSAKey(&v40);
        v27 = bdRSAKey::import(&v40, (const char *const)key);
        v16 = destLena + jwsHeaderB64Len + 1;
        v17 = destLena + jwsHeaderB64Len + 2;
        v18 = NULL;
        v36 = NULL;
        v37 = v17;
        v38 = v17;
        if ( destLena + jwsHeaderB64Len != -2 )
        {
          v19 = v17;
          v18 = (char *)bdMemory::allocate(v17);
          v36 = v18;
          v20 = v18;
          do
          {
            *v20++ = 0;
            --v19;
          }
          while ( v19 );
        }
        v28 = v17 != 0;
        bdHandleAssert(v17 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        bdSnprintf(v18, v17, "%s.%s", jwsHeaderB64, v44);
        padding = BD_RSA_PKCS_1_v1_5;
        if ( (unsigned int)(sigAlgorithm - 3) > 2 )
          padding = BD_RSA_PKCS_1_PSS;
        if ( sigAlgorithm != adjusted && sigAlgorithm != 9 )
        {
          if ( sigAlgorithm == 4 || sigAlgorithm == 10 )
          {
            v10 = BD_HASH_SHA384;
          }
          else if ( sigAlgorithm == 5 || sigAlgorithm == (adjusted|0x8) )
          {
            v10 = BD_HASH_SHA512;
          }
          else
          {
            v10 = BD_MAX_HASH_ALGORITHMS;
          }
        }
        v13 = 0;
        if ( v27 && v10 != BD_MAX_HASH_ALGORITHMS )
        {
          bdHandleAssert(v28, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          if ( bdRSAKey::generateSignature(&v40, v18, v16, (unsigned __int8 *)desta, &outLen, v10, padding) )
            v13 = 1;
        }
        bdMemory::deallocate(v18);
        bdRSAKey::~bdRSAKey(&v40);
        v8 = v35;
        goto LABEL_49;
      case 12:
        v41[0] = 0;
        goto LABEL_55;
      default:
        v22 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>(&value);
        bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0x86u, "bdJWS: Unsupported Signature Algorithm [%s]", v22);
        v23 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>(&value);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0x86u, "bdJWS: Unsupported Signature Algorithm [%s]", v23);
        v13 = 0;
LABEL_49:
        if ( sigAlgorithm == 12 )
        {
          if ( !v13 )
            goto LABEL_62;
        }
        else
        {
          v32 = 4 * ((outLen + 2) / 3) + 1;
          if ( !v13 || 4 * ((outLen + 2) / 3) + 1 > 0x159 || !bdBase64::base64URLEncodeAndStrip((const unsigned __int8 *const)desta, outLen, v41, &v32) )
            goto LABEL_61;
          v13 = 1;
        }
LABEL_55:
        if ( destLena + v32 + jwsHeaderB64Len + 2 < (unsigned int)v7 )
        {
          bdSnprintf(v8, v7, "%s.%s.%s", jwsHeaderB64, v44, v41);
          return v13;
        }
        LODWORD(v25) = v7;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0xA4u, "Insufficient space in dest buffer [%u] vs [%u]", v25, destLena + v32 + jwsHeaderB64Len + 3);
        goto LABEL_61;
    }
  }
  if ( bdJWT::encode(this->m_jwtPayload, desta, 0x1000u, &outLen) )
  {
    m_payload = (const unsigned __int8 *)desta;
    m_payloadLength = outLen;
    goto LABEL_11;
  }
LABEL_12:
  bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodePayload", 0x224u, "bdJWS: Error encoding JWS payload");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodePayload", 0x224u, "bdJWS: Error encoding JWS payload");
LABEL_60:
  v32 = 0;
LABEL_61:
  v13 = 0;
LABEL_62:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encode", 0xACu, "Failed to encode JWS");
  return v13;
}

/*
==============
bdJWS::encodeHeader
==============
*/
__int64 bdJWS::encodeHeader(bdJWS *this, char *const jwsHeaderB64, unsigned int *jwsHeaderB64Len, bdJOSE::bdJWSSigAlgorithm sigAlgorithm)
{
  const char *v7; 
  const char *v8; 
  const char *m_type; 
  const char *v10; 
  const char *m_x509Sha1Thumbprint; 
  const char *v12; 
  const char *m_x509Sha256Thumbprint; 
  const char *v14; 
  const char *m_x509CertificateChain; 
  const char *v16; 
  const char *m_x509URL; 
  const char *v18; 
  const char *m_keyId; 
  const char *v20; 
  const char *m_jwkSetURL; 
  const char *v22; 
  const char *m_jsonWebKey; 
  const char *v24; 
  _BYTE *v25; 
  signed __int64 v26; 
  unsigned __int8 v27; 
  bdJOSE::bdJWSSigAlgorithm value; 
  __int64 v30; 
  bdJSONSerializer v31; 
  char buffer[512]; 

  v30 = -2i64;
  value = sigAlgorithm;
  bdHandleAssert(jwsHeaderB64 != NULL, "(jwsHeaderB64 != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodeHeader", 0x1E9u, "bdJWS: Cannot encode to a NULL jwsHeaderB64 buffer");
  bdJSONSerializer::bdJSONSerializer(&v31, buffer, 0x200u);
  if ( !jwsHeaderB64 || !bdJSONSerializer::writeBeginObject(&v31) || (v7 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>(&value), value = none, v8 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value), !bdJSONSerializer::writeString(&v31, v8, v7)) || (m_type = this->m_jwsHeaders.m_type) == NULL || (value = 10, v10 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value), bdJSONSerializer::writeString(&v31, v10, m_type)) )
  {
    m_x509Sha1Thumbprint = this->m_jwsHeaders.m_x509Sha1Thumbprint;
    if ( m_x509Sha1Thumbprint )
    {
      value = 8;
      v12 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value);
      if ( !bdJSONSerializer::writeString(&v31, v12, m_x509Sha1Thumbprint) )
        goto LABEL_32;
    }
  }
  m_x509Sha256Thumbprint = this->m_jwsHeaders.m_x509Sha256Thumbprint;
  if ( !m_x509Sha256Thumbprint || (value = 9, v14 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value), bdJSONSerializer::writeString(&v31, v14, m_x509Sha256Thumbprint)) )
  {
LABEL_32:
    m_x509CertificateChain = this->m_jwsHeaders.m_x509CertificateChain;
    if ( m_x509CertificateChain )
    {
      value = adjusted|0x4;
      v16 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value);
      if ( !bdJSONSerializer::writeString(&v31, v16, m_x509CertificateChain) )
        goto LABEL_31;
    }
  }
  m_x509URL = this->m_jwsHeaders.m_x509URL;
  if ( !m_x509URL || (value = 6, v18 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value), bdJSONSerializer::writeString(&v31, v18, m_x509URL)) )
  {
LABEL_31:
    m_keyId = this->m_jwsHeaders.m_keyId;
    if ( m_keyId )
    {
      value = 5;
      v20 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value);
      if ( !bdJSONSerializer::writeString(&v31, v20, m_keyId) )
        goto LABEL_30;
    }
  }
  m_jwkSetURL = this->m_jwsHeaders.m_jwkSetURL;
  if ( !m_jwkSetURL || (value = adjusted, v22 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value), bdJSONSerializer::writeString(&v31, v22, m_jwkSetURL)) )
  {
LABEL_30:
    m_jsonWebKey = this->m_jwsHeaders.m_jsonWebKey;
    if ( m_jsonWebKey )
    {
      value = 4;
      v24 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>((const bdJOSE::bdJWTRegisteredHeader *)&value);
      if ( !bdJSONSerializer::writeString(&v31, v24, m_jsonWebKey) )
        goto LABEL_26;
    }
  }
  if ( bdJSONSerializer::writeEndObject(&v31) && ((v25 = memchr_0(buffer, 0, 0x200ui64)) == NULL ? (LODWORD(v26) = 512) : (v26 = v25 - buffer), bdBase64::base64URLEncodeAndStrip((const unsigned __int8 *const)buffer, v26, jwsHeaderB64, jwsHeaderB64Len)) )
  {
    v27 = 1;
  }
  else
  {
LABEL_26:
    v27 = 0;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodeHeader", 0x204u, "bdJWS: Error encoding JWS Header");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodeHeader", 0x204u, "bdJWS: Error encoding JWS Header");
  }
  bdJSONSerializer::~bdJSONSerializer(&v31);
  return v27;
}

/*
==============
bdJWS::encodePayload
==============
*/
char bdJWS::encodePayload(bdJWS *this, char *jwsPayloadB64, unsigned int *jwsPayloadB64Len)
{
  unsigned int m_payloadLength; 
  const unsigned __int8 *m_payload; 
  unsigned int outLen[4]; 
  char dest[4096]; 

  m_payloadLength = 0;
  m_payload = (const unsigned __int8 *)&queryFormat.fmt + 3;
  outLen[0] = 0;
  if ( this->m_jwtPayload )
  {
    if ( !bdJWT::encode(this->m_jwtPayload, dest, 0x1000u, outLen) )
      goto LABEL_9;
    m_payloadLength = outLen[0];
    m_payload = (const unsigned __int8 *)dest;
  }
  else if ( this->m_payload )
  {
    if ( this->m_payloadLength )
    {
      m_payloadLength = this->m_payloadLength;
      m_payload = this->m_payload;
      outLen[0] = m_payloadLength;
    }
  }
  if ( bdBase64::base64URLEncodeAndStrip(m_payload, m_payloadLength, jwsPayloadB64, jwsPayloadB64Len) )
    return 1;
LABEL_9:
  bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodePayload", 0x224u, "bdJWS: Error encoding JWS payload");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::encodePayload", 0x224u, "bdJWS: Error encoding JWS payload");
  return 0;
}

/*
==============
bdJWS::getHashAlgorithm
==============
*/
__int64 bdJWS::getHashAlgorithm(const bdJOSE::bdJWSSigAlgorithm sigAlgorithm)
{
  if ( sigAlgorithm == none )
    return 0i64;
  if ( sigAlgorithm == arbitration )
    return 4i64;
  return (unsigned int)(sigAlgorithm != server) + 5;
}

/*
==============
bdJWS::setRegisteredHeader
==============
*/
_BOOL8 bdJWS::setRegisteredHeader(bdJWS *this, bdJOSE::bdJWTRegisteredHeader claim, const char *value)
{
  bool v6; 
  _BOOL8 result; 
  const char *v8; 
  const char *v9; 
  bdJOSE::bdJWTRegisteredHeader valuea; 

  valuea = claim;
  bdHandleAssert((unsigned int)claim <= CRIT, "bdJOSE::isValid(claim)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::setRegisteredHeader", 0x187u, "bdJWS: Invalid bdJWTRegisteredHeader [%d]", claim);
  bdHandleAssert(value != NULL, "(value != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::setRegisteredHeader", 0x188u, "bdJWS: Cannot set a NULL bdJWTRegisteredHeader");
  v6 = (unsigned int)claim <= CRIT && value;
  switch ( claim )
  {
    case JWK_SET_URL:
      this->m_jwsHeaders.m_jwkSetURL = value;
      goto LABEL_16;
    case JSON_WEB_KEY:
      this->m_jwsHeaders.m_jsonWebKey = value;
      goto LABEL_16;
    case KEY_ID:
      this->m_jwsHeaders.m_keyId = value;
      goto LABEL_16;
    case X509_URL:
      this->m_jwsHeaders.m_x509URL = value;
      goto LABEL_16;
    case X509_CERT_CHAIN:
      this->m_jwsHeaders.m_x509CertificateChain = value;
      goto LABEL_16;
    case X509_CERT_SHA1_THUMBPRINT:
      this->m_jwsHeaders.m_x509Sha1Thumbprint = value;
      goto LABEL_16;
    case X509_CERT_SHA256_THUMBPRINT:
      this->m_jwsHeaders.m_x509Sha256Thumbprint = value;
      goto LABEL_16;
    case TYPE:
      this->m_jwsHeaders.m_type = value;
      goto LABEL_16;
    case CONTENT_TYPE:
      this->m_jwsHeaders.m_contentType = value;
      goto LABEL_16;
    case CRIT:
      this->m_jwsHeaders.m_crit = value;
LABEL_16:
      if ( !v6 )
        goto LABEL_19;
      result = v6;
      break;
    default:
      v6 = 0;
LABEL_19:
      v8 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>(&valuea);
      bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::setRegisteredHeader", 0x19Au, "bdJWS: Error setting bdJWTRegisteredHeader [%s]", v8);
      v9 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>(&valuea);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::setRegisteredHeader", 0x19Au, "bdJWS: Error setting bdJWTRegisteredHeader [%s]", v9);
      result = v6;
      break;
  }
  return result;
}

/*
==============
bdJWS::verify
==============
*/
_BOOL8 bdJWS::verify(const char *jwsData, const unsigned int jwsDataLen, unsigned __int8 *payload, unsigned int *payloadLen, const bdJOSE::bdJWSSigAlgorithm *allowedSigAlgorithms, const unsigned int allowedSigAlgorithmsLen, const unsigned __int8 *const key, const unsigned int keyLen)
{
  bool v10; 
  bool v11; 
  bdHashAlgorithms v12; 
  const char *v13; 
  const char *v14; 
  unsigned int v15; 
  unsigned int v16; 
  char *v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  __int64 v21; 
  char v22; 
  char v23; 
  const char *v24; 
  unsigned int v25; 
  __int64 v26; 
  const char *v27; 
  char *v28; 
  int v29; 
  int v30; 
  bool v31; 
  int v32; 
  const char *v33; 
  unsigned int v34; 
  char v35; 
  unsigned int m_digestSize; 
  bool v37; 
  bool v38; 
  char v39; 
  bdRSAKey::bdRSAPKCS v40; 
  const char *v41; 
  const char *v42; 
  bdJOSE::bdJWTRegisteredHeader value; 
  unsigned int keySize; 
  unsigned int destLen; 
  bdJOSE::bdJWTRegisteredHeader v47[2]; 
  char *src; 
  unsigned int srcLen[2]; 
  char *keyBase64; 
  char *v51; 
  unsigned __int8 *v52; 
  unsigned int *v53; 
  bdDynamicHMAC v54; 
  bdJSONDeserializer v55; 
  __int64 v56; 
  char v57[8]; 
  __int64 v58; 
  bdRSAKey buffer1; 
  unsigned __int8 buffer2[64]; 
  unsigned __int8 signature[256]; 
  char dest[512]; 

  v56 = -2i64;
  v53 = payloadLen;
  v52 = payload;
  *(_QWORD *)v47 = allowedSigAlgorithms;
  keyBase64 = (char *)key;
  keySize = keyLen;
  v10 = jwsData != NULL;
  bdHandleAssert(jwsData != NULL, "(jwsData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0xBDu, "bdJWS: Cannot decode a NULL jwsData buffer");
  bdHandleAssert(jwsDataLen != 0, "(jwsDataLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0xBEu, "bdJWS: Cannot decode a zero size jwsData buffer");
  v11 = jwsData && jwsDataLen;
  v12 = BD_HASH_SHA256;
  v13 = NULL;
  src = NULL;
  v51 = NULL;
  v14 = NULL;
  v15 = 0;
  v16 = 0;
  srcLen[0] = 0;
  if ( !v11 )
    goto LABEL_20;
  bdHandleAssert(v10, "(jwsData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verifyJWSFormat", 0x1AAu, "bdJWS: Cannot verify a NULL jwsData buffer");
  if ( jwsData )
  {
    v13 = jwsData;
    src = (char *)jwsData;
    v17 = strchr_0(jwsData, 46);
    v10 = v17 != NULL;
    if ( v17 )
      v15 = (_DWORD)v17 - (_DWORD)jwsData;
  }
  if ( !v10 )
    goto LABEL_98;
  v18 = (char *)&v13[v15 + 1];
  v51 = v18;
  v19 = strchr_0(v18, 46);
  v10 = v19 != NULL;
  if ( v19 )
    v16 = (_DWORD)v19 - (_DWORD)v18;
  if ( !v19 )
    goto LABEL_98;
  v14 = &v18[v16 + 1];
  v20 = strchr_0(v14, 46);
  v10 = v20 == NULL;
  if ( !v20 )
    *(_QWORD *)srcLen = bdStrlen(&v18[v16 + 1]);
  if ( !v10 )
  {
LABEL_98:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verifyJWSFormat", 0x1DFu, "bdJWS: Error validating JWS format");
    if ( !v10 )
    {
LABEL_20:
      destLen = 511;
      goto LABEL_21;
    }
  }
  destLen = 511;
  if ( !bdBase64::base64URLPadAndDecode(src, v15, (unsigned __int8 *const)dest, &destLen) )
  {
LABEL_21:
    v22 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0xDBu, "bdJWS: Header does not parse");
    goto LABEL_22;
  }
  v22 = 1;
  if ( destLen >= 0x200ui64 )
  {
    j___report_rangecheckfailure(v21);
    __debugbreak();
  }
  dest[destLen] = 0;
LABEL_22:
  bdJSONDeserializer::bdJSONDeserializer(&v55);
  if ( v22 && bdJSONDeserializer::parse(&v55, dest) )
  {
    v23 = 1;
  }
  else
  {
    v23 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0xE7u, "JWS Header JSON does not parse");
  }
  *(_QWORD *)v57 = 0i64;
  v58 = 0i64;
  if ( !v23 || (value = ALGORITHM, v24 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>(&value), !bdJSONDeserializer::getString(&v55, v24, v57, 0x10u)) )
  {
    v31 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x106u, "bdJWS: Mandatory \"alg\" header not found");
    goto LABEL_93;
  }
  v25 = 0;
  if ( allowedSigAlgorithmsLen )
  {
    while ( 1 )
    {
      v26 = v25;
      v27 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>((const bdJOSE::bdJWSSigAlgorithm *)(*(_QWORD *)v47 + 4i64 * v25));
      v28 = (char *)(v57 - v27);
      do
      {
        v29 = (unsigned __int8)v28[(_QWORD)v27];
        v30 = *(unsigned __int8 *)v27 - v29;
        if ( v30 )
          break;
        ++v27;
      }
      while ( v29 );
      if ( !v30 )
        break;
      if ( ++v25 >= allowedSigAlgorithmsLen )
        goto LABEL_34;
    }
    v32 = *(_DWORD *)(*(_QWORD *)v47 + 4i64 * v25);
    value = *(_DWORD *)(*(_QWORD *)v47 + 4 * v26);
    v47[0] = CRIT;
    v33 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredHeader>(v47);
    if ( bdJSONDeserializer::hasKey(&v55, v33) )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x10Eu, "bdJWS: \"crit\" header is not supported");
LABEL_37:
      v31 = 0;
      goto LABEL_93;
    }
    if ( v52 && *v53 && !bdBase64::base64URLPadAndDecode(v51, v16, v52, v53) )
      goto LABEL_37;
    v34 = v16 + v15 + 1;
    switch ( v32 )
    {
      case 0:
      case 1:
      case 2:
        if ( !v32 )
          goto LABEL_46;
        if ( v32 == 1 )
        {
          v12 = BD_HASH_SHA384;
          v35 = 1;
        }
        else
        {
          LOBYTE(v12) = v32 != 2;
          v12 += 5;
          if ( v32 == 2 )
LABEL_46:
            v35 = 1;
          else
            v35 = 0;
        }
        bdDynamicHMAC::bdDynamicHMAC(&v54, v12, (const unsigned __int8 *const)keyBase64, keySize);
        bdHandleAssert(v54.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
        m_digestSize = v54.m_hmac->m_digestSize;
        keySize = m_digestSize;
        if ( v35 && (bdHandleAssert(1, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL"), v54.m_hmac->process(v54.m_hmac, (const unsigned __int8 *const)src, v34)) && (bdHandleAssert(v54.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL"), v54.m_hmac->getData(v54.m_hmac, buffer2, &keySize)) && keySize == m_digestSize )
        {
          value = m_digestSize;
          if ( bdBase64::base64URLPadAndDecode(v14, srcLen[0], (unsigned __int8 *const)&buffer1, (unsigned int *)&value) && value == m_digestSize && bdCryptoUtils::constTimeCompare((const volatile unsigned __int8 *volatile)&buffer1, buffer2, m_digestSize) )
          {
            v31 = 1;
LABEL_58:
            bdDynamicHMAC::~bdDynamicHMAC(&v54);
            goto LABEL_84;
          }
        }
        else
        {
          value = m_digestSize;
        }
        v31 = 0;
        goto LABEL_58;
      case 3:
      case 4:
      case 5:
      case 9:
      case 10:
      case 11:
        v47[0] = 256;
        v37 = bdBase64::base64URLPadAndDecode(v14, srcLen[0], signature, (unsigned int *)v47);
        bdRSAKey::bdRSAKey(&buffer1);
        if ( keySize )
        {
          if ( !v37 )
            goto LABEL_66;
          v38 = bdRSAKey::importKey(&buffer1, (const unsigned __int8 *)keyBase64, keySize);
        }
        else
        {
          if ( !v37 )
            goto LABEL_66;
          v38 = bdRSAKey::import(&buffer1, keyBase64);
        }
        if ( v38 )
        {
          v39 = 1;
          goto LABEL_67;
        }
LABEL_66:
        v39 = 0;
LABEL_67:
        v40 = BD_RSA_PKCS_1_v1_5;
        if ( (unsigned int)(v32 - 3) > 2 )
          v40 = BD_RSA_PKCS_1_PSS;
        if ( v32 != 3 && v32 != 9 )
        {
          if ( v32 == 4 || v32 == 10 )
          {
            v12 = BD_HASH_SHA384;
          }
          else if ( v32 == 5 || v32 == 11 )
          {
            v12 = BD_HASH_SHA512;
          }
          else
          {
            v12 = BD_MAX_HASH_ALGORITHMS;
          }
        }
        v31 = v39 && v12 != BD_MAX_HASH_ALGORITHMS && bdRSAKey::verifySignature(&buffer1, signature, src, v34, v12, v40);
        bdRSAKey::~bdRSAKey(&buffer1);
LABEL_84:
        if ( !v31 )
          goto LABEL_91;
        goto LABEL_94;
      case 12:
        if ( !srcLen[0] && !*v14 )
        {
          v31 = 1;
          goto LABEL_94;
        }
        v31 = 0;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x164u, "bdJWS: Error JWS Signature present when \"alg\" is \"none\"");
LABEL_91:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x16Fu, "bdJWS: JWS signature did NOT verify");
        goto LABEL_93;
      default:
        v41 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>((const bdJOSE::bdJWSSigAlgorithm *)&value);
        bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x168u, "bdJWS: Unsupported Signature Algorithm [%s]", v41);
        v42 = bdJOSE::getString<enum bdJOSE::bdJWSSigAlgorithm>((const bdJOSE::bdJWSSigAlgorithm *)&value);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x168u, "bdJWS: Unsupported Signature Algorithm [%s]", v42);
        v31 = 0;
        goto LABEL_91;
    }
  }
LABEL_34:
  v31 = 0;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x101u, "bdJWS: Signature Algorithm [%d] does not match expected", 12);
LABEL_93:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verify", 0x176u, "bdJWS: Failed to verify and decode JWS");
LABEL_94:
  bdJSONDeserializer::~bdJSONDeserializer(&v55);
  return v31;
}

/*
==============
bdJWS::verifyJWSFormat
==============
*/
_BOOL8 bdJWS::verifyJWSFormat(const char *const jwsData, const char **jwsHeaderB64, unsigned int *jwsHeaderB64Len, const char **jwsPayloadB64, unsigned int *jwsPayloadB64Len, const char **jwsSignatureB64, unsigned int *jwsSignatureB64Len)
{
  bool v8; 
  char *v12; 
  const char *v13; 
  char *v14; 
  const char *v15; 
  char *v16; 

  v8 = jwsData != NULL;
  bdHandleAssert(jwsData != NULL, "(jwsData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verifyJWSFormat", 0x1AAu, "bdJWS: Cannot verify a NULL jwsData buffer");
  if ( jwsData )
  {
    *jwsHeaderB64 = jwsData;
    v12 = strchr_0(jwsData, 46);
    v8 = v12 != NULL;
    if ( v12 )
      *jwsHeaderB64Len = (_DWORD)v12 - *(_DWORD *)jwsHeaderB64;
  }
  if ( !v8 )
    goto LABEL_11;
  v13 = &(*jwsHeaderB64)[*jwsHeaderB64Len + 1];
  *jwsPayloadB64 = v13;
  v14 = strchr_0(v13, 46);
  v8 = v14 != NULL;
  if ( v14 )
    *jwsPayloadB64Len = (_DWORD)v14 - *(_DWORD *)jwsPayloadB64;
  if ( !v14 )
    goto LABEL_11;
  v15 = &(*jwsPayloadB64)[*jwsPayloadB64Len + 1];
  *jwsSignatureB64 = v15;
  v16 = strchr_0(v15, 46);
  v8 = v16 == NULL;
  if ( !v16 )
    *jwsSignatureB64Len = bdStrlen(*jwsSignatureB64);
  if ( !v8 )
LABEL_11:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjws.cpp", "bdJWS::verifyJWSFormat", 0x1DFu, "bdJWS: Error validating JWS format");
  return v8;
}

