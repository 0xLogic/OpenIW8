/*
==============
bdJSONDeserializer::hasKey
==============
*/

bool __fastcall bdJSONDeserializer::hasKey(bdJSONDeserializer *this, const char *const key)
{
  return ?hasKey@bdJSONDeserializer@@QEBA_NQEBD@Z(this, key);
}

/*
==============
bdJSONDeserializer::getString
==============
*/

bool __fastcall bdJSONDeserializer::getString(bdJSONDeserializer *this, char *const value, const unsigned int size)
{
  return ?getString@bdJSONDeserializer@@QEBA_NQEADI@Z(this, value, size);
}

/*
==============
bdJSONDeserializer::getNumeric<double>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<double>(bdJSONDeserializer *this, long double *value)
{
  return ??$getNumeric@N@bdJSONDeserializer@@IEBA_NAEAN@Z(this, value);
}

/*
==============
bdJSONDeserializer::getString
==============
*/

bool __fastcall bdJSONDeserializer::getString(bdJSONDeserializer *this, const char *const key, char *const value, const unsigned int size)
{
  return ?getString@bdJSONDeserializer@@QEBA_NQEBDQEADI@Z(this, key, value, size);
}

/*
==============
bdJSONDeserializer::bdJSONDeserializer
==============
*/

void __fastcall bdJSONDeserializer::bdJSONDeserializer(bdJSONDeserializer *this, const char *buffer)
{
  ??0bdJSONDeserializer@@QEAA@PEBD@Z(this, buffer);
}

/*
==============
bdJSONDeserializer::getNumeric<float>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<float>(bdJSONDeserializer *this, float *value)
{
  return ??$getNumeric@M@bdJSONDeserializer@@IEBA_NAEAM@Z(this, value);
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/

bool __fastcall bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, const unsigned int index, unsigned __int64 *value)
{
  return ?getUInt64@bdJSONDeserializer@@QEBA_NIAEA_K@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getTypename<short>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<short>(bdJSONDeserializer *this)
{
  return ??$getTypename@F@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/

bool __fastcall bdJSONDeserializer::getInt16(bdJSONDeserializer *this, __int16 *value)
{
  return ?getInt16@bdJSONDeserializer@@QEBA_NAEAF@Z(this, value);
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/

bool __fastcall bdJSONDeserializer::getByte8(bdJSONDeserializer *this, char *value)
{
  return ?getByte8@bdJSONDeserializer@@QEBA_NAEAC@Z(this, value);
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/

bool __fastcall bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, const unsigned int index, float *value)
{
  return ?getFloat32@bdJSONDeserializer@@QEBA_NIAEAM@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getTypename<double>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<double>(bdJSONDeserializer *this)
{
  return ??$getTypename@N@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/

bool __fastcall bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, const unsigned int index, bool *value)
{
  return ?getBoolean@bdJSONDeserializer@@QEBA_NIAEA_N@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/

bool __fastcall bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, const char *const key, unsigned int *value)
{
  return ?getUInt32@bdJSONDeserializer@@QEBA_NQEBDAEAI@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::isBoolean
==============
*/

bool __fastcall bdJSONDeserializer::isBoolean(bdJSONDeserializer *this)
{
  return ?isBoolean@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/

bool __fastcall bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, long double *value)
{
  return ?getFloat64@bdJSONDeserializer@@QEBA_NAEAN@Z(this, value);
}

/*
==============
bdJSONDeserializer::isObject
==============
*/

bool __fastcall bdJSONDeserializer::isObject(bdJSONDeserializer *this)
{
  return ?isObject@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/

bool __fastcall bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, unsigned int *value)
{
  return ?getUInt32@bdJSONDeserializer@@QEBA_NAEAI@Z(this, value);
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/

bool __fastcall bdJSONDeserializer::getInt32(bdJSONDeserializer *this, int *value)
{
  return ?getInt32@bdJSONDeserializer@@QEBA_NAEAH@Z(this, value);
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/

bool __fastcall bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, const unsigned int index, unsigned __int16 *value)
{
  return ?getUInt16@bdJSONDeserializer@@QEBA_NIAEAG@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/

bool __fastcall bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, const char *const key, unsigned __int64 *value)
{
  return ?getUInt64@bdJSONDeserializer@@QEBA_NQEBDAEA_K@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::strToNumber<unsigned __int64>
==============
*/

unsigned __int64 __fastcall bdJSONDeserializer::strToNumber<unsigned __int64>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@_K@bdJSONDeserializer@@IEBA_KQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::bdJSONDeserializer
==============
*/

void __fastcall bdJSONDeserializer::bdJSONDeserializer(bdJSONDeserializer *this)
{
  ??0bdJSONDeserializer@@QEAA@XZ(this);
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/

bool __fastcall bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, bool *value)
{
  return ?getBoolean@bdJSONDeserializer@@QEBA_NAEA_N@Z(this, value);
}

/*
==============
bdJSONDeserializer::getArray
==============
*/

bool __fastcall bdJSONDeserializer::getArray(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value)
{
  return ?getArray@bdJSONDeserializer@@QEBA_NQEBDAEAV1@@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::strToNumber<__int64>
==============
*/

__int64 __fastcall bdJSONDeserializer::strToNumber<__int64>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@_J@bdJSONDeserializer@@IEBA_JQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/

bool __fastcall bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, const char *const key, unsigned __int8 *value)
{
  return ?getUByte8@bdJSONDeserializer@@QEBA_NQEBDAEAE@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/

bool __fastcall bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, const char *const key, unsigned __int16 *value)
{
  return ?getUInt16@bdJSONDeserializer@@QEBA_NQEBDAEAG@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/

bool __fastcall bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, unsigned __int64 *value)
{
  return ?getUInt64@bdJSONDeserializer@@QEBA_NAEA_K@Z(this, value);
}

/*
==============
bdJSONDeserializer::getFieldByIndex
==============
*/

bool __fastcall bdJSONDeserializer::getFieldByIndex(bdJSONDeserializer *this, const unsigned int index, char *const key, const unsigned int size, bdJSONDeserializer *value)
{
  return ?getFieldByIndex@bdJSONDeserializer@@QEBA_NIQEADIAEAV1@@Z(this, index, key, size, value);
}

/*
==============
bdJSONDeserializer::getNull
==============
*/

bool __fastcall bdJSONDeserializer::getNull(bdJSONDeserializer *this, const char *const key)
{
  return ?getNull@bdJSONDeserializer@@QEBA_NQEBD@Z(this, key);
}

/*
==============
bdJSONDeserializer::strToNumber<short>
==============
*/

__int16 __fastcall bdJSONDeserializer::strToNumber<short>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@F@bdJSONDeserializer@@IEBAFQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/

bool __fastcall bdJSONDeserializer::getInt16(bdJSONDeserializer *this, const unsigned int index, __int16 *value)
{
  return ?getInt16@bdJSONDeserializer@@QEBA_NIAEAF@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::strToNumber<signed char>
==============
*/

char __fastcall bdJSONDeserializer::strToNumber<signed char>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@C@bdJSONDeserializer@@IEBACQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::getString
==============
*/

bool __fastcall bdJSONDeserializer::getString(bdJSONDeserializer *this, const unsigned int index, char *const value, const unsigned int size)
{
  return ?getString@bdJSONDeserializer@@QEBA_NIQEADI@Z(this, index, value, size);
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/

bool __fastcall bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, const unsigned int index, unsigned int *value)
{
  return ?getUInt32@bdJSONDeserializer@@QEBA_NIAEAI@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/

bool __fastcall bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, const char *const key, float *value)
{
  return ?getFloat32@bdJSONDeserializer@@QEBA_NQEBDAEAM@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::isNull
==============
*/

bool __fastcall bdJSONDeserializer::isNull(bdJSONDeserializer *this)
{
  return ?isNull@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getTypename<signed char>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<signed char>(bdJSONDeserializer *this)
{
  return ??$getTypename@C@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/

bool __fastcall bdJSONDeserializer::getInt64(bdJSONDeserializer *this, const char *const key, __int64 *value)
{
  return ?getInt64@bdJSONDeserializer@@QEBA_NQEBDAEA_J@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getChild
==============
*/

bool __fastcall bdJSONDeserializer::getChild(bdJSONDeserializer *this, bdJSONDeserializer *value, char *const key, const unsigned int size)
{
  return ?getChild@bdJSONDeserializer@@QEBA_NAEAV1@QEADI@Z(this, value, key, size);
}

/*
==============
bdJSONDeserializer::getNumeric<short>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<short>(bdJSONDeserializer *this, __int16 *value)
{
  return ??$getNumeric@F@bdJSONDeserializer@@IEBA_NAEAF@Z(this, value);
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/

bool __fastcall bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, const char *const key, long double *value)
{
  return ?getFloat64@bdJSONDeserializer@@QEBA_NQEBDAEAN@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/

bool __fastcall bdJSONDeserializer::getByte8(bdJSONDeserializer *this, const char *const key, char *value)
{
  return ?getByte8@bdJSONDeserializer@@QEBA_NQEBDAEAC@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getNumeric<__int64>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<__int64>(bdJSONDeserializer *this, __int64 *value)
{
  return ??$getNumeric@_J@bdJSONDeserializer@@IEBA_NAEA_J@Z(this, value);
}

/*
==============
bdJSONDeserializer::getTypename<int>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<int>(bdJSONDeserializer *this)
{
  return ??$getTypename@H@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getArray
==============
*/

bool __fastcall bdJSONDeserializer::getArray(bdJSONDeserializer *this, bdJSONDeserializer *value)
{
  return ?getArray@bdJSONDeserializer@@QEBA_NAEAV1@@Z(this, value);
}

/*
==============
bdJSONDeserializer::getNumeric<int>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<int>(bdJSONDeserializer *this, int *value)
{
  return ??$getNumeric@H@bdJSONDeserializer@@IEBA_NAEAH@Z(this, value);
}

/*
==============
bdJSONDeserializer::isFloatingPoint
==============
*/

bool __fastcall bdJSONDeserializer::isFloatingPoint(bdJSONDeserializer *this)
{
  return ?isFloatingPoint@bdJSONDeserializer@@QEAA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/

bool __fastcall bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, float *value)
{
  return ?getFloat32@bdJSONDeserializer@@QEBA_NAEAM@Z(this, value);
}

/*
==============
bdJSONDeserializer::parse
==============
*/

bool __fastcall bdJSONDeserializer::parse(const char *pos, bdJSONDeserializer *value)
{
  return ?parse@bdJSONDeserializer@@SA_NPEBDAEAV1@@Z(pos, value);
}

/*
==============
bdJSONDeserializer::getObject
==============
*/

bool __fastcall bdJSONDeserializer::getObject(bdJSONDeserializer *this, const unsigned int index, bdJSONDeserializer *value)
{
  return ?getObject@bdJSONDeserializer@@QEBA_NIAEAV1@@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::strToNumber<double>
==============
*/

long double __fastcall bdJSONDeserializer::strToNumber<double>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@N@bdJSONDeserializer@@IEBANQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/

bool __fastcall bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, const unsigned int index, long double *value)
{
  return ?getFloat64@bdJSONDeserializer@@QEBA_NIAEAN@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::parse
==============
*/

bool __fastcall bdJSONDeserializer::parse(bdJSONDeserializer *this, const char *buffer)
{
  return ?parse@bdJSONDeserializer@@QEAA_NPEBD@Z(this, buffer);
}

/*
==============
bdJSONDeserializer::getTypename<float>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<float>(bdJSONDeserializer *this)
{
  return ??$getTypename@M@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::strToNumber<int>
==============
*/

int __fastcall bdJSONDeserializer::strToNumber<int>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return ??$strToNumber@H@bdJSONDeserializer@@IEBAHQEBDPEAPEAD@Z(this, ptr, endptr);
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/

bool __fastcall bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, const char *const key, bool *value)
{
  return ?getBoolean@bdJSONDeserializer@@QEBA_NQEBDAEA_N@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/

bool __fastcall bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, unsigned __int8 *value)
{
  return ?getUByte8@bdJSONDeserializer@@QEBA_NAEAE@Z(this, value);
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/

bool __fastcall bdJSONDeserializer::getInt32(bdJSONDeserializer *this, const char *const key, int *value)
{
  return ?getInt32@bdJSONDeserializer@@QEBA_NQEBDAEAH@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/

bool __fastcall bdJSONDeserializer::getInt64(bdJSONDeserializer *this, const unsigned int index, __int64 *value)
{
  return ?getInt64@bdJSONDeserializer@@QEBA_NIAEA_J@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/

bool __fastcall bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, const unsigned int index, unsigned __int8 *value)
{
  return ?getUByte8@bdJSONDeserializer@@QEBA_NIAEAE@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getNext
==============
*/

bool __fastcall bdJSONDeserializer::getNext(bdJSONDeserializer *this, bdJSONDeserializer *value, char *const key, const unsigned int size)
{
  return ?getNext@bdJSONDeserializer@@QEBA_NAEAV1@QEADI@Z(this, value, key, size);
}

/*
==============
bdJSONDeserializer::getTypename<__int64>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<__int64>(bdJSONDeserializer *this)
{
  return ??$getTypename@_J@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/

bool __fastcall bdJSONDeserializer::getInt32(bdJSONDeserializer *this, const unsigned int index, int *value)
{
  return ?getInt32@bdJSONDeserializer@@QEBA_NIAEAH@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getArray
==============
*/

bool __fastcall bdJSONDeserializer::getArray(bdJSONDeserializer *this, const unsigned int index, bdJSONDeserializer *value)
{
  return ?getArray@bdJSONDeserializer@@QEBA_NIAEAV1@@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::convertToString
==============
*/

bool __fastcall bdJSONDeserializer::convertToString(bdJSONDeserializer *this, char *const value, const unsigned int size)
{
  return ?convertToString@bdJSONDeserializer@@QEBA_NQEADI@Z(this, value, size);
}

/*
==============
bdJSONDeserializer::~bdJSONDeserializer
==============
*/

void __fastcall bdJSONDeserializer::~bdJSONDeserializer(bdJSONDeserializer *this)
{
  ??1bdJSONDeserializer@@QEAA@XZ(this);
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/

bool __fastcall bdJSONDeserializer::getInt64(bdJSONDeserializer *this, __int64 *value)
{
  return ?getInt64@bdJSONDeserializer@@QEBA_NAEA_J@Z(this, value);
}

/*
==============
bdJSONDeserializer::strToNumber<float>
==============
*/

double __fastcall bdJSONDeserializer::strToNumber<float>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  double result; 

  *(float *)&result = ??$strToNumber@M@bdJSONDeserializer@@IEBAMQEBDPEAPEAD@Z(this, ptr, endptr);
  return result;
}

/*
==============
bdJSONDeserializer::getTypename<unsigned __int64>
==============
*/

const char *__fastcall bdJSONDeserializer::getTypename<unsigned __int64>(bdJSONDeserializer *this)
{
  return ??$getTypename@_K@bdJSONDeserializer@@IEBAPEBDXZ(this);
}

/*
==============
bdJSONDeserializer::getObject
==============
*/

bool __fastcall bdJSONDeserializer::getObject(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value)
{
  return ?getObject@bdJSONDeserializer@@QEBA_NQEBDAEAV1@@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::getElementByIndex
==============
*/

bool __fastcall bdJSONDeserializer::getElementByIndex(bdJSONDeserializer *this, unsigned int index, bdJSONDeserializer *value)
{
  return ?getElementByIndex@bdJSONDeserializer@@QEBA_NIAEAV1@@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::getNull
==============
*/

bool __fastcall bdJSONDeserializer::getNull(bdJSONDeserializer *this, const unsigned int index)
{
  return ?getNull@bdJSONDeserializer@@QEBA_NI@Z(this, index);
}

/*
==============
bdJSONDeserializer::getNumeric<unsigned __int64>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<unsigned __int64>(bdJSONDeserializer *this, unsigned __int64 *value)
{
  return ??$getNumeric@_K@bdJSONDeserializer@@IEBA_NAEA_K@Z(this, value);
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/

bool __fastcall bdJSONDeserializer::getByte8(bdJSONDeserializer *this, const unsigned int index, char *value)
{
  return ?getByte8@bdJSONDeserializer@@QEBA_NIAEAC@Z(this, index, value);
}

/*
==============
bdJSONDeserializer::isString
==============
*/

bool __fastcall bdJSONDeserializer::isString(bdJSONDeserializer *this)
{
  return ?isString@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/

bool __fastcall bdJSONDeserializer::getInt16(bdJSONDeserializer *this, const char *const key, __int16 *value)
{
  return ?getInt16@bdJSONDeserializer@@QEBA_NQEBDAEAF@Z(this, key, value);
}

/*
==============
bdJSONDeserializer::isNumber
==============
*/

bool __fastcall bdJSONDeserializer::isNumber(bdJSONDeserializer *this)
{
  return ?isNumber@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::checkStringToNumericValueError
==============
*/

bool __fastcall bdJSONDeserializer::checkStringToNumericValueError(bdJSONDeserializer *this, const char *ptr, char *endptr, const char *typeName)
{
  return ?checkStringToNumericValueError@bdJSONDeserializer@@IEBA_NPEBDPEAD0@Z(this, ptr, endptr, typeName);
}

/*
==============
bdJSONDeserializer::getObject
==============
*/

bool __fastcall bdJSONDeserializer::getObject(bdJSONDeserializer *this, bdJSONDeserializer *value)
{
  return ?getObject@bdJSONDeserializer@@QEBA_NAEAV1@@Z(this, value);
}

/*
==============
bdJSONDeserializer::getNumeric<signed char>
==============
*/

bool __fastcall bdJSONDeserializer::getNumeric<signed char>(bdJSONDeserializer *this, char *value)
{
  return ??$getNumeric@C@bdJSONDeserializer@@IEBA_NAEAC@Z(this, value);
}

/*
==============
bdJSONDeserializer::getNull
==============
*/

bool __fastcall bdJSONDeserializer::getNull(bdJSONDeserializer *this)
{
  return ?getNull@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/

bool __fastcall bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, unsigned __int16 *value)
{
  return ?getUInt16@bdJSONDeserializer@@QEBA_NAEAG@Z(this, value);
}

/*
==============
bdJSONDeserializer::getFieldByKey
==============
*/

bool __fastcall bdJSONDeserializer::getFieldByKey(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value, bool logErrors)
{
  return ?getFieldByKey@bdJSONDeserializer@@QEBA_NQEBDAEAV1@_N@Z(this, key, value, logErrors);
}

/*
==============
bdJSONDeserializer::isArray
==============
*/

bool __fastcall bdJSONDeserializer::isArray(bdJSONDeserializer *this)
{
  return ?isArray@bdJSONDeserializer@@QEBA_NXZ(this);
}

/*
==============
bdJSONDeserializer::getNumeric<signed char>
==============
*/
char bdJSONDeserializer::getNumeric<signed char>(bdJSONDeserializer *this, char *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  char v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
  *_errno() = 0;
  m_ptr = this->m_ptr;
  v7 = this->m_type == BD_JSON_STRING;
  EndPtr = NULL;
  v8 = m_ptr + 1;
  if ( !v7 )
    v8 = m_ptr;
  v9 = strtol(v8, &EndPtr, 10);
  v10 = v9;
  if ( v9 <= 127 )
  {
    if ( v9 >= -128 )
      goto LABEL_10;
    v10 = 0x80;
  }
  else
  {
    v10 = 127;
  }
  *_errno() = 34;
LABEL_10:
  if ( !bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdByte8") )
    return 0;
  *value = v10;
  return 1;
}

/*
==============
bdJSONDeserializer::getNumeric<short>
==============
*/
char bdJSONDeserializer::getNumeric<short>(bdJSONDeserializer *this, __int16 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  __int16 v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
  *_errno() = 0;
  m_ptr = this->m_ptr;
  v7 = this->m_type == BD_JSON_STRING;
  EndPtr = NULL;
  v8 = m_ptr + 1;
  if ( !v7 )
    v8 = m_ptr;
  v9 = strtol(v8, &EndPtr, 10);
  v10 = v9;
  if ( v9 <= 0x7FFF )
  {
    if ( v9 >= -32768 )
      goto LABEL_10;
    v10 = 0x8000;
  }
  else
  {
    v10 = 0x7FFF;
  }
  *_errno() = 34;
LABEL_10:
  if ( !bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt16") )
    return 0;
  *value = v10;
  return 1;
}

/*
==============
bdJSONDeserializer::getNumeric<int>
==============
*/
char bdJSONDeserializer::getNumeric<int>(bdJSONDeserializer *this, int *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = strtol(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt32") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getNumeric<float>
==============
*/
char bdJSONDeserializer::getNumeric<float>(bdJSONDeserializer *this, float *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v9; 
  const char *v10; 
  char *EndPtr; 

  m_type = this->m_type;
  _RSI = value;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v9 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v10 = m_ptr + 1;
    if ( !v9 )
      v10 = m_ptr;
    *(double *)&_XMM0 = strtod(v10, &EndPtr);
    __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v10, EndPtr, "bdFloat32") )
    {
      __asm
      {
        vmovss  dword ptr [rsi], xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      return 1;
    }
    else
    {
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getNumeric<double>
==============
*/
char bdJSONDeserializer::getNumeric<double>(bdJSONDeserializer *this, long double *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v9; 
  const char *v10; 
  char *EndPtr; 

  m_type = this->m_type;
  _RSI = value;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v9 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v10 = m_ptr + 1;
    if ( !v9 )
      v10 = m_ptr;
    *(double *)&_XMM0 = strtod(v10, &EndPtr);
    __asm { vmovaps xmm6, xmm0 }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v10, EndPtr, "bdFloat64") )
    {
      __asm
      {
        vmovsd  qword ptr [rsi], xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      return 1;
    }
    else
    {
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getNumeric<__int64>
==============
*/
char bdJSONDeserializer::getNumeric<__int64>(bdJSONDeserializer *this, __int64 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  __int64 v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = _strtoi64(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt64") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getNumeric<unsigned __int64>
==============
*/
char bdJSONDeserializer::getNumeric<unsigned __int64>(bdJSONDeserializer *this, unsigned __int64 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  unsigned __int64 v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = _strtoui64(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdUInt64") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getTypename<signed char>
==============
*/
const char *bdJSONDeserializer::getTypename<signed char>(bdJSONDeserializer *this)
{
  return "bdByte8";
}

/*
==============
bdJSONDeserializer::getTypename<short>
==============
*/
const char *bdJSONDeserializer::getTypename<short>(bdJSONDeserializer *this)
{
  return "bdInt16";
}

/*
==============
bdJSONDeserializer::getTypename<int>
==============
*/
const char *bdJSONDeserializer::getTypename<int>(bdJSONDeserializer *this)
{
  return "bdInt32";
}

/*
==============
bdJSONDeserializer::getTypename<float>
==============
*/
const char *bdJSONDeserializer::getTypename<float>(bdJSONDeserializer *this)
{
  return "bdFloat32";
}

/*
==============
bdJSONDeserializer::getTypename<double>
==============
*/
const char *bdJSONDeserializer::getTypename<double>(bdJSONDeserializer *this)
{
  return "bdFloat64";
}

/*
==============
bdJSONDeserializer::getTypename<__int64>
==============
*/
const char *bdJSONDeserializer::getTypename<__int64>(bdJSONDeserializer *this)
{
  return "bdInt64";
}

/*
==============
bdJSONDeserializer::getTypename<unsigned __int64>
==============
*/
const char *bdJSONDeserializer::getTypename<unsigned __int64>(bdJSONDeserializer *this)
{
  return "bdUInt64";
}

/*
==============
bdJSONDeserializer::strToNumber<signed char>
==============
*/
char bdJSONDeserializer::strToNumber<signed char>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  int v3; 

  v3 = strtol(ptr, endptr, 10);
  if ( v3 <= 127 )
  {
    if ( v3 < -128 )
    {
      *_errno() = 34;
      LOBYTE(v3) = 0x80;
    }
  }
  else
  {
    *_errno() = 34;
    LOBYTE(v3) = 127;
  }
  return v3;
}

/*
==============
bdJSONDeserializer::strToNumber<short>
==============
*/
int bdJSONDeserializer::strToNumber<short>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  int result; 
  unsigned __int16 v4; 

  result = strtol(ptr, endptr, 10);
  v4 = 0x7FFF;
  if ( result > 0x7FFF || (v4 = 0x8000, result < -32768) )
  {
    *_errno() = 34;
    return v4;
  }
  return result;
}

/*
==============
bdJSONDeserializer::strToNumber<int>
==============
*/
int bdJSONDeserializer::strToNumber<int>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return strtol(ptr, endptr, 10);
}

/*
==============
bdJSONDeserializer::strToNumber<float>
==============
*/
float bdJSONDeserializer::strToNumber<float>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  *(double *)&_XMM0 = strtod(ptr, endptr);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
bdJSONDeserializer::strToNumber<double>
==============
*/
double bdJSONDeserializer::strToNumber<double>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return strtod(ptr, endptr);
}

/*
==============
bdJSONDeserializer::strToNumber<__int64>
==============
*/
__int64 bdJSONDeserializer::strToNumber<__int64>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return _strtoi64(ptr, endptr, 10);
}

/*
==============
bdJSONDeserializer::strToNumber<unsigned __int64>
==============
*/
unsigned __int64 bdJSONDeserializer::strToNumber<unsigned __int64>(bdJSONDeserializer *this, const char *const ptr, char **endptr)
{
  return _strtoui64(ptr, endptr, 10);
}

/*
==============
bdJSONDeserializer::bdJSONDeserializer
==============
*/
void bdJSONDeserializer::bdJSONDeserializer(bdJSONDeserializer *this, const char *buffer)
{
  this->m_type = BD_JSON_NULL;
  this->m_ptr = NULL;
  this->m_end = NULL;
  this->m_isFloatingPoint = 0;
  this->m_count = 0;
  this->m_parsed = bdJSONDeserializer::parse(buffer, this);
}

/*
==============
bdJSONDeserializer::bdJSONDeserializer
==============
*/
void bdJSONDeserializer::bdJSONDeserializer(bdJSONDeserializer *this)
{
  this->m_type = BD_JSON_NULL;
  this->m_ptr = NULL;
  this->m_end = NULL;
  *(_WORD *)&this->m_isFloatingPoint = 0;
  this->m_count = 0;
}

/*
==============
bdJSONDeserializer::~bdJSONDeserializer
==============
*/
void bdJSONDeserializer::~bdJSONDeserializer(bdJSONDeserializer *this)
{
  this->m_ptr = NULL;
  this->m_end = NULL;
}

/*
==============
bdJSONDeserializer::checkStringToNumericValueError
==============
*/
char bdJSONDeserializer::checkStringToNumericValueError(bdJSONDeserializer *this, const char *ptr, char *endptr, const char *typeName)
{
  if ( endptr == ptr )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::checkStringToNumericValueError", 0x31Bu, "Error: Unable to read %s from[%s]", typeName, ptr);
    return 0;
  }
  if ( *_errno() == 34 )
  {
    *_errno() = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::checkStringToNumericValueError", 0x321u, "Error: Value out of range for %s from[%s]", typeName, ptr);
    return 0;
  }
  return 1;
}

/*
==============
bdJSONDeserializer::convertToString
==============
*/
bool bdJSONDeserializer::convertToString(bdJSONDeserializer *this, char *const value, const unsigned int size)
{
  unsigned __int64 v4; 
  bool Float32; 
  float valuea; 

  v4 = size;
  if ( this->m_type == BD_JSON_STRING )
    return bdJSONDeserializer::getString(this, value, size);
  if ( this->m_type != BD_JSON_NUMBER )
    return 0;
  if ( this->m_isFloatingPoint )
  {
    Float32 = bdJSONDeserializer::getFloat32(this, &valuea);
    if ( Float32 )
    {
      __asm
      {
        vmovss  xmm3, [rsp+28h+value]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      bdSnprintf(value, (unsigned int)v4, "%f", *(double *)&_XMM3);
    }
    return Float32;
  }
  Float32 = bdJSONDeserializer::getInt32(this, (int *)&valuea);
  if ( !Float32 )
    return Float32;
  bdSnprintf(value, v4, "%d", valuea);
  return Float32;
}

/*
==============
bdJSONDeserializer::getArray
==============
*/
char bdJSONDeserializer::getArray(bdJSONDeserializer *this, bdJSONDeserializer *value)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( (_DWORD)m_type == 4 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rdx], ymm0
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getArray", 0x1F7u, "Error: Unexpected JSON type[%s], expected Array", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getArray
==============
*/
char bdJSONDeserializer::getArray(bdJSONDeserializer *this, const unsigned int index, bdJSONDeserializer *value)
{
  bdJSONDeserializer valuea; 

  _RBX = value;
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  if ( bdJSONDeserializer::getElementByIndex(this, index, &valuea) )
  {
    if ( valuea.m_type == BD_JSON_ARRAY )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+value.m_type]
        vmovups ymmword ptr [rbx], ymm0
      }
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getArray", 0x1F7u, "Error: Unexpected JSON type[%s], expected Array", bdJSONTypeString[valuea.m_type]);
  }
  return 0;
}

/*
==============
bdJSONDeserializer::getArray
==============
*/
char bdJSONDeserializer::getArray(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value)
{
  bdJSONDeserializer valuea; 

  _RBX = value;
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  if ( bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) )
  {
    if ( valuea.m_type == BD_JSON_ARRAY )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+value.m_type]
        vmovups ymmword ptr [rbx], ymm0
      }
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getArray", 0x1F7u, "Error: Unexpected JSON type[%s], expected Array", bdJSONTypeString[valuea.m_type]);
  }
  return 0;
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/
char bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, bool *value)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( (_DWORD)m_type == 3 )
  {
    if ( !strncmp(this->m_ptr, "true", 4ui64) )
    {
      *value = 1;
      return 1;
    }
    if ( !strncmp(this->m_ptr, "false", 5ui64) )
    {
      *value = 0;
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getBoolean", 0x185u, "Error: JSON Boolean text malformed [%s]", this->m_ptr);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getBoolean", 0x18Au, "Error: Unexpected JSON type[%s], expected Boolean", bdJSONTypeString[m_type]);
  }
  return 0;
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/
bool bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, const unsigned int index, bool *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getBoolean(&valuea, value);
}

/*
==============
bdJSONDeserializer::getBoolean
==============
*/
bool bdJSONDeserializer::getBoolean(bdJSONDeserializer *this, const char *const key, bool *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getBoolean(&valuea, value);
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/
char bdJSONDeserializer::getByte8(bdJSONDeserializer *this, char *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  char v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
  *_errno() = 0;
  m_ptr = this->m_ptr;
  v7 = this->m_type == BD_JSON_STRING;
  EndPtr = NULL;
  v8 = m_ptr + 1;
  if ( !v7 )
    v8 = m_ptr;
  v9 = strtol(v8, &EndPtr, 10);
  v10 = v9;
  if ( v9 <= 127 )
  {
    if ( v9 >= -128 )
      goto LABEL_10;
    v10 = 0x80;
  }
  else
  {
    v10 = 127;
  }
  *_errno() = 34;
LABEL_10:
  if ( !bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdByte8") )
    return 0;
  *value = v10;
  return 1;
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/
bool bdJSONDeserializer::getByte8(bdJSONDeserializer *this, const unsigned int index, char *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getByte8(&valuea, value);
}

/*
==============
bdJSONDeserializer::getByte8
==============
*/
bool bdJSONDeserializer::getByte8(bdJSONDeserializer *this, const char *const key, char *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getByte8(&valuea, value);
}

/*
==============
bdJSONDeserializer::getChild
==============
*/
bool bdJSONDeserializer::getChild(bdJSONDeserializer *this, bdJSONDeserializer *value, char *const key, const unsigned int size)
{
  __int64 m_type; 
  bool result; 
  const char *v11; 
  bdJSONDeserializer valuea; 

  value->m_parsed = 0;
  m_type = this->m_type;
  if ( (_DWORD)m_type == 4 )
  {
    if ( this->m_count )
      return bdJSONDeserializer::parse(this->m_ptr + 1, value);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getChild", 0x2D2u, "Error: Cannot getChild() of Empty Array");
    return 0;
  }
  if ( (_DWORD)m_type != 5 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getChild", 0x2ECu, "Error: Unexpected JSON type[%s], expected Object/Array", bdJSONTypeString[m_type]);
    return 0;
  }
  if ( !this->m_count )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getChild", 0x2E7u, "Error: Cannot getChild() of Empty Object");
    return 0;
  }
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  result = bdJSONDeserializer::parse(this->m_ptr + 1, &valuea);
  if ( valuea.m_type == BD_JSON_STRING && key )
  {
    if ( !result || !bdJSONDeserializer::getString(&valuea, key, size) )
      return 0;
  }
  else if ( !result )
  {
    return result;
  }
  v11 = bdJSONUtility::skipSeparator(valuea.m_end, 58);
  return bdJSONDeserializer::parse(v11, value);
}

/*
==============
bdJSONDeserializer::getElementByIndex
==============
*/
__int64 bdJSONDeserializer::getElementByIndex(bdJSONDeserializer *this, unsigned int index, bdJSONDeserializer *value)
{
  unsigned __int8 v6; 
  __int64 m_type; 
  int v8; 
  __int64 v10; 
  const char *m_end; 
  bool v12; 
  const char *v13; 
  bdJSONDeserializer v20; 
  bdJSONDeserializer valuea; 

  _RBP = value;
  v6 = 0;
  m_type = this->m_type;
  if ( (_DWORD)m_type == 4 )
  {
    v8 = 0;
    v20.m_type = BD_JSON_NULL;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rsp+0B8h+var_58], xmm0
    }
    *(_WORD *)&v20.m_isFloatingPoint = 0;
    v20.m_count = 0;
    bdJSONDeserializer::getChild(this, &v20, NULL, 0);
    if ( v20.m_parsed )
    {
      v10 = 0x100002600i64;
      while ( v8 != index )
      {
        ++v8;
        v20.m_parsed = 0;
        m_end = v20.m_end;
        if ( v20.m_end )
        {
          while ( *m_end <= 0x20u && _bittest64(&v10, *m_end) )
            ++m_end;
        }
        if ( *m_end == 44 )
        {
          valuea.m_type = BD_JSON_NULL;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr [rsp+0B8h+value.m_ptr], xmm0
          }
          *(_WORD *)&valuea.m_isFloatingPoint = 0;
          valuea.m_count = 0;
          v12 = bdJSONDeserializer::parse(m_end + 1, &valuea);
          if ( valuea.m_type == BD_JSON_STRING )
          {
            v13 = valuea.m_end;
            if ( valuea.m_end )
            {
              while ( *v13 <= 0x20u && _bittest64(&v10, *v13) )
                ++v13;
            }
            if ( *v13 == 58 )
              v12 = bdJSONDeserializer::parse(v13 + 1, &valuea);
          }
          if ( v12 )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rsp+0B8h+value.m_type]
              vmovups ymmword ptr [rsp+58h], ymm0
            }
          }
        }
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rsp+58h]
          vextractf128 xmm1, ymm0, 1
          vpextrq rax, xmm1, 1
        }
        if ( !BYTE1(_RAX) )
          goto LABEL_20;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+58h]
        vmovups ymmword ptr [rbp+0], ymm0
      }
      return 1;
    }
    else
    {
LABEL_20:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getElementByIndex", 0x2BAu, "Error: Cannot locate index[%u], max index[%u]", index, v8);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getElementByIndex", 0x2BFu, "Error: Unexpected JSON type[%s], expected Array", bdJSONTypeString[m_type]);
  }
  return v6;
}

/*
==============
bdJSONDeserializer::getFieldByIndex
==============
*/
__int64 bdJSONDeserializer::getFieldByIndex(bdJSONDeserializer *this, const unsigned int index, char *const key, const unsigned int size, bdJSONDeserializer *value)
{
  unsigned __int8 v10; 
  int v11; 
  unsigned int v16; 
  int v18; 
  bdJSONDeserializer v19; 
  void *retaddr; 

  _RAX = &retaddr;
  v10 = 0;
  if ( this->m_type == BD_JSON_OBJECT )
  {
    v11 = 0;
    v19.m_type = BD_JSON_NULL;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rax-28h], xmm0
    }
    *(_WORD *)&v19.m_isFloatingPoint = 0;
    v19.m_count = 0;
    bdJSONDeserializer::getChild(this, &v19, key, size);
    if ( v19.m_parsed )
    {
      while ( v11 != index )
      {
        ++v11;
        bdJSONDeserializer::getNext(&v19, &v19, key, size);
        if ( !v19.m_parsed )
          goto LABEL_5;
      }
      _RAX = value;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+88h+var_30.m_type]
        vmovups ymmword ptr [rax], ymm0
      }
      return 1;
    }
    else
    {
LABEL_5:
      v18 = v11;
      v16 = index;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByIndex", 0x295u, "Error: Cannot locate index[%u], max index[%u]", v16, v18);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByIndex", 0x29Au, "Error: Cannot get Key/Value field for index[%u], not a JSON Object", index);
  }
  return v10;
}

/*
==============
bdJSONDeserializer::getFieldByKey
==============
*/
_BOOL8 bdJSONDeserializer::getFieldByKey(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value, bool logErrors)
{
  bool v8; 
  int v9; 
  int v10; 
  size_t v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  const char *m_end; 
  int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  __int64 v20; 
  const char *v21; 
  char Str2; 
  char outBuffer[255]; 

  if ( this->m_type != BD_JSON_OBJECT || !this->m_ptr )
  {
    v8 = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByKey", 0x278u, "Error: Cannot get field for key[%s], current Value not a JSON Object", key);
    return v8;
  }
  Str2 = 34;
  v8 = 1;
  v9 = bdJSONUtility::escapeString(key, outBuffer, 0xFDu, BD_JSON_CONFIG_0.m_utf8Replace);
  if ( v9 == -1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByKey", 0x272u, "Error: Cannot escape key[%s], invalid UTF-8 detected", key);
    return 0;
  }
  v10 = v9 + 2;
  if ( (unsigned int)(v9 + 2) >= 0x100 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByKey", 0x26Cu, "Error: Escaped key size required[%u] exceeds library limit[%u]", v9 + 3, 256);
    return 0;
  }
  else
  {
    v11 = v10;
    v12 = v9 + 1;
    outBuffer[v12 - 1] = 34;
    if ( (unsigned __int64)v10 >= 0x100 )
    {
      j___report_rangecheckfailure(v12);
      JUMPOUT(0x143573C66i64);
    }
    v13 = this->m_ptr + 1;
    outBuffer[v10 - 1] = 0;
    v14 = bdJSONUtility::skipWhitespace(v13);
    m_end = this->m_end;
    if ( v14 >= m_end )
      goto LABEL_21;
    while ( *v14 && *v14 != 125 )
    {
      v16 = strncmp(v14, &Str2, v11);
      v17 = bdJSONUtility::skipString(v14);
      if ( !v16 )
      {
        v21 = bdJSONUtility::skipWhitespace(v17);
        v14 = bdJSONUtility::skipSeparator(v21, 58);
        v8 = bdJSONDeserializer::parse(v14, value);
        m_end = this->m_end;
        break;
      }
      v18 = bdJSONUtility::skipSeparator(v17, 58);
      v19 = bdJSONUtility::skipValue(v18, logErrors);
      v14 = bdJSONUtility::skipSeparator(v19, 44);
      if ( v14 )
      {
        v20 = 0x100002600i64;
        while ( *v14 <= 0x20u && _bittest64(&v20, *v14) )
          ++v14;
      }
      m_end = this->m_end;
      if ( v14 >= m_end )
        break;
    }
    if ( v14 >= m_end || !*v14 || *v14 == 125 )
    {
LABEL_21:
      if ( logErrors )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getFieldByKey", 0x264u, "Error: Cannot get field for key[%s]", key);
      return 0;
    }
  }
  return v8;
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/
char bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, float *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v9; 
  const char *v10; 
  char *EndPtr; 

  m_type = this->m_type;
  _RSI = value;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v9 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v10 = m_ptr + 1;
    if ( !v9 )
      v10 = m_ptr;
    *(double *)&_XMM0 = strtod(v10, &EndPtr);
    __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v10, EndPtr, "bdFloat32") )
    {
      __asm
      {
        vmovss  dword ptr [rsi], xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      return 1;
    }
    else
    {
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/
bool bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, const unsigned int index, float *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getFloat32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getFloat32
==============
*/
bool bdJSONDeserializer::getFloat32(bdJSONDeserializer *this, const char *const key, float *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getFloat32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/
char bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, long double *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v9; 
  const char *v10; 
  char *EndPtr; 

  m_type = this->m_type;
  _RSI = value;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v9 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v10 = m_ptr + 1;
    if ( !v9 )
      v10 = m_ptr;
    *(double *)&_XMM0 = strtod(v10, &EndPtr);
    __asm { vmovaps xmm6, xmm0 }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v10, EndPtr, "bdFloat64") )
    {
      __asm
      {
        vmovsd  qword ptr [rsi], xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      return 1;
    }
    else
    {
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/
bool bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, const unsigned int index, long double *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getFloat64(&valuea, value);
}

/*
==============
bdJSONDeserializer::getFloat64
==============
*/
bool bdJSONDeserializer::getFloat64(bdJSONDeserializer *this, const char *const key, long double *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getFloat64(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/
char bdJSONDeserializer::getInt16(bdJSONDeserializer *this, __int16 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  __int16 v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
  *_errno() = 0;
  m_ptr = this->m_ptr;
  v7 = this->m_type == BD_JSON_STRING;
  EndPtr = NULL;
  v8 = m_ptr + 1;
  if ( !v7 )
    v8 = m_ptr;
  v9 = strtol(v8, &EndPtr, 10);
  v10 = v9;
  if ( v9 <= 0x7FFF )
  {
    if ( v9 >= -32768 )
      goto LABEL_10;
    v10 = 0x8000;
  }
  else
  {
    v10 = 0x7FFF;
  }
  *_errno() = 34;
LABEL_10:
  if ( !bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt16") )
    return 0;
  *value = v10;
  return 1;
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/
bool bdJSONDeserializer::getInt16(bdJSONDeserializer *this, const unsigned int index, __int16 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getInt16(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt16
==============
*/
bool bdJSONDeserializer::getInt16(bdJSONDeserializer *this, const char *const key, __int16 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getInt16(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/
char bdJSONDeserializer::getInt32(bdJSONDeserializer *this, int *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  int v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = strtol(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt32") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/
bool bdJSONDeserializer::getInt32(bdJSONDeserializer *this, const unsigned int index, int *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getInt32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt32
==============
*/
bool bdJSONDeserializer::getInt32(bdJSONDeserializer *this, const char *const key, int *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getInt32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/
char bdJSONDeserializer::getInt64(bdJSONDeserializer *this, __int64 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  __int64 v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = _strtoi64(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdInt64") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/
bool bdJSONDeserializer::getInt64(bdJSONDeserializer *this, const unsigned int index, __int64 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getInt64(&valuea, value);
}

/*
==============
bdJSONDeserializer::getInt64
==============
*/
bool bdJSONDeserializer::getInt64(bdJSONDeserializer *this, const char *const key, __int64 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getInt64(&valuea, value);
}

/*
==============
bdJSONDeserializer::getNext
==============
*/
bool bdJSONDeserializer::getNext(bdJSONDeserializer *this, bdJSONDeserializer *value, char *const key, const unsigned int size)
{
  const char *m_end; 
  __int64 v9; 
  bool v11; 
  const char *v12; 
  bdJSONDeserializer valuea; 

  _RSI = value;
  value->m_parsed = 0;
  m_end = this->m_end;
  v9 = 0x100002600i64;
  if ( m_end )
  {
    while ( *m_end <= 0x20u && _bittest64(&v9, *m_end) )
      ++m_end;
  }
  if ( *m_end != 44 )
    return 0;
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  v11 = bdJSONDeserializer::parse(m_end + 1, &valuea);
  if ( valuea.m_type == BD_JSON_STRING )
  {
    v12 = valuea.m_end;
    if ( valuea.m_end )
    {
      while ( *v12 <= 0x20u && _bittest64(&v9, *v12) )
        ++v12;
    }
    if ( *v12 == 58 )
    {
      if ( key )
        bdJSONDeserializer::getString(&valuea, key, size);
      v11 = bdJSONDeserializer::parse(v12 + 1, &valuea);
    }
  }
  if ( v11 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+58h+value.m_type]
      vmovups ymmword ptr [rsi], ymm0
    }
  }
  return v11;
}

/*
==============
bdJSONDeserializer::getNull
==============
*/
bool bdJSONDeserializer::getNull(bdJSONDeserializer *this, const unsigned int index)
{
  bdJSONDeserializer value; 

  value.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&value.m_isFloatingPoint = 0;
  value.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &value) && value.m_type == BD_JSON_NULL;
}

/*
==============
bdJSONDeserializer::getNull
==============
*/
bool bdJSONDeserializer::getNull(bdJSONDeserializer *this, const char *const key)
{
  bdJSONDeserializer value; 

  value.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&value.m_isFloatingPoint = 0;
  value.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &value, 1) && value.m_type == BD_JSON_NULL;
}

/*
==============
bdJSONDeserializer::getNull
==============
*/
char bdJSONDeserializer::getNull(bdJSONDeserializer *this)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( !(_DWORD)m_type )
    return 1;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNull", 0x1E8u, "Error: Unexpected JSON type[%s], expected NULL", bdJSONTypeString[m_type]);
  return 0;
}

/*
==============
bdJSONDeserializer::getObject
==============
*/
char bdJSONDeserializer::getObject(bdJSONDeserializer *this, bdJSONDeserializer *value)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( (_DWORD)m_type == 5 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rdx], ymm0
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getObject", 0x206u, "Error: Unexpected JSON type[%s], expected Object", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getObject
==============
*/
char bdJSONDeserializer::getObject(bdJSONDeserializer *this, const unsigned int index, bdJSONDeserializer *value)
{
  bdJSONDeserializer valuea; 

  _RBX = value;
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  if ( bdJSONDeserializer::getElementByIndex(this, index, &valuea) )
  {
    if ( valuea.m_type == BD_JSON_OBJECT )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+value.m_type]
        vmovups ymmword ptr [rbx], ymm0
      }
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getObject", 0x206u, "Error: Unexpected JSON type[%s], expected Object", bdJSONTypeString[valuea.m_type]);
  }
  return 0;
}

/*
==============
bdJSONDeserializer::getObject
==============
*/
char bdJSONDeserializer::getObject(bdJSONDeserializer *this, const char *const key, bdJSONDeserializer *value)
{
  bdJSONDeserializer valuea; 

  _RBX = value;
  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  if ( bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) )
  {
    if ( valuea.m_type == BD_JSON_OBJECT )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+value.m_type]
        vmovups ymmword ptr [rbx], ymm0
      }
      return 1;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getObject", 0x206u, "Error: Unexpected JSON type[%s], expected Object", bdJSONTypeString[valuea.m_type]);
  }
  return 0;
}

/*
==============
bdJSONDeserializer::getString
==============
*/
bool bdJSONDeserializer::getString(bdJSONDeserializer *this, const unsigned int index, char *const value, const unsigned int size)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getString(&valuea, value, size);
}

/*
==============
bdJSONDeserializer::getString
==============
*/
char bdJSONDeserializer::getString(bdJSONDeserializer *this, char *const value, const unsigned int size)
{
  __int64 m_type; 
  unsigned int v7; 
  signed int v8; 

  m_type = this->m_type;
  if ( (_DWORD)m_type == 1 )
  {
    v7 = -2 - LODWORD(this->m_ptr) + (unsigned int)bdJSONUtility::skipString(this->m_ptr);
    v8 = bdJSONUtility::deescapeString((const char *const)this->m_ptr + 1, v7, NULL, 0);
    if ( v8 == -1 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getString", 0x1A6u, "Error: invalid escaped UTF-8 string");
    }
    else
    {
      if ( v8 < (int)size )
      {
        bdJSONUtility::deescapeString((const char *const)this->m_ptr + 1, v7, value, size);
        return 1;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getString", 0x1A1u, "Error: Insufficient buffer space[%u], need[%u] bytes", size, v8);
    }
    return 0;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getString", 0x1ABu, "Error: Unexpected JSON type[%s], expected String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getString
==============
*/
bool bdJSONDeserializer::getString(bdJSONDeserializer *this, const char *const key, char *const value, const unsigned int size)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getString(&valuea, value, size);
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/
char bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, unsigned __int8 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  unsigned int v9; 
  unsigned __int8 v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = strtoul(v8, &EndPtr, 10);
    v10 = v9;
    if ( v9 > 0xFF )
    {
      v10 = -1;
      *_errno() = 34;
    }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdUByte8") )
    {
      *value = v10;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/
bool bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, const unsigned int index, unsigned __int8 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getUByte8(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUByte8
==============
*/
bool bdJSONDeserializer::getUByte8(bdJSONDeserializer *this, const char *const key, unsigned __int8 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getUByte8(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/
char bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, unsigned __int16 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  unsigned int v9; 
  unsigned __int16 v10; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = strtoul(v8, &EndPtr, 10);
    v10 = v9;
    if ( v9 > 0xFFFF )
    {
      v10 = -1;
      *_errno() = 34;
    }
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdUInt16") )
    {
      *value = v10;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/
bool bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, const unsigned int index, unsigned __int16 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getUInt16(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt16
==============
*/
bool bdJSONDeserializer::getUInt16(bdJSONDeserializer *this, const char *const key, unsigned __int16 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getUInt16(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/
char bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, unsigned int *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  unsigned int v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = strtoul(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdUInt32") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/
bool bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, const unsigned int index, unsigned int *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getUInt32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt32
==============
*/
bool bdJSONDeserializer::getUInt32(bdJSONDeserializer *this, const char *const key, unsigned int *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getUInt32(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/
char bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, unsigned __int64 *value)
{
  __int64 m_type; 
  const char *m_ptr; 
  bool v7; 
  const char *v8; 
  unsigned __int64 v9; 
  char *EndPtr; 

  m_type = this->m_type;
  if ( (unsigned int)(m_type - 1) <= 1 )
  {
    *_errno() = 0;
    m_ptr = this->m_ptr;
    v7 = this->m_type == BD_JSON_STRING;
    EndPtr = NULL;
    v8 = m_ptr + 1;
    if ( !v7 )
      v8 = m_ptr;
    v9 = _strtoui64(v8, &EndPtr, 10);
    if ( bdJSONDeserializer::checkStringToNumericValueError(this, v8, EndPtr, "bdUInt64") )
    {
      *value = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::getNumeric", 0x13Du, "Error: Unexpected JSON type[%s], expected Number/String", bdJSONTypeString[m_type]);
    return 0;
  }
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/
bool bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, const unsigned int index, unsigned __int64 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getElementByIndex(this, index, &valuea) && bdJSONDeserializer::getUInt64(&valuea, value);
}

/*
==============
bdJSONDeserializer::getUInt64
==============
*/
bool bdJSONDeserializer::getUInt64(bdJSONDeserializer *this, const char *const key, unsigned __int64 *value)
{
  bdJSONDeserializer valuea; 

  valuea.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&valuea.m_isFloatingPoint = 0;
  valuea.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &valuea, 1) && bdJSONDeserializer::getUInt64(&valuea, value);
}

/*
==============
bdJSONDeserializer::hasKey
==============
*/
bool bdJSONDeserializer::hasKey(bdJSONDeserializer *this, const char *const key)
{
  bdJSONDeserializer value; 

  value.m_type = BD_JSON_NULL;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+value.m_ptr], xmm0
  }
  *(_WORD *)&value.m_isFloatingPoint = 0;
  value.m_count = 0;
  return bdJSONDeserializer::getFieldByKey(this, key, &value, 0);
}

/*
==============
bdJSONDeserializer::isArray
==============
*/
bool bdJSONDeserializer::isArray(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_ARRAY;
}

/*
==============
bdJSONDeserializer::isBoolean
==============
*/
bool bdJSONDeserializer::isBoolean(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_BOOLEAN;
}

/*
==============
bdJSONDeserializer::isFloatingPoint
==============
*/
bool bdJSONDeserializer::isFloatingPoint(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_NUMBER && this->m_isFloatingPoint;
}

/*
==============
bdJSONDeserializer::isNull
==============
*/
bool bdJSONDeserializer::isNull(bdJSONDeserializer *this)
{
  const char *m_ptr; 
  bool result; 

  result = 0;
  if ( this->m_type == BD_JSON_NULL )
  {
    m_ptr = this->m_ptr;
    if ( m_ptr )
    {
      if ( this->m_end != m_ptr )
        return 1;
    }
  }
  return result;
}

/*
==============
bdJSONDeserializer::isNumber
==============
*/
bool bdJSONDeserializer::isNumber(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_NUMBER;
}

/*
==============
bdJSONDeserializer::isObject
==============
*/
bool bdJSONDeserializer::isObject(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_OBJECT;
}

/*
==============
bdJSONDeserializer::isString
==============
*/
bool bdJSONDeserializer::isString(bdJSONDeserializer *this)
{
  return this->m_type == BD_JSON_STRING;
}

/*
==============
bdJSONDeserializer::parse
==============
*/
bool bdJSONDeserializer::parse(bdJSONDeserializer *this, const char *buffer)
{
  bool result; 

  result = bdJSONDeserializer::parse(buffer, this);
  this->m_parsed = result;
  return result;
}

/*
==============
bdJSONDeserializer::parse
==============
*/
_BOOL8 bdJSONDeserializer::parse(const char *pos, bdJSONDeserializer *value)
{
  bool v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  const char *v6; 
  _BOOL8 result; 

  v2 = 0;
  if ( pos )
  {
    v4 = 0x100002600i64;
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)pos;
      if ( (unsigned __int8)v5 > 0x20u || !_bittest64(&v4, v5) )
        break;
      ++pos;
    }
    switch ( (char)v5 )
    {
      case '"':
        value->m_type = BD_JSON_STRING;
        value->m_ptr = pos;
        v6 = bdJSONUtility::skipString(pos);
        goto LABEL_17;
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
        value->m_type = BD_JSON_NUMBER;
        value->m_ptr = pos;
        value->m_end = bdJSONUtility::skipNumber(pos, &value->m_isFloatingPoint);
        v2 = 1;
        value->m_count = 1;
        break;
      case '[':
        value->m_type = BD_JSON_ARRAY;
        value->m_ptr = pos;
        value->m_end = bdJSONUtility::skipArray(pos, &value->m_count);
        v2 = 1;
        value->m_isFloatingPoint = 0;
        break;
      case 'f':
      case 'n':
      case 't':
        if ( *(_DWORD *)pos == *(_DWORD *)"true" || *(_DWORD *)pos == *(_DWORD *)"false" && pos[4] == bdJSON::BD_JSON_FALSE[4] )
        {
          value->m_type = BD_JSON_BOOLEAN;
        }
        else
        {
          if ( *(_DWORD *)pos != *(_DWORD *)"null" )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::parse", 0x364u, "Error: Encounterd invalid JSON literal[%s]", pos);
            break;
          }
          value->m_type = BD_JSON_NULL;
        }
        value->m_ptr = pos;
        v6 = bdJSONUtility::skipLiteral(pos);
LABEL_17:
        value->m_isFloatingPoint = 0;
        v2 = 1;
        value->m_end = v6;
        value->m_count = 1;
        break;
      case '{':
        value->m_type = BD_JSON_OBJECT;
        value->m_ptr = pos;
        value->m_end = bdJSONUtility::skipObject(pos, &value->m_count);
        v2 = 1;
        value->m_isFloatingPoint = 0;
        break;
      default:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::parse", 0x368u, "Error: Invalid JSON token[%c] found", (char)v5);
        break;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONDeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsondeserializer.cpp", "bdJSONDeserializer::parse", 0x36Eu, "Error: No data found");
  }
  value->m_parsed = v2;
  result = v2;
  if ( !v2 )
  {
    value->m_type = BD_JSON_NULL;
    value->m_ptr = NULL;
    value->m_end = NULL;
    value->m_isFloatingPoint = 0;
  }
  return result;
}

