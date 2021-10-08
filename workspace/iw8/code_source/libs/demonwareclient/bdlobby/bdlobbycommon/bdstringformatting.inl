/*
==============
makeArrayString<unsigned __int64,4>
==============
*/

bdString *__fastcall makeArrayString<unsigned __int64,4>(bdString *result, const bdStructFixedSizeArray<unsigned __int64,4> *arr)
{
  return ??$makeArrayString@_K$03@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@_K$03@@@Z(result, arr);
}

/*
==============
makeArrayString<bdAchievementArchetypeParameter,4>
==============
*/

bdString *__fastcall makeArrayString<bdAchievementArchetypeParameter,4>(bdString *result, const bdStructFixedSizeArray<bdAchievementArchetypeParameter,4> *arr)
{
  return ??$makeArrayString@VbdAchievementArchetypeParameter@@$03@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@VbdAchievementArchetypeParameter@@$03@@@Z(result, arr);
}

/*
==============
makeArrayString<bdAchievementProgressTarget,4>
==============
*/

bdString *__fastcall makeArrayString<bdAchievementProgressTarget,4>(bdString *result, const bdStructFixedSizeArray<bdAchievementProgressTarget,4> *arr)
{
  return ??$makeArrayString@VbdAchievementProgressTarget@@$03@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@VbdAchievementProgressTarget@@$03@@@Z(result, arr);
}

/*
==============
makeFormattedString
==============
*/

bdString *makeFormattedString(bdString *result, const char *format, ...)
{
  return ?makeFormattedString@@YA?AVbdString@@PEBDZZ(result, format);
}

/*
==============
makeArrayString<bdActivateAchievementAchievementTrigger,2>
==============
*/

bdString *__fastcall makeArrayString<bdActivateAchievementAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdActivateAchievementAchievementTrigger,2> *arr)
{
  return ??$makeArrayString@VbdActivateAchievementAchievementTrigger@@$01@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@VbdActivateAchievementAchievementTrigger@@$01@@@Z(result, arr);
}

/*
==============
makeArrayString<bdGrantCurrencyAchievementTrigger,2>
==============
*/

bdString *__fastcall makeArrayString<bdGrantCurrencyAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdGrantCurrencyAchievementTrigger,2> *arr)
{
  return ??$makeArrayString@VbdGrantCurrencyAchievementTrigger@@$01@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@VbdGrantCurrencyAchievementTrigger@@$01@@@Z(result, arr);
}

/*
==============
makeOptionalObjectString<bdAchievementSchedule>
==============
*/

bdString *__fastcall makeOptionalObjectString<bdAchievementSchedule>(bdString *result, const bdStructOptionalObject<bdAchievementSchedule> *object)
{
  return ??$makeOptionalObjectString@VbdAchievementSchedule@@@@YA?AVbdString@@AEBV?$bdStructOptionalObject@VbdAchievementSchedule@@@@@Z(result, object);
}

/*
==============
makeArrayString<bdGrantProductAchievementTrigger,2>
==============
*/

bdString *__fastcall makeArrayString<bdGrantProductAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *arr)
{
  return ??$makeArrayString@VbdGrantProductAchievementTrigger@@$01@@YA?AVbdString@@AEBV?$bdStructFixedSizeArray@VbdGrantProductAchievementTrigger@@$01@@@Z(result, arr);
}

/*
==============
makeFormattedString
==============
*/
bdString *makeFormattedString(bdString *result, const char *format, ...)
{
  char *v3; 
  va_list argPtr; 

  va_start(argPtr, format);
  v3 = (char *)operator new[](0x1000ui64);
  bdVsnprintf(v3, 0x1000ui64, format, argPtr);
  bdString::bdString(result, v3);
  operator delete[](v3);
  return result;
}

/*
==============
makeArrayString<bdActivateAchievementAchievementTrigger,2>
==============
*/
bdString *makeArrayString<bdActivateAchievementAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdActivateAchievementAchievementTrigger,2> *arr)
{
  unsigned int v4; 
  int v5; 
  unsigned int m_size; 
  bdActivateAchievementAchievementTrigger *v7; 
  char m_hasValue; 
  bdString *p_resulta; 
  int v10; 
  int v11; 
  const char *Buffer; 
  bdString *v13; 
  const char *v14; 
  __int64 v16; 
  bdString v17; 
  bdString v18; 
  __int64 v19; 
  bdString resulta; 
  bdString v21; 
  bdString s; 

  v19 = -2i64;
  v4 = 0;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v16) = 1;
  bdString::operator+=(result, "[");
  m_size = arr->m_size;
  if ( m_size )
  {
    do
    {
      if ( v4 )
      {
        bdString::operator+=(result, " , ");
        m_size = arr->m_size;
      }
      bdHandleAssert(v4 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdActivateAchievementAchievementTrigger,2>::operator []", 0x54u, "i is out of range", v16);
      v7 = &arr->m_elements[v4];
      m_hasValue = v7->m_timeLimit.m_hasValue;
      if ( m_hasValue )
      {
        bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
        bdAchievementRelativeTimestamp::toString(&v7->m_timeLimit.m_value, &resulta);
        p_resulta = &resulta;
        v10 = v5 | 0x48;
      }
      else
      {
        bdString::bdString(&v17, "none");
        v10 = v5 | 0x10;
      }
      bdString::bdString(&v21, p_resulta);
      v11 = v10 | 0x20;
      if ( (v11 & 0x10) != 0 )
      {
        v11 &= ~0x10u;
        bdString::~bdString(&v17);
      }
      if ( (v11 & 8) != 0 )
      {
        v11 &= ~8u;
        bdString::~bdString(&resulta);
      }
      Buffer = bdString::getBuffer(&v21);
      v13 = bdAchievementRelativeTimestamp::toString(&v7->m_startTimestamp, &v18);
      v14 = bdString::getBuffer(v13);
      makeFormattedString(&s, "{ name:%s , startTimestamp:%s , timeLimit:%s }", (const char *)&v7->__vftable + 16, v14, Buffer);
      bdString::~bdString(&v18);
      bdString::~bdString(&v21);
      v5 = v11 | 6;
      LODWORD(v16) = v5;
      bdString::operator+=(result, &s);
      bdString::~bdString(&s);
      ++v4;
      m_size = arr->m_size;
    }
    while ( v4 < m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeArrayString<bdGrantCurrencyAchievementTrigger,2>
==============
*/
bdString *makeArrayString<bdGrantCurrencyAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdGrantCurrencyAchievementTrigger,2> *arr)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  bdString resulta; 

  v8 = -2i64;
  v4 = 0i64;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v7) = 1;
  bdString::operator+=(result, "[");
  if ( arr->m_size )
  {
    do
    {
      if ( (_DWORD)v4 )
        bdString::operator+=(result, " , ");
      bdHandleAssert((unsigned int)v4 < arr->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantCurrencyAchievementTrigger,2>::operator []", 0x54u, "i is out of range", v7, v8);
      makeFormattedString(&resulta, "{ currencyID:%d , amount:%d }", *((unsigned int *)&arr->m_elements[v4].__vftable + 4), *((unsigned int *)&arr->m_elements[v4].__vftable + 5));
      v5 |= 6u;
      LODWORD(v7) = v5;
      bdString::operator+=(result, &resulta);
      bdString::~bdString(&resulta);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < arr->m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeArrayString<bdGrantProductAchievementTrigger,2>
==============
*/
bdString *makeArrayString<bdGrantProductAchievementTrigger,2>(bdString *result, const bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *arr)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  bdString resulta; 

  v8 = -2i64;
  v4 = 0i64;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v7) = 1;
  bdString::operator+=(result, "[");
  if ( arr->m_size )
  {
    do
    {
      if ( (_DWORD)v4 )
        bdString::operator+=(result, " , ");
      bdHandleAssert((unsigned int)v4 < arr->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantProductAchievementTrigger,2>::operator []", 0x54u, "i is out of range", v7, v8);
      makeFormattedString(&resulta, "{ productID:%d }", *((unsigned int *)&arr->m_elements[v4].__vftable + 4));
      v5 |= 6u;
      LODWORD(v7) = v5;
      bdString::operator+=(result, &resulta);
      bdString::~bdString(&resulta);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < arr->m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeArrayString<bdAchievementArchetypeParameter,4>
==============
*/
bdString *makeArrayString<bdAchievementArchetypeParameter,4>(bdString *result, const bdStructFixedSizeArray<bdAchievementArchetypeParameter,4> *arr)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  bdString resulta; 

  v8 = -2i64;
  v4 = 0i64;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v7) = 1;
  bdString::operator+=(result, "[");
  if ( arr->m_size )
  {
    do
    {
      if ( (_DWORD)v4 )
        bdString::operator+=(result, " , ");
      bdHandleAssert((unsigned int)v4 < arr->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementArchetypeParameter,4>::operator []", 0x54u, "i is out of range", v7, v8);
      bdAchievementArchetypeParameter::toString(&arr->m_elements[v4], &resulta);
      v5 |= 2u;
      LODWORD(v7) = v5;
      bdString::operator+=(result, &resulta);
      bdString::~bdString(&resulta);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < arr->m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeArrayString<bdAchievementProgressTarget,4>
==============
*/
bdString *makeArrayString<bdAchievementProgressTarget,4>(bdString *result, const bdStructFixedSizeArray<bdAchievementProgressTarget,4> *arr)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  bdString resulta; 

  v8 = -2i64;
  v4 = 0i64;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v7) = 1;
  bdString::operator+=(result, "[");
  if ( arr->m_size )
  {
    do
    {
      if ( (_DWORD)v4 )
        bdString::operator+=(result, " , ");
      bdHandleAssert((unsigned int)v4 < arr->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementProgressTarget,4>::operator []", 0x54u, "i is out of range", v7, v8);
      bdAchievementProgressTarget::toString(&arr->m_elements[v4], &resulta);
      v5 |= 2u;
      LODWORD(v7) = v5;
      bdString::operator+=(result, &resulta);
      bdString::~bdString(&resulta);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < arr->m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeArrayString<unsigned __int64,4>
==============
*/
bdString *makeArrayString<unsigned __int64,4>(bdString *result, const bdStructFixedSizeArray<unsigned __int64,4> *arr)
{
  __int64 v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  bdString resulta; 

  v8 = -2i64;
  v4 = 0i64;
  bdString::bdString(result);
  v5 = 1;
  LODWORD(v7) = 1;
  bdString::operator+=(result, "[");
  if ( arr->m_size )
  {
    do
    {
      if ( (_DWORD)v4 )
        bdString::operator+=(result, " , ");
      bdHandleAssert((unsigned int)v4 < arr->m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<unsigned __int64,4>::operator []", 0x54u, "i is out of range", v7, v8);
      makeFormattedString(&resulta, "%I64u", arr->m_elements[v4]);
      v5 |= 2u;
      LODWORD(v7) = v5;
      bdString::operator+=(result, &resulta);
      bdString::~bdString(&resulta);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < arr->m_size );
  }
  bdString::operator+=(result, "]");
  return result;
}

/*
==============
makeOptionalObjectString<bdAchievementSchedule>
==============
*/
bdString *makeOptionalObjectString<bdAchievementSchedule>(bdString *result, const bdStructOptionalObject<bdAchievementSchedule> *object)
{
  bdString *p_resulta; 
  char v5; 
  char v6; 
  int v8; 
  bdString resulta; 
  bdString v10; 

  resulta.m_string = (char *)result;
  v8 = 0;
  if ( object->m_hasValue )
  {
    bdHandleAssert(object->m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementSchedule>::getValue", 0x3Cu, "Has no value", v8, -2i64);
    bdAchievementSchedule::toString(&object->m_value, &resulta);
    p_resulta = &resulta;
    v5 = 9;
  }
  else
  {
    bdString::bdString(&v10, "none");
    v5 = 2;
  }
  bdString::bdString(result, p_resulta);
  v6 = v5 | 4;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    bdString::~bdString(&v10);
  }
  if ( (v6 & 1) != 0 )
    bdString::~bdString(&resulta);
  return result;
}

