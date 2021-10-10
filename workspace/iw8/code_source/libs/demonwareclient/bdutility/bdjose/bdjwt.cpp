/*
==============
bdJWT::setRegisteredClaim
==============
*/

bool __fastcall bdJWT::setRegisteredClaim(bdJWT *this, bdJOSE::bdJWTRegisteredClaim claim, const __int64 integerClaim)
{
  return ?setRegisteredClaim@bdJWT@@QEAA_NW4bdJWTRegisteredClaim@bdJOSE@@_J@Z(this, claim, integerClaim);
}

/*
==============
bdJWT::setRegisteredClaim
==============
*/

bool __fastcall bdJWT::setRegisteredClaim(bdJWT *this, bdJOSE::bdJWTRegisteredClaim claim, const char *const stringClaim)
{
  return ?setRegisteredClaim@bdJWT@@QEAA_NW4bdJWTRegisteredClaim@bdJOSE@@QEBD@Z(this, claim, stringClaim);
}

/*
==============
bdJWT::~bdJWT
==============
*/

void __fastcall bdJWT::~bdJWT(bdJWT *this)
{
  ??1bdJWT@@QEAA@XZ(this);
}

/*
==============
bdJWT::bdJWT
==============
*/

void __fastcall bdJWT::bdJWT(bdJWT *this, const bdJWTClaim *const claims, const unsigned int numClaims)
{
  ??0bdJWT@@QEAA@QEBUbdJWTClaim@@I@Z(this, claims, numClaims);
}

/*
==============
bdJWT::setClaims
==============
*/

bool __fastcall bdJWT::setClaims(bdJWT *this, const bdJWTClaim *const claims, const unsigned int numClaims)
{
  return ?setClaims@bdJWT@@QEAA_NQEBUbdJWTClaim@@I@Z(this, claims, numClaims);
}

/*
==============
bdJWT::encode
==============
*/

bool __fastcall bdJWT::encode(bdJWT *this, char *const dest, const unsigned int destLen, unsigned int *outLen)
{
  return ?encode@bdJWT@@QEAA_NQEADIPEAI@Z(this, dest, destLen, outLen);
}

/*
==============
bdJWT::bdJWT
==============
*/

void __fastcall bdJWT::bdJWT(bdJWT *this)
{
  ??0bdJWT@@QEAA@XZ(this);
}

/*
==============
bdJWT::bdJWT
==============
*/
void bdJWT::bdJWT(bdJWT *this, const bdJWTClaim *const claims, const unsigned int numClaims)
{
  this->m_claims = claims;
  this->m_expiration = 0x8000000000000000ui64;
  this->m_notBefore = 0x8000000000000000ui64;
  this->m_issuedAt = 0x8000000000000000ui64;
  this->m_issuer = NULL;
  this->m_subject = NULL;
  this->m_audience = NULL;
  this->m_jwtId = NULL;
  this->m_numClaims = numClaims;
  this->m_initialized = 1;
}

/*
==============
bdJWT::bdJWT
==============
*/
void bdJWT::bdJWT(bdJWT *this)
{
  this->m_initialized = 0;
  this->m_claims = NULL;
  this->m_expiration = 0x8000000000000000ui64;
  this->m_notBefore = 0x8000000000000000ui64;
  this->m_issuedAt = 0x8000000000000000ui64;
  this->m_numClaims = 0;
  this->m_issuer = NULL;
  this->m_subject = NULL;
  this->m_audience = NULL;
  this->m_jwtId = NULL;
}

/*
==============
bdJWT::~bdJWT
==============
*/
void bdJWT::~bdJWT(bdJWT *this)
{
  ;
}

/*
==============
bdJWT::encode
==============
*/
__int64 bdJWT::encode(bdJWT *this, char *const dest, const unsigned int destLen, unsigned int *outLen)
{
  unsigned __int8 v6; 
  bool v7; 
  __int64 i; 
  const bdJWTClaim *m_claims; 
  __int64 m_type; 
  __int64 m_expiration; 
  const char *v12; 
  __int64 m_issuedAt; 
  const char *v14; 
  __int64 m_notBefore; 
  const char *v16; 
  const char *m_issuer; 
  const char *v18; 
  const char *m_subject; 
  const char *v20; 
  const char *m_audience; 
  const char *v22; 
  const char *m_jwtId; 
  const char *v24; 
  bool v25; 
  bdJOSE::bdJWTRegisteredClaim value; 
  __int64 v28; 
  bdJSONSerializer v29; 

  v28 = -2i64;
  v6 = 0;
  if ( !this->m_initialized )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJWT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjwt.cpp", "bdJWT::encode", 0x99u, "bdJWT: Cannot encode JWT without setting claims");
LABEL_45:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjwt.cpp", "bdJWT::encode", 0x9Eu, "bdJWT: Failed to encode JWT claims");
    return v6;
  }
  bdJSONSerializer::bdJSONSerializer(&v29, dest, destLen);
  v7 = bdJSONSerializer::writeBeginObject(&v29);
  for ( i = 0i64; (unsigned int)i < this->m_numClaims; i = (unsigned int)(i + 1) )
  {
    m_claims = this->m_claims;
    m_type = m_claims[i].m_type;
    if ( (_DWORD)m_type )
    {
      switch ( (_DWORD)m_type )
      {
        case 1:
          if ( !v7 )
            goto LABEL_9;
          v25 = bdJSONSerializer::writeInt64(&v29, m_claims[i].m_name, m_claims[i].m_value.m_int64, 0);
          break;
        case 2:
          if ( !v7 )
            goto LABEL_9;
          v25 = bdJSONSerializer::writeUInt64(&v29, m_claims[i].m_name, m_claims[i].m_value.m_uint64, 0);
          break;
        case 3:
          if ( !v7 )
            goto LABEL_9;
          v25 = bdJSONSerializer::writeFloat64(&v29, m_claims[i].m_name, m_claims[i].m_value.m_float64, 0);
          break;
        case 4:
          if ( !v7 )
            goto LABEL_9;
          v25 = bdJSONSerializer::writeBoolean(&v29, m_claims[i].m_name, m_claims[i].m_value.m_bool);
          break;
        default:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJWT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjwt.cpp", "bdJWT::encode", 0x7Fu, "bdJWT: Unsupported JSON data type [%s]", bdJSONTypeString_2[m_type]);
          goto LABEL_9;
      }
    }
    else
    {
      if ( !v7 )
        goto LABEL_9;
      v25 = bdJSONSerializer::writeString(&v29, m_claims[i].m_name, m_claims[i].m_value.m_string);
    }
    if ( v25 )
    {
      v7 = 1;
      continue;
    }
LABEL_9:
    v7 = 0;
  }
  if ( v7 && (m_expiration = this->m_expiration, m_expiration != 0x8000000000000000ui64) && (value = EXPIRATION, v12 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value), !bdJSONSerializer::writeInt64(&v29, v12, m_expiration, 0)) || (m_issuedAt = this->m_issuedAt, m_issuedAt == 0x8000000000000000ui64) || (value = ISSUED_AT, v14 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value), bdJSONSerializer::writeInt64(&v29, v14, m_issuedAt, 0)) )
  {
    m_notBefore = this->m_notBefore;
    if ( m_notBefore != 0x8000000000000000ui64 )
    {
      value = NOT_BEFORE;
      v16 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
      if ( !bdJSONSerializer::writeInt64(&v29, v16, m_notBefore, 0) )
        goto LABEL_50;
    }
  }
  m_issuer = this->m_issuer;
  if ( !m_issuer || (value = ISSUER, v18 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value), bdJSONSerializer::writeString(&v29, v18, m_issuer)) )
  {
LABEL_50:
    m_subject = this->m_subject;
    if ( m_subject )
    {
      value = SUBJECT;
      v20 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
      if ( !bdJSONSerializer::writeString(&v29, v20, m_subject) )
        goto LABEL_49;
    }
  }
  m_audience = this->m_audience;
  if ( !m_audience || (value = AUDIENCE, v22 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value), bdJSONSerializer::writeString(&v29, v22, m_audience)) )
  {
LABEL_49:
    m_jwtId = this->m_jwtId;
    if ( m_jwtId )
    {
      value = JWT_ID;
      v24 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
      if ( !bdJSONSerializer::writeString(&v29, v24, m_jwtId) )
        goto LABEL_41;
    }
  }
  if ( bdJSONSerializer::writeEndObject(&v29) )
  {
    v6 = 1;
    if ( outLen )
      *outLen = bdJSONSerializer::length(&v29);
  }
  else
  {
LABEL_41:
    v6 = 0;
  }
  bdJSONSerializer::~bdJSONSerializer(&v29);
  if ( !v6 )
    goto LABEL_45;
  return v6;
}

/*
==============
bdJWT::setClaims
==============
*/
bool bdJWT::setClaims(bdJWT *this, const bdJWTClaim *const claims, const unsigned int numClaims)
{
  bool result; 

  this->m_claims = claims;
  result = 1;
  this->m_numClaims = numClaims;
  this->m_initialized = 1;
  return result;
}

/*
==============
bdJWT::setRegisteredClaim
==============
*/
bool bdJWT::setRegisteredClaim(bdJWT *this, bdJOSE::bdJWTRegisteredClaim claim, const char *const stringClaim)
{
  __int32 v3; 
  __int32 v4; 
  bool result; 

  if ( claim )
  {
    v3 = claim - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 4 )
        {
          this->m_jwtId = stringClaim;
          result = 1;
          this->m_initialized = 1;
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdJWT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjwt.cpp", "bdJWT::setRegisteredClaim", 0x5Fu, "bdJWT: Attempt to set integer claim to non-integer value");
          return 0;
        }
      }
      else
      {
        this->m_audience = stringClaim;
        result = 1;
        this->m_initialized = 1;
      }
    }
    else
    {
      this->m_subject = stringClaim;
      result = 1;
      this->m_initialized = 1;
    }
  }
  else
  {
    this->m_issuer = stringClaim;
    result = 1;
    this->m_initialized = 1;
  }
  return result;
}

/*
==============
bdJWT::setRegisteredClaim
==============
*/
bool bdJWT::setRegisteredClaim(bdJWT *this, bdJOSE::bdJWTRegisteredClaim claim, const __int64 integerClaim)
{
  __int32 v3; 
  __int32 v4; 
  bool result; 

  v3 = claim - 3;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        this->m_issuedAt = integerClaim;
        result = 1;
        this->m_initialized = 1;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJWT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdutility\\bdjose\\bdjwt.cpp", "bdJWT::setRegisteredClaim", 0x47u, "bdJWT: Attempt to set non-integer claim to integer value");
        return 0;
      }
    }
    else
    {
      this->m_notBefore = integerClaim;
      result = 1;
      this->m_initialized = 1;
    }
  }
  else
  {
    this->m_expiration = integerClaim;
    result = 1;
    this->m_initialized = 1;
  }
  return result;
}

