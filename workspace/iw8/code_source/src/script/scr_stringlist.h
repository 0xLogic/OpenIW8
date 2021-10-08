/*
==============
GetRefString
==============
*/
RefString *GetRefString(unsigned int stringValue)
{
  unsigned int v2; 

  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
    __debugbreak();
  v2 = 16 * stringValue;
  if ( v2 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
    __debugbreak();
  return (RefString *)&scrMemTreePub.mt_buffer[v2];
}

/*
==============
SL_IsValidStringValue
==============
*/
bool SL_IsValidStringValue(scr_string_t stringValue)
{
  return stringValue && (unsigned int)(16 * stringValue) < 0x800000;
}

