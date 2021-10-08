/*
==============
bdJSONArray::serialize
==============
*/

int __fastcall bdJSONArray::serialize(bdJSONArray *this, char *const outBuffer, const unsigned int outBufferSz)
{
  return ?serialize@bdJSONArray@@IEBAHQEADI@Z(this, outBuffer, outBufferSz);
}

/*
==============
bdJSONArray::~bdJSONArray
==============
*/

void __fastcall bdJSONArray::~bdJSONArray(bdJSONArray *this)
{
  ??1bdJSONArray@@IEAA@XZ(this);
}

/*
==============
bdJSONArray::bdJSONArray
==============
*/

void __fastcall bdJSONArray::bdJSONArray(bdJSONArray *this)
{
  ??0bdJSONArray@@IEAA@XZ(this);
}

/*
==============
bdJSONArray::operator=
==============
*/

bdJSONArray *__fastcall bdJSONArray::operator=(bdJSONArray *this, const bdJSONArray *other)
{
  return ??4bdJSONArray@@IEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdJSONArray::bdJSONArray
==============
*/

void __fastcall bdJSONArray::bdJSONArray(bdJSONArray *this, const bdJSONArray *other)
{
  ??0bdJSONArray@@IEAA@AEBV0@@Z(this, other);
}

/*
==============
bdJSONArray::parse
==============
*/

bool __fastcall bdJSONArray::parse(bdJSONArray *this, const char *jsonPtr, const char **outPtr)
{
  return ?parse@bdJSONArray@@IEAA_NPEBDPEAPEBD@Z(this, jsonPtr, outPtr);
}

/*
==============
bdJSONArray::bdJSONArray
==============
*/
void bdJSONArray::bdJSONArray(bdJSONArray *this, const bdJSONArray *other)
{
  this->m_array.m_capacity = other->m_array.m_capacity;
  this->m_array.m_size = other->m_array.m_size;
  this->m_array.m_data = bdArray<bdJSONValue>::uninitializedCopy(&this->m_array, &other->m_array);
}

/*
==============
bdJSONArray::bdJSONArray
==============
*/
void bdJSONArray::bdJSONArray(bdJSONArray *this)
{
  this->m_array.m_data = NULL;
  *(_QWORD *)&this->m_array.m_capacity = 0i64;
}

/*
==============
bdJSONArray::~bdJSONArray
==============
*/

void __fastcall bdJSONArray::~bdJSONArray(bdJSONArray *this)
{
  bdArray<bdJSONValue>::~bdArray<bdJSONValue>(&this->m_array);
}

/*
==============
bdJSONArray::operator=
==============
*/
bdJSONArray *bdJSONArray::operator=(bdJSONArray *this, const bdJSONArray *other)
{
  if ( this != other )
    bdArray<bdJSONValue>::operator=(&this->m_array, &other->m_array);
  return this;
}

/*
==============
bdJSONArray::parse
==============
*/
bool bdJSONArray::parse(bdJSONArray *this, const char *jsonPtr, const char **outPtr)
{
  char *v5; 
  __int64 v6; 
  char *v7; 
  char v8; 
  unsigned int m_size; 
  unsigned int m_capacity; 
  unsigned int v11; 
  bdJSONValue *v12; 
  unsigned int v13; 
  bdJSONValue *v14; 
  unsigned int v15; 
  bdJSONValue *v16; 
  char *v17; 
  __int64 v18; 
  bdJSONValue *m_data; 
  __int64 v20; 
  unsigned int v21; 
  bdJSONValue *v22; 
  unsigned int v23; 
  bdJSONValue *v24; 
  __int64 v25; 
  bool result; 
  const char *v27; 
  bdJSONValue other; 
  char *jsonStr; 

  v5 = (char *)jsonPtr;
  if ( jsonPtr )
  {
    v6 = 0x100002600i64;
    while ( (unsigned __int8)*v5 <= 0x20u && _bittest64(&v6, *v5) )
      ++v5;
  }
  jsonStr = v5;
  if ( *v5 == 91 )
  {
    v7 = v5 + 1;
    jsonStr = v7;
    v8 = 1;
    while ( 2 )
    {
      switch ( *v7 )
      {
        case 0:
          break;
        case 9:
        case 10:
        case 13:
        case 32:
        case 44:
          jsonStr = ++v7;
LABEL_33:
          if ( !v8 )
            break;
          continue;
        case 93:
          v27 = v7 + 1;
          result = 1;
          if ( outPtr )
            *outPtr = v27;
          return result;
        default:
          switch ( *v7 )
          {
            case '"':
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
            case '[':
            case 'f':
            case 'n':
            case 't':
            case '{':
              bdJSONValue::bdJSONValue(&other);
              if ( bdJSONValue::parse(&other, jsonStr, (const char **)&jsonStr) )
              {
                m_size = this->m_array.m_size;
                m_capacity = this->m_array.m_capacity;
                if ( m_size == m_capacity )
                {
                  v11 = this->m_array.m_capacity;
                  if ( !m_capacity )
                    v11 = 1;
                  v12 = NULL;
                  v13 = m_capacity + v11;
                  if ( v13 )
                  {
                    v14 = (bdJSONValue *)bdMemory::allocate(16i64 * v13);
                    v12 = v14;
                    v15 = this->m_array.m_size;
                    m_size = v15;
                    if ( v15 )
                    {
                      v16 = v14;
                      v17 = (char *)((char *)this->m_array.m_data - (char *)v14);
                      v18 = v15;
                      do
                      {
                        if ( v16 )
                          bdJSONValue::bdJSONValue(v16, (const bdJSONValue *)((char *)v16 + (_QWORD)v17));
                        ++v16;
                        --v18;
                      }
                      while ( v18 );
                      m_size = this->m_array.m_size;
                    }
                  }
                  m_data = this->m_array.m_data;
                  if ( m_size )
                  {
                    v20 = m_size;
                    do
                    {
                      bdJSONValue::~bdJSONValue(m_data++);
                      --v20;
                    }
                    while ( v20 );
                    m_data = this->m_array.m_data;
                  }
                  bdMemory::deallocate(m_data);
                  this->m_array.m_data = v12;
                  this->m_array.m_capacity = v13;
                }
                else
                {
                  v12 = this->m_array.m_data;
                }
                v21 = this->m_array.m_size;
                v22 = &v12[v21];
                if ( v22 )
                {
                  bdJSONValue::bdJSONValue(v22, &other);
                  v21 = this->m_array.m_size;
                }
                this->m_array.m_size = v21 + 1;
              }
              else
              {
                v8 = 0;
              }
              bdJSONValue::~bdJSONValue(&other);
              v7 = jsonStr;
              goto LABEL_33;
            default:
              goto $LN17_262;
          }
      }
      break;
    }
  }
$LN17_262:
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONArray", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonarray.cpp", "bdJSONArray::parse", 0xCDu, "Error: Failed to parse JSON Array from[%s]\n", jsonPtr);
  v23 = this->m_array.m_size;
  v24 = this->m_array.m_data;
  if ( v23 )
  {
    v25 = v23;
    do
    {
      bdJSONValue::~bdJSONValue(v24++);
      --v25;
    }
    while ( v25 );
    v24 = this->m_array.m_data;
  }
  bdMemory::deallocate(v24);
  this->m_array.m_data = NULL;
  *(_QWORD *)&this->m_array.m_capacity = 0i64;
  return 0;
}

/*
==============
bdJSONArray::serialize
==============
*/
__int64 bdJSONArray::serialize(bdJSONArray *this, char *const outBuffer, const unsigned int outBufferSz)
{
  __int64 v4; 
  BOOL m_prettyPrint; 
  bdJSONValue *m_data; 
  char v9; 
  int v10; 
  __int64 m_size; 
  char v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  __int64 result; 
  char v17; 
  bdJSONValue *i; 
  __int64 v19; 

  LODWORD(v4) = 1;
  m_prettyPrint = BD_JSON_CONFIG_5.m_prettyPrint;
  m_data = this->m_array.m_data;
  v9 = 1;
  v10 = 1;
  m_size = this->m_array.m_size;
  v12 = 1;
  if ( m_data != &m_data[m_size] )
  {
    while ( 1 )
    {
      v13 = m_prettyPrint + v10 + 1;
      if ( v12 )
        v13 = v10;
      v10 = v13;
      v14 = bdJSONValue::serialize(m_data, NULL, 0);
      if ( v14 == -1 )
        break;
      v10 += v14;
      v12 = 0;
      if ( ++m_data == &this->m_array.m_data[this->m_array.m_size] )
        goto LABEL_8;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJSON/bdJSONArray", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonarray.cpp", "bdJSONArray::serialize", 0x46u, "Invalid JSON Array value serialization");
    v9 = 0;
  }
LABEL_8:
  v15 = v10 + 1;
  if ( !v9 )
    return 0xFFFFFFFFi64;
  if ( !outBuffer )
    return v15;
  if ( outBufferSz <= v15 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONArray", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonarray.cpp", "bdJSONArray::serialize", 0x80u, "Error: Cannot write [%u]bytes, [%d]bytes left in buffer", v15, outBufferSz);
    return 0xFFFFFFFFi64;
  }
  *outBuffer = 91;
  v17 = 1;
  for ( i = this->m_array.m_data; i != &this->m_array.m_data[this->m_array.m_size]; ++i )
  {
    if ( !v17 )
    {
      v19 = (unsigned int)v4;
      v4 = (unsigned int)(v4 + 1);
      outBuffer[v19] = 44;
      if ( BD_JSON_CONFIG_5.m_prettyPrint )
      {
        outBuffer[v4] = 32;
        LODWORD(v4) = v4 + 1;
      }
    }
    LODWORD(v4) = bdJSONValue::serialize(i, &outBuffer[(unsigned int)v4], outBufferSz - v4) + v4;
    v17 = 0;
  }
  outBuffer[(unsigned int)v4] = 93;
  result = (unsigned int)(v4 + 1);
  outBuffer[result] = 0;
  return result;
}

