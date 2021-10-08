/*
==============
ntl::internal::string_append
==============
*/

void __fastcall ntl::internal::string_append(char *p_destString, const unsigned __int64 destBufferLength, const char *p_rhsString)
{
  ?string_append@internal@ntl@@YAXPEAD_KPEBD@Z(p_destString, destBufferLength, p_rhsString);
}

/*
==============
ntl::internal::string_tolower
==============
*/

void __fastcall ntl::internal::string_tolower(char *p_string, const unsigned __int64 bufferLength)
{
  ?string_tolower@internal@ntl@@YAXPEAD_K@Z(p_string, bufferLength);
}

/*
==============
ntl::internal::string_assign
==============
*/

void __fastcall ntl::internal::string_assign(char *p_destString, const unsigned __int64 destBufferLength, const char *p_rhsString)
{
  ?string_assign@internal@ntl@@YAXPEAD_KPEBD@Z(p_destString, destBufferLength, p_rhsString);
}

/*
==============
ntl::internal::string_assign
==============
*/
void ntl::internal::string_assign(char *p_destString, const unsigned __int64 destBufferLength, const char *p_rhsString)
{
  unsigned __int64 v6; 

  v6 = -1i64;
  do
    ++v6;
  while ( p_rhsString[v6] );
  if ( v6 >= destBufferLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 363, ASSERT_TYPE_ASSERT, "( strlen( p_rhsString ) < destBufferLength )", "String too big to fit in this buffer") )
    __debugbreak();
  strncpy(p_destString, p_rhsString, destBufferLength);
  p_destString[destBufferLength - 1] = 0;
}

/*
==============
ntl::internal::string_tolower
==============
*/
void ntl::internal::string_tolower(char *p_string, const unsigned __int64 bufferLength)
{
  char *v3; 
  __int64 v4; 

  v3 = p_string;
  if ( !p_string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 785, ASSERT_TYPE_ASSERT, "( p_string )", (const char *)&queryFormat, "p_string") )
    __debugbreak();
  if ( !bufferLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 786, ASSERT_TYPE_ASSERT, "( bufferLength )", (const char *)&queryFormat, "bufferLength") )
    __debugbreak();
  v4 = 0i64;
  if ( *v3 )
  {
    while ( v4 != bufferLength )
    {
      *v3 = tolower(*v3);
      ++v4;
      if ( !*++v3 )
        return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 794, ASSERT_TYPE_ASSERT, "( 0 )", "Bad string: %s (%zu)", v3, bufferLength) )
      __debugbreak();
  }
}

/*
==============
ntl::internal::string_append
==============
*/
void ntl::internal::string_append(char *p_destString, const unsigned __int64 destBufferLength, const char *p_rhsString)
{
  size_t v3; 
  __int64 v5; 

  v3 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( p_destString[v5] );
  do
    ++v3;
  while ( p_rhsString[v3] );
  if ( v3 > destBufferLength - v5 - 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 454, ASSERT_TYPE_ASSERT, "( 0 )", "rhs string is too long") )
      __debugbreak();
    v3 = destBufferLength - v5 - 1;
  }
  if ( v3 + v5 >= destBufferLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\char_string_utils.inl", 458, ASSERT_TYPE_ASSERT, "( length + rhsLength < destBufferLength )", (const char *)&queryFormat, "length + rhsLength < destBufferLength") )
    __debugbreak();
  strncat(&p_destString[v5], p_rhsString, v3);
  p_destString[v3 + v5] = 0;
}

