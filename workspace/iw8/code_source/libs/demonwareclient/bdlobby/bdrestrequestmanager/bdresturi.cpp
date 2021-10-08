/*
==============
bdRESTURI::encodeArrayElement
==============
*/

bool __fastcall bdRESTURI::encodeArrayElement(bdRESTURI *this, const bdUserAccountID *accountID, char *dst, unsigned int *dstLength, unsigned int maxDstLength)
{
  return ?encodeArrayElement@bdRESTURI@@IEAA_NAEBVbdUserAccountID@@PEADAEAII@Z(this, accountID, dst, dstLength, maxDstLength);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int8 value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDE@Z(this, key, value);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char *value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBD0@Z(this, key, value);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const int value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDH@Z(this, key, value);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char *value, bdRESTURI::bdRESTURIEncodingType encodingToPerform)
{
  return ?addQueryParam@bdRESTURI@@IEAA_NPEBD0W4bdRESTURIEncodingType@1@@Z(this, key, value, encodingToPerform);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const __int16 value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDF@Z(this, key, value);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, __int64 in)
{
  return ??6bdRESTURI@@IEAAAEAV0@_J@Z(this, in);
}

/*
==============
bdRESTURI::buildURIString
==============
*/

bool __fastcall bdRESTURI::buildURIString(bdRESTURI *this)
{
  return ?buildURIString@bdRESTURI@@IEAA_NXZ(this);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int64 value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBD_K@Z(this, key, value);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, __int16 in)
{
  return ??6bdRESTURI@@IEAAAEAV0@F@Z(this, in);
}

/*
==============
bdRESTURI::endParams
==============
*/

const bdRESTURI::bdURIParam *__fastcall bdRESTURI::endParams(bdRESTURI *this)
{
  return ?endParams@bdRESTURI@@IEBAPEBUbdURIParam@1@XZ(this);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, const char *in)
{
  return ??6bdRESTURI@@IEAAAEAV0@PEBD@Z(this, in);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, const bdRESTURI::bdNonEncodedString *in)
{
  return ??6bdRESTURI@@IEAAAEAV0@AEBVbdNonEncodedString@0@@Z(this, in);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDD@Z(this, key, value);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, unsigned __int64 in)
{
  return ??6bdRESTURI@@IEAAAEAV0@_K@Z(this, in);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, char in)
{
  return ??6bdRESTURI@@IEAAAEAV0@D@Z(this, in);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDC@Z(this, key, value);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, unsigned int in)
{
  return ??6bdRESTURI@@IEAAAEAV0@I@Z(this, in);
}

/*
==============
bdRESTURI::appendStringEncoded
==============
*/

bool __fastcall bdRESTURI::appendStringEncoded(const char *in, char *dst, unsigned int *dstLength, unsigned int maxDstLength)
{
  return ?appendStringEncoded@bdRESTURI@@CA_NPEBDPEADAEAII@Z(in, dst, dstLength, maxDstLength);
}

/*
==============
bdRESTURI::bdRESTURI
==============
*/

void __fastcall bdRESTURI::bdRESTURI(bdRESTURI *this)
{
  ??0bdRESTURI@@QEAA@XZ(this);
}

/*
==============
bdRESTURI::percentEncode
==============
*/

void __fastcall bdRESTURI::percentEncode(char c, char *dst)
{
  ?percentEncode@bdRESTURI@@CAXDPEAD@Z(c, dst);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int16 value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDG@Z(this, key, value);
}

/*
==============
bdRESTURI::beginParams
==============
*/

const bdRESTURI::bdURIParam *__fastcall bdRESTURI::beginParams(bdRESTURI *this)
{
  return ?beginParams@bdRESTURI@@IEBAPEBUbdURIParam@1@XZ(this);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, unsigned __int16 in)
{
  return ??6bdRESTURI@@IEAAAEAV0@G@Z(this, in);
}

/*
==============
bdRESTURI::appendStringNonEncoded
==============
*/

bdRESTURI *__fastcall bdRESTURI::appendStringNonEncoded(bdRESTURI *this, const char *in)
{
  return ?appendStringNonEncoded@bdRESTURI@@AEAAAEAV1@PEBD@Z(this, in);
}

/*
==============
bdRESTURI::reset
==============
*/

void __fastcall bdRESTURI::reset(bdRESTURI *this)
{
  ?reset@bdRESTURI@@IEAAXXZ(this);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned int value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBDI@Z(this, key, value);
}

/*
==============
bdRESTURI::getURILength
==============
*/

unsigned int __fastcall bdRESTURI::getURILength(bdRESTURI *this)
{
  return ?getURILength@bdRESTURI@@IEBAIXZ(this);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, unsigned __int8 in)
{
  return ??6bdRESTURI@@IEAAAEAV0@E@Z(this, in);
}

/*
==============
bdRESTURI::isOK
==============
*/

bool __fastcall bdRESTURI::isOK(bdRESTURI *this)
{
  return ?isOK@bdRESTURI@@QEBA_NXZ(this);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/

bool __fastcall bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const __int64 value)
{
  return ?addQueryParam@bdRESTURI@@QEAA_NPEBD_J@Z(this, key, value);
}

/*
==============
bdRESTURI::getURIString
==============
*/

const char *__fastcall bdRESTURI::getURIString(bdRESTURI *this)
{
  return ?getURIString@bdRESTURI@@IEBAPEBDXZ(this);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, const bdRESTURI::bdDummyArg *__formal)
{
  return ??6bdRESTURI@@IEAAAEAV0@AEBVbdDummyArg@0@@Z(this, __formal);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, int in)
{
  return ??6bdRESTURI@@IEAAAEAV0@H@Z(this, in);
}

/*
==============
bdRESTURI::appendNextBlock
==============
*/

void __fastcall bdRESTURI::appendNextBlock(bdRESTURI *this, const char **in)
{
  ?appendNextBlock@bdRESTURI@@AEAAXAEAPEBD@Z(this, in);
}

/*
==============
bdRESTURI::operator<<
==============
*/

bdRESTURI *__fastcall bdRESTURI::operator<<(bdRESTURI *this, char in)
{
  return ??6bdRESTURI@@IEAAAEAV0@C@Z(this, in);
}

/*
==============
bdRESTURI::isCharUnreserved
==============
*/

bool __fastcall bdRESTURI::isCharUnreserved(char c)
{
  return ?isCharUnreserved@bdRESTURI@@CA_ND@Z(c);
}

/*
==============
bdRESTURI::formatPath
==============
*/

bool __fastcall bdRESTURI::formatPath(bdRESTURI *this, const char *formatString)
{
  return ?formatPath@bdRESTURI@@QEAA_NPEBD@Z(this, formatString);
}

/*
==============
bdRESTURI::bdRESTURI
==============
*/
void bdRESTURI::bdRESTURI(bdRESTURI *this)
{
  this->m_isOK = 1;
  this->m_length = 0;
  this->m_pathLength = 0;
  this->m_paramCount = 0;
  this->m_uri[0] = 0;
  this->m_path[0] = 0;
  this->m_paramData[0] = 0;
  this->m_paramDataEnd = this->m_paramData;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, const bdRESTURI::bdDummyArg *__formal)
{
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, const bdRESTURI::bdNonEncodedString *in)
{
  const char *m_str; 
  __int64 m_pathLength; 
  bool m_isOK; 
  __int64 v6; 

  m_str = in->m_str;
  if ( this->m_isOK )
  {
    while ( *m_str )
    {
      m_pathLength = this->m_pathLength;
      if ( (unsigned int)(m_pathLength + 1) >= 0x1000 )
      {
        this->m_isOK = 0;
        m_isOK = 0;
      }
      else
      {
        this->m_path[m_pathLength] = *m_str++;
        ++this->m_pathLength;
        m_isOK = this->m_isOK;
      }
      if ( !m_isOK )
        return this;
    }
    v6 = this->m_pathLength;
    if ( (unsigned int)v6 < 0x1000 )
      this->m_path[v6] = 0;
  }
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, char in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%hhi", (unsigned int)in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, char in)
{
  bool v2; 
  char ina; 
  char v6; 

  v2 = !this->m_isOK;
  ina = in;
  v6 = 0;
  if ( v2 || !bdRESTURI::appendStringEncoded(&ina, this->m_path, &this->m_pathLength, 0x1000u) )
  {
    this->m_isOK = 0;
    return this;
  }
  else
  {
    this->m_isOK = 1;
    return this;
  }
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, unsigned __int8 in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%hhu", in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, __int16 in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%hi", (unsigned int)in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, unsigned __int16 in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%hu", in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, int in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%i", (unsigned int)in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, unsigned int in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%u", in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, const char *in)
{
  if ( this->m_isOK && bdRESTURI::appendStringEncoded(in, this->m_path, &this->m_pathLength, 0x1000u) )
  {
    this->m_isOK = 1;
    return this;
  }
  else
  {
    this->m_isOK = 0;
    return this;
  }
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, __int64 in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%I64i", in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::operator<<
==============
*/
bdRESTURI *bdRESTURI::operator<<(bdRESTURI *this, unsigned __int64 in)
{
  unsigned int v3; 
  bool v4; 
  char buf[64]; 

  v3 = bdSnprintf(buf, 0x40ui64, "%I64u", in);
  v4 = this->m_isOK && v3 <= 0x3F;
  this->m_isOK = v4;
  this->m_isOK = v4 && bdRESTURI::appendStringEncoded(buf, this->m_path, &this->m_pathLength, 0x400u);
  return this;
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
_BOOL8 bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char *value, bdRESTURI::bdRESTURIEncodingType encodingToPerform)
{
  unsigned __int64 v7; 
  _BYTE *v8; 
  bool m_isOK; 
  _BYTE *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  __int64 m_paramCount; 
  bdRESTURI::bdURIParam *v14; 
  unsigned int v15; 
  char *m_paramDataEnd; 
  bool v17; 
  char *v18; 
  bool v19; 
  __int64 v21; 

  if ( !this->m_isOK )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x17Du, "addQueryParam called on an invalid bdRESTURI object.");
    return this->m_isOK;
  }
  if ( this->m_paramCount >= 0x20 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x130u, "Failed to add new query parameter. Too many parameters in use. Max is [%d]", 32);
    this->m_isOK = 0;
  }
  if ( !key )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x137u, "Failed to add new query parameter. Key must not be null.");
    v7 = 0i64;
    this->m_isOK = 0;
LABEL_11:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x146u, "Failed to add new query parameter. Key must not be empty.");
    goto LABEL_12;
  }
  v7 = 64i64;
  v8 = memchr_0(key, 0, 0x40ui64);
  if ( v8 )
    v7 = v8 - key;
  if ( v7 <= 0x3F )
  {
    if ( v7 )
      goto LABEL_13;
    goto LABEL_11;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x141u, "Failed to add new query parameter. Key [%s] too long. Max length is %d", key, 63);
LABEL_12:
  this->m_isOK = 0;
LABEL_13:
  if ( value )
  {
    m_isOK = this->m_isOK;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x14Cu, "Failed to add new query parameter for key [%s]. Value must not be NULL", key);
    this->m_isOK = 0;
    m_isOK = 0;
    value = (char *)&queryFormat.fmt + 3;
  }
  v10 = memchr_0(value, 0, 0x1001ui64);
  if ( !v10 )
  {
    v11 = 4097i64;
LABEL_20:
    LODWORD(v21) = 4096;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x156u, "Failed to add new query parameter. Value for key [%s] too long. Max length is %d", key, v21);
    m_isOK = 0;
    this->m_isOK = 0;
    goto LABEL_21;
  }
  v11 = v10 - value;
  if ( (unsigned __int64)(v10 - value) > 0x1000 )
    goto LABEL_20;
LABEL_21:
  v12 = (char *)this - this->m_paramDataEnd + 4880;
  if ( v7 + v11 + 2 > v12 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x162u, "Failed to add new query parameter. Not enough remaining space for key/value. Required: %d - Remaining: %d - Max: %d", v7 + v11 + 2, v12, 4096);
    m_isOK = 0;
    this->m_isOK = 0;
  }
  if ( m_isOK )
  {
    m_paramCount = this->m_paramCount;
    v14 = &this->m_params[m_paramCount];
    v15 = m_paramCount + 1;
    m_paramDataEnd = this->m_paramDataEnd;
    this->m_paramCount = v15;
    this->m_isOK = bdStrlcpy(m_paramDataEnd, key, v12) == v7;
    v14->m_key = this->m_paramDataEnd;
    v17 = !this->m_isOK;
    v18 = &this->m_paramDataEnd[v7 + 1];
    this->m_paramDataEnd = v18;
    v19 = !v17 && bdStrlcpy(v18, value, v12 - v7 - 1) == v11;
    this->m_isOK = v19;
    v14->m_value = this->m_paramDataEnd;
    this->m_paramDataEnd += v11 + 1;
    v14->encodingToPerform = encodingToPerform;
    if ( !this->m_isOK )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::addQueryParam", 0x177u, "Failed to write the key/value query parameters to internal buffer.");
  }
  return this->m_isOK;
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char *value)
{
  return bdRESTURI::addQueryParam(this, key, value, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%hhi", (unsigned int)value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const char value)
{
  char valuea; 
  char v5; 

  valuea = value;
  v5 = 0;
  return bdRESTURI::addQueryParam(this, key, &valuea, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int8 value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%hhu", value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const __int16 value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%hi", (unsigned int)value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int16 value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%hu", value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const int value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%i", (unsigned int)value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned int value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%u", value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const __int64 value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%I64i", value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::addQueryParam
==============
*/
bool bdRESTURI::addQueryParam(bdRESTURI *this, const char *key, const unsigned __int64 value)
{
  char buf[64]; 

  bdSnprintf(buf, 0x40ui64, "%I64u", value);
  return bdRESTURI::addQueryParam(this, key, buf, BD_ENCODE);
}

/*
==============
bdRESTURI::appendNextBlock
==============
*/
void bdRESTURI::appendNextBlock(bdRESTURI *this, const char **in)
{
  char v3; 
  bool m_isOK; 
  __int64 m_pathLength; 
  char v6; 

  if ( this->m_isOK )
  {
    while ( 1 )
    {
      v3 = **in;
      if ( !v3 || v3 == 123 )
        break;
      if ( this->m_pathLength + 1 >= 0x1000 )
      {
        this->m_isOK = 0;
        m_isOK = 0;
      }
      else
      {
        ++*in;
        this->m_path[this->m_pathLength++] = v3;
        m_isOK = this->m_isOK;
      }
      if ( !m_isOK )
        goto LABEL_11;
    }
    m_pathLength = this->m_pathLength;
    if ( (unsigned int)m_pathLength < 0x1000 )
      this->m_path[m_pathLength] = 0;
  }
  do
  {
LABEL_11:
    if ( !this->m_isOK )
      break;
    v6 = **in;
    if ( !v6 )
      break;
    ++*in;
  }
  while ( v6 != 125 );
}

/*
==============
bdRESTURI::appendStringEncoded
==============
*/
bool bdRESTURI::appendStringEncoded(const char *in, char *dst, unsigned int *dstLength, unsigned int maxDstLength)
{
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  bool result; 
  __int64 v13; 
  char buf[40]; 

  v8 = 0x43FFFFFF01FFBi64;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)in;
    if ( !(_BYTE)v9 )
      break;
    if ( ((unsigned __int8)(v9 - 45) > 0x32u || !_bittest64(&v8, (unsigned int)(v9 - 45))) && (unsigned __int8)(v9 - 97) > 0x19u && (_BYTE)v9 != 126 )
    {
      LODWORD(v10) = *dstLength;
      goto LABEL_8;
    }
    v10 = *dstLength;
    if ( (int)v10 + 1 >= maxDstLength )
    {
LABEL_8:
      if ( (int)v10 + 3 >= maxDstLength )
        return 0;
      v11 = (unsigned int)v10;
      bdSnprintf(buf, 4ui64, "%%%02X", (unsigned __int8)v9);
      dst[v11] = buf[0];
      dst[v11 + 1] = buf[1];
      dst[v11 + 2] = buf[2];
      *dstLength += 3;
      ++in;
    }
    else
    {
      dst[v10] = v9;
      ++*dstLength;
      ++in;
    }
  }
  v13 = *dstLength;
  result = 1;
  if ( (unsigned int)v13 < maxDstLength )
    dst[v13] = 0;
  return result;
}

/*
==============
bdRESTURI::appendStringNonEncoded
==============
*/
bdRESTURI *bdRESTURI::appendStringNonEncoded(bdRESTURI *this, const char *in)
{
  __int64 m_pathLength; 
  bool m_isOK; 
  __int64 v6; 

  if ( this->m_isOK )
  {
    while ( *in )
    {
      m_pathLength = this->m_pathLength;
      if ( (unsigned int)(m_pathLength + 1) >= 0x1000 )
      {
        this->m_isOK = 0;
        m_isOK = 0;
      }
      else
      {
        this->m_path[m_pathLength] = *in++;
        ++this->m_pathLength;
        m_isOK = this->m_isOK;
      }
      if ( !m_isOK )
        return this;
    }
    v6 = this->m_pathLength;
    if ( (unsigned int)v6 < 0x1000 )
      this->m_path[v6] = 0;
  }
  return this;
}

/*
==============
bdRESTURI::beginParams
==============
*/
bdRESTURI::bdURIParam *bdRESTURI::beginParams(bdRESTURI *this)
{
  return this->m_params;
}

/*
==============
bdRESTURI::buildURIString
==============
*/
_BOOL8 bdRESTURI::buildURIString(bdRESTURI *this)
{
  char *m_uri; 
  unsigned int v3; 
  bool m_isOK; 
  bdRESTURI::bdURIParam *m_params; 
  bdRESTURI::bdURIParam *v6; 
  __int64 m_length; 
  __int64 v8; 
  bool v9; 
  bdRESTURI::bdRESTURIEncodingType encodingToPerform; 
  const char *m_value; 
  _BYTE *v12; 
  __int64 v13; 
  __int64 v14; 
  bool v15; 
  __int64 v16; 
  size_t v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  _BYTE *v20; 
  __int64 v21; 
  _BYTE *v22; 
  size_t v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  unsigned int line; 
  char *format; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 

  if ( this->m_isOK )
  {
    m_uri = this->m_uri;
    this->m_length = 0;
    v3 = bdStrlcpy(this->m_uri, this->m_path, 0x1000ui64);
    if ( v3 >= 0x1000 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::buildURIString", 0x29u, "Path is too long to fit into URI's buffer");
      m_isOK = 0;
      this->m_isOK = 0;
    }
    else
    {
      this->m_length = v3;
      m_isOK = this->m_isOK;
    }
    m_params = this->m_params;
    v6 = this->m_params;
    if ( m_isOK )
    {
      do
      {
        if ( v6 == &this->m_params[this->m_paramCount] )
          break;
        m_length = this->m_length;
        if ( (unsigned int)(m_length + 1) < 0x1000 && (v6 != m_params ? (this->m_uri[m_length] = 38) : (this->m_uri[m_length] = 63), (++this->m_length, this->m_isOK) && bdRESTURI::appendStringEncoded(v6->m_key, m_uri, &this->m_length, 0x1000u) && (v8 = this->m_length, this->m_isOK = 1, (unsigned int)(v8 + 1) < 0x1000)) )
        {
          this->m_uri[v8] = 61;
          ++this->m_length;
          v9 = this->m_isOK;
        }
        else
        {
          this->m_isOK = 0;
          v9 = 0;
        }
        encodingToPerform = v6->encodingToPerform;
        if ( encodingToPerform )
        {
          if ( encodingToPerform == BD_ENCODE )
          {
            if ( v9 && bdRESTURI::appendStringEncoded(v6->m_value, m_uri, &this->m_length, 0x1000u) )
            {
              v9 = 1;
              this->m_isOK = 1;
            }
            else
            {
              v9 = 0;
              this->m_isOK = 0;
            }
          }
          else
          {
            bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::buildURIString", 0x62u, "unhandled encoding case");
            v9 = 0;
            this->m_isOK = 0;
          }
        }
        else if ( v9 )
        {
          this->m_uri[this->m_length] = 0;
          m_value = v6->m_value;
          v12 = memchr_0(m_value, 0, 0x1000ui64);
          v13 = 4096i64;
          v14 = v12 - m_value;
          v15 = v12 == NULL;
          v16 = this->m_length;
          if ( !v15 )
            v13 = v14;
          v32 = v13 + v16;
          v17 = v13 + 1;
          v18 = v13 + v16 + 1;
          if ( v18 <= v13 + 4097 )
          {
            v20 = memchr_0(m_uri, 0, 0x1000ui64);
            v21 = 4096i64;
            if ( v20 )
              v21 = v20 - m_uri;
            if ( (unsigned __int64)(v21 + 1) <= 0x1000 )
            {
              v22 = memchr_0(m_value, 0, v17);
              v23 = v17;
              if ( v22 )
                v23 = v22 - m_value;
              if ( v23 + 1 <= v17 )
              {
                bdHandleAssert(m_uri != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
                v24 = -1i64;
                do
                  ++v24;
                while ( m_uri[v24] );
                if ( v24 >= v18 - 1 )
                {
                  bdHandleAssert(m_value != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
                  v25 = -1i64;
                  do
                    ++v25;
                  while ( m_value[v25] );
                }
                else
                {
                  v25 = bdStrlcpy(&m_uri[v24], m_value, v18 - v24);
                }
                v19 = v24 + v25;
                goto LABEL_44;
              }
              v31 = v17;
              format = "No null terminator found in src within %llu characters";
              line = 123;
            }
            else
            {
              v31 = 4096i64;
              format = "No null terminator found in dst within %llu characters";
              line = 117;
            }
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdStrnlcat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrnlcat", line, format, v31);
            v19 = 0i64;
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdStrnlcat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrnlcat", 0x6Fu, "Requested size (%llu) is bigger than both length (%llu)", v18, v13 + 4097);
            v19 = 0i64;
          }
LABEL_44:
          v26 = v32;
          v9 = v19 == v32;
          this->m_isOK = v19 == v32;
          if ( v19 != v32 )
            v26 = this->m_length;
          this->m_length = v26;
        }
        ++v6;
        m_params = this->m_params;
      }
      while ( v9 );
    }
    this->m_uri[this->m_length] = 0;
    if ( !this->m_isOK )
    {
      LODWORD(v30) = 4096 - this->m_length;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::buildURIString", 0x6Du, "Failed to append queries to URI request. Space left is [%u].", v30);
      *m_uri = 0;
      this->m_length = 0;
    }
    return this->m_isOK;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTURI", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresturi.cpp", "bdRESTURI::buildURIString", 0x74u, "buildURIString called on an invalid bdRESTURI object.");
    return this->m_isOK;
  }
}

/*
==============
bdRESTURI::encodeArrayElement
==============
*/
bool bdRESTURI::encodeArrayElement(bdRESTURI *this, const bdUserAccountID *accountID, char *dst, unsigned int *dstLength, unsigned int maxDstLength)
{
  __int64 in[9]; 
  __int16 v9; 
  char v10; 

  memset(in, 0, sizeof(in));
  v9 = 0;
  v10 = 0;
  return (unsigned int)(bdSnprintf((char *)in, 0x4Bui64, "%s-%I64u", accountID->_bytes_20, accountID->m_userID) - 1) <= 0x49 && bdRESTURI::appendStringEncoded((const char *)in, dst, dstLength, maxDstLength);
}

/*
==============
bdRESTURI::endParams
==============
*/
bdRESTURI::bdURIParam *bdRESTURI::endParams(bdRESTURI *this)
{
  return &this->m_params[this->m_paramCount];
}

/*
==============
bdRESTURI::formatPath
==============
*/
bool bdRESTURI::formatPath(bdRESTURI *this, const char *formatString)
{
  bdRESTURI::bdDummyArg v3; 
  bdRESTURI::bdNonEncodedString v4; 

  v4.m_str = formatString;
  return bdRESTURI::formatPath<bdRESTURI::bdNonEncodedString,bdRESTURI::bdDummyArg,bdRESTURI::bdDummyArg,bdRESTURI::bdDummyArg,bdRESTURI::bdDummyArg>(this, (const char *)&stru_143ED3684, &v4, &v3, &v3, &v3, &v3);
}

/*
==============
bdRESTURI::getURILength
==============
*/
__int64 bdRESTURI::getURILength(bdRESTURI *this)
{
  return this->m_length;
}

/*
==============
bdRESTURI::getURIString
==============
*/
char *bdRESTURI::getURIString(bdRESTURI *this)
{
  return this->m_uri;
}

/*
==============
bdRESTURI::isCharUnreserved
==============
*/
bool bdRESTURI::isCharUnreserved(char c)
{
  __int64 v1; 
  bool result; 

  result = (unsigned __int8)(c - 45) <= 0x32u && (v1 = 0x43FFFFFF01FFBi64, _bittest64(&v1, (char)(c - 45))) || (unsigned __int8)(c - 97) <= 0x19u || c == 126;
  return result;
}

/*
==============
bdRESTURI::isOK
==============
*/
_BOOL8 bdRESTURI::isOK(bdRESTURI *this)
{
  return this->m_isOK;
}

/*
==============
bdRESTURI::percentEncode
==============
*/
void bdRESTURI::percentEncode(char c, char *dst)
{
  char buf; 
  char v4; 
  char v5; 

  bdSnprintf(&buf, 4ui64, "%%%02X", (unsigned __int8)c);
  *dst = buf;
  dst[1] = v4;
  dst[2] = v5;
}

/*
==============
bdRESTURI::reset
==============
*/
void bdRESTURI::reset(bdRESTURI *this)
{
  this->m_isOK = 1;
  this->m_length = 0;
  this->m_pathLength = 0;
  this->m_paramCount = 0;
  this->m_uri[0] = 0;
  this->m_path[0] = 0;
  this->m_paramData[0] = 0;
  this->m_paramDataEnd = this->m_paramData;
}

