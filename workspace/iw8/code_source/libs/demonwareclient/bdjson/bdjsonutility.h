/*
==============
bdJSONUtility::skipWhitespace
==============
*/

const char *__fastcall bdJSONUtility::skipWhitespace(const char *ptr)
{
  return ?skipWhitespace@bdJSONUtility@@SAPEBDPEBD@Z(ptr);
}

/*
==============
bdJSONUtility::skipWhitespace
==============
*/
const char *bdJSONUtility::skipWhitespace(const char *ptr)
{
  __int64 v1; 

  if ( ptr )
  {
    v1 = 0x100002600i64;
    while ( *ptr <= 0x20u && _bittest64(&v1, *ptr) )
      ++ptr;
  }
  return ptr;
}

