/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const unsigned int number)
{
  return ??4bdJSONValue@@QEAAAEAV0@I@Z(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const unsigned __int64 number)
{
  ??0bdJSONValue@@QEAA@_K@Z(this, number);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const unsigned __int64 number)
{
  return ??4bdJSONValue@@QEAAAEAV0@_K@Z(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const bdString *str)
{
  ??0bdJSONValue@@QEAA@AEBVbdString@@@Z(this, str);
}

/*
==============
bdJSONValue::serialize
==============
*/

bool __fastcall bdJSONValue::serialize(bdJSONValue *this, bdString *outJSON)
{
  return ?serialize@bdJSONValue@@QEBA_NAEAVbdString@@@Z(this, outJSON);
}

/*
==============
bdJSONValue::getFloat64
==============
*/

bool __fastcall bdJSONValue::getFloat64(bdJSONValue *this, long double *value)
{
  return ?getFloat64@bdJSONValue@@QEAA_NAEAN@Z(this, value);
}

/*
==============
bdJSONValue::parseValue
==============
*/

bool __fastcall bdJSONValue::parseValue(const char *jsonPtr, const char **outPtr, bdJSONValue *target)
{
  return ?parseValue@bdJSONValue@@KA_NPEBDPEAPEBDAEAV1@@Z(jsonPtr, outPtr, target);
}

/*
==============
bdJSONValue::parse
==============
*/

bool __fastcall bdJSONValue::parse(bdJSONValue *this, const bdString *jsonStr)
{
  return ?parse@bdJSONValue@@QEAA_NAEBVbdString@@@Z(this, jsonStr);
}

/*
==============
bdJSONValue::operator[]
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator[](bdJSONValue *this, const char *key)
{
  return ??AbdJSONValue@@QEAAAEAV0@PEBD@Z(this, key);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const unsigned int number)
{
  ??0bdJSONValue@@QEAA@I@Z(this, number);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const bdJSONValue *other)
{
  return ??4bdJSONValue@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const char *str)
{
  ??0bdJSONValue@@QEAA@PEBD@Z(this, str);
}

/*
==============
bdJSONValue::getString
==============
*/

bool __fastcall bdJSONValue::getString(bdJSONValue *this, bdString *value)
{
  return ?getString@bdJSONValue@@QEAA_NAEAVbdString@@@Z(this, value);
}

/*
==============
bdJSONValue::~bdJSONValue
==============
*/

void __fastcall bdJSONValue::~bdJSONValue(bdJSONValue *this)
{
  ??1bdJSONValue@@QEAA@XZ(this);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const __int64 number)
{
  return ??4bdJSONValue@@QEAAAEAV0@_J@Z(this, number);
}

/*
==============
bdJSONValue::parseNumber
==============
*/

bool __fastcall bdJSONValue::parseNumber(const char **json, bdJSONValue *target)
{
  return ?parseNumber@bdJSONValue@@KA_NAEAPEBDAEAV1@@Z(json, target);
}

/*
==============
bdJSONValue::getArray
==============
*/

bdJSONArray *__fastcall bdJSONValue::getArray(bdJSONValue *this)
{
  return ?getArray@bdJSONValue@@QEBAPEAVbdJSONArray@@XZ(this);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const long double number)
{
  ??0bdJSONValue@@QEAA@N@Z(this, number);
}

/*
==============
bdJSONValue::getObject
==============
*/

bdJSONObject *__fastcall bdJSONValue::getObject(bdJSONValue *this)
{
  return ?getObject@bdJSONValue@@QEBAPEAVbdJSONObject@@XZ(this);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, bdJSONType type)
{
  ??0bdJSONValue@@QEAA@W4bdJSONType@@@Z(this, type);
}

/*
==============
bdJSONValue::serialize
==============
*/

bdString *__fastcall bdJSONValue::serialize(bdJSONValue *this, bdString *result)
{
  return ?serialize@bdJSONValue@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdJSONValue::getBool
==============
*/

bool __fastcall bdJSONValue::getBool(bdJSONValue *this, bool *value)
{
  return ?getBool@bdJSONValue@@QEAA_NAEA_N@Z(this, value);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const bool boolean)
{
  return ??4bdJSONValue@@QEAAAEAV0@_N@Z(this, boolean);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const bdString *str)
{
  return ??4bdJSONValue@@QEAAAEAV0@AEBVbdString@@@Z(this, str);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONArray *array)
{
  ??0bdJSONValue@@QEAA@AEBVbdJSONArray@@@Z(this, array);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONValue *other)
{
  ??0bdJSONValue@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const int number)
{
  return ??4bdJSONValue@@QEAAAEAV0@H@Z(this, number);
}

/*
==============
bdJSONValue::assignNumber
==============
*/

bool __fastcall bdJSONValue::assignNumber(bdJSONValue *this, const long double number)
{
  return ?assignNumber@bdJSONValue@@IEAA_NN@Z(this, number);
}

/*
==============
bdJSONValue::operator[]
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator[](bdJSONValue *this, int index)
{
  return ??AbdJSONValue@@QEAAAEAV0@H@Z(this, index);
}

/*
==============
bdJSONValue::getInt32
==============
*/

bool __fastcall bdJSONValue::getInt32(bdJSONValue *this, int *value)
{
  return ?getInt32@bdJSONValue@@QEAA_NAEAH@Z(this, value);
}

/*
==============
bdJSONValue::assignNumber
==============
*/

bool __fastcall bdJSONValue::assignNumber(bdJSONValue *this, const unsigned __int64 number)
{
  return ?assignNumber@bdJSONValue@@IEAA_N_K@Z(this, number);
}

/*
==============
bdJSONValue::parseLiteral
==============
*/

bool __fastcall bdJSONValue::parseLiteral(const char *jsonPtr, const char **outPtr, bdJSONValue *target)
{
  return ?parseLiteral@bdJSONValue@@KA_NPEBDPEAPEBDAEAV1@@Z(jsonPtr, outPtr, target);
}

/*
==============
bdJSONValue::getUInt32
==============
*/

bool __fastcall bdJSONValue::getUInt32(bdJSONValue *this, unsigned int *value)
{
  return ?getUInt32@bdJSONValue@@QEAA_NAEAI@Z(this, value);
}

/*
==============
bdJSONValue::getString
==============
*/

bdString *__fastcall bdJSONValue::getString(bdJSONValue *this)
{
  return ?getString@bdJSONValue@@QEBAPEAVbdString@@XZ(this);
}

/*
==============
bdJSONValue::operator[]
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator[](bdJSONValue *this, unsigned int index)
{
  return ??AbdJSONValue@@QEAAAEAV0@I@Z(this, index);
}

/*
==============
bdJSONValue::serialize
==============
*/

int __fastcall bdJSONValue::serialize(bdJSONValue *this, char *outBuffer, const unsigned int outBufferSz)
{
  return ?serialize@bdJSONValue@@QEBAHPEADI@Z(this, outBuffer, outBufferSz);
}

/*
==============
bdJSONValue::parseString
==============
*/

bool __fastcall bdJSONValue::parseString(const char **json, bdJSONValue *target)
{
  return ?parseString@bdJSONValue@@KA_NAEAPEBDAEAV1@@Z(json, target);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const char *str)
{
  return ??4bdJSONValue@@QEAAAEAV0@PEBD@Z(this, str);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const __int64 number)
{
  ??0bdJSONValue@@QEAA@_J@Z(this, number);
}

/*
==============
bdJSONValue::operator=
==============
*/

bdJSONValue *__fastcall bdJSONValue::operator=(bdJSONValue *this, const long double number)
{
  return ??4bdJSONValue@@QEAAAEAV0@N@Z(this, number);
}

/*
==============
bdJSONValue::assignNumber
==============
*/

bool __fastcall bdJSONValue::assignNumber(bdJSONValue *this, const __int64 number)
{
  return ?assignNumber@bdJSONValue@@IEAA_N_J@Z(this, number);
}

/*
==============
bdJSONValue::getUInt64
==============
*/

bool __fastcall bdJSONValue::getUInt64(bdJSONValue *this, unsigned __int64 *value)
{
  return ?getUInt64@bdJSONValue@@QEAA_NAEA_K@Z(this, value);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const bool boolean)
{
  ??0bdJSONValue@@QEAA@_N@Z(this, boolean);
}

/*
==============
bdJSONValue::parse
==============
*/

bool __fastcall bdJSONValue::parse(bdJSONValue *this, const char *const jsonStr, const char **outPtr)
{
  return ?parse@bdJSONValue@@QEAA_NQEBDPEAPEBD@Z(this, jsonStr, outPtr);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this)
{
  ??0bdJSONValue@@QEAA@XZ(this);
}

/*
==============
bdJSONValue::cleanup
==============
*/

void __fastcall bdJSONValue::cleanup(bdJSONValue *this)
{
  ?cleanup@bdJSONValue@@QEAAXXZ(this);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONObject *object)
{
  ??0bdJSONValue@@QEAA@AEBVbdJSONObject@@@Z(this, object);
}

/*
==============
bdJSONValue::getInt64
==============
*/

bool __fastcall bdJSONValue::getInt64(bdJSONValue *this, __int64 *value)
{
  return ?getInt64@bdJSONValue@@QEAA_NAEA_J@Z(this, value);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/

void __fastcall bdJSONValue::bdJSONValue(bdJSONValue *this, const int number)
{
  ??0bdJSONValue@@QEAA@H@Z(this, number);
}

/*
==============
bdJSONValue::getType
==============
*/

bdJSONType __fastcall bdJSONValue::getType(bdJSONValue *this)
{
  return ?getType@bdJSONValue@@QEBA?AW4bdJSONType@@XZ(this);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONValue *other)
{
  bdString *v4; 
  bdString *v5; 
  const char *Buffer; 
  bdString *v7; 
  bdJSONObject *v8; 
  const bdJSONObject *Object; 
  bdString *v10; 
  bdJSONArray *v11; 
  const bdJSONArray *Array; 
  bdString *v13; 

  this->m_type = other->m_type;
  v4 = NULL;
  this->m_string = NULL;
  if ( other->m_type )
  {
    if ( other->m_type == BD_JSON_ARRAY )
    {
      v11 = (bdJSONArray *)bdMemory::allocate(0x10ui64);
      if ( v11 )
      {
        Array = bdJSONValue::getArray((bdJSONValue *)other);
        bdJSONArray::bdJSONArray(v11, Array);
        v4 = v13;
      }
    }
    else if ( other->m_type == BD_JSON_OBJECT )
    {
      v8 = (bdJSONObject *)bdMemory::allocate(0x20ui64);
      if ( v8 )
      {
        Object = bdJSONValue::getObject((bdJSONValue *)other);
        bdJSONObject::bdJSONObject(v8, Object);
        v4 = v10;
      }
    }
    else
    {
      v5 = (bdString *)bdMemory::allocate(8ui64);
      if ( v5 )
      {
        Buffer = bdString::getBuffer(other->m_string);
        bdString::bdString(v5, Buffer);
        v4 = v7;
      }
    }
    this->m_string = v4;
  }
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONArray *array)
{
  bdString *v4; 
  bdJSONArray *v5; 
  bdString *v6; 

  v4 = NULL;
  this->m_string = NULL;
  this->m_type = BD_JSON_ARRAY;
  v5 = (bdJSONArray *)bdMemory::allocate(0x10ui64);
  if ( v5 )
  {
    bdJSONArray::bdJSONArray(v5, array);
    v4 = v6;
  }
  this->m_string = v4;
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const bdJSONObject *object)
{
  bdString *v4; 
  bdJSONObject *v5; 
  bdString *v6; 

  v4 = NULL;
  this->m_string = NULL;
  this->m_type = BD_JSON_OBJECT;
  v5 = (bdJSONObject *)bdMemory::allocate(0x20ui64);
  if ( v5 )
  {
    bdJSONObject::bdJSONObject(v5, object);
    v4 = v6;
  }
  this->m_string = v4;
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const bdString *str)
{
  bdString *v4; 
  bdString *v5; 
  const char *Buffer; 
  bdString *v7; 
  const char *v8; 

  this->m_type = BD_JSON_STRING;
  v4 = NULL;
  this->m_string = NULL;
  v5 = (bdString *)bdMemory::allocate(8ui64);
  if ( v5 )
  {
    Buffer = bdString::getBuffer((bdString *)str);
    bdString::bdString(v5, Buffer);
    v4 = v7;
  }
  this->m_string = v4;
  v8 = bdString::getBuffer((bdString *)str);
  bdJSONUtility::escapeString(v8, NULL, 0, 0);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const int number)
{
  this->m_type = BD_JSON_NUMBER;
  this->m_string = NULL;
  bdJSONValue::assignNumber(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const unsigned int number)
{
  this->m_type = BD_JSON_NULL;
  this->m_string = NULL;
  bdJSONValue::assignNumber(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const long double number)
{
  this->m_type = BD_JSON_NUMBER;
  this->m_string = NULL;
  bdJSONValue::assignNumber(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const char *str)
{
  bdString *v4; 
  bdString *v5; 
  bdString *v6; 

  v4 = NULL;
  this->m_string = NULL;
  this->m_type = BD_JSON_STRING;
  v5 = (bdString *)bdMemory::allocate(8ui64);
  if ( v5 )
  {
    bdString::bdString(v5, str);
    v4 = v6;
  }
  this->m_string = v4;
  bdJSONUtility::escapeString(str, NULL, 0, 0);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, bdJSONType type)
{
  bdString *v3; 
  bdJSONObject *v4; 
  bdString *v5; 
  bdJSONArray *v6; 
  bdString *v7; 
  bdString *v8; 
  bdString *v9; 

  this->m_type = type;
  v3 = NULL;
  this->m_string = NULL;
  if ( type > BD_JSON_NULL )
  {
    if ( type <= BD_JSON_BOOLEAN )
    {
      v8 = (bdString *)bdMemory::allocate(8ui64);
      if ( v8 )
      {
        bdString::bdString(v8);
        v3 = v9;
      }
      this->m_string = v3;
    }
    else if ( type == BD_JSON_ARRAY )
    {
      v6 = (bdJSONArray *)bdMemory::allocate(0x10ui64);
      if ( v6 )
      {
        bdJSONArray::bdJSONArray(v6);
        v3 = v7;
      }
      this->m_string = v3;
    }
    else if ( type == BD_JSON_OBJECT )
    {
      v4 = (bdJSONObject *)bdMemory::allocate(0x20ui64);
      if ( v4 )
      {
        bdJSONObject::bdJSONObject(v4);
        v3 = v5;
      }
      this->m_string = v3;
    }
  }
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this)
{
  this->m_type = BD_JSON_NULL;
  this->m_string = NULL;
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const __int64 number)
{
  this->m_type = BD_JSON_NUMBER;
  this->m_string = NULL;
  bdJSONValue::assignNumber(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const unsigned __int64 number)
{
  this->m_type = BD_JSON_NUMBER;
  this->m_string = NULL;
  bdJSONValue::assignNumber(this, number);
}

/*
==============
bdJSONValue::bdJSONValue
==============
*/
void bdJSONValue::bdJSONValue(bdJSONValue *this, const bool boolean)
{
  bdString *v4; 
  bdString *v5; 
  const char *v6; 
  bdString *v7; 

  this->m_type = BD_JSON_BOOLEAN;
  v4 = NULL;
  this->m_string = NULL;
  v5 = (bdString *)bdMemory::allocate(8ui64);
  if ( v5 )
  {
    v6 = "false";
    if ( boolean )
      v6 = "true";
    bdString::bdString(v5, v6);
    v4 = v7;
  }
  this->m_string = v4;
}

/*
==============
bdJSONValue::~bdJSONValue
==============
*/
void bdJSONValue::~bdJSONValue(bdJSONValue *this)
{
  bdJSONValue::cleanup(this);
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const bdJSONValue *other)
{
  bdString *v4; 
  bdString *v5; 
  const char *Buffer; 
  bdJSONObject *v7; 
  const bdJSONObject *Object; 
  bdJSONArray *v9; 
  const bdJSONArray *Array; 

  if ( this != other )
  {
    bdJSONValue::cleanup(this);
    if ( other->m_type )
    {
      if ( other->m_type == BD_JSON_ARRAY )
      {
        v4 = (bdString *)bdMemory::allocate(0x10ui64);
        v9 = (bdJSONArray *)v4;
        if ( v4 )
        {
          Array = bdJSONValue::getArray((bdJSONValue *)other);
          bdJSONArray::bdJSONArray(v9, Array);
        }
      }
      else if ( other->m_type == BD_JSON_OBJECT )
      {
        v4 = (bdString *)bdMemory::allocate(0x20ui64);
        v7 = (bdJSONObject *)v4;
        if ( v4 )
        {
          Object = bdJSONValue::getObject((bdJSONValue *)other);
          bdJSONObject::bdJSONObject(v7, Object);
        }
      }
      else
      {
        v4 = (bdString *)bdMemory::allocate(8ui64);
        v5 = v4;
        if ( v4 )
        {
          Buffer = bdString::getBuffer(other->m_string);
          bdString::bdString(v5, Buffer);
        }
      }
      this->m_string = v4;
    }
    this->m_type = other->m_type;
  }
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const bdString *str)
{
  bdString *v4; 
  bdString *v5; 
  const char *Buffer; 
  const char *v7; 

  bdJSONValue::cleanup(this);
  this->m_type = BD_JSON_STRING;
  v4 = (bdString *)bdMemory::allocate(8ui64);
  v5 = v4;
  if ( v4 )
  {
    Buffer = bdString::getBuffer((bdString *)str);
    bdString::bdString(v5, Buffer);
  }
  this->m_string = v4;
  v7 = bdString::getBuffer((bdString *)str);
  bdJSONUtility::escapeString(v7, NULL, 0, 0);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const int number)
{
  __int64 v2; 

  v2 = number;
  bdJSONValue::cleanup(this);
  bdJSONValue::assignNumber(this, v2);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const unsigned int number)
{
  bdJSONValue::cleanup(this);
  bdJSONValue::assignNumber(this, number);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const long double number)
{
  bdJSONValue::cleanup(this);
  bdJSONValue::assignNumber(this, number);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const char *str)
{
  bdString *v4; 

  bdJSONValue::cleanup(this);
  this->m_type = BD_JSON_STRING;
  v4 = (bdString *)bdMemory::allocate(8ui64);
  if ( v4 )
    bdString::bdString(v4, str);
  this->m_string = v4;
  bdJSONUtility::escapeString(str, NULL, 0, 0);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const __int64 number)
{
  bdJSONValue::cleanup(this);
  bdJSONValue::assignNumber(this, number);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const unsigned __int64 number)
{
  bdJSONValue::cleanup(this);
  bdJSONValue::assignNumber(this, number);
  return this;
}

/*
==============
bdJSONValue::operator=
==============
*/
bdJSONValue *bdJSONValue::operator=(bdJSONValue *this, const bool boolean)
{
  bdString *v4; 
  const char *v5; 

  bdJSONValue::cleanup(this);
  this->m_type = BD_JSON_BOOLEAN;
  v4 = (bdString *)bdMemory::allocate(8ui64);
  if ( v4 )
  {
    v5 = "false";
    if ( boolean )
      v5 = "true";
    bdString::bdString(v4, v5);
  }
  this->m_string = v4;
  return this;
}

/*
==============
bdJSONValue::operator[]
==============
*/
bdJSONValue *bdJSONValue::operator[](bdJSONValue *this, int index)
{
  __int64 m_type; 
  __int64 v4; 
  bdString *m_string; 

  m_type = this->m_type;
  v4 = (unsigned int)index;
  if ( (_DWORD)m_type != 4 )
  {
    bdHandleAssert(0, "\"(m_type == BD_JSON_ARRAY)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x163u, "bdJSONValue::operator[<bdUInt32>] called when m_type[%s]", bdJSONTypeString_0[m_type]);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x163u, "bdJSONValue::operator[<bdUInt32>] called when m_type[%s]", bdJSONTypeString_0[this->m_type]);
    if ( this->m_type != BD_JSON_ARRAY )
      return this;
  }
  m_string = this->m_string;
  if ( !m_string )
    return this;
  bdHandleAssert((unsigned int)v4 < HIDWORD(m_string[1].m_string), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdJSONValue>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  return (bdJSONValue *)&m_string->m_string[16 * v4];
}

/*
==============
bdJSONValue::operator[]
==============
*/
bdJSONValue *bdJSONValue::operator[](bdJSONValue *this, unsigned int index)
{
  __int64 m_type; 
  __int64 v4; 
  bdString *m_string; 

  m_type = this->m_type;
  v4 = index;
  if ( (_DWORD)m_type != 4 )
  {
    bdHandleAssert(0, "\"(m_type == BD_JSON_ARRAY)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x163u, "bdJSONValue::operator[<bdUInt32>] called when m_type[%s]", bdJSONTypeString_0[m_type]);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x163u, "bdJSONValue::operator[<bdUInt32>] called when m_type[%s]", bdJSONTypeString_0[this->m_type]);
    if ( this->m_type != BD_JSON_ARRAY )
      return this;
  }
  m_string = this->m_string;
  if ( !m_string )
    return this;
  bdHandleAssert((unsigned int)v4 < HIDWORD(m_string[1].m_string), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdJSONValue>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  return (bdJSONValue *)&m_string->m_string[16 * v4];
}

/*
==============
bdJSONValue::operator[]
==============
*/
bdJSONValue *bdJSONValue::operator[](bdJSONValue *this, const char *key)
{
  __int64 m_type; 
  bdString *m_string; 

  m_type = this->m_type;
  if ( ((_DWORD)m_type == 5 || (bdHandleAssert(0, "\"(m_type == BD_JSON_OBJECT)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x156u, "bdJSONValue::operator[<str>] called when m_type[%s]", bdJSONTypeString_0[m_type]), bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::operator []", 0x156u, "bdJSONValue::operator[<str>] called when m_type[%s]", bdJSONTypeString_0[this->m_type]), this->m_type == BD_JSON_OBJECT)) && (m_string = this->m_string) != NULL )
    return bdJSONObject::operator[]((bdJSONObject *)m_string, key);
  else
    return this;
}

/*
==============
bdJSONValue::assignNumber
==============
*/
char bdJSONValue::assignNumber(bdJSONValue *this, const long double number)
{
  bdString *v3; 
  char buf[24]; 

  if ( bdSnprintf(buf, 0x18ui64, "%.20g", number) <= 0 )
    return 0;
  this->m_type = BD_JSON_NUMBER;
  v3 = (bdString *)bdMemory::allocate(8ui64);
  if ( v3 )
    bdString::bdString(v3, buf);
  this->m_string = v3;
  return 1;
}

/*
==============
bdJSONValue::assignNumber
==============
*/
char bdJSONValue::assignNumber(bdJSONValue *this, const __int64 number)
{
  bdString *v3; 
  char buf[24]; 

  if ( bdSnprintf(buf, 0x18ui64, "%I64i", number) <= 0 )
    return 0;
  this->m_type = BD_JSON_NUMBER;
  v3 = (bdString *)bdMemory::allocate(8ui64);
  if ( v3 )
    bdString::bdString(v3, buf);
  this->m_string = v3;
  return 1;
}

/*
==============
bdJSONValue::assignNumber
==============
*/
char bdJSONValue::assignNumber(bdJSONValue *this, const unsigned __int64 number)
{
  bdString *v3; 
  char buf[24]; 

  if ( bdSnprintf(buf, 0x18ui64, "%I64u", number) <= 0 )
    return 0;
  this->m_type = BD_JSON_NUMBER;
  v3 = (bdString *)bdMemory::allocate(8ui64);
  if ( v3 )
    bdString::bdString(v3, buf);
  this->m_string = v3;
  return 1;
}

/*
==============
bdJSONValue::cleanup
==============
*/
void bdJSONValue::cleanup(bdJSONValue *this)
{
  bdJSONType m_type; 
  bdString *v3; 
  bdString *v4; 
  bdString *m_string; 

  m_type = this->m_type;
  if ( this->m_type <= BD_JSON_NULL )
  {
LABEL_13:
    this->m_type = BD_JSON_NULL;
    return;
  }
  if ( m_type <= BD_JSON_BOOLEAN )
  {
    m_string = this->m_string;
    if ( m_string )
    {
      bdString::~bdString(this->m_string);
      bdMemory::deallocate(m_string);
    }
LABEL_12:
    this->m_type = BD_JSON_NULL;
    this->m_string = NULL;
    return;
  }
  if ( m_type != BD_JSON_ARRAY )
  {
    if ( m_type == BD_JSON_OBJECT )
    {
      v3 = this->m_string;
      if ( v3 )
      {
        bdJSONObject::~bdJSONObject(this->m_object);
        bdMemory::deallocate(v3);
        this->m_type = BD_JSON_NULL;
        this->m_string = NULL;
        return;
      }
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v4 = this->m_string;
  if ( v4 )
  {
    bdJSONArray::~bdJSONArray(this->m_array);
    bdMemory::deallocate(v4);
  }
  this->m_string = NULL;
  this->m_type = BD_JSON_NULL;
}

/*
==============
bdJSONValue::getArray
==============
*/
bdJSONArray *bdJSONValue::getArray(bdJSONValue *this)
{
  __int64 m_type; 
  bdJSONArray *result; 

  m_type = this->m_type;
  if ( (_DWORD)m_type != 4 )
  {
    bdHandleAssert(0, "\"(m_type == BD_JSON_ARRAY)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getArray", 0x146u, "bdJSONValue::getArray() called when m_type[%s]", bdJSONTypeString_0[m_type]);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getArray", 0x146u, "bdJSONValue::getArray() called when m_type[%s]", bdJSONTypeString_0[this->m_type]);
    LODWORD(m_type) = this->m_type;
  }
  result = NULL;
  if ( (_DWORD)m_type == 4 )
  {
    if ( this->m_string )
      return this->m_array;
  }
  return result;
}

/*
==============
bdJSONValue::getBool
==============
*/
char bdJSONValue::getBool(bdJSONValue *this, bool *value)
{
  const char *Buffer; 
  const char *v6; 

  if ( this->m_type == BD_JSON_BOOLEAN )
  {
    Buffer = bdString::getBuffer(this->m_string);
    if ( !strncmp(Buffer, "true", 4ui64) )
    {
      *value = 1;
      return 1;
    }
    v6 = bdString::getBuffer(this->m_string);
    if ( !strncmp(v6, "false", 5ui64) )
    {
      *value = 0;
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getBool", 0x185u, "bdJSONValue Boolean text malformed");
  }
  return 0;
}

/*
==============
bdJSONValue::getFloat64
==============
*/
char bdJSONValue::getFloat64(bdJSONValue *this, long double *value)
{
  __int64 m_type; 
  const char *Buffer; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    Buffer = bdString::getBuffer(this->m_string);
    *value = strtod(Buffer, NULL);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getFloat64", 0x1D6u, "bdJSONValue has an unexpected type[%s] expected Number/String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::getInt32
==============
*/
char bdJSONValue::getInt32(bdJSONValue *this, int *value)
{
  __int64 m_type; 
  const char *Buffer; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    Buffer = bdString::getBuffer(this->m_string);
    *value = strtol(Buffer, NULL, 10);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getInt32", 0x196u, "bdJSONValue has an unexpected type[%s] expected Number/String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::getInt64
==============
*/
char bdJSONValue::getInt64(bdJSONValue *this, __int64 *value)
{
  __int64 m_type; 
  const char *Buffer; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    Buffer = bdString::getBuffer(this->m_string);
    *value = _strtoi64(Buffer, NULL, 10);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getInt64", 0x1B6u, "bdJSONValue has an unexpected type[%s] expected Number/String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::getObject
==============
*/
bdJSONObject *bdJSONValue::getObject(bdJSONValue *this)
{
  __int64 m_type; 
  bdJSONObject *result; 

  m_type = this->m_type;
  if ( (_DWORD)m_type != 5 )
  {
    bdHandleAssert(0, "\"(m_type == BD_JSON_OBJECT)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getObject", 0x139u, "bdJSONValue::getObject() called when m_type[%s]", bdJSONTypeString_0[m_type]);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getObject", 0x139u, "bdJSONValue::getObject() called when m_type[%s]", bdJSONTypeString_0[this->m_type]);
    LODWORD(m_type) = this->m_type;
  }
  result = NULL;
  if ( (_DWORD)m_type == 5 )
  {
    if ( this->m_string )
      return this->m_object;
  }
  return result;
}

/*
==============
bdJSONValue::getString
==============
*/
char bdJSONValue::getString(bdJSONValue *this, bdString *value)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( (_DWORD)m_type == 1 )
  {
    bdString::operator=(value, this->m_string);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getString", 0x1E6u, "bdJSONValue has an unexpected type[%s] expected String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::getString
==============
*/
bdString *bdJSONValue::getString(bdJSONValue *this)
{
  __int64 m_type; 
  bdString *result; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) > 2 || (result = this->m_string) == NULL )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getString", 0x1F5u, "Error: getString() called on bdJSONValue with m_type[%s]", bdJSONTypeString_0[m_type]);
    return 0i64;
  }
  return result;
}

/*
==============
bdJSONValue::getType
==============
*/
__int64 bdJSONValue::getType(bdJSONValue *this)
{
  return (unsigned int)this->m_type;
}

/*
==============
bdJSONValue::getUInt32
==============
*/
char bdJSONValue::getUInt32(bdJSONValue *this, unsigned int *value)
{
  __int64 m_type; 
  const char *Buffer; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    Buffer = bdString::getBuffer(this->m_string);
    *value = strtoul(Buffer, NULL, 10);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getUInt32", 0x1A6u, "bdJSONValue has an unexpected type[%s] expected Number/String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::getUInt64
==============
*/
char bdJSONValue::getUInt64(bdJSONValue *this, unsigned __int64 *value)
{
  __int64 m_type; 
  const char *Buffer; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    Buffer = bdString::getBuffer(this->m_string);
    *value = _strtoui64(Buffer, NULL, 10);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::getUInt64", 0x1C6u, "bdJSONValue has an unexpected type[%s] expected Number/String", bdJSONTypeString_0[m_type]);
    return 0;
  }
}

/*
==============
bdJSONValue::parse
==============
*/
_BOOL8 bdJSONValue::parse(bdJSONValue *this, const bdString *jsonStr)
{
  const char *Buffer; 
  bool v4; 

  Buffer = bdString::getBuffer((bdString *)jsonStr);
  v4 = bdJSONValue::parseValue(Buffer, NULL, this);
  if ( !v4 )
    bdJSONValue::cleanup(this);
  return v4;
}

/*
==============
bdJSONValue::parse
==============
*/
_BOOL8 bdJSONValue::parse(bdJSONValue *this, const char *const jsonStr, const char **outPtr)
{
  bool v4; 

  v4 = bdJSONValue::parseValue(jsonStr, outPtr, this);
  if ( !v4 )
    bdJSONValue::cleanup(this);
  return v4;
}

/*
==============
bdJSONValue::parseLiteral
==============
*/
char bdJSONValue::parseLiteral(const char *jsonPtr, const char **outPtr, bdJSONValue *target)
{
  const char *v6; 
  __int64 v7; 
  bdString *v8; 
  bdString *v9; 

  v6 = jsonPtr;
  if ( jsonPtr )
  {
    v7 = 0x100002600i64;
    while ( *v6 <= 0x20u && _bittest64(&v7, *v6) )
      ++v6;
  }
  bdJSONValue::cleanup(target);
  if ( !v6 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::parseLiteral", 0x2FFu, "Error: unable to parse JSON literal - NULL string");
    return 0;
  }
  if ( !strncmp(v6, "true", 4ui64) )
  {
    target->m_type = BD_JSON_BOOLEAN;
    v8 = (bdString *)bdMemory::allocate(8ui64);
    if ( v8 )
      bdString::bdString(v8, "true");
    target->m_string = v8;
    goto LABEL_19;
  }
  if ( strncmp(v6, "false", 5ui64) )
  {
    if ( !strncmp(v6, "null", 4ui64) )
    {
      target->m_type = BD_JSON_NULL;
LABEL_19:
      if ( outPtr )
        *outPtr = v6 + 4;
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::parseLiteral", 0x2FAu, "Error: unable to parse JSON literal [%s]", jsonPtr);
    return 0;
  }
  target->m_type = BD_JSON_BOOLEAN;
  v9 = (bdString *)bdMemory::allocate(8ui64);
  if ( v9 )
    bdString::bdString(v9, "false");
  target->m_string = v9;
  if ( outPtr )
    *outPtr = v6 + 5;
  return 1;
}

/*
==============
bdJSONValue::parseNumber
==============
*/
char bdJSONValue::parseNumber(const char **json, bdJSONValue *target)
{
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  bdString *v7; 

  v4 = *json;
  if ( *json )
  {
    v5 = 0x100002600i64;
    while ( *v4 <= 0x20u && _bittest64(&v5, *v4) )
      ++v4;
  }
  v6 = bdJSONUtility::skipNumber(v4, NULL);
  bdJSONValue::cleanup(target);
  v7 = (bdString *)bdMemory::allocate(8ui64);
  if ( v7 )
    bdString::bdString(v7, v4, v6 - v4);
  target->m_string = v7;
  target->m_type = BD_JSON_NUMBER;
  *json = v6;
  return 1;
}

/*
==============
bdJSONValue::parseString
==============
*/
__int64 bdJSONValue::parseString(const char **json, bdJSONValue *target)
{
  unsigned __int8 v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  char v9; 
  const char *v10; 
  unsigned int v11; 
  bdString *v12; 
  char *v13; 
  __int64 v14; 
  char *v15; 
  const char *Buffer; 
  bdString *v17; 
  bdString *v18; 
  char *v20; 
  __int64 v21; 
  bdString v22; 
  bdString *v23; 

  v4 = 0;
  v5 = *json;
  if ( *json )
  {
    v6 = 0x100002600i64;
    while ( *v5 <= 0x20u && _bittest64(&v6, *v5) )
      ++v5;
  }
  if ( *v5 == 34 )
  {
    v7 = v5 + 1;
    v8 = v5 + 1;
    if ( v5[1] )
    {
      v9 = *v7;
      while ( v9 != 34 )
      {
        v10 = v8 + 1;
        if ( v9 != 92 )
          v10 = v8;
        v8 = v10 + 1;
        v9 = v10[1];
        if ( !v9 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( *v8 != 34 )
        return v4;
    }
    bdJSONValue::cleanup(target);
    bdString::bdString(&v22, v7, v8 - v7);
    v11 = (_DWORD)v8 - (_DWORD)v7 + 1;
    v12 = NULL;
    v13 = NULL;
    v20 = NULL;
    LODWORD(v21) = v11;
    HIDWORD(v21) = v11;
    if ( (_DWORD)v8 - (_DWORD)v7 != -1 )
    {
      v14 = v11;
      v15 = (char *)bdMemory::allocate(v11);
      v13 = v15;
      v20 = v15;
      do
      {
        *v15++ = 0;
        --v14;
      }
      while ( v14 );
    }
    bdHandleAssert(v11 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed", -2i64, v20, v21);
    Buffer = bdString::getBuffer(&v22);
    if ( bdJSONUtility::deescapeString(Buffer, v13, v11) != -1 )
    {
      v17 = (bdString *)bdMemory::allocate(8ui64);
      v23 = v17;
      if ( v17 )
      {
        bdHandleAssert(v11 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        bdString::bdString(v17, v13);
        v12 = v18;
      }
      target->m_string = v12;
      target->m_type = BD_JSON_STRING;
      *json = v8 + 1;
      v4 = 1;
    }
    bdMemory::deallocate(v13);
    bdString::~bdString(&v22);
  }
  return v4;
}

/*
==============
bdJSONValue::parseValue
==============
*/
__int64 bdJSONValue::parseValue(const char *jsonPtr, const char **outPtr, bdJSONValue *target)
{
  unsigned __int8 v6; 
  char *v7; 
  __int64 v8; 
  char v9; 
  bdJSONObject *v10; 
  bool v11; 
  bdJSONArray *v12; 
  char *v13; 
  bdString *v14; 
  __int64 result; 
  char *jsonPtra; 
  void *v17; 

  v6 = 0;
  bdJSONValue::cleanup(target);
  if ( jsonPtr )
  {
    v7 = (char *)jsonPtr;
    v8 = 0x100002600i64;
    while ( 1 )
    {
      v9 = *v7;
      if ( (unsigned __int8)*v7 > 0x20u || !_bittest64(&v8, v9) )
        break;
      ++v7;
    }
    jsonPtra = v7;
    switch ( v9 )
    {
      case '"':
        v11 = bdJSONValue::parseString((const char **)&jsonPtra, target);
        goto LABEL_22;
      case '-':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        while ( (unsigned __int8)v9 <= 0x20u && _bittest64(&v8, v9) )
          v9 = *++v7;
        v13 = (char *)bdJSONUtility::skipNumber(v7, NULL);
        bdJSONValue::cleanup(target);
        v14 = (bdString *)bdMemory::allocate(8ui64);
        v17 = v14;
        if ( v14 )
          bdString::bdString(v14, v7, v13 - v7);
        target->m_string = v14;
        target->m_type = BD_JSON_NUMBER;
        v6 = 1;
        goto LABEL_24;
      case '[':
        v12 = (bdJSONArray *)bdMemory::allocate(0x10ui64);
        v17 = v12;
        if ( v12 )
          bdJSONArray::bdJSONArray(v12);
        target->m_string = (bdString *)v12;
        target->m_type = BD_JSON_ARRAY;
        v11 = bdJSONArray::parse(v12, jsonPtra, (const char **)&jsonPtra);
        goto LABEL_22;
      case 'f':
      case 'n':
      case 't':
        v11 = bdJSONValue::parseLiteral(v7, (const char **)&jsonPtra, target);
        goto LABEL_22;
      case '{':
        v10 = (bdJSONObject *)bdMemory::allocate(0x20ui64);
        v17 = v10;
        if ( v10 )
          bdJSONObject::bdJSONObject(v10);
        target->m_string = (bdString *)v10;
        target->m_type = BD_JSON_OBJECT;
        v11 = bdJSONObject::parse(v10, jsonPtra, (const char **)&jsonPtra);
LABEL_22:
        v6 = v11;
        if ( !v11 )
          goto LABEL_26;
        v13 = jsonPtra;
LABEL_24:
        result = v6;
        if ( outPtr )
          *outPtr = v13;
        return result;
      default:
LABEL_26:
        bdJSONValue::cleanup(target);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::parseValue", 0x2CAu, "Error: Unable to parse JSON: [%s]", jsonPtr);
        return v6;
    }
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::parseValue", 0x29Du, "Error: Unable to parse JSON: NULL ptr");
  return v6;
}

/*
==============
bdJSONValue::serialize
==============
*/
bdString *bdJSONValue::serialize(bdJSONValue *this, bdString *result)
{
  char v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  char *v9; 
  char *v10; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x272u, "`bdString bdJSONValue::serialize()` is deprecated in favor of `bdBool serialize(bdString&)`");
  bdString::bdString(result);
  v4 = 0;
  v5 = bdJSONValue::serialize(this, NULL, 0);
  v6 = v5;
  if ( v5 <= 0 )
    goto LABEL_8;
  v7 = v5 + 1;
  v8 = v7;
  v9 = (char *)bdMemory::allocate(v7);
  v10 = v9;
  do
  {
    *v10++ = 0;
    --v8;
  }
  while ( v8 );
  bdHandleAssert(v7 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
  if ( bdJSONValue::serialize(this, v9, v7) == v6 )
  {
    bdHandleAssert(v7 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    bdString::operator=(result, v9);
    v4 = 1;
  }
  bdMemory::deallocate(v9);
  if ( !v4 )
LABEL_8:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x268u, "Error serializing JSON");
  return result;
}

/*
==============
bdJSONValue::serialize
==============
*/
__int64 bdJSONValue::serialize(bdJSONValue *this, char *outBuffer, const unsigned int outBufferSz)
{
  unsigned __int64 v3; 
  unsigned int Length; 
  bool m_utf8Replace; 
  const char *v8; 
  int v9; 
  const char *Buffer; 
  int v11; 
  int v12; 
  const char *v13; 

  v3 = outBufferSz;
  Length = -1;
  if ( outBuffer )
  {
    if ( outBufferSz )
    {
      switch ( this->m_type )
      {
        case BD_JSON_NULL:
          if ( outBufferSz > 4 )
            Length = bdSnprintf(outBuffer, outBufferSz, (const char *)&queryFormat, "null");
          break;
        case BD_JSON_STRING:
          Buffer = bdString::getBuffer(this->m_string);
          v11 = bdJSONUtility::escapeString(Buffer, NULL, 0, BD_JSON_CONFIG_2.m_utf8Replace);
          if ( v11 != -1 && (unsigned int)v3 > v11 + 2 )
          {
            *outBuffer = 34;
            v12 = bdJSONUtility::escapeString(Buffer, outBuffer + 1, v3 - 1, BD_JSON_CONFIG_2.m_utf8Replace);
            Length = v12 + 2;
            outBuffer[v12 + 1] = 34;
            outBuffer[v12 + 2] = 0;
          }
          break;
        case BD_JSON_NUMBER:
        case BD_JSON_BOOLEAN:
          v13 = bdString::getBuffer(this->m_string);
          if ( v3 > bdStrlen(v13) )
            Length = bdSnprintf(outBuffer, v3, (const char *)&queryFormat, v13);
          break;
        case BD_JSON_ARRAY:
          Length = bdJSONArray::serialize(this->m_array, outBuffer, outBufferSz);
          break;
        case BD_JSON_OBJECT:
          Length = bdJSONObject::serialize(this->m_object, outBuffer, outBufferSz);
          break;
        default:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x24Du, "Error: Unknown bdJSONType[%d] - cannot serialize", this->m_type);
          break;
      }
    }
  }
  else
  {
    switch ( this->m_type )
    {
      case BD_JSON_NULL:
        Length = 4;
        break;
      case BD_JSON_STRING:
        m_utf8Replace = BD_JSON_CONFIG_2.m_utf8Replace;
        v8 = bdString::getBuffer(this->m_string);
        v9 = bdJSONUtility::escapeString(v8, NULL, 0, m_utf8Replace);
        if ( v9 != -1 )
          Length = v9 + 2;
        break;
      case BD_JSON_NUMBER:
      case BD_JSON_BOOLEAN:
        Length = bdString::getLength(this->m_string);
        break;
      case BD_JSON_ARRAY:
        Length = bdJSONArray::serialize(this->m_array, NULL, 0);
        break;
      case BD_JSON_OBJECT:
        Length = bdJSONObject::serialize(this->m_object, NULL, 0);
        break;
      default:
        bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x21Au, "Error: Unknown bdJSONType[%d] - cannot serialize", this->m_type);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x21Au, "Error: Unknown bdJSONType[%d] - cannot serialize", this->m_type);
        break;
    }
  }
  return Length;
}

/*
==============
bdJSONValue::serialize
==============
*/
__int64 bdJSONValue::serialize(bdJSONValue *this, bdString *outJSON)
{
  unsigned __int8 v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  char *v9; 
  char *v10; 

  v4 = 0;
  v5 = bdJSONValue::serialize(this, NULL, 0);
  v6 = v5;
  if ( v5 <= 0 )
    goto LABEL_8;
  v7 = v5 + 1;
  v8 = v7;
  v9 = (char *)bdMemory::allocate(v7);
  v10 = v9;
  do
  {
    *v9++ = 0;
    --v8;
  }
  while ( v8 );
  bdHandleAssert(v7 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
  if ( bdJSONValue::serialize(this, v10, v7) == v6 )
  {
    bdHandleAssert(v7 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    bdString::operator=(outJSON, v10);
    v4 = 1;
  }
  bdMemory::deallocate(v10);
  if ( !v4 )
LABEL_8:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonvalue.cpp", "bdJSONValue::serialize", 0x268u, "Error serializing JSON");
  return v4;
}

