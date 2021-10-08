/*
==============
bdRESTHeaders::setFieldContentType
==============
*/

bool __fastcall bdRESTHeaders::setFieldContentType(bdRESTHeaders *this, bdREST::bdMimeType contentType)
{
  return ?setFieldContentType@bdRESTHeaders@@QEAA_NW4bdMimeType@bdREST@@@Z(this, contentType);
}

/*
==============
bdRESTHeaders::getContentType
==============
*/

bdREST::bdMimeType __fastcall bdRESTHeaders::getContentType(bdRESTHeaders *this)
{
  return ?getContentType@bdRESTHeaders@@QEBA?AW4bdMimeType@bdREST@@XZ(this);
}

/*
==============
bdRESTHeaders::end
==============
*/

const bdRESTHeaders::bdRESTHeaderField *__fastcall bdRESTHeaders::end(bdRESTHeaders *this)
{
  return ?end@bdRESTHeaders@@QEBAPEBUbdRESTHeaderField@1@XZ(this);
}

/*
==============
bdRESTHeaders::getAcceptType
==============
*/

bdREST::bdMimeType __fastcall bdRESTHeaders::getAcceptType(bdRESTHeaders *this, unsigned int index)
{
  return ?getAcceptType@bdRESTHeaders@@QEBA?AW4bdMimeType@bdREST@@I@Z(this, index);
}

/*
==============
bdRESTHeaders::getErrorAcceptType
==============
*/

bdREST::bdMimeType __fastcall bdRESTHeaders::getErrorAcceptType(bdRESTHeaders *this)
{
  return ?getErrorAcceptType@bdRESTHeaders@@QEBA?AW4bdMimeType@bdREST@@XZ(this);
}

/*
==============
bdRESTHeaders::begin
==============
*/

const bdRESTHeaders::bdRESTHeaderField *__fastcall bdRESTHeaders::begin(bdRESTHeaders *this)
{
  return ?begin@bdRESTHeaders@@QEBAPEBUbdRESTHeaderField@1@XZ(this);
}

/*
==============
bdRESTHeaders::getAcceptTypesCount
==============
*/

unsigned int __fastcall bdRESTHeaders::getAcceptTypesCount(bdRESTHeaders *this)
{
  return ?getAcceptTypesCount@bdRESTHeaders@@QEBAIXZ(this);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/

bool __fastcall bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, const bdREST::bdMimeType *accepts, unsigned int count)
{
  return ?setFieldAccept@bdRESTHeaders@@QEAA_NPEBW4bdMimeType@bdREST@@I@Z(this, accepts, count);
}

/*
==============
bdRESTHeaders::findValue
==============
*/

const char *__fastcall bdRESTHeaders::findValue(bdRESTHeaders *this, const char *key, unsigned int index)
{
  return ?findValue@bdRESTHeaders@@QEBAPEBDPEBDI@Z(this, key, index);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/

bool __fastcall bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0)
{
  return ?setFieldAccept@bdRESTHeaders@@QEAA_NW4bdMimeType@bdREST@@@Z(this, accept0);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/

bool __fastcall bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0, bdREST::bdMimeType accept1)
{
  return ?setFieldAccept@bdRESTHeaders@@QEAA_NW4bdMimeType@bdREST@@0@Z(this, accept0, accept1);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/

bool __fastcall bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0, bdREST::bdMimeType accept1, bdREST::bdMimeType accept2)
{
  return ?setFieldAccept@bdRESTHeaders@@QEAA_NW4bdMimeType@bdREST@@00@Z(this, accept0, accept1, accept2);
}

/*
==============
bdRESTHeaders::addField
==============
*/

bool __fastcall bdRESTHeaders::addField(bdRESTHeaders *this, const char *key, const char *value)
{
  return ?addField@bdRESTHeaders@@QEAA_NPEBD0@Z(this, key, value);
}

/*
==============
bdRESTHeaders::bdRESTHeaders
==============
*/

void __fastcall bdRESTHeaders::bdRESTHeaders(bdRESTHeaders *this)
{
  ??0bdRESTHeaders@@QEAA@XZ(this);
}

/*
==============
bdRESTHeaders::addToFieldAccept
==============
*/

bool __fastcall bdRESTHeaders::addToFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept)
{
  return ?addToFieldAccept@bdRESTHeaders@@QEAA_NW4bdMimeType@bdREST@@@Z(this, accept);
}

/*
==============
bdRESTHeaders::getFieldCount
==============
*/

unsigned int __fastcall bdRESTHeaders::getFieldCount(bdRESTHeaders *this)
{
  return ?getFieldCount@bdRESTHeaders@@QEBAIXZ(this);
}

/*
==============
bdRESTHeaders::isOK
==============
*/

bool __fastcall bdRESTHeaders::isOK(bdRESTHeaders *this)
{
  return ?isOK@bdRESTHeaders@@QEBA_NXZ(this);
}

/*
==============
bdRESTHeaders::bdRESTHeaders
==============
*/
void bdRESTHeaders::bdRESTHeaders(bdRESTHeaders *this)
{
  this->m_ok = 1;
  *(_QWORD *)&this->m_fieldCount = 0i64;
  this->m_headerData[0] = 0;
  this->m_acceptTypesCount = 0;
  this->m_contentType = BD_MIME_INVALID;
}

/*
==============
bdRESTHeaders::addField
==============
*/
_BOOL8 bdRESTHeaders::addField(bdRESTHeaders *this, const char *key, const char *value)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  _BYTE *v8; 
  bool m_ok; 
  _BYTE *v10; 
  __int64 m_headerDataLength; 
  char *v13; 
  bdRESTHeaders::bdRESTHeaderField *v14; 
  char *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned __int64 invalidIdx; 

  bdHandleAssert(this->m_headerDataLength < 10240, "m_headerDataLength < bdArrayLength(m_headerData)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x1Bu, "header data end pointer out of range");
  if ( !this->m_ok )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x74u, "addField called on invalid bdRESTHeaders object.");
    return this->m_ok;
  }
  if ( this->m_fieldCount >= 32 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x21u, "Failed to add new field. Too many fields in use. Max is %d", 32);
    this->m_ok = 0;
  }
  v6 = 0i64;
  if ( !key )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x27u, "Failed to add new field. Key must not be null.");
    this->m_ok = 0;
    v7 = 0i64;
    goto LABEL_11;
  }
  v7 = 64i64;
  v8 = memchr_0(key, 0, 0x40ui64);
  if ( v8 )
    v7 = v8 - key;
  if ( v7 > 0x3F )
  {
    LODWORD(v16) = 63;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x30u, "Failed to add new field. Key too long. Max length is %d", v16);
LABEL_12:
    this->m_ok = 0;
    goto LABEL_13;
  }
  if ( !v7 )
  {
LABEL_11:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x35u, "Failed to add new field. Key must not be empty.");
    goto LABEL_12;
  }
LABEL_13:
  invalidIdx = 0i64;
  if ( key && !bdRESTInternal::isTcharString(key, &invalidIdx) )
  {
    v19 = key[invalidIdx];
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x3Cu, "Key [%s] contains invalid character '%c' [%d] at position [%d]", key, v19, v19, invalidIdx);
    this->m_ok = 0;
  }
  if ( !value )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x42u, "Failed to add new field. Value must not be null.");
    this->m_ok = 0;
LABEL_18:
    m_ok = 0;
    goto LABEL_19;
  }
  m_ok = this->m_ok;
  if ( !m_ok )
    goto LABEL_18;
  v6 = 4096i64;
  v10 = memchr_0(value, 0, 0x1000ui64);
  if ( v10 )
    v6 = v10 - value;
LABEL_19:
  if ( v6 <= 0xFFF )
  {
    if ( !m_ok || bdRESTInternal::isFieldContentString(value, &invalidIdx) )
      goto LABEL_29;
    LODWORD(v17) = key[invalidIdx];
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x4Fu, "Value [%s] contains invalid character [%d] at position [%d]", key, v17, invalidIdx);
  }
  else
  {
    LODWORD(v16) = 4095;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x49u, "Failed to add new field. Value too long. Max length is %d", v16);
  }
  this->m_ok = 0;
LABEL_29:
  m_headerDataLength = this->m_headerDataLength;
  if ( (int)v6 + (int)v7 + 2 <= 10240 - (int)m_headerDataLength )
  {
    if ( this->m_ok )
    {
      v13 = &this->m_headerData[m_headerDataLength];
      v14 = &this->m_fields[this->m_fieldCount++];
      bdStrlcpy(v13, key, v7 + 1);
      v14->m_key = v13;
      v15 = &v13[v7 + 1];
      bdStrlcpy(v15, value, v6 + 1);
      v14->m_value = v15;
      this->m_headerDataLength += v6 + v7 + 2;
      bdHandleAssert(this->m_headerDataLength < 10240, "m_headerDataLength < bdArrayLength(m_headerData)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x6Fu, "header data end pointer out of range");
      return this->m_ok;
    }
  }
  else
  {
    LODWORD(v18) = 10240;
    LODWORD(v17) = 10240 - m_headerDataLength;
    LODWORD(v16) = v6 + v7 + 2;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::addField", 0x5Bu, "Failed to add new field. Not enough remaining space for key/value. Required: %d - Remaining: %d - Max: %d", v16, v17, v18);
    this->m_ok = 0;
  }
  return this->m_ok;
}

/*
==============
bdRESTHeaders::addToFieldAccept
==============
*/
bool bdRESTHeaders::addToFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept)
{
  unsigned int m_acceptTypesCount; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  bool result; 
  unsigned int v9; 
  bdREST::bdMimeType v10; 
  bool v11; 
  __int64 v12; 
  bdREST::bdMimeType v13; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  _DWORD accepta[4]; 

  m_acceptTypesCount = this->m_acceptTypesCount;
  v5 = 0i64;
  v6 = 0;
  if ( !m_acceptTypesCount || (v6 = this->m_acceptTypesCount, memcpy_0(accepta, this->m_acceptTypes, 4i64 * m_acceptTypesCount), v6 < 3) )
    accepta[v6] = accept;
  v7 = v6 + 1;
  if ( v6 + 1 <= 3 )
  {
    result = this->m_ok;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x7Eu, "count [%u] > BD_MIME_TYPE_COUNT [%u]", v6 + 1, 3);
    result = 0;
    this->m_ok = 0;
  }
  if ( v7 > 3 )
    v7 = 3;
  v9 = 0;
  if ( result )
  {
    do
    {
      if ( v9 >= v7 )
        break;
      v10 = accepta[v9];
      if ( bdRESTInternal::mimeTypeIsValid(v10) )
      {
        result = this->m_ok;
      }
      else
      {
        LODWORD(v16) = v9;
        LODWORD(v15) = v10;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x88u, "invalid bdMimeType [%u] at index %u", v15, v16);
        result = 0;
        this->m_ok = 0;
      }
      ++v9;
    }
    while ( result );
    if ( result )
    {
      v11 = result;
      do
      {
        result = v11;
        if ( (unsigned int)v5 >= v7 )
          break;
        v12 = (unsigned int)(v5 + 1);
        if ( v11 )
        {
          do
          {
            result = v11;
            if ( (unsigned int)v12 >= v7 )
              break;
            v13 = accepta[v5];
            if ( v13 == accepta[v12] )
            {
              v14 = bdRESTInternal::mimeTypeEnumToString(v13);
              LODWORD(v17) = v12;
              LODWORD(v16) = v5;
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x94u, "duplicate bdMimeType [%s] at index %u and %u", v14, v16, v17);
              result = 0;
              this->m_ok = 0;
            }
            else
            {
              result = this->m_ok;
            }
            v12 = (unsigned int)(v12 + 1);
            v11 = result;
          }
          while ( result );
        }
        v5 = (unsigned int)(v5 + 1);
        v11 = result;
      }
      while ( result );
    }
  }
  if ( result )
  {
    this->m_acceptTypesCount = v7;
    if ( v7 )
    {
      memcpy_0(this->m_acceptTypes, accepta, 4i64 * v7);
      return this->m_ok;
    }
  }
  return result;
}

/*
==============
bdRESTHeaders::begin
==============
*/
bdRESTHeaders::bdRESTHeaderField *bdRESTHeaders::begin(bdRESTHeaders *this)
{
  return this->m_fields;
}

/*
==============
bdRESTHeaders::end
==============
*/
bdRESTHeaders::bdRESTHeaderField *bdRESTHeaders::end(bdRESTHeaders *this)
{
  return &this->m_fields[this->m_fieldCount];
}

/*
==============
bdRESTHeaders::findValue
==============
*/
const char *bdRESTHeaders::findValue(bdRESTHeaders *this, const char *key, unsigned int index)
{
  bdRESTHeaders::bdRESTHeaderField *m_fields; 
  const char *m_value; 
  int i; 

  m_fields = this->m_fields;
  m_value = NULL;
  for ( i = 0; m_fields != &this->m_fields[this->m_fieldCount]; ++m_fields )
  {
    if ( !key || m_value )
      break;
    if ( !_strnicmp(key, m_fields->m_key, 0x3Fui64) )
    {
      if ( i == index )
        m_value = m_fields->m_value;
      else
        ++i;
    }
  }
  return m_value;
}

/*
==============
bdRESTHeaders::getAcceptType
==============
*/
__int64 bdRESTHeaders::getAcceptType(bdRESTHeaders *this, unsigned int index)
{
  if ( index >= this->m_acceptTypesCount )
    return 0i64;
  else
    return (unsigned int)this->m_acceptTypes[index];
}

/*
==============
bdRESTHeaders::getAcceptTypesCount
==============
*/
__int64 bdRESTHeaders::getAcceptTypesCount(bdRESTHeaders *this)
{
  return this->m_acceptTypesCount;
}

/*
==============
bdRESTHeaders::getContentType
==============
*/
__int64 bdRESTHeaders::getContentType(bdRESTHeaders *this)
{
  return (unsigned int)this->m_contentType;
}

/*
==============
bdRESTHeaders::getErrorAcceptType
==============
*/
__int64 bdRESTHeaders::getErrorAcceptType(bdRESTHeaders *this)
{
  unsigned int m_acceptTypesCount; 
  __int64 result; 
  unsigned int v3; 
  bdREST::bdMimeType *m_acceptTypes; 

  m_acceptTypesCount = this->m_acceptTypesCount;
  result = 0i64;
  v3 = 0;
  if ( m_acceptTypesCount )
  {
    m_acceptTypes = this->m_acceptTypes;
    do
    {
      if ( (_DWORD)result )
        break;
      if ( ((*m_acceptTypes - 1) & 0xFFFFFFFD) == 0 )
        result = *(unsigned int *)m_acceptTypes;
      ++v3;
      ++m_acceptTypes;
    }
    while ( v3 < m_acceptTypesCount );
  }
  return result;
}

/*
==============
bdRESTHeaders::getFieldCount
==============
*/
__int64 bdRESTHeaders::getFieldCount(bdRESTHeaders *this)
{
  return (unsigned int)this->m_fieldCount;
}

/*
==============
bdRESTHeaders::isOK
==============
*/
_BOOL8 bdRESTHeaders::isOK(bdRESTHeaders *this)
{
  return this->m_ok;
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/
bool bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, const bdREST::bdMimeType *accepts, unsigned int count)
{
  bool *p_m_ok; 
  bdRESTHeaders *v4; 
  unsigned int v5; 
  bool result; 
  __int64 v8; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  bdREST::bdMimeType v12; 
  const char *v13; 
  signed __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  p_m_ok = &this->m_ok;
  v4 = this;
  v5 = count;
  if ( count <= 3 )
  {
    result = *p_m_ok;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x7Eu, "count [%u] > BD_MIME_TYPE_COUNT [%u]", count, 3);
    result = 0;
    *p_m_ok = 0;
  }
  if ( v5 > 3 )
    v5 = 3;
  v8 = 0i64;
  v9 = 0;
  if ( result )
  {
    do
    {
      if ( v9 >= v5 )
        break;
      if ( bdRESTInternal::mimeTypeIsValid(accepts[v9]) )
      {
        result = *p_m_ok;
      }
      else
      {
        LODWORD(v17) = v9;
        SLODWORD(v16) = accepts[v9];
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x88u, "invalid bdMimeType [%u] at index %u", v16, v17);
        result = 0;
        *p_m_ok = 0;
      }
      ++v9;
    }
    while ( result );
    v4 = this;
    if ( result )
    {
      v10 = result;
      do
      {
        result = v10;
        if ( (unsigned int)v8 >= v5 )
          break;
        v11 = (unsigned int)(v8 + 1);
        if ( v10 )
        {
          do
          {
            result = v10;
            if ( (unsigned int)v11 >= v5 )
              break;
            v12 = accepts[v8];
            if ( v12 == accepts[v11] )
            {
              v13 = bdRESTInternal::mimeTypeEnumToString(v12);
              LODWORD(v18) = v11;
              LODWORD(v17) = v8;
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldAccept", 0x94u, "duplicate bdMimeType [%s] at index %u and %u", v13, v17, v18);
              result = 0;
              *p_m_ok = 0;
            }
            else
            {
              result = *p_m_ok;
            }
            v11 = (unsigned int)(v11 + 1);
            v10 = result;
          }
          while ( result );
        }
        v8 = (unsigned int)(v8 + 1);
        v10 = result;
      }
      while ( result );
      v4 = this;
    }
  }
  if ( result )
  {
    v4->m_acceptTypesCount = v5;
    if ( v5 )
    {
      v14 = (char *)v4 - (char *)accepts;
      v15 = v5;
      do
      {
        *(const bdREST::bdMimeType *)((char *)accepts + v14 + 10764) = *accepts;
        ++accepts;
        --v15;
      }
      while ( v15 );
      return *p_m_ok;
    }
  }
  return result;
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/
bool bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0, bdREST::bdMimeType accept1, bdREST::bdMimeType accept2)
{
  bdREST::bdMimeType accepts[4]; 

  accepts[0] = accept0;
  accepts[1] = accept1;
  accepts[2] = accept2;
  return bdRESTHeaders::setFieldAccept(this, accepts, 3u);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/
bool bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0, bdREST::bdMimeType accept1)
{
  bdREST::bdMimeType accepts; 
  bdREST::bdMimeType v5; 

  accepts = accept0;
  v5 = accept1;
  return bdRESTHeaders::setFieldAccept(this, &accepts, 2u);
}

/*
==============
bdRESTHeaders::setFieldAccept
==============
*/
bool bdRESTHeaders::setFieldAccept(bdRESTHeaders *this, bdREST::bdMimeType accept0)
{
  bdREST::bdMimeType accepts; 

  accepts = accept0;
  return bdRESTHeaders::setFieldAccept(this, &accepts, 1u);
}

/*
==============
bdRESTHeaders::setFieldContentType
==============
*/
bool bdRESTHeaders::setFieldContentType(bdRESTHeaders *this, bdREST::bdMimeType contentType)
{
  bool result; 
  bdREST::bdMimeType v5; 

  if ( bdRESTInternal::mimeTypeIsValid(contentType) )
  {
    result = this->m_ok;
    this->m_contentType = contentType;
  }
  else
  {
    v5 = contentType;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRESTHeaders", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestheaders.cpp", "bdRESTHeaders::setFieldContentType", 0xD6u, "invalid content type [%u]", v5);
    this->m_ok = 0;
    return 0;
  }
  return result;
}

