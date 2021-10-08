/*
==============
bdLocalizationToken::deserialize
==============
*/

bool __fastcall bdLocalizationToken::deserialize(bdLocalizationToken *this, bdJSONDeserializer *deserializer)
{
  return ?deserialize@bdLocalizationToken@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, deserializer);
}

/*
==============
bdLocalizationToken::setLocalizationToken
==============
*/

void __fastcall bdLocalizationToken::setLocalizationToken(bdLocalizationToken *this, const char *const localizationToken)
{
  ?setLocalizationToken@bdLocalizationToken@@QEAAXQEBD@Z(this, localizationToken);
}

/*
==============
bdLocalizationToken::getAPIVersion
==============
*/

unsigned __int16 __fastcall bdLocalizationToken::getAPIVersion(bdLocalizationToken *this)
{
  return ?getAPIVersion@bdLocalizationToken@@QEBAGXZ(this);
}

/*
==============
bdLocalizationToken::getLocalizationToken
==============
*/

const char *__fastcall bdLocalizationToken::getLocalizationToken(bdLocalizationToken *this)
{
  return ?getLocalizationToken@bdLocalizationToken@@QEBAPEBDXZ(this);
}

/*
==============
bdLocalizationToken::serialize
==============
*/

bool __fastcall bdLocalizationToken::serialize(bdLocalizationToken *this, bdJSONSerializer *serializer)
{
  return ?serialize@bdLocalizationToken@@QEBA_NAEAVbdJSONSerializer@@@Z(this, serializer);
}

/*
==============
bdLocalizationToken::operator==
==============
*/

bool __fastcall bdLocalizationToken::operator==(bdLocalizationToken *this, const bdLocalizationToken *other)
{
  return ??8bdLocalizationToken@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdLocalizationToken::getStringSetIdentifier
==============
*/

const char *__fastcall bdLocalizationToken::getStringSetIdentifier(bdLocalizationToken *this)
{
  return ?getStringSetIdentifier@bdLocalizationToken@@QEBAPEBDXZ(this);
}

/*
==============
bdLocalizationToken::operator!=
==============
*/

bool __fastcall bdLocalizationToken::operator!=(bdLocalizationToken *this, const bdLocalizationToken *other)
{
  return ??9bdLocalizationToken@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdLocalizationToken::createLocalizationTokenString
==============
*/

bool __fastcall bdLocalizationToken::createLocalizationTokenString(char *const buffer, const unsigned int bufferSize, const char *const formatStringID, const unsigned int numStringRefIDs, const char *const *stringRefIDs)
{
  return ?createLocalizationTokenString@bdLocalizationToken@@SA_NQEADIQEBDIQEBQEBD@Z(buffer, bufferSize, formatStringID, numStringRefIDs, stringRefIDs);
}

/*
==============
bdLocalizationToken::setStringSetIdentifier
==============
*/

void __fastcall bdLocalizationToken::setStringSetIdentifier(bdLocalizationToken *this, const char *const stringSetIdentifier)
{
  ?setStringSetIdentifier@bdLocalizationToken@@QEAAXQEBD@Z(this, stringSetIdentifier);
}

/*
==============
bdLocalizationToken::createStringSetIdentifier
==============
*/

bool __fastcall bdLocalizationToken::createStringSetIdentifier(char *const buffer, const unsigned int bufferSize, const char *const project, const char *const stringSetName, const unsigned int stringSetVersion)
{
  return ?createStringSetIdentifier@bdLocalizationToken@@SA_NQEADIQEBD1I@Z(buffer, bufferSize, project, stringSetName, stringSetVersion);
}

/*
==============
bdLocalizationToken::~bdLocalizationToken
==============
*/

void __fastcall bdLocalizationToken::~bdLocalizationToken(bdLocalizationToken *this)
{
  ??1bdLocalizationToken@@UEAA@XZ(this);
}

/*
==============
bdLocalizationToken::setAPIVersion
==============
*/

void __fastcall bdLocalizationToken::setAPIVersion(bdLocalizationToken *this, const unsigned __int16 apiVersion)
{
  ?setAPIVersion@bdLocalizationToken@@QEAAXG@Z(this, apiVersion);
}

/*
==============
bdLocalizationToken::~bdLocalizationToken
==============
*/
void bdLocalizationToken::~bdLocalizationToken(bdLocalizationToken *this)
{
  this->__vftable = (bdLocalizationToken_vtbl *)&bdLocalizationToken::`vftable';
  bdStructFixedSizeString<195>::~bdStructFixedSizeString<195>(&this->m_localizationToken);
  bdStructFixedSizeString<77>::~bdStructFixedSizeString<77>(&this->m_stringSetIdentifier);
}

/*
==============
bdLocalizationToken::operator==
==============
*/
bool bdLocalizationToken::operator==(bdLocalizationToken *this, const bdLocalizationToken *other)
{
  return !strncmp(this->m_stringSetIdentifier.m_buffer, other->m_stringSetIdentifier.m_buffer, 0x4Dui64) && !strncmp(this->m_localizationToken.m_buffer, other->m_localizationToken.m_buffer, 0xC3ui64) && this->m_apiVersion == other->m_apiVersion;
}

/*
==============
bdLocalizationToken::operator!=
==============
*/
bool bdLocalizationToken::operator!=(bdLocalizationToken *this, const bdLocalizationToken *other)
{
  return strncmp(this->m_stringSetIdentifier.m_buffer, other->m_stringSetIdentifier.m_buffer, 0x4Dui64) || strncmp(this->m_localizationToken.m_buffer, other->m_localizationToken.m_buffer, 0xC3ui64) || this->m_apiVersion != other->m_apiVersion;
}

/*
==============
bdLocalizationToken::createLocalizationTokenString
==============
*/
bool bdLocalizationToken::createLocalizationTokenString(char *const buffer, const unsigned int bufferSize, const char *const formatStringID, const unsigned int numStringRefIDs, const char *const *stringRefIDs)
{
  unsigned int v8; 
  bool v9; 
  bool v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  char *v16; 
  __int64 v17; 
  size_t v18; 
  int v19; 
  const char *v20; 
  __int64 v21; 
  unsigned int v22; 

  v8 = bdStrlcpy(buffer, formatStringID, bufferSize);
  v9 = v8 < bufferSize;
  v10 = buffer != NULL;
  bdHandleAssert(buffer != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v11 = -1i64;
  do
    ++v11;
  while ( buffer[v11] );
  v12 = 0i64;
  if ( v8 < bufferSize )
  {
    while ( 1 )
    {
      if ( (unsigned int)v12 >= numStringRefIDs )
        return v9;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v13 = v11 + 2;
      if ( !v9 || v13 >= 0x4D || v13 >= bufferSize )
        break;
      v14 = v13;
      bdHandleAssert(v10, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v15 = -1i64;
      do
        ++v15;
      while ( buffer[v15] );
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      if ( v15 < v14 - 1 )
      {
        v16 = &buffer[v15];
        v17 = v14 - v15;
        if ( v17 )
        {
          if ( v16 )
          {
            v18 = v17 - 1;
            if ( v18 > 1 )
              v18 = 1i64;
            memcpy_0(&buffer[v15], ":", v18);
            v16[v18] = 0;
          }
        }
      }
      v19 = v15 + 1;
      v20 = stringRefIDs[v12];
      bdHandleAssert(v20 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v21 = -1i64;
      do
        ++v21;
      while ( v20[v21] );
      v22 = v21 + v19 + 1;
      if ( v22 >= 0x4D || v22 >= bufferSize )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossTitleLocalizedStrings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrosstitlelocalizedstrings\\localizedstrings\\bdlocalizationtoken.cpp", "bdLocalizationToken::createLocalizationTokenString", 0xC1u, "The localization token string exceeded the max buffer size.");
        return 0;
      }
      v9 = 1;
      v10 = buffer != NULL;
      LODWORD(v11) = bdStrlcat(buffer, stringRefIDs[v12], v22);
      v12 = (unsigned int)(v12 + 1);
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossTitleLocalizedStrings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrosstitlelocalizedstrings\\localizedstrings\\bdlocalizationtoken.cpp", "bdLocalizationToken::createLocalizationTokenString", 0xC6u, "The localization token string exceeded the max buffer size.");
    return 0;
  }
  return v9;
}

/*
==============
bdLocalizationToken::createStringSetIdentifier
==============
*/
bool bdLocalizationToken::createStringSetIdentifier(char *const buffer, const unsigned int bufferSize, const char *const project, const char *const stringSetName, const unsigned int stringSetVersion)
{
  int v6; 

  v6 = bdSnprintf(buffer, bufferSize, "%s%s%s%s%u", project, ":", stringSetName, ":", stringSetVersion);
  return v6 >= 0 && v6 < (int)bufferSize && v6 < 77;
}

/*
==============
bdLocalizationToken::deserialize
==============
*/
char bdLocalizationToken::deserialize(bdLocalizationToken *this, bdJSONDeserializer *deserializer)
{
  size_t v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  size_t v7; 
  unsigned __int16 value[8]; 
  char Src[8]; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  char v20; 
  char v21[208]; 

  value[0] = 0;
  *(_QWORD *)Src = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0;
  v20 = 0;
  memset_0(v21, 0, 0xC3ui64);
  if ( bdJSONDeserializer::getUInt16(deserializer, "v", value) && (v4 = 77i64, bdJSONDeserializer::getString(deserializer, (const char *const)&valueOut, Src, 0x4Du)) && bdJSONDeserializer::getString(deserializer, "data", v21, 0xC3u) )
  {
    this->m_apiVersion = value[0];
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = -1i64;
    v6 = -1i64;
    do
      ++v6;
    while ( Src[v6] );
    if ( this != (bdLocalizationToken *)-8i64 )
    {
      if ( v6 < 0x4D )
        v4 = v6;
      memcpy_0(&this->m_stringSetIdentifier, Src, v4);
      this->m_stringSetIdentifier.m_buffer[v4] = 0;
    }
    if ( v6 > 0x4D )
    {
      bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<77>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<77>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    }
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v5;
    while ( v21[v5] );
    if ( this != (bdLocalizationToken *)-86i64 )
    {
      v7 = 195i64;
      if ( v5 < 0xC3 )
        v7 = v5;
      memcpy_0(&this->m_localizationToken, v21, v7);
      this->m_localizationToken.m_buffer[v7] = 0;
    }
    if ( v5 > 0xC3 )
    {
      bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<195>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<195>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossTitleLocalizedStrings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrosstitlelocalizedstrings\\localizedstrings\\bdlocalizationtoken.cpp", "bdLocalizationToken::deserialize", 0x81u, "Failed to deserialize the localization token.");
    return 0;
  }
}

/*
==============
bdLocalizationToken::getAPIVersion
==============
*/
__int64 bdLocalizationToken::getAPIVersion(bdLocalizationToken *this)
{
  return this->m_apiVersion;
}

/*
==============
bdLocalizationToken::getLocalizationToken
==============
*/
bdStructFixedSizeString<195> *bdLocalizationToken::getLocalizationToken(bdLocalizationToken *this)
{
  return &this->m_localizationToken;
}

/*
==============
bdLocalizationToken::getStringSetIdentifier
==============
*/
bdStructFixedSizeString<77> *bdLocalizationToken::getStringSetIdentifier(bdLocalizationToken *this)
{
  return &this->m_stringSetIdentifier;
}

/*
==============
bdLocalizationToken::serialize
==============
*/
char bdLocalizationToken::serialize(bdLocalizationToken *this, bdJSONSerializer *serializer)
{
  if ( bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeUInt16(serializer, "v", this->m_apiVersion, 0) && bdJSONSerializer::writeString(serializer, (const char *)&valueOut, this->m_stringSetIdentifier.m_buffer) && bdJSONSerializer::writeString(serializer, "data", this->m_localizationToken.m_buffer) && bdJSONSerializer::writeEndObject(serializer) )
    return 1;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossTitleLocalizedStrings", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrosstitlelocalizedstrings\\localizedstrings\\bdlocalizationtoken.cpp", "bdLocalizationToken::serialize", 0x5Cu, "Failed to serialize the bdLocalizationToken.");
  return 0;
}

/*
==============
bdLocalizationToken::setAPIVersion
==============
*/
void bdLocalizationToken::setAPIVersion(bdLocalizationToken *this, const unsigned __int16 apiVersion)
{
  this->m_apiVersion = apiVersion;
}

/*
==============
bdLocalizationToken::setLocalizationToken
==============
*/
void bdLocalizationToken::setLocalizationToken(bdLocalizationToken *this, const char *const localizationToken)
{
  bdStructFixedSizeString<195>::copy(&this->m_localizationToken, localizationToken);
}

/*
==============
bdLocalizationToken::setStringSetIdentifier
==============
*/
void bdLocalizationToken::setStringSetIdentifier(bdLocalizationToken *this, const char *const stringSetIdentifier)
{
  bdStructFixedSizeString<77>::copy(&this->m_stringSetIdentifier, stringSetIdentifier);
}

